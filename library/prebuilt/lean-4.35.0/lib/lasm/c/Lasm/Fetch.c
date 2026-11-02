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
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0(lean_object* v_x_866_){
_start:
{
lean_object* v_r_869_; 
if (lean_obj_tag(v_x_866_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_880_; 
v_a_872_ = lean_ctor_get(v_x_866_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v_x_866_);
if (v_isSharedCheck_880_ == 0)
{
v___x_874_ = v_x_866_;
v_isShared_875_ = v_isSharedCheck_880_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v_x_866_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_880_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_872_);
v___x_877_ = v_reuseFailAlloc_879_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
lean_object* v___x_878_; 
v___x_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_878_, 0, v___x_877_);
return v___x_878_;
}
}
}
else
{
lean_object* v_a_881_; lean_object* v_a_882_; 
v_a_881_ = lean_ctor_get(v_x_866_, 0);
lean_inc(v_a_881_);
lean_dec_ref_known(v_x_866_, 1);
v_a_882_ = lean_ctor_get(v_a_881_, 0);
lean_inc(v_a_882_);
lean_dec(v_a_881_);
v_r_869_ = v_a_882_;
goto v___jp_868_;
}
v___jp_868_:
{
lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_870_, 0, v_r_869_);
v___x_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
return v___x_871_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0___boxed(lean_object* v_x_883_, lean_object* v___y_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Lasm_Fetch_respond___lam__0(v_x_883_);
return v_res_885_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__1(void){
_start:
{
uint16_t v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_887_ = 500;
v___x_888_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__1___closed__0));
v___x_889_ = l_Lasm_Fetch_Response_text(v___x_888_, v___x_887_);
return v___x_889_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__2(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__1, &l_Lasm_Fetch_respond___lam__1___closed__1_once, _init_l_Lasm_Fetch_respond___lam__1___closed__1);
v___x_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
return v___x_891_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__3(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_892_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__2, &l_Lasm_Fetch_respond___lam__1___closed__2_once, _init_l_Lasm_Fetch_respond___lam__1___closed__2);
v___x_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_893_, 0, v___x_892_);
return v___x_893_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__4(void){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__3, &l_Lasm_Fetch_respond___lam__1___closed__3_once, _init_l_Lasm_Fetch_respond___lam__1___closed__3);
v___x_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1(lean_object* v_x_896_){
_start:
{
if (lean_obj_tag(v_x_896_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_906_; 
v_a_898_ = lean_ctor_get(v_x_896_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v_x_896_);
if (v_isSharedCheck_906_ == 0)
{
v___x_900_ = v_x_896_;
v_isShared_901_ = v_isSharedCheck_906_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v_x_896_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_906_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_898_);
v___x_903_ = v_reuseFailAlloc_905_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_object* v___x_904_; 
v___x_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
return v___x_904_;
}
}
}
else
{
lean_object* v___x_907_; 
lean_dec_ref_known(v_x_896_, 1);
v___x_907_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__4, &l_Lasm_Fetch_respond___lam__1___closed__4_once, _init_l_Lasm_Fetch_respond___lam__1___closed__4);
return v___x_907_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1___boxed(lean_object* v_x_908_, lean_object* v___y_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l_Lasm_Fetch_respond___lam__1(v_x_908_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2(lean_object* v_x_911_){
_start:
{
if (lean_obj_tag(v_x_911_) == 0)
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_921_; 
v_a_913_ = lean_ctor_get(v_x_911_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v_x_911_);
if (v_isSharedCheck_921_ == 0)
{
v___x_915_ = v_x_911_;
v_isShared_916_ = v_isSharedCheck_921_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v_x_911_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_921_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_920_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
lean_object* v___x_919_; 
v___x_919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_919_, 0, v___x_918_);
return v___x_919_;
}
}
}
else
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_931_; 
v_a_922_ = lean_ctor_get(v_x_911_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v_x_911_);
if (v_isSharedCheck_931_ == 0)
{
v___x_924_ = v_x_911_;
v_isShared_925_ = v_isSharedCheck_931_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v_x_911_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_931_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_922_);
v___x_927_ = v_reuseFailAlloc_930_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
v___x_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_929_, 0, v___x_928_);
return v___x_929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2___boxed(lean_object* v_x_932_, lean_object* v___y_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_Lasm_Fetch_respond___lam__2(v_x_932_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3(lean_object* v_method_938_, lean_object* v_req_939_, lean_object* v___f_940_, lean_object* v_x_941_){
_start:
{
if (lean_obj_tag(v_x_941_) == 0)
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_972_; 
v_a_943_ = lean_ctor_get(v_x_941_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v_x_941_);
if (v_isSharedCheck_972_ == 0)
{
v___x_945_ = v_x_941_;
v_isShared_946_ = v_isSharedCheck_972_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v_x_941_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_972_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; uint8_t v___x_958_; lean_object* v_val_960_; lean_object* v___x_963_; 
v___x_947_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__0));
v___x_948_ = lean_string_append(v___x_947_, v_method_938_);
v___x_949_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__1));
v___x_950_ = lean_string_append(v___x_948_, v___x_949_);
v___x_951_ = l_Lasm_Fetch_Request_path(v_req_939_);
v___x_952_ = lean_string_append(v___x_950_, v___x_951_);
lean_dec_ref(v___x_951_);
v___x_953_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_954_ = lean_string_append(v___x_952_, v___x_953_);
v___x_955_ = lean_io_error_to_string(v_a_943_);
v___x_956_ = lean_string_append(v___x_954_, v___x_955_);
lean_dec_ref(v___x_955_);
v___x_957_ = lean_unsigned_to_nat(0u);
v___x_958_ = 0;
v___x_963_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_956_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v_a_964_; lean_object* v___x_966_; 
v_a_964_ = lean_ctor_get(v___x_963_, 0);
lean_inc(v_a_964_);
lean_dec_ref_known(v___x_963_, 1);
if (v_isShared_946_ == 0)
{
lean_ctor_set_tag(v___x_945_, 1);
lean_ctor_set(v___x_945_, 0, v_a_964_);
v___x_966_ = v___x_945_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_964_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
v_val_960_ = v___x_966_;
goto v___jp_959_;
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; 
v_a_968_ = lean_ctor_get(v___x_963_, 0);
lean_inc(v_a_968_);
lean_dec_ref_known(v___x_963_, 1);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v_a_968_);
v___x_970_ = v___x_945_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_968_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
v_val_960_ = v___x_970_;
goto v___jp_959_;
}
}
v___jp_959_:
{
lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_961_, 0, v_val_960_);
v___x_962_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_957_, v___x_958_, v___x_961_, v___f_940_);
return v___x_962_;
}
}
}
else
{
lean_object* v___x_973_; 
lean_dec_ref(v___f_940_);
lean_dec_ref(v_req_939_);
v___x_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_973_, 0, v_x_941_);
return v___x_973_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3___boxed(lean_object* v_method_974_, lean_object* v_req_975_, lean_object* v___f_976_, lean_object* v_x_977_, lean_object* v___y_978_){
_start:
{
lean_object* v_res_979_; 
v_res_979_ = l_Lasm_Fetch_respond___lam__3(v_method_974_, v_req_975_, v___f_976_, v_x_977_);
lean_dec_ref(v_method_974_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond(lean_object* v_handler_985_, lean_object* v_req_986_){
_start:
{
lean_object* v_method_988_; lean_object* v_url_989_; lean_object* v_headers_990_; lean_object* v_body_991_; lean_object* v_read_992_; lean_object* v___f_993_; lean_object* v___f_994_; lean_object* v___f_995_; lean_object* v___f_996_; lean_object* v___y_998_; lean_object* v___x_1005_; uint8_t v___x_1006_; 
v_method_988_ = lean_ctor_get(v_req_986_, 0);
v_url_989_ = lean_ctor_get(v_req_986_, 1);
v_headers_990_ = lean_ctor_get(v_req_986_, 2);
v_body_991_ = lean_ctor_get(v_req_986_, 3);
v_read_992_ = lean_ctor_get(v_req_986_, 4);
v___f_993_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__0));
v___f_994_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__1));
v___f_995_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__2));
lean_inc_ref(v_req_986_);
lean_inc_ref(v_method_988_);
v___f_996_ = lean_alloc_closure((void*)(l_Lasm_Fetch_respond___lam__3___boxed), 5, 3);
lean_closure_set(v___f_996_, 0, v_method_988_);
lean_closure_set(v___f_996_, 1, v_req_986_);
lean_closure_set(v___f_996_, 2, v___f_994_);
v___x_1005_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1006_ = lean_string_dec_eq(v_method_988_, v___x_1005_);
if (v___x_1006_ == 0)
{
v___y_998_ = v_req_986_;
goto v___jp_997_;
}
else
{
lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1014_; 
lean_inc_ref(v_read_992_);
lean_inc_ref(v_body_991_);
lean_inc_ref(v_headers_990_);
lean_inc_ref(v_url_989_);
v_isSharedCheck_1014_ = !lean_is_exclusive(v_req_986_);
if (v_isSharedCheck_1014_ == 0)
{
lean_object* v_unused_1015_; lean_object* v_unused_1016_; lean_object* v_unused_1017_; lean_object* v_unused_1018_; lean_object* v_unused_1019_; 
v_unused_1015_ = lean_ctor_get(v_req_986_, 4);
lean_dec(v_unused_1015_);
v_unused_1016_ = lean_ctor_get(v_req_986_, 3);
lean_dec(v_unused_1016_);
v_unused_1017_ = lean_ctor_get(v_req_986_, 2);
lean_dec(v_unused_1017_);
v_unused_1018_ = lean_ctor_get(v_req_986_, 1);
lean_dec(v_unused_1018_);
v_unused_1019_ = lean_ctor_get(v_req_986_, 0);
lean_dec(v_unused_1019_);
v___x_1008_ = v_req_986_;
v_isShared_1009_ = v_isSharedCheck_1014_;
goto v_resetjp_1007_;
}
else
{
lean_dec(v_req_986_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1014_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1010_; lean_object* v___x_1012_; 
v___x_1010_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 0, v___x_1010_);
v___x_1012_ = v___x_1008_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v___x_1010_);
lean_ctor_set(v_reuseFailAlloc_1013_, 1, v_url_989_);
lean_ctor_set(v_reuseFailAlloc_1013_, 2, v_headers_990_);
lean_ctor_set(v_reuseFailAlloc_1013_, 3, v_body_991_);
lean_ctor_set(v_reuseFailAlloc_1013_, 4, v_read_992_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
v___y_998_ = v___x_1012_;
goto v___jp_997_;
}
}
}
v___jp_997_:
{
lean_object* v___x_999_; uint8_t v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_999_ = lean_unsigned_to_nat(0u);
v___x_1000_ = 0;
v___x_1001_ = lean_apply_2(v_handler_985_, v___y_998_, lean_box(0));
v___x_1002_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_999_, v___x_1000_, v___x_1001_, v___f_995_);
v___x_1003_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_999_, v___x_1000_, v___x_1002_, v___f_996_);
v___x_1004_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_999_, v___x_1000_, v___x_1003_, v___f_993_);
return v___x_1004_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___boxed(lean_object* v_handler_1020_, lean_object* v_req_1021_, lean_object* v_a_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l_Lasm_Fetch_respond(v_handler_1020_, v_req_1021_);
return v_res_1023_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_bodyless(lean_object* v_method_1024_, uint16_t v_status_1025_){
_start:
{
lean_object* v___x_1026_; uint8_t v___x_1027_; 
v___x_1026_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1027_ = lean_string_dec_eq(v_method_1024_, v___x_1026_);
if (v___x_1027_ == 0)
{
uint16_t v___x_1028_; uint8_t v___x_1029_; 
v___x_1028_ = 101;
v___x_1029_ = lean_uint16_dec_eq(v_status_1025_, v___x_1028_);
if (v___x_1029_ == 0)
{
uint16_t v___x_1030_; uint8_t v___x_1031_; 
v___x_1030_ = 204;
v___x_1031_ = lean_uint16_dec_eq(v_status_1025_, v___x_1030_);
if (v___x_1031_ == 0)
{
uint16_t v___x_1032_; uint8_t v___x_1033_; 
v___x_1032_ = 205;
v___x_1033_ = lean_uint16_dec_eq(v_status_1025_, v___x_1032_);
if (v___x_1033_ == 0)
{
uint16_t v___x_1034_; uint8_t v___x_1035_; 
v___x_1034_ = 304;
v___x_1035_ = lean_uint16_dec_eq(v_status_1025_, v___x_1034_);
return v___x_1035_;
}
else
{
return v___x_1033_;
}
}
else
{
return v___x_1031_;
}
}
else
{
return v___x_1029_;
}
}
else
{
return v___x_1027_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_bodyless___boxed(lean_object* v_method_1036_, lean_object* v_status_1037_){
_start:
{
uint16_t v_status_boxed_1038_; uint8_t v_res_1039_; lean_object* v_r_1040_; 
v_status_boxed_1038_ = lean_unbox(v_status_1037_);
v_res_1039_ = l_Lasm_Fetch_bodyless(v_method_1036_, v_status_boxed_1038_);
lean_dec_ref(v_method_1036_);
v_r_1040_ = lean_box(v_res_1039_);
return v_r_1040_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_platformCode___boxed(lean_object* v_a_00___x40___internal___hyg_1042_){
_start:
{
uint32_t v_res_1043_; lean_object* v_r_1044_; 
v_res_1043_ = lasm_fetch_platform(v_a_00___x40___internal___hyg_1042_);
v_r_1044_ = lean_box_uint32(v_res_1043_);
return v_r_1044_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequest___boxed(lean_object* v_a_00___x40___internal___hyg_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = lasm_fetch_take_request();
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_sendResponse___boxed(lean_object* v_status_1052_, lean_object* v_headers_1053_, lean_object* v_body_1054_, lean_object* v_a_00___x40___internal___hyg_1055_){
_start:
{
uint16_t v_status_boxed_1056_; lean_object* v_res_1057_; 
v_status_boxed_1056_ = lean_unbox(v_status_1052_);
v_res_1057_ = lasm_fetch_send_response(v_status_boxed_1056_, v_headers_1053_, v_body_1054_);
lean_dec_ref(v_body_1054_);
lean_dec_ref(v_headers_1053_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequestHead___boxed(lean_object* v_a_00___x40___internal___hyg_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = lasm_fetch_take_request_head();
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_readChunk___boxed(lean_object* v_max_1063_, lean_object* v_a_00___x40___internal___hyg_1064_){
_start:
{
uint32_t v_max_boxed_1065_; lean_object* v_res_1066_; 
v_max_boxed_1065_ = lean_unbox_uint32(v_max_1063_);
lean_dec(v_max_1063_);
v_res_1066_ = lasm_fetch_read(v_max_boxed_1065_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startResponse___boxed(lean_object* v_status_1070_, lean_object* v_headers_1071_, lean_object* v_a_00___x40___internal___hyg_1072_){
_start:
{
uint16_t v_status_boxed_1073_; lean_object* v_res_1074_; 
v_status_boxed_1073_ = lean_unbox(v_status_1070_);
v_res_1074_ = lasm_fetch_start_response(v_status_boxed_1073_, v_headers_1071_);
lean_dec_ref(v_headers_1071_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_writeChunk___boxed(lean_object* v_chunk_1077_, lean_object* v_a_00___x40___internal___hyg_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = lasm_fetch_write(v_chunk_1077_);
lean_dec_ref(v_chunk_1077_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_finishResponse___boxed(lean_object* v_ok_1082_, lean_object* v_a_00___x40___internal___hyg_1083_){
_start:
{
uint8_t v_ok_boxed_1084_; lean_object* v_res_1085_; 
v_ok_boxed_1084_ = lean_unbox(v_ok_1082_);
v_res_1085_ = lasm_fetch_finish(v_ok_boxed_1084_);
return v_res_1085_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(lean_object* v_x_1086_){
_start:
{
uint8_t v___x_1087_; 
v___x_1087_ = 0;
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0___boxed(lean_object* v_x_1088_){
_start:
{
uint8_t v_res_1089_; lean_object* v_r_1090_; 
v_res_1089_ = l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(v_x_1088_);
lean_dec_ref(v_x_1088_);
v_r_1090_ = lean_box(v_res_1089_);
return v_r_1090_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(lean_object* v_x_1100_){
_start:
{
lean_object* v_b_1103_; 
if (lean_obj_tag(v_x_1100_) == 0)
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1117_; 
v_a_1109_ = lean_ctor_get(v_x_1100_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v_x_1100_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1111_ = v_x_1100_;
v_isShared_1112_ = v_isSharedCheck_1117_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v_x_1100_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1117_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1114_; 
if (v_isShared_1112_ == 0)
{
v___x_1114_ = v___x_1111_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1109_);
v___x_1114_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
lean_object* v___x_1115_; 
v___x_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1114_);
return v___x_1115_;
}
}
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v_a_1118_ = lean_ctor_get(v_x_1100_, 0);
lean_inc(v_a_1118_);
lean_dec_ref_known(v_x_1100_, 1);
v___x_1119_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__2));
v___x_1120_ = l_Lasm_JS_Data_field(v_a_1118_, v___x_1119_);
if (lean_obj_tag(v___x_1120_) == 2)
{
uint8_t v_b_1121_; 
v_b_1121_ = lean_ctor_get_uint8(v___x_1120_, 0);
lean_dec_ref_known(v___x_1120_, 0);
if (v_b_1121_ == 1)
{
lean_object* v___x_1122_; 
lean_dec(v_a_1118_);
v___x_1122_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_1122_;
}
else
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_1124_ = l_Lasm_JS_Data_field(v_a_1118_, v___x_1123_);
lean_dec(v_a_1118_);
if (lean_obj_tag(v___x_1124_) == 6)
{
lean_object* v_b_1125_; 
v_b_1125_ = lean_ctor_get(v___x_1124_, 0);
lean_inc_ref(v_b_1125_);
lean_dec_ref_known(v___x_1124_, 1);
v_b_1103_ = v_b_1125_;
goto v___jp_1102_;
}
else
{
lean_dec(v___x_1124_);
goto v___jp_1107_;
}
}
}
else
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
lean_dec(v___x_1120_);
v___x_1126_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_1127_ = l_Lasm_JS_Data_field(v_a_1118_, v___x_1126_);
lean_dec(v_a_1118_);
if (lean_obj_tag(v___x_1127_) == 6)
{
lean_object* v_b_1128_; 
v_b_1128_ = lean_ctor_get(v___x_1127_, 0);
lean_inc_ref(v_b_1128_);
lean_dec_ref_known(v___x_1127_, 1);
v_b_1103_ = v_b_1128_;
goto v___jp_1102_;
}
else
{
lean_dec(v___x_1127_);
goto v___jp_1107_;
}
}
}
v___jp_1102_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1104_, 0, v_b_1103_);
v___x_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1104_);
v___x_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
return v___x_1106_;
}
v___jp_1107_:
{
lean_object* v___x_1108_; 
v___x_1108_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_1108_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___boxed(lean_object* v_x_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(v_x_1129_);
return v_res_1131_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_1132_; uint64_t v___x_1133_; 
v___x_1132_ = 0;
v___x_1133_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(uint8_t v_await_1134_, uint64_t v_extra_1135_){
_start:
{
uint64_t v___x_1136_; uint64_t v___y_1138_; 
v___x_1136_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_1134_ == 0)
{
uint64_t v___x_1141_; 
v___x_1141_ = 0ULL;
v___y_1138_ = v___x_1141_;
goto v___jp_1137_;
}
else
{
uint64_t v___x_1142_; 
v___x_1142_ = 2ULL;
v___y_1138_ = v___x_1142_;
goto v___jp_1137_;
}
v___jp_1137_:
{
uint64_t v___x_1139_; uint64_t v___x_1140_; 
v___x_1139_ = lean_uint64_lor(v___x_1136_, v___y_1138_);
v___x_1140_ = lean_uint64_lor(v___x_1139_, v_extra_1135_);
return v___x_1140_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___boxed(lean_object* v_await_1143_, lean_object* v_extra_1144_){
_start:
{
uint8_t v_await_boxed_1145_; uint64_t v_extra_boxed_1146_; uint64_t v_res_1147_; lean_object* v_r_1148_; 
v_await_boxed_1145_ = lean_unbox(v_await_1143_);
v_extra_boxed_1146_ = lean_unbox_uint64(v_extra_1144_);
lean_dec_ref(v_extra_1144_);
v_res_1147_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v_await_boxed_1145_, v_extra_boxed_1146_);
v_r_1148_ = lean_box_uint64(v_res_1147_);
return v_r_1148_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(lean_object* v_x_1149_){
_start:
{
if (lean_obj_tag(v_x_1149_) == 0)
{
lean_object* v___x_1151_; 
v___x_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1151_, 0, v_x_1149_);
return v___x_1151_;
}
else
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1160_; 
v_a_1152_ = lean_ctor_get(v_x_1149_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v_x_1149_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1154_ = v_x_1149_;
v_isShared_1155_ = v_isSharedCheck_1160_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v_x_1149_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1160_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1152_);
v___x_1157_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_object* v___x_1158_; 
v___x_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
return v___x_1158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed(lean_object* v_x_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(v_x_1161_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(lean_object* v_a_1164_, lean_object* v_x_1165_){
_start:
{
if (lean_obj_tag(v_x_1165_) == 0)
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1175_; 
v_a_1167_ = lean_ctor_get(v_x_1165_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v_x_1165_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1169_ = v_x_1165_;
v_isShared_1170_ = v_isSharedCheck_1175_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v_x_1165_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1175_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
lean_object* v___x_1173_; 
v___x_1173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1172_);
return v___x_1173_;
}
}
}
else
{
lean_object* v___x_1176_; 
lean_dec_ref_known(v_x_1165_, 1);
v___x_1176_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1164_);
return v___x_1176_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed(lean_object* v_a_1177_, lean_object* v_x_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(v_a_1177_, v_x_1178_);
lean_dec(v_a_1177_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(lean_object* v_payload_1181_, lean_object* v_failurePrefix_1182_, lean_object* v___f_1183_, lean_object* v___f_1184_, uint32_t v_op_1185_, uint64_t v_flags_1186_, lean_object* v___f_1187_, lean_object* v_x_1188_){
_start:
{
if (lean_obj_tag(v_x_1188_) == 0)
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1198_; 
lean_dec_ref(v___f_1187_);
lean_dec_ref(v___f_1184_);
lean_dec_ref(v___f_1183_);
v_a_1190_ = lean_ctor_get(v_x_1188_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v_x_1188_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1192_ = v_x_1188_;
v_isShared_1193_ = v_isSharedCheck_1198_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v_x_1188_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1198_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1195_; 
if (v_isShared_1193_ == 0)
{
v___x_1195_ = v___x_1192_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_a_1190_);
v___x_1195_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
lean_object* v___x_1196_; 
v___x_1196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1195_);
return v___x_1196_;
}
}
}
else
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1240_; 
v_a_1199_ = lean_ctor_get(v_x_1188_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v_x_1188_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1201_ = v_x_1188_;
v_isShared_1202_ = v_isSharedCheck_1240_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v_x_1188_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1240_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
uint32_t v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; uint8_t v___x_1207_; 
v___x_1203_ = 0;
v___x_1204_ = l_Lasm_JS_Wire_encode(v_payload_1181_);
v___x_1205_ = lean_string_utf8_byte_size(v_failurePrefix_1182_);
v___x_1206_ = lean_unsigned_to_nat(0u);
v___x_1207_ = lean_nat_dec_eq(v___x_1205_, v___x_1206_);
if (v___x_1207_ == 0)
{
lean_object* v___f_1208_; lean_object* v_val_1210_; lean_object* v___x_1215_; 
lean_dec_ref(v___f_1187_);
lean_inc(v_a_1199_);
v___f_1208_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1208_, 0, v_a_1199_);
v___x_1215_ = lasm_js_call_into(v_a_1199_, v_op_1185_, v___x_1203_, v_flags_1186_, v___x_1204_, v_payload_1181_);
lean_dec_ref(v___x_1204_);
lean_dec(v_a_1199_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_a_1216_; lean_object* v___x_1218_; 
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1216_);
lean_dec_ref_known(v___x_1215_, 1);
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 0, v_a_1216_);
v___x_1218_ = v___x_1201_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1216_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
v_val_1210_ = v___x_1218_;
goto v___jp_1209_;
}
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1222_; 
v_a_1220_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1220_);
lean_dec_ref_known(v___x_1215_, 1);
if (v_isShared_1202_ == 0)
{
lean_ctor_set_tag(v___x_1201_, 0);
lean_ctor_set(v___x_1201_, 0, v_a_1220_);
v___x_1222_ = v___x_1201_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1220_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
v_val_1210_ = v___x_1222_;
goto v___jp_1209_;
}
}
v___jp_1209_:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1211_, 0, v_val_1210_);
v___x_1212_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1206_, v___x_1207_, v___x_1211_, v___f_1208_);
v___x_1213_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1206_, v___x_1207_, v___x_1212_, v___f_1183_);
v___x_1214_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1206_, v___x_1207_, v___x_1213_, v___f_1184_);
return v___x_1214_;
}
}
else
{
lean_object* v___f_1224_; uint8_t v___x_1225_; lean_object* v_val_1227_; lean_object* v___x_1231_; 
lean_dec_ref(v___f_1184_);
lean_dec_ref(v___f_1183_);
lean_inc(v_a_1199_);
v___f_1224_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1224_, 0, v_a_1199_);
v___x_1225_ = 0;
v___x_1231_ = lasm_js_call_into(v_a_1199_, v_op_1185_, v___x_1203_, v_flags_1186_, v___x_1204_, v_payload_1181_);
lean_dec_ref(v___x_1204_);
lean_dec(v_a_1199_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_a_1232_; lean_object* v___x_1234_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_a_1232_);
lean_dec_ref_known(v___x_1231_, 1);
if (v_isShared_1202_ == 0)
{
lean_ctor_set(v___x_1201_, 0, v_a_1232_);
v___x_1234_ = v___x_1201_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1232_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
v_val_1227_ = v___x_1234_;
goto v___jp_1226_;
}
}
else
{
lean_object* v_a_1236_; lean_object* v___x_1238_; 
v_a_1236_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_a_1236_);
lean_dec_ref_known(v___x_1231_, 1);
if (v_isShared_1202_ == 0)
{
lean_ctor_set_tag(v___x_1201_, 0);
lean_ctor_set(v___x_1201_, 0, v_a_1236_);
v___x_1238_ = v___x_1201_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1236_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
v_val_1227_ = v___x_1238_;
goto v___jp_1226_;
}
}
v___jp_1226_:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1228_, 0, v_val_1227_);
v___x_1229_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1206_, v___x_1225_, v___x_1228_, v___f_1224_);
v___x_1230_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1206_, v___x_1225_, v___x_1229_, v___f_1187_);
return v___x_1230_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed(lean_object* v_payload_1241_, lean_object* v_failurePrefix_1242_, lean_object* v___f_1243_, lean_object* v___f_1244_, lean_object* v_op_1245_, lean_object* v_flags_1246_, lean_object* v___f_1247_, lean_object* v_x_1248_, lean_object* v___y_1249_){
_start:
{
uint32_t v_op_boxed_1250_; uint64_t v_flags_boxed_1251_; lean_object* v_res_1252_; 
v_op_boxed_1250_ = lean_unbox_uint32(v_op_1245_);
lean_dec(v_op_1245_);
v_flags_boxed_1251_ = lean_unbox_uint64(v_flags_1246_);
lean_dec_ref(v_flags_1246_);
v_res_1252_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(v_payload_1241_, v_failurePrefix_1242_, v___f_1243_, v___f_1244_, v_op_boxed_1250_, v_flags_boxed_1251_, v___f_1247_, v_x_1248_);
lean_dec_ref(v_failurePrefix_1242_);
lean_dec(v_payload_1241_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(lean_object* v___f_1253_, lean_object* v_bytes_1254_){
_start:
{
lean_object* v___x_1256_; uint8_t v___x_1257_; lean_object* v_val_1259_; lean_object* v___x_1262_; 
v___x_1256_ = lean_unsigned_to_nat(0u);
v___x_1257_ = 0;
v___x_1262_ = l_Lasm_JS_Wire_decode(v_bytes_1254_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v_a_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1270_; 
v_a_1263_ = lean_ctor_get(v___x_1262_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1262_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1265_ = v___x_1262_;
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_a_1263_);
lean_dec(v___x_1262_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
lean_ctor_set_tag(v___x_1265_, 1);
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_a_1263_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
v_val_1259_ = v___x_1268_;
goto v___jp_1258_;
}
}
}
else
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1278_; 
v_a_1271_ = lean_ctor_get(v___x_1262_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1262_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1273_ = v___x_1262_;
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v___x_1262_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
lean_ctor_set_tag(v___x_1273_, 0);
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_a_1271_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
v_val_1259_ = v___x_1276_;
goto v___jp_1258_;
}
}
}
v___jp_1258_:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1260_, 0, v_val_1259_);
v___x_1261_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1256_, v___x_1257_, v___x_1260_, v___f_1253_);
return v___x_1261_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed(lean_object* v___f_1279_, lean_object* v_bytes_1280_, lean_object* v___y_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(v___f_1279_, v_bytes_1280_);
lean_dec_ref(v_bytes_1280_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(lean_object* v_failurePrefix_1283_, lean_object* v_x_1284_){
_start:
{
if (lean_obj_tag(v_x_1284_) == 0)
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1297_; 
v_a_1286_ = lean_ctor_get(v_x_1284_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v_x_1284_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1288_ = v_x_1284_;
v_isShared_1289_ = v_isSharedCheck_1297_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v_x_1284_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1297_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1294_; 
v___x_1290_ = lean_io_error_to_string(v_a_1286_);
v___x_1291_ = lean_string_append(v_failurePrefix_1283_, v___x_1290_);
lean_dec_ref(v___x_1290_);
v___x_1292_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v___x_1292_);
v___x_1294_ = v___x_1288_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1292_);
v___x_1294_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
lean_object* v___x_1295_; 
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
return v___x_1295_;
}
}
}
else
{
lean_object* v___x_1298_; 
lean_dec_ref(v_failurePrefix_1283_);
v___x_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1298_, 0, v_x_1284_);
return v___x_1298_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v_failurePrefix_1299_, lean_object* v_x_1300_, lean_object* v___y_1301_){
_start:
{
lean_object* v_res_1302_; 
v_res_1302_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(v_failurePrefix_1299_, v_x_1300_);
return v_res_1302_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(lean_object* v___f_1303_, lean_object* v_x_1304_){
_start:
{
if (lean_obj_tag(v_x_1304_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1314_; 
lean_dec_ref(v___f_1303_);
v_a_1306_ = lean_ctor_get(v_x_1304_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_x_1304_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1308_ = v_x_1304_;
v_isShared_1309_ = v_isSharedCheck_1314_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v_x_1304_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1314_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1311_; 
if (v_isShared_1309_ == 0)
{
v___x_1311_ = v___x_1308_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_a_1306_);
v___x_1311_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
lean_object* v___x_1312_; 
v___x_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
return v___x_1312_;
}
}
}
else
{
lean_object* v_a_1315_; lean_object* v___x_1316_; 
v_a_1315_ = lean_ctor_get(v_x_1304_, 0);
lean_inc(v_a_1315_);
lean_dec_ref_known(v_x_1304_, 1);
v___x_1316_ = lean_apply_2(v___f_1303_, v_a_1315_, lean_box(0));
return v___x_1316_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed(lean_object* v___f_1317_, lean_object* v_x_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(v___f_1317_, v_x_1318_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(lean_object* v___f_1321_, lean_object* v_x_1322_){
_start:
{
if (lean_obj_tag(v_x_1322_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1332_; 
lean_dec_ref(v___f_1321_);
v_a_1324_ = lean_ctor_get(v_x_1322_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v_x_1322_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1326_ = v_x_1322_;
v_isShared_1327_ = v_isSharedCheck_1332_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v_x_1322_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1332_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1329_; 
if (v_isShared_1327_ == 0)
{
v___x_1329_ = v___x_1326_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1324_);
v___x_1329_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
lean_object* v___x_1330_; 
v___x_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1329_);
return v___x_1330_;
}
}
}
else
{
lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1344_; 
v_isSharedCheck_1344_ = !lean_is_exclusive(v_x_1322_);
if (v_isSharedCheck_1344_ == 0)
{
lean_object* v_unused_1345_; 
v_unused_1345_ = lean_ctor_get(v_x_1322_, 0);
lean_dec(v_unused_1345_);
v___x_1334_ = v_x_1322_;
v_isShared_1335_ = v_isSharedCheck_1344_;
goto v_resetjp_1333_;
}
else
{
lean_dec(v_x_1322_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1344_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1336_; uint8_t v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1340_; 
v___x_1336_ = lean_unsigned_to_nat(0u);
v___x_1337_ = 0;
v___x_1338_ = lean_io_promise_new();
if (v_isShared_1335_ == 0)
{
lean_ctor_set(v___x_1334_, 0, v___x_1338_);
v___x_1340_ = v___x_1334_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v___x_1338_);
v___x_1340_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
v___x_1342_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1336_, v___x_1337_, v___x_1341_, v___f_1321_);
return v___x_1342_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed(lean_object* v___f_1346_, lean_object* v_x_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(v___f_1346_, v_x_1347_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(uint32_t v_op_1355_, uint64_t v_flags_1356_, lean_object* v_payload_1357_, lean_object* v_failurePrefix_1358_){
_start:
{
lean_object* v___f_1360_; lean_object* v___f_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___f_1364_; lean_object* v___f_1365_; lean_object* v___x_1366_; uint8_t v___x_1367_; lean_object* v_val_1369_; lean_object* v___x_1372_; 
lean_inc_ref(v_failurePrefix_1358_);
v___f_1360_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1360_, 0, v_failurePrefix_1358_);
v___f_1361_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2));
v___x_1362_ = lean_box_uint32(v_op_1355_);
v___x_1363_ = lean_box_uint64(v_flags_1356_);
v___f_1364_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1364_, 0, v_payload_1357_);
lean_closure_set(v___f_1364_, 1, v_failurePrefix_1358_);
lean_closure_set(v___f_1364_, 2, v___f_1360_);
lean_closure_set(v___f_1364_, 3, v___f_1361_);
lean_closure_set(v___f_1364_, 4, v___x_1362_);
lean_closure_set(v___f_1364_, 5, v___x_1363_);
lean_closure_set(v___f_1364_, 6, v___f_1361_);
v___f_1365_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1365_, 0, v___f_1364_);
v___x_1366_ = lean_unsigned_to_nat(0u);
v___x_1367_ = 0;
v___x_1372_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1375_ = v___x_1372_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
lean_ctor_set_tag(v___x_1375_, 1);
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_a_1373_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
v_val_1369_ = v___x_1378_;
goto v___jp_1368_;
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
v_a_1381_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1372_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1372_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
lean_ctor_set_tag(v___x_1383_, 0);
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
v_val_1369_ = v___x_1386_;
goto v___jp_1368_;
}
}
}
v___jp_1368_:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1370_, 0, v_val_1369_);
v___x_1371_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1366_, v___x_1367_, v___x_1370_, v___f_1365_);
return v___x_1371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___boxed(lean_object* v_op_1389_, lean_object* v_flags_1390_, lean_object* v_payload_1391_, lean_object* v_failurePrefix_1392_, lean_object* v_a_1393_){
_start:
{
uint32_t v_op_boxed_1394_; uint64_t v_flags_boxed_1395_; lean_object* v_res_1396_; 
v_op_boxed_1394_ = lean_unbox_uint32(v_op_1389_);
lean_dec(v_op_1389_);
v_flags_boxed_1395_ = lean_unbox_uint64(v_flags_1390_);
lean_dec_ref(v_flags_1390_);
v_res_1396_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_boxed_1394_, v_flags_boxed_1395_, v_payload_1391_, v_failurePrefix_1392_);
return v_res_1396_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1397_; uint8_t v___x_1398_; uint64_t v___x_1399_; 
v___x_1397_ = 8ULL;
v___x_1398_ = 0;
v___x_1399_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v___x_1398_, v___x_1397_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object* v_o_1400_, lean_object* v_name_1401_, lean_object* v_args_1402_){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; uint32_t v___x_1407_; uint64_t v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1404_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1405_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1405_, 0, v_o_1400_);
lean_ctor_set(v___x_1405_, 1, v___x_1404_);
v___x_1406_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1406_, 0, v_name_1401_);
v___x_1407_ = 205;
v___x_1408_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_1409_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1409_, 0, v_args_1402_);
v___x_1410_ = lean_unsigned_to_nat(3u);
v___x_1411_ = lean_mk_empty_array_with_capacity(v___x_1410_);
v___x_1412_ = lean_array_push(v___x_1411_, v___x_1405_);
v___x_1413_ = lean_array_push(v___x_1412_, v___x_1406_);
v___x_1414_ = lean_array_push(v___x_1413_, v___x_1409_);
v___x_1415_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1414_);
v___x_1416_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v___x_1407_, v___x_1408_, v___x_1415_, v___x_1404_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___boxed(lean_object* v_o_1417_, lean_object* v_name_1418_, lean_object* v_args_1419_, lean_object* v___y_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_o_1417_, v_name_1418_, v_args_1419_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(lean_object* v_a_1422_, lean_object* v___x_1423_, lean_object* v___x_1424_, lean_object* v___x_1425_, lean_object* v___f_1426_){
_start:
{
uint8_t v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1428_ = 0;
v___x_1429_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1422_, v___x_1423_, v___x_1424_);
v___x_1430_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1425_, v___x_1428_, v___x_1429_, v___f_1426_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed(lean_object* v_a_1431_, lean_object* v___x_1432_, lean_object* v___x_1433_, lean_object* v___x_1434_, lean_object* v___f_1435_, lean_object* v___y_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(v_a_1431_, v___x_1432_, v___x_1433_, v___x_1434_, v___f_1435_);
return v_res_1437_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1438_; uint64_t v___x_1439_; 
v___x_1438_ = 1;
v___x_1439_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t v_await_1440_, uint64_t v_extra_1441_){
_start:
{
uint64_t v___x_1442_; uint64_t v___y_1444_; 
v___x_1442_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
if (v_await_1440_ == 0)
{
uint64_t v___x_1447_; 
v___x_1447_ = 0ULL;
v___y_1444_ = v___x_1447_;
goto v___jp_1443_;
}
else
{
uint64_t v___x_1448_; 
v___x_1448_ = 2ULL;
v___y_1444_ = v___x_1448_;
goto v___jp_1443_;
}
v___jp_1443_:
{
uint64_t v___x_1445_; uint64_t v___x_1446_; 
v___x_1445_ = lean_uint64_lor(v___x_1442_, v___y_1444_);
v___x_1446_ = lean_uint64_lor(v___x_1445_, v_extra_1441_);
return v___x_1446_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___boxed(lean_object* v_await_1449_, lean_object* v_extra_1450_){
_start:
{
uint8_t v_await_boxed_1451_; uint64_t v_extra_boxed_1452_; uint64_t v_res_1453_; lean_object* v_r_1454_; 
v_await_boxed_1451_ = lean_unbox(v_await_1449_);
v_extra_boxed_1452_ = lean_unbox_uint64(v_extra_1450_);
lean_dec_ref(v_extra_1450_);
v_res_1453_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v_await_boxed_1451_, v_extra_boxed_1452_);
v_r_1454_ = lean_box_uint64(v_res_1453_);
return v_r_1454_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1455_; uint8_t v___x_1456_; uint64_t v___x_1457_; 
v___x_1455_ = 8ULL;
v___x_1456_ = 0;
v___x_1457_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1456_, v___x_1455_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(lean_object* v_o_1459_, lean_object* v_name_1460_, lean_object* v_args_1461_){
_start:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; uint64_t v___x_1466_; lean_object* v___x_1467_; 
v___x_1463_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1464_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1464_, 0, v_o_1459_);
lean_ctor_set(v___x_1464_, 1, v___x_1463_);
lean_inc_ref(v_name_1460_);
v___x_1465_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1465_, 0, v_name_1460_);
v___x_1466_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_1467_ = l_Lasm_JS_Value_invokeRaw(v___x_1464_, v___x_1465_, v_args_1461_, v___x_1466_);
if (lean_obj_tag(v___x_1467_) == 0)
{
lean_object* v_a_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; 
v_a_1468_ = lean_ctor_get(v___x_1467_, 0);
lean_inc(v_a_1468_);
lean_dec_ref_known(v___x_1467_, 1);
v___x_1469_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_1470_ = lean_string_append(v___x_1469_, v_name_1460_);
lean_dec_ref(v_name_1460_);
v___x_1471_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1470_, v_a_1468_);
lean_dec(v_a_1468_);
lean_dec_ref(v___x_1470_);
return v___x_1471_;
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
lean_dec_ref(v_name_1460_);
v_a_1472_ = lean_ctor_get(v___x_1467_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1467_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1467_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1467_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___boxed(lean_object* v_o_1480_, lean_object* v_name_1481_, lean_object* v_args_1482_, lean_object* v_a_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_o_1480_, v_name_1481_, v_args_1482_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(lean_object* v_stream_1490_){
_start:
{
lean_object* v___f_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___f_1492_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__0));
v___x_1493_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__1));
v___x_1494_ = lean_unsigned_to_nat(0u);
v___x_1495_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_1496_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_stream_1490_, v___x_1493_, v___x_1495_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1506_; 
v_a_1497_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1499_ = v___x_1496_;
v_isShared_1500_ = v_isSharedCheck_1506_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1496_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1506_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1501_; lean_object* v___f_1502_; lean_object* v___x_1504_; 
v___x_1501_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__3));
v___f_1502_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1502_, 0, v_a_1497_);
lean_closure_set(v___f_1502_, 1, v___x_1501_);
lean_closure_set(v___f_1502_, 2, v___x_1495_);
lean_closure_set(v___f_1502_, 3, v___x_1494_);
lean_closure_set(v___f_1502_, 4, v___f_1492_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 0, v___f_1502_);
v___x_1504_ = v___x_1499_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___f_1502_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1514_; 
v_a_1507_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1509_ = v___x_1496_;
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1496_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1507_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___boxed(lean_object* v_stream_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_stream_1515_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(lean_object* v_d_1518_){
_start:
{
lean_object* v___x_1520_; 
v___x_1520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1520_, 0, v_d_1518_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_d_1521_, lean_object* v_a_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(v_d_1521_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(lean_object* v_context_1524_, lean_object* v_d_1525_){
_start:
{
lean_object* v___x_1527_; 
v___x_1527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1527_, 0, v_d_1525_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___boxed(lean_object* v_context_1528_, lean_object* v_d_1529_, lean_object* v_a_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(v_context_1528_, v_d_1529_);
lean_dec_ref(v_context_1528_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(lean_object* v_context_1532_, uint32_t v_op_1533_, uint64_t v_flags_1534_, lean_object* v_payload_1535_, lean_object* v_failurePrefix_1536_){
_start:
{
lean_object* v___x_1538_; 
v___x_1538_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_1533_, v_flags_1534_, v_payload_1535_, v_failurePrefix_1536_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___boxed(lean_object* v_context_1539_, lean_object* v_op_1540_, lean_object* v_flags_1541_, lean_object* v_payload_1542_, lean_object* v_failurePrefix_1543_, lean_object* v_a_1544_){
_start:
{
uint32_t v_op_boxed_1545_; uint64_t v_flags_boxed_1546_; lean_object* v_res_1547_; 
v_op_boxed_1545_ = lean_unbox_uint32(v_op_1540_);
lean_dec(v_op_1540_);
v_flags_boxed_1546_ = lean_unbox_uint64(v_flags_1541_);
lean_dec_ref(v_flags_1541_);
v_res_1547_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(v_context_1539_, v_op_boxed_1545_, v_flags_boxed_1546_, v_payload_1542_, v_failurePrefix_1543_);
lean_dec_ref(v_context_1539_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(lean_object* v_x_1552_){
_start:
{
if (lean_obj_tag(v_x_1552_) == 0)
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1562_; 
v_a_1554_ = lean_ctor_get(v_x_1552_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v_x_1552_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1556_ = v_x_1552_;
v_isShared_1557_ = v_isSharedCheck_1562_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v_x_1552_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1562_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_a_1554_);
v___x_1559_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
return v___x_1560_;
}
}
}
else
{
lean_object* v___x_1563_; 
lean_dec_ref_known(v_x_1552_, 1);
v___x_1563_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
return v___x_1563_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___boxed(lean_object* v_x_1564_, lean_object* v___y_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(v_x_1564_);
return v_res_1566_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1567_; uint8_t v___x_1568_; uint64_t v___x_1569_; 
v___x_1567_ = 4ULL;
v___x_1568_ = 0;
v___x_1569_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1568_, v___x_1567_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(lean_object* v_c_1571_, lean_object* v_args_1572_){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; uint64_t v___x_1577_; lean_object* v___x_1578_; 
v___x_1574_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1575_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1575_, 0, v_c_1571_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
v___x_1576_ = lean_box(0);
v___x_1577_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0, &l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0_once, _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0);
v___x_1578_ = l_Lasm_JS_Value_invokeRaw(v___x_1575_, v___x_1576_, v_args_1572_, v___x_1577_);
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_object* v_a_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v_a_1579_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_a_1579_);
lean_dec_ref_known(v___x_1578_, 1);
v___x_1580_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_1581_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1580_, v_a_1579_);
lean_dec(v_a_1579_);
return v___x_1581_;
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
v_a_1582_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1578_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1578_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
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
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___boxed(lean_object* v_c_1590_, lean_object* v_args_1591_, lean_object* v_a_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_c_1590_, v_args_1591_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(lean_object* v___y_1594_, lean_object* v___x_1595_, lean_object* v_x_1596_){
_start:
{
lean_object* v_val_1599_; 
if (lean_obj_tag(v_x_1596_) == 0)
{
lean_object* v___x_1601_; 
lean_dec(v___x_1595_);
lean_dec(v___y_1594_);
v___x_1601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1601_, 0, v_x_1596_);
return v___x_1601_;
}
else
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1619_; 
v_a_1602_ = lean_ctor_get(v_x_1596_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v_x_1596_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1604_ = v_x_1596_;
v_isShared_1605_ = v_isSharedCheck_1619_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v_x_1596_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1619_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1606_ = lean_unsigned_to_nat(2u);
v___x_1607_ = lean_mk_empty_array_with_capacity(v___x_1606_);
v___x_1608_ = lean_array_push(v___x_1607_, v___y_1594_);
v___x_1609_ = lean_array_push(v___x_1608_, v___x_1595_);
v___x_1610_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1602_, v___x_1609_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v_a_1611_; lean_object* v___x_1613_; 
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
lean_inc(v_a_1611_);
lean_dec_ref_known(v___x_1610_, 1);
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 0, v_a_1611_);
v___x_1613_ = v___x_1604_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1611_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
v_val_1599_ = v___x_1613_;
goto v___jp_1598_;
}
}
else
{
lean_object* v_a_1615_; lean_object* v___x_1617_; 
v_a_1615_ = lean_ctor_get(v___x_1610_, 0);
lean_inc(v_a_1615_);
lean_dec_ref_known(v___x_1610_, 1);
if (v_isShared_1605_ == 0)
{
lean_ctor_set_tag(v___x_1604_, 0);
lean_ctor_set(v___x_1604_, 0, v_a_1615_);
v___x_1617_ = v___x_1604_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1615_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
v_val_1599_ = v___x_1617_;
goto v___jp_1598_;
}
}
}
}
v___jp_1598_:
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1600_, 0, v_val_1599_);
return v___x_1600_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed(lean_object* v___y_1620_, lean_object* v___x_1621_, lean_object* v_x_1622_, lean_object* v___y_1623_){
_start:
{
lean_object* v_res_1624_; 
v_res_1624_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(v___y_1620_, v___x_1621_, v_x_1622_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(lean_object* v_a_1625_, lean_object* v___x_1626_, lean_object* v_x_1627_){
_start:
{
lean_object* v_val_1630_; 
if (lean_obj_tag(v_x_1627_) == 0)
{
lean_object* v___x_1632_; 
lean_dec(v___x_1626_);
lean_dec(v_a_1625_);
v___x_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1632_, 0, v_x_1627_);
return v___x_1632_;
}
else
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1652_; 
v_a_1633_ = lean_ctor_get(v_x_1627_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v_x_1627_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1635_ = v_x_1627_;
v_isShared_1636_ = v_isSharedCheck_1652_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v_x_1627_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1652_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1637_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1638_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1638_, 0, v_a_1625_);
lean_ctor_set(v___x_1638_, 1, v___x_1637_);
v___x_1639_ = lean_unsigned_to_nat(2u);
v___x_1640_ = lean_mk_empty_array_with_capacity(v___x_1639_);
v___x_1641_ = lean_array_push(v___x_1640_, v___x_1638_);
v___x_1642_ = lean_array_push(v___x_1641_, v___x_1626_);
v___x_1643_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1633_, v___x_1642_);
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_object* v_a_1644_; lean_object* v___x_1646_; 
v_a_1644_ = lean_ctor_get(v___x_1643_, 0);
lean_inc(v_a_1644_);
lean_dec_ref_known(v___x_1643_, 1);
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 0, v_a_1644_);
v___x_1646_ = v___x_1635_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_a_1644_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
v_val_1630_ = v___x_1646_;
goto v___jp_1629_;
}
}
else
{
lean_object* v_a_1648_; lean_object* v___x_1650_; 
v_a_1648_ = lean_ctor_get(v___x_1643_, 0);
lean_inc(v_a_1648_);
lean_dec_ref_known(v___x_1643_, 1);
if (v_isShared_1636_ == 0)
{
lean_ctor_set_tag(v___x_1635_, 0);
lean_ctor_set(v___x_1635_, 0, v_a_1648_);
v___x_1650_ = v___x_1635_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_a_1648_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
v_val_1630_ = v___x_1650_;
goto v___jp_1629_;
}
}
}
}
v___jp_1629_:
{
lean_object* v___x_1631_; 
v___x_1631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1631_, 0, v_val_1630_);
return v___x_1631_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed(lean_object* v_a_1653_, lean_object* v___x_1654_, lean_object* v_x_1655_, lean_object* v___y_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(v_a_1653_, v___x_1654_, v_x_1655_);
return v_res_1657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object* v_o_1659_, lean_object* v_key_1660_){
_start:
{
uint32_t v___x_1662_; uint32_t v___x_1663_; uint64_t v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1662_ = 203;
v___x_1663_ = lasm_js_value_handle(v_o_1659_);
v___x_1664_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
lean_inc_ref(v_key_1660_);
v___x_1665_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1665_, 0, v_key_1660_);
v___x_1666_ = l_Lasm_JS_Wire_encode(v___x_1665_);
lean_dec_ref_known(v___x_1665_, 1);
v___x_1667_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1668_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1668_, 0, v_o_1659_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
v___x_1669_ = lasm_js_call(v___x_1662_, v___x_1663_, v___x_1664_, v___x_1666_, v___x_1668_);
lean_dec_ref_known(v___x_1668_, 2);
lean_dec_ref(v___x_1666_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
lean_inc(v_a_1670_);
lean_dec_ref_known(v___x_1669_, 1);
v___x_1671_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0));
v___x_1672_ = l_String_quote(v_key_1660_);
v___x_1673_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1672_);
v___x_1674_ = lean_unsigned_to_nat(120u);
v___x_1675_ = lean_unsigned_to_nat(0u);
v___x_1676_ = l_Std_Format_pretty(v___x_1673_, v___x_1674_, v___x_1675_, v___x_1675_);
v___x_1677_ = lean_string_append(v___x_1671_, v___x_1676_);
lean_dec_ref(v___x_1676_);
v___x_1678_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1677_, v_a_1670_);
lean_dec(v_a_1670_);
lean_dec_ref(v___x_1677_);
return v___x_1678_;
}
else
{
lean_object* v_a_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1686_; 
lean_dec_ref(v_key_1660_);
v_a_1679_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1681_ = v___x_1669_;
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_a_1679_);
lean_dec(v___x_1669_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1684_; 
if (v_isShared_1682_ == 0)
{
v___x_1684_ = v___x_1681_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_a_1679_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___boxed(lean_object* v_o_1687_, lean_object* v_key_1688_, lean_object* v_a_1689_){
_start:
{
lean_object* v_res_1690_; 
v_res_1690_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_o_1687_, v_key_1688_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(lean_object* v___x_1692_, uint8_t v___x_1693_, lean_object* v___f_1694_, lean_object* v_a_1695_, lean_object* v_x_1696_){
_start:
{
lean_object* v_val_1699_; 
if (lean_obj_tag(v_x_1696_) == 0)
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1710_; 
lean_dec(v_a_1695_);
lean_dec_ref(v___f_1694_);
lean_dec(v___x_1692_);
v_a_1702_ = lean_ctor_get(v_x_1696_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v_x_1696_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1704_ = v_x_1696_;
v_isShared_1705_ = v_isSharedCheck_1710_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v_x_1696_);
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
lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1724_; 
v_isSharedCheck_1724_ = !lean_is_exclusive(v_x_1696_);
if (v_isSharedCheck_1724_ == 0)
{
lean_object* v_unused_1725_; 
v_unused_1725_ = lean_ctor_get(v_x_1696_, 0);
lean_dec(v_unused_1725_);
v___x_1712_ = v_x_1696_;
v_isShared_1713_ = v_isSharedCheck_1724_;
goto v_resetjp_1711_;
}
else
{
lean_dec(v_x_1696_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1724_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; 
v___x_1714_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_1715_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1695_, v___x_1714_);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v_a_1716_; lean_object* v___x_1718_; 
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_a_1716_);
lean_dec_ref_known(v___x_1715_, 1);
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 0, v_a_1716_);
v___x_1718_ = v___x_1712_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1716_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
v_val_1699_ = v___x_1718_;
goto v___jp_1698_;
}
}
else
{
lean_object* v_a_1720_; lean_object* v___x_1722_; 
v_a_1720_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_a_1720_);
lean_dec_ref_known(v___x_1715_, 1);
if (v_isShared_1713_ == 0)
{
lean_ctor_set_tag(v___x_1712_, 0);
lean_ctor_set(v___x_1712_, 0, v_a_1720_);
v___x_1722_ = v___x_1712_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1720_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
v_val_1699_ = v___x_1722_;
goto v___jp_1698_;
}
}
}
}
v___jp_1698_:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1700_, 0, v_val_1699_);
v___x_1701_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1692_, v___x_1693_, v___x_1700_, v___f_1694_);
return v___x_1701_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed(lean_object* v___x_1726_, lean_object* v___x_1727_, lean_object* v___f_1728_, lean_object* v_a_1729_, lean_object* v_x_1730_, lean_object* v___y_1731_){
_start:
{
uint8_t v___x_5404__boxed_1732_; lean_object* v_res_1733_; 
v___x_5404__boxed_1732_ = lean_unbox(v___x_1727_);
v_res_1733_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(v___x_1726_, v___x_5404__boxed_1732_, v___f_1728_, v_a_1729_, v_x_1730_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(lean_object* v_a_1735_, lean_object* v___x_1736_, uint8_t v___x_1737_, lean_object* v___f_1738_, lean_object* v_chunk_1739_){
_start:
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1741_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_1742_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1742_, 0, v_chunk_1739_);
v___x_1743_ = lean_unsigned_to_nat(1u);
v___x_1744_ = lean_mk_empty_array_with_capacity(v___x_1743_);
v___x_1745_ = lean_array_push(v___x_1744_, v___x_1742_);
v___x_1746_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1735_, v___x_1741_, v___x_1745_);
v___x_1747_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1736_, v___x_1737_, v___x_1746_, v___f_1738_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed(lean_object* v_a_1748_, lean_object* v___x_1749_, lean_object* v___x_1750_, lean_object* v___f_1751_, lean_object* v_chunk_1752_, lean_object* v___y_1753_){
_start:
{
uint8_t v___x_5483__boxed_1754_; lean_object* v_res_1755_; 
v___x_5483__boxed_1754_ = lean_unbox(v___x_1750_);
v_res_1755_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(v_a_1748_, v___x_1749_, v___x_5483__boxed_1754_, v___f_1751_, v_chunk_1752_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(lean_object* v___x_1757_, lean_object* v_a_1758_, lean_object* v___x_1759_, uint8_t v___x_1760_, lean_object* v___f_1761_, lean_object* v_x_1762_){
_start:
{
if (lean_obj_tag(v_x_1762_) == 0)
{
lean_object* v___x_1764_; 
lean_dec_ref(v___f_1761_);
lean_dec(v___x_1759_);
lean_dec(v_a_1758_);
lean_dec_ref(v___x_1757_);
v___x_1764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1764_, 0, v_x_1762_);
return v___x_1764_;
}
else
{
lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1777_; 
v_isSharedCheck_1777_ = !lean_is_exclusive(v_x_1762_);
if (v_isSharedCheck_1777_ == 0)
{
lean_object* v_unused_1778_; 
v_unused_1778_ = lean_ctor_get(v_x_1762_, 0);
lean_dec(v_unused_1778_);
v___x_1766_ = v_x_1762_;
v_isShared_1767_ = v_isSharedCheck_1777_;
goto v_resetjp_1765_;
}
else
{
lean_dec(v_x_1762_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1777_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1768_; lean_object* v___x_1770_; 
v___x_1768_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0));
if (v_isShared_1767_ == 0)
{
lean_ctor_set_tag(v___x_1766_, 4);
lean_ctor_set(v___x_1766_, 0, v___x_1757_);
v___x_1770_ = v___x_1766_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v___x_1757_);
v___x_1770_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; 
v___x_1771_ = lean_unsigned_to_nat(1u);
v___x_1772_ = lean_mk_empty_array_with_capacity(v___x_1771_);
v___x_1773_ = lean_array_push(v___x_1772_, v___x_1770_);
v___x_1774_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1758_, v___x_1768_, v___x_1773_);
v___x_1775_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1759_, v___x_1760_, v___x_1774_, v___f_1761_);
return v___x_1775_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed(lean_object* v___x_1779_, lean_object* v_a_1780_, lean_object* v___x_1781_, lean_object* v___x_1782_, lean_object* v___f_1783_, lean_object* v_x_1784_, lean_object* v___y_1785_){
_start:
{
uint8_t v___x_5516__boxed_1786_; lean_object* v_res_1787_; 
v___x_5516__boxed_1786_ = lean_unbox(v___x_1782_);
v_res_1787_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(v___x_1779_, v_a_1780_, v___x_1781_, v___x_5516__boxed_1786_, v___f_1783_, v_x_1784_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(lean_object* v_a_1789_, lean_object* v___x_1790_, uint8_t v___x_1791_, lean_object* v___f_1792_, lean_object* v_x_1793_){
_start:
{
if (lean_obj_tag(v_x_1793_) == 0)
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1817_; 
v_a_1795_ = lean_ctor_get(v_x_1793_, 0);
v_isSharedCheck_1817_ = !lean_is_exclusive(v_x_1793_);
if (v_isSharedCheck_1817_ == 0)
{
v___x_1797_ = v_x_1793_;
v_isShared_1798_ = v_isSharedCheck_1817_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v_x_1793_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1817_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___f_1802_; lean_object* v_val_1804_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1799_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_1800_ = lean_io_error_to_string(v_a_1795_);
v___x_1801_ = lean_box(v___x_1791_);
lean_inc(v___x_1790_);
lean_inc_ref(v___x_1800_);
v___f_1802_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed), 7, 5);
lean_closure_set(v___f_1802_, 0, v___x_1800_);
lean_closure_set(v___f_1802_, 1, v_a_1789_);
lean_closure_set(v___f_1802_, 2, v___x_1790_);
lean_closure_set(v___f_1802_, 3, v___x_1801_);
lean_closure_set(v___f_1802_, 4, v___f_1792_);
v___x_1807_ = lean_string_append(v___x_1799_, v___x_1800_);
lean_dec_ref(v___x_1800_);
v___x_1808_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_1807_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_object* v_a_1809_; lean_object* v___x_1811_; 
v_a_1809_ = lean_ctor_get(v___x_1808_, 0);
lean_inc(v_a_1809_);
lean_dec_ref_known(v___x_1808_, 1);
if (v_isShared_1798_ == 0)
{
lean_ctor_set_tag(v___x_1797_, 1);
lean_ctor_set(v___x_1797_, 0, v_a_1809_);
v___x_1811_ = v___x_1797_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1809_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
v_val_1804_ = v___x_1811_;
goto v___jp_1803_;
}
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; 
v_a_1813_ = lean_ctor_get(v___x_1808_, 0);
lean_inc(v_a_1813_);
lean_dec_ref_known(v___x_1808_, 1);
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 0, v_a_1813_);
v___x_1815_ = v___x_1797_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v_a_1813_);
v___x_1815_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
v_val_1804_ = v___x_1815_;
goto v___jp_1803_;
}
}
v___jp_1803_:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1805_, 0, v_val_1804_);
v___x_1806_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1790_, v___x_1791_, v___x_1805_, v___f_1802_);
return v___x_1806_;
}
}
}
else
{
lean_object* v___x_1818_; 
lean_dec_ref(v___f_1792_);
lean_dec(v___x_1790_);
lean_dec(v_a_1789_);
v___x_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1818_, 0, v_x_1793_);
return v___x_1818_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed(lean_object* v_a_1819_, lean_object* v___x_1820_, lean_object* v___x_1821_, lean_object* v___f_1822_, lean_object* v_x_1823_, lean_object* v___y_1824_){
_start:
{
uint8_t v___x_5571__boxed_1825_; lean_object* v_res_1826_; 
v___x_5571__boxed_1825_ = lean_unbox(v___x_1821_);
v_res_1826_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(v_a_1819_, v___x_1820_, v___x_5571__boxed_1825_, v___f_1822_, v_x_1823_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(lean_object* v_a_1828_, lean_object* v___x_1829_, lean_object* v___x_1830_, uint8_t v___x_1831_, lean_object* v___f_1832_, lean_object* v_x_1833_){
_start:
{
if (lean_obj_tag(v_x_1833_) == 0)
{
lean_object* v___x_1835_; 
lean_dec_ref(v___f_1832_);
lean_dec(v___x_1830_);
lean_dec_ref(v___x_1829_);
lean_dec(v_a_1828_);
v___x_1835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1835_, 0, v_x_1833_);
return v___x_1835_;
}
else
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
lean_dec_ref_known(v_x_1833_, 1);
v___x_1836_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_1837_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1828_, v___x_1836_, v___x_1829_);
v___x_1838_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1830_, v___x_1831_, v___x_1837_, v___f_1832_);
return v___x_1838_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed(lean_object* v_a_1839_, lean_object* v___x_1840_, lean_object* v___x_1841_, lean_object* v___x_1842_, lean_object* v___f_1843_, lean_object* v_x_1844_, lean_object* v___y_1845_){
_start:
{
uint8_t v___x_5642__boxed_1846_; lean_object* v_res_1847_; 
v___x_5642__boxed_1846_ = lean_unbox(v___x_1842_);
v_res_1847_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(v_a_1839_, v___x_1840_, v___x_1841_, v___x_5642__boxed_1846_, v___f_1843_, v_x_1844_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(lean_object* v_val_1848_, lean_object* v___f_1849_, lean_object* v___x_1850_, uint8_t v___x_1851_, lean_object* v___f_1852_, lean_object* v___f_1853_){
_start:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1855_ = lean_apply_2(v_val_1848_, v___f_1849_, lean_box(0));
lean_inc(v___x_1850_);
v___x_1856_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1850_, v___x_1851_, v___x_1855_, v___f_1852_);
v___x_1857_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1850_, v___x_1851_, v___x_1856_, v___f_1853_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed(lean_object* v_val_1858_, lean_object* v___f_1859_, lean_object* v___x_1860_, lean_object* v___x_1861_, lean_object* v___f_1862_, lean_object* v___f_1863_, lean_object* v___y_1864_){
_start:
{
uint8_t v___x_5674__boxed_1865_; lean_object* v_res_1866_; 
v___x_5674__boxed_1865_ = lean_unbox(v___x_1861_);
v_res_1866_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(v_val_1858_, v___f_1859_, v___x_1860_, v___x_5674__boxed_1865_, v___f_1862_, v___f_1863_);
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(lean_object* v___x_1867_, uint8_t v___x_1868_, lean_object* v___f_1869_, lean_object* v___f_1870_, lean_object* v___x_1871_, lean_object* v___f_1872_, lean_object* v_val_1873_, lean_object* v___f_1874_, lean_object* v_x_1875_){
_start:
{
if (lean_obj_tag(v_x_1875_) == 0)
{
lean_object* v___x_1877_; 
lean_dec_ref(v___f_1874_);
lean_dec_ref(v_val_1873_);
lean_dec_ref(v___f_1872_);
lean_dec_ref(v___x_1871_);
lean_dec_ref(v___f_1870_);
lean_dec_ref(v___f_1869_);
lean_dec(v___x_1867_);
v___x_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1877_, 0, v_x_1875_);
return v___x_1877_;
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1879_; lean_object* v___f_1880_; lean_object* v___x_1881_; lean_object* v___f_1882_; lean_object* v___x_1883_; lean_object* v___f_1884_; lean_object* v___x_1885_; lean_object* v___f_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v_a_1878_ = lean_ctor_get(v_x_1875_, 0);
lean_inc_n(v_a_1878_, 3);
lean_dec_ref_known(v_x_1875_, 1);
v___x_1879_ = lean_box(v___x_1868_);
lean_inc_n(v___x_1867_, 5);
v___f_1880_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed), 6, 4);
lean_closure_set(v___f_1880_, 0, v_a_1878_);
lean_closure_set(v___f_1880_, 1, v___x_1867_);
lean_closure_set(v___f_1880_, 2, v___x_1879_);
lean_closure_set(v___f_1880_, 3, v___f_1869_);
v___x_1881_ = lean_box(v___x_1868_);
v___f_1882_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed), 6, 4);
lean_closure_set(v___f_1882_, 0, v_a_1878_);
lean_closure_set(v___f_1882_, 1, v___x_1867_);
lean_closure_set(v___f_1882_, 2, v___x_1881_);
lean_closure_set(v___f_1882_, 3, v___f_1870_);
v___x_1883_ = lean_box(v___x_1868_);
v___f_1884_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1884_, 0, v_a_1878_);
lean_closure_set(v___f_1884_, 1, v___x_1871_);
lean_closure_set(v___f_1884_, 2, v___x_1867_);
lean_closure_set(v___f_1884_, 3, v___x_1883_);
lean_closure_set(v___f_1884_, 4, v___f_1872_);
v___x_1885_ = lean_box(v___x_1868_);
v___f_1886_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed), 7, 6);
lean_closure_set(v___f_1886_, 0, v_val_1873_);
lean_closure_set(v___f_1886_, 1, v___f_1880_);
lean_closure_set(v___f_1886_, 2, v___x_1867_);
lean_closure_set(v___f_1886_, 3, v___x_1885_);
lean_closure_set(v___f_1886_, 4, v___f_1884_);
lean_closure_set(v___f_1886_, 5, v___f_1882_);
v___x_1887_ = lean_io_as_task(v___f_1886_, v___x_1867_);
lean_dec_ref(v___x_1887_);
v___x_1888_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_1889_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1867_, v___x_1868_, v___x_1888_, v___f_1874_);
return v___x_1889_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed(lean_object* v___x_1890_, lean_object* v___x_1891_, lean_object* v___f_1892_, lean_object* v___f_1893_, lean_object* v___x_1894_, lean_object* v___f_1895_, lean_object* v_val_1896_, lean_object* v___f_1897_, lean_object* v_x_1898_, lean_object* v___y_1899_){
_start:
{
uint8_t v___x_5703__boxed_1900_; lean_object* v_res_1901_; 
v___x_5703__boxed_1900_ = lean_unbox(v___x_1891_);
v_res_1901_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(v___x_1890_, v___x_5703__boxed_1900_, v___f_1892_, v___f_1893_, v___x_1894_, v___f_1895_, v_val_1896_, v___f_1897_, v_x_1898_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(lean_object* v___x_1903_, uint8_t v___x_1904_, lean_object* v___f_1905_, lean_object* v___x_1906_, lean_object* v_x_1907_){
_start:
{
lean_object* v_val_1910_; 
if (lean_obj_tag(v_x_1907_) == 0)
{
lean_object* v___x_1913_; 
lean_dec_ref(v___x_1906_);
lean_dec_ref(v___f_1905_);
lean_dec(v___x_1903_);
v___x_1913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1913_, 0, v_x_1907_);
return v___x_1913_;
}
else
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1928_; 
v_a_1914_ = lean_ctor_get(v_x_1907_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v_x_1907_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1916_ = v_x_1907_;
v_isShared_1917_ = v_isSharedCheck_1928_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v_x_1907_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1928_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1918_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0));
v___x_1919_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_1914_, v___x_1918_, v___x_1906_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; lean_object* v___x_1922_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v___x_1919_, 1);
if (v_isShared_1917_ == 0)
{
lean_ctor_set(v___x_1916_, 0, v_a_1920_);
v___x_1922_ = v___x_1916_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1920_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
v_val_1910_ = v___x_1922_;
goto v___jp_1909_;
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; 
v_a_1924_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1924_);
lean_dec_ref_known(v___x_1919_, 1);
if (v_isShared_1917_ == 0)
{
lean_ctor_set_tag(v___x_1916_, 0);
lean_ctor_set(v___x_1916_, 0, v_a_1924_);
v___x_1926_ = v___x_1916_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v_a_1924_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
v_val_1910_ = v___x_1926_;
goto v___jp_1909_;
}
}
}
}
v___jp_1909_:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1911_, 0, v_val_1910_);
v___x_1912_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1903_, v___x_1904_, v___x_1911_, v___f_1905_);
return v___x_1912_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed(lean_object* v___x_1929_, lean_object* v___x_1930_, lean_object* v___f_1931_, lean_object* v___x_1932_, lean_object* v_x_1933_, lean_object* v___y_1934_){
_start:
{
uint8_t v___x_5764__boxed_1935_; lean_object* v_res_1936_; 
v___x_5764__boxed_1935_ = lean_unbox(v___x_1930_);
v_res_1936_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(v___x_1929_, v___x_5764__boxed_1935_, v___f_1931_, v___x_1932_, v_x_1933_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(lean_object* v___x_1938_, lean_object* v___x_1939_, uint8_t v___x_1940_, lean_object* v_a_1941_, lean_object* v___f_1942_, lean_object* v___f_1943_, lean_object* v___x_1944_, lean_object* v___f_1945_, lean_object* v_val_1946_, lean_object* v_a_1947_, lean_object* v_x_1948_){
_start:
{
if (lean_obj_tag(v_x_1948_) == 0)
{
lean_object* v___x_1950_; 
lean_dec(v_a_1947_);
lean_dec_ref(v_val_1946_);
lean_dec_ref(v___f_1945_);
lean_dec_ref(v___x_1944_);
lean_dec_ref(v___f_1943_);
lean_dec_ref(v___f_1942_);
lean_dec(v_a_1941_);
lean_dec(v___x_1939_);
lean_dec(v___x_1938_);
v___x_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1950_, 0, v_x_1948_);
return v___x_1950_;
}
else
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1976_; 
v_a_1951_ = lean_ctor_get(v_x_1948_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v_x_1948_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1953_ = v_x_1948_;
v_isShared_1954_ = v_isSharedCheck_1976_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v_x_1948_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1976_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___f_1955_; lean_object* v___x_1956_; lean_object* v___f_1957_; lean_object* v___x_1958_; lean_object* v___f_1959_; lean_object* v___x_1960_; lean_object* v___f_1961_; lean_object* v_val_1963_; lean_object* v___x_1966_; lean_object* v___x_1967_; 
v___f_1955_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1955_, 0, v_a_1951_);
lean_closure_set(v___f_1955_, 1, v___x_1938_);
v___x_1956_ = lean_box(v___x_1940_);
lean_inc_n(v___x_1939_, 3);
v___f_1957_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed), 6, 4);
lean_closure_set(v___f_1957_, 0, v___x_1939_);
lean_closure_set(v___f_1957_, 1, v___x_1956_);
lean_closure_set(v___f_1957_, 2, v___f_1955_);
lean_closure_set(v___f_1957_, 3, v_a_1941_);
v___x_1958_ = lean_box(v___x_1940_);
lean_inc_ref(v___x_1944_);
v___f_1959_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed), 10, 8);
lean_closure_set(v___f_1959_, 0, v___x_1939_);
lean_closure_set(v___f_1959_, 1, v___x_1958_);
lean_closure_set(v___f_1959_, 2, v___f_1942_);
lean_closure_set(v___f_1959_, 3, v___f_1943_);
lean_closure_set(v___f_1959_, 4, v___x_1944_);
lean_closure_set(v___f_1959_, 5, v___f_1945_);
lean_closure_set(v___f_1959_, 6, v_val_1946_);
lean_closure_set(v___f_1959_, 7, v___f_1957_);
v___x_1960_ = lean_box(v___x_1940_);
v___f_1961_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed), 6, 4);
lean_closure_set(v___f_1961_, 0, v___x_1939_);
lean_closure_set(v___f_1961_, 1, v___x_1960_);
lean_closure_set(v___f_1961_, 2, v___f_1959_);
lean_closure_set(v___f_1961_, 3, v___x_1944_);
v___x_1966_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0));
v___x_1967_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1947_, v___x_1966_);
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_object* v_a_1968_; lean_object* v___x_1970_; 
v_a_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc(v_a_1968_);
lean_dec_ref_known(v___x_1967_, 1);
if (v_isShared_1954_ == 0)
{
lean_ctor_set(v___x_1953_, 0, v_a_1968_);
v___x_1970_ = v___x_1953_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v_a_1968_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
v_val_1963_ = v___x_1970_;
goto v___jp_1962_;
}
}
else
{
lean_object* v_a_1972_; lean_object* v___x_1974_; 
v_a_1972_ = lean_ctor_get(v___x_1967_, 0);
lean_inc(v_a_1972_);
lean_dec_ref_known(v___x_1967_, 1);
if (v_isShared_1954_ == 0)
{
lean_ctor_set_tag(v___x_1953_, 0);
lean_ctor_set(v___x_1953_, 0, v_a_1972_);
v___x_1974_ = v___x_1953_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_a_1972_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
v_val_1963_ = v___x_1974_;
goto v___jp_1962_;
}
}
v___jp_1962_:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1964_, 0, v_val_1963_);
v___x_1965_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1939_, v___x_1940_, v___x_1964_, v___f_1961_);
return v___x_1965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed(lean_object* v___x_1977_, lean_object* v___x_1978_, lean_object* v___x_1979_, lean_object* v_a_1980_, lean_object* v___f_1981_, lean_object* v___f_1982_, lean_object* v___x_1983_, lean_object* v___f_1984_, lean_object* v_val_1985_, lean_object* v_a_1986_, lean_object* v_x_1987_, lean_object* v___y_1988_){
_start:
{
uint8_t v___x_5827__boxed_1989_; lean_object* v_res_1990_; 
v___x_5827__boxed_1989_ = lean_unbox(v___x_1979_);
v_res_1990_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(v___x_1977_, v___x_1978_, v___x_5827__boxed_1989_, v_a_1980_, v___f_1981_, v___f_1982_, v___x_1983_, v___f_1984_, v_val_1985_, v_a_1986_, v_x_1987_);
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(lean_object* v___x_1992_, lean_object* v___x_1993_, uint8_t v___x_1994_, lean_object* v_a_1995_, lean_object* v___f_1996_, lean_object* v___f_1997_, lean_object* v___x_1998_, lean_object* v___f_1999_, lean_object* v_val_2000_, lean_object* v_x_2001_){
_start:
{
if (lean_obj_tag(v_x_2001_) == 0)
{
lean_object* v___x_2003_; 
lean_dec_ref(v_val_2000_);
lean_dec_ref(v___f_1999_);
lean_dec_ref(v___x_1998_);
lean_dec_ref(v___f_1997_);
lean_dec_ref(v___f_1996_);
lean_dec(v_a_1995_);
lean_dec(v___x_1993_);
lean_dec(v___x_1992_);
v___x_2003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2003_, 0, v_x_2001_);
return v___x_2003_;
}
else
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2024_; 
v_a_2004_ = lean_ctor_get(v_x_2001_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v_x_2001_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2006_ = v_x_2001_;
v_isShared_2007_ = v_isSharedCheck_2024_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v_x_2001_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2024_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2008_; lean_object* v___f_2009_; lean_object* v_val_2011_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2008_ = lean_box(v___x_1994_);
lean_inc(v_a_2004_);
lean_inc(v___x_1993_);
v___f_2009_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed), 12, 10);
lean_closure_set(v___f_2009_, 0, v___x_1992_);
lean_closure_set(v___f_2009_, 1, v___x_1993_);
lean_closure_set(v___f_2009_, 2, v___x_2008_);
lean_closure_set(v___f_2009_, 3, v_a_1995_);
lean_closure_set(v___f_2009_, 4, v___f_1996_);
lean_closure_set(v___f_2009_, 5, v___f_1997_);
lean_closure_set(v___f_2009_, 6, v___x_1998_);
lean_closure_set(v___f_2009_, 7, v___f_1999_);
lean_closure_set(v___f_2009_, 8, v_val_2000_);
lean_closure_set(v___f_2009_, 9, v_a_2004_);
v___x_2014_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0));
v___x_2015_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2004_, v___x_2014_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; lean_object* v___x_2018_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2016_);
lean_dec_ref_known(v___x_2015_, 1);
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 0, v_a_2016_);
v___x_2018_ = v___x_2006_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2016_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
v_val_2011_ = v___x_2018_;
goto v___jp_2010_;
}
}
else
{
lean_object* v_a_2020_; lean_object* v___x_2022_; 
v_a_2020_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2020_);
lean_dec_ref_known(v___x_2015_, 1);
if (v_isShared_2007_ == 0)
{
lean_ctor_set_tag(v___x_2006_, 0);
lean_ctor_set(v___x_2006_, 0, v_a_2020_);
v___x_2022_ = v___x_2006_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2020_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
v_val_2011_ = v___x_2022_;
goto v___jp_2010_;
}
}
v___jp_2010_:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2012_, 0, v_val_2011_);
v___x_2013_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1993_, v___x_1994_, v___x_2012_, v___f_2009_);
return v___x_2013_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed(lean_object* v___x_2025_, lean_object* v___x_2026_, lean_object* v___x_2027_, lean_object* v_a_2028_, lean_object* v___f_2029_, lean_object* v___f_2030_, lean_object* v___x_2031_, lean_object* v___f_2032_, lean_object* v_val_2033_, lean_object* v_x_2034_, lean_object* v___y_2035_){
_start:
{
uint8_t v___x_5921__boxed_2036_; lean_object* v_res_2037_; 
v___x_5921__boxed_2036_ = lean_unbox(v___x_2027_);
v_res_2037_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(v___x_2025_, v___x_2026_, v___x_5921__boxed_2036_, v_a_2028_, v___f_2029_, v___f_2030_, v___x_2031_, v___f_2032_, v_val_2033_, v_x_2034_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(lean_object* v___x_2038_, uint8_t v___x_2039_, lean_object* v_a_2040_, lean_object* v___f_2041_, lean_object* v___f_2042_, lean_object* v___f_2043_, lean_object* v_val_2044_, lean_object* v_x_2045_){
_start:
{
if (lean_obj_tag(v_x_2045_) == 0)
{
lean_object* v___x_2047_; 
lean_dec_ref(v_val_2044_);
lean_dec_ref(v___f_2043_);
lean_dec_ref(v___f_2042_);
lean_dec_ref(v___f_2041_);
lean_dec(v_a_2040_);
lean_dec(v___x_2038_);
v___x_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2047_, 0, v_x_2045_);
return v___x_2047_;
}
else
{
lean_object* v_a_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2069_; 
v_a_2048_ = lean_ctor_get(v_x_2045_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v_x_2045_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2050_ = v_x_2045_;
v_isShared_2051_ = v_isSharedCheck_2069_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_a_2048_);
lean_dec(v_x_2045_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2069_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___f_2055_; lean_object* v_val_2057_; lean_object* v___x_2060_; 
v___x_2052_ = lean_unsigned_to_nat(0u);
v___x_2053_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_2054_ = lean_box(v___x_2039_);
v___f_2055_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed), 11, 9);
lean_closure_set(v___f_2055_, 0, v___x_2038_);
lean_closure_set(v___f_2055_, 1, v___x_2052_);
lean_closure_set(v___f_2055_, 2, v___x_2054_);
lean_closure_set(v___f_2055_, 3, v_a_2040_);
lean_closure_set(v___f_2055_, 4, v___f_2041_);
lean_closure_set(v___f_2055_, 5, v___f_2042_);
lean_closure_set(v___f_2055_, 6, v___x_2053_);
lean_closure_set(v___f_2055_, 7, v___f_2043_);
lean_closure_set(v___f_2055_, 8, v_val_2044_);
v___x_2060_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2048_, v___x_2053_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; lean_object* v___x_2063_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
lean_inc(v_a_2061_);
lean_dec_ref_known(v___x_2060_, 1);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v_a_2061_);
v___x_2063_ = v___x_2050_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2061_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
v_val_2057_ = v___x_2063_;
goto v___jp_2056_;
}
}
else
{
lean_object* v_a_2065_; lean_object* v___x_2067_; 
v_a_2065_ = lean_ctor_get(v___x_2060_, 0);
lean_inc(v_a_2065_);
lean_dec_ref_known(v___x_2060_, 1);
if (v_isShared_2051_ == 0)
{
lean_ctor_set_tag(v___x_2050_, 0);
lean_ctor_set(v___x_2050_, 0, v_a_2065_);
v___x_2067_ = v___x_2050_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_a_2065_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
v_val_2057_ = v___x_2067_;
goto v___jp_2056_;
}
}
v___jp_2056_:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2058_, 0, v_val_2057_);
v___x_2059_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2052_, v___x_2039_, v___x_2058_, v___f_2055_);
return v___x_2059_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed(lean_object* v___x_2070_, lean_object* v___x_2071_, lean_object* v_a_2072_, lean_object* v___f_2073_, lean_object* v___f_2074_, lean_object* v___f_2075_, lean_object* v_val_2076_, lean_object* v_x_2077_, lean_object* v___y_2078_){
_start:
{
uint8_t v___x_6001__boxed_2079_; lean_object* v_res_2080_; 
v___x_6001__boxed_2079_ = lean_unbox(v___x_2071_);
v_res_2080_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(v___x_2070_, v___x_6001__boxed_2079_, v_a_2072_, v___f_2073_, v___f_2074_, v___f_2075_, v_val_2076_, v_x_2077_);
return v_res_2080_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0(void){
_start:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2081_ = lean_box(1);
v___x_2082_ = lean_unsigned_to_nat(2u);
v___x_2083_ = lean_mk_empty_array_with_capacity(v___x_2082_);
v___x_2084_ = lean_array_push(v___x_2083_, v___x_2081_);
return v___x_2084_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(lean_object* v___x_2085_, lean_object* v_x_2086_){
_start:
{
lean_object* v_val_2089_; 
if (lean_obj_tag(v_x_2086_) == 0)
{
lean_object* v___x_2091_; 
lean_dec(v___x_2085_);
v___x_2091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2091_, 0, v_x_2086_);
return v___x_2091_;
}
else
{
lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2107_; 
v_a_2092_ = lean_ctor_get(v_x_2086_, 0);
v_isSharedCheck_2107_ = !lean_is_exclusive(v_x_2086_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2094_ = v_x_2086_;
v_isShared_2095_ = v_isSharedCheck_2107_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v_x_2086_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2107_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2096_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0);
v___x_2097_ = lean_array_push(v___x_2096_, v___x_2085_);
v___x_2098_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2092_, v___x_2097_);
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v_a_2099_; lean_object* v___x_2101_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2098_, 1);
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v_a_2099_);
v___x_2101_ = v___x_2094_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v_a_2099_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
v_val_2089_ = v___x_2101_;
goto v___jp_2088_;
}
}
else
{
lean_object* v_a_2103_; lean_object* v___x_2105_; 
v_a_2103_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2103_);
lean_dec_ref_known(v___x_2098_, 1);
if (v_isShared_2095_ == 0)
{
lean_ctor_set_tag(v___x_2094_, 0);
lean_ctor_set(v___x_2094_, 0, v_a_2103_);
v___x_2105_ = v___x_2094_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v_a_2103_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
v_val_2089_ = v___x_2105_;
goto v___jp_2088_;
}
}
}
}
v___jp_2088_:
{
lean_object* v___x_2090_; 
v___x_2090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2090_, 0, v_val_2089_);
return v___x_2090_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed(lean_object* v___x_2108_, lean_object* v_x_2109_, lean_object* v___y_2110_){
_start:
{
lean_object* v_res_2111_; 
v_res_2111_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(v___x_2108_, v_x_2109_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(size_t v_sz_2112_, size_t v_i_2113_, lean_object* v_bs_2114_){
_start:
{
uint8_t v___x_2115_; 
v___x_2115_ = lean_usize_dec_lt(v_i_2113_, v_sz_2112_);
if (v___x_2115_ == 0)
{
return v_bs_2114_;
}
else
{
lean_object* v_v_2116_; lean_object* v_fst_2117_; lean_object* v_snd_2118_; lean_object* v___x_2119_; lean_object* v_bs_x27_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; size_t v___x_2128_; size_t v___x_2129_; lean_object* v___x_2130_; 
v_v_2116_ = lean_array_uget_borrowed(v_bs_2114_, v_i_2113_);
v_fst_2117_ = lean_ctor_get(v_v_2116_, 0);
lean_inc(v_fst_2117_);
v_snd_2118_ = lean_ctor_get(v_v_2116_, 1);
lean_inc(v_snd_2118_);
v___x_2119_ = lean_unsigned_to_nat(0u);
v_bs_x27_2120_ = lean_array_uset(v_bs_2114_, v_i_2113_, v___x_2119_);
v___x_2121_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2121_, 0, v_fst_2117_);
v___x_2122_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2122_, 0, v_snd_2118_);
v___x_2123_ = lean_unsigned_to_nat(2u);
v___x_2124_ = lean_mk_empty_array_with_capacity(v___x_2123_);
v___x_2125_ = lean_array_push(v___x_2124_, v___x_2121_);
v___x_2126_ = lean_array_push(v___x_2125_, v___x_2122_);
v___x_2127_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2126_);
v___x_2128_ = ((size_t)1ULL);
v___x_2129_ = lean_usize_add(v_i_2113_, v___x_2128_);
v___x_2130_ = lean_array_uset(v_bs_x27_2120_, v_i_2113_, v___x_2127_);
v_i_2113_ = v___x_2129_;
v_bs_2114_ = v___x_2130_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0___boxed(lean_object* v_sz_2132_, lean_object* v_i_2133_, lean_object* v_bs_2134_){
_start:
{
size_t v_sz_boxed_2135_; size_t v_i_boxed_2136_; lean_object* v_res_2137_; 
v_sz_boxed_2135_ = lean_unbox_usize(v_sz_2132_);
lean_dec(v_sz_2132_);
v_i_boxed_2136_ = lean_unbox_usize(v_i_2133_);
lean_dec(v_i_2133_);
v_res_2137_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_boxed_2135_, v_i_boxed_2136_, v_bs_2134_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(lean_object* v_r_2141_, lean_object* v_method_2142_, lean_object* v___f_2143_, lean_object* v___f_2144_, lean_object* v___f_2145_, lean_object* v_x_2146_){
_start:
{
uint8_t v___y_2149_; lean_object* v___y_2150_; lean_object* v___y_2151_; lean_object* v_val_2152_; lean_object* v___y_2156_; lean_object* v___y_2157_; uint8_t v___y_2158_; lean_object* v_val_2159_; lean_object* v___y_2163_; lean_object* v___y_2164_; uint8_t v___y_2165_; lean_object* v_val_2166_; 
if (lean_obj_tag(v_x_2146_) == 0)
{
lean_object* v___x_2169_; 
lean_dec_ref(v___f_2145_);
lean_dec_ref(v___f_2144_);
lean_dec_ref(v___f_2143_);
lean_dec_ref(v_r_2141_);
v___x_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2169_, 0, v_x_2146_);
return v___x_2169_;
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2263_; 
v_a_2170_ = lean_ctor_get(v_x_2146_, 0);
v_isSharedCheck_2263_ = !lean_is_exclusive(v_x_2146_);
if (v_isSharedCheck_2263_ == 0)
{
v___x_2172_ = v_x_2146_;
v_isShared_2173_ = v_isSharedCheck_2263_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v_x_2146_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2263_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___y_2175_; lean_object* v___y_2176_; uint16_t v_status_2190_; lean_object* v_headers_2191_; lean_object* v_body_2192_; lean_object* v_stream_2193_; lean_object* v___x_2194_; lean_object* v___y_2196_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; uint8_t v___x_2259_; 
v_status_2190_ = lean_ctor_get_uint16(v_r_2141_, sizeof(void*)*3);
v_headers_2191_ = lean_ctor_get(v_r_2141_, 0);
lean_inc_ref(v_headers_2191_);
v_body_2192_ = lean_ctor_get(v_r_2141_, 1);
lean_inc_ref(v_body_2192_);
v_stream_2193_ = lean_ctor_get(v_r_2141_, 2);
lean_inc(v_stream_2193_);
lean_dec_ref(v_r_2141_);
v___x_2194_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_2255_ = lean_uint16_to_nat(v_status_2190_);
v___x_2256_ = lean_nat_to_int(v___x_2255_);
v___x_2257_ = lean_nat_abs(v___x_2256_);
v___x_2258_ = lean_cstr_to_nat("9007199254740991");
v___x_2259_ = lean_nat_dec_le(v___x_2257_, v___x_2258_);
lean_dec(v___x_2257_);
if (v___x_2259_ == 0)
{
lean_object* v___x_2260_; 
v___x_2260_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2260_, 0, v___x_2256_);
v___y_2196_ = v___x_2260_;
goto v___jp_2195_;
}
else
{
double v___x_2261_; lean_object* v___x_2262_; 
v___x_2261_ = l_Float_ofInt(v___x_2256_);
lean_dec(v___x_2256_);
v___x_2262_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2262_, 0, v___x_2261_);
v___y_2196_ = v___x_2262_;
goto v___jp_2195_;
}
v___jp_2174_:
{
lean_object* v___f_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; uint8_t v___x_2180_; lean_object* v___x_2181_; 
v___f_2177_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2177_, 0, v___y_2176_);
lean_closure_set(v___f_2177_, 1, v___y_2175_);
v___x_2178_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2179_ = lean_unsigned_to_nat(0u);
v___x_2180_ = 0;
v___x_2181_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2170_, v___x_2178_);
if (lean_obj_tag(v___x_2181_) == 0)
{
lean_object* v_a_2182_; lean_object* v___x_2184_; 
v_a_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_a_2182_);
lean_dec_ref_known(v___x_2181_, 1);
if (v_isShared_2173_ == 0)
{
lean_ctor_set(v___x_2172_, 0, v_a_2182_);
v___x_2184_ = v___x_2172_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_a_2182_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
v___y_2163_ = v___x_2179_;
v___y_2164_ = v___f_2177_;
v___y_2165_ = v___x_2180_;
v_val_2166_ = v___x_2184_;
goto v___jp_2162_;
}
}
else
{
lean_object* v_a_2186_; lean_object* v___x_2188_; 
v_a_2186_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_a_2186_);
lean_dec_ref_known(v___x_2181_, 1);
if (v_isShared_2173_ == 0)
{
lean_ctor_set_tag(v___x_2172_, 0);
lean_ctor_set(v___x_2172_, 0, v_a_2186_);
v___x_2188_ = v___x_2172_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_a_2186_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
v___y_2163_ = v___x_2179_;
v___y_2164_ = v___f_2177_;
v___y_2165_ = v___x_2180_;
v_val_2166_ = v___x_2188_;
goto v___jp_2162_;
}
}
}
v___jp_2195_:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; size_t v_sz_2199_; size_t v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2194_);
lean_ctor_set(v___x_2197_, 1, v___y_2196_);
v___x_2198_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v_sz_2199_ = lean_array_size(v_headers_2191_);
v___x_2200_ = ((size_t)0ULL);
v___x_2201_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_2199_, v___x_2200_, v_headers_2191_);
v___x_2202_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2201_);
v___x_2203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2198_);
lean_ctor_set(v___x_2203_, 1, v___x_2202_);
v___x_2204_ = lean_box(0);
v___x_2205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2203_);
lean_ctor_set(v___x_2205_, 1, v___x_2204_);
v___x_2206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2206_, 0, v___x_2197_);
lean_ctor_set(v___x_2206_, 1, v___x_2205_);
v___x_2207_ = l_Lasm_JS_obj(v___x_2206_);
if (lean_obj_tag(v_stream_2193_) == 0)
{
uint8_t v___x_2208_; 
lean_dec_ref(v___f_2145_);
lean_dec_ref(v___f_2144_);
lean_dec_ref(v___f_2143_);
v___x_2208_ = l_Lasm_Fetch_bodyless(v_method_2142_, v_status_2190_);
if (v___x_2208_ == 0)
{
lean_object* v___x_2209_; 
v___x_2209_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2209_, 0, v_body_2192_);
v___y_2175_ = v___x_2207_;
v___y_2176_ = v___x_2209_;
goto v___jp_2174_;
}
else
{
lean_object* v___x_2210_; 
lean_dec_ref(v_body_2192_);
v___x_2210_ = lean_box(1);
v___y_2175_ = v___x_2207_;
v___y_2176_ = v___x_2210_;
goto v___jp_2174_;
}
}
else
{
lean_object* v_val_2211_; uint8_t v___x_2212_; 
lean_dec_ref(v_body_2192_);
lean_del_object(v___x_2172_);
v_val_2211_ = lean_ctor_get(v_stream_2193_, 0);
lean_inc(v_val_2211_);
lean_dec_ref_known(v_stream_2193_, 1);
v___x_2212_ = l_Lasm_Fetch_bodyless(v_method_2142_, v_status_2190_);
if (v___x_2212_ == 0)
{
lean_object* v___x_2213_; lean_object* v___f_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2213_ = lean_box(v___x_2212_);
lean_inc(v_a_2170_);
v___f_2214_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed), 9, 7);
lean_closure_set(v___f_2214_, 0, v___x_2207_);
lean_closure_set(v___f_2214_, 1, v___x_2213_);
lean_closure_set(v___f_2214_, 2, v_a_2170_);
lean_closure_set(v___f_2214_, 3, v___f_2143_);
lean_closure_set(v___f_2214_, 4, v___f_2144_);
lean_closure_set(v___f_2214_, 5, v___f_2145_);
lean_closure_set(v___f_2214_, 6, v_val_2211_);
v___x_2215_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2));
v___x_2216_ = lean_unsigned_to_nat(0u);
v___x_2217_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2170_, v___x_2215_);
if (lean_obj_tag(v___x_2217_) == 0)
{
lean_object* v_a_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2225_; 
v_a_2218_ = lean_ctor_get(v___x_2217_, 0);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2217_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2220_ = v___x_2217_;
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_a_2218_);
lean_dec(v___x_2217_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v___x_2223_; 
if (v_isShared_2221_ == 0)
{
lean_ctor_set_tag(v___x_2220_, 1);
v___x_2223_ = v___x_2220_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_a_2218_);
v___x_2223_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
v___y_2156_ = v___x_2216_;
v___y_2157_ = v___f_2214_;
v___y_2158_ = v___x_2212_;
v_val_2159_ = v___x_2223_;
goto v___jp_2155_;
}
}
}
else
{
lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2233_; 
v_a_2226_ = lean_ctor_get(v___x_2217_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2217_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2228_ = v___x_2217_;
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_dec(v___x_2217_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2231_; 
if (v_isShared_2229_ == 0)
{
lean_ctor_set_tag(v___x_2228_, 0);
v___x_2231_ = v___x_2228_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_a_2226_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
v___y_2156_ = v___x_2216_;
v___y_2157_ = v___f_2214_;
v___y_2158_ = v___x_2212_;
v_val_2159_ = v___x_2231_;
goto v___jp_2155_;
}
}
}
}
else
{
lean_object* v___f_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; uint8_t v___x_2237_; lean_object* v___x_2238_; 
lean_dec(v_val_2211_);
lean_dec_ref(v___f_2145_);
lean_dec_ref(v___f_2144_);
lean_dec_ref(v___f_2143_);
v___f_2234_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed), 3, 1);
lean_closure_set(v___f_2234_, 0, v___x_2207_);
v___x_2235_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2236_ = lean_unsigned_to_nat(0u);
v___x_2237_ = 0;
v___x_2238_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2170_, v___x_2235_);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2246_; 
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v___x_2238_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2241_ = v___x_2238_;
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2238_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
if (v_isShared_2242_ == 0)
{
lean_ctor_set_tag(v___x_2241_, 1);
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_a_2239_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
v___y_2149_ = v___x_2237_;
v___y_2150_ = v___x_2236_;
v___y_2151_ = v___f_2234_;
v_val_2152_ = v___x_2244_;
goto v___jp_2148_;
}
}
}
else
{
lean_object* v_a_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2254_; 
v_a_2247_ = lean_ctor_get(v___x_2238_, 0);
v_isSharedCheck_2254_ = !lean_is_exclusive(v___x_2238_);
if (v_isSharedCheck_2254_ == 0)
{
v___x_2249_ = v___x_2238_;
v_isShared_2250_ = v_isSharedCheck_2254_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_a_2247_);
lean_dec(v___x_2238_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2254_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2252_; 
if (v_isShared_2250_ == 0)
{
lean_ctor_set_tag(v___x_2249_, 0);
v___x_2252_ = v___x_2249_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v_a_2247_);
v___x_2252_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
v___y_2149_ = v___x_2237_;
v___y_2150_ = v___x_2236_;
v___y_2151_ = v___f_2234_;
v_val_2152_ = v___x_2252_;
goto v___jp_2148_;
}
}
}
}
}
}
}
}
v___jp_2148_:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2153_, 0, v_val_2152_);
v___x_2154_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2150_, v___y_2149_, v___x_2153_, v___y_2151_);
return v___x_2154_;
}
v___jp_2155_:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2160_, 0, v_val_2159_);
v___x_2161_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2156_, v___y_2158_, v___x_2160_, v___y_2157_);
return v___x_2161_;
}
v___jp_2162_:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2167_, 0, v_val_2166_);
v___x_2168_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2163_, v___y_2165_, v___x_2167_, v___y_2164_);
return v___x_2168_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed(lean_object* v_r_2264_, lean_object* v_method_2265_, lean_object* v___f_2266_, lean_object* v___f_2267_, lean_object* v___f_2268_, lean_object* v_x_2269_, lean_object* v___y_2270_){
_start:
{
lean_object* v_res_2271_; 
v_res_2271_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(v_r_2264_, v_method_2265_, v___f_2266_, v___f_2267_, v___f_2268_, v_x_2269_);
lean_dec_ref(v_method_2265_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(lean_object* v_method_2273_, lean_object* v_r_2274_){
_start:
{
lean_object* v___f_2276_; lean_object* v___f_2277_; lean_object* v___x_2278_; uint8_t v___x_2279_; lean_object* v_val_2281_; lean_object* v___x_2284_; 
v___f_2276_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_2277_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed), 7, 5);
lean_closure_set(v___f_2277_, 0, v_r_2274_);
lean_closure_set(v___f_2277_, 1, v_method_2273_);
lean_closure_set(v___f_2277_, 2, v___f_2276_);
lean_closure_set(v___f_2277_, 3, v___f_2276_);
lean_closure_set(v___f_2277_, 4, v___f_2276_);
v___x_2278_ = lean_unsigned_to_nat(0u);
v___x_2279_ = 0;
v___x_2284_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2292_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2287_ = v___x_2284_;
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2284_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2290_; 
if (v_isShared_2288_ == 0)
{
lean_ctor_set_tag(v___x_2287_, 1);
v___x_2290_ = v___x_2287_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_a_2285_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
v_val_2281_ = v___x_2290_;
goto v___jp_2280_;
}
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
v_a_2293_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2284_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2284_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
lean_ctor_set_tag(v___x_2295_, 0);
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
v_val_2281_ = v___x_2298_;
goto v___jp_2280_;
}
}
}
v___jp_2280_:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2282_, 0, v_val_2281_);
v___x_2283_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2278_, v___x_2279_, v___x_2282_, v___f_2277_);
return v___x_2283_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___boxed(lean_object* v_method_2301_, lean_object* v_r_2302_, lean_object* v_a_2303_){
_start:
{
lean_object* v_res_2304_; 
v_res_2304_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v_method_2301_, v_r_2302_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2306_ = lean_box(0);
v___x_2307_ = lean_st_mk_ref(v___x_2306_);
v___x_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2307_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2____boxed(lean_object* v_a_2309_){
_start:
{
lean_object* v_res_2310_; 
v_res_2310_ = l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_();
return v_res_2310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_2311_){
_start:
{
if (lean_obj_tag(v_x_2311_) == 0)
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2321_; 
v_a_2313_ = lean_ctor_get(v_x_2311_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v_x_2311_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2315_ = v_x_2311_;
v_isShared_2316_ = v_isSharedCheck_2321_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v_x_2311_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2321_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
if (v_isShared_2316_ == 0)
{
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_a_2313_);
v___x_2318_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
lean_object* v___x_2319_; 
v___x_2319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2318_);
return v___x_2319_;
}
}
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2332_; 
v_a_2322_ = lean_ctor_get(v_x_2311_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v_x_2311_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2324_ = v_x_2311_;
v_isShared_2325_ = v_isSharedCheck_2332_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v_x_2311_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2332_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2329_; 
v___x_2326_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2327_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2327_, 0, v_a_2322_);
lean_ctor_set(v___x_2327_, 1, v___x_2326_);
if (v_isShared_2325_ == 0)
{
lean_ctor_set(v___x_2324_, 0, v___x_2327_);
v___x_2329_ = v___x_2324_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v___x_2327_);
v___x_2329_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
lean_object* v___x_2330_; 
v___x_2330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2330_, 0, v___x_2329_);
return v___x_2330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_2333_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___y_2336_, lean_object* v___x_2337_, lean_object* v___f_2338_, lean_object* v_x_2339_){
_start:
{
if (lean_obj_tag(v_x_2339_) == 0)
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2349_; 
lean_dec_ref(v___f_2338_);
lean_dec(v___x_2337_);
lean_dec_ref(v___y_2336_);
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
lean_object* v_a_2350_; uint8_t v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; 
v_a_2350_ = lean_ctor_get(v_x_2339_, 0);
lean_inc(v_a_2350_);
lean_dec_ref_known(v_x_2339_, 1);
v___x_2351_ = 0;
v___x_2352_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v___y_2336_, v_a_2350_);
v___x_2353_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2337_, v___x_2351_, v___x_2352_, v___f_2338_);
return v___x_2353_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___y_2354_, lean_object* v___x_2355_, lean_object* v___f_2356_, lean_object* v_x_2357_, lean_object* v___y_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___y_2354_, v___x_2355_, v___f_2356_, v_x_2357_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v_handler_2360_, lean_object* v___x_2361_, lean_object* v___f_2362_, lean_object* v_req_2363_){
_start:
{
uint8_t v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; 
v___x_2365_ = 0;
v___x_2366_ = l_Lasm_Fetch_respond(v_handler_2360_, v_req_2363_);
v___x_2367_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2361_, v___x_2365_, v___x_2366_, v___f_2362_);
return v___x_2367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v_handler_2368_, lean_object* v___x_2369_, lean_object* v___f_2370_, lean_object* v_req_2371_, lean_object* v___y_2372_){
_start:
{
lean_object* v_res_2373_; 
v_res_2373_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v_handler_2368_, v___x_2369_, v___f_2370_, v_req_2371_);
return v_res_2373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_2374_, lean_object* v_x_2375_){
_start:
{
if (lean_obj_tag(v_x_2375_) == 0)
{
lean_object* v_a_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2385_; 
lean_dec_ref(v___f_2374_);
v_a_2377_ = lean_ctor_get(v_x_2375_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v_x_2375_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2379_ = v_x_2375_;
v_isShared_2380_ = v_isSharedCheck_2385_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_a_2377_);
lean_dec(v_x_2375_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2385_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2382_; 
if (v_isShared_2380_ == 0)
{
v___x_2382_ = v___x_2379_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_a_2377_);
v___x_2382_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
lean_object* v___x_2383_; 
v___x_2383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2383_, 0, v___x_2382_);
return v___x_2383_;
}
}
}
else
{
lean_object* v_a_2386_; lean_object* v___x_2387_; 
v_a_2386_ = lean_ctor_get(v_x_2375_, 0);
lean_inc(v_a_2386_);
lean_dec_ref_known(v_x_2375_, 1);
v___x_2387_ = lean_apply_2(v___f_2374_, v_a_2386_, lean_box(0));
return v___x_2387_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_2388_, lean_object* v_x_2389_, lean_object* v___y_2390_){
_start:
{
lean_object* v_res_2391_; 
v_res_2391_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_2388_, v_x_2389_);
return v_res_2391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v_headers_2394_, lean_object* v___f_2395_, lean_object* v___x_2396_, uint8_t v___x_2397_, lean_object* v___f_2398_, lean_object* v_x_2399_){
_start:
{
if (lean_obj_tag(v_x_2399_) == 0)
{
lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2409_; 
lean_dec_ref(v___f_2398_);
lean_dec(v___x_2396_);
lean_dec_ref(v___f_2395_);
lean_dec_ref(v_headers_2394_);
lean_dec_ref(v___y_2393_);
lean_dec_ref(v___y_2392_);
v_a_2401_ = lean_ctor_get(v_x_2399_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v_x_2399_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2403_ = v_x_2399_;
v_isShared_2404_ = v_isSharedCheck_2409_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v_x_2399_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2409_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2406_; 
if (v_isShared_2404_ == 0)
{
v___x_2406_ = v___x_2403_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_a_2401_);
v___x_2406_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
lean_object* v___x_2407_; 
v___x_2407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2407_, 0, v___x_2406_);
return v___x_2407_;
}
}
}
else
{
lean_object* v_a_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2420_; 
v_a_2410_ = lean_ctor_get(v_x_2399_, 0);
v_isSharedCheck_2420_ = !lean_is_exclusive(v_x_2399_);
if (v_isSharedCheck_2420_ == 0)
{
v___x_2412_ = v_x_2399_;
v_isShared_2413_ = v_isSharedCheck_2420_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_a_2410_);
lean_dec(v_x_2399_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2420_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2414_; lean_object* v___x_2416_; 
v___x_2414_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2414_, 0, v___y_2392_);
lean_ctor_set(v___x_2414_, 1, v___y_2393_);
lean_ctor_set(v___x_2414_, 2, v_headers_2394_);
lean_ctor_set(v___x_2414_, 3, v_a_2410_);
lean_ctor_set(v___x_2414_, 4, v___f_2395_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set(v___x_2412_, 0, v___x_2414_);
v___x_2416_ = v___x_2412_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v___x_2414_);
v___x_2416_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2417_, 0, v___x_2416_);
v___x_2418_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2396_, v___x_2397_, v___x_2417_, v___f_2398_);
return v___x_2418_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v_headers_2423_, lean_object* v___f_2424_, lean_object* v___x_2425_, lean_object* v___x_2426_, lean_object* v___f_2427_, lean_object* v_x_2428_, lean_object* v___y_2429_){
_start:
{
uint8_t v___x_7603__boxed_2430_; lean_object* v_res_2431_; 
v___x_7603__boxed_2430_ = lean_unbox(v___x_2426_);
v_res_2431_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___y_2421_, v___y_2422_, v_headers_2423_, v___f_2424_, v___x_2425_, v___x_7603__boxed_2430_, v___f_2427_, v_x_2428_);
return v_res_2431_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2436_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2437_ = lean_string_utf8_byte_size(v___x_2436_);
return v___x_2437_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; uint8_t v___x_2440_; 
v___x_2438_ = lean_unsigned_to_nat(0u);
v___x_2439_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4);
v___x_2440_ = lean_nat_dec_eq(v___x_2439_, v___x_2438_);
return v___x_2440_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
v___x_2445_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__9));
v___x_2446_ = lean_unsigned_to_nat(46u);
v___x_2447_ = lean_unsigned_to_nat(193u);
v___x_2448_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
v___x_2449_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7));
v___x_2450_ = l_mkPanicMessageWithDecl(v___x_2449_, v___x_2448_, v___x_2447_, v___x_2446_, v___x_2445_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(lean_object* v_context_2452_, lean_object* v_d_2453_){
_start:
{
lean_object* v___y_2456_; lean_object* v___y_2457_; 
if (lean_obj_tag(v_d_2453_) == 6)
{
lean_object* v_b_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2468_; 
v_b_2461_ = lean_ctor_get(v_d_2453_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v_d_2453_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2463_ = v_d_2453_;
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_b_2461_);
lean_dec(v_d_2453_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2466_; 
if (v_isShared_2464_ == 0)
{
lean_ctor_set_tag(v___x_2463_, 0);
v___x_2466_ = v___x_2463_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_b_2461_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
}
else
{
lean_object* v___x_2469_; lean_object* v_received_2471_; 
v___x_2469_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_d_2453_) == 9)
{
lean_object* v_value_2485_; lean_object* v_description_2486_; uint8_t v___x_2487_; 
v_value_2485_ = lean_ctor_get(v_d_2453_, 0);
v_description_2486_ = lean_ctor_get(v_d_2453_, 1);
v___x_2487_ = lean_string_dec_eq(v_description_2486_, v___x_2469_);
if (v___x_2487_ == 0)
{
goto v___jp_2483_;
}
else
{
uint32_t v___x_2488_; uint64_t v___x_2489_; lean_object* v___x_2490_; uint32_t v___x_2491_; lean_object* v___x_2492_; 
lean_inc_n(v_value_2485_, 2);
lean_dec_ref_known(v_d_2453_, 2);
v___x_2488_ = 206;
v___x_2489_ = 0ULL;
v___x_2490_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2490_, 0, v_value_2485_);
lean_ctor_set(v___x_2490_, 1, v___x_2469_);
v___x_2491_ = lasm_js_value_handle(v_value_2485_);
lean_dec(v_value_2485_);
v___x_2492_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2488_, v___x_2489_, v___x_2490_, v___x_2491_);
lean_dec_ref_known(v___x_2490_, 2);
if (lean_obj_tag(v___x_2492_) == 0)
{
lean_object* v_a_2493_; uint8_t v___x_2494_; 
v_a_2493_ = lean_ctor_get(v___x_2492_, 0);
lean_inc(v_a_2493_);
lean_dec_ref_known(v___x_2492_, 1);
v___x_2494_ = lean_string_validate_utf8(v_a_2493_);
if (v___x_2494_ == 0)
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
lean_dec(v_a_2493_);
v___x_2495_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_2496_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2495_);
v_received_2471_ = v___x_2496_;
goto v___jp_2470_;
}
else
{
lean_object* v___x_2497_; 
v___x_2497_ = lean_string_from_utf8_unchecked(v_a_2493_);
v_received_2471_ = v___x_2497_;
goto v___jp_2470_;
}
}
else
{
lean_object* v___x_2498_; 
lean_dec_ref_known(v___x_2492_, 1);
v___x_2498_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v_received_2471_ = v___x_2498_;
goto v___jp_2470_;
}
}
}
else
{
goto v___jp_2483_;
}
v___jp_2470_:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; uint8_t v___x_2481_; 
v___x_2472_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_2473_ = lean_string_append(v___x_2472_, v_context_2452_);
v___x_2474_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_2475_ = lean_string_append(v___x_2473_, v___x_2474_);
v___x_2476_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2));
v___x_2477_ = lean_string_append(v___x_2475_, v___x_2476_);
v___x_2478_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_2479_ = lean_string_append(v___x_2477_, v___x_2478_);
v___x_2480_ = lean_string_append(v___x_2479_, v_received_2471_);
lean_dec_ref(v_received_2471_);
v___x_2481_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5);
if (v___x_2481_ == 0)
{
lean_object* v___x_2482_; 
v___x_2482_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6));
v___y_2456_ = v___x_2480_;
v___y_2457_ = v___x_2482_;
goto v___jp_2455_;
}
else
{
v___y_2456_ = v___x_2480_;
v___y_2457_ = v___x_2469_;
goto v___jp_2455_;
}
}
v___jp_2483_:
{
lean_object* v___x_2484_; 
v___x_2484_ = l_Lasm_JS_Data_describe(v_d_2453_);
v_received_2471_ = v___x_2484_;
goto v___jp_2470_;
}
}
v___jp_2455_:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2458_ = lean_string_append(v___y_2456_, v___y_2457_);
v___x_2459_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2458_);
v___x_2460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2460_, 0, v___x_2459_);
return v___x_2460_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2499_, lean_object* v_d_2500_, lean_object* v_a_2501_){
_start:
{
lean_object* v_res_2502_; 
v_res_2502_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2499_, v_d_2500_);
lean_dec_ref(v_context_2499_);
return v_res_2502_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(lean_object* v_context_2503_, lean_object* v_bytes_2504_){
_start:
{
lean_object* v___x_2506_; 
v___x_2506_ = l_Lasm_JS_Wire_decode(v_bytes_2504_);
if (lean_obj_tag(v___x_2506_) == 0)
{
lean_object* v_a_2507_; lean_object* v___x_2508_; 
v_a_2507_ = lean_ctor_get(v___x_2506_, 0);
lean_inc(v_a_2507_);
lean_dec_ref_known(v___x_2506_, 1);
v___x_2508_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2503_, v_a_2507_);
return v___x_2508_;
}
else
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2516_; 
v_a_2509_ = lean_ctor_get(v___x_2506_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v___x_2506_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2511_ = v___x_2506_;
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v___x_2506_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___x_2514_; 
if (v_isShared_2512_ == 0)
{
v___x_2514_ = v___x_2511_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_a_2509_);
v___x_2514_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
return v___x_2514_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1___boxed(lean_object* v_context_2517_, lean_object* v_bytes_2518_, lean_object* v_a_2519_){
_start:
{
lean_object* v_res_2520_; 
v_res_2520_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v_context_2517_, v_bytes_2518_);
lean_dec_ref(v_bytes_2518_);
lean_dec_ref(v_context_2517_);
return v_res_2520_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(uint8_t v_await_2521_, uint64_t v_extra_2522_){
_start:
{
uint64_t v___x_2523_; uint64_t v___y_2525_; 
v___x_2523_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_2521_ == 0)
{
uint64_t v___x_2528_; 
v___x_2528_ = 0ULL;
v___y_2525_ = v___x_2528_;
goto v___jp_2524_;
}
else
{
uint64_t v___x_2529_; 
v___x_2529_ = 2ULL;
v___y_2525_ = v___x_2529_;
goto v___jp_2524_;
}
v___jp_2524_:
{
uint64_t v___x_2526_; uint64_t v___x_2527_; 
v___x_2526_ = lean_uint64_lor(v___x_2523_, v___y_2525_);
v___x_2527_ = lean_uint64_lor(v___x_2526_, v_extra_2522_);
return v___x_2527_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0___boxed(lean_object* v_await_2530_, lean_object* v_extra_2531_){
_start:
{
uint8_t v_await_boxed_2532_; uint64_t v_extra_boxed_2533_; uint64_t v_res_2534_; lean_object* v_r_2535_; 
v_await_boxed_2532_ = lean_unbox(v_await_2530_);
v_extra_boxed_2533_ = lean_unbox_uint64(v_extra_2531_);
lean_dec_ref(v_extra_2531_);
v_res_2534_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v_await_boxed_2532_, v_extra_boxed_2533_);
v_r_2535_ = lean_box_uint64(v_res_2534_);
return v_r_2535_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2536_; uint8_t v___x_2537_; uint64_t v___x_2538_; 
v___x_2536_ = 4ULL;
v___x_2537_ = 0;
v___x_2538_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_2537_, v___x_2536_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object* v_c_2539_, lean_object* v_args_2540_){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; uint64_t v___x_2545_; lean_object* v___x_2546_; 
v___x_2542_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2543_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2543_, 0, v_c_2539_);
lean_ctor_set(v___x_2543_, 1, v___x_2542_);
v___x_2544_ = lean_box(0);
v___x_2545_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0);
v___x_2546_ = l_Lasm_JS_Value_invokeRaw(v___x_2543_, v___x_2544_, v_args_2540_, v___x_2545_);
if (lean_obj_tag(v___x_2546_) == 0)
{
lean_object* v_a_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v_a_2547_ = lean_ctor_get(v___x_2546_, 0);
lean_inc(v_a_2547_);
lean_dec_ref_known(v___x_2546_, 1);
v___x_2548_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_2549_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_2548_, v_a_2547_);
lean_dec(v_a_2547_);
return v___x_2549_;
}
else
{
return v___x_2546_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object* v_c_2550_, lean_object* v_args_2551_, lean_object* v_a_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_c_2550_, v_args_2551_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object* v___x_2554_, uint8_t v___x_2555_, lean_object* v___f_2556_, lean_object* v_a_2557_, lean_object* v_x_2558_){
_start:
{
lean_object* v_val_2561_; 
if (lean_obj_tag(v_x_2558_) == 0)
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2572_; 
lean_dec(v_a_2557_);
lean_dec_ref(v___f_2556_);
lean_dec(v___x_2554_);
v_a_2564_ = lean_ctor_get(v_x_2558_, 0);
v_isSharedCheck_2572_ = !lean_is_exclusive(v_x_2558_);
if (v_isSharedCheck_2572_ == 0)
{
v___x_2566_ = v_x_2558_;
v_isShared_2567_ = v_isSharedCheck_2572_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v_x_2558_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2572_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2569_; 
if (v_isShared_2567_ == 0)
{
v___x_2569_ = v___x_2566_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_a_2564_);
v___x_2569_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
lean_object* v___x_2570_; 
v___x_2570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2569_);
return v___x_2570_;
}
}
}
else
{
lean_object* v_a_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2591_; 
v_a_2573_ = lean_ctor_get(v_x_2558_, 0);
v_isSharedCheck_2591_ = !lean_is_exclusive(v_x_2558_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2575_ = v_x_2558_;
v_isShared_2576_ = v_isSharedCheck_2591_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_a_2573_);
lean_dec(v_x_2558_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2591_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2577_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2578_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2578_, 0, v_a_2573_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
v___x_2579_ = lean_unsigned_to_nat(1u);
v___x_2580_ = lean_mk_empty_array_with_capacity(v___x_2579_);
v___x_2581_ = lean_array_push(v___x_2580_, v___x_2578_);
v___x_2582_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_2557_, v___x_2581_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; lean_object* v___x_2585_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_a_2583_);
lean_dec_ref_known(v___x_2582_, 1);
if (v_isShared_2576_ == 0)
{
lean_ctor_set(v___x_2575_, 0, v_a_2583_);
v___x_2585_ = v___x_2575_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_a_2583_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
v_val_2561_ = v___x_2585_;
goto v___jp_2560_;
}
}
else
{
lean_object* v_a_2587_; lean_object* v___x_2589_; 
v_a_2587_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_a_2587_);
lean_dec_ref_known(v___x_2582_, 1);
if (v_isShared_2576_ == 0)
{
lean_ctor_set_tag(v___x_2575_, 0);
lean_ctor_set(v___x_2575_, 0, v_a_2587_);
v___x_2589_ = v___x_2575_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v_a_2587_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
v_val_2561_ = v___x_2589_;
goto v___jp_2560_;
}
}
}
}
v___jp_2560_:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2562_, 0, v_val_2561_);
v___x_2563_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2554_, v___x_2555_, v___x_2562_, v___f_2556_);
return v___x_2563_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object* v___x_2592_, lean_object* v___x_2593_, lean_object* v___f_2594_, lean_object* v_a_2595_, lean_object* v_x_2596_, lean_object* v___y_2597_){
_start:
{
uint8_t v___x_7889__boxed_2598_; lean_object* v_res_2599_; 
v___x_7889__boxed_2598_ = lean_unbox(v___x_2593_);
v_res_2599_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___x_2592_, v___x_7889__boxed_2598_, v___f_2594_, v_a_2595_, v_x_2596_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v_headers_2602_, lean_object* v___x_2603_, lean_object* v___x_2604_, lean_object* v___f_2605_, lean_object* v_x_2606_){
_start:
{
if (lean_obj_tag(v_x_2606_) == 0)
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2616_; 
lean_dec_ref(v___f_2605_);
lean_dec(v___x_2604_);
lean_dec_ref(v___x_2603_);
lean_dec_ref(v_headers_2602_);
lean_dec_ref(v___y_2601_);
lean_dec_ref(v___y_2600_);
v_a_2608_ = lean_ctor_get(v_x_2606_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v_x_2606_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2610_ = v_x_2606_;
v_isShared_2611_ = v_isSharedCheck_2616_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v_x_2606_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2616_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2613_; 
if (v_isShared_2611_ == 0)
{
v___x_2613_ = v___x_2610_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v_a_2608_);
v___x_2613_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
lean_object* v___x_2614_; 
v___x_2614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2613_);
return v___x_2614_;
}
}
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2628_; 
v_a_2617_ = lean_ctor_get(v_x_2606_, 0);
v_isSharedCheck_2628_ = !lean_is_exclusive(v_x_2606_);
if (v_isSharedCheck_2628_ == 0)
{
v___x_2619_ = v_x_2606_;
v_isShared_2620_ = v_isSharedCheck_2628_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v_x_2606_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2628_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2621_; uint8_t v___x_2622_; lean_object* v___x_2624_; 
v___x_2621_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2621_, 0, v___y_2600_);
lean_ctor_set(v___x_2621_, 1, v___y_2601_);
lean_ctor_set(v___x_2621_, 2, v_headers_2602_);
lean_ctor_set(v___x_2621_, 3, v___x_2603_);
lean_ctor_set(v___x_2621_, 4, v_a_2617_);
v___x_2622_ = 0;
if (v_isShared_2620_ == 0)
{
lean_ctor_set(v___x_2619_, 0, v___x_2621_);
v___x_2624_ = v___x_2619_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v___x_2621_);
v___x_2624_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2624_);
v___x_2626_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2604_, v___x_2622_, v___x_2625_, v___f_2605_);
return v___x_2626_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v_headers_2631_, lean_object* v___x_2632_, lean_object* v___x_2633_, lean_object* v___f_2634_, lean_object* v_x_2635_, lean_object* v___y_2636_){
_start:
{
lean_object* v_res_2637_; 
v_res_2637_ = l_Lasm_Fetch_jsFetchHandler___lam__5(v___y_2629_, v___y_2630_, v_headers_2631_, v___x_2632_, v___x_2633_, v___f_2634_, v_x_2635_);
return v_res_2637_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(lean_object* v___f_2638_, lean_object* v_x_2639_){
_start:
{
if (lean_obj_tag(v_x_2639_) == 0)
{
lean_object* v_a_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2649_; 
lean_dec_ref(v___f_2638_);
v_a_2641_ = lean_ctor_get(v_x_2639_, 0);
v_isSharedCheck_2649_ = !lean_is_exclusive(v_x_2639_);
if (v_isSharedCheck_2649_ == 0)
{
v___x_2643_ = v_x_2639_;
v_isShared_2644_ = v_isSharedCheck_2649_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_a_2641_);
lean_dec(v_x_2639_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2649_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2646_; 
if (v_isShared_2644_ == 0)
{
v___x_2646_ = v___x_2643_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_a_2641_);
v___x_2646_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
lean_object* v___x_2647_; 
v___x_2647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2647_, 0, v___x_2646_);
return v___x_2647_;
}
}
}
else
{
lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2661_; 
v_isSharedCheck_2661_ = !lean_is_exclusive(v_x_2639_);
if (v_isSharedCheck_2661_ == 0)
{
lean_object* v_unused_2662_; 
v_unused_2662_ = lean_ctor_get(v_x_2639_, 0);
lean_dec(v_unused_2662_);
v___x_2651_ = v_x_2639_;
v_isShared_2652_ = v_isSharedCheck_2661_;
goto v_resetjp_2650_;
}
else
{
lean_dec(v_x_2639_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2661_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
lean_object* v___x_2653_; uint8_t v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2657_; 
v___x_2653_ = lean_unsigned_to_nat(0u);
v___x_2654_ = 0;
v___x_2655_ = lean_io_promise_new();
if (v_isShared_2652_ == 0)
{
lean_ctor_set(v___x_2651_, 0, v___x_2655_);
v___x_2657_ = v___x_2651_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v___x_2655_);
v___x_2657_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2657_);
v___x_2659_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2653_, v___x_2654_, v___x_2658_, v___f_2638_);
return v___x_2659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed(lean_object* v___f_2663_, lean_object* v_x_2664_, lean_object* v___y_2665_){
_start:
{
lean_object* v_res_2666_; 
v_res_2666_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(v___f_2663_, v_x_2664_);
return v_res_2666_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(lean_object* v___f_2667_, lean_object* v_x_2668_){
_start:
{
if (lean_obj_tag(v_x_2668_) == 0)
{
lean_object* v_a_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2678_; 
lean_dec_ref(v___f_2667_);
v_a_2670_ = lean_ctor_get(v_x_2668_, 0);
v_isSharedCheck_2678_ = !lean_is_exclusive(v_x_2668_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2672_ = v_x_2668_;
v_isShared_2673_ = v_isSharedCheck_2678_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_a_2670_);
lean_dec(v_x_2668_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2678_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2675_; 
if (v_isShared_2673_ == 0)
{
v___x_2675_ = v___x_2672_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v_a_2670_);
v___x_2675_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
lean_object* v___x_2676_; 
v___x_2676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
return v___x_2676_;
}
}
}
else
{
lean_object* v_a_2679_; lean_object* v___x_2680_; 
v_a_2679_ = lean_ctor_get(v_x_2668_, 0);
lean_inc(v_a_2679_);
lean_dec_ref_known(v_x_2668_, 1);
v___x_2680_ = lean_apply_2(v___f_2667_, v_a_2679_, lean_box(0));
return v___x_2680_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed(lean_object* v___f_2681_, lean_object* v_x_2682_, lean_object* v___y_2683_){
_start:
{
lean_object* v_res_2684_; 
v_res_2684_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(v___f_2681_, v_x_2682_);
return v_res_2684_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(lean_object* v___f_2685_, lean_object* v_bytes_2686_){
_start:
{
lean_object* v___x_2688_; uint8_t v___x_2689_; lean_object* v_val_2691_; lean_object* v___x_2694_; 
v___x_2688_ = lean_unsigned_to_nat(0u);
v___x_2689_ = 0;
v___x_2694_ = l_Lasm_JS_Wire_decode(v_bytes_2686_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2694_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2694_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
lean_ctor_set_tag(v___x_2697_, 1);
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
v_val_2691_ = v___x_2700_;
goto v___jp_2690_;
}
}
}
else
{
lean_object* v_a_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2710_; 
v_a_2703_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2705_ = v___x_2694_;
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_a_2703_);
lean_dec(v___x_2694_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2708_; 
if (v_isShared_2706_ == 0)
{
lean_ctor_set_tag(v___x_2705_, 0);
v___x_2708_ = v___x_2705_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_a_2703_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
v_val_2691_ = v___x_2708_;
goto v___jp_2690_;
}
}
}
v___jp_2690_:
{
lean_object* v___x_2692_; lean_object* v___x_2693_; 
v___x_2692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2692_, 0, v_val_2691_);
v___x_2693_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2688_, v___x_2689_, v___x_2692_, v___f_2685_);
return v___x_2693_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed(lean_object* v___f_2711_, lean_object* v_bytes_2712_, lean_object* v___y_2713_){
_start:
{
lean_object* v_res_2714_; 
v_res_2714_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(v___f_2711_, v_bytes_2712_);
lean_dec_ref(v_bytes_2712_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(lean_object* v_payload_2715_, lean_object* v_failurePrefix_2716_, lean_object* v___f_2717_, lean_object* v___f_2718_, uint32_t v_op_2719_, uint64_t v_flags_2720_, lean_object* v___f_2721_, lean_object* v_x_2722_){
_start:
{
if (lean_obj_tag(v_x_2722_) == 0)
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2732_; 
lean_dec_ref(v___f_2721_);
lean_dec_ref(v___f_2718_);
lean_dec_ref(v___f_2717_);
v_a_2724_ = lean_ctor_get(v_x_2722_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v_x_2722_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2726_ = v_x_2722_;
v_isShared_2727_ = v_isSharedCheck_2732_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v_x_2722_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2732_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_a_2724_);
v___x_2729_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
lean_object* v___x_2730_; 
v___x_2730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2729_);
return v___x_2730_;
}
}
}
else
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2774_; 
v_a_2733_ = lean_ctor_get(v_x_2722_, 0);
v_isSharedCheck_2774_ = !lean_is_exclusive(v_x_2722_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2735_ = v_x_2722_;
v_isShared_2736_ = v_isSharedCheck_2774_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v_x_2722_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2774_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
uint32_t v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; uint8_t v___x_2741_; 
v___x_2737_ = 0;
v___x_2738_ = l_Lasm_JS_Wire_encode(v_payload_2715_);
v___x_2739_ = lean_string_utf8_byte_size(v_failurePrefix_2716_);
v___x_2740_ = lean_unsigned_to_nat(0u);
v___x_2741_ = lean_nat_dec_eq(v___x_2739_, v___x_2740_);
if (v___x_2741_ == 0)
{
lean_object* v___f_2742_; lean_object* v_val_2744_; lean_object* v___x_2749_; 
lean_dec_ref(v___f_2721_);
lean_inc(v_a_2733_);
v___f_2742_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2742_, 0, v_a_2733_);
v___x_2749_ = lasm_js_call_into(v_a_2733_, v_op_2719_, v___x_2737_, v_flags_2720_, v___x_2738_, v_payload_2715_);
lean_dec_ref(v___x_2738_);
lean_dec(v_a_2733_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v_a_2750_; lean_object* v___x_2752_; 
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
lean_inc(v_a_2750_);
lean_dec_ref_known(v___x_2749_, 1);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v_a_2750_);
v___x_2752_ = v___x_2735_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_a_2750_);
v___x_2752_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
v_val_2744_ = v___x_2752_;
goto v___jp_2743_;
}
}
else
{
lean_object* v_a_2754_; lean_object* v___x_2756_; 
v_a_2754_ = lean_ctor_get(v___x_2749_, 0);
lean_inc(v_a_2754_);
lean_dec_ref_known(v___x_2749_, 1);
if (v_isShared_2736_ == 0)
{
lean_ctor_set_tag(v___x_2735_, 0);
lean_ctor_set(v___x_2735_, 0, v_a_2754_);
v___x_2756_ = v___x_2735_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v_a_2754_);
v___x_2756_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
v_val_2744_ = v___x_2756_;
goto v___jp_2743_;
}
}
v___jp_2743_:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2745_, 0, v_val_2744_);
v___x_2746_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2740_, v___x_2741_, v___x_2745_, v___f_2742_);
v___x_2747_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2740_, v___x_2741_, v___x_2746_, v___f_2717_);
v___x_2748_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2740_, v___x_2741_, v___x_2747_, v___f_2718_);
return v___x_2748_;
}
}
else
{
lean_object* v___f_2758_; uint8_t v___x_2759_; lean_object* v_val_2761_; lean_object* v___x_2765_; 
lean_dec_ref(v___f_2718_);
lean_dec_ref(v___f_2717_);
lean_inc(v_a_2733_);
v___f_2758_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2758_, 0, v_a_2733_);
v___x_2759_ = 0;
v___x_2765_ = lasm_js_call_into(v_a_2733_, v_op_2719_, v___x_2737_, v_flags_2720_, v___x_2738_, v_payload_2715_);
lean_dec_ref(v___x_2738_);
lean_dec(v_a_2733_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; lean_object* v___x_2768_; 
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2766_);
lean_dec_ref_known(v___x_2765_, 1);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 0, v_a_2766_);
v___x_2768_ = v___x_2735_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_a_2766_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
v_val_2761_ = v___x_2768_;
goto v___jp_2760_;
}
}
else
{
lean_object* v_a_2770_; lean_object* v___x_2772_; 
v_a_2770_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2770_);
lean_dec_ref_known(v___x_2765_, 1);
if (v_isShared_2736_ == 0)
{
lean_ctor_set_tag(v___x_2735_, 0);
lean_ctor_set(v___x_2735_, 0, v_a_2770_);
v___x_2772_ = v___x_2735_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v_a_2770_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
v_val_2761_ = v___x_2772_;
goto v___jp_2760_;
}
}
v___jp_2760_:
{
lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2762_, 0, v_val_2761_);
v___x_2763_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2740_, v___x_2759_, v___x_2762_, v___f_2758_);
v___x_2764_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2740_, v___x_2759_, v___x_2763_, v___f_2721_);
return v___x_2764_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed(lean_object* v_payload_2775_, lean_object* v_failurePrefix_2776_, lean_object* v___f_2777_, lean_object* v___f_2778_, lean_object* v_op_2779_, lean_object* v_flags_2780_, lean_object* v___f_2781_, lean_object* v_x_2782_, lean_object* v___y_2783_){
_start:
{
uint32_t v_op_boxed_2784_; uint64_t v_flags_boxed_2785_; lean_object* v_res_2786_; 
v_op_boxed_2784_ = lean_unbox_uint32(v_op_2779_);
lean_dec(v_op_2779_);
v_flags_boxed_2785_ = lean_unbox_uint64(v_flags_2780_);
lean_dec_ref(v_flags_2780_);
v_res_2786_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(v_payload_2775_, v_failurePrefix_2776_, v___f_2777_, v___f_2778_, v_op_boxed_2784_, v_flags_boxed_2785_, v___f_2781_, v_x_2782_);
lean_dec_ref(v_failurePrefix_2776_);
lean_dec(v_payload_2775_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(lean_object* v_context_2787_, lean_object* v_x_2788_){
_start:
{
lean_object* v_val_2791_; 
if (lean_obj_tag(v_x_2788_) == 0)
{
lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2801_; 
v_a_2793_ = lean_ctor_get(v_x_2788_, 0);
v_isSharedCheck_2801_ = !lean_is_exclusive(v_x_2788_);
if (v_isSharedCheck_2801_ == 0)
{
v___x_2795_ = v_x_2788_;
v_isShared_2796_ = v_isSharedCheck_2801_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_dec(v_x_2788_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2801_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v___x_2798_; 
if (v_isShared_2796_ == 0)
{
v___x_2798_ = v___x_2795_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_a_2793_);
v___x_2798_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
lean_object* v___x_2799_; 
v___x_2799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2798_);
return v___x_2799_;
}
}
}
else
{
lean_object* v_a_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2815_; 
v_a_2802_ = lean_ctor_get(v_x_2788_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v_x_2788_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2804_ = v_x_2788_;
v_isShared_2805_ = v_isSharedCheck_2815_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_a_2802_);
lean_dec(v_x_2788_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2815_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2806_; 
v___x_2806_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_2787_, v_a_2802_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_object* v_a_2807_; lean_object* v___x_2809_; 
v_a_2807_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_a_2807_);
lean_dec_ref_known(v___x_2806_, 1);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 0, v_a_2807_);
v___x_2809_ = v___x_2804_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_a_2807_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
v_val_2791_ = v___x_2809_;
goto v___jp_2790_;
}
}
else
{
lean_object* v_a_2811_; lean_object* v___x_2813_; 
v_a_2811_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_a_2811_);
lean_dec_ref_known(v___x_2806_, 1);
if (v_isShared_2805_ == 0)
{
lean_ctor_set_tag(v___x_2804_, 0);
lean_ctor_set(v___x_2804_, 0, v_a_2811_);
v___x_2813_ = v___x_2804_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_a_2811_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
v_val_2791_ = v___x_2813_;
goto v___jp_2790_;
}
}
}
}
v___jp_2790_:
{
lean_object* v___x_2792_; 
v___x_2792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2792_, 0, v_val_2791_);
return v___x_2792_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed(lean_object* v_context_2816_, lean_object* v_x_2817_, lean_object* v___y_2818_){
_start:
{
lean_object* v_res_2819_; 
v_res_2819_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(v_context_2816_, v_x_2817_);
lean_dec_ref(v_context_2816_);
return v_res_2819_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(lean_object* v_context_2820_, uint32_t v_op_2821_, uint64_t v_flags_2822_, lean_object* v_payload_2823_, lean_object* v_failurePrefix_2824_){
_start:
{
lean_object* v___f_2826_; lean_object* v___f_2827_; lean_object* v___f_2828_; lean_object* v___f_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___f_2832_; lean_object* v___f_2833_; lean_object* v___x_2834_; uint8_t v___x_2835_; lean_object* v_val_2837_; lean_object* v___x_2840_; 
lean_inc_ref(v_failurePrefix_2824_);
v___f_2826_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2826_, 0, v_failurePrefix_2824_);
v___f_2827_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2827_, 0, v_context_2820_);
v___f_2828_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2828_, 0, v___f_2827_);
v___f_2829_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2829_, 0, v___f_2828_);
v___x_2830_ = lean_box_uint32(v_op_2821_);
v___x_2831_ = lean_box_uint64(v_flags_2822_);
lean_inc_ref(v___f_2829_);
v___f_2832_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2832_, 0, v_payload_2823_);
lean_closure_set(v___f_2832_, 1, v_failurePrefix_2824_);
lean_closure_set(v___f_2832_, 2, v___f_2826_);
lean_closure_set(v___f_2832_, 3, v___f_2829_);
lean_closure_set(v___f_2832_, 4, v___x_2830_);
lean_closure_set(v___f_2832_, 5, v___x_2831_);
lean_closure_set(v___f_2832_, 6, v___f_2829_);
v___f_2833_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2833_, 0, v___f_2832_);
v___x_2834_ = lean_unsigned_to_nat(0u);
v___x_2835_ = 0;
v___x_2840_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2840_) == 0)
{
lean_object* v_a_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2848_; 
v_a_2841_ = lean_ctor_get(v___x_2840_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v___x_2840_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2843_ = v___x_2840_;
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_a_2841_);
lean_dec(v___x_2840_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v___x_2846_; 
if (v_isShared_2844_ == 0)
{
lean_ctor_set_tag(v___x_2843_, 1);
v___x_2846_ = v___x_2843_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v_a_2841_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
v_val_2837_ = v___x_2846_;
goto v___jp_2836_;
}
}
}
else
{
lean_object* v_a_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2856_; 
v_a_2849_ = lean_ctor_get(v___x_2840_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2840_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2851_ = v___x_2840_;
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_a_2849_);
lean_dec(v___x_2840_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2854_; 
if (v_isShared_2852_ == 0)
{
lean_ctor_set_tag(v___x_2851_, 0);
v___x_2854_ = v___x_2851_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2849_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
v_val_2837_ = v___x_2854_;
goto v___jp_2836_;
}
}
}
v___jp_2836_:
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2838_, 0, v_val_2837_);
v___x_2839_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2834_, v___x_2835_, v___x_2838_, v___f_2833_);
return v___x_2839_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___boxed(lean_object* v_context_2857_, lean_object* v_op_2858_, lean_object* v_flags_2859_, lean_object* v_payload_2860_, lean_object* v_failurePrefix_2861_, lean_object* v_a_2862_){
_start:
{
uint32_t v_op_boxed_2863_; uint64_t v_flags_boxed_2864_; lean_object* v_res_2865_; 
v_op_boxed_2863_ = lean_unbox_uint32(v_op_2858_);
lean_dec(v_op_2858_);
v_flags_boxed_2864_ = lean_unbox_uint64(v_flags_2859_);
lean_dec_ref(v_flags_2859_);
v_res_2865_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v_context_2857_, v_op_boxed_2863_, v_flags_boxed_2864_, v_payload_2860_, v_failurePrefix_2861_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object* v_o_2866_, lean_object* v_name_2867_, lean_object* v_args_2868_){
_start:
{
lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; uint32_t v___x_2875_; uint64_t v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v___x_2870_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2871_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2871_, 0, v_o_2866_);
lean_ctor_set(v___x_2871_, 1, v___x_2870_);
lean_inc_ref(v_name_2867_);
v___x_2872_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2872_, 0, v_name_2867_);
v___x_2873_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_2874_ = lean_string_append(v___x_2873_, v_name_2867_);
lean_dec_ref(v_name_2867_);
v___x_2875_ = 205;
v___x_2876_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_2877_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2877_, 0, v_args_2868_);
v___x_2878_ = lean_unsigned_to_nat(3u);
v___x_2879_ = lean_mk_empty_array_with_capacity(v___x_2878_);
v___x_2880_ = lean_array_push(v___x_2879_, v___x_2871_);
v___x_2881_ = lean_array_push(v___x_2880_, v___x_2872_);
v___x_2882_ = lean_array_push(v___x_2881_, v___x_2877_);
v___x_2883_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2882_);
v___x_2884_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_2874_, v___x_2875_, v___x_2876_, v___x_2883_, v___x_2870_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object* v_o_2885_, lean_object* v_name_2886_, lean_object* v_args_2887_, lean_object* v___y_2888_){
_start:
{
lean_object* v_res_2889_; 
v_res_2889_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_o_2885_, v_name_2886_, v_args_2887_);
return v_res_2889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object* v___x_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v_options_2894_, lean_object* v___f_2895_, lean_object* v___f_2896_, lean_object* v_a_2897_, lean_object* v_value_2898_, lean_object* v_a_2899_, lean_object* v___x_2900_, lean_object* v___f_2901_, lean_object* v___f_2902_, lean_object* v_headers_2903_){
_start:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___f_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; uint8_t v___x_2917_; 
v___x_2905_ = lean_mk_empty_array_with_capacity(v___x_2891_);
v___x_2906_ = l_ByteArray_empty;
v___f_2907_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_2905_);
lean_inc_ref(v___y_2893_);
lean_inc_ref(v___y_2892_);
v___x_2908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2908_, 0, v___y_2892_);
lean_ctor_set(v___x_2908_, 1, v___y_2893_);
lean_ctor_set(v___x_2908_, 2, v___x_2905_);
lean_ctor_set(v___x_2908_, 3, v___x_2906_);
lean_ctor_set(v___x_2908_, 4, v___f_2907_);
v___x_2909_ = l_Lasm_Fetch_Request_path(v___x_2908_);
v___x_2910_ = lean_apply_1(v_options_2894_, v___x_2909_);
v___x_2917_ = lean_unbox(v___x_2910_);
if (v___x_2917_ == 0)
{
lean_object* v___x_2918_; uint8_t v___x_2919_; 
lean_dec_ref(v___f_2902_);
lean_dec_ref(v___f_2901_);
v___x_2918_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_2919_ = lean_string_dec_eq(v___y_2892_, v___x_2918_);
if (v___x_2919_ == 0)
{
lean_object* v___x_2920_; uint8_t v___x_2921_; 
v___x_2920_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_2921_ = lean_string_dec_eq(v___y_2892_, v___x_2920_);
if (v___x_2921_ == 0)
{
lean_object* v___x_2922_; lean_object* v___f_2923_; lean_object* v___x_2924_; lean_object* v___f_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
lean_dec_ref(v___f_2895_);
v___x_2922_ = lean_box(v___x_2921_);
lean_inc_n(v___x_2891_, 2);
v___f_2923_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__8___boxed), 9, 7);
lean_closure_set(v___f_2923_, 0, v___y_2892_);
lean_closure_set(v___f_2923_, 1, v___y_2893_);
lean_closure_set(v___f_2923_, 2, v_headers_2903_);
lean_closure_set(v___f_2923_, 3, v___f_2907_);
lean_closure_set(v___f_2923_, 4, v___x_2891_);
lean_closure_set(v___f_2923_, 5, v___x_2922_);
lean_closure_set(v___f_2923_, 6, v___f_2896_);
v___x_2924_ = lean_box(v___x_2921_);
v___f_2925_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2925_, 0, v___x_2891_);
lean_closure_set(v___f_2925_, 1, v___x_2924_);
lean_closure_set(v___f_2925_, 2, v___f_2923_);
lean_closure_set(v___f_2925_, 3, v_a_2897_);
v___x_2926_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_2927_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_value_2898_, v___x_2926_, v___x_2905_);
v___x_2928_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2891_, v___x_2921_, v___x_2927_, v___f_2925_);
return v___x_2928_;
}
else
{
lean_dec_ref(v___x_2905_);
lean_dec(v_value_2898_);
lean_dec(v_a_2897_);
lean_dec_ref(v___f_2896_);
goto v___jp_2911_;
}
}
else
{
lean_dec_ref(v___x_2905_);
lean_dec(v_value_2898_);
lean_dec(v_a_2897_);
lean_dec_ref(v___f_2896_);
goto v___jp_2911_;
}
}
else
{
lean_object* v___x_2929_; 
lean_dec_ref(v___x_2905_);
lean_dec(v_value_2898_);
lean_dec(v_a_2897_);
lean_dec_ref(v___f_2896_);
lean_dec_ref(v___f_2895_);
v___x_2929_ = l_Lasm_JS_Data_field(v_a_2899_, v___x_2900_);
if (lean_obj_tag(v___x_2929_) == 9)
{
lean_object* v_value_2930_; lean_object* v___f_2931_; uint8_t v___x_2932_; lean_object* v_val_2934_; lean_object* v___x_2937_; 
lean_dec_ref(v___f_2902_);
v_value_2930_ = lean_ctor_get(v___x_2929_, 0);
lean_inc(v_value_2930_);
lean_dec_ref_known(v___x_2929_, 2);
lean_inc(v___x_2891_);
v___f_2931_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2931_, 0, v___y_2892_);
lean_closure_set(v___f_2931_, 1, v___y_2893_);
lean_closure_set(v___f_2931_, 2, v_headers_2903_);
lean_closure_set(v___f_2931_, 3, v___x_2906_);
lean_closure_set(v___f_2931_, 4, v___x_2891_);
lean_closure_set(v___f_2931_, 5, v___f_2901_);
v___x_2932_ = 0;
v___x_2937_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_value_2930_);
if (lean_obj_tag(v___x_2937_) == 0)
{
lean_object* v_a_2938_; lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2945_; 
v_a_2938_ = lean_ctor_get(v___x_2937_, 0);
v_isSharedCheck_2945_ = !lean_is_exclusive(v___x_2937_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2940_ = v___x_2937_;
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
else
{
lean_inc(v_a_2938_);
lean_dec(v___x_2937_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2943_; 
if (v_isShared_2941_ == 0)
{
lean_ctor_set_tag(v___x_2940_, 1);
v___x_2943_ = v___x_2940_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v_a_2938_);
v___x_2943_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
v_val_2934_ = v___x_2943_;
goto v___jp_2933_;
}
}
}
else
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2953_; 
v_a_2946_ = lean_ctor_get(v___x_2937_, 0);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___x_2937_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2948_ = v___x_2937_;
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v___x_2937_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
lean_ctor_set_tag(v___x_2948_, 0);
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_a_2946_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
v_val_2934_ = v___x_2951_;
goto v___jp_2933_;
}
}
}
v___jp_2933_:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2935_, 0, v_val_2934_);
v___x_2936_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2891_, v___x_2932_, v___x_2935_, v___f_2931_);
return v___x_2936_;
}
}
else
{
lean_object* v___x_2954_; uint8_t v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
lean_dec(v___x_2929_);
lean_dec_ref(v___f_2901_);
v___x_2954_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2954_, 0, v___y_2892_);
lean_ctor_set(v___x_2954_, 1, v___y_2893_);
lean_ctor_set(v___x_2954_, 2, v_headers_2903_);
lean_ctor_set(v___x_2954_, 3, v___x_2906_);
lean_ctor_set(v___x_2954_, 4, v___f_2907_);
v___x_2955_ = 0;
v___x_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2956_, 0, v___x_2954_);
v___x_2957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2956_);
v___x_2958_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2891_, v___x_2955_, v___x_2957_, v___f_2902_);
return v___x_2958_;
}
}
v___jp_2911_:
{
lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; uint8_t v___x_2915_; lean_object* v___x_2916_; 
v___x_2912_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2912_, 0, v___y_2892_);
lean_ctor_set(v___x_2912_, 1, v___y_2893_);
lean_ctor_set(v___x_2912_, 2, v_headers_2903_);
lean_ctor_set(v___x_2912_, 3, v___x_2906_);
lean_ctor_set(v___x_2912_, 4, v___f_2907_);
v___x_2913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2912_);
v___x_2914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2913_);
v___x_2915_ = lean_unbox(v___x_2910_);
v___x_2916_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2891_, v___x_2915_, v___x_2914_, v___f_2895_);
return v___x_2916_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object* v___x_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v_options_2962_, lean_object* v___f_2963_, lean_object* v___f_2964_, lean_object* v_a_2965_, lean_object* v_value_2966_, lean_object* v_a_2967_, lean_object* v___x_2968_, lean_object* v___f_2969_, lean_object* v___f_2970_, lean_object* v_headers_2971_, lean_object* v___y_2972_){
_start:
{
lean_object* v_res_2973_; 
v_res_2973_ = l_Lasm_Fetch_jsFetchHandler___lam__6(v___x_2959_, v___y_2960_, v___y_2961_, v_options_2962_, v___f_2963_, v___f_2964_, v_a_2965_, v_value_2966_, v_a_2967_, v___x_2968_, v___f_2969_, v___f_2970_, v_headers_2971_);
lean_dec_ref(v___x_2968_);
lean_dec(v_a_2967_);
return v_res_2973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object* v___f_2974_, lean_object* v_x_2975_){
_start:
{
if (lean_obj_tag(v_x_2975_) == 0)
{
lean_object* v_a_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_2985_; 
lean_dec_ref(v___f_2974_);
v_a_2977_ = lean_ctor_get(v_x_2975_, 0);
v_isSharedCheck_2985_ = !lean_is_exclusive(v_x_2975_);
if (v_isSharedCheck_2985_ == 0)
{
v___x_2979_ = v_x_2975_;
v_isShared_2980_ = v_isSharedCheck_2985_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_a_2977_);
lean_dec(v_x_2975_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_2985_;
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
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v_a_2977_);
v___x_2982_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
lean_object* v___x_2983_; 
v___x_2983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2982_);
return v___x_2983_;
}
}
}
else
{
lean_object* v_a_2986_; lean_object* v___x_2987_; 
v_a_2986_ = lean_ctor_get(v_x_2975_, 0);
lean_inc(v_a_2986_);
lean_dec_ref_known(v_x_2975_, 1);
v___x_2987_ = lean_apply_2(v___f_2974_, v_a_2986_, lean_box(0));
return v___x_2987_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object* v___f_2988_, lean_object* v_x_2989_, lean_object* v___y_2990_){
_start:
{
lean_object* v_res_2991_; 
v_res_2991_ = l_Lasm_Fetch_jsFetchHandler___lam__7(v___f_2988_, v_x_2989_);
return v_res_2991_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(uint8_t v_await_2992_, uint64_t v_extra_2993_){
_start:
{
uint64_t v___x_2994_; uint64_t v___y_2996_; 
v___x_2994_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_2992_ == 0)
{
uint64_t v___x_2999_; 
v___x_2999_ = 0ULL;
v___y_2996_ = v___x_2999_;
goto v___jp_2995_;
}
else
{
uint64_t v___x_3000_; 
v___x_3000_ = 2ULL;
v___y_2996_ = v___x_3000_;
goto v___jp_2995_;
}
v___jp_2995_:
{
uint64_t v___x_2997_; uint64_t v___x_2998_; 
v___x_2997_ = lean_uint64_lor(v___x_2994_, v___y_2996_);
v___x_2998_ = lean_uint64_lor(v___x_2997_, v_extra_2993_);
return v___x_2998_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5___boxed(lean_object* v_await_3001_, lean_object* v_extra_3002_){
_start:
{
uint8_t v_await_boxed_3003_; uint64_t v_extra_boxed_3004_; uint64_t v_res_3005_; lean_object* v_r_3006_; 
v_await_boxed_3003_ = lean_unbox(v_await_3001_);
v_extra_boxed_3004_ = lean_unbox_uint64(v_extra_3002_);
lean_dec_ref(v_extra_3002_);
v_res_3005_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v_await_boxed_3003_, v_extra_boxed_3004_);
v_r_3006_ = lean_box_uint64(v_res_3005_);
return v_r_3006_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(size_t v_sz_3012_, size_t v_i_3013_, lean_object* v_bs_3014_){
_start:
{
uint8_t v___x_3017_; 
v___x_3017_ = lean_usize_dec_lt(v_i_3013_, v_sz_3012_);
if (v___x_3017_ == 0)
{
lean_object* v___x_3018_; 
v___x_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3018_, 0, v_bs_3014_);
return v___x_3018_;
}
else
{
lean_object* v_v_3019_; 
v_v_3019_ = lean_array_uget_borrowed(v_bs_3014_, v_i_3013_);
if (lean_obj_tag(v_v_3019_) == 7)
{
lean_object* v_items_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; uint8_t v___x_3023_; 
v_items_3020_ = lean_ctor_get(v_v_3019_, 0);
v___x_3021_ = lean_array_get_size(v_items_3020_);
v___x_3022_ = lean_unsigned_to_nat(2u);
v___x_3023_ = lean_nat_dec_eq(v___x_3021_, v___x_3022_);
if (v___x_3023_ == 0)
{
lean_dec_ref(v_bs_3014_);
goto v___jp_3015_;
}
else
{
lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3024_ = lean_unsigned_to_nat(0u);
v___x_3025_ = lean_array_fget_borrowed(v_items_3020_, v___x_3024_);
if (lean_obj_tag(v___x_3025_) == 4)
{
lean_object* v_s_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v_s_3026_ = lean_ctor_get(v___x_3025_, 0);
lean_inc_ref(v_s_3026_);
v___x_3027_ = lean_unsigned_to_nat(1u);
v___x_3028_ = lean_array_fget_borrowed(v_items_3020_, v___x_3027_);
if (lean_obj_tag(v___x_3028_) == 4)
{
lean_object* v_s_3029_; lean_object* v_bs_x27_3030_; lean_object* v___x_3031_; size_t v___x_3032_; size_t v___x_3033_; lean_object* v___x_3034_; 
v_s_3029_ = lean_ctor_get(v___x_3028_, 0);
lean_inc_ref(v_s_3029_);
v_bs_x27_3030_ = lean_array_uset(v_bs_3014_, v_i_3013_, v___x_3024_);
v___x_3031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3031_, 0, v_s_3026_);
lean_ctor_set(v___x_3031_, 1, v_s_3029_);
v___x_3032_ = ((size_t)1ULL);
v___x_3033_ = lean_usize_add(v_i_3013_, v___x_3032_);
v___x_3034_ = lean_array_uset(v_bs_x27_3030_, v_i_3013_, v___x_3031_);
v_i_3013_ = v___x_3033_;
v_bs_3014_ = v___x_3034_;
goto _start;
}
else
{
lean_object* v___x_3036_; 
lean_dec_ref(v_s_3026_);
lean_dec_ref(v_bs_3014_);
v___x_3036_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3036_;
}
}
else
{
lean_object* v___x_3037_; 
lean_dec_ref(v_bs_3014_);
v___x_3037_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3037_;
}
}
}
else
{
lean_dec_ref(v_bs_3014_);
goto v___jp_3015_;
}
}
v___jp_3015_:
{
lean_object* v___x_3016_; 
v___x_3016_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1));
return v___x_3016_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___boxed(lean_object* v_sz_3038_, lean_object* v_i_3039_, lean_object* v_bs_3040_){
_start:
{
size_t v_sz_boxed_3041_; size_t v_i_boxed_3042_; lean_object* v_res_3043_; 
v_sz_boxed_3041_ = lean_unbox_usize(v_sz_3038_);
lean_dec(v_sz_3038_);
v_i_boxed_3042_ = lean_unbox_usize(v_i_3039_);
lean_dec(v_i_3039_);
v_res_3043_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_boxed_3041_, v_i_boxed_3042_, v_bs_3040_);
return v_res_3043_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(lean_object* v_context_3048_, lean_object* v_d_3049_){
_start:
{
lean_object* v___y_3052_; lean_object* v___y_3053_; lean_object* v___y_3058_; lean_object* v_received_3059_; lean_object* v___y_3078_; lean_object* v_a_3081_; 
if (lean_obj_tag(v_d_3049_) == 7)
{
lean_object* v_items_3105_; size_t v_sz_3106_; size_t v___x_3107_; lean_object* v___x_3108_; 
v_items_3105_ = lean_ctor_get(v_d_3049_, 0);
v_sz_3106_ = lean_array_size(v_items_3105_);
v___x_3107_ = ((size_t)0ULL);
lean_inc_ref(v_items_3105_);
v___x_3108_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_3106_, v___x_3107_, v_items_3105_);
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_object* v_a_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; uint8_t v___x_3113_; 
v_a_3109_ = lean_ctor_get(v___x_3108_, 0);
lean_inc(v_a_3109_);
lean_dec_ref_known(v___x_3108_, 1);
v___x_3110_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3));
v___x_3111_ = lean_string_utf8_byte_size(v_a_3109_);
v___x_3112_ = lean_unsigned_to_nat(0u);
v___x_3113_ = lean_nat_dec_eq(v___x_3111_, v___x_3112_);
if (v___x_3113_ == 0)
{
lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3114_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_3115_ = lean_string_append(v___x_3114_, v_a_3109_);
lean_dec(v_a_3109_);
v___x_3116_ = lean_string_append(v___x_3110_, v___x_3115_);
lean_dec_ref(v___x_3115_);
v_a_3081_ = v___x_3116_;
goto v___jp_3080_;
}
else
{
lean_dec(v_a_3109_);
v_a_3081_ = v___x_3110_;
goto v___jp_3080_;
}
}
else
{
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_object* v_a_3117_; 
v_a_3117_ = lean_ctor_get(v___x_3108_, 0);
lean_inc(v_a_3117_);
lean_dec_ref_known(v___x_3108_, 1);
v_a_3081_ = v_a_3117_;
goto v___jp_3080_;
}
else
{
lean_object* v_a_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3125_; 
lean_dec_ref_known(v_d_3049_, 1);
v_a_3118_ = lean_ctor_get(v___x_3108_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3120_ = v___x_3108_;
v_isShared_3121_ = v_isSharedCheck_3125_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_a_3118_);
lean_dec(v___x_3108_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3125_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
lean_object* v___x_3123_; 
if (v_isShared_3121_ == 0)
{
lean_ctor_set_tag(v___x_3120_, 0);
v___x_3123_ = v___x_3120_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_a_3118_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
}
}
else
{
lean_object* v___x_3126_; 
v___x_3126_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_3081_ = v___x_3126_;
goto v___jp_3080_;
}
v___jp_3051_:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3054_ = lean_string_append(v___y_3052_, v___y_3053_);
lean_dec_ref(v___y_3053_);
v___x_3055_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3054_);
v___x_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3056_, 0, v___x_3055_);
return v___x_3056_;
}
v___jp_3057_:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; uint8_t v___x_3071_; 
v___x_3060_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_3061_ = lean_string_append(v___x_3060_, v_context_3048_);
v___x_3062_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_3063_ = lean_string_append(v___x_3061_, v___x_3062_);
v___x_3064_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0));
v___x_3065_ = lean_string_append(v___x_3063_, v___x_3064_);
v___x_3066_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_3067_ = lean_string_append(v___x_3065_, v___x_3066_);
v___x_3068_ = lean_string_append(v___x_3067_, v_received_3059_);
lean_dec_ref(v_received_3059_);
v___x_3069_ = lean_string_utf8_byte_size(v___y_3058_);
v___x_3070_ = lean_unsigned_to_nat(0u);
v___x_3071_ = lean_nat_dec_eq(v___x_3069_, v___x_3070_);
if (v___x_3071_ == 0)
{
lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3072_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1));
v___x_3073_ = lean_string_append(v___x_3072_, v___y_3058_);
lean_dec_ref(v___y_3058_);
v___x_3074_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2));
v___x_3075_ = lean_string_append(v___x_3073_, v___x_3074_);
v___y_3052_ = v___x_3068_;
v___y_3053_ = v___x_3075_;
goto v___jp_3051_;
}
else
{
lean_object* v___x_3076_; 
lean_dec_ref(v___y_3058_);
v___x_3076_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_3052_ = v___x_3068_;
v___y_3053_ = v___x_3076_;
goto v___jp_3051_;
}
}
v___jp_3077_:
{
lean_object* v___x_3079_; 
v___x_3079_ = l_Lasm_JS_Data_describe(v_d_3049_);
v___y_3058_ = v___y_3078_;
v_received_3059_ = v___x_3079_;
goto v___jp_3057_;
}
v___jp_3080_:
{
if (lean_obj_tag(v_d_3049_) == 9)
{
lean_object* v_value_3082_; lean_object* v_description_3083_; lean_object* v___x_3084_; uint8_t v___x_3085_; 
v_value_3082_ = lean_ctor_get(v_d_3049_, 0);
v_description_3083_ = lean_ctor_get(v_d_3049_, 1);
v___x_3084_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3085_ = lean_string_dec_eq(v_description_3083_, v___x_3084_);
if (v___x_3085_ == 0)
{
v___y_3078_ = v_a_3081_;
goto v___jp_3077_;
}
else
{
lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3102_; 
lean_inc(v_value_3082_);
v_isSharedCheck_3102_ = !lean_is_exclusive(v_d_3049_);
if (v_isSharedCheck_3102_ == 0)
{
lean_object* v_unused_3103_; lean_object* v_unused_3104_; 
v_unused_3103_ = lean_ctor_get(v_d_3049_, 1);
lean_dec(v_unused_3103_);
v_unused_3104_ = lean_ctor_get(v_d_3049_, 0);
lean_dec(v_unused_3104_);
v___x_3087_ = v_d_3049_;
v_isShared_3088_ = v_isSharedCheck_3102_;
goto v_resetjp_3086_;
}
else
{
lean_dec(v_d_3049_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3102_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
uint32_t v___x_3089_; uint64_t v___x_3090_; lean_object* v___x_3092_; 
v___x_3089_ = 206;
v___x_3090_ = 0ULL;
lean_inc(v_value_3082_);
if (v_isShared_3088_ == 0)
{
lean_ctor_set(v___x_3087_, 1, v___x_3084_);
v___x_3092_ = v___x_3087_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_value_3082_);
lean_ctor_set(v_reuseFailAlloc_3101_, 1, v___x_3084_);
v___x_3092_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
uint32_t v___x_3093_; lean_object* v___x_3094_; 
v___x_3093_ = lasm_js_value_handle(v_value_3082_);
lean_dec(v_value_3082_);
v___x_3094_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3089_, v___x_3090_, v___x_3092_, v___x_3093_);
lean_dec_ref(v___x_3092_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_object* v_a_3095_; uint8_t v___x_3096_; 
v_a_3095_ = lean_ctor_get(v___x_3094_, 0);
lean_inc(v_a_3095_);
lean_dec_ref_known(v___x_3094_, 1);
v___x_3096_ = lean_string_validate_utf8(v_a_3095_);
if (v___x_3096_ == 0)
{
lean_object* v___x_3097_; lean_object* v___x_3098_; 
lean_dec(v_a_3095_);
v___x_3097_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_3098_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3097_);
v___y_3058_ = v_a_3081_;
v_received_3059_ = v___x_3098_;
goto v___jp_3057_;
}
else
{
lean_object* v___x_3099_; 
v___x_3099_ = lean_string_from_utf8_unchecked(v_a_3095_);
v___y_3058_ = v_a_3081_;
v_received_3059_ = v___x_3099_;
goto v___jp_3057_;
}
}
else
{
lean_object* v___x_3100_; 
lean_dec_ref_known(v___x_3094_, 1);
v___x_3100_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v___y_3058_ = v_a_3081_;
v_received_3059_ = v___x_3100_;
goto v___jp_3057_;
}
}
}
}
}
else
{
v___y_3078_ = v_a_3081_;
goto v___jp_3077_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___boxed(lean_object* v_context_3127_, lean_object* v_d_3128_, lean_object* v_a_3129_){
_start:
{
lean_object* v_res_3130_; 
v_res_3130_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3127_, v_d_3128_);
lean_dec_ref(v_context_3127_);
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(lean_object* v_context_3131_, lean_object* v_bytes_3132_){
_start:
{
lean_object* v___x_3134_; 
v___x_3134_ = l_Lasm_JS_Wire_decode(v_bytes_3132_);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v___x_3136_; 
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3135_);
lean_dec_ref_known(v___x_3134_, 1);
v___x_3136_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3131_, v_a_3135_);
return v___x_3136_;
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
v_a_3137_ = lean_ctor_get(v___x_3134_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3134_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3134_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3134_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3142_; 
if (v_isShared_3140_ == 0)
{
v___x_3142_ = v___x_3139_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3137_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6___boxed(lean_object* v_context_3145_, lean_object* v_bytes_3146_, lean_object* v_a_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v_context_3145_, v_bytes_3146_);
lean_dec_ref(v_bytes_3146_);
lean_dec_ref(v_context_3145_);
return v_res_3148_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_3149_; uint8_t v___x_3150_; uint64_t v___x_3151_; 
v___x_3149_ = 8ULL;
v___x_3150_ = 0;
v___x_3151_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v___x_3150_, v___x_3149_);
return v___x_3151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_o_3152_, lean_object* v_name_3153_, lean_object* v_args_3154_){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; uint64_t v___x_3159_; lean_object* v___x_3160_; 
v___x_3156_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3157_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3157_, 0, v_o_3152_);
lean_ctor_set(v___x_3157_, 1, v___x_3156_);
lean_inc_ref(v_name_3153_);
v___x_3158_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3158_, 0, v_name_3153_);
v___x_3159_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_3160_ = l_Lasm_JS_Value_invokeRaw(v___x_3157_, v___x_3158_, v_args_3154_, v___x_3159_);
if (lean_obj_tag(v___x_3160_) == 0)
{
lean_object* v_a_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v_a_3161_ = lean_ctor_get(v___x_3160_, 0);
lean_inc(v_a_3161_);
lean_dec_ref_known(v___x_3160_, 1);
v___x_3162_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3163_ = lean_string_append(v___x_3162_, v_name_3153_);
lean_dec_ref(v_name_3153_);
v___x_3164_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v___x_3163_, v_a_3161_);
lean_dec(v_a_3161_);
lean_dec_ref(v___x_3163_);
return v___x_3164_;
}
else
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
lean_dec_ref(v_name_3153_);
v_a_3165_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3167_ = v___x_3160_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3160_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3172_;
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
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_o_3173_, lean_object* v_name_3174_, lean_object* v_args_3175_, lean_object* v_a_3176_){
_start:
{
lean_object* v_res_3177_; 
v_res_3177_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_o_3173_, v_name_3174_, v_args_3175_);
return v_res_3177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10(lean_object* v___x_3179_, lean_object* v___f_3180_, lean_object* v_handler_3181_, lean_object* v_options_3182_, lean_object* v_a_3183_, lean_object* v_value_3184_, lean_object* v___x_3185_, lean_object* v___x_3186_, lean_object* v_a_3187_, lean_object* v___x_3188_, lean_object* v___x_3189_, lean_object* v_x_3190_){
_start:
{
lean_object* v___y_3193_; uint8_t v___y_3194_; lean_object* v_val_3195_; 
if (lean_obj_tag(v_x_3190_) == 0)
{
lean_object* v___x_3198_; 
lean_dec(v_a_3187_);
lean_dec_ref(v___x_3185_);
lean_dec(v_value_3184_);
lean_dec(v_a_3183_);
lean_dec_ref(v_options_3182_);
lean_dec_ref(v_handler_3181_);
lean_dec_ref(v___f_3180_);
lean_dec(v___x_3179_);
v___x_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3198_, 0, v_x_3190_);
return v___x_3198_;
}
else
{
lean_object* v_a_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3256_; 
v_a_3199_ = lean_ctor_get(v_x_3190_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v_x_3190_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3201_ = v_x_3190_;
v_isShared_3202_ = v_isSharedCheck_3256_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v_x_3190_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3256_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___y_3204_; lean_object* v___y_3205_; lean_object* v___y_3206_; lean_object* v___y_3207_; lean_object* v___y_3208_; lean_object* v___y_3209_; lean_object* v___y_3246_; lean_object* v___x_3253_; 
v___x_3253_ = l_Lasm_JS_Data_field(v_a_3199_, v___x_3189_);
if (lean_obj_tag(v___x_3253_) == 4)
{
lean_object* v_s_3254_; 
v_s_3254_ = lean_ctor_get(v___x_3253_, 0);
lean_inc_ref(v_s_3254_);
lean_dec_ref_known(v___x_3253_, 1);
v___y_3246_ = v_s_3254_;
goto v___jp_3245_;
}
else
{
lean_object* v___x_3255_; 
lean_dec(v___x_3253_);
v___x_3255_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_3246_ = v___x_3255_;
goto v___jp_3245_;
}
v___jp_3203_:
{
lean_object* v___f_3210_; lean_object* v___x_3211_; 
lean_inc(v_a_3199_);
lean_inc(v___x_3179_);
v___f_3210_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 14, 12);
lean_closure_set(v___f_3210_, 0, v___x_3179_);
lean_closure_set(v___f_3210_, 1, v___y_3207_);
lean_closure_set(v___f_3210_, 2, v___y_3209_);
lean_closure_set(v___f_3210_, 3, v_options_3182_);
lean_closure_set(v___f_3210_, 4, v___y_3204_);
lean_closure_set(v___f_3210_, 5, v___y_3206_);
lean_closure_set(v___f_3210_, 6, v_a_3183_);
lean_closure_set(v___f_3210_, 7, v_value_3184_);
lean_closure_set(v___f_3210_, 8, v_a_3199_);
lean_closure_set(v___f_3210_, 9, v___x_3185_);
lean_closure_set(v___f_3210_, 10, v___y_3208_);
lean_closure_set(v___f_3210_, 11, v___y_3205_);
v___x_3211_ = l_Lasm_JS_Data_field(v_a_3199_, v___x_3186_);
lean_dec(v_a_3199_);
if (lean_obj_tag(v___x_3211_) == 9)
{
lean_object* v_value_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3235_; 
v_value_3212_ = lean_ctor_get(v___x_3211_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3235_ == 0)
{
lean_object* v_unused_3236_; 
v_unused_3236_ = lean_ctor_get(v___x_3211_, 1);
lean_dec(v_unused_3236_);
v___x_3214_ = v___x_3211_;
v_isShared_3215_ = v_isSharedCheck_3235_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_value_3212_);
lean_dec(v___x_3211_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3235_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___f_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3220_; 
v___f_3216_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3216_, 0, v___f_3210_);
v___x_3217_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_3218_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_3215_ == 0)
{
lean_ctor_set(v___x_3214_, 1, v___x_3218_);
v___x_3220_ = v___x_3214_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_value_3212_);
lean_ctor_set(v_reuseFailAlloc_3234_, 1, v___x_3218_);
v___x_3220_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; uint8_t v___x_3224_; lean_object* v___x_3225_; 
v___x_3221_ = lean_unsigned_to_nat(1u);
v___x_3222_ = lean_mk_empty_array_with_capacity(v___x_3221_);
v___x_3223_ = lean_array_push(v___x_3222_, v___x_3220_);
v___x_3224_ = 0;
v___x_3225_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_3187_, v___x_3217_, v___x_3223_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v_a_3226_; lean_object* v___x_3228_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3226_);
lean_dec_ref_known(v___x_3225_, 1);
if (v_isShared_3202_ == 0)
{
lean_ctor_set(v___x_3201_, 0, v_a_3226_);
v___x_3228_ = v___x_3201_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v_a_3226_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
v___y_3193_ = v___f_3216_;
v___y_3194_ = v___x_3224_;
v_val_3195_ = v___x_3228_;
goto v___jp_3192_;
}
}
else
{
lean_object* v_a_3230_; lean_object* v___x_3232_; 
v_a_3230_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3230_);
lean_dec_ref_known(v___x_3225_, 1);
if (v_isShared_3202_ == 0)
{
lean_ctor_set_tag(v___x_3201_, 0);
lean_ctor_set(v___x_3201_, 0, v_a_3230_);
v___x_3232_ = v___x_3201_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3230_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
v___y_3193_ = v___f_3216_;
v___y_3194_ = v___x_3224_;
v_val_3195_ = v___x_3232_;
goto v___jp_3192_;
}
}
}
}
}
else
{
lean_object* v___f_3237_; lean_object* v___x_3238_; uint8_t v___x_3239_; lean_object* v___x_3241_; 
lean_dec(v___x_3211_);
lean_dec(v_a_3187_);
v___f_3237_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3237_, 0, v___f_3210_);
v___x_3238_ = lean_mk_empty_array_with_capacity(v___x_3179_);
v___x_3239_ = 0;
if (v_isShared_3202_ == 0)
{
lean_ctor_set(v___x_3201_, 0, v___x_3238_);
v___x_3241_ = v___x_3201_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3244_; 
v_reuseFailAlloc_3244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3244_, 0, v___x_3238_);
v___x_3241_ = v_reuseFailAlloc_3244_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
lean_object* v___x_3242_; lean_object* v___x_3243_; 
v___x_3242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3242_, 0, v___x_3241_);
v___x_3243_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3179_, v___x_3239_, v___x_3242_, v___f_3237_);
return v___x_3243_;
}
}
}
v___jp_3245_:
{
lean_object* v___f_3247_; lean_object* v___f_3248_; lean_object* v___f_3249_; lean_object* v___x_3250_; 
lean_inc_n(v___x_3179_, 2);
lean_inc_ref(v___y_3246_);
v___f_3247_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3247_, 0, v___y_3246_);
lean_closure_set(v___f_3247_, 1, v___x_3179_);
lean_closure_set(v___f_3247_, 2, v___f_3180_);
v___f_3248_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3248_, 0, v_handler_3181_);
lean_closure_set(v___f_3248_, 1, v___x_3179_);
lean_closure_set(v___f_3248_, 2, v___f_3247_);
v___f_3249_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3249_, 0, v___f_3248_);
v___x_3250_ = l_Lasm_JS_Data_field(v_a_3199_, v___x_3188_);
if (lean_obj_tag(v___x_3250_) == 4)
{
lean_object* v_s_3251_; 
v_s_3251_ = lean_ctor_get(v___x_3250_, 0);
lean_inc_ref(v_s_3251_);
lean_dec_ref_known(v___x_3250_, 1);
lean_inc_ref_n(v___f_3249_, 3);
v___y_3204_ = v___f_3249_;
v___y_3205_ = v___f_3249_;
v___y_3206_ = v___f_3249_;
v___y_3207_ = v___y_3246_;
v___y_3208_ = v___f_3249_;
v___y_3209_ = v_s_3251_;
goto v___jp_3203_;
}
else
{
lean_object* v___x_3252_; 
lean_dec(v___x_3250_);
v___x_3252_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
lean_inc_ref_n(v___f_3249_, 3);
v___y_3204_ = v___f_3249_;
v___y_3205_ = v___f_3249_;
v___y_3206_ = v___f_3249_;
v___y_3207_ = v___y_3246_;
v___y_3208_ = v___f_3249_;
v___y_3209_ = v___x_3252_;
goto v___jp_3203_;
}
}
}
}
v___jp_3192_:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3196_, 0, v_val_3195_);
v___x_3197_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3179_, v___y_3194_, v___x_3196_, v___y_3193_);
return v___x_3197_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___boxed(lean_object* v___x_3257_, lean_object* v___f_3258_, lean_object* v_handler_3259_, lean_object* v_options_3260_, lean_object* v_a_3261_, lean_object* v_value_3262_, lean_object* v___x_3263_, lean_object* v___x_3264_, lean_object* v_a_3265_, lean_object* v___x_3266_, lean_object* v___x_3267_, lean_object* v_x_3268_, lean_object* v___y_3269_){
_start:
{
lean_object* v_res_3270_; 
v_res_3270_ = l_Lasm_Fetch_jsFetchHandler___lam__10(v___x_3257_, v___f_3258_, v_handler_3259_, v_options_3260_, v_a_3261_, v_value_3262_, v___x_3263_, v___x_3264_, v_a_3265_, v___x_3266_, v___x_3267_, v_x_3268_);
lean_dec_ref(v___x_3267_);
lean_dec_ref(v___x_3266_);
lean_dec_ref(v___x_3264_);
return v_res_3270_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(size_t v_sz_3271_, size_t v_i_3272_, lean_object* v_bs_3273_){
_start:
{
uint8_t v___x_3274_; 
v___x_3274_ = lean_usize_dec_lt(v_i_3272_, v_sz_3271_);
if (v___x_3274_ == 0)
{
return v_bs_3273_;
}
else
{
lean_object* v_v_3275_; lean_object* v___x_3276_; lean_object* v_bs_x27_3277_; lean_object* v___x_3278_; size_t v___x_3279_; size_t v___x_3280_; lean_object* v___x_3281_; 
v_v_3275_ = lean_array_uget(v_bs_3273_, v_i_3272_);
v___x_3276_ = lean_unsigned_to_nat(0u);
v_bs_x27_3277_ = lean_array_uset(v_bs_3273_, v_i_3272_, v___x_3276_);
v___x_3278_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3278_, 0, v_v_3275_);
v___x_3279_ = ((size_t)1ULL);
v___x_3280_ = lean_usize_add(v_i_3272_, v___x_3279_);
v___x_3281_ = lean_array_uset(v_bs_x27_3277_, v_i_3272_, v___x_3278_);
v_i_3272_ = v___x_3280_;
v_bs_3273_ = v___x_3281_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8___boxed(lean_object* v_sz_3283_, lean_object* v_i_3284_, lean_object* v_bs_3285_){
_start:
{
size_t v_sz_boxed_3286_; size_t v_i_boxed_3287_; lean_object* v_res_3288_; 
v_sz_boxed_3286_ = lean_unbox_usize(v_sz_3283_);
lean_dec(v_sz_3283_);
v_i_boxed_3287_ = lean_unbox_usize(v_i_3284_);
lean_dec(v_i_3284_);
v_res_3288_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_boxed_3286_, v_i_boxed_3287_, v_bs_3285_);
return v_res_3288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_o_3289_, lean_object* v_keys_3290_){
_start:
{
uint32_t v___x_3292_; uint32_t v___x_3293_; uint64_t v___x_3294_; size_t v_sz_3295_; size_t v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; 
v___x_3292_ = 203;
v___x_3293_ = lasm_js_value_handle(v_o_3289_);
v___x_3294_ = 0ULL;
v_sz_3295_ = lean_array_size(v_keys_3290_);
v___x_3296_ = ((size_t)0ULL);
v___x_3297_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_3295_, v___x_3296_, v_keys_3290_);
v___x_3298_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3298_, 0, v___x_3297_);
v___x_3299_ = l_Lasm_JS_Wire_encode(v___x_3298_);
lean_dec_ref_known(v___x_3298_, 1);
v___x_3300_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3301_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3301_, 0, v_o_3289_);
lean_ctor_set(v___x_3301_, 1, v___x_3300_);
v___x_3302_ = lasm_js_call(v___x_3292_, v___x_3293_, v___x_3294_, v___x_3299_, v___x_3301_);
lean_dec_ref_known(v___x_3301_, 2);
lean_dec_ref(v___x_3299_);
if (lean_obj_tag(v___x_3302_) == 0)
{
lean_object* v_a_3303_; lean_object* v___x_3304_; 
v_a_3303_ = lean_ctor_get(v___x_3302_, 0);
lean_inc(v_a_3303_);
lean_dec_ref_known(v___x_3302_, 1);
v___x_3304_ = l_Lasm_JS_Wire_decode(v_a_3303_);
lean_dec(v_a_3303_);
return v___x_3304_;
}
else
{
lean_object* v_a_3305_; lean_object* v___x_3307_; uint8_t v_isShared_3308_; uint8_t v_isSharedCheck_3312_; 
v_a_3305_ = lean_ctor_get(v___x_3302_, 0);
v_isSharedCheck_3312_ = !lean_is_exclusive(v___x_3302_);
if (v_isSharedCheck_3312_ == 0)
{
v___x_3307_ = v___x_3302_;
v_isShared_3308_ = v_isSharedCheck_3312_;
goto v_resetjp_3306_;
}
else
{
lean_inc(v_a_3305_);
lean_dec(v___x_3302_);
v___x_3307_ = lean_box(0);
v_isShared_3308_ = v_isSharedCheck_3312_;
goto v_resetjp_3306_;
}
v_resetjp_3306_:
{
lean_object* v___x_3310_; 
if (v_isShared_3308_ == 0)
{
v___x_3310_ = v___x_3307_;
goto v_reusejp_3309_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v_a_3305_);
v___x_3310_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3309_;
}
v_reusejp_3309_:
{
return v___x_3310_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_o_3313_, lean_object* v_keys_3314_, lean_object* v_a_3315_){
_start:
{
lean_object* v_res_3316_; 
v_res_3316_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_o_3313_, v_keys_3314_);
return v_res_3316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object* v_args_3337_, lean_object* v___f_3338_, lean_object* v_handler_3339_, lean_object* v_options_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_____r_3343_){
_start:
{
lean_object* v___x_3347_; lean_object* v___x_3348_; uint8_t v___x_3349_; 
v___x_3347_ = lean_unsigned_to_nat(0u);
v___x_3348_ = lean_array_get_size(v_args_3337_);
v___x_3349_ = lean_nat_dec_lt(v___x_3347_, v___x_3348_);
if (v___x_3349_ == 0)
{
lean_dec(v_a_3342_);
lean_dec(v_a_3341_);
lean_dec_ref(v_options_3340_);
lean_dec_ref(v_handler_3339_);
lean_dec_ref(v___f_3338_);
goto v___jp_3345_;
}
else
{
lean_object* v___x_3350_; 
v___x_3350_ = lean_array_fget_borrowed(v_args_3337_, v___x_3347_);
if (lean_obj_tag(v___x_3350_) == 9)
{
lean_object* v_value_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___f_3356_; lean_object* v___x_3357_; uint8_t v___x_3358_; lean_object* v_val_3360_; lean_object* v___x_3363_; 
v_value_3351_ = lean_ctor_get(v___x_3350_, 0);
v___x_3352_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_3353_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_3354_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___x_3355_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
lean_inc_n(v_value_3351_, 2);
v___f_3356_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3356_, 0, v___x_3347_);
lean_closure_set(v___f_3356_, 1, v___f_3338_);
lean_closure_set(v___f_3356_, 2, v_handler_3339_);
lean_closure_set(v___f_3356_, 3, v_options_3340_);
lean_closure_set(v___f_3356_, 4, v_a_3341_);
lean_closure_set(v___f_3356_, 5, v_value_3351_);
lean_closure_set(v___f_3356_, 6, v___x_3355_);
lean_closure_set(v___f_3356_, 7, v___x_3354_);
lean_closure_set(v___f_3356_, 8, v_a_3342_);
lean_closure_set(v___f_3356_, 9, v___x_3353_);
lean_closure_set(v___f_3356_, 10, v___x_3352_);
v___x_3357_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7));
v___x_3358_ = 0;
v___x_3363_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_value_3351_, v___x_3357_);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_object* v_a_3364_; lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3371_; 
v_a_3364_ = lean_ctor_get(v___x_3363_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v___x_3363_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3366_ = v___x_3363_;
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
else
{
lean_inc(v_a_3364_);
lean_dec(v___x_3363_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
lean_object* v___x_3369_; 
if (v_isShared_3367_ == 0)
{
lean_ctor_set_tag(v___x_3366_, 1);
v___x_3369_ = v___x_3366_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_a_3364_);
v___x_3369_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
v_val_3360_ = v___x_3369_;
goto v___jp_3359_;
}
}
}
else
{
lean_object* v_a_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3379_; 
v_a_3372_ = lean_ctor_get(v___x_3363_, 0);
v_isSharedCheck_3379_ = !lean_is_exclusive(v___x_3363_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3374_ = v___x_3363_;
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_a_3372_);
lean_dec(v___x_3363_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3377_; 
if (v_isShared_3375_ == 0)
{
lean_ctor_set_tag(v___x_3374_, 0);
v___x_3377_ = v___x_3374_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_a_3372_);
v___x_3377_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
v_val_3360_ = v___x_3377_;
goto v___jp_3359_;
}
}
}
v___jp_3359_:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3361_, 0, v_val_3360_);
v___x_3362_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3347_, v___x_3358_, v___x_3361_, v___f_3356_);
return v___x_3362_;
}
}
else
{
lean_dec(v_a_3342_);
lean_dec(v_a_3341_);
lean_dec_ref(v_options_3340_);
lean_dec_ref(v_handler_3339_);
lean_dec_ref(v___f_3338_);
goto v___jp_3345_;
}
}
v___jp_3345_:
{
lean_object* v___x_3346_; 
v___x_3346_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3));
return v___x_3346_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object* v_args_3380_, lean_object* v___f_3381_, lean_object* v_handler_3382_, lean_object* v_options_3383_, lean_object* v_a_3384_, lean_object* v_a_3385_, lean_object* v_____r_3386_, lean_object* v___y_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3380_, v___f_3381_, v_handler_3382_, v_options_3383_, v_a_3384_, v_a_3385_, v_____r_3386_);
lean_dec_ref(v_args_3380_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11(lean_object* v___f_3389_, lean_object* v_x_3390_){
_start:
{
if (lean_obj_tag(v_x_3390_) == 0)
{
lean_object* v_a_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3400_; 
lean_dec_ref(v___f_3389_);
v_a_3392_ = lean_ctor_get(v_x_3390_, 0);
v_isSharedCheck_3400_ = !lean_is_exclusive(v_x_3390_);
if (v_isSharedCheck_3400_ == 0)
{
v___x_3394_ = v_x_3390_;
v_isShared_3395_ = v_isSharedCheck_3400_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_a_3392_);
lean_dec(v_x_3390_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3400_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v___x_3397_; 
if (v_isShared_3395_ == 0)
{
v___x_3397_ = v___x_3394_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3399_; 
v_reuseFailAlloc_3399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3399_, 0, v_a_3392_);
v___x_3397_ = v_reuseFailAlloc_3399_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
lean_object* v___x_3398_; 
v___x_3398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3397_);
return v___x_3398_;
}
}
}
else
{
lean_object* v_a_3401_; lean_object* v___x_3402_; 
v_a_3401_ = lean_ctor_get(v_x_3390_, 0);
lean_inc(v_a_3401_);
lean_dec_ref_known(v_x_3390_, 1);
v___x_3402_ = lean_apply_2(v___f_3389_, v_a_3401_, lean_box(0));
return v___x_3402_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11___boxed(lean_object* v___f_3403_, lean_object* v_x_3404_, lean_object* v___y_3405_){
_start:
{
lean_object* v_res_3406_; 
v_res_3406_ = l_Lasm_Fetch_jsFetchHandler___lam__11(v___f_3403_, v_x_3404_);
return v_res_3406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13(lean_object* v___f_3407_, lean_object* v_handler_3408_, lean_object* v_options_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_, lean_object* v_args_3412_){
_start:
{
lean_object* v___f_3414_; lean_object* v___x_3418_; lean_object* v___x_3419_; uint8_t v___x_3420_; 
lean_inc(v_a_3411_);
lean_inc(v_a_3410_);
lean_inc_ref(v_options_3409_);
lean_inc_ref(v_handler_3408_);
lean_inc_ref(v___f_3407_);
lean_inc_ref(v_args_3412_);
v___f_3414_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__9___boxed), 8, 6);
lean_closure_set(v___f_3414_, 0, v_args_3412_);
lean_closure_set(v___f_3414_, 1, v___f_3407_);
lean_closure_set(v___f_3414_, 2, v_handler_3408_);
lean_closure_set(v___f_3414_, 3, v_options_3409_);
lean_closure_set(v___f_3414_, 4, v_a_3410_);
lean_closure_set(v___f_3414_, 5, v_a_3411_);
v___x_3418_ = lean_unsigned_to_nat(1u);
v___x_3419_ = lean_array_get_size(v_args_3412_);
v___x_3420_ = lean_nat_dec_lt(v___x_3418_, v___x_3419_);
if (v___x_3420_ == 0)
{
lean_dec_ref(v___f_3414_);
goto v___jp_3415_;
}
else
{
lean_object* v___x_3421_; 
v___x_3421_ = lean_array_fget_borrowed(v_args_3412_, v___x_3418_);
switch(lean_obj_tag(v___x_3421_))
{
case 9:
{
lean_object* v___f_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; uint8_t v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; 
lean_inc_ref(v___x_3421_);
lean_dec_ref(v_args_3412_);
lean_dec(v_a_3411_);
lean_dec(v_a_3410_);
lean_dec_ref(v_options_3409_);
lean_dec_ref(v_handler_3408_);
lean_dec_ref(v___f_3407_);
v___f_3422_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3422_, 0, v___f_3414_);
v___x_3423_ = l_Lasm_Fetch_platformEnv;
v___x_3424_ = lean_unsigned_to_nat(0u);
v___x_3425_ = 0;
v___x_3426_ = lean_st_ref_swap(v___x_3423_, v___x_3421_);
lean_dec(v___x_3426_);
v___x_3427_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3428_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3424_, v___x_3425_, v___x_3427_, v___f_3422_);
return v___x_3428_;
}
case 8:
{
lean_object* v___f_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; uint8_t v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; 
lean_inc_ref(v___x_3421_);
lean_dec_ref(v_args_3412_);
lean_dec(v_a_3411_);
lean_dec(v_a_3410_);
lean_dec_ref(v_options_3409_);
lean_dec_ref(v_handler_3408_);
lean_dec_ref(v___f_3407_);
v___f_3429_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3429_, 0, v___f_3414_);
v___x_3430_ = l_Lasm_Fetch_platformEnv;
v___x_3431_ = lean_unsigned_to_nat(0u);
v___x_3432_ = 0;
v___x_3433_ = lean_st_ref_swap(v___x_3430_, v___x_3421_);
lean_dec(v___x_3433_);
v___x_3434_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3435_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3431_, v___x_3432_, v___x_3434_, v___f_3429_);
return v___x_3435_;
}
default: 
{
lean_dec_ref(v___f_3414_);
goto v___jp_3415_;
}
}
}
v___jp_3415_:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; 
v___x_3416_ = lean_box(0);
v___x_3417_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3412_, v___f_3407_, v_handler_3408_, v_options_3409_, v_a_3410_, v_a_3411_, v___x_3416_);
lean_dec_ref(v_args_3412_);
return v___x_3417_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13___boxed(lean_object* v___f_3436_, lean_object* v_handler_3437_, lean_object* v_options_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_, lean_object* v_args_3441_, lean_object* v___y_3442_){
_start:
{
lean_object* v_res_3443_; 
v_res_3443_ = l_Lasm_Fetch_jsFetchHandler___lam__13(v___f_3436_, v_handler_3437_, v_options_3438_, v_a_3439_, v_a_3440_, v_args_3441_);
return v_res_3443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_3447_, lean_object* v_options_3448_){
_start:
{
lean_object* v___f_3450_; lean_object* v___x_3451_; 
v___f_3450_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_3451_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3451_) == 0)
{
lean_object* v_a_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; 
v_a_3452_ = lean_ctor_get(v___x_3451_, 0);
lean_inc_n(v_a_3452_, 2);
lean_dec_ref_known(v___x_3451_, 1);
v___x_3453_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_3454_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3452_, v___x_3453_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_object* v_a_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
lean_inc(v_a_3455_);
lean_dec_ref_known(v___x_3454_, 1);
v___x_3456_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_3457_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3452_, v___x_3456_);
if (lean_obj_tag(v___x_3457_) == 0)
{
lean_object* v_a_3458_; lean_object* v___f_3459_; lean_object* v___x_3460_; 
v_a_3458_ = lean_ctor_get(v___x_3457_, 0);
lean_inc(v_a_3458_);
lean_dec_ref_known(v___x_3457_, 1);
v___f_3459_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__13___boxed), 7, 5);
lean_closure_set(v___f_3459_, 0, v___f_3450_);
lean_closure_set(v___f_3459_, 1, v_handler_3447_);
lean_closure_set(v___f_3459_, 2, v_options_3448_);
lean_closure_set(v___f_3459_, 3, v_a_3455_);
lean_closure_set(v___f_3459_, 4, v_a_3458_);
v___x_3460_ = l_Lasm_JS_Function_ofFn(v___f_3459_);
return v___x_3460_;
}
else
{
lean_dec(v_a_3455_);
lean_dec_ref(v_options_3448_);
lean_dec_ref(v_handler_3447_);
return v___x_3457_;
}
}
else
{
lean_dec(v_a_3452_);
lean_dec_ref(v_options_3448_);
lean_dec_ref(v_handler_3447_);
return v___x_3454_;
}
}
else
{
lean_dec_ref(v_options_3448_);
lean_dec_ref(v_handler_3447_);
return v___x_3451_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_3461_, lean_object* v_options_3462_, lean_object* v_a_3463_){
_start:
{
lean_object* v_res_3464_; 
v_res_3464_ = l_Lasm_Fetch_jsFetchHandler(v_handler_3461_, v_options_3462_);
return v_res_3464_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object* v_bytes_3465_){
_start:
{
lean_object* v___x_3467_; 
v___x_3467_ = l_Lasm_JS_Wire_decode(v_bytes_3465_);
return v___x_3467_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object* v_bytes_3468_, lean_object* v_a_3469_){
_start:
{
lean_object* v_res_3470_; 
v_res_3470_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(v_bytes_3468_);
lean_dec_ref(v_bytes_3468_);
return v_res_3470_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object* v_context_3471_, lean_object* v_bytes_3472_){
_start:
{
lean_object* v___x_3474_; 
v___x_3474_ = l_Lasm_JS_Wire_decode(v_bytes_3472_);
return v___x_3474_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object* v_context_3475_, lean_object* v_bytes_3476_, lean_object* v_a_3477_){
_start:
{
lean_object* v_res_3478_; 
v_res_3478_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(v_context_3475_, v_bytes_3476_);
lean_dec_ref(v_bytes_3476_);
lean_dec_ref(v_context_3475_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_3479_){
_start:
{
if (lean_obj_tag(v_x_3479_) == 0)
{
lean_object* v_a_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3489_; 
v_a_3481_ = lean_ctor_get(v_x_3479_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v_x_3479_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3483_ = v_x_3479_;
v_isShared_3484_ = v_isSharedCheck_3489_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_a_3481_);
lean_dec(v_x_3479_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3489_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3486_; 
if (v_isShared_3484_ == 0)
{
v___x_3486_ = v___x_3483_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_a_3481_);
v___x_3486_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
lean_object* v___x_3487_; 
v___x_3487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3486_);
return v___x_3487_;
}
}
}
else
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3499_; 
v_a_3490_ = lean_ctor_get(v_x_3479_, 0);
v_isSharedCheck_3499_ = !lean_is_exclusive(v_x_3479_);
if (v_isSharedCheck_3499_ == 0)
{
v___x_3492_ = v_x_3479_;
v_isShared_3493_ = v_isSharedCheck_3499_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v_x_3479_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3499_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_a_3490_);
v___x_3495_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
lean_object* v___x_3496_; lean_object* v___x_3497_; 
v___x_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3495_);
v___x_3497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3496_);
return v___x_3497_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_3500_, lean_object* v___y_3501_){
_start:
{
lean_object* v_res_3502_; 
v_res_3502_ = l_Lasm_Fetch_serveNode___lam__0(v_x_3500_);
return v_res_3502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v_x_3507_){
_start:
{
if (lean_obj_tag(v_x_3507_) == 0)
{
lean_object* v_a_3509_; lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3517_; 
v_a_3509_ = lean_ctor_get(v_x_3507_, 0);
v_isSharedCheck_3517_ = !lean_is_exclusive(v_x_3507_);
if (v_isSharedCheck_3517_ == 0)
{
v___x_3511_ = v_x_3507_;
v_isShared_3512_ = v_isSharedCheck_3517_;
goto v_resetjp_3510_;
}
else
{
lean_inc(v_a_3509_);
lean_dec(v_x_3507_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3517_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
lean_object* v___x_3514_; 
if (v_isShared_3512_ == 0)
{
v___x_3514_ = v___x_3511_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v_a_3509_);
v___x_3514_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
lean_object* v___x_3515_; 
v___x_3515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3514_);
return v___x_3515_;
}
}
}
else
{
lean_object* v___x_3518_; 
lean_dec_ref_known(v_x_3507_, 1);
v___x_3518_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3518_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v_x_3519_, lean_object* v___y_3520_){
_start:
{
lean_object* v_res_3521_; 
v_res_3521_ = l_Lasm_Fetch_serveNode___lam__2(v_x_3519_);
return v_res_3521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v___f_3522_, lean_object* v_x_3523_){
_start:
{
if (lean_obj_tag(v_x_3523_) == 0)
{
lean_object* v_a_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3533_; 
lean_dec_ref(v___f_3522_);
v_a_3525_ = lean_ctor_get(v_x_3523_, 0);
v_isSharedCheck_3533_ = !lean_is_exclusive(v_x_3523_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3527_ = v_x_3523_;
v_isShared_3528_ = v_isSharedCheck_3533_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_a_3525_);
lean_dec(v_x_3523_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3533_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v___x_3530_; 
if (v_isShared_3528_ == 0)
{
v___x_3530_ = v___x_3527_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v_a_3525_);
v___x_3530_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
lean_object* v___x_3531_; 
v___x_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3531_, 0, v___x_3530_);
return v___x_3531_;
}
}
}
else
{
lean_object* v_a_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3554_; 
v_a_3534_ = lean_ctor_get(v_x_3523_, 0);
v_isSharedCheck_3554_ = !lean_is_exclusive(v_x_3523_);
if (v_isSharedCheck_3554_ == 0)
{
v___x_3536_ = v_x_3523_;
v_isShared_3537_ = v_isSharedCheck_3554_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_a_3534_);
lean_dec(v_x_3523_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3554_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v_flush_3538_; lean_object* v___x_3539_; uint8_t v___x_3540_; lean_object* v_val_3542_; lean_object* v___x_3545_; 
v_flush_3538_ = lean_ctor_get(v_a_3534_, 0);
lean_inc_ref(v_flush_3538_);
lean_dec(v_a_3534_);
v___x_3539_ = lean_unsigned_to_nat(0u);
v___x_3540_ = 0;
v___x_3545_ = lean_apply_1(v_flush_3538_, lean_box(0));
if (lean_obj_tag(v___x_3545_) == 0)
{
lean_object* v_a_3546_; lean_object* v___x_3548_; 
v_a_3546_ = lean_ctor_get(v___x_3545_, 0);
lean_inc(v_a_3546_);
lean_dec_ref_known(v___x_3545_, 1);
if (v_isShared_3537_ == 0)
{
lean_ctor_set(v___x_3536_, 0, v_a_3546_);
v___x_3548_ = v___x_3536_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_a_3546_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
v_val_3542_ = v___x_3548_;
goto v___jp_3541_;
}
}
else
{
lean_object* v_a_3550_; lean_object* v___x_3552_; 
v_a_3550_ = lean_ctor_get(v___x_3545_, 0);
lean_inc(v_a_3550_);
lean_dec_ref_known(v___x_3545_, 1);
if (v_isShared_3537_ == 0)
{
lean_ctor_set_tag(v___x_3536_, 0);
lean_ctor_set(v___x_3536_, 0, v_a_3550_);
v___x_3552_ = v___x_3536_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v_a_3550_);
v___x_3552_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
v_val_3542_ = v___x_3552_;
goto v___jp_3541_;
}
}
v___jp_3541_:
{
lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3543_, 0, v_val_3542_);
v___x_3544_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3539_, v___x_3540_, v___x_3543_, v___f_3522_);
return v___x_3544_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v___f_3555_, lean_object* v_x_3556_, lean_object* v___y_3557_){
_start:
{
lean_object* v_res_3558_; 
v_res_3558_ = l_Lasm_Fetch_serveNode___lam__1(v___f_3555_, v_x_3556_);
return v_res_3558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v___f_3559_, lean_object* v_x_3560_){
_start:
{
if (lean_obj_tag(v_x_3560_) == 0)
{
lean_object* v_a_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3570_; 
lean_dec_ref(v___f_3559_);
v_a_3562_ = lean_ctor_get(v_x_3560_, 0);
v_isSharedCheck_3570_ = !lean_is_exclusive(v_x_3560_);
if (v_isSharedCheck_3570_ == 0)
{
v___x_3564_ = v_x_3560_;
v_isShared_3565_ = v_isSharedCheck_3570_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_a_3562_);
lean_dec(v_x_3560_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3570_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v___x_3567_; 
if (v_isShared_3565_ == 0)
{
v___x_3567_ = v___x_3564_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3569_; 
v_reuseFailAlloc_3569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3569_, 0, v_a_3562_);
v___x_3567_ = v_reuseFailAlloc_3569_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
lean_object* v___x_3568_; 
v___x_3568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3567_);
return v___x_3568_;
}
}
}
else
{
lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3582_; 
v_isSharedCheck_3582_ = !lean_is_exclusive(v_x_3560_);
if (v_isSharedCheck_3582_ == 0)
{
lean_object* v_unused_3583_; 
v_unused_3583_ = lean_ctor_get(v_x_3560_, 0);
lean_dec(v_unused_3583_);
v___x_3572_ = v_x_3560_;
v_isShared_3573_ = v_isSharedCheck_3582_;
goto v_resetjp_3571_;
}
else
{
lean_dec(v_x_3560_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3582_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v___x_3574_; uint8_t v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3578_; 
v___x_3574_ = lean_unsigned_to_nat(0u);
v___x_3575_ = 0;
v___x_3576_ = lean_get_stdout();
if (v_isShared_3573_ == 0)
{
lean_ctor_set(v___x_3572_, 0, v___x_3576_);
v___x_3578_ = v___x_3572_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v___x_3576_);
v___x_3578_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
lean_object* v___x_3579_; lean_object* v___x_3580_; 
v___x_3579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3579_, 0, v___x_3578_);
v___x_3580_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3574_, v___x_3575_, v___x_3579_, v___f_3559_);
return v___x_3580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v___f_3584_, lean_object* v_x_3585_, lean_object* v___y_3586_){
_start:
{
lean_object* v_res_3587_; 
v_res_3587_ = l_Lasm_Fetch_serveNode___lam__3(v___f_3584_, v_x_3585_);
return v_res_3587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v_x_3588_){
_start:
{
if (lean_obj_tag(v_x_3588_) == 0)
{
lean_object* v_a_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3598_; 
v_a_3590_ = lean_ctor_get(v_x_3588_, 0);
v_isSharedCheck_3598_ = !lean_is_exclusive(v_x_3588_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3592_ = v_x_3588_;
v_isShared_3593_ = v_isSharedCheck_3598_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_a_3590_);
lean_dec(v_x_3588_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3598_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v___x_3595_; 
if (v_isShared_3593_ == 0)
{
v___x_3595_ = v___x_3592_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v_a_3590_);
v___x_3595_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
lean_object* v___x_3596_; 
v___x_3596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3596_, 0, v___x_3595_);
return v___x_3596_;
}
}
}
else
{
lean_object* v___x_3599_; 
lean_dec_ref_known(v_x_3588_, 1);
v___x_3599_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3599_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v_x_3600_, lean_object* v___y_3601_){
_start:
{
lean_object* v_res_3602_; 
v_res_3602_ = l_Lasm_Fetch_serveNode___lam__4(v_x_3600_);
return v_res_3602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v_snd_3604_, lean_object* v___x_3605_, lean_object* v_____r_3606_){
_start:
{
lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___x_3608_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3609_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3609_, 0, v_snd_3604_);
lean_ctor_set(v___x_3609_, 1, v___x_3608_);
lean_ctor_set(v___x_3609_, 2, v___x_3605_);
v___x_3610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3609_);
v___x_3611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3610_);
return v___x_3611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v_snd_3612_, lean_object* v___x_3613_, lean_object* v_____r_3614_, lean_object* v___y_3615_){
_start:
{
lean_object* v_res_3616_; 
v_res_3616_ = l_Lasm_Fetch_serveNode___lam__6(v_snd_3612_, v___x_3613_, v_____r_3614_);
return v_res_3616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v___f_3617_, lean_object* v_x_3618_){
_start:
{
if (lean_obj_tag(v_x_3618_) == 0)
{
lean_object* v_a_3620_; lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_3628_; 
lean_dec_ref(v___f_3617_);
v_a_3620_ = lean_ctor_get(v_x_3618_, 0);
v_isSharedCheck_3628_ = !lean_is_exclusive(v_x_3618_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3622_ = v_x_3618_;
v_isShared_3623_ = v_isSharedCheck_3628_;
goto v_resetjp_3621_;
}
else
{
lean_inc(v_a_3620_);
lean_dec(v_x_3618_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_3628_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
lean_object* v___x_3625_; 
if (v_isShared_3623_ == 0)
{
v___x_3625_ = v___x_3622_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_a_3620_);
v___x_3625_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
lean_object* v___x_3626_; 
v___x_3626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3625_);
return v___x_3626_;
}
}
}
else
{
lean_object* v_a_3629_; 
v_a_3629_ = lean_ctor_get(v_x_3618_, 0);
lean_inc(v_a_3629_);
lean_dec_ref_known(v_x_3618_, 1);
if (lean_obj_tag(v_a_3629_) == 0)
{
lean_object* v_a_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3638_; 
lean_dec_ref(v___f_3617_);
v_a_3630_ = lean_ctor_get(v_a_3629_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v_a_3629_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3632_ = v_a_3629_;
v_isShared_3633_ = v_isSharedCheck_3638_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_a_3630_);
lean_dec(v_a_3629_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3638_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3635_; 
if (v_isShared_3633_ == 0)
{
lean_ctor_set_tag(v___x_3632_, 1);
v___x_3635_ = v___x_3632_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(1, 1, 0);
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
lean_object* v_a_3639_; lean_object* v___x_3640_; 
v_a_3639_ = lean_ctor_get(v_a_3629_, 0);
lean_inc(v_a_3639_);
lean_dec_ref_known(v_a_3629_, 1);
v___x_3640_ = lean_apply_2(v___f_3617_, v_a_3639_, lean_box(0));
return v___x_3640_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v___f_3641_, lean_object* v_x_3642_, lean_object* v___y_3643_){
_start:
{
lean_object* v_res_3644_; 
v_res_3644_ = l_Lasm_Fetch_serveNode___lam__5(v___f_3641_, v_x_3642_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v_snd_3646_, lean_object* v___x_3647_, lean_object* v_x_3648_){
_start:
{
if (lean_obj_tag(v_x_3648_) == 0)
{
lean_object* v_a_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3658_; 
lean_dec_ref(v___x_3647_);
lean_dec(v_snd_3646_);
v_a_3650_ = lean_ctor_get(v_x_3648_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v_x_3648_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3652_ = v_x_3648_;
v_isShared_3653_ = v_isSharedCheck_3658_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_a_3650_);
lean_dec(v_x_3648_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3658_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
lean_object* v___x_3655_; 
if (v_isShared_3653_ == 0)
{
v___x_3655_ = v___x_3652_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_a_3650_);
v___x_3655_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
lean_object* v___x_3656_; 
v___x_3656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3656_, 0, v___x_3655_);
return v___x_3656_;
}
}
}
else
{
lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3669_; 
v_isSharedCheck_3669_ = !lean_is_exclusive(v_x_3648_);
if (v_isSharedCheck_3669_ == 0)
{
lean_object* v_unused_3670_; 
v_unused_3670_ = lean_ctor_get(v_x_3648_, 0);
lean_dec(v_unused_3670_);
v___x_3660_ = v_x_3648_;
v_isShared_3661_ = v_isSharedCheck_3669_;
goto v_resetjp_3659_;
}
else
{
lean_dec(v_x_3648_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3669_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3665_; 
v___x_3662_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_3663_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3663_, 0, v_snd_3646_);
lean_ctor_set(v___x_3663_, 1, v___x_3662_);
lean_ctor_set(v___x_3663_, 2, v___x_3647_);
if (v_isShared_3661_ == 0)
{
lean_ctor_set_tag(v___x_3660_, 0);
lean_ctor_set(v___x_3660_, 0, v___x_3663_);
v___x_3665_ = v___x_3660_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v___x_3663_);
v___x_3665_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3666_, 0, v___x_3665_);
v___x_3667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3667_, 0, v___x_3666_);
return v___x_3667_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v_snd_3671_, lean_object* v___x_3672_, lean_object* v_x_3673_, lean_object* v___y_3674_){
_start:
{
lean_object* v_res_3675_; 
v_res_3675_ = l_Lasm_Fetch_serveNode___lam__7(v_snd_3671_, v___x_3672_, v_x_3673_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_3676_, lean_object* v_name_3677_, lean_object* v_args_3678_){
_start:
{
lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; uint64_t v___x_3683_; lean_object* v___x_3684_; 
v___x_3680_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3681_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3681_, 0, v_o_3676_);
lean_ctor_set(v___x_3681_, 1, v___x_3680_);
v___x_3682_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3682_, 0, v_name_3677_);
v___x_3683_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_3684_ = l_Lasm_JS_Value_invokeRaw(v___x_3681_, v___x_3682_, v_args_3678_, v___x_3683_);
if (lean_obj_tag(v___x_3684_) == 0)
{
lean_object* v_a_3685_; lean_object* v___x_3686_; 
v_a_3685_ = lean_ctor_get(v___x_3684_, 0);
lean_inc(v_a_3685_);
lean_dec_ref_known(v___x_3684_, 1);
v___x_3686_ = l_Lasm_JS_Wire_decode(v_a_3685_);
lean_dec(v_a_3685_);
return v___x_3686_;
}
else
{
lean_object* v_a_3687_; lean_object* v___x_3689_; uint8_t v_isShared_3690_; uint8_t v_isSharedCheck_3694_; 
v_a_3687_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3694_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3694_ == 0)
{
v___x_3689_ = v___x_3684_;
v_isShared_3690_ = v_isSharedCheck_3694_;
goto v_resetjp_3688_;
}
else
{
lean_inc(v_a_3687_);
lean_dec(v___x_3684_);
v___x_3689_ = lean_box(0);
v_isShared_3690_ = v_isSharedCheck_3694_;
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
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(1, 1, 0);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_3695_, lean_object* v_name_3696_, lean_object* v_args_3697_, lean_object* v_a_3698_){
_start:
{
lean_object* v_res_3699_; 
v_res_3699_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_3695_, v_name_3696_, v_args_3697_);
return v_res_3699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v___x_3700_, uint8_t v___x_3701_, lean_object* v___f_3702_, lean_object* v_snd_3703_, lean_object* v_chunk_3704_){
_start:
{
lean_object* v_val_3707_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; 
v___x_3710_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_3711_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3711_, 0, v_chunk_3704_);
v___x_3712_ = lean_unsigned_to_nat(1u);
v___x_3713_ = lean_mk_empty_array_with_capacity(v___x_3712_);
v___x_3714_ = lean_array_push(v___x_3713_, v___x_3711_);
v___x_3715_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_3703_, v___x_3710_, v___x_3714_);
if (lean_obj_tag(v___x_3715_) == 0)
{
lean_object* v_a_3716_; lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3723_; 
v_a_3716_ = lean_ctor_get(v___x_3715_, 0);
v_isSharedCheck_3723_ = !lean_is_exclusive(v___x_3715_);
if (v_isSharedCheck_3723_ == 0)
{
v___x_3718_ = v___x_3715_;
v_isShared_3719_ = v_isSharedCheck_3723_;
goto v_resetjp_3717_;
}
else
{
lean_inc(v_a_3716_);
lean_dec(v___x_3715_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3723_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
lean_object* v___x_3721_; 
if (v_isShared_3719_ == 0)
{
lean_ctor_set_tag(v___x_3718_, 1);
v___x_3721_ = v___x_3718_;
goto v_reusejp_3720_;
}
else
{
lean_object* v_reuseFailAlloc_3722_; 
v_reuseFailAlloc_3722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3722_, 0, v_a_3716_);
v___x_3721_ = v_reuseFailAlloc_3722_;
goto v_reusejp_3720_;
}
v_reusejp_3720_:
{
v_val_3707_ = v___x_3721_;
goto v___jp_3706_;
}
}
}
else
{
lean_object* v_a_3724_; lean_object* v___x_3726_; uint8_t v_isShared_3727_; uint8_t v_isSharedCheck_3731_; 
v_a_3724_ = lean_ctor_get(v___x_3715_, 0);
v_isSharedCheck_3731_ = !lean_is_exclusive(v___x_3715_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3726_ = v___x_3715_;
v_isShared_3727_ = v_isSharedCheck_3731_;
goto v_resetjp_3725_;
}
else
{
lean_inc(v_a_3724_);
lean_dec(v___x_3715_);
v___x_3726_ = lean_box(0);
v_isShared_3727_ = v_isSharedCheck_3731_;
goto v_resetjp_3725_;
}
v_resetjp_3725_:
{
lean_object* v___x_3729_; 
if (v_isShared_3727_ == 0)
{
lean_ctor_set_tag(v___x_3726_, 0);
v___x_3729_ = v___x_3726_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3730_; 
v_reuseFailAlloc_3730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3730_, 0, v_a_3724_);
v___x_3729_ = v_reuseFailAlloc_3730_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
v_val_3707_ = v___x_3729_;
goto v___jp_3706_;
}
}
}
v___jp_3706_:
{
lean_object* v___x_3708_; lean_object* v___x_3709_; 
v___x_3708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3708_, 0, v_val_3707_);
v___x_3709_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3700_, v___x_3701_, v___x_3708_, v___f_3702_);
return v___x_3709_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v___x_3732_, lean_object* v___x_3733_, lean_object* v___f_3734_, lean_object* v_snd_3735_, lean_object* v_chunk_3736_, lean_object* v___y_3737_){
_start:
{
uint8_t v___x_18404__boxed_3738_; lean_object* v_res_3739_; 
v___x_18404__boxed_3738_ = lean_unbox(v___x_3733_);
v_res_3739_ = l_Lasm_Fetch_serveNode___lam__8(v___x_3732_, v___x_18404__boxed_3738_, v___f_3734_, v_snd_3735_, v_chunk_3736_);
return v_res_3739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_3740_, uint8_t v___x_3741_, lean_object* v___f_3742_, lean_object* v_x_3743_){
_start:
{
lean_object* v_val_3746_; 
if (lean_obj_tag(v_x_3743_) == 0)
{
lean_object* v_a_3749_; lean_object* v___x_3751_; uint8_t v_isShared_3752_; uint8_t v_isSharedCheck_3765_; 
v_a_3749_ = lean_ctor_get(v_x_3743_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v_x_3743_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3751_ = v_x_3743_;
v_isShared_3752_ = v_isSharedCheck_3765_;
goto v_resetjp_3750_;
}
else
{
lean_inc(v_a_3749_);
lean_dec(v_x_3743_);
v___x_3751_ = lean_box(0);
v_isShared_3752_ = v_isSharedCheck_3765_;
goto v_resetjp_3750_;
}
v_resetjp_3750_:
{
lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; 
v___x_3753_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_3754_ = lean_io_error_to_string(v_a_3749_);
v___x_3755_ = lean_string_append(v___x_3753_, v___x_3754_);
lean_dec_ref(v___x_3754_);
v___x_3756_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_3755_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v_a_3757_; lean_object* v___x_3759_; 
v_a_3757_ = lean_ctor_get(v___x_3756_, 0);
lean_inc(v_a_3757_);
lean_dec_ref_known(v___x_3756_, 1);
if (v_isShared_3752_ == 0)
{
lean_ctor_set_tag(v___x_3751_, 1);
lean_ctor_set(v___x_3751_, 0, v_a_3757_);
v___x_3759_ = v___x_3751_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v_a_3757_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
v_val_3746_ = v___x_3759_;
goto v___jp_3745_;
}
}
else
{
lean_object* v_a_3761_; lean_object* v___x_3763_; 
v_a_3761_ = lean_ctor_get(v___x_3756_, 0);
lean_inc(v_a_3761_);
lean_dec_ref_known(v___x_3756_, 1);
if (v_isShared_3752_ == 0)
{
lean_ctor_set(v___x_3751_, 0, v_a_3761_);
v___x_3763_ = v___x_3751_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_a_3761_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
v_val_3746_ = v___x_3763_;
goto v___jp_3745_;
}
}
}
}
else
{
lean_object* v___x_3766_; 
lean_dec_ref(v___f_3742_);
lean_dec(v___x_3740_);
v___x_3766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3766_, 0, v_x_3743_);
return v___x_3766_;
}
v___jp_3745_:
{
lean_object* v___x_3747_; lean_object* v___x_3748_; 
v___x_3747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3747_, 0, v_val_3746_);
v___x_3748_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3740_, v___x_3741_, v___x_3747_, v___f_3742_);
return v___x_3748_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_3767_, lean_object* v___x_3768_, lean_object* v___f_3769_, lean_object* v_x_3770_, lean_object* v___y_3771_){
_start:
{
uint8_t v___x_18472__boxed_3772_; lean_object* v_res_3773_; 
v___x_18472__boxed_3772_ = lean_unbox(v___x_3768_);
v_res_3773_ = l_Lasm_Fetch_serveNode___lam__9(v___x_3767_, v___x_18472__boxed_3772_, v___f_3769_, v_x_3770_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_stream_3774_, lean_object* v_snd_3775_, lean_object* v___y_3776_, uint16_t v_status_3777_, lean_object* v_body_3778_, lean_object* v___x_3779_, lean_object* v___f_3780_, lean_object* v___f_3781_, lean_object* v___f_3782_, lean_object* v___f_3783_, lean_object* v___f_3784_, lean_object* v_x_3785_){
_start:
{
if (lean_obj_tag(v_x_3785_) == 0)
{
lean_object* v_a_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3795_; 
lean_dec_ref(v___f_3784_);
lean_dec_ref(v___f_3783_);
lean_dec_ref(v___f_3782_);
lean_dec_ref(v___f_3781_);
lean_dec_ref(v___f_3780_);
lean_dec(v___x_3779_);
lean_dec_ref(v_body_3778_);
lean_dec(v_snd_3775_);
lean_dec(v_stream_3774_);
v_a_3787_ = lean_ctor_get(v_x_3785_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v_x_3785_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3789_ = v_x_3785_;
v_isShared_3790_ = v_isSharedCheck_3795_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_a_3787_);
lean_dec(v_x_3785_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3795_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
lean_object* v___x_3792_; 
if (v_isShared_3790_ == 0)
{
v___x_3792_ = v___x_3789_;
goto v_reusejp_3791_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_a_3787_);
v___x_3792_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3791_;
}
v_reusejp_3791_:
{
lean_object* v___x_3793_; 
v___x_3793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3793_, 0, v___x_3792_);
return v___x_3793_;
}
}
}
else
{
lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3825_; 
v_isSharedCheck_3825_ = !lean_is_exclusive(v_x_3785_);
if (v_isSharedCheck_3825_ == 0)
{
lean_object* v_unused_3826_; 
v_unused_3826_ = lean_ctor_get(v_x_3785_, 0);
lean_dec(v_unused_3826_);
v___x_3797_ = v_x_3785_;
v_isShared_3798_ = v_isSharedCheck_3825_;
goto v_resetjp_3796_;
}
else
{
lean_dec(v_x_3785_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3825_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
if (lean_obj_tag(v_stream_3774_) == 0)
{
lean_object* v___x_3799_; lean_object* v___y_3801_; uint8_t v___x_3810_; 
lean_dec_ref(v___f_3784_);
lean_dec_ref(v___f_3783_);
lean_dec_ref(v___f_3782_);
lean_dec_ref(v___f_3781_);
lean_dec_ref(v___f_3780_);
lean_dec(v___x_3779_);
v___x_3799_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3810_ = l_Lasm_Fetch_bodyless(v___y_3776_, v_status_3777_);
if (v___x_3810_ == 0)
{
lean_object* v___x_3811_; 
v___x_3811_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3811_, 0, v_body_3778_);
v___y_3801_ = v___x_3811_;
goto v___jp_3800_;
}
else
{
lean_object* v___x_3812_; 
lean_dec_ref(v_body_3778_);
v___x_3812_ = lean_box(0);
v___y_3801_ = v___x_3812_;
goto v___jp_3800_;
}
v___jp_3800_:
{
lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3807_; 
v___x_3802_ = lean_unsigned_to_nat(1u);
v___x_3803_ = lean_mk_empty_array_with_capacity(v___x_3802_);
v___x_3804_ = lean_array_push(v___x_3803_, v___y_3801_);
v___x_3805_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3805_, 0, v_snd_3775_);
lean_ctor_set(v___x_3805_, 1, v___x_3799_);
lean_ctor_set(v___x_3805_, 2, v___x_3804_);
if (v_isShared_3798_ == 0)
{
lean_ctor_set(v___x_3797_, 0, v___x_3805_);
v___x_3807_ = v___x_3797_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v___x_3805_);
v___x_3807_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
lean_object* v___x_3808_; 
v___x_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3807_);
return v___x_3808_;
}
}
}
else
{
lean_object* v_val_3813_; uint8_t v___x_3814_; 
lean_del_object(v___x_3797_);
lean_dec_ref(v_body_3778_);
v_val_3813_ = lean_ctor_get(v_stream_3774_, 0);
lean_inc(v_val_3813_);
lean_dec_ref_known(v_stream_3774_, 1);
v___x_3814_ = l_Lasm_Fetch_bodyless(v___y_3776_, v_status_3777_);
if (v___x_3814_ == 0)
{
lean_object* v___x_3815_; lean_object* v___f_3816_; lean_object* v___x_3817_; lean_object* v___f_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; 
lean_dec_ref(v___f_3784_);
v___x_3815_ = lean_box(v___x_3814_);
lean_inc_n(v___x_3779_, 4);
v___f_3816_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 6, 4);
lean_closure_set(v___f_3816_, 0, v___x_3779_);
lean_closure_set(v___f_3816_, 1, v___x_3815_);
lean_closure_set(v___f_3816_, 2, v___f_3780_);
lean_closure_set(v___f_3816_, 3, v_snd_3775_);
v___x_3817_ = lean_box(v___x_3814_);
v___f_3818_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 5, 3);
lean_closure_set(v___f_3818_, 0, v___x_3779_);
lean_closure_set(v___f_3818_, 1, v___x_3817_);
lean_closure_set(v___f_3818_, 2, v___f_3781_);
v___x_3819_ = lean_apply_2(v_val_3813_, v___f_3816_, lean_box(0));
v___x_3820_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3779_, v___x_3814_, v___x_3819_, v___f_3782_);
v___x_3821_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3779_, v___x_3814_, v___x_3820_, v___f_3818_);
v___x_3822_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3779_, v___x_3814_, v___x_3821_, v___f_3783_);
return v___x_3822_;
}
else
{
lean_object* v___x_3823_; lean_object* v___x_3824_; 
lean_dec(v_val_3813_);
lean_dec_ref(v___f_3783_);
lean_dec_ref(v___f_3782_);
lean_dec_ref(v___f_3781_);
lean_dec_ref(v___f_3780_);
lean_dec(v___x_3779_);
lean_dec(v_snd_3775_);
v___x_3823_ = lean_box(0);
v___x_3824_ = lean_apply_2(v___f_3784_, v___x_3823_, lean_box(0));
return v___x_3824_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_stream_3827_, lean_object* v_snd_3828_, lean_object* v___y_3829_, lean_object* v_status_3830_, lean_object* v_body_3831_, lean_object* v___x_3832_, lean_object* v___f_3833_, lean_object* v___f_3834_, lean_object* v___f_3835_, lean_object* v___f_3836_, lean_object* v___f_3837_, lean_object* v_x_3838_, lean_object* v___y_3839_){
_start:
{
uint16_t v_status_boxed_3840_; lean_object* v_res_3841_; 
v_status_boxed_3840_ = lean_unbox(v_status_3830_);
v_res_3841_ = l_Lasm_Fetch_serveNode___lam__10(v_stream_3827_, v_snd_3828_, v___y_3829_, v_status_boxed_3840_, v_body_3831_, v___x_3832_, v___f_3833_, v___f_3834_, v___f_3835_, v___f_3836_, v___f_3837_, v_x_3838_);
lean_dec_ref(v___y_3829_);
return v_res_3841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_3842_, size_t v_i_3843_, size_t v_stop_3844_, lean_object* v_b_3845_){
_start:
{
uint8_t v___x_3846_; 
v___x_3846_ = lean_usize_dec_eq(v_i_3843_, v_stop_3844_);
if (v___x_3846_ == 0)
{
lean_object* v___x_3847_; lean_object* v_fst_3848_; lean_object* v_snd_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; size_t v___x_3854_; size_t v___x_3855_; 
v___x_3847_ = lean_array_uget_borrowed(v_as_3842_, v_i_3843_);
v_fst_3848_ = lean_ctor_get(v___x_3847_, 0);
v_snd_3849_ = lean_ctor_get(v___x_3847_, 1);
lean_inc(v_fst_3848_);
v___x_3850_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3850_, 0, v_fst_3848_);
v___x_3851_ = lean_array_push(v_b_3845_, v___x_3850_);
lean_inc(v_snd_3849_);
v___x_3852_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3852_, 0, v_snd_3849_);
v___x_3853_ = lean_array_push(v___x_3851_, v___x_3852_);
v___x_3854_ = ((size_t)1ULL);
v___x_3855_ = lean_usize_add(v_i_3843_, v___x_3854_);
v_i_3843_ = v___x_3855_;
v_b_3845_ = v___x_3853_;
goto _start;
}
else
{
return v_b_3845_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_3857_, lean_object* v_i_3858_, lean_object* v_stop_3859_, lean_object* v_b_3860_){
_start:
{
size_t v_i_boxed_3861_; size_t v_stop_boxed_3862_; lean_object* v_res_3863_; 
v_i_boxed_3861_ = lean_unbox_usize(v_i_3858_);
lean_dec(v_i_3858_);
v_stop_boxed_3862_ = lean_unbox_usize(v_stop_3859_);
lean_dec(v_stop_3859_);
v_res_3863_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_3857_, v_i_boxed_3861_, v_stop_boxed_3862_, v_b_3860_);
lean_dec_ref(v_as_3857_);
return v_res_3863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___x_3865_, lean_object* v_snd_3866_, lean_object* v___y_3867_, lean_object* v___f_3868_, lean_object* v___f_3869_, lean_object* v_x_3870_){
_start:
{
uint8_t v___y_3873_; lean_object* v___y_3874_; lean_object* v_val_3875_; lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v___y_3881_; lean_object* v___y_3882_; 
if (lean_obj_tag(v_x_3870_) == 0)
{
lean_object* v_a_3906_; lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3914_; 
lean_dec_ref(v___f_3869_);
lean_dec_ref(v___f_3868_);
lean_dec_ref(v___y_3867_);
lean_dec(v_snd_3866_);
lean_dec(v___x_3865_);
v_a_3906_ = lean_ctor_get(v_x_3870_, 0);
v_isSharedCheck_3914_ = !lean_is_exclusive(v_x_3870_);
if (v_isSharedCheck_3914_ == 0)
{
v___x_3908_ = v_x_3870_;
v_isShared_3909_ = v_isSharedCheck_3914_;
goto v_resetjp_3907_;
}
else
{
lean_inc(v_a_3906_);
lean_dec(v_x_3870_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3914_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
lean_object* v___x_3911_; 
if (v_isShared_3909_ == 0)
{
v___x_3911_ = v___x_3908_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3913_; 
v_reuseFailAlloc_3913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3913_, 0, v_a_3906_);
v___x_3911_ = v_reuseFailAlloc_3913_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
lean_object* v___x_3912_; 
v___x_3912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3911_);
return v___x_3912_;
}
}
}
else
{
lean_object* v_a_3915_; uint16_t v_status_3916_; lean_object* v_headers_3917_; lean_object* v_body_3918_; lean_object* v_stream_3919_; lean_object* v___x_3920_; lean_object* v___f_3921_; lean_object* v___f_3922_; lean_object* v___f_3923_; lean_object* v___y_3925_; lean_object* v___x_3937_; uint8_t v___x_3938_; 
v_a_3915_ = lean_ctor_get(v_x_3870_, 0);
lean_inc(v_a_3915_);
lean_dec_ref_known(v_x_3870_, 1);
v_status_3916_ = lean_ctor_get_uint16(v_a_3915_, sizeof(void*)*3);
v_headers_3917_ = lean_ctor_get(v_a_3915_, 0);
lean_inc_ref(v_headers_3917_);
v_body_3918_ = lean_ctor_get(v_a_3915_, 1);
lean_inc_ref(v_body_3918_);
v_stream_3919_ = lean_ctor_get(v_a_3915_, 2);
lean_inc(v_stream_3919_);
lean_dec(v_a_3915_);
v___x_3920_ = lean_mk_empty_array_with_capacity(v___x_3865_);
lean_inc_ref_n(v___x_3920_, 2);
lean_inc_n(v_snd_3866_, 2);
v___f_3921_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 4, 2);
lean_closure_set(v___f_3921_, 0, v_snd_3866_);
lean_closure_set(v___f_3921_, 1, v___x_3920_);
lean_inc_ref(v___f_3921_);
v___f_3922_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3922_, 0, v___f_3921_);
v___f_3923_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3923_, 0, v_snd_3866_);
lean_closure_set(v___f_3923_, 1, v___x_3920_);
v___x_3937_ = lean_array_get_size(v_headers_3917_);
v___x_3938_ = lean_nat_dec_lt(v___x_3865_, v___x_3937_);
if (v___x_3938_ == 0)
{
lean_dec_ref(v_headers_3917_);
v___y_3925_ = v___x_3920_;
goto v___jp_3924_;
}
else
{
uint8_t v___x_3939_; 
v___x_3939_ = lean_nat_dec_le(v___x_3937_, v___x_3937_);
if (v___x_3939_ == 0)
{
if (v___x_3938_ == 0)
{
lean_dec_ref(v_headers_3917_);
v___y_3925_ = v___x_3920_;
goto v___jp_3924_;
}
else
{
size_t v___x_3940_; size_t v___x_3941_; lean_object* v___x_3942_; 
v___x_3940_ = ((size_t)0ULL);
v___x_3941_ = lean_usize_of_nat(v___x_3937_);
v___x_3942_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_3917_, v___x_3940_, v___x_3941_, v___x_3920_);
lean_dec_ref(v_headers_3917_);
v___y_3925_ = v___x_3942_;
goto v___jp_3924_;
}
}
else
{
size_t v___x_3943_; size_t v___x_3944_; lean_object* v___x_3945_; 
v___x_3943_ = ((size_t)0ULL);
v___x_3944_ = lean_usize_of_nat(v___x_3937_);
v___x_3945_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_3917_, v___x_3943_, v___x_3944_, v___x_3920_);
lean_dec_ref(v_headers_3917_);
v___y_3925_ = v___x_3945_;
goto v___jp_3924_;
}
}
v___jp_3924_:
{
lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___f_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; uint8_t v___x_3933_; 
v___x_3926_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__11___closed__0));
v___x_3927_ = lean_box(v_status_3916_);
lean_inc(v___x_3865_);
lean_inc(v_snd_3866_);
v___f_3928_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3928_, 0, v_stream_3919_);
lean_closure_set(v___f_3928_, 1, v_snd_3866_);
lean_closure_set(v___f_3928_, 2, v___y_3867_);
lean_closure_set(v___f_3928_, 3, v___x_3927_);
lean_closure_set(v___f_3928_, 4, v_body_3918_);
lean_closure_set(v___f_3928_, 5, v___x_3865_);
lean_closure_set(v___f_3928_, 6, v___f_3868_);
lean_closure_set(v___f_3928_, 7, v___f_3923_);
lean_closure_set(v___f_3928_, 8, v___f_3869_);
lean_closure_set(v___f_3928_, 9, v___f_3922_);
lean_closure_set(v___f_3928_, 10, v___f_3921_);
v___x_3929_ = lean_uint16_to_nat(v_status_3916_);
v___x_3930_ = lean_nat_to_int(v___x_3929_);
v___x_3931_ = lean_nat_abs(v___x_3930_);
v___x_3932_ = lean_cstr_to_nat("9007199254740991");
v___x_3933_ = lean_nat_dec_le(v___x_3931_, v___x_3932_);
lean_dec(v___x_3931_);
if (v___x_3933_ == 0)
{
lean_object* v___x_3934_; 
v___x_3934_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3930_);
v___y_3879_ = v___f_3928_;
v___y_3880_ = v___x_3926_;
v___y_3881_ = v___y_3925_;
v___y_3882_ = v___x_3934_;
goto v___jp_3878_;
}
else
{
double v___x_3935_; lean_object* v___x_3936_; 
v___x_3935_ = l_Float_ofInt(v___x_3930_);
lean_dec(v___x_3930_);
v___x_3936_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3936_, 0, v___x_3935_);
v___y_3879_ = v___f_3928_;
v___y_3880_ = v___x_3926_;
v___y_3881_ = v___y_3925_;
v___y_3882_ = v___x_3936_;
goto v___jp_3878_;
}
}
}
v___jp_3872_:
{
lean_object* v___x_3876_; lean_object* v___x_3877_; 
v___x_3876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3876_, 0, v_val_3875_);
v___x_3877_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3865_, v___y_3873_, v___x_3876_, v___y_3874_);
return v___x_3877_;
}
v___jp_3878_:
{
lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; uint8_t v___x_3888_; lean_object* v___x_3889_; 
v___x_3883_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3883_, 0, v___y_3881_);
v___x_3884_ = lean_unsigned_to_nat(2u);
v___x_3885_ = lean_mk_empty_array_with_capacity(v___x_3884_);
v___x_3886_ = lean_array_push(v___x_3885_, v___y_3882_);
v___x_3887_ = lean_array_push(v___x_3886_, v___x_3883_);
v___x_3888_ = 0;
lean_inc_ref(v___y_3880_);
v___x_3889_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_snd_3866_, v___y_3880_, v___x_3887_);
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3890_; lean_object* v___x_3892_; uint8_t v_isShared_3893_; uint8_t v_isSharedCheck_3897_; 
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3897_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3892_ = v___x_3889_;
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
else
{
lean_inc(v_a_3890_);
lean_dec(v___x_3889_);
v___x_3892_ = lean_box(0);
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
v_resetjp_3891_:
{
lean_object* v___x_3895_; 
if (v_isShared_3893_ == 0)
{
lean_ctor_set_tag(v___x_3892_, 1);
v___x_3895_ = v___x_3892_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_a_3890_);
v___x_3895_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
v___y_3873_ = v___x_3888_;
v___y_3874_ = v___y_3879_;
v_val_3875_ = v___x_3895_;
goto v___jp_3872_;
}
}
}
else
{
lean_object* v_a_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3905_; 
v_a_3898_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3900_ = v___x_3889_;
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_a_3898_);
lean_dec(v___x_3889_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
lean_ctor_set_tag(v___x_3900_, 0);
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_a_3898_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
v___y_3873_ = v___x_3888_;
v___y_3874_ = v___y_3879_;
v_val_3875_ = v___x_3903_;
goto v___jp_3872_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___x_3946_, lean_object* v_snd_3947_, lean_object* v___y_3948_, lean_object* v___f_3949_, lean_object* v___f_3950_, lean_object* v_x_3951_, lean_object* v___y_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l_Lasm_Fetch_serveNode___lam__11(v___x_3946_, v_snd_3947_, v___y_3948_, v___f_3949_, v___f_3950_, v_x_3951_);
return v_res_3953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v_handler_3954_, lean_object* v___x_3955_, lean_object* v___f_3956_, lean_object* v_request_3957_){
_start:
{
uint8_t v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; 
v___x_3959_ = 0;
v___x_3960_ = l_Lasm_Fetch_respond(v_handler_3954_, v_request_3957_);
v___x_3961_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3955_, v___x_3959_, v___x_3960_, v___f_3956_);
return v___x_3961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v_handler_3962_, lean_object* v___x_3963_, lean_object* v___f_3964_, lean_object* v_request_3965_, lean_object* v___y_3966_){
_start:
{
lean_object* v_res_3967_; 
v_res_3967_ = l_Lasm_Fetch_serveNode___lam__12(v_handler_3962_, v___x_3963_, v___f_3964_, v_request_3965_);
return v_res_3967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_3968_, lean_object* v_x_3969_){
_start:
{
if (lean_obj_tag(v_x_3969_) == 0)
{
lean_object* v_a_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_3979_; 
lean_dec_ref(v___f_3968_);
v_a_3971_ = lean_ctor_get(v_x_3969_, 0);
v_isSharedCheck_3979_ = !lean_is_exclusive(v_x_3969_);
if (v_isSharedCheck_3979_ == 0)
{
v___x_3973_ = v_x_3969_;
v_isShared_3974_ = v_isSharedCheck_3979_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_a_3971_);
lean_dec(v_x_3969_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_3979_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
lean_object* v___x_3976_; 
if (v_isShared_3974_ == 0)
{
v___x_3976_ = v___x_3973_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v_a_3971_);
v___x_3976_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
lean_object* v___x_3977_; 
v___x_3977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3977_, 0, v___x_3976_);
return v___x_3977_;
}
}
}
else
{
lean_object* v_a_3980_; lean_object* v___x_3981_; 
v_a_3980_ = lean_ctor_get(v_x_3969_, 0);
lean_inc(v_a_3980_);
lean_dec_ref_known(v_x_3969_, 1);
v___x_3981_ = lean_apply_2(v___f_3968_, v_a_3980_, lean_box(0));
return v___x_3981_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_3982_, lean_object* v_x_3983_, lean_object* v___y_3984_){
_start:
{
lean_object* v_res_3985_; 
v_res_3985_ = l_Lasm_Fetch_serveNode___lam__13(v___f_3982_, v_x_3983_);
return v_res_3985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___x_3988_, lean_object* v___f_3989_, lean_object* v___x_3990_, uint8_t v___x_3991_, lean_object* v___f_3992_, lean_object* v_x_3993_){
_start:
{
if (lean_obj_tag(v_x_3993_) == 0)
{
lean_object* v_a_3995_; lean_object* v___x_3997_; uint8_t v_isShared_3998_; uint8_t v_isSharedCheck_4003_; 
lean_dec_ref(v___f_3992_);
lean_dec(v___x_3990_);
lean_dec_ref(v___f_3989_);
lean_dec_ref(v___x_3988_);
lean_dec_ref(v___y_3987_);
lean_dec_ref(v___y_3986_);
v_a_3995_ = lean_ctor_get(v_x_3993_, 0);
v_isSharedCheck_4003_ = !lean_is_exclusive(v_x_3993_);
if (v_isSharedCheck_4003_ == 0)
{
v___x_3997_ = v_x_3993_;
v_isShared_3998_ = v_isSharedCheck_4003_;
goto v_resetjp_3996_;
}
else
{
lean_inc(v_a_3995_);
lean_dec(v_x_3993_);
v___x_3997_ = lean_box(0);
v_isShared_3998_ = v_isSharedCheck_4003_;
goto v_resetjp_3996_;
}
v_resetjp_3996_:
{
lean_object* v___x_4000_; 
if (v_isShared_3998_ == 0)
{
v___x_4000_ = v___x_3997_;
goto v_reusejp_3999_;
}
else
{
lean_object* v_reuseFailAlloc_4002_; 
v_reuseFailAlloc_4002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4002_, 0, v_a_3995_);
v___x_4000_ = v_reuseFailAlloc_4002_;
goto v_reusejp_3999_;
}
v_reusejp_3999_:
{
lean_object* v___x_4001_; 
v___x_4001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4001_, 0, v___x_4000_);
return v___x_4001_;
}
}
}
else
{
lean_object* v_a_4004_; lean_object* v___x_4006_; uint8_t v_isShared_4007_; uint8_t v_isSharedCheck_4014_; 
v_a_4004_ = lean_ctor_get(v_x_3993_, 0);
v_isSharedCheck_4014_ = !lean_is_exclusive(v_x_3993_);
if (v_isSharedCheck_4014_ == 0)
{
v___x_4006_ = v_x_3993_;
v_isShared_4007_ = v_isSharedCheck_4014_;
goto v_resetjp_4005_;
}
else
{
lean_inc(v_a_4004_);
lean_dec(v_x_3993_);
v___x_4006_ = lean_box(0);
v_isShared_4007_ = v_isSharedCheck_4014_;
goto v_resetjp_4005_;
}
v_resetjp_4005_:
{
lean_object* v___x_4008_; lean_object* v___x_4010_; 
v___x_4008_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4008_, 0, v___y_3986_);
lean_ctor_set(v___x_4008_, 1, v___y_3987_);
lean_ctor_set(v___x_4008_, 2, v___x_3988_);
lean_ctor_set(v___x_4008_, 3, v_a_4004_);
lean_ctor_set(v___x_4008_, 4, v___f_3989_);
if (v_isShared_4007_ == 0)
{
lean_ctor_set(v___x_4006_, 0, v___x_4008_);
v___x_4010_ = v___x_4006_;
goto v_reusejp_4009_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v___x_4008_);
v___x_4010_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4009_;
}
v_reusejp_4009_:
{
lean_object* v___x_4011_; lean_object* v___x_4012_; 
v___x_4011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4011_, 0, v___x_4010_);
v___x_4012_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3990_, v___x_3991_, v___x_4011_, v___f_3992_);
return v___x_4012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___x_4017_, lean_object* v___f_4018_, lean_object* v___x_4019_, lean_object* v___x_4020_, lean_object* v___f_4021_, lean_object* v_x_4022_, lean_object* v___y_4023_){
_start:
{
uint8_t v___x_18879__boxed_4024_; lean_object* v_res_4025_; 
v___x_18879__boxed_4024_ = lean_unbox(v___x_4020_);
v_res_4025_ = l_Lasm_Fetch_serveNode___lam__18(v___y_4015_, v___y_4016_, v___x_4017_, v___f_4018_, v___x_4019_, v___x_18879__boxed_4024_, v___f_4021_, v_x_4022_);
return v_res_4025_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0(void){
_start:
{
uint64_t v___x_4026_; uint8_t v___x_4027_; uint64_t v___x_4028_; 
v___x_4026_ = 8ULL;
v___x_4027_ = 0;
v___x_4028_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_4027_, v___x_4026_);
return v___x_4028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_o_4029_, lean_object* v_name_4030_, lean_object* v_args_4031_){
_start:
{
lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; uint64_t v___x_4036_; lean_object* v___x_4037_; 
v___x_4033_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4034_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4034_, 0, v_o_4029_);
lean_ctor_set(v___x_4034_, 1, v___x_4033_);
lean_inc_ref(v_name_4030_);
v___x_4035_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4035_, 0, v_name_4030_);
v___x_4036_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0);
v___x_4037_ = l_Lasm_JS_Value_invokeRaw(v___x_4034_, v___x_4035_, v_args_4031_, v___x_4036_);
if (lean_obj_tag(v___x_4037_) == 0)
{
lean_object* v_a_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; 
v_a_4038_ = lean_ctor_get(v___x_4037_, 0);
lean_inc(v_a_4038_);
lean_dec_ref_known(v___x_4037_, 1);
v___x_4039_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_4040_ = lean_string_append(v___x_4039_, v_name_4030_);
lean_dec_ref(v_name_4030_);
v___x_4041_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_4040_, v_a_4038_);
lean_dec(v_a_4038_);
lean_dec_ref(v___x_4040_);
return v___x_4041_;
}
else
{
lean_dec_ref(v_name_4030_);
return v___x_4037_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_o_4042_, lean_object* v_name_4043_, lean_object* v_args_4044_, lean_object* v_a_4045_){
_start:
{
lean_object* v_res_4046_; 
v_res_4046_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_o_4042_, v_name_4043_, v_args_4044_);
return v_res_4046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___x_4048_, uint8_t v___x_4049_, lean_object* v___f_4050_, lean_object* v___x_4051_, lean_object* v_a_4052_, lean_object* v_x_4053_){
_start:
{
lean_object* v_val_4056_; 
if (lean_obj_tag(v_x_4053_) == 0)
{
lean_object* v_a_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4067_; 
lean_dec(v_a_4052_);
lean_dec_ref(v___f_4050_);
lean_dec(v___x_4048_);
v_a_4059_ = lean_ctor_get(v_x_4053_, 0);
v_isSharedCheck_4067_ = !lean_is_exclusive(v_x_4053_);
if (v_isSharedCheck_4067_ == 0)
{
v___x_4061_ = v_x_4053_;
v_isShared_4062_ = v_isSharedCheck_4067_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_a_4059_);
lean_dec(v_x_4053_);
v___x_4061_ = lean_box(0);
v_isShared_4062_ = v_isSharedCheck_4067_;
goto v_resetjp_4060_;
}
v_resetjp_4060_:
{
lean_object* v___x_4064_; 
if (v_isShared_4062_ == 0)
{
v___x_4064_ = v___x_4061_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4066_; 
v_reuseFailAlloc_4066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4066_, 0, v_a_4059_);
v___x_4064_ = v_reuseFailAlloc_4066_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
lean_object* v___x_4065_; 
v___x_4065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
return v___x_4065_;
}
}
}
else
{
lean_object* v_a_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4086_; 
v_a_4068_ = lean_ctor_get(v_x_4053_, 0);
v_isSharedCheck_4086_ = !lean_is_exclusive(v_x_4053_);
if (v_isSharedCheck_4086_ == 0)
{
v___x_4070_ = v_x_4053_;
v_isShared_4071_ = v_isSharedCheck_4086_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_a_4068_);
lean_dec(v_x_4053_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4086_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; 
v___x_4072_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_4073_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4074_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4074_, 0, v_a_4068_);
lean_ctor_set(v___x_4074_, 1, v___x_4073_);
v___x_4075_ = lean_mk_empty_array_with_capacity(v___x_4051_);
v___x_4076_ = lean_array_push(v___x_4075_, v___x_4074_);
v___x_4077_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_a_4052_, v___x_4072_, v___x_4076_);
if (lean_obj_tag(v___x_4077_) == 0)
{
lean_object* v_a_4078_; lean_object* v___x_4080_; 
v_a_4078_ = lean_ctor_get(v___x_4077_, 0);
lean_inc(v_a_4078_);
lean_dec_ref_known(v___x_4077_, 1);
if (v_isShared_4071_ == 0)
{
lean_ctor_set(v___x_4070_, 0, v_a_4078_);
v___x_4080_ = v___x_4070_;
goto v_reusejp_4079_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v_a_4078_);
v___x_4080_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4079_;
}
v_reusejp_4079_:
{
v_val_4056_ = v___x_4080_;
goto v___jp_4055_;
}
}
else
{
lean_object* v_a_4082_; lean_object* v___x_4084_; 
v_a_4082_ = lean_ctor_get(v___x_4077_, 0);
lean_inc(v_a_4082_);
lean_dec_ref_known(v___x_4077_, 1);
if (v_isShared_4071_ == 0)
{
lean_ctor_set_tag(v___x_4070_, 0);
lean_ctor_set(v___x_4070_, 0, v_a_4082_);
v___x_4084_ = v___x_4070_;
goto v_reusejp_4083_;
}
else
{
lean_object* v_reuseFailAlloc_4085_; 
v_reuseFailAlloc_4085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4085_, 0, v_a_4082_);
v___x_4084_ = v_reuseFailAlloc_4085_;
goto v_reusejp_4083_;
}
v_reusejp_4083_:
{
v_val_4056_ = v___x_4084_;
goto v___jp_4055_;
}
}
}
}
v___jp_4055_:
{
lean_object* v___x_4057_; lean_object* v___x_4058_; 
v___x_4057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4057_, 0, v_val_4056_);
v___x_4058_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4048_, v___x_4049_, v___x_4057_, v___f_4050_);
return v___x_4058_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___x_4087_, lean_object* v___x_4088_, lean_object* v___f_4089_, lean_object* v___x_4090_, lean_object* v_a_4091_, lean_object* v_x_4092_, lean_object* v___y_4093_){
_start:
{
uint8_t v___x_18978__boxed_4094_; lean_object* v_res_4095_; 
v___x_18978__boxed_4094_ = lean_unbox(v___x_4088_);
v_res_4095_ = l_Lasm_Fetch_serveNode___lam__14(v___x_4087_, v___x_18978__boxed_4094_, v___f_4089_, v___x_4090_, v_a_4091_, v_x_4092_);
lean_dec(v___x_4090_);
return v_res_4095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___x_4098_, lean_object* v___x_4099_, lean_object* v___x_4100_, uint8_t v___x_4101_, lean_object* v___f_4102_, lean_object* v_x_4103_){
_start:
{
if (lean_obj_tag(v_x_4103_) == 0)
{
lean_object* v_a_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4113_; 
lean_dec_ref(v___f_4102_);
lean_dec(v___x_4100_);
lean_dec_ref(v___x_4099_);
lean_dec_ref(v___x_4098_);
lean_dec_ref(v___y_4097_);
lean_dec_ref(v___y_4096_);
v_a_4105_ = lean_ctor_get(v_x_4103_, 0);
v_isSharedCheck_4113_ = !lean_is_exclusive(v_x_4103_);
if (v_isSharedCheck_4113_ == 0)
{
v___x_4107_ = v_x_4103_;
v_isShared_4108_ = v_isSharedCheck_4113_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_a_4105_);
lean_dec(v_x_4103_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4113_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
lean_object* v___x_4110_; 
if (v_isShared_4108_ == 0)
{
v___x_4110_ = v___x_4107_;
goto v_reusejp_4109_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v_a_4105_);
v___x_4110_ = v_reuseFailAlloc_4112_;
goto v_reusejp_4109_;
}
v_reusejp_4109_:
{
lean_object* v___x_4111_; 
v___x_4111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4110_);
return v___x_4111_;
}
}
}
else
{
lean_object* v_a_4114_; lean_object* v___x_4116_; uint8_t v_isShared_4117_; uint8_t v_isSharedCheck_4124_; 
v_a_4114_ = lean_ctor_get(v_x_4103_, 0);
v_isSharedCheck_4124_ = !lean_is_exclusive(v_x_4103_);
if (v_isSharedCheck_4124_ == 0)
{
v___x_4116_ = v_x_4103_;
v_isShared_4117_ = v_isSharedCheck_4124_;
goto v_resetjp_4115_;
}
else
{
lean_inc(v_a_4114_);
lean_dec(v_x_4103_);
v___x_4116_ = lean_box(0);
v_isShared_4117_ = v_isSharedCheck_4124_;
goto v_resetjp_4115_;
}
v_resetjp_4115_:
{
lean_object* v___x_4118_; lean_object* v___x_4120_; 
v___x_4118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4118_, 0, v___y_4096_);
lean_ctor_set(v___x_4118_, 1, v___y_4097_);
lean_ctor_set(v___x_4118_, 2, v___x_4098_);
lean_ctor_set(v___x_4118_, 3, v___x_4099_);
lean_ctor_set(v___x_4118_, 4, v_a_4114_);
if (v_isShared_4117_ == 0)
{
lean_ctor_set(v___x_4116_, 0, v___x_4118_);
v___x_4120_ = v___x_4116_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v___x_4118_);
v___x_4120_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
lean_object* v___x_4121_; lean_object* v___x_4122_; 
v___x_4121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4121_, 0, v___x_4120_);
v___x_4122_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4100_, v___x_4101_, v___x_4121_, v___f_4102_);
return v___x_4122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___x_4127_, lean_object* v___x_4128_, lean_object* v___x_4129_, lean_object* v___x_4130_, lean_object* v___f_4131_, lean_object* v_x_4132_, lean_object* v___y_4133_){
_start:
{
uint8_t v___x_19068__boxed_4134_; lean_object* v_res_4135_; 
v___x_19068__boxed_4134_ = lean_unbox(v___x_4130_);
v_res_4135_ = l_Lasm_Fetch_serveNode___lam__15(v___y_4125_, v___y_4126_, v___x_4127_, v___x_4128_, v___x_4129_, v___x_19068__boxed_4134_, v___f_4131_, v_x_4132_);
return v_res_4135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object* v___x_4136_, uint8_t v___x_4137_, lean_object* v___f_4138_, lean_object* v_x_4139_){
_start:
{
lean_object* v_val_4142_; 
if (lean_obj_tag(v_x_4139_) == 0)
{
lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4153_; 
lean_dec_ref(v___f_4138_);
lean_dec(v___x_4136_);
v_a_4145_ = lean_ctor_get(v_x_4139_, 0);
v_isSharedCheck_4153_ = !lean_is_exclusive(v_x_4139_);
if (v_isSharedCheck_4153_ == 0)
{
v___x_4147_ = v_x_4139_;
v_isShared_4148_ = v_isSharedCheck_4153_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_dec(v_x_4139_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4153_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
lean_object* v___x_4150_; 
if (v_isShared_4148_ == 0)
{
v___x_4150_ = v___x_4147_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4152_; 
v_reuseFailAlloc_4152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4152_, 0, v_a_4145_);
v___x_4150_ = v_reuseFailAlloc_4152_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
lean_object* v___x_4151_; 
v___x_4151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4151_, 0, v___x_4150_);
return v___x_4151_;
}
}
}
else
{
lean_object* v_a_4154_; lean_object* v___x_4156_; uint8_t v_isShared_4157_; uint8_t v_isSharedCheck_4167_; 
v_a_4154_ = lean_ctor_get(v_x_4139_, 0);
v_isSharedCheck_4167_ = !lean_is_exclusive(v_x_4139_);
if (v_isSharedCheck_4167_ == 0)
{
v___x_4156_ = v_x_4139_;
v_isShared_4157_ = v_isSharedCheck_4167_;
goto v_resetjp_4155_;
}
else
{
lean_inc(v_a_4154_);
lean_dec(v_x_4139_);
v___x_4156_ = lean_box(0);
v_isShared_4157_ = v_isSharedCheck_4167_;
goto v_resetjp_4155_;
}
v_resetjp_4155_:
{
lean_object* v___x_4158_; 
v___x_4158_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_a_4154_);
if (lean_obj_tag(v___x_4158_) == 0)
{
lean_object* v_a_4159_; lean_object* v___x_4161_; 
v_a_4159_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4159_);
lean_dec_ref_known(v___x_4158_, 1);
if (v_isShared_4157_ == 0)
{
lean_ctor_set(v___x_4156_, 0, v_a_4159_);
v___x_4161_ = v___x_4156_;
goto v_reusejp_4160_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v_a_4159_);
v___x_4161_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4160_;
}
v_reusejp_4160_:
{
v_val_4142_ = v___x_4161_;
goto v___jp_4141_;
}
}
else
{
lean_object* v_a_4163_; lean_object* v___x_4165_; 
v_a_4163_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4163_);
lean_dec_ref_known(v___x_4158_, 1);
if (v_isShared_4157_ == 0)
{
lean_ctor_set_tag(v___x_4156_, 0);
lean_ctor_set(v___x_4156_, 0, v_a_4163_);
v___x_4165_ = v___x_4156_;
goto v_reusejp_4164_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v_a_4163_);
v___x_4165_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4164_;
}
v_reusejp_4164_:
{
v_val_4142_ = v___x_4165_;
goto v___jp_4141_;
}
}
}
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
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object* v___x_4168_, lean_object* v___x_4169_, lean_object* v___f_4170_, lean_object* v_x_4171_, lean_object* v___y_4172_){
_start:
{
uint8_t v___x_19131__boxed_4173_; lean_object* v_res_4174_; 
v___x_19131__boxed_4173_ = lean_unbox(v___x_4169_);
v_res_4174_ = l_Lasm_Fetch_serveNode___lam__16(v___x_4168_, v___x_19131__boxed_4173_, v___f_4170_, v_x_4171_);
return v_res_4174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_4175_, lean_object* v_range_4176_, lean_object* v_b_4177_, lean_object* v_i_4178_){
_start:
{
lean_object* v_stop_4179_; lean_object* v_step_4180_; uint8_t v___x_4181_; 
v_stop_4179_ = lean_ctor_get(v_range_4176_, 1);
v_step_4180_ = lean_ctor_get(v_range_4176_, 2);
v___x_4181_ = lean_nat_dec_lt(v_i_4178_, v_stop_4179_);
if (v___x_4181_ == 0)
{
lean_dec(v_i_4178_);
return v_b_4177_;
}
else
{
lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; 
v___x_4182_ = lean_unsigned_to_nat(2u);
v___x_4183_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4184_ = lean_unsigned_to_nat(1u);
v___x_4185_ = lean_nat_mul(v___x_4182_, v_i_4178_);
v___x_4186_ = lean_array_get_borrowed(v___x_4183_, v___y_4175_, v___x_4185_);
v___x_4187_ = lean_nat_add(v___x_4185_, v___x_4184_);
lean_dec(v___x_4185_);
v___x_4188_ = lean_array_get_borrowed(v___x_4183_, v___y_4175_, v___x_4187_);
lean_dec(v___x_4187_);
lean_inc(v___x_4188_);
lean_inc(v___x_4186_);
v___x_4189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4186_);
lean_ctor_set(v___x_4189_, 1, v___x_4188_);
v___x_4190_ = lean_array_push(v_b_4177_, v___x_4189_);
v___x_4191_ = lean_nat_add(v_i_4178_, v_step_4180_);
lean_dec(v_i_4178_);
v_b_4177_ = v___x_4190_;
v_i_4178_ = v___x_4191_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_4193_, lean_object* v_range_4194_, lean_object* v_b_4195_, lean_object* v_i_4196_){
_start:
{
lean_object* v_res_4197_; 
v_res_4197_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4193_, v_range_4194_, v_b_4195_, v_i_4196_);
lean_dec_ref(v_range_4194_);
lean_dec_ref(v___y_4193_);
return v_res_4197_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_4198_, size_t v_i_4199_, size_t v_stop_4200_, lean_object* v_b_4201_){
_start:
{
lean_object* v___y_4203_; uint8_t v___x_4207_; 
v___x_4207_ = lean_usize_dec_eq(v_i_4199_, v_stop_4200_);
if (v___x_4207_ == 0)
{
lean_object* v___x_4208_; 
v___x_4208_ = lean_array_uget_borrowed(v_as_4198_, v_i_4199_);
if (lean_obj_tag(v___x_4208_) == 4)
{
lean_object* v_s_4209_; lean_object* v___x_4210_; 
v_s_4209_ = lean_ctor_get(v___x_4208_, 0);
lean_inc_ref(v_s_4209_);
v___x_4210_ = lean_array_push(v_b_4201_, v_s_4209_);
v___y_4203_ = v___x_4210_;
goto v___jp_4202_;
}
else
{
v___y_4203_ = v_b_4201_;
goto v___jp_4202_;
}
}
else
{
return v_b_4201_;
}
v___jp_4202_:
{
size_t v___x_4204_; size_t v___x_4205_; 
v___x_4204_ = ((size_t)1ULL);
v___x_4205_ = lean_usize_add(v_i_4199_, v___x_4204_);
v_i_4199_ = v___x_4205_;
v_b_4201_ = v___y_4203_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_4211_, lean_object* v_i_4212_, lean_object* v_stop_4213_, lean_object* v_b_4214_){
_start:
{
size_t v_i_boxed_4215_; size_t v_stop_boxed_4216_; lean_object* v_res_4217_; 
v_i_boxed_4215_ = lean_unbox_usize(v_i_4212_);
lean_dec(v_i_4212_);
v_stop_boxed_4216_ = lean_unbox_usize(v_stop_4213_);
lean_dec(v_stop_4213_);
v_res_4217_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4211_, v_i_boxed_4215_, v_stop_boxed_4216_, v_b_4214_);
lean_dec_ref(v_as_4211_);
return v_res_4217_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_4220_, lean_object* v_start_4221_, lean_object* v_stop_4222_){
_start:
{
lean_object* v___x_4223_; uint8_t v___x_4224_; 
v___x_4223_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
v___x_4224_ = lean_nat_dec_lt(v_start_4221_, v_stop_4222_);
if (v___x_4224_ == 0)
{
return v___x_4223_;
}
else
{
lean_object* v___x_4225_; uint8_t v___x_4226_; 
v___x_4225_ = lean_array_get_size(v_as_4220_);
v___x_4226_ = lean_nat_dec_le(v_stop_4222_, v___x_4225_);
if (v___x_4226_ == 0)
{
uint8_t v___x_4227_; 
v___x_4227_ = lean_nat_dec_lt(v_start_4221_, v___x_4225_);
if (v___x_4227_ == 0)
{
return v___x_4223_;
}
else
{
size_t v___x_4228_; size_t v___x_4229_; lean_object* v___x_4230_; 
v___x_4228_ = lean_usize_of_nat(v_start_4221_);
v___x_4229_ = lean_usize_of_nat(v___x_4225_);
v___x_4230_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4220_, v___x_4228_, v___x_4229_, v___x_4223_);
return v___x_4230_;
}
}
else
{
size_t v___x_4231_; size_t v___x_4232_; lean_object* v___x_4233_; 
v___x_4231_ = lean_usize_of_nat(v_start_4221_);
v___x_4232_ = lean_usize_of_nat(v_stop_4222_);
v___x_4233_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4220_, v___x_4231_, v___x_4232_, v___x_4223_);
return v___x_4233_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_4234_, lean_object* v_start_4235_, lean_object* v_stop_4236_){
_start:
{
lean_object* v_res_4237_; 
v_res_4237_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_4234_, v_start_4235_, v_stop_4236_);
lean_dec(v_stop_4236_);
lean_dec(v_start_4235_);
lean_dec_ref(v_as_4234_);
return v_res_4237_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_as_4240_, size_t v_i_4241_, size_t v_stop_4242_){
_start:
{
uint8_t v___x_4243_; 
v___x_4243_ = lean_usize_dec_eq(v_i_4241_, v_stop_4242_);
if (v___x_4243_ == 0)
{
lean_object* v___x_4244_; lean_object* v_fst_4245_; uint8_t v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; uint8_t v___x_4249_; 
v___x_4244_ = lean_array_uget_borrowed(v_as_4240_, v_i_4241_);
v_fst_4245_ = lean_ctor_get(v___x_4244_, 0);
v___x_4246_ = 1;
lean_inc(v_fst_4245_);
v___x_4247_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4245_);
v___x_4248_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__0));
v___x_4249_ = lean_string_dec_eq(v___x_4247_, v___x_4248_);
if (v___x_4249_ == 0)
{
lean_object* v___x_4250_; uint8_t v___x_4251_; 
v___x_4250_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__1));
v___x_4251_ = lean_string_dec_eq(v___x_4247_, v___x_4250_);
lean_dec_ref(v___x_4247_);
if (v___x_4251_ == 0)
{
size_t v___x_4252_; size_t v___x_4253_; 
v___x_4252_ = ((size_t)1ULL);
v___x_4253_ = lean_usize_add(v_i_4241_, v___x_4252_);
v_i_4241_ = v___x_4253_;
goto _start;
}
else
{
return v___x_4246_;
}
}
else
{
lean_dec_ref(v___x_4247_);
return v___x_4246_;
}
}
else
{
uint8_t v___x_4255_; 
v___x_4255_ = 0;
return v___x_4255_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_as_4256_, lean_object* v_i_4257_, lean_object* v_stop_4258_){
_start:
{
size_t v_i_boxed_4259_; size_t v_stop_boxed_4260_; uint8_t v_res_4261_; lean_object* v_r_4262_; 
v_i_boxed_4259_ = lean_unbox_usize(v_i_4257_);
lean_dec(v_i_4257_);
v_stop_boxed_4260_ = lean_unbox_usize(v_stop_4258_);
lean_dec(v_stop_4258_);
v_res_4261_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v_as_4256_, v_i_boxed_4259_, v_stop_boxed_4260_);
lean_dec_ref(v_as_4256_);
v_r_4262_ = lean_box(v_res_4261_);
return v_r_4262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_4264_, size_t v_sz_4265_, size_t v_i_4266_, lean_object* v_b_4267_){
_start:
{
uint8_t v___x_4268_; 
v___x_4268_ = lean_usize_dec_lt(v_i_4266_, v_sz_4265_);
if (v___x_4268_ == 0)
{
lean_inc_ref(v_b_4267_);
return v_b_4267_;
}
else
{
lean_object* v_a_4269_; lean_object* v_fst_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; uint8_t v___x_4274_; 
v_a_4269_ = lean_array_uget_borrowed(v_as_4264_, v_i_4266_);
v_fst_4270_ = lean_ctor_get(v_a_4269_, 0);
v___x_4271_ = lean_box(0);
lean_inc(v_fst_4270_);
v___x_4272_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4270_);
v___x_4273_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_4274_ = lean_string_dec_eq(v___x_4272_, v___x_4273_);
lean_dec_ref(v___x_4272_);
if (v___x_4274_ == 0)
{
lean_object* v___x_4275_; size_t v___x_4276_; size_t v___x_4277_; 
v___x_4275_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_4276_ = ((size_t)1ULL);
v___x_4277_ = lean_usize_add(v_i_4266_, v___x_4276_);
v_i_4266_ = v___x_4277_;
v_b_4267_ = v___x_4275_;
goto _start;
}
else
{
lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; 
lean_inc(v_a_4269_);
v___x_4279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4279_, 0, v_a_4269_);
v___x_4280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4280_, 0, v___x_4279_);
v___x_4281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4281_, 0, v___x_4280_);
lean_ctor_set(v___x_4281_, 1, v___x_4271_);
return v___x_4281_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_4282_, lean_object* v_sz_4283_, lean_object* v_i_4284_, lean_object* v_b_4285_){
_start:
{
size_t v_sz_boxed_4286_; size_t v_i_boxed_4287_; lean_object* v_res_4288_; 
v_sz_boxed_4286_ = lean_unbox_usize(v_sz_4283_);
lean_dec(v_sz_4283_);
v_i_boxed_4287_ = lean_unbox_usize(v_i_4284_);
lean_dec(v_i_4284_);
v_res_4288_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_4282_, v_sz_boxed_4286_, v_i_boxed_4287_, v_b_4285_);
lean_dec_ref(v_b_4285_);
lean_dec_ref(v_as_4282_);
return v_res_4288_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__17___closed__2(void){
_start:
{
lean_object* v___x_4291_; lean_object* v___x_4292_; 
v___x_4291_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4292_ = lean_string_utf8_byte_size(v___x_4291_);
return v___x_4292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object* v_snd_4295_, lean_object* v___f_4296_, lean_object* v___f_4297_, lean_object* v_handler_4298_, lean_object* v_options_4299_, lean_object* v_a_4300_, lean_object* v_fst_4301_, lean_object* v_a_4302_, lean_object* v___y_4303_, lean_object* v___x_4304_, lean_object* v___x_4305_, lean_object* v___x_4306_, lean_object* v_x_4307_){
_start:
{
lean_object* v___y_4310_; lean_object* v___y_4311_; uint8_t v___y_4312_; lean_object* v_val_4313_; lean_object* v___y_4317_; lean_object* v___y_4318_; lean_object* v___y_4319_; lean_object* v___y_4320_; lean_object* v___y_4321_; lean_object* v___y_4322_; lean_object* v___y_4323_; lean_object* v___y_4324_; uint8_t v___y_4325_; lean_object* v___y_4326_; lean_object* v___y_4327_; lean_object* v___y_4328_; lean_object* v___y_4329_; lean_object* v___y_4330_; lean_object* v___y_4378_; lean_object* v___y_4379_; lean_object* v___y_4380_; lean_object* v___y_4381_; lean_object* v___y_4382_; lean_object* v___y_4383_; lean_object* v___y_4384_; lean_object* v___y_4385_; lean_object* v___y_4386_; lean_object* v___y_4387_; lean_object* v___y_4388_; lean_object* v___y_4389_; lean_object* v___y_4390_; lean_object* v___y_4391_; uint8_t v___y_4392_; lean_object* v___y_4402_; lean_object* v___y_4403_; lean_object* v___y_4404_; lean_object* v___y_4405_; lean_object* v___y_4406_; lean_object* v___y_4407_; lean_object* v___y_4408_; lean_object* v___y_4409_; lean_object* v___y_4410_; lean_object* v___y_4411_; lean_object* v___y_4412_; lean_object* v___y_4413_; lean_object* v___y_4414_; lean_object* v___y_4415_; lean_object* v___y_4422_; lean_object* v___y_4423_; lean_object* v___y_4424_; lean_object* v___y_4425_; lean_object* v___y_4426_; lean_object* v___y_4427_; lean_object* v___y_4428_; lean_object* v___y_4429_; lean_object* v___y_4430_; lean_object* v___y_4431_; lean_object* v___y_4432_; lean_object* v___y_4433_; lean_object* v___y_4434_; lean_object* v___y_4439_; lean_object* v___y_4440_; lean_object* v___y_4441_; lean_object* v___y_4442_; 
if (lean_obj_tag(v_x_4307_) == 0)
{
lean_object* v_a_4461_; lean_object* v___x_4463_; uint8_t v_isShared_4464_; uint8_t v_isSharedCheck_4469_; 
lean_dec(v___y_4303_);
lean_dec(v_a_4302_);
lean_dec(v_fst_4301_);
lean_dec(v_a_4300_);
lean_dec_ref(v_options_4299_);
lean_dec_ref(v_handler_4298_);
lean_dec_ref(v___f_4297_);
lean_dec_ref(v___f_4296_);
lean_dec(v_snd_4295_);
v_a_4461_ = lean_ctor_get(v_x_4307_, 0);
v_isSharedCheck_4469_ = !lean_is_exclusive(v_x_4307_);
if (v_isSharedCheck_4469_ == 0)
{
v___x_4463_ = v_x_4307_;
v_isShared_4464_ = v_isSharedCheck_4469_;
goto v_resetjp_4462_;
}
else
{
lean_inc(v_a_4461_);
lean_dec(v_x_4307_);
v___x_4463_ = lean_box(0);
v_isShared_4464_ = v_isSharedCheck_4469_;
goto v_resetjp_4462_;
}
v_resetjp_4462_:
{
lean_object* v___x_4466_; 
if (v_isShared_4464_ == 0)
{
v___x_4466_ = v___x_4463_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4468_; 
v_reuseFailAlloc_4468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4468_, 0, v_a_4461_);
v___x_4466_ = v_reuseFailAlloc_4468_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
lean_object* v___x_4467_; 
v___x_4467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4467_, 0, v___x_4466_);
return v___x_4467_;
}
}
}
else
{
lean_object* v_a_4470_; lean_object* v___y_4472_; lean_object* v___y_4473_; lean_object* v___y_4481_; lean_object* v___x_4485_; 
v_a_4470_ = lean_ctor_get(v_x_4307_, 0);
lean_inc(v_a_4470_);
lean_dec_ref_known(v_x_4307_, 1);
v___x_4485_ = l_Lasm_JS_Data_field(v_a_4470_, v___x_4306_);
if (lean_obj_tag(v___x_4485_) == 4)
{
lean_object* v_s_4486_; 
v_s_4486_ = lean_ctor_get(v___x_4485_, 0);
lean_inc_ref(v_s_4486_);
lean_dec_ref_known(v___x_4485_, 1);
v___y_4481_ = v_s_4486_;
goto v___jp_4480_;
}
else
{
lean_object* v___x_4487_; 
lean_dec(v___x_4485_);
v___x_4487_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___y_4481_ = v___x_4487_;
goto v___jp_4480_;
}
v___jp_4471_:
{
lean_object* v___x_4474_; 
v___x_4474_ = l_Lasm_JS_Data_field(v_a_4470_, v___x_4304_);
lean_dec(v_a_4470_);
if (lean_obj_tag(v___x_4474_) == 7)
{
lean_object* v_items_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; 
v_items_4475_ = lean_ctor_get(v___x_4474_, 0);
lean_inc_ref(v_items_4475_);
lean_dec_ref_known(v___x_4474_, 1);
v___x_4476_ = lean_unsigned_to_nat(0u);
v___x_4477_ = lean_array_get_size(v_items_4475_);
v___x_4478_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_4475_, v___x_4476_, v___x_4477_);
lean_dec_ref(v_items_4475_);
lean_inc_ref(v___y_4472_);
v___y_4439_ = v___y_4472_;
v___y_4440_ = v___y_4473_;
v___y_4441_ = v___y_4472_;
v___y_4442_ = v___x_4478_;
goto v___jp_4438_;
}
else
{
lean_object* v___x_4479_; 
lean_dec(v___x_4474_);
v___x_4479_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
lean_inc_ref(v___y_4472_);
v___y_4439_ = v___y_4472_;
v___y_4440_ = v___y_4473_;
v___y_4441_ = v___y_4472_;
v___y_4442_ = v___x_4479_;
goto v___jp_4438_;
}
}
v___jp_4480_:
{
lean_object* v___x_4482_; 
v___x_4482_ = l_Lasm_JS_Data_field(v_a_4470_, v___x_4305_);
if (lean_obj_tag(v___x_4482_) == 4)
{
lean_object* v_s_4483_; 
v_s_4483_ = lean_ctor_get(v___x_4482_, 0);
lean_inc_ref(v_s_4483_);
lean_dec_ref_known(v___x_4482_, 1);
v___y_4472_ = v___y_4481_;
v___y_4473_ = v_s_4483_;
goto v___jp_4471_;
}
else
{
lean_object* v___x_4484_; 
lean_dec(v___x_4482_);
v___x_4484_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_4472_ = v___y_4481_;
v___y_4473_ = v___x_4484_;
goto v___jp_4471_;
}
}
}
v___jp_4309_:
{
lean_object* v___x_4314_; lean_object* v___x_4315_; 
v___x_4314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4314_, 0, v_val_4313_);
v___x_4315_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4310_, v___y_4312_, v___x_4314_, v___y_4311_);
return v___x_4315_;
}
v___jp_4316_:
{
if (v___y_4325_ == 0)
{
lean_object* v___x_4331_; lean_object* v___f_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; 
lean_dec(v___y_4327_);
lean_dec_ref(v___y_4326_);
lean_dec_ref(v___y_4322_);
lean_dec(v___y_4321_);
lean_dec_ref(v___y_4320_);
lean_dec_ref(v___y_4319_);
lean_dec_ref(v___y_4318_);
lean_dec(v___y_4317_);
lean_dec(v_a_4302_);
lean_dec(v_fst_4301_);
lean_dec(v_a_4300_);
lean_dec_ref(v_options_4299_);
v___x_4331_ = l_ByteArray_empty;
v___f_4332_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_4333_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4333_, 0, v___y_4329_);
lean_ctor_set(v___x_4333_, 1, v___y_4330_);
lean_ctor_set(v___x_4333_, 2, v___y_4328_);
lean_ctor_set(v___x_4333_, 3, v___x_4331_);
lean_ctor_set(v___x_4333_, 4, v___f_4332_);
v___x_4334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4334_, 0, v___x_4333_);
v___x_4335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4335_, 0, v___x_4334_);
v___x_4336_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4323_, v___y_4325_, v___x_4335_, v___y_4324_);
return v___x_4336_;
}
else
{
lean_object* v___x_4337_; lean_object* v___f_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; uint8_t v___x_4342_; 
lean_dec_ref(v___y_4328_);
lean_dec_ref(v___y_4324_);
v___x_4337_ = l_ByteArray_empty;
v___f_4338_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___y_4330_);
v___x_4339_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4339_, 0, v___y_4329_);
lean_ctor_set(v___x_4339_, 1, v___y_4330_);
lean_ctor_set(v___x_4339_, 2, v___y_4326_);
lean_ctor_set(v___x_4339_, 3, v___x_4337_);
lean_ctor_set(v___x_4339_, 4, v___f_4338_);
v___x_4340_ = l_Lasm_Fetch_Request_path(v___x_4339_);
v___x_4341_ = lean_apply_1(v_options_4299_, v___x_4340_);
v___x_4342_ = lean_unbox(v___x_4341_);
if (v___x_4342_ == 0)
{
lean_object* v___f_4343_; lean_object* v___f_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; uint8_t v___x_4348_; lean_object* v___x_4349_; 
lean_dec(v___y_4327_);
lean_dec_ref(v___y_4320_);
lean_dec(v_a_4302_);
lean_inc(v___y_4321_);
v___f_4343_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__18___boxed), 9, 7);
lean_closure_set(v___f_4343_, 0, v___y_4322_);
lean_closure_set(v___f_4343_, 1, v___y_4330_);
lean_closure_set(v___f_4343_, 2, v___y_4319_);
lean_closure_set(v___f_4343_, 3, v___f_4338_);
lean_closure_set(v___f_4343_, 4, v___y_4321_);
lean_closure_set(v___f_4343_, 5, v___x_4341_);
lean_closure_set(v___f_4343_, 6, v___y_4318_);
v___f_4344_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 7, 5);
lean_closure_set(v___f_4344_, 0, v___y_4321_);
lean_closure_set(v___f_4344_, 1, v___x_4341_);
lean_closure_set(v___f_4344_, 2, v___f_4343_);
lean_closure_set(v___f_4344_, 3, v___y_4317_);
lean_closure_set(v___f_4344_, 4, v_a_4300_);
v___x_4345_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__0));
v___x_4346_ = lean_mk_empty_array_with_capacity(v___y_4323_);
v___x_4347_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_fst_4301_, v___x_4345_, v___x_4346_);
v___x_4348_ = lean_unbox(v___x_4341_);
v___x_4349_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4323_, v___x_4348_, v___x_4347_, v___f_4344_);
return v___x_4349_;
}
else
{
uint8_t v___x_4350_; lean_object* v___x_4351_; lean_object* v___f_4352_; lean_object* v___x_4353_; lean_object* v___f_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; 
lean_dec_ref(v___y_4318_);
lean_dec(v___y_4317_);
lean_dec(v_a_4300_);
v___x_4350_ = 0;
v___x_4351_ = lean_box(v___x_4350_);
lean_inc(v___y_4321_);
v___f_4352_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 9, 7);
lean_closure_set(v___f_4352_, 0, v___y_4322_);
lean_closure_set(v___f_4352_, 1, v___y_4330_);
lean_closure_set(v___f_4352_, 2, v___y_4319_);
lean_closure_set(v___f_4352_, 3, v___x_4337_);
lean_closure_set(v___f_4352_, 4, v___y_4321_);
lean_closure_set(v___f_4352_, 5, v___x_4351_);
lean_closure_set(v___f_4352_, 6, v___y_4320_);
v___x_4353_ = lean_box(v___x_4350_);
v___f_4354_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__16___boxed), 5, 3);
lean_closure_set(v___f_4354_, 0, v___y_4321_);
lean_closure_set(v___f_4354_, 1, v___x_4353_);
lean_closure_set(v___f_4354_, 2, v___f_4352_);
v___x_4355_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__1));
v___x_4356_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4357_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4357_, 0, v_fst_4301_);
lean_ctor_set(v___x_4357_, 1, v___x_4356_);
v___x_4358_ = lean_mk_empty_array_with_capacity(v___y_4327_);
lean_dec(v___y_4327_);
v___x_4359_ = lean_array_push(v___x_4358_, v___x_4357_);
v___x_4360_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4302_, v___x_4355_, v___x_4359_);
if (lean_obj_tag(v___x_4360_) == 0)
{
lean_object* v_a_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4368_; 
v_a_4361_ = lean_ctor_get(v___x_4360_, 0);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4360_);
if (v_isSharedCheck_4368_ == 0)
{
v___x_4363_ = v___x_4360_;
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_a_4361_);
lean_dec(v___x_4360_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
lean_object* v___x_4366_; 
if (v_isShared_4364_ == 0)
{
lean_ctor_set_tag(v___x_4363_, 1);
v___x_4366_ = v___x_4363_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v_a_4361_);
v___x_4366_ = v_reuseFailAlloc_4367_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
v___y_4310_ = v___y_4323_;
v___y_4311_ = v___f_4354_;
v___y_4312_ = v___x_4350_;
v_val_4313_ = v___x_4366_;
goto v___jp_4309_;
}
}
}
else
{
lean_object* v_a_4369_; lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4376_; 
v_a_4369_ = lean_ctor_get(v___x_4360_, 0);
v_isSharedCheck_4376_ = !lean_is_exclusive(v___x_4360_);
if (v_isSharedCheck_4376_ == 0)
{
v___x_4371_ = v___x_4360_;
v_isShared_4372_ = v_isSharedCheck_4376_;
goto v_resetjp_4370_;
}
else
{
lean_inc(v_a_4369_);
lean_dec(v___x_4360_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4376_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
lean_object* v___x_4374_; 
if (v_isShared_4372_ == 0)
{
lean_ctor_set_tag(v___x_4371_, 0);
v___x_4374_ = v___x_4371_;
goto v_reusejp_4373_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v_a_4369_);
v___x_4374_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4373_;
}
v_reusejp_4373_:
{
v___y_4310_ = v___y_4323_;
v___y_4311_ = v___f_4354_;
v___y_4312_ = v___x_4350_;
v_val_4313_ = v___x_4374_;
goto v___jp_4309_;
}
}
}
}
}
}
v___jp_4377_:
{
lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; uint8_t v___x_4396_; 
v___x_4393_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4394_ = lean_string_utf8_byte_size(v___y_4387_);
v___x_4395_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__17___closed__2, &l_Lasm_Fetch_serveNode___lam__17___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__17___closed__2);
v___x_4396_ = lean_nat_dec_le(v___x_4395_, v___x_4394_);
if (v___x_4396_ == 0)
{
lean_dec_ref(v___y_4385_);
v___y_4317_ = v___y_4379_;
v___y_4318_ = v___y_4378_;
v___y_4319_ = v___y_4380_;
v___y_4320_ = v___y_4381_;
v___y_4321_ = v___y_4382_;
v___y_4322_ = v___y_4383_;
v___y_4323_ = v___y_4384_;
v___y_4324_ = v___y_4386_;
v___y_4325_ = v___y_4392_;
v___y_4326_ = v___y_4388_;
v___y_4327_ = v___y_4390_;
v___y_4328_ = v___y_4389_;
v___y_4329_ = v___y_4391_;
v___y_4330_ = v___y_4387_;
goto v___jp_4316_;
}
else
{
uint8_t v___x_4397_; 
v___x_4397_ = lean_string_memcmp(v___y_4387_, v___x_4393_, v___y_4384_, v___y_4384_, v___x_4395_);
if (v___x_4397_ == 0)
{
lean_dec_ref(v___y_4385_);
v___y_4317_ = v___y_4379_;
v___y_4318_ = v___y_4378_;
v___y_4319_ = v___y_4380_;
v___y_4320_ = v___y_4381_;
v___y_4321_ = v___y_4382_;
v___y_4322_ = v___y_4383_;
v___y_4323_ = v___y_4384_;
v___y_4324_ = v___y_4386_;
v___y_4325_ = v___y_4392_;
v___y_4326_ = v___y_4388_;
v___y_4327_ = v___y_4390_;
v___y_4328_ = v___y_4389_;
v___y_4329_ = v___y_4391_;
v___y_4330_ = v___y_4387_;
goto v___jp_4316_;
}
else
{
lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; 
v___x_4398_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__3));
v___x_4399_ = lean_string_append(v___x_4398_, v___y_4385_);
lean_dec_ref(v___y_4385_);
v___x_4400_ = lean_string_append(v___x_4399_, v___y_4387_);
lean_dec_ref(v___y_4387_);
v___y_4317_ = v___y_4379_;
v___y_4318_ = v___y_4378_;
v___y_4319_ = v___y_4380_;
v___y_4320_ = v___y_4381_;
v___y_4321_ = v___y_4382_;
v___y_4322_ = v___y_4383_;
v___y_4323_ = v___y_4384_;
v___y_4324_ = v___y_4386_;
v___y_4325_ = v___y_4392_;
v___y_4326_ = v___y_4388_;
v___y_4327_ = v___y_4390_;
v___y_4328_ = v___y_4389_;
v___y_4329_ = v___y_4391_;
v___y_4330_ = v___x_4400_;
goto v___jp_4316_;
}
}
}
v___jp_4401_:
{
lean_object* v___x_4416_; uint8_t v___x_4417_; 
v___x_4416_ = lean_array_get_size(v___y_4413_);
v___x_4417_ = lean_nat_dec_lt(v___y_4408_, v___x_4416_);
if (v___x_4417_ == 0)
{
v___y_4378_ = v___y_4403_;
v___y_4379_ = v___y_4402_;
v___y_4380_ = v___y_4404_;
v___y_4381_ = v___y_4405_;
v___y_4382_ = v___y_4406_;
v___y_4383_ = v___y_4407_;
v___y_4384_ = v___y_4408_;
v___y_4385_ = v___y_4415_;
v___y_4386_ = v___y_4409_;
v___y_4387_ = v___y_4410_;
v___y_4388_ = v___y_4411_;
v___y_4389_ = v___y_4413_;
v___y_4390_ = v___y_4412_;
v___y_4391_ = v___y_4414_;
v___y_4392_ = v___x_4417_;
goto v___jp_4377_;
}
else
{
if (v___x_4417_ == 0)
{
v___y_4378_ = v___y_4403_;
v___y_4379_ = v___y_4402_;
v___y_4380_ = v___y_4404_;
v___y_4381_ = v___y_4405_;
v___y_4382_ = v___y_4406_;
v___y_4383_ = v___y_4407_;
v___y_4384_ = v___y_4408_;
v___y_4385_ = v___y_4415_;
v___y_4386_ = v___y_4409_;
v___y_4387_ = v___y_4410_;
v___y_4388_ = v___y_4411_;
v___y_4389_ = v___y_4413_;
v___y_4390_ = v___y_4412_;
v___y_4391_ = v___y_4414_;
v___y_4392_ = v___x_4417_;
goto v___jp_4377_;
}
else
{
size_t v___x_4418_; size_t v___x_4419_; uint8_t v___x_4420_; 
v___x_4418_ = ((size_t)0ULL);
v___x_4419_ = lean_usize_of_nat(v___x_4416_);
v___x_4420_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v___y_4413_, v___x_4418_, v___x_4419_);
v___y_4378_ = v___y_4403_;
v___y_4379_ = v___y_4402_;
v___y_4380_ = v___y_4404_;
v___y_4381_ = v___y_4405_;
v___y_4382_ = v___y_4406_;
v___y_4383_ = v___y_4407_;
v___y_4384_ = v___y_4408_;
v___y_4385_ = v___y_4415_;
v___y_4386_ = v___y_4409_;
v___y_4387_ = v___y_4410_;
v___y_4388_ = v___y_4411_;
v___y_4389_ = v___y_4413_;
v___y_4390_ = v___y_4412_;
v___y_4391_ = v___y_4414_;
v___y_4392_ = v___x_4420_;
goto v___jp_4377_;
}
}
}
v___jp_4421_:
{
lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; 
v___x_4435_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__4));
v___x_4436_ = l_Nat_reprFast(v___y_4303_);
v___x_4437_ = lean_string_append(v___x_4435_, v___x_4436_);
lean_dec_ref(v___x_4436_);
v___y_4402_ = v___y_4423_;
v___y_4403_ = v___y_4422_;
v___y_4404_ = v___y_4424_;
v___y_4405_ = v___y_4425_;
v___y_4406_ = v___y_4427_;
v___y_4407_ = v___y_4428_;
v___y_4408_ = v___y_4429_;
v___y_4409_ = v___y_4426_;
v___y_4410_ = v___y_4430_;
v___y_4411_ = v___y_4431_;
v___y_4412_ = v___y_4433_;
v___y_4413_ = v___y_4432_;
v___y_4414_ = v___y_4434_;
v___y_4415_ = v___x_4437_;
goto v___jp_4401_;
}
v___jp_4438_:
{
lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; size_t v_sz_4451_; size_t v___x_4452_; lean_object* v___x_4453_; lean_object* v_fst_4454_; lean_object* v___f_4455_; lean_object* v___f_4456_; lean_object* v___f_4457_; 
v___x_4443_ = lean_unsigned_to_nat(0u);
v___x_4444_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_4445_ = lean_array_get_size(v___y_4442_);
v___x_4446_ = lean_unsigned_to_nat(1u);
v___x_4447_ = lean_nat_shiftr(v___x_4445_, v___x_4446_);
v___x_4448_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4448_, 0, v___x_4443_);
lean_ctor_set(v___x_4448_, 1, v___x_4447_);
lean_ctor_set(v___x_4448_, 2, v___x_4446_);
v___x_4449_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4442_, v___x_4448_, v___x_4444_, v___x_4443_);
lean_dec_ref_known(v___x_4448_, 3);
lean_dec_ref(v___y_4442_);
v___x_4450_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_4451_ = lean_array_size(v___x_4449_);
v___x_4452_ = ((size_t)0ULL);
v___x_4453_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_4449_, v_sz_4451_, v___x_4452_, v___x_4450_);
v_fst_4454_ = lean_ctor_get(v___x_4453_, 0);
lean_inc(v_fst_4454_);
lean_dec_ref(v___x_4453_);
lean_inc_ref(v___y_4439_);
v___f_4455_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 7, 5);
lean_closure_set(v___f_4455_, 0, v___x_4443_);
lean_closure_set(v___f_4455_, 1, v_snd_4295_);
lean_closure_set(v___f_4455_, 2, v___y_4439_);
lean_closure_set(v___f_4455_, 3, v___f_4296_);
lean_closure_set(v___f_4455_, 4, v___f_4297_);
v___f_4456_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_4456_, 0, v_handler_4298_);
lean_closure_set(v___f_4456_, 1, v___x_4443_);
lean_closure_set(v___f_4456_, 2, v___f_4455_);
v___f_4457_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 3, 1);
lean_closure_set(v___f_4457_, 0, v___f_4456_);
if (lean_obj_tag(v_fst_4454_) == 0)
{
lean_inc_ref(v___x_4449_);
lean_inc_ref_n(v___f_4457_, 2);
v___y_4422_ = v___f_4457_;
v___y_4423_ = v___x_4446_;
v___y_4424_ = v___x_4449_;
v___y_4425_ = v___f_4457_;
v___y_4426_ = v___f_4457_;
v___y_4427_ = v___x_4443_;
v___y_4428_ = v___y_4439_;
v___y_4429_ = v___x_4443_;
v___y_4430_ = v___y_4440_;
v___y_4431_ = v___x_4444_;
v___y_4432_ = v___x_4449_;
v___y_4433_ = v___x_4446_;
v___y_4434_ = v___y_4441_;
goto v___jp_4421_;
}
else
{
lean_object* v_val_4458_; 
v_val_4458_ = lean_ctor_get(v_fst_4454_, 0);
lean_inc(v_val_4458_);
lean_dec_ref_known(v_fst_4454_, 1);
if (lean_obj_tag(v_val_4458_) == 0)
{
lean_inc_ref(v___x_4449_);
lean_inc_ref_n(v___f_4457_, 2);
v___y_4422_ = v___f_4457_;
v___y_4423_ = v___x_4446_;
v___y_4424_ = v___x_4449_;
v___y_4425_ = v___f_4457_;
v___y_4426_ = v___f_4457_;
v___y_4427_ = v___x_4443_;
v___y_4428_ = v___y_4439_;
v___y_4429_ = v___x_4443_;
v___y_4430_ = v___y_4440_;
v___y_4431_ = v___x_4444_;
v___y_4432_ = v___x_4449_;
v___y_4433_ = v___x_4446_;
v___y_4434_ = v___y_4441_;
goto v___jp_4421_;
}
else
{
lean_object* v_val_4459_; lean_object* v_snd_4460_; 
lean_dec(v___y_4303_);
v_val_4459_ = lean_ctor_get(v_val_4458_, 0);
lean_inc(v_val_4459_);
lean_dec_ref_known(v_val_4458_, 1);
v_snd_4460_ = lean_ctor_get(v_val_4459_, 1);
lean_inc(v_snd_4460_);
lean_dec(v_val_4459_);
lean_inc_ref(v___x_4449_);
lean_inc_ref_n(v___f_4457_, 2);
v___y_4402_ = v___x_4446_;
v___y_4403_ = v___f_4457_;
v___y_4404_ = v___x_4449_;
v___y_4405_ = v___f_4457_;
v___y_4406_ = v___x_4443_;
v___y_4407_ = v___y_4439_;
v___y_4408_ = v___x_4443_;
v___y_4409_ = v___f_4457_;
v___y_4410_ = v___y_4440_;
v___y_4411_ = v___x_4444_;
v___y_4412_ = v___x_4446_;
v___y_4413_ = v___x_4449_;
v___y_4414_ = v___y_4441_;
v___y_4415_ = v_snd_4460_;
goto v___jp_4401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object* v_snd_4488_, lean_object* v___f_4489_, lean_object* v___f_4490_, lean_object* v_handler_4491_, lean_object* v_options_4492_, lean_object* v_a_4493_, lean_object* v_fst_4494_, lean_object* v_a_4495_, lean_object* v___y_4496_, lean_object* v___x_4497_, lean_object* v___x_4498_, lean_object* v___x_4499_, lean_object* v_x_4500_, lean_object* v___y_4501_){
_start:
{
lean_object* v_res_4502_; 
v_res_4502_ = l_Lasm_Fetch_serveNode___lam__17(v_snd_4488_, v___f_4489_, v___f_4490_, v_handler_4491_, v_options_4492_, v_a_4493_, v_fst_4494_, v_a_4495_, v___y_4496_, v___x_4497_, v___x_4498_, v___x_4499_, v_x_4500_);
lean_dec_ref(v___x_4499_);
lean_dec_ref(v___x_4498_);
lean_dec_ref(v___x_4497_);
return v_res_4502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object* v___f_4512_, lean_object* v___f_4513_, lean_object* v_handler_4514_, lean_object* v_options_4515_, lean_object* v_a_4516_, lean_object* v_a_4517_, lean_object* v___y_4518_, lean_object* v_____x_4519_){
_start:
{
lean_object* v_fst_4521_; lean_object* v_snd_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___f_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; uint8_t v___x_4529_; lean_object* v_val_4531_; lean_object* v___x_4534_; 
v_fst_4521_ = lean_ctor_get(v_____x_4519_, 0);
lean_inc_n(v_fst_4521_, 2);
v_snd_4522_ = lean_ctor_get(v_____x_4519_, 1);
lean_inc(v_snd_4522_);
lean_dec_ref(v_____x_4519_);
v___x_4523_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_4524_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_4525_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__0));
v___f_4526_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__17___boxed), 14, 12);
lean_closure_set(v___f_4526_, 0, v_snd_4522_);
lean_closure_set(v___f_4526_, 1, v___f_4512_);
lean_closure_set(v___f_4526_, 2, v___f_4513_);
lean_closure_set(v___f_4526_, 3, v_handler_4514_);
lean_closure_set(v___f_4526_, 4, v_options_4515_);
lean_closure_set(v___f_4526_, 5, v_a_4516_);
lean_closure_set(v___f_4526_, 6, v_fst_4521_);
lean_closure_set(v___f_4526_, 7, v_a_4517_);
lean_closure_set(v___f_4526_, 8, v___y_4518_);
lean_closure_set(v___f_4526_, 9, v___x_4525_);
lean_closure_set(v___f_4526_, 10, v___x_4524_);
lean_closure_set(v___f_4526_, 11, v___x_4523_);
v___x_4527_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__1));
v___x_4528_ = lean_unsigned_to_nat(0u);
v___x_4529_ = 0;
v___x_4534_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_fst_4521_, v___x_4527_);
if (lean_obj_tag(v___x_4534_) == 0)
{
lean_object* v_a_4535_; lean_object* v___x_4537_; uint8_t v_isShared_4538_; uint8_t v_isSharedCheck_4542_; 
v_a_4535_ = lean_ctor_get(v___x_4534_, 0);
v_isSharedCheck_4542_ = !lean_is_exclusive(v___x_4534_);
if (v_isSharedCheck_4542_ == 0)
{
v___x_4537_ = v___x_4534_;
v_isShared_4538_ = v_isSharedCheck_4542_;
goto v_resetjp_4536_;
}
else
{
lean_inc(v_a_4535_);
lean_dec(v___x_4534_);
v___x_4537_ = lean_box(0);
v_isShared_4538_ = v_isSharedCheck_4542_;
goto v_resetjp_4536_;
}
v_resetjp_4536_:
{
lean_object* v___x_4540_; 
if (v_isShared_4538_ == 0)
{
lean_ctor_set_tag(v___x_4537_, 1);
v___x_4540_ = v___x_4537_;
goto v_reusejp_4539_;
}
else
{
lean_object* v_reuseFailAlloc_4541_; 
v_reuseFailAlloc_4541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4541_, 0, v_a_4535_);
v___x_4540_ = v_reuseFailAlloc_4541_;
goto v_reusejp_4539_;
}
v_reusejp_4539_:
{
v_val_4531_ = v___x_4540_;
goto v___jp_4530_;
}
}
}
else
{
lean_object* v_a_4543_; lean_object* v___x_4545_; uint8_t v_isShared_4546_; uint8_t v_isSharedCheck_4550_; 
v_a_4543_ = lean_ctor_get(v___x_4534_, 0);
v_isSharedCheck_4550_ = !lean_is_exclusive(v___x_4534_);
if (v_isSharedCheck_4550_ == 0)
{
v___x_4545_ = v___x_4534_;
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
else
{
lean_inc(v_a_4543_);
lean_dec(v___x_4534_);
v___x_4545_ = lean_box(0);
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
v_resetjp_4544_:
{
lean_object* v___x_4548_; 
if (v_isShared_4546_ == 0)
{
lean_ctor_set_tag(v___x_4545_, 0);
v___x_4548_ = v___x_4545_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4549_; 
v_reuseFailAlloc_4549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4549_, 0, v_a_4543_);
v___x_4548_ = v_reuseFailAlloc_4549_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
v_val_4531_ = v___x_4548_;
goto v___jp_4530_;
}
}
}
v___jp_4530_:
{
lean_object* v___x_4532_; lean_object* v___x_4533_; 
v___x_4532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4532_, 0, v_val_4531_);
v___x_4533_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4528_, v___x_4529_, v___x_4532_, v___f_4526_);
return v___x_4533_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object* v___f_4551_, lean_object* v___f_4552_, lean_object* v_handler_4553_, lean_object* v_options_4554_, lean_object* v_a_4555_, lean_object* v_a_4556_, lean_object* v___y_4557_, lean_object* v_____x_4558_, lean_object* v___y_4559_){
_start:
{
lean_object* v_res_4560_; 
v_res_4560_ = l_Lasm_Fetch_serveNode___lam__19(v___f_4551_, v___f_4552_, v_handler_4553_, v_options_4554_, v_a_4555_, v_a_4556_, v___y_4557_, v_____x_4558_);
return v_res_4560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object* v___f_4561_, lean_object* v_x_4562_){
_start:
{
if (lean_obj_tag(v_x_4562_) == 0)
{
lean_object* v_a_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4572_; 
lean_dec_ref(v___f_4561_);
v_a_4564_ = lean_ctor_get(v_x_4562_, 0);
v_isSharedCheck_4572_ = !lean_is_exclusive(v_x_4562_);
if (v_isSharedCheck_4572_ == 0)
{
v___x_4566_ = v_x_4562_;
v_isShared_4567_ = v_isSharedCheck_4572_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_a_4564_);
lean_dec(v_x_4562_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4572_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v___x_4569_; 
if (v_isShared_4567_ == 0)
{
v___x_4569_ = v___x_4566_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4571_; 
v_reuseFailAlloc_4571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4571_, 0, v_a_4564_);
v___x_4569_ = v_reuseFailAlloc_4571_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
lean_object* v___x_4570_; 
v___x_4570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4570_, 0, v___x_4569_);
return v___x_4570_;
}
}
}
else
{
lean_object* v_a_4573_; lean_object* v___x_4574_; 
v_a_4573_ = lean_ctor_get(v_x_4562_, 0);
lean_inc(v_a_4573_);
lean_dec_ref_known(v_x_4562_, 1);
v___x_4574_ = lean_apply_2(v___f_4561_, v_a_4573_, lean_box(0));
return v___x_4574_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object* v___f_4575_, lean_object* v_x_4576_, lean_object* v___y_4577_){
_start:
{
lean_object* v_res_4578_; 
v_res_4578_ = l_Lasm_Fetch_serveNode___lam__20(v___f_4575_, v_x_4576_);
return v_res_4578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object* v___f_4586_, lean_object* v___f_4587_, lean_object* v_args_4588_){
_start:
{
lean_object* v___x_4595_; lean_object* v___x_4596_; uint8_t v___x_4597_; 
v___x_4595_ = lean_unsigned_to_nat(0u);
v___x_4596_ = lean_array_get_size(v_args_4588_);
v___x_4597_ = lean_nat_dec_lt(v___x_4595_, v___x_4596_);
if (v___x_4597_ == 0)
{
lean_dec_ref(v___f_4587_);
goto v___jp_4590_;
}
else
{
lean_object* v___x_4598_; 
v___x_4598_ = lean_array_fget_borrowed(v_args_4588_, v___x_4595_);
if (lean_obj_tag(v___x_4598_) == 9)
{
lean_object* v_value_4599_; lean_object* v___x_4600_; uint8_t v___x_4601_; 
v_value_4599_ = lean_ctor_get(v___x_4598_, 0);
v___x_4600_ = lean_unsigned_to_nat(1u);
v___x_4601_ = lean_nat_dec_lt(v___x_4600_, v___x_4596_);
if (v___x_4601_ == 0)
{
lean_dec_ref(v___f_4587_);
goto v___jp_4590_;
}
else
{
lean_object* v___x_4602_; 
v___x_4602_ = lean_array_fget(v_args_4588_, v___x_4600_);
if (lean_obj_tag(v___x_4602_) == 9)
{
lean_object* v_value_4603_; lean_object* v___x_4605_; uint8_t v_isShared_4606_; uint8_t v_isSharedCheck_4614_; 
lean_dec_ref(v___f_4586_);
v_value_4603_ = lean_ctor_get(v___x_4602_, 0);
v_isSharedCheck_4614_ = !lean_is_exclusive(v___x_4602_);
if (v_isSharedCheck_4614_ == 0)
{
lean_object* v_unused_4615_; 
v_unused_4615_ = lean_ctor_get(v___x_4602_, 1);
lean_dec(v_unused_4615_);
v___x_4605_ = v___x_4602_;
v_isShared_4606_ = v_isSharedCheck_4614_;
goto v_resetjp_4604_;
}
else
{
lean_inc(v_value_4603_);
lean_dec(v___x_4602_);
v___x_4605_ = lean_box(0);
v_isShared_4606_ = v_isSharedCheck_4614_;
goto v_resetjp_4604_;
}
v_resetjp_4604_:
{
lean_object* v___x_4608_; 
lean_inc(v_value_4599_);
if (v_isShared_4606_ == 0)
{
lean_ctor_set_tag(v___x_4605_, 0);
lean_ctor_set(v___x_4605_, 1, v_value_4603_);
lean_ctor_set(v___x_4605_, 0, v_value_4599_);
v___x_4608_ = v___x_4605_;
goto v_reusejp_4607_;
}
else
{
lean_object* v_reuseFailAlloc_4613_; 
v_reuseFailAlloc_4613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4613_, 0, v_value_4599_);
lean_ctor_set(v_reuseFailAlloc_4613_, 1, v_value_4603_);
v___x_4608_ = v_reuseFailAlloc_4613_;
goto v_reusejp_4607_;
}
v_reusejp_4607_:
{
uint8_t v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; 
v___x_4609_ = 0;
v___x_4610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4610_, 0, v___x_4608_);
v___x_4611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4611_, 0, v___x_4610_);
v___x_4612_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4595_, v___x_4609_, v___x_4611_, v___f_4587_);
return v___x_4612_;
}
}
}
else
{
lean_dec(v___x_4602_);
lean_dec_ref(v___f_4587_);
goto v___jp_4590_;
}
}
}
else
{
lean_dec_ref(v___f_4587_);
goto v___jp_4590_;
}
}
v___jp_4590_:
{
lean_object* v___x_4591_; uint8_t v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; 
v___x_4591_ = lean_unsigned_to_nat(0u);
v___x_4592_ = 0;
v___x_4593_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__22___closed__3));
v___x_4594_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4591_, v___x_4592_, v___x_4593_, v___f_4586_);
return v___x_4594_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object* v___f_4616_, lean_object* v___f_4617_, lean_object* v_args_4618_, lean_object* v___y_4619_){
_start:
{
lean_object* v_res_4620_; 
v_res_4620_ = l_Lasm_Fetch_serveNode___lam__22(v___f_4616_, v___f_4617_, v_args_4618_);
lean_dec_ref(v_args_4618_);
return v_res_4620_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_4621_){
_start:
{
lean_object* v___x_4623_; lean_object* v_putStr_4624_; lean_object* v___x_4625_; 
v___x_4623_ = lean_get_stdout();
v_putStr_4624_ = lean_ctor_get(v___x_4623_, 4);
lean_inc_ref(v_putStr_4624_);
lean_dec_ref(v___x_4623_);
v___x_4625_ = lean_apply_2(v_putStr_4624_, v_s_4621_, lean_box(0));
return v___x_4625_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_4626_, lean_object* v_a_4627_){
_start:
{
lean_object* v_res_4628_; 
v_res_4628_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_4626_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_4629_){
_start:
{
uint32_t v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; 
v___x_4631_ = 10;
v___x_4632_ = lean_string_push(v_s_4629_, v___x_4631_);
v___x_4633_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_4632_);
return v___x_4633_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_4634_, lean_object* v_a_4635_){
_start:
{
lean_object* v_res_4636_; 
v_res_4636_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_4634_);
return v_res_4636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object* v___y_4639_, lean_object* v___y_4640_, lean_object* v___f_4641_, lean_object* v_x_4642_){
_start:
{
lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; uint8_t v___x_4651_; lean_object* v_val_4653_; lean_object* v___x_4656_; 
v___x_4644_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__0));
v___x_4645_ = lean_string_append(v___x_4644_, v___y_4639_);
v___x_4646_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__1));
v___x_4647_ = lean_string_append(v___x_4645_, v___x_4646_);
v___x_4648_ = l_Nat_reprFast(v___y_4640_);
v___x_4649_ = lean_string_append(v___x_4647_, v___x_4648_);
lean_dec_ref(v___x_4648_);
v___x_4650_ = lean_unsigned_to_nat(0u);
v___x_4651_ = 0;
v___x_4656_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_4649_);
if (lean_obj_tag(v___x_4656_) == 0)
{
lean_object* v_a_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4664_; 
v_a_4657_ = lean_ctor_get(v___x_4656_, 0);
v_isSharedCheck_4664_ = !lean_is_exclusive(v___x_4656_);
if (v_isSharedCheck_4664_ == 0)
{
v___x_4659_ = v___x_4656_;
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_a_4657_);
lean_dec(v___x_4656_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4660_ == 0)
{
lean_ctor_set_tag(v___x_4659_, 1);
v___x_4662_ = v___x_4659_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v_a_4657_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
v_val_4653_ = v___x_4662_;
goto v___jp_4652_;
}
}
}
else
{
lean_object* v_a_4665_; lean_object* v___x_4667_; uint8_t v_isShared_4668_; uint8_t v_isSharedCheck_4672_; 
v_a_4665_ = lean_ctor_get(v___x_4656_, 0);
v_isSharedCheck_4672_ = !lean_is_exclusive(v___x_4656_);
if (v_isSharedCheck_4672_ == 0)
{
v___x_4667_ = v___x_4656_;
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
else
{
lean_inc(v_a_4665_);
lean_dec(v___x_4656_);
v___x_4667_ = lean_box(0);
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
v_resetjp_4666_:
{
lean_object* v___x_4670_; 
if (v_isShared_4668_ == 0)
{
lean_ctor_set_tag(v___x_4667_, 0);
v___x_4670_ = v___x_4667_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v_a_4665_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
v_val_4653_ = v___x_4670_;
goto v___jp_4652_;
}
}
}
v___jp_4652_:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; 
v___x_4654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4654_, 0, v_val_4653_);
v___x_4655_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4650_, v___x_4651_, v___x_4654_, v___f_4641_);
return v___x_4655_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___f_4675_, lean_object* v_x_4676_, lean_object* v___y_4677_){
_start:
{
lean_object* v_res_4678_; 
v_res_4678_ = l_Lasm_Fetch_serveNode___lam__21(v___y_4673_, v___y_4674_, v___f_4675_, v_x_4676_);
lean_dec_ref(v_x_4676_);
lean_dec_ref(v___y_4673_);
return v_res_4678_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__1(void){
_start:
{
lean_object* v___x_4680_; lean_object* v___x_4681_; 
v___x_4680_ = lean_unsigned_to_nat(0u);
v___x_4681_ = lean_nat_to_int(v___x_4680_);
return v___x_4681_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__2(void){
_start:
{
lean_object* v___x_4682_; lean_object* v___x_4683_; 
v___x_4682_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4683_ = lean_nat_abs(v___x_4682_);
return v___x_4683_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__23___closed__3(void){
_start:
{
lean_object* v___x_4684_; lean_object* v___x_4685_; uint8_t v___x_4686_; 
v___x_4684_ = lean_cstr_to_nat("9007199254740991");
v___x_4685_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__2, &l_Lasm_Fetch_serveNode___lam__23___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__2);
v___x_4686_ = lean_nat_dec_le(v___x_4685_, v___x_4684_);
return v___x_4686_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__4(void){
_start:
{
lean_object* v___x_4687_; lean_object* v___x_4688_; 
v___x_4687_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4688_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4688_, 0, v___x_4687_);
return v___x_4688_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__23___closed__5(void){
_start:
{
lean_object* v___x_4689_; double v___x_4690_; 
v___x_4689_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4690_ = l_Float_ofInt(v___x_4689_);
return v___x_4690_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__6(void){
_start:
{
double v___x_4691_; lean_object* v___x_4692_; 
v___x_4691_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__23___closed__5, &l_Lasm_Fetch_serveNode___lam__23___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__5);
v___x_4692_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4692_, 0, v___x_4691_);
return v___x_4692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object* v___f_4693_, lean_object* v___x_4694_, lean_object* v_a_4695_, lean_object* v_x_4696_){
_start:
{
uint8_t v___y_4699_; lean_object* v___y_4700_; lean_object* v_val_4701_; lean_object* v___x_4704_; lean_object* v___y_4706_; uint8_t v___x_4727_; 
v___x_4704_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__23___closed__0));
v___x_4727_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__23___closed__3, &l_Lasm_Fetch_serveNode___lam__23___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__3);
if (v___x_4727_ == 0)
{
lean_object* v___x_4728_; 
v___x_4728_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__4, &l_Lasm_Fetch_serveNode___lam__23___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__4);
v___y_4706_ = v___x_4728_;
goto v___jp_4705_;
}
else
{
lean_object* v___x_4729_; 
v___x_4729_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__6, &l_Lasm_Fetch_serveNode___lam__23___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__6);
v___y_4706_ = v___x_4729_;
goto v___jp_4705_;
}
v___jp_4698_:
{
lean_object* v___x_4702_; lean_object* v___x_4703_; 
v___x_4702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4702_, 0, v_val_4701_);
v___x_4703_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4700_, v___y_4699_, v___x_4702_, v___f_4693_);
return v___x_4703_;
}
v___jp_4705_:
{
lean_object* v___x_4707_; lean_object* v___x_4708_; uint8_t v___x_4709_; lean_object* v___x_4710_; 
lean_inc(v___y_4706_);
v___x_4707_ = lean_array_push(v___x_4694_, v___y_4706_);
v___x_4708_ = lean_unsigned_to_nat(0u);
v___x_4709_ = 0;
v___x_4710_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4695_, v___x_4704_, v___x_4707_);
if (lean_obj_tag(v___x_4710_) == 0)
{
lean_object* v_a_4711_; lean_object* v___x_4713_; uint8_t v_isShared_4714_; uint8_t v_isSharedCheck_4718_; 
v_a_4711_ = lean_ctor_get(v___x_4710_, 0);
v_isSharedCheck_4718_ = !lean_is_exclusive(v___x_4710_);
if (v_isSharedCheck_4718_ == 0)
{
v___x_4713_ = v___x_4710_;
v_isShared_4714_ = v_isSharedCheck_4718_;
goto v_resetjp_4712_;
}
else
{
lean_inc(v_a_4711_);
lean_dec(v___x_4710_);
v___x_4713_ = lean_box(0);
v_isShared_4714_ = v_isSharedCheck_4718_;
goto v_resetjp_4712_;
}
v_resetjp_4712_:
{
lean_object* v___x_4716_; 
if (v_isShared_4714_ == 0)
{
lean_ctor_set_tag(v___x_4713_, 1);
v___x_4716_ = v___x_4713_;
goto v_reusejp_4715_;
}
else
{
lean_object* v_reuseFailAlloc_4717_; 
v_reuseFailAlloc_4717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4717_, 0, v_a_4711_);
v___x_4716_ = v_reuseFailAlloc_4717_;
goto v_reusejp_4715_;
}
v_reusejp_4715_:
{
v___y_4699_ = v___x_4709_;
v___y_4700_ = v___x_4708_;
v_val_4701_ = v___x_4716_;
goto v___jp_4698_;
}
}
}
else
{
lean_object* v_a_4719_; lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4726_; 
v_a_4719_ = lean_ctor_get(v___x_4710_, 0);
v_isSharedCheck_4726_ = !lean_is_exclusive(v___x_4710_);
if (v_isSharedCheck_4726_ == 0)
{
v___x_4721_ = v___x_4710_;
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
else
{
lean_inc(v_a_4719_);
lean_dec(v___x_4710_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v___x_4724_; 
if (v_isShared_4722_ == 0)
{
lean_ctor_set_tag(v___x_4721_, 0);
v___x_4724_ = v___x_4721_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4725_; 
v_reuseFailAlloc_4725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4725_, 0, v_a_4719_);
v___x_4724_ = v_reuseFailAlloc_4725_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
v___y_4699_ = v___x_4709_;
v___y_4700_ = v___x_4708_;
v_val_4701_ = v___x_4724_;
goto v___jp_4698_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object* v___f_4730_, lean_object* v___x_4731_, lean_object* v_a_4732_, lean_object* v_x_4733_, lean_object* v___y_4734_){
_start:
{
lean_object* v_res_4735_; 
v_res_4735_ = l_Lasm_Fetch_serveNode___lam__23(v___f_4730_, v___x_4731_, v_a_4732_, v_x_4733_);
lean_dec_ref(v_x_4733_);
return v_res_4735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object* v_a_4736_, lean_object* v___x_4737_, lean_object* v___x_4738_, lean_object* v___f_4739_, lean_object* v_a_4740_, lean_object* v_x_4741_){
_start:
{
lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; uint8_t v___x_4747_; lean_object* v_val_4749_; lean_object* v___x_4752_; 
v___x_4743_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_4744_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4744_, 0, v_a_4736_);
lean_ctor_set(v___x_4744_, 1, v___x_4737_);
v___x_4745_ = lean_array_push(v___x_4738_, v___x_4744_);
v___x_4746_ = lean_unsigned_to_nat(0u);
v___x_4747_ = 0;
v___x_4752_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4740_, v___x_4743_, v___x_4745_);
if (lean_obj_tag(v___x_4752_) == 0)
{
lean_object* v_a_4753_; lean_object* v___x_4755_; uint8_t v_isShared_4756_; uint8_t v_isSharedCheck_4760_; 
v_a_4753_ = lean_ctor_get(v___x_4752_, 0);
v_isSharedCheck_4760_ = !lean_is_exclusive(v___x_4752_);
if (v_isSharedCheck_4760_ == 0)
{
v___x_4755_ = v___x_4752_;
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
else
{
lean_inc(v_a_4753_);
lean_dec(v___x_4752_);
v___x_4755_ = lean_box(0);
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
v_resetjp_4754_:
{
lean_object* v___x_4758_; 
if (v_isShared_4756_ == 0)
{
lean_ctor_set_tag(v___x_4755_, 1);
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
v_val_4749_ = v___x_4758_;
goto v___jp_4748_;
}
}
}
else
{
lean_object* v_a_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4768_; 
v_a_4761_ = lean_ctor_get(v___x_4752_, 0);
v_isSharedCheck_4768_ = !lean_is_exclusive(v___x_4752_);
if (v_isSharedCheck_4768_ == 0)
{
v___x_4763_ = v___x_4752_;
v_isShared_4764_ = v_isSharedCheck_4768_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_a_4761_);
lean_dec(v___x_4752_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4768_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
lean_object* v___x_4766_; 
if (v_isShared_4764_ == 0)
{
lean_ctor_set_tag(v___x_4763_, 0);
v___x_4766_ = v___x_4763_;
goto v_reusejp_4765_;
}
else
{
lean_object* v_reuseFailAlloc_4767_; 
v_reuseFailAlloc_4767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4767_, 0, v_a_4761_);
v___x_4766_ = v_reuseFailAlloc_4767_;
goto v_reusejp_4765_;
}
v_reusejp_4765_:
{
v_val_4749_ = v___x_4766_;
goto v___jp_4748_;
}
}
}
v___jp_4748_:
{
lean_object* v___x_4750_; lean_object* v___x_4751_; 
v___x_4750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4750_, 0, v_val_4749_);
v___x_4751_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4746_, v___x_4747_, v___x_4750_, v___f_4739_);
return v___x_4751_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object* v_a_4769_, lean_object* v___x_4770_, lean_object* v___x_4771_, lean_object* v___f_4772_, lean_object* v_a_4773_, lean_object* v_x_4774_, lean_object* v___y_4775_){
_start:
{
lean_object* v_res_4776_; 
v_res_4776_ = l_Lasm_Fetch_serveNode___lam__24(v_a_4769_, v___x_4770_, v___x_4771_, v___f_4772_, v_a_4773_, v_x_4774_);
lean_dec_ref(v_x_4774_);
return v_res_4776_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_4778_, lean_object* v_a_4779_, lean_object* v_as_x27_4780_, lean_object* v_b_4781_){
_start:
{
if (lean_obj_tag(v_as_x27_4780_) == 0)
{
lean_object* v___x_4783_; 
lean_dec(v_a_4779_);
lean_dec(v_a_4778_);
v___x_4783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4783_, 0, v_b_4781_);
return v___x_4783_;
}
else
{
lean_object* v_head_4784_; lean_object* v_tail_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; 
v_head_4784_ = lean_ctor_get(v_as_x27_4780_, 0);
v_tail_4785_ = lean_ctor_get(v_as_x27_4780_, 1);
v___x_4786_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4787_ = lean_box(0);
v___x_4788_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_4784_);
v___x_4789_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4789_, 0, v_head_4784_);
lean_inc(v_a_4778_);
v___x_4790_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4790_, 0, v_a_4778_);
lean_ctor_set(v___x_4790_, 1, v___x_4786_);
v___x_4791_ = lean_unsigned_to_nat(2u);
v___x_4792_ = lean_mk_empty_array_with_capacity(v___x_4791_);
v___x_4793_ = lean_array_push(v___x_4792_, v___x_4789_);
v___x_4794_ = lean_array_push(v___x_4793_, v___x_4790_);
lean_inc(v_a_4779_);
v___x_4795_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4779_, v___x_4788_, v___x_4794_);
if (lean_obj_tag(v___x_4795_) == 0)
{
lean_dec_ref_known(v___x_4795_, 1);
v_as_x27_4780_ = v_tail_4785_;
v_b_4781_ = v___x_4787_;
goto _start;
}
else
{
lean_object* v_a_4797_; lean_object* v___x_4799_; uint8_t v_isShared_4800_; uint8_t v_isSharedCheck_4804_; 
lean_dec(v_a_4779_);
lean_dec(v_a_4778_);
v_a_4797_ = lean_ctor_get(v___x_4795_, 0);
v_isSharedCheck_4804_ = !lean_is_exclusive(v___x_4795_);
if (v_isSharedCheck_4804_ == 0)
{
v___x_4799_ = v___x_4795_;
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
else
{
lean_inc(v_a_4797_);
lean_dec(v___x_4795_);
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
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_4805_, lean_object* v_a_4806_, lean_object* v_as_x27_4807_, lean_object* v_b_4808_, lean_object* v___y_4809_){
_start:
{
lean_object* v_res_4810_; 
v_res_4810_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4805_, v_a_4806_, v_as_x27_4807_, v_b_4808_);
lean_dec(v_as_x27_4807_);
return v_res_4810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_4812_){
_start:
{
uint32_t v___x_4814_; uint32_t v___x_4815_; uint64_t v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; 
v___x_4814_ = 201;
v___x_4815_ = 0;
v___x_4816_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
v___x_4817_ = lean_string_to_utf8(v_specifier_4812_);
v___x_4818_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4814_, v___x_4815_, v___x_4816_, v___x_4817_);
lean_dec_ref(v___x_4817_);
if (lean_obj_tag(v___x_4818_) == 0)
{
lean_object* v_a_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; 
v_a_4819_ = lean_ctor_get(v___x_4818_, 0);
lean_inc(v_a_4819_);
lean_dec_ref_known(v___x_4818_, 1);
v___x_4820_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_4821_ = l_String_quote(v_specifier_4812_);
v___x_4822_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4822_, 0, v___x_4821_);
v___x_4823_ = lean_unsigned_to_nat(120u);
v___x_4824_ = lean_unsigned_to_nat(0u);
v___x_4825_ = l_Std_Format_pretty(v___x_4822_, v___x_4823_, v___x_4824_, v___x_4824_);
v___x_4826_ = lean_string_append(v___x_4820_, v___x_4825_);
lean_dec_ref(v___x_4825_);
v___x_4827_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_4826_, v_a_4819_);
lean_dec(v_a_4819_);
lean_dec_ref(v___x_4826_);
return v___x_4827_;
}
else
{
lean_object* v_a_4828_; lean_object* v___x_4830_; uint8_t v_isShared_4831_; uint8_t v_isSharedCheck_4835_; 
lean_dec_ref(v_specifier_4812_);
v_a_4828_ = lean_ctor_get(v___x_4818_, 0);
v_isSharedCheck_4835_ = !lean_is_exclusive(v___x_4818_);
if (v_isSharedCheck_4835_ == 0)
{
v___x_4830_ = v___x_4818_;
v_isShared_4831_ = v_isSharedCheck_4835_;
goto v_resetjp_4829_;
}
else
{
lean_inc(v_a_4828_);
lean_dec(v___x_4818_);
v___x_4830_ = lean_box(0);
v_isShared_4831_ = v_isSharedCheck_4835_;
goto v_resetjp_4829_;
}
v_resetjp_4829_:
{
lean_object* v___x_4833_; 
if (v_isShared_4831_ == 0)
{
v___x_4833_ = v___x_4830_;
goto v_reusejp_4832_;
}
else
{
lean_object* v_reuseFailAlloc_4834_; 
v_reuseFailAlloc_4834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4834_, 0, v_a_4828_);
v___x_4833_ = v_reuseFailAlloc_4834_;
goto v_reusejp_4832_;
}
v_reusejp_4832_:
{
return v___x_4833_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_4836_, lean_object* v_a_4837_){
_start:
{
lean_object* v_res_4838_; 
v_res_4838_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_4836_);
return v_res_4838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_4864_, lean_object* v_options_4865_){
_start:
{
lean_object* v___f_4867_; lean_object* v___f_4868_; lean_object* v___f_4869_; lean_object* v___f_4870_; lean_object* v___y_4872_; lean_object* v___y_4873_; lean_object* v___y_4874_; lean_object* v___y_4875_; lean_object* v___y_4876_; lean_object* v___y_4877_; lean_object* v___y_4878_; lean_object* v___y_4879_; lean_object* v___x_4933_; lean_object* v___x_4934_; 
v___f_4867_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__0));
v___f_4868_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_4869_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___f_4870_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_4933_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_4934_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4933_);
if (lean_obj_tag(v___x_4934_) == 0)
{
lean_object* v_a_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; 
v_a_4935_ = lean_ctor_get(v___x_4934_, 0);
lean_inc(v_a_4935_);
lean_dec_ref_known(v___x_4934_, 1);
v___x_4936_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_4937_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4936_);
if (lean_obj_tag(v___x_4937_) == 0)
{
lean_object* v_a_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; 
v_a_4938_ = lean_ctor_get(v___x_4937_, 0);
lean_inc(v_a_4938_);
lean_dec_ref_known(v___x_4937_, 1);
v___x_4939_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_4940_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4938_, v___x_4939_);
if (lean_obj_tag(v___x_4940_) == 0)
{
lean_object* v_a_4941_; lean_object* v___x_4942_; 
v_a_4941_ = lean_ctor_get(v___x_4940_, 0);
lean_inc(v_a_4941_);
lean_dec_ref_known(v___x_4940_, 1);
v___x_4942_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4942_) == 0)
{
lean_object* v_a_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; 
v_a_4943_ = lean_ctor_get(v___x_4942_, 0);
lean_inc(v_a_4943_);
lean_dec_ref_known(v___x_4942_, 1);
v___x_4944_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_4945_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4943_, v___x_4944_);
if (lean_obj_tag(v___x_4945_) == 0)
{
lean_object* v_a_4946_; lean_object* v___y_4948_; lean_object* v___y_4949_; lean_object* v___y_4950_; lean_object* v___y_5000_; lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___y_5005_; 
v_a_4946_ = lean_ctor_get(v___x_4945_, 0);
lean_inc(v_a_4946_);
lean_dec_ref_known(v___x_4945_, 1);
v___x_5002_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__16));
v___x_5003_ = lean_io_getenv(v___x_5002_);
if (lean_obj_tag(v___x_5003_) == 0)
{
lean_object* v___x_5014_; 
v___x_5014_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__18));
v___y_5005_ = v___x_5014_;
goto v___jp_5004_;
}
else
{
lean_object* v_val_5015_; 
v_val_5015_ = lean_ctor_get(v___x_5003_, 0);
lean_inc(v_val_5015_);
lean_dec_ref_known(v___x_5003_, 1);
v___y_5005_ = v_val_5015_;
goto v___jp_5004_;
}
v___jp_4947_:
{
lean_object* v___f_4951_; lean_object* v___f_4952_; lean_object* v___f_4953_; lean_object* v___f_4954_; lean_object* v___x_4955_; 
lean_inc_n(v___y_4950_, 2);
v___f_4951_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__19___boxed), 9, 7);
lean_closure_set(v___f_4951_, 0, v___f_4868_);
lean_closure_set(v___f_4951_, 1, v___f_4867_);
lean_closure_set(v___f_4951_, 2, v_handler_4864_);
lean_closure_set(v___f_4951_, 3, v_options_4865_);
lean_closure_set(v___f_4951_, 4, v_a_4946_);
lean_closure_set(v___f_4951_, 5, v_a_4941_);
lean_closure_set(v___f_4951_, 6, v___y_4950_);
v___f_4952_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__20___boxed), 3, 1);
lean_closure_set(v___f_4952_, 0, v___f_4951_);
lean_inc_ref(v___f_4952_);
v___f_4953_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__22___boxed), 4, 2);
lean_closure_set(v___f_4953_, 0, v___f_4952_);
lean_closure_set(v___f_4953_, 1, v___f_4952_);
v___f_4954_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__21___boxed), 5, 3);
lean_closure_set(v___f_4954_, 0, v___y_4948_);
lean_closure_set(v___f_4954_, 1, v___y_4950_);
lean_closure_set(v___f_4954_, 2, v___f_4869_);
v___x_4955_ = l_Lasm_JS_Function_ofFnReply(v___f_4953_);
if (lean_obj_tag(v___x_4955_) == 0)
{
lean_object* v_a_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; 
v_a_4956_ = lean_ctor_get(v___x_4955_, 0);
lean_inc(v_a_4956_);
lean_dec_ref_known(v___x_4955_, 1);
v___x_4957_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_4958_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4959_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4959_, 0, v_a_4956_);
lean_ctor_set(v___x_4959_, 1, v___x_4958_);
v___x_4960_ = lean_unsigned_to_nat(1u);
v___x_4961_ = lean_mk_empty_array_with_capacity(v___x_4960_);
lean_inc_ref(v___x_4961_);
v___x_4962_ = lean_array_push(v___x_4961_, v___x_4959_);
v___x_4963_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4935_, v___x_4957_, v___x_4962_);
if (lean_obj_tag(v___x_4963_) == 0)
{
lean_object* v_a_4964_; lean_object* v___x_4965_; 
v_a_4964_ = lean_ctor_get(v___x_4963_, 0);
lean_inc(v_a_4964_);
lean_dec_ref_known(v___x_4963_, 1);
v___x_4965_ = l_Lasm_JS_Function_ofFn(v___f_4954_);
if (lean_obj_tag(v___x_4965_) == 0)
{
lean_object* v_a_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; uint8_t v___x_4971_; 
v_a_4966_ = lean_ctor_get(v___x_4965_, 0);
lean_inc(v_a_4966_);
lean_dec_ref_known(v___x_4965_, 1);
v___x_4967_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___x_4968_ = lean_nat_to_int(v___y_4950_);
v___x_4969_ = lean_nat_abs(v___x_4968_);
v___x_4970_ = lean_cstr_to_nat("9007199254740991");
v___x_4971_ = lean_nat_dec_le(v___x_4969_, v___x_4970_);
lean_dec(v___x_4969_);
if (v___x_4971_ == 0)
{
lean_object* v___x_4972_; 
v___x_4972_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4972_, 0, v___x_4968_);
v___y_4872_ = v___x_4958_;
v___y_4873_ = v_a_4964_;
v___y_4874_ = v___x_4961_;
v___y_4875_ = v___x_4958_;
v___y_4876_ = v_a_4966_;
v___y_4877_ = v___y_4949_;
v___y_4878_ = v___x_4967_;
v___y_4879_ = v___x_4972_;
goto v___jp_4871_;
}
else
{
double v___x_4973_; lean_object* v___x_4974_; 
v___x_4973_ = l_Float_ofInt(v___x_4968_);
lean_dec(v___x_4968_);
v___x_4974_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4974_, 0, v___x_4973_);
v___y_4872_ = v___x_4958_;
v___y_4873_ = v_a_4964_;
v___y_4874_ = v___x_4961_;
v___y_4875_ = v___x_4958_;
v___y_4876_ = v_a_4966_;
v___y_4877_ = v___y_4949_;
v___y_4878_ = v___x_4967_;
v___y_4879_ = v___x_4974_;
goto v___jp_4871_;
}
}
else
{
lean_object* v_a_4975_; lean_object* v___x_4977_; uint8_t v_isShared_4978_; uint8_t v_isSharedCheck_4982_; 
lean_dec(v_a_4964_);
lean_dec_ref(v___x_4961_);
lean_dec(v___y_4950_);
lean_dec_ref(v___y_4949_);
v_a_4975_ = lean_ctor_get(v___x_4965_, 0);
v_isSharedCheck_4982_ = !lean_is_exclusive(v___x_4965_);
if (v_isSharedCheck_4982_ == 0)
{
v___x_4977_ = v___x_4965_;
v_isShared_4978_ = v_isSharedCheck_4982_;
goto v_resetjp_4976_;
}
else
{
lean_inc(v_a_4975_);
lean_dec(v___x_4965_);
v___x_4977_ = lean_box(0);
v_isShared_4978_ = v_isSharedCheck_4982_;
goto v_resetjp_4976_;
}
v_resetjp_4976_:
{
lean_object* v___x_4980_; 
if (v_isShared_4978_ == 0)
{
v___x_4980_ = v___x_4977_;
goto v_reusejp_4979_;
}
else
{
lean_object* v_reuseFailAlloc_4981_; 
v_reuseFailAlloc_4981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4981_, 0, v_a_4975_);
v___x_4980_ = v_reuseFailAlloc_4981_;
goto v_reusejp_4979_;
}
v_reusejp_4979_:
{
return v___x_4980_;
}
}
}
}
else
{
lean_object* v_a_4983_; lean_object* v___x_4985_; uint8_t v_isShared_4986_; uint8_t v_isSharedCheck_4990_; 
lean_dec_ref(v___x_4961_);
lean_dec_ref(v___f_4954_);
lean_dec(v___y_4950_);
lean_dec_ref(v___y_4949_);
v_a_4983_ = lean_ctor_get(v___x_4963_, 0);
v_isSharedCheck_4990_ = !lean_is_exclusive(v___x_4963_);
if (v_isSharedCheck_4990_ == 0)
{
v___x_4985_ = v___x_4963_;
v_isShared_4986_ = v_isSharedCheck_4990_;
goto v_resetjp_4984_;
}
else
{
lean_inc(v_a_4983_);
lean_dec(v___x_4963_);
v___x_4985_ = lean_box(0);
v_isShared_4986_ = v_isSharedCheck_4990_;
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
lean_object* v_reuseFailAlloc_4989_; 
v_reuseFailAlloc_4989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4989_, 0, v_a_4983_);
v___x_4988_ = v_reuseFailAlloc_4989_;
goto v_reusejp_4987_;
}
v_reusejp_4987_:
{
return v___x_4988_;
}
}
}
}
else
{
lean_object* v_a_4991_; lean_object* v___x_4993_; uint8_t v_isShared_4994_; uint8_t v_isSharedCheck_4998_; 
lean_dec_ref(v___f_4954_);
lean_dec(v___y_4950_);
lean_dec_ref(v___y_4949_);
lean_dec(v_a_4935_);
v_a_4991_ = lean_ctor_get(v___x_4955_, 0);
v_isSharedCheck_4998_ = !lean_is_exclusive(v___x_4955_);
if (v_isSharedCheck_4998_ == 0)
{
v___x_4993_ = v___x_4955_;
v_isShared_4994_ = v_isSharedCheck_4998_;
goto v_resetjp_4992_;
}
else
{
lean_inc(v_a_4991_);
lean_dec(v___x_4955_);
v___x_4993_ = lean_box(0);
v_isShared_4994_ = v_isSharedCheck_4998_;
goto v_resetjp_4992_;
}
v_resetjp_4992_:
{
lean_object* v___x_4996_; 
if (v_isShared_4994_ == 0)
{
v___x_4996_ = v___x_4993_;
goto v_reusejp_4995_;
}
else
{
lean_object* v_reuseFailAlloc_4997_; 
v_reuseFailAlloc_4997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4997_, 0, v_a_4991_);
v___x_4996_ = v_reuseFailAlloc_4997_;
goto v_reusejp_4995_;
}
v_reusejp_4995_:
{
return v___x_4996_;
}
}
}
}
v___jp_4999_:
{
lean_object* v___x_5001_; 
v___x_5001_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_5000_);
v___y_4948_ = v___y_5000_;
v___y_4949_ = v___y_5000_;
v___y_4950_ = v___x_5001_;
goto v___jp_4947_;
}
v___jp_5004_:
{
lean_object* v___x_5006_; lean_object* v___x_5007_; 
v___x_5006_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__17));
v___x_5007_ = lean_io_getenv(v___x_5006_);
if (lean_obj_tag(v___x_5007_) == 0)
{
v___y_5000_ = v___y_5005_;
goto v___jp_4999_;
}
else
{
lean_object* v_val_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; 
v_val_5008_ = lean_ctor_get(v___x_5007_, 0);
lean_inc(v_val_5008_);
lean_dec_ref_known(v___x_5007_, 1);
v___x_5009_ = lean_unsigned_to_nat(0u);
v___x_5010_ = lean_string_utf8_byte_size(v_val_5008_);
v___x_5011_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5011_, 0, v_val_5008_);
lean_ctor_set(v___x_5011_, 1, v___x_5009_);
lean_ctor_set(v___x_5011_, 2, v___x_5010_);
v___x_5012_ = l_String_Slice_toNat_x3f(v___x_5011_);
lean_dec_ref_known(v___x_5011_, 3);
if (lean_obj_tag(v___x_5012_) == 0)
{
v___y_5000_ = v___y_5005_;
goto v___jp_4999_;
}
else
{
lean_object* v_val_5013_; 
v_val_5013_ = lean_ctor_get(v___x_5012_, 0);
lean_inc(v_val_5013_);
lean_dec_ref_known(v___x_5012_, 1);
lean_inc_ref(v___y_5005_);
v___y_4948_ = v___y_5005_;
v___y_4949_ = v___y_5005_;
v___y_4950_ = v_val_5013_;
goto v___jp_4947_;
}
}
}
}
else
{
lean_object* v_a_5016_; lean_object* v___x_5018_; uint8_t v_isShared_5019_; uint8_t v_isSharedCheck_5023_; 
lean_dec(v_a_4941_);
lean_dec(v_a_4935_);
lean_dec_ref(v_options_4865_);
lean_dec_ref(v_handler_4864_);
v_a_5016_ = lean_ctor_get(v___x_4945_, 0);
v_isSharedCheck_5023_ = !lean_is_exclusive(v___x_4945_);
if (v_isSharedCheck_5023_ == 0)
{
v___x_5018_ = v___x_4945_;
v_isShared_5019_ = v_isSharedCheck_5023_;
goto v_resetjp_5017_;
}
else
{
lean_inc(v_a_5016_);
lean_dec(v___x_4945_);
v___x_5018_ = lean_box(0);
v_isShared_5019_ = v_isSharedCheck_5023_;
goto v_resetjp_5017_;
}
v_resetjp_5017_:
{
lean_object* v___x_5021_; 
if (v_isShared_5019_ == 0)
{
v___x_5021_ = v___x_5018_;
goto v_reusejp_5020_;
}
else
{
lean_object* v_reuseFailAlloc_5022_; 
v_reuseFailAlloc_5022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5022_, 0, v_a_5016_);
v___x_5021_ = v_reuseFailAlloc_5022_;
goto v_reusejp_5020_;
}
v_reusejp_5020_:
{
return v___x_5021_;
}
}
}
}
else
{
lean_object* v_a_5024_; lean_object* v___x_5026_; uint8_t v_isShared_5027_; uint8_t v_isSharedCheck_5031_; 
lean_dec(v_a_4941_);
lean_dec(v_a_4935_);
lean_dec_ref(v_options_4865_);
lean_dec_ref(v_handler_4864_);
v_a_5024_ = lean_ctor_get(v___x_4942_, 0);
v_isSharedCheck_5031_ = !lean_is_exclusive(v___x_4942_);
if (v_isSharedCheck_5031_ == 0)
{
v___x_5026_ = v___x_4942_;
v_isShared_5027_ = v_isSharedCheck_5031_;
goto v_resetjp_5025_;
}
else
{
lean_inc(v_a_5024_);
lean_dec(v___x_4942_);
v___x_5026_ = lean_box(0);
v_isShared_5027_ = v_isSharedCheck_5031_;
goto v_resetjp_5025_;
}
v_resetjp_5025_:
{
lean_object* v___x_5029_; 
if (v_isShared_5027_ == 0)
{
v___x_5029_ = v___x_5026_;
goto v_reusejp_5028_;
}
else
{
lean_object* v_reuseFailAlloc_5030_; 
v_reuseFailAlloc_5030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5030_, 0, v_a_5024_);
v___x_5029_ = v_reuseFailAlloc_5030_;
goto v_reusejp_5028_;
}
v_reusejp_5028_:
{
return v___x_5029_;
}
}
}
}
else
{
lean_object* v_a_5032_; lean_object* v___x_5034_; uint8_t v_isShared_5035_; uint8_t v_isSharedCheck_5039_; 
lean_dec(v_a_4935_);
lean_dec_ref(v_options_4865_);
lean_dec_ref(v_handler_4864_);
v_a_5032_ = lean_ctor_get(v___x_4940_, 0);
v_isSharedCheck_5039_ = !lean_is_exclusive(v___x_4940_);
if (v_isSharedCheck_5039_ == 0)
{
v___x_5034_ = v___x_4940_;
v_isShared_5035_ = v_isSharedCheck_5039_;
goto v_resetjp_5033_;
}
else
{
lean_inc(v_a_5032_);
lean_dec(v___x_4940_);
v___x_5034_ = lean_box(0);
v_isShared_5035_ = v_isSharedCheck_5039_;
goto v_resetjp_5033_;
}
v_resetjp_5033_:
{
lean_object* v___x_5037_; 
if (v_isShared_5035_ == 0)
{
v___x_5037_ = v___x_5034_;
goto v_reusejp_5036_;
}
else
{
lean_object* v_reuseFailAlloc_5038_; 
v_reuseFailAlloc_5038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5038_, 0, v_a_5032_);
v___x_5037_ = v_reuseFailAlloc_5038_;
goto v_reusejp_5036_;
}
v_reusejp_5036_:
{
return v___x_5037_;
}
}
}
}
else
{
lean_object* v_a_5040_; lean_object* v___x_5042_; uint8_t v_isShared_5043_; uint8_t v_isSharedCheck_5047_; 
lean_dec(v_a_4935_);
lean_dec_ref(v_options_4865_);
lean_dec_ref(v_handler_4864_);
v_a_5040_ = lean_ctor_get(v___x_4937_, 0);
v_isSharedCheck_5047_ = !lean_is_exclusive(v___x_4937_);
if (v_isSharedCheck_5047_ == 0)
{
v___x_5042_ = v___x_4937_;
v_isShared_5043_ = v_isSharedCheck_5047_;
goto v_resetjp_5041_;
}
else
{
lean_inc(v_a_5040_);
lean_dec(v___x_4937_);
v___x_5042_ = lean_box(0);
v_isShared_5043_ = v_isSharedCheck_5047_;
goto v_resetjp_5041_;
}
v_resetjp_5041_:
{
lean_object* v___x_5045_; 
if (v_isShared_5043_ == 0)
{
v___x_5045_ = v___x_5042_;
goto v_reusejp_5044_;
}
else
{
lean_object* v_reuseFailAlloc_5046_; 
v_reuseFailAlloc_5046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5046_, 0, v_a_5040_);
v___x_5045_ = v_reuseFailAlloc_5046_;
goto v_reusejp_5044_;
}
v_reusejp_5044_:
{
return v___x_5045_;
}
}
}
}
else
{
lean_object* v_a_5048_; lean_object* v___x_5050_; uint8_t v_isShared_5051_; uint8_t v_isSharedCheck_5055_; 
lean_dec_ref(v_options_4865_);
lean_dec_ref(v_handler_4864_);
v_a_5048_ = lean_ctor_get(v___x_4934_, 0);
v_isSharedCheck_5055_ = !lean_is_exclusive(v___x_4934_);
if (v_isSharedCheck_5055_ == 0)
{
v___x_5050_ = v___x_4934_;
v_isShared_5051_ = v_isSharedCheck_5055_;
goto v_resetjp_5049_;
}
else
{
lean_inc(v_a_5048_);
lean_dec(v___x_4934_);
v___x_5050_ = lean_box(0);
v_isShared_5051_ = v_isSharedCheck_5055_;
goto v_resetjp_5049_;
}
v_resetjp_5049_:
{
lean_object* v___x_5053_; 
if (v_isShared_5051_ == 0)
{
v___x_5053_ = v___x_5050_;
goto v_reusejp_5052_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v_a_5048_);
v___x_5053_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5052_;
}
v_reusejp_5052_:
{
return v___x_5053_;
}
}
}
v___jp_4871_:
{
lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; 
v___x_4880_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4880_, 0, v___y_4877_);
lean_inc_ref(v___y_4875_);
v___x_4881_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4881_, 0, v___y_4876_);
lean_ctor_set(v___x_4881_, 1, v___y_4875_);
v___x_4882_ = lean_unsigned_to_nat(3u);
v___x_4883_ = lean_mk_empty_array_with_capacity(v___x_4882_);
v___x_4884_ = lean_array_push(v___x_4883_, v___y_4879_);
v___x_4885_ = lean_array_push(v___x_4884_, v___x_4880_);
v___x_4886_ = lean_array_push(v___x_4885_, v___x_4881_);
lean_inc_ref(v___y_4878_);
lean_inc(v___y_4873_);
v___x_4887_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v___y_4873_, v___y_4878_, v___x_4886_);
if (lean_obj_tag(v___x_4887_) == 0)
{
lean_object* v___x_4888_; lean_object* v___x_4889_; 
lean_dec_ref_known(v___x_4887_, 1);
v___x_4888_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__5));
v___x_4889_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4888_);
if (lean_obj_tag(v___x_4889_) == 0)
{
lean_object* v_a_4890_; lean_object* v___f_4891_; lean_object* v___x_4892_; 
v_a_4890_ = lean_ctor_get(v___x_4889_, 0);
lean_inc_n(v_a_4890_, 2);
lean_dec_ref_known(v___x_4889_, 1);
lean_inc_ref(v___y_4874_);
v___f_4891_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__23___boxed), 5, 3);
lean_closure_set(v___f_4891_, 0, v___f_4870_);
lean_closure_set(v___f_4891_, 1, v___y_4874_);
lean_closure_set(v___f_4891_, 2, v_a_4890_);
v___x_4892_ = l_Lasm_JS_Function_ofFn(v___f_4891_);
if (lean_obj_tag(v___x_4892_) == 0)
{
lean_object* v_a_4893_; lean_object* v___f_4894_; lean_object* v___x_4895_; 
v_a_4893_ = lean_ctor_get(v___x_4892_, 0);
lean_inc(v_a_4893_);
lean_dec_ref_known(v___x_4892_, 1);
lean_inc_ref(v___y_4872_);
v___f_4894_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__24___boxed), 7, 5);
lean_closure_set(v___f_4894_, 0, v_a_4893_);
lean_closure_set(v___f_4894_, 1, v___y_4872_);
lean_closure_set(v___f_4894_, 2, v___y_4874_);
lean_closure_set(v___f_4894_, 3, v___f_4870_);
lean_closure_set(v___f_4894_, 4, v___y_4873_);
v___x_4895_ = l_Lasm_JS_Function_ofFn(v___f_4894_);
if (lean_obj_tag(v___x_4895_) == 0)
{
lean_object* v_a_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; 
v_a_4896_ = lean_ctor_get(v___x_4895_, 0);
lean_inc(v_a_4896_);
lean_dec_ref_known(v___x_4895_, 1);
v___x_4897_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_4898_ = lean_box(0);
v___x_4899_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4896_, v_a_4890_, v___x_4897_, v___x_4898_);
if (lean_obj_tag(v___x_4899_) == 0)
{
lean_object* v___x_4900_; 
lean_dec_ref_known(v___x_4899_, 1);
v___x_4900_ = l_Lasm_JS_waitForever();
return v___x_4900_;
}
else
{
return v___x_4899_;
}
}
else
{
lean_object* v_a_4901_; lean_object* v___x_4903_; uint8_t v_isShared_4904_; uint8_t v_isSharedCheck_4908_; 
lean_dec(v_a_4890_);
v_a_4901_ = lean_ctor_get(v___x_4895_, 0);
v_isSharedCheck_4908_ = !lean_is_exclusive(v___x_4895_);
if (v_isSharedCheck_4908_ == 0)
{
v___x_4903_ = v___x_4895_;
v_isShared_4904_ = v_isSharedCheck_4908_;
goto v_resetjp_4902_;
}
else
{
lean_inc(v_a_4901_);
lean_dec(v___x_4895_);
v___x_4903_ = lean_box(0);
v_isShared_4904_ = v_isSharedCheck_4908_;
goto v_resetjp_4902_;
}
v_resetjp_4902_:
{
lean_object* v___x_4906_; 
if (v_isShared_4904_ == 0)
{
v___x_4906_ = v___x_4903_;
goto v_reusejp_4905_;
}
else
{
lean_object* v_reuseFailAlloc_4907_; 
v_reuseFailAlloc_4907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4907_, 0, v_a_4901_);
v___x_4906_ = v_reuseFailAlloc_4907_;
goto v_reusejp_4905_;
}
v_reusejp_4905_:
{
return v___x_4906_;
}
}
}
}
else
{
lean_object* v_a_4909_; lean_object* v___x_4911_; uint8_t v_isShared_4912_; uint8_t v_isSharedCheck_4916_; 
lean_dec(v_a_4890_);
lean_dec_ref(v___y_4874_);
lean_dec(v___y_4873_);
v_a_4909_ = lean_ctor_get(v___x_4892_, 0);
v_isSharedCheck_4916_ = !lean_is_exclusive(v___x_4892_);
if (v_isSharedCheck_4916_ == 0)
{
v___x_4911_ = v___x_4892_;
v_isShared_4912_ = v_isSharedCheck_4916_;
goto v_resetjp_4910_;
}
else
{
lean_inc(v_a_4909_);
lean_dec(v___x_4892_);
v___x_4911_ = lean_box(0);
v_isShared_4912_ = v_isSharedCheck_4916_;
goto v_resetjp_4910_;
}
v_resetjp_4910_:
{
lean_object* v___x_4914_; 
if (v_isShared_4912_ == 0)
{
v___x_4914_ = v___x_4911_;
goto v_reusejp_4913_;
}
else
{
lean_object* v_reuseFailAlloc_4915_; 
v_reuseFailAlloc_4915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4915_, 0, v_a_4909_);
v___x_4914_ = v_reuseFailAlloc_4915_;
goto v_reusejp_4913_;
}
v_reusejp_4913_:
{
return v___x_4914_;
}
}
}
}
else
{
lean_object* v_a_4917_; lean_object* v___x_4919_; uint8_t v_isShared_4920_; uint8_t v_isSharedCheck_4924_; 
lean_dec_ref(v___y_4874_);
lean_dec(v___y_4873_);
v_a_4917_ = lean_ctor_get(v___x_4889_, 0);
v_isSharedCheck_4924_ = !lean_is_exclusive(v___x_4889_);
if (v_isSharedCheck_4924_ == 0)
{
v___x_4919_ = v___x_4889_;
v_isShared_4920_ = v_isSharedCheck_4924_;
goto v_resetjp_4918_;
}
else
{
lean_inc(v_a_4917_);
lean_dec(v___x_4889_);
v___x_4919_ = lean_box(0);
v_isShared_4920_ = v_isSharedCheck_4924_;
goto v_resetjp_4918_;
}
v_resetjp_4918_:
{
lean_object* v___x_4922_; 
if (v_isShared_4920_ == 0)
{
v___x_4922_ = v___x_4919_;
goto v_reusejp_4921_;
}
else
{
lean_object* v_reuseFailAlloc_4923_; 
v_reuseFailAlloc_4923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4923_, 0, v_a_4917_);
v___x_4922_ = v_reuseFailAlloc_4923_;
goto v_reusejp_4921_;
}
v_reusejp_4921_:
{
return v___x_4922_;
}
}
}
}
else
{
lean_object* v_a_4925_; lean_object* v___x_4927_; uint8_t v_isShared_4928_; uint8_t v_isSharedCheck_4932_; 
lean_dec_ref(v___y_4874_);
lean_dec(v___y_4873_);
v_a_4925_ = lean_ctor_get(v___x_4887_, 0);
v_isSharedCheck_4932_ = !lean_is_exclusive(v___x_4887_);
if (v_isSharedCheck_4932_ == 0)
{
v___x_4927_ = v___x_4887_;
v_isShared_4928_ = v_isSharedCheck_4932_;
goto v_resetjp_4926_;
}
else
{
lean_inc(v_a_4925_);
lean_dec(v___x_4887_);
v___x_4927_ = lean_box(0);
v_isShared_4928_ = v_isSharedCheck_4932_;
goto v_resetjp_4926_;
}
v_resetjp_4926_:
{
lean_object* v___x_4930_; 
if (v_isShared_4928_ == 0)
{
v___x_4930_ = v___x_4927_;
goto v_reusejp_4929_;
}
else
{
lean_object* v_reuseFailAlloc_4931_; 
v_reuseFailAlloc_4931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4931_, 0, v_a_4925_);
v___x_4930_ = v_reuseFailAlloc_4931_;
goto v_reusejp_4929_;
}
v_reusejp_4929_:
{
return v___x_4930_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_5056_, lean_object* v_options_5057_, lean_object* v_a_5058_){
_start:
{
lean_object* v_res_5059_; 
v_res_5059_ = l_Lasm_Fetch_serveNode(v_handler_5056_, v_options_5057_);
return v_res_5059_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_5060_, lean_object* v_range_5061_, lean_object* v_b_5062_, lean_object* v_i_5063_, lean_object* v_hs_5064_, lean_object* v_hl_5065_){
_start:
{
lean_object* v___x_5066_; 
v___x_5066_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_5060_, v_range_5061_, v_b_5062_, v_i_5063_);
return v___x_5066_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_5067_, lean_object* v_range_5068_, lean_object* v_b_5069_, lean_object* v_i_5070_, lean_object* v_hs_5071_, lean_object* v_hl_5072_){
_start:
{
lean_object* v_res_5073_; 
v_res_5073_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_5067_, v_range_5068_, v_b_5069_, v_i_5070_, v_hs_5071_, v_hl_5072_);
lean_dec_ref(v_range_5068_);
lean_dec_ref(v___y_5067_);
return v_res_5073_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_5074_, lean_object* v_a_5075_, lean_object* v_as_5076_, lean_object* v_as_x27_5077_, lean_object* v_b_5078_, lean_object* v_a_5079_){
_start:
{
lean_object* v___x_5081_; 
v___x_5081_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5074_, v_a_5075_, v_as_x27_5077_, v_b_5078_);
return v___x_5081_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_5082_, lean_object* v_a_5083_, lean_object* v_as_5084_, lean_object* v_as_x27_5085_, lean_object* v_b_5086_, lean_object* v_a_5087_, lean_object* v___y_5088_){
_start:
{
lean_object* v_res_5089_; 
v_res_5089_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_5082_, v_a_5083_, v_as_5084_, v_as_x27_5085_, v_b_5086_, v_a_5087_);
lean_dec(v_as_x27_5085_);
lean_dec(v_as_5084_);
return v_res_5089_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions_default(void){
_start:
{
lean_object* v___x_5090_; 
v___x_5090_ = lean_box(0);
return v___x_5090_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions(void){
_start:
{
lean_object* v___x_5091_; 
v___x_5091_ = lean_box(0);
return v___x_5091_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object* v_p_5099_, lean_object* v_method_5100_, lean_object* v_url_5101_, lean_object* v_headers_5102_, lean_object* v_body_5103_, lean_object* v_backend_5104_, lean_object* v_a_00___x40___internal___hyg_5105_){
_start:
{
lean_object* v_res_5106_; 
v_res_5106_ = lasm_fetch_send(v_p_5099_, v_method_5100_, v_url_5101_, v_headers_5102_, v_body_5103_, v_backend_5104_);
lean_dec_ref(v_backend_5104_);
lean_dec_ref(v_body_5103_);
lean_dec_ref(v_headers_5102_);
lean_dec_ref(v_url_5101_);
lean_dec_ref(v_method_5100_);
lean_dec(v_p_5099_);
return v_res_5106_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object* v_pos_5107_, lean_object* v_b_5108_, lean_object* v_x_5109_, lean_object* v_x_5110_){
_start:
{
if (lean_obj_tag(v_x_5110_) == 0)
{
return v_x_5109_;
}
else
{
lean_object* v_head_5111_; lean_object* v_tail_5112_; uint8_t v___y_5114_; lean_object* v___x_5121_; lean_object* v___x_5122_; uint8_t v___x_5123_; 
v_head_5111_ = lean_ctor_get(v_x_5110_, 0);
v_tail_5112_ = lean_ctor_get(v_x_5110_, 1);
v___x_5121_ = lean_nat_add(v_pos_5107_, v_head_5111_);
v___x_5122_ = lean_byte_array_size(v_b_5108_);
v___x_5123_ = lean_nat_dec_lt(v___x_5121_, v___x_5122_);
if (v___x_5123_ == 0)
{
uint8_t v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; uint8_t v___x_5127_; 
lean_dec(v___x_5121_);
v___x_5124_ = 0;
v___x_5125_ = lean_box(v___x_5124_);
v___x_5126_ = l_outOfBounds___redArg(v___x_5125_);
lean_dec(v___x_5125_);
v___x_5127_ = lean_unbox(v___x_5126_);
lean_dec(v___x_5126_);
v___y_5114_ = v___x_5127_;
goto v___jp_5113_;
}
else
{
uint8_t v___x_5128_; 
v___x_5128_ = lean_byte_array_fget(v_b_5108_, v___x_5121_);
lean_dec(v___x_5121_);
v___y_5114_ = v___x_5128_;
goto v___jp_5113_;
}
v___jp_5113_:
{
lean_object* v___x_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; 
v___x_5115_ = lean_uint8_to_nat(v___y_5114_);
v___x_5116_ = lean_unsigned_to_nat(256u);
v___x_5117_ = lean_nat_pow(v___x_5116_, v_head_5111_);
v___x_5118_ = lean_nat_mul(v___x_5115_, v___x_5117_);
lean_dec(v___x_5117_);
v___x_5119_ = lean_nat_add(v_x_5109_, v___x_5118_);
lean_dec(v___x_5118_);
lean_dec(v_x_5109_);
v_x_5109_ = v___x_5119_;
v_x_5110_ = v_tail_5112_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object* v_pos_5129_, lean_object* v_b_5130_, lean_object* v_x_5131_, lean_object* v_x_5132_){
_start:
{
lean_object* v_res_5133_; 
v_res_5133_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5129_, v_b_5130_, v_x_5131_, v_x_5132_);
lean_dec(v_x_5132_);
lean_dec_ref(v_b_5130_);
lean_dec(v_pos_5129_);
return v_res_5133_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5134_; lean_object* v___x_5135_; 
v___x_5134_ = lean_unsigned_to_nat(8u);
v___x_5135_ = l_List_range(v___x_5134_);
return v___x_5135_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object* v_b_5139_, lean_object* v_pos_5140_){
_start:
{
lean_object* v___x_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; uint8_t v___x_5144_; 
v___x_5141_ = lean_byte_array_size(v_b_5139_);
v___x_5142_ = lean_unsigned_to_nat(8u);
v___x_5143_ = lean_nat_add(v_pos_5140_, v___x_5142_);
v___x_5144_ = lean_nat_dec_lt(v___x_5141_, v___x_5143_);
lean_dec(v___x_5143_);
if (v___x_5144_ == 0)
{
lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; 
v___x_5145_ = lean_unsigned_to_nat(0u);
v___x_5146_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0);
v___x_5147_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5140_, v_b_5139_, v___x_5145_, v___x_5146_);
v___x_5148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5148_, 0, v___x_5147_);
return v___x_5148_;
}
else
{
lean_object* v___x_5149_; 
v___x_5149_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2));
return v___x_5149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object* v_b_5150_, lean_object* v_pos_5151_){
_start:
{
lean_object* v_res_5152_; 
v_res_5152_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5150_, v_pos_5151_);
lean_dec(v_pos_5151_);
lean_dec_ref(v_b_5150_);
return v_res_5152_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object* v_a_5153_, lean_object* v_a_5154_){
_start:
{
if (lean_obj_tag(v_a_5153_) == 0)
{
lean_object* v___x_5155_; 
v___x_5155_ = l_List_reverse___redArg(v_a_5154_);
return v___x_5155_;
}
else
{
lean_object* v_head_5156_; lean_object* v_tail_5157_; lean_object* v___x_5159_; uint8_t v_isShared_5160_; uint8_t v_isSharedCheck_5173_; 
v_head_5156_ = lean_ctor_get(v_a_5153_, 0);
v_tail_5157_ = lean_ctor_get(v_a_5153_, 1);
v_isSharedCheck_5173_ = !lean_is_exclusive(v_a_5153_);
if (v_isSharedCheck_5173_ == 0)
{
v___x_5159_ = v_a_5153_;
v_isShared_5160_ = v_isSharedCheck_5173_;
goto v_resetjp_5158_;
}
else
{
lean_inc(v_tail_5157_);
lean_inc(v_head_5156_);
lean_dec(v_a_5153_);
v___x_5159_ = lean_box(0);
v_isShared_5160_ = v_isSharedCheck_5173_;
goto v_resetjp_5158_;
}
v_resetjp_5158_:
{
uint8_t v___y_5162_; uint8_t v___x_5168_; uint8_t v___x_5169_; uint8_t v___x_5170_; 
v___x_5168_ = 128;
v___x_5169_ = lean_unbox(v_head_5156_);
v___x_5170_ = lean_uint8_dec_lt(v___x_5169_, v___x_5168_);
if (v___x_5170_ == 0)
{
uint8_t v___x_5171_; 
lean_dec(v_head_5156_);
v___x_5171_ = 63;
v___y_5162_ = v___x_5171_;
goto v___jp_5161_;
}
else
{
uint8_t v___x_5172_; 
v___x_5172_ = lean_unbox(v_head_5156_);
lean_dec(v_head_5156_);
v___y_5162_ = v___x_5172_;
goto v___jp_5161_;
}
v___jp_5161_:
{
lean_object* v___x_5163_; lean_object* v___x_5165_; 
v___x_5163_ = lean_box(v___y_5162_);
if (v_isShared_5160_ == 0)
{
lean_ctor_set(v___x_5159_, 1, v_a_5154_);
lean_ctor_set(v___x_5159_, 0, v___x_5163_);
v___x_5165_ = v___x_5159_;
goto v_reusejp_5164_;
}
else
{
lean_object* v_reuseFailAlloc_5167_; 
v_reuseFailAlloc_5167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5167_, 0, v___x_5163_);
lean_ctor_set(v_reuseFailAlloc_5167_, 1, v_a_5154_);
v___x_5165_ = v_reuseFailAlloc_5167_;
goto v_reusejp_5164_;
}
v_reusejp_5164_:
{
v_a_5153_ = v_tail_5157_;
v_a_5154_ = v___x_5165_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object* v_b_5176_, lean_object* v_pos_5177_, lean_object* v_n_5178_){
_start:
{
lean_object* v___x_5179_; lean_object* v___x_5180_; uint8_t v___x_5181_; 
v___x_5179_ = lean_byte_array_size(v_b_5176_);
v___x_5180_ = lean_nat_add(v_pos_5177_, v_n_5178_);
v___x_5181_ = lean_nat_dec_lt(v___x_5179_, v___x_5180_);
if (v___x_5181_ == 0)
{
lean_object* v___x_5182_; uint8_t v___x_5183_; 
v___x_5182_ = l_ByteArray_extract(v_b_5176_, v_pos_5177_, v___x_5180_);
lean_dec(v___x_5180_);
v___x_5183_ = lean_string_validate_utf8(v___x_5182_);
if (v___x_5183_ == 0)
{
lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; uint8_t v___x_5188_; 
v___x_5184_ = l_ByteArray_toList(v___x_5182_);
lean_dec_ref(v___x_5182_);
v___x_5185_ = lean_box(0);
v___x_5186_ = l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(v___x_5184_, v___x_5185_);
v___x_5187_ = l_List_toByteArray(v___x_5186_);
lean_dec(v___x_5186_);
v___x_5188_ = lean_string_validate_utf8(v___x_5187_);
if (v___x_5188_ == 0)
{
lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; 
lean_dec_ref(v___x_5187_);
v___x_5189_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_5190_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5189_);
v___x_5191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5191_, 0, v___x_5190_);
return v___x_5191_;
}
else
{
lean_object* v___x_5192_; lean_object* v___x_5193_; 
v___x_5192_ = lean_string_from_utf8_unchecked(v___x_5187_);
v___x_5193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5193_, 0, v___x_5192_);
return v___x_5193_;
}
}
else
{
lean_object* v___x_5194_; lean_object* v___x_5195_; 
v___x_5194_ = lean_string_from_utf8_unchecked(v___x_5182_);
v___x_5195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5195_, 0, v___x_5194_);
return v___x_5195_;
}
}
else
{
lean_object* v___x_5196_; 
lean_dec(v___x_5180_);
lean_dec(v_pos_5177_);
v___x_5196_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0));
return v___x_5196_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object* v_b_5197_, lean_object* v_pos_5198_, lean_object* v_n_5199_){
_start:
{
lean_object* v_res_5200_; 
v_res_5200_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5197_, v_pos_5198_, v_n_5199_);
lean_dec(v_n_5199_);
lean_dec_ref(v_b_5197_);
return v_res_5200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object* v_b_5201_, lean_object* v_range_5202_, lean_object* v_b_5203_, lean_object* v_i_5204_){
_start:
{
lean_object* v_stop_5205_; lean_object* v_step_5206_; uint8_t v___x_5207_; 
v_stop_5205_ = lean_ctor_get(v_range_5202_, 1);
v_step_5206_ = lean_ctor_get(v_range_5202_, 2);
v___x_5207_ = lean_nat_dec_lt(v_i_5204_, v_stop_5205_);
if (v___x_5207_ == 0)
{
lean_object* v___x_5208_; 
lean_dec(v_i_5204_);
v___x_5208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5208_, 0, v_b_5203_);
return v___x_5208_;
}
else
{
lean_object* v_fst_5209_; lean_object* v_snd_5210_; lean_object* v___x_5212_; uint8_t v_isShared_5213_; uint8_t v_isSharedCheck_5266_; 
v_fst_5209_ = lean_ctor_get(v_b_5203_, 0);
v_snd_5210_ = lean_ctor_get(v_b_5203_, 1);
v_isSharedCheck_5266_ = !lean_is_exclusive(v_b_5203_);
if (v_isSharedCheck_5266_ == 0)
{
v___x_5212_ = v_b_5203_;
v_isShared_5213_ = v_isSharedCheck_5266_;
goto v_resetjp_5211_;
}
else
{
lean_inc(v_snd_5210_);
lean_inc(v_fst_5209_);
lean_dec(v_b_5203_);
v___x_5212_ = lean_box(0);
v_isShared_5213_ = v_isSharedCheck_5266_;
goto v_resetjp_5211_;
}
v_resetjp_5211_:
{
lean_object* v___x_5214_; 
v___x_5214_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5201_, v_fst_5209_);
if (lean_obj_tag(v___x_5214_) == 0)
{
lean_object* v_a_5215_; lean_object* v___x_5217_; uint8_t v_isShared_5218_; uint8_t v_isSharedCheck_5222_; 
lean_del_object(v___x_5212_);
lean_dec(v_snd_5210_);
lean_dec(v_fst_5209_);
lean_dec(v_i_5204_);
v_a_5215_ = lean_ctor_get(v___x_5214_, 0);
v_isSharedCheck_5222_ = !lean_is_exclusive(v___x_5214_);
if (v_isSharedCheck_5222_ == 0)
{
v___x_5217_ = v___x_5214_;
v_isShared_5218_ = v_isSharedCheck_5222_;
goto v_resetjp_5216_;
}
else
{
lean_inc(v_a_5215_);
lean_dec(v___x_5214_);
v___x_5217_ = lean_box(0);
v_isShared_5218_ = v_isSharedCheck_5222_;
goto v_resetjp_5216_;
}
v_resetjp_5216_:
{
lean_object* v___x_5220_; 
if (v_isShared_5218_ == 0)
{
v___x_5220_ = v___x_5217_;
goto v_reusejp_5219_;
}
else
{
lean_object* v_reuseFailAlloc_5221_; 
v_reuseFailAlloc_5221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5221_, 0, v_a_5215_);
v___x_5220_ = v_reuseFailAlloc_5221_;
goto v_reusejp_5219_;
}
v_reusejp_5219_:
{
return v___x_5220_;
}
}
}
else
{
lean_object* v_a_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; 
v_a_5223_ = lean_ctor_get(v___x_5214_, 0);
lean_inc(v_a_5223_);
lean_dec_ref_known(v___x_5214_, 1);
v___x_5224_ = lean_unsigned_to_nat(8u);
v___x_5225_ = lean_nat_add(v_fst_5209_, v___x_5224_);
lean_dec(v_fst_5209_);
lean_inc(v___x_5225_);
v___x_5226_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5201_, v___x_5225_, v_a_5223_);
if (lean_obj_tag(v___x_5226_) == 0)
{
lean_object* v_a_5227_; lean_object* v___x_5229_; uint8_t v_isShared_5230_; uint8_t v_isSharedCheck_5234_; 
lean_dec(v___x_5225_);
lean_dec(v_a_5223_);
lean_del_object(v___x_5212_);
lean_dec(v_snd_5210_);
lean_dec(v_i_5204_);
v_a_5227_ = lean_ctor_get(v___x_5226_, 0);
v_isSharedCheck_5234_ = !lean_is_exclusive(v___x_5226_);
if (v_isSharedCheck_5234_ == 0)
{
v___x_5229_ = v___x_5226_;
v_isShared_5230_ = v_isSharedCheck_5234_;
goto v_resetjp_5228_;
}
else
{
lean_inc(v_a_5227_);
lean_dec(v___x_5226_);
v___x_5229_ = lean_box(0);
v_isShared_5230_ = v_isSharedCheck_5234_;
goto v_resetjp_5228_;
}
v_resetjp_5228_:
{
lean_object* v___x_5232_; 
if (v_isShared_5230_ == 0)
{
v___x_5232_ = v___x_5229_;
goto v_reusejp_5231_;
}
else
{
lean_object* v_reuseFailAlloc_5233_; 
v_reuseFailAlloc_5233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5233_, 0, v_a_5227_);
v___x_5232_ = v_reuseFailAlloc_5233_;
goto v_reusejp_5231_;
}
v_reusejp_5231_:
{
return v___x_5232_;
}
}
}
else
{
lean_object* v_a_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; 
v_a_5235_ = lean_ctor_get(v___x_5226_, 0);
lean_inc(v_a_5235_);
lean_dec_ref_known(v___x_5226_, 1);
v___x_5236_ = lean_nat_add(v___x_5225_, v_a_5223_);
lean_dec(v_a_5223_);
lean_dec(v___x_5225_);
v___x_5237_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5201_, v___x_5236_);
if (lean_obj_tag(v___x_5237_) == 0)
{
lean_object* v_a_5238_; lean_object* v___x_5240_; uint8_t v_isShared_5241_; uint8_t v_isSharedCheck_5245_; 
lean_dec(v___x_5236_);
lean_dec(v_a_5235_);
lean_del_object(v___x_5212_);
lean_dec(v_snd_5210_);
lean_dec(v_i_5204_);
v_a_5238_ = lean_ctor_get(v___x_5237_, 0);
v_isSharedCheck_5245_ = !lean_is_exclusive(v___x_5237_);
if (v_isSharedCheck_5245_ == 0)
{
v___x_5240_ = v___x_5237_;
v_isShared_5241_ = v_isSharedCheck_5245_;
goto v_resetjp_5239_;
}
else
{
lean_inc(v_a_5238_);
lean_dec(v___x_5237_);
v___x_5240_ = lean_box(0);
v_isShared_5241_ = v_isSharedCheck_5245_;
goto v_resetjp_5239_;
}
v_resetjp_5239_:
{
lean_object* v___x_5243_; 
if (v_isShared_5241_ == 0)
{
v___x_5243_ = v___x_5240_;
goto v_reusejp_5242_;
}
else
{
lean_object* v_reuseFailAlloc_5244_; 
v_reuseFailAlloc_5244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5244_, 0, v_a_5238_);
v___x_5243_ = v_reuseFailAlloc_5244_;
goto v_reusejp_5242_;
}
v_reusejp_5242_:
{
return v___x_5243_;
}
}
}
else
{
lean_object* v_a_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; 
v_a_5246_ = lean_ctor_get(v___x_5237_, 0);
lean_inc(v_a_5246_);
lean_dec_ref_known(v___x_5237_, 1);
v___x_5247_ = lean_nat_add(v___x_5236_, v___x_5224_);
lean_dec(v___x_5236_);
lean_inc(v___x_5247_);
v___x_5248_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5201_, v___x_5247_, v_a_5246_);
if (lean_obj_tag(v___x_5248_) == 0)
{
lean_object* v_a_5249_; lean_object* v___x_5251_; uint8_t v_isShared_5252_; uint8_t v_isSharedCheck_5256_; 
lean_dec(v___x_5247_);
lean_dec(v_a_5246_);
lean_dec(v_a_5235_);
lean_del_object(v___x_5212_);
lean_dec(v_snd_5210_);
lean_dec(v_i_5204_);
v_a_5249_ = lean_ctor_get(v___x_5248_, 0);
v_isSharedCheck_5256_ = !lean_is_exclusive(v___x_5248_);
if (v_isSharedCheck_5256_ == 0)
{
v___x_5251_ = v___x_5248_;
v_isShared_5252_ = v_isSharedCheck_5256_;
goto v_resetjp_5250_;
}
else
{
lean_inc(v_a_5249_);
lean_dec(v___x_5248_);
v___x_5251_ = lean_box(0);
v_isShared_5252_ = v_isSharedCheck_5256_;
goto v_resetjp_5250_;
}
v_resetjp_5250_:
{
lean_object* v___x_5254_; 
if (v_isShared_5252_ == 0)
{
v___x_5254_ = v___x_5251_;
goto v_reusejp_5253_;
}
else
{
lean_object* v_reuseFailAlloc_5255_; 
v_reuseFailAlloc_5255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5255_, 0, v_a_5249_);
v___x_5254_ = v_reuseFailAlloc_5255_;
goto v_reusejp_5253_;
}
v_reusejp_5253_:
{
return v___x_5254_;
}
}
}
else
{
lean_object* v_a_5257_; lean_object* v___x_5258_; lean_object* v___x_5260_; 
v_a_5257_ = lean_ctor_get(v___x_5248_, 0);
lean_inc(v_a_5257_);
lean_dec_ref_known(v___x_5248_, 1);
v___x_5258_ = lean_nat_add(v___x_5247_, v_a_5246_);
lean_dec(v_a_5246_);
lean_dec(v___x_5247_);
if (v_isShared_5213_ == 0)
{
lean_ctor_set(v___x_5212_, 1, v_a_5257_);
lean_ctor_set(v___x_5212_, 0, v_a_5235_);
v___x_5260_ = v___x_5212_;
goto v_reusejp_5259_;
}
else
{
lean_object* v_reuseFailAlloc_5265_; 
v_reuseFailAlloc_5265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5265_, 0, v_a_5235_);
lean_ctor_set(v_reuseFailAlloc_5265_, 1, v_a_5257_);
v___x_5260_ = v_reuseFailAlloc_5265_;
goto v_reusejp_5259_;
}
v_reusejp_5259_:
{
lean_object* v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; 
v___x_5261_ = lean_array_push(v_snd_5210_, v___x_5260_);
v___x_5262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5262_, 0, v___x_5258_);
lean_ctor_set(v___x_5262_, 1, v___x_5261_);
v___x_5263_ = lean_nat_add(v_i_5204_, v_step_5206_);
lean_dec(v_i_5204_);
v_b_5203_ = v___x_5262_;
v_i_5204_ = v___x_5263_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object* v_b_5267_, lean_object* v_range_5268_, lean_object* v_b_5269_, lean_object* v_i_5270_){
_start:
{
lean_object* v_res_5271_; 
v_res_5271_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5267_, v_range_5268_, v_b_5269_, v_i_5270_);
lean_dec_ref(v_range_5268_);
lean_dec_ref(v_b_5267_);
return v_res_5271_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object* v_b_5275_){
_start:
{
lean_object* v___x_5276_; lean_object* v___x_5277_; 
v___x_5276_ = lean_unsigned_to_nat(0u);
v___x_5277_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5275_, v___x_5276_);
if (lean_obj_tag(v___x_5277_) == 0)
{
lean_object* v_a_5278_; lean_object* v___x_5280_; uint8_t v_isShared_5281_; uint8_t v_isSharedCheck_5285_; 
v_a_5278_ = lean_ctor_get(v___x_5277_, 0);
v_isSharedCheck_5285_ = !lean_is_exclusive(v___x_5277_);
if (v_isSharedCheck_5285_ == 0)
{
v___x_5280_ = v___x_5277_;
v_isShared_5281_ = v_isSharedCheck_5285_;
goto v_resetjp_5279_;
}
else
{
lean_inc(v_a_5278_);
lean_dec(v___x_5277_);
v___x_5280_ = lean_box(0);
v_isShared_5281_ = v_isSharedCheck_5285_;
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
lean_object* v_reuseFailAlloc_5284_; 
v_reuseFailAlloc_5284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5284_, 0, v_a_5278_);
v___x_5283_ = v_reuseFailAlloc_5284_;
goto v_reusejp_5282_;
}
v_reusejp_5282_:
{
return v___x_5283_;
}
}
}
else
{
lean_object* v_a_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; 
v_a_5286_ = lean_ctor_get(v___x_5277_, 0);
lean_inc(v_a_5286_);
lean_dec_ref_known(v___x_5277_, 1);
v___x_5287_ = lean_unsigned_to_nat(8u);
v___x_5288_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5275_, v___x_5287_);
if (lean_obj_tag(v___x_5288_) == 0)
{
lean_object* v_a_5289_; lean_object* v___x_5291_; uint8_t v_isShared_5292_; uint8_t v_isSharedCheck_5296_; 
lean_dec(v_a_5286_);
v_a_5289_ = lean_ctor_get(v___x_5288_, 0);
v_isSharedCheck_5296_ = !lean_is_exclusive(v___x_5288_);
if (v_isSharedCheck_5296_ == 0)
{
v___x_5291_ = v___x_5288_;
v_isShared_5292_ = v_isSharedCheck_5296_;
goto v_resetjp_5290_;
}
else
{
lean_inc(v_a_5289_);
lean_dec(v___x_5288_);
v___x_5291_ = lean_box(0);
v_isShared_5292_ = v_isSharedCheck_5296_;
goto v_resetjp_5290_;
}
v_resetjp_5290_:
{
lean_object* v___x_5294_; 
if (v_isShared_5292_ == 0)
{
v___x_5294_ = v___x_5291_;
goto v_reusejp_5293_;
}
else
{
lean_object* v_reuseFailAlloc_5295_; 
v_reuseFailAlloc_5295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5295_, 0, v_a_5289_);
v___x_5294_ = v_reuseFailAlloc_5295_;
goto v_reusejp_5293_;
}
v_reusejp_5293_:
{
return v___x_5294_;
}
}
}
else
{
lean_object* v_a_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; 
v_a_5297_ = lean_ctor_get(v___x_5288_, 0);
lean_inc(v_a_5297_);
lean_dec_ref_known(v___x_5288_, 1);
v___x_5298_ = lean_unsigned_to_nat(1u);
v___x_5299_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5299_, 0, v___x_5276_);
lean_ctor_set(v___x_5299_, 1, v_a_5297_);
lean_ctor_set(v___x_5299_, 2, v___x_5298_);
v___x_5300_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0));
v___x_5301_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5275_, v___x_5299_, v___x_5300_, v___x_5276_);
lean_dec_ref_known(v___x_5299_, 3);
if (lean_obj_tag(v___x_5301_) == 0)
{
lean_object* v_a_5302_; lean_object* v___x_5304_; uint8_t v_isShared_5305_; uint8_t v_isSharedCheck_5309_; 
lean_dec(v_a_5286_);
v_a_5302_ = lean_ctor_get(v___x_5301_, 0);
v_isSharedCheck_5309_ = !lean_is_exclusive(v___x_5301_);
if (v_isSharedCheck_5309_ == 0)
{
v___x_5304_ = v___x_5301_;
v_isShared_5305_ = v_isSharedCheck_5309_;
goto v_resetjp_5303_;
}
else
{
lean_inc(v_a_5302_);
lean_dec(v___x_5301_);
v___x_5304_ = lean_box(0);
v_isShared_5305_ = v_isSharedCheck_5309_;
goto v_resetjp_5303_;
}
v_resetjp_5303_:
{
lean_object* v___x_5307_; 
if (v_isShared_5305_ == 0)
{
v___x_5307_ = v___x_5304_;
goto v_reusejp_5306_;
}
else
{
lean_object* v_reuseFailAlloc_5308_; 
v_reuseFailAlloc_5308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5308_, 0, v_a_5302_);
v___x_5307_ = v_reuseFailAlloc_5308_;
goto v_reusejp_5306_;
}
v_reusejp_5306_:
{
return v___x_5307_;
}
}
}
else
{
lean_object* v_a_5310_; lean_object* v___x_5312_; uint8_t v_isShared_5313_; uint8_t v_isSharedCheck_5324_; 
v_a_5310_ = lean_ctor_get(v___x_5301_, 0);
v_isSharedCheck_5324_ = !lean_is_exclusive(v___x_5301_);
if (v_isSharedCheck_5324_ == 0)
{
v___x_5312_ = v___x_5301_;
v_isShared_5313_ = v_isSharedCheck_5324_;
goto v_resetjp_5311_;
}
else
{
lean_inc(v_a_5310_);
lean_dec(v___x_5301_);
v___x_5312_ = lean_box(0);
v_isShared_5313_ = v_isSharedCheck_5324_;
goto v_resetjp_5311_;
}
v_resetjp_5311_:
{
lean_object* v_fst_5314_; lean_object* v_snd_5315_; uint16_t v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5322_; 
v_fst_5314_ = lean_ctor_get(v_a_5310_, 0);
lean_inc(v_fst_5314_);
v_snd_5315_ = lean_ctor_get(v_a_5310_, 1);
lean_inc(v_snd_5315_);
lean_dec(v_a_5310_);
v___x_5316_ = lean_uint16_of_nat(v_a_5286_);
lean_dec(v_a_5286_);
v___x_5317_ = lean_byte_array_size(v_b_5275_);
v___x_5318_ = l_ByteArray_extract(v_b_5275_, v_fst_5314_, v___x_5317_);
v___x_5319_ = lean_box(0);
v___x_5320_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5320_, 0, v_snd_5315_);
lean_ctor_set(v___x_5320_, 1, v___x_5318_);
lean_ctor_set(v___x_5320_, 2, v___x_5319_);
lean_ctor_set_uint16(v___x_5320_, sizeof(void*)*3, v___x_5316_);
if (v_isShared_5313_ == 0)
{
lean_ctor_set(v___x_5312_, 0, v___x_5320_);
v___x_5322_ = v___x_5312_;
goto v_reusejp_5321_;
}
else
{
lean_object* v_reuseFailAlloc_5323_; 
v_reuseFailAlloc_5323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5323_, 0, v___x_5320_);
v___x_5322_ = v_reuseFailAlloc_5323_;
goto v_reusejp_5321_;
}
v_reusejp_5321_:
{
return v___x_5322_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object* v_b_5325_){
_start:
{
lean_object* v_res_5326_; 
v_res_5326_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_b_5325_);
lean_dec_ref(v_b_5325_);
return v_res_5326_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object* v_b_5327_, lean_object* v_range_5328_, lean_object* v_b_5329_, lean_object* v_i_5330_, lean_object* v_hs_5331_, lean_object* v_hl_5332_){
_start:
{
lean_object* v___x_5333_; 
v___x_5333_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5327_, v_range_5328_, v_b_5329_, v_i_5330_);
return v___x_5333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object* v_b_5334_, lean_object* v_range_5335_, lean_object* v_b_5336_, lean_object* v_i_5337_, lean_object* v_hs_5338_, lean_object* v_hl_5339_){
_start:
{
lean_object* v_res_5340_; 
v_res_5340_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(v_b_5334_, v_range_5335_, v_b_5336_, v_i_5337_, v_hs_5338_, v_hl_5339_);
lean_dec_ref(v_range_5335_);
lean_dec_ref(v_b_5334_);
return v_res_5340_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t v___y_5341_, lean_object* v_headers_5342_, lean_object* v_x_5343_){
_start:
{
if (lean_obj_tag(v_x_5343_) == 0)
{
lean_object* v_a_5345_; lean_object* v___x_5347_; uint8_t v_isShared_5348_; uint8_t v_isSharedCheck_5353_; 
lean_dec_ref(v_headers_5342_);
v_a_5345_ = lean_ctor_get(v_x_5343_, 0);
v_isSharedCheck_5353_ = !lean_is_exclusive(v_x_5343_);
if (v_isSharedCheck_5353_ == 0)
{
v___x_5347_ = v_x_5343_;
v_isShared_5348_ = v_isSharedCheck_5353_;
goto v_resetjp_5346_;
}
else
{
lean_inc(v_a_5345_);
lean_dec(v_x_5343_);
v___x_5347_ = lean_box(0);
v_isShared_5348_ = v_isSharedCheck_5353_;
goto v_resetjp_5346_;
}
v_resetjp_5346_:
{
lean_object* v___x_5350_; 
if (v_isShared_5348_ == 0)
{
v___x_5350_ = v___x_5347_;
goto v_reusejp_5349_;
}
else
{
lean_object* v_reuseFailAlloc_5352_; 
v_reuseFailAlloc_5352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5352_, 0, v_a_5345_);
v___x_5350_ = v_reuseFailAlloc_5352_;
goto v_reusejp_5349_;
}
v_reusejp_5349_:
{
lean_object* v___x_5351_; 
v___x_5351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5351_, 0, v___x_5350_);
return v___x_5351_;
}
}
}
else
{
lean_object* v_a_5354_; lean_object* v___x_5356_; uint8_t v_isShared_5357_; uint8_t v_isSharedCheck_5364_; 
v_a_5354_ = lean_ctor_get(v_x_5343_, 0);
v_isSharedCheck_5364_ = !lean_is_exclusive(v_x_5343_);
if (v_isSharedCheck_5364_ == 0)
{
v___x_5356_ = v_x_5343_;
v_isShared_5357_ = v_isSharedCheck_5364_;
goto v_resetjp_5355_;
}
else
{
lean_inc(v_a_5354_);
lean_dec(v_x_5343_);
v___x_5356_ = lean_box(0);
v_isShared_5357_ = v_isSharedCheck_5364_;
goto v_resetjp_5355_;
}
v_resetjp_5355_:
{
lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5361_; 
v___x_5358_ = lean_box(0);
v___x_5359_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5359_, 0, v_headers_5342_);
lean_ctor_set(v___x_5359_, 1, v_a_5354_);
lean_ctor_set(v___x_5359_, 2, v___x_5358_);
lean_ctor_set_uint16(v___x_5359_, sizeof(void*)*3, v___y_5341_);
if (v_isShared_5357_ == 0)
{
lean_ctor_set(v___x_5356_, 0, v___x_5359_);
v___x_5361_ = v___x_5356_;
goto v_reusejp_5360_;
}
else
{
lean_object* v_reuseFailAlloc_5363_; 
v_reuseFailAlloc_5363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5363_, 0, v___x_5359_);
v___x_5361_ = v_reuseFailAlloc_5363_;
goto v_reusejp_5360_;
}
v_reusejp_5360_:
{
lean_object* v___x_5362_; 
v___x_5362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5362_, 0, v___x_5361_);
return v___x_5362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object* v___y_5365_, lean_object* v_headers_5366_, lean_object* v_x_5367_, lean_object* v___y_5368_){
_start:
{
uint16_t v___y_2853__boxed_5369_; lean_object* v_res_5370_; 
v___y_2853__boxed_5369_ = lean_unbox(v___y_5365_);
v_res_5370_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(v___y_2853__boxed_5369_, v_headers_5366_, v_x_5367_);
return v_res_5370_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object* v_a_5371_, lean_object* v___f_5372_, lean_object* v_x_5373_){
_start:
{
if (lean_obj_tag(v_x_5373_) == 0)
{
lean_object* v_a_5375_; lean_object* v___x_5377_; uint8_t v_isShared_5378_; uint8_t v_isSharedCheck_5383_; 
lean_dec_ref(v___f_5372_);
lean_dec(v_a_5371_);
v_a_5375_ = lean_ctor_get(v_x_5373_, 0);
v_isSharedCheck_5383_ = !lean_is_exclusive(v_x_5373_);
if (v_isSharedCheck_5383_ == 0)
{
v___x_5377_ = v_x_5373_;
v_isShared_5378_ = v_isSharedCheck_5383_;
goto v_resetjp_5376_;
}
else
{
lean_inc(v_a_5375_);
lean_dec(v_x_5373_);
v___x_5377_ = lean_box(0);
v_isShared_5378_ = v_isSharedCheck_5383_;
goto v_resetjp_5376_;
}
v_resetjp_5376_:
{
lean_object* v___x_5380_; 
if (v_isShared_5378_ == 0)
{
v___x_5380_ = v___x_5377_;
goto v_reusejp_5379_;
}
else
{
lean_object* v_reuseFailAlloc_5382_; 
v_reuseFailAlloc_5382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5382_, 0, v_a_5375_);
v___x_5380_ = v_reuseFailAlloc_5382_;
goto v_reusejp_5379_;
}
v_reusejp_5379_:
{
lean_object* v___x_5381_; 
v___x_5381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5381_, 0, v___x_5380_);
return v___x_5381_;
}
}
}
else
{
lean_object* v_a_5384_; lean_object* v___x_5386_; uint8_t v_isShared_5387_; uint8_t v_isSharedCheck_5408_; 
v_a_5384_ = lean_ctor_get(v_x_5373_, 0);
v_isSharedCheck_5408_ = !lean_is_exclusive(v_x_5373_);
if (v_isSharedCheck_5408_ == 0)
{
v___x_5386_ = v_x_5373_;
v_isShared_5387_ = v_isSharedCheck_5408_;
goto v_resetjp_5385_;
}
else
{
lean_inc(v_a_5384_);
lean_dec(v_x_5373_);
v___x_5386_ = lean_box(0);
v_isShared_5387_ = v_isSharedCheck_5408_;
goto v_resetjp_5385_;
}
v_resetjp_5385_:
{
lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; uint8_t v___x_5394_; lean_object* v_val_5396_; lean_object* v___x_5399_; 
v___x_5388_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5389_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5389_, 0, v_a_5371_);
lean_ctor_set(v___x_5389_, 1, v___x_5388_);
v___x_5390_ = lean_unsigned_to_nat(1u);
v___x_5391_ = lean_mk_empty_array_with_capacity(v___x_5390_);
v___x_5392_ = lean_array_push(v___x_5391_, v___x_5389_);
v___x_5393_ = lean_unsigned_to_nat(0u);
v___x_5394_ = 0;
v___x_5399_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_5384_, v___x_5392_);
if (lean_obj_tag(v___x_5399_) == 0)
{
lean_object* v_a_5400_; lean_object* v___x_5402_; 
v_a_5400_ = lean_ctor_get(v___x_5399_, 0);
lean_inc(v_a_5400_);
lean_dec_ref_known(v___x_5399_, 1);
if (v_isShared_5387_ == 0)
{
lean_ctor_set(v___x_5386_, 0, v_a_5400_);
v___x_5402_ = v___x_5386_;
goto v_reusejp_5401_;
}
else
{
lean_object* v_reuseFailAlloc_5403_; 
v_reuseFailAlloc_5403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5403_, 0, v_a_5400_);
v___x_5402_ = v_reuseFailAlloc_5403_;
goto v_reusejp_5401_;
}
v_reusejp_5401_:
{
v_val_5396_ = v___x_5402_;
goto v___jp_5395_;
}
}
else
{
lean_object* v_a_5404_; lean_object* v___x_5406_; 
v_a_5404_ = lean_ctor_get(v___x_5399_, 0);
lean_inc(v_a_5404_);
lean_dec_ref_known(v___x_5399_, 1);
if (v_isShared_5387_ == 0)
{
lean_ctor_set_tag(v___x_5386_, 0);
lean_ctor_set(v___x_5386_, 0, v_a_5404_);
v___x_5406_ = v___x_5386_;
goto v_reusejp_5405_;
}
else
{
lean_object* v_reuseFailAlloc_5407_; 
v_reuseFailAlloc_5407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5407_, 0, v_a_5404_);
v___x_5406_ = v_reuseFailAlloc_5407_;
goto v_reusejp_5405_;
}
v_reusejp_5405_:
{
v_val_5396_ = v___x_5406_;
goto v___jp_5395_;
}
}
v___jp_5395_:
{
lean_object* v___x_5397_; lean_object* v___x_5398_; 
v___x_5397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5397_, 0, v_val_5396_);
v___x_5398_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5393_, v___x_5394_, v___x_5397_, v___f_5372_);
return v___x_5398_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object* v_a_5409_, lean_object* v___f_5410_, lean_object* v_x_5411_, lean_object* v___y_5412_){
_start:
{
lean_object* v_res_5413_; 
v_res_5413_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(v_a_5409_, v___f_5410_, v_x_5411_);
return v_res_5413_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object* v___f_5414_, lean_object* v_a_5415_, lean_object* v_x_5416_){
_start:
{
if (lean_obj_tag(v_x_5416_) == 0)
{
lean_object* v_a_5418_; lean_object* v___x_5420_; uint8_t v_isShared_5421_; uint8_t v_isSharedCheck_5426_; 
lean_dec(v_a_5415_);
lean_dec_ref(v___f_5414_);
v_a_5418_ = lean_ctor_get(v_x_5416_, 0);
v_isSharedCheck_5426_ = !lean_is_exclusive(v_x_5416_);
if (v_isSharedCheck_5426_ == 0)
{
v___x_5420_ = v_x_5416_;
v_isShared_5421_ = v_isSharedCheck_5426_;
goto v_resetjp_5419_;
}
else
{
lean_inc(v_a_5418_);
lean_dec(v_x_5416_);
v___x_5420_ = lean_box(0);
v_isShared_5421_ = v_isSharedCheck_5426_;
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
lean_object* v_reuseFailAlloc_5425_; 
v_reuseFailAlloc_5425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5425_, 0, v_a_5418_);
v___x_5423_ = v_reuseFailAlloc_5425_;
goto v_reusejp_5422_;
}
v_reusejp_5422_:
{
lean_object* v___x_5424_; 
v___x_5424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5424_, 0, v___x_5423_);
return v___x_5424_;
}
}
}
else
{
lean_object* v_a_5427_; lean_object* v___x_5429_; uint8_t v_isShared_5430_; uint8_t v_isSharedCheck_5448_; 
v_a_5427_ = lean_ctor_get(v_x_5416_, 0);
v_isSharedCheck_5448_ = !lean_is_exclusive(v_x_5416_);
if (v_isSharedCheck_5448_ == 0)
{
v___x_5429_ = v_x_5416_;
v_isShared_5430_ = v_isSharedCheck_5448_;
goto v_resetjp_5428_;
}
else
{
lean_inc(v_a_5427_);
lean_dec(v_x_5416_);
v___x_5429_ = lean_box(0);
v_isShared_5430_ = v_isSharedCheck_5448_;
goto v_resetjp_5428_;
}
v_resetjp_5428_:
{
lean_object* v___f_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; uint8_t v___x_5434_; lean_object* v_val_5436_; lean_object* v___x_5439_; 
v___f_5431_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5431_, 0, v_a_5427_);
lean_closure_set(v___f_5431_, 1, v___f_5414_);
v___x_5432_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_5433_ = lean_unsigned_to_nat(0u);
v___x_5434_ = 0;
v___x_5439_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5415_, v___x_5432_);
if (lean_obj_tag(v___x_5439_) == 0)
{
lean_object* v_a_5440_; lean_object* v___x_5442_; 
v_a_5440_ = lean_ctor_get(v___x_5439_, 0);
lean_inc(v_a_5440_);
lean_dec_ref_known(v___x_5439_, 1);
if (v_isShared_5430_ == 0)
{
lean_ctor_set(v___x_5429_, 0, v_a_5440_);
v___x_5442_ = v___x_5429_;
goto v_reusejp_5441_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v_a_5440_);
v___x_5442_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5441_;
}
v_reusejp_5441_:
{
v_val_5436_ = v___x_5442_;
goto v___jp_5435_;
}
}
else
{
lean_object* v_a_5444_; lean_object* v___x_5446_; 
v_a_5444_ = lean_ctor_get(v___x_5439_, 0);
lean_inc(v_a_5444_);
lean_dec_ref_known(v___x_5439_, 1);
if (v_isShared_5430_ == 0)
{
lean_ctor_set_tag(v___x_5429_, 0);
lean_ctor_set(v___x_5429_, 0, v_a_5444_);
v___x_5446_ = v___x_5429_;
goto v_reusejp_5445_;
}
else
{
lean_object* v_reuseFailAlloc_5447_; 
v_reuseFailAlloc_5447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5447_, 0, v_a_5444_);
v___x_5446_ = v_reuseFailAlloc_5447_;
goto v_reusejp_5445_;
}
v_reusejp_5445_:
{
v_val_5436_ = v___x_5446_;
goto v___jp_5435_;
}
}
v___jp_5435_:
{
lean_object* v___x_5437_; lean_object* v___x_5438_; 
v___x_5437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5437_, 0, v_val_5436_);
v___x_5438_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5433_, v___x_5434_, v___x_5437_, v___f_5431_);
return v___x_5438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object* v___f_5449_, lean_object* v_a_5450_, lean_object* v_x_5451_, lean_object* v___y_5452_){
_start:
{
lean_object* v_res_5453_; 
v_res_5453_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(v___f_5449_, v_a_5450_, v_x_5451_);
return v_res_5453_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t v___y_5454_, lean_object* v_a_5455_, lean_object* v_a_5456_, lean_object* v_headers_5457_){
_start:
{
lean_object* v___x_5459_; lean_object* v___f_5460_; lean_object* v___f_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; uint8_t v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; 
v___x_5459_ = lean_box(v___y_5454_);
v___f_5460_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed), 4, 2);
lean_closure_set(v___f_5460_, 0, v___x_5459_);
lean_closure_set(v___f_5460_, 1, v_headers_5457_);
v___f_5461_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5461_, 0, v___f_5460_);
lean_closure_set(v___f_5461_, 1, v_a_5455_);
v___x_5462_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_5463_ = lean_unsigned_to_nat(0u);
v___x_5464_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_5465_ = 0;
v___x_5466_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_5456_, v___x_5462_, v___x_5464_);
v___x_5467_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5463_, v___x_5465_, v___x_5466_, v___f_5461_);
return v___x_5467_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object* v___y_5468_, lean_object* v_a_5469_, lean_object* v_a_5470_, lean_object* v_headers_5471_, lean_object* v___y_5472_){
_start:
{
uint16_t v___y_3061__boxed_5473_; lean_object* v_res_5474_; 
v___y_3061__boxed_5473_ = lean_unbox(v___y_5468_);
v_res_5474_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(v___y_3061__boxed_5473_, v_a_5469_, v_a_5470_, v_headers_5471_);
return v_res_5474_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object* v___f_5475_, lean_object* v_x_5476_){
_start:
{
if (lean_obj_tag(v_x_5476_) == 0)
{
lean_object* v_a_5478_; lean_object* v___x_5480_; uint8_t v_isShared_5481_; uint8_t v_isSharedCheck_5486_; 
lean_dec_ref(v___f_5475_);
v_a_5478_ = lean_ctor_get(v_x_5476_, 0);
v_isSharedCheck_5486_ = !lean_is_exclusive(v_x_5476_);
if (v_isSharedCheck_5486_ == 0)
{
v___x_5480_ = v_x_5476_;
v_isShared_5481_ = v_isSharedCheck_5486_;
goto v_resetjp_5479_;
}
else
{
lean_inc(v_a_5478_);
lean_dec(v_x_5476_);
v___x_5480_ = lean_box(0);
v_isShared_5481_ = v_isSharedCheck_5486_;
goto v_resetjp_5479_;
}
v_resetjp_5479_:
{
lean_object* v___x_5483_; 
if (v_isShared_5481_ == 0)
{
v___x_5483_ = v___x_5480_;
goto v_reusejp_5482_;
}
else
{
lean_object* v_reuseFailAlloc_5485_; 
v_reuseFailAlloc_5485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5485_, 0, v_a_5478_);
v___x_5483_ = v_reuseFailAlloc_5485_;
goto v_reusejp_5482_;
}
v_reusejp_5482_:
{
lean_object* v___x_5484_; 
v___x_5484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5484_, 0, v___x_5483_);
return v___x_5484_;
}
}
}
else
{
lean_object* v_a_5487_; lean_object* v___x_5488_; 
v_a_5487_ = lean_ctor_get(v_x_5476_, 0);
lean_inc(v_a_5487_);
lean_dec_ref_known(v_x_5476_, 1);
v___x_5488_ = lean_apply_2(v___f_5475_, v_a_5487_, lean_box(0));
return v___x_5488_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object* v___f_5489_, lean_object* v_x_5490_, lean_object* v___y_5491_){
_start:
{
lean_object* v_res_5492_; 
v_res_5492_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(v___f_5489_, v_x_5490_);
return v_res_5492_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object* v_value_5493_, lean_object* v___f_5494_, lean_object* v_x_5495_){
_start:
{
if (lean_obj_tag(v_x_5495_) == 0)
{
lean_object* v_a_5497_; lean_object* v___x_5499_; uint8_t v_isShared_5500_; uint8_t v_isSharedCheck_5505_; 
lean_dec_ref(v___f_5494_);
lean_dec(v_value_5493_);
v_a_5497_ = lean_ctor_get(v_x_5495_, 0);
v_isSharedCheck_5505_ = !lean_is_exclusive(v_x_5495_);
if (v_isSharedCheck_5505_ == 0)
{
v___x_5499_ = v_x_5495_;
v_isShared_5500_ = v_isSharedCheck_5505_;
goto v_resetjp_5498_;
}
else
{
lean_inc(v_a_5497_);
lean_dec(v_x_5495_);
v___x_5499_ = lean_box(0);
v_isShared_5500_ = v_isSharedCheck_5505_;
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
lean_object* v_reuseFailAlloc_5504_; 
v_reuseFailAlloc_5504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5504_, 0, v_a_5497_);
v___x_5502_ = v_reuseFailAlloc_5504_;
goto v_reusejp_5501_;
}
v_reusejp_5501_:
{
lean_object* v___x_5503_; 
v___x_5503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5503_, 0, v___x_5502_);
return v___x_5503_;
}
}
}
else
{
lean_object* v_a_5506_; lean_object* v___x_5508_; uint8_t v_isShared_5509_; uint8_t v_isSharedCheck_5531_; 
v_a_5506_ = lean_ctor_get(v_x_5495_, 0);
v_isSharedCheck_5531_ = !lean_is_exclusive(v_x_5495_);
if (v_isSharedCheck_5531_ == 0)
{
v___x_5508_ = v_x_5495_;
v_isShared_5509_ = v_isSharedCheck_5531_;
goto v_resetjp_5507_;
}
else
{
lean_inc(v_a_5506_);
lean_dec(v_x_5495_);
v___x_5508_ = lean_box(0);
v_isShared_5509_ = v_isSharedCheck_5531_;
goto v_resetjp_5507_;
}
v_resetjp_5507_:
{
lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; uint8_t v___x_5517_; lean_object* v_val_5519_; lean_object* v___x_5522_; 
v___x_5510_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_5511_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5512_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5512_, 0, v_value_5493_);
lean_ctor_set(v___x_5512_, 1, v___x_5511_);
v___x_5513_ = lean_unsigned_to_nat(1u);
v___x_5514_ = lean_mk_empty_array_with_capacity(v___x_5513_);
v___x_5515_ = lean_array_push(v___x_5514_, v___x_5512_);
v___x_5516_ = lean_unsigned_to_nat(0u);
v___x_5517_ = 0;
v___x_5522_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_5506_, v___x_5510_, v___x_5515_);
if (lean_obj_tag(v___x_5522_) == 0)
{
lean_object* v_a_5523_; lean_object* v___x_5525_; 
v_a_5523_ = lean_ctor_get(v___x_5522_, 0);
lean_inc(v_a_5523_);
lean_dec_ref_known(v___x_5522_, 1);
if (v_isShared_5509_ == 0)
{
lean_ctor_set(v___x_5508_, 0, v_a_5523_);
v___x_5525_ = v___x_5508_;
goto v_reusejp_5524_;
}
else
{
lean_object* v_reuseFailAlloc_5526_; 
v_reuseFailAlloc_5526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5526_, 0, v_a_5523_);
v___x_5525_ = v_reuseFailAlloc_5526_;
goto v_reusejp_5524_;
}
v_reusejp_5524_:
{
v_val_5519_ = v___x_5525_;
goto v___jp_5518_;
}
}
else
{
lean_object* v_a_5527_; lean_object* v___x_5529_; 
v_a_5527_ = lean_ctor_get(v___x_5522_, 0);
lean_inc(v_a_5527_);
lean_dec_ref_known(v___x_5522_, 1);
if (v_isShared_5509_ == 0)
{
lean_ctor_set_tag(v___x_5508_, 0);
lean_ctor_set(v___x_5508_, 0, v_a_5527_);
v___x_5529_ = v___x_5508_;
goto v_reusejp_5528_;
}
else
{
lean_object* v_reuseFailAlloc_5530_; 
v_reuseFailAlloc_5530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5530_, 0, v_a_5527_);
v___x_5529_ = v_reuseFailAlloc_5530_;
goto v_reusejp_5528_;
}
v_reusejp_5528_:
{
v_val_5519_ = v___x_5529_;
goto v___jp_5518_;
}
}
v___jp_5518_:
{
lean_object* v___x_5520_; lean_object* v___x_5521_; 
v___x_5520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5520_, 0, v_val_5519_);
v___x_5521_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5516_, v___x_5517_, v___x_5520_, v___f_5494_);
return v___x_5521_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object* v_value_5532_, lean_object* v___f_5533_, lean_object* v_x_5534_, lean_object* v___y_5535_){
_start:
{
lean_object* v_res_5536_; 
v_res_5536_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(v_value_5532_, v___f_5533_, v_x_5534_);
return v_res_5536_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object* v_a_5541_, lean_object* v_a_5542_, lean_object* v___x_5543_, lean_object* v___x_5544_, lean_object* v_x_5545_){
_start:
{
lean_object* v___y_5548_; uint8_t v___y_5549_; lean_object* v___y_5550_; lean_object* v_val_5551_; 
if (lean_obj_tag(v_x_5545_) == 0)
{
lean_object* v_a_5554_; lean_object* v___x_5556_; uint8_t v_isShared_5557_; uint8_t v_isSharedCheck_5562_; 
lean_dec(v_a_5542_);
lean_dec(v_a_5541_);
v_a_5554_ = lean_ctor_get(v_x_5545_, 0);
v_isSharedCheck_5562_ = !lean_is_exclusive(v_x_5545_);
if (v_isSharedCheck_5562_ == 0)
{
v___x_5556_ = v_x_5545_;
v_isShared_5557_ = v_isSharedCheck_5562_;
goto v_resetjp_5555_;
}
else
{
lean_inc(v_a_5554_);
lean_dec(v_x_5545_);
v___x_5556_ = lean_box(0);
v_isShared_5557_ = v_isSharedCheck_5562_;
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
lean_object* v_reuseFailAlloc_5561_; 
v_reuseFailAlloc_5561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5561_, 0, v_a_5554_);
v___x_5559_ = v_reuseFailAlloc_5561_;
goto v_reusejp_5558_;
}
v_reusejp_5558_:
{
lean_object* v___x_5560_; 
v___x_5560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5560_, 0, v___x_5559_);
return v___x_5560_;
}
}
}
else
{
lean_object* v_a_5563_; lean_object* v___x_5565_; uint8_t v_isShared_5566_; uint8_t v_isSharedCheck_5596_; 
v_a_5563_ = lean_ctor_get(v_x_5545_, 0);
v_isSharedCheck_5596_ = !lean_is_exclusive(v_x_5545_);
if (v_isSharedCheck_5596_ == 0)
{
v___x_5565_ = v_x_5545_;
v_isShared_5566_ = v_isSharedCheck_5596_;
goto v_resetjp_5564_;
}
else
{
lean_inc(v_a_5563_);
lean_dec(v_x_5545_);
v___x_5565_ = lean_box(0);
v_isShared_5566_ = v_isSharedCheck_5596_;
goto v_resetjp_5564_;
}
v_resetjp_5564_:
{
uint16_t v___y_5568_; lean_object* v___x_5592_; 
v___x_5592_ = l_Lasm_JS_Data_field(v_a_5563_, v___x_5544_);
if (lean_obj_tag(v___x_5592_) == 3)
{
double v_n_5593_; uint16_t v___x_5594_; 
v_n_5593_ = lean_ctor_get_float(v___x_5592_, 0);
lean_dec_ref_known(v___x_5592_, 0);
v___x_5594_ = lean_float_to_uint16(v_n_5593_);
v___y_5568_ = v___x_5594_;
goto v___jp_5567_;
}
else
{
uint16_t v___x_5595_; 
lean_dec(v___x_5592_);
v___x_5595_ = 0;
v___y_5568_ = v___x_5595_;
goto v___jp_5567_;
}
v___jp_5567_:
{
lean_object* v___x_5569_; lean_object* v___f_5570_; lean_object* v___x_5571_; 
v___x_5569_ = lean_box(v___y_5568_);
lean_inc(v_a_5541_);
v___f_5570_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5570_, 0, v___x_5569_);
lean_closure_set(v___f_5570_, 1, v_a_5541_);
lean_closure_set(v___f_5570_, 2, v_a_5542_);
v___x_5571_ = l_Lasm_JS_Data_field(v_a_5563_, v___x_5543_);
lean_dec(v_a_5563_);
if (lean_obj_tag(v___x_5571_) == 9)
{
lean_object* v_value_5572_; lean_object* v___f_5573_; lean_object* v___f_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; uint8_t v___x_5577_; lean_object* v___x_5578_; 
v_value_5572_ = lean_ctor_get(v___x_5571_, 0);
lean_inc(v_value_5572_);
lean_dec_ref_known(v___x_5571_, 2);
v___f_5573_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5573_, 0, v___f_5570_);
v___f_5574_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed), 4, 2);
lean_closure_set(v___f_5574_, 0, v_value_5572_);
lean_closure_set(v___f_5574_, 1, v___f_5573_);
v___x_5575_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_5576_ = lean_unsigned_to_nat(0u);
v___x_5577_ = 0;
v___x_5578_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5541_, v___x_5575_);
if (lean_obj_tag(v___x_5578_) == 0)
{
lean_object* v_a_5579_; lean_object* v___x_5581_; 
v_a_5579_ = lean_ctor_get(v___x_5578_, 0);
lean_inc(v_a_5579_);
lean_dec_ref_known(v___x_5578_, 1);
if (v_isShared_5566_ == 0)
{
lean_ctor_set(v___x_5565_, 0, v_a_5579_);
v___x_5581_ = v___x_5565_;
goto v_reusejp_5580_;
}
else
{
lean_object* v_reuseFailAlloc_5582_; 
v_reuseFailAlloc_5582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5582_, 0, v_a_5579_);
v___x_5581_ = v_reuseFailAlloc_5582_;
goto v_reusejp_5580_;
}
v_reusejp_5580_:
{
v___y_5548_ = v___x_5576_;
v___y_5549_ = v___x_5577_;
v___y_5550_ = v___f_5574_;
v_val_5551_ = v___x_5581_;
goto v___jp_5547_;
}
}
else
{
lean_object* v_a_5583_; lean_object* v___x_5585_; 
v_a_5583_ = lean_ctor_get(v___x_5578_, 0);
lean_inc(v_a_5583_);
lean_dec_ref_known(v___x_5578_, 1);
if (v_isShared_5566_ == 0)
{
lean_ctor_set_tag(v___x_5565_, 0);
lean_ctor_set(v___x_5565_, 0, v_a_5583_);
v___x_5585_ = v___x_5565_;
goto v_reusejp_5584_;
}
else
{
lean_object* v_reuseFailAlloc_5586_; 
v_reuseFailAlloc_5586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5586_, 0, v_a_5583_);
v___x_5585_ = v_reuseFailAlloc_5586_;
goto v_reusejp_5584_;
}
v_reusejp_5584_:
{
v___y_5548_ = v___x_5576_;
v___y_5549_ = v___x_5577_;
v___y_5550_ = v___f_5574_;
v_val_5551_ = v___x_5585_;
goto v___jp_5547_;
}
}
}
else
{
lean_object* v___f_5587_; lean_object* v___x_5588_; uint8_t v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; 
lean_dec(v___x_5571_);
lean_del_object(v___x_5565_);
lean_dec(v_a_5541_);
v___f_5587_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5587_, 0, v___f_5570_);
v___x_5588_ = lean_unsigned_to_nat(0u);
v___x_5589_ = 0;
v___x_5590_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1));
v___x_5591_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5588_, v___x_5589_, v___x_5590_, v___f_5587_);
return v___x_5591_;
}
}
}
}
v___jp_5547_:
{
lean_object* v___x_5552_; lean_object* v___x_5553_; 
v___x_5552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5552_, 0, v_val_5551_);
v___x_5553_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5548_, v___y_5549_, v___x_5552_, v___y_5550_);
return v___x_5553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object* v_a_5597_, lean_object* v_a_5598_, lean_object* v___x_5599_, lean_object* v___x_5600_, lean_object* v_x_5601_, lean_object* v___y_5602_){
_start:
{
lean_object* v_res_5603_; 
v_res_5603_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(v_a_5597_, v_a_5598_, v___x_5599_, v___x_5600_, v_x_5601_);
lean_dec_ref(v___x_5600_);
lean_dec_ref(v___x_5599_);
return v_res_5603_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0(void){
_start:
{
lean_object* v___x_5604_; lean_object* v___x_5605_; lean_object* v___x_5606_; lean_object* v___x_5607_; 
v___x_5604_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_5605_ = lean_unsigned_to_nat(2u);
v___x_5606_ = lean_mk_empty_array_with_capacity(v___x_5605_);
v___x_5607_ = lean_array_push(v___x_5606_, v___x_5604_);
return v___x_5607_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object* v_a_5608_, lean_object* v___x_5609_, lean_object* v_x_5610_){
_start:
{
if (lean_obj_tag(v_x_5610_) == 0)
{
lean_object* v_a_5612_; lean_object* v___x_5614_; uint8_t v_isShared_5615_; uint8_t v_isSharedCheck_5620_; 
lean_dec_ref(v___x_5609_);
lean_dec(v_a_5608_);
v_a_5612_ = lean_ctor_get(v_x_5610_, 0);
v_isSharedCheck_5620_ = !lean_is_exclusive(v_x_5610_);
if (v_isSharedCheck_5620_ == 0)
{
v___x_5614_ = v_x_5610_;
v_isShared_5615_ = v_isSharedCheck_5620_;
goto v_resetjp_5613_;
}
else
{
lean_inc(v_a_5612_);
lean_dec(v_x_5610_);
v___x_5614_ = lean_box(0);
v_isShared_5615_ = v_isSharedCheck_5620_;
goto v_resetjp_5613_;
}
v_resetjp_5613_:
{
lean_object* v___x_5617_; 
if (v_isShared_5615_ == 0)
{
v___x_5617_ = v___x_5614_;
goto v_reusejp_5616_;
}
else
{
lean_object* v_reuseFailAlloc_5619_; 
v_reuseFailAlloc_5619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5619_, 0, v_a_5612_);
v___x_5617_ = v_reuseFailAlloc_5619_;
goto v_reusejp_5616_;
}
v_reusejp_5616_:
{
lean_object* v___x_5618_; 
v___x_5618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5618_, 0, v___x_5617_);
return v___x_5618_;
}
}
}
else
{
lean_object* v_a_5621_; lean_object* v___x_5623_; uint8_t v_isShared_5624_; uint8_t v_isSharedCheck_5644_; 
v_a_5621_ = lean_ctor_get(v_x_5610_, 0);
v_isSharedCheck_5644_ = !lean_is_exclusive(v_x_5610_);
if (v_isSharedCheck_5644_ == 0)
{
v___x_5623_ = v_x_5610_;
v_isShared_5624_ = v_isSharedCheck_5644_;
goto v_resetjp_5622_;
}
else
{
lean_inc(v_a_5621_);
lean_dec(v_x_5610_);
v___x_5623_ = lean_box(0);
v_isShared_5624_ = v_isSharedCheck_5644_;
goto v_resetjp_5622_;
}
v_resetjp_5622_:
{
lean_object* v___x_5625_; lean_object* v___f_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; uint8_t v___x_5630_; lean_object* v_val_5632_; lean_object* v___x_5635_; 
v___x_5625_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
lean_inc_ref(v___x_5609_);
lean_inc(v_a_5621_);
v___f_5626_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed), 6, 4);
lean_closure_set(v___f_5626_, 0, v_a_5608_);
lean_closure_set(v___f_5626_, 1, v_a_5621_);
lean_closure_set(v___f_5626_, 2, v___x_5609_);
lean_closure_set(v___f_5626_, 3, v___x_5625_);
v___x_5627_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0);
v___x_5628_ = lean_array_push(v___x_5627_, v___x_5609_);
v___x_5629_ = lean_unsigned_to_nat(0u);
v___x_5630_ = 0;
v___x_5635_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_5621_, v___x_5628_);
if (lean_obj_tag(v___x_5635_) == 0)
{
lean_object* v_a_5636_; lean_object* v___x_5638_; 
v_a_5636_ = lean_ctor_get(v___x_5635_, 0);
lean_inc(v_a_5636_);
lean_dec_ref_known(v___x_5635_, 1);
if (v_isShared_5624_ == 0)
{
lean_ctor_set(v___x_5623_, 0, v_a_5636_);
v___x_5638_ = v___x_5623_;
goto v_reusejp_5637_;
}
else
{
lean_object* v_reuseFailAlloc_5639_; 
v_reuseFailAlloc_5639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5639_, 0, v_a_5636_);
v___x_5638_ = v_reuseFailAlloc_5639_;
goto v_reusejp_5637_;
}
v_reusejp_5637_:
{
v_val_5632_ = v___x_5638_;
goto v___jp_5631_;
}
}
else
{
lean_object* v_a_5640_; lean_object* v___x_5642_; 
v_a_5640_ = lean_ctor_get(v___x_5635_, 0);
lean_inc(v_a_5640_);
lean_dec_ref_known(v___x_5635_, 1);
if (v_isShared_5624_ == 0)
{
lean_ctor_set_tag(v___x_5623_, 0);
lean_ctor_set(v___x_5623_, 0, v_a_5640_);
v___x_5642_ = v___x_5623_;
goto v_reusejp_5641_;
}
else
{
lean_object* v_reuseFailAlloc_5643_; 
v_reuseFailAlloc_5643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5643_, 0, v_a_5640_);
v___x_5642_ = v_reuseFailAlloc_5643_;
goto v_reusejp_5641_;
}
v_reusejp_5641_:
{
v_val_5632_ = v___x_5642_;
goto v___jp_5631_;
}
}
v___jp_5631_:
{
lean_object* v___x_5633_; lean_object* v___x_5634_; 
v___x_5633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5633_, 0, v_val_5632_);
v___x_5634_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5629_, v___x_5630_, v___x_5633_, v___f_5626_);
return v___x_5634_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object* v_a_5645_, lean_object* v___x_5646_, lean_object* v_x_5647_, lean_object* v___y_5648_){
_start:
{
lean_object* v_res_5649_; 
v_res_5649_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(v_a_5645_, v___x_5646_, v_x_5647_);
return v_res_5649_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1(void){
_start:
{
uint64_t v___x_5651_; uint8_t v___x_5652_; uint64_t v___x_5653_; 
v___x_5651_ = 0ULL;
v___x_5652_ = 0;
v___x_5653_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_5652_, v___x_5651_);
return v___x_5653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object* v_f_5654_, lean_object* v_args_5655_, lean_object* v_this_5656_){
_start:
{
lean_object* v___x_5658_; lean_object* v___x_5659_; lean_object* v___x_5660_; uint32_t v___x_5661_; uint64_t v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; 
v___x_5658_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5659_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5659_, 0, v_f_5654_);
lean_ctor_set(v___x_5659_, 1, v___x_5658_);
v___x_5660_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0));
v___x_5661_ = 205;
v___x_5662_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1, &l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1);
v___x_5663_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5663_, 0, v_args_5655_);
v___x_5664_ = lean_unsigned_to_nat(3u);
v___x_5665_ = lean_mk_empty_array_with_capacity(v___x_5664_);
v___x_5666_ = lean_array_push(v___x_5665_, v___x_5659_);
v___x_5667_ = lean_array_push(v___x_5666_, v_this_5656_);
v___x_5668_ = lean_array_push(v___x_5667_, v___x_5663_);
v___x_5669_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5669_, 0, v___x_5668_);
v___x_5670_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_5660_, v___x_5661_, v___x_5662_, v___x_5669_, v___x_5658_);
return v___x_5670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object* v_f_5671_, lean_object* v_args_5672_, lean_object* v_this_5673_, lean_object* v___y_5674_){
_start:
{
lean_object* v_res_5675_; 
v_res_5675_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_f_5671_, v_args_5672_, v_this_5673_);
return v_res_5675_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object* v_req_5686_, lean_object* v_a_5687_, lean_object* v_x_5688_){
_start:
{
if (lean_obj_tag(v_x_5688_) == 0)
{
lean_object* v_a_5690_; lean_object* v___x_5692_; uint8_t v_isShared_5693_; uint8_t v_isSharedCheck_5698_; 
lean_dec(v_a_5687_);
lean_dec_ref(v_req_5686_);
v_a_5690_ = lean_ctor_get(v_x_5688_, 0);
v_isSharedCheck_5698_ = !lean_is_exclusive(v_x_5688_);
if (v_isSharedCheck_5698_ == 0)
{
v___x_5692_ = v_x_5688_;
v_isShared_5693_ = v_isSharedCheck_5698_;
goto v_resetjp_5691_;
}
else
{
lean_inc(v_a_5690_);
lean_dec(v_x_5688_);
v___x_5692_ = lean_box(0);
v_isShared_5693_ = v_isSharedCheck_5698_;
goto v_resetjp_5691_;
}
v_resetjp_5691_:
{
lean_object* v___x_5695_; 
if (v_isShared_5693_ == 0)
{
v___x_5695_ = v___x_5692_;
goto v_reusejp_5694_;
}
else
{
lean_object* v_reuseFailAlloc_5697_; 
v_reuseFailAlloc_5697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5697_, 0, v_a_5690_);
v___x_5695_ = v_reuseFailAlloc_5697_;
goto v_reusejp_5694_;
}
v_reusejp_5694_:
{
lean_object* v___x_5696_; 
v___x_5696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5696_, 0, v___x_5695_);
return v___x_5696_;
}
}
}
else
{
lean_object* v_a_5699_; lean_object* v_method_5700_; lean_object* v_url_5701_; lean_object* v_headers_5702_; lean_object* v_body_5703_; lean_object* v___y_5705_; lean_object* v___x_5735_; uint8_t v___x_5736_; 
v_a_5699_ = lean_ctor_get(v_x_5688_, 0);
lean_inc(v_a_5699_);
lean_dec_ref_known(v_x_5688_, 1);
v_method_5700_ = lean_ctor_get(v_req_5686_, 0);
lean_inc_ref(v_method_5700_);
v_url_5701_ = lean_ctor_get(v_req_5686_, 1);
lean_inc_ref(v_url_5701_);
v_headers_5702_ = lean_ctor_get(v_req_5686_, 2);
lean_inc_ref(v_headers_5702_);
v_body_5703_ = lean_ctor_get(v_req_5686_, 3);
lean_inc_ref(v_body_5703_);
lean_dec_ref(v_req_5686_);
v___x_5735_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_5736_ = lean_string_dec_eq(v_method_5700_, v___x_5735_);
if (v___x_5736_ == 0)
{
lean_object* v___x_5737_; uint8_t v___x_5738_; 
v___x_5737_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_5738_ = lean_string_dec_eq(v_method_5700_, v___x_5737_);
if (v___x_5738_ == 0)
{
lean_object* v___x_5739_; 
v___x_5739_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5739_, 0, v_body_5703_);
v___y_5705_ = v___x_5739_;
goto v___jp_5704_;
}
else
{
lean_dec_ref(v_body_5703_);
goto v___jp_5733_;
}
}
else
{
lean_dec_ref(v_body_5703_);
goto v___jp_5733_;
}
v___jp_5704_:
{
lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___f_5710_; size_t v_sz_5711_; size_t v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; uint8_t v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; 
v___x_5706_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_5707_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5707_, 0, v_method_5700_);
v___x_5708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5708_, 0, v___x_5706_);
lean_ctor_set(v___x_5708_, 1, v___x_5707_);
v___x_5709_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___f_5710_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed), 4, 2);
lean_closure_set(v___f_5710_, 0, v_a_5687_);
lean_closure_set(v___f_5710_, 1, v___x_5709_);
v_sz_5711_ = lean_array_size(v_headers_5702_);
v___x_5712_ = ((size_t)0ULL);
v___x_5713_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_5711_, v___x_5712_, v_headers_5702_);
v___x_5714_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5714_, 0, v___x_5713_);
v___x_5715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5715_, 0, v___x_5709_);
lean_ctor_set(v___x_5715_, 1, v___x_5714_);
v___x_5716_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
v___x_5717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5717_, 0, v___x_5716_);
lean_ctor_set(v___x_5717_, 1, v___y_5705_);
v___x_5718_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4));
v___x_5719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5719_, 0, v___x_5717_);
lean_ctor_set(v___x_5719_, 1, v___x_5718_);
v___x_5720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5720_, 0, v___x_5715_);
lean_ctor_set(v___x_5720_, 1, v___x_5719_);
v___x_5721_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5721_, 0, v___x_5708_);
lean_ctor_set(v___x_5721_, 1, v___x_5720_);
v___x_5722_ = l_Lasm_JS_obj(v___x_5721_);
v___x_5723_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5723_, 0, v_url_5701_);
v___x_5724_ = lean_unsigned_to_nat(2u);
v___x_5725_ = lean_mk_empty_array_with_capacity(v___x_5724_);
v___x_5726_ = lean_array_push(v___x_5725_, v___x_5723_);
v___x_5727_ = lean_array_push(v___x_5726_, v___x_5722_);
v___x_5728_ = lean_box(0);
v___x_5729_ = lean_unsigned_to_nat(0u);
v___x_5730_ = 0;
v___x_5731_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_a_5699_, v___x_5727_, v___x_5728_);
v___x_5732_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5729_, v___x_5730_, v___x_5731_, v___f_5710_);
return v___x_5732_;
}
v___jp_5733_:
{
lean_object* v___x_5734_; 
v___x_5734_ = lean_box(0);
v___y_5705_ = v___x_5734_;
goto v___jp_5704_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object* v_req_5740_, lean_object* v_a_5741_, lean_object* v_x_5742_, lean_object* v___y_5743_){
_start:
{
lean_object* v_res_5744_; 
v_res_5744_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(v_req_5740_, v_a_5741_, v_x_5742_);
return v_res_5744_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object* v_req_5746_, lean_object* v_x_5747_){
_start:
{
if (lean_obj_tag(v_x_5747_) == 0)
{
lean_object* v_a_5749_; lean_object* v___x_5751_; uint8_t v_isShared_5752_; uint8_t v_isSharedCheck_5757_; 
lean_dec_ref(v_req_5746_);
v_a_5749_ = lean_ctor_get(v_x_5747_, 0);
v_isSharedCheck_5757_ = !lean_is_exclusive(v_x_5747_);
if (v_isSharedCheck_5757_ == 0)
{
v___x_5751_ = v_x_5747_;
v_isShared_5752_ = v_isSharedCheck_5757_;
goto v_resetjp_5750_;
}
else
{
lean_inc(v_a_5749_);
lean_dec(v_x_5747_);
v___x_5751_ = lean_box(0);
v_isShared_5752_ = v_isSharedCheck_5757_;
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
lean_object* v_reuseFailAlloc_5756_; 
v_reuseFailAlloc_5756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5756_, 0, v_a_5749_);
v___x_5754_ = v_reuseFailAlloc_5756_;
goto v_reusejp_5753_;
}
v_reusejp_5753_:
{
lean_object* v___x_5755_; 
v___x_5755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5755_, 0, v___x_5754_);
return v___x_5755_;
}
}
}
else
{
lean_object* v_a_5758_; lean_object* v___x_5760_; uint8_t v_isShared_5761_; uint8_t v_isSharedCheck_5779_; 
v_a_5758_ = lean_ctor_get(v_x_5747_, 0);
v_isSharedCheck_5779_ = !lean_is_exclusive(v_x_5747_);
if (v_isSharedCheck_5779_ == 0)
{
v___x_5760_ = v_x_5747_;
v_isShared_5761_ = v_isSharedCheck_5779_;
goto v_resetjp_5759_;
}
else
{
lean_inc(v_a_5758_);
lean_dec(v_x_5747_);
v___x_5760_ = lean_box(0);
v_isShared_5761_ = v_isSharedCheck_5779_;
goto v_resetjp_5759_;
}
v_resetjp_5759_:
{
lean_object* v___f_5762_; lean_object* v___x_5763_; lean_object* v___x_5764_; uint8_t v___x_5765_; lean_object* v_val_5767_; lean_object* v___x_5770_; 
lean_inc(v_a_5758_);
v___f_5762_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed), 4, 2);
lean_closure_set(v___f_5762_, 0, v_req_5746_);
lean_closure_set(v___f_5762_, 1, v_a_5758_);
v___x_5763_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0));
v___x_5764_ = lean_unsigned_to_nat(0u);
v___x_5765_ = 0;
v___x_5770_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5758_, v___x_5763_);
if (lean_obj_tag(v___x_5770_) == 0)
{
lean_object* v_a_5771_; lean_object* v___x_5773_; 
v_a_5771_ = lean_ctor_get(v___x_5770_, 0);
lean_inc(v_a_5771_);
lean_dec_ref_known(v___x_5770_, 1);
if (v_isShared_5761_ == 0)
{
lean_ctor_set(v___x_5760_, 0, v_a_5771_);
v___x_5773_ = v___x_5760_;
goto v_reusejp_5772_;
}
else
{
lean_object* v_reuseFailAlloc_5774_; 
v_reuseFailAlloc_5774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5774_, 0, v_a_5771_);
v___x_5773_ = v_reuseFailAlloc_5774_;
goto v_reusejp_5772_;
}
v_reusejp_5772_:
{
v_val_5767_ = v___x_5773_;
goto v___jp_5766_;
}
}
else
{
lean_object* v_a_5775_; lean_object* v___x_5777_; 
v_a_5775_ = lean_ctor_get(v___x_5770_, 0);
lean_inc(v_a_5775_);
lean_dec_ref_known(v___x_5770_, 1);
if (v_isShared_5761_ == 0)
{
lean_ctor_set_tag(v___x_5760_, 0);
lean_ctor_set(v___x_5760_, 0, v_a_5775_);
v___x_5777_ = v___x_5760_;
goto v_reusejp_5776_;
}
else
{
lean_object* v_reuseFailAlloc_5778_; 
v_reuseFailAlloc_5778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5778_, 0, v_a_5775_);
v___x_5777_ = v_reuseFailAlloc_5778_;
goto v_reusejp_5776_;
}
v_reusejp_5776_:
{
v_val_5767_ = v___x_5777_;
goto v___jp_5766_;
}
}
v___jp_5766_:
{
lean_object* v___x_5768_; lean_object* v___x_5769_; 
v___x_5768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5768_, 0, v_val_5767_);
v___x_5769_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5764_, v___x_5765_, v___x_5768_, v___f_5762_);
return v___x_5769_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object* v_req_5780_, lean_object* v_x_5781_, lean_object* v___y_5782_){
_start:
{
lean_object* v_res_5783_; 
v_res_5783_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(v_req_5780_, v_x_5781_);
return v_res_5783_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object* v_req_5784_){
_start:
{
lean_object* v___f_5786_; lean_object* v___x_5787_; uint8_t v___x_5788_; lean_object* v_val_5790_; lean_object* v___x_5793_; 
v___f_5786_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed), 3, 1);
lean_closure_set(v___f_5786_, 0, v_req_5784_);
v___x_5787_ = lean_unsigned_to_nat(0u);
v___x_5788_ = 0;
v___x_5793_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5793_) == 0)
{
lean_object* v_a_5794_; lean_object* v___x_5796_; uint8_t v_isShared_5797_; uint8_t v_isSharedCheck_5801_; 
v_a_5794_ = lean_ctor_get(v___x_5793_, 0);
v_isSharedCheck_5801_ = !lean_is_exclusive(v___x_5793_);
if (v_isSharedCheck_5801_ == 0)
{
v___x_5796_ = v___x_5793_;
v_isShared_5797_ = v_isSharedCheck_5801_;
goto v_resetjp_5795_;
}
else
{
lean_inc(v_a_5794_);
lean_dec(v___x_5793_);
v___x_5796_ = lean_box(0);
v_isShared_5797_ = v_isSharedCheck_5801_;
goto v_resetjp_5795_;
}
v_resetjp_5795_:
{
lean_object* v___x_5799_; 
if (v_isShared_5797_ == 0)
{
lean_ctor_set_tag(v___x_5796_, 1);
v___x_5799_ = v___x_5796_;
goto v_reusejp_5798_;
}
else
{
lean_object* v_reuseFailAlloc_5800_; 
v_reuseFailAlloc_5800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5800_, 0, v_a_5794_);
v___x_5799_ = v_reuseFailAlloc_5800_;
goto v_reusejp_5798_;
}
v_reusejp_5798_:
{
v_val_5790_ = v___x_5799_;
goto v___jp_5789_;
}
}
}
else
{
lean_object* v_a_5802_; lean_object* v___x_5804_; uint8_t v_isShared_5805_; uint8_t v_isSharedCheck_5809_; 
v_a_5802_ = lean_ctor_get(v___x_5793_, 0);
v_isSharedCheck_5809_ = !lean_is_exclusive(v___x_5793_);
if (v_isSharedCheck_5809_ == 0)
{
v___x_5804_ = v___x_5793_;
v_isShared_5805_ = v_isSharedCheck_5809_;
goto v_resetjp_5803_;
}
else
{
lean_inc(v_a_5802_);
lean_dec(v___x_5793_);
v___x_5804_ = lean_box(0);
v_isShared_5805_ = v_isSharedCheck_5809_;
goto v_resetjp_5803_;
}
v_resetjp_5803_:
{
lean_object* v___x_5807_; 
if (v_isShared_5805_ == 0)
{
lean_ctor_set_tag(v___x_5804_, 0);
v___x_5807_ = v___x_5804_;
goto v_reusejp_5806_;
}
else
{
lean_object* v_reuseFailAlloc_5808_; 
v_reuseFailAlloc_5808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5808_, 0, v_a_5802_);
v___x_5807_ = v_reuseFailAlloc_5808_;
goto v_reusejp_5806_;
}
v_reusejp_5806_:
{
v_val_5790_ = v___x_5807_;
goto v___jp_5789_;
}
}
}
v___jp_5789_:
{
lean_object* v___x_5791_; lean_object* v___x_5792_; 
v___x_5791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5791_, 0, v_val_5790_);
v___x_5792_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5787_, v___x_5788_, v___x_5791_, v___f_5786_);
return v___x_5792_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object* v_req_5810_, lean_object* v_a_5811_){
_start:
{
lean_object* v_res_5812_; 
v_res_5812_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_5810_);
return v_res_5812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object* v_x_5813_){
_start:
{
if (lean_obj_tag(v_x_5813_) == 0)
{
lean_object* v_a_5815_; lean_object* v___x_5817_; uint8_t v_isShared_5818_; uint8_t v_isSharedCheck_5823_; 
v_a_5815_ = lean_ctor_get(v_x_5813_, 0);
v_isSharedCheck_5823_ = !lean_is_exclusive(v_x_5813_);
if (v_isSharedCheck_5823_ == 0)
{
v___x_5817_ = v_x_5813_;
v_isShared_5818_ = v_isSharedCheck_5823_;
goto v_resetjp_5816_;
}
else
{
lean_inc(v_a_5815_);
lean_dec(v_x_5813_);
v___x_5817_ = lean_box(0);
v_isShared_5818_ = v_isSharedCheck_5823_;
goto v_resetjp_5816_;
}
v_resetjp_5816_:
{
lean_object* v___x_5820_; 
if (v_isShared_5818_ == 0)
{
v___x_5820_ = v___x_5817_;
goto v_reusejp_5819_;
}
else
{
lean_object* v_reuseFailAlloc_5822_; 
v_reuseFailAlloc_5822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5822_, 0, v_a_5815_);
v___x_5820_ = v_reuseFailAlloc_5822_;
goto v_reusejp_5819_;
}
v_reusejp_5819_:
{
lean_object* v___x_5821_; 
v___x_5821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5821_, 0, v___x_5820_);
return v___x_5821_;
}
}
}
else
{
lean_object* v_a_5824_; lean_object* v___x_5825_; 
v_a_5824_ = lean_ctor_get(v_x_5813_, 0);
lean_inc(v_a_5824_);
lean_dec_ref_known(v_x_5813_, 1);
v___x_5825_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_a_5824_);
lean_dec(v_a_5824_);
if (lean_obj_tag(v___x_5825_) == 0)
{
lean_object* v_a_5826_; lean_object* v___x_5828_; uint8_t v_isShared_5829_; uint8_t v_isSharedCheck_5835_; 
v_a_5826_ = lean_ctor_get(v___x_5825_, 0);
v_isSharedCheck_5835_ = !lean_is_exclusive(v___x_5825_);
if (v_isSharedCheck_5835_ == 0)
{
v___x_5828_ = v___x_5825_;
v_isShared_5829_ = v_isSharedCheck_5835_;
goto v_resetjp_5827_;
}
else
{
lean_inc(v_a_5826_);
lean_dec(v___x_5825_);
v___x_5828_ = lean_box(0);
v_isShared_5829_ = v_isSharedCheck_5835_;
goto v_resetjp_5827_;
}
v_resetjp_5827_:
{
lean_object* v___x_5830_; lean_object* v___x_5832_; 
v___x_5830_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5830_, 0, v_a_5826_);
if (v_isShared_5829_ == 0)
{
lean_ctor_set(v___x_5828_, 0, v___x_5830_);
v___x_5832_ = v___x_5828_;
goto v_reusejp_5831_;
}
else
{
lean_object* v_reuseFailAlloc_5834_; 
v_reuseFailAlloc_5834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5834_, 0, v___x_5830_);
v___x_5832_ = v_reuseFailAlloc_5834_;
goto v_reusejp_5831_;
}
v_reusejp_5831_:
{
lean_object* v___x_5833_; 
v___x_5833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5833_, 0, v___x_5832_);
return v___x_5833_;
}
}
}
else
{
lean_object* v_a_5836_; lean_object* v___x_5838_; uint8_t v_isShared_5839_; uint8_t v_isSharedCheck_5844_; 
v_a_5836_ = lean_ctor_get(v___x_5825_, 0);
v_isSharedCheck_5844_ = !lean_is_exclusive(v___x_5825_);
if (v_isSharedCheck_5844_ == 0)
{
v___x_5838_ = v___x_5825_;
v_isShared_5839_ = v_isSharedCheck_5844_;
goto v_resetjp_5837_;
}
else
{
lean_inc(v_a_5836_);
lean_dec(v___x_5825_);
v___x_5838_ = lean_box(0);
v_isShared_5839_ = v_isSharedCheck_5844_;
goto v_resetjp_5837_;
}
v_resetjp_5837_:
{
lean_object* v___x_5841_; 
if (v_isShared_5839_ == 0)
{
v___x_5841_ = v___x_5838_;
goto v_reusejp_5840_;
}
else
{
lean_object* v_reuseFailAlloc_5843_; 
v_reuseFailAlloc_5843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5843_, 0, v_a_5836_);
v___x_5841_ = v_reuseFailAlloc_5843_;
goto v_reusejp_5840_;
}
v_reusejp_5840_:
{
lean_object* v___x_5842_; 
v___x_5842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5842_, 0, v___x_5841_);
return v___x_5842_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object* v_x_5845_, lean_object* v___y_5846_){
_start:
{
lean_object* v_res_5847_; 
v_res_5847_ = l_Lasm_Fetch_fetch___lam__0(v_x_5845_);
return v_res_5847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object* v_x_5853_){
_start:
{
if (lean_obj_tag(v_x_5853_) == 0)
{
lean_object* v___x_5854_; 
v___x_5854_ = ((lean_object*)(l_Lasm_Fetch_fetch___lam__1___closed__2));
return v___x_5854_;
}
else
{
lean_object* v_val_5855_; 
v_val_5855_ = lean_ctor_get(v_x_5853_, 0);
lean_inc(v_val_5855_);
return v_val_5855_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object* v_x_5856_){
_start:
{
lean_object* v_res_5857_; 
v_res_5857_ = l_Lasm_Fetch_fetch___lam__1(v_x_5856_);
lean_dec(v_x_5856_);
return v_res_5857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object* v_a_5858_, lean_object* v___f_5859_, uint8_t v___x_5860_, lean_object* v___f_5861_, lean_object* v_x_5862_){
_start:
{
if (lean_obj_tag(v_x_5862_) == 0)
{
lean_object* v_a_5864_; lean_object* v___x_5866_; uint8_t v_isShared_5867_; uint8_t v_isSharedCheck_5872_; 
lean_dec_ref(v___f_5861_);
lean_dec_ref(v___f_5859_);
v_a_5864_ = lean_ctor_get(v_x_5862_, 0);
v_isSharedCheck_5872_ = !lean_is_exclusive(v_x_5862_);
if (v_isSharedCheck_5872_ == 0)
{
v___x_5866_ = v_x_5862_;
v_isShared_5867_ = v_isSharedCheck_5872_;
goto v_resetjp_5865_;
}
else
{
lean_inc(v_a_5864_);
lean_dec(v_x_5862_);
v___x_5866_ = lean_box(0);
v_isShared_5867_ = v_isSharedCheck_5872_;
goto v_resetjp_5865_;
}
v_resetjp_5865_:
{
lean_object* v___x_5869_; 
if (v_isShared_5867_ == 0)
{
v___x_5869_ = v___x_5866_;
goto v_reusejp_5868_;
}
else
{
lean_object* v_reuseFailAlloc_5871_; 
v_reuseFailAlloc_5871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5871_, 0, v_a_5864_);
v___x_5869_ = v_reuseFailAlloc_5871_;
goto v_reusejp_5868_;
}
v_reusejp_5868_:
{
lean_object* v___x_5870_; 
v___x_5870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5870_, 0, v___x_5869_);
return v___x_5870_;
}
}
}
else
{
lean_object* v___x_5873_; lean_object* v___x_5874_; uint8_t v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; 
lean_dec_ref_known(v_x_5862_, 1);
v___x_5873_ = lean_io_promise_result_opt(v_a_5858_);
v___x_5874_ = lean_unsigned_to_nat(0u);
v___x_5875_ = 1;
v___x_5876_ = lean_task_map(v___f_5859_, v___x_5873_, v___x_5874_, v___x_5875_);
v___x_5877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5877_, 0, v___x_5876_);
v___x_5878_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5874_, v___x_5860_, v___x_5877_, v___f_5861_);
return v___x_5878_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object* v_a_5879_, lean_object* v___f_5880_, lean_object* v___x_5881_, lean_object* v___f_5882_, lean_object* v_x_5883_, lean_object* v___y_5884_){
_start:
{
uint8_t v___x_1064__boxed_5885_; lean_object* v_res_5886_; 
v___x_1064__boxed_5885_ = lean_unbox(v___x_5881_);
v_res_5886_ = l_Lasm_Fetch_fetch___lam__2(v_a_5879_, v___f_5880_, v___x_1064__boxed_5885_, v___f_5882_, v_x_5883_);
lean_dec(v_a_5879_);
return v_res_5886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object* v_req_5887_, lean_object* v___f_5888_, uint8_t v___x_5889_, lean_object* v___f_5890_, lean_object* v_options_5891_, lean_object* v_x_5892_){
_start:
{
if (lean_obj_tag(v_x_5892_) == 0)
{
lean_object* v_a_5894_; lean_object* v___x_5896_; uint8_t v_isShared_5897_; uint8_t v_isSharedCheck_5902_; 
lean_dec_ref(v___f_5890_);
lean_dec_ref(v___f_5888_);
v_a_5894_ = lean_ctor_get(v_x_5892_, 0);
v_isSharedCheck_5902_ = !lean_is_exclusive(v_x_5892_);
if (v_isSharedCheck_5902_ == 0)
{
v___x_5896_ = v_x_5892_;
v_isShared_5897_ = v_isSharedCheck_5902_;
goto v_resetjp_5895_;
}
else
{
lean_inc(v_a_5894_);
lean_dec(v_x_5892_);
v___x_5896_ = lean_box(0);
v_isShared_5897_ = v_isSharedCheck_5902_;
goto v_resetjp_5895_;
}
v_resetjp_5895_:
{
lean_object* v___x_5899_; 
if (v_isShared_5897_ == 0)
{
v___x_5899_ = v___x_5896_;
goto v_reusejp_5898_;
}
else
{
lean_object* v_reuseFailAlloc_5901_; 
v_reuseFailAlloc_5901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5901_, 0, v_a_5894_);
v___x_5899_ = v_reuseFailAlloc_5901_;
goto v_reusejp_5898_;
}
v_reusejp_5898_:
{
lean_object* v___x_5900_; 
v___x_5900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5900_, 0, v___x_5899_);
return v___x_5900_;
}
}
}
else
{
lean_object* v_a_5903_; lean_object* v___x_5905_; uint8_t v_isShared_5906_; uint8_t v_isSharedCheck_5933_; 
v_a_5903_ = lean_ctor_get(v_x_5892_, 0);
v_isSharedCheck_5933_ = !lean_is_exclusive(v_x_5892_);
if (v_isSharedCheck_5933_ == 0)
{
v___x_5905_ = v_x_5892_;
v_isShared_5906_ = v_isSharedCheck_5933_;
goto v_resetjp_5904_;
}
else
{
lean_inc(v_a_5903_);
lean_dec(v_x_5892_);
v___x_5905_ = lean_box(0);
v_isShared_5906_ = v_isSharedCheck_5933_;
goto v_resetjp_5904_;
}
v_resetjp_5904_:
{
lean_object* v_method_5907_; lean_object* v_url_5908_; lean_object* v_headers_5909_; lean_object* v_body_5910_; lean_object* v___x_5911_; lean_object* v___f_5912_; uint8_t v___y_5914_; lean_object* v___y_5915_; lean_object* v_val_5916_; lean_object* v___y_5920_; 
v_method_5907_ = lean_ctor_get(v_req_5887_, 0);
v_url_5908_ = lean_ctor_get(v_req_5887_, 1);
v_headers_5909_ = lean_ctor_get(v_req_5887_, 2);
v_body_5910_ = lean_ctor_get(v_req_5887_, 3);
v___x_5911_ = lean_box(v___x_5889_);
lean_inc(v_a_5903_);
v___f_5912_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__2___boxed), 6, 4);
lean_closure_set(v___f_5912_, 0, v_a_5903_);
lean_closure_set(v___f_5912_, 1, v___f_5888_);
lean_closure_set(v___f_5912_, 2, v___x_5911_);
lean_closure_set(v___f_5912_, 3, v___f_5890_);
if (lean_obj_tag(v_options_5891_) == 0)
{
lean_object* v___x_5931_; 
v___x_5931_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_5920_ = v___x_5931_;
goto v___jp_5919_;
}
else
{
lean_object* v_val_5932_; 
v_val_5932_ = lean_ctor_get(v_options_5891_, 0);
v___y_5920_ = v_val_5932_;
goto v___jp_5919_;
}
v___jp_5913_:
{
lean_object* v___x_5917_; lean_object* v___x_5918_; 
v___x_5917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5917_, 0, v_val_5916_);
v___x_5918_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5915_, v___y_5914_, v___x_5917_, v___f_5912_);
return v___x_5918_;
}
v___jp_5919_:
{
lean_object* v___x_5921_; lean_object* v___x_5922_; 
v___x_5921_ = lean_unsigned_to_nat(0u);
v___x_5922_ = lasm_fetch_send(v_a_5903_, v_method_5907_, v_url_5908_, v_headers_5909_, v_body_5910_, v___y_5920_);
lean_dec(v_a_5903_);
if (lean_obj_tag(v___x_5922_) == 0)
{
lean_object* v_a_5923_; lean_object* v___x_5925_; 
v_a_5923_ = lean_ctor_get(v___x_5922_, 0);
lean_inc(v_a_5923_);
lean_dec_ref_known(v___x_5922_, 1);
if (v_isShared_5906_ == 0)
{
lean_ctor_set(v___x_5905_, 0, v_a_5923_);
v___x_5925_ = v___x_5905_;
goto v_reusejp_5924_;
}
else
{
lean_object* v_reuseFailAlloc_5926_; 
v_reuseFailAlloc_5926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5926_, 0, v_a_5923_);
v___x_5925_ = v_reuseFailAlloc_5926_;
goto v_reusejp_5924_;
}
v_reusejp_5924_:
{
v___y_5914_ = v___x_5889_;
v___y_5915_ = v___x_5921_;
v_val_5916_ = v___x_5925_;
goto v___jp_5913_;
}
}
else
{
lean_object* v_a_5927_; lean_object* v___x_5929_; 
v_a_5927_ = lean_ctor_get(v___x_5922_, 0);
lean_inc(v_a_5927_);
lean_dec_ref_known(v___x_5922_, 1);
if (v_isShared_5906_ == 0)
{
lean_ctor_set_tag(v___x_5905_, 0);
lean_ctor_set(v___x_5905_, 0, v_a_5927_);
v___x_5929_ = v___x_5905_;
goto v_reusejp_5928_;
}
else
{
lean_object* v_reuseFailAlloc_5930_; 
v_reuseFailAlloc_5930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5930_, 0, v_a_5927_);
v___x_5929_ = v_reuseFailAlloc_5930_;
goto v_reusejp_5928_;
}
v_reusejp_5928_:
{
v___y_5914_ = v___x_5889_;
v___y_5915_ = v___x_5921_;
v_val_5916_ = v___x_5929_;
goto v___jp_5913_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object* v_req_5934_, lean_object* v___f_5935_, lean_object* v___x_5936_, lean_object* v___f_5937_, lean_object* v_options_5938_, lean_object* v_x_5939_, lean_object* v___y_5940_){
_start:
{
uint8_t v___x_1113__boxed_5941_; lean_object* v_res_5942_; 
v___x_1113__boxed_5941_ = lean_unbox(v___x_5936_);
v_res_5942_ = l_Lasm_Fetch_fetch___lam__3(v_req_5934_, v___f_5935_, v___x_1113__boxed_5941_, v___f_5937_, v_options_5938_, v_x_5939_);
lean_dec(v_options_5938_);
lean_dec_ref(v_req_5934_);
return v_res_5942_;
}
}
static uint32_t _init_l_Lasm_Fetch_fetch___closed__0(void){
_start:
{
lean_object* v___x_5943_; uint32_t v___x_5944_; 
v___x_5943_ = lean_box(0);
v___x_5944_ = lasm_fetch_platform(v___x_5943_);
return v___x_5944_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__1(void){
_start:
{
uint32_t v___x_5945_; uint32_t v___x_5946_; uint8_t v___x_5947_; 
v___x_5945_ = 0;
v___x_5946_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5947_ = lean_uint32_dec_eq(v___x_5946_, v___x_5945_);
return v___x_5947_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__4(void){
_start:
{
uint32_t v___x_5950_; uint32_t v___x_5951_; uint8_t v___x_5952_; 
v___x_5950_ = 2;
v___x_5951_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5952_ = lean_uint32_dec_eq(v___x_5951_, v___x_5950_);
return v___x_5952_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__5(void){
_start:
{
uint32_t v___x_5953_; uint32_t v___x_5954_; uint8_t v___x_5955_; 
v___x_5953_ = 4;
v___x_5954_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5955_ = lean_uint32_dec_eq(v___x_5954_, v___x_5953_);
return v___x_5955_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__6(void){
_start:
{
uint32_t v___x_5956_; uint32_t v___x_5957_; uint8_t v___x_5958_; 
v___x_5956_ = 1;
v___x_5957_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5958_ = lean_uint32_dec_eq(v___x_5957_, v___x_5956_);
return v___x_5958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object* v_req_5973_, lean_object* v_options_5974_){
_start:
{
uint8_t v___x_5976_; 
v___x_5976_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_5976_ == 0)
{
lean_object* v___f_5977_; lean_object* v___f_5978_; lean_object* v___x_5979_; lean_object* v___f_5980_; uint8_t v___x_5987_; 
v___f_5977_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__2));
v___f_5978_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__3));
v___x_5979_ = lean_box(v___x_5976_);
v___f_5980_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__3___boxed), 7, 5);
lean_closure_set(v___f_5980_, 0, v_req_5973_);
lean_closure_set(v___f_5980_, 1, v___f_5978_);
lean_closure_set(v___f_5980_, 2, v___x_5979_);
lean_closure_set(v___f_5980_, 3, v___f_5977_);
lean_closure_set(v___f_5980_, 4, v_options_5974_);
v___x_5987_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_5987_ == 0)
{
uint8_t v___x_5988_; 
v___x_5988_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_5988_ == 0)
{
uint8_t v___x_5989_; 
lean_dec_ref(v___f_5980_);
v___x_5989_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_5989_ == 0)
{
lean_object* v___x_5990_; 
v___x_5990_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__10));
return v___x_5990_;
}
else
{
lean_object* v___x_5991_; 
v___x_5991_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__14));
return v___x_5991_;
}
}
else
{
goto v___jp_5981_;
}
}
else
{
goto v___jp_5981_;
}
v___jp_5981_:
{
lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; 
v___x_5982_ = lean_unsigned_to_nat(0u);
v___x_5983_ = lean_io_promise_new();
v___x_5984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5984_, 0, v___x_5983_);
v___x_5985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5985_, 0, v___x_5984_);
v___x_5986_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5982_, v___x_5976_, v___x_5985_, v___f_5980_);
return v___x_5986_;
}
}
else
{
lean_object* v___x_5992_; 
lean_dec(v_options_5974_);
v___x_5992_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_5973_);
return v___x_5992_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object* v_req_5993_, lean_object* v_options_5994_, lean_object* v_a_5995_){
_start:
{
lean_object* v_res_5996_; 
v_res_5996_ = l_Lasm_Fetch_fetch(v_req_5993_, v_options_5994_);
return v_res_5996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object* v_url_5997_, lean_object* v_headers_5998_, lean_object* v_options_5999_){
_start:
{
lean_object* v___x_6001_; lean_object* v___x_6002_; lean_object* v___f_6003_; lean_object* v___x_6004_; lean_object* v___x_6005_; 
v___x_6001_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__4));
v___x_6002_ = l_ByteArray_empty;
v___f_6003_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6004_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6004_, 0, v___x_6001_);
lean_ctor_set(v___x_6004_, 1, v_url_5997_);
lean_ctor_set(v___x_6004_, 2, v_headers_5998_);
lean_ctor_set(v___x_6004_, 3, v___x_6002_);
lean_ctor_set(v___x_6004_, 4, v___f_6003_);
v___x_6005_ = l_Lasm_Fetch_fetch(v___x_6004_, v_options_5999_);
return v___x_6005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object* v_url_6006_, lean_object* v_headers_6007_, lean_object* v_options_6008_, lean_object* v_a_6009_){
_start:
{
lean_object* v_res_6010_; 
v_res_6010_ = l_Lasm_Fetch_get(v_url_6006_, v_headers_6007_, v_options_6008_);
return v_res_6010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object* v_url_6012_, lean_object* v_body_6013_, lean_object* v_contentType_6014_, lean_object* v_headers_6015_, lean_object* v_options_6016_){
_start:
{
lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___f_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; 
v___x_6018_ = ((lean_object*)(l_Lasm_Fetch_post___closed__0));
v___x_6019_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_6020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6020_, 0, v___x_6019_);
lean_ctor_set(v___x_6020_, 1, v_contentType_6014_);
v___x_6021_ = lean_unsigned_to_nat(1u);
v___x_6022_ = lean_mk_empty_array_with_capacity(v___x_6021_);
v___x_6023_ = lean_array_push(v___x_6022_, v___x_6020_);
v___x_6024_ = l_Array_append___redArg(v___x_6023_, v_headers_6015_);
v___f_6025_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6026_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6026_, 0, v___x_6018_);
lean_ctor_set(v___x_6026_, 1, v_url_6012_);
lean_ctor_set(v___x_6026_, 2, v___x_6024_);
lean_ctor_set(v___x_6026_, 3, v_body_6013_);
lean_ctor_set(v___x_6026_, 4, v___f_6025_);
v___x_6027_ = l_Lasm_Fetch_fetch(v___x_6026_, v_options_6016_);
return v___x_6027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object* v_url_6028_, lean_object* v_body_6029_, lean_object* v_contentType_6030_, lean_object* v_headers_6031_, lean_object* v_options_6032_, lean_object* v_a_6033_){
_start:
{
lean_object* v_res_6034_; 
v_res_6034_ = l_Lasm_Fetch_post(v_url_6028_, v_body_6029_, v_contentType_6030_, v_headers_6031_, v_options_6032_);
lean_dec_ref(v_headers_6031_);
return v_res_6034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object* v_r_6035_){
_start:
{
lean_object* v_body_6036_; uint8_t v___x_6037_; 
v_body_6036_ = lean_ctor_get(v_r_6035_, 1);
lean_inc_ref(v_body_6036_);
lean_dec_ref(v_r_6035_);
v___x_6037_ = lean_string_validate_utf8(v_body_6036_);
if (v___x_6037_ == 0)
{
lean_object* v___x_6038_; 
lean_dec_ref(v_body_6036_);
v___x_6038_ = lean_box(0);
return v___x_6038_;
}
else
{
lean_object* v___x_6039_; lean_object* v___x_6040_; 
v___x_6039_ = lean_string_from_utf8_unchecked(v_body_6036_);
v___x_6040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6040_, 0, v___x_6039_);
return v___x_6040_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object* v_r_6041_, lean_object* v_name_6042_){
_start:
{
lean_object* v_headers_6043_; lean_object* v_n_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; size_t v_sz_6047_; size_t v___x_6048_; lean_object* v___x_6049_; lean_object* v_fst_6050_; 
v_headers_6043_ = lean_ctor_get(v_r_6041_, 0);
v_n_6044_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_6042_);
v___x_6045_ = lean_box(0);
v___x_6046_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_6047_ = lean_array_size(v_headers_6043_);
v___x_6048_ = ((size_t)0ULL);
v___x_6049_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_6044_, v_headers_6043_, v_sz_6047_, v___x_6048_, v___x_6046_);
lean_dec_ref(v_n_6044_);
v_fst_6050_ = lean_ctor_get(v___x_6049_, 0);
lean_inc(v_fst_6050_);
lean_dec_ref(v___x_6049_);
if (lean_obj_tag(v_fst_6050_) == 0)
{
return v___x_6045_;
}
else
{
lean_object* v_val_6051_; 
v_val_6051_ = lean_ctor_get(v_fst_6050_, 0);
lean_inc(v_val_6051_);
lean_dec_ref_known(v_fst_6050_, 1);
if (lean_obj_tag(v_val_6051_) == 0)
{
return v___x_6045_;
}
else
{
lean_object* v_val_6052_; lean_object* v___x_6054_; uint8_t v_isShared_6055_; uint8_t v_isSharedCheck_6060_; 
v_val_6052_ = lean_ctor_get(v_val_6051_, 0);
v_isSharedCheck_6060_ = !lean_is_exclusive(v_val_6051_);
if (v_isSharedCheck_6060_ == 0)
{
v___x_6054_ = v_val_6051_;
v_isShared_6055_ = v_isSharedCheck_6060_;
goto v_resetjp_6053_;
}
else
{
lean_inc(v_val_6052_);
lean_dec(v_val_6051_);
v___x_6054_ = lean_box(0);
v_isShared_6055_ = v_isSharedCheck_6060_;
goto v_resetjp_6053_;
}
v_resetjp_6053_:
{
lean_object* v_snd_6056_; lean_object* v___x_6058_; 
v_snd_6056_ = lean_ctor_get(v_val_6052_, 1);
lean_inc(v_snd_6056_);
lean_dec(v_val_6052_);
if (v_isShared_6055_ == 0)
{
lean_ctor_set(v___x_6054_, 0, v_snd_6056_);
v___x_6058_ = v___x_6054_;
goto v_reusejp_6057_;
}
else
{
lean_object* v_reuseFailAlloc_6059_; 
v_reuseFailAlloc_6059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6059_, 0, v_snd_6056_);
v___x_6058_ = v_reuseFailAlloc_6059_;
goto v_reusejp_6057_;
}
v_reusejp_6057_:
{
return v___x_6058_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object* v_r_6061_, lean_object* v_name_6062_){
_start:
{
lean_object* v_res_6063_; 
v_res_6063_ = l_Lasm_Fetch_Response_header_x3f(v_r_6061_, v_name_6062_);
lean_dec_ref(v_r_6061_);
return v_res_6063_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object* v_x_6064_){
_start:
{
if (lean_obj_tag(v_x_6064_) == 0)
{
lean_object* v_a_6065_; lean_object* v___x_6066_; 
v_a_6065_ = lean_ctor_get(v_x_6064_, 0);
lean_inc(v_a_6065_);
lean_dec_ref_known(v_x_6064_, 1);
v___x_6066_ = lean_task_pure(v_a_6065_);
return v___x_6066_;
}
else
{
lean_object* v_a_6067_; 
v_a_6067_ = lean_ctor_get(v_x_6064_, 0);
lean_inc_ref(v_a_6067_);
lean_dec_ref_known(v_x_6064_, 1);
return v_a_6067_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object* v_x_6068_){
_start:
{
if (lean_obj_tag(v_x_6068_) == 0)
{
lean_object* v_a_6069_; lean_object* v___x_6070_; 
v_a_6069_ = lean_ctor_get(v_x_6068_, 0);
lean_inc(v_a_6069_);
lean_dec_ref_known(v_x_6068_, 1);
v___x_6070_ = lean_task_pure(v_a_6069_);
return v___x_6070_;
}
else
{
lean_object* v_a_6071_; 
v_a_6071_ = lean_ctor_get(v_x_6068_, 0);
lean_inc_ref(v_a_6071_);
lean_dec_ref_known(v_x_6068_, 1);
return v_a_6071_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object* v_chunk_6072_){
_start:
{
lean_object* v_val_6075_; lean_object* v___x_6077_; 
v___x_6077_ = lasm_fetch_write(v_chunk_6072_);
if (lean_obj_tag(v___x_6077_) == 0)
{
lean_object* v_a_6078_; lean_object* v___x_6080_; uint8_t v_isShared_6081_; uint8_t v_isSharedCheck_6085_; 
v_a_6078_ = lean_ctor_get(v___x_6077_, 0);
v_isSharedCheck_6085_ = !lean_is_exclusive(v___x_6077_);
if (v_isSharedCheck_6085_ == 0)
{
v___x_6080_ = v___x_6077_;
v_isShared_6081_ = v_isSharedCheck_6085_;
goto v_resetjp_6079_;
}
else
{
lean_inc(v_a_6078_);
lean_dec(v___x_6077_);
v___x_6080_ = lean_box(0);
v_isShared_6081_ = v_isSharedCheck_6085_;
goto v_resetjp_6079_;
}
v_resetjp_6079_:
{
lean_object* v___x_6083_; 
if (v_isShared_6081_ == 0)
{
lean_ctor_set_tag(v___x_6080_, 1);
v___x_6083_ = v___x_6080_;
goto v_reusejp_6082_;
}
else
{
lean_object* v_reuseFailAlloc_6084_; 
v_reuseFailAlloc_6084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6084_, 0, v_a_6078_);
v___x_6083_ = v_reuseFailAlloc_6084_;
goto v_reusejp_6082_;
}
v_reusejp_6082_:
{
v_val_6075_ = v___x_6083_;
goto v___jp_6074_;
}
}
}
else
{
lean_object* v_a_6086_; lean_object* v___x_6088_; uint8_t v_isShared_6089_; uint8_t v_isSharedCheck_6093_; 
v_a_6086_ = lean_ctor_get(v___x_6077_, 0);
v_isSharedCheck_6093_ = !lean_is_exclusive(v___x_6077_);
if (v_isSharedCheck_6093_ == 0)
{
v___x_6088_ = v___x_6077_;
v_isShared_6089_ = v_isSharedCheck_6093_;
goto v_resetjp_6087_;
}
else
{
lean_inc(v_a_6086_);
lean_dec(v___x_6077_);
v___x_6088_ = lean_box(0);
v_isShared_6089_ = v_isSharedCheck_6093_;
goto v_resetjp_6087_;
}
v_resetjp_6087_:
{
lean_object* v___x_6091_; 
if (v_isShared_6089_ == 0)
{
lean_ctor_set_tag(v___x_6088_, 0);
v___x_6091_ = v___x_6088_;
goto v_reusejp_6090_;
}
else
{
lean_object* v_reuseFailAlloc_6092_; 
v_reuseFailAlloc_6092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6092_, 0, v_a_6086_);
v___x_6091_ = v_reuseFailAlloc_6092_;
goto v_reusejp_6090_;
}
v_reusejp_6090_:
{
v_val_6075_ = v___x_6091_;
goto v___jp_6074_;
}
}
}
v___jp_6074_:
{
lean_object* v___x_6076_; 
v___x_6076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6076_, 0, v_val_6075_);
return v___x_6076_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object* v_chunk_6094_, lean_object* v___y_6095_){
_start:
{
lean_object* v_res_6096_; 
v_res_6096_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(v_chunk_6094_);
lean_dec_ref(v_chunk_6094_);
return v_res_6096_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object* v_x_6097_){
_start:
{
if (lean_obj_tag(v_x_6097_) == 0)
{
lean_object* v_a_6098_; lean_object* v___x_6099_; 
v_a_6098_ = lean_ctor_get(v_x_6097_, 0);
lean_inc(v_a_6098_);
lean_dec_ref_known(v_x_6097_, 1);
v___x_6099_ = lean_task_pure(v_a_6098_);
return v___x_6099_;
}
else
{
lean_object* v_a_6100_; 
v_a_6100_ = lean_ctor_get(v_x_6097_, 0);
lean_inc_ref(v_a_6100_);
lean_dec_ref_known(v_x_6097_, 1);
return v_a_6100_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object* v_x_6101_){
_start:
{
lean_object* v___y_6104_; 
if (lean_obj_tag(v_x_6101_) == 0)
{
lean_object* v_a_6107_; lean_object* v___x_6109_; uint8_t v_isShared_6110_; uint8_t v_isSharedCheck_6115_; 
v_a_6107_ = lean_ctor_get(v_x_6101_, 0);
v_isSharedCheck_6115_ = !lean_is_exclusive(v_x_6101_);
if (v_isSharedCheck_6115_ == 0)
{
v___x_6109_ = v_x_6101_;
v_isShared_6110_ = v_isSharedCheck_6115_;
goto v_resetjp_6108_;
}
else
{
lean_inc(v_a_6107_);
lean_dec(v_x_6101_);
v___x_6109_ = lean_box(0);
v_isShared_6110_ = v_isSharedCheck_6115_;
goto v_resetjp_6108_;
}
v_resetjp_6108_:
{
lean_object* v___x_6112_; 
if (v_isShared_6110_ == 0)
{
v___x_6112_ = v___x_6109_;
goto v_reusejp_6111_;
}
else
{
lean_object* v_reuseFailAlloc_6114_; 
v_reuseFailAlloc_6114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6114_, 0, v_a_6107_);
v___x_6112_ = v_reuseFailAlloc_6114_;
goto v_reusejp_6111_;
}
v_reusejp_6111_:
{
lean_object* v___x_6113_; 
v___x_6113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6113_, 0, v___x_6112_);
return v___x_6113_;
}
}
}
else
{
lean_object* v_a_6116_; uint8_t v___x_6117_; 
v_a_6116_ = lean_ctor_get(v_x_6101_, 0);
lean_inc(v_a_6116_);
lean_dec_ref_known(v_x_6101_, 1);
v___x_6117_ = l_ByteArray_isEmpty(v_a_6116_);
if (v___x_6117_ == 0)
{
lean_object* v___x_6118_; 
v___x_6118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6118_, 0, v_a_6116_);
v___y_6104_ = v___x_6118_;
goto v___jp_6103_;
}
else
{
lean_object* v___x_6119_; 
lean_dec(v_a_6116_);
v___x_6119_ = lean_box(0);
v___y_6104_ = v___x_6119_;
goto v___jp_6103_;
}
}
v___jp_6103_:
{
lean_object* v___x_6105_; lean_object* v___x_6106_; 
v___x_6105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6105_, 0, v___y_6104_);
v___x_6106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6106_, 0, v___x_6105_);
return v___x_6106_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object* v_x_6120_, lean_object* v___y_6121_){
_start:
{
lean_object* v_res_6122_; 
v_res_6122_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(v_x_6120_);
return v_res_6122_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object* v___f_6123_, uint32_t v___x_6124_){
_start:
{
lean_object* v___x_6126_; uint8_t v___x_6127_; lean_object* v_val_6129_; lean_object* v___x_6132_; 
v___x_6126_ = lean_unsigned_to_nat(0u);
v___x_6127_ = 0;
v___x_6132_ = lasm_fetch_read(v___x_6124_);
if (lean_obj_tag(v___x_6132_) == 0)
{
lean_object* v_a_6133_; lean_object* v___x_6135_; uint8_t v_isShared_6136_; uint8_t v_isSharedCheck_6140_; 
v_a_6133_ = lean_ctor_get(v___x_6132_, 0);
v_isSharedCheck_6140_ = !lean_is_exclusive(v___x_6132_);
if (v_isSharedCheck_6140_ == 0)
{
v___x_6135_ = v___x_6132_;
v_isShared_6136_ = v_isSharedCheck_6140_;
goto v_resetjp_6134_;
}
else
{
lean_inc(v_a_6133_);
lean_dec(v___x_6132_);
v___x_6135_ = lean_box(0);
v_isShared_6136_ = v_isSharedCheck_6140_;
goto v_resetjp_6134_;
}
v_resetjp_6134_:
{
lean_object* v___x_6138_; 
if (v_isShared_6136_ == 0)
{
lean_ctor_set_tag(v___x_6135_, 1);
v___x_6138_ = v___x_6135_;
goto v_reusejp_6137_;
}
else
{
lean_object* v_reuseFailAlloc_6139_; 
v_reuseFailAlloc_6139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6139_, 0, v_a_6133_);
v___x_6138_ = v_reuseFailAlloc_6139_;
goto v_reusejp_6137_;
}
v_reusejp_6137_:
{
v_val_6129_ = v___x_6138_;
goto v___jp_6128_;
}
}
}
else
{
lean_object* v_a_6141_; lean_object* v___x_6143_; uint8_t v_isShared_6144_; uint8_t v_isSharedCheck_6148_; 
v_a_6141_ = lean_ctor_get(v___x_6132_, 0);
v_isSharedCheck_6148_ = !lean_is_exclusive(v___x_6132_);
if (v_isSharedCheck_6148_ == 0)
{
v___x_6143_ = v___x_6132_;
v_isShared_6144_ = v_isSharedCheck_6148_;
goto v_resetjp_6142_;
}
else
{
lean_inc(v_a_6141_);
lean_dec(v___x_6132_);
v___x_6143_ = lean_box(0);
v_isShared_6144_ = v_isSharedCheck_6148_;
goto v_resetjp_6142_;
}
v_resetjp_6142_:
{
lean_object* v___x_6146_; 
if (v_isShared_6144_ == 0)
{
lean_ctor_set_tag(v___x_6143_, 0);
v___x_6146_ = v___x_6143_;
goto v_reusejp_6145_;
}
else
{
lean_object* v_reuseFailAlloc_6147_; 
v_reuseFailAlloc_6147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6147_, 0, v_a_6141_);
v___x_6146_ = v_reuseFailAlloc_6147_;
goto v_reusejp_6145_;
}
v_reusejp_6145_:
{
v_val_6129_ = v___x_6146_;
goto v___jp_6128_;
}
}
}
v___jp_6128_:
{
lean_object* v___x_6130_; lean_object* v___x_6131_; 
v___x_6130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6130_, 0, v_val_6129_);
v___x_6131_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6126_, v___x_6127_, v___x_6130_, v___f_6123_);
return v___x_6131_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object* v___f_6149_, lean_object* v___x_6150_, lean_object* v___y_6151_){
_start:
{
uint32_t v___x_2044__boxed_6152_; lean_object* v_res_6153_; 
v___x_2044__boxed_6152_ = lean_unbox_uint32(v___x_6150_);
lean_dec(v___x_6150_);
v_res_6153_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(v___f_6149_, v___x_2044__boxed_6152_);
return v_res_6153_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object* v_handler_6154_, lean_object* v_req_6155_){
_start:
{
lean_object* v___x_6157_; 
v___x_6157_ = l_Lasm_Fetch_respond(v_handler_6154_, v_req_6155_);
return v___x_6157_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object* v_handler_6158_, lean_object* v_req_6159_, lean_object* v___y_6160_){
_start:
{
lean_object* v_res_6161_; 
v_res_6161_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(v_handler_6158_, v_req_6159_);
return v_res_6161_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object* v_val_6162_, lean_object* v___f_6163_){
_start:
{
lean_object* v___x_6165_; 
v___x_6165_ = lean_apply_2(v_val_6162_, v___f_6163_, lean_box(0));
return v___x_6165_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object* v_val_6166_, lean_object* v___f_6167_, lean_object* v___y_6168_){
_start:
{
lean_object* v_res_6169_; 
v_res_6169_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(v_val_6166_, v___f_6167_);
return v_res_6169_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object* v___x_6170_){
_start:
{
lean_object* v___x_6172_; 
v___x_6172_ = l_Lasm_Fetch_Request_readAll(v___x_6170_);
return v___x_6172_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object* v___x_6173_, lean_object* v___y_6174_){
_start:
{
lean_object* v_res_6175_; 
v_res_6175_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(v___x_6173_);
return v_res_6175_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_6181_; lean_object* v___x_6182_; 
v___x_6181_ = 65536;
v___x_6182_ = lean_box_uint32(v___x_6181_);
return v___x_6182_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5(void){
_start:
{
lean_object* v___f_6183_; lean_object* v___x_6184_; lean_object* v___f_6185_; 
v___f_6183_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4));
v___x_6184_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
v___f_6185_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed), 3, 2);
lean_closure_set(v___f_6185_, 0, v___f_6183_);
lean_closure_set(v___f_6185_, 1, v___x_6184_);
return v___f_6185_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object* v_handler_6186_, lean_object* v_options_6187_){
_start:
{
lean_object* v___f_6189_; lean_object* v___f_6190_; lean_object* v___f_6191_; lean_object* v___f_6192_; lean_object* v___x_6193_; 
v___f_6189_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0));
v___f_6190_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1));
v___f_6191_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2));
v___f_6192_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3));
v___x_6193_ = lasm_fetch_take_request_head();
if (lean_obj_tag(v___x_6193_) == 0)
{
lean_object* v_a_6194_; lean_object* v___x_6196_; uint8_t v_isShared_6197_; uint8_t v_isSharedCheck_6264_; 
v_a_6194_ = lean_ctor_get(v___x_6193_, 0);
v_isSharedCheck_6264_ = !lean_is_exclusive(v___x_6193_);
if (v_isSharedCheck_6264_ == 0)
{
v___x_6196_ = v___x_6193_;
v_isShared_6197_ = v_isSharedCheck_6264_;
goto v_resetjp_6195_;
}
else
{
lean_inc(v_a_6194_);
lean_dec(v___x_6193_);
v___x_6196_ = lean_box(0);
v_isShared_6197_ = v_isSharedCheck_6264_;
goto v_resetjp_6195_;
}
v_resetjp_6195_:
{
lean_object* v_snd_6198_; lean_object* v_fst_6199_; lean_object* v_fst_6200_; lean_object* v_snd_6201_; lean_object* v___f_6202_; lean_object* v___x_6203_; lean_object* v_req_6205_; lean_object* v___x_6243_; lean_object* v___x_6244_; lean_object* v___x_6245_; uint8_t v___x_6246_; 
v_snd_6198_ = lean_ctor_get(v_a_6194_, 1);
lean_inc(v_snd_6198_);
v_fst_6199_ = lean_ctor_get(v_a_6194_, 0);
lean_inc_n(v_fst_6199_, 2);
lean_dec(v_a_6194_);
v_fst_6200_ = lean_ctor_get(v_snd_6198_, 0);
lean_inc_n(v_fst_6200_, 2);
v_snd_6201_ = lean_ctor_get(v_snd_6198_, 1);
lean_inc_n(v_snd_6201_, 2);
lean_dec(v_snd_6198_);
v___f_6202_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5, &l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5);
v___x_6203_ = l_ByteArray_empty;
v___x_6243_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6243_, 0, v_fst_6199_);
lean_ctor_set(v___x_6243_, 1, v_fst_6200_);
lean_ctor_set(v___x_6243_, 2, v_snd_6201_);
lean_ctor_set(v___x_6243_, 3, v___x_6203_);
lean_ctor_set(v___x_6243_, 4, v___f_6202_);
lean_inc_ref(v___x_6243_);
v___x_6244_ = l_Lasm_Fetch_Request_path(v___x_6243_);
v___x_6245_ = lean_apply_1(v_options_6187_, v___x_6244_);
v___x_6246_ = lean_unbox(v___x_6245_);
if (v___x_6246_ == 0)
{
lean_object* v___f_6247_; lean_object* v___x_6248_; lean_object* v___x_6249_; uint8_t v___x_6250_; lean_object* v___x_6251_; lean_object* v___x_6252_; 
v___f_6247_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed), 2, 1);
lean_closure_set(v___f_6247_, 0, v___x_6243_);
v___x_6248_ = lean_unsigned_to_nat(0u);
v___x_6249_ = lean_io_as_task(v___f_6247_, v___x_6248_);
v___x_6250_ = 1;
v___x_6251_ = lean_task_bind(v___x_6249_, v___f_6189_, v___x_6248_, v___x_6250_);
v___x_6252_ = lean_task_get_own(v___x_6251_);
if (lean_obj_tag(v___x_6252_) == 0)
{
lean_object* v_a_6253_; lean_object* v___x_6255_; uint8_t v_isShared_6256_; uint8_t v_isSharedCheck_6260_; 
lean_dec(v_snd_6201_);
lean_dec(v_fst_6200_);
lean_dec(v_fst_6199_);
lean_del_object(v___x_6196_);
lean_dec_ref(v_handler_6186_);
v_a_6253_ = lean_ctor_get(v___x_6252_, 0);
v_isSharedCheck_6260_ = !lean_is_exclusive(v___x_6252_);
if (v_isSharedCheck_6260_ == 0)
{
v___x_6255_ = v___x_6252_;
v_isShared_6256_ = v_isSharedCheck_6260_;
goto v_resetjp_6254_;
}
else
{
lean_inc(v_a_6253_);
lean_dec(v___x_6252_);
v___x_6255_ = lean_box(0);
v_isShared_6256_ = v_isSharedCheck_6260_;
goto v_resetjp_6254_;
}
v_resetjp_6254_:
{
lean_object* v___x_6258_; 
if (v_isShared_6256_ == 0)
{
lean_ctor_set_tag(v___x_6255_, 1);
v___x_6258_ = v___x_6255_;
goto v_reusejp_6257_;
}
else
{
lean_object* v_reuseFailAlloc_6259_; 
v_reuseFailAlloc_6259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6259_, 0, v_a_6253_);
v___x_6258_ = v_reuseFailAlloc_6259_;
goto v_reusejp_6257_;
}
v_reusejp_6257_:
{
return v___x_6258_;
}
}
}
else
{
lean_object* v_a_6261_; lean_object* v___f_6262_; lean_object* v___x_6263_; 
v_a_6261_ = lean_ctor_get(v___x_6252_, 0);
lean_inc(v_a_6261_);
lean_dec_ref_known(v___x_6252_, 1);
v___f_6262_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6263_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6263_, 0, v_fst_6199_);
lean_ctor_set(v___x_6263_, 1, v_fst_6200_);
lean_ctor_set(v___x_6263_, 2, v_snd_6201_);
lean_ctor_set(v___x_6263_, 3, v_a_6261_);
lean_ctor_set(v___x_6263_, 4, v___f_6262_);
v_req_6205_ = v___x_6263_;
goto v___jp_6204_;
}
}
else
{
lean_dec(v_snd_6201_);
lean_dec(v_fst_6200_);
lean_dec(v_fst_6199_);
v_req_6205_ = v___x_6243_;
goto v___jp_6204_;
}
v___jp_6204_:
{
lean_object* v___f_6206_; lean_object* v___x_6207_; lean_object* v___x_6208_; uint8_t v___x_6209_; lean_object* v___x_6210_; lean_object* v___x_6211_; 
lean_inc_ref(v_req_6205_);
v___f_6206_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed), 3, 2);
lean_closure_set(v___f_6206_, 0, v_handler_6186_);
lean_closure_set(v___f_6206_, 1, v_req_6205_);
v___x_6207_ = lean_unsigned_to_nat(0u);
v___x_6208_ = lean_io_as_task(v___f_6206_, v___x_6207_);
v___x_6209_ = 1;
v___x_6210_ = lean_task_bind(v___x_6208_, v___f_6192_, v___x_6207_, v___x_6209_);
v___x_6211_ = lean_task_get_own(v___x_6210_);
if (lean_obj_tag(v___x_6211_) == 0)
{
lean_object* v_a_6212_; lean_object* v___x_6214_; 
lean_dec_ref(v_req_6205_);
v_a_6212_ = lean_ctor_get(v___x_6211_, 0);
lean_inc(v_a_6212_);
lean_dec_ref_known(v___x_6211_, 1);
if (v_isShared_6197_ == 0)
{
lean_ctor_set_tag(v___x_6196_, 1);
lean_ctor_set(v___x_6196_, 0, v_a_6212_);
v___x_6214_ = v___x_6196_;
goto v_reusejp_6213_;
}
else
{
lean_object* v_reuseFailAlloc_6215_; 
v_reuseFailAlloc_6215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6215_, 0, v_a_6212_);
v___x_6214_ = v_reuseFailAlloc_6215_;
goto v_reusejp_6213_;
}
v_reusejp_6213_:
{
return v___x_6214_;
}
}
else
{
lean_object* v_a_6216_; lean_object* v_stream_6217_; 
lean_del_object(v___x_6196_);
v_a_6216_ = lean_ctor_get(v___x_6211_, 0);
lean_inc(v_a_6216_);
lean_dec_ref_known(v___x_6211_, 1);
v_stream_6217_ = lean_ctor_get(v_a_6216_, 2);
if (lean_obj_tag(v_stream_6217_) == 0)
{
uint16_t v_status_6218_; lean_object* v_headers_6219_; lean_object* v_body_6220_; lean_object* v_method_6221_; uint8_t v___x_6222_; 
v_status_6218_ = lean_ctor_get_uint16(v_a_6216_, sizeof(void*)*3);
v_headers_6219_ = lean_ctor_get(v_a_6216_, 0);
lean_inc_ref(v_headers_6219_);
v_body_6220_ = lean_ctor_get(v_a_6216_, 1);
lean_inc_ref(v_body_6220_);
lean_dec(v_a_6216_);
v_method_6221_ = lean_ctor_get(v_req_6205_, 0);
lean_inc_ref(v_method_6221_);
lean_dec_ref(v_req_6205_);
v___x_6222_ = l_Lasm_Fetch_bodyless(v_method_6221_, v_status_6218_);
lean_dec_ref(v_method_6221_);
if (v___x_6222_ == 0)
{
lean_object* v___x_6223_; 
v___x_6223_ = lasm_fetch_send_response(v_status_6218_, v_headers_6219_, v_body_6220_);
lean_dec_ref(v_body_6220_);
lean_dec_ref(v_headers_6219_);
return v___x_6223_;
}
else
{
lean_object* v___x_6224_; 
lean_dec_ref(v_body_6220_);
v___x_6224_ = lasm_fetch_send_response(v_status_6218_, v_headers_6219_, v___x_6203_);
lean_dec_ref(v_headers_6219_);
return v___x_6224_;
}
}
else
{
uint16_t v_status_6225_; lean_object* v_headers_6226_; lean_object* v_val_6227_; lean_object* v___f_6228_; lean_object* v___x_6229_; 
lean_inc_ref(v_stream_6217_);
v_status_6225_ = lean_ctor_get_uint16(v_a_6216_, sizeof(void*)*3);
v_headers_6226_ = lean_ctor_get(v_a_6216_, 0);
lean_inc_ref(v_headers_6226_);
lean_dec(v_a_6216_);
v_val_6227_ = lean_ctor_get(v_stream_6217_, 0);
lean_inc(v_val_6227_);
lean_dec_ref_known(v_stream_6217_, 1);
v___f_6228_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed), 3, 2);
lean_closure_set(v___f_6228_, 0, v_val_6227_);
lean_closure_set(v___f_6228_, 1, v___f_6191_);
v___x_6229_ = lasm_fetch_start_response(v_status_6225_, v_headers_6226_);
lean_dec_ref(v_headers_6226_);
if (lean_obj_tag(v___x_6229_) == 0)
{
lean_object* v_method_6230_; uint8_t v___x_6231_; 
lean_dec_ref_known(v___x_6229_, 1);
v_method_6230_ = lean_ctor_get(v_req_6205_, 0);
lean_inc_ref(v_method_6230_);
lean_dec_ref(v_req_6205_);
v___x_6231_ = l_Lasm_Fetch_bodyless(v_method_6230_, v_status_6225_);
lean_dec_ref(v_method_6230_);
if (v___x_6231_ == 0)
{
lean_object* v___x_6232_; lean_object* v___x_6233_; lean_object* v___x_6234_; 
v___x_6232_ = lean_io_as_task(v___f_6228_, v___x_6207_);
v___x_6233_ = lean_task_bind(v___x_6232_, v___f_6190_, v___x_6207_, v___x_6209_);
v___x_6234_ = lean_task_get_own(v___x_6233_);
if (lean_obj_tag(v___x_6234_) == 0)
{
lean_object* v_a_6235_; lean_object* v___x_6236_; lean_object* v___x_6237_; lean_object* v___x_6238_; lean_object* v___x_6239_; 
v_a_6235_ = lean_ctor_get(v___x_6234_, 0);
lean_inc(v_a_6235_);
lean_dec_ref_known(v___x_6234_, 1);
v___x_6236_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_6237_ = lean_io_error_to_string(v_a_6235_);
v___x_6238_ = lean_string_append(v___x_6236_, v___x_6237_);
lean_dec_ref(v___x_6237_);
v___x_6239_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_6238_);
if (lean_obj_tag(v___x_6239_) == 0)
{
lean_object* v___x_6240_; 
lean_dec_ref_known(v___x_6239_, 1);
v___x_6240_ = lasm_fetch_finish(v___x_6231_);
return v___x_6240_;
}
else
{
return v___x_6239_;
}
}
else
{
lean_object* v___x_6241_; 
lean_dec_ref_known(v___x_6234_, 1);
v___x_6241_ = lasm_fetch_finish(v___x_6209_);
return v___x_6241_;
}
}
else
{
lean_object* v___x_6242_; 
lean_dec_ref(v___f_6228_);
v___x_6242_ = lasm_fetch_finish(v___x_6209_);
return v___x_6242_;
}
}
else
{
lean_dec_ref(v___f_6228_);
lean_dec_ref(v_req_6205_);
return v___x_6229_;
}
}
}
}
}
}
else
{
lean_object* v_a_6265_; lean_object* v___x_6267_; uint8_t v_isShared_6268_; uint8_t v_isSharedCheck_6272_; 
lean_dec_ref(v_options_6187_);
lean_dec_ref(v_handler_6186_);
v_a_6265_ = lean_ctor_get(v___x_6193_, 0);
v_isSharedCheck_6272_ = !lean_is_exclusive(v___x_6193_);
if (v_isSharedCheck_6272_ == 0)
{
v___x_6267_ = v___x_6193_;
v_isShared_6268_ = v_isSharedCheck_6272_;
goto v_resetjp_6266_;
}
else
{
lean_inc(v_a_6265_);
lean_dec(v___x_6193_);
v___x_6267_ = lean_box(0);
v_isShared_6268_ = v_isSharedCheck_6272_;
goto v_resetjp_6266_;
}
v_resetjp_6266_:
{
lean_object* v___x_6270_; 
if (v_isShared_6268_ == 0)
{
v___x_6270_ = v___x_6267_;
goto v_reusejp_6269_;
}
else
{
lean_object* v_reuseFailAlloc_6271_; 
v_reuseFailAlloc_6271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6271_, 0, v_a_6265_);
v___x_6270_ = v_reuseFailAlloc_6271_;
goto v_reusejp_6269_;
}
v_reusejp_6269_:
{
return v___x_6270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object* v_handler_6273_, lean_object* v_options_6274_, lean_object* v_a_6275_){
_start:
{
lean_object* v_res_6276_; 
v_res_6276_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6273_, v_options_6274_);
return v_res_6276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object* v_options_6280_, lean_object* v_handler_6281_){
_start:
{
uint8_t v___x_6283_; 
v___x_6283_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6283_ == 0)
{
uint8_t v___x_6284_; 
v___x_6284_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6284_ == 0)
{
uint8_t v___x_6285_; 
v___x_6285_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6285_ == 0)
{
uint8_t v___x_6286_; 
v___x_6286_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6286_ == 0)
{
lean_object* v___x_6287_; lean_object* v___x_6288_; 
lean_dec_ref(v_handler_6281_);
lean_dec_ref(v_options_6280_);
v___x_6287_ = ((lean_object*)(l_Lasm_Fetch_serveWith___closed__1));
v___x_6288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6288_, 0, v___x_6287_);
return v___x_6288_;
}
else
{
lean_object* v___x_6289_; 
v___x_6289_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6289_) == 0)
{
lean_object* v_a_6290_; uint8_t v___x_6291_; 
v_a_6290_ = lean_ctor_get(v___x_6289_, 0);
lean_inc(v_a_6290_);
lean_dec_ref_known(v___x_6289_, 1);
v___x_6291_ = lean_unbox(v_a_6290_);
lean_dec(v_a_6290_);
if (v___x_6291_ == 0)
{
lean_object* v___x_6292_; 
v___x_6292_ = l_Lasm_Fetch_serveNode(v_handler_6281_, v_options_6280_);
return v___x_6292_;
}
else
{
lean_object* v___x_6293_; 
v___x_6293_ = l_Lasm_Fetch_jsFetchHandler(v_handler_6281_, v_options_6280_);
if (lean_obj_tag(v___x_6293_) == 0)
{
lean_object* v_a_6294_; lean_object* v___x_6295_; 
v_a_6294_ = lean_ctor_get(v___x_6293_, 0);
lean_inc(v_a_6294_);
lean_dec_ref_known(v___x_6293_, 1);
v___x_6295_ = l_Lasm_JS_exportDefault(v_a_6294_);
return v___x_6295_;
}
else
{
lean_object* v_a_6296_; lean_object* v___x_6298_; uint8_t v_isShared_6299_; uint8_t v_isSharedCheck_6303_; 
v_a_6296_ = lean_ctor_get(v___x_6293_, 0);
v_isSharedCheck_6303_ = !lean_is_exclusive(v___x_6293_);
if (v_isSharedCheck_6303_ == 0)
{
v___x_6298_ = v___x_6293_;
v_isShared_6299_ = v_isSharedCheck_6303_;
goto v_resetjp_6297_;
}
else
{
lean_inc(v_a_6296_);
lean_dec(v___x_6293_);
v___x_6298_ = lean_box(0);
v_isShared_6299_ = v_isSharedCheck_6303_;
goto v_resetjp_6297_;
}
v_resetjp_6297_:
{
lean_object* v___x_6301_; 
if (v_isShared_6299_ == 0)
{
v___x_6301_ = v___x_6298_;
goto v_reusejp_6300_;
}
else
{
lean_object* v_reuseFailAlloc_6302_; 
v_reuseFailAlloc_6302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6302_, 0, v_a_6296_);
v___x_6301_ = v_reuseFailAlloc_6302_;
goto v_reusejp_6300_;
}
v_reusejp_6300_:
{
return v___x_6301_;
}
}
}
}
}
else
{
lean_object* v_a_6304_; lean_object* v___x_6306_; uint8_t v_isShared_6307_; uint8_t v_isSharedCheck_6311_; 
lean_dec_ref(v_handler_6281_);
lean_dec_ref(v_options_6280_);
v_a_6304_ = lean_ctor_get(v___x_6289_, 0);
v_isSharedCheck_6311_ = !lean_is_exclusive(v___x_6289_);
if (v_isSharedCheck_6311_ == 0)
{
v___x_6306_ = v___x_6289_;
v_isShared_6307_ = v_isSharedCheck_6311_;
goto v_resetjp_6305_;
}
else
{
lean_inc(v_a_6304_);
lean_dec(v___x_6289_);
v___x_6306_ = lean_box(0);
v_isShared_6307_ = v_isSharedCheck_6311_;
goto v_resetjp_6305_;
}
v_resetjp_6305_:
{
lean_object* v___x_6309_; 
if (v_isShared_6307_ == 0)
{
v___x_6309_ = v___x_6306_;
goto v_reusejp_6308_;
}
else
{
lean_object* v_reuseFailAlloc_6310_; 
v_reuseFailAlloc_6310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6310_, 0, v_a_6304_);
v___x_6309_ = v_reuseFailAlloc_6310_;
goto v_reusejp_6308_;
}
v_reusejp_6308_:
{
return v___x_6309_;
}
}
}
}
}
else
{
lean_object* v___x_6312_; 
v___x_6312_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6281_, v_options_6280_);
return v___x_6312_;
}
}
else
{
lean_object* v___x_6313_; 
v___x_6313_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6281_, v_options_6280_);
return v___x_6313_;
}
}
else
{
lean_object* v___x_6314_; 
v___x_6314_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6281_, v_options_6280_);
return v___x_6314_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object* v_options_6315_, lean_object* v_handler_6316_, lean_object* v_a_6317_){
_start:
{
lean_object* v_res_6318_; 
v_res_6318_ = l_Lasm_Fetch_serveWith(v_options_6315_, v_handler_6316_);
return v_res_6318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_6319_){
_start:
{
lean_object* v___f_6321_; lean_object* v___x_6322_; 
v___f_6321_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0));
v___x_6322_ = l_Lasm_Fetch_serveWith(v___f_6321_, v_handler_6319_);
return v___x_6322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_6323_, lean_object* v_a_6324_){
_start:
{
lean_object* v_res_6325_; 
v_res_6325_ = l_Lasm_Fetch_serve(v_handler_6323_);
return v_res_6325_;
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
