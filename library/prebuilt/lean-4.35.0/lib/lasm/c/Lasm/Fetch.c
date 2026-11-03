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
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0(lean_object* v_x_893_){
_start:
{
lean_object* v_r_896_; 
if (lean_obj_tag(v_x_893_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_907_; 
v_a_899_ = lean_ctor_get(v_x_893_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v_x_893_);
if (v_isSharedCheck_907_ == 0)
{
v___x_901_ = v_x_893_;
v_isShared_902_ = v_isSharedCheck_907_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v_x_893_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_907_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_906_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
lean_object* v___x_905_; 
v___x_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
return v___x_905_;
}
}
}
else
{
lean_object* v_a_908_; lean_object* v_a_909_; 
v_a_908_ = lean_ctor_get(v_x_893_, 0);
lean_inc(v_a_908_);
lean_dec_ref_known(v_x_893_, 1);
v_a_909_ = lean_ctor_get(v_a_908_, 0);
lean_inc(v_a_909_);
lean_dec(v_a_908_);
v_r_896_ = v_a_909_;
goto v___jp_895_;
}
v___jp_895_:
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_897_, 0, v_r_896_);
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
return v___x_898_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__0___boxed(lean_object* v_x_910_, lean_object* v___y_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lasm_Fetch_respond___lam__0(v_x_910_);
return v_res_912_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__1(void){
_start:
{
uint16_t v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_914_ = 500;
v___x_915_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__1___closed__0));
v___x_916_ = l_Lasm_Fetch_Response_text(v___x_915_, v___x_914_);
return v___x_916_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__2(void){
_start:
{
lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_917_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__1, &l_Lasm_Fetch_respond___lam__1___closed__1_once, _init_l_Lasm_Fetch_respond___lam__1___closed__1);
v___x_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
return v___x_918_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__3(void){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_919_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__2, &l_Lasm_Fetch_respond___lam__1___closed__2_once, _init_l_Lasm_Fetch_respond___lam__1___closed__2);
v___x_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
return v___x_920_;
}
}
static lean_object* _init_l_Lasm_Fetch_respond___lam__1___closed__4(void){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_921_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__3, &l_Lasm_Fetch_respond___lam__1___closed__3_once, _init_l_Lasm_Fetch_respond___lam__1___closed__3);
v___x_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1(lean_object* v_x_923_){
_start:
{
if (lean_obj_tag(v_x_923_) == 0)
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_933_; 
v_a_925_ = lean_ctor_get(v_x_923_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v_x_923_);
if (v_isSharedCheck_933_ == 0)
{
v___x_927_ = v_x_923_;
v_isShared_928_ = v_isSharedCheck_933_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v_x_923_);
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
lean_object* v___x_934_; 
lean_dec_ref_known(v_x_923_, 1);
v___x_934_ = lean_obj_once(&l_Lasm_Fetch_respond___lam__1___closed__4, &l_Lasm_Fetch_respond___lam__1___closed__4_once, _init_l_Lasm_Fetch_respond___lam__1___closed__4);
return v___x_934_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__1___boxed(lean_object* v_x_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lasm_Fetch_respond___lam__1(v_x_935_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2(lean_object* v_x_938_){
_start:
{
if (lean_obj_tag(v_x_938_) == 0)
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_948_; 
v_a_940_ = lean_ctor_get(v_x_938_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v_x_938_);
if (v_isSharedCheck_948_ == 0)
{
v___x_942_ = v_x_938_;
v_isShared_943_ = v_isSharedCheck_948_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v_x_938_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_948_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_947_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_946_; 
v___x_946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
return v___x_946_;
}
}
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_958_; 
v_a_949_ = lean_ctor_get(v_x_938_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v_x_938_);
if (v_isSharedCheck_958_ == 0)
{
v___x_951_ = v_x_938_;
v_isShared_952_ = v_isSharedCheck_958_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v_x_938_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_958_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_957_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
v___x_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_956_, 0, v___x_955_);
return v___x_956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__2___boxed(lean_object* v_x_959_, lean_object* v___y_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Lasm_Fetch_respond___lam__2(v_x_959_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3(lean_object* v_method_965_, lean_object* v_req_966_, lean_object* v___f_967_, lean_object* v_x_968_){
_start:
{
if (lean_obj_tag(v_x_968_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_999_; 
v_a_970_ = lean_ctor_get(v_x_968_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v_x_968_);
if (v_isSharedCheck_999_ == 0)
{
v___x_972_ = v_x_968_;
v_isShared_973_ = v_isSharedCheck_999_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v_x_968_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_999_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; uint8_t v___x_985_; lean_object* v_val_987_; lean_object* v___x_990_; 
v___x_974_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__0));
v___x_975_ = lean_string_append(v___x_974_, v_method_965_);
v___x_976_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__1));
v___x_977_ = lean_string_append(v___x_975_, v___x_976_);
v___x_978_ = l_Lasm_Fetch_Request_path(v_req_966_);
v___x_979_ = lean_string_append(v___x_977_, v___x_978_);
lean_dec_ref(v___x_978_);
v___x_980_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_981_ = lean_string_append(v___x_979_, v___x_980_);
v___x_982_ = lean_io_error_to_string(v_a_970_);
v___x_983_ = lean_string_append(v___x_981_, v___x_982_);
lean_dec_ref(v___x_982_);
v___x_984_ = lean_unsigned_to_nat(0u);
v___x_985_ = 0;
v___x_990_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_983_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v___x_993_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_a_991_);
lean_dec_ref_known(v___x_990_, 1);
if (v_isShared_973_ == 0)
{
lean_ctor_set_tag(v___x_972_, 1);
lean_ctor_set(v___x_972_, 0, v_a_991_);
v___x_993_ = v___x_972_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_991_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
v_val_987_ = v___x_993_;
goto v___jp_986_;
}
}
else
{
lean_object* v_a_995_; lean_object* v___x_997_; 
v_a_995_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_a_995_);
lean_dec_ref_known(v___x_990_, 1);
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 0, v_a_995_);
v___x_997_ = v___x_972_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_995_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
v_val_987_ = v___x_997_;
goto v___jp_986_;
}
}
v___jp_986_:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_988_, 0, v_val_987_);
v___x_989_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_984_, v___x_985_, v___x_988_, v___f_967_);
return v___x_989_;
}
}
}
else
{
lean_object* v___x_1000_; 
lean_dec_ref(v___f_967_);
lean_dec_ref(v_req_966_);
v___x_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1000_, 0, v_x_968_);
return v___x_1000_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___lam__3___boxed(lean_object* v_method_1001_, lean_object* v_req_1002_, lean_object* v___f_1003_, lean_object* v_x_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l_Lasm_Fetch_respond___lam__3(v_method_1001_, v_req_1002_, v___f_1003_, v_x_1004_);
lean_dec_ref(v_method_1001_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond(lean_object* v_handler_1011_, lean_object* v_req_1012_){
_start:
{
lean_object* v_method_1014_; lean_object* v_url_1015_; lean_object* v_headers_1016_; lean_object* v_body_1017_; lean_object* v_read_1018_; lean_object* v___f_1019_; lean_object* v___f_1020_; lean_object* v___f_1021_; lean_object* v___f_1022_; lean_object* v___y_1024_; lean_object* v___x_1031_; uint8_t v___x_1032_; 
v_method_1014_ = lean_ctor_get(v_req_1012_, 0);
v_url_1015_ = lean_ctor_get(v_req_1012_, 1);
v_headers_1016_ = lean_ctor_get(v_req_1012_, 2);
v_body_1017_ = lean_ctor_get(v_req_1012_, 3);
v_read_1018_ = lean_ctor_get(v_req_1012_, 4);
v___f_1019_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__0));
v___f_1020_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__1));
v___f_1021_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__2));
lean_inc_ref(v_req_1012_);
lean_inc_ref(v_method_1014_);
v___f_1022_ = lean_alloc_closure((void*)(l_Lasm_Fetch_respond___lam__3___boxed), 5, 3);
lean_closure_set(v___f_1022_, 0, v_method_1014_);
lean_closure_set(v___f_1022_, 1, v_req_1012_);
lean_closure_set(v___f_1022_, 2, v___f_1020_);
v___x_1031_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1032_ = lean_string_dec_eq(v_method_1014_, v___x_1031_);
if (v___x_1032_ == 0)
{
v___y_1024_ = v_req_1012_;
goto v___jp_1023_;
}
else
{
lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1040_; 
lean_inc_ref(v_read_1018_);
lean_inc_ref(v_body_1017_);
lean_inc_ref(v_headers_1016_);
lean_inc_ref(v_url_1015_);
v_isSharedCheck_1040_ = !lean_is_exclusive(v_req_1012_);
if (v_isSharedCheck_1040_ == 0)
{
lean_object* v_unused_1041_; lean_object* v_unused_1042_; lean_object* v_unused_1043_; lean_object* v_unused_1044_; lean_object* v_unused_1045_; 
v_unused_1041_ = lean_ctor_get(v_req_1012_, 4);
lean_dec(v_unused_1041_);
v_unused_1042_ = lean_ctor_get(v_req_1012_, 3);
lean_dec(v_unused_1042_);
v_unused_1043_ = lean_ctor_get(v_req_1012_, 2);
lean_dec(v_unused_1043_);
v_unused_1044_ = lean_ctor_get(v_req_1012_, 1);
lean_dec(v_unused_1044_);
v_unused_1045_ = lean_ctor_get(v_req_1012_, 0);
lean_dec(v_unused_1045_);
v___x_1034_ = v_req_1012_;
v_isShared_1035_ = v_isSharedCheck_1040_;
goto v_resetjp_1033_;
}
else
{
lean_dec(v_req_1012_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1040_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1036_; lean_object* v___x_1038_; 
v___x_1036_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 0, v___x_1036_);
v___x_1038_ = v___x_1034_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v___x_1036_);
lean_ctor_set(v_reuseFailAlloc_1039_, 1, v_url_1015_);
lean_ctor_set(v_reuseFailAlloc_1039_, 2, v_headers_1016_);
lean_ctor_set(v_reuseFailAlloc_1039_, 3, v_body_1017_);
lean_ctor_set(v_reuseFailAlloc_1039_, 4, v_read_1018_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
v___y_1024_ = v___x_1038_;
goto v___jp_1023_;
}
}
}
v___jp_1023_:
{
lean_object* v___x_1025_; uint8_t v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1025_ = lean_unsigned_to_nat(0u);
v___x_1026_ = 0;
v___x_1027_ = lean_apply_2(v_handler_1011_, v___y_1024_, lean_box(0));
v___x_1028_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1025_, v___x_1026_, v___x_1027_, v___f_1021_);
v___x_1029_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1025_, v___x_1026_, v___x_1028_, v___f_1022_);
v___x_1030_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1025_, v___x_1026_, v___x_1029_, v___f_1019_);
return v___x_1030_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_respond___boxed(lean_object* v_handler_1046_, lean_object* v_req_1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Lasm_Fetch_respond(v_handler_1046_, v_req_1047_);
return v_res_1049_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_bodyless(lean_object* v_method_1050_, uint16_t v_status_1051_){
_start:
{
lean_object* v___x_1052_; uint8_t v___x_1053_; 
v___x_1052_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_1053_ = lean_string_dec_eq(v_method_1050_, v___x_1052_);
if (v___x_1053_ == 0)
{
uint16_t v___x_1054_; uint8_t v___x_1055_; 
v___x_1054_ = 101;
v___x_1055_ = lean_uint16_dec_eq(v_status_1051_, v___x_1054_);
if (v___x_1055_ == 0)
{
uint16_t v___x_1056_; uint8_t v___x_1057_; 
v___x_1056_ = 204;
v___x_1057_ = lean_uint16_dec_eq(v_status_1051_, v___x_1056_);
if (v___x_1057_ == 0)
{
uint16_t v___x_1058_; uint8_t v___x_1059_; 
v___x_1058_ = 205;
v___x_1059_ = lean_uint16_dec_eq(v_status_1051_, v___x_1058_);
if (v___x_1059_ == 0)
{
uint16_t v___x_1060_; uint8_t v___x_1061_; 
v___x_1060_ = 304;
v___x_1061_ = lean_uint16_dec_eq(v_status_1051_, v___x_1060_);
return v___x_1061_;
}
else
{
return v___x_1059_;
}
}
else
{
return v___x_1057_;
}
}
else
{
return v___x_1055_;
}
}
else
{
return v___x_1053_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_bodyless___boxed(lean_object* v_method_1062_, lean_object* v_status_1063_){
_start:
{
uint16_t v_status_boxed_1064_; uint8_t v_res_1065_; lean_object* v_r_1066_; 
v_status_boxed_1064_ = lean_unbox(v_status_1063_);
v_res_1065_ = l_Lasm_Fetch_bodyless(v_method_1062_, v_status_boxed_1064_);
lean_dec_ref(v_method_1062_);
v_r_1066_ = lean_box(v_res_1065_);
return v_r_1066_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_platformCode___boxed(lean_object* v_a_00___x40___internal___hyg_1068_){
_start:
{
uint32_t v_res_1069_; lean_object* v_r_1070_; 
v_res_1069_ = lasm_fetch_platform(v_a_00___x40___internal___hyg_1068_);
v_r_1070_ = lean_box_uint32(v_res_1069_);
return v_r_1070_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequest___boxed(lean_object* v_a_00___x40___internal___hyg_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = lasm_fetch_take_request();
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_sendResponse___boxed(lean_object* v_status_1078_, lean_object* v_headers_1079_, lean_object* v_body_1080_, lean_object* v_a_00___x40___internal___hyg_1081_){
_start:
{
uint16_t v_status_boxed_1082_; lean_object* v_res_1083_; 
v_status_boxed_1082_ = lean_unbox(v_status_1078_);
v_res_1083_ = lasm_fetch_send_response(v_status_boxed_1082_, v_headers_1079_, v_body_1080_);
lean_dec_ref(v_body_1080_);
lean_dec_ref(v_headers_1079_);
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_takeRequestHead___boxed(lean_object* v_a_00___x40___internal___hyg_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = lasm_fetch_take_request_head();
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_readChunk___boxed(lean_object* v_max_1089_, lean_object* v_a_00___x40___internal___hyg_1090_){
_start:
{
uint32_t v_max_boxed_1091_; lean_object* v_res_1092_; 
v_max_boxed_1091_ = lean_unbox_uint32(v_max_1089_);
lean_dec(v_max_1089_);
v_res_1092_ = lasm_fetch_read(v_max_boxed_1091_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_startResponse___boxed(lean_object* v_status_1096_, lean_object* v_headers_1097_, lean_object* v_a_00___x40___internal___hyg_1098_){
_start:
{
uint16_t v_status_boxed_1099_; lean_object* v_res_1100_; 
v_status_boxed_1099_ = lean_unbox(v_status_1096_);
v_res_1100_ = lasm_fetch_start_response(v_status_boxed_1099_, v_headers_1097_);
lean_dec_ref(v_headers_1097_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_writeChunk___boxed(lean_object* v_chunk_1103_, lean_object* v_a_00___x40___internal___hyg_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = lasm_fetch_write(v_chunk_1103_);
lean_dec_ref(v_chunk_1103_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_finishResponse___boxed(lean_object* v_ok_1108_, lean_object* v_a_00___x40___internal___hyg_1109_){
_start:
{
uint8_t v_ok_boxed_1110_; lean_object* v_res_1111_; 
v_ok_boxed_1110_ = lean_unbox(v_ok_1108_);
v_res_1111_ = lasm_fetch_finish(v_ok_boxed_1110_);
return v_res_1111_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(lean_object* v_x_1112_){
_start:
{
uint8_t v___x_1113_; 
v___x_1113_ = 0;
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0___boxed(lean_object* v_x_1114_){
_start:
{
uint8_t v_res_1115_; lean_object* v_r_1116_; 
v_res_1115_ = l_Lasm_Fetch_instInhabitedServeOptions_default___lam__0(v_x_1114_);
lean_dec_ref(v_x_1114_);
v_r_1116_ = lean_box(v_res_1115_);
return v_r_1116_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(lean_object* v_x_1126_){
_start:
{
lean_object* v_b_1129_; 
if (lean_obj_tag(v_x_1126_) == 0)
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1143_; 
v_a_1135_ = lean_ctor_get(v_x_1126_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_x_1126_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1137_ = v_x_1126_;
v_isShared_1138_ = v_isSharedCheck_1143_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v_x_1126_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1143_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
lean_object* v___x_1141_; 
v___x_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
return v___x_1141_;
}
}
}
else
{
lean_object* v_a_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v_a_1144_ = lean_ctor_get(v_x_1126_, 0);
lean_inc(v_a_1144_);
lean_dec_ref_known(v_x_1126_, 1);
v___x_1145_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__2));
v___x_1146_ = l_Lasm_JS_Data_field(v_a_1144_, v___x_1145_);
if (lean_obj_tag(v___x_1146_) == 2)
{
uint8_t v_b_1147_; 
v_b_1147_ = lean_ctor_get_uint8(v___x_1146_, 0);
lean_dec_ref_known(v___x_1146_, 0);
if (v_b_1147_ == 1)
{
lean_object* v___x_1148_; 
lean_dec(v_a_1144_);
v___x_1148_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_1148_;
}
else
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1149_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_1150_ = l_Lasm_JS_Data_field(v_a_1144_, v___x_1149_);
lean_dec(v_a_1144_);
if (lean_obj_tag(v___x_1150_) == 6)
{
lean_object* v_b_1151_; 
v_b_1151_ = lean_ctor_get(v___x_1150_, 0);
lean_inc_ref(v_b_1151_);
lean_dec_ref_known(v___x_1150_, 1);
v_b_1129_ = v_b_1151_;
goto v___jp_1128_;
}
else
{
lean_dec(v___x_1150_);
goto v___jp_1133_;
}
}
}
else
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
lean_dec(v___x_1146_);
v___x_1152_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__3));
v___x_1153_ = l_Lasm_JS_Data_field(v_a_1144_, v___x_1152_);
lean_dec(v_a_1144_);
if (lean_obj_tag(v___x_1153_) == 6)
{
lean_object* v_b_1154_; 
v_b_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc_ref(v_b_1154_);
lean_dec_ref_known(v___x_1153_, 1);
v_b_1129_ = v_b_1154_;
goto v___jp_1128_;
}
else
{
lean_dec(v___x_1153_);
goto v___jp_1133_;
}
}
}
v___jp_1128_:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1130_, 0, v_b_1129_);
v___x_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1130_);
v___x_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
return v___x_1132_;
}
v___jp_1133_:
{
lean_object* v___x_1134_; 
v___x_1134_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___closed__1));
return v___x_1134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0___boxed(lean_object* v_x_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__0(v_x_1155_);
return v_res_1157_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_1158_; uint64_t v___x_1159_; 
v___x_1158_ = 0;
v___x_1159_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(uint8_t v_await_1160_, uint64_t v_extra_1161_){
_start:
{
uint64_t v___x_1162_; uint64_t v___y_1164_; 
v___x_1162_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_1160_ == 0)
{
uint64_t v___x_1167_; 
v___x_1167_ = 0ULL;
v___y_1164_ = v___x_1167_;
goto v___jp_1163_;
}
else
{
uint64_t v___x_1168_; 
v___x_1168_ = 2ULL;
v___y_1164_ = v___x_1168_;
goto v___jp_1163_;
}
v___jp_1163_:
{
uint64_t v___x_1165_; uint64_t v___x_1166_; 
v___x_1165_ = lean_uint64_lor(v___x_1162_, v___y_1164_);
v___x_1166_ = lean_uint64_lor(v___x_1165_, v_extra_1161_);
return v___x_1166_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___boxed(lean_object* v_await_1169_, lean_object* v_extra_1170_){
_start:
{
uint8_t v_await_boxed_1171_; uint64_t v_extra_boxed_1172_; uint64_t v_res_1173_; lean_object* v_r_1174_; 
v_await_boxed_1171_ = lean_unbox(v_await_1169_);
v_extra_boxed_1172_ = lean_unbox_uint64(v_extra_1170_);
lean_dec_ref(v_extra_1170_);
v_res_1173_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v_await_boxed_1171_, v_extra_boxed_1172_);
v_r_1174_ = lean_box_uint64(v_res_1173_);
return v_r_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(lean_object* v_x_1175_){
_start:
{
if (lean_obj_tag(v_x_1175_) == 0)
{
lean_object* v___x_1177_; 
v___x_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1177_, 0, v_x_1175_);
return v___x_1177_;
}
else
{
lean_object* v_a_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1186_; 
v_a_1178_ = lean_ctor_get(v_x_1175_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v_x_1175_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1180_ = v_x_1175_;
v_isShared_1181_ = v_isSharedCheck_1186_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_a_1178_);
lean_dec(v_x_1175_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1186_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1183_; 
if (v_isShared_1181_ == 0)
{
v___x_1183_ = v___x_1180_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1178_);
v___x_1183_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
lean_object* v___x_1184_; 
v___x_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
return v___x_1184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1___boxed(lean_object* v_x_1187_, lean_object* v___y_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__1(v_x_1187_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(lean_object* v_a_1190_, lean_object* v_x_1191_){
_start:
{
if (lean_obj_tag(v_x_1191_) == 0)
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1201_; 
v_a_1193_ = lean_ctor_get(v_x_1191_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v_x_1191_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1195_ = v_x_1191_;
v_isShared_1196_ = v_isSharedCheck_1201_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v_x_1191_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1201_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1193_);
v___x_1198_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1199_; 
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
return v___x_1199_;
}
}
}
else
{
lean_object* v___x_1202_; 
lean_dec_ref_known(v_x_1191_, 1);
v___x_1202_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1190_);
return v___x_1202_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed(lean_object* v_a_1203_, lean_object* v_x_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5(v_a_1203_, v_x_1204_);
lean_dec(v_a_1203_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(lean_object* v_payload_1207_, lean_object* v_failurePrefix_1208_, lean_object* v___f_1209_, lean_object* v___f_1210_, uint32_t v_op_1211_, uint64_t v_flags_1212_, lean_object* v___f_1213_, lean_object* v_x_1214_){
_start:
{
if (lean_obj_tag(v_x_1214_) == 0)
{
lean_object* v_a_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1224_; 
lean_dec_ref(v___f_1213_);
lean_dec_ref(v___f_1210_);
lean_dec_ref(v___f_1209_);
v_a_1216_ = lean_ctor_get(v_x_1214_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v_x_1214_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1218_ = v_x_1214_;
v_isShared_1219_ = v_isSharedCheck_1224_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_a_1216_);
lean_dec(v_x_1214_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1224_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1221_; 
if (v_isShared_1219_ == 0)
{
v___x_1221_ = v___x_1218_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1216_);
v___x_1221_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
lean_object* v___x_1222_; 
v___x_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
return v___x_1222_;
}
}
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1266_; 
v_a_1225_ = lean_ctor_get(v_x_1214_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v_x_1214_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1227_ = v_x_1214_;
v_isShared_1228_ = v_isSharedCheck_1266_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v_x_1214_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1266_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
uint32_t v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; 
v___x_1229_ = 0;
v___x_1230_ = l_Lasm_JS_Wire_encode(v_payload_1207_);
v___x_1231_ = lean_string_utf8_byte_size(v_failurePrefix_1208_);
v___x_1232_ = lean_unsigned_to_nat(0u);
v___x_1233_ = lean_nat_dec_eq(v___x_1231_, v___x_1232_);
if (v___x_1233_ == 0)
{
lean_object* v___f_1234_; lean_object* v_val_1236_; lean_object* v___x_1241_; 
lean_dec_ref(v___f_1213_);
lean_inc(v_a_1225_);
v___f_1234_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1234_, 0, v_a_1225_);
v___x_1241_ = lasm_js_call_into(v_a_1225_, v_op_1211_, v___x_1229_, v_flags_1212_, v___x_1230_, v_payload_1207_);
lean_dec_ref(v___x_1230_);
lean_dec(v_a_1225_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v_a_1242_; lean_object* v___x_1244_; 
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
lean_inc(v_a_1242_);
lean_dec_ref_known(v___x_1241_, 1);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 0, v_a_1242_);
v___x_1244_ = v___x_1227_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_a_1242_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
v_val_1236_ = v___x_1244_;
goto v___jp_1235_;
}
}
else
{
lean_object* v_a_1246_; lean_object* v___x_1248_; 
v_a_1246_ = lean_ctor_get(v___x_1241_, 0);
lean_inc(v_a_1246_);
lean_dec_ref_known(v___x_1241_, 1);
if (v_isShared_1228_ == 0)
{
lean_ctor_set_tag(v___x_1227_, 0);
lean_ctor_set(v___x_1227_, 0, v_a_1246_);
v___x_1248_ = v___x_1227_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_a_1246_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
v_val_1236_ = v___x_1248_;
goto v___jp_1235_;
}
}
v___jp_1235_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1237_, 0, v_val_1236_);
v___x_1238_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1232_, v___x_1233_, v___x_1237_, v___f_1234_);
v___x_1239_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1232_, v___x_1233_, v___x_1238_, v___f_1209_);
v___x_1240_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1232_, v___x_1233_, v___x_1239_, v___f_1210_);
return v___x_1240_;
}
}
else
{
lean_object* v___f_1250_; uint8_t v___x_1251_; lean_object* v_val_1253_; lean_object* v___x_1257_; 
lean_dec_ref(v___f_1210_);
lean_dec_ref(v___f_1209_);
lean_inc(v_a_1225_);
v___f_1250_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1250_, 0, v_a_1225_);
v___x_1251_ = 0;
v___x_1257_ = lasm_js_call_into(v_a_1225_, v_op_1211_, v___x_1229_, v_flags_1212_, v___x_1230_, v_payload_1207_);
lean_dec_ref(v___x_1230_);
lean_dec(v_a_1225_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; lean_object* v___x_1260_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1258_);
lean_dec_ref_known(v___x_1257_, 1);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 0, v_a_1258_);
v___x_1260_ = v___x_1227_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_a_1258_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
v_val_1253_ = v___x_1260_;
goto v___jp_1252_;
}
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1264_; 
v_a_1262_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1262_);
lean_dec_ref_known(v___x_1257_, 1);
if (v_isShared_1228_ == 0)
{
lean_ctor_set_tag(v___x_1227_, 0);
lean_ctor_set(v___x_1227_, 0, v_a_1262_);
v___x_1264_ = v___x_1227_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1262_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
v_val_1253_ = v___x_1264_;
goto v___jp_1252_;
}
}
v___jp_1252_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1254_, 0, v_val_1253_);
v___x_1255_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1232_, v___x_1251_, v___x_1254_, v___f_1250_);
v___x_1256_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1232_, v___x_1251_, v___x_1255_, v___f_1213_);
return v___x_1256_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed(lean_object* v_payload_1267_, lean_object* v_failurePrefix_1268_, lean_object* v___f_1269_, lean_object* v___f_1270_, lean_object* v_op_1271_, lean_object* v_flags_1272_, lean_object* v___f_1273_, lean_object* v_x_1274_, lean_object* v___y_1275_){
_start:
{
uint32_t v_op_boxed_1276_; uint64_t v_flags_boxed_1277_; lean_object* v_res_1278_; 
v_op_boxed_1276_ = lean_unbox_uint32(v_op_1271_);
lean_dec(v_op_1271_);
v_flags_boxed_1277_ = lean_unbox_uint64(v_flags_1272_);
lean_dec_ref(v_flags_1272_);
v_res_1278_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6(v_payload_1267_, v_failurePrefix_1268_, v___f_1269_, v___f_1270_, v_op_boxed_1276_, v_flags_boxed_1277_, v___f_1273_, v_x_1274_);
lean_dec_ref(v_failurePrefix_1268_);
lean_dec(v_payload_1267_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(lean_object* v___f_1279_, lean_object* v_bytes_1280_){
_start:
{
lean_object* v___x_1282_; uint8_t v___x_1283_; lean_object* v_val_1285_; lean_object* v___x_1288_; 
v___x_1282_ = lean_unsigned_to_nat(0u);
v___x_1283_ = 0;
v___x_1288_ = l_Lasm_JS_Wire_decode(v_bytes_1280_);
if (lean_obj_tag(v___x_1288_) == 0)
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1296_; 
v_a_1289_ = lean_ctor_get(v___x_1288_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1288_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1291_ = v___x_1288_;
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1288_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1294_; 
if (v_isShared_1292_ == 0)
{
lean_ctor_set_tag(v___x_1291_, 1);
v___x_1294_ = v___x_1291_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_a_1289_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
v_val_1285_ = v___x_1294_;
goto v___jp_1284_;
}
}
}
else
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1304_; 
v_a_1297_ = lean_ctor_get(v___x_1288_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1288_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1299_ = v___x_1288_;
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v___x_1288_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
lean_ctor_set_tag(v___x_1299_, 0);
v___x_1302_ = v___x_1299_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_a_1297_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
v_val_1285_ = v___x_1302_;
goto v___jp_1284_;
}
}
}
v___jp_1284_:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1286_, 0, v_val_1285_);
v___x_1287_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1282_, v___x_1283_, v___x_1286_, v___f_1279_);
return v___x_1287_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2___boxed(lean_object* v___f_1305_, lean_object* v_bytes_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__2(v___f_1305_, v_bytes_1306_);
lean_dec_ref(v_bytes_1306_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(lean_object* v_failurePrefix_1309_, lean_object* v_x_1310_){
_start:
{
if (lean_obj_tag(v_x_1310_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1323_; 
v_a_1312_ = lean_ctor_get(v_x_1310_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v_x_1310_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1314_ = v_x_1310_;
v_isShared_1315_ = v_isSharedCheck_1323_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v_x_1310_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1323_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1320_; 
v___x_1316_ = lean_io_error_to_string(v_a_1312_);
v___x_1317_ = lean_string_append(v_failurePrefix_1309_, v___x_1316_);
lean_dec_ref(v___x_1316_);
v___x_1318_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set(v___x_1314_, 0, v___x_1318_);
v___x_1320_ = v___x_1314_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v___x_1318_);
v___x_1320_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
lean_object* v___x_1321_; 
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
}
}
else
{
lean_object* v___x_1324_; 
lean_dec_ref(v_failurePrefix_1309_);
v___x_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1324_, 0, v_x_1310_);
return v___x_1324_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v_failurePrefix_1325_, lean_object* v_x_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0(v_failurePrefix_1325_, v_x_1326_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(lean_object* v___f_1329_, lean_object* v_x_1330_){
_start:
{
if (lean_obj_tag(v_x_1330_) == 0)
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1340_; 
lean_dec_ref(v___f_1329_);
v_a_1332_ = lean_ctor_get(v_x_1330_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v_x_1330_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1334_ = v_x_1330_;
v_isShared_1335_ = v_isSharedCheck_1340_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v_x_1330_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1340_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1337_; 
if (v_isShared_1335_ == 0)
{
v___x_1337_ = v___x_1334_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1332_);
v___x_1337_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
lean_object* v___x_1338_; 
v___x_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1337_);
return v___x_1338_;
}
}
}
else
{
lean_object* v_a_1341_; lean_object* v___x_1342_; 
v_a_1341_ = lean_ctor_get(v_x_1330_, 0);
lean_inc(v_a_1341_);
lean_dec_ref_known(v_x_1330_, 1);
v___x_1342_ = lean_apply_2(v___f_1329_, v_a_1341_, lean_box(0));
return v___x_1342_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3___boxed(lean_object* v___f_1343_, lean_object* v_x_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v_res_1346_; 
v_res_1346_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__3(v___f_1343_, v_x_1344_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(lean_object* v___f_1347_, lean_object* v_x_1348_){
_start:
{
if (lean_obj_tag(v_x_1348_) == 0)
{
lean_object* v_a_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1358_; 
lean_dec_ref(v___f_1347_);
v_a_1350_ = lean_ctor_get(v_x_1348_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v_x_1348_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1352_ = v_x_1348_;
v_isShared_1353_ = v_isSharedCheck_1358_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_a_1350_);
lean_dec(v_x_1348_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1358_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1355_; 
if (v_isShared_1353_ == 0)
{
v___x_1355_ = v___x_1352_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1350_);
v___x_1355_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_object* v___x_1356_; 
v___x_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1355_);
return v___x_1356_;
}
}
}
else
{
lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1370_; 
v_isSharedCheck_1370_ = !lean_is_exclusive(v_x_1348_);
if (v_isSharedCheck_1370_ == 0)
{
lean_object* v_unused_1371_; 
v_unused_1371_ = lean_ctor_get(v_x_1348_, 0);
lean_dec(v_unused_1371_);
v___x_1360_ = v_x_1348_;
v_isShared_1361_ = v_isSharedCheck_1370_;
goto v_resetjp_1359_;
}
else
{
lean_dec(v_x_1348_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1370_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1362_; uint8_t v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1366_; 
v___x_1362_ = lean_unsigned_to_nat(0u);
v___x_1363_ = 0;
v___x_1364_ = lean_io_promise_new();
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 0, v___x_1364_);
v___x_1366_ = v___x_1360_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v___x_1364_);
v___x_1366_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1366_);
v___x_1368_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1362_, v___x_1363_, v___x_1367_, v___f_1347_);
return v___x_1368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed(lean_object* v___f_1372_, lean_object* v_x_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v_res_1375_; 
v_res_1375_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4(v___f_1372_, v_x_1373_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(uint32_t v_op_1381_, uint64_t v_flags_1382_, lean_object* v_payload_1383_, lean_object* v_failurePrefix_1384_){
_start:
{
lean_object* v___f_1386_; lean_object* v___f_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___f_1390_; lean_object* v___f_1391_; lean_object* v___x_1392_; uint8_t v___x_1393_; lean_object* v_val_1395_; lean_object* v___x_1398_; 
lean_inc_ref(v_failurePrefix_1384_);
v___f_1386_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1386_, 0, v_failurePrefix_1384_);
v___f_1387_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___closed__2));
v___x_1388_ = lean_box_uint32(v_op_1381_);
v___x_1389_ = lean_box_uint64(v_flags_1382_);
v___f_1390_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1390_, 0, v_payload_1383_);
lean_closure_set(v___f_1390_, 1, v_failurePrefix_1384_);
lean_closure_set(v___f_1390_, 2, v___f_1386_);
lean_closure_set(v___f_1390_, 3, v___f_1387_);
lean_closure_set(v___f_1390_, 4, v___x_1388_);
lean_closure_set(v___f_1390_, 5, v___x_1389_);
lean_closure_set(v___f_1390_, 6, v___f_1387_);
v___f_1391_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1391_, 0, v___f_1390_);
v___x_1392_ = lean_unsigned_to_nat(0u);
v___x_1393_ = 0;
v___x_1398_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1406_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1401_ = v___x_1398_;
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1398_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
lean_ctor_set_tag(v___x_1401_, 1);
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
v_val_1395_ = v___x_1404_;
goto v___jp_1394_;
}
}
}
else
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1414_; 
v_a_1407_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1409_ = v___x_1398_;
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1398_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1412_; 
if (v_isShared_1410_ == 0)
{
lean_ctor_set_tag(v___x_1409_, 0);
v___x_1412_ = v___x_1409_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_a_1407_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
v_val_1395_ = v___x_1412_;
goto v___jp_1394_;
}
}
}
v___jp_1394_:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1396_, 0, v_val_1395_);
v___x_1397_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1392_, v___x_1393_, v___x_1396_, v___f_1391_);
return v___x_1397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___boxed(lean_object* v_op_1415_, lean_object* v_flags_1416_, lean_object* v_payload_1417_, lean_object* v_failurePrefix_1418_, lean_object* v_a_1419_){
_start:
{
uint32_t v_op_boxed_1420_; uint64_t v_flags_boxed_1421_; lean_object* v_res_1422_; 
v_op_boxed_1420_ = lean_unbox_uint32(v_op_1415_);
lean_dec(v_op_1415_);
v_flags_boxed_1421_ = lean_unbox_uint64(v_flags_1416_);
lean_dec_ref(v_flags_1416_);
v_res_1422_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_boxed_1420_, v_flags_boxed_1421_, v_payload_1417_, v_failurePrefix_1418_);
return v_res_1422_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1423_; uint8_t v___x_1424_; uint64_t v___x_1425_; 
v___x_1423_ = 8ULL;
v___x_1424_ = 0;
v___x_1425_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2(v___x_1424_, v___x_1423_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object* v_o_1426_, lean_object* v_name_1427_, lean_object* v_args_1428_){
_start:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; uint32_t v___x_1433_; uint64_t v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1430_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1431_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1431_, 0, v_o_1426_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
v___x_1432_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1432_, 0, v_name_1427_);
v___x_1433_ = 205;
v___x_1434_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_1435_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1435_, 0, v_args_1428_);
v___x_1436_ = lean_unsigned_to_nat(3u);
v___x_1437_ = lean_mk_empty_array_with_capacity(v___x_1436_);
v___x_1438_ = lean_array_push(v___x_1437_, v___x_1431_);
v___x_1439_ = lean_array_push(v___x_1438_, v___x_1432_);
v___x_1440_ = lean_array_push(v___x_1439_, v___x_1435_);
v___x_1441_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
v___x_1442_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v___x_1433_, v___x_1434_, v___x_1441_, v___x_1430_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___boxed(lean_object* v_o_1443_, lean_object* v_name_1444_, lean_object* v_args_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_o_1443_, v_name_1444_, v_args_1445_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(lean_object* v_a_1448_, lean_object* v___x_1449_, lean_object* v___x_1450_, lean_object* v___x_1451_, lean_object* v___f_1452_){
_start:
{
uint8_t v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1454_ = 0;
v___x_1455_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1448_, v___x_1449_, v___x_1450_);
v___x_1456_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1451_, v___x_1454_, v___x_1455_, v___f_1452_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed(lean_object* v_a_1457_, lean_object* v___x_1458_, lean_object* v___x_1459_, lean_object* v___x_1460_, lean_object* v___f_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1(v_a_1457_, v___x_1458_, v___x_1459_, v___x_1460_, v___f_1461_);
return v_res_1463_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1464_; uint64_t v___x_1465_; 
v___x_1464_ = 1;
v___x_1465_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1464_);
return v___x_1465_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t v_await_1466_, uint64_t v_extra_1467_){
_start:
{
uint64_t v___x_1468_; uint64_t v___y_1470_; 
v___x_1468_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
if (v_await_1466_ == 0)
{
uint64_t v___x_1473_; 
v___x_1473_ = 0ULL;
v___y_1470_ = v___x_1473_;
goto v___jp_1469_;
}
else
{
uint64_t v___x_1474_; 
v___x_1474_ = 2ULL;
v___y_1470_ = v___x_1474_;
goto v___jp_1469_;
}
v___jp_1469_:
{
uint64_t v___x_1471_; uint64_t v___x_1472_; 
v___x_1471_ = lean_uint64_lor(v___x_1468_, v___y_1470_);
v___x_1472_ = lean_uint64_lor(v___x_1471_, v_extra_1467_);
return v___x_1472_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___boxed(lean_object* v_await_1475_, lean_object* v_extra_1476_){
_start:
{
uint8_t v_await_boxed_1477_; uint64_t v_extra_boxed_1478_; uint64_t v_res_1479_; lean_object* v_r_1480_; 
v_await_boxed_1477_ = lean_unbox(v_await_1475_);
v_extra_boxed_1478_ = lean_unbox_uint64(v_extra_1476_);
lean_dec_ref(v_extra_1476_);
v_res_1479_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v_await_boxed_1477_, v_extra_boxed_1478_);
v_r_1480_ = lean_box_uint64(v_res_1479_);
return v_r_1480_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1481_; uint8_t v___x_1482_; uint64_t v___x_1483_; 
v___x_1481_ = 8ULL;
v___x_1482_ = 0;
v___x_1483_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1482_, v___x_1481_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(lean_object* v_o_1485_, lean_object* v_name_1486_, lean_object* v_args_1487_){
_start:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; uint64_t v___x_1492_; lean_object* v___x_1493_; 
v___x_1489_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1490_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1490_, 0, v_o_1485_);
lean_ctor_set(v___x_1490_, 1, v___x_1489_);
lean_inc_ref(v_name_1486_);
v___x_1491_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1491_, 0, v_name_1486_);
v___x_1492_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_1493_ = l_Lasm_JS_Value_invokeRaw(v___x_1490_, v___x_1491_, v_args_1487_, v___x_1492_);
if (lean_obj_tag(v___x_1493_) == 0)
{
lean_object* v_a_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v_a_1494_ = lean_ctor_get(v___x_1493_, 0);
lean_inc(v_a_1494_);
lean_dec_ref_known(v___x_1493_, 1);
v___x_1495_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_1496_ = lean_string_append(v___x_1495_, v_name_1486_);
lean_dec_ref(v_name_1486_);
v___x_1497_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1496_, v_a_1494_);
lean_dec(v_a_1494_);
lean_dec_ref(v___x_1496_);
return v___x_1497_;
}
else
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1505_; 
lean_dec_ref(v_name_1486_);
v_a_1498_ = lean_ctor_get(v___x_1493_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1500_ = v___x_1493_;
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1493_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1503_; 
if (v_isShared_1501_ == 0)
{
v___x_1503_ = v___x_1500_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1498_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___boxed(lean_object* v_o_1506_, lean_object* v_name_1507_, lean_object* v_args_1508_, lean_object* v_a_1509_){
_start:
{
lean_object* v_res_1510_; 
v_res_1510_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_o_1506_, v_name_1507_, v_args_1508_);
return v_res_1510_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(lean_object* v_stream_1516_){
_start:
{
lean_object* v___f_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___f_1518_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__0));
v___x_1519_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__1));
v___x_1520_ = lean_unsigned_to_nat(0u);
v___x_1521_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_1522_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_stream_1516_, v___x_1519_, v___x_1521_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1532_; 
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1525_ = v___x_1522_;
v_isShared_1526_ = v_isSharedCheck_1532_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1522_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1532_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1527_; lean_object* v___f_1528_; lean_object* v___x_1530_; 
v___x_1527_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__3));
v___f_1528_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1528_, 0, v_a_1523_);
lean_closure_set(v___f_1528_, 1, v___x_1527_);
lean_closure_set(v___f_1528_, 2, v___x_1521_);
lean_closure_set(v___f_1528_, 3, v___x_1520_);
lean_closure_set(v___f_1528_, 4, v___f_1518_);
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 0, v___f_1528_);
v___x_1530_ = v___x_1525_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v___f_1528_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
else
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1540_; 
v_a_1533_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1535_ = v___x_1522_;
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1522_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1538_; 
if (v_isShared_1536_ == 0)
{
v___x_1538_ = v___x_1535_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_a_1533_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___boxed(lean_object* v_stream_1541_, lean_object* v_a_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_stream_1541_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(lean_object* v_d_1544_){
_start:
{
lean_object* v___x_1546_; 
v___x_1546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1546_, 0, v_d_1544_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_d_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___redArg(v_d_1547_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(lean_object* v_context_1550_, lean_object* v_d_1551_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1553_, 0, v_d_1551_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4___boxed(lean_object* v_context_1554_, lean_object* v_d_1555_, lean_object* v_a_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3_spec__4(v_context_1554_, v_d_1555_);
lean_dec_ref(v_context_1554_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(lean_object* v_context_1558_, uint32_t v_op_1559_, uint64_t v_flags_1560_, lean_object* v_payload_1561_, lean_object* v_failurePrefix_1562_){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg(v_op_1559_, v_flags_1560_, v_payload_1561_, v_failurePrefix_1562_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___boxed(lean_object* v_context_1565_, lean_object* v_op_1566_, lean_object* v_flags_1567_, lean_object* v_payload_1568_, lean_object* v_failurePrefix_1569_, lean_object* v_a_1570_){
_start:
{
uint32_t v_op_boxed_1571_; uint64_t v_flags_boxed_1572_; lean_object* v_res_1573_; 
v_op_boxed_1571_ = lean_unbox_uint32(v_op_1566_);
lean_dec(v_op_1566_);
v_flags_boxed_1572_ = lean_unbox_uint64(v_flags_1567_);
lean_dec_ref(v_flags_1567_);
v_res_1573_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3(v_context_1565_, v_op_boxed_1571_, v_flags_boxed_1572_, v_payload_1568_, v_failurePrefix_1569_);
lean_dec_ref(v_context_1565_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(lean_object* v_x_1578_){
_start:
{
if (lean_obj_tag(v_x_1578_) == 0)
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1588_; 
v_a_1580_ = lean_ctor_get(v_x_1578_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v_x_1578_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1582_ = v_x_1578_;
v_isShared_1583_ = v_isSharedCheck_1588_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v_x_1578_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1588_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1585_; 
if (v_isShared_1583_ == 0)
{
v___x_1585_ = v___x_1582_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_a_1580_);
v___x_1585_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
lean_object* v___x_1586_; 
v___x_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1586_, 0, v___x_1585_);
return v___x_1586_;
}
}
}
else
{
lean_object* v___x_1589_; 
lean_dec_ref_known(v_x_1578_, 1);
v___x_1589_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
return v___x_1589_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___boxed(lean_object* v_x_1590_, lean_object* v___y_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0(v_x_1590_);
return v_res_1592_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0(void){
_start:
{
uint64_t v___x_1593_; uint8_t v___x_1594_; uint64_t v___x_1595_; 
v___x_1593_ = 4ULL;
v___x_1594_ = 0;
v___x_1595_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_1594_, v___x_1593_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(lean_object* v_c_1597_, lean_object* v_args_1598_){
_start:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; uint64_t v___x_1603_; lean_object* v___x_1604_; 
v___x_1600_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1601_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1601_, 0, v_c_1597_);
lean_ctor_set(v___x_1601_, 1, v___x_1600_);
v___x_1602_ = lean_box(0);
v___x_1603_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0, &l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0_once, _init_l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__0);
v___x_1604_ = l_Lasm_JS_Value_invokeRaw(v___x_1601_, v___x_1602_, v_args_1598_, v___x_1603_);
if (lean_obj_tag(v___x_1604_) == 0)
{
lean_object* v_a_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v_a_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_a_1605_);
lean_dec_ref_known(v___x_1604_, 1);
v___x_1606_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_1607_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1606_, v_a_1605_);
lean_dec(v_a_1605_);
return v___x_1607_;
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
v_a_1608_ = lean_ctor_get(v___x_1604_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1604_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1604_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1604_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1608_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___boxed(lean_object* v_c_1616_, lean_object* v_args_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_c_1616_, v_args_1617_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(lean_object* v___y_1620_, lean_object* v___x_1621_, lean_object* v_x_1622_){
_start:
{
lean_object* v_val_1625_; 
if (lean_obj_tag(v_x_1622_) == 0)
{
lean_object* v___x_1627_; 
lean_dec(v___x_1621_);
lean_dec(v___y_1620_);
v___x_1627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1627_, 0, v_x_1622_);
return v___x_1627_;
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1645_; 
v_a_1628_ = lean_ctor_get(v_x_1622_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v_x_1622_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1630_ = v_x_1622_;
v_isShared_1631_ = v_isSharedCheck_1645_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v_x_1622_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1645_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1632_ = lean_unsigned_to_nat(2u);
v___x_1633_ = lean_mk_empty_array_with_capacity(v___x_1632_);
v___x_1634_ = lean_array_push(v___x_1633_, v___y_1620_);
v___x_1635_ = lean_array_push(v___x_1634_, v___x_1621_);
v___x_1636_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1628_, v___x_1635_);
if (lean_obj_tag(v___x_1636_) == 0)
{
lean_object* v_a_1637_; lean_object* v___x_1639_; 
v_a_1637_ = lean_ctor_get(v___x_1636_, 0);
lean_inc(v_a_1637_);
lean_dec_ref_known(v___x_1636_, 1);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 0, v_a_1637_);
v___x_1639_ = v___x_1630_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_a_1637_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
v_val_1625_ = v___x_1639_;
goto v___jp_1624_;
}
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1643_; 
v_a_1641_ = lean_ctor_get(v___x_1636_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1636_, 1);
if (v_isShared_1631_ == 0)
{
lean_ctor_set_tag(v___x_1630_, 0);
lean_ctor_set(v___x_1630_, 0, v_a_1641_);
v___x_1643_ = v___x_1630_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
v_val_1625_ = v___x_1643_;
goto v___jp_1624_;
}
}
}
}
v___jp_1624_:
{
lean_object* v___x_1626_; 
v___x_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1626_, 0, v_val_1625_);
return v___x_1626_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed(lean_object* v___y_1646_, lean_object* v___x_1647_, lean_object* v_x_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3(v___y_1646_, v___x_1647_, v_x_1648_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(lean_object* v_a_1651_, lean_object* v___x_1652_, lean_object* v_x_1653_){
_start:
{
lean_object* v_val_1656_; 
if (lean_obj_tag(v_x_1653_) == 0)
{
lean_object* v___x_1658_; 
lean_dec(v___x_1652_);
lean_dec(v_a_1651_);
v___x_1658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1658_, 0, v_x_1653_);
return v___x_1658_;
}
else
{
lean_object* v_a_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1678_; 
v_a_1659_ = lean_ctor_get(v_x_1653_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v_x_1653_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1661_ = v_x_1653_;
v_isShared_1662_ = v_isSharedCheck_1678_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_a_1659_);
lean_dec(v_x_1653_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1678_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1663_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1664_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1664_, 0, v_a_1651_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
v___x_1665_ = lean_unsigned_to_nat(2u);
v___x_1666_ = lean_mk_empty_array_with_capacity(v___x_1665_);
v___x_1667_ = lean_array_push(v___x_1666_, v___x_1664_);
v___x_1668_ = lean_array_push(v___x_1667_, v___x_1652_);
v___x_1669_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_1659_, v___x_1668_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1672_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
lean_inc(v_a_1670_);
lean_dec_ref_known(v___x_1669_, 1);
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 0, v_a_1670_);
v___x_1672_ = v___x_1661_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_a_1670_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
v_val_1656_ = v___x_1672_;
goto v___jp_1655_;
}
}
else
{
lean_object* v_a_1674_; lean_object* v___x_1676_; 
v_a_1674_ = lean_ctor_get(v___x_1669_, 0);
lean_inc(v_a_1674_);
lean_dec_ref_known(v___x_1669_, 1);
if (v_isShared_1662_ == 0)
{
lean_ctor_set_tag(v___x_1661_, 0);
lean_ctor_set(v___x_1661_, 0, v_a_1674_);
v___x_1676_ = v___x_1661_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1674_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
v_val_1656_ = v___x_1676_;
goto v___jp_1655_;
}
}
}
}
v___jp_1655_:
{
lean_object* v___x_1657_; 
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v_val_1656_);
return v___x_1657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed(lean_object* v_a_1679_, lean_object* v___x_1680_, lean_object* v_x_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1(v_a_1679_, v___x_1680_, v_x_1681_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object* v_o_1685_, lean_object* v_key_1686_){
_start:
{
uint32_t v___x_1688_; uint32_t v___x_1689_; uint64_t v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1688_ = 203;
v___x_1689_ = lasm_js_value_handle(v_o_1685_);
v___x_1690_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
lean_inc_ref(v_key_1686_);
v___x_1691_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1691_, 0, v_key_1686_);
v___x_1692_ = l_Lasm_JS_Wire_encode(v___x_1691_);
lean_dec_ref_known(v___x_1691_, 1);
v___x_1693_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_1694_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1694_, 0, v_o_1685_);
lean_ctor_set(v___x_1694_, 1, v___x_1693_);
v___x_1695_ = lasm_js_call(v___x_1688_, v___x_1689_, v___x_1690_, v___x_1692_, v___x_1694_);
lean_dec_ref_known(v___x_1694_, 2);
lean_dec_ref(v___x_1692_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1696_);
lean_dec_ref_known(v___x_1695_, 1);
v___x_1697_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___closed__0));
v___x_1698_ = l_String_quote(v_key_1686_);
v___x_1699_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1698_);
v___x_1700_ = lean_unsigned_to_nat(120u);
v___x_1701_ = lean_unsigned_to_nat(0u);
v___x_1702_ = l_Std_Format_pretty(v___x_1699_, v___x_1700_, v___x_1701_, v___x_1701_);
v___x_1703_ = lean_string_append(v___x_1697_, v___x_1702_);
lean_dec_ref(v___x_1702_);
v___x_1704_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1703_, v_a_1696_);
lean_dec(v_a_1696_);
lean_dec_ref(v___x_1703_);
return v___x_1704_;
}
else
{
lean_object* v_a_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1712_; 
lean_dec_ref(v_key_1686_);
v_a_1705_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1707_ = v___x_1695_;
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_a_1705_);
lean_dec(v___x_1695_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1710_; 
if (v_isShared_1708_ == 0)
{
v___x_1710_ = v___x_1707_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_a_1705_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2___boxed(lean_object* v_o_1713_, lean_object* v_key_1714_, lean_object* v_a_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_o_1713_, v_key_1714_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(lean_object* v___x_1718_, uint8_t v___x_1719_, lean_object* v___f_1720_, lean_object* v_a_1721_, lean_object* v_x_1722_){
_start:
{
lean_object* v_val_1725_; 
if (lean_obj_tag(v_x_1722_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1736_; 
lean_dec(v_a_1721_);
lean_dec_ref(v___f_1720_);
lean_dec(v___x_1718_);
v_a_1728_ = lean_ctor_get(v_x_1722_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v_x_1722_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1730_ = v_x_1722_;
v_isShared_1731_ = v_isSharedCheck_1736_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_a_1728_);
lean_dec(v_x_1722_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1736_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1733_; 
if (v_isShared_1731_ == 0)
{
v___x_1733_ = v___x_1730_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1728_);
v___x_1733_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
lean_object* v___x_1734_; 
v___x_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1733_);
return v___x_1734_;
}
}
}
else
{
lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1750_; 
v_isSharedCheck_1750_ = !lean_is_exclusive(v_x_1722_);
if (v_isSharedCheck_1750_ == 0)
{
lean_object* v_unused_1751_; 
v_unused_1751_ = lean_ctor_get(v_x_1722_, 0);
lean_dec(v_unused_1751_);
v___x_1738_ = v_x_1722_;
v_isShared_1739_ = v_isSharedCheck_1750_;
goto v_resetjp_1737_;
}
else
{
lean_dec(v_x_1722_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1750_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_1741_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1721_, v___x_1740_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v_a_1742_; lean_object* v___x_1744_; 
v_a_1742_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_a_1742_);
lean_dec_ref_known(v___x_1741_, 1);
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 0, v_a_1742_);
v___x_1744_ = v___x_1738_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_a_1742_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
v_val_1725_ = v___x_1744_;
goto v___jp_1724_;
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; 
v_a_1746_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_a_1746_);
lean_dec_ref_known(v___x_1741_, 1);
if (v_isShared_1739_ == 0)
{
lean_ctor_set_tag(v___x_1738_, 0);
lean_ctor_set(v___x_1738_, 0, v_a_1746_);
v___x_1748_ = v___x_1738_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1746_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
v_val_1725_ = v___x_1748_;
goto v___jp_1724_;
}
}
}
}
v___jp_1724_:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v_val_1725_);
v___x_1727_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1718_, v___x_1719_, v___x_1726_, v___f_1720_);
return v___x_1727_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed(lean_object* v___x_1752_, lean_object* v___x_1753_, lean_object* v___f_1754_, lean_object* v_a_1755_, lean_object* v_x_1756_, lean_object* v___y_1757_){
_start:
{
uint8_t v___x_5404__boxed_1758_; lean_object* v_res_1759_; 
v___x_5404__boxed_1758_ = lean_unbox(v___x_1753_);
v_res_1759_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2(v___x_1752_, v___x_5404__boxed_1758_, v___f_1754_, v_a_1755_, v_x_1756_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(lean_object* v_a_1761_, lean_object* v___x_1762_, uint8_t v___x_1763_, lean_object* v___f_1764_, lean_object* v_chunk_1765_){
_start:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1767_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_1768_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1768_, 0, v_chunk_1765_);
v___x_1769_ = lean_unsigned_to_nat(1u);
v___x_1770_ = lean_mk_empty_array_with_capacity(v___x_1769_);
v___x_1771_ = lean_array_push(v___x_1770_, v___x_1768_);
v___x_1772_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1761_, v___x_1767_, v___x_1771_);
v___x_1773_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1762_, v___x_1763_, v___x_1772_, v___f_1764_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed(lean_object* v_a_1774_, lean_object* v___x_1775_, lean_object* v___x_1776_, lean_object* v___f_1777_, lean_object* v_chunk_1778_, lean_object* v___y_1779_){
_start:
{
uint8_t v___x_5483__boxed_1780_; lean_object* v_res_1781_; 
v___x_5483__boxed_1780_ = lean_unbox(v___x_1776_);
v_res_1781_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4(v_a_1774_, v___x_1775_, v___x_5483__boxed_1780_, v___f_1777_, v_chunk_1778_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(lean_object* v___x_1783_, lean_object* v_a_1784_, lean_object* v___x_1785_, uint8_t v___x_1786_, lean_object* v___f_1787_, lean_object* v_x_1788_){
_start:
{
if (lean_obj_tag(v_x_1788_) == 0)
{
lean_object* v___x_1790_; 
lean_dec_ref(v___f_1787_);
lean_dec(v___x_1785_);
lean_dec(v_a_1784_);
lean_dec_ref(v___x_1783_);
v___x_1790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1790_, 0, v_x_1788_);
return v___x_1790_;
}
else
{
lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1803_; 
v_isSharedCheck_1803_ = !lean_is_exclusive(v_x_1788_);
if (v_isSharedCheck_1803_ == 0)
{
lean_object* v_unused_1804_; 
v_unused_1804_ = lean_ctor_get(v_x_1788_, 0);
lean_dec(v_unused_1804_);
v___x_1792_ = v_x_1788_;
v_isShared_1793_ = v_isSharedCheck_1803_;
goto v_resetjp_1791_;
}
else
{
lean_dec(v_x_1788_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1803_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1794_; lean_object* v___x_1796_; 
v___x_1794_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___closed__0));
if (v_isShared_1793_ == 0)
{
lean_ctor_set_tag(v___x_1792_, 4);
lean_ctor_set(v___x_1792_, 0, v___x_1783_);
v___x_1796_ = v___x_1792_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v___x_1783_);
v___x_1796_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1797_ = lean_unsigned_to_nat(1u);
v___x_1798_ = lean_mk_empty_array_with_capacity(v___x_1797_);
v___x_1799_ = lean_array_push(v___x_1798_, v___x_1796_);
v___x_1800_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1784_, v___x_1794_, v___x_1799_);
v___x_1801_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1785_, v___x_1786_, v___x_1800_, v___f_1787_);
return v___x_1801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed(lean_object* v___x_1805_, lean_object* v_a_1806_, lean_object* v___x_1807_, lean_object* v___x_1808_, lean_object* v___f_1809_, lean_object* v_x_1810_, lean_object* v___y_1811_){
_start:
{
uint8_t v___x_5516__boxed_1812_; lean_object* v_res_1813_; 
v___x_5516__boxed_1812_ = lean_unbox(v___x_1808_);
v_res_1813_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5(v___x_1805_, v_a_1806_, v___x_1807_, v___x_5516__boxed_1812_, v___f_1809_, v_x_1810_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(lean_object* v_a_1815_, lean_object* v___x_1816_, uint8_t v___x_1817_, lean_object* v___f_1818_, lean_object* v_x_1819_){
_start:
{
if (lean_obj_tag(v_x_1819_) == 0)
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1843_; 
v_a_1821_ = lean_ctor_get(v_x_1819_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v_x_1819_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1823_ = v_x_1819_;
v_isShared_1824_ = v_isSharedCheck_1843_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v_x_1819_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1843_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___f_1828_; lean_object* v_val_1830_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1825_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_1826_ = lean_io_error_to_string(v_a_1821_);
v___x_1827_ = lean_box(v___x_1817_);
lean_inc(v___x_1816_);
lean_inc_ref(v___x_1826_);
v___f_1828_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__5___boxed), 7, 5);
lean_closure_set(v___f_1828_, 0, v___x_1826_);
lean_closure_set(v___f_1828_, 1, v_a_1815_);
lean_closure_set(v___f_1828_, 2, v___x_1816_);
lean_closure_set(v___f_1828_, 3, v___x_1827_);
lean_closure_set(v___f_1828_, 4, v___f_1818_);
v___x_1833_ = lean_string_append(v___x_1825_, v___x_1826_);
lean_dec_ref(v___x_1826_);
v___x_1834_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_1833_);
if (lean_obj_tag(v___x_1834_) == 0)
{
lean_object* v_a_1835_; lean_object* v___x_1837_; 
v_a_1835_ = lean_ctor_get(v___x_1834_, 0);
lean_inc(v_a_1835_);
lean_dec_ref_known(v___x_1834_, 1);
if (v_isShared_1824_ == 0)
{
lean_ctor_set_tag(v___x_1823_, 1);
lean_ctor_set(v___x_1823_, 0, v_a_1835_);
v___x_1837_ = v___x_1823_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1835_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
v_val_1830_ = v___x_1837_;
goto v___jp_1829_;
}
}
else
{
lean_object* v_a_1839_; lean_object* v___x_1841_; 
v_a_1839_ = lean_ctor_get(v___x_1834_, 0);
lean_inc(v_a_1839_);
lean_dec_ref_known(v___x_1834_, 1);
if (v_isShared_1824_ == 0)
{
lean_ctor_set(v___x_1823_, 0, v_a_1839_);
v___x_1841_ = v___x_1823_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v_a_1839_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
v_val_1830_ = v___x_1841_;
goto v___jp_1829_;
}
}
v___jp_1829_:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1831_, 0, v_val_1830_);
v___x_1832_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1816_, v___x_1817_, v___x_1831_, v___f_1828_);
return v___x_1832_;
}
}
}
else
{
lean_object* v___x_1844_; 
lean_dec_ref(v___f_1818_);
lean_dec(v___x_1816_);
lean_dec(v_a_1815_);
v___x_1844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1844_, 0, v_x_1819_);
return v___x_1844_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed(lean_object* v_a_1845_, lean_object* v___x_1846_, lean_object* v___x_1847_, lean_object* v___f_1848_, lean_object* v_x_1849_, lean_object* v___y_1850_){
_start:
{
uint8_t v___x_5571__boxed_1851_; lean_object* v_res_1852_; 
v___x_5571__boxed_1851_ = lean_unbox(v___x_1847_);
v_res_1852_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6(v_a_1845_, v___x_1846_, v___x_5571__boxed_1851_, v___f_1848_, v_x_1849_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(lean_object* v_a_1854_, lean_object* v___x_1855_, lean_object* v___x_1856_, uint8_t v___x_1857_, lean_object* v___f_1858_, lean_object* v_x_1859_){
_start:
{
if (lean_obj_tag(v_x_1859_) == 0)
{
lean_object* v___x_1861_; 
lean_dec_ref(v___f_1858_);
lean_dec(v___x_1856_);
lean_dec_ref(v___x_1855_);
lean_dec(v_a_1854_);
v___x_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1861_, 0, v_x_1859_);
return v___x_1861_;
}
else
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
lean_dec_ref_known(v_x_1859_, 1);
v___x_1862_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_1863_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_1854_, v___x_1862_, v___x_1855_);
v___x_1864_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1856_, v___x_1857_, v___x_1863_, v___f_1858_);
return v___x_1864_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed(lean_object* v_a_1865_, lean_object* v___x_1866_, lean_object* v___x_1867_, lean_object* v___x_1868_, lean_object* v___f_1869_, lean_object* v_x_1870_, lean_object* v___y_1871_){
_start:
{
uint8_t v___x_5642__boxed_1872_; lean_object* v_res_1873_; 
v___x_5642__boxed_1872_ = lean_unbox(v___x_1868_);
v_res_1873_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7(v_a_1865_, v___x_1866_, v___x_1867_, v___x_5642__boxed_1872_, v___f_1869_, v_x_1870_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(lean_object* v_val_1874_, lean_object* v___f_1875_, lean_object* v___x_1876_, uint8_t v___x_1877_, lean_object* v___f_1878_, lean_object* v___f_1879_){
_start:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1881_ = lean_apply_2(v_val_1874_, v___f_1875_, lean_box(0));
lean_inc(v___x_1876_);
v___x_1882_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1876_, v___x_1877_, v___x_1881_, v___f_1878_);
v___x_1883_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1876_, v___x_1877_, v___x_1882_, v___f_1879_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed(lean_object* v_val_1884_, lean_object* v___f_1885_, lean_object* v___x_1886_, lean_object* v___x_1887_, lean_object* v___f_1888_, lean_object* v___f_1889_, lean_object* v___y_1890_){
_start:
{
uint8_t v___x_5674__boxed_1891_; lean_object* v_res_1892_; 
v___x_5674__boxed_1891_ = lean_unbox(v___x_1887_);
v_res_1892_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8(v_val_1884_, v___f_1885_, v___x_1886_, v___x_5674__boxed_1891_, v___f_1888_, v___f_1889_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(lean_object* v___x_1893_, uint8_t v___x_1894_, lean_object* v___f_1895_, lean_object* v___f_1896_, lean_object* v___x_1897_, lean_object* v___f_1898_, lean_object* v_val_1899_, lean_object* v___f_1900_, lean_object* v_x_1901_){
_start:
{
if (lean_obj_tag(v_x_1901_) == 0)
{
lean_object* v___x_1903_; 
lean_dec_ref(v___f_1900_);
lean_dec_ref(v_val_1899_);
lean_dec_ref(v___f_1898_);
lean_dec_ref(v___x_1897_);
lean_dec_ref(v___f_1896_);
lean_dec_ref(v___f_1895_);
lean_dec(v___x_1893_);
v___x_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1903_, 0, v_x_1901_);
return v___x_1903_;
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1905_; lean_object* v___f_1906_; lean_object* v___x_1907_; lean_object* v___f_1908_; lean_object* v___x_1909_; lean_object* v___f_1910_; lean_object* v___x_1911_; lean_object* v___f_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v_a_1904_ = lean_ctor_get(v_x_1901_, 0);
lean_inc_n(v_a_1904_, 3);
lean_dec_ref_known(v_x_1901_, 1);
v___x_1905_ = lean_box(v___x_1894_);
lean_inc_n(v___x_1893_, 5);
v___f_1906_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___boxed), 6, 4);
lean_closure_set(v___f_1906_, 0, v_a_1904_);
lean_closure_set(v___f_1906_, 1, v___x_1893_);
lean_closure_set(v___f_1906_, 2, v___x_1905_);
lean_closure_set(v___f_1906_, 3, v___f_1895_);
v___x_1907_ = lean_box(v___x_1894_);
v___f_1908_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___boxed), 6, 4);
lean_closure_set(v___f_1908_, 0, v_a_1904_);
lean_closure_set(v___f_1908_, 1, v___x_1893_);
lean_closure_set(v___f_1908_, 2, v___x_1907_);
lean_closure_set(v___f_1908_, 3, v___f_1896_);
v___x_1909_ = lean_box(v___x_1894_);
v___f_1910_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1910_, 0, v_a_1904_);
lean_closure_set(v___f_1910_, 1, v___x_1897_);
lean_closure_set(v___f_1910_, 2, v___x_1893_);
lean_closure_set(v___f_1910_, 3, v___x_1909_);
lean_closure_set(v___f_1910_, 4, v___f_1898_);
v___x_1911_ = lean_box(v___x_1894_);
v___f_1912_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__8___boxed), 7, 6);
lean_closure_set(v___f_1912_, 0, v_val_1899_);
lean_closure_set(v___f_1912_, 1, v___f_1906_);
lean_closure_set(v___f_1912_, 2, v___x_1893_);
lean_closure_set(v___f_1912_, 3, v___x_1911_);
lean_closure_set(v___f_1912_, 4, v___f_1910_);
lean_closure_set(v___f_1912_, 5, v___f_1908_);
v___x_1913_ = lean_io_as_task(v___f_1912_, v___x_1893_);
lean_dec_ref(v___x_1913_);
v___x_1914_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_1915_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1893_, v___x_1894_, v___x_1914_, v___f_1900_);
return v___x_1915_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed(lean_object* v___x_1916_, lean_object* v___x_1917_, lean_object* v___f_1918_, lean_object* v___f_1919_, lean_object* v___x_1920_, lean_object* v___f_1921_, lean_object* v_val_1922_, lean_object* v___f_1923_, lean_object* v_x_1924_, lean_object* v___y_1925_){
_start:
{
uint8_t v___x_5703__boxed_1926_; lean_object* v_res_1927_; 
v___x_5703__boxed_1926_ = lean_unbox(v___x_1917_);
v_res_1927_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9(v___x_1916_, v___x_5703__boxed_1926_, v___f_1918_, v___f_1919_, v___x_1920_, v___f_1921_, v_val_1922_, v___f_1923_, v_x_1924_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(lean_object* v___x_1929_, uint8_t v___x_1930_, lean_object* v___f_1931_, lean_object* v___x_1932_, lean_object* v_x_1933_){
_start:
{
lean_object* v_val_1936_; 
if (lean_obj_tag(v_x_1933_) == 0)
{
lean_object* v___x_1939_; 
lean_dec_ref(v___x_1932_);
lean_dec_ref(v___f_1931_);
lean_dec(v___x_1929_);
v___x_1939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1939_, 0, v_x_1933_);
return v___x_1939_;
}
else
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1954_; 
v_a_1940_ = lean_ctor_get(v_x_1933_, 0);
v_isSharedCheck_1954_ = !lean_is_exclusive(v_x_1933_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1942_ = v_x_1933_;
v_isShared_1943_ = v_isSharedCheck_1954_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v_x_1933_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1954_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; 
v___x_1944_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___closed__0));
v___x_1945_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_1940_, v___x_1944_, v___x_1932_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; lean_object* v___x_1948_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___x_1945_, 1);
if (v_isShared_1943_ == 0)
{
lean_ctor_set(v___x_1942_, 0, v_a_1946_);
v___x_1948_ = v___x_1942_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_a_1946_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
v_val_1936_ = v___x_1948_;
goto v___jp_1935_;
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; 
v_a_1950_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1950_);
lean_dec_ref_known(v___x_1945_, 1);
if (v_isShared_1943_ == 0)
{
lean_ctor_set_tag(v___x_1942_, 0);
lean_ctor_set(v___x_1942_, 0, v_a_1950_);
v___x_1952_ = v___x_1942_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v_a_1950_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
v_val_1936_ = v___x_1952_;
goto v___jp_1935_;
}
}
}
}
v___jp_1935_:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1937_, 0, v_val_1936_);
v___x_1938_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1929_, v___x_1930_, v___x_1937_, v___f_1931_);
return v___x_1938_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed(lean_object* v___x_1955_, lean_object* v___x_1956_, lean_object* v___f_1957_, lean_object* v___x_1958_, lean_object* v_x_1959_, lean_object* v___y_1960_){
_start:
{
uint8_t v___x_5764__boxed_1961_; lean_object* v_res_1962_; 
v___x_5764__boxed_1961_ = lean_unbox(v___x_1956_);
v_res_1962_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10(v___x_1955_, v___x_5764__boxed_1961_, v___f_1957_, v___x_1958_, v_x_1959_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(lean_object* v___x_1964_, lean_object* v___x_1965_, uint8_t v___x_1966_, lean_object* v_a_1967_, lean_object* v___f_1968_, lean_object* v___f_1969_, lean_object* v___x_1970_, lean_object* v___f_1971_, lean_object* v_val_1972_, lean_object* v_a_1973_, lean_object* v_x_1974_){
_start:
{
if (lean_obj_tag(v_x_1974_) == 0)
{
lean_object* v___x_1976_; 
lean_dec(v_a_1973_);
lean_dec_ref(v_val_1972_);
lean_dec_ref(v___f_1971_);
lean_dec_ref(v___x_1970_);
lean_dec_ref(v___f_1969_);
lean_dec_ref(v___f_1968_);
lean_dec(v_a_1967_);
lean_dec(v___x_1965_);
lean_dec(v___x_1964_);
v___x_1976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1976_, 0, v_x_1974_);
return v___x_1976_;
}
else
{
lean_object* v_a_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_2002_; 
v_a_1977_ = lean_ctor_get(v_x_1974_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v_x_1974_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1979_ = v_x_1974_;
v_isShared_1980_ = v_isSharedCheck_2002_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_a_1977_);
lean_dec(v_x_1974_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_2002_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___f_1981_; lean_object* v___x_1982_; lean_object* v___f_1983_; lean_object* v___x_1984_; lean_object* v___f_1985_; lean_object* v___x_1986_; lean_object* v___f_1987_; lean_object* v_val_1989_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___f_1981_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1981_, 0, v_a_1977_);
lean_closure_set(v___f_1981_, 1, v___x_1964_);
v___x_1982_ = lean_box(v___x_1966_);
lean_inc_n(v___x_1965_, 3);
v___f_1983_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___boxed), 6, 4);
lean_closure_set(v___f_1983_, 0, v___x_1965_);
lean_closure_set(v___f_1983_, 1, v___x_1982_);
lean_closure_set(v___f_1983_, 2, v___f_1981_);
lean_closure_set(v___f_1983_, 3, v_a_1967_);
v___x_1984_ = lean_box(v___x_1966_);
lean_inc_ref(v___x_1970_);
v___f_1985_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__9___boxed), 10, 8);
lean_closure_set(v___f_1985_, 0, v___x_1965_);
lean_closure_set(v___f_1985_, 1, v___x_1984_);
lean_closure_set(v___f_1985_, 2, v___f_1968_);
lean_closure_set(v___f_1985_, 3, v___f_1969_);
lean_closure_set(v___f_1985_, 4, v___x_1970_);
lean_closure_set(v___f_1985_, 5, v___f_1971_);
lean_closure_set(v___f_1985_, 6, v_val_1972_);
lean_closure_set(v___f_1985_, 7, v___f_1983_);
v___x_1986_ = lean_box(v___x_1966_);
v___f_1987_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__10___boxed), 6, 4);
lean_closure_set(v___f_1987_, 0, v___x_1965_);
lean_closure_set(v___f_1987_, 1, v___x_1986_);
lean_closure_set(v___f_1987_, 2, v___f_1985_);
lean_closure_set(v___f_1987_, 3, v___x_1970_);
v___x_1992_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___closed__0));
v___x_1993_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1973_, v___x_1992_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v_a_1994_; lean_object* v___x_1996_; 
v_a_1994_ = lean_ctor_get(v___x_1993_, 0);
lean_inc(v_a_1994_);
lean_dec_ref_known(v___x_1993_, 1);
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 0, v_a_1994_);
v___x_1996_ = v___x_1979_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1994_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
v_val_1989_ = v___x_1996_;
goto v___jp_1988_;
}
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; 
v_a_1998_ = lean_ctor_get(v___x_1993_, 0);
lean_inc(v_a_1998_);
lean_dec_ref_known(v___x_1993_, 1);
if (v_isShared_1980_ == 0)
{
lean_ctor_set_tag(v___x_1979_, 0);
lean_ctor_set(v___x_1979_, 0, v_a_1998_);
v___x_2000_ = v___x_1979_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_a_1998_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
v_val_1989_ = v___x_2000_;
goto v___jp_1988_;
}
}
v___jp_1988_:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; 
v___x_1990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1990_, 0, v_val_1989_);
v___x_1991_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1965_, v___x_1966_, v___x_1990_, v___f_1987_);
return v___x_1991_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed(lean_object* v___x_2003_, lean_object* v___x_2004_, lean_object* v___x_2005_, lean_object* v_a_2006_, lean_object* v___f_2007_, lean_object* v___f_2008_, lean_object* v___x_2009_, lean_object* v___f_2010_, lean_object* v_val_2011_, lean_object* v_a_2012_, lean_object* v_x_2013_, lean_object* v___y_2014_){
_start:
{
uint8_t v___x_5827__boxed_2015_; lean_object* v_res_2016_; 
v___x_5827__boxed_2015_ = lean_unbox(v___x_2005_);
v_res_2016_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11(v___x_2003_, v___x_2004_, v___x_5827__boxed_2015_, v_a_2006_, v___f_2007_, v___f_2008_, v___x_2009_, v___f_2010_, v_val_2011_, v_a_2012_, v_x_2013_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(lean_object* v___x_2018_, lean_object* v___x_2019_, uint8_t v___x_2020_, lean_object* v_a_2021_, lean_object* v___f_2022_, lean_object* v___f_2023_, lean_object* v___x_2024_, lean_object* v___f_2025_, lean_object* v_val_2026_, lean_object* v_x_2027_){
_start:
{
if (lean_obj_tag(v_x_2027_) == 0)
{
lean_object* v___x_2029_; 
lean_dec_ref(v_val_2026_);
lean_dec_ref(v___f_2025_);
lean_dec_ref(v___x_2024_);
lean_dec_ref(v___f_2023_);
lean_dec_ref(v___f_2022_);
lean_dec(v_a_2021_);
lean_dec(v___x_2019_);
lean_dec(v___x_2018_);
v___x_2029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2029_, 0, v_x_2027_);
return v___x_2029_;
}
else
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2050_; 
v_a_2030_ = lean_ctor_get(v_x_2027_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v_x_2027_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2032_ = v_x_2027_;
v_isShared_2033_ = v_isSharedCheck_2050_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v_x_2027_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2050_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2034_; lean_object* v___f_2035_; lean_object* v_val_2037_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2034_ = lean_box(v___x_2020_);
lean_inc(v_a_2030_);
lean_inc(v___x_2019_);
v___f_2035_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__11___boxed), 12, 10);
lean_closure_set(v___f_2035_, 0, v___x_2018_);
lean_closure_set(v___f_2035_, 1, v___x_2019_);
lean_closure_set(v___f_2035_, 2, v___x_2034_);
lean_closure_set(v___f_2035_, 3, v_a_2021_);
lean_closure_set(v___f_2035_, 4, v___f_2022_);
lean_closure_set(v___f_2035_, 5, v___f_2023_);
lean_closure_set(v___f_2035_, 6, v___x_2024_);
lean_closure_set(v___f_2035_, 7, v___f_2025_);
lean_closure_set(v___f_2035_, 8, v_val_2026_);
lean_closure_set(v___f_2035_, 9, v_a_2030_);
v___x_2040_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___closed__0));
v___x_2041_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2030_, v___x_2040_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; lean_object* v___x_2044_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2041_, 1);
if (v_isShared_2033_ == 0)
{
lean_ctor_set(v___x_2032_, 0, v_a_2042_);
v___x_2044_ = v___x_2032_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v_a_2042_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
v_val_2037_ = v___x_2044_;
goto v___jp_2036_;
}
}
else
{
lean_object* v_a_2046_; lean_object* v___x_2048_; 
v_a_2046_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_a_2046_);
lean_dec_ref_known(v___x_2041_, 1);
if (v_isShared_2033_ == 0)
{
lean_ctor_set_tag(v___x_2032_, 0);
lean_ctor_set(v___x_2032_, 0, v_a_2046_);
v___x_2048_ = v___x_2032_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2046_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
v_val_2037_ = v___x_2048_;
goto v___jp_2036_;
}
}
v___jp_2036_:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2038_, 0, v_val_2037_);
v___x_2039_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2019_, v___x_2020_, v___x_2038_, v___f_2035_);
return v___x_2039_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed(lean_object* v___x_2051_, lean_object* v___x_2052_, lean_object* v___x_2053_, lean_object* v_a_2054_, lean_object* v___f_2055_, lean_object* v___f_2056_, lean_object* v___x_2057_, lean_object* v___f_2058_, lean_object* v_val_2059_, lean_object* v_x_2060_, lean_object* v___y_2061_){
_start:
{
uint8_t v___x_5921__boxed_2062_; lean_object* v_res_2063_; 
v___x_5921__boxed_2062_ = lean_unbox(v___x_2053_);
v_res_2063_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12(v___x_2051_, v___x_2052_, v___x_5921__boxed_2062_, v_a_2054_, v___f_2055_, v___f_2056_, v___x_2057_, v___f_2058_, v_val_2059_, v_x_2060_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(lean_object* v___x_2064_, uint8_t v___x_2065_, lean_object* v_a_2066_, lean_object* v___f_2067_, lean_object* v___f_2068_, lean_object* v___f_2069_, lean_object* v_val_2070_, lean_object* v_x_2071_){
_start:
{
if (lean_obj_tag(v_x_2071_) == 0)
{
lean_object* v___x_2073_; 
lean_dec_ref(v_val_2070_);
lean_dec_ref(v___f_2069_);
lean_dec_ref(v___f_2068_);
lean_dec_ref(v___f_2067_);
lean_dec(v_a_2066_);
lean_dec(v___x_2064_);
v___x_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2073_, 0, v_x_2071_);
return v___x_2073_;
}
else
{
lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2095_; 
v_a_2074_ = lean_ctor_get(v_x_2071_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v_x_2071_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2076_ = v_x_2071_;
v_isShared_2077_ = v_isSharedCheck_2095_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v_x_2071_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2095_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___f_2081_; lean_object* v_val_2083_; lean_object* v___x_2086_; 
v___x_2078_ = lean_unsigned_to_nat(0u);
v___x_2079_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_2080_ = lean_box(v___x_2065_);
v___f_2081_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__12___boxed), 11, 9);
lean_closure_set(v___f_2081_, 0, v___x_2064_);
lean_closure_set(v___f_2081_, 1, v___x_2078_);
lean_closure_set(v___f_2081_, 2, v___x_2080_);
lean_closure_set(v___f_2081_, 3, v_a_2066_);
lean_closure_set(v___f_2081_, 4, v___f_2067_);
lean_closure_set(v___f_2081_, 5, v___f_2068_);
lean_closure_set(v___f_2081_, 6, v___x_2079_);
lean_closure_set(v___f_2081_, 7, v___f_2069_);
lean_closure_set(v___f_2081_, 8, v_val_2070_);
v___x_2086_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2074_, v___x_2079_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v_a_2087_; lean_object* v___x_2089_; 
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
lean_inc(v_a_2087_);
lean_dec_ref_known(v___x_2086_, 1);
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 0, v_a_2087_);
v___x_2089_ = v___x_2076_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v_a_2087_);
v___x_2089_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
v_val_2083_ = v___x_2089_;
goto v___jp_2082_;
}
}
else
{
lean_object* v_a_2091_; lean_object* v___x_2093_; 
v_a_2091_ = lean_ctor_get(v___x_2086_, 0);
lean_inc(v_a_2091_);
lean_dec_ref_known(v___x_2086_, 1);
if (v_isShared_2077_ == 0)
{
lean_ctor_set_tag(v___x_2076_, 0);
lean_ctor_set(v___x_2076_, 0, v_a_2091_);
v___x_2093_ = v___x_2076_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_a_2091_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
v_val_2083_ = v___x_2093_;
goto v___jp_2082_;
}
}
v___jp_2082_:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2084_, 0, v_val_2083_);
v___x_2085_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2078_, v___x_2065_, v___x_2084_, v___f_2081_);
return v___x_2085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed(lean_object* v___x_2096_, lean_object* v___x_2097_, lean_object* v_a_2098_, lean_object* v___f_2099_, lean_object* v___f_2100_, lean_object* v___f_2101_, lean_object* v_val_2102_, lean_object* v_x_2103_, lean_object* v___y_2104_){
_start:
{
uint8_t v___x_6001__boxed_2105_; lean_object* v_res_2106_; 
v___x_6001__boxed_2105_ = lean_unbox(v___x_2097_);
v_res_2106_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13(v___x_2096_, v___x_6001__boxed_2105_, v_a_2098_, v___f_2099_, v___f_2100_, v___f_2101_, v_val_2102_, v_x_2103_);
return v_res_2106_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0(void){
_start:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; 
v___x_2107_ = lean_box(1);
v___x_2108_ = lean_unsigned_to_nat(2u);
v___x_2109_ = lean_mk_empty_array_with_capacity(v___x_2108_);
v___x_2110_ = lean_array_push(v___x_2109_, v___x_2107_);
return v___x_2110_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(lean_object* v___x_2111_, lean_object* v_x_2112_){
_start:
{
lean_object* v_val_2115_; 
if (lean_obj_tag(v_x_2112_) == 0)
{
lean_object* v___x_2117_; 
lean_dec(v___x_2111_);
v___x_2117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2117_, 0, v_x_2112_);
return v___x_2117_;
}
else
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2133_; 
v_a_2118_ = lean_ctor_get(v_x_2112_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v_x_2112_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2120_ = v_x_2112_;
v_isShared_2121_ = v_isSharedCheck_2133_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v_x_2112_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2133_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2122_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___closed__0);
v___x_2123_ = lean_array_push(v___x_2122_, v___x_2111_);
v___x_2124_ = l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1(v_a_2118_, v___x_2123_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v_a_2125_; lean_object* v___x_2127_; 
v_a_2125_ = lean_ctor_get(v___x_2124_, 0);
lean_inc(v_a_2125_);
lean_dec_ref_known(v___x_2124_, 1);
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 0, v_a_2125_);
v___x_2127_ = v___x_2120_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v_a_2125_);
v___x_2127_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
v_val_2115_ = v___x_2127_;
goto v___jp_2114_;
}
}
else
{
lean_object* v_a_2129_; lean_object* v___x_2131_; 
v_a_2129_ = lean_ctor_get(v___x_2124_, 0);
lean_inc(v_a_2129_);
lean_dec_ref_known(v___x_2124_, 1);
if (v_isShared_2121_ == 0)
{
lean_ctor_set_tag(v___x_2120_, 0);
lean_ctor_set(v___x_2120_, 0, v_a_2129_);
v___x_2131_ = v___x_2120_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_a_2129_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
v_val_2115_ = v___x_2131_;
goto v___jp_2114_;
}
}
}
}
v___jp_2114_:
{
lean_object* v___x_2116_; 
v___x_2116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2116_, 0, v_val_2115_);
return v___x_2116_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed(lean_object* v___x_2134_, lean_object* v_x_2135_, lean_object* v___y_2136_){
_start:
{
lean_object* v_res_2137_; 
v_res_2137_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14(v___x_2134_, v_x_2135_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(size_t v_sz_2138_, size_t v_i_2139_, lean_object* v_bs_2140_){
_start:
{
uint8_t v___x_2141_; 
v___x_2141_ = lean_usize_dec_lt(v_i_2139_, v_sz_2138_);
if (v___x_2141_ == 0)
{
return v_bs_2140_;
}
else
{
lean_object* v_v_2142_; lean_object* v_fst_2143_; lean_object* v_snd_2144_; lean_object* v___x_2145_; lean_object* v_bs_x27_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; size_t v___x_2154_; size_t v___x_2155_; lean_object* v___x_2156_; 
v_v_2142_ = lean_array_uget_borrowed(v_bs_2140_, v_i_2139_);
v_fst_2143_ = lean_ctor_get(v_v_2142_, 0);
lean_inc(v_fst_2143_);
v_snd_2144_ = lean_ctor_get(v_v_2142_, 1);
lean_inc(v_snd_2144_);
v___x_2145_ = lean_unsigned_to_nat(0u);
v_bs_x27_2146_ = lean_array_uset(v_bs_2140_, v_i_2139_, v___x_2145_);
v___x_2147_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2147_, 0, v_fst_2143_);
v___x_2148_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2148_, 0, v_snd_2144_);
v___x_2149_ = lean_unsigned_to_nat(2u);
v___x_2150_ = lean_mk_empty_array_with_capacity(v___x_2149_);
v___x_2151_ = lean_array_push(v___x_2150_, v___x_2147_);
v___x_2152_ = lean_array_push(v___x_2151_, v___x_2148_);
v___x_2153_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2153_, 0, v___x_2152_);
v___x_2154_ = ((size_t)1ULL);
v___x_2155_ = lean_usize_add(v_i_2139_, v___x_2154_);
v___x_2156_ = lean_array_uset(v_bs_x27_2146_, v_i_2139_, v___x_2153_);
v_i_2139_ = v___x_2155_;
v_bs_2140_ = v___x_2156_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0___boxed(lean_object* v_sz_2158_, lean_object* v_i_2159_, lean_object* v_bs_2160_){
_start:
{
size_t v_sz_boxed_2161_; size_t v_i_boxed_2162_; lean_object* v_res_2163_; 
v_sz_boxed_2161_ = lean_unbox_usize(v_sz_2158_);
lean_dec(v_sz_2158_);
v_i_boxed_2162_ = lean_unbox_usize(v_i_2159_);
lean_dec(v_i_2159_);
v_res_2163_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_boxed_2161_, v_i_boxed_2162_, v_bs_2160_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(lean_object* v_r_2167_, lean_object* v_method_2168_, lean_object* v___f_2169_, lean_object* v___f_2170_, lean_object* v___f_2171_, lean_object* v_x_2172_){
_start:
{
uint8_t v___y_2175_; lean_object* v___y_2176_; lean_object* v___y_2177_; lean_object* v_val_2178_; uint8_t v___y_2182_; lean_object* v___y_2183_; lean_object* v___y_2184_; lean_object* v_val_2185_; lean_object* v___y_2189_; uint8_t v___y_2190_; lean_object* v___y_2191_; lean_object* v_val_2192_; 
if (lean_obj_tag(v_x_2172_) == 0)
{
lean_object* v___x_2195_; 
lean_dec_ref(v___f_2171_);
lean_dec_ref(v___f_2170_);
lean_dec_ref(v___f_2169_);
lean_dec_ref(v_r_2167_);
v___x_2195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2195_, 0, v_x_2172_);
return v___x_2195_;
}
else
{
lean_object* v_a_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2289_; 
v_a_2196_ = lean_ctor_get(v_x_2172_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v_x_2172_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2198_ = v_x_2172_;
v_isShared_2199_ = v_isSharedCheck_2289_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_a_2196_);
lean_dec(v_x_2172_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2289_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v___y_2201_; lean_object* v___y_2202_; uint16_t v_status_2216_; lean_object* v_headers_2217_; lean_object* v_body_2218_; lean_object* v_stream_2219_; lean_object* v___x_2220_; lean_object* v___y_2222_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; uint8_t v___x_2285_; 
v_status_2216_ = lean_ctor_get_uint16(v_r_2167_, sizeof(void*)*3);
v_headers_2217_ = lean_ctor_get(v_r_2167_, 0);
lean_inc_ref(v_headers_2217_);
v_body_2218_ = lean_ctor_get(v_r_2167_, 1);
lean_inc_ref(v_body_2218_);
v_stream_2219_ = lean_ctor_get(v_r_2167_, 2);
lean_inc(v_stream_2219_);
lean_dec_ref(v_r_2167_);
v___x_2220_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_2281_ = lean_uint16_to_nat(v_status_2216_);
v___x_2282_ = lean_nat_to_int(v___x_2281_);
v___x_2283_ = lean_nat_abs(v___x_2282_);
v___x_2284_ = lean_cstr_to_nat("9007199254740991");
v___x_2285_ = lean_nat_dec_le(v___x_2283_, v___x_2284_);
lean_dec(v___x_2283_);
if (v___x_2285_ == 0)
{
lean_object* v___x_2286_; 
v___x_2286_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2282_);
v___y_2222_ = v___x_2286_;
goto v___jp_2221_;
}
else
{
double v___x_2287_; lean_object* v___x_2288_; 
v___x_2287_ = l_Float_ofInt(v___x_2282_);
lean_dec(v___x_2282_);
v___x_2288_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2288_, 0, v___x_2287_);
v___y_2222_ = v___x_2288_;
goto v___jp_2221_;
}
v___jp_2200_:
{
lean_object* v___f_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; uint8_t v___x_2206_; lean_object* v___x_2207_; 
v___f_2203_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2203_, 0, v___y_2202_);
lean_closure_set(v___f_2203_, 1, v___y_2201_);
v___x_2204_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2205_ = lean_unsigned_to_nat(0u);
v___x_2206_ = 0;
v___x_2207_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2196_, v___x_2204_);
if (lean_obj_tag(v___x_2207_) == 0)
{
lean_object* v_a_2208_; lean_object* v___x_2210_; 
v_a_2208_ = lean_ctor_get(v___x_2207_, 0);
lean_inc(v_a_2208_);
lean_dec_ref_known(v___x_2207_, 1);
if (v_isShared_2199_ == 0)
{
lean_ctor_set(v___x_2198_, 0, v_a_2208_);
v___x_2210_ = v___x_2198_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_a_2208_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
v___y_2189_ = v___x_2205_;
v___y_2190_ = v___x_2206_;
v___y_2191_ = v___f_2203_;
v_val_2192_ = v___x_2210_;
goto v___jp_2188_;
}
}
else
{
lean_object* v_a_2212_; lean_object* v___x_2214_; 
v_a_2212_ = lean_ctor_get(v___x_2207_, 0);
lean_inc(v_a_2212_);
lean_dec_ref_known(v___x_2207_, 1);
if (v_isShared_2199_ == 0)
{
lean_ctor_set_tag(v___x_2198_, 0);
lean_ctor_set(v___x_2198_, 0, v_a_2212_);
v___x_2214_ = v___x_2198_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_a_2212_);
v___x_2214_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
v___y_2189_ = v___x_2205_;
v___y_2190_ = v___x_2206_;
v___y_2191_ = v___f_2203_;
v_val_2192_ = v___x_2214_;
goto v___jp_2188_;
}
}
}
v___jp_2221_:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; size_t v_sz_2225_; size_t v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2220_);
lean_ctor_set(v___x_2223_, 1, v___y_2222_);
v___x_2224_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v_sz_2225_ = lean_array_size(v_headers_2217_);
v___x_2226_ = ((size_t)0ULL);
v___x_2227_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_2225_, v___x_2226_, v_headers_2217_);
v___x_2228_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2227_);
v___x_2229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2224_);
lean_ctor_set(v___x_2229_, 1, v___x_2228_);
v___x_2230_ = lean_box(0);
v___x_2231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2229_);
lean_ctor_set(v___x_2231_, 1, v___x_2230_);
v___x_2232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2232_, 0, v___x_2223_);
lean_ctor_set(v___x_2232_, 1, v___x_2231_);
v___x_2233_ = l_Lasm_JS_obj(v___x_2232_);
if (lean_obj_tag(v_stream_2219_) == 0)
{
uint8_t v___x_2234_; 
lean_dec_ref(v___f_2171_);
lean_dec_ref(v___f_2170_);
lean_dec_ref(v___f_2169_);
v___x_2234_ = l_Lasm_Fetch_bodyless(v_method_2168_, v_status_2216_);
if (v___x_2234_ == 0)
{
lean_object* v___x_2235_; 
v___x_2235_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2235_, 0, v_body_2218_);
v___y_2201_ = v___x_2233_;
v___y_2202_ = v___x_2235_;
goto v___jp_2200_;
}
else
{
lean_object* v___x_2236_; 
lean_dec_ref(v_body_2218_);
v___x_2236_ = lean_box(1);
v___y_2201_ = v___x_2233_;
v___y_2202_ = v___x_2236_;
goto v___jp_2200_;
}
}
else
{
lean_object* v_val_2237_; uint8_t v___x_2238_; 
lean_dec_ref(v_body_2218_);
lean_del_object(v___x_2198_);
v_val_2237_ = lean_ctor_get(v_stream_2219_, 0);
lean_inc(v_val_2237_);
lean_dec_ref_known(v_stream_2219_, 1);
v___x_2238_ = l_Lasm_Fetch_bodyless(v_method_2168_, v_status_2216_);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; lean_object* v___f_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2239_ = lean_box(v___x_2238_);
lean_inc(v_a_2196_);
v___f_2240_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__13___boxed), 9, 7);
lean_closure_set(v___f_2240_, 0, v___x_2233_);
lean_closure_set(v___f_2240_, 1, v___x_2239_);
lean_closure_set(v___f_2240_, 2, v_a_2196_);
lean_closure_set(v___f_2240_, 3, v___f_2169_);
lean_closure_set(v___f_2240_, 4, v___f_2170_);
lean_closure_set(v___f_2240_, 5, v___f_2171_);
lean_closure_set(v___f_2240_, 6, v_val_2237_);
v___x_2241_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__2));
v___x_2242_ = lean_unsigned_to_nat(0u);
v___x_2243_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2196_, v___x_2241_);
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
v___y_2182_ = v___x_2238_;
v___y_2183_ = v___f_2240_;
v___y_2184_ = v___x_2242_;
v_val_2185_ = v___x_2249_;
goto v___jp_2181_;
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
v___y_2182_ = v___x_2238_;
v___y_2183_ = v___f_2240_;
v___y_2184_ = v___x_2242_;
v_val_2185_ = v___x_2257_;
goto v___jp_2181_;
}
}
}
}
else
{
lean_object* v___f_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; uint8_t v___x_2263_; lean_object* v___x_2264_; 
lean_dec(v_val_2237_);
lean_dec_ref(v___f_2171_);
lean_dec_ref(v___f_2170_);
lean_dec_ref(v___f_2169_);
v___f_2260_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__14___boxed), 3, 1);
lean_closure_set(v___f_2260_, 0, v___x_2233_);
v___x_2261_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__2___closed__0));
v___x_2262_ = lean_unsigned_to_nat(0u);
v___x_2263_ = 0;
v___x_2264_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_2196_, v___x_2261_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v_a_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2272_; 
v_a_2265_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2267_ = v___x_2264_;
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_a_2265_);
lean_dec(v___x_2264_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
lean_object* v___x_2270_; 
if (v_isShared_2268_ == 0)
{
lean_ctor_set_tag(v___x_2267_, 1);
v___x_2270_ = v___x_2267_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_a_2265_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
v___y_2175_ = v___x_2263_;
v___y_2176_ = v___x_2262_;
v___y_2177_ = v___f_2260_;
v_val_2178_ = v___x_2270_;
goto v___jp_2174_;
}
}
}
else
{
lean_object* v_a_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2280_; 
v_a_2273_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2275_ = v___x_2264_;
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_a_2273_);
lean_dec(v___x_2264_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2278_; 
if (v_isShared_2276_ == 0)
{
lean_ctor_set_tag(v___x_2275_, 0);
v___x_2278_ = v___x_2275_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_a_2273_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
v___y_2175_ = v___x_2263_;
v___y_2176_ = v___x_2262_;
v___y_2177_ = v___f_2260_;
v_val_2178_ = v___x_2278_;
goto v___jp_2174_;
}
}
}
}
}
}
}
}
v___jp_2174_:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2179_, 0, v_val_2178_);
v___x_2180_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2176_, v___y_2175_, v___x_2179_, v___y_2177_);
return v___x_2180_;
}
v___jp_2181_:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2186_, 0, v_val_2185_);
v___x_2187_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2184_, v___y_2182_, v___x_2186_, v___y_2183_);
return v___x_2187_;
}
v___jp_2188_:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; 
v___x_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2193_, 0, v_val_2192_);
v___x_2194_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_2189_, v___y_2190_, v___x_2193_, v___y_2191_);
return v___x_2194_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed(lean_object* v_r_2290_, lean_object* v_method_2291_, lean_object* v___f_2292_, lean_object* v___f_2293_, lean_object* v___f_2294_, lean_object* v_x_2295_, lean_object* v___y_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15(v_r_2290_, v_method_2291_, v___f_2292_, v___f_2293_, v___f_2294_, v_x_2295_);
lean_dec_ref(v_method_2291_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(lean_object* v_method_2299_, lean_object* v_r_2300_){
_start:
{
lean_object* v___f_2302_; lean_object* v___f_2303_; lean_object* v___x_2304_; uint8_t v___x_2305_; lean_object* v_val_2307_; lean_object* v___x_2310_; 
v___f_2302_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_2303_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___boxed), 7, 5);
lean_closure_set(v___f_2303_, 0, v_r_2300_);
lean_closure_set(v___f_2303_, 1, v_method_2299_);
lean_closure_set(v___f_2303_, 2, v___f_2302_);
lean_closure_set(v___f_2303_, 3, v___f_2302_);
lean_closure_set(v___f_2303_, 4, v___f_2302_);
v___x_2304_ = lean_unsigned_to_nat(0u);
v___x_2305_ = 0;
v___x_2310_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2310_) == 0)
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2318_; 
v_a_2311_ = lean_ctor_get(v___x_2310_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2313_ = v___x_2310_;
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___x_2310_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2316_; 
if (v_isShared_2314_ == 0)
{
lean_ctor_set_tag(v___x_2313_, 1);
v___x_2316_ = v___x_2313_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_a_2311_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
v_val_2307_ = v___x_2316_;
goto v___jp_2306_;
}
}
}
else
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2326_; 
v_a_2319_ = lean_ctor_get(v___x_2310_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2321_ = v___x_2310_;
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2310_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2324_; 
if (v_isShared_2322_ == 0)
{
lean_ctor_set_tag(v___x_2321_, 0);
v___x_2324_ = v___x_2321_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_a_2319_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
v_val_2307_ = v___x_2324_;
goto v___jp_2306_;
}
}
}
v___jp_2306_:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2308_, 0, v_val_2307_);
v___x_2309_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2304_, v___x_2305_, v___x_2308_, v___f_2303_);
return v___x_2309_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___boxed(lean_object* v_method_2327_, lean_object* v_r_2328_, lean_object* v_a_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v_method_2327_, v_r_2328_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2332_ = lean_box(0);
v___x_2333_ = lean_st_mk_ref(v___x_2332_);
v___x_2334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2333_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2____boxed(lean_object* v_a_2335_){
_start:
{
lean_object* v_res_2336_; 
v_res_2336_ = l___private_Lasm_Fetch_0__Lasm_Fetch_initFn_00___x40_Lasm_Fetch_221885197____hygCtx___hyg_2_();
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0(lean_object* v_x_2337_){
_start:
{
if (lean_obj_tag(v_x_2337_) == 0)
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2347_; 
v_a_2339_ = lean_ctor_get(v_x_2337_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v_x_2337_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2341_ = v_x_2337_;
v_isShared_2342_ = v_isSharedCheck_2347_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v_x_2337_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2347_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2344_; 
if (v_isShared_2342_ == 0)
{
v___x_2344_ = v___x_2341_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_a_2339_);
v___x_2344_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
lean_object* v___x_2345_; 
v___x_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2344_);
return v___x_2345_;
}
}
}
else
{
lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2358_; 
v_a_2348_ = lean_ctor_get(v_x_2337_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v_x_2337_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2350_ = v_x_2337_;
v_isShared_2351_ = v_isSharedCheck_2358_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v_x_2337_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2358_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2355_; 
v___x_2352_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2353_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2353_, 0, v_a_2348_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 0, v___x_2353_);
v___x_2355_ = v___x_2350_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v___x_2353_);
v___x_2355_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
lean_object* v___x_2356_; 
v___x_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2355_);
return v___x_2356_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__0___boxed(lean_object* v_x_2359_, lean_object* v___y_2360_){
_start:
{
lean_object* v_res_2361_; 
v_res_2361_ = l_Lasm_Fetch_jsFetchHandler___lam__0(v_x_2359_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1(lean_object* v___y_2362_, lean_object* v___x_2363_, lean_object* v___f_2364_, lean_object* v_x_2365_){
_start:
{
if (lean_obj_tag(v_x_2365_) == 0)
{
lean_object* v_a_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2375_; 
lean_dec_ref(v___f_2364_);
lean_dec(v___x_2363_);
lean_dec_ref(v___y_2362_);
v_a_2367_ = lean_ctor_get(v_x_2365_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v_x_2365_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2369_ = v_x_2365_;
v_isShared_2370_ = v_isSharedCheck_2375_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_a_2367_);
lean_dec(v_x_2365_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2375_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
lean_object* v___x_2372_; 
if (v_isShared_2370_ == 0)
{
v___x_2372_ = v___x_2369_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_a_2367_);
v___x_2372_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
lean_object* v___x_2373_; 
v___x_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2372_);
return v___x_2373_;
}
}
}
else
{
lean_object* v_a_2376_; uint8_t v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v_a_2376_ = lean_ctor_get(v_x_2365_, 0);
lean_inc(v_a_2376_);
lean_dec_ref_known(v_x_2365_, 1);
v___x_2377_ = 0;
v___x_2378_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse(v___y_2362_, v_a_2376_);
v___x_2379_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2363_, v___x_2377_, v___x_2378_, v___f_2364_);
return v___x_2379_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__1___boxed(lean_object* v___y_2380_, lean_object* v___x_2381_, lean_object* v___f_2382_, lean_object* v_x_2383_, lean_object* v___y_2384_){
_start:
{
lean_object* v_res_2385_; 
v_res_2385_ = l_Lasm_Fetch_jsFetchHandler___lam__1(v___y_2380_, v___x_2381_, v___f_2382_, v_x_2383_);
return v_res_2385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2(lean_object* v_handler_2386_, lean_object* v___x_2387_, lean_object* v___f_2388_, lean_object* v_req_2389_){
_start:
{
uint8_t v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2391_ = 0;
v___x_2392_ = l_Lasm_Fetch_respond(v_handler_2386_, v_req_2389_);
v___x_2393_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2387_, v___x_2391_, v___x_2392_, v___f_2388_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__2___boxed(lean_object* v_handler_2394_, lean_object* v___x_2395_, lean_object* v___f_2396_, lean_object* v_req_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l_Lasm_Fetch_jsFetchHandler___lam__2(v_handler_2394_, v___x_2395_, v___f_2396_, v_req_2397_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3(lean_object* v___f_2400_, lean_object* v_x_2401_){
_start:
{
if (lean_obj_tag(v_x_2401_) == 0)
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2411_; 
lean_dec_ref(v___f_2400_);
v_a_2403_ = lean_ctor_get(v_x_2401_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v_x_2401_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2405_ = v_x_2401_;
v_isShared_2406_ = v_isSharedCheck_2411_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v_x_2401_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2411_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
if (v_isShared_2406_ == 0)
{
v___x_2408_ = v___x_2405_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_a_2403_);
v___x_2408_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
lean_object* v___x_2409_; 
v___x_2409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2408_);
return v___x_2409_;
}
}
}
else
{
lean_object* v_a_2412_; lean_object* v___x_2413_; 
v_a_2412_ = lean_ctor_get(v_x_2401_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v_x_2401_, 1);
v___x_2413_ = lean_apply_2(v___f_2400_, v_a_2412_, lean_box(0));
return v___x_2413_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__3___boxed(lean_object* v___f_2414_, lean_object* v_x_2415_, lean_object* v___y_2416_){
_start:
{
lean_object* v_res_2417_; 
v_res_2417_ = l_Lasm_Fetch_jsFetchHandler___lam__3(v___f_2414_, v_x_2415_);
return v_res_2417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8(lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v_headers_2420_, lean_object* v___f_2421_, lean_object* v___x_2422_, uint8_t v___x_2423_, lean_object* v___f_2424_, lean_object* v_x_2425_){
_start:
{
if (lean_obj_tag(v_x_2425_) == 0)
{
lean_object* v_a_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2435_; 
lean_dec_ref(v___f_2424_);
lean_dec(v___x_2422_);
lean_dec_ref(v___f_2421_);
lean_dec_ref(v_headers_2420_);
lean_dec_ref(v___y_2419_);
lean_dec_ref(v___y_2418_);
v_a_2427_ = lean_ctor_get(v_x_2425_, 0);
v_isSharedCheck_2435_ = !lean_is_exclusive(v_x_2425_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2429_ = v_x_2425_;
v_isShared_2430_ = v_isSharedCheck_2435_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_a_2427_);
lean_dec(v_x_2425_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2435_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2432_; 
if (v_isShared_2430_ == 0)
{
v___x_2432_ = v___x_2429_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v_a_2427_);
v___x_2432_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
lean_object* v___x_2433_; 
v___x_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2432_);
return v___x_2433_;
}
}
}
else
{
lean_object* v_a_2436_; lean_object* v___x_2438_; uint8_t v_isShared_2439_; uint8_t v_isSharedCheck_2446_; 
v_a_2436_ = lean_ctor_get(v_x_2425_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v_x_2425_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2438_ = v_x_2425_;
v_isShared_2439_ = v_isSharedCheck_2446_;
goto v_resetjp_2437_;
}
else
{
lean_inc(v_a_2436_);
lean_dec(v_x_2425_);
v___x_2438_ = lean_box(0);
v_isShared_2439_ = v_isSharedCheck_2446_;
goto v_resetjp_2437_;
}
v_resetjp_2437_:
{
lean_object* v___x_2440_; lean_object* v___x_2442_; 
v___x_2440_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2440_, 0, v___y_2418_);
lean_ctor_set(v___x_2440_, 1, v___y_2419_);
lean_ctor_set(v___x_2440_, 2, v_headers_2420_);
lean_ctor_set(v___x_2440_, 3, v_a_2436_);
lean_ctor_set(v___x_2440_, 4, v___f_2421_);
if (v_isShared_2439_ == 0)
{
lean_ctor_set(v___x_2438_, 0, v___x_2440_);
v___x_2442_ = v___x_2438_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v___x_2440_);
v___x_2442_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2442_);
v___x_2444_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2422_, v___x_2423_, v___x_2443_, v___f_2424_);
return v___x_2444_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__8___boxed(lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v_headers_2449_, lean_object* v___f_2450_, lean_object* v___x_2451_, lean_object* v___x_2452_, lean_object* v___f_2453_, lean_object* v_x_2454_, lean_object* v___y_2455_){
_start:
{
uint8_t v___x_7603__boxed_2456_; lean_object* v_res_2457_; 
v___x_7603__boxed_2456_ = lean_unbox(v___x_2452_);
v_res_2457_ = l_Lasm_Fetch_jsFetchHandler___lam__8(v___y_2447_, v___y_2448_, v_headers_2449_, v___f_2450_, v___x_2451_, v___x_7603__boxed_2456_, v___f_2453_, v_x_2454_);
return v_res_2457_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2462_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2463_ = lean_string_utf8_byte_size(v___x_2462_);
return v___x_2463_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; uint8_t v___x_2466_; 
v___x_2464_ = lean_unsigned_to_nat(0u);
v___x_2465_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__4);
v___x_2466_ = lean_nat_dec_eq(v___x_2465_, v___x_2464_);
return v___x_2466_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; 
v___x_2471_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__9));
v___x_2472_ = lean_unsigned_to_nat(46u);
v___x_2473_ = lean_unsigned_to_nat(193u);
v___x_2474_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__8));
v___x_2475_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__7));
v___x_2476_ = l_mkPanicMessageWithDecl(v___x_2475_, v___x_2474_, v___x_2473_, v___x_2472_, v___x_2471_);
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(lean_object* v_context_2478_, lean_object* v_d_2479_){
_start:
{
lean_object* v___y_2482_; lean_object* v___y_2483_; 
if (lean_obj_tag(v_d_2479_) == 6)
{
lean_object* v_b_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2494_; 
v_b_2487_ = lean_ctor_get(v_d_2479_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v_d_2479_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2489_ = v_d_2479_;
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_b_2487_);
lean_dec(v_d_2479_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2492_; 
if (v_isShared_2490_ == 0)
{
lean_ctor_set_tag(v___x_2489_, 0);
v___x_2492_ = v___x_2489_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_b_2487_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
else
{
lean_object* v___x_2495_; lean_object* v_received_2497_; 
v___x_2495_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (lean_obj_tag(v_d_2479_) == 9)
{
lean_object* v_value_2511_; lean_object* v_description_2512_; uint8_t v___x_2513_; 
v_value_2511_ = lean_ctor_get(v_d_2479_, 0);
v_description_2512_ = lean_ctor_get(v_d_2479_, 1);
v___x_2513_ = lean_string_dec_eq(v_description_2512_, v___x_2495_);
if (v___x_2513_ == 0)
{
goto v___jp_2509_;
}
else
{
uint32_t v___x_2514_; uint64_t v___x_2515_; lean_object* v___x_2516_; uint32_t v___x_2517_; lean_object* v___x_2518_; 
lean_inc_n(v_value_2511_, 2);
lean_dec_ref_known(v_d_2479_, 2);
v___x_2514_ = 206;
v___x_2515_ = 0ULL;
v___x_2516_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2516_, 0, v_value_2511_);
lean_ctor_set(v___x_2516_, 1, v___x_2495_);
v___x_2517_ = lasm_js_value_handle(v_value_2511_);
lean_dec(v_value_2511_);
v___x_2518_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2514_, v___x_2515_, v___x_2516_, v___x_2517_);
lean_dec_ref_known(v___x_2516_, 2);
if (lean_obj_tag(v___x_2518_) == 0)
{
lean_object* v_a_2519_; uint8_t v___x_2520_; 
v_a_2519_ = lean_ctor_get(v___x_2518_, 0);
lean_inc(v_a_2519_);
lean_dec_ref_known(v___x_2518_, 1);
v___x_2520_ = lean_string_validate_utf8(v_a_2519_);
if (v___x_2520_ == 0)
{
lean_object* v___x_2521_; lean_object* v___x_2522_; 
lean_dec(v_a_2519_);
v___x_2521_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_2522_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2521_);
v_received_2497_ = v___x_2522_;
goto v___jp_2496_;
}
else
{
lean_object* v___x_2523_; 
v___x_2523_ = lean_string_from_utf8_unchecked(v_a_2519_);
v_received_2497_ = v___x_2523_;
goto v___jp_2496_;
}
}
else
{
lean_object* v___x_2524_; 
lean_dec_ref_known(v___x_2518_, 1);
v___x_2524_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v_received_2497_ = v___x_2524_;
goto v___jp_2496_;
}
}
}
else
{
goto v___jp_2509_;
}
v___jp_2496_:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; uint8_t v___x_2507_; 
v___x_2498_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_2499_ = lean_string_append(v___x_2498_, v_context_2478_);
v___x_2500_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_2501_ = lean_string_append(v___x_2499_, v___x_2500_);
v___x_2502_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__2));
v___x_2503_ = lean_string_append(v___x_2501_, v___x_2502_);
v___x_2504_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_2505_ = lean_string_append(v___x_2503_, v___x_2504_);
v___x_2506_ = lean_string_append(v___x_2505_, v_received_2497_);
lean_dec_ref(v_received_2497_);
v___x_2507_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__5);
if (v___x_2507_ == 0)
{
lean_object* v___x_2508_; 
v___x_2508_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__6));
v___y_2482_ = v___x_2506_;
v___y_2483_ = v___x_2508_;
goto v___jp_2481_;
}
else
{
v___y_2482_ = v___x_2506_;
v___y_2483_ = v___x_2495_;
goto v___jp_2481_;
}
}
v___jp_2509_:
{
lean_object* v___x_2510_; 
v___x_2510_ = l_Lasm_JS_Data_describe(v_d_2479_);
v_received_2497_ = v___x_2510_;
goto v___jp_2496_;
}
}
v___jp_2481_:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; 
v___x_2484_ = lean_string_append(v___y_2482_, v___y_2483_);
v___x_2485_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2484_);
v___x_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2485_);
return v___x_2486_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2525_, lean_object* v_d_2526_, lean_object* v_a_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2525_, v_d_2526_);
lean_dec_ref(v_context_2525_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(lean_object* v_context_2529_, lean_object* v_bytes_2530_){
_start:
{
lean_object* v___x_2532_; 
v___x_2532_ = l_Lasm_JS_Wire_decode(v_bytes_2530_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2534_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2532_, 1);
v___x_2534_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2(v_context_2529_, v_a_2533_);
return v___x_2534_;
}
else
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2542_; 
v_a_2535_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2537_ = v___x_2532_;
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v___x_2532_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2535_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
return v___x_2540_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1___boxed(lean_object* v_context_2543_, lean_object* v_bytes_2544_, lean_object* v_a_2545_){
_start:
{
lean_object* v_res_2546_; 
v_res_2546_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v_context_2543_, v_bytes_2544_);
lean_dec_ref(v_bytes_2544_);
lean_dec_ref(v_context_2543_);
return v_res_2546_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(uint8_t v_await_2547_, uint64_t v_extra_2548_){
_start:
{
uint64_t v___x_2549_; uint64_t v___y_2551_; 
v___x_2549_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_2547_ == 0)
{
uint64_t v___x_2554_; 
v___x_2554_ = 0ULL;
v___y_2551_ = v___x_2554_;
goto v___jp_2550_;
}
else
{
uint64_t v___x_2555_; 
v___x_2555_ = 2ULL;
v___y_2551_ = v___x_2555_;
goto v___jp_2550_;
}
v___jp_2550_:
{
uint64_t v___x_2552_; uint64_t v___x_2553_; 
v___x_2552_ = lean_uint64_lor(v___x_2549_, v___y_2551_);
v___x_2553_ = lean_uint64_lor(v___x_2552_, v_extra_2548_);
return v___x_2553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0___boxed(lean_object* v_await_2556_, lean_object* v_extra_2557_){
_start:
{
uint8_t v_await_boxed_2558_; uint64_t v_extra_boxed_2559_; uint64_t v_res_2560_; lean_object* v_r_2561_; 
v_await_boxed_2558_ = lean_unbox(v_await_2556_);
v_extra_boxed_2559_ = lean_unbox_uint64(v_extra_2557_);
lean_dec_ref(v_extra_2557_);
v_res_2560_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v_await_boxed_2558_, v_extra_boxed_2559_);
v_r_2561_ = lean_box_uint64(v_res_2560_);
return v_r_2561_;
}
}
static uint64_t _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2562_; uint8_t v___x_2563_; uint64_t v___x_2564_; 
v___x_2562_ = 4ULL;
v___x_2563_ = 0;
v___x_2564_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_2563_, v___x_2562_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(lean_object* v_c_2565_, lean_object* v_args_2566_){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; uint64_t v___x_2571_; lean_object* v___x_2572_; 
v___x_2568_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2569_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2569_, 0, v_c_2565_);
lean_ctor_set(v___x_2569_, 1, v___x_2568_);
v___x_2570_ = lean_box(0);
v___x_2571_ = lean_uint64_once(&l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0, &l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0_once, _init_l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___closed__0);
v___x_2572_ = l_Lasm_JS_Value_invokeRaw(v___x_2569_, v___x_2570_, v_args_2566_, v___x_2571_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v_a_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v_a_2573_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_a_2573_);
lean_dec_ref_known(v___x_2572_, 1);
v___x_2574_ = ((lean_object*)(l_Lasm_JS_Value_new___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__1___closed__1));
v___x_2575_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_2574_, v_a_2573_);
lean_dec(v_a_2573_);
return v___x_2575_;
}
else
{
return v___x_2572_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0___boxed(lean_object* v_c_2576_, lean_object* v_args_2577_, lean_object* v_a_2578_){
_start:
{
lean_object* v_res_2579_; 
v_res_2579_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_c_2576_, v_args_2577_);
return v_res_2579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4(lean_object* v___x_2580_, uint8_t v___x_2581_, lean_object* v___f_2582_, lean_object* v_a_2583_, lean_object* v_x_2584_){
_start:
{
lean_object* v_val_2587_; 
if (lean_obj_tag(v_x_2584_) == 0)
{
lean_object* v_a_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2598_; 
lean_dec(v_a_2583_);
lean_dec_ref(v___f_2582_);
lean_dec(v___x_2580_);
v_a_2590_ = lean_ctor_get(v_x_2584_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v_x_2584_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2592_ = v_x_2584_;
v_isShared_2593_ = v_isSharedCheck_2598_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_a_2590_);
lean_dec(v_x_2584_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2598_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___x_2595_; 
if (v_isShared_2593_ == 0)
{
v___x_2595_ = v___x_2592_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_a_2590_);
v___x_2595_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
lean_object* v___x_2596_; 
v___x_2596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2595_);
return v___x_2596_;
}
}
}
else
{
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2617_; 
v_a_2599_ = lean_ctor_get(v_x_2584_, 0);
v_isSharedCheck_2617_ = !lean_is_exclusive(v_x_2584_);
if (v_isSharedCheck_2617_ == 0)
{
v___x_2601_ = v_x_2584_;
v_isShared_2602_ = v_isSharedCheck_2617_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v_x_2584_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2617_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2603_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2604_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2604_, 0, v_a_2599_);
lean_ctor_set(v___x_2604_, 1, v___x_2603_);
v___x_2605_ = lean_unsigned_to_nat(1u);
v___x_2606_ = lean_mk_empty_array_with_capacity(v___x_2605_);
v___x_2607_ = lean_array_push(v___x_2606_, v___x_2604_);
v___x_2608_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_2583_, v___x_2607_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; lean_object* v___x_2611_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
lean_inc(v_a_2609_);
lean_dec_ref_known(v___x_2608_, 1);
if (v_isShared_2602_ == 0)
{
lean_ctor_set(v___x_2601_, 0, v_a_2609_);
v___x_2611_ = v___x_2601_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_a_2609_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
v_val_2587_ = v___x_2611_;
goto v___jp_2586_;
}
}
else
{
lean_object* v_a_2613_; lean_object* v___x_2615_; 
v_a_2613_ = lean_ctor_get(v___x_2608_, 0);
lean_inc(v_a_2613_);
lean_dec_ref_known(v___x_2608_, 1);
if (v_isShared_2602_ == 0)
{
lean_ctor_set_tag(v___x_2601_, 0);
lean_ctor_set(v___x_2601_, 0, v_a_2613_);
v___x_2615_ = v___x_2601_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v_a_2613_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
v_val_2587_ = v___x_2615_;
goto v___jp_2586_;
}
}
}
}
v___jp_2586_:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2588_, 0, v_val_2587_);
v___x_2589_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2580_, v___x_2581_, v___x_2588_, v___f_2582_);
return v___x_2589_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__4___boxed(lean_object* v___x_2618_, lean_object* v___x_2619_, lean_object* v___f_2620_, lean_object* v_a_2621_, lean_object* v_x_2622_, lean_object* v___y_2623_){
_start:
{
uint8_t v___x_7889__boxed_2624_; lean_object* v_res_2625_; 
v___x_7889__boxed_2624_ = lean_unbox(v___x_2619_);
v_res_2625_ = l_Lasm_Fetch_jsFetchHandler___lam__4(v___x_2618_, v___x_7889__boxed_2624_, v___f_2620_, v_a_2621_, v_x_2622_);
return v_res_2625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5(lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v_headers_2628_, lean_object* v___x_2629_, lean_object* v___x_2630_, lean_object* v___f_2631_, lean_object* v_x_2632_){
_start:
{
if (lean_obj_tag(v_x_2632_) == 0)
{
lean_object* v_a_2634_; lean_object* v___x_2636_; uint8_t v_isShared_2637_; uint8_t v_isSharedCheck_2642_; 
lean_dec_ref(v___f_2631_);
lean_dec(v___x_2630_);
lean_dec_ref(v___x_2629_);
lean_dec_ref(v_headers_2628_);
lean_dec_ref(v___y_2627_);
lean_dec_ref(v___y_2626_);
v_a_2634_ = lean_ctor_get(v_x_2632_, 0);
v_isSharedCheck_2642_ = !lean_is_exclusive(v_x_2632_);
if (v_isSharedCheck_2642_ == 0)
{
v___x_2636_ = v_x_2632_;
v_isShared_2637_ = v_isSharedCheck_2642_;
goto v_resetjp_2635_;
}
else
{
lean_inc(v_a_2634_);
lean_dec(v_x_2632_);
v___x_2636_ = lean_box(0);
v_isShared_2637_ = v_isSharedCheck_2642_;
goto v_resetjp_2635_;
}
v_resetjp_2635_:
{
lean_object* v___x_2639_; 
if (v_isShared_2637_ == 0)
{
v___x_2639_ = v___x_2636_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v_a_2634_);
v___x_2639_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
lean_object* v___x_2640_; 
v___x_2640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2639_);
return v___x_2640_;
}
}
}
else
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2654_; 
v_a_2643_ = lean_ctor_get(v_x_2632_, 0);
v_isSharedCheck_2654_ = !lean_is_exclusive(v_x_2632_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2645_ = v_x_2632_;
v_isShared_2646_ = v_isSharedCheck_2654_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v_x_2632_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2654_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2647_; uint8_t v___x_2648_; lean_object* v___x_2650_; 
v___x_2647_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2647_, 0, v___y_2626_);
lean_ctor_set(v___x_2647_, 1, v___y_2627_);
lean_ctor_set(v___x_2647_, 2, v_headers_2628_);
lean_ctor_set(v___x_2647_, 3, v___x_2629_);
lean_ctor_set(v___x_2647_, 4, v_a_2643_);
v___x_2648_ = 0;
if (v_isShared_2646_ == 0)
{
lean_ctor_set(v___x_2645_, 0, v___x_2647_);
v___x_2650_ = v___x_2645_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v___x_2647_);
v___x_2650_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2650_);
v___x_2652_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2630_, v___x_2648_, v___x_2651_, v___f_2631_);
return v___x_2652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__5___boxed(lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v_headers_2657_, lean_object* v___x_2658_, lean_object* v___x_2659_, lean_object* v___f_2660_, lean_object* v_x_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_Lasm_Fetch_jsFetchHandler___lam__5(v___y_2655_, v___y_2656_, v_headers_2657_, v___x_2658_, v___x_2659_, v___f_2660_, v_x_2661_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(lean_object* v___f_2664_, lean_object* v_x_2665_){
_start:
{
if (lean_obj_tag(v_x_2665_) == 0)
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2675_; 
lean_dec_ref(v___f_2664_);
v_a_2667_ = lean_ctor_get(v_x_2665_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v_x_2665_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2669_ = v_x_2665_;
v_isShared_2670_ = v_isSharedCheck_2675_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v_x_2665_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2675_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_a_2667_);
v___x_2672_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
lean_object* v___x_2673_; 
v___x_2673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2672_);
return v___x_2673_;
}
}
}
else
{
lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2687_; 
v_isSharedCheck_2687_ = !lean_is_exclusive(v_x_2665_);
if (v_isSharedCheck_2687_ == 0)
{
lean_object* v_unused_2688_; 
v_unused_2688_ = lean_ctor_get(v_x_2665_, 0);
lean_dec(v_unused_2688_);
v___x_2677_ = v_x_2665_;
v_isShared_2678_ = v_isSharedCheck_2687_;
goto v_resetjp_2676_;
}
else
{
lean_dec(v_x_2665_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2687_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2679_; uint8_t v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2683_; 
v___x_2679_ = lean_unsigned_to_nat(0u);
v___x_2680_ = 0;
v___x_2681_ = lean_io_promise_new();
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v___x_2681_);
v___x_2683_ = v___x_2677_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v___x_2681_);
v___x_2683_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2684_, 0, v___x_2683_);
v___x_2685_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2679_, v___x_2680_, v___x_2684_, v___f_2664_);
return v___x_2685_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed(lean_object* v___f_2689_, lean_object* v_x_2690_, lean_object* v___y_2691_){
_start:
{
lean_object* v_res_2692_; 
v_res_2692_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3(v___f_2689_, v_x_2690_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(lean_object* v___f_2693_, lean_object* v_x_2694_){
_start:
{
if (lean_obj_tag(v_x_2694_) == 0)
{
lean_object* v_a_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2704_; 
lean_dec_ref(v___f_2693_);
v_a_2696_ = lean_ctor_get(v_x_2694_, 0);
v_isSharedCheck_2704_ = !lean_is_exclusive(v_x_2694_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2698_ = v_x_2694_;
v_isShared_2699_ = v_isSharedCheck_2704_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_a_2696_);
lean_dec(v_x_2694_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2704_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2701_; 
if (v_isShared_2699_ == 0)
{
v___x_2701_ = v___x_2698_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v_a_2696_);
v___x_2701_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
lean_object* v___x_2702_; 
v___x_2702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2702_, 0, v___x_2701_);
return v___x_2702_;
}
}
}
else
{
lean_object* v_a_2705_; lean_object* v___x_2706_; 
v_a_2705_ = lean_ctor_get(v_x_2694_, 0);
lean_inc(v_a_2705_);
lean_dec_ref_known(v_x_2694_, 1);
v___x_2706_ = lean_apply_2(v___f_2693_, v_a_2705_, lean_box(0));
return v___x_2706_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed(lean_object* v___f_2707_, lean_object* v_x_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2(v___f_2707_, v_x_2708_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(lean_object* v___f_2711_, lean_object* v_bytes_2712_){
_start:
{
lean_object* v___x_2714_; uint8_t v___x_2715_; lean_object* v_val_2717_; lean_object* v___x_2720_; 
v___x_2714_ = lean_unsigned_to_nat(0u);
v___x_2715_ = 0;
v___x_2720_ = l_Lasm_JS_Wire_decode(v_bytes_2712_);
if (lean_obj_tag(v___x_2720_) == 0)
{
lean_object* v_a_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2728_; 
v_a_2721_ = lean_ctor_get(v___x_2720_, 0);
v_isSharedCheck_2728_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2728_ == 0)
{
v___x_2723_ = v___x_2720_;
v_isShared_2724_ = v_isSharedCheck_2728_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_a_2721_);
lean_dec(v___x_2720_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2728_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2726_; 
if (v_isShared_2724_ == 0)
{
lean_ctor_set_tag(v___x_2723_, 1);
v___x_2726_ = v___x_2723_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v_a_2721_);
v___x_2726_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
v_val_2717_ = v___x_2726_;
goto v___jp_2716_;
}
}
}
else
{
lean_object* v_a_2729_; lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2736_; 
v_a_2729_ = lean_ctor_get(v___x_2720_, 0);
v_isSharedCheck_2736_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2731_ = v___x_2720_;
v_isShared_2732_ = v_isSharedCheck_2736_;
goto v_resetjp_2730_;
}
else
{
lean_inc(v_a_2729_);
lean_dec(v___x_2720_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2736_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v___x_2734_; 
if (v_isShared_2732_ == 0)
{
lean_ctor_set_tag(v___x_2731_, 0);
v___x_2734_ = v___x_2731_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v_a_2729_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
v_val_2717_ = v___x_2734_;
goto v___jp_2716_;
}
}
}
v___jp_2716_:
{
lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2718_, 0, v_val_2717_);
v___x_2719_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2714_, v___x_2715_, v___x_2718_, v___f_2711_);
return v___x_2719_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed(lean_object* v___f_2737_, lean_object* v_bytes_2738_, lean_object* v___y_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0(v___f_2737_, v_bytes_2738_);
lean_dec_ref(v_bytes_2738_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(lean_object* v_payload_2741_, lean_object* v_failurePrefix_2742_, lean_object* v___f_2743_, lean_object* v___f_2744_, uint32_t v_op_2745_, uint64_t v_flags_2746_, lean_object* v___f_2747_, lean_object* v_x_2748_){
_start:
{
if (lean_obj_tag(v_x_2748_) == 0)
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2758_; 
lean_dec_ref(v___f_2747_);
lean_dec_ref(v___f_2744_);
lean_dec_ref(v___f_2743_);
v_a_2750_ = lean_ctor_get(v_x_2748_, 0);
v_isSharedCheck_2758_ = !lean_is_exclusive(v_x_2748_);
if (v_isSharedCheck_2758_ == 0)
{
v___x_2752_ = v_x_2748_;
v_isShared_2753_ = v_isSharedCheck_2758_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v_x_2748_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2758_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2755_; 
if (v_isShared_2753_ == 0)
{
v___x_2755_ = v___x_2752_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v_a_2750_);
v___x_2755_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
lean_object* v___x_2756_; 
v___x_2756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2756_, 0, v___x_2755_);
return v___x_2756_;
}
}
}
else
{
lean_object* v_a_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2800_; 
v_a_2759_ = lean_ctor_get(v_x_2748_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v_x_2748_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2761_ = v_x_2748_;
v_isShared_2762_ = v_isSharedCheck_2800_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_a_2759_);
lean_dec(v_x_2748_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2800_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
uint32_t v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; uint8_t v___x_2767_; 
v___x_2763_ = 0;
v___x_2764_ = l_Lasm_JS_Wire_encode(v_payload_2741_);
v___x_2765_ = lean_string_utf8_byte_size(v_failurePrefix_2742_);
v___x_2766_ = lean_unsigned_to_nat(0u);
v___x_2767_ = lean_nat_dec_eq(v___x_2765_, v___x_2766_);
if (v___x_2767_ == 0)
{
lean_object* v___f_2768_; lean_object* v_val_2770_; lean_object* v___x_2775_; 
lean_dec_ref(v___f_2747_);
lean_inc(v_a_2759_);
v___f_2768_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2768_, 0, v_a_2759_);
v___x_2775_ = lasm_js_call_into(v_a_2759_, v_op_2745_, v___x_2763_, v_flags_2746_, v___x_2764_, v_payload_2741_);
lean_dec_ref(v___x_2764_);
lean_dec(v_a_2759_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v_a_2776_; lean_object* v___x_2778_; 
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
lean_inc(v_a_2776_);
lean_dec_ref_known(v___x_2775_, 1);
if (v_isShared_2762_ == 0)
{
lean_ctor_set(v___x_2761_, 0, v_a_2776_);
v___x_2778_ = v___x_2761_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_a_2776_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
v_val_2770_ = v___x_2778_;
goto v___jp_2769_;
}
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; 
v_a_2780_ = lean_ctor_get(v___x_2775_, 0);
lean_inc(v_a_2780_);
lean_dec_ref_known(v___x_2775_, 1);
if (v_isShared_2762_ == 0)
{
lean_ctor_set_tag(v___x_2761_, 0);
lean_ctor_set(v___x_2761_, 0, v_a_2780_);
v___x_2782_ = v___x_2761_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_a_2780_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
v_val_2770_ = v___x_2782_;
goto v___jp_2769_;
}
}
v___jp_2769_:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2771_, 0, v_val_2770_);
v___x_2772_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2766_, v___x_2767_, v___x_2771_, v___f_2768_);
v___x_2773_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2766_, v___x_2767_, v___x_2772_, v___f_2743_);
v___x_2774_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2766_, v___x_2767_, v___x_2773_, v___f_2744_);
return v___x_2774_;
}
}
else
{
lean_object* v___f_2784_; uint8_t v___x_2785_; lean_object* v_val_2787_; lean_object* v___x_2791_; 
lean_dec_ref(v___f_2744_);
lean_dec_ref(v___f_2743_);
lean_inc(v_a_2759_);
v___f_2784_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2784_, 0, v_a_2759_);
v___x_2785_ = 0;
v___x_2791_ = lasm_js_call_into(v_a_2759_, v_op_2745_, v___x_2763_, v_flags_2746_, v___x_2764_, v_payload_2741_);
lean_dec_ref(v___x_2764_);
lean_dec(v_a_2759_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; lean_object* v___x_2794_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_a_2792_);
lean_dec_ref_known(v___x_2791_, 1);
if (v_isShared_2762_ == 0)
{
lean_ctor_set(v___x_2761_, 0, v_a_2792_);
v___x_2794_ = v___x_2761_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_a_2792_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
v_val_2787_ = v___x_2794_;
goto v___jp_2786_;
}
}
else
{
lean_object* v_a_2796_; lean_object* v___x_2798_; 
v_a_2796_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_a_2796_);
lean_dec_ref_known(v___x_2791_, 1);
if (v_isShared_2762_ == 0)
{
lean_ctor_set_tag(v___x_2761_, 0);
lean_ctor_set(v___x_2761_, 0, v_a_2796_);
v___x_2798_ = v___x_2761_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_a_2796_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
v_val_2787_ = v___x_2798_;
goto v___jp_2786_;
}
}
v___jp_2786_:
{
lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; 
v___x_2788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2788_, 0, v_val_2787_);
v___x_2789_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2766_, v___x_2785_, v___x_2788_, v___f_2784_);
v___x_2790_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2766_, v___x_2785_, v___x_2789_, v___f_2747_);
return v___x_2790_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed(lean_object* v_payload_2801_, lean_object* v_failurePrefix_2802_, lean_object* v___f_2803_, lean_object* v___f_2804_, lean_object* v_op_2805_, lean_object* v_flags_2806_, lean_object* v___f_2807_, lean_object* v_x_2808_, lean_object* v___y_2809_){
_start:
{
uint32_t v_op_boxed_2810_; uint64_t v_flags_boxed_2811_; lean_object* v_res_2812_; 
v_op_boxed_2810_ = lean_unbox_uint32(v_op_2805_);
lean_dec(v_op_2805_);
v_flags_boxed_2811_ = lean_unbox_uint64(v_flags_2806_);
lean_dec_ref(v_flags_2806_);
v_res_2812_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6(v_payload_2801_, v_failurePrefix_2802_, v___f_2803_, v___f_2804_, v_op_boxed_2810_, v_flags_boxed_2811_, v___f_2807_, v_x_2808_);
lean_dec_ref(v_failurePrefix_2802_);
lean_dec(v_payload_2801_);
return v_res_2812_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(lean_object* v_context_2813_, lean_object* v_x_2814_){
_start:
{
lean_object* v_val_2817_; 
if (lean_obj_tag(v_x_2814_) == 0)
{
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2827_; 
v_a_2819_ = lean_ctor_get(v_x_2814_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v_x_2814_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2821_ = v_x_2814_;
v_isShared_2822_ = v_isSharedCheck_2827_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v_x_2814_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2827_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
if (v_isShared_2822_ == 0)
{
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_a_2819_);
v___x_2824_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
lean_object* v___x_2825_; 
v___x_2825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2825_, 0, v___x_2824_);
return v___x_2825_;
}
}
}
else
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2841_; 
v_a_2828_ = lean_ctor_get(v_x_2814_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v_x_2814_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2830_ = v_x_2814_;
v_isShared_2831_ = v_isSharedCheck_2841_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v_x_2814_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2841_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2832_; 
v___x_2832_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_2813_, v_a_2828_);
if (lean_obj_tag(v___x_2832_) == 0)
{
lean_object* v_a_2833_; lean_object* v___x_2835_; 
v_a_2833_ = lean_ctor_get(v___x_2832_, 0);
lean_inc(v_a_2833_);
lean_dec_ref_known(v___x_2832_, 1);
if (v_isShared_2831_ == 0)
{
lean_ctor_set(v___x_2830_, 0, v_a_2833_);
v___x_2835_ = v___x_2830_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_a_2833_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
v_val_2817_ = v___x_2835_;
goto v___jp_2816_;
}
}
else
{
lean_object* v_a_2837_; lean_object* v___x_2839_; 
v_a_2837_ = lean_ctor_get(v___x_2832_, 0);
lean_inc(v_a_2837_);
lean_dec_ref_known(v___x_2832_, 1);
if (v_isShared_2831_ == 0)
{
lean_ctor_set_tag(v___x_2830_, 0);
lean_ctor_set(v___x_2830_, 0, v_a_2837_);
v___x_2839_ = v___x_2830_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2837_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
v_val_2817_ = v___x_2839_;
goto v___jp_2816_;
}
}
}
}
v___jp_2816_:
{
lean_object* v___x_2818_; 
v___x_2818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2818_, 0, v_val_2817_);
return v___x_2818_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed(lean_object* v_context_2842_, lean_object* v_x_2843_, lean_object* v___y_2844_){
_start:
{
lean_object* v_res_2845_; 
v_res_2845_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1(v_context_2842_, v_x_2843_);
lean_dec_ref(v_context_2842_);
return v_res_2845_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(lean_object* v_context_2846_, uint32_t v_op_2847_, uint64_t v_flags_2848_, lean_object* v_payload_2849_, lean_object* v_failurePrefix_2850_){
_start:
{
lean_object* v___f_2852_; lean_object* v___f_2853_; lean_object* v___f_2854_; lean_object* v___f_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___f_2858_; lean_object* v___f_2859_; lean_object* v___x_2860_; uint8_t v___x_2861_; lean_object* v_val_2863_; lean_object* v___x_2866_; 
lean_inc_ref(v_failurePrefix_2850_);
v___f_2852_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__3___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2852_, 0, v_failurePrefix_2850_);
v___f_2853_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2853_, 0, v_context_2846_);
v___f_2854_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2854_, 0, v___f_2853_);
v___f_2855_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2855_, 0, v___f_2854_);
v___x_2856_ = lean_box_uint32(v_op_2847_);
v___x_2857_ = lean_box_uint64(v_flags_2848_);
lean_inc_ref(v___f_2855_);
v___f_2858_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2858_, 0, v_payload_2849_);
lean_closure_set(v___f_2858_, 1, v_failurePrefix_2850_);
lean_closure_set(v___f_2858_, 2, v___f_2852_);
lean_closure_set(v___f_2858_, 3, v___f_2855_);
lean_closure_set(v___f_2858_, 4, v___x_2856_);
lean_closure_set(v___f_2858_, 5, v___x_2857_);
lean_closure_set(v___f_2858_, 6, v___f_2855_);
v___f_2859_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2859_, 0, v___f_2858_);
v___x_2860_ = lean_unsigned_to_nat(0u);
v___x_2861_ = 0;
v___x_2866_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2874_; 
v_a_2867_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2869_ = v___x_2866_;
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_dec(v___x_2866_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2872_; 
if (v_isShared_2870_ == 0)
{
lean_ctor_set_tag(v___x_2869_, 1);
v___x_2872_ = v___x_2869_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_a_2867_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
v_val_2863_ = v___x_2872_;
goto v___jp_2862_;
}
}
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2882_; 
v_a_2875_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2877_ = v___x_2866_;
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2866_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
lean_ctor_set_tag(v___x_2877_, 0);
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
v_val_2863_ = v___x_2880_;
goto v___jp_2862_;
}
}
}
v___jp_2862_:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; 
v___x_2864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2864_, 0, v_val_2863_);
v___x_2865_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2860_, v___x_2861_, v___x_2864_, v___f_2859_);
return v___x_2865_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3___boxed(lean_object* v_context_2883_, lean_object* v_op_2884_, lean_object* v_flags_2885_, lean_object* v_payload_2886_, lean_object* v_failurePrefix_2887_, lean_object* v_a_2888_){
_start:
{
uint32_t v_op_boxed_2889_; uint64_t v_flags_boxed_2890_; lean_object* v_res_2891_; 
v_op_boxed_2889_ = lean_unbox_uint32(v_op_2884_);
lean_dec(v_op_2884_);
v_flags_boxed_2890_ = lean_unbox_uint64(v_flags_2885_);
lean_dec_ref(v_flags_2885_);
v_res_2891_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v_context_2883_, v_op_boxed_2889_, v_flags_boxed_2890_, v_payload_2886_, v_failurePrefix_2887_);
return v_res_2891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object* v_o_2892_, lean_object* v_name_2893_, lean_object* v_args_2894_){
_start:
{
lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; uint32_t v___x_2901_; uint64_t v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
v___x_2896_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_2897_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2897_, 0, v_o_2892_);
lean_ctor_set(v___x_2897_, 1, v___x_2896_);
lean_inc_ref(v_name_2893_);
v___x_2898_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2898_, 0, v_name_2893_);
v___x_2899_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_2900_ = lean_string_append(v___x_2899_, v_name_2893_);
lean_dec_ref(v_name_2893_);
v___x_2901_ = 205;
v___x_2902_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__0);
v___x_2903_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2903_, 0, v_args_2894_);
v___x_2904_ = lean_unsigned_to_nat(3u);
v___x_2905_ = lean_mk_empty_array_with_capacity(v___x_2904_);
v___x_2906_ = lean_array_push(v___x_2905_, v___x_2897_);
v___x_2907_ = lean_array_push(v___x_2906_, v___x_2898_);
v___x_2908_ = lean_array_push(v___x_2907_, v___x_2903_);
v___x_2909_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2908_);
v___x_2910_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_2900_, v___x_2901_, v___x_2902_, v___x_2909_, v___x_2896_);
return v___x_2910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1___boxed(lean_object* v_o_2911_, lean_object* v_name_2912_, lean_object* v_args_2913_, lean_object* v___y_2914_){
_start:
{
lean_object* v_res_2915_; 
v_res_2915_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_o_2911_, v_name_2912_, v_args_2913_);
return v_res_2915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6(lean_object* v___x_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v_options_2920_, lean_object* v___f_2921_, lean_object* v___f_2922_, lean_object* v_a_2923_, lean_object* v_value_2924_, lean_object* v_a_2925_, lean_object* v___x_2926_, lean_object* v___f_2927_, lean_object* v___f_2928_, lean_object* v_headers_2929_){
_start:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___f_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; uint8_t v___x_2943_; 
v___x_2931_ = lean_mk_empty_array_with_capacity(v___x_2917_);
v___x_2932_ = l_ByteArray_empty;
v___f_2933_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___x_2931_);
lean_inc_ref(v___y_2919_);
lean_inc_ref(v___y_2918_);
v___x_2934_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2934_, 0, v___y_2918_);
lean_ctor_set(v___x_2934_, 1, v___y_2919_);
lean_ctor_set(v___x_2934_, 2, v___x_2931_);
lean_ctor_set(v___x_2934_, 3, v___x_2932_);
lean_ctor_set(v___x_2934_, 4, v___f_2933_);
v___x_2935_ = l_Lasm_Fetch_Request_path(v___x_2934_);
v___x_2936_ = lean_apply_1(v_options_2920_, v___x_2935_);
v___x_2943_ = lean_unbox(v___x_2936_);
if (v___x_2943_ == 0)
{
lean_object* v___x_2944_; uint8_t v___x_2945_; 
lean_dec_ref(v___f_2928_);
lean_dec_ref(v___f_2927_);
v___x_2944_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_2945_ = lean_string_dec_eq(v___y_2918_, v___x_2944_);
if (v___x_2945_ == 0)
{
lean_object* v___x_2946_; uint8_t v___x_2947_; 
v___x_2946_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_2947_ = lean_string_dec_eq(v___y_2918_, v___x_2946_);
if (v___x_2947_ == 0)
{
lean_object* v___x_2948_; lean_object* v___f_2949_; lean_object* v___x_2950_; lean_object* v___f_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
lean_dec_ref(v___f_2921_);
v___x_2948_ = lean_box(v___x_2947_);
lean_inc_n(v___x_2917_, 2);
v___f_2949_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__8___boxed), 9, 7);
lean_closure_set(v___f_2949_, 0, v___y_2918_);
lean_closure_set(v___f_2949_, 1, v___y_2919_);
lean_closure_set(v___f_2949_, 2, v_headers_2929_);
lean_closure_set(v___f_2949_, 3, v___f_2933_);
lean_closure_set(v___f_2949_, 4, v___x_2917_);
lean_closure_set(v___f_2949_, 5, v___x_2948_);
lean_closure_set(v___f_2949_, 6, v___f_2922_);
v___x_2950_ = lean_box(v___x_2947_);
v___f_2951_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__4___boxed), 6, 4);
lean_closure_set(v___f_2951_, 0, v___x_2917_);
lean_closure_set(v___f_2951_, 1, v___x_2950_);
lean_closure_set(v___f_2951_, 2, v___f_2949_);
lean_closure_set(v___f_2951_, 3, v_a_2923_);
v___x_2952_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_2953_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_value_2924_, v___x_2952_, v___x_2931_);
v___x_2954_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2917_, v___x_2947_, v___x_2953_, v___f_2951_);
return v___x_2954_;
}
else
{
lean_dec_ref(v___x_2931_);
lean_dec(v_value_2924_);
lean_dec(v_a_2923_);
lean_dec_ref(v___f_2922_);
goto v___jp_2937_;
}
}
else
{
lean_dec_ref(v___x_2931_);
lean_dec(v_value_2924_);
lean_dec(v_a_2923_);
lean_dec_ref(v___f_2922_);
goto v___jp_2937_;
}
}
else
{
lean_object* v___x_2955_; 
lean_dec_ref(v___x_2931_);
lean_dec(v_value_2924_);
lean_dec(v_a_2923_);
lean_dec_ref(v___f_2922_);
lean_dec_ref(v___f_2921_);
v___x_2955_ = l_Lasm_JS_Data_field(v_a_2925_, v___x_2926_);
if (lean_obj_tag(v___x_2955_) == 9)
{
lean_object* v_value_2956_; lean_object* v___f_2957_; uint8_t v___x_2958_; lean_object* v_val_2960_; lean_object* v___x_2963_; 
lean_dec_ref(v___f_2928_);
v_value_2956_ = lean_ctor_get(v___x_2955_, 0);
lean_inc(v_value_2956_);
lean_dec_ref_known(v___x_2955_, 2);
lean_inc(v___x_2917_);
v___f_2957_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__5___boxed), 8, 6);
lean_closure_set(v___f_2957_, 0, v___y_2918_);
lean_closure_set(v___f_2957_, 1, v___y_2919_);
lean_closure_set(v___f_2957_, 2, v_headers_2929_);
lean_closure_set(v___f_2957_, 3, v___x_2932_);
lean_closure_set(v___f_2957_, 4, v___x_2917_);
lean_closure_set(v___f_2957_, 5, v___f_2927_);
v___x_2958_ = 0;
v___x_2963_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_value_2956_);
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_object* v_a_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2971_; 
v_a_2964_ = lean_ctor_get(v___x_2963_, 0);
v_isSharedCheck_2971_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_2971_ == 0)
{
v___x_2966_ = v___x_2963_;
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_a_2964_);
lean_dec(v___x_2963_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v___x_2969_; 
if (v_isShared_2967_ == 0)
{
lean_ctor_set_tag(v___x_2966_, 1);
v___x_2969_ = v___x_2966_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_a_2964_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
v_val_2960_ = v___x_2969_;
goto v___jp_2959_;
}
}
}
else
{
lean_object* v_a_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_2979_; 
v_a_2972_ = lean_ctor_get(v___x_2963_, 0);
v_isSharedCheck_2979_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_2979_ == 0)
{
v___x_2974_ = v___x_2963_;
v_isShared_2975_ = v_isSharedCheck_2979_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_a_2972_);
lean_dec(v___x_2963_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_2979_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2977_; 
if (v_isShared_2975_ == 0)
{
lean_ctor_set_tag(v___x_2974_, 0);
v___x_2977_ = v___x_2974_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v_a_2972_);
v___x_2977_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
v_val_2960_ = v___x_2977_;
goto v___jp_2959_;
}
}
}
v___jp_2959_:
{
lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2961_, 0, v_val_2960_);
v___x_2962_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2917_, v___x_2958_, v___x_2961_, v___f_2957_);
return v___x_2962_;
}
}
else
{
lean_object* v___x_2980_; uint8_t v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
lean_dec(v___x_2955_);
lean_dec_ref(v___f_2927_);
v___x_2980_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2980_, 0, v___y_2918_);
lean_ctor_set(v___x_2980_, 1, v___y_2919_);
lean_ctor_set(v___x_2980_, 2, v_headers_2929_);
lean_ctor_set(v___x_2980_, 3, v___x_2932_);
lean_ctor_set(v___x_2980_, 4, v___f_2933_);
v___x_2981_ = 0;
v___x_2982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2980_);
v___x_2983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2982_);
v___x_2984_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2917_, v___x_2981_, v___x_2983_, v___f_2928_);
return v___x_2984_;
}
}
v___jp_2937_:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; uint8_t v___x_2941_; lean_object* v___x_2942_; 
v___x_2938_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2938_, 0, v___y_2918_);
lean_ctor_set(v___x_2938_, 1, v___y_2919_);
lean_ctor_set(v___x_2938_, 2, v_headers_2929_);
lean_ctor_set(v___x_2938_, 3, v___x_2932_);
lean_ctor_set(v___x_2938_, 4, v___f_2933_);
v___x_2939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2939_, 0, v___x_2938_);
v___x_2940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2940_, 0, v___x_2939_);
v___x_2941_ = lean_unbox(v___x_2936_);
v___x_2942_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2917_, v___x_2941_, v___x_2940_, v___f_2921_);
return v___x_2942_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__6___boxed(lean_object* v___x_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v_options_2988_, lean_object* v___f_2989_, lean_object* v___f_2990_, lean_object* v_a_2991_, lean_object* v_value_2992_, lean_object* v_a_2993_, lean_object* v___x_2994_, lean_object* v___f_2995_, lean_object* v___f_2996_, lean_object* v_headers_2997_, lean_object* v___y_2998_){
_start:
{
lean_object* v_res_2999_; 
v_res_2999_ = l_Lasm_Fetch_jsFetchHandler___lam__6(v___x_2985_, v___y_2986_, v___y_2987_, v_options_2988_, v___f_2989_, v___f_2990_, v_a_2991_, v_value_2992_, v_a_2993_, v___x_2994_, v___f_2995_, v___f_2996_, v_headers_2997_);
lean_dec_ref(v___x_2994_);
lean_dec(v_a_2993_);
return v_res_2999_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7(lean_object* v___f_3000_, lean_object* v_x_3001_){
_start:
{
if (lean_obj_tag(v_x_3001_) == 0)
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3011_; 
lean_dec_ref(v___f_3000_);
v_a_3003_ = lean_ctor_get(v_x_3001_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v_x_3001_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_3005_ = v_x_3001_;
v_isShared_3006_ = v_isSharedCheck_3011_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v_x_3001_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3011_;
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
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_a_3003_);
v___x_3008_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
lean_object* v___x_3009_; 
v___x_3009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3009_, 0, v___x_3008_);
return v___x_3009_;
}
}
}
else
{
lean_object* v_a_3012_; lean_object* v___x_3013_; 
v_a_3012_ = lean_ctor_get(v_x_3001_, 0);
lean_inc(v_a_3012_);
lean_dec_ref_known(v_x_3001_, 1);
v___x_3013_ = lean_apply_2(v___f_3000_, v_a_3012_, lean_box(0));
return v___x_3013_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__7___boxed(lean_object* v___f_3014_, lean_object* v_x_3015_, lean_object* v___y_3016_){
_start:
{
lean_object* v_res_3017_; 
v_res_3017_ = l_Lasm_Fetch_jsFetchHandler___lam__7(v___f_3014_, v_x_3015_);
return v_res_3017_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(uint8_t v_await_3018_, uint64_t v_extra_3019_){
_start:
{
uint64_t v___x_3020_; uint64_t v___y_3022_; 
v___x_3020_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1_spec__2___closed__0);
if (v_await_3018_ == 0)
{
uint64_t v___x_3025_; 
v___x_3025_ = 0ULL;
v___y_3022_ = v___x_3025_;
goto v___jp_3021_;
}
else
{
uint64_t v___x_3026_; 
v___x_3026_ = 2ULL;
v___y_3022_ = v___x_3026_;
goto v___jp_3021_;
}
v___jp_3021_:
{
uint64_t v___x_3023_; uint64_t v___x_3024_; 
v___x_3023_ = lean_uint64_lor(v___x_3020_, v___y_3022_);
v___x_3024_ = lean_uint64_lor(v___x_3023_, v_extra_3019_);
return v___x_3024_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5___boxed(lean_object* v_await_3027_, lean_object* v_extra_3028_){
_start:
{
uint8_t v_await_boxed_3029_; uint64_t v_extra_boxed_3030_; uint64_t v_res_3031_; lean_object* v_r_3032_; 
v_await_boxed_3029_ = lean_unbox(v_await_3027_);
v_extra_boxed_3030_ = lean_unbox_uint64(v_extra_3028_);
lean_dec_ref(v_extra_3028_);
v_res_3031_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v_await_boxed_3029_, v_extra_boxed_3030_);
v_r_3032_ = lean_box_uint64(v_res_3031_);
return v_r_3032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(size_t v_sz_3038_, size_t v_i_3039_, lean_object* v_bs_3040_){
_start:
{
uint8_t v___x_3043_; 
v___x_3043_ = lean_usize_dec_lt(v_i_3039_, v_sz_3038_);
if (v___x_3043_ == 0)
{
lean_object* v___x_3044_; 
v___x_3044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3044_, 0, v_bs_3040_);
return v___x_3044_;
}
else
{
lean_object* v_v_3045_; 
v_v_3045_ = lean_array_uget_borrowed(v_bs_3040_, v_i_3039_);
if (lean_obj_tag(v_v_3045_) == 7)
{
lean_object* v_items_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; uint8_t v___x_3049_; 
v_items_3046_ = lean_ctor_get(v_v_3045_, 0);
v___x_3047_ = lean_array_get_size(v_items_3046_);
v___x_3048_ = lean_unsigned_to_nat(2u);
v___x_3049_ = lean_nat_dec_eq(v___x_3047_, v___x_3048_);
if (v___x_3049_ == 0)
{
lean_dec_ref(v_bs_3040_);
goto v___jp_3041_;
}
else
{
lean_object* v___x_3050_; lean_object* v___x_3051_; 
v___x_3050_ = lean_unsigned_to_nat(0u);
v___x_3051_ = lean_array_fget_borrowed(v_items_3046_, v___x_3050_);
if (lean_obj_tag(v___x_3051_) == 4)
{
lean_object* v_s_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; 
v_s_3052_ = lean_ctor_get(v___x_3051_, 0);
lean_inc_ref(v_s_3052_);
v___x_3053_ = lean_unsigned_to_nat(1u);
v___x_3054_ = lean_array_fget_borrowed(v_items_3046_, v___x_3053_);
if (lean_obj_tag(v___x_3054_) == 4)
{
lean_object* v_s_3055_; lean_object* v_bs_x27_3056_; lean_object* v___x_3057_; size_t v___x_3058_; size_t v___x_3059_; lean_object* v___x_3060_; 
v_s_3055_ = lean_ctor_get(v___x_3054_, 0);
lean_inc_ref(v_s_3055_);
v_bs_x27_3056_ = lean_array_uset(v_bs_3040_, v_i_3039_, v___x_3050_);
v___x_3057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3057_, 0, v_s_3052_);
lean_ctor_set(v___x_3057_, 1, v_s_3055_);
v___x_3058_ = ((size_t)1ULL);
v___x_3059_ = lean_usize_add(v_i_3039_, v___x_3058_);
v___x_3060_ = lean_array_uset(v_bs_x27_3056_, v_i_3039_, v___x_3057_);
v_i_3039_ = v___x_3059_;
v_bs_3040_ = v___x_3060_;
goto _start;
}
else
{
lean_object* v___x_3062_; 
lean_dec_ref(v_s_3052_);
lean_dec_ref(v_bs_3040_);
v___x_3062_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3062_;
}
}
else
{
lean_object* v___x_3063_; 
lean_dec_ref(v_bs_3040_);
v___x_3063_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__2));
return v___x_3063_;
}
}
}
else
{
lean_dec_ref(v_bs_3040_);
goto v___jp_3041_;
}
}
v___jp_3041_:
{
lean_object* v___x_3042_; 
v___x_3042_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___closed__1));
return v___x_3042_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10___boxed(lean_object* v_sz_3064_, lean_object* v_i_3065_, lean_object* v_bs_3066_){
_start:
{
size_t v_sz_boxed_3067_; size_t v_i_boxed_3068_; lean_object* v_res_3069_; 
v_sz_boxed_3067_ = lean_unbox_usize(v_sz_3064_);
lean_dec(v_sz_3064_);
v_i_boxed_3068_ = lean_unbox_usize(v_i_3065_);
lean_dec(v_i_3065_);
v_res_3069_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_boxed_3067_, v_i_boxed_3068_, v_bs_3066_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(lean_object* v_context_3074_, lean_object* v_d_3075_){
_start:
{
lean_object* v___y_3078_; lean_object* v___y_3079_; lean_object* v___y_3084_; lean_object* v_received_3085_; lean_object* v___y_3104_; lean_object* v_a_3107_; 
if (lean_obj_tag(v_d_3075_) == 7)
{
lean_object* v_items_3131_; size_t v_sz_3132_; size_t v___x_3133_; lean_object* v___x_3134_; 
v_items_3131_ = lean_ctor_get(v_d_3075_, 0);
v_sz_3132_ = lean_array_size(v_items_3131_);
v___x_3133_ = ((size_t)0ULL);
lean_inc_ref(v_items_3131_);
v___x_3134_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8_spec__10(v_sz_3132_, v___x_3133_, v_items_3131_);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; uint8_t v___x_3139_; 
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3135_);
lean_dec_ref_known(v___x_3134_, 1);
v___x_3136_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__3));
v___x_3137_ = lean_string_utf8_byte_size(v_a_3135_);
v___x_3138_ = lean_unsigned_to_nat(0u);
v___x_3139_ = lean_nat_dec_eq(v___x_3137_, v___x_3138_);
if (v___x_3139_ == 0)
{
lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3140_ = ((lean_object*)(l_Lasm_Fetch_respond___lam__3___closed__2));
v___x_3141_ = lean_string_append(v___x_3140_, v_a_3135_);
lean_dec(v_a_3135_);
v___x_3142_ = lean_string_append(v___x_3136_, v___x_3141_);
lean_dec_ref(v___x_3141_);
v_a_3107_ = v___x_3142_;
goto v___jp_3106_;
}
else
{
lean_dec(v_a_3135_);
v_a_3107_ = v___x_3136_;
goto v___jp_3106_;
}
}
else
{
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3143_; 
v_a_3143_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3143_);
lean_dec_ref_known(v___x_3134_, 1);
v_a_3107_ = v_a_3143_;
goto v___jp_3106_;
}
else
{
lean_object* v_a_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3151_; 
lean_dec_ref_known(v_d_3075_, 1);
v_a_3144_ = lean_ctor_get(v___x_3134_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3134_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3146_ = v___x_3134_;
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_a_3144_);
lean_dec(v___x_3134_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3149_; 
if (v_isShared_3147_ == 0)
{
lean_ctor_set_tag(v___x_3146_, 0);
v___x_3149_ = v___x_3146_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3144_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
}
}
else
{
lean_object* v___x_3152_; 
v___x_3152_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v_a_3107_ = v___x_3152_;
goto v___jp_3106_;
}
v___jp_3077_:
{
lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3080_ = lean_string_append(v___y_3078_, v___y_3079_);
lean_dec_ref(v___y_3079_);
v___x_3081_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3081_, 0, v___x_3080_);
v___x_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3081_);
return v___x_3082_;
}
v___jp_3083_:
{
lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; uint8_t v___x_3097_; 
v___x_3086_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__0));
v___x_3087_ = lean_string_append(v___x_3086_, v_context_3074_);
v___x_3088_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__1));
v___x_3089_ = lean_string_append(v___x_3087_, v___x_3088_);
v___x_3090_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__0));
v___x_3091_ = lean_string_append(v___x_3089_, v___x_3090_);
v___x_3092_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__3));
v___x_3093_ = lean_string_append(v___x_3091_, v___x_3092_);
v___x_3094_ = lean_string_append(v___x_3093_, v_received_3085_);
lean_dec_ref(v_received_3085_);
v___x_3095_ = lean_string_utf8_byte_size(v___y_3084_);
v___x_3096_ = lean_unsigned_to_nat(0u);
v___x_3097_ = lean_nat_dec_eq(v___x_3095_, v___x_3096_);
if (v___x_3097_ == 0)
{
lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3098_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__1));
v___x_3099_ = lean_string_append(v___x_3098_, v___y_3084_);
lean_dec_ref(v___y_3084_);
v___x_3100_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___closed__2));
v___x_3101_ = lean_string_append(v___x_3099_, v___x_3100_);
v___y_3078_ = v___x_3094_;
v___y_3079_ = v___x_3101_;
goto v___jp_3077_;
}
else
{
lean_object* v___x_3102_; 
lean_dec_ref(v___y_3084_);
v___x_3102_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_3078_ = v___x_3094_;
v___y_3079_ = v___x_3102_;
goto v___jp_3077_;
}
}
v___jp_3103_:
{
lean_object* v___x_3105_; 
v___x_3105_ = l_Lasm_JS_Data_describe(v_d_3075_);
v___y_3084_ = v___y_3104_;
v_received_3085_ = v___x_3105_;
goto v___jp_3083_;
}
v___jp_3106_:
{
if (lean_obj_tag(v_d_3075_) == 9)
{
lean_object* v_value_3108_; lean_object* v_description_3109_; lean_object* v___x_3110_; uint8_t v___x_3111_; 
v_value_3108_ = lean_ctor_get(v_d_3075_, 0);
v_description_3109_ = lean_ctor_get(v_d_3075_, 1);
v___x_3110_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3111_ = lean_string_dec_eq(v_description_3109_, v___x_3110_);
if (v___x_3111_ == 0)
{
v___y_3104_ = v_a_3107_;
goto v___jp_3103_;
}
else
{
lean_object* v___x_3113_; uint8_t v_isShared_3114_; uint8_t v_isSharedCheck_3128_; 
lean_inc(v_value_3108_);
v_isSharedCheck_3128_ = !lean_is_exclusive(v_d_3075_);
if (v_isSharedCheck_3128_ == 0)
{
lean_object* v_unused_3129_; lean_object* v_unused_3130_; 
v_unused_3129_ = lean_ctor_get(v_d_3075_, 1);
lean_dec(v_unused_3129_);
v_unused_3130_ = lean_ctor_get(v_d_3075_, 0);
lean_dec(v_unused_3130_);
v___x_3113_ = v_d_3075_;
v_isShared_3114_ = v_isSharedCheck_3128_;
goto v_resetjp_3112_;
}
else
{
lean_dec(v_d_3075_);
v___x_3113_ = lean_box(0);
v_isShared_3114_ = v_isSharedCheck_3128_;
goto v_resetjp_3112_;
}
v_resetjp_3112_:
{
uint32_t v___x_3115_; uint64_t v___x_3116_; lean_object* v___x_3118_; 
v___x_3115_ = 206;
v___x_3116_ = 0ULL;
lean_inc(v_value_3108_);
if (v_isShared_3114_ == 0)
{
lean_ctor_set(v___x_3113_, 1, v___x_3110_);
v___x_3118_ = v___x_3113_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_value_3108_);
lean_ctor_set(v_reuseFailAlloc_3127_, 1, v___x_3110_);
v___x_3118_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
uint32_t v___x_3119_; lean_object* v___x_3120_; 
v___x_3119_ = lasm_js_value_handle(v_value_3108_);
lean_dec(v_value_3108_);
v___x_3120_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3115_, v___x_3116_, v___x_3118_, v___x_3119_);
lean_dec_ref(v___x_3118_);
if (lean_obj_tag(v___x_3120_) == 0)
{
lean_object* v_a_3121_; uint8_t v___x_3122_; 
v_a_3121_ = lean_ctor_get(v___x_3120_, 0);
lean_inc(v_a_3121_);
lean_dec_ref_known(v___x_3120_, 1);
v___x_3122_ = lean_string_validate_utf8(v_a_3121_);
if (v___x_3122_ == 0)
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
lean_dec(v_a_3121_);
v___x_3123_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_3124_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3123_);
v___y_3084_ = v_a_3107_;
v_received_3085_ = v___x_3124_;
goto v___jp_3083_;
}
else
{
lean_object* v___x_3125_; 
v___x_3125_ = lean_string_from_utf8_unchecked(v_a_3121_);
v___y_3084_ = v_a_3107_;
v_received_3085_ = v___x_3125_;
goto v___jp_3083_;
}
}
else
{
lean_object* v___x_3126_; 
lean_dec_ref_known(v___x_3120_, 1);
v___x_3126_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__11));
v___y_3084_ = v_a_3107_;
v_received_3085_ = v___x_3126_;
goto v___jp_3083_;
}
}
}
}
}
else
{
v___y_3104_ = v_a_3107_;
goto v___jp_3103_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8___boxed(lean_object* v_context_3153_, lean_object* v_d_3154_, lean_object* v_a_3155_){
_start:
{
lean_object* v_res_3156_; 
v_res_3156_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3153_, v_d_3154_);
lean_dec_ref(v_context_3153_);
return v_res_3156_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(lean_object* v_context_3157_, lean_object* v_bytes_3158_){
_start:
{
lean_object* v___x_3160_; 
v___x_3160_ = l_Lasm_JS_Wire_decode(v_bytes_3158_);
if (lean_obj_tag(v___x_3160_) == 0)
{
lean_object* v_a_3161_; lean_object* v___x_3162_; 
v_a_3161_ = lean_ctor_get(v___x_3160_, 0);
lean_inc(v_a_3161_);
lean_dec_ref_known(v___x_3160_, 1);
v___x_3162_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6_spec__8(v_context_3157_, v_a_3161_);
return v___x_3162_;
}
else
{
lean_object* v_a_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3170_; 
v_a_3163_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3165_ = v___x_3160_;
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_a_3163_);
lean_dec(v___x_3160_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3170_;
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
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_a_3163_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
return v___x_3168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6___boxed(lean_object* v_context_3171_, lean_object* v_bytes_3172_, lean_object* v_a_3173_){
_start:
{
lean_object* v_res_3174_; 
v_res_3174_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v_context_3171_, v_bytes_3172_);
lean_dec_ref(v_bytes_3172_);
lean_dec_ref(v_context_3171_);
return v_res_3174_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0(void){
_start:
{
uint64_t v___x_3175_; uint8_t v___x_3176_; uint64_t v___x_3177_; 
v___x_3175_ = 8ULL;
v___x_3176_ = 0;
v___x_3177_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__5(v___x_3176_, v___x_3175_);
return v___x_3177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(lean_object* v_o_3178_, lean_object* v_name_3179_, lean_object* v_args_3180_){
_start:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; uint64_t v___x_3185_; lean_object* v___x_3186_; 
v___x_3182_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3183_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3183_, 0, v_o_3178_);
lean_ctor_set(v___x_3183_, 1, v___x_3182_);
lean_inc_ref(v_name_3179_);
v___x_3184_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3184_, 0, v_name_3179_);
v___x_3185_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___closed__0);
v___x_3186_ = l_Lasm_JS_Value_invokeRaw(v___x_3183_, v___x_3184_, v_args_3180_, v___x_3185_);
if (lean_obj_tag(v___x_3186_) == 0)
{
lean_object* v_a_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
v_a_3187_ = lean_ctor_get(v___x_3186_, 0);
lean_inc(v_a_3187_);
lean_dec_ref_known(v___x_3186_, 1);
v___x_3188_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_3189_ = lean_string_append(v___x_3188_, v_name_3179_);
lean_dec_ref(v_name_3179_);
v___x_3190_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2_spec__6(v___x_3189_, v_a_3187_);
lean_dec(v_a_3187_);
lean_dec_ref(v___x_3189_);
return v___x_3190_;
}
else
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3198_; 
lean_dec_ref(v_name_3179_);
v_a_3191_ = lean_ctor_get(v___x_3186_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3186_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3193_ = v___x_3186_;
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3186_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3196_; 
if (v_isShared_3194_ == 0)
{
v___x_3196_ = v___x_3193_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3197_, 0, v_a_3191_);
v___x_3196_ = v_reuseFailAlloc_3197_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
return v___x_3196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2___boxed(lean_object* v_o_3199_, lean_object* v_name_3200_, lean_object* v_args_3201_, lean_object* v_a_3202_){
_start:
{
lean_object* v_res_3203_; 
v_res_3203_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_o_3199_, v_name_3200_, v_args_3201_);
return v_res_3203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10(lean_object* v___x_3205_, lean_object* v___f_3206_, lean_object* v_handler_3207_, lean_object* v_options_3208_, lean_object* v_a_3209_, lean_object* v_value_3210_, lean_object* v___x_3211_, lean_object* v___x_3212_, lean_object* v_a_3213_, lean_object* v___x_3214_, lean_object* v___x_3215_, lean_object* v_x_3216_){
_start:
{
uint8_t v___y_3219_; lean_object* v___y_3220_; lean_object* v_val_3221_; 
if (lean_obj_tag(v_x_3216_) == 0)
{
lean_object* v___x_3224_; 
lean_dec(v_a_3213_);
lean_dec_ref(v___x_3211_);
lean_dec(v_value_3210_);
lean_dec(v_a_3209_);
lean_dec_ref(v_options_3208_);
lean_dec_ref(v_handler_3207_);
lean_dec_ref(v___f_3206_);
lean_dec(v___x_3205_);
v___x_3224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3224_, 0, v_x_3216_);
return v___x_3224_;
}
else
{
lean_object* v_a_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3282_; 
v_a_3225_ = lean_ctor_get(v_x_3216_, 0);
v_isSharedCheck_3282_ = !lean_is_exclusive(v_x_3216_);
if (v_isSharedCheck_3282_ == 0)
{
v___x_3227_ = v_x_3216_;
v_isShared_3228_ = v_isSharedCheck_3282_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_a_3225_);
lean_dec(v_x_3216_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3282_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v___y_3230_; lean_object* v___y_3231_; lean_object* v___y_3232_; lean_object* v___y_3233_; lean_object* v___y_3234_; lean_object* v___y_3235_; lean_object* v___y_3272_; lean_object* v___x_3279_; 
v___x_3279_ = l_Lasm_JS_Data_field(v_a_3225_, v___x_3215_);
if (lean_obj_tag(v___x_3279_) == 4)
{
lean_object* v_s_3280_; 
v_s_3280_ = lean_ctor_get(v___x_3279_, 0);
lean_inc_ref(v_s_3280_);
lean_dec_ref_known(v___x_3279_, 1);
v___y_3272_ = v_s_3280_;
goto v___jp_3271_;
}
else
{
lean_object* v___x_3281_; 
lean_dec(v___x_3279_);
v___x_3281_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___y_3272_ = v___x_3281_;
goto v___jp_3271_;
}
v___jp_3229_:
{
lean_object* v___f_3236_; lean_object* v___x_3237_; 
lean_inc(v_a_3225_);
lean_inc(v___x_3205_);
v___f_3236_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__6___boxed), 14, 12);
lean_closure_set(v___f_3236_, 0, v___x_3205_);
lean_closure_set(v___f_3236_, 1, v___y_3233_);
lean_closure_set(v___f_3236_, 2, v___y_3235_);
lean_closure_set(v___f_3236_, 3, v_options_3208_);
lean_closure_set(v___f_3236_, 4, v___y_3230_);
lean_closure_set(v___f_3236_, 5, v___y_3234_);
lean_closure_set(v___f_3236_, 6, v_a_3209_);
lean_closure_set(v___f_3236_, 7, v_value_3210_);
lean_closure_set(v___f_3236_, 8, v_a_3225_);
lean_closure_set(v___f_3236_, 9, v___x_3211_);
lean_closure_set(v___f_3236_, 10, v___y_3232_);
lean_closure_set(v___f_3236_, 11, v___y_3231_);
v___x_3237_ = l_Lasm_JS_Data_field(v_a_3225_, v___x_3212_);
lean_dec(v_a_3225_);
if (lean_obj_tag(v___x_3237_) == 9)
{
lean_object* v_value_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3261_; 
v_value_3238_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3261_ == 0)
{
lean_object* v_unused_3262_; 
v_unused_3262_ = lean_ctor_get(v___x_3237_, 1);
lean_dec(v_unused_3262_);
v___x_3240_ = v___x_3237_;
v_isShared_3241_ = v_isSharedCheck_3261_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_value_3238_);
lean_dec(v___x_3237_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3261_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___f_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3246_; 
v___f_3242_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3242_, 0, v___f_3236_);
v___x_3243_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_3244_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
if (v_isShared_3241_ == 0)
{
lean_ctor_set(v___x_3240_, 1, v___x_3244_);
v___x_3246_ = v___x_3240_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_value_3238_);
lean_ctor_set(v_reuseFailAlloc_3260_, 1, v___x_3244_);
v___x_3246_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; uint8_t v___x_3250_; lean_object* v___x_3251_; 
v___x_3247_ = lean_unsigned_to_nat(1u);
v___x_3248_ = lean_mk_empty_array_with_capacity(v___x_3247_);
v___x_3249_ = lean_array_push(v___x_3248_, v___x_3246_);
v___x_3250_ = 0;
v___x_3251_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_3213_, v___x_3243_, v___x_3249_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v_a_3252_; lean_object* v___x_3254_; 
v_a_3252_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_a_3252_);
lean_dec_ref_known(v___x_3251_, 1);
if (v_isShared_3228_ == 0)
{
lean_ctor_set(v___x_3227_, 0, v_a_3252_);
v___x_3254_ = v___x_3227_;
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
v___y_3219_ = v___x_3250_;
v___y_3220_ = v___f_3242_;
v_val_3221_ = v___x_3254_;
goto v___jp_3218_;
}
}
else
{
lean_object* v_a_3256_; lean_object* v___x_3258_; 
v_a_3256_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_a_3256_);
lean_dec_ref_known(v___x_3251_, 1);
if (v_isShared_3228_ == 0)
{
lean_ctor_set_tag(v___x_3227_, 0);
lean_ctor_set(v___x_3227_, 0, v_a_3256_);
v___x_3258_ = v___x_3227_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_a_3256_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
v___y_3219_ = v___x_3250_;
v___y_3220_ = v___f_3242_;
v_val_3221_ = v___x_3258_;
goto v___jp_3218_;
}
}
}
}
}
else
{
lean_object* v___f_3263_; lean_object* v___x_3264_; uint8_t v___x_3265_; lean_object* v___x_3267_; 
lean_dec(v___x_3237_);
lean_dec(v_a_3213_);
v___f_3263_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__7___boxed), 3, 1);
lean_closure_set(v___f_3263_, 0, v___f_3236_);
v___x_3264_ = lean_mk_empty_array_with_capacity(v___x_3205_);
v___x_3265_ = 0;
if (v_isShared_3228_ == 0)
{
lean_ctor_set(v___x_3227_, 0, v___x_3264_);
v___x_3267_ = v___x_3227_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v___x_3264_);
v___x_3267_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; 
v___x_3268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3267_);
v___x_3269_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3205_, v___x_3265_, v___x_3268_, v___f_3263_);
return v___x_3269_;
}
}
}
v___jp_3271_:
{
lean_object* v___f_3273_; lean_object* v___f_3274_; lean_object* v___f_3275_; lean_object* v___x_3276_; 
lean_inc_n(v___x_3205_, 2);
lean_inc_ref(v___y_3272_);
v___f_3273_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3273_, 0, v___y_3272_);
lean_closure_set(v___f_3273_, 1, v___x_3205_);
lean_closure_set(v___f_3273_, 2, v___f_3206_);
v___f_3274_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3274_, 0, v_handler_3207_);
lean_closure_set(v___f_3274_, 1, v___x_3205_);
lean_closure_set(v___f_3274_, 2, v___f_3273_);
v___f_3275_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3275_, 0, v___f_3274_);
v___x_3276_ = l_Lasm_JS_Data_field(v_a_3225_, v___x_3214_);
if (lean_obj_tag(v___x_3276_) == 4)
{
lean_object* v_s_3277_; 
v_s_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc_ref(v_s_3277_);
lean_dec_ref_known(v___x_3276_, 1);
lean_inc_ref_n(v___f_3275_, 3);
v___y_3230_ = v___f_3275_;
v___y_3231_ = v___f_3275_;
v___y_3232_ = v___f_3275_;
v___y_3233_ = v___y_3272_;
v___y_3234_ = v___f_3275_;
v___y_3235_ = v_s_3277_;
goto v___jp_3229_;
}
else
{
lean_object* v___x_3278_; 
lean_dec(v___x_3276_);
v___x_3278_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
lean_inc_ref_n(v___f_3275_, 3);
v___y_3230_ = v___f_3275_;
v___y_3231_ = v___f_3275_;
v___y_3232_ = v___f_3275_;
v___y_3233_ = v___y_3272_;
v___y_3234_ = v___f_3275_;
v___y_3235_ = v___x_3278_;
goto v___jp_3229_;
}
}
}
}
v___jp_3218_:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___x_3222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3222_, 0, v_val_3221_);
v___x_3223_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3205_, v___y_3219_, v___x_3222_, v___y_3220_);
return v___x_3223_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__10___boxed(lean_object* v___x_3283_, lean_object* v___f_3284_, lean_object* v_handler_3285_, lean_object* v_options_3286_, lean_object* v_a_3287_, lean_object* v_value_3288_, lean_object* v___x_3289_, lean_object* v___x_3290_, lean_object* v_a_3291_, lean_object* v___x_3292_, lean_object* v___x_3293_, lean_object* v_x_3294_, lean_object* v___y_3295_){
_start:
{
lean_object* v_res_3296_; 
v_res_3296_ = l_Lasm_Fetch_jsFetchHandler___lam__10(v___x_3283_, v___f_3284_, v_handler_3285_, v_options_3286_, v_a_3287_, v_value_3288_, v___x_3289_, v___x_3290_, v_a_3291_, v___x_3292_, v___x_3293_, v_x_3294_);
lean_dec_ref(v___x_3293_);
lean_dec_ref(v___x_3292_);
lean_dec_ref(v___x_3290_);
return v_res_3296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(size_t v_sz_3297_, size_t v_i_3298_, lean_object* v_bs_3299_){
_start:
{
uint8_t v___x_3300_; 
v___x_3300_ = lean_usize_dec_lt(v_i_3298_, v_sz_3297_);
if (v___x_3300_ == 0)
{
return v_bs_3299_;
}
else
{
lean_object* v_v_3301_; lean_object* v___x_3302_; lean_object* v_bs_x27_3303_; lean_object* v___x_3304_; size_t v___x_3305_; size_t v___x_3306_; lean_object* v___x_3307_; 
v_v_3301_ = lean_array_uget(v_bs_3299_, v_i_3298_);
v___x_3302_ = lean_unsigned_to_nat(0u);
v_bs_x27_3303_ = lean_array_uset(v_bs_3299_, v_i_3298_, v___x_3302_);
v___x_3304_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3304_, 0, v_v_3301_);
v___x_3305_ = ((size_t)1ULL);
v___x_3306_ = lean_usize_add(v_i_3298_, v___x_3305_);
v___x_3307_ = lean_array_uset(v_bs_x27_3303_, v_i_3298_, v___x_3304_);
v_i_3298_ = v___x_3306_;
v_bs_3299_ = v___x_3307_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8___boxed(lean_object* v_sz_3309_, lean_object* v_i_3310_, lean_object* v_bs_3311_){
_start:
{
size_t v_sz_boxed_3312_; size_t v_i_boxed_3313_; lean_object* v_res_3314_; 
v_sz_boxed_3312_ = lean_unbox_usize(v_sz_3309_);
lean_dec(v_sz_3309_);
v_i_boxed_3313_ = lean_unbox_usize(v_i_3310_);
lean_dec(v_i_3310_);
v_res_3314_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_boxed_3312_, v_i_boxed_3313_, v_bs_3311_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(lean_object* v_o_3315_, lean_object* v_keys_3316_){
_start:
{
uint32_t v___x_3318_; uint32_t v___x_3319_; uint64_t v___x_3320_; size_t v_sz_3321_; size_t v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___x_3318_ = 203;
v___x_3319_ = lasm_js_value_handle(v_o_3315_);
v___x_3320_ = 0ULL;
v_sz_3321_ = lean_array_size(v_keys_3316_);
v___x_3322_ = ((size_t)0ULL);
v___x_3323_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__8(v_sz_3321_, v___x_3322_, v_keys_3316_);
v___x_3324_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3323_);
v___x_3325_ = l_Lasm_JS_Wire_encode(v___x_3324_);
lean_dec_ref_known(v___x_3324_, 1);
v___x_3326_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3327_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3327_, 0, v_o_3315_);
lean_ctor_set(v___x_3327_, 1, v___x_3326_);
v___x_3328_ = lasm_js_call(v___x_3318_, v___x_3319_, v___x_3320_, v___x_3325_, v___x_3327_);
lean_dec_ref_known(v___x_3327_, 2);
lean_dec_ref(v___x_3325_);
if (lean_obj_tag(v___x_3328_) == 0)
{
lean_object* v_a_3329_; lean_object* v___x_3330_; 
v_a_3329_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_a_3329_);
lean_dec_ref_known(v___x_3328_, 1);
v___x_3330_ = l_Lasm_JS_Wire_decode(v_a_3329_);
lean_dec(v_a_3329_);
return v___x_3330_;
}
else
{
lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3338_; 
v_a_3331_ = lean_ctor_get(v___x_3328_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___x_3328_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3333_ = v___x_3328_;
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v___x_3328_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3336_; 
if (v_isShared_3334_ == 0)
{
v___x_3336_ = v___x_3333_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_a_3331_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3___boxed(lean_object* v_o_3339_, lean_object* v_keys_3340_, lean_object* v_a_3341_){
_start:
{
lean_object* v_res_3342_; 
v_res_3342_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_o_3339_, v_keys_3340_);
return v_res_3342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9(lean_object* v_args_3363_, lean_object* v___f_3364_, lean_object* v_handler_3365_, lean_object* v_options_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_, lean_object* v_____r_3369_){
_start:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; uint8_t v___x_3375_; 
v___x_3373_ = lean_unsigned_to_nat(0u);
v___x_3374_ = lean_array_get_size(v_args_3363_);
v___x_3375_ = lean_nat_dec_lt(v___x_3373_, v___x_3374_);
if (v___x_3375_ == 0)
{
lean_dec(v_a_3368_);
lean_dec(v_a_3367_);
lean_dec_ref(v_options_3366_);
lean_dec_ref(v_handler_3365_);
lean_dec_ref(v___f_3364_);
goto v___jp_3371_;
}
else
{
lean_object* v___x_3376_; 
v___x_3376_ = lean_array_fget_borrowed(v_args_3363_, v___x_3373_);
if (lean_obj_tag(v___x_3376_) == 9)
{
lean_object* v_value_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___f_3382_; lean_object* v___x_3383_; uint8_t v___x_3384_; lean_object* v_val_3386_; lean_object* v___x_3389_; 
v_value_3377_ = lean_ctor_get(v___x_3376_, 0);
v___x_3378_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_3379_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_3380_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___x_3381_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
lean_inc_n(v_value_3377_, 2);
v___f_3382_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3382_, 0, v___x_3373_);
lean_closure_set(v___f_3382_, 1, v___f_3364_);
lean_closure_set(v___f_3382_, 2, v_handler_3365_);
lean_closure_set(v___f_3382_, 3, v_options_3366_);
lean_closure_set(v___f_3382_, 4, v_a_3367_);
lean_closure_set(v___f_3382_, 5, v_value_3377_);
lean_closure_set(v___f_3382_, 6, v___x_3381_);
lean_closure_set(v___f_3382_, 7, v___x_3380_);
lean_closure_set(v___f_3382_, 8, v_a_3368_);
lean_closure_set(v___f_3382_, 9, v___x_3379_);
lean_closure_set(v___f_3382_, 10, v___x_3378_);
v___x_3383_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__7));
v___x_3384_ = 0;
v___x_3389_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_value_3377_, v___x_3383_);
if (lean_obj_tag(v___x_3389_) == 0)
{
lean_object* v_a_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3397_; 
v_a_3390_ = lean_ctor_get(v___x_3389_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3389_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3392_ = v___x_3389_;
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_a_3390_);
lean_dec(v___x_3389_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v___x_3395_; 
if (v_isShared_3393_ == 0)
{
lean_ctor_set_tag(v___x_3392_, 1);
v___x_3395_ = v___x_3392_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_a_3390_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
v_val_3386_ = v___x_3395_;
goto v___jp_3385_;
}
}
}
else
{
lean_object* v_a_3398_; lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3405_; 
v_a_3398_ = lean_ctor_get(v___x_3389_, 0);
v_isSharedCheck_3405_ = !lean_is_exclusive(v___x_3389_);
if (v_isSharedCheck_3405_ == 0)
{
v___x_3400_ = v___x_3389_;
v_isShared_3401_ = v_isSharedCheck_3405_;
goto v_resetjp_3399_;
}
else
{
lean_inc(v_a_3398_);
lean_dec(v___x_3389_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3405_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v___x_3403_; 
if (v_isShared_3401_ == 0)
{
lean_ctor_set_tag(v___x_3400_, 0);
v___x_3403_ = v___x_3400_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v_a_3398_);
v___x_3403_ = v_reuseFailAlloc_3404_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
v_val_3386_ = v___x_3403_;
goto v___jp_3385_;
}
}
}
v___jp_3385_:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3387_, 0, v_val_3386_);
v___x_3388_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3373_, v___x_3384_, v___x_3387_, v___f_3382_);
return v___x_3388_;
}
}
else
{
lean_dec(v_a_3368_);
lean_dec(v_a_3367_);
lean_dec_ref(v_options_3366_);
lean_dec_ref(v_handler_3365_);
lean_dec_ref(v___f_3364_);
goto v___jp_3371_;
}
}
v___jp_3371_:
{
lean_object* v___x_3372_; 
v___x_3372_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__3));
return v___x_3372_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__9___boxed(lean_object* v_args_3406_, lean_object* v___f_3407_, lean_object* v_handler_3408_, lean_object* v_options_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_, lean_object* v_____r_3412_, lean_object* v___y_3413_){
_start:
{
lean_object* v_res_3414_; 
v_res_3414_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3406_, v___f_3407_, v_handler_3408_, v_options_3409_, v_a_3410_, v_a_3411_, v_____r_3412_);
lean_dec_ref(v_args_3406_);
return v_res_3414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11(lean_object* v___f_3415_, lean_object* v_x_3416_){
_start:
{
if (lean_obj_tag(v_x_3416_) == 0)
{
lean_object* v_a_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3426_; 
lean_dec_ref(v___f_3415_);
v_a_3418_ = lean_ctor_get(v_x_3416_, 0);
v_isSharedCheck_3426_ = !lean_is_exclusive(v_x_3416_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3420_ = v_x_3416_;
v_isShared_3421_ = v_isSharedCheck_3426_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_a_3418_);
lean_dec(v_x_3416_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3426_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3423_; 
if (v_isShared_3421_ == 0)
{
v___x_3423_ = v___x_3420_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v_a_3418_);
v___x_3423_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
lean_object* v___x_3424_; 
v___x_3424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3424_, 0, v___x_3423_);
return v___x_3424_;
}
}
}
else
{
lean_object* v_a_3427_; lean_object* v___x_3428_; 
v_a_3427_ = lean_ctor_get(v_x_3416_, 0);
lean_inc(v_a_3427_);
lean_dec_ref_known(v_x_3416_, 1);
v___x_3428_ = lean_apply_2(v___f_3415_, v_a_3427_, lean_box(0));
return v___x_3428_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__11___boxed(lean_object* v___f_3429_, lean_object* v_x_3430_, lean_object* v___y_3431_){
_start:
{
lean_object* v_res_3432_; 
v_res_3432_ = l_Lasm_Fetch_jsFetchHandler___lam__11(v___f_3429_, v_x_3430_);
return v_res_3432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13(lean_object* v___f_3433_, lean_object* v_handler_3434_, lean_object* v_options_3435_, lean_object* v_a_3436_, lean_object* v_a_3437_, lean_object* v_args_3438_){
_start:
{
lean_object* v___f_3440_; lean_object* v___x_3444_; lean_object* v___x_3445_; uint8_t v___x_3446_; 
lean_inc(v_a_3437_);
lean_inc(v_a_3436_);
lean_inc_ref(v_options_3435_);
lean_inc_ref(v_handler_3434_);
lean_inc_ref(v___f_3433_);
lean_inc_ref(v_args_3438_);
v___f_3440_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__9___boxed), 8, 6);
lean_closure_set(v___f_3440_, 0, v_args_3438_);
lean_closure_set(v___f_3440_, 1, v___f_3433_);
lean_closure_set(v___f_3440_, 2, v_handler_3434_);
lean_closure_set(v___f_3440_, 3, v_options_3435_);
lean_closure_set(v___f_3440_, 4, v_a_3436_);
lean_closure_set(v___f_3440_, 5, v_a_3437_);
v___x_3444_ = lean_unsigned_to_nat(1u);
v___x_3445_ = lean_array_get_size(v_args_3438_);
v___x_3446_ = lean_nat_dec_lt(v___x_3444_, v___x_3445_);
if (v___x_3446_ == 0)
{
lean_dec_ref(v___f_3440_);
goto v___jp_3441_;
}
else
{
lean_object* v___x_3447_; 
v___x_3447_ = lean_array_fget_borrowed(v_args_3438_, v___x_3444_);
switch(lean_obj_tag(v___x_3447_))
{
case 9:
{
lean_object* v___f_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; uint8_t v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; 
lean_inc_ref(v___x_3447_);
lean_dec_ref(v_args_3438_);
lean_dec(v_a_3437_);
lean_dec(v_a_3436_);
lean_dec_ref(v_options_3435_);
lean_dec_ref(v_handler_3434_);
lean_dec_ref(v___f_3433_);
v___f_3448_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3448_, 0, v___f_3440_);
v___x_3449_ = l_Lasm_Fetch_platformEnv;
v___x_3450_ = lean_unsigned_to_nat(0u);
v___x_3451_ = 0;
v___x_3452_ = lean_st_ref_swap(v___x_3449_, v___x_3447_);
lean_dec(v___x_3452_);
v___x_3453_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3454_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3450_, v___x_3451_, v___x_3453_, v___f_3448_);
return v___x_3454_;
}
case 8:
{
lean_object* v___f_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; uint8_t v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; 
lean_inc_ref(v___x_3447_);
lean_dec_ref(v_args_3438_);
lean_dec(v_a_3437_);
lean_dec(v_a_3436_);
lean_dec_ref(v_options_3435_);
lean_dec_ref(v_handler_3434_);
lean_dec_ref(v___f_3433_);
v___f_3455_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__11___boxed), 3, 1);
lean_closure_set(v___f_3455_, 0, v___f_3440_);
v___x_3456_ = l_Lasm_Fetch_platformEnv;
v___x_3457_ = lean_unsigned_to_nat(0u);
v___x_3458_ = 0;
v___x_3459_ = lean_st_ref_swap(v___x_3456_, v___x_3447_);
lean_dec(v___x_3459_);
v___x_3460_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__0___closed__1));
v___x_3461_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3457_, v___x_3458_, v___x_3460_, v___f_3455_);
return v___x_3461_;
}
default: 
{
lean_dec_ref(v___f_3440_);
goto v___jp_3441_;
}
}
}
v___jp_3441_:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; 
v___x_3442_ = lean_box(0);
v___x_3443_ = l_Lasm_Fetch_jsFetchHandler___lam__9(v_args_3438_, v___f_3433_, v_handler_3434_, v_options_3435_, v_a_3436_, v_a_3437_, v___x_3442_);
lean_dec_ref(v_args_3438_);
return v___x_3443_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___lam__13___boxed(lean_object* v___f_3462_, lean_object* v_handler_3463_, lean_object* v_options_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_, lean_object* v_args_3467_, lean_object* v___y_3468_){
_start:
{
lean_object* v_res_3469_; 
v_res_3469_ = l_Lasm_Fetch_jsFetchHandler___lam__13(v___f_3462_, v_handler_3463_, v_options_3464_, v_a_3465_, v_a_3466_, v_args_3467_);
return v_res_3469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler(lean_object* v_handler_3473_, lean_object* v_options_3474_){
_start:
{
lean_object* v___f_3476_; lean_object* v___x_3477_; 
v___f_3476_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__0));
v___x_3477_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3477_) == 0)
{
lean_object* v_a_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
v_a_3478_ = lean_ctor_get(v___x_3477_, 0);
lean_inc_n(v_a_3478_, 2);
lean_dec_ref_known(v___x_3477_, 1);
v___x_3479_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_3480_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3478_, v___x_3479_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_a_3481_);
lean_dec_ref_known(v___x_3480_, 1);
v___x_3482_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_3483_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_3478_, v___x_3482_);
if (lean_obj_tag(v___x_3483_) == 0)
{
lean_object* v_a_3484_; lean_object* v___f_3485_; lean_object* v___x_3486_; 
v_a_3484_ = lean_ctor_get(v___x_3483_, 0);
lean_inc(v_a_3484_);
lean_dec_ref_known(v___x_3483_, 1);
v___f_3485_ = lean_alloc_closure((void*)(l_Lasm_Fetch_jsFetchHandler___lam__13___boxed), 7, 5);
lean_closure_set(v___f_3485_, 0, v___f_3476_);
lean_closure_set(v___f_3485_, 1, v_handler_3473_);
lean_closure_set(v___f_3485_, 2, v_options_3474_);
lean_closure_set(v___f_3485_, 3, v_a_3481_);
lean_closure_set(v___f_3485_, 4, v_a_3484_);
v___x_3486_ = l_Lasm_JS_Function_ofFn(v___f_3485_);
return v___x_3486_;
}
else
{
lean_dec(v_a_3481_);
lean_dec_ref(v_options_3474_);
lean_dec_ref(v_handler_3473_);
return v___x_3483_;
}
}
else
{
lean_dec(v_a_3478_);
lean_dec_ref(v_options_3474_);
lean_dec_ref(v_handler_3473_);
return v___x_3480_;
}
}
else
{
lean_dec_ref(v_options_3474_);
lean_dec_ref(v_handler_3473_);
return v___x_3477_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_jsFetchHandler___boxed(lean_object* v_handler_3487_, lean_object* v_options_3488_, lean_object* v_a_3489_){
_start:
{
lean_object* v_res_3490_; 
v_res_3490_ = l_Lasm_Fetch_jsFetchHandler(v_handler_3487_, v_options_3488_);
return v_res_3490_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(lean_object* v_bytes_3491_){
_start:
{
lean_object* v___x_3493_; 
v___x_3493_ = l_Lasm_JS_Wire_decode(v_bytes_3491_);
return v___x_3493_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg___boxed(lean_object* v_bytes_3494_, lean_object* v_a_3495_){
_start:
{
lean_object* v_res_3496_; 
v_res_3496_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___redArg(v_bytes_3494_);
lean_dec_ref(v_bytes_3494_);
return v_res_3496_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(lean_object* v_context_3497_, lean_object* v_bytes_3498_){
_start:
{
lean_object* v___x_3500_; 
v___x_3500_ = l_Lasm_JS_Wire_decode(v_bytes_3498_);
return v___x_3500_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9___boxed(lean_object* v_context_3501_, lean_object* v_bytes_3502_, lean_object* v_a_3503_){
_start:
{
lean_object* v_res_3504_; 
v_res_3504_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3_spec__9(v_context_3501_, v_bytes_3502_);
lean_dec_ref(v_bytes_3502_);
lean_dec_ref(v_context_3501_);
return v_res_3504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0(lean_object* v_x_3505_){
_start:
{
if (lean_obj_tag(v_x_3505_) == 0)
{
lean_object* v_a_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3515_; 
v_a_3507_ = lean_ctor_get(v_x_3505_, 0);
v_isSharedCheck_3515_ = !lean_is_exclusive(v_x_3505_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_3509_ = v_x_3505_;
v_isShared_3510_ = v_isSharedCheck_3515_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_a_3507_);
lean_dec(v_x_3505_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3515_;
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
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_a_3507_);
v___x_3512_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
lean_object* v___x_3513_; 
v___x_3513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3512_);
return v___x_3513_;
}
}
}
else
{
lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3525_; 
v_a_3516_ = lean_ctor_get(v_x_3505_, 0);
v_isSharedCheck_3525_ = !lean_is_exclusive(v_x_3505_);
if (v_isSharedCheck_3525_ == 0)
{
v___x_3518_ = v_x_3505_;
v_isShared_3519_ = v_isSharedCheck_3525_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_dec(v_x_3505_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3525_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3521_; 
if (v_isShared_3519_ == 0)
{
v___x_3521_ = v___x_3518_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v_a_3516_);
v___x_3521_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___x_3522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3522_, 0, v___x_3521_);
v___x_3523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3522_);
return v___x_3523_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__0___boxed(lean_object* v_x_3526_, lean_object* v___y_3527_){
_start:
{
lean_object* v_res_3528_; 
v_res_3528_ = l_Lasm_Fetch_serveNode___lam__0(v_x_3526_);
return v_res_3528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2(lean_object* v_x_3533_){
_start:
{
if (lean_obj_tag(v_x_3533_) == 0)
{
lean_object* v_a_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3543_; 
v_a_3535_ = lean_ctor_get(v_x_3533_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v_x_3533_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3537_ = v_x_3533_;
v_isShared_3538_ = v_isSharedCheck_3543_;
goto v_resetjp_3536_;
}
else
{
lean_inc(v_a_3535_);
lean_dec(v_x_3533_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3543_;
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
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_a_3535_);
v___x_3540_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
lean_object* v___x_3541_; 
v___x_3541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3540_);
return v___x_3541_;
}
}
}
else
{
lean_object* v___x_3544_; 
lean_dec_ref_known(v_x_3533_, 1);
v___x_3544_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3544_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__2___boxed(lean_object* v_x_3545_, lean_object* v___y_3546_){
_start:
{
lean_object* v_res_3547_; 
v_res_3547_ = l_Lasm_Fetch_serveNode___lam__2(v_x_3545_);
return v_res_3547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1(lean_object* v___f_3548_, lean_object* v_x_3549_){
_start:
{
if (lean_obj_tag(v_x_3549_) == 0)
{
lean_object* v_a_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3559_; 
lean_dec_ref(v___f_3548_);
v_a_3551_ = lean_ctor_get(v_x_3549_, 0);
v_isSharedCheck_3559_ = !lean_is_exclusive(v_x_3549_);
if (v_isSharedCheck_3559_ == 0)
{
v___x_3553_ = v_x_3549_;
v_isShared_3554_ = v_isSharedCheck_3559_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_a_3551_);
lean_dec(v_x_3549_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3559_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3556_; 
if (v_isShared_3554_ == 0)
{
v___x_3556_ = v___x_3553_;
goto v_reusejp_3555_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v_a_3551_);
v___x_3556_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3555_;
}
v_reusejp_3555_:
{
lean_object* v___x_3557_; 
v___x_3557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3557_, 0, v___x_3556_);
return v___x_3557_;
}
}
}
else
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3580_; 
v_a_3560_ = lean_ctor_get(v_x_3549_, 0);
v_isSharedCheck_3580_ = !lean_is_exclusive(v_x_3549_);
if (v_isSharedCheck_3580_ == 0)
{
v___x_3562_ = v_x_3549_;
v_isShared_3563_ = v_isSharedCheck_3580_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v_x_3549_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3580_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v_flush_3564_; lean_object* v___x_3565_; uint8_t v___x_3566_; lean_object* v_val_3568_; lean_object* v___x_3571_; 
v_flush_3564_ = lean_ctor_get(v_a_3560_, 0);
lean_inc_ref(v_flush_3564_);
lean_dec(v_a_3560_);
v___x_3565_ = lean_unsigned_to_nat(0u);
v___x_3566_ = 0;
v___x_3571_ = lean_apply_1(v_flush_3564_, lean_box(0));
if (lean_obj_tag(v___x_3571_) == 0)
{
lean_object* v_a_3572_; lean_object* v___x_3574_; 
v_a_3572_ = lean_ctor_get(v___x_3571_, 0);
lean_inc(v_a_3572_);
lean_dec_ref_known(v___x_3571_, 1);
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 0, v_a_3572_);
v___x_3574_ = v___x_3562_;
goto v_reusejp_3573_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v_a_3572_);
v___x_3574_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3573_;
}
v_reusejp_3573_:
{
v_val_3568_ = v___x_3574_;
goto v___jp_3567_;
}
}
else
{
lean_object* v_a_3576_; lean_object* v___x_3578_; 
v_a_3576_ = lean_ctor_get(v___x_3571_, 0);
lean_inc(v_a_3576_);
lean_dec_ref_known(v___x_3571_, 1);
if (v_isShared_3563_ == 0)
{
lean_ctor_set_tag(v___x_3562_, 0);
lean_ctor_set(v___x_3562_, 0, v_a_3576_);
v___x_3578_ = v___x_3562_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v_a_3576_);
v___x_3578_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
v_val_3568_ = v___x_3578_;
goto v___jp_3567_;
}
}
v___jp_3567_:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; 
v___x_3569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3569_, 0, v_val_3568_);
v___x_3570_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3565_, v___x_3566_, v___x_3569_, v___f_3548_);
return v___x_3570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__1___boxed(lean_object* v___f_3581_, lean_object* v_x_3582_, lean_object* v___y_3583_){
_start:
{
lean_object* v_res_3584_; 
v_res_3584_ = l_Lasm_Fetch_serveNode___lam__1(v___f_3581_, v_x_3582_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3(lean_object* v___f_3585_, lean_object* v_x_3586_){
_start:
{
if (lean_obj_tag(v_x_3586_) == 0)
{
lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3596_; 
lean_dec_ref(v___f_3585_);
v_a_3588_ = lean_ctor_get(v_x_3586_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v_x_3586_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3590_ = v_x_3586_;
v_isShared_3591_ = v_isSharedCheck_3596_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_dec(v_x_3586_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3596_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
if (v_isShared_3591_ == 0)
{
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_a_3588_);
v___x_3593_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
lean_object* v___x_3594_; 
v___x_3594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3594_, 0, v___x_3593_);
return v___x_3594_;
}
}
}
else
{
lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3608_; 
v_isSharedCheck_3608_ = !lean_is_exclusive(v_x_3586_);
if (v_isSharedCheck_3608_ == 0)
{
lean_object* v_unused_3609_; 
v_unused_3609_ = lean_ctor_get(v_x_3586_, 0);
lean_dec(v_unused_3609_);
v___x_3598_ = v_x_3586_;
v_isShared_3599_ = v_isSharedCheck_3608_;
goto v_resetjp_3597_;
}
else
{
lean_dec(v_x_3586_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3608_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
lean_object* v___x_3600_; uint8_t v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3604_; 
v___x_3600_ = lean_unsigned_to_nat(0u);
v___x_3601_ = 0;
v___x_3602_ = lean_get_stdout();
if (v_isShared_3599_ == 0)
{
lean_ctor_set(v___x_3598_, 0, v___x_3602_);
v___x_3604_ = v___x_3598_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v___x_3602_);
v___x_3604_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
lean_object* v___x_3605_; lean_object* v___x_3606_; 
v___x_3605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3605_, 0, v___x_3604_);
v___x_3606_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3600_, v___x_3601_, v___x_3605_, v___f_3585_);
return v___x_3606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__3___boxed(lean_object* v___f_3610_, lean_object* v_x_3611_, lean_object* v___y_3612_){
_start:
{
lean_object* v_res_3613_; 
v_res_3613_ = l_Lasm_Fetch_serveNode___lam__3(v___f_3610_, v_x_3611_);
return v_res_3613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4(lean_object* v_x_3614_){
_start:
{
if (lean_obj_tag(v_x_3614_) == 0)
{
lean_object* v_a_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3624_; 
v_a_3616_ = lean_ctor_get(v_x_3614_, 0);
v_isSharedCheck_3624_ = !lean_is_exclusive(v_x_3614_);
if (v_isSharedCheck_3624_ == 0)
{
v___x_3618_ = v_x_3614_;
v_isShared_3619_ = v_isSharedCheck_3624_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_a_3616_);
lean_dec(v_x_3614_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3624_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3621_; 
if (v_isShared_3619_ == 0)
{
v___x_3621_ = v___x_3618_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_a_3616_);
v___x_3621_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
lean_object* v___x_3622_; 
v___x_3622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3622_, 0, v___x_3621_);
return v___x_3622_;
}
}
}
else
{
lean_object* v___x_3625_; 
lean_dec_ref_known(v_x_3614_, 1);
v___x_3625_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__2___closed__1));
return v___x_3625_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__4___boxed(lean_object* v_x_3626_, lean_object* v___y_3627_){
_start:
{
lean_object* v_res_3628_; 
v_res_3628_ = l_Lasm_Fetch_serveNode___lam__4(v_x_3626_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6(lean_object* v_snd_3630_, lean_object* v___x_3631_, lean_object* v_____r_3632_){
_start:
{
lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; 
v___x_3634_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3635_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3635_, 0, v_snd_3630_);
lean_ctor_set(v___x_3635_, 1, v___x_3634_);
lean_ctor_set(v___x_3635_, 2, v___x_3631_);
v___x_3636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3635_);
v___x_3637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3637_, 0, v___x_3636_);
return v___x_3637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__6___boxed(lean_object* v_snd_3638_, lean_object* v___x_3639_, lean_object* v_____r_3640_, lean_object* v___y_3641_){
_start:
{
lean_object* v_res_3642_; 
v_res_3642_ = l_Lasm_Fetch_serveNode___lam__6(v_snd_3638_, v___x_3639_, v_____r_3640_);
return v_res_3642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5(lean_object* v___f_3643_, lean_object* v_x_3644_){
_start:
{
if (lean_obj_tag(v_x_3644_) == 0)
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3654_; 
lean_dec_ref(v___f_3643_);
v_a_3646_ = lean_ctor_get(v_x_3644_, 0);
v_isSharedCheck_3654_ = !lean_is_exclusive(v_x_3644_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3648_ = v_x_3644_;
v_isShared_3649_ = v_isSharedCheck_3654_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v_x_3644_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3654_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3651_; 
if (v_isShared_3649_ == 0)
{
v___x_3651_ = v___x_3648_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v_a_3646_);
v___x_3651_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
lean_object* v___x_3652_; 
v___x_3652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3652_, 0, v___x_3651_);
return v___x_3652_;
}
}
}
else
{
lean_object* v_a_3655_; 
v_a_3655_ = lean_ctor_get(v_x_3644_, 0);
lean_inc(v_a_3655_);
lean_dec_ref_known(v_x_3644_, 1);
if (lean_obj_tag(v_a_3655_) == 0)
{
lean_object* v_a_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3664_; 
lean_dec_ref(v___f_3643_);
v_a_3656_ = lean_ctor_get(v_a_3655_, 0);
v_isSharedCheck_3664_ = !lean_is_exclusive(v_a_3655_);
if (v_isSharedCheck_3664_ == 0)
{
v___x_3658_ = v_a_3655_;
v_isShared_3659_ = v_isSharedCheck_3664_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_a_3656_);
lean_dec(v_a_3655_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3664_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3661_; 
if (v_isShared_3659_ == 0)
{
lean_ctor_set_tag(v___x_3658_, 1);
v___x_3661_ = v___x_3658_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3663_; 
v_reuseFailAlloc_3663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3663_, 0, v_a_3656_);
v___x_3661_ = v_reuseFailAlloc_3663_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
lean_object* v___x_3662_; 
v___x_3662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3661_);
return v___x_3662_;
}
}
}
else
{
lean_object* v_a_3665_; lean_object* v___x_3666_; 
v_a_3665_ = lean_ctor_get(v_a_3655_, 0);
lean_inc(v_a_3665_);
lean_dec_ref_known(v_a_3655_, 1);
v___x_3666_ = lean_apply_2(v___f_3643_, v_a_3665_, lean_box(0));
return v___x_3666_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__5___boxed(lean_object* v___f_3667_, lean_object* v_x_3668_, lean_object* v___y_3669_){
_start:
{
lean_object* v_res_3670_; 
v_res_3670_ = l_Lasm_Fetch_serveNode___lam__5(v___f_3667_, v_x_3668_);
return v_res_3670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7(lean_object* v_snd_3672_, lean_object* v___x_3673_, lean_object* v_x_3674_){
_start:
{
if (lean_obj_tag(v_x_3674_) == 0)
{
lean_object* v_a_3676_; lean_object* v___x_3678_; uint8_t v_isShared_3679_; uint8_t v_isSharedCheck_3684_; 
lean_dec_ref(v___x_3673_);
lean_dec(v_snd_3672_);
v_a_3676_ = lean_ctor_get(v_x_3674_, 0);
v_isSharedCheck_3684_ = !lean_is_exclusive(v_x_3674_);
if (v_isSharedCheck_3684_ == 0)
{
v___x_3678_ = v_x_3674_;
v_isShared_3679_ = v_isSharedCheck_3684_;
goto v_resetjp_3677_;
}
else
{
lean_inc(v_a_3676_);
lean_dec(v_x_3674_);
v___x_3678_ = lean_box(0);
v_isShared_3679_ = v_isSharedCheck_3684_;
goto v_resetjp_3677_;
}
v_resetjp_3677_:
{
lean_object* v___x_3681_; 
if (v_isShared_3679_ == 0)
{
v___x_3681_ = v___x_3678_;
goto v_reusejp_3680_;
}
else
{
lean_object* v_reuseFailAlloc_3683_; 
v_reuseFailAlloc_3683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3683_, 0, v_a_3676_);
v___x_3681_ = v_reuseFailAlloc_3683_;
goto v_reusejp_3680_;
}
v_reusejp_3680_:
{
lean_object* v___x_3682_; 
v___x_3682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3682_, 0, v___x_3681_);
return v___x_3682_;
}
}
}
else
{
lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3695_; 
v_isSharedCheck_3695_ = !lean_is_exclusive(v_x_3674_);
if (v_isSharedCheck_3695_ == 0)
{
lean_object* v_unused_3696_; 
v_unused_3696_ = lean_ctor_get(v_x_3674_, 0);
lean_dec(v_unused_3696_);
v___x_3686_ = v_x_3674_;
v_isShared_3687_ = v_isSharedCheck_3695_;
goto v_resetjp_3685_;
}
else
{
lean_dec(v_x_3674_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3695_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3691_; 
v___x_3688_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__7___closed__0));
v___x_3689_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3689_, 0, v_snd_3672_);
lean_ctor_set(v___x_3689_, 1, v___x_3688_);
lean_ctor_set(v___x_3689_, 2, v___x_3673_);
if (v_isShared_3687_ == 0)
{
lean_ctor_set_tag(v___x_3686_, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3689_);
v___x_3691_ = v___x_3686_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v___x_3689_);
v___x_3691_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
lean_object* v___x_3692_; lean_object* v___x_3693_; 
v___x_3692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3692_, 0, v___x_3691_);
v___x_3693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3693_, 0, v___x_3692_);
return v___x_3693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__7___boxed(lean_object* v_snd_3697_, lean_object* v___x_3698_, lean_object* v_x_3699_, lean_object* v___y_3700_){
_start:
{
lean_object* v_res_3701_; 
v_res_3701_ = l_Lasm_Fetch_serveNode___lam__7(v_snd_3697_, v___x_3698_, v_x_3699_);
return v_res_3701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(lean_object* v_o_3702_, lean_object* v_name_3703_, lean_object* v_args_3704_){
_start:
{
lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; uint64_t v___x_3709_; lean_object* v___x_3710_; 
v___x_3706_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_3707_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3707_, 0, v_o_3702_);
lean_ctor_set(v___x_3707_, 1, v___x_3706_);
v___x_3708_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3708_, 0, v_name_3703_);
v___x_3709_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1___closed__0);
v___x_3710_ = l_Lasm_JS_Value_invokeRaw(v___x_3707_, v___x_3708_, v_args_3704_, v___x_3709_);
if (lean_obj_tag(v___x_3710_) == 0)
{
lean_object* v_a_3711_; lean_object* v___x_3712_; 
v_a_3711_ = lean_ctor_get(v___x_3710_, 0);
lean_inc(v_a_3711_);
lean_dec_ref_known(v___x_3710_, 1);
v___x_3712_ = l_Lasm_JS_Wire_decode(v_a_3711_);
lean_dec(v_a_3711_);
return v___x_3712_;
}
else
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3720_; 
v_a_3713_ = lean_ctor_get(v___x_3710_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v___x_3710_);
if (v_isSharedCheck_3720_ == 0)
{
v___x_3715_ = v___x_3710_;
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v___x_3710_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v___x_3718_; 
if (v_isShared_3716_ == 0)
{
v___x_3718_ = v___x_3715_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v_a_3713_);
v___x_3718_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
return v___x_3718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1___boxed(lean_object* v_o_3721_, lean_object* v_name_3722_, lean_object* v_args_3723_, lean_object* v_a_3724_){
_start:
{
lean_object* v_res_3725_; 
v_res_3725_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_o_3721_, v_name_3722_, v_args_3723_);
return v_res_3725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8(lean_object* v___x_3726_, uint8_t v___x_3727_, lean_object* v___f_3728_, lean_object* v_snd_3729_, lean_object* v_chunk_3730_){
_start:
{
lean_object* v_val_3733_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; 
v___x_3736_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__4___closed__0));
v___x_3737_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3737_, 0, v_chunk_3730_);
v___x_3738_ = lean_unsigned_to_nat(1u);
v___x_3739_ = lean_mk_empty_array_with_capacity(v___x_3738_);
v___x_3740_ = lean_array_push(v___x_3739_, v___x_3737_);
v___x_3741_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__1(v_snd_3729_, v___x_3736_, v___x_3740_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
v_a_3742_ = lean_ctor_get(v___x_3741_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3744_ = v___x_3741_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3741_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
lean_ctor_set_tag(v___x_3744_, 1);
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
v_val_3733_ = v___x_3747_;
goto v___jp_3732_;
}
}
}
else
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
v_a_3750_ = lean_ctor_get(v___x_3741_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3741_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v___x_3741_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
lean_ctor_set_tag(v___x_3752_, 0);
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
v_val_3733_ = v___x_3755_;
goto v___jp_3732_;
}
}
}
v___jp_3732_:
{
lean_object* v___x_3734_; lean_object* v___x_3735_; 
v___x_3734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3734_, 0, v_val_3733_);
v___x_3735_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3726_, v___x_3727_, v___x_3734_, v___f_3728_);
return v___x_3735_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__8___boxed(lean_object* v___x_3758_, lean_object* v___x_3759_, lean_object* v___f_3760_, lean_object* v_snd_3761_, lean_object* v_chunk_3762_, lean_object* v___y_3763_){
_start:
{
uint8_t v___x_18404__boxed_3764_; lean_object* v_res_3765_; 
v___x_18404__boxed_3764_ = lean_unbox(v___x_3759_);
v_res_3765_ = l_Lasm_Fetch_serveNode___lam__8(v___x_3758_, v___x_18404__boxed_3764_, v___f_3760_, v_snd_3761_, v_chunk_3762_);
return v_res_3765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9(lean_object* v___x_3766_, uint8_t v___x_3767_, lean_object* v___f_3768_, lean_object* v_x_3769_){
_start:
{
lean_object* v_val_3772_; 
if (lean_obj_tag(v_x_3769_) == 0)
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3791_; 
v_a_3775_ = lean_ctor_get(v_x_3769_, 0);
v_isSharedCheck_3791_ = !lean_is_exclusive(v_x_3769_);
if (v_isSharedCheck_3791_ == 0)
{
v___x_3777_ = v_x_3769_;
v_isShared_3778_ = v_isSharedCheck_3791_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v_x_3769_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3791_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3779_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_3780_ = lean_io_error_to_string(v_a_3775_);
v___x_3781_ = lean_string_append(v___x_3779_, v___x_3780_);
lean_dec_ref(v___x_3780_);
v___x_3782_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_3781_);
if (lean_obj_tag(v___x_3782_) == 0)
{
lean_object* v_a_3783_; lean_object* v___x_3785_; 
v_a_3783_ = lean_ctor_get(v___x_3782_, 0);
lean_inc(v_a_3783_);
lean_dec_ref_known(v___x_3782_, 1);
if (v_isShared_3778_ == 0)
{
lean_ctor_set_tag(v___x_3777_, 1);
lean_ctor_set(v___x_3777_, 0, v_a_3783_);
v___x_3785_ = v___x_3777_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v_a_3783_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
v_val_3772_ = v___x_3785_;
goto v___jp_3771_;
}
}
else
{
lean_object* v_a_3787_; lean_object* v___x_3789_; 
v_a_3787_ = lean_ctor_get(v___x_3782_, 0);
lean_inc(v_a_3787_);
lean_dec_ref_known(v___x_3782_, 1);
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 0, v_a_3787_);
v___x_3789_ = v___x_3777_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v_a_3787_);
v___x_3789_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
v_val_3772_ = v___x_3789_;
goto v___jp_3771_;
}
}
}
}
else
{
lean_object* v___x_3792_; 
lean_dec_ref(v___f_3768_);
lean_dec(v___x_3766_);
v___x_3792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3792_, 0, v_x_3769_);
return v___x_3792_;
}
v___jp_3771_:
{
lean_object* v___x_3773_; lean_object* v___x_3774_; 
v___x_3773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3773_, 0, v_val_3772_);
v___x_3774_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3766_, v___x_3767_, v___x_3773_, v___f_3768_);
return v___x_3774_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__9___boxed(lean_object* v___x_3793_, lean_object* v___x_3794_, lean_object* v___f_3795_, lean_object* v_x_3796_, lean_object* v___y_3797_){
_start:
{
uint8_t v___x_18472__boxed_3798_; lean_object* v_res_3799_; 
v___x_18472__boxed_3798_ = lean_unbox(v___x_3794_);
v_res_3799_ = l_Lasm_Fetch_serveNode___lam__9(v___x_3793_, v___x_18472__boxed_3798_, v___f_3795_, v_x_3796_);
return v_res_3799_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10(lean_object* v_stream_3800_, lean_object* v_snd_3801_, lean_object* v___y_3802_, uint16_t v_status_3803_, lean_object* v_body_3804_, lean_object* v___x_3805_, lean_object* v___f_3806_, lean_object* v___f_3807_, lean_object* v___f_3808_, lean_object* v___f_3809_, lean_object* v___f_3810_, lean_object* v_x_3811_){
_start:
{
if (lean_obj_tag(v_x_3811_) == 0)
{
lean_object* v_a_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3821_; 
lean_dec_ref(v___f_3810_);
lean_dec_ref(v___f_3809_);
lean_dec_ref(v___f_3808_);
lean_dec_ref(v___f_3807_);
lean_dec_ref(v___f_3806_);
lean_dec(v___x_3805_);
lean_dec_ref(v_body_3804_);
lean_dec(v_snd_3801_);
lean_dec(v_stream_3800_);
v_a_3813_ = lean_ctor_get(v_x_3811_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v_x_3811_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3815_ = v_x_3811_;
v_isShared_3816_ = v_isSharedCheck_3821_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_a_3813_);
lean_dec(v_x_3811_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3821_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3818_; 
if (v_isShared_3816_ == 0)
{
v___x_3818_ = v___x_3815_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v_a_3813_);
v___x_3818_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
lean_object* v___x_3819_; 
v___x_3819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3819_, 0, v___x_3818_);
return v___x_3819_;
}
}
}
else
{
lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3851_; 
v_isSharedCheck_3851_ = !lean_is_exclusive(v_x_3811_);
if (v_isSharedCheck_3851_ == 0)
{
lean_object* v_unused_3852_; 
v_unused_3852_ = lean_ctor_get(v_x_3811_, 0);
lean_dec(v_unused_3852_);
v___x_3823_ = v_x_3811_;
v_isShared_3824_ = v_isSharedCheck_3851_;
goto v_resetjp_3822_;
}
else
{
lean_dec(v_x_3811_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3851_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
if (lean_obj_tag(v_stream_3800_) == 0)
{
lean_object* v___x_3825_; lean_object* v___y_3827_; uint8_t v___x_3836_; 
lean_dec_ref(v___f_3810_);
lean_dec_ref(v___f_3809_);
lean_dec_ref(v___f_3808_);
lean_dec_ref(v___f_3807_);
lean_dec_ref(v___f_3806_);
lean_dec(v___x_3805_);
v___x_3825_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__6___closed__0));
v___x_3836_ = l_Lasm_Fetch_bodyless(v___y_3802_, v_status_3803_);
if (v___x_3836_ == 0)
{
lean_object* v___x_3837_; 
v___x_3837_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_3837_, 0, v_body_3804_);
v___y_3827_ = v___x_3837_;
goto v___jp_3826_;
}
else
{
lean_object* v___x_3838_; 
lean_dec_ref(v_body_3804_);
v___x_3838_ = lean_box(0);
v___y_3827_ = v___x_3838_;
goto v___jp_3826_;
}
v___jp_3826_:
{
lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3833_; 
v___x_3828_ = lean_unsigned_to_nat(1u);
v___x_3829_ = lean_mk_empty_array_with_capacity(v___x_3828_);
v___x_3830_ = lean_array_push(v___x_3829_, v___y_3827_);
v___x_3831_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3831_, 0, v_snd_3801_);
lean_ctor_set(v___x_3831_, 1, v___x_3825_);
lean_ctor_set(v___x_3831_, 2, v___x_3830_);
if (v_isShared_3824_ == 0)
{
lean_ctor_set(v___x_3823_, 0, v___x_3831_);
v___x_3833_ = v___x_3823_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v___x_3831_);
v___x_3833_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
lean_object* v___x_3834_; 
v___x_3834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3834_, 0, v___x_3833_);
return v___x_3834_;
}
}
}
else
{
lean_object* v_val_3839_; uint8_t v___x_3840_; 
lean_del_object(v___x_3823_);
lean_dec_ref(v_body_3804_);
v_val_3839_ = lean_ctor_get(v_stream_3800_, 0);
lean_inc(v_val_3839_);
lean_dec_ref_known(v_stream_3800_, 1);
v___x_3840_ = l_Lasm_Fetch_bodyless(v___y_3802_, v_status_3803_);
if (v___x_3840_ == 0)
{
lean_object* v___x_3841_; lean_object* v___f_3842_; lean_object* v___x_3843_; lean_object* v___f_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; 
lean_dec_ref(v___f_3810_);
v___x_3841_ = lean_box(v___x_3840_);
lean_inc_n(v___x_3805_, 4);
v___f_3842_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__8___boxed), 6, 4);
lean_closure_set(v___f_3842_, 0, v___x_3805_);
lean_closure_set(v___f_3842_, 1, v___x_3841_);
lean_closure_set(v___f_3842_, 2, v___f_3806_);
lean_closure_set(v___f_3842_, 3, v_snd_3801_);
v___x_3843_ = lean_box(v___x_3840_);
v___f_3844_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__9___boxed), 5, 3);
lean_closure_set(v___f_3844_, 0, v___x_3805_);
lean_closure_set(v___f_3844_, 1, v___x_3843_);
lean_closure_set(v___f_3844_, 2, v___f_3807_);
v___x_3845_ = lean_apply_2(v_val_3839_, v___f_3842_, lean_box(0));
v___x_3846_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3805_, v___x_3840_, v___x_3845_, v___f_3808_);
v___x_3847_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3805_, v___x_3840_, v___x_3846_, v___f_3844_);
v___x_3848_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3805_, v___x_3840_, v___x_3847_, v___f_3809_);
return v___x_3848_;
}
else
{
lean_object* v___x_3849_; lean_object* v___x_3850_; 
lean_dec(v_val_3839_);
lean_dec_ref(v___f_3809_);
lean_dec_ref(v___f_3808_);
lean_dec_ref(v___f_3807_);
lean_dec_ref(v___f_3806_);
lean_dec(v___x_3805_);
lean_dec(v_snd_3801_);
v___x_3849_ = lean_box(0);
v___x_3850_ = lean_apply_2(v___f_3810_, v___x_3849_, lean_box(0));
return v___x_3850_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__10___boxed(lean_object* v_stream_3853_, lean_object* v_snd_3854_, lean_object* v___y_3855_, lean_object* v_status_3856_, lean_object* v_body_3857_, lean_object* v___x_3858_, lean_object* v___f_3859_, lean_object* v___f_3860_, lean_object* v___f_3861_, lean_object* v___f_3862_, lean_object* v___f_3863_, lean_object* v_x_3864_, lean_object* v___y_3865_){
_start:
{
uint16_t v_status_boxed_3866_; lean_object* v_res_3867_; 
v_status_boxed_3866_ = lean_unbox(v_status_3856_);
v_res_3867_ = l_Lasm_Fetch_serveNode___lam__10(v_stream_3853_, v_snd_3854_, v___y_3855_, v_status_boxed_3866_, v_body_3857_, v___x_3858_, v___f_3859_, v___f_3860_, v___f_3861_, v___f_3862_, v___f_3863_, v_x_3864_);
lean_dec_ref(v___y_3855_);
return v_res_3867_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(lean_object* v_as_3868_, size_t v_i_3869_, size_t v_stop_3870_, lean_object* v_b_3871_){
_start:
{
uint8_t v___x_3872_; 
v___x_3872_ = lean_usize_dec_eq(v_i_3869_, v_stop_3870_);
if (v___x_3872_ == 0)
{
lean_object* v___x_3873_; lean_object* v_fst_3874_; lean_object* v_snd_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; size_t v___x_3880_; size_t v___x_3881_; 
v___x_3873_ = lean_array_uget_borrowed(v_as_3868_, v_i_3869_);
v_fst_3874_ = lean_ctor_get(v___x_3873_, 0);
v_snd_3875_ = lean_ctor_get(v___x_3873_, 1);
lean_inc(v_fst_3874_);
v___x_3876_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3876_, 0, v_fst_3874_);
v___x_3877_ = lean_array_push(v_b_3871_, v___x_3876_);
lean_inc(v_snd_3875_);
v___x_3878_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3878_, 0, v_snd_3875_);
v___x_3879_ = lean_array_push(v___x_3877_, v___x_3878_);
v___x_3880_ = ((size_t)1ULL);
v___x_3881_ = lean_usize_add(v_i_3869_, v___x_3880_);
v_i_3869_ = v___x_3881_;
v_b_3871_ = v___x_3879_;
goto _start;
}
else
{
return v_b_3871_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2___boxed(lean_object* v_as_3883_, lean_object* v_i_3884_, lean_object* v_stop_3885_, lean_object* v_b_3886_){
_start:
{
size_t v_i_boxed_3887_; size_t v_stop_boxed_3888_; lean_object* v_res_3889_; 
v_i_boxed_3887_ = lean_unbox_usize(v_i_3884_);
lean_dec(v_i_3884_);
v_stop_boxed_3888_ = lean_unbox_usize(v_stop_3885_);
lean_dec(v_stop_3885_);
v_res_3889_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_as_3883_, v_i_boxed_3887_, v_stop_boxed_3888_, v_b_3886_);
lean_dec_ref(v_as_3883_);
return v_res_3889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11(lean_object* v___x_3891_, lean_object* v_snd_3892_, lean_object* v___y_3893_, lean_object* v___f_3894_, lean_object* v___f_3895_, lean_object* v_x_3896_){
_start:
{
uint8_t v___y_3899_; lean_object* v___y_3900_; lean_object* v_val_3901_; lean_object* v___y_3905_; lean_object* v___y_3906_; lean_object* v___y_3907_; lean_object* v___y_3908_; 
if (lean_obj_tag(v_x_3896_) == 0)
{
lean_object* v_a_3932_; lean_object* v___x_3934_; uint8_t v_isShared_3935_; uint8_t v_isSharedCheck_3940_; 
lean_dec_ref(v___f_3895_);
lean_dec_ref(v___f_3894_);
lean_dec_ref(v___y_3893_);
lean_dec(v_snd_3892_);
lean_dec(v___x_3891_);
v_a_3932_ = lean_ctor_get(v_x_3896_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v_x_3896_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3934_ = v_x_3896_;
v_isShared_3935_ = v_isSharedCheck_3940_;
goto v_resetjp_3933_;
}
else
{
lean_inc(v_a_3932_);
lean_dec(v_x_3896_);
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
lean_object* v_a_3941_; uint16_t v_status_3942_; lean_object* v_headers_3943_; lean_object* v_body_3944_; lean_object* v_stream_3945_; lean_object* v___x_3946_; lean_object* v___f_3947_; lean_object* v___f_3948_; lean_object* v___f_3949_; lean_object* v___y_3951_; lean_object* v___x_3963_; uint8_t v___x_3964_; 
v_a_3941_ = lean_ctor_get(v_x_3896_, 0);
lean_inc(v_a_3941_);
lean_dec_ref_known(v_x_3896_, 1);
v_status_3942_ = lean_ctor_get_uint16(v_a_3941_, sizeof(void*)*3);
v_headers_3943_ = lean_ctor_get(v_a_3941_, 0);
lean_inc_ref(v_headers_3943_);
v_body_3944_ = lean_ctor_get(v_a_3941_, 1);
lean_inc_ref(v_body_3944_);
v_stream_3945_ = lean_ctor_get(v_a_3941_, 2);
lean_inc(v_stream_3945_);
lean_dec(v_a_3941_);
v___x_3946_ = lean_mk_empty_array_with_capacity(v___x_3891_);
lean_inc_ref_n(v___x_3946_, 2);
lean_inc_n(v_snd_3892_, 2);
v___f_3947_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__6___boxed), 4, 2);
lean_closure_set(v___f_3947_, 0, v_snd_3892_);
lean_closure_set(v___f_3947_, 1, v___x_3946_);
lean_inc_ref(v___f_3947_);
v___f_3948_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3948_, 0, v___f_3947_);
v___f_3949_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3949_, 0, v_snd_3892_);
lean_closure_set(v___f_3949_, 1, v___x_3946_);
v___x_3963_ = lean_array_get_size(v_headers_3943_);
v___x_3964_ = lean_nat_dec_lt(v___x_3891_, v___x_3963_);
if (v___x_3964_ == 0)
{
lean_dec_ref(v_headers_3943_);
v___y_3951_ = v___x_3946_;
goto v___jp_3950_;
}
else
{
uint8_t v___x_3965_; 
v___x_3965_ = lean_nat_dec_le(v___x_3963_, v___x_3963_);
if (v___x_3965_ == 0)
{
if (v___x_3964_ == 0)
{
lean_dec_ref(v_headers_3943_);
v___y_3951_ = v___x_3946_;
goto v___jp_3950_;
}
else
{
size_t v___x_3966_; size_t v___x_3967_; lean_object* v___x_3968_; 
v___x_3966_ = ((size_t)0ULL);
v___x_3967_ = lean_usize_of_nat(v___x_3963_);
v___x_3968_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_3943_, v___x_3966_, v___x_3967_, v___x_3946_);
lean_dec_ref(v_headers_3943_);
v___y_3951_ = v___x_3968_;
goto v___jp_3950_;
}
}
else
{
size_t v___x_3969_; size_t v___x_3970_; lean_object* v___x_3971_; 
v___x_3969_ = ((size_t)0ULL);
v___x_3970_ = lean_usize_of_nat(v___x_3963_);
v___x_3971_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_Fetch_serveNode_spec__2(v_headers_3943_, v___x_3969_, v___x_3970_, v___x_3946_);
lean_dec_ref(v_headers_3943_);
v___y_3951_ = v___x_3971_;
goto v___jp_3950_;
}
}
v___jp_3950_:
{
lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___f_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; uint8_t v___x_3959_; 
v___x_3952_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__11___closed__0));
v___x_3953_ = lean_box(v_status_3942_);
lean_inc(v___x_3891_);
lean_inc(v_snd_3892_);
v___f_3954_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3954_, 0, v_stream_3945_);
lean_closure_set(v___f_3954_, 1, v_snd_3892_);
lean_closure_set(v___f_3954_, 2, v___y_3893_);
lean_closure_set(v___f_3954_, 3, v___x_3953_);
lean_closure_set(v___f_3954_, 4, v_body_3944_);
lean_closure_set(v___f_3954_, 5, v___x_3891_);
lean_closure_set(v___f_3954_, 6, v___f_3894_);
lean_closure_set(v___f_3954_, 7, v___f_3949_);
lean_closure_set(v___f_3954_, 8, v___f_3895_);
lean_closure_set(v___f_3954_, 9, v___f_3948_);
lean_closure_set(v___f_3954_, 10, v___f_3947_);
v___x_3955_ = lean_uint16_to_nat(v_status_3942_);
v___x_3956_ = lean_nat_to_int(v___x_3955_);
v___x_3957_ = lean_nat_abs(v___x_3956_);
v___x_3958_ = lean_cstr_to_nat("9007199254740991");
v___x_3959_ = lean_nat_dec_le(v___x_3957_, v___x_3958_);
lean_dec(v___x_3957_);
if (v___x_3959_ == 0)
{
lean_object* v___x_3960_; 
v___x_3960_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3956_);
v___y_3905_ = v___x_3952_;
v___y_3906_ = v___y_3951_;
v___y_3907_ = v___f_3954_;
v___y_3908_ = v___x_3960_;
goto v___jp_3904_;
}
else
{
double v___x_3961_; lean_object* v___x_3962_; 
v___x_3961_ = l_Float_ofInt(v___x_3956_);
lean_dec(v___x_3956_);
v___x_3962_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3962_, 0, v___x_3961_);
v___y_3905_ = v___x_3952_;
v___y_3906_ = v___y_3951_;
v___y_3907_ = v___f_3954_;
v___y_3908_ = v___x_3962_;
goto v___jp_3904_;
}
}
}
v___jp_3898_:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3902_, 0, v_val_3901_);
v___x_3903_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3891_, v___y_3899_, v___x_3902_, v___y_3900_);
return v___x_3903_;
}
v___jp_3904_:
{
lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; uint8_t v___x_3914_; lean_object* v___x_3915_; 
v___x_3909_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3909_, 0, v___y_3906_);
v___x_3910_ = lean_unsigned_to_nat(2u);
v___x_3911_ = lean_mk_empty_array_with_capacity(v___x_3910_);
v___x_3912_ = lean_array_push(v___x_3911_, v___y_3908_);
v___x_3913_ = lean_array_push(v___x_3912_, v___x_3909_);
v___x_3914_ = 0;
lean_inc_ref(v___y_3905_);
v___x_3915_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_snd_3892_, v___y_3905_, v___x_3913_);
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_object* v_a_3916_; lean_object* v___x_3918_; uint8_t v_isShared_3919_; uint8_t v_isSharedCheck_3923_; 
v_a_3916_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3923_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3923_ == 0)
{
v___x_3918_ = v___x_3915_;
v_isShared_3919_ = v_isSharedCheck_3923_;
goto v_resetjp_3917_;
}
else
{
lean_inc(v_a_3916_);
lean_dec(v___x_3915_);
v___x_3918_ = lean_box(0);
v_isShared_3919_ = v_isSharedCheck_3923_;
goto v_resetjp_3917_;
}
v_resetjp_3917_:
{
lean_object* v___x_3921_; 
if (v_isShared_3919_ == 0)
{
lean_ctor_set_tag(v___x_3918_, 1);
v___x_3921_ = v___x_3918_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3922_; 
v_reuseFailAlloc_3922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3922_, 0, v_a_3916_);
v___x_3921_ = v_reuseFailAlloc_3922_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
v___y_3899_ = v___x_3914_;
v___y_3900_ = v___y_3907_;
v_val_3901_ = v___x_3921_;
goto v___jp_3898_;
}
}
}
else
{
lean_object* v_a_3924_; lean_object* v___x_3926_; uint8_t v_isShared_3927_; uint8_t v_isSharedCheck_3931_; 
v_a_3924_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3931_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3931_ == 0)
{
v___x_3926_ = v___x_3915_;
v_isShared_3927_ = v_isSharedCheck_3931_;
goto v_resetjp_3925_;
}
else
{
lean_inc(v_a_3924_);
lean_dec(v___x_3915_);
v___x_3926_ = lean_box(0);
v_isShared_3927_ = v_isSharedCheck_3931_;
goto v_resetjp_3925_;
}
v_resetjp_3925_:
{
lean_object* v___x_3929_; 
if (v_isShared_3927_ == 0)
{
lean_ctor_set_tag(v___x_3926_, 0);
v___x_3929_ = v___x_3926_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v_a_3924_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
v___y_3899_ = v___x_3914_;
v___y_3900_ = v___y_3907_;
v_val_3901_ = v___x_3929_;
goto v___jp_3898_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__11___boxed(lean_object* v___x_3972_, lean_object* v_snd_3973_, lean_object* v___y_3974_, lean_object* v___f_3975_, lean_object* v___f_3976_, lean_object* v_x_3977_, lean_object* v___y_3978_){
_start:
{
lean_object* v_res_3979_; 
v_res_3979_ = l_Lasm_Fetch_serveNode___lam__11(v___x_3972_, v_snd_3973_, v___y_3974_, v___f_3975_, v___f_3976_, v_x_3977_);
return v_res_3979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12(lean_object* v_handler_3980_, lean_object* v___x_3981_, lean_object* v___f_3982_, lean_object* v_request_3983_){
_start:
{
uint8_t v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; 
v___x_3985_ = 0;
v___x_3986_ = l_Lasm_Fetch_respond(v_handler_3980_, v_request_3983_);
v___x_3987_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3981_, v___x_3985_, v___x_3986_, v___f_3982_);
return v___x_3987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__12___boxed(lean_object* v_handler_3988_, lean_object* v___x_3989_, lean_object* v___f_3990_, lean_object* v_request_3991_, lean_object* v___y_3992_){
_start:
{
lean_object* v_res_3993_; 
v_res_3993_ = l_Lasm_Fetch_serveNode___lam__12(v_handler_3988_, v___x_3989_, v___f_3990_, v_request_3991_);
return v_res_3993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13(lean_object* v___f_3994_, lean_object* v_x_3995_){
_start:
{
if (lean_obj_tag(v_x_3995_) == 0)
{
lean_object* v_a_3997_; lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4005_; 
lean_dec_ref(v___f_3994_);
v_a_3997_ = lean_ctor_get(v_x_3995_, 0);
v_isSharedCheck_4005_ = !lean_is_exclusive(v_x_3995_);
if (v_isSharedCheck_4005_ == 0)
{
v___x_3999_ = v_x_3995_;
v_isShared_4000_ = v_isSharedCheck_4005_;
goto v_resetjp_3998_;
}
else
{
lean_inc(v_a_3997_);
lean_dec(v_x_3995_);
v___x_3999_ = lean_box(0);
v_isShared_4000_ = v_isSharedCheck_4005_;
goto v_resetjp_3998_;
}
v_resetjp_3998_:
{
lean_object* v___x_4002_; 
if (v_isShared_4000_ == 0)
{
v___x_4002_ = v___x_3999_;
goto v_reusejp_4001_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v_a_3997_);
v___x_4002_ = v_reuseFailAlloc_4004_;
goto v_reusejp_4001_;
}
v_reusejp_4001_:
{
lean_object* v___x_4003_; 
v___x_4003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4003_, 0, v___x_4002_);
return v___x_4003_;
}
}
}
else
{
lean_object* v_a_4006_; lean_object* v___x_4007_; 
v_a_4006_ = lean_ctor_get(v_x_3995_, 0);
lean_inc(v_a_4006_);
lean_dec_ref_known(v_x_3995_, 1);
v___x_4007_ = lean_apply_2(v___f_3994_, v_a_4006_, lean_box(0));
return v___x_4007_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__13___boxed(lean_object* v___f_4008_, lean_object* v_x_4009_, lean_object* v___y_4010_){
_start:
{
lean_object* v_res_4011_; 
v_res_4011_ = l_Lasm_Fetch_serveNode___lam__13(v___f_4008_, v_x_4009_);
return v_res_4011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18(lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___x_4014_, lean_object* v___f_4015_, lean_object* v___x_4016_, uint8_t v___x_4017_, lean_object* v___f_4018_, lean_object* v_x_4019_){
_start:
{
if (lean_obj_tag(v_x_4019_) == 0)
{
lean_object* v_a_4021_; lean_object* v___x_4023_; uint8_t v_isShared_4024_; uint8_t v_isSharedCheck_4029_; 
lean_dec_ref(v___f_4018_);
lean_dec(v___x_4016_);
lean_dec_ref(v___f_4015_);
lean_dec_ref(v___x_4014_);
lean_dec_ref(v___y_4013_);
lean_dec_ref(v___y_4012_);
v_a_4021_ = lean_ctor_get(v_x_4019_, 0);
v_isSharedCheck_4029_ = !lean_is_exclusive(v_x_4019_);
if (v_isSharedCheck_4029_ == 0)
{
v___x_4023_ = v_x_4019_;
v_isShared_4024_ = v_isSharedCheck_4029_;
goto v_resetjp_4022_;
}
else
{
lean_inc(v_a_4021_);
lean_dec(v_x_4019_);
v___x_4023_ = lean_box(0);
v_isShared_4024_ = v_isSharedCheck_4029_;
goto v_resetjp_4022_;
}
v_resetjp_4022_:
{
lean_object* v___x_4026_; 
if (v_isShared_4024_ == 0)
{
v___x_4026_ = v___x_4023_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4028_; 
v_reuseFailAlloc_4028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4028_, 0, v_a_4021_);
v___x_4026_ = v_reuseFailAlloc_4028_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
lean_object* v___x_4027_; 
v___x_4027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4027_, 0, v___x_4026_);
return v___x_4027_;
}
}
}
else
{
lean_object* v_a_4030_; lean_object* v___x_4032_; uint8_t v_isShared_4033_; uint8_t v_isSharedCheck_4040_; 
v_a_4030_ = lean_ctor_get(v_x_4019_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v_x_4019_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4032_ = v_x_4019_;
v_isShared_4033_ = v_isSharedCheck_4040_;
goto v_resetjp_4031_;
}
else
{
lean_inc(v_a_4030_);
lean_dec(v_x_4019_);
v___x_4032_ = lean_box(0);
v_isShared_4033_ = v_isSharedCheck_4040_;
goto v_resetjp_4031_;
}
v_resetjp_4031_:
{
lean_object* v___x_4034_; lean_object* v___x_4036_; 
v___x_4034_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4034_, 0, v___y_4012_);
lean_ctor_set(v___x_4034_, 1, v___y_4013_);
lean_ctor_set(v___x_4034_, 2, v___x_4014_);
lean_ctor_set(v___x_4034_, 3, v_a_4030_);
lean_ctor_set(v___x_4034_, 4, v___f_4015_);
if (v_isShared_4033_ == 0)
{
lean_ctor_set(v___x_4032_, 0, v___x_4034_);
v___x_4036_ = v___x_4032_;
goto v_reusejp_4035_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v___x_4034_);
v___x_4036_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4035_;
}
v_reusejp_4035_:
{
lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___x_4037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4037_, 0, v___x_4036_);
v___x_4038_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4016_, v___x_4017_, v___x_4037_, v___f_4018_);
return v___x_4038_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__18___boxed(lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___x_4043_, lean_object* v___f_4044_, lean_object* v___x_4045_, lean_object* v___x_4046_, lean_object* v___f_4047_, lean_object* v_x_4048_, lean_object* v___y_4049_){
_start:
{
uint8_t v___x_18879__boxed_4050_; lean_object* v_res_4051_; 
v___x_18879__boxed_4050_ = lean_unbox(v___x_4046_);
v_res_4051_ = l_Lasm_Fetch_serveNode___lam__18(v___y_4041_, v___y_4042_, v___x_4043_, v___f_4044_, v___x_4045_, v___x_18879__boxed_4050_, v___f_4047_, v_x_4048_);
return v_res_4051_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0(void){
_start:
{
uint64_t v___x_4052_; uint8_t v___x_4053_; uint64_t v___x_4054_; 
v___x_4052_ = 8ULL;
v___x_4053_ = 0;
v___x_4054_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__0(v___x_4053_, v___x_4052_);
return v___x_4054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(lean_object* v_o_4055_, lean_object* v_name_4056_, lean_object* v_args_4057_){
_start:
{
lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; uint64_t v___x_4062_; lean_object* v___x_4063_; 
v___x_4059_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4060_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4060_, 0, v_o_4055_);
lean_ctor_set(v___x_4060_, 1, v___x_4059_);
lean_inc_ref(v_name_4056_);
v___x_4061_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4061_, 0, v_name_4056_);
v___x_4062_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___closed__0);
v___x_4063_ = l_Lasm_JS_Value_invokeRaw(v___x_4060_, v___x_4061_, v_args_4057_, v___x_4062_);
if (lean_obj_tag(v___x_4063_) == 0)
{
lean_object* v_a_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; 
v_a_4064_ = lean_ctor_get(v___x_4063_, 0);
lean_inc(v_a_4064_);
lean_dec_ref_known(v___x_4063_, 1);
v___x_4065_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0___closed__1));
v___x_4066_ = lean_string_append(v___x_4065_, v_name_4056_);
lean_dec_ref(v_name_4056_);
v___x_4067_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1(v___x_4066_, v_a_4064_);
lean_dec(v_a_4064_);
lean_dec_ref(v___x_4066_);
return v___x_4067_;
}
else
{
lean_dec_ref(v_name_4056_);
return v___x_4063_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4___boxed(lean_object* v_o_4068_, lean_object* v_name_4069_, lean_object* v_args_4070_, lean_object* v_a_4071_){
_start:
{
lean_object* v_res_4072_; 
v_res_4072_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_o_4068_, v_name_4069_, v_args_4070_);
return v_res_4072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14(lean_object* v___x_4074_, uint8_t v___x_4075_, lean_object* v___f_4076_, lean_object* v___x_4077_, lean_object* v_a_4078_, lean_object* v_x_4079_){
_start:
{
lean_object* v_val_4082_; 
if (lean_obj_tag(v_x_4079_) == 0)
{
lean_object* v_a_4085_; lean_object* v___x_4087_; uint8_t v_isShared_4088_; uint8_t v_isSharedCheck_4093_; 
lean_dec(v_a_4078_);
lean_dec_ref(v___f_4076_);
lean_dec(v___x_4074_);
v_a_4085_ = lean_ctor_get(v_x_4079_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v_x_4079_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4087_ = v_x_4079_;
v_isShared_4088_ = v_isSharedCheck_4093_;
goto v_resetjp_4086_;
}
else
{
lean_inc(v_a_4085_);
lean_dec(v_x_4079_);
v___x_4087_ = lean_box(0);
v_isShared_4088_ = v_isSharedCheck_4093_;
goto v_resetjp_4086_;
}
v_resetjp_4086_:
{
lean_object* v___x_4090_; 
if (v_isShared_4088_ == 0)
{
v___x_4090_ = v___x_4087_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_a_4085_);
v___x_4090_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
lean_object* v___x_4091_; 
v___x_4091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4091_, 0, v___x_4090_);
return v___x_4091_;
}
}
}
else
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4112_; 
v_a_4094_ = lean_ctor_get(v_x_4079_, 0);
v_isSharedCheck_4112_ = !lean_is_exclusive(v_x_4079_);
if (v_isSharedCheck_4112_ == 0)
{
v___x_4096_ = v_x_4079_;
v_isShared_4097_ = v_isSharedCheck_4112_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v_x_4079_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4112_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; 
v___x_4098_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__14___closed__0));
v___x_4099_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4100_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4100_, 0, v_a_4094_);
lean_ctor_set(v___x_4100_, 1, v___x_4099_);
v___x_4101_ = lean_mk_empty_array_with_capacity(v___x_4077_);
v___x_4102_ = lean_array_push(v___x_4101_, v___x_4100_);
v___x_4103_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_serveNode_spec__4(v_a_4078_, v___x_4098_, v___x_4102_);
if (lean_obj_tag(v___x_4103_) == 0)
{
lean_object* v_a_4104_; lean_object* v___x_4106_; 
v_a_4104_ = lean_ctor_get(v___x_4103_, 0);
lean_inc(v_a_4104_);
lean_dec_ref_known(v___x_4103_, 1);
if (v_isShared_4097_ == 0)
{
lean_ctor_set(v___x_4096_, 0, v_a_4104_);
v___x_4106_ = v___x_4096_;
goto v_reusejp_4105_;
}
else
{
lean_object* v_reuseFailAlloc_4107_; 
v_reuseFailAlloc_4107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4107_, 0, v_a_4104_);
v___x_4106_ = v_reuseFailAlloc_4107_;
goto v_reusejp_4105_;
}
v_reusejp_4105_:
{
v_val_4082_ = v___x_4106_;
goto v___jp_4081_;
}
}
else
{
lean_object* v_a_4108_; lean_object* v___x_4110_; 
v_a_4108_ = lean_ctor_get(v___x_4103_, 0);
lean_inc(v_a_4108_);
lean_dec_ref_known(v___x_4103_, 1);
if (v_isShared_4097_ == 0)
{
lean_ctor_set_tag(v___x_4096_, 0);
lean_ctor_set(v___x_4096_, 0, v_a_4108_);
v___x_4110_ = v___x_4096_;
goto v_reusejp_4109_;
}
else
{
lean_object* v_reuseFailAlloc_4111_; 
v_reuseFailAlloc_4111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4111_, 0, v_a_4108_);
v___x_4110_ = v_reuseFailAlloc_4111_;
goto v_reusejp_4109_;
}
v_reusejp_4109_:
{
v_val_4082_ = v___x_4110_;
goto v___jp_4081_;
}
}
}
}
v___jp_4081_:
{
lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4083_, 0, v_val_4082_);
v___x_4084_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4074_, v___x_4075_, v___x_4083_, v___f_4076_);
return v___x_4084_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__14___boxed(lean_object* v___x_4113_, lean_object* v___x_4114_, lean_object* v___f_4115_, lean_object* v___x_4116_, lean_object* v_a_4117_, lean_object* v_x_4118_, lean_object* v___y_4119_){
_start:
{
uint8_t v___x_18978__boxed_4120_; lean_object* v_res_4121_; 
v___x_18978__boxed_4120_ = lean_unbox(v___x_4114_);
v_res_4121_ = l_Lasm_Fetch_serveNode___lam__14(v___x_4113_, v___x_18978__boxed_4120_, v___f_4115_, v___x_4116_, v_a_4117_, v_x_4118_);
lean_dec(v___x_4116_);
return v_res_4121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15(lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___x_4124_, lean_object* v___x_4125_, lean_object* v___x_4126_, uint8_t v___x_4127_, lean_object* v___f_4128_, lean_object* v_x_4129_){
_start:
{
if (lean_obj_tag(v_x_4129_) == 0)
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4139_; 
lean_dec_ref(v___f_4128_);
lean_dec(v___x_4126_);
lean_dec_ref(v___x_4125_);
lean_dec_ref(v___x_4124_);
lean_dec_ref(v___y_4123_);
lean_dec_ref(v___y_4122_);
v_a_4131_ = lean_ctor_get(v_x_4129_, 0);
v_isSharedCheck_4139_ = !lean_is_exclusive(v_x_4129_);
if (v_isSharedCheck_4139_ == 0)
{
v___x_4133_ = v_x_4129_;
v_isShared_4134_ = v_isSharedCheck_4139_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v_x_4129_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4139_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4136_; 
if (v_isShared_4134_ == 0)
{
v___x_4136_ = v___x_4133_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v_a_4131_);
v___x_4136_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
lean_object* v___x_4137_; 
v___x_4137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4137_, 0, v___x_4136_);
return v___x_4137_;
}
}
}
else
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4150_; 
v_a_4140_ = lean_ctor_get(v_x_4129_, 0);
v_isSharedCheck_4150_ = !lean_is_exclusive(v_x_4129_);
if (v_isSharedCheck_4150_ == 0)
{
v___x_4142_ = v_x_4129_;
v_isShared_4143_ = v_isSharedCheck_4150_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v_x_4129_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4150_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4144_; lean_object* v___x_4146_; 
v___x_4144_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4144_, 0, v___y_4122_);
lean_ctor_set(v___x_4144_, 1, v___y_4123_);
lean_ctor_set(v___x_4144_, 2, v___x_4124_);
lean_ctor_set(v___x_4144_, 3, v___x_4125_);
lean_ctor_set(v___x_4144_, 4, v_a_4140_);
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 0, v___x_4144_);
v___x_4146_ = v___x_4142_;
goto v_reusejp_4145_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v___x_4144_);
v___x_4146_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4145_;
}
v_reusejp_4145_:
{
lean_object* v___x_4147_; lean_object* v___x_4148_; 
v___x_4147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4147_, 0, v___x_4146_);
v___x_4148_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4126_, v___x_4127_, v___x_4147_, v___f_4128_);
return v___x_4148_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__15___boxed(lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___x_4153_, lean_object* v___x_4154_, lean_object* v___x_4155_, lean_object* v___x_4156_, lean_object* v___f_4157_, lean_object* v_x_4158_, lean_object* v___y_4159_){
_start:
{
uint8_t v___x_19068__boxed_4160_; lean_object* v_res_4161_; 
v___x_19068__boxed_4160_ = lean_unbox(v___x_4156_);
v_res_4161_ = l_Lasm_Fetch_serveNode___lam__15(v___y_4151_, v___y_4152_, v___x_4153_, v___x_4154_, v___x_4155_, v___x_19068__boxed_4160_, v___f_4157_, v_x_4158_);
return v_res_4161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16(lean_object* v___x_4162_, uint8_t v___x_4163_, lean_object* v___f_4164_, lean_object* v_x_4165_){
_start:
{
lean_object* v_val_4168_; 
if (lean_obj_tag(v_x_4165_) == 0)
{
lean_object* v_a_4171_; lean_object* v___x_4173_; uint8_t v_isShared_4174_; uint8_t v_isSharedCheck_4179_; 
lean_dec_ref(v___f_4164_);
lean_dec(v___x_4162_);
v_a_4171_ = lean_ctor_get(v_x_4165_, 0);
v_isSharedCheck_4179_ = !lean_is_exclusive(v_x_4165_);
if (v_isSharedCheck_4179_ == 0)
{
v___x_4173_ = v_x_4165_;
v_isShared_4174_ = v_isSharedCheck_4179_;
goto v_resetjp_4172_;
}
else
{
lean_inc(v_a_4171_);
lean_dec(v_x_4165_);
v___x_4173_ = lean_box(0);
v_isShared_4174_ = v_isSharedCheck_4179_;
goto v_resetjp_4172_;
}
v_resetjp_4172_:
{
lean_object* v___x_4176_; 
if (v_isShared_4174_ == 0)
{
v___x_4176_ = v___x_4173_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v_a_4171_);
v___x_4176_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
lean_object* v___x_4177_; 
v___x_4177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4177_, 0, v___x_4176_);
return v___x_4177_;
}
}
}
else
{
lean_object* v_a_4180_; lean_object* v___x_4182_; uint8_t v_isShared_4183_; uint8_t v_isSharedCheck_4193_; 
v_a_4180_ = lean_ctor_get(v_x_4165_, 0);
v_isSharedCheck_4193_ = !lean_is_exclusive(v_x_4165_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4182_ = v_x_4165_;
v_isShared_4183_ = v_isSharedCheck_4193_;
goto v_resetjp_4181_;
}
else
{
lean_inc(v_a_4180_);
lean_dec(v_x_4165_);
v___x_4182_ = lean_box(0);
v_isShared_4183_ = v_isSharedCheck_4193_;
goto v_resetjp_4181_;
}
v_resetjp_4181_:
{
lean_object* v___x_4184_; 
v___x_4184_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks(v_a_4180_);
if (lean_obj_tag(v___x_4184_) == 0)
{
lean_object* v_a_4185_; lean_object* v___x_4187_; 
v_a_4185_ = lean_ctor_get(v___x_4184_, 0);
lean_inc(v_a_4185_);
lean_dec_ref_known(v___x_4184_, 1);
if (v_isShared_4183_ == 0)
{
lean_ctor_set(v___x_4182_, 0, v_a_4185_);
v___x_4187_ = v___x_4182_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4188_; 
v_reuseFailAlloc_4188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4188_, 0, v_a_4185_);
v___x_4187_ = v_reuseFailAlloc_4188_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
v_val_4168_ = v___x_4187_;
goto v___jp_4167_;
}
}
else
{
lean_object* v_a_4189_; lean_object* v___x_4191_; 
v_a_4189_ = lean_ctor_get(v___x_4184_, 0);
lean_inc(v_a_4189_);
lean_dec_ref_known(v___x_4184_, 1);
if (v_isShared_4183_ == 0)
{
lean_ctor_set_tag(v___x_4182_, 0);
lean_ctor_set(v___x_4182_, 0, v_a_4189_);
v___x_4191_ = v___x_4182_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4192_; 
v_reuseFailAlloc_4192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4192_, 0, v_a_4189_);
v___x_4191_ = v_reuseFailAlloc_4192_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
v_val_4168_ = v___x_4191_;
goto v___jp_4167_;
}
}
}
}
v___jp_4167_:
{
lean_object* v___x_4169_; lean_object* v___x_4170_; 
v___x_4169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4169_, 0, v_val_4168_);
v___x_4170_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4162_, v___x_4163_, v___x_4169_, v___f_4164_);
return v___x_4170_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__16___boxed(lean_object* v___x_4194_, lean_object* v___x_4195_, lean_object* v___f_4196_, lean_object* v_x_4197_, lean_object* v___y_4198_){
_start:
{
uint8_t v___x_19131__boxed_4199_; lean_object* v_res_4200_; 
v___x_19131__boxed_4199_ = lean_unbox(v___x_4195_);
v_res_4200_ = l_Lasm_Fetch_serveNode___lam__16(v___x_4194_, v___x_19131__boxed_4199_, v___f_4196_, v_x_4197_);
return v_res_4200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(lean_object* v___y_4201_, lean_object* v_range_4202_, lean_object* v_b_4203_, lean_object* v_i_4204_){
_start:
{
lean_object* v_stop_4205_; lean_object* v_step_4206_; uint8_t v___x_4207_; 
v_stop_4205_ = lean_ctor_get(v_range_4202_, 1);
v_step_4206_ = lean_ctor_get(v_range_4202_, 2);
v___x_4207_ = lean_nat_dec_lt(v_i_4204_, v_stop_4205_);
if (v___x_4207_ == 0)
{
lean_dec(v_i_4204_);
return v_b_4203_;
}
else
{
lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; 
v___x_4208_ = lean_unsigned_to_nat(2u);
v___x_4209_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4210_ = lean_unsigned_to_nat(1u);
v___x_4211_ = lean_nat_mul(v___x_4208_, v_i_4204_);
v___x_4212_ = lean_array_get_borrowed(v___x_4209_, v___y_4201_, v___x_4211_);
v___x_4213_ = lean_nat_add(v___x_4211_, v___x_4210_);
lean_dec(v___x_4211_);
v___x_4214_ = lean_array_get_borrowed(v___x_4209_, v___y_4201_, v___x_4213_);
lean_dec(v___x_4213_);
lean_inc(v___x_4214_);
lean_inc(v___x_4212_);
v___x_4215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4215_, 0, v___x_4212_);
lean_ctor_set(v___x_4215_, 1, v___x_4214_);
v___x_4216_ = lean_array_push(v_b_4203_, v___x_4215_);
v___x_4217_ = lean_nat_add(v_i_4204_, v_step_4206_);
lean_dec(v_i_4204_);
v_b_4203_ = v___x_4216_;
v_i_4204_ = v___x_4217_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg___boxed(lean_object* v___y_4219_, lean_object* v_range_4220_, lean_object* v_b_4221_, lean_object* v_i_4222_){
_start:
{
lean_object* v_res_4223_; 
v_res_4223_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4219_, v_range_4220_, v_b_4221_, v_i_4222_);
lean_dec_ref(v_range_4220_);
lean_dec_ref(v___y_4219_);
return v_res_4223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(lean_object* v_as_4224_, size_t v_i_4225_, size_t v_stop_4226_, lean_object* v_b_4227_){
_start:
{
lean_object* v___y_4229_; uint8_t v___x_4233_; 
v___x_4233_ = lean_usize_dec_eq(v_i_4225_, v_stop_4226_);
if (v___x_4233_ == 0)
{
lean_object* v___x_4234_; 
v___x_4234_ = lean_array_uget_borrowed(v_as_4224_, v_i_4225_);
if (lean_obj_tag(v___x_4234_) == 4)
{
lean_object* v_s_4235_; lean_object* v___x_4236_; 
v_s_4235_ = lean_ctor_get(v___x_4234_, 0);
lean_inc_ref(v_s_4235_);
v___x_4236_ = lean_array_push(v_b_4227_, v_s_4235_);
v___y_4229_ = v___x_4236_;
goto v___jp_4228_;
}
else
{
v___y_4229_ = v_b_4227_;
goto v___jp_4228_;
}
}
else
{
return v_b_4227_;
}
v___jp_4228_:
{
size_t v___x_4230_; size_t v___x_4231_; 
v___x_4230_ = ((size_t)1ULL);
v___x_4231_ = lean_usize_add(v_i_4225_, v___x_4230_);
v_i_4225_ = v___x_4231_;
v_b_4227_ = v___y_4229_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7___boxed(lean_object* v_as_4237_, lean_object* v_i_4238_, lean_object* v_stop_4239_, lean_object* v_b_4240_){
_start:
{
size_t v_i_boxed_4241_; size_t v_stop_boxed_4242_; lean_object* v_res_4243_; 
v_i_boxed_4241_ = lean_unbox_usize(v_i_4238_);
lean_dec(v_i_4238_);
v_stop_boxed_4242_ = lean_unbox_usize(v_stop_4239_);
lean_dec(v_stop_4239_);
v_res_4243_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4237_, v_i_boxed_4241_, v_stop_boxed_4242_, v_b_4240_);
lean_dec_ref(v_as_4237_);
return v_res_4243_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(lean_object* v_as_4246_, lean_object* v_start_4247_, lean_object* v_stop_4248_){
_start:
{
lean_object* v___x_4249_; uint8_t v___x_4250_; 
v___x_4249_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
v___x_4250_ = lean_nat_dec_lt(v_start_4247_, v_stop_4248_);
if (v___x_4250_ == 0)
{
return v___x_4249_;
}
else
{
lean_object* v___x_4251_; uint8_t v___x_4252_; 
v___x_4251_ = lean_array_get_size(v_as_4246_);
v___x_4252_ = lean_nat_dec_le(v_stop_4248_, v___x_4251_);
if (v___x_4252_ == 0)
{
uint8_t v___x_4253_; 
v___x_4253_ = lean_nat_dec_lt(v_start_4247_, v___x_4251_);
if (v___x_4253_ == 0)
{
return v___x_4249_;
}
else
{
size_t v___x_4254_; size_t v___x_4255_; lean_object* v___x_4256_; 
v___x_4254_ = lean_usize_of_nat(v_start_4247_);
v___x_4255_ = lean_usize_of_nat(v___x_4251_);
v___x_4256_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4246_, v___x_4254_, v___x_4255_, v___x_4249_);
return v___x_4256_;
}
}
else
{
size_t v___x_4257_; size_t v___x_4258_; lean_object* v___x_4259_; 
v___x_4257_ = lean_usize_of_nat(v_start_4247_);
v___x_4258_ = lean_usize_of_nat(v_stop_4248_);
v___x_4259_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7_spec__7(v_as_4246_, v___x_4257_, v___x_4258_, v___x_4249_);
return v___x_4259_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___boxed(lean_object* v_as_4260_, lean_object* v_start_4261_, lean_object* v_stop_4262_){
_start:
{
lean_object* v_res_4263_; 
v_res_4263_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_as_4260_, v_start_4261_, v_stop_4262_);
lean_dec(v_stop_4262_);
lean_dec(v_start_4261_);
lean_dec_ref(v_as_4260_);
return v_res_4263_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(lean_object* v_as_4266_, size_t v_i_4267_, size_t v_stop_4268_){
_start:
{
uint8_t v___x_4269_; 
v___x_4269_ = lean_usize_dec_eq(v_i_4267_, v_stop_4268_);
if (v___x_4269_ == 0)
{
lean_object* v___x_4270_; lean_object* v_fst_4271_; uint8_t v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; uint8_t v___x_4275_; 
v___x_4270_ = lean_array_uget_borrowed(v_as_4266_, v_i_4267_);
v_fst_4271_ = lean_ctor_get(v___x_4270_, 0);
v___x_4272_ = 1;
lean_inc(v_fst_4271_);
v___x_4273_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4271_);
v___x_4274_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__0));
v___x_4275_ = lean_string_dec_eq(v___x_4273_, v___x_4274_);
if (v___x_4275_ == 0)
{
lean_object* v___x_4276_; uint8_t v___x_4277_; 
v___x_4276_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___closed__1));
v___x_4277_ = lean_string_dec_eq(v___x_4273_, v___x_4276_);
lean_dec_ref(v___x_4273_);
if (v___x_4277_ == 0)
{
size_t v___x_4278_; size_t v___x_4279_; 
v___x_4278_ = ((size_t)1ULL);
v___x_4279_ = lean_usize_add(v_i_4267_, v___x_4278_);
v_i_4267_ = v___x_4279_;
goto _start;
}
else
{
return v___x_4272_;
}
}
else
{
lean_dec_ref(v___x_4273_);
return v___x_4272_;
}
}
else
{
uint8_t v___x_4281_; 
v___x_4281_ = 0;
return v___x_4281_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5___boxed(lean_object* v_as_4282_, lean_object* v_i_4283_, lean_object* v_stop_4284_){
_start:
{
size_t v_i_boxed_4285_; size_t v_stop_boxed_4286_; uint8_t v_res_4287_; lean_object* v_r_4288_; 
v_i_boxed_4285_ = lean_unbox_usize(v_i_4283_);
lean_dec(v_i_4283_);
v_stop_boxed_4286_ = lean_unbox_usize(v_stop_4284_);
lean_dec(v_stop_4284_);
v_res_4287_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v_as_4282_, v_i_boxed_4285_, v_stop_boxed_4286_);
lean_dec_ref(v_as_4282_);
v_r_4288_ = lean_box(v_res_4287_);
return v_r_4288_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(lean_object* v_as_4290_, size_t v_sz_4291_, size_t v_i_4292_, lean_object* v_b_4293_){
_start:
{
uint8_t v___x_4294_; 
v___x_4294_ = lean_usize_dec_lt(v_i_4292_, v_sz_4291_);
if (v___x_4294_ == 0)
{
lean_inc_ref(v_b_4293_);
return v_b_4293_;
}
else
{
lean_object* v_a_4295_; lean_object* v_fst_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; uint8_t v___x_4300_; 
v_a_4295_ = lean_array_uget_borrowed(v_as_4290_, v_i_4292_);
v_fst_4296_ = lean_ctor_get(v_a_4295_, 0);
v___x_4297_ = lean_box(0);
lean_inc(v_fst_4296_);
v___x_4298_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_fst_4296_);
v___x_4299_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___closed__0));
v___x_4300_ = lean_string_dec_eq(v___x_4298_, v___x_4299_);
lean_dec_ref(v___x_4298_);
if (v___x_4300_ == 0)
{
lean_object* v___x_4301_; size_t v___x_4302_; size_t v___x_4303_; 
v___x_4301_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v___x_4302_ = ((size_t)1ULL);
v___x_4303_ = lean_usize_add(v_i_4292_, v___x_4302_);
v_i_4292_ = v___x_4303_;
v_b_4293_ = v___x_4301_;
goto _start;
}
else
{
lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; 
lean_inc(v_a_4295_);
v___x_4305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4305_, 0, v_a_4295_);
v___x_4306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4306_, 0, v___x_4305_);
v___x_4307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4307_, 0, v___x_4306_);
lean_ctor_set(v___x_4307_, 1, v___x_4297_);
return v___x_4307_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6___boxed(lean_object* v_as_4308_, lean_object* v_sz_4309_, lean_object* v_i_4310_, lean_object* v_b_4311_){
_start:
{
size_t v_sz_boxed_4312_; size_t v_i_boxed_4313_; lean_object* v_res_4314_; 
v_sz_boxed_4312_ = lean_unbox_usize(v_sz_4309_);
lean_dec(v_sz_4309_);
v_i_boxed_4313_ = lean_unbox_usize(v_i_4310_);
lean_dec(v_i_4310_);
v_res_4314_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v_as_4308_, v_sz_boxed_4312_, v_i_boxed_4313_, v_b_4311_);
lean_dec_ref(v_b_4311_);
lean_dec_ref(v_as_4308_);
return v_res_4314_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__17___closed__2(void){
_start:
{
lean_object* v___x_4317_; lean_object* v___x_4318_; 
v___x_4317_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4318_ = lean_string_utf8_byte_size(v___x_4317_);
return v___x_4318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17(lean_object* v_snd_4321_, lean_object* v___f_4322_, lean_object* v___f_4323_, lean_object* v_handler_4324_, lean_object* v_options_4325_, lean_object* v_a_4326_, lean_object* v_fst_4327_, lean_object* v_a_4328_, lean_object* v___y_4329_, lean_object* v___x_4330_, lean_object* v___x_4331_, lean_object* v___x_4332_, lean_object* v_x_4333_){
_start:
{
uint8_t v___y_4336_; lean_object* v___y_4337_; lean_object* v___y_4338_; lean_object* v_val_4339_; lean_object* v___y_4343_; lean_object* v___y_4344_; lean_object* v___y_4345_; lean_object* v___y_4346_; lean_object* v___y_4347_; lean_object* v___y_4348_; lean_object* v___y_4349_; lean_object* v___y_4350_; lean_object* v___y_4351_; lean_object* v___y_4352_; uint8_t v___y_4353_; lean_object* v___y_4354_; lean_object* v___y_4355_; lean_object* v___y_4356_; lean_object* v___y_4404_; lean_object* v___y_4405_; lean_object* v___y_4406_; lean_object* v___y_4407_; lean_object* v___y_4408_; lean_object* v___y_4409_; lean_object* v___y_4410_; lean_object* v___y_4411_; lean_object* v___y_4412_; lean_object* v___y_4413_; lean_object* v___y_4414_; lean_object* v___y_4415_; lean_object* v___y_4416_; lean_object* v___y_4417_; uint8_t v___y_4418_; lean_object* v___y_4428_; lean_object* v___y_4429_; lean_object* v___y_4430_; lean_object* v___y_4431_; lean_object* v___y_4432_; lean_object* v___y_4433_; lean_object* v___y_4434_; lean_object* v___y_4435_; lean_object* v___y_4436_; lean_object* v___y_4437_; lean_object* v___y_4438_; lean_object* v___y_4439_; lean_object* v___y_4440_; lean_object* v___y_4441_; lean_object* v___y_4448_; lean_object* v___y_4449_; lean_object* v___y_4450_; lean_object* v___y_4451_; lean_object* v___y_4452_; lean_object* v___y_4453_; lean_object* v___y_4454_; lean_object* v___y_4455_; lean_object* v___y_4456_; lean_object* v___y_4457_; lean_object* v___y_4458_; lean_object* v___y_4459_; lean_object* v___y_4460_; lean_object* v___y_4465_; lean_object* v___y_4466_; lean_object* v___y_4467_; lean_object* v___y_4468_; 
if (lean_obj_tag(v_x_4333_) == 0)
{
lean_object* v_a_4487_; lean_object* v___x_4489_; uint8_t v_isShared_4490_; uint8_t v_isSharedCheck_4495_; 
lean_dec(v___y_4329_);
lean_dec(v_a_4328_);
lean_dec(v_fst_4327_);
lean_dec(v_a_4326_);
lean_dec_ref(v_options_4325_);
lean_dec_ref(v_handler_4324_);
lean_dec_ref(v___f_4323_);
lean_dec_ref(v___f_4322_);
lean_dec(v_snd_4321_);
v_a_4487_ = lean_ctor_get(v_x_4333_, 0);
v_isSharedCheck_4495_ = !lean_is_exclusive(v_x_4333_);
if (v_isSharedCheck_4495_ == 0)
{
v___x_4489_ = v_x_4333_;
v_isShared_4490_ = v_isSharedCheck_4495_;
goto v_resetjp_4488_;
}
else
{
lean_inc(v_a_4487_);
lean_dec(v_x_4333_);
v___x_4489_ = lean_box(0);
v_isShared_4490_ = v_isSharedCheck_4495_;
goto v_resetjp_4488_;
}
v_resetjp_4488_:
{
lean_object* v___x_4492_; 
if (v_isShared_4490_ == 0)
{
v___x_4492_ = v___x_4489_;
goto v_reusejp_4491_;
}
else
{
lean_object* v_reuseFailAlloc_4494_; 
v_reuseFailAlloc_4494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4494_, 0, v_a_4487_);
v___x_4492_ = v_reuseFailAlloc_4494_;
goto v_reusejp_4491_;
}
v_reusejp_4491_:
{
lean_object* v___x_4493_; 
v___x_4493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4493_, 0, v___x_4492_);
return v___x_4493_;
}
}
}
else
{
lean_object* v_a_4496_; lean_object* v___y_4498_; lean_object* v___y_4499_; lean_object* v___y_4507_; lean_object* v___x_4511_; 
v_a_4496_ = lean_ctor_get(v_x_4333_, 0);
lean_inc(v_a_4496_);
lean_dec_ref_known(v_x_4333_, 1);
v___x_4511_ = l_Lasm_JS_Data_field(v_a_4496_, v___x_4332_);
if (lean_obj_tag(v___x_4511_) == 4)
{
lean_object* v_s_4512_; 
v_s_4512_ = lean_ctor_get(v___x_4511_, 0);
lean_inc_ref(v_s_4512_);
lean_dec_ref_known(v___x_4511_, 1);
v___y_4507_ = v_s_4512_;
goto v___jp_4506_;
}
else
{
lean_object* v___x_4513_; 
lean_dec(v___x_4511_);
v___x_4513_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___y_4507_ = v___x_4513_;
goto v___jp_4506_;
}
v___jp_4497_:
{
lean_object* v___x_4500_; 
v___x_4500_ = l_Lasm_JS_Data_field(v_a_4496_, v___x_4330_);
lean_dec(v_a_4496_);
if (lean_obj_tag(v___x_4500_) == 7)
{
lean_object* v_items_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; 
v_items_4501_ = lean_ctor_get(v___x_4500_, 0);
lean_inc_ref(v_items_4501_);
lean_dec_ref_known(v___x_4500_, 1);
v___x_4502_ = lean_unsigned_to_nat(0u);
v___x_4503_ = lean_array_get_size(v_items_4501_);
v___x_4504_ = l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7(v_items_4501_, v___x_4502_, v___x_4503_);
lean_dec_ref(v_items_4501_);
lean_inc_ref(v___y_4498_);
v___y_4465_ = v___y_4498_;
v___y_4466_ = v___y_4498_;
v___y_4467_ = v___y_4499_;
v___y_4468_ = v___x_4504_;
goto v___jp_4464_;
}
else
{
lean_object* v___x_4505_; 
lean_dec(v___x_4500_);
v___x_4505_ = ((lean_object*)(l_Array_filterMapM___at___00Lasm_Fetch_serveNode_spec__7___closed__0));
lean_inc_ref(v___y_4498_);
v___y_4465_ = v___y_4498_;
v___y_4466_ = v___y_4498_;
v___y_4467_ = v___y_4499_;
v___y_4468_ = v___x_4505_;
goto v___jp_4464_;
}
}
v___jp_4506_:
{
lean_object* v___x_4508_; 
v___x_4508_ = l_Lasm_JS_Data_field(v_a_4496_, v___x_4331_);
if (lean_obj_tag(v___x_4508_) == 4)
{
lean_object* v_s_4509_; 
v_s_4509_ = lean_ctor_get(v___x_4508_, 0);
lean_inc_ref(v_s_4509_);
lean_dec_ref_known(v___x_4508_, 1);
v___y_4498_ = v___y_4507_;
v___y_4499_ = v_s_4509_;
goto v___jp_4497_;
}
else
{
lean_object* v___x_4510_; 
lean_dec(v___x_4508_);
v___x_4510_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___y_4498_ = v___y_4507_;
v___y_4499_ = v___x_4510_;
goto v___jp_4497_;
}
}
}
v___jp_4335_:
{
lean_object* v___x_4340_; lean_object* v___x_4341_; 
v___x_4340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4340_, 0, v_val_4339_);
v___x_4341_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4337_, v___y_4336_, v___x_4340_, v___y_4338_);
return v___x_4341_;
}
v___jp_4342_:
{
if (v___y_4353_ == 0)
{
lean_object* v___x_4357_; lean_object* v___f_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; 
lean_dec(v___y_4355_);
lean_dec_ref(v___y_4350_);
lean_dec_ref(v___y_4348_);
lean_dec_ref(v___y_4347_);
lean_dec(v___y_4346_);
lean_dec_ref(v___y_4345_);
lean_dec(v___y_4344_);
lean_dec_ref(v___y_4343_);
lean_dec(v_a_4328_);
lean_dec(v_fst_4327_);
lean_dec(v_a_4326_);
lean_dec_ref(v_options_4325_);
v___x_4357_ = l_ByteArray_empty;
v___f_4358_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_4359_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4359_, 0, v___y_4352_);
lean_ctor_set(v___x_4359_, 1, v___y_4356_);
lean_ctor_set(v___x_4359_, 2, v___y_4354_);
lean_ctor_set(v___x_4359_, 3, v___x_4357_);
lean_ctor_set(v___x_4359_, 4, v___f_4358_);
v___x_4360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4360_, 0, v___x_4359_);
v___x_4361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4361_, 0, v___x_4360_);
v___x_4362_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4349_, v___y_4353_, v___x_4361_, v___y_4351_);
return v___x_4362_;
}
else
{
lean_object* v___x_4363_; lean_object* v___f_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; uint8_t v___x_4368_; 
lean_dec_ref(v___y_4354_);
lean_dec_ref(v___y_4351_);
v___x_4363_ = l_ByteArray_empty;
v___f_4364_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
lean_inc_ref(v___y_4356_);
v___x_4365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4365_, 0, v___y_4352_);
lean_ctor_set(v___x_4365_, 1, v___y_4356_);
lean_ctor_set(v___x_4365_, 2, v___y_4350_);
lean_ctor_set(v___x_4365_, 3, v___x_4363_);
lean_ctor_set(v___x_4365_, 4, v___f_4364_);
v___x_4366_ = l_Lasm_Fetch_Request_path(v___x_4365_);
v___x_4367_ = lean_apply_1(v_options_4325_, v___x_4366_);
v___x_4368_ = lean_unbox(v___x_4367_);
if (v___x_4368_ == 0)
{
lean_object* v___f_4369_; lean_object* v___f_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; uint8_t v___x_4374_; lean_object* v___x_4375_; 
lean_dec(v___y_4355_);
lean_dec_ref(v___y_4348_);
lean_dec(v_a_4328_);
lean_inc(v___y_4346_);
v___f_4369_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__18___boxed), 9, 7);
lean_closure_set(v___f_4369_, 0, v___y_4345_);
lean_closure_set(v___f_4369_, 1, v___y_4356_);
lean_closure_set(v___f_4369_, 2, v___y_4347_);
lean_closure_set(v___f_4369_, 3, v___f_4364_);
lean_closure_set(v___f_4369_, 4, v___y_4346_);
lean_closure_set(v___f_4369_, 5, v___x_4367_);
lean_closure_set(v___f_4369_, 6, v___y_4343_);
v___f_4370_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__14___boxed), 7, 5);
lean_closure_set(v___f_4370_, 0, v___y_4346_);
lean_closure_set(v___f_4370_, 1, v___x_4367_);
lean_closure_set(v___f_4370_, 2, v___f_4369_);
lean_closure_set(v___f_4370_, 3, v___y_4344_);
lean_closure_set(v___f_4370_, 4, v_a_4326_);
v___x_4371_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__0));
v___x_4372_ = lean_mk_empty_array_with_capacity(v___y_4349_);
v___x_4373_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_fst_4327_, v___x_4371_, v___x_4372_);
v___x_4374_ = lean_unbox(v___x_4367_);
v___x_4375_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4349_, v___x_4374_, v___x_4373_, v___f_4370_);
return v___x_4375_;
}
else
{
uint8_t v___x_4376_; lean_object* v___x_4377_; lean_object* v___f_4378_; lean_object* v___x_4379_; lean_object* v___f_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; 
lean_dec(v___y_4344_);
lean_dec_ref(v___y_4343_);
lean_dec(v_a_4326_);
v___x_4376_ = 0;
v___x_4377_ = lean_box(v___x_4376_);
lean_inc(v___y_4346_);
v___f_4378_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__15___boxed), 9, 7);
lean_closure_set(v___f_4378_, 0, v___y_4345_);
lean_closure_set(v___f_4378_, 1, v___y_4356_);
lean_closure_set(v___f_4378_, 2, v___y_4347_);
lean_closure_set(v___f_4378_, 3, v___x_4363_);
lean_closure_set(v___f_4378_, 4, v___y_4346_);
lean_closure_set(v___f_4378_, 5, v___x_4377_);
lean_closure_set(v___f_4378_, 6, v___y_4348_);
v___x_4379_ = lean_box(v___x_4376_);
v___f_4380_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__16___boxed), 5, 3);
lean_closure_set(v___f_4380_, 0, v___y_4346_);
lean_closure_set(v___f_4380_, 1, v___x_4379_);
lean_closure_set(v___f_4380_, 2, v___f_4378_);
v___x_4381_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__1));
v___x_4382_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4383_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4383_, 0, v_fst_4327_);
lean_ctor_set(v___x_4383_, 1, v___x_4382_);
v___x_4384_ = lean_mk_empty_array_with_capacity(v___y_4355_);
lean_dec(v___y_4355_);
v___x_4385_ = lean_array_push(v___x_4384_, v___x_4383_);
v___x_4386_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4328_, v___x_4381_, v___x_4385_);
if (lean_obj_tag(v___x_4386_) == 0)
{
lean_object* v_a_4387_; lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4394_; 
v_a_4387_ = lean_ctor_get(v___x_4386_, 0);
v_isSharedCheck_4394_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4394_ == 0)
{
v___x_4389_ = v___x_4386_;
v_isShared_4390_ = v_isSharedCheck_4394_;
goto v_resetjp_4388_;
}
else
{
lean_inc(v_a_4387_);
lean_dec(v___x_4386_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4394_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
lean_object* v___x_4392_; 
if (v_isShared_4390_ == 0)
{
lean_ctor_set_tag(v___x_4389_, 1);
v___x_4392_ = v___x_4389_;
goto v_reusejp_4391_;
}
else
{
lean_object* v_reuseFailAlloc_4393_; 
v_reuseFailAlloc_4393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4393_, 0, v_a_4387_);
v___x_4392_ = v_reuseFailAlloc_4393_;
goto v_reusejp_4391_;
}
v_reusejp_4391_:
{
v___y_4336_ = v___x_4376_;
v___y_4337_ = v___y_4349_;
v___y_4338_ = v___f_4380_;
v_val_4339_ = v___x_4392_;
goto v___jp_4335_;
}
}
}
else
{
lean_object* v_a_4395_; lean_object* v___x_4397_; uint8_t v_isShared_4398_; uint8_t v_isSharedCheck_4402_; 
v_a_4395_ = lean_ctor_get(v___x_4386_, 0);
v_isSharedCheck_4402_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4402_ == 0)
{
v___x_4397_ = v___x_4386_;
v_isShared_4398_ = v_isSharedCheck_4402_;
goto v_resetjp_4396_;
}
else
{
lean_inc(v_a_4395_);
lean_dec(v___x_4386_);
v___x_4397_ = lean_box(0);
v_isShared_4398_ = v_isSharedCheck_4402_;
goto v_resetjp_4396_;
}
v_resetjp_4396_:
{
lean_object* v___x_4400_; 
if (v_isShared_4398_ == 0)
{
lean_ctor_set_tag(v___x_4397_, 0);
v___x_4400_ = v___x_4397_;
goto v_reusejp_4399_;
}
else
{
lean_object* v_reuseFailAlloc_4401_; 
v_reuseFailAlloc_4401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4401_, 0, v_a_4395_);
v___x_4400_ = v_reuseFailAlloc_4401_;
goto v_reusejp_4399_;
}
v_reusejp_4399_:
{
v___y_4336_ = v___x_4376_;
v___y_4337_ = v___y_4349_;
v___y_4338_ = v___f_4380_;
v_val_4339_ = v___x_4400_;
goto v___jp_4335_;
}
}
}
}
}
}
v___jp_4403_:
{
lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; uint8_t v___x_4422_; 
v___x_4419_ = ((lean_object*)(l_Lasm_Fetch_Request_path___closed__0));
v___x_4420_ = lean_string_utf8_byte_size(v___y_4414_);
v___x_4421_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__17___closed__2, &l_Lasm_Fetch_serveNode___lam__17___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__17___closed__2);
v___x_4422_ = lean_nat_dec_le(v___x_4421_, v___x_4420_);
if (v___x_4422_ == 0)
{
lean_dec_ref(v___y_4417_);
v___y_4343_ = v___y_4404_;
v___y_4344_ = v___y_4405_;
v___y_4345_ = v___y_4406_;
v___y_4346_ = v___y_4408_;
v___y_4347_ = v___y_4407_;
v___y_4348_ = v___y_4409_;
v___y_4349_ = v___y_4410_;
v___y_4350_ = v___y_4412_;
v___y_4351_ = v___y_4411_;
v___y_4352_ = v___y_4413_;
v___y_4353_ = v___y_4418_;
v___y_4354_ = v___y_4415_;
v___y_4355_ = v___y_4416_;
v___y_4356_ = v___y_4414_;
goto v___jp_4342_;
}
else
{
uint8_t v___x_4423_; 
v___x_4423_ = lean_string_memcmp(v___y_4414_, v___x_4419_, v___y_4410_, v___y_4410_, v___x_4421_);
if (v___x_4423_ == 0)
{
lean_dec_ref(v___y_4417_);
v___y_4343_ = v___y_4404_;
v___y_4344_ = v___y_4405_;
v___y_4345_ = v___y_4406_;
v___y_4346_ = v___y_4408_;
v___y_4347_ = v___y_4407_;
v___y_4348_ = v___y_4409_;
v___y_4349_ = v___y_4410_;
v___y_4350_ = v___y_4412_;
v___y_4351_ = v___y_4411_;
v___y_4352_ = v___y_4413_;
v___y_4353_ = v___y_4418_;
v___y_4354_ = v___y_4415_;
v___y_4355_ = v___y_4416_;
v___y_4356_ = v___y_4414_;
goto v___jp_4342_;
}
else
{
lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; 
v___x_4424_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__3));
v___x_4425_ = lean_string_append(v___x_4424_, v___y_4417_);
lean_dec_ref(v___y_4417_);
v___x_4426_ = lean_string_append(v___x_4425_, v___y_4414_);
lean_dec_ref(v___y_4414_);
v___y_4343_ = v___y_4404_;
v___y_4344_ = v___y_4405_;
v___y_4345_ = v___y_4406_;
v___y_4346_ = v___y_4408_;
v___y_4347_ = v___y_4407_;
v___y_4348_ = v___y_4409_;
v___y_4349_ = v___y_4410_;
v___y_4350_ = v___y_4412_;
v___y_4351_ = v___y_4411_;
v___y_4352_ = v___y_4413_;
v___y_4353_ = v___y_4418_;
v___y_4354_ = v___y_4415_;
v___y_4355_ = v___y_4416_;
v___y_4356_ = v___x_4426_;
goto v___jp_4342_;
}
}
}
v___jp_4427_:
{
lean_object* v___x_4442_; uint8_t v___x_4443_; 
v___x_4442_ = lean_array_get_size(v___y_4439_);
v___x_4443_ = lean_nat_dec_lt(v___y_4434_, v___x_4442_);
if (v___x_4443_ == 0)
{
v___y_4404_ = v___y_4428_;
v___y_4405_ = v___y_4429_;
v___y_4406_ = v___y_4430_;
v___y_4407_ = v___y_4432_;
v___y_4408_ = v___y_4431_;
v___y_4409_ = v___y_4433_;
v___y_4410_ = v___y_4434_;
v___y_4411_ = v___y_4436_;
v___y_4412_ = v___y_4435_;
v___y_4413_ = v___y_4437_;
v___y_4414_ = v___y_4438_;
v___y_4415_ = v___y_4439_;
v___y_4416_ = v___y_4440_;
v___y_4417_ = v___y_4441_;
v___y_4418_ = v___x_4443_;
goto v___jp_4403_;
}
else
{
if (v___x_4443_ == 0)
{
v___y_4404_ = v___y_4428_;
v___y_4405_ = v___y_4429_;
v___y_4406_ = v___y_4430_;
v___y_4407_ = v___y_4432_;
v___y_4408_ = v___y_4431_;
v___y_4409_ = v___y_4433_;
v___y_4410_ = v___y_4434_;
v___y_4411_ = v___y_4436_;
v___y_4412_ = v___y_4435_;
v___y_4413_ = v___y_4437_;
v___y_4414_ = v___y_4438_;
v___y_4415_ = v___y_4439_;
v___y_4416_ = v___y_4440_;
v___y_4417_ = v___y_4441_;
v___y_4418_ = v___x_4443_;
goto v___jp_4403_;
}
else
{
size_t v___x_4444_; size_t v___x_4445_; uint8_t v___x_4446_; 
v___x_4444_ = ((size_t)0ULL);
v___x_4445_ = lean_usize_of_nat(v___x_4442_);
v___x_4446_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lasm_Fetch_serveNode_spec__5(v___y_4439_, v___x_4444_, v___x_4445_);
v___y_4404_ = v___y_4428_;
v___y_4405_ = v___y_4429_;
v___y_4406_ = v___y_4430_;
v___y_4407_ = v___y_4432_;
v___y_4408_ = v___y_4431_;
v___y_4409_ = v___y_4433_;
v___y_4410_ = v___y_4434_;
v___y_4411_ = v___y_4436_;
v___y_4412_ = v___y_4435_;
v___y_4413_ = v___y_4437_;
v___y_4414_ = v___y_4438_;
v___y_4415_ = v___y_4439_;
v___y_4416_ = v___y_4440_;
v___y_4417_ = v___y_4441_;
v___y_4418_ = v___x_4446_;
goto v___jp_4403_;
}
}
}
v___jp_4447_:
{
lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; 
v___x_4461_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__17___closed__4));
v___x_4462_ = l_Nat_reprFast(v___y_4329_);
v___x_4463_ = lean_string_append(v___x_4461_, v___x_4462_);
lean_dec_ref(v___x_4462_);
v___y_4428_ = v___y_4448_;
v___y_4429_ = v___y_4449_;
v___y_4430_ = v___y_4450_;
v___y_4431_ = v___y_4452_;
v___y_4432_ = v___y_4451_;
v___y_4433_ = v___y_4453_;
v___y_4434_ = v___y_4455_;
v___y_4435_ = v___y_4456_;
v___y_4436_ = v___y_4454_;
v___y_4437_ = v___y_4457_;
v___y_4438_ = v___y_4458_;
v___y_4439_ = v___y_4459_;
v___y_4440_ = v___y_4460_;
v___y_4441_ = v___x_4463_;
goto v___jp_4427_;
}
v___jp_4464_:
{
lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; size_t v_sz_4477_; size_t v___x_4478_; lean_object* v___x_4479_; lean_object* v_fst_4480_; lean_object* v___f_4481_; lean_object* v___f_4482_; lean_object* v___f_4483_; 
v___x_4469_ = lean_unsigned_to_nat(0u);
v___x_4470_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__1));
v___x_4471_ = lean_array_get_size(v___y_4468_);
v___x_4472_ = lean_unsigned_to_nat(1u);
v___x_4473_ = lean_nat_shiftr(v___x_4471_, v___x_4472_);
v___x_4474_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4474_, 0, v___x_4469_);
lean_ctor_set(v___x_4474_, 1, v___x_4473_);
lean_ctor_set(v___x_4474_, 2, v___x_4472_);
v___x_4475_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_4468_, v___x_4474_, v___x_4470_, v___x_4469_);
lean_dec_ref_known(v___x_4474_, 3);
lean_dec_ref(v___y_4468_);
v___x_4476_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_4477_ = lean_array_size(v___x_4475_);
v___x_4478_ = ((size_t)0ULL);
v___x_4479_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_serveNode_spec__6(v___x_4475_, v_sz_4477_, v___x_4478_, v___x_4476_);
v_fst_4480_ = lean_ctor_get(v___x_4479_, 0);
lean_inc(v_fst_4480_);
lean_dec_ref(v___x_4479_);
lean_inc_ref(v___y_4465_);
v___f_4481_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__11___boxed), 7, 5);
lean_closure_set(v___f_4481_, 0, v___x_4469_);
lean_closure_set(v___f_4481_, 1, v_snd_4321_);
lean_closure_set(v___f_4481_, 2, v___y_4465_);
lean_closure_set(v___f_4481_, 3, v___f_4322_);
lean_closure_set(v___f_4481_, 4, v___f_4323_);
v___f_4482_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__12___boxed), 5, 3);
lean_closure_set(v___f_4482_, 0, v_handler_4324_);
lean_closure_set(v___f_4482_, 1, v___x_4469_);
lean_closure_set(v___f_4482_, 2, v___f_4481_);
v___f_4483_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__13___boxed), 3, 1);
lean_closure_set(v___f_4483_, 0, v___f_4482_);
if (lean_obj_tag(v_fst_4480_) == 0)
{
lean_inc_ref(v___x_4475_);
lean_inc_ref_n(v___f_4483_, 2);
v___y_4448_ = v___f_4483_;
v___y_4449_ = v___x_4472_;
v___y_4450_ = v___y_4465_;
v___y_4451_ = v___x_4475_;
v___y_4452_ = v___x_4469_;
v___y_4453_ = v___f_4483_;
v___y_4454_ = v___f_4483_;
v___y_4455_ = v___x_4469_;
v___y_4456_ = v___x_4470_;
v___y_4457_ = v___y_4466_;
v___y_4458_ = v___y_4467_;
v___y_4459_ = v___x_4475_;
v___y_4460_ = v___x_4472_;
goto v___jp_4447_;
}
else
{
lean_object* v_val_4484_; 
v_val_4484_ = lean_ctor_get(v_fst_4480_, 0);
lean_inc(v_val_4484_);
lean_dec_ref_known(v_fst_4480_, 1);
if (lean_obj_tag(v_val_4484_) == 0)
{
lean_inc_ref(v___x_4475_);
lean_inc_ref_n(v___f_4483_, 2);
v___y_4448_ = v___f_4483_;
v___y_4449_ = v___x_4472_;
v___y_4450_ = v___y_4465_;
v___y_4451_ = v___x_4475_;
v___y_4452_ = v___x_4469_;
v___y_4453_ = v___f_4483_;
v___y_4454_ = v___f_4483_;
v___y_4455_ = v___x_4469_;
v___y_4456_ = v___x_4470_;
v___y_4457_ = v___y_4466_;
v___y_4458_ = v___y_4467_;
v___y_4459_ = v___x_4475_;
v___y_4460_ = v___x_4472_;
goto v___jp_4447_;
}
else
{
lean_object* v_val_4485_; lean_object* v_snd_4486_; 
lean_dec(v___y_4329_);
v_val_4485_ = lean_ctor_get(v_val_4484_, 0);
lean_inc(v_val_4485_);
lean_dec_ref_known(v_val_4484_, 1);
v_snd_4486_ = lean_ctor_get(v_val_4485_, 1);
lean_inc(v_snd_4486_);
lean_dec(v_val_4485_);
lean_inc_ref(v___x_4475_);
lean_inc_ref_n(v___f_4483_, 2);
v___y_4428_ = v___f_4483_;
v___y_4429_ = v___x_4472_;
v___y_4430_ = v___y_4465_;
v___y_4431_ = v___x_4469_;
v___y_4432_ = v___x_4475_;
v___y_4433_ = v___f_4483_;
v___y_4434_ = v___x_4469_;
v___y_4435_ = v___x_4470_;
v___y_4436_ = v___f_4483_;
v___y_4437_ = v___y_4466_;
v___y_4438_ = v___y_4467_;
v___y_4439_ = v___x_4475_;
v___y_4440_ = v___x_4472_;
v___y_4441_ = v_snd_4486_;
goto v___jp_4427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__17___boxed(lean_object* v_snd_4514_, lean_object* v___f_4515_, lean_object* v___f_4516_, lean_object* v_handler_4517_, lean_object* v_options_4518_, lean_object* v_a_4519_, lean_object* v_fst_4520_, lean_object* v_a_4521_, lean_object* v___y_4522_, lean_object* v___x_4523_, lean_object* v___x_4524_, lean_object* v___x_4525_, lean_object* v_x_4526_, lean_object* v___y_4527_){
_start:
{
lean_object* v_res_4528_; 
v_res_4528_ = l_Lasm_Fetch_serveNode___lam__17(v_snd_4514_, v___f_4515_, v___f_4516_, v_handler_4517_, v_options_4518_, v_a_4519_, v_fst_4520_, v_a_4521_, v___y_4522_, v___x_4523_, v___x_4524_, v___x_4525_, v_x_4526_);
lean_dec_ref(v___x_4525_);
lean_dec_ref(v___x_4524_);
lean_dec_ref(v___x_4523_);
return v_res_4528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19(lean_object* v___f_4538_, lean_object* v___f_4539_, lean_object* v_handler_4540_, lean_object* v_options_4541_, lean_object* v_a_4542_, lean_object* v_a_4543_, lean_object* v___y_4544_, lean_object* v_____x_4545_){
_start:
{
lean_object* v_fst_4547_; lean_object* v_snd_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___f_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; uint8_t v___x_4555_; lean_object* v_val_4557_; lean_object* v___x_4560_; 
v_fst_4547_ = lean_ctor_get(v_____x_4545_, 0);
lean_inc_n(v_fst_4547_, 2);
v_snd_4548_ = lean_ctor_get(v_____x_4545_, 1);
lean_inc(v_snd_4548_);
lean_dec_ref(v_____x_4545_);
v___x_4549_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_4550_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__5));
v___x_4551_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__0));
v___f_4552_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__17___boxed), 14, 12);
lean_closure_set(v___f_4552_, 0, v_snd_4548_);
lean_closure_set(v___f_4552_, 1, v___f_4538_);
lean_closure_set(v___f_4552_, 2, v___f_4539_);
lean_closure_set(v___f_4552_, 3, v_handler_4540_);
lean_closure_set(v___f_4552_, 4, v_options_4541_);
lean_closure_set(v___f_4552_, 5, v_a_4542_);
lean_closure_set(v___f_4552_, 6, v_fst_4547_);
lean_closure_set(v___f_4552_, 7, v_a_4543_);
lean_closure_set(v___f_4552_, 8, v___y_4544_);
lean_closure_set(v___f_4552_, 9, v___x_4551_);
lean_closure_set(v___f_4552_, 10, v___x_4550_);
lean_closure_set(v___f_4552_, 11, v___x_4549_);
v___x_4553_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__19___closed__1));
v___x_4554_ = lean_unsigned_to_nat(0u);
v___x_4555_ = 0;
v___x_4560_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_fst_4547_, v___x_4553_);
if (lean_obj_tag(v___x_4560_) == 0)
{
lean_object* v_a_4561_; lean_object* v___x_4563_; uint8_t v_isShared_4564_; uint8_t v_isSharedCheck_4568_; 
v_a_4561_ = lean_ctor_get(v___x_4560_, 0);
v_isSharedCheck_4568_ = !lean_is_exclusive(v___x_4560_);
if (v_isSharedCheck_4568_ == 0)
{
v___x_4563_ = v___x_4560_;
v_isShared_4564_ = v_isSharedCheck_4568_;
goto v_resetjp_4562_;
}
else
{
lean_inc(v_a_4561_);
lean_dec(v___x_4560_);
v___x_4563_ = lean_box(0);
v_isShared_4564_ = v_isSharedCheck_4568_;
goto v_resetjp_4562_;
}
v_resetjp_4562_:
{
lean_object* v___x_4566_; 
if (v_isShared_4564_ == 0)
{
lean_ctor_set_tag(v___x_4563_, 1);
v___x_4566_ = v___x_4563_;
goto v_reusejp_4565_;
}
else
{
lean_object* v_reuseFailAlloc_4567_; 
v_reuseFailAlloc_4567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4567_, 0, v_a_4561_);
v___x_4566_ = v_reuseFailAlloc_4567_;
goto v_reusejp_4565_;
}
v_reusejp_4565_:
{
v_val_4557_ = v___x_4566_;
goto v___jp_4556_;
}
}
}
else
{
lean_object* v_a_4569_; lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4576_; 
v_a_4569_ = lean_ctor_get(v___x_4560_, 0);
v_isSharedCheck_4576_ = !lean_is_exclusive(v___x_4560_);
if (v_isSharedCheck_4576_ == 0)
{
v___x_4571_ = v___x_4560_;
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
else
{
lean_inc(v_a_4569_);
lean_dec(v___x_4560_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
lean_object* v___x_4574_; 
if (v_isShared_4572_ == 0)
{
lean_ctor_set_tag(v___x_4571_, 0);
v___x_4574_ = v___x_4571_;
goto v_reusejp_4573_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v_a_4569_);
v___x_4574_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4573_;
}
v_reusejp_4573_:
{
v_val_4557_ = v___x_4574_;
goto v___jp_4556_;
}
}
}
v___jp_4556_:
{
lean_object* v___x_4558_; lean_object* v___x_4559_; 
v___x_4558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4558_, 0, v_val_4557_);
v___x_4559_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4554_, v___x_4555_, v___x_4558_, v___f_4552_);
return v___x_4559_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__19___boxed(lean_object* v___f_4577_, lean_object* v___f_4578_, lean_object* v_handler_4579_, lean_object* v_options_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v___y_4583_, lean_object* v_____x_4584_, lean_object* v___y_4585_){
_start:
{
lean_object* v_res_4586_; 
v_res_4586_ = l_Lasm_Fetch_serveNode___lam__19(v___f_4577_, v___f_4578_, v_handler_4579_, v_options_4580_, v_a_4581_, v_a_4582_, v___y_4583_, v_____x_4584_);
return v_res_4586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20(lean_object* v___f_4587_, lean_object* v_x_4588_){
_start:
{
if (lean_obj_tag(v_x_4588_) == 0)
{
lean_object* v_a_4590_; lean_object* v___x_4592_; uint8_t v_isShared_4593_; uint8_t v_isSharedCheck_4598_; 
lean_dec_ref(v___f_4587_);
v_a_4590_ = lean_ctor_get(v_x_4588_, 0);
v_isSharedCheck_4598_ = !lean_is_exclusive(v_x_4588_);
if (v_isSharedCheck_4598_ == 0)
{
v___x_4592_ = v_x_4588_;
v_isShared_4593_ = v_isSharedCheck_4598_;
goto v_resetjp_4591_;
}
else
{
lean_inc(v_a_4590_);
lean_dec(v_x_4588_);
v___x_4592_ = lean_box(0);
v_isShared_4593_ = v_isSharedCheck_4598_;
goto v_resetjp_4591_;
}
v_resetjp_4591_:
{
lean_object* v___x_4595_; 
if (v_isShared_4593_ == 0)
{
v___x_4595_ = v___x_4592_;
goto v_reusejp_4594_;
}
else
{
lean_object* v_reuseFailAlloc_4597_; 
v_reuseFailAlloc_4597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4597_, 0, v_a_4590_);
v___x_4595_ = v_reuseFailAlloc_4597_;
goto v_reusejp_4594_;
}
v_reusejp_4594_:
{
lean_object* v___x_4596_; 
v___x_4596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4596_, 0, v___x_4595_);
return v___x_4596_;
}
}
}
else
{
lean_object* v_a_4599_; lean_object* v___x_4600_; 
v_a_4599_ = lean_ctor_get(v_x_4588_, 0);
lean_inc(v_a_4599_);
lean_dec_ref_known(v_x_4588_, 1);
v___x_4600_ = lean_apply_2(v___f_4587_, v_a_4599_, lean_box(0));
return v___x_4600_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__20___boxed(lean_object* v___f_4601_, lean_object* v_x_4602_, lean_object* v___y_4603_){
_start:
{
lean_object* v_res_4604_; 
v_res_4604_ = l_Lasm_Fetch_serveNode___lam__20(v___f_4601_, v_x_4602_);
return v_res_4604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22(lean_object* v___f_4612_, lean_object* v___f_4613_, lean_object* v_args_4614_){
_start:
{
lean_object* v___x_4621_; lean_object* v___x_4622_; uint8_t v___x_4623_; 
v___x_4621_ = lean_unsigned_to_nat(0u);
v___x_4622_ = lean_array_get_size(v_args_4614_);
v___x_4623_ = lean_nat_dec_lt(v___x_4621_, v___x_4622_);
if (v___x_4623_ == 0)
{
lean_dec_ref(v___f_4613_);
goto v___jp_4616_;
}
else
{
lean_object* v___x_4624_; 
v___x_4624_ = lean_array_fget_borrowed(v_args_4614_, v___x_4621_);
if (lean_obj_tag(v___x_4624_) == 9)
{
lean_object* v_value_4625_; lean_object* v___x_4626_; uint8_t v___x_4627_; 
v_value_4625_ = lean_ctor_get(v___x_4624_, 0);
v___x_4626_ = lean_unsigned_to_nat(1u);
v___x_4627_ = lean_nat_dec_lt(v___x_4626_, v___x_4622_);
if (v___x_4627_ == 0)
{
lean_dec_ref(v___f_4613_);
goto v___jp_4616_;
}
else
{
lean_object* v___x_4628_; 
v___x_4628_ = lean_array_fget(v_args_4614_, v___x_4626_);
if (lean_obj_tag(v___x_4628_) == 9)
{
lean_object* v_value_4629_; lean_object* v___x_4631_; uint8_t v_isShared_4632_; uint8_t v_isSharedCheck_4640_; 
lean_dec_ref(v___f_4612_);
v_value_4629_ = lean_ctor_get(v___x_4628_, 0);
v_isSharedCheck_4640_ = !lean_is_exclusive(v___x_4628_);
if (v_isSharedCheck_4640_ == 0)
{
lean_object* v_unused_4641_; 
v_unused_4641_ = lean_ctor_get(v___x_4628_, 1);
lean_dec(v_unused_4641_);
v___x_4631_ = v___x_4628_;
v_isShared_4632_ = v_isSharedCheck_4640_;
goto v_resetjp_4630_;
}
else
{
lean_inc(v_value_4629_);
lean_dec(v___x_4628_);
v___x_4631_ = lean_box(0);
v_isShared_4632_ = v_isSharedCheck_4640_;
goto v_resetjp_4630_;
}
v_resetjp_4630_:
{
lean_object* v___x_4634_; 
lean_inc(v_value_4625_);
if (v_isShared_4632_ == 0)
{
lean_ctor_set_tag(v___x_4631_, 0);
lean_ctor_set(v___x_4631_, 1, v_value_4629_);
lean_ctor_set(v___x_4631_, 0, v_value_4625_);
v___x_4634_ = v___x_4631_;
goto v_reusejp_4633_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v_value_4625_);
lean_ctor_set(v_reuseFailAlloc_4639_, 1, v_value_4629_);
v___x_4634_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4633_;
}
v_reusejp_4633_:
{
uint8_t v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; 
v___x_4635_ = 0;
v___x_4636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4636_, 0, v___x_4634_);
v___x_4637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4637_, 0, v___x_4636_);
v___x_4638_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4621_, v___x_4635_, v___x_4637_, v___f_4613_);
return v___x_4638_;
}
}
}
else
{
lean_dec(v___x_4628_);
lean_dec_ref(v___f_4613_);
goto v___jp_4616_;
}
}
}
else
{
lean_dec_ref(v___f_4613_);
goto v___jp_4616_;
}
}
v___jp_4616_:
{
lean_object* v___x_4617_; uint8_t v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; 
v___x_4617_ = lean_unsigned_to_nat(0u);
v___x_4618_ = 0;
v___x_4619_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__22___closed__3));
v___x_4620_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4617_, v___x_4618_, v___x_4619_, v___f_4612_);
return v___x_4620_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__22___boxed(lean_object* v___f_4642_, lean_object* v___f_4643_, lean_object* v_args_4644_, lean_object* v___y_4645_){
_start:
{
lean_object* v_res_4646_; 
v_res_4646_ = l_Lasm_Fetch_serveNode___lam__22(v___f_4642_, v___f_4643_, v_args_4644_);
lean_dec_ref(v_args_4644_);
return v_res_4646_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(lean_object* v_s_4647_){
_start:
{
lean_object* v___x_4649_; lean_object* v_putStr_4650_; lean_object* v___x_4651_; 
v___x_4649_ = lean_get_stdout();
v_putStr_4650_ = lean_ctor_get(v___x_4649_, 4);
lean_inc_ref(v_putStr_4650_);
lean_dec_ref(v___x_4649_);
v___x_4651_ = lean_apply_2(v_putStr_4650_, v_s_4647_, lean_box(0));
return v___x_4651_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9___boxed(lean_object* v_s_4652_, lean_object* v_a_4653_){
_start:
{
lean_object* v_res_4654_; 
v_res_4654_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v_s_4652_);
return v_res_4654_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(lean_object* v_s_4655_){
_start:
{
uint32_t v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; 
v___x_4657_ = 10;
v___x_4658_ = lean_string_push(v_s_4655_, v___x_4657_);
v___x_4659_ = l_IO_print___at___00IO_println___at___00Lasm_Fetch_serveNode_spec__8_spec__9(v___x_4658_);
return v___x_4659_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lasm_Fetch_serveNode_spec__8___boxed(lean_object* v_s_4660_, lean_object* v_a_4661_){
_start:
{
lean_object* v_res_4662_; 
v_res_4662_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v_s_4660_);
return v_res_4662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21(lean_object* v___y_4665_, lean_object* v___y_4666_, lean_object* v___f_4667_, lean_object* v_x_4668_){
_start:
{
lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; uint8_t v___x_4677_; lean_object* v_val_4679_; lean_object* v___x_4682_; 
v___x_4670_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__0));
v___x_4671_ = lean_string_append(v___x_4670_, v___y_4665_);
v___x_4672_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__21___closed__1));
v___x_4673_ = lean_string_append(v___x_4671_, v___x_4672_);
v___x_4674_ = l_Nat_reprFast(v___y_4666_);
v___x_4675_ = lean_string_append(v___x_4673_, v___x_4674_);
lean_dec_ref(v___x_4674_);
v___x_4676_ = lean_unsigned_to_nat(0u);
v___x_4677_ = 0;
v___x_4682_ = l_IO_println___at___00Lasm_Fetch_serveNode_spec__8(v___x_4675_);
if (lean_obj_tag(v___x_4682_) == 0)
{
lean_object* v_a_4683_; lean_object* v___x_4685_; uint8_t v_isShared_4686_; uint8_t v_isSharedCheck_4690_; 
v_a_4683_ = lean_ctor_get(v___x_4682_, 0);
v_isSharedCheck_4690_ = !lean_is_exclusive(v___x_4682_);
if (v_isSharedCheck_4690_ == 0)
{
v___x_4685_ = v___x_4682_;
v_isShared_4686_ = v_isSharedCheck_4690_;
goto v_resetjp_4684_;
}
else
{
lean_inc(v_a_4683_);
lean_dec(v___x_4682_);
v___x_4685_ = lean_box(0);
v_isShared_4686_ = v_isSharedCheck_4690_;
goto v_resetjp_4684_;
}
v_resetjp_4684_:
{
lean_object* v___x_4688_; 
if (v_isShared_4686_ == 0)
{
lean_ctor_set_tag(v___x_4685_, 1);
v___x_4688_ = v___x_4685_;
goto v_reusejp_4687_;
}
else
{
lean_object* v_reuseFailAlloc_4689_; 
v_reuseFailAlloc_4689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4689_, 0, v_a_4683_);
v___x_4688_ = v_reuseFailAlloc_4689_;
goto v_reusejp_4687_;
}
v_reusejp_4687_:
{
v_val_4679_ = v___x_4688_;
goto v___jp_4678_;
}
}
}
else
{
lean_object* v_a_4691_; lean_object* v___x_4693_; uint8_t v_isShared_4694_; uint8_t v_isSharedCheck_4698_; 
v_a_4691_ = lean_ctor_get(v___x_4682_, 0);
v_isSharedCheck_4698_ = !lean_is_exclusive(v___x_4682_);
if (v_isSharedCheck_4698_ == 0)
{
v___x_4693_ = v___x_4682_;
v_isShared_4694_ = v_isSharedCheck_4698_;
goto v_resetjp_4692_;
}
else
{
lean_inc(v_a_4691_);
lean_dec(v___x_4682_);
v___x_4693_ = lean_box(0);
v_isShared_4694_ = v_isSharedCheck_4698_;
goto v_resetjp_4692_;
}
v_resetjp_4692_:
{
lean_object* v___x_4696_; 
if (v_isShared_4694_ == 0)
{
lean_ctor_set_tag(v___x_4693_, 0);
v___x_4696_ = v___x_4693_;
goto v_reusejp_4695_;
}
else
{
lean_object* v_reuseFailAlloc_4697_; 
v_reuseFailAlloc_4697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4697_, 0, v_a_4691_);
v___x_4696_ = v_reuseFailAlloc_4697_;
goto v_reusejp_4695_;
}
v_reusejp_4695_:
{
v_val_4679_ = v___x_4696_;
goto v___jp_4678_;
}
}
}
v___jp_4678_:
{
lean_object* v___x_4680_; lean_object* v___x_4681_; 
v___x_4680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4680_, 0, v_val_4679_);
v___x_4681_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4676_, v___x_4677_, v___x_4680_, v___f_4667_);
return v___x_4681_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__21___boxed(lean_object* v___y_4699_, lean_object* v___y_4700_, lean_object* v___f_4701_, lean_object* v_x_4702_, lean_object* v___y_4703_){
_start:
{
lean_object* v_res_4704_; 
v_res_4704_ = l_Lasm_Fetch_serveNode___lam__21(v___y_4699_, v___y_4700_, v___f_4701_, v_x_4702_);
lean_dec_ref(v_x_4702_);
lean_dec_ref(v___y_4699_);
return v_res_4704_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__1(void){
_start:
{
lean_object* v___x_4706_; lean_object* v___x_4707_; 
v___x_4706_ = lean_unsigned_to_nat(0u);
v___x_4707_ = lean_nat_to_int(v___x_4706_);
return v___x_4707_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__2(void){
_start:
{
lean_object* v___x_4708_; lean_object* v___x_4709_; 
v___x_4708_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4709_ = lean_nat_abs(v___x_4708_);
return v___x_4709_;
}
}
static uint8_t _init_l_Lasm_Fetch_serveNode___lam__23___closed__3(void){
_start:
{
lean_object* v___x_4710_; lean_object* v___x_4711_; uint8_t v___x_4712_; 
v___x_4710_ = lean_cstr_to_nat("9007199254740991");
v___x_4711_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__2, &l_Lasm_Fetch_serveNode___lam__23___closed__2_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__2);
v___x_4712_ = lean_nat_dec_le(v___x_4711_, v___x_4710_);
return v___x_4712_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__4(void){
_start:
{
lean_object* v___x_4713_; lean_object* v___x_4714_; 
v___x_4713_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4714_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4714_, 0, v___x_4713_);
return v___x_4714_;
}
}
static double _init_l_Lasm_Fetch_serveNode___lam__23___closed__5(void){
_start:
{
lean_object* v___x_4715_; double v___x_4716_; 
v___x_4715_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__1, &l_Lasm_Fetch_serveNode___lam__23___closed__1_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__1);
v___x_4716_ = l_Float_ofInt(v___x_4715_);
return v___x_4716_;
}
}
static lean_object* _init_l_Lasm_Fetch_serveNode___lam__23___closed__6(void){
_start:
{
double v___x_4717_; lean_object* v___x_4718_; 
v___x_4717_ = lean_float_once(&l_Lasm_Fetch_serveNode___lam__23___closed__5, &l_Lasm_Fetch_serveNode___lam__23___closed__5_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__5);
v___x_4718_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4718_, 0, v___x_4717_);
return v___x_4718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23(lean_object* v___f_4719_, lean_object* v___x_4720_, lean_object* v_a_4721_, lean_object* v_x_4722_){
_start:
{
lean_object* v___y_4725_; uint8_t v___y_4726_; lean_object* v_val_4727_; lean_object* v___x_4730_; lean_object* v___y_4732_; uint8_t v___x_4753_; 
v___x_4730_ = ((lean_object*)(l_Lasm_Fetch_serveNode___lam__23___closed__0));
v___x_4753_ = lean_uint8_once(&l_Lasm_Fetch_serveNode___lam__23___closed__3, &l_Lasm_Fetch_serveNode___lam__23___closed__3_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__3);
if (v___x_4753_ == 0)
{
lean_object* v___x_4754_; 
v___x_4754_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__4, &l_Lasm_Fetch_serveNode___lam__23___closed__4_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__4);
v___y_4732_ = v___x_4754_;
goto v___jp_4731_;
}
else
{
lean_object* v___x_4755_; 
v___x_4755_ = lean_obj_once(&l_Lasm_Fetch_serveNode___lam__23___closed__6, &l_Lasm_Fetch_serveNode___lam__23___closed__6_once, _init_l_Lasm_Fetch_serveNode___lam__23___closed__6);
v___y_4732_ = v___x_4755_;
goto v___jp_4731_;
}
v___jp_4724_:
{
lean_object* v___x_4728_; lean_object* v___x_4729_; 
v___x_4728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4728_, 0, v_val_4727_);
v___x_4729_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_4725_, v___y_4726_, v___x_4728_, v___f_4719_);
return v___x_4729_;
}
v___jp_4731_:
{
lean_object* v___x_4733_; lean_object* v___x_4734_; uint8_t v___x_4735_; lean_object* v___x_4736_; 
lean_inc(v___y_4732_);
v___x_4733_ = lean_array_push(v___x_4720_, v___y_4732_);
v___x_4734_ = lean_unsigned_to_nat(0u);
v___x_4735_ = 0;
v___x_4736_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4721_, v___x_4730_, v___x_4733_);
if (lean_obj_tag(v___x_4736_) == 0)
{
lean_object* v_a_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4744_; 
v_a_4737_ = lean_ctor_get(v___x_4736_, 0);
v_isSharedCheck_4744_ = !lean_is_exclusive(v___x_4736_);
if (v_isSharedCheck_4744_ == 0)
{
v___x_4739_ = v___x_4736_;
v_isShared_4740_ = v_isSharedCheck_4744_;
goto v_resetjp_4738_;
}
else
{
lean_inc(v_a_4737_);
lean_dec(v___x_4736_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4744_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
lean_object* v___x_4742_; 
if (v_isShared_4740_ == 0)
{
lean_ctor_set_tag(v___x_4739_, 1);
v___x_4742_ = v___x_4739_;
goto v_reusejp_4741_;
}
else
{
lean_object* v_reuseFailAlloc_4743_; 
v_reuseFailAlloc_4743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4743_, 0, v_a_4737_);
v___x_4742_ = v_reuseFailAlloc_4743_;
goto v_reusejp_4741_;
}
v_reusejp_4741_:
{
v___y_4725_ = v___x_4734_;
v___y_4726_ = v___x_4735_;
v_val_4727_ = v___x_4742_;
goto v___jp_4724_;
}
}
}
else
{
lean_object* v_a_4745_; lean_object* v___x_4747_; uint8_t v_isShared_4748_; uint8_t v_isSharedCheck_4752_; 
v_a_4745_ = lean_ctor_get(v___x_4736_, 0);
v_isSharedCheck_4752_ = !lean_is_exclusive(v___x_4736_);
if (v_isSharedCheck_4752_ == 0)
{
v___x_4747_ = v___x_4736_;
v_isShared_4748_ = v_isSharedCheck_4752_;
goto v_resetjp_4746_;
}
else
{
lean_inc(v_a_4745_);
lean_dec(v___x_4736_);
v___x_4747_ = lean_box(0);
v_isShared_4748_ = v_isSharedCheck_4752_;
goto v_resetjp_4746_;
}
v_resetjp_4746_:
{
lean_object* v___x_4750_; 
if (v_isShared_4748_ == 0)
{
lean_ctor_set_tag(v___x_4747_, 0);
v___x_4750_ = v___x_4747_;
goto v_reusejp_4749_;
}
else
{
lean_object* v_reuseFailAlloc_4751_; 
v_reuseFailAlloc_4751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4751_, 0, v_a_4745_);
v___x_4750_ = v_reuseFailAlloc_4751_;
goto v_reusejp_4749_;
}
v_reusejp_4749_:
{
v___y_4725_ = v___x_4734_;
v___y_4726_ = v___x_4735_;
v_val_4727_ = v___x_4750_;
goto v___jp_4724_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__23___boxed(lean_object* v___f_4756_, lean_object* v___x_4757_, lean_object* v_a_4758_, lean_object* v_x_4759_, lean_object* v___y_4760_){
_start:
{
lean_object* v_res_4761_; 
v_res_4761_ = l_Lasm_Fetch_serveNode___lam__23(v___f_4756_, v___x_4757_, v_a_4758_, v_x_4759_);
lean_dec_ref(v_x_4759_);
return v_res_4761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24(lean_object* v_a_4762_, lean_object* v___x_4763_, lean_object* v___x_4764_, lean_object* v___f_4765_, lean_object* v_a_4766_, lean_object* v_x_4767_){
_start:
{
lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; uint8_t v___x_4773_; lean_object* v_val_4775_; lean_object* v___x_4778_; 
v___x_4769_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__7___closed__0));
v___x_4770_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4770_, 0, v_a_4762_);
lean_ctor_set(v___x_4770_, 1, v___x_4763_);
v___x_4771_ = lean_array_push(v___x_4764_, v___x_4770_);
v___x_4772_ = lean_unsigned_to_nat(0u);
v___x_4773_ = 0;
v___x_4778_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4766_, v___x_4769_, v___x_4771_);
if (lean_obj_tag(v___x_4778_) == 0)
{
lean_object* v_a_4779_; lean_object* v___x_4781_; uint8_t v_isShared_4782_; uint8_t v_isSharedCheck_4786_; 
v_a_4779_ = lean_ctor_get(v___x_4778_, 0);
v_isSharedCheck_4786_ = !lean_is_exclusive(v___x_4778_);
if (v_isSharedCheck_4786_ == 0)
{
v___x_4781_ = v___x_4778_;
v_isShared_4782_ = v_isSharedCheck_4786_;
goto v_resetjp_4780_;
}
else
{
lean_inc(v_a_4779_);
lean_dec(v___x_4778_);
v___x_4781_ = lean_box(0);
v_isShared_4782_ = v_isSharedCheck_4786_;
goto v_resetjp_4780_;
}
v_resetjp_4780_:
{
lean_object* v___x_4784_; 
if (v_isShared_4782_ == 0)
{
lean_ctor_set_tag(v___x_4781_, 1);
v___x_4784_ = v___x_4781_;
goto v_reusejp_4783_;
}
else
{
lean_object* v_reuseFailAlloc_4785_; 
v_reuseFailAlloc_4785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4785_, 0, v_a_4779_);
v___x_4784_ = v_reuseFailAlloc_4785_;
goto v_reusejp_4783_;
}
v_reusejp_4783_:
{
v_val_4775_ = v___x_4784_;
goto v___jp_4774_;
}
}
}
else
{
lean_object* v_a_4787_; lean_object* v___x_4789_; uint8_t v_isShared_4790_; uint8_t v_isSharedCheck_4794_; 
v_a_4787_ = lean_ctor_get(v___x_4778_, 0);
v_isSharedCheck_4794_ = !lean_is_exclusive(v___x_4778_);
if (v_isSharedCheck_4794_ == 0)
{
v___x_4789_ = v___x_4778_;
v_isShared_4790_ = v_isSharedCheck_4794_;
goto v_resetjp_4788_;
}
else
{
lean_inc(v_a_4787_);
lean_dec(v___x_4778_);
v___x_4789_ = lean_box(0);
v_isShared_4790_ = v_isSharedCheck_4794_;
goto v_resetjp_4788_;
}
v_resetjp_4788_:
{
lean_object* v___x_4792_; 
if (v_isShared_4790_ == 0)
{
lean_ctor_set_tag(v___x_4789_, 0);
v___x_4792_ = v___x_4789_;
goto v_reusejp_4791_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v_a_4787_);
v___x_4792_ = v_reuseFailAlloc_4793_;
goto v_reusejp_4791_;
}
v_reusejp_4791_:
{
v_val_4775_ = v___x_4792_;
goto v___jp_4774_;
}
}
}
v___jp_4774_:
{
lean_object* v___x_4776_; lean_object* v___x_4777_; 
v___x_4776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4776_, 0, v_val_4775_);
v___x_4777_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4772_, v___x_4773_, v___x_4776_, v___f_4765_);
return v___x_4777_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___lam__24___boxed(lean_object* v_a_4795_, lean_object* v___x_4796_, lean_object* v___x_4797_, lean_object* v___f_4798_, lean_object* v_a_4799_, lean_object* v_x_4800_, lean_object* v___y_4801_){
_start:
{
lean_object* v_res_4802_; 
v_res_4802_ = l_Lasm_Fetch_serveNode___lam__24(v_a_4795_, v___x_4796_, v___x_4797_, v___f_4798_, v_a_4799_, v_x_4800_);
lean_dec_ref(v_x_4800_);
return v_res_4802_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(lean_object* v_a_4804_, lean_object* v_a_4805_, lean_object* v_as_x27_4806_, lean_object* v_b_4807_){
_start:
{
if (lean_obj_tag(v_as_x27_4806_) == 0)
{
lean_object* v___x_4809_; 
lean_dec(v_a_4805_);
lean_dec(v_a_4804_);
v___x_4809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4809_, 0, v_b_4807_);
return v___x_4809_;
}
else
{
lean_object* v_head_4810_; lean_object* v_tail_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; 
v_head_4810_ = lean_ctor_get(v_as_x27_4806_, 0);
v_tail_4811_ = lean_ctor_get(v_as_x27_4806_, 1);
v___x_4812_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4813_ = lean_box(0);
v___x_4814_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___closed__0));
lean_inc(v_head_4810_);
v___x_4815_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4815_, 0, v_head_4810_);
lean_inc(v_a_4804_);
v___x_4816_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4816_, 0, v_a_4804_);
lean_ctor_set(v___x_4816_, 1, v___x_4812_);
v___x_4817_ = lean_unsigned_to_nat(2u);
v___x_4818_ = lean_mk_empty_array_with_capacity(v___x_4817_);
v___x_4819_ = lean_array_push(v___x_4818_, v___x_4815_);
v___x_4820_ = lean_array_push(v___x_4819_, v___x_4816_);
lean_inc(v_a_4805_);
v___x_4821_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4805_, v___x_4814_, v___x_4820_);
if (lean_obj_tag(v___x_4821_) == 0)
{
lean_dec_ref_known(v___x_4821_, 1);
v_as_x27_4806_ = v_tail_4811_;
v_b_4807_ = v___x_4813_;
goto _start;
}
else
{
lean_object* v_a_4823_; lean_object* v___x_4825_; uint8_t v_isShared_4826_; uint8_t v_isSharedCheck_4830_; 
lean_dec(v_a_4805_);
lean_dec(v_a_4804_);
v_a_4823_ = lean_ctor_get(v___x_4821_, 0);
v_isSharedCheck_4830_ = !lean_is_exclusive(v___x_4821_);
if (v_isSharedCheck_4830_ == 0)
{
v___x_4825_ = v___x_4821_;
v_isShared_4826_ = v_isSharedCheck_4830_;
goto v_resetjp_4824_;
}
else
{
lean_inc(v_a_4823_);
lean_dec(v___x_4821_);
v___x_4825_ = lean_box(0);
v_isShared_4826_ = v_isSharedCheck_4830_;
goto v_resetjp_4824_;
}
v_resetjp_4824_:
{
lean_object* v___x_4828_; 
if (v_isShared_4826_ == 0)
{
v___x_4828_ = v___x_4825_;
goto v_reusejp_4827_;
}
else
{
lean_object* v_reuseFailAlloc_4829_; 
v_reuseFailAlloc_4829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4829_, 0, v_a_4823_);
v___x_4828_ = v_reuseFailAlloc_4829_;
goto v_reusejp_4827_;
}
v_reusejp_4827_:
{
return v___x_4828_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg___boxed(lean_object* v_a_4831_, lean_object* v_a_4832_, lean_object* v_as_x27_4833_, lean_object* v_b_4834_, lean_object* v___y_4835_){
_start:
{
lean_object* v_res_4836_; 
v_res_4836_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4831_, v_a_4832_, v_as_x27_4833_, v_b_4834_);
lean_dec(v_as_x27_4833_);
return v_res_4836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(lean_object* v_specifier_4838_){
_start:
{
uint32_t v___x_4840_; uint32_t v___x_4841_; uint64_t v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; 
v___x_4840_ = 201;
v___x_4841_ = 0;
v___x_4842_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0___closed__0);
v___x_4843_ = lean_string_to_utf8(v_specifier_4838_);
v___x_4844_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4840_, v___x_4841_, v___x_4842_, v___x_4843_);
lean_dec_ref(v___x_4843_);
if (lean_obj_tag(v___x_4844_) == 0)
{
lean_object* v_a_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; 
v_a_4845_ = lean_ctor_get(v___x_4844_, 0);
lean_inc(v_a_4845_);
lean_dec_ref_known(v___x_4844_, 1);
v___x_4846_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___closed__0));
v___x_4847_ = l_String_quote(v_specifier_4838_);
v___x_4848_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4848_, 0, v___x_4847_);
v___x_4849_ = lean_unsigned_to_nat(120u);
v___x_4850_ = lean_unsigned_to_nat(0u);
v___x_4851_ = l_Std_Format_pretty(v___x_4848_, v___x_4849_, v___x_4850_, v___x_4850_);
v___x_4852_ = lean_string_append(v___x_4846_, v___x_4851_);
lean_dec_ref(v___x_4851_);
v___x_4853_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_4852_, v_a_4845_);
lean_dec(v_a_4845_);
lean_dec_ref(v___x_4852_);
return v___x_4853_;
}
else
{
lean_object* v_a_4854_; lean_object* v___x_4856_; uint8_t v_isShared_4857_; uint8_t v_isSharedCheck_4861_; 
lean_dec_ref(v_specifier_4838_);
v_a_4854_ = lean_ctor_get(v___x_4844_, 0);
v_isSharedCheck_4861_ = !lean_is_exclusive(v___x_4844_);
if (v_isSharedCheck_4861_ == 0)
{
v___x_4856_ = v___x_4844_;
v_isShared_4857_ = v_isSharedCheck_4861_;
goto v_resetjp_4855_;
}
else
{
lean_inc(v_a_4854_);
lean_dec(v___x_4844_);
v___x_4856_ = lean_box(0);
v_isShared_4857_ = v_isSharedCheck_4861_;
goto v_resetjp_4855_;
}
v_resetjp_4855_:
{
lean_object* v___x_4859_; 
if (v_isShared_4857_ == 0)
{
v___x_4859_ = v___x_4856_;
goto v_reusejp_4858_;
}
else
{
lean_object* v_reuseFailAlloc_4860_; 
v_reuseFailAlloc_4860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4860_, 0, v_a_4854_);
v___x_4859_ = v_reuseFailAlloc_4860_;
goto v_reusejp_4858_;
}
v_reusejp_4858_:
{
return v___x_4859_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0___boxed(lean_object* v_specifier_4862_, lean_object* v_a_4863_){
_start:
{
lean_object* v_res_4864_; 
v_res_4864_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v_specifier_4862_);
return v_res_4864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode(lean_object* v_handler_4890_, lean_object* v_options_4891_){
_start:
{
lean_object* v___f_4893_; lean_object* v___f_4894_; lean_object* v___f_4895_; lean_object* v___f_4896_; lean_object* v___y_4898_; lean_object* v___y_4899_; lean_object* v___y_4900_; lean_object* v___y_4901_; lean_object* v___y_4902_; lean_object* v___y_4903_; lean_object* v___y_4904_; lean_object* v___y_4905_; lean_object* v___x_4959_; lean_object* v___x_4960_; 
v___f_4893_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__0));
v___f_4894_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___closed__0));
v___f_4895_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__3));
v___f_4896_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__4));
v___x_4959_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__10));
v___x_4960_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4959_);
if (lean_obj_tag(v___x_4960_) == 0)
{
lean_object* v_a_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; 
v_a_4961_ = lean_ctor_get(v___x_4960_, 0);
lean_inc(v_a_4961_);
lean_dec_ref_known(v___x_4960_, 1);
v___x_4962_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__11));
v___x_4963_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4962_);
if (lean_obj_tag(v___x_4963_) == 0)
{
lean_object* v_a_4964_; lean_object* v___x_4965_; lean_object* v___x_4966_; 
v_a_4964_ = lean_ctor_get(v___x_4963_, 0);
lean_inc(v_a_4964_);
lean_dec_ref_known(v___x_4963_, 1);
v___x_4965_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__12));
v___x_4966_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4964_, v___x_4965_);
if (lean_obj_tag(v___x_4966_) == 0)
{
lean_object* v_a_4967_; lean_object* v___x_4968_; 
v_a_4967_ = lean_ctor_get(v___x_4966_, 0);
lean_inc(v_a_4967_);
lean_dec_ref_known(v___x_4966_, 1);
v___x_4968_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4968_) == 0)
{
lean_object* v_a_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; 
v_a_4969_ = lean_ctor_get(v___x_4968_, 0);
lean_inc(v_a_4969_);
lean_dec_ref_known(v___x_4968_, 1);
v___x_4970_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__13));
v___x_4971_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_4969_, v___x_4970_);
if (lean_obj_tag(v___x_4971_) == 0)
{
lean_object* v_a_4972_; lean_object* v___y_4974_; lean_object* v___y_4975_; lean_object* v___y_4976_; lean_object* v___y_5026_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___y_5031_; 
v_a_4972_ = lean_ctor_get(v___x_4971_, 0);
lean_inc(v_a_4972_);
lean_dec_ref_known(v___x_4971_, 1);
v___x_5028_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__16));
v___x_5029_ = lean_io_getenv(v___x_5028_);
if (lean_obj_tag(v___x_5029_) == 0)
{
lean_object* v___x_5040_; 
v___x_5040_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__18));
v___y_5031_ = v___x_5040_;
goto v___jp_5030_;
}
else
{
lean_object* v_val_5041_; 
v_val_5041_ = lean_ctor_get(v___x_5029_, 0);
lean_inc(v_val_5041_);
lean_dec_ref_known(v___x_5029_, 1);
v___y_5031_ = v_val_5041_;
goto v___jp_5030_;
}
v___jp_4973_:
{
lean_object* v___f_4977_; lean_object* v___f_4978_; lean_object* v___f_4979_; lean_object* v___f_4980_; lean_object* v___x_4981_; 
lean_inc_n(v___y_4976_, 2);
v___f_4977_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__19___boxed), 9, 7);
lean_closure_set(v___f_4977_, 0, v___f_4894_);
lean_closure_set(v___f_4977_, 1, v___f_4893_);
lean_closure_set(v___f_4977_, 2, v_handler_4890_);
lean_closure_set(v___f_4977_, 3, v_options_4891_);
lean_closure_set(v___f_4977_, 4, v_a_4972_);
lean_closure_set(v___f_4977_, 5, v_a_4967_);
lean_closure_set(v___f_4977_, 6, v___y_4976_);
v___f_4978_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__20___boxed), 3, 1);
lean_closure_set(v___f_4978_, 0, v___f_4977_);
lean_inc_ref(v___f_4978_);
v___f_4979_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__22___boxed), 4, 2);
lean_closure_set(v___f_4979_, 0, v___f_4978_);
lean_closure_set(v___f_4979_, 1, v___f_4978_);
v___f_4980_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__21___boxed), 5, 3);
lean_closure_set(v___f_4980_, 0, v___y_4974_);
lean_closure_set(v___f_4980_, 1, v___y_4976_);
lean_closure_set(v___f_4980_, 2, v___f_4895_);
v___x_4981_ = l_Lasm_JS_Function_ofFnReply(v___f_4979_);
if (lean_obj_tag(v___x_4981_) == 0)
{
lean_object* v_a_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; 
v_a_4982_ = lean_ctor_get(v___x_4981_, 0);
lean_inc(v_a_4982_);
lean_dec_ref_known(v___x_4981_, 1);
v___x_4983_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__14));
v___x_4984_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_4985_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4985_, 0, v_a_4982_);
lean_ctor_set(v___x_4985_, 1, v___x_4984_);
v___x_4986_ = lean_unsigned_to_nat(1u);
v___x_4987_ = lean_mk_empty_array_with_capacity(v___x_4986_);
lean_inc_ref(v___x_4987_);
v___x_4988_ = lean_array_push(v___x_4987_, v___x_4985_);
v___x_4989_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v_a_4961_, v___x_4983_, v___x_4988_);
if (lean_obj_tag(v___x_4989_) == 0)
{
lean_object* v_a_4990_; lean_object* v___x_4991_; 
v_a_4990_ = lean_ctor_get(v___x_4989_, 0);
lean_inc(v_a_4990_);
lean_dec_ref_known(v___x_4989_, 1);
v___x_4991_ = l_Lasm_JS_Function_ofFn(v___f_4980_);
if (lean_obj_tag(v___x_4991_) == 0)
{
lean_object* v_a_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; uint8_t v___x_4997_; 
v_a_4992_ = lean_ctor_get(v___x_4991_, 0);
lean_inc(v_a_4992_);
lean_dec_ref_known(v___x_4991_, 1);
v___x_4993_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__15));
v___x_4994_ = lean_nat_to_int(v___y_4976_);
v___x_4995_ = lean_nat_abs(v___x_4994_);
v___x_4996_ = lean_cstr_to_nat("9007199254740991");
v___x_4997_ = lean_nat_dec_le(v___x_4995_, v___x_4996_);
lean_dec(v___x_4995_);
if (v___x_4997_ == 0)
{
lean_object* v___x_4998_; 
v___x_4998_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4998_, 0, v___x_4994_);
v___y_4898_ = v___x_4984_;
v___y_4899_ = v___x_4987_;
v___y_4900_ = v_a_4990_;
v___y_4901_ = v_a_4992_;
v___y_4902_ = v___x_4984_;
v___y_4903_ = v___x_4993_;
v___y_4904_ = v___y_4975_;
v___y_4905_ = v___x_4998_;
goto v___jp_4897_;
}
else
{
double v___x_4999_; lean_object* v___x_5000_; 
v___x_4999_ = l_Float_ofInt(v___x_4994_);
lean_dec(v___x_4994_);
v___x_5000_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5000_, 0, v___x_4999_);
v___y_4898_ = v___x_4984_;
v___y_4899_ = v___x_4987_;
v___y_4900_ = v_a_4990_;
v___y_4901_ = v_a_4992_;
v___y_4902_ = v___x_4984_;
v___y_4903_ = v___x_4993_;
v___y_4904_ = v___y_4975_;
v___y_4905_ = v___x_5000_;
goto v___jp_4897_;
}
}
else
{
lean_object* v_a_5001_; lean_object* v___x_5003_; uint8_t v_isShared_5004_; uint8_t v_isSharedCheck_5008_; 
lean_dec(v_a_4990_);
lean_dec_ref(v___x_4987_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
v_a_5001_ = lean_ctor_get(v___x_4991_, 0);
v_isSharedCheck_5008_ = !lean_is_exclusive(v___x_4991_);
if (v_isSharedCheck_5008_ == 0)
{
v___x_5003_ = v___x_4991_;
v_isShared_5004_ = v_isSharedCheck_5008_;
goto v_resetjp_5002_;
}
else
{
lean_inc(v_a_5001_);
lean_dec(v___x_4991_);
v___x_5003_ = lean_box(0);
v_isShared_5004_ = v_isSharedCheck_5008_;
goto v_resetjp_5002_;
}
v_resetjp_5002_:
{
lean_object* v___x_5006_; 
if (v_isShared_5004_ == 0)
{
v___x_5006_ = v___x_5003_;
goto v_reusejp_5005_;
}
else
{
lean_object* v_reuseFailAlloc_5007_; 
v_reuseFailAlloc_5007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5007_, 0, v_a_5001_);
v___x_5006_ = v_reuseFailAlloc_5007_;
goto v_reusejp_5005_;
}
v_reusejp_5005_:
{
return v___x_5006_;
}
}
}
}
else
{
lean_object* v_a_5009_; lean_object* v___x_5011_; uint8_t v_isShared_5012_; uint8_t v_isSharedCheck_5016_; 
lean_dec_ref(v___x_4987_);
lean_dec_ref(v___f_4980_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
v_a_5009_ = lean_ctor_get(v___x_4989_, 0);
v_isSharedCheck_5016_ = !lean_is_exclusive(v___x_4989_);
if (v_isSharedCheck_5016_ == 0)
{
v___x_5011_ = v___x_4989_;
v_isShared_5012_ = v_isSharedCheck_5016_;
goto v_resetjp_5010_;
}
else
{
lean_inc(v_a_5009_);
lean_dec(v___x_4989_);
v___x_5011_ = lean_box(0);
v_isShared_5012_ = v_isSharedCheck_5016_;
goto v_resetjp_5010_;
}
v_resetjp_5010_:
{
lean_object* v___x_5014_; 
if (v_isShared_5012_ == 0)
{
v___x_5014_ = v___x_5011_;
goto v_reusejp_5013_;
}
else
{
lean_object* v_reuseFailAlloc_5015_; 
v_reuseFailAlloc_5015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5015_, 0, v_a_5009_);
v___x_5014_ = v_reuseFailAlloc_5015_;
goto v_reusejp_5013_;
}
v_reusejp_5013_:
{
return v___x_5014_;
}
}
}
}
else
{
lean_object* v_a_5017_; lean_object* v___x_5019_; uint8_t v_isShared_5020_; uint8_t v_isSharedCheck_5024_; 
lean_dec_ref(v___f_4980_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
lean_dec(v_a_4961_);
v_a_5017_ = lean_ctor_get(v___x_4981_, 0);
v_isSharedCheck_5024_ = !lean_is_exclusive(v___x_4981_);
if (v_isSharedCheck_5024_ == 0)
{
v___x_5019_ = v___x_4981_;
v_isShared_5020_ = v_isSharedCheck_5024_;
goto v_resetjp_5018_;
}
else
{
lean_inc(v_a_5017_);
lean_dec(v___x_4981_);
v___x_5019_ = lean_box(0);
v_isShared_5020_ = v_isSharedCheck_5024_;
goto v_resetjp_5018_;
}
v_resetjp_5018_:
{
lean_object* v___x_5022_; 
if (v_isShared_5020_ == 0)
{
v___x_5022_ = v___x_5019_;
goto v_reusejp_5021_;
}
else
{
lean_object* v_reuseFailAlloc_5023_; 
v_reuseFailAlloc_5023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5023_, 0, v_a_5017_);
v___x_5022_ = v_reuseFailAlloc_5023_;
goto v_reusejp_5021_;
}
v_reusejp_5021_:
{
return v___x_5022_;
}
}
}
}
v___jp_5025_:
{
lean_object* v___x_5027_; 
v___x_5027_ = lean_unsigned_to_nat(3000u);
lean_inc_ref(v___y_5026_);
v___y_4974_ = v___y_5026_;
v___y_4975_ = v___y_5026_;
v___y_4976_ = v___x_5027_;
goto v___jp_4973_;
}
v___jp_5030_:
{
lean_object* v___x_5032_; lean_object* v___x_5033_; 
v___x_5032_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__17));
v___x_5033_ = lean_io_getenv(v___x_5032_);
if (lean_obj_tag(v___x_5033_) == 0)
{
v___y_5026_ = v___y_5031_;
goto v___jp_5025_;
}
else
{
lean_object* v_val_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; 
v_val_5034_ = lean_ctor_get(v___x_5033_, 0);
lean_inc(v_val_5034_);
lean_dec_ref_known(v___x_5033_, 1);
v___x_5035_ = lean_unsigned_to_nat(0u);
v___x_5036_ = lean_string_utf8_byte_size(v_val_5034_);
v___x_5037_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5037_, 0, v_val_5034_);
lean_ctor_set(v___x_5037_, 1, v___x_5035_);
lean_ctor_set(v___x_5037_, 2, v___x_5036_);
v___x_5038_ = l_String_Slice_toNat_x3f(v___x_5037_);
lean_dec_ref_known(v___x_5037_, 3);
if (lean_obj_tag(v___x_5038_) == 0)
{
v___y_5026_ = v___y_5031_;
goto v___jp_5025_;
}
else
{
lean_object* v_val_5039_; 
v_val_5039_ = lean_ctor_get(v___x_5038_, 0);
lean_inc(v_val_5039_);
lean_dec_ref_known(v___x_5038_, 1);
lean_inc_ref(v___y_5031_);
v___y_4974_ = v___y_5031_;
v___y_4975_ = v___y_5031_;
v___y_4976_ = v_val_5039_;
goto v___jp_4973_;
}
}
}
}
else
{
lean_object* v_a_5042_; lean_object* v___x_5044_; uint8_t v_isShared_5045_; uint8_t v_isSharedCheck_5049_; 
lean_dec(v_a_4967_);
lean_dec(v_a_4961_);
lean_dec_ref(v_options_4891_);
lean_dec_ref(v_handler_4890_);
v_a_5042_ = lean_ctor_get(v___x_4971_, 0);
v_isSharedCheck_5049_ = !lean_is_exclusive(v___x_4971_);
if (v_isSharedCheck_5049_ == 0)
{
v___x_5044_ = v___x_4971_;
v_isShared_5045_ = v_isSharedCheck_5049_;
goto v_resetjp_5043_;
}
else
{
lean_inc(v_a_5042_);
lean_dec(v___x_4971_);
v___x_5044_ = lean_box(0);
v_isShared_5045_ = v_isSharedCheck_5049_;
goto v_resetjp_5043_;
}
v_resetjp_5043_:
{
lean_object* v___x_5047_; 
if (v_isShared_5045_ == 0)
{
v___x_5047_ = v___x_5044_;
goto v_reusejp_5046_;
}
else
{
lean_object* v_reuseFailAlloc_5048_; 
v_reuseFailAlloc_5048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5048_, 0, v_a_5042_);
v___x_5047_ = v_reuseFailAlloc_5048_;
goto v_reusejp_5046_;
}
v_reusejp_5046_:
{
return v___x_5047_;
}
}
}
}
else
{
lean_object* v_a_5050_; lean_object* v___x_5052_; uint8_t v_isShared_5053_; uint8_t v_isSharedCheck_5057_; 
lean_dec(v_a_4967_);
lean_dec(v_a_4961_);
lean_dec_ref(v_options_4891_);
lean_dec_ref(v_handler_4890_);
v_a_5050_ = lean_ctor_get(v___x_4968_, 0);
v_isSharedCheck_5057_ = !lean_is_exclusive(v___x_4968_);
if (v_isSharedCheck_5057_ == 0)
{
v___x_5052_ = v___x_4968_;
v_isShared_5053_ = v_isSharedCheck_5057_;
goto v_resetjp_5051_;
}
else
{
lean_inc(v_a_5050_);
lean_dec(v___x_4968_);
v___x_5052_ = lean_box(0);
v_isShared_5053_ = v_isSharedCheck_5057_;
goto v_resetjp_5051_;
}
v_resetjp_5051_:
{
lean_object* v___x_5055_; 
if (v_isShared_5053_ == 0)
{
v___x_5055_ = v___x_5052_;
goto v_reusejp_5054_;
}
else
{
lean_object* v_reuseFailAlloc_5056_; 
v_reuseFailAlloc_5056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5056_, 0, v_a_5050_);
v___x_5055_ = v_reuseFailAlloc_5056_;
goto v_reusejp_5054_;
}
v_reusejp_5054_:
{
return v___x_5055_;
}
}
}
}
else
{
lean_object* v_a_5058_; lean_object* v___x_5060_; uint8_t v_isShared_5061_; uint8_t v_isSharedCheck_5065_; 
lean_dec(v_a_4961_);
lean_dec_ref(v_options_4891_);
lean_dec_ref(v_handler_4890_);
v_a_5058_ = lean_ctor_get(v___x_4966_, 0);
v_isSharedCheck_5065_ = !lean_is_exclusive(v___x_4966_);
if (v_isSharedCheck_5065_ == 0)
{
v___x_5060_ = v___x_4966_;
v_isShared_5061_ = v_isSharedCheck_5065_;
goto v_resetjp_5059_;
}
else
{
lean_inc(v_a_5058_);
lean_dec(v___x_4966_);
v___x_5060_ = lean_box(0);
v_isShared_5061_ = v_isSharedCheck_5065_;
goto v_resetjp_5059_;
}
v_resetjp_5059_:
{
lean_object* v___x_5063_; 
if (v_isShared_5061_ == 0)
{
v___x_5063_ = v___x_5060_;
goto v_reusejp_5062_;
}
else
{
lean_object* v_reuseFailAlloc_5064_; 
v_reuseFailAlloc_5064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5064_, 0, v_a_5058_);
v___x_5063_ = v_reuseFailAlloc_5064_;
goto v_reusejp_5062_;
}
v_reusejp_5062_:
{
return v___x_5063_;
}
}
}
}
else
{
lean_object* v_a_5066_; lean_object* v___x_5068_; uint8_t v_isShared_5069_; uint8_t v_isSharedCheck_5073_; 
lean_dec(v_a_4961_);
lean_dec_ref(v_options_4891_);
lean_dec_ref(v_handler_4890_);
v_a_5066_ = lean_ctor_get(v___x_4963_, 0);
v_isSharedCheck_5073_ = !lean_is_exclusive(v___x_4963_);
if (v_isSharedCheck_5073_ == 0)
{
v___x_5068_ = v___x_4963_;
v_isShared_5069_ = v_isSharedCheck_5073_;
goto v_resetjp_5067_;
}
else
{
lean_inc(v_a_5066_);
lean_dec(v___x_4963_);
v___x_5068_ = lean_box(0);
v_isShared_5069_ = v_isSharedCheck_5073_;
goto v_resetjp_5067_;
}
v_resetjp_5067_:
{
lean_object* v___x_5071_; 
if (v_isShared_5069_ == 0)
{
v___x_5071_ = v___x_5068_;
goto v_reusejp_5070_;
}
else
{
lean_object* v_reuseFailAlloc_5072_; 
v_reuseFailAlloc_5072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5072_, 0, v_a_5066_);
v___x_5071_ = v_reuseFailAlloc_5072_;
goto v_reusejp_5070_;
}
v_reusejp_5070_:
{
return v___x_5071_;
}
}
}
}
else
{
lean_object* v_a_5074_; lean_object* v___x_5076_; uint8_t v_isShared_5077_; uint8_t v_isSharedCheck_5081_; 
lean_dec_ref(v_options_4891_);
lean_dec_ref(v_handler_4890_);
v_a_5074_ = lean_ctor_get(v___x_4960_, 0);
v_isSharedCheck_5081_ = !lean_is_exclusive(v___x_4960_);
if (v_isSharedCheck_5081_ == 0)
{
v___x_5076_ = v___x_4960_;
v_isShared_5077_ = v_isSharedCheck_5081_;
goto v_resetjp_5075_;
}
else
{
lean_inc(v_a_5074_);
lean_dec(v___x_4960_);
v___x_5076_ = lean_box(0);
v_isShared_5077_ = v_isSharedCheck_5081_;
goto v_resetjp_5075_;
}
v_resetjp_5075_:
{
lean_object* v___x_5079_; 
if (v_isShared_5077_ == 0)
{
v___x_5079_ = v___x_5076_;
goto v_reusejp_5078_;
}
else
{
lean_object* v_reuseFailAlloc_5080_; 
v_reuseFailAlloc_5080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5080_, 0, v_a_5074_);
v___x_5079_ = v_reuseFailAlloc_5080_;
goto v_reusejp_5078_;
}
v_reusejp_5078_:
{
return v___x_5079_;
}
}
}
v___jp_4897_:
{
lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; 
v___x_4906_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4906_, 0, v___y_4904_);
lean_inc_ref(v___y_4902_);
v___x_4907_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4907_, 0, v___y_4901_);
lean_ctor_set(v___x_4907_, 1, v___y_4902_);
v___x_4908_ = lean_unsigned_to_nat(3u);
v___x_4909_ = lean_mk_empty_array_with_capacity(v___x_4908_);
v___x_4910_ = lean_array_push(v___x_4909_, v___y_4905_);
v___x_4911_ = lean_array_push(v___x_4910_, v___x_4906_);
v___x_4912_ = lean_array_push(v___x_4911_, v___x_4907_);
lean_inc_ref(v___y_4903_);
lean_inc(v___y_4900_);
v___x_4913_ = l_Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0(v___y_4900_, v___y_4903_, v___x_4912_);
if (lean_obj_tag(v___x_4913_) == 0)
{
lean_object* v___x_4914_; lean_object* v___x_4915_; 
lean_dec_ref_known(v___x_4913_, 1);
v___x_4914_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__5));
v___x_4915_ = l_Lasm_JS_require___at___00Lasm_Fetch_serveNode_spec__0(v___x_4914_);
if (lean_obj_tag(v___x_4915_) == 0)
{
lean_object* v_a_4916_; lean_object* v___f_4917_; lean_object* v___x_4918_; 
v_a_4916_ = lean_ctor_get(v___x_4915_, 0);
lean_inc_n(v_a_4916_, 2);
lean_dec_ref_known(v___x_4915_, 1);
lean_inc_ref(v___y_4899_);
v___f_4917_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__23___boxed), 5, 3);
lean_closure_set(v___f_4917_, 0, v___f_4896_);
lean_closure_set(v___f_4917_, 1, v___y_4899_);
lean_closure_set(v___f_4917_, 2, v_a_4916_);
v___x_4918_ = l_Lasm_JS_Function_ofFn(v___f_4917_);
if (lean_obj_tag(v___x_4918_) == 0)
{
lean_object* v_a_4919_; lean_object* v___f_4920_; lean_object* v___x_4921_; 
v_a_4919_ = lean_ctor_get(v___x_4918_, 0);
lean_inc(v_a_4919_);
lean_dec_ref_known(v___x_4918_, 1);
lean_inc_ref(v___y_4898_);
v___f_4920_ = lean_alloc_closure((void*)(l_Lasm_Fetch_serveNode___lam__24___boxed), 7, 5);
lean_closure_set(v___f_4920_, 0, v_a_4919_);
lean_closure_set(v___f_4920_, 1, v___y_4898_);
lean_closure_set(v___f_4920_, 2, v___y_4899_);
lean_closure_set(v___f_4920_, 3, v___f_4896_);
lean_closure_set(v___f_4920_, 4, v___y_4900_);
v___x_4921_ = l_Lasm_JS_Function_ofFn(v___f_4920_);
if (lean_obj_tag(v___x_4921_) == 0)
{
lean_object* v_a_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; 
v_a_4922_ = lean_ctor_get(v___x_4921_, 0);
lean_inc(v_a_4922_);
lean_dec_ref_known(v___x_4921_, 1);
v___x_4923_ = ((lean_object*)(l_Lasm_Fetch_serveNode___closed__9));
v___x_4924_ = lean_box(0);
v___x_4925_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_4922_, v_a_4916_, v___x_4923_, v___x_4924_);
if (lean_obj_tag(v___x_4925_) == 0)
{
lean_object* v___x_4926_; 
lean_dec_ref_known(v___x_4925_, 1);
v___x_4926_ = l_Lasm_JS_waitForever();
return v___x_4926_;
}
else
{
return v___x_4925_;
}
}
else
{
lean_object* v_a_4927_; lean_object* v___x_4929_; uint8_t v_isShared_4930_; uint8_t v_isSharedCheck_4934_; 
lean_dec(v_a_4916_);
v_a_4927_ = lean_ctor_get(v___x_4921_, 0);
v_isSharedCheck_4934_ = !lean_is_exclusive(v___x_4921_);
if (v_isSharedCheck_4934_ == 0)
{
v___x_4929_ = v___x_4921_;
v_isShared_4930_ = v_isSharedCheck_4934_;
goto v_resetjp_4928_;
}
else
{
lean_inc(v_a_4927_);
lean_dec(v___x_4921_);
v___x_4929_ = lean_box(0);
v_isShared_4930_ = v_isSharedCheck_4934_;
goto v_resetjp_4928_;
}
v_resetjp_4928_:
{
lean_object* v___x_4932_; 
if (v_isShared_4930_ == 0)
{
v___x_4932_ = v___x_4929_;
goto v_reusejp_4931_;
}
else
{
lean_object* v_reuseFailAlloc_4933_; 
v_reuseFailAlloc_4933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4933_, 0, v_a_4927_);
v___x_4932_ = v_reuseFailAlloc_4933_;
goto v_reusejp_4931_;
}
v_reusejp_4931_:
{
return v___x_4932_;
}
}
}
}
else
{
lean_object* v_a_4935_; lean_object* v___x_4937_; uint8_t v_isShared_4938_; uint8_t v_isSharedCheck_4942_; 
lean_dec(v_a_4916_);
lean_dec(v___y_4900_);
lean_dec_ref(v___y_4899_);
v_a_4935_ = lean_ctor_get(v___x_4918_, 0);
v_isSharedCheck_4942_ = !lean_is_exclusive(v___x_4918_);
if (v_isSharedCheck_4942_ == 0)
{
v___x_4937_ = v___x_4918_;
v_isShared_4938_ = v_isSharedCheck_4942_;
goto v_resetjp_4936_;
}
else
{
lean_inc(v_a_4935_);
lean_dec(v___x_4918_);
v___x_4937_ = lean_box(0);
v_isShared_4938_ = v_isSharedCheck_4942_;
goto v_resetjp_4936_;
}
v_resetjp_4936_:
{
lean_object* v___x_4940_; 
if (v_isShared_4938_ == 0)
{
v___x_4940_ = v___x_4937_;
goto v_reusejp_4939_;
}
else
{
lean_object* v_reuseFailAlloc_4941_; 
v_reuseFailAlloc_4941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4941_, 0, v_a_4935_);
v___x_4940_ = v_reuseFailAlloc_4941_;
goto v_reusejp_4939_;
}
v_reusejp_4939_:
{
return v___x_4940_;
}
}
}
}
else
{
lean_object* v_a_4943_; lean_object* v___x_4945_; uint8_t v_isShared_4946_; uint8_t v_isSharedCheck_4950_; 
lean_dec(v___y_4900_);
lean_dec_ref(v___y_4899_);
v_a_4943_ = lean_ctor_get(v___x_4915_, 0);
v_isSharedCheck_4950_ = !lean_is_exclusive(v___x_4915_);
if (v_isSharedCheck_4950_ == 0)
{
v___x_4945_ = v___x_4915_;
v_isShared_4946_ = v_isSharedCheck_4950_;
goto v_resetjp_4944_;
}
else
{
lean_inc(v_a_4943_);
lean_dec(v___x_4915_);
v___x_4945_ = lean_box(0);
v_isShared_4946_ = v_isSharedCheck_4950_;
goto v_resetjp_4944_;
}
v_resetjp_4944_:
{
lean_object* v___x_4948_; 
if (v_isShared_4946_ == 0)
{
v___x_4948_ = v___x_4945_;
goto v_reusejp_4947_;
}
else
{
lean_object* v_reuseFailAlloc_4949_; 
v_reuseFailAlloc_4949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4949_, 0, v_a_4943_);
v___x_4948_ = v_reuseFailAlloc_4949_;
goto v_reusejp_4947_;
}
v_reusejp_4947_:
{
return v___x_4948_;
}
}
}
}
else
{
lean_object* v_a_4951_; lean_object* v___x_4953_; uint8_t v_isShared_4954_; uint8_t v_isSharedCheck_4958_; 
lean_dec(v___y_4900_);
lean_dec_ref(v___y_4899_);
v_a_4951_ = lean_ctor_get(v___x_4913_, 0);
v_isSharedCheck_4958_ = !lean_is_exclusive(v___x_4913_);
if (v_isSharedCheck_4958_ == 0)
{
v___x_4953_ = v___x_4913_;
v_isShared_4954_ = v_isSharedCheck_4958_;
goto v_resetjp_4952_;
}
else
{
lean_inc(v_a_4951_);
lean_dec(v___x_4913_);
v___x_4953_ = lean_box(0);
v_isShared_4954_ = v_isSharedCheck_4958_;
goto v_resetjp_4952_;
}
v_resetjp_4952_:
{
lean_object* v___x_4956_; 
if (v_isShared_4954_ == 0)
{
v___x_4956_ = v___x_4953_;
goto v_reusejp_4955_;
}
else
{
lean_object* v_reuseFailAlloc_4957_; 
v_reuseFailAlloc_4957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4957_, 0, v_a_4951_);
v___x_4956_ = v_reuseFailAlloc_4957_;
goto v_reusejp_4955_;
}
v_reusejp_4955_:
{
return v___x_4956_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveNode___boxed(lean_object* v_handler_5082_, lean_object* v_options_5083_, lean_object* v_a_5084_){
_start:
{
lean_object* v_res_5085_; 
v_res_5085_ = l_Lasm_Fetch_serveNode(v_handler_5082_, v_options_5083_);
return v_res_5085_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(lean_object* v___y_5086_, lean_object* v_range_5087_, lean_object* v_b_5088_, lean_object* v_i_5089_, lean_object* v_hs_5090_, lean_object* v_hl_5091_){
_start:
{
lean_object* v___x_5092_; 
v___x_5092_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___redArg(v___y_5086_, v_range_5087_, v_b_5088_, v_i_5089_);
return v___x_5092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3___boxed(lean_object* v___y_5093_, lean_object* v_range_5094_, lean_object* v_b_5095_, lean_object* v_i_5096_, lean_object* v_hs_5097_, lean_object* v_hl_5098_){
_start:
{
lean_object* v_res_5099_; 
v_res_5099_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__3(v___y_5093_, v_range_5094_, v_b_5095_, v_i_5096_, v_hs_5097_, v_hl_5098_);
lean_dec_ref(v_range_5094_);
lean_dec_ref(v___y_5093_);
return v_res_5099_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(lean_object* v_a_5100_, lean_object* v_a_5101_, lean_object* v_as_5102_, lean_object* v_as_x27_5103_, lean_object* v_b_5104_, lean_object* v_a_5105_){
_start:
{
lean_object* v___x_5107_; 
v___x_5107_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___redArg(v_a_5100_, v_a_5101_, v_as_x27_5103_, v_b_5104_);
return v___x_5107_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9___boxed(lean_object* v_a_5108_, lean_object* v_a_5109_, lean_object* v_as_5110_, lean_object* v_as_x27_5111_, lean_object* v_b_5112_, lean_object* v_a_5113_, lean_object* v___y_5114_){
_start:
{
lean_object* v_res_5115_; 
v_res_5115_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_serveNode_spec__9(v_a_5108_, v_a_5109_, v_as_5110_, v_as_x27_5111_, v_b_5112_, v_a_5113_);
lean_dec(v_as_x27_5111_);
lean_dec(v_as_5110_);
return v_res_5115_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions_default(void){
_start:
{
lean_object* v___x_5116_; 
v___x_5116_ = lean_box(0);
return v___x_5116_;
}
}
static lean_object* _init_l_Lasm_Fetch_instInhabitedFetchOptions(void){
_start:
{
lean_object* v___x_5117_; 
v___x_5117_ = lean_box(0);
return v___x_5117_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_fastlySend___boxed(lean_object* v_p_5125_, lean_object* v_method_5126_, lean_object* v_url_5127_, lean_object* v_headers_5128_, lean_object* v_body_5129_, lean_object* v_backend_5130_, lean_object* v_a_00___x40___internal___hyg_5131_){
_start:
{
lean_object* v_res_5132_; 
v_res_5132_ = lasm_fetch_send(v_p_5125_, v_method_5126_, v_url_5127_, v_headers_5128_, v_body_5129_, v_backend_5130_);
lean_dec_ref(v_backend_5130_);
lean_dec_ref(v_body_5129_);
lean_dec_ref(v_headers_5128_);
lean_dec_ref(v_url_5127_);
lean_dec_ref(v_method_5126_);
lean_dec(v_p_5125_);
return v_res_5132_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(lean_object* v_pos_5133_, lean_object* v_b_5134_, lean_object* v_x_5135_, lean_object* v_x_5136_){
_start:
{
if (lean_obj_tag(v_x_5136_) == 0)
{
return v_x_5135_;
}
else
{
lean_object* v_head_5137_; lean_object* v_tail_5138_; uint8_t v___y_5140_; lean_object* v___x_5147_; lean_object* v___x_5148_; uint8_t v___x_5149_; 
v_head_5137_ = lean_ctor_get(v_x_5136_, 0);
v_tail_5138_ = lean_ctor_get(v_x_5136_, 1);
v___x_5147_ = lean_nat_add(v_pos_5133_, v_head_5137_);
v___x_5148_ = lean_byte_array_size(v_b_5134_);
v___x_5149_ = lean_nat_dec_lt(v___x_5147_, v___x_5148_);
if (v___x_5149_ == 0)
{
uint8_t v___x_5150_; lean_object* v___x_5151_; lean_object* v___x_5152_; uint8_t v___x_5153_; 
lean_dec(v___x_5147_);
v___x_5150_ = 0;
v___x_5151_ = lean_box(v___x_5150_);
v___x_5152_ = l_outOfBounds___redArg(v___x_5151_);
lean_dec(v___x_5151_);
v___x_5153_ = lean_unbox(v___x_5152_);
lean_dec(v___x_5152_);
v___y_5140_ = v___x_5153_;
goto v___jp_5139_;
}
else
{
uint8_t v___x_5154_; 
v___x_5154_ = lean_byte_array_fget(v_b_5134_, v___x_5147_);
lean_dec(v___x_5147_);
v___y_5140_ = v___x_5154_;
goto v___jp_5139_;
}
v___jp_5139_:
{
lean_object* v___x_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; 
v___x_5141_ = lean_uint8_to_nat(v___y_5140_);
v___x_5142_ = lean_unsigned_to_nat(256u);
v___x_5143_ = lean_nat_pow(v___x_5142_, v_head_5137_);
v___x_5144_ = lean_nat_mul(v___x_5141_, v___x_5143_);
lean_dec(v___x_5143_);
v___x_5145_ = lean_nat_add(v_x_5135_, v___x_5144_);
lean_dec(v___x_5144_);
lean_dec(v_x_5135_);
v_x_5135_ = v___x_5145_;
v_x_5136_ = v_tail_5138_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1___boxed(lean_object* v_pos_5155_, lean_object* v_b_5156_, lean_object* v_x_5157_, lean_object* v_x_5158_){
_start:
{
lean_object* v_res_5159_; 
v_res_5159_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5155_, v_b_5156_, v_x_5157_, v_x_5158_);
lean_dec(v_x_5158_);
lean_dec_ref(v_b_5156_);
lean_dec(v_pos_5155_);
return v_res_5159_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5160_; lean_object* v___x_5161_; 
v___x_5160_ = lean_unsigned_to_nat(8u);
v___x_5161_ = l_List_range(v___x_5160_);
return v___x_5161_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(lean_object* v_b_5165_, lean_object* v_pos_5166_){
_start:
{
lean_object* v___x_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; uint8_t v___x_5170_; 
v___x_5167_ = lean_byte_array_size(v_b_5165_);
v___x_5168_ = lean_unsigned_to_nat(8u);
v___x_5169_ = lean_nat_add(v_pos_5166_, v___x_5168_);
v___x_5170_ = lean_nat_dec_lt(v___x_5167_, v___x_5169_);
lean_dec(v___x_5169_);
if (v___x_5170_ == 0)
{
lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; 
v___x_5171_ = lean_unsigned_to_nat(0u);
v___x_5172_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__0);
v___x_5173_ = l_List_foldl___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__1(v_pos_5166_, v_b_5165_, v___x_5171_, v___x_5172_);
v___x_5174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5174_, 0, v___x_5173_);
return v___x_5174_;
}
else
{
lean_object* v___x_5175_; 
v___x_5175_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___closed__2));
return v___x_5175_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0___boxed(lean_object* v_b_5176_, lean_object* v_pos_5177_){
_start:
{
lean_object* v_res_5178_; 
v_res_5178_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5176_, v_pos_5177_);
lean_dec(v_pos_5177_);
lean_dec_ref(v_b_5176_);
return v_res_5178_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(lean_object* v_a_5179_, lean_object* v_a_5180_){
_start:
{
if (lean_obj_tag(v_a_5179_) == 0)
{
lean_object* v___x_5181_; 
v___x_5181_ = l_List_reverse___redArg(v_a_5180_);
return v___x_5181_;
}
else
{
lean_object* v_head_5182_; lean_object* v_tail_5183_; lean_object* v___x_5185_; uint8_t v_isShared_5186_; uint8_t v_isSharedCheck_5199_; 
v_head_5182_ = lean_ctor_get(v_a_5179_, 0);
v_tail_5183_ = lean_ctor_get(v_a_5179_, 1);
v_isSharedCheck_5199_ = !lean_is_exclusive(v_a_5179_);
if (v_isSharedCheck_5199_ == 0)
{
v___x_5185_ = v_a_5179_;
v_isShared_5186_ = v_isSharedCheck_5199_;
goto v_resetjp_5184_;
}
else
{
lean_inc(v_tail_5183_);
lean_inc(v_head_5182_);
lean_dec(v_a_5179_);
v___x_5185_ = lean_box(0);
v_isShared_5186_ = v_isSharedCheck_5199_;
goto v_resetjp_5184_;
}
v_resetjp_5184_:
{
uint8_t v___y_5188_; uint8_t v___x_5194_; uint8_t v___x_5195_; uint8_t v___x_5196_; 
v___x_5194_ = 128;
v___x_5195_ = lean_unbox(v_head_5182_);
v___x_5196_ = lean_uint8_dec_lt(v___x_5195_, v___x_5194_);
if (v___x_5196_ == 0)
{
uint8_t v___x_5197_; 
lean_dec(v_head_5182_);
v___x_5197_ = 63;
v___y_5188_ = v___x_5197_;
goto v___jp_5187_;
}
else
{
uint8_t v___x_5198_; 
v___x_5198_ = lean_unbox(v_head_5182_);
lean_dec(v_head_5182_);
v___y_5188_ = v___x_5198_;
goto v___jp_5187_;
}
v___jp_5187_:
{
lean_object* v___x_5189_; lean_object* v___x_5191_; 
v___x_5189_ = lean_box(v___y_5188_);
if (v_isShared_5186_ == 0)
{
lean_ctor_set(v___x_5185_, 1, v_a_5180_);
lean_ctor_set(v___x_5185_, 0, v___x_5189_);
v___x_5191_ = v___x_5185_;
goto v_reusejp_5190_;
}
else
{
lean_object* v_reuseFailAlloc_5193_; 
v_reuseFailAlloc_5193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5193_, 0, v___x_5189_);
lean_ctor_set(v_reuseFailAlloc_5193_, 1, v_a_5180_);
v___x_5191_ = v_reuseFailAlloc_5193_;
goto v_reusejp_5190_;
}
v_reusejp_5190_:
{
v_a_5179_ = v_tail_5183_;
v_a_5180_ = v___x_5191_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(lean_object* v_b_5202_, lean_object* v_pos_5203_, lean_object* v_n_5204_){
_start:
{
lean_object* v___x_5205_; lean_object* v___x_5206_; uint8_t v___x_5207_; 
v___x_5205_ = lean_byte_array_size(v_b_5202_);
v___x_5206_ = lean_nat_add(v_pos_5203_, v_n_5204_);
v___x_5207_ = lean_nat_dec_lt(v___x_5205_, v___x_5206_);
if (v___x_5207_ == 0)
{
lean_object* v___x_5208_; uint8_t v___x_5209_; 
v___x_5208_ = l_ByteArray_extract(v_b_5202_, v_pos_5203_, v___x_5206_);
lean_dec(v___x_5206_);
v___x_5209_ = lean_string_validate_utf8(v___x_5208_);
if (v___x_5209_ == 0)
{
lean_object* v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; uint8_t v___x_5214_; 
v___x_5210_ = l_ByteArray_toList(v___x_5208_);
lean_dec_ref(v___x_5208_);
v___x_5211_ = lean_box(0);
v___x_5212_ = l_List_mapTR_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__0(v___x_5210_, v___x_5211_);
v___x_5213_ = l_List_toByteArray(v___x_5212_);
lean_dec(v___x_5212_);
v___x_5214_ = lean_string_validate_utf8(v___x_5213_);
if (v___x_5214_ == 0)
{
lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; 
lean_dec_ref(v___x_5213_);
v___x_5215_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0_spec__1_spec__2___closed__10);
v___x_5216_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5215_);
v___x_5217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5217_, 0, v___x_5216_);
return v___x_5217_;
}
else
{
lean_object* v___x_5218_; lean_object* v___x_5219_; 
v___x_5218_ = lean_string_from_utf8_unchecked(v___x_5213_);
v___x_5219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5219_, 0, v___x_5218_);
return v___x_5219_;
}
}
else
{
lean_object* v___x_5220_; lean_object* v___x_5221_; 
v___x_5220_ = lean_string_from_utf8_unchecked(v___x_5208_);
v___x_5221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5221_, 0, v___x_5220_);
return v___x_5221_;
}
}
else
{
lean_object* v___x_5222_; 
lean_dec(v___x_5206_);
lean_dec(v_pos_5203_);
v___x_5222_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___closed__0));
return v___x_5222_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1___boxed(lean_object* v_b_5223_, lean_object* v_pos_5224_, lean_object* v_n_5225_){
_start:
{
lean_object* v_res_5226_; 
v_res_5226_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5223_, v_pos_5224_, v_n_5225_);
lean_dec(v_n_5225_);
lean_dec_ref(v_b_5223_);
return v_res_5226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(lean_object* v_b_5227_, lean_object* v_range_5228_, lean_object* v_b_5229_, lean_object* v_i_5230_){
_start:
{
lean_object* v_stop_5231_; lean_object* v_step_5232_; uint8_t v___x_5233_; 
v_stop_5231_ = lean_ctor_get(v_range_5228_, 1);
v_step_5232_ = lean_ctor_get(v_range_5228_, 2);
v___x_5233_ = lean_nat_dec_lt(v_i_5230_, v_stop_5231_);
if (v___x_5233_ == 0)
{
lean_object* v___x_5234_; 
lean_dec(v_i_5230_);
v___x_5234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5234_, 0, v_b_5229_);
return v___x_5234_;
}
else
{
lean_object* v_fst_5235_; lean_object* v_snd_5236_; lean_object* v___x_5238_; uint8_t v_isShared_5239_; uint8_t v_isSharedCheck_5292_; 
v_fst_5235_ = lean_ctor_get(v_b_5229_, 0);
v_snd_5236_ = lean_ctor_get(v_b_5229_, 1);
v_isSharedCheck_5292_ = !lean_is_exclusive(v_b_5229_);
if (v_isSharedCheck_5292_ == 0)
{
v___x_5238_ = v_b_5229_;
v_isShared_5239_ = v_isSharedCheck_5292_;
goto v_resetjp_5237_;
}
else
{
lean_inc(v_snd_5236_);
lean_inc(v_fst_5235_);
lean_dec(v_b_5229_);
v___x_5238_ = lean_box(0);
v_isShared_5239_ = v_isSharedCheck_5292_;
goto v_resetjp_5237_;
}
v_resetjp_5237_:
{
lean_object* v___x_5240_; 
v___x_5240_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5227_, v_fst_5235_);
if (lean_obj_tag(v___x_5240_) == 0)
{
lean_object* v_a_5241_; lean_object* v___x_5243_; uint8_t v_isShared_5244_; uint8_t v_isSharedCheck_5248_; 
lean_del_object(v___x_5238_);
lean_dec(v_snd_5236_);
lean_dec(v_fst_5235_);
lean_dec(v_i_5230_);
v_a_5241_ = lean_ctor_get(v___x_5240_, 0);
v_isSharedCheck_5248_ = !lean_is_exclusive(v___x_5240_);
if (v_isSharedCheck_5248_ == 0)
{
v___x_5243_ = v___x_5240_;
v_isShared_5244_ = v_isSharedCheck_5248_;
goto v_resetjp_5242_;
}
else
{
lean_inc(v_a_5241_);
lean_dec(v___x_5240_);
v___x_5243_ = lean_box(0);
v_isShared_5244_ = v_isSharedCheck_5248_;
goto v_resetjp_5242_;
}
v_resetjp_5242_:
{
lean_object* v___x_5246_; 
if (v_isShared_5244_ == 0)
{
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
return v___x_5246_;
}
}
}
else
{
lean_object* v_a_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; 
v_a_5249_ = lean_ctor_get(v___x_5240_, 0);
lean_inc(v_a_5249_);
lean_dec_ref_known(v___x_5240_, 1);
v___x_5250_ = lean_unsigned_to_nat(8u);
v___x_5251_ = lean_nat_add(v_fst_5235_, v___x_5250_);
lean_dec(v_fst_5235_);
lean_inc(v___x_5251_);
v___x_5252_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5227_, v___x_5251_, v_a_5249_);
if (lean_obj_tag(v___x_5252_) == 0)
{
lean_object* v_a_5253_; lean_object* v___x_5255_; uint8_t v_isShared_5256_; uint8_t v_isSharedCheck_5260_; 
lean_dec(v___x_5251_);
lean_dec(v_a_5249_);
lean_del_object(v___x_5238_);
lean_dec(v_snd_5236_);
lean_dec(v_i_5230_);
v_a_5253_ = lean_ctor_get(v___x_5252_, 0);
v_isSharedCheck_5260_ = !lean_is_exclusive(v___x_5252_);
if (v_isSharedCheck_5260_ == 0)
{
v___x_5255_ = v___x_5252_;
v_isShared_5256_ = v_isSharedCheck_5260_;
goto v_resetjp_5254_;
}
else
{
lean_inc(v_a_5253_);
lean_dec(v___x_5252_);
v___x_5255_ = lean_box(0);
v_isShared_5256_ = v_isSharedCheck_5260_;
goto v_resetjp_5254_;
}
v_resetjp_5254_:
{
lean_object* v___x_5258_; 
if (v_isShared_5256_ == 0)
{
v___x_5258_ = v___x_5255_;
goto v_reusejp_5257_;
}
else
{
lean_object* v_reuseFailAlloc_5259_; 
v_reuseFailAlloc_5259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5259_, 0, v_a_5253_);
v___x_5258_ = v_reuseFailAlloc_5259_;
goto v_reusejp_5257_;
}
v_reusejp_5257_:
{
return v___x_5258_;
}
}
}
else
{
lean_object* v_a_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; 
v_a_5261_ = lean_ctor_get(v___x_5252_, 0);
lean_inc(v_a_5261_);
lean_dec_ref_known(v___x_5252_, 1);
v___x_5262_ = lean_nat_add(v___x_5251_, v_a_5249_);
lean_dec(v_a_5249_);
lean_dec(v___x_5251_);
v___x_5263_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5227_, v___x_5262_);
if (lean_obj_tag(v___x_5263_) == 0)
{
lean_object* v_a_5264_; lean_object* v___x_5266_; uint8_t v_isShared_5267_; uint8_t v_isSharedCheck_5271_; 
lean_dec(v___x_5262_);
lean_dec(v_a_5261_);
lean_del_object(v___x_5238_);
lean_dec(v_snd_5236_);
lean_dec(v_i_5230_);
v_a_5264_ = lean_ctor_get(v___x_5263_, 0);
v_isSharedCheck_5271_ = !lean_is_exclusive(v___x_5263_);
if (v_isSharedCheck_5271_ == 0)
{
v___x_5266_ = v___x_5263_;
v_isShared_5267_ = v_isSharedCheck_5271_;
goto v_resetjp_5265_;
}
else
{
lean_inc(v_a_5264_);
lean_dec(v___x_5263_);
v___x_5266_ = lean_box(0);
v_isShared_5267_ = v_isSharedCheck_5271_;
goto v_resetjp_5265_;
}
v_resetjp_5265_:
{
lean_object* v___x_5269_; 
if (v_isShared_5267_ == 0)
{
v___x_5269_ = v___x_5266_;
goto v_reusejp_5268_;
}
else
{
lean_object* v_reuseFailAlloc_5270_; 
v_reuseFailAlloc_5270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5270_, 0, v_a_5264_);
v___x_5269_ = v_reuseFailAlloc_5270_;
goto v_reusejp_5268_;
}
v_reusejp_5268_:
{
return v___x_5269_;
}
}
}
else
{
lean_object* v_a_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; 
v_a_5272_ = lean_ctor_get(v___x_5263_, 0);
lean_inc(v_a_5272_);
lean_dec_ref_known(v___x_5263_, 1);
v___x_5273_ = lean_nat_add(v___x_5262_, v___x_5250_);
lean_dec(v___x_5262_);
lean_inc(v___x_5273_);
v___x_5274_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___lam__1(v_b_5227_, v___x_5273_, v_a_5272_);
if (lean_obj_tag(v___x_5274_) == 0)
{
lean_object* v_a_5275_; lean_object* v___x_5277_; uint8_t v_isShared_5278_; uint8_t v_isSharedCheck_5282_; 
lean_dec(v___x_5273_);
lean_dec(v_a_5272_);
lean_dec(v_a_5261_);
lean_del_object(v___x_5238_);
lean_dec(v_snd_5236_);
lean_dec(v_i_5230_);
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
v___x_5280_ = v___x_5277_;
goto v_reusejp_5279_;
}
else
{
lean_object* v_reuseFailAlloc_5281_; 
v_reuseFailAlloc_5281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5281_, 0, v_a_5275_);
v___x_5280_ = v_reuseFailAlloc_5281_;
goto v_reusejp_5279_;
}
v_reusejp_5279_:
{
return v___x_5280_;
}
}
}
else
{
lean_object* v_a_5283_; lean_object* v___x_5284_; lean_object* v___x_5286_; 
v_a_5283_ = lean_ctor_get(v___x_5274_, 0);
lean_inc(v_a_5283_);
lean_dec_ref_known(v___x_5274_, 1);
v___x_5284_ = lean_nat_add(v___x_5273_, v_a_5272_);
lean_dec(v_a_5272_);
lean_dec(v___x_5273_);
if (v_isShared_5239_ == 0)
{
lean_ctor_set(v___x_5238_, 1, v_a_5283_);
lean_ctor_set(v___x_5238_, 0, v_a_5261_);
v___x_5286_ = v___x_5238_;
goto v_reusejp_5285_;
}
else
{
lean_object* v_reuseFailAlloc_5291_; 
v_reuseFailAlloc_5291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5291_, 0, v_a_5261_);
lean_ctor_set(v_reuseFailAlloc_5291_, 1, v_a_5283_);
v___x_5286_ = v_reuseFailAlloc_5291_;
goto v_reusejp_5285_;
}
v_reusejp_5285_:
{
lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; 
v___x_5287_ = lean_array_push(v_snd_5236_, v___x_5286_);
v___x_5288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5288_, 0, v___x_5284_);
lean_ctor_set(v___x_5288_, 1, v___x_5287_);
v___x_5289_ = lean_nat_add(v_i_5230_, v_step_5232_);
lean_dec(v_i_5230_);
v_b_5229_ = v___x_5288_;
v_i_5230_ = v___x_5289_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg___boxed(lean_object* v_b_5293_, lean_object* v_range_5294_, lean_object* v_b_5295_, lean_object* v_i_5296_){
_start:
{
lean_object* v_res_5297_; 
v_res_5297_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5293_, v_range_5294_, v_b_5295_, v_i_5296_);
lean_dec_ref(v_range_5294_);
lean_dec_ref(v_b_5293_);
return v_res_5297_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(lean_object* v_b_5301_){
_start:
{
lean_object* v___x_5302_; lean_object* v___x_5303_; 
v___x_5302_ = lean_unsigned_to_nat(0u);
v___x_5303_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5301_, v___x_5302_);
if (lean_obj_tag(v___x_5303_) == 0)
{
lean_object* v_a_5304_; lean_object* v___x_5306_; uint8_t v_isShared_5307_; uint8_t v_isSharedCheck_5311_; 
v_a_5304_ = lean_ctor_get(v___x_5303_, 0);
v_isSharedCheck_5311_ = !lean_is_exclusive(v___x_5303_);
if (v_isSharedCheck_5311_ == 0)
{
v___x_5306_ = v___x_5303_;
v_isShared_5307_ = v_isSharedCheck_5311_;
goto v_resetjp_5305_;
}
else
{
lean_inc(v_a_5304_);
lean_dec(v___x_5303_);
v___x_5306_ = lean_box(0);
v_isShared_5307_ = v_isSharedCheck_5311_;
goto v_resetjp_5305_;
}
v_resetjp_5305_:
{
lean_object* v___x_5309_; 
if (v_isShared_5307_ == 0)
{
v___x_5309_ = v___x_5306_;
goto v_reusejp_5308_;
}
else
{
lean_object* v_reuseFailAlloc_5310_; 
v_reuseFailAlloc_5310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5310_, 0, v_a_5304_);
v___x_5309_ = v_reuseFailAlloc_5310_;
goto v_reusejp_5308_;
}
v_reusejp_5308_:
{
return v___x_5309_;
}
}
}
else
{
lean_object* v_a_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; 
v_a_5312_ = lean_ctor_get(v___x_5303_, 0);
lean_inc(v_a_5312_);
lean_dec_ref_known(v___x_5303_, 1);
v___x_5313_ = lean_unsigned_to_nat(8u);
v___x_5314_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___lam__0(v_b_5301_, v___x_5313_);
if (lean_obj_tag(v___x_5314_) == 0)
{
lean_object* v_a_5315_; lean_object* v___x_5317_; uint8_t v_isShared_5318_; uint8_t v_isSharedCheck_5322_; 
lean_dec(v_a_5312_);
v_a_5315_ = lean_ctor_get(v___x_5314_, 0);
v_isSharedCheck_5322_ = !lean_is_exclusive(v___x_5314_);
if (v_isSharedCheck_5322_ == 0)
{
v___x_5317_ = v___x_5314_;
v_isShared_5318_ = v_isSharedCheck_5322_;
goto v_resetjp_5316_;
}
else
{
lean_inc(v_a_5315_);
lean_dec(v___x_5314_);
v___x_5317_ = lean_box(0);
v_isShared_5318_ = v_isSharedCheck_5322_;
goto v_resetjp_5316_;
}
v_resetjp_5316_:
{
lean_object* v___x_5320_; 
if (v_isShared_5318_ == 0)
{
v___x_5320_ = v___x_5317_;
goto v_reusejp_5319_;
}
else
{
lean_object* v_reuseFailAlloc_5321_; 
v_reuseFailAlloc_5321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5321_, 0, v_a_5315_);
v___x_5320_ = v_reuseFailAlloc_5321_;
goto v_reusejp_5319_;
}
v_reusejp_5319_:
{
return v___x_5320_;
}
}
}
else
{
lean_object* v_a_5323_; lean_object* v___x_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; 
v_a_5323_ = lean_ctor_get(v___x_5314_, 0);
lean_inc(v_a_5323_);
lean_dec_ref_known(v___x_5314_, 1);
v___x_5324_ = lean_unsigned_to_nat(1u);
v___x_5325_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5325_, 0, v___x_5302_);
lean_ctor_set(v___x_5325_, 1, v_a_5323_);
lean_ctor_set(v___x_5325_, 2, v___x_5324_);
v___x_5326_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___closed__0));
v___x_5327_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5301_, v___x_5325_, v___x_5326_, v___x_5302_);
lean_dec_ref_known(v___x_5325_, 3);
if (lean_obj_tag(v___x_5327_) == 0)
{
lean_object* v_a_5328_; lean_object* v___x_5330_; uint8_t v_isShared_5331_; uint8_t v_isSharedCheck_5335_; 
lean_dec(v_a_5312_);
v_a_5328_ = lean_ctor_get(v___x_5327_, 0);
v_isSharedCheck_5335_ = !lean_is_exclusive(v___x_5327_);
if (v_isSharedCheck_5335_ == 0)
{
v___x_5330_ = v___x_5327_;
v_isShared_5331_ = v_isSharedCheck_5335_;
goto v_resetjp_5329_;
}
else
{
lean_inc(v_a_5328_);
lean_dec(v___x_5327_);
v___x_5330_ = lean_box(0);
v_isShared_5331_ = v_isSharedCheck_5335_;
goto v_resetjp_5329_;
}
v_resetjp_5329_:
{
lean_object* v___x_5333_; 
if (v_isShared_5331_ == 0)
{
v___x_5333_ = v___x_5330_;
goto v_reusejp_5332_;
}
else
{
lean_object* v_reuseFailAlloc_5334_; 
v_reuseFailAlloc_5334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5334_, 0, v_a_5328_);
v___x_5333_ = v_reuseFailAlloc_5334_;
goto v_reusejp_5332_;
}
v_reusejp_5332_:
{
return v___x_5333_;
}
}
}
else
{
lean_object* v_a_5336_; lean_object* v___x_5338_; uint8_t v_isShared_5339_; uint8_t v_isSharedCheck_5350_; 
v_a_5336_ = lean_ctor_get(v___x_5327_, 0);
v_isSharedCheck_5350_ = !lean_is_exclusive(v___x_5327_);
if (v_isSharedCheck_5350_ == 0)
{
v___x_5338_ = v___x_5327_;
v_isShared_5339_ = v_isSharedCheck_5350_;
goto v_resetjp_5337_;
}
else
{
lean_inc(v_a_5336_);
lean_dec(v___x_5327_);
v___x_5338_ = lean_box(0);
v_isShared_5339_ = v_isSharedCheck_5350_;
goto v_resetjp_5337_;
}
v_resetjp_5337_:
{
lean_object* v_fst_5340_; lean_object* v_snd_5341_; uint16_t v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5348_; 
v_fst_5340_ = lean_ctor_get(v_a_5336_, 0);
lean_inc(v_fst_5340_);
v_snd_5341_ = lean_ctor_get(v_a_5336_, 1);
lean_inc(v_snd_5341_);
lean_dec(v_a_5336_);
v___x_5342_ = lean_uint16_of_nat(v_a_5312_);
lean_dec(v_a_5312_);
v___x_5343_ = lean_byte_array_size(v_b_5301_);
v___x_5344_ = l_ByteArray_extract(v_b_5301_, v_fst_5340_, v___x_5343_);
v___x_5345_ = lean_box(0);
v___x_5346_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5346_, 0, v_snd_5341_);
lean_ctor_set(v___x_5346_, 1, v___x_5344_);
lean_ctor_set(v___x_5346_, 2, v___x_5345_);
lean_ctor_set_uint16(v___x_5346_, sizeof(void*)*3, v___x_5342_);
if (v_isShared_5339_ == 0)
{
lean_ctor_set(v___x_5338_, 0, v___x_5346_);
v___x_5348_ = v___x_5338_;
goto v_reusejp_5347_;
}
else
{
lean_object* v_reuseFailAlloc_5349_; 
v_reuseFailAlloc_5349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5349_, 0, v___x_5346_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse___boxed(lean_object* v_b_5351_){
_start:
{
lean_object* v_res_5352_; 
v_res_5352_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_b_5351_);
lean_dec_ref(v_b_5351_);
return v_res_5352_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(lean_object* v_b_5353_, lean_object* v_range_5354_, lean_object* v_b_5355_, lean_object* v_i_5356_, lean_object* v_hs_5357_, lean_object* v_hl_5358_){
_start:
{
lean_object* v___x_5359_; 
v___x_5359_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___redArg(v_b_5353_, v_range_5354_, v_b_5355_, v_i_5356_);
return v___x_5359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2___boxed(lean_object* v_b_5360_, lean_object* v_range_5361_, lean_object* v_b_5362_, lean_object* v_i_5363_, lean_object* v_hs_5364_, lean_object* v_hl_5365_){
_start:
{
lean_object* v_res_5366_; 
v_res_5366_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse_spec__2(v_b_5360_, v_range_5361_, v_b_5362_, v_i_5363_, v_hs_5364_, v_hl_5365_);
lean_dec_ref(v_range_5361_);
lean_dec_ref(v_b_5360_);
return v_res_5366_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(uint16_t v___y_5367_, lean_object* v_headers_5368_, lean_object* v_x_5369_){
_start:
{
if (lean_obj_tag(v_x_5369_) == 0)
{
lean_object* v_a_5371_; lean_object* v___x_5373_; uint8_t v_isShared_5374_; uint8_t v_isSharedCheck_5379_; 
lean_dec_ref(v_headers_5368_);
v_a_5371_ = lean_ctor_get(v_x_5369_, 0);
v_isSharedCheck_5379_ = !lean_is_exclusive(v_x_5369_);
if (v_isSharedCheck_5379_ == 0)
{
v___x_5373_ = v_x_5369_;
v_isShared_5374_ = v_isSharedCheck_5379_;
goto v_resetjp_5372_;
}
else
{
lean_inc(v_a_5371_);
lean_dec(v_x_5369_);
v___x_5373_ = lean_box(0);
v_isShared_5374_ = v_isSharedCheck_5379_;
goto v_resetjp_5372_;
}
v_resetjp_5372_:
{
lean_object* v___x_5376_; 
if (v_isShared_5374_ == 0)
{
v___x_5376_ = v___x_5373_;
goto v_reusejp_5375_;
}
else
{
lean_object* v_reuseFailAlloc_5378_; 
v_reuseFailAlloc_5378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5378_, 0, v_a_5371_);
v___x_5376_ = v_reuseFailAlloc_5378_;
goto v_reusejp_5375_;
}
v_reusejp_5375_:
{
lean_object* v___x_5377_; 
v___x_5377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5377_, 0, v___x_5376_);
return v___x_5377_;
}
}
}
else
{
lean_object* v_a_5380_; lean_object* v___x_5382_; uint8_t v_isShared_5383_; uint8_t v_isSharedCheck_5390_; 
v_a_5380_ = lean_ctor_get(v_x_5369_, 0);
v_isSharedCheck_5390_ = !lean_is_exclusive(v_x_5369_);
if (v_isSharedCheck_5390_ == 0)
{
v___x_5382_ = v_x_5369_;
v_isShared_5383_ = v_isSharedCheck_5390_;
goto v_resetjp_5381_;
}
else
{
lean_inc(v_a_5380_);
lean_dec(v_x_5369_);
v___x_5382_ = lean_box(0);
v_isShared_5383_ = v_isSharedCheck_5390_;
goto v_resetjp_5381_;
}
v_resetjp_5381_:
{
lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5387_; 
v___x_5384_ = lean_box(0);
v___x_5385_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5385_, 0, v_headers_5368_);
lean_ctor_set(v___x_5385_, 1, v_a_5380_);
lean_ctor_set(v___x_5385_, 2, v___x_5384_);
lean_ctor_set_uint16(v___x_5385_, sizeof(void*)*3, v___y_5367_);
if (v_isShared_5383_ == 0)
{
lean_ctor_set(v___x_5382_, 0, v___x_5385_);
v___x_5387_ = v___x_5382_;
goto v_reusejp_5386_;
}
else
{
lean_object* v_reuseFailAlloc_5389_; 
v_reuseFailAlloc_5389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5389_, 0, v___x_5385_);
v___x_5387_ = v_reuseFailAlloc_5389_;
goto v_reusejp_5386_;
}
v_reusejp_5386_:
{
lean_object* v___x_5388_; 
v___x_5388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5388_, 0, v___x_5387_);
return v___x_5388_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed(lean_object* v___y_5391_, lean_object* v_headers_5392_, lean_object* v_x_5393_, lean_object* v___y_5394_){
_start:
{
uint16_t v___y_2853__boxed_5395_; lean_object* v_res_5396_; 
v___y_2853__boxed_5395_ = lean_unbox(v___y_5391_);
v_res_5396_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0(v___y_2853__boxed_5395_, v_headers_5392_, v_x_5393_);
return v_res_5396_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(lean_object* v_a_5397_, lean_object* v___f_5398_, lean_object* v_x_5399_){
_start:
{
if (lean_obj_tag(v_x_5399_) == 0)
{
lean_object* v_a_5401_; lean_object* v___x_5403_; uint8_t v_isShared_5404_; uint8_t v_isSharedCheck_5409_; 
lean_dec_ref(v___f_5398_);
lean_dec(v_a_5397_);
v_a_5401_ = lean_ctor_get(v_x_5399_, 0);
v_isSharedCheck_5409_ = !lean_is_exclusive(v_x_5399_);
if (v_isSharedCheck_5409_ == 0)
{
v___x_5403_ = v_x_5399_;
v_isShared_5404_ = v_isSharedCheck_5409_;
goto v_resetjp_5402_;
}
else
{
lean_inc(v_a_5401_);
lean_dec(v_x_5399_);
v___x_5403_ = lean_box(0);
v_isShared_5404_ = v_isSharedCheck_5409_;
goto v_resetjp_5402_;
}
v_resetjp_5402_:
{
lean_object* v___x_5406_; 
if (v_isShared_5404_ == 0)
{
v___x_5406_ = v___x_5403_;
goto v_reusejp_5405_;
}
else
{
lean_object* v_reuseFailAlloc_5408_; 
v_reuseFailAlloc_5408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5408_, 0, v_a_5401_);
v___x_5406_ = v_reuseFailAlloc_5408_;
goto v_reusejp_5405_;
}
v_reusejp_5405_:
{
lean_object* v___x_5407_; 
v___x_5407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5407_, 0, v___x_5406_);
return v___x_5407_;
}
}
}
else
{
lean_object* v_a_5410_; lean_object* v___x_5412_; uint8_t v_isShared_5413_; uint8_t v_isSharedCheck_5434_; 
v_a_5410_ = lean_ctor_get(v_x_5399_, 0);
v_isSharedCheck_5434_ = !lean_is_exclusive(v_x_5399_);
if (v_isSharedCheck_5434_ == 0)
{
v___x_5412_ = v_x_5399_;
v_isShared_5413_ = v_isSharedCheck_5434_;
goto v_resetjp_5411_;
}
else
{
lean_inc(v_a_5410_);
lean_dec(v_x_5399_);
v___x_5412_ = lean_box(0);
v_isShared_5413_ = v_isSharedCheck_5434_;
goto v_resetjp_5411_;
}
v_resetjp_5411_:
{
lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; uint8_t v___x_5420_; lean_object* v_val_5422_; lean_object* v___x_5425_; 
v___x_5414_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5415_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5415_, 0, v_a_5397_);
lean_ctor_set(v___x_5415_, 1, v___x_5414_);
v___x_5416_ = lean_unsigned_to_nat(1u);
v___x_5417_ = lean_mk_empty_array_with_capacity(v___x_5416_);
v___x_5418_ = lean_array_push(v___x_5417_, v___x_5415_);
v___x_5419_ = lean_unsigned_to_nat(0u);
v___x_5420_ = 0;
v___x_5425_ = l_Lasm_JS_Value_new___at___00Lasm_Fetch_jsFetchHandler_spec__0(v_a_5410_, v___x_5418_);
if (lean_obj_tag(v___x_5425_) == 0)
{
lean_object* v_a_5426_; lean_object* v___x_5428_; 
v_a_5426_ = lean_ctor_get(v___x_5425_, 0);
lean_inc(v_a_5426_);
lean_dec_ref_known(v___x_5425_, 1);
if (v_isShared_5413_ == 0)
{
lean_ctor_set(v___x_5412_, 0, v_a_5426_);
v___x_5428_ = v___x_5412_;
goto v_reusejp_5427_;
}
else
{
lean_object* v_reuseFailAlloc_5429_; 
v_reuseFailAlloc_5429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5429_, 0, v_a_5426_);
v___x_5428_ = v_reuseFailAlloc_5429_;
goto v_reusejp_5427_;
}
v_reusejp_5427_:
{
v_val_5422_ = v___x_5428_;
goto v___jp_5421_;
}
}
else
{
lean_object* v_a_5430_; lean_object* v___x_5432_; 
v_a_5430_ = lean_ctor_get(v___x_5425_, 0);
lean_inc(v_a_5430_);
lean_dec_ref_known(v___x_5425_, 1);
if (v_isShared_5413_ == 0)
{
lean_ctor_set_tag(v___x_5412_, 0);
lean_ctor_set(v___x_5412_, 0, v_a_5430_);
v___x_5432_ = v___x_5412_;
goto v_reusejp_5431_;
}
else
{
lean_object* v_reuseFailAlloc_5433_; 
v_reuseFailAlloc_5433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5433_, 0, v_a_5430_);
v___x_5432_ = v_reuseFailAlloc_5433_;
goto v_reusejp_5431_;
}
v_reusejp_5431_:
{
v_val_5422_ = v___x_5432_;
goto v___jp_5421_;
}
}
v___jp_5421_:
{
lean_object* v___x_5423_; lean_object* v___x_5424_; 
v___x_5423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5423_, 0, v_val_5422_);
v___x_5424_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5419_, v___x_5420_, v___x_5423_, v___f_5398_);
return v___x_5424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed(lean_object* v_a_5435_, lean_object* v___f_5436_, lean_object* v_x_5437_, lean_object* v___y_5438_){
_start:
{
lean_object* v_res_5439_; 
v_res_5439_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1(v_a_5435_, v___f_5436_, v_x_5437_);
return v_res_5439_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(lean_object* v___f_5440_, lean_object* v_a_5441_, lean_object* v_x_5442_){
_start:
{
if (lean_obj_tag(v_x_5442_) == 0)
{
lean_object* v_a_5444_; lean_object* v___x_5446_; uint8_t v_isShared_5447_; uint8_t v_isSharedCheck_5452_; 
lean_dec(v_a_5441_);
lean_dec_ref(v___f_5440_);
v_a_5444_ = lean_ctor_get(v_x_5442_, 0);
v_isSharedCheck_5452_ = !lean_is_exclusive(v_x_5442_);
if (v_isSharedCheck_5452_ == 0)
{
v___x_5446_ = v_x_5442_;
v_isShared_5447_ = v_isSharedCheck_5452_;
goto v_resetjp_5445_;
}
else
{
lean_inc(v_a_5444_);
lean_dec(v_x_5442_);
v___x_5446_ = lean_box(0);
v_isShared_5447_ = v_isSharedCheck_5452_;
goto v_resetjp_5445_;
}
v_resetjp_5445_:
{
lean_object* v___x_5449_; 
if (v_isShared_5447_ == 0)
{
v___x_5449_ = v___x_5446_;
goto v_reusejp_5448_;
}
else
{
lean_object* v_reuseFailAlloc_5451_; 
v_reuseFailAlloc_5451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5451_, 0, v_a_5444_);
v___x_5449_ = v_reuseFailAlloc_5451_;
goto v_reusejp_5448_;
}
v_reusejp_5448_:
{
lean_object* v___x_5450_; 
v___x_5450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5450_, 0, v___x_5449_);
return v___x_5450_;
}
}
}
else
{
lean_object* v_a_5453_; lean_object* v___x_5455_; uint8_t v_isShared_5456_; uint8_t v_isSharedCheck_5474_; 
v_a_5453_ = lean_ctor_get(v_x_5442_, 0);
v_isSharedCheck_5474_ = !lean_is_exclusive(v_x_5442_);
if (v_isSharedCheck_5474_ == 0)
{
v___x_5455_ = v_x_5442_;
v_isShared_5456_ = v_isSharedCheck_5474_;
goto v_resetjp_5454_;
}
else
{
lean_inc(v_a_5453_);
lean_dec(v_x_5442_);
v___x_5455_ = lean_box(0);
v_isShared_5456_ = v_isSharedCheck_5474_;
goto v_resetjp_5454_;
}
v_resetjp_5454_:
{
lean_object* v___f_5457_; lean_object* v___x_5458_; lean_object* v___x_5459_; uint8_t v___x_5460_; lean_object* v_val_5462_; lean_object* v___x_5465_; 
v___f_5457_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5457_, 0, v_a_5453_);
lean_closure_set(v___f_5457_, 1, v___f_5440_);
v___x_5458_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__1));
v___x_5459_ = lean_unsigned_to_nat(0u);
v___x_5460_ = 0;
v___x_5465_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5441_, v___x_5458_);
if (lean_obj_tag(v___x_5465_) == 0)
{
lean_object* v_a_5466_; lean_object* v___x_5468_; 
v_a_5466_ = lean_ctor_get(v___x_5465_, 0);
lean_inc(v_a_5466_);
lean_dec_ref_known(v___x_5465_, 1);
if (v_isShared_5456_ == 0)
{
lean_ctor_set(v___x_5455_, 0, v_a_5466_);
v___x_5468_ = v___x_5455_;
goto v_reusejp_5467_;
}
else
{
lean_object* v_reuseFailAlloc_5469_; 
v_reuseFailAlloc_5469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5469_, 0, v_a_5466_);
v___x_5468_ = v_reuseFailAlloc_5469_;
goto v_reusejp_5467_;
}
v_reusejp_5467_:
{
v_val_5462_ = v___x_5468_;
goto v___jp_5461_;
}
}
else
{
lean_object* v_a_5470_; lean_object* v___x_5472_; 
v_a_5470_ = lean_ctor_get(v___x_5465_, 0);
lean_inc(v_a_5470_);
lean_dec_ref_known(v___x_5465_, 1);
if (v_isShared_5456_ == 0)
{
lean_ctor_set_tag(v___x_5455_, 0);
lean_ctor_set(v___x_5455_, 0, v_a_5470_);
v___x_5472_ = v___x_5455_;
goto v_reusejp_5471_;
}
else
{
lean_object* v_reuseFailAlloc_5473_; 
v_reuseFailAlloc_5473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5473_, 0, v_a_5470_);
v___x_5472_ = v_reuseFailAlloc_5473_;
goto v_reusejp_5471_;
}
v_reusejp_5471_:
{
v_val_5462_ = v___x_5472_;
goto v___jp_5461_;
}
}
v___jp_5461_:
{
lean_object* v___x_5463_; lean_object* v___x_5464_; 
v___x_5463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5463_, 0, v_val_5462_);
v___x_5464_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5459_, v___x_5460_, v___x_5463_, v___f_5457_);
return v___x_5464_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed(lean_object* v___f_5475_, lean_object* v_a_5476_, lean_object* v_x_5477_, lean_object* v___y_5478_){
_start:
{
lean_object* v_res_5479_; 
v_res_5479_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2(v___f_5475_, v_a_5476_, v_x_5477_);
return v_res_5479_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(uint16_t v___y_5480_, lean_object* v_a_5481_, lean_object* v_a_5482_, lean_object* v_headers_5483_){
_start:
{
lean_object* v___x_5485_; lean_object* v___f_5486_; lean_object* v___f_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; uint8_t v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; 
v___x_5485_ = lean_box(v___y_5480_);
v___f_5486_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__0___boxed), 4, 2);
lean_closure_set(v___f_5486_, 0, v___x_5485_);
lean_closure_set(v___f_5486_, 1, v_headers_5483_);
v___f_5487_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5487_, 0, v___f_5486_);
lean_closure_set(v___f_5487_, 1, v_a_5481_);
v___x_5488_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__6___closed__0));
v___x_5489_ = lean_unsigned_to_nat(0u);
v___x_5490_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsChunks___closed__2));
v___x_5491_ = 0;
v___x_5492_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_5482_, v___x_5488_, v___x_5490_);
v___x_5493_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5489_, v___x_5491_, v___x_5492_, v___f_5487_);
return v___x_5493_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed(lean_object* v___y_5494_, lean_object* v_a_5495_, lean_object* v_a_5496_, lean_object* v_headers_5497_, lean_object* v___y_5498_){
_start:
{
uint16_t v___y_3061__boxed_5499_; lean_object* v_res_5500_; 
v___y_3061__boxed_5499_ = lean_unbox(v___y_5494_);
v_res_5500_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3(v___y_3061__boxed_5499_, v_a_5495_, v_a_5496_, v_headers_5497_);
return v_res_5500_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(lean_object* v___f_5501_, lean_object* v_x_5502_){
_start:
{
if (lean_obj_tag(v_x_5502_) == 0)
{
lean_object* v_a_5504_; lean_object* v___x_5506_; uint8_t v_isShared_5507_; uint8_t v_isSharedCheck_5512_; 
lean_dec_ref(v___f_5501_);
v_a_5504_ = lean_ctor_get(v_x_5502_, 0);
v_isSharedCheck_5512_ = !lean_is_exclusive(v_x_5502_);
if (v_isSharedCheck_5512_ == 0)
{
v___x_5506_ = v_x_5502_;
v_isShared_5507_ = v_isSharedCheck_5512_;
goto v_resetjp_5505_;
}
else
{
lean_inc(v_a_5504_);
lean_dec(v_x_5502_);
v___x_5506_ = lean_box(0);
v_isShared_5507_ = v_isSharedCheck_5512_;
goto v_resetjp_5505_;
}
v_resetjp_5505_:
{
lean_object* v___x_5509_; 
if (v_isShared_5507_ == 0)
{
v___x_5509_ = v___x_5506_;
goto v_reusejp_5508_;
}
else
{
lean_object* v_reuseFailAlloc_5511_; 
v_reuseFailAlloc_5511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5511_, 0, v_a_5504_);
v___x_5509_ = v_reuseFailAlloc_5511_;
goto v_reusejp_5508_;
}
v_reusejp_5508_:
{
lean_object* v___x_5510_; 
v___x_5510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5510_, 0, v___x_5509_);
return v___x_5510_;
}
}
}
else
{
lean_object* v_a_5513_; lean_object* v___x_5514_; 
v_a_5513_ = lean_ctor_get(v_x_5502_, 0);
lean_inc(v_a_5513_);
lean_dec_ref_known(v_x_5502_, 1);
v___x_5514_ = lean_apply_2(v___f_5501_, v_a_5513_, lean_box(0));
return v___x_5514_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed(lean_object* v___f_5515_, lean_object* v_x_5516_, lean_object* v___y_5517_){
_start:
{
lean_object* v_res_5518_; 
v_res_5518_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4(v___f_5515_, v_x_5516_);
return v_res_5518_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(lean_object* v_value_5519_, lean_object* v___f_5520_, lean_object* v_x_5521_){
_start:
{
if (lean_obj_tag(v_x_5521_) == 0)
{
lean_object* v_a_5523_; lean_object* v___x_5525_; uint8_t v_isShared_5526_; uint8_t v_isSharedCheck_5531_; 
lean_dec_ref(v___f_5520_);
lean_dec(v_value_5519_);
v_a_5523_ = lean_ctor_get(v_x_5521_, 0);
v_isSharedCheck_5531_ = !lean_is_exclusive(v_x_5521_);
if (v_isSharedCheck_5531_ == 0)
{
v___x_5525_ = v_x_5521_;
v_isShared_5526_ = v_isSharedCheck_5531_;
goto v_resetjp_5524_;
}
else
{
lean_inc(v_a_5523_);
lean_dec(v_x_5521_);
v___x_5525_ = lean_box(0);
v_isShared_5526_ = v_isSharedCheck_5531_;
goto v_resetjp_5524_;
}
v_resetjp_5524_:
{
lean_object* v___x_5528_; 
if (v_isShared_5526_ == 0)
{
v___x_5528_ = v___x_5525_;
goto v_reusejp_5527_;
}
else
{
lean_object* v_reuseFailAlloc_5530_; 
v_reuseFailAlloc_5530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5530_, 0, v_a_5523_);
v___x_5528_ = v_reuseFailAlloc_5530_;
goto v_reusejp_5527_;
}
v_reusejp_5527_:
{
lean_object* v___x_5529_; 
v___x_5529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5529_, 0, v___x_5528_);
return v___x_5529_;
}
}
}
else
{
lean_object* v_a_5532_; lean_object* v___x_5534_; uint8_t v_isShared_5535_; uint8_t v_isSharedCheck_5557_; 
v_a_5532_ = lean_ctor_get(v_x_5521_, 0);
v_isSharedCheck_5557_ = !lean_is_exclusive(v_x_5521_);
if (v_isSharedCheck_5557_ == 0)
{
v___x_5534_ = v_x_5521_;
v_isShared_5535_ = v_isSharedCheck_5557_;
goto v_resetjp_5533_;
}
else
{
lean_inc(v_a_5532_);
lean_dec(v_x_5521_);
v___x_5534_ = lean_box(0);
v_isShared_5535_ = v_isSharedCheck_5557_;
goto v_resetjp_5533_;
}
v_resetjp_5533_:
{
lean_object* v___x_5536_; lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; lean_object* v___x_5541_; lean_object* v___x_5542_; uint8_t v___x_5543_; lean_object* v_val_5545_; lean_object* v___x_5548_; 
v___x_5536_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__10___closed__0));
v___x_5537_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5538_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5538_, 0, v_value_5519_);
lean_ctor_set(v___x_5538_, 1, v___x_5537_);
v___x_5539_ = lean_unsigned_to_nat(1u);
v___x_5540_ = lean_mk_empty_array_with_capacity(v___x_5539_);
v___x_5541_ = lean_array_push(v___x_5540_, v___x_5538_);
v___x_5542_ = lean_unsigned_to_nat(0u);
v___x_5543_ = 0;
v___x_5548_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Fetch_jsFetchHandler_spec__2(v_a_5532_, v___x_5536_, v___x_5541_);
if (lean_obj_tag(v___x_5548_) == 0)
{
lean_object* v_a_5549_; lean_object* v___x_5551_; 
v_a_5549_ = lean_ctor_get(v___x_5548_, 0);
lean_inc(v_a_5549_);
lean_dec_ref_known(v___x_5548_, 1);
if (v_isShared_5535_ == 0)
{
lean_ctor_set(v___x_5534_, 0, v_a_5549_);
v___x_5551_ = v___x_5534_;
goto v_reusejp_5550_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v_a_5549_);
v___x_5551_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5550_;
}
v_reusejp_5550_:
{
v_val_5545_ = v___x_5551_;
goto v___jp_5544_;
}
}
else
{
lean_object* v_a_5553_; lean_object* v___x_5555_; 
v_a_5553_ = lean_ctor_get(v___x_5548_, 0);
lean_inc(v_a_5553_);
lean_dec_ref_known(v___x_5548_, 1);
if (v_isShared_5535_ == 0)
{
lean_ctor_set_tag(v___x_5534_, 0);
lean_ctor_set(v___x_5534_, 0, v_a_5553_);
v___x_5555_ = v___x_5534_;
goto v_reusejp_5554_;
}
else
{
lean_object* v_reuseFailAlloc_5556_; 
v_reuseFailAlloc_5556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5556_, 0, v_a_5553_);
v___x_5555_ = v_reuseFailAlloc_5556_;
goto v_reusejp_5554_;
}
v_reusejp_5554_:
{
v_val_5545_ = v___x_5555_;
goto v___jp_5544_;
}
}
v___jp_5544_:
{
lean_object* v___x_5546_; lean_object* v___x_5547_; 
v___x_5546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5546_, 0, v_val_5545_);
v___x_5547_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5542_, v___x_5543_, v___x_5546_, v___f_5520_);
return v___x_5547_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed(lean_object* v_value_5558_, lean_object* v___f_5559_, lean_object* v_x_5560_, lean_object* v___y_5561_){
_start:
{
lean_object* v_res_5562_; 
v_res_5562_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5(v_value_5558_, v___f_5559_, v_x_5560_);
return v_res_5562_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(lean_object* v_a_5567_, lean_object* v_a_5568_, lean_object* v___x_5569_, lean_object* v___x_5570_, lean_object* v_x_5571_){
_start:
{
uint8_t v___y_5574_; lean_object* v___y_5575_; lean_object* v___y_5576_; lean_object* v_val_5577_; 
if (lean_obj_tag(v_x_5571_) == 0)
{
lean_object* v_a_5580_; lean_object* v___x_5582_; uint8_t v_isShared_5583_; uint8_t v_isSharedCheck_5588_; 
lean_dec(v_a_5568_);
lean_dec(v_a_5567_);
v_a_5580_ = lean_ctor_get(v_x_5571_, 0);
v_isSharedCheck_5588_ = !lean_is_exclusive(v_x_5571_);
if (v_isSharedCheck_5588_ == 0)
{
v___x_5582_ = v_x_5571_;
v_isShared_5583_ = v_isSharedCheck_5588_;
goto v_resetjp_5581_;
}
else
{
lean_inc(v_a_5580_);
lean_dec(v_x_5571_);
v___x_5582_ = lean_box(0);
v_isShared_5583_ = v_isSharedCheck_5588_;
goto v_resetjp_5581_;
}
v_resetjp_5581_:
{
lean_object* v___x_5585_; 
if (v_isShared_5583_ == 0)
{
v___x_5585_ = v___x_5582_;
goto v_reusejp_5584_;
}
else
{
lean_object* v_reuseFailAlloc_5587_; 
v_reuseFailAlloc_5587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5587_, 0, v_a_5580_);
v___x_5585_ = v_reuseFailAlloc_5587_;
goto v_reusejp_5584_;
}
v_reusejp_5584_:
{
lean_object* v___x_5586_; 
v___x_5586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5586_, 0, v___x_5585_);
return v___x_5586_;
}
}
}
else
{
lean_object* v_a_5589_; lean_object* v___x_5591_; uint8_t v_isShared_5592_; uint8_t v_isSharedCheck_5622_; 
v_a_5589_ = lean_ctor_get(v_x_5571_, 0);
v_isSharedCheck_5622_ = !lean_is_exclusive(v_x_5571_);
if (v_isSharedCheck_5622_ == 0)
{
v___x_5591_ = v_x_5571_;
v_isShared_5592_ = v_isSharedCheck_5622_;
goto v_resetjp_5590_;
}
else
{
lean_inc(v_a_5589_);
lean_dec(v_x_5571_);
v___x_5591_ = lean_box(0);
v_isShared_5592_ = v_isSharedCheck_5622_;
goto v_resetjp_5590_;
}
v_resetjp_5590_:
{
uint16_t v___y_5594_; lean_object* v___x_5618_; 
v___x_5618_ = l_Lasm_JS_Data_field(v_a_5589_, v___x_5570_);
if (lean_obj_tag(v___x_5618_) == 3)
{
double v_n_5619_; uint16_t v___x_5620_; 
v_n_5619_ = lean_ctor_get_float(v___x_5618_, 0);
lean_dec_ref_known(v___x_5618_, 0);
v___x_5620_ = lean_float_to_uint16(v_n_5619_);
v___y_5594_ = v___x_5620_;
goto v___jp_5593_;
}
else
{
uint16_t v___x_5621_; 
lean_dec(v___x_5618_);
v___x_5621_ = 0;
v___y_5594_ = v___x_5621_;
goto v___jp_5593_;
}
v___jp_5593_:
{
lean_object* v___x_5595_; lean_object* v___f_5596_; lean_object* v___x_5597_; 
v___x_5595_ = lean_box(v___y_5594_);
lean_inc(v_a_5567_);
v___f_5596_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__3___boxed), 5, 3);
lean_closure_set(v___f_5596_, 0, v___x_5595_);
lean_closure_set(v___f_5596_, 1, v_a_5567_);
lean_closure_set(v___f_5596_, 2, v_a_5568_);
v___x_5597_ = l_Lasm_JS_Data_field(v_a_5589_, v___x_5569_);
lean_dec(v_a_5589_);
if (lean_obj_tag(v___x_5597_) == 9)
{
lean_object* v_value_5598_; lean_object* v___f_5599_; lean_object* v___f_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; uint8_t v___x_5603_; lean_object* v___x_5604_; 
v_value_5598_ = lean_ctor_get(v___x_5597_, 0);
lean_inc(v_value_5598_);
lean_dec_ref_known(v___x_5597_, 2);
v___f_5599_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5599_, 0, v___f_5596_);
v___f_5600_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__5___boxed), 4, 2);
lean_closure_set(v___f_5600_, 0, v_value_5598_);
lean_closure_set(v___f_5600_, 1, v___f_5599_);
v___x_5601_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___closed__2));
v___x_5602_ = lean_unsigned_to_nat(0u);
v___x_5603_ = 0;
v___x_5604_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5567_, v___x_5601_);
if (lean_obj_tag(v___x_5604_) == 0)
{
lean_object* v_a_5605_; lean_object* v___x_5607_; 
v_a_5605_ = lean_ctor_get(v___x_5604_, 0);
lean_inc(v_a_5605_);
lean_dec_ref_known(v___x_5604_, 1);
if (v_isShared_5592_ == 0)
{
lean_ctor_set(v___x_5591_, 0, v_a_5605_);
v___x_5607_ = v___x_5591_;
goto v_reusejp_5606_;
}
else
{
lean_object* v_reuseFailAlloc_5608_; 
v_reuseFailAlloc_5608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5608_, 0, v_a_5605_);
v___x_5607_ = v_reuseFailAlloc_5608_;
goto v_reusejp_5606_;
}
v_reusejp_5606_:
{
v___y_5574_ = v___x_5603_;
v___y_5575_ = v___f_5600_;
v___y_5576_ = v___x_5602_;
v_val_5577_ = v___x_5607_;
goto v___jp_5573_;
}
}
else
{
lean_object* v_a_5609_; lean_object* v___x_5611_; 
v_a_5609_ = lean_ctor_get(v___x_5604_, 0);
lean_inc(v_a_5609_);
lean_dec_ref_known(v___x_5604_, 1);
if (v_isShared_5592_ == 0)
{
lean_ctor_set_tag(v___x_5591_, 0);
lean_ctor_set(v___x_5591_, 0, v_a_5609_);
v___x_5611_ = v___x_5591_;
goto v_reusejp_5610_;
}
else
{
lean_object* v_reuseFailAlloc_5612_; 
v_reuseFailAlloc_5612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5612_, 0, v_a_5609_);
v___x_5611_ = v_reuseFailAlloc_5612_;
goto v_reusejp_5610_;
}
v_reusejp_5610_:
{
v___y_5574_ = v___x_5603_;
v___y_5575_ = v___f_5600_;
v___y_5576_ = v___x_5602_;
v_val_5577_ = v___x_5611_;
goto v___jp_5573_;
}
}
}
else
{
lean_object* v___f_5613_; lean_object* v___x_5614_; uint8_t v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; 
lean_dec(v___x_5597_);
lean_del_object(v___x_5591_);
lean_dec(v_a_5567_);
v___f_5613_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5613_, 0, v___f_5596_);
v___x_5614_ = lean_unsigned_to_nat(0u);
v___x_5615_ = 0;
v___x_5616_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___closed__1));
v___x_5617_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5614_, v___x_5615_, v___x_5616_, v___f_5613_);
return v___x_5617_;
}
}
}
}
v___jp_5573_:
{
lean_object* v___x_5578_; lean_object* v___x_5579_; 
v___x_5578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5578_, 0, v_val_5577_);
v___x_5579_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5576_, v___y_5574_, v___x_5578_, v___y_5575_);
return v___x_5579_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed(lean_object* v_a_5623_, lean_object* v_a_5624_, lean_object* v___x_5625_, lean_object* v___x_5626_, lean_object* v_x_5627_, lean_object* v___y_5628_){
_start:
{
lean_object* v_res_5629_; 
v_res_5629_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7(v_a_5623_, v_a_5624_, v___x_5625_, v___x_5626_, v_x_5627_);
lean_dec_ref(v___x_5626_);
lean_dec_ref(v___x_5625_);
return v_res_5629_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0(void){
_start:
{
lean_object* v___x_5630_; lean_object* v___x_5631_; lean_object* v___x_5632_; lean_object* v___x_5633_; 
v___x_5630_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
v___x_5631_ = lean_unsigned_to_nat(2u);
v___x_5632_ = lean_mk_empty_array_with_capacity(v___x_5631_);
v___x_5633_ = lean_array_push(v___x_5632_, v___x_5630_);
return v___x_5633_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(lean_object* v_a_5634_, lean_object* v___x_5635_, lean_object* v_x_5636_){
_start:
{
if (lean_obj_tag(v_x_5636_) == 0)
{
lean_object* v_a_5638_; lean_object* v___x_5640_; uint8_t v_isShared_5641_; uint8_t v_isSharedCheck_5646_; 
lean_dec_ref(v___x_5635_);
lean_dec(v_a_5634_);
v_a_5638_ = lean_ctor_get(v_x_5636_, 0);
v_isSharedCheck_5646_ = !lean_is_exclusive(v_x_5636_);
if (v_isSharedCheck_5646_ == 0)
{
v___x_5640_ = v_x_5636_;
v_isShared_5641_ = v_isSharedCheck_5646_;
goto v_resetjp_5639_;
}
else
{
lean_inc(v_a_5638_);
lean_dec(v_x_5636_);
v___x_5640_ = lean_box(0);
v_isShared_5641_ = v_isSharedCheck_5646_;
goto v_resetjp_5639_;
}
v_resetjp_5639_:
{
lean_object* v___x_5643_; 
if (v_isShared_5641_ == 0)
{
v___x_5643_ = v___x_5640_;
goto v_reusejp_5642_;
}
else
{
lean_object* v_reuseFailAlloc_5645_; 
v_reuseFailAlloc_5645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5645_, 0, v_a_5638_);
v___x_5643_ = v_reuseFailAlloc_5645_;
goto v_reusejp_5642_;
}
v_reusejp_5642_:
{
lean_object* v___x_5644_; 
v___x_5644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5644_, 0, v___x_5643_);
return v___x_5644_;
}
}
}
else
{
lean_object* v_a_5647_; lean_object* v___x_5649_; uint8_t v_isShared_5650_; uint8_t v_isSharedCheck_5670_; 
v_a_5647_ = lean_ctor_get(v_x_5636_, 0);
v_isSharedCheck_5670_ = !lean_is_exclusive(v_x_5636_);
if (v_isSharedCheck_5670_ == 0)
{
v___x_5649_ = v_x_5636_;
v_isShared_5650_ = v_isSharedCheck_5670_;
goto v_resetjp_5648_;
}
else
{
lean_inc(v_a_5647_);
lean_dec(v_x_5636_);
v___x_5649_ = lean_box(0);
v_isShared_5650_ = v_isSharedCheck_5670_;
goto v_resetjp_5648_;
}
v_resetjp_5648_:
{
lean_object* v___x_5651_; lean_object* v___f_5652_; lean_object* v___x_5653_; lean_object* v___x_5654_; lean_object* v___x_5655_; uint8_t v___x_5656_; lean_object* v_val_5658_; lean_object* v___x_5661_; 
v___x_5651_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__0));
lean_inc_ref(v___x_5635_);
lean_inc(v_a_5647_);
v___f_5652_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__7___boxed), 6, 4);
lean_closure_set(v___f_5652_, 0, v_a_5634_);
lean_closure_set(v___f_5652_, 1, v_a_5647_);
lean_closure_set(v___f_5652_, 2, v___x_5635_);
lean_closure_set(v___f_5652_, 3, v___x_5651_);
v___x_5653_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0, &l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___closed__0);
v___x_5654_ = lean_array_push(v___x_5653_, v___x_5635_);
v___x_5655_ = lean_unsigned_to_nat(0u);
v___x_5656_ = 0;
v___x_5661_ = l_Lasm_JS_Value_getFields___at___00Lasm_Fetch_jsFetchHandler_spec__3(v_a_5647_, v___x_5654_);
if (lean_obj_tag(v___x_5661_) == 0)
{
lean_object* v_a_5662_; lean_object* v___x_5664_; 
v_a_5662_ = lean_ctor_get(v___x_5661_, 0);
lean_inc(v_a_5662_);
lean_dec_ref_known(v___x_5661_, 1);
if (v_isShared_5650_ == 0)
{
lean_ctor_set(v___x_5649_, 0, v_a_5662_);
v___x_5664_ = v___x_5649_;
goto v_reusejp_5663_;
}
else
{
lean_object* v_reuseFailAlloc_5665_; 
v_reuseFailAlloc_5665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5665_, 0, v_a_5662_);
v___x_5664_ = v_reuseFailAlloc_5665_;
goto v_reusejp_5663_;
}
v_reusejp_5663_:
{
v_val_5658_ = v___x_5664_;
goto v___jp_5657_;
}
}
else
{
lean_object* v_a_5666_; lean_object* v___x_5668_; 
v_a_5666_ = lean_ctor_get(v___x_5661_, 0);
lean_inc(v_a_5666_);
lean_dec_ref_known(v___x_5661_, 1);
if (v_isShared_5650_ == 0)
{
lean_ctor_set_tag(v___x_5649_, 0);
lean_ctor_set(v___x_5649_, 0, v_a_5666_);
v___x_5668_ = v___x_5649_;
goto v_reusejp_5667_;
}
else
{
lean_object* v_reuseFailAlloc_5669_; 
v_reuseFailAlloc_5669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5669_, 0, v_a_5666_);
v___x_5668_ = v_reuseFailAlloc_5669_;
goto v_reusejp_5667_;
}
v_reusejp_5667_:
{
v_val_5658_ = v___x_5668_;
goto v___jp_5657_;
}
}
v___jp_5657_:
{
lean_object* v___x_5659_; lean_object* v___x_5660_; 
v___x_5659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5659_, 0, v_val_5658_);
v___x_5660_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5655_, v___x_5656_, v___x_5659_, v___f_5652_);
return v___x_5660_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed(lean_object* v_a_5671_, lean_object* v___x_5672_, lean_object* v_x_5673_, lean_object* v___y_5674_){
_start:
{
lean_object* v_res_5675_; 
v_res_5675_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6(v_a_5671_, v___x_5672_, v_x_5673_);
return v_res_5675_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1(void){
_start:
{
uint64_t v___x_5677_; uint8_t v___x_5678_; uint64_t v___x_5679_; 
v___x_5677_ = 0ULL;
v___x_5678_ = 0;
v___x_5679_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_5678_, v___x_5677_);
return v___x_5679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(lean_object* v_f_5680_, lean_object* v_args_5681_, lean_object* v_this_5682_){
_start:
{
lean_object* v___x_5684_; lean_object* v___x_5685_; lean_object* v___x_5686_; uint32_t v___x_5687_; uint64_t v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; 
v___x_5684_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___x_5685_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5685_, 0, v_f_5680_);
lean_ctor_set(v___x_5685_, 1, v___x_5684_);
v___x_5686_ = ((lean_object*)(l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__0));
v___x_5687_ = 205;
v___x_5688_ = lean_uint64_once(&l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1, &l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___closed__1);
v___x_5689_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5689_, 0, v_args_5681_);
v___x_5690_ = lean_unsigned_to_nat(3u);
v___x_5691_ = lean_mk_empty_array_with_capacity(v___x_5690_);
v___x_5692_ = lean_array_push(v___x_5691_, v___x_5685_);
v___x_5693_ = lean_array_push(v___x_5692_, v_this_5682_);
v___x_5694_ = lean_array_push(v___x_5693_, v___x_5689_);
v___x_5695_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5695_, 0, v___x_5694_);
v___x_5696_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1_spec__3(v___x_5686_, v___x_5687_, v___x_5688_, v___x_5695_, v___x_5684_);
return v___x_5696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0___boxed(lean_object* v_f_5697_, lean_object* v_args_5698_, lean_object* v_this_5699_, lean_object* v___y_5700_){
_start:
{
lean_object* v_res_5701_; 
v_res_5701_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_f_5697_, v_args_5698_, v_this_5699_);
return v_res_5701_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(lean_object* v_req_5712_, lean_object* v_a_5713_, lean_object* v_x_5714_){
_start:
{
if (lean_obj_tag(v_x_5714_) == 0)
{
lean_object* v_a_5716_; lean_object* v___x_5718_; uint8_t v_isShared_5719_; uint8_t v_isSharedCheck_5724_; 
lean_dec(v_a_5713_);
lean_dec_ref(v_req_5712_);
v_a_5716_ = lean_ctor_get(v_x_5714_, 0);
v_isSharedCheck_5724_ = !lean_is_exclusive(v_x_5714_);
if (v_isSharedCheck_5724_ == 0)
{
v___x_5718_ = v_x_5714_;
v_isShared_5719_ = v_isSharedCheck_5724_;
goto v_resetjp_5717_;
}
else
{
lean_inc(v_a_5716_);
lean_dec(v_x_5714_);
v___x_5718_ = lean_box(0);
v_isShared_5719_ = v_isSharedCheck_5724_;
goto v_resetjp_5717_;
}
v_resetjp_5717_:
{
lean_object* v___x_5721_; 
if (v_isShared_5719_ == 0)
{
v___x_5721_ = v___x_5718_;
goto v_reusejp_5720_;
}
else
{
lean_object* v_reuseFailAlloc_5723_; 
v_reuseFailAlloc_5723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5723_, 0, v_a_5716_);
v___x_5721_ = v_reuseFailAlloc_5723_;
goto v_reusejp_5720_;
}
v_reusejp_5720_:
{
lean_object* v___x_5722_; 
v___x_5722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5722_, 0, v___x_5721_);
return v___x_5722_;
}
}
}
else
{
lean_object* v_a_5725_; lean_object* v_method_5726_; lean_object* v_url_5727_; lean_object* v_headers_5728_; lean_object* v_body_5729_; lean_object* v___y_5731_; lean_object* v___x_5761_; uint8_t v___x_5762_; 
v_a_5725_ = lean_ctor_get(v_x_5714_, 0);
lean_inc(v_a_5725_);
lean_dec_ref_known(v_x_5714_, 1);
v_method_5726_ = lean_ctor_get(v_req_5712_, 0);
lean_inc_ref(v_method_5726_);
v_url_5727_ = lean_ctor_get(v_req_5712_, 1);
lean_inc_ref(v_url_5727_);
v_headers_5728_ = lean_ctor_get(v_req_5712_, 2);
lean_inc_ref(v_headers_5728_);
v_body_5729_ = lean_ctor_get(v_req_5712_, 3);
lean_inc_ref(v_body_5729_);
lean_dec_ref(v_req_5712_);
v___x_5761_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_5762_ = lean_string_dec_eq(v_method_5726_, v___x_5761_);
if (v___x_5762_ == 0)
{
lean_object* v___x_5763_; uint8_t v___x_5764_; 
v___x_5763_ = ((lean_object*)(l_Lasm_Fetch_respond___closed__3));
v___x_5764_ = lean_string_dec_eq(v_method_5726_, v___x_5763_);
if (v___x_5764_ == 0)
{
lean_object* v___x_5765_; 
v___x_5765_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5765_, 0, v_body_5729_);
v___y_5731_ = v___x_5765_;
goto v___jp_5730_;
}
else
{
lean_dec_ref(v_body_5729_);
goto v___jp_5759_;
}
}
else
{
lean_dec_ref(v_body_5729_);
goto v___jp_5759_;
}
v___jp_5730_:
{
lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___f_5736_; size_t v_sz_5737_; size_t v___x_5738_; lean_object* v___x_5739_; lean_object* v___x_5740_; lean_object* v___x_5741_; lean_object* v___x_5742_; lean_object* v___x_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; uint8_t v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; 
v___x_5732_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__4));
v___x_5733_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5733_, 0, v_method_5726_);
v___x_5734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5734_, 0, v___x_5732_);
lean_ctor_set(v___x_5734_, 1, v___x_5733_);
v___x_5735_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__15___closed__1));
v___f_5736_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__6___boxed), 4, 2);
lean_closure_set(v___f_5736_, 0, v_a_5713_);
lean_closure_set(v___f_5736_, 1, v___x_5735_);
v_sz_5737_ = lean_array_size(v_headers_5728_);
v___x_5738_ = ((size_t)0ULL);
v___x_5739_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__0(v_sz_5737_, v___x_5738_, v_headers_5728_);
v___x_5740_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5740_, 0, v___x_5739_);
v___x_5741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5741_, 0, v___x_5735_);
lean_ctor_set(v___x_5741_, 1, v___x_5740_);
v___x_5742_ = ((lean_object*)(l_Lasm_Fetch_jsFetchHandler___lam__9___closed__6));
v___x_5743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5743_, 0, v___x_5742_);
lean_ctor_set(v___x_5743_, 1, v___y_5731_);
v___x_5744_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___closed__4));
v___x_5745_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5745_, 0, v___x_5743_);
lean_ctor_set(v___x_5745_, 1, v___x_5744_);
v___x_5746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5746_, 0, v___x_5741_);
lean_ctor_set(v___x_5746_, 1, v___x_5745_);
v___x_5747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5747_, 0, v___x_5734_);
lean_ctor_set(v___x_5747_, 1, v___x_5746_);
v___x_5748_ = l_Lasm_JS_obj(v___x_5747_);
v___x_5749_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5749_, 0, v_url_5727_);
v___x_5750_ = lean_unsigned_to_nat(2u);
v___x_5751_ = lean_mk_empty_array_with_capacity(v___x_5750_);
v___x_5752_ = lean_array_push(v___x_5751_, v___x_5749_);
v___x_5753_ = lean_array_push(v___x_5752_, v___x_5748_);
v___x_5754_ = lean_box(0);
v___x_5755_ = lean_unsigned_to_nat(0u);
v___x_5756_ = 0;
v___x_5757_ = l_Lasm_JS_Value_callAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsFetch_spec__0(v_a_5725_, v___x_5753_, v___x_5754_);
v___x_5758_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5755_, v___x_5756_, v___x_5757_, v___f_5736_);
return v___x_5758_;
}
v___jp_5759_:
{
lean_object* v___x_5760_; 
v___x_5760_ = lean_box(0);
v___y_5731_ = v___x_5760_;
goto v___jp_5730_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed(lean_object* v_req_5766_, lean_object* v_a_5767_, lean_object* v_x_5768_, lean_object* v___y_5769_){
_start:
{
lean_object* v_res_5770_; 
v_res_5770_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8(v_req_5766_, v_a_5767_, v_x_5768_);
return v_res_5770_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(lean_object* v_req_5772_, lean_object* v_x_5773_){
_start:
{
if (lean_obj_tag(v_x_5773_) == 0)
{
lean_object* v_a_5775_; lean_object* v___x_5777_; uint8_t v_isShared_5778_; uint8_t v_isSharedCheck_5783_; 
lean_dec_ref(v_req_5772_);
v_a_5775_ = lean_ctor_get(v_x_5773_, 0);
v_isSharedCheck_5783_ = !lean_is_exclusive(v_x_5773_);
if (v_isSharedCheck_5783_ == 0)
{
v___x_5777_ = v_x_5773_;
v_isShared_5778_ = v_isSharedCheck_5783_;
goto v_resetjp_5776_;
}
else
{
lean_inc(v_a_5775_);
lean_dec(v_x_5773_);
v___x_5777_ = lean_box(0);
v_isShared_5778_ = v_isSharedCheck_5783_;
goto v_resetjp_5776_;
}
v_resetjp_5776_:
{
lean_object* v___x_5780_; 
if (v_isShared_5778_ == 0)
{
v___x_5780_ = v___x_5777_;
goto v_reusejp_5779_;
}
else
{
lean_object* v_reuseFailAlloc_5782_; 
v_reuseFailAlloc_5782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5782_, 0, v_a_5775_);
v___x_5780_ = v_reuseFailAlloc_5782_;
goto v_reusejp_5779_;
}
v_reusejp_5779_:
{
lean_object* v___x_5781_; 
v___x_5781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5781_, 0, v___x_5780_);
return v___x_5781_;
}
}
}
else
{
lean_object* v_a_5784_; lean_object* v___x_5786_; uint8_t v_isShared_5787_; uint8_t v_isSharedCheck_5805_; 
v_a_5784_ = lean_ctor_get(v_x_5773_, 0);
v_isSharedCheck_5805_ = !lean_is_exclusive(v_x_5773_);
if (v_isSharedCheck_5805_ == 0)
{
v___x_5786_ = v_x_5773_;
v_isShared_5787_ = v_isSharedCheck_5805_;
goto v_resetjp_5785_;
}
else
{
lean_inc(v_a_5784_);
lean_dec(v_x_5773_);
v___x_5786_ = lean_box(0);
v_isShared_5787_ = v_isSharedCheck_5805_;
goto v_resetjp_5785_;
}
v_resetjp_5785_:
{
lean_object* v___f_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; uint8_t v___x_5791_; lean_object* v_val_5793_; lean_object* v___x_5796_; 
lean_inc(v_a_5784_);
v___f_5788_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__8___boxed), 4, 2);
lean_closure_set(v___f_5788_, 0, v_req_5772_);
lean_closure_set(v___f_5788_, 1, v_a_5784_);
v___x_5789_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___closed__0));
v___x_5790_ = lean_unsigned_to_nat(0u);
v___x_5791_ = 0;
v___x_5796_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_5784_, v___x_5789_);
if (lean_obj_tag(v___x_5796_) == 0)
{
lean_object* v_a_5797_; lean_object* v___x_5799_; 
v_a_5797_ = lean_ctor_get(v___x_5796_, 0);
lean_inc(v_a_5797_);
lean_dec_ref_known(v___x_5796_, 1);
if (v_isShared_5787_ == 0)
{
lean_ctor_set(v___x_5786_, 0, v_a_5797_);
v___x_5799_ = v___x_5786_;
goto v_reusejp_5798_;
}
else
{
lean_object* v_reuseFailAlloc_5800_; 
v_reuseFailAlloc_5800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5800_, 0, v_a_5797_);
v___x_5799_ = v_reuseFailAlloc_5800_;
goto v_reusejp_5798_;
}
v_reusejp_5798_:
{
v_val_5793_ = v___x_5799_;
goto v___jp_5792_;
}
}
else
{
lean_object* v_a_5801_; lean_object* v___x_5803_; 
v_a_5801_ = lean_ctor_get(v___x_5796_, 0);
lean_inc(v_a_5801_);
lean_dec_ref_known(v___x_5796_, 1);
if (v_isShared_5787_ == 0)
{
lean_ctor_set_tag(v___x_5786_, 0);
lean_ctor_set(v___x_5786_, 0, v_a_5801_);
v___x_5803_ = v___x_5786_;
goto v_reusejp_5802_;
}
else
{
lean_object* v_reuseFailAlloc_5804_; 
v_reuseFailAlloc_5804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5804_, 0, v_a_5801_);
v___x_5803_ = v_reuseFailAlloc_5804_;
goto v_reusejp_5802_;
}
v_reusejp_5802_:
{
v_val_5793_ = v___x_5803_;
goto v___jp_5792_;
}
}
v___jp_5792_:
{
lean_object* v___x_5794_; lean_object* v___x_5795_; 
v___x_5794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5794_, 0, v_val_5793_);
v___x_5795_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5790_, v___x_5791_, v___x_5794_, v___f_5788_);
return v___x_5795_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed(lean_object* v_req_5806_, lean_object* v_x_5807_, lean_object* v___y_5808_){
_start:
{
lean_object* v_res_5809_; 
v_res_5809_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9(v_req_5806_, v_x_5807_);
return v_res_5809_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(lean_object* v_req_5810_){
_start:
{
lean_object* v___f_5812_; lean_object* v___x_5813_; uint8_t v___x_5814_; lean_object* v_val_5816_; lean_object* v___x_5819_; 
v___f_5812_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___lam__9___boxed), 3, 1);
lean_closure_set(v___f_5812_, 0, v_req_5810_);
v___x_5813_ = lean_unsigned_to_nat(0u);
v___x_5814_ = 0;
v___x_5819_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5819_) == 0)
{
lean_object* v_a_5820_; lean_object* v___x_5822_; uint8_t v_isShared_5823_; uint8_t v_isSharedCheck_5827_; 
v_a_5820_ = lean_ctor_get(v___x_5819_, 0);
v_isSharedCheck_5827_ = !lean_is_exclusive(v___x_5819_);
if (v_isSharedCheck_5827_ == 0)
{
v___x_5822_ = v___x_5819_;
v_isShared_5823_ = v_isSharedCheck_5827_;
goto v_resetjp_5821_;
}
else
{
lean_inc(v_a_5820_);
lean_dec(v___x_5819_);
v___x_5822_ = lean_box(0);
v_isShared_5823_ = v_isSharedCheck_5827_;
goto v_resetjp_5821_;
}
v_resetjp_5821_:
{
lean_object* v___x_5825_; 
if (v_isShared_5823_ == 0)
{
lean_ctor_set_tag(v___x_5822_, 1);
v___x_5825_ = v___x_5822_;
goto v_reusejp_5824_;
}
else
{
lean_object* v_reuseFailAlloc_5826_; 
v_reuseFailAlloc_5826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5826_, 0, v_a_5820_);
v___x_5825_ = v_reuseFailAlloc_5826_;
goto v_reusejp_5824_;
}
v_reusejp_5824_:
{
v_val_5816_ = v___x_5825_;
goto v___jp_5815_;
}
}
}
else
{
lean_object* v_a_5828_; lean_object* v___x_5830_; uint8_t v_isShared_5831_; uint8_t v_isSharedCheck_5835_; 
v_a_5828_ = lean_ctor_get(v___x_5819_, 0);
v_isSharedCheck_5835_ = !lean_is_exclusive(v___x_5819_);
if (v_isSharedCheck_5835_ == 0)
{
v___x_5830_ = v___x_5819_;
v_isShared_5831_ = v_isSharedCheck_5835_;
goto v_resetjp_5829_;
}
else
{
lean_inc(v_a_5828_);
lean_dec(v___x_5819_);
v___x_5830_ = lean_box(0);
v_isShared_5831_ = v_isSharedCheck_5835_;
goto v_resetjp_5829_;
}
v_resetjp_5829_:
{
lean_object* v___x_5833_; 
if (v_isShared_5831_ == 0)
{
lean_ctor_set_tag(v___x_5830_, 0);
v___x_5833_ = v___x_5830_;
goto v_reusejp_5832_;
}
else
{
lean_object* v_reuseFailAlloc_5834_; 
v_reuseFailAlloc_5834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5834_, 0, v_a_5828_);
v___x_5833_ = v_reuseFailAlloc_5834_;
goto v_reusejp_5832_;
}
v_reusejp_5832_:
{
v_val_5816_ = v___x_5833_;
goto v___jp_5815_;
}
}
}
v___jp_5815_:
{
lean_object* v___x_5817_; lean_object* v___x_5818_; 
v___x_5817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5817_, 0, v_val_5816_);
v___x_5818_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5813_, v___x_5814_, v___x_5817_, v___f_5812_);
return v___x_5818_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch___boxed(lean_object* v_req_5836_, lean_object* v_a_5837_){
_start:
{
lean_object* v_res_5838_; 
v_res_5838_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_5836_);
return v_res_5838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0(lean_object* v_x_5839_){
_start:
{
if (lean_obj_tag(v_x_5839_) == 0)
{
lean_object* v_a_5841_; lean_object* v___x_5843_; uint8_t v_isShared_5844_; uint8_t v_isSharedCheck_5849_; 
v_a_5841_ = lean_ctor_get(v_x_5839_, 0);
v_isSharedCheck_5849_ = !lean_is_exclusive(v_x_5839_);
if (v_isSharedCheck_5849_ == 0)
{
v___x_5843_ = v_x_5839_;
v_isShared_5844_ = v_isSharedCheck_5849_;
goto v_resetjp_5842_;
}
else
{
lean_inc(v_a_5841_);
lean_dec(v_x_5839_);
v___x_5843_ = lean_box(0);
v_isShared_5844_ = v_isSharedCheck_5849_;
goto v_resetjp_5842_;
}
v_resetjp_5842_:
{
lean_object* v___x_5846_; 
if (v_isShared_5844_ == 0)
{
v___x_5846_ = v___x_5843_;
goto v_reusejp_5845_;
}
else
{
lean_object* v_reuseFailAlloc_5848_; 
v_reuseFailAlloc_5848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5848_, 0, v_a_5841_);
v___x_5846_ = v_reuseFailAlloc_5848_;
goto v_reusejp_5845_;
}
v_reusejp_5845_:
{
lean_object* v___x_5847_; 
v___x_5847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5847_, 0, v___x_5846_);
return v___x_5847_;
}
}
}
else
{
lean_object* v_a_5850_; lean_object* v___x_5851_; 
v_a_5850_ = lean_ctor_get(v_x_5839_, 0);
lean_inc(v_a_5850_);
lean_dec_ref_known(v_x_5839_, 1);
v___x_5851_ = l___private_Lasm_Fetch_0__Lasm_Fetch_decodeResponse(v_a_5850_);
lean_dec(v_a_5850_);
if (lean_obj_tag(v___x_5851_) == 0)
{
lean_object* v_a_5852_; lean_object* v___x_5854_; uint8_t v_isShared_5855_; uint8_t v_isSharedCheck_5861_; 
v_a_5852_ = lean_ctor_get(v___x_5851_, 0);
v_isSharedCheck_5861_ = !lean_is_exclusive(v___x_5851_);
if (v_isSharedCheck_5861_ == 0)
{
v___x_5854_ = v___x_5851_;
v_isShared_5855_ = v_isSharedCheck_5861_;
goto v_resetjp_5853_;
}
else
{
lean_inc(v_a_5852_);
lean_dec(v___x_5851_);
v___x_5854_ = lean_box(0);
v_isShared_5855_ = v_isSharedCheck_5861_;
goto v_resetjp_5853_;
}
v_resetjp_5853_:
{
lean_object* v___x_5856_; lean_object* v___x_5858_; 
v___x_5856_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5856_, 0, v_a_5852_);
if (v_isShared_5855_ == 0)
{
lean_ctor_set(v___x_5854_, 0, v___x_5856_);
v___x_5858_ = v___x_5854_;
goto v_reusejp_5857_;
}
else
{
lean_object* v_reuseFailAlloc_5860_; 
v_reuseFailAlloc_5860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5860_, 0, v___x_5856_);
v___x_5858_ = v_reuseFailAlloc_5860_;
goto v_reusejp_5857_;
}
v_reusejp_5857_:
{
lean_object* v___x_5859_; 
v___x_5859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5859_, 0, v___x_5858_);
return v___x_5859_;
}
}
}
else
{
lean_object* v_a_5862_; lean_object* v___x_5864_; uint8_t v_isShared_5865_; uint8_t v_isSharedCheck_5870_; 
v_a_5862_ = lean_ctor_get(v___x_5851_, 0);
v_isSharedCheck_5870_ = !lean_is_exclusive(v___x_5851_);
if (v_isSharedCheck_5870_ == 0)
{
v___x_5864_ = v___x_5851_;
v_isShared_5865_ = v_isSharedCheck_5870_;
goto v_resetjp_5863_;
}
else
{
lean_inc(v_a_5862_);
lean_dec(v___x_5851_);
v___x_5864_ = lean_box(0);
v_isShared_5865_ = v_isSharedCheck_5870_;
goto v_resetjp_5863_;
}
v_resetjp_5863_:
{
lean_object* v___x_5867_; 
if (v_isShared_5865_ == 0)
{
v___x_5867_ = v___x_5864_;
goto v_reusejp_5866_;
}
else
{
lean_object* v_reuseFailAlloc_5869_; 
v_reuseFailAlloc_5869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5869_, 0, v_a_5862_);
v___x_5867_ = v_reuseFailAlloc_5869_;
goto v_reusejp_5866_;
}
v_reusejp_5866_:
{
lean_object* v___x_5868_; 
v___x_5868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5868_, 0, v___x_5867_);
return v___x_5868_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__0___boxed(lean_object* v_x_5871_, lean_object* v___y_5872_){
_start:
{
lean_object* v_res_5873_; 
v_res_5873_ = l_Lasm_Fetch_fetch___lam__0(v_x_5871_);
return v_res_5873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1(lean_object* v_x_5879_){
_start:
{
if (lean_obj_tag(v_x_5879_) == 0)
{
lean_object* v___x_5880_; 
v___x_5880_ = ((lean_object*)(l_Lasm_Fetch_fetch___lam__1___closed__2));
return v___x_5880_;
}
else
{
lean_object* v_val_5881_; 
v_val_5881_ = lean_ctor_get(v_x_5879_, 0);
lean_inc(v_val_5881_);
return v_val_5881_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__1___boxed(lean_object* v_x_5882_){
_start:
{
lean_object* v_res_5883_; 
v_res_5883_ = l_Lasm_Fetch_fetch___lam__1(v_x_5882_);
lean_dec(v_x_5882_);
return v_res_5883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2(lean_object* v_a_5884_, lean_object* v___f_5885_, uint8_t v___x_5886_, lean_object* v___f_5887_, lean_object* v_x_5888_){
_start:
{
if (lean_obj_tag(v_x_5888_) == 0)
{
lean_object* v_a_5890_; lean_object* v___x_5892_; uint8_t v_isShared_5893_; uint8_t v_isSharedCheck_5898_; 
lean_dec_ref(v___f_5887_);
lean_dec_ref(v___f_5885_);
v_a_5890_ = lean_ctor_get(v_x_5888_, 0);
v_isSharedCheck_5898_ = !lean_is_exclusive(v_x_5888_);
if (v_isSharedCheck_5898_ == 0)
{
v___x_5892_ = v_x_5888_;
v_isShared_5893_ = v_isSharedCheck_5898_;
goto v_resetjp_5891_;
}
else
{
lean_inc(v_a_5890_);
lean_dec(v_x_5888_);
v___x_5892_ = lean_box(0);
v_isShared_5893_ = v_isSharedCheck_5898_;
goto v_resetjp_5891_;
}
v_resetjp_5891_:
{
lean_object* v___x_5895_; 
if (v_isShared_5893_ == 0)
{
v___x_5895_ = v___x_5892_;
goto v_reusejp_5894_;
}
else
{
lean_object* v_reuseFailAlloc_5897_; 
v_reuseFailAlloc_5897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5897_, 0, v_a_5890_);
v___x_5895_ = v_reuseFailAlloc_5897_;
goto v_reusejp_5894_;
}
v_reusejp_5894_:
{
lean_object* v___x_5896_; 
v___x_5896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5896_, 0, v___x_5895_);
return v___x_5896_;
}
}
}
else
{
lean_object* v___x_5899_; lean_object* v___x_5900_; uint8_t v___x_5901_; lean_object* v___x_5902_; lean_object* v___x_5903_; lean_object* v___x_5904_; 
lean_dec_ref_known(v_x_5888_, 1);
v___x_5899_ = lean_io_promise_result_opt(v_a_5884_);
v___x_5900_ = lean_unsigned_to_nat(0u);
v___x_5901_ = 1;
v___x_5902_ = lean_task_map(v___f_5885_, v___x_5899_, v___x_5900_, v___x_5901_);
v___x_5903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5903_, 0, v___x_5902_);
v___x_5904_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5900_, v___x_5886_, v___x_5903_, v___f_5887_);
return v___x_5904_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__2___boxed(lean_object* v_a_5905_, lean_object* v___f_5906_, lean_object* v___x_5907_, lean_object* v___f_5908_, lean_object* v_x_5909_, lean_object* v___y_5910_){
_start:
{
uint8_t v___x_1064__boxed_5911_; lean_object* v_res_5912_; 
v___x_1064__boxed_5911_ = lean_unbox(v___x_5907_);
v_res_5912_ = l_Lasm_Fetch_fetch___lam__2(v_a_5905_, v___f_5906_, v___x_1064__boxed_5911_, v___f_5908_, v_x_5909_);
lean_dec(v_a_5905_);
return v_res_5912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3(lean_object* v_req_5913_, lean_object* v___f_5914_, uint8_t v___x_5915_, lean_object* v___f_5916_, lean_object* v_options_5917_, lean_object* v_x_5918_){
_start:
{
if (lean_obj_tag(v_x_5918_) == 0)
{
lean_object* v_a_5920_; lean_object* v___x_5922_; uint8_t v_isShared_5923_; uint8_t v_isSharedCheck_5928_; 
lean_dec_ref(v___f_5916_);
lean_dec_ref(v___f_5914_);
v_a_5920_ = lean_ctor_get(v_x_5918_, 0);
v_isSharedCheck_5928_ = !lean_is_exclusive(v_x_5918_);
if (v_isSharedCheck_5928_ == 0)
{
v___x_5922_ = v_x_5918_;
v_isShared_5923_ = v_isSharedCheck_5928_;
goto v_resetjp_5921_;
}
else
{
lean_inc(v_a_5920_);
lean_dec(v_x_5918_);
v___x_5922_ = lean_box(0);
v_isShared_5923_ = v_isSharedCheck_5928_;
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
lean_object* v_reuseFailAlloc_5927_; 
v_reuseFailAlloc_5927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5927_, 0, v_a_5920_);
v___x_5925_ = v_reuseFailAlloc_5927_;
goto v_reusejp_5924_;
}
v_reusejp_5924_:
{
lean_object* v___x_5926_; 
v___x_5926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5926_, 0, v___x_5925_);
return v___x_5926_;
}
}
}
else
{
lean_object* v_a_5929_; lean_object* v___x_5931_; uint8_t v_isShared_5932_; uint8_t v_isSharedCheck_5959_; 
v_a_5929_ = lean_ctor_get(v_x_5918_, 0);
v_isSharedCheck_5959_ = !lean_is_exclusive(v_x_5918_);
if (v_isSharedCheck_5959_ == 0)
{
v___x_5931_ = v_x_5918_;
v_isShared_5932_ = v_isSharedCheck_5959_;
goto v_resetjp_5930_;
}
else
{
lean_inc(v_a_5929_);
lean_dec(v_x_5918_);
v___x_5931_ = lean_box(0);
v_isShared_5932_ = v_isSharedCheck_5959_;
goto v_resetjp_5930_;
}
v_resetjp_5930_:
{
lean_object* v_method_5933_; lean_object* v_url_5934_; lean_object* v_headers_5935_; lean_object* v_body_5936_; lean_object* v___x_5937_; lean_object* v___f_5938_; uint8_t v___y_5940_; lean_object* v___y_5941_; lean_object* v_val_5942_; lean_object* v___y_5946_; 
v_method_5933_ = lean_ctor_get(v_req_5913_, 0);
v_url_5934_ = lean_ctor_get(v_req_5913_, 1);
v_headers_5935_ = lean_ctor_get(v_req_5913_, 2);
v_body_5936_ = lean_ctor_get(v_req_5913_, 3);
v___x_5937_ = lean_box(v___x_5915_);
lean_inc(v_a_5929_);
v___f_5938_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__2___boxed), 6, 4);
lean_closure_set(v___f_5938_, 0, v_a_5929_);
lean_closure_set(v___f_5938_, 1, v___f_5914_);
lean_closure_set(v___f_5938_, 2, v___x_5937_);
lean_closure_set(v___f_5938_, 3, v___f_5916_);
if (lean_obj_tag(v_options_5917_) == 0)
{
lean_object* v___x_5957_; 
v___x_5957_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__0));
v___y_5946_ = v___x_5957_;
goto v___jp_5945_;
}
else
{
lean_object* v_val_5958_; 
v_val_5958_ = lean_ctor_get(v_options_5917_, 0);
v___y_5946_ = v_val_5958_;
goto v___jp_5945_;
}
v___jp_5939_:
{
lean_object* v___x_5943_; lean_object* v___x_5944_; 
v___x_5943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5943_, 0, v_val_5942_);
v___x_5944_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___y_5941_, v___y_5940_, v___x_5943_, v___f_5938_);
return v___x_5944_;
}
v___jp_5945_:
{
lean_object* v___x_5947_; lean_object* v___x_5948_; 
v___x_5947_ = lean_unsigned_to_nat(0u);
v___x_5948_ = lasm_fetch_send(v_a_5929_, v_method_5933_, v_url_5934_, v_headers_5935_, v_body_5936_, v___y_5946_);
lean_dec(v_a_5929_);
if (lean_obj_tag(v___x_5948_) == 0)
{
lean_object* v_a_5949_; lean_object* v___x_5951_; 
v_a_5949_ = lean_ctor_get(v___x_5948_, 0);
lean_inc(v_a_5949_);
lean_dec_ref_known(v___x_5948_, 1);
if (v_isShared_5932_ == 0)
{
lean_ctor_set(v___x_5931_, 0, v_a_5949_);
v___x_5951_ = v___x_5931_;
goto v_reusejp_5950_;
}
else
{
lean_object* v_reuseFailAlloc_5952_; 
v_reuseFailAlloc_5952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5952_, 0, v_a_5949_);
v___x_5951_ = v_reuseFailAlloc_5952_;
goto v_reusejp_5950_;
}
v_reusejp_5950_:
{
v___y_5940_ = v___x_5915_;
v___y_5941_ = v___x_5947_;
v_val_5942_ = v___x_5951_;
goto v___jp_5939_;
}
}
else
{
lean_object* v_a_5953_; lean_object* v___x_5955_; 
v_a_5953_ = lean_ctor_get(v___x_5948_, 0);
lean_inc(v_a_5953_);
lean_dec_ref_known(v___x_5948_, 1);
if (v_isShared_5932_ == 0)
{
lean_ctor_set_tag(v___x_5931_, 0);
lean_ctor_set(v___x_5931_, 0, v_a_5953_);
v___x_5955_ = v___x_5931_;
goto v_reusejp_5954_;
}
else
{
lean_object* v_reuseFailAlloc_5956_; 
v_reuseFailAlloc_5956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5956_, 0, v_a_5953_);
v___x_5955_ = v_reuseFailAlloc_5956_;
goto v_reusejp_5954_;
}
v_reusejp_5954_:
{
v___y_5940_ = v___x_5915_;
v___y_5941_ = v___x_5947_;
v_val_5942_ = v___x_5955_;
goto v___jp_5939_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___lam__3___boxed(lean_object* v_req_5960_, lean_object* v___f_5961_, lean_object* v___x_5962_, lean_object* v___f_5963_, lean_object* v_options_5964_, lean_object* v_x_5965_, lean_object* v___y_5966_){
_start:
{
uint8_t v___x_1113__boxed_5967_; lean_object* v_res_5968_; 
v___x_1113__boxed_5967_ = lean_unbox(v___x_5962_);
v_res_5968_ = l_Lasm_Fetch_fetch___lam__3(v_req_5960_, v___f_5961_, v___x_1113__boxed_5967_, v___f_5963_, v_options_5964_, v_x_5965_);
lean_dec(v_options_5964_);
lean_dec_ref(v_req_5960_);
return v_res_5968_;
}
}
static uint32_t _init_l_Lasm_Fetch_fetch___closed__0(void){
_start:
{
lean_object* v___x_5969_; uint32_t v___x_5970_; 
v___x_5969_ = lean_box(0);
v___x_5970_ = lasm_fetch_platform(v___x_5969_);
return v___x_5970_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__1(void){
_start:
{
uint32_t v___x_5971_; uint32_t v___x_5972_; uint8_t v___x_5973_; 
v___x_5971_ = 0;
v___x_5972_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5973_ = lean_uint32_dec_eq(v___x_5972_, v___x_5971_);
return v___x_5973_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__4(void){
_start:
{
uint32_t v___x_5976_; uint32_t v___x_5977_; uint8_t v___x_5978_; 
v___x_5976_ = 2;
v___x_5977_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5978_ = lean_uint32_dec_eq(v___x_5977_, v___x_5976_);
return v___x_5978_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__5(void){
_start:
{
uint32_t v___x_5979_; uint32_t v___x_5980_; uint8_t v___x_5981_; 
v___x_5979_ = 4;
v___x_5980_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5981_ = lean_uint32_dec_eq(v___x_5980_, v___x_5979_);
return v___x_5981_;
}
}
static uint8_t _init_l_Lasm_Fetch_fetch___closed__6(void){
_start:
{
uint32_t v___x_5982_; uint32_t v___x_5983_; uint8_t v___x_5984_; 
v___x_5982_ = 1;
v___x_5983_ = lean_uint32_once(&l_Lasm_Fetch_fetch___closed__0, &l_Lasm_Fetch_fetch___closed__0_once, _init_l_Lasm_Fetch_fetch___closed__0);
v___x_5984_ = lean_uint32_dec_eq(v___x_5983_, v___x_5982_);
return v___x_5984_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch(lean_object* v_req_5999_, lean_object* v_options_6000_){
_start:
{
uint8_t v___x_6002_; 
v___x_6002_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6002_ == 0)
{
lean_object* v___f_6003_; lean_object* v___f_6004_; lean_object* v___x_6005_; lean_object* v___f_6006_; uint8_t v___x_6013_; 
v___f_6003_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__2));
v___f_6004_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__3));
v___x_6005_ = lean_box(v___x_6002_);
v___f_6006_ = lean_alloc_closure((void*)(l_Lasm_Fetch_fetch___lam__3___boxed), 7, 5);
lean_closure_set(v___f_6006_, 0, v_req_5999_);
lean_closure_set(v___f_6006_, 1, v___f_6004_);
lean_closure_set(v___f_6006_, 2, v___x_6005_);
lean_closure_set(v___f_6006_, 3, v___f_6003_);
lean_closure_set(v___f_6006_, 4, v_options_6000_);
v___x_6013_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6013_ == 0)
{
uint8_t v___x_6014_; 
v___x_6014_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6014_ == 0)
{
uint8_t v___x_6015_; 
lean_dec_ref(v___f_6006_);
v___x_6015_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6015_ == 0)
{
lean_object* v___x_6016_; 
v___x_6016_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__10));
return v___x_6016_;
}
else
{
lean_object* v___x_6017_; 
v___x_6017_ = ((lean_object*)(l_Lasm_Fetch_fetch___closed__14));
return v___x_6017_;
}
}
else
{
goto v___jp_6007_;
}
}
else
{
goto v___jp_6007_;
}
v___jp_6007_:
{
lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; 
v___x_6008_ = lean_unsigned_to_nat(0u);
v___x_6009_ = lean_io_promise_new();
v___x_6010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6010_, 0, v___x_6009_);
v___x_6011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6011_, 0, v___x_6010_);
v___x_6012_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6008_, v___x_6002_, v___x_6011_, v___f_6006_);
return v___x_6012_;
}
}
else
{
lean_object* v___x_6018_; 
lean_dec(v_options_6000_);
v___x_6018_ = l___private_Lasm_Fetch_0__Lasm_Fetch_jsFetch(v_req_5999_);
return v___x_6018_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_fetch___boxed(lean_object* v_req_6019_, lean_object* v_options_6020_, lean_object* v_a_6021_){
_start:
{
lean_object* v_res_6022_; 
v_res_6022_ = l_Lasm_Fetch_fetch(v_req_6019_, v_options_6020_);
return v_res_6022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get(lean_object* v_url_6023_, lean_object* v_headers_6024_, lean_object* v_options_6025_){
_start:
{
lean_object* v___x_6027_; lean_object* v___x_6028_; lean_object* v___f_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; 
v___x_6027_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_Request_pathOf___closed__0));
v___x_6028_ = l_ByteArray_empty;
v___f_6029_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6030_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6030_, 0, v___x_6027_);
lean_ctor_set(v___x_6030_, 1, v_url_6023_);
lean_ctor_set(v___x_6030_, 2, v_headers_6024_);
lean_ctor_set(v___x_6030_, 3, v___x_6028_);
lean_ctor_set(v___x_6030_, 4, v___f_6029_);
v___x_6031_ = l_Lasm_Fetch_fetch(v___x_6030_, v_options_6025_);
return v___x_6031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_get___boxed(lean_object* v_url_6032_, lean_object* v_headers_6033_, lean_object* v_options_6034_, lean_object* v_a_6035_){
_start:
{
lean_object* v_res_6036_; 
v_res_6036_ = l_Lasm_Fetch_get(v_url_6032_, v_headers_6033_, v_options_6034_);
return v_res_6036_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post(lean_object* v_url_6038_, lean_object* v_body_6039_, lean_object* v_contentType_6040_, lean_object* v_headers_6041_, lean_object* v_options_6042_){
_start:
{
lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; lean_object* v___x_6047_; lean_object* v___x_6048_; lean_object* v___x_6049_; lean_object* v___x_6050_; lean_object* v___f_6051_; lean_object* v___x_6052_; lean_object* v___x_6053_; 
v___x_6044_ = ((lean_object*)(l_Lasm_Fetch_post___closed__0));
v___x_6045_ = ((lean_object*)(l_Lasm_Fetch_Response_withBody___closed__0));
v___x_6046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6046_, 0, v___x_6045_);
lean_ctor_set(v___x_6046_, 1, v_contentType_6040_);
v___x_6047_ = lean_unsigned_to_nat(1u);
v___x_6048_ = lean_mk_empty_array_with_capacity(v___x_6047_);
v___x_6049_ = lean_array_push(v___x_6048_, v___x_6046_);
v___x_6050_ = l_Array_append___redArg(v___x_6049_, v_headers_6041_);
v___f_6051_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6052_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6052_, 0, v___x_6044_);
lean_ctor_set(v___x_6052_, 1, v_url_6038_);
lean_ctor_set(v___x_6052_, 2, v___x_6050_);
lean_ctor_set(v___x_6052_, 3, v_body_6039_);
lean_ctor_set(v___x_6052_, 4, v___f_6051_);
v___x_6053_ = l_Lasm_Fetch_fetch(v___x_6052_, v_options_6042_);
return v___x_6053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_post___boxed(lean_object* v_url_6054_, lean_object* v_body_6055_, lean_object* v_contentType_6056_, lean_object* v_headers_6057_, lean_object* v_options_6058_, lean_object* v_a_6059_){
_start:
{
lean_object* v_res_6060_; 
v_res_6060_ = l_Lasm_Fetch_post(v_url_6054_, v_body_6055_, v_contentType_6056_, v_headers_6057_, v_options_6058_);
lean_dec_ref(v_headers_6057_);
return v_res_6060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_text_x3f(lean_object* v_r_6061_){
_start:
{
lean_object* v_body_6062_; uint8_t v___x_6063_; 
v_body_6062_ = lean_ctor_get(v_r_6061_, 1);
lean_inc_ref(v_body_6062_);
lean_dec_ref(v_r_6061_);
v___x_6063_ = lean_string_validate_utf8(v_body_6062_);
if (v___x_6063_ == 0)
{
lean_object* v___x_6064_; 
lean_dec_ref(v_body_6062_);
v___x_6064_ = lean_box(0);
return v___x_6064_;
}
else
{
lean_object* v___x_6065_; lean_object* v___x_6066_; 
v___x_6065_ = lean_string_from_utf8_unchecked(v_body_6062_);
v___x_6066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6066_, 0, v___x_6065_);
return v___x_6066_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f(lean_object* v_r_6067_, lean_object* v_name_6068_){
_start:
{
lean_object* v_headers_6069_; lean_object* v_n_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; size_t v_sz_6073_; size_t v___x_6074_; lean_object* v___x_6075_; lean_object* v_fst_6076_; 
v_headers_6069_ = lean_ctor_get(v_r_6067_, 0);
v_n_6070_ = l___private_Lasm_Fetch_0__Lasm_Fetch_lower(v_name_6068_);
v___x_6071_ = lean_box(0);
v___x_6072_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0___closed__0));
v_sz_6073_ = lean_array_size(v_headers_6069_);
v___x_6074_ = ((size_t)0ULL);
v___x_6075_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Request_header_x3f_spec__0(v_n_6070_, v_headers_6069_, v_sz_6073_, v___x_6074_, v___x_6072_);
lean_dec_ref(v_n_6070_);
v_fst_6076_ = lean_ctor_get(v___x_6075_, 0);
lean_inc(v_fst_6076_);
lean_dec_ref(v___x_6075_);
if (lean_obj_tag(v_fst_6076_) == 0)
{
return v___x_6071_;
}
else
{
lean_object* v_val_6077_; 
v_val_6077_ = lean_ctor_get(v_fst_6076_, 0);
lean_inc(v_val_6077_);
lean_dec_ref_known(v_fst_6076_, 1);
if (lean_obj_tag(v_val_6077_) == 0)
{
return v___x_6071_;
}
else
{
lean_object* v_val_6078_; lean_object* v___x_6080_; uint8_t v_isShared_6081_; uint8_t v_isSharedCheck_6086_; 
v_val_6078_ = lean_ctor_get(v_val_6077_, 0);
v_isSharedCheck_6086_ = !lean_is_exclusive(v_val_6077_);
if (v_isSharedCheck_6086_ == 0)
{
v___x_6080_ = v_val_6077_;
v_isShared_6081_ = v_isSharedCheck_6086_;
goto v_resetjp_6079_;
}
else
{
lean_inc(v_val_6078_);
lean_dec(v_val_6077_);
v___x_6080_ = lean_box(0);
v_isShared_6081_ = v_isSharedCheck_6086_;
goto v_resetjp_6079_;
}
v_resetjp_6079_:
{
lean_object* v_snd_6082_; lean_object* v___x_6084_; 
v_snd_6082_ = lean_ctor_get(v_val_6078_, 1);
lean_inc(v_snd_6082_);
lean_dec(v_val_6078_);
if (v_isShared_6081_ == 0)
{
lean_ctor_set(v___x_6080_, 0, v_snd_6082_);
v___x_6084_ = v___x_6080_;
goto v_reusejp_6083_;
}
else
{
lean_object* v_reuseFailAlloc_6085_; 
v_reuseFailAlloc_6085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6085_, 0, v_snd_6082_);
v___x_6084_ = v_reuseFailAlloc_6085_;
goto v_reusejp_6083_;
}
v_reusejp_6083_:
{
return v___x_6084_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Response_header_x3f___boxed(lean_object* v_r_6087_, lean_object* v_name_6088_){
_start:
{
lean_object* v_res_6089_; 
v_res_6089_ = l_Lasm_Fetch_Response_header_x3f(v_r_6087_, v_name_6088_);
lean_dec_ref(v_r_6087_);
return v_res_6089_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__0(lean_object* v_x_6090_){
_start:
{
if (lean_obj_tag(v_x_6090_) == 0)
{
lean_object* v_a_6091_; lean_object* v___x_6092_; 
v_a_6091_ = lean_ctor_get(v_x_6090_, 0);
lean_inc(v_a_6091_);
lean_dec_ref_known(v_x_6090_, 1);
v___x_6092_ = lean_task_pure(v_a_6091_);
return v___x_6092_;
}
else
{
lean_object* v_a_6093_; 
v_a_6093_ = lean_ctor_get(v_x_6090_, 0);
lean_inc_ref(v_a_6093_);
lean_dec_ref_known(v_x_6090_, 1);
return v_a_6093_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__1(lean_object* v_x_6094_){
_start:
{
if (lean_obj_tag(v_x_6094_) == 0)
{
lean_object* v_a_6095_; lean_object* v___x_6096_; 
v_a_6095_ = lean_ctor_get(v_x_6094_, 0);
lean_inc(v_a_6095_);
lean_dec_ref_known(v_x_6094_, 1);
v___x_6096_ = lean_task_pure(v_a_6095_);
return v___x_6096_;
}
else
{
lean_object* v_a_6097_; 
v_a_6097_ = lean_ctor_get(v_x_6094_, 0);
lean_inc_ref(v_a_6097_);
lean_dec_ref_known(v_x_6094_, 1);
return v_a_6097_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(lean_object* v_chunk_6098_){
_start:
{
lean_object* v_val_6101_; lean_object* v___x_6103_; 
v___x_6103_ = lasm_fetch_write(v_chunk_6098_);
if (lean_obj_tag(v___x_6103_) == 0)
{
lean_object* v_a_6104_; lean_object* v___x_6106_; uint8_t v_isShared_6107_; uint8_t v_isSharedCheck_6111_; 
v_a_6104_ = lean_ctor_get(v___x_6103_, 0);
v_isSharedCheck_6111_ = !lean_is_exclusive(v___x_6103_);
if (v_isSharedCheck_6111_ == 0)
{
v___x_6106_ = v___x_6103_;
v_isShared_6107_ = v_isSharedCheck_6111_;
goto v_resetjp_6105_;
}
else
{
lean_inc(v_a_6104_);
lean_dec(v___x_6103_);
v___x_6106_ = lean_box(0);
v_isShared_6107_ = v_isSharedCheck_6111_;
goto v_resetjp_6105_;
}
v_resetjp_6105_:
{
lean_object* v___x_6109_; 
if (v_isShared_6107_ == 0)
{
lean_ctor_set_tag(v___x_6106_, 1);
v___x_6109_ = v___x_6106_;
goto v_reusejp_6108_;
}
else
{
lean_object* v_reuseFailAlloc_6110_; 
v_reuseFailAlloc_6110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6110_, 0, v_a_6104_);
v___x_6109_ = v_reuseFailAlloc_6110_;
goto v_reusejp_6108_;
}
v_reusejp_6108_:
{
v_val_6101_ = v___x_6109_;
goto v___jp_6100_;
}
}
}
else
{
lean_object* v_a_6112_; lean_object* v___x_6114_; uint8_t v_isShared_6115_; uint8_t v_isSharedCheck_6119_; 
v_a_6112_ = lean_ctor_get(v___x_6103_, 0);
v_isSharedCheck_6119_ = !lean_is_exclusive(v___x_6103_);
if (v_isSharedCheck_6119_ == 0)
{
v___x_6114_ = v___x_6103_;
v_isShared_6115_ = v_isSharedCheck_6119_;
goto v_resetjp_6113_;
}
else
{
lean_inc(v_a_6112_);
lean_dec(v___x_6103_);
v___x_6114_ = lean_box(0);
v_isShared_6115_ = v_isSharedCheck_6119_;
goto v_resetjp_6113_;
}
v_resetjp_6113_:
{
lean_object* v___x_6117_; 
if (v_isShared_6115_ == 0)
{
lean_ctor_set_tag(v___x_6114_, 0);
v___x_6117_ = v___x_6114_;
goto v_reusejp_6116_;
}
else
{
lean_object* v_reuseFailAlloc_6118_; 
v_reuseFailAlloc_6118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6118_, 0, v_a_6112_);
v___x_6117_ = v_reuseFailAlloc_6118_;
goto v_reusejp_6116_;
}
v_reusejp_6116_:
{
v_val_6101_ = v___x_6117_;
goto v___jp_6100_;
}
}
}
v___jp_6100_:
{
lean_object* v___x_6102_; 
v___x_6102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6102_, 0, v_val_6101_);
return v___x_6102_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2___boxed(lean_object* v_chunk_6120_, lean_object* v___y_6121_){
_start:
{
lean_object* v_res_6122_; 
v_res_6122_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__2(v_chunk_6120_);
lean_dec_ref(v_chunk_6120_);
return v_res_6122_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__3(lean_object* v_x_6123_){
_start:
{
if (lean_obj_tag(v_x_6123_) == 0)
{
lean_object* v_a_6124_; lean_object* v___x_6125_; 
v_a_6124_ = lean_ctor_get(v_x_6123_, 0);
lean_inc(v_a_6124_);
lean_dec_ref_known(v_x_6123_, 1);
v___x_6125_ = lean_task_pure(v_a_6124_);
return v___x_6125_;
}
else
{
lean_object* v_a_6126_; 
v_a_6126_ = lean_ctor_get(v_x_6123_, 0);
lean_inc_ref(v_a_6126_);
lean_dec_ref_known(v_x_6123_, 1);
return v_a_6126_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(lean_object* v_x_6127_){
_start:
{
lean_object* v___y_6130_; 
if (lean_obj_tag(v_x_6127_) == 0)
{
lean_object* v_a_6133_; lean_object* v___x_6135_; uint8_t v_isShared_6136_; uint8_t v_isSharedCheck_6141_; 
v_a_6133_ = lean_ctor_get(v_x_6127_, 0);
v_isSharedCheck_6141_ = !lean_is_exclusive(v_x_6127_);
if (v_isSharedCheck_6141_ == 0)
{
v___x_6135_ = v_x_6127_;
v_isShared_6136_ = v_isSharedCheck_6141_;
goto v_resetjp_6134_;
}
else
{
lean_inc(v_a_6133_);
lean_dec(v_x_6127_);
v___x_6135_ = lean_box(0);
v_isShared_6136_ = v_isSharedCheck_6141_;
goto v_resetjp_6134_;
}
v_resetjp_6134_:
{
lean_object* v___x_6138_; 
if (v_isShared_6136_ == 0)
{
v___x_6138_ = v___x_6135_;
goto v_reusejp_6137_;
}
else
{
lean_object* v_reuseFailAlloc_6140_; 
v_reuseFailAlloc_6140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6140_, 0, v_a_6133_);
v___x_6138_ = v_reuseFailAlloc_6140_;
goto v_reusejp_6137_;
}
v_reusejp_6137_:
{
lean_object* v___x_6139_; 
v___x_6139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6139_, 0, v___x_6138_);
return v___x_6139_;
}
}
}
else
{
lean_object* v_a_6142_; uint8_t v___x_6143_; 
v_a_6142_ = lean_ctor_get(v_x_6127_, 0);
lean_inc(v_a_6142_);
lean_dec_ref_known(v_x_6127_, 1);
v___x_6143_ = l_ByteArray_isEmpty(v_a_6142_);
if (v___x_6143_ == 0)
{
lean_object* v___x_6144_; 
v___x_6144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6144_, 0, v_a_6142_);
v___y_6130_ = v___x_6144_;
goto v___jp_6129_;
}
else
{
lean_object* v___x_6145_; 
lean_dec(v_a_6142_);
v___x_6145_ = lean_box(0);
v___y_6130_ = v___x_6145_;
goto v___jp_6129_;
}
}
v___jp_6129_:
{
lean_object* v___x_6131_; lean_object* v___x_6132_; 
v___x_6131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6131_, 0, v___y_6130_);
v___x_6132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6132_, 0, v___x_6131_);
return v___x_6132_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4___boxed(lean_object* v_x_6146_, lean_object* v___y_6147_){
_start:
{
lean_object* v_res_6148_; 
v_res_6148_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__4(v_x_6146_);
return v_res_6148_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(lean_object* v___f_6149_, uint32_t v___x_6150_){
_start:
{
lean_object* v___x_6152_; uint8_t v___x_6153_; lean_object* v_val_6155_; lean_object* v___x_6158_; 
v___x_6152_ = lean_unsigned_to_nat(0u);
v___x_6153_ = 0;
v___x_6158_ = lasm_fetch_read(v___x_6150_);
if (lean_obj_tag(v___x_6158_) == 0)
{
lean_object* v_a_6159_; lean_object* v___x_6161_; uint8_t v_isShared_6162_; uint8_t v_isSharedCheck_6166_; 
v_a_6159_ = lean_ctor_get(v___x_6158_, 0);
v_isSharedCheck_6166_ = !lean_is_exclusive(v___x_6158_);
if (v_isSharedCheck_6166_ == 0)
{
v___x_6161_ = v___x_6158_;
v_isShared_6162_ = v_isSharedCheck_6166_;
goto v_resetjp_6160_;
}
else
{
lean_inc(v_a_6159_);
lean_dec(v___x_6158_);
v___x_6161_ = lean_box(0);
v_isShared_6162_ = v_isSharedCheck_6166_;
goto v_resetjp_6160_;
}
v_resetjp_6160_:
{
lean_object* v___x_6164_; 
if (v_isShared_6162_ == 0)
{
lean_ctor_set_tag(v___x_6161_, 1);
v___x_6164_ = v___x_6161_;
goto v_reusejp_6163_;
}
else
{
lean_object* v_reuseFailAlloc_6165_; 
v_reuseFailAlloc_6165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6165_, 0, v_a_6159_);
v___x_6164_ = v_reuseFailAlloc_6165_;
goto v_reusejp_6163_;
}
v_reusejp_6163_:
{
v_val_6155_ = v___x_6164_;
goto v___jp_6154_;
}
}
}
else
{
lean_object* v_a_6167_; lean_object* v___x_6169_; uint8_t v_isShared_6170_; uint8_t v_isSharedCheck_6174_; 
v_a_6167_ = lean_ctor_get(v___x_6158_, 0);
v_isSharedCheck_6174_ = !lean_is_exclusive(v___x_6158_);
if (v_isSharedCheck_6174_ == 0)
{
v___x_6169_ = v___x_6158_;
v_isShared_6170_ = v_isSharedCheck_6174_;
goto v_resetjp_6168_;
}
else
{
lean_inc(v_a_6167_);
lean_dec(v___x_6158_);
v___x_6169_ = lean_box(0);
v_isShared_6170_ = v_isSharedCheck_6174_;
goto v_resetjp_6168_;
}
v_resetjp_6168_:
{
lean_object* v___x_6172_; 
if (v_isShared_6170_ == 0)
{
lean_ctor_set_tag(v___x_6169_, 0);
v___x_6172_ = v___x_6169_;
goto v_reusejp_6171_;
}
else
{
lean_object* v_reuseFailAlloc_6173_; 
v_reuseFailAlloc_6173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6173_, 0, v_a_6167_);
v___x_6172_ = v_reuseFailAlloc_6173_;
goto v_reusejp_6171_;
}
v_reusejp_6171_:
{
v_val_6155_ = v___x_6172_;
goto v___jp_6154_;
}
}
}
v___jp_6154_:
{
lean_object* v___x_6156_; lean_object* v___x_6157_; 
v___x_6156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6156_, 0, v_val_6155_);
v___x_6157_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6152_, v___x_6153_, v___x_6156_, v___f_6149_);
return v___x_6157_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed(lean_object* v___f_6175_, lean_object* v___x_6176_, lean_object* v___y_6177_){
_start:
{
uint32_t v___x_2044__boxed_6178_; lean_object* v_res_6179_; 
v___x_2044__boxed_6178_ = lean_unbox_uint32(v___x_6176_);
lean_dec(v___x_6176_);
v_res_6179_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5(v___f_6175_, v___x_2044__boxed_6178_);
return v_res_6179_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(lean_object* v_handler_6180_, lean_object* v_req_6181_){
_start:
{
lean_object* v___x_6183_; 
v___x_6183_ = l_Lasm_Fetch_respond(v_handler_6180_, v_req_6181_);
return v___x_6183_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed(lean_object* v_handler_6184_, lean_object* v_req_6185_, lean_object* v___y_6186_){
_start:
{
lean_object* v_res_6187_; 
v_res_6187_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6(v_handler_6184_, v_req_6185_);
return v_res_6187_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(lean_object* v_val_6188_, lean_object* v___f_6189_){
_start:
{
lean_object* v___x_6191_; 
v___x_6191_ = lean_apply_2(v_val_6188_, v___f_6189_, lean_box(0));
return v___x_6191_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed(lean_object* v_val_6192_, lean_object* v___f_6193_, lean_object* v___y_6194_){
_start:
{
lean_object* v_res_6195_; 
v_res_6195_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7(v_val_6192_, v___f_6193_);
return v_res_6195_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(lean_object* v___x_6196_){
_start:
{
lean_object* v___x_6198_; 
v___x_6198_ = l_Lasm_Fetch_Request_readAll(v___x_6196_);
return v___x_6198_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed(lean_object* v___x_6199_, lean_object* v___y_6200_){
_start:
{
lean_object* v_res_6201_; 
v_res_6201_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8(v___x_6199_);
return v_res_6201_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_6207_; lean_object* v___x_6208_; 
v___x_6207_ = 65536;
v___x_6208_ = lean_box_uint32(v___x_6207_);
return v___x_6208_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5(void){
_start:
{
lean_object* v___f_6209_; lean_object* v___x_6210_; lean_object* v___f_6211_; 
v___f_6209_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__4));
v___x_6210_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5___boxed__const__1;
v___f_6211_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__5___boxed), 3, 2);
lean_closure_set(v___f_6211_, 0, v___f_6209_);
lean_closure_set(v___f_6211_, 1, v___x_6210_);
return v___f_6211_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(lean_object* v_handler_6212_, lean_object* v_options_6213_){
_start:
{
lean_object* v___f_6215_; lean_object* v___f_6216_; lean_object* v___f_6217_; lean_object* v___f_6218_; lean_object* v___x_6219_; 
v___f_6215_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__0));
v___f_6216_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__1));
v___f_6217_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__2));
v___f_6218_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__3));
v___x_6219_ = lasm_fetch_take_request_head();
if (lean_obj_tag(v___x_6219_) == 0)
{
lean_object* v_a_6220_; lean_object* v___x_6222_; uint8_t v_isShared_6223_; uint8_t v_isSharedCheck_6290_; 
v_a_6220_ = lean_ctor_get(v___x_6219_, 0);
v_isSharedCheck_6290_ = !lean_is_exclusive(v___x_6219_);
if (v_isSharedCheck_6290_ == 0)
{
v___x_6222_ = v___x_6219_;
v_isShared_6223_ = v_isSharedCheck_6290_;
goto v_resetjp_6221_;
}
else
{
lean_inc(v_a_6220_);
lean_dec(v___x_6219_);
v___x_6222_ = lean_box(0);
v_isShared_6223_ = v_isSharedCheck_6290_;
goto v_resetjp_6221_;
}
v_resetjp_6221_:
{
lean_object* v_snd_6224_; lean_object* v_fst_6225_; lean_object* v_fst_6226_; lean_object* v_snd_6227_; lean_object* v___f_6228_; lean_object* v___x_6229_; lean_object* v_req_6231_; lean_object* v___x_6269_; lean_object* v___x_6270_; lean_object* v___x_6271_; uint8_t v___x_6272_; 
v_snd_6224_ = lean_ctor_get(v_a_6220_, 1);
lean_inc(v_snd_6224_);
v_fst_6225_ = lean_ctor_get(v_a_6220_, 0);
lean_inc_n(v_fst_6225_, 2);
lean_dec(v_a_6220_);
v_fst_6226_ = lean_ctor_get(v_snd_6224_, 0);
lean_inc_n(v_fst_6226_, 2);
v_snd_6227_ = lean_ctor_get(v_snd_6224_, 1);
lean_inc_n(v_snd_6227_, 2);
lean_dec(v_snd_6224_);
v___f_6228_ = lean_obj_once(&l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5, &l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5_once, _init_l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___closed__5);
v___x_6229_ = l_ByteArray_empty;
v___x_6269_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6269_, 0, v_fst_6225_);
lean_ctor_set(v___x_6269_, 1, v_fst_6226_);
lean_ctor_set(v___x_6269_, 2, v_snd_6227_);
lean_ctor_set(v___x_6269_, 3, v___x_6229_);
lean_ctor_set(v___x_6269_, 4, v___f_6228_);
lean_inc_ref(v___x_6269_);
v___x_6270_ = l_Lasm_Fetch_Request_path(v___x_6269_);
v___x_6271_ = lean_apply_1(v_options_6213_, v___x_6270_);
v___x_6272_ = lean_unbox(v___x_6271_);
if (v___x_6272_ == 0)
{
lean_object* v___f_6273_; lean_object* v___x_6274_; lean_object* v___x_6275_; uint8_t v___x_6276_; lean_object* v___x_6277_; lean_object* v___x_6278_; 
v___f_6273_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__8___boxed), 2, 1);
lean_closure_set(v___f_6273_, 0, v___x_6269_);
v___x_6274_ = lean_unsigned_to_nat(0u);
v___x_6275_ = lean_io_as_task(v___f_6273_, v___x_6274_);
v___x_6276_ = 1;
v___x_6277_ = lean_task_bind(v___x_6275_, v___f_6215_, v___x_6274_, v___x_6276_);
v___x_6278_ = lean_task_get_own(v___x_6277_);
if (lean_obj_tag(v___x_6278_) == 0)
{
lean_object* v_a_6279_; lean_object* v___x_6281_; uint8_t v_isShared_6282_; uint8_t v_isSharedCheck_6286_; 
lean_dec(v_snd_6227_);
lean_dec(v_fst_6226_);
lean_dec(v_fst_6225_);
lean_del_object(v___x_6222_);
lean_dec_ref(v_handler_6212_);
v_a_6279_ = lean_ctor_get(v___x_6278_, 0);
v_isSharedCheck_6286_ = !lean_is_exclusive(v___x_6278_);
if (v_isSharedCheck_6286_ == 0)
{
v___x_6281_ = v___x_6278_;
v_isShared_6282_ = v_isSharedCheck_6286_;
goto v_resetjp_6280_;
}
else
{
lean_inc(v_a_6279_);
lean_dec(v___x_6278_);
v___x_6281_ = lean_box(0);
v_isShared_6282_ = v_isSharedCheck_6286_;
goto v_resetjp_6280_;
}
v_resetjp_6280_:
{
lean_object* v___x_6284_; 
if (v_isShared_6282_ == 0)
{
lean_ctor_set_tag(v___x_6281_, 1);
v___x_6284_ = v___x_6281_;
goto v_reusejp_6283_;
}
else
{
lean_object* v_reuseFailAlloc_6285_; 
v_reuseFailAlloc_6285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6285_, 0, v_a_6279_);
v___x_6284_ = v_reuseFailAlloc_6285_;
goto v_reusejp_6283_;
}
v_reusejp_6283_:
{
return v___x_6284_;
}
}
}
else
{
lean_object* v_a_6287_; lean_object* v___f_6288_; lean_object* v___x_6289_; 
v_a_6287_ = lean_ctor_get(v___x_6278_, 0);
lean_inc(v_a_6287_);
lean_dec_ref_known(v___x_6278_, 1);
v___f_6288_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedRequest_default___closed__2));
v___x_6289_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6289_, 0, v_fst_6225_);
lean_ctor_set(v___x_6289_, 1, v_fst_6226_);
lean_ctor_set(v___x_6289_, 2, v_snd_6227_);
lean_ctor_set(v___x_6289_, 3, v_a_6287_);
lean_ctor_set(v___x_6289_, 4, v___f_6288_);
v_req_6231_ = v___x_6289_;
goto v___jp_6230_;
}
}
else
{
lean_dec(v_snd_6227_);
lean_dec(v_fst_6226_);
lean_dec(v_fst_6225_);
v_req_6231_ = v___x_6269_;
goto v___jp_6230_;
}
v___jp_6230_:
{
lean_object* v___f_6232_; lean_object* v___x_6233_; lean_object* v___x_6234_; uint8_t v___x_6235_; lean_object* v___x_6236_; lean_object* v___x_6237_; 
lean_inc_ref(v_req_6231_);
v___f_6232_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__6___boxed), 3, 2);
lean_closure_set(v___f_6232_, 0, v_handler_6212_);
lean_closure_set(v___f_6232_, 1, v_req_6231_);
v___x_6233_ = lean_unsigned_to_nat(0u);
v___x_6234_ = lean_io_as_task(v___f_6232_, v___x_6233_);
v___x_6235_ = 1;
v___x_6236_ = lean_task_bind(v___x_6234_, v___f_6218_, v___x_6233_, v___x_6235_);
v___x_6237_ = lean_task_get_own(v___x_6236_);
if (lean_obj_tag(v___x_6237_) == 0)
{
lean_object* v_a_6238_; lean_object* v___x_6240_; 
lean_dec_ref(v_req_6231_);
v_a_6238_ = lean_ctor_get(v___x_6237_, 0);
lean_inc(v_a_6238_);
lean_dec_ref_known(v___x_6237_, 1);
if (v_isShared_6223_ == 0)
{
lean_ctor_set_tag(v___x_6222_, 1);
lean_ctor_set(v___x_6222_, 0, v_a_6238_);
v___x_6240_ = v___x_6222_;
goto v_reusejp_6239_;
}
else
{
lean_object* v_reuseFailAlloc_6241_; 
v_reuseFailAlloc_6241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6241_, 0, v_a_6238_);
v___x_6240_ = v_reuseFailAlloc_6241_;
goto v_reusejp_6239_;
}
v_reusejp_6239_:
{
return v___x_6240_;
}
}
else
{
lean_object* v_a_6242_; lean_object* v_stream_6243_; 
lean_del_object(v___x_6222_);
v_a_6242_ = lean_ctor_get(v___x_6237_, 0);
lean_inc(v_a_6242_);
lean_dec_ref_known(v___x_6237_, 1);
v_stream_6243_ = lean_ctor_get(v_a_6242_, 2);
if (lean_obj_tag(v_stream_6243_) == 0)
{
uint16_t v_status_6244_; lean_object* v_headers_6245_; lean_object* v_body_6246_; lean_object* v_method_6247_; uint8_t v___x_6248_; 
v_status_6244_ = lean_ctor_get_uint16(v_a_6242_, sizeof(void*)*3);
v_headers_6245_ = lean_ctor_get(v_a_6242_, 0);
lean_inc_ref(v_headers_6245_);
v_body_6246_ = lean_ctor_get(v_a_6242_, 1);
lean_inc_ref(v_body_6246_);
lean_dec(v_a_6242_);
v_method_6247_ = lean_ctor_get(v_req_6231_, 0);
lean_inc_ref(v_method_6247_);
lean_dec_ref(v_req_6231_);
v___x_6248_ = l_Lasm_Fetch_bodyless(v_method_6247_, v_status_6244_);
lean_dec_ref(v_method_6247_);
if (v___x_6248_ == 0)
{
lean_object* v___x_6249_; 
v___x_6249_ = lasm_fetch_send_response(v_status_6244_, v_headers_6245_, v_body_6246_);
lean_dec_ref(v_body_6246_);
lean_dec_ref(v_headers_6245_);
return v___x_6249_;
}
else
{
lean_object* v___x_6250_; 
lean_dec_ref(v_body_6246_);
v___x_6250_ = lasm_fetch_send_response(v_status_6244_, v_headers_6245_, v___x_6229_);
lean_dec_ref(v_headers_6245_);
return v___x_6250_;
}
}
else
{
uint16_t v_status_6251_; lean_object* v_headers_6252_; lean_object* v_val_6253_; lean_object* v___f_6254_; lean_object* v___x_6255_; 
lean_inc_ref(v_stream_6243_);
v_status_6251_ = lean_ctor_get_uint16(v_a_6242_, sizeof(void*)*3);
v_headers_6252_ = lean_ctor_get(v_a_6242_, 0);
lean_inc_ref(v_headers_6252_);
lean_dec(v_a_6242_);
v_val_6253_ = lean_ctor_get(v_stream_6243_, 0);
lean_inc(v_val_6253_);
lean_dec_ref_known(v_stream_6243_, 1);
v___f_6254_ = lean_alloc_closure((void*)(l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___lam__7___boxed), 3, 2);
lean_closure_set(v___f_6254_, 0, v_val_6253_);
lean_closure_set(v___f_6254_, 1, v___f_6217_);
v___x_6255_ = lasm_fetch_start_response(v_status_6251_, v_headers_6252_);
lean_dec_ref(v_headers_6252_);
if (lean_obj_tag(v___x_6255_) == 0)
{
lean_object* v_method_6256_; uint8_t v___x_6257_; 
lean_dec_ref_known(v___x_6255_, 1);
v_method_6256_ = lean_ctor_get(v_req_6231_, 0);
lean_inc_ref(v_method_6256_);
lean_dec_ref(v_req_6231_);
v___x_6257_ = l_Lasm_Fetch_bodyless(v_method_6256_, v_status_6251_);
lean_dec_ref(v_method_6256_);
if (v___x_6257_ == 0)
{
lean_object* v___x_6258_; lean_object* v___x_6259_; lean_object* v___x_6260_; 
v___x_6258_ = lean_io_as_task(v___f_6254_, v___x_6233_);
v___x_6259_ = lean_task_bind(v___x_6258_, v___f_6216_, v___x_6233_, v___x_6235_);
v___x_6260_ = lean_task_get_own(v___x_6259_);
if (lean_obj_tag(v___x_6260_) == 0)
{
lean_object* v_a_6261_; lean_object* v___x_6262_; lean_object* v___x_6263_; lean_object* v___x_6264_; lean_object* v___x_6265_; 
v_a_6261_ = lean_ctor_get(v___x_6260_, 0);
lean_inc(v_a_6261_);
lean_dec_ref_known(v___x_6260_, 1);
v___x_6262_ = ((lean_object*)(l___private_Lasm_Fetch_0__Lasm_Fetch_jsResponse___lam__6___closed__0));
v___x_6263_ = lean_io_error_to_string(v_a_6261_);
v___x_6264_ = lean_string_append(v___x_6262_, v___x_6263_);
lean_dec_ref(v___x_6263_);
v___x_6265_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_6264_);
if (lean_obj_tag(v___x_6265_) == 0)
{
lean_object* v___x_6266_; 
lean_dec_ref_known(v___x_6265_, 1);
v___x_6266_ = lasm_fetch_finish(v___x_6257_);
return v___x_6266_;
}
else
{
return v___x_6265_;
}
}
else
{
lean_object* v___x_6267_; 
lean_dec_ref_known(v___x_6260_, 1);
v___x_6267_ = lasm_fetch_finish(v___x_6235_);
return v___x_6267_;
}
}
else
{
lean_object* v___x_6268_; 
lean_dec_ref(v___f_6254_);
v___x_6268_ = lasm_fetch_finish(v___x_6235_);
return v___x_6268_;
}
}
else
{
lean_dec_ref(v___f_6254_);
lean_dec_ref(v_req_6231_);
return v___x_6255_;
}
}
}
}
}
}
else
{
lean_object* v_a_6291_; lean_object* v___x_6293_; uint8_t v_isShared_6294_; uint8_t v_isSharedCheck_6298_; 
lean_dec_ref(v_options_6213_);
lean_dec_ref(v_handler_6212_);
v_a_6291_ = lean_ctor_get(v___x_6219_, 0);
v_isSharedCheck_6298_ = !lean_is_exclusive(v___x_6219_);
if (v_isSharedCheck_6298_ == 0)
{
v___x_6293_ = v___x_6219_;
v_isShared_6294_ = v_isSharedCheck_6298_;
goto v_resetjp_6292_;
}
else
{
lean_inc(v_a_6291_);
lean_dec(v___x_6219_);
v___x_6293_ = lean_box(0);
v_isShared_6294_ = v_isSharedCheck_6298_;
goto v_resetjp_6292_;
}
v_resetjp_6292_:
{
lean_object* v___x_6296_; 
if (v_isShared_6294_ == 0)
{
v___x_6296_ = v___x_6293_;
goto v_reusejp_6295_;
}
else
{
lean_object* v_reuseFailAlloc_6297_; 
v_reuseFailAlloc_6297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6297_, 0, v_a_6291_);
v___x_6296_ = v_reuseFailAlloc_6297_;
goto v_reusejp_6295_;
}
v_reusejp_6295_:
{
return v___x_6296_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce___boxed(lean_object* v_handler_6299_, lean_object* v_options_6300_, lean_object* v_a_6301_){
_start:
{
lean_object* v_res_6302_; 
v_res_6302_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6299_, v_options_6300_);
return v_res_6302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith(lean_object* v_options_6306_, lean_object* v_handler_6307_){
_start:
{
uint8_t v___x_6309_; 
v___x_6309_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__6, &l_Lasm_Fetch_fetch___closed__6_once, _init_l_Lasm_Fetch_fetch___closed__6);
if (v___x_6309_ == 0)
{
uint8_t v___x_6310_; 
v___x_6310_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__4, &l_Lasm_Fetch_fetch___closed__4_once, _init_l_Lasm_Fetch_fetch___closed__4);
if (v___x_6310_ == 0)
{
uint8_t v___x_6311_; 
v___x_6311_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__5, &l_Lasm_Fetch_fetch___closed__5_once, _init_l_Lasm_Fetch_fetch___closed__5);
if (v___x_6311_ == 0)
{
uint8_t v___x_6312_; 
v___x_6312_ = lean_uint8_once(&l_Lasm_Fetch_fetch___closed__1, &l_Lasm_Fetch_fetch___closed__1_once, _init_l_Lasm_Fetch_fetch___closed__1);
if (v___x_6312_ == 0)
{
lean_object* v___x_6313_; lean_object* v___x_6314_; 
lean_dec_ref(v_handler_6307_);
lean_dec_ref(v_options_6306_);
v___x_6313_ = ((lean_object*)(l_Lasm_Fetch_serveWith___closed__1));
v___x_6314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6314_, 0, v___x_6313_);
return v___x_6314_;
}
else
{
lean_object* v___x_6315_; 
v___x_6315_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6315_) == 0)
{
lean_object* v_a_6316_; uint8_t v___x_6317_; 
v_a_6316_ = lean_ctor_get(v___x_6315_, 0);
lean_inc(v_a_6316_);
lean_dec_ref_known(v___x_6315_, 1);
v___x_6317_ = lean_unbox(v_a_6316_);
lean_dec(v_a_6316_);
if (v___x_6317_ == 0)
{
lean_object* v___x_6318_; 
v___x_6318_ = l_Lasm_Fetch_serveNode(v_handler_6307_, v_options_6306_);
return v___x_6318_;
}
else
{
lean_object* v___x_6319_; 
v___x_6319_ = l_Lasm_Fetch_jsFetchHandler(v_handler_6307_, v_options_6306_);
if (lean_obj_tag(v___x_6319_) == 0)
{
lean_object* v_a_6320_; lean_object* v___x_6321_; 
v_a_6320_ = lean_ctor_get(v___x_6319_, 0);
lean_inc(v_a_6320_);
lean_dec_ref_known(v___x_6319_, 1);
v___x_6321_ = l_Lasm_JS_exportDefault(v_a_6320_);
return v___x_6321_;
}
else
{
lean_object* v_a_6322_; lean_object* v___x_6324_; uint8_t v_isShared_6325_; uint8_t v_isSharedCheck_6329_; 
v_a_6322_ = lean_ctor_get(v___x_6319_, 0);
v_isSharedCheck_6329_ = !lean_is_exclusive(v___x_6319_);
if (v_isSharedCheck_6329_ == 0)
{
v___x_6324_ = v___x_6319_;
v_isShared_6325_ = v_isSharedCheck_6329_;
goto v_resetjp_6323_;
}
else
{
lean_inc(v_a_6322_);
lean_dec(v___x_6319_);
v___x_6324_ = lean_box(0);
v_isShared_6325_ = v_isSharedCheck_6329_;
goto v_resetjp_6323_;
}
v_resetjp_6323_:
{
lean_object* v___x_6327_; 
if (v_isShared_6325_ == 0)
{
v___x_6327_ = v___x_6324_;
goto v_reusejp_6326_;
}
else
{
lean_object* v_reuseFailAlloc_6328_; 
v_reuseFailAlloc_6328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6328_, 0, v_a_6322_);
v___x_6327_ = v_reuseFailAlloc_6328_;
goto v_reusejp_6326_;
}
v_reusejp_6326_:
{
return v___x_6327_;
}
}
}
}
}
else
{
lean_object* v_a_6330_; lean_object* v___x_6332_; uint8_t v_isShared_6333_; uint8_t v_isSharedCheck_6337_; 
lean_dec_ref(v_handler_6307_);
lean_dec_ref(v_options_6306_);
v_a_6330_ = lean_ctor_get(v___x_6315_, 0);
v_isSharedCheck_6337_ = !lean_is_exclusive(v___x_6315_);
if (v_isSharedCheck_6337_ == 0)
{
v___x_6332_ = v___x_6315_;
v_isShared_6333_ = v_isSharedCheck_6337_;
goto v_resetjp_6331_;
}
else
{
lean_inc(v_a_6330_);
lean_dec(v___x_6315_);
v___x_6332_ = lean_box(0);
v_isShared_6333_ = v_isSharedCheck_6337_;
goto v_resetjp_6331_;
}
v_resetjp_6331_:
{
lean_object* v___x_6335_; 
if (v_isShared_6333_ == 0)
{
v___x_6335_ = v___x_6332_;
goto v_reusejp_6334_;
}
else
{
lean_object* v_reuseFailAlloc_6336_; 
v_reuseFailAlloc_6336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6336_, 0, v_a_6330_);
v___x_6335_ = v_reuseFailAlloc_6336_;
goto v_reusejp_6334_;
}
v_reusejp_6334_:
{
return v___x_6335_;
}
}
}
}
}
else
{
lean_object* v___x_6338_; 
v___x_6338_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6307_, v_options_6306_);
return v___x_6338_;
}
}
else
{
lean_object* v___x_6339_; 
v___x_6339_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6307_, v_options_6306_);
return v___x_6339_;
}
}
else
{
lean_object* v___x_6340_; 
v___x_6340_ = l___private_Lasm_Fetch_0__Lasm_Fetch_serveOnce(v_handler_6307_, v_options_6306_);
return v___x_6340_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serveWith___boxed(lean_object* v_options_6341_, lean_object* v_handler_6342_, lean_object* v_a_6343_){
_start:
{
lean_object* v_res_6344_; 
v_res_6344_ = l_Lasm_Fetch_serveWith(v_options_6341_, v_handler_6342_);
return v_res_6344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve(lean_object* v_handler_6345_){
_start:
{
lean_object* v___f_6347_; lean_object* v___x_6348_; 
v___f_6347_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedServeOptions_default___closed__0));
v___x_6348_ = l_Lasm_Fetch_serveWith(v___f_6347_, v_handler_6345_);
return v___x_6348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_serve___boxed(lean_object* v_handler_6349_, lean_object* v_a_6350_){
_start:
{
lean_object* v_res_6351_; 
v_res_6351_ = l_Lasm_Fetch_serve(v_handler_6349_);
return v_res_6351_;
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
