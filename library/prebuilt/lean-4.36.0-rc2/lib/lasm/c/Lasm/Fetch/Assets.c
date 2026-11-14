// Lean compiler output
// Module: Lasm.Fetch.Assets
// Imports: public import Init public meta import Init public import Lasm.Fetch
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
uint8_t l_System_FilePath_isDir(lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint8_t lean_uint8_add(uint8_t, uint8_t);
uint32_t lean_uint8_to_uint32(uint8_t);
uint8_t lean_uint8_sub(uint8_t, uint8_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
uint32_t lean_uint32_shift_right(uint32_t, uint32_t);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
lean_object* lean_byte_array_size(lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_x21___redArg(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_Fetch_Response_withHeader(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_empty_byte_array(lean_object*);
lean_object* l_Lasm_Fetch_Response_withBody(lean_object*, lean_object*, uint16_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_Fetch_Request_path(lean_object*);
lean_object* l_Lasm_Fetch_Request_header_x3f(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_instInhabitedAsset_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_Fetch_instInhabitedAsset_default___closed__0 = (const lean_object*)&l_Lasm_Fetch_instInhabitedAsset_default___closed__0_value;
static const lean_ctor_object l_Lasm_Fetch_instInhabitedAsset_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_instInhabitedAsset_default___closed__0_value),((lean_object*)&l_Lasm_Fetch_instInhabitedAsset_default___closed__0_value),((lean_object*)&l_Lasm_Fetch_instInhabitedAsset_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_Fetch_instInhabitedAsset_default___closed__1 = (const lean_object*)&l_Lasm_Fetch_instInhabitedAsset_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_Fetch_instInhabitedAsset_default = (const lean_object*)&l_Lasm_Fetch_instInhabitedAsset_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_Fetch_instInhabitedAsset = (const lean_object*)&l_Lasm_Fetch_instInhabitedAsset_default___closed__1_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__0 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__0_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "html"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__1 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__1_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "js"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__2 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__2_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mjs"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__3 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__3_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "css"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__4 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__4_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "json"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__5 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__5_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "wasm"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__6 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__6_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "svg"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__7 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__7_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "png"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__8 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__8_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "jpg"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__9 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__9_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "jpeg"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__10 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__10_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "gif"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__11 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__11_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "webp"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__12 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__12_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ico"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__13 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__13_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "txt"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__14 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__14_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "woff2"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__15 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__15_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "woff"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__16 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__16_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "webmanifest"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__17 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__17_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "application/octet-stream"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__18 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__18_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "application/manifest+json"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__19 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__19_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "font/woff"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__20 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__20_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "font/woff2"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__21 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__21_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "text/plain; charset=utf-8"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__22 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__22_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "image/x-icon"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__23 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__23_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "image/webp"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__24 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__24_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "image/gif"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__25 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__25_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "image/jpeg"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__26 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__26_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "image/png"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__27 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__27_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "image/svg+xml"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__28 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__28_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "application/wasm"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__29 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__29_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "application/json; charset=utf-8"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__30 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__30_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "text/css; charset=utf-8"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__31 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__31_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "text/javascript; charset=utf-8"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__32 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__32_value;
static const lean_string_object l_Lasm_Fetch_contentTypeOf___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "text/html; charset=utf-8"};
static const lean_object* l_Lasm_Fetch_contentTypeOf___closed__33 = (const lean_object*)&l_Lasm_Fetch_contentTypeOf___closed__33_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_contentTypeOf(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_contentTypeOf___boxed(lean_object*);
LEAN_EXPORT uint32_t l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_b64val(uint8_t);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_b64val___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__1(lean_object*, lean_object*, uint8_t, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_base64Decode(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_immutable_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_immutable_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_immutable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lasm_Fetch_immutable___closed__0 = (const lean_object*)&l_Lasm_Fetch_immutable___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_Fetch_immutable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_immutable___boxed(lean_object*);
static const lean_string_object l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "no-cache"};
static const lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___closed__0_value;
static const lean_string_object l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "public, max-age=31536000, immutable"};
static const lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___closed__1 = (const lean_object*)&l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___boxed(lean_object*);
static const lean_string_object l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "index.html"};
static const lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_readFile_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_readFile_x3f___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_Fetch_Assets_serve___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_Fetch_Assets_serve___lam__0___closed__0 = (const lean_object*)&l_Lasm_Fetch_Assets_serve___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_Fetch_Assets_serve___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_Assets_serve___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Fetch_Assets_serve___lam__0___closed__1 = (const lean_object*)&l_Lasm_Fetch_Assets_serve___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_serve___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_serve___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".."};
static const lean_object* l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___closed__0 = (const lean_object*)&l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___closed__0_value;
LEAN_EXPORT uint8_t l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___boxed(lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__0_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__1_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__2_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__3_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "accept-encoding"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__4_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cache-control"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__5_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "vary"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__6_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "content-encoding"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__7_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "br"};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__8 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1___boxed(lean_object*);
static const lean_closure_object l_Lasm_Fetch_Assets_serve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Fetch_Assets_serve___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Fetch_Assets_serve___closed__0 = (const lean_object*)&l_Lasm_Fetch_Assets_serve___closed__0_value;
static const lean_string_object l_Lasm_Fetch_Assets_serve___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lasm_Fetch_Assets_serve___closed__1 = (const lean_object*)&l_Lasm_Fetch_Assets_serve___closed__1_value;
static const lean_string_object l_Lasm_Fetch_Assets_serve___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l_Lasm_Fetch_Assets_serve___closed__2 = (const lean_object*)&l_Lasm_Fetch_Assets_serve___closed__2_value;
static const lean_string_object l_Lasm_Fetch_Assets_serve___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HEAD"};
static const lean_object* l_Lasm_Fetch_Assets_serve___closed__3 = (const lean_object*)&l_Lasm_Fetch_Assets_serve___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_serve(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_serve___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_wrap___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_wrap___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_wrap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_wrap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_contentTypeOf(lean_object* v_path_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v_ext_47_; lean_object* v___x_48_; uint8_t v___x_49_; 
v___x_42_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedAsset_default___closed__0));
v___x_43_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__0));
v___x_44_ = lean_unsigned_to_nat(0u);
v___x_45_ = lean_box(0);
v___x_46_ = l_String_splitOnAux(v_path_41_, v___x_43_, v___x_44_, v___x_44_, v___x_44_, v___x_45_);
v_ext_47_ = l_List_getLast_x21___redArg(v___x_42_, v___x_46_);
lean_dec(v___x_46_);
v___x_48_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__1));
v___x_49_ = lean_string_dec_eq(v_ext_47_, v___x_48_);
if (v___x_49_ == 0)
{
lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_50_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__2));
v___x_51_ = lean_string_dec_eq(v_ext_47_, v___x_50_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; uint8_t v___x_53_; 
v___x_52_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__3));
v___x_53_ = lean_string_dec_eq(v_ext_47_, v___x_52_);
if (v___x_53_ == 0)
{
lean_object* v___x_54_; uint8_t v___x_55_; 
v___x_54_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__4));
v___x_55_ = lean_string_dec_eq(v_ext_47_, v___x_54_);
if (v___x_55_ == 0)
{
lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_56_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__5));
v___x_57_ = lean_string_dec_eq(v_ext_47_, v___x_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; uint8_t v___x_59_; 
v___x_58_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__6));
v___x_59_ = lean_string_dec_eq(v_ext_47_, v___x_58_);
if (v___x_59_ == 0)
{
lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_60_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__7));
v___x_61_ = lean_string_dec_eq(v_ext_47_, v___x_60_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; uint8_t v___x_63_; 
v___x_62_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__8));
v___x_63_ = lean_string_dec_eq(v_ext_47_, v___x_62_);
if (v___x_63_ == 0)
{
lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_64_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__9));
v___x_65_ = lean_string_dec_eq(v_ext_47_, v___x_64_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_66_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__10));
v___x_67_ = lean_string_dec_eq(v_ext_47_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_68_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__11));
v___x_69_ = lean_string_dec_eq(v_ext_47_, v___x_68_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; uint8_t v___x_71_; 
v___x_70_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__12));
v___x_71_ = lean_string_dec_eq(v_ext_47_, v___x_70_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; uint8_t v___x_73_; 
v___x_72_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__13));
v___x_73_ = lean_string_dec_eq(v_ext_47_, v___x_72_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__14));
v___x_75_ = lean_string_dec_eq(v_ext_47_, v___x_74_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_76_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__15));
v___x_77_ = lean_string_dec_eq(v_ext_47_, v___x_76_);
if (v___x_77_ == 0)
{
lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_78_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__16));
v___x_79_ = lean_string_dec_eq(v_ext_47_, v___x_78_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_80_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__17));
v___x_81_ = lean_string_dec_eq(v_ext_47_, v___x_80_);
lean_dec(v_ext_47_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; 
v___x_82_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__18));
return v___x_82_;
}
else
{
lean_object* v___x_83_; 
v___x_83_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__19));
return v___x_83_;
}
}
else
{
lean_object* v___x_84_; 
lean_dec(v_ext_47_);
v___x_84_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__20));
return v___x_84_;
}
}
else
{
lean_object* v___x_85_; 
lean_dec(v_ext_47_);
v___x_85_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__21));
return v___x_85_;
}
}
else
{
lean_object* v___x_86_; 
lean_dec(v_ext_47_);
v___x_86_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__22));
return v___x_86_;
}
}
else
{
lean_object* v___x_87_; 
lean_dec(v_ext_47_);
v___x_87_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__23));
return v___x_87_;
}
}
else
{
lean_object* v___x_88_; 
lean_dec(v_ext_47_);
v___x_88_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__24));
return v___x_88_;
}
}
else
{
lean_object* v___x_89_; 
lean_dec(v_ext_47_);
v___x_89_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__25));
return v___x_89_;
}
}
else
{
lean_object* v___x_90_; 
lean_dec(v_ext_47_);
v___x_90_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__26));
return v___x_90_;
}
}
else
{
lean_object* v___x_91_; 
lean_dec(v_ext_47_);
v___x_91_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__26));
return v___x_91_;
}
}
else
{
lean_object* v___x_92_; 
lean_dec(v_ext_47_);
v___x_92_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__27));
return v___x_92_;
}
}
else
{
lean_object* v___x_93_; 
lean_dec(v_ext_47_);
v___x_93_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__28));
return v___x_93_;
}
}
else
{
lean_object* v___x_94_; 
lean_dec(v_ext_47_);
v___x_94_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__29));
return v___x_94_;
}
}
else
{
lean_object* v___x_95_; 
lean_dec(v_ext_47_);
v___x_95_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__30));
return v___x_95_;
}
}
else
{
lean_object* v___x_96_; 
lean_dec(v_ext_47_);
v___x_96_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__31));
return v___x_96_;
}
}
else
{
lean_object* v___x_97_; 
lean_dec(v_ext_47_);
v___x_97_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__32));
return v___x_97_;
}
}
else
{
lean_object* v___x_98_; 
lean_dec(v_ext_47_);
v___x_98_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__32));
return v___x_98_;
}
}
else
{
lean_object* v___x_99_; 
lean_dec(v_ext_47_);
v___x_99_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__33));
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_contentTypeOf___boxed(lean_object* v_path_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lasm_Fetch_contentTypeOf(v_path_100_);
lean_dec_ref(v_path_100_);
return v_res_101_;
}
}
LEAN_EXPORT uint32_t l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_b64val(uint8_t v_c_102_){
_start:
{
uint8_t v___x_127_; uint8_t v___x_128_; 
v___x_127_ = 65;
v___x_128_ = lean_uint8_dec_le(v___x_127_, v_c_102_);
if (v___x_128_ == 0)
{
goto v___jp_119_;
}
else
{
uint8_t v___x_129_; uint8_t v___x_130_; 
v___x_129_ = 90;
v___x_130_ = lean_uint8_dec_le(v_c_102_, v___x_129_);
if (v___x_130_ == 0)
{
goto v___jp_119_;
}
else
{
uint8_t v___x_131_; uint32_t v___x_132_; 
v___x_131_ = lean_uint8_sub(v_c_102_, v___x_127_);
v___x_132_ = lean_uint8_to_uint32(v___x_131_);
return v___x_132_;
}
}
v___jp_103_:
{
uint8_t v___x_104_; uint8_t v___x_105_; 
v___x_104_ = 43;
v___x_105_ = lean_uint8_dec_eq(v_c_102_, v___x_104_);
if (v___x_105_ == 0)
{
uint8_t v___x_106_; uint8_t v___x_107_; 
v___x_106_ = 47;
v___x_107_ = lean_uint8_dec_eq(v_c_102_, v___x_106_);
if (v___x_107_ == 0)
{
uint32_t v___x_108_; 
v___x_108_ = 0;
return v___x_108_;
}
else
{
uint32_t v___x_109_; 
v___x_109_ = 63;
return v___x_109_;
}
}
else
{
uint32_t v___x_110_; 
v___x_110_ = 62;
return v___x_110_;
}
}
v___jp_111_:
{
uint8_t v___x_112_; uint8_t v___x_113_; 
v___x_112_ = 48;
v___x_113_ = lean_uint8_dec_le(v___x_112_, v_c_102_);
if (v___x_113_ == 0)
{
goto v___jp_103_;
}
else
{
uint8_t v___x_114_; uint8_t v___x_115_; 
v___x_114_ = 57;
v___x_115_ = lean_uint8_dec_le(v_c_102_, v___x_114_);
if (v___x_115_ == 0)
{
goto v___jp_103_;
}
else
{
uint8_t v___x_116_; uint8_t v___x_117_; uint32_t v___x_118_; 
v___x_116_ = 4;
v___x_117_ = lean_uint8_add(v_c_102_, v___x_116_);
v___x_118_ = lean_uint8_to_uint32(v___x_117_);
return v___x_118_;
}
}
}
v___jp_119_:
{
uint8_t v___x_120_; uint8_t v___x_121_; 
v___x_120_ = 97;
v___x_121_ = lean_uint8_dec_le(v___x_120_, v_c_102_);
if (v___x_121_ == 0)
{
goto v___jp_111_;
}
else
{
uint8_t v___x_122_; uint8_t v___x_123_; 
v___x_122_ = 122;
v___x_123_ = lean_uint8_dec_le(v_c_102_, v___x_122_);
if (v___x_123_ == 0)
{
goto v___jp_111_;
}
else
{
uint8_t v___x_124_; uint8_t v___x_125_; uint32_t v___x_126_; 
v___x_124_ = 71;
v___x_125_ = lean_uint8_sub(v_c_102_, v___x_124_);
v___x_126_ = lean_uint8_to_uint32(v___x_125_);
return v___x_126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_b64val___boxed(lean_object* v_c_133_){
_start:
{
uint8_t v_c_boxed_134_; uint32_t v_res_135_; lean_object* v_r_136_; 
v_c_boxed_134_ = lean_unbox(v_c_133_);
v_res_135_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_b64val(v_c_boxed_134_);
v_r_136_ = lean_box_uint32(v_res_135_);
return v_r_136_;
}
}
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__0(lean_object* v_xs_137_, lean_object* v_i_138_){
_start:
{
lean_object* v___x_139_; uint8_t v___x_140_; 
v___x_139_ = lean_byte_array_size(v_xs_137_);
v___x_140_ = lean_nat_dec_lt(v_i_138_, v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__0___boxed(lean_object* v_xs_141_, lean_object* v_i_142_){
_start:
{
uint8_t v_res_143_; lean_object* v_r_144_; 
v_res_143_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__0(v_xs_141_, v_i_142_);
lean_dec(v_i_142_);
lean_dec_ref(v_xs_141_);
v_r_144_ = lean_box(v_res_143_);
return v_r_144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__1(lean_object* v_snd_145_, lean_object* v___x_146_, uint8_t v___y_147_, uint32_t v___x_148_, lean_object* v_____r_149_, lean_object* v_out_150_){
_start:
{
lean_object* v_out_152_; uint8_t v___x_156_; uint8_t v___x_157_; 
v___x_156_ = 61;
v___x_157_ = lean_uint8_dec_eq(v___y_147_, v___x_156_);
if (v___x_157_ == 0)
{
uint8_t v___x_158_; lean_object* v___x_159_; 
v___x_158_ = lean_uint32_to_uint8(v___x_148_);
v___x_159_ = lean_byte_array_push(v_out_150_, v___x_158_);
v_out_152_ = v___x_159_;
goto v___jp_151_;
}
else
{
v_out_152_ = v_out_150_;
goto v___jp_151_;
}
v___jp_151_:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_153_ = lean_nat_add(v_snd_145_, v___x_146_);
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v_out_152_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
v___x_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
return v___x_155_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__1___boxed(lean_object* v_snd_160_, lean_object* v___x_161_, lean_object* v___y_162_, lean_object* v___x_163_, lean_object* v_____r_164_, lean_object* v_out_165_){
_start:
{
uint8_t v___y_1241__boxed_166_; uint32_t v___x_1242__boxed_167_; lean_object* v_res_168_; 
v___y_1241__boxed_166_ = lean_unbox(v___y_162_);
v___x_1242__boxed_167_ = lean_unbox_uint32(v___x_163_);
lean_dec(v___x_163_);
v_res_168_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__1(v_snd_160_, v___x_161_, v___y_1241__boxed_166_, v___x_1242__boxed_167_, v_____r_164_, v_out_165_);
lean_dec(v___x_161_);
lean_dec(v_snd_160_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg(lean_object* v_b_169_, lean_object* v___x_170_, lean_object* v_a_171_){
_start:
{
lean_object* v___y_173_; lean_object* v_fst_177_; lean_object* v_snd_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_253_; 
v_fst_177_ = lean_ctor_get(v_a_171_, 0);
v_snd_178_ = lean_ctor_get(v_a_171_, 1);
v_isSharedCheck_253_ = !lean_is_exclusive(v_a_171_);
if (v_isSharedCheck_253_ == 0)
{
v___x_180_ = v_a_171_;
v_isShared_181_ = v_isSharedCheck_253_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_snd_178_);
lean_inc(v_fst_177_);
lean_dec(v_a_171_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_253_;
goto v_resetjp_179_;
}
v___jp_172_:
{
if (lean_obj_tag(v___y_173_) == 0)
{
lean_object* v_a_174_; 
v_a_174_ = lean_ctor_get(v___y_173_, 0);
lean_inc(v_a_174_);
lean_dec_ref_known(v___y_173_, 1);
return v_a_174_;
}
else
{
lean_object* v_a_175_; 
v_a_175_ = lean_ctor_get(v___y_173_, 0);
lean_inc(v_a_175_);
lean_dec_ref_known(v___y_173_, 1);
v_a_171_ = v_a_175_;
goto _start;
}
}
v_resetjp_179_:
{
lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_182_ = lean_unsigned_to_nat(3u);
v___x_183_ = lean_nat_add(v_snd_178_, v___x_182_);
v___x_184_ = lean_nat_dec_lt(v___x_183_, v___x_170_);
if (v___x_184_ == 0)
{
lean_object* v___x_186_; 
lean_dec(v___x_183_);
if (v_isShared_181_ == 0)
{
v___x_186_ = v___x_180_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_fst_177_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v_snd_178_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
else
{
lean_object* v___x_188_; uint32_t v___y_190_; uint8_t v___y_191_; uint8_t v___y_192_; uint8_t v___x_209_; uint32_t v___y_211_; uint8_t v___y_212_; uint32_t v___y_223_; uint8_t v___y_224_; uint8_t v___y_237_; uint8_t v___x_248_; 
lean_del_object(v___x_180_);
v___x_188_ = lean_unsigned_to_nat(4u);
v___x_209_ = 0;
v___x_248_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__0(v_b_169_, v_snd_178_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_249_ = lean_box(v___x_209_);
v___x_250_ = l_outOfBounds___redArg(v___x_249_);
lean_dec(v___x_249_);
v___x_251_ = lean_unbox(v___x_250_);
lean_dec(v___x_250_);
v___y_237_ = v___x_251_;
goto v___jp_236_;
}
else
{
uint8_t v___x_252_; 
v___x_252_ = lean_byte_array_fget(v_b_169_, v_snd_178_);
v___y_237_ = v___x_252_;
goto v___jp_236_;
}
v___jp_189_:
{
uint32_t v___x_193_; uint32_t v___x_194_; uint32_t v___x_195_; uint32_t v___x_196_; uint8_t v___x_197_; lean_object* v___x_198_; uint8_t v___x_199_; uint8_t v___x_200_; 
v___x_193_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_b64val(v___y_192_);
v___x_194_ = lean_uint32_lor(v___y_190_, v___x_193_);
v___x_195_ = 16;
v___x_196_ = lean_uint32_shift_right(v___x_194_, v___x_195_);
v___x_197_ = lean_uint32_to_uint8(v___x_196_);
v___x_198_ = lean_byte_array_push(v_fst_177_, v___x_197_);
v___x_199_ = 61;
v___x_200_ = lean_uint8_dec_eq(v___y_191_, v___x_199_);
if (v___x_200_ == 0)
{
uint32_t v___x_201_; uint32_t v___x_202_; uint8_t v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_201_ = 8;
v___x_202_ = lean_uint32_shift_right(v___x_194_, v___x_201_);
v___x_203_ = lean_uint32_to_uint8(v___x_202_);
v___x_204_ = lean_byte_array_push(v___x_198_, v___x_203_);
v___x_205_ = lean_box(0);
v___x_206_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__1(v_snd_178_, v___x_188_, v___y_192_, v___x_194_, v___x_205_, v___x_204_);
lean_dec(v_snd_178_);
v___y_173_ = v___x_206_;
goto v___jp_172_;
}
else
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_box(0);
v___x_208_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__1(v_snd_178_, v___x_188_, v___y_192_, v___x_194_, v___x_207_, v___x_198_);
lean_dec(v_snd_178_);
v___y_173_ = v___x_208_;
goto v___jp_172_;
}
}
v___jp_210_:
{
uint32_t v___x_213_; uint32_t v___x_214_; uint32_t v___x_215_; uint32_t v___x_216_; uint8_t v___x_217_; 
v___x_213_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_b64val(v___y_212_);
v___x_214_ = 6;
v___x_215_ = lean_uint32_shift_left(v___x_213_, v___x_214_);
v___x_216_ = lean_uint32_lor(v___y_211_, v___x_215_);
v___x_217_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__0(v_b_169_, v___x_183_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; lean_object* v___x_219_; uint8_t v___x_220_; 
lean_dec(v___x_183_);
v___x_218_ = lean_box(v___x_209_);
v___x_219_ = l_outOfBounds___redArg(v___x_218_);
lean_dec(v___x_218_);
v___x_220_ = lean_unbox(v___x_219_);
lean_dec(v___x_219_);
v___y_190_ = v___x_216_;
v___y_191_ = v___y_212_;
v___y_192_ = v___x_220_;
goto v___jp_189_;
}
else
{
uint8_t v___x_221_; 
v___x_221_ = lean_byte_array_fget(v_b_169_, v___x_183_);
lean_dec(v___x_183_);
v___y_190_ = v___x_216_;
v___y_191_ = v___y_212_;
v___y_192_ = v___x_221_;
goto v___jp_189_;
}
}
v___jp_222_:
{
uint32_t v___x_225_; uint32_t v___x_226_; uint32_t v___x_227_; uint32_t v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_225_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_b64val(v___y_224_);
v___x_226_ = 12;
v___x_227_ = lean_uint32_shift_left(v___x_225_, v___x_226_);
v___x_228_ = lean_uint32_lor(v___y_223_, v___x_227_);
v___x_229_ = lean_unsigned_to_nat(2u);
v___x_230_ = lean_nat_add(v_snd_178_, v___x_229_);
v___x_231_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__0(v_b_169_, v___x_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; 
lean_dec(v___x_230_);
v___x_232_ = lean_box(v___x_209_);
v___x_233_ = l_outOfBounds___redArg(v___x_232_);
lean_dec(v___x_232_);
v___x_234_ = lean_unbox(v___x_233_);
lean_dec(v___x_233_);
v___y_211_ = v___x_228_;
v___y_212_ = v___x_234_;
goto v___jp_210_;
}
else
{
uint8_t v___x_235_; 
v___x_235_ = lean_byte_array_fget(v_b_169_, v___x_230_);
lean_dec(v___x_230_);
v___y_211_ = v___x_228_;
v___y_212_ = v___x_235_;
goto v___jp_210_;
}
}
v___jp_236_:
{
uint32_t v___x_238_; uint32_t v___x_239_; uint32_t v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_238_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_b64val(v___y_237_);
v___x_239_ = 18;
v___x_240_ = lean_uint32_shift_left(v___x_238_, v___x_239_);
v___x_241_ = lean_unsigned_to_nat(1u);
v___x_242_ = lean_nat_add(v_snd_178_, v___x_241_);
v___x_243_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__0(v_b_169_, v___x_242_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; lean_object* v___x_245_; uint8_t v___x_246_; 
lean_dec(v___x_242_);
v___x_244_ = lean_box(v___x_209_);
v___x_245_ = l_outOfBounds___redArg(v___x_244_);
lean_dec(v___x_244_);
v___x_246_ = lean_unbox(v___x_245_);
lean_dec(v___x_245_);
v___y_223_ = v___x_240_;
v___y_224_ = v___x_246_;
goto v___jp_222_;
}
else
{
uint8_t v___x_247_; 
v___x_247_ = lean_byte_array_fget(v_b_169_, v___x_242_);
lean_dec(v___x_242_);
v___y_223_ = v___x_240_;
v___y_224_ = v___x_247_;
goto v___jp_222_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___boxed(lean_object* v_b_254_, lean_object* v___x_255_, lean_object* v_a_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg(v_b_254_, v___x_255_, v_a_256_);
lean_dec(v___x_255_);
lean_dec_ref(v_b_254_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_base64Decode(lean_object* v_s_258_){
_start:
{
lean_object* v_b_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v_out_265_; lean_object* v_i_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v_fst_269_; 
v_b_259_ = lean_string_to_utf8(v_s_258_);
v___x_260_ = lean_byte_array_size(v_b_259_);
v___x_261_ = lean_unsigned_to_nat(2u);
v___x_262_ = lean_nat_shiftr(v___x_260_, v___x_261_);
v___x_263_ = lean_unsigned_to_nat(3u);
v___x_264_ = lean_nat_mul(v___x_262_, v___x_263_);
lean_dec(v___x_262_);
v_out_265_ = lean_mk_empty_byte_array(v___x_264_);
lean_dec(v___x_264_);
v_i_266_ = lean_unsigned_to_nat(0u);
v___x_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_267_, 0, v_out_265_);
lean_ctor_set(v___x_267_, 1, v_i_266_);
v___x_268_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg(v_b_259_, v___x_260_, v___x_267_);
lean_dec_ref(v_b_259_);
v_fst_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc(v_fst_269_);
lean_dec_ref(v___x_268_);
return v_fst_269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0(lean_object* v_b_270_, lean_object* v___x_271_, lean_object* v_inst_272_, lean_object* v_a_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg(v_b_270_, v___x_271_, v_a_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___boxed(lean_object* v_b_275_, lean_object* v___x_276_, lean_object* v_inst_277_, lean_object* v_a_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0(v_b_275_, v___x_276_, v_inst_277_, v_a_278_);
lean_dec(v___x_276_);
lean_dec_ref(v_b_275_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_immutable_spec__0(lean_object* v_s_280_, lean_object* v_pos_281_){
_start:
{
lean_object* v_str_282_; lean_object* v_startInclusive_283_; lean_object* v_endExclusive_284_; lean_object* v___x_285_; lean_object* v___x_294_; lean_object* v___x_295_; uint8_t v_decide_296_; 
v_str_282_ = lean_ctor_get(v_s_280_, 0);
v_startInclusive_283_ = lean_ctor_get(v_s_280_, 1);
v_endExclusive_284_ = lean_ctor_get(v_s_280_, 2);
v___x_285_ = lean_nat_add(v_startInclusive_283_, v_pos_281_);
v___x_294_ = lean_unsigned_to_nat(0u);
v___x_295_ = lean_nat_sub(v_endExclusive_284_, v___x_285_);
v_decide_296_ = lean_nat_dec_eq(v___x_294_, v___x_295_);
lean_dec(v___x_295_);
if (v_decide_296_ == 0)
{
uint32_t v___x_297_; uint32_t v___x_303_; uint8_t v___x_304_; 
v___x_297_ = lean_string_utf8_get_fast(v_str_282_, v___x_285_);
v___x_303_ = 48;
v___x_304_ = lean_uint32_dec_le(v___x_303_, v___x_297_);
if (v___x_304_ == 0)
{
goto v___jp_298_;
}
else
{
uint32_t v___x_305_; uint8_t v___x_306_; 
v___x_305_ = 57;
v___x_306_ = lean_uint32_dec_le(v___x_297_, v___x_305_);
if (v___x_306_ == 0)
{
goto v___jp_298_;
}
else
{
goto v___jp_286_;
}
}
v___jp_298_:
{
uint32_t v___x_299_; uint8_t v___x_300_; 
v___x_299_ = 97;
v___x_300_ = lean_uint32_dec_le(v___x_299_, v___x_297_);
if (v___x_300_ == 0)
{
lean_dec(v___x_285_);
return v_pos_281_;
}
else
{
uint32_t v___x_301_; uint8_t v___x_302_; 
v___x_301_ = 102;
v___x_302_ = lean_uint32_dec_le(v___x_297_, v___x_301_);
if (v___x_302_ == 0)
{
lean_dec(v___x_285_);
return v_pos_281_;
}
else
{
goto v___jp_286_;
}
}
}
}
else
{
lean_dec(v___x_285_);
return v_pos_281_;
}
v___jp_286_:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_287_ = lean_string_utf8_next_fast(v_str_282_, v___x_285_);
v___x_288_ = lean_nat_sub(v___x_287_, v___x_285_);
lean_dec(v___x_285_);
v___x_289_ = lean_nat_add(v_pos_281_, v___x_288_);
lean_dec(v___x_288_);
v___x_290_ = lean_unsigned_to_nat(1u);
v___x_291_ = lean_nat_add(v_pos_281_, v___x_290_);
v___x_292_ = lean_nat_dec_le(v___x_291_, v___x_289_);
lean_dec(v___x_291_);
if (v___x_292_ == 0)
{
lean_dec(v___x_289_);
return v_pos_281_;
}
else
{
lean_dec(v_pos_281_);
v_pos_281_ = v___x_289_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_immutable_spec__0___boxed(lean_object* v_s_307_, lean_object* v_pos_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_immutable_spec__0(v_s_307_, v_pos_308_);
lean_dec_ref(v_s_307_);
return v_res_309_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_immutable(lean_object* v_path_311_){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_312_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedAsset_default___closed__0));
v___x_313_ = ((lean_object*)(l_Lasm_Fetch_immutable___closed__0));
v___x_314_ = lean_unsigned_to_nat(0u);
v___x_315_ = lean_box(0);
v___x_316_ = l_String_splitOnAux(v_path_311_, v___x_313_, v___x_314_, v___x_314_, v___x_314_, v___x_315_);
v___x_317_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__0));
v___x_318_ = 0;
v___x_319_ = l_List_getLast_x21___redArg(v___x_312_, v___x_316_);
lean_dec(v___x_316_);
v___x_320_ = l_String_splitOnAux(v___x_319_, v___x_317_, v___x_314_, v___x_314_, v___x_314_, v___x_315_);
lean_dec(v___x_319_);
if (lean_obj_tag(v___x_320_) == 1)
{
lean_object* v_tail_321_; 
v_tail_321_ = lean_ctor_get(v___x_320_, 1);
lean_inc(v_tail_321_);
lean_dec_ref_known(v___x_320_, 2);
if (lean_obj_tag(v_tail_321_) == 1)
{
lean_object* v_tail_322_; 
v_tail_322_ = lean_ctor_get(v_tail_321_, 1);
if (lean_obj_tag(v_tail_322_) == 1)
{
lean_object* v_tail_323_; 
v_tail_323_ = lean_ctor_get(v_tail_322_, 1);
if (lean_obj_tag(v_tail_323_) == 0)
{
lean_object* v_head_324_; lean_object* v___x_325_; lean_object* v___x_326_; uint8_t v___x_327_; 
v_head_324_ = lean_ctor_get(v_tail_321_, 0);
lean_inc(v_head_324_);
lean_dec_ref_known(v_tail_321_, 2);
v___x_325_ = lean_string_length(v_head_324_);
v___x_326_ = lean_unsigned_to_nat(12u);
v___x_327_ = lean_nat_dec_eq(v___x_325_, v___x_326_);
if (v___x_327_ == 0)
{
lean_dec(v_head_324_);
return v___x_327_;
}
else
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; uint8_t v_decide_331_; 
v___x_328_ = lean_string_utf8_byte_size(v_head_324_);
v___x_329_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_329_, 0, v_head_324_);
lean_ctor_set(v___x_329_, 1, v___x_314_);
lean_ctor_set(v___x_329_, 2, v___x_328_);
v___x_330_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_immutable_spec__0(v___x_329_, v___x_314_);
lean_dec_ref_known(v___x_329_, 3);
v_decide_331_ = lean_nat_dec_eq(v___x_330_, v___x_328_);
lean_dec(v___x_330_);
return v_decide_331_;
}
}
else
{
lean_dec_ref_known(v_tail_321_, 2);
return v___x_318_;
}
}
else
{
lean_dec_ref_known(v_tail_321_, 2);
return v___x_318_;
}
}
else
{
lean_dec(v_tail_321_);
return v___x_318_;
}
}
else
{
lean_dec(v___x_320_);
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_immutable___boxed(lean_object* v_path_332_){
_start:
{
uint8_t v_res_333_; lean_object* v_r_334_; 
v_res_333_ = l_Lasm_Fetch_immutable(v_path_332_);
lean_dec_ref(v_path_332_);
v_r_334_ = lean_box(v_res_333_);
return v_r_334_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl(lean_object* v_path_337_){
_start:
{
uint8_t v___x_338_; 
v___x_338_ = l_Lasm_Fetch_immutable(v_path_337_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; 
v___x_339_ = ((lean_object*)(l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___closed__0));
return v___x_339_;
}
else
{
lean_object* v___x_340_; 
v___x_340_ = ((lean_object*)(l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___closed__1));
return v___x_340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___boxed(lean_object* v_path_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl(v_path_341_);
lean_dec_ref(v_path_341_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates(lean_object* v_path_344_){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_348_ = lean_string_utf8_byte_size(v_path_344_);
v___x_349_ = lean_unsigned_to_nat(1u);
v___x_350_ = lean_nat_dec_le(v___x_349_, v___x_348_);
if (v___x_350_ == 0)
{
goto v___jp_345_;
}
else
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_351_ = ((lean_object*)(l_Lasm_Fetch_immutable___closed__0));
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = lean_nat_sub(v___x_348_, v___x_349_);
v___x_354_ = lean_string_memcmp(v_path_344_, v___x_351_, v___x_353_, v___x_352_, v___x_349_);
lean_dec(v___x_353_);
if (v___x_354_ == 0)
{
goto v___jp_345_;
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_355_ = ((lean_object*)(l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__0));
v___x_356_ = lean_string_append(v_path_344_, v___x_355_);
v___x_357_ = lean_box(0);
v___x_358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_358_, 0, v___x_356_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
return v___x_358_;
}
}
v___jp_345_:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = lean_box(0);
v___x_347_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_347_, 0, v_path_344_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_readFile_x3f(lean_object* v_file_359_){
_start:
{
uint8_t v___x_361_; 
v___x_361_ = l_System_FilePath_isDir(v_file_359_);
if (v___x_361_ == 0)
{
uint8_t v___x_362_; 
v___x_362_ = l_System_FilePath_pathExists(v_file_359_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = lean_box(0);
v___x_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
return v___x_364_;
}
else
{
lean_object* v___x_365_; 
v___x_365_ = l_IO_FS_readBinFile(v_file_359_);
if (lean_obj_tag(v___x_365_) == 0)
{
lean_object* v_a_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_374_; 
v_a_366_ = lean_ctor_get(v___x_365_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_374_ == 0)
{
v___x_368_ = v___x_365_;
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_a_366_);
lean_dec(v___x_365_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_370_, 0, v_a_366_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 0, v___x_370_);
v___x_372_ = v___x_368_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
else
{
lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_382_; 
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_382_ == 0)
{
lean_object* v_unused_383_; 
v_unused_383_ = lean_ctor_get(v___x_365_, 0);
lean_dec(v_unused_383_);
v___x_376_ = v___x_365_;
v_isShared_377_ = v_isSharedCheck_382_;
goto v_resetjp_375_;
}
else
{
lean_dec(v___x_365_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_382_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_378_; lean_object* v___x_380_; 
v___x_378_ = lean_box(0);
if (v_isShared_377_ == 0)
{
lean_ctor_set_tag(v___x_376_, 0);
lean_ctor_set(v___x_376_, 0, v___x_378_);
v___x_380_ = v___x_376_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_378_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
}
else
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = lean_box(0);
v___x_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
return v___x_385_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_readFile_x3f___boxed(lean_object* v_file_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_readFile_x3f(v_file_386_);
lean_dec_ref(v_file_386_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_serve___lam__0(lean_object* v_x_393_){
_start:
{
if (lean_obj_tag(v_x_393_) == 0)
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_403_; 
v_a_395_ = lean_ctor_get(v_x_393_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v_x_393_);
if (v_isSharedCheck_403_ == 0)
{
v___x_397_ = v_x_393_;
v_isShared_398_ = v_isSharedCheck_403_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v_x_393_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_403_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_402_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
lean_object* v___x_401_; 
v___x_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
return v___x_401_;
}
}
}
else
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_421_; 
v_a_404_ = lean_ctor_get(v_x_393_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v_x_393_);
if (v_isSharedCheck_421_ == 0)
{
v___x_406_ = v_x_393_;
v_isShared_407_ = v_isSharedCheck_421_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v_x_393_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_421_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v_fst_408_; 
v_fst_408_ = lean_ctor_get(v_a_404_, 0);
lean_inc(v_fst_408_);
lean_dec(v_a_404_);
if (lean_obj_tag(v_fst_408_) == 0)
{
lean_object* v___x_409_; 
lean_del_object(v___x_406_);
v___x_409_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___lam__0___closed__1));
return v___x_409_;
}
else
{
lean_object* v_val_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_420_; 
v_val_410_ = lean_ctor_get(v_fst_408_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v_fst_408_);
if (v_isSharedCheck_420_ == 0)
{
v___x_412_ = v_fst_408_;
v_isShared_413_ = v_isSharedCheck_420_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_val_410_);
lean_dec(v_fst_408_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_420_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v_val_410_);
v___x_415_ = v___x_406_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_val_410_);
v___x_415_ = v_reuseFailAlloc_419_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_417_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set_tag(v___x_412_, 0);
lean_ctor_set(v___x_412_, 0, v___x_415_);
v___x_417_ = v___x_412_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v___x_415_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_serve___lam__0___boxed(lean_object* v_x_422_, lean_object* v___y_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Lasm_Fetch_Assets_serve___lam__0(v_x_422_);
return v_res_424_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0(lean_object* v_x_426_){
_start:
{
if (lean_obj_tag(v_x_426_) == 0)
{
uint8_t v___x_427_; 
v___x_427_ = 0;
return v___x_427_;
}
else
{
lean_object* v_head_428_; lean_object* v_tail_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
v_head_428_ = lean_ctor_get(v_x_426_, 0);
v_tail_429_ = lean_ctor_get(v_x_426_, 1);
v___x_430_ = ((lean_object*)(l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___closed__0));
v___x_431_ = lean_string_dec_eq(v_head_428_, v___x_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_432_ = lean_string_utf8_byte_size(v_head_428_);
v___x_433_ = lean_unsigned_to_nat(1u);
v___x_434_ = lean_nat_dec_le(v___x_433_, v___x_432_);
if (v___x_434_ == 0)
{
v_x_426_ = v_tail_429_;
goto _start;
}
else
{
lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; 
v___x_436_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__0));
v___x_437_ = lean_unsigned_to_nat(0u);
v___x_438_ = lean_string_memcmp(v_head_428_, v___x_436_, v___x_437_, v___x_437_, v___x_433_);
if (v___x_438_ == 0)
{
v_x_426_ = v_tail_429_;
goto _start;
}
else
{
return v___x_438_;
}
}
}
else
{
return v___x_431_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___boxed(lean_object* v_x_440_){
_start:
{
uint8_t v_res_441_; lean_object* v_r_442_; 
v_res_441_ = l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0(v_x_440_);
lean_dec(v_x_440_);
v_r_442_ = lean_box(v_res_441_);
return v_r_442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2(lean_object* v_a_446_, lean_object* v_as_447_, size_t v_sz_448_, size_t v_i_449_, lean_object* v_b_450_){
_start:
{
uint8_t v___x_451_; 
v___x_451_ = lean_usize_dec_lt(v_i_449_, v_sz_448_);
if (v___x_451_ == 0)
{
lean_inc_ref(v_b_450_);
return v_b_450_;
}
else
{
lean_object* v_a_452_; lean_object* v_path_453_; lean_object* v___x_454_; uint8_t v___x_455_; 
v_a_452_ = lean_array_uget_borrowed(v_as_447_, v_i_449_);
v_path_453_ = lean_ctor_get(v_a_452_, 0);
v___x_454_ = lean_box(0);
v___x_455_ = lean_string_dec_eq(v_path_453_, v_a_446_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; size_t v___x_457_; size_t v___x_458_; 
v___x_456_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2___closed__0));
v___x_457_ = ((size_t)1ULL);
v___x_458_ = lean_usize_add(v_i_449_, v___x_457_);
v_i_449_ = v___x_458_;
v_b_450_ = v___x_456_;
goto _start;
}
else
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
lean_inc(v_a_452_);
v___x_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_460_, 0, v_a_452_);
v___x_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_461_, 0, v___x_460_);
v___x_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
lean_ctor_set(v___x_462_, 1, v___x_454_);
return v___x_462_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2___boxed(lean_object* v_a_463_, lean_object* v_as_464_, lean_object* v_sz_465_, lean_object* v_i_466_, lean_object* v_b_467_){
_start:
{
size_t v_sz_boxed_468_; size_t v_i_boxed_469_; lean_object* v_res_470_; 
v_sz_boxed_468_ = lean_unbox_usize(v_sz_465_);
lean_dec(v_sz_465_);
v_i_boxed_469_ = lean_unbox_usize(v_i_466_);
lean_dec(v_i_466_);
v_res_470_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2(v_a_463_, v_as_464_, v_sz_boxed_468_, v_i_boxed_469_, v_b_467_);
lean_dec_ref(v_b_467_);
lean_dec_ref(v_as_464_);
lean_dec_ref(v_a_463_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___lam__0___boxed(lean_object* v___x_474_, lean_object* v_accepts_475_, lean_object* v_tail_476_, lean_object* v_x_477_, lean_object* v___y_478_){
_start:
{
uint8_t v_accepts_boxed_479_; lean_object* v_res_480_; 
v_accepts_boxed_479_ = lean_unbox(v_accepts_475_);
v_res_480_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___lam__0(v___x_474_, v_accepts_boxed_479_, v_tail_476_, v_x_477_);
lean_dec(v_tail_476_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg(lean_object* v___x_492_, uint8_t v_accepts_493_, lean_object* v_as_x27_494_, lean_object* v_b_495_){
_start:
{
if (lean_obj_tag(v_as_x27_494_) == 0)
{
lean_object* v___x_497_; lean_object* v___x_498_; 
lean_dec_ref(v___x_492_);
v___x_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_497_, 0, v_b_495_);
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
return v___x_498_;
}
else
{
lean_object* v_head_499_; lean_object* v_tail_500_; lean_object* v___x_501_; lean_object* v___x_502_; size_t v_sz_503_; size_t v___x_504_; lean_object* v___x_505_; lean_object* v_fst_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_562_; 
lean_dec_ref(v_b_495_);
v_head_499_ = lean_ctor_get(v_as_x27_494_, 0);
v_tail_500_ = lean_ctor_get(v_as_x27_494_, 1);
v___x_501_ = lean_box(0);
v___x_502_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__0));
v_sz_503_ = lean_array_size(v___x_492_);
v___x_504_ = ((size_t)0ULL);
v___x_505_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2(v_head_499_, v___x_492_, v_sz_503_, v___x_504_, v___x_502_);
v_fst_506_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_562_ == 0)
{
lean_object* v_unused_563_; 
v_unused_563_ = lean_ctor_get(v___x_505_, 1);
lean_dec(v_unused_563_);
v___x_508_ = v___x_505_;
v_isShared_509_ = v_isSharedCheck_562_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_fst_506_);
lean_dec(v___x_505_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_562_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_510_; lean_object* v___f_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_510_ = lean_box(v_accepts_493_);
lean_inc(v_tail_500_);
v___f_511_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_511_, 0, v___x_492_);
lean_closure_set(v___f_511_, 1, v___x_510_);
lean_closure_set(v___f_511_, 2, v_tail_500_);
v___x_512_ = lean_unsigned_to_nat(0u);
v___x_513_ = 0;
if (lean_obj_tag(v_fst_506_) == 0)
{
lean_del_object(v___x_508_);
goto v___jp_514_;
}
else
{
lean_object* v_val_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_561_; 
v_val_517_ = lean_ctor_get(v_fst_506_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v_fst_506_);
if (v_isSharedCheck_561_ == 0)
{
v___x_519_ = v_fst_506_;
v_isShared_520_ = v_isSharedCheck_561_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_val_517_);
lean_dec(v_fst_506_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_561_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
if (lean_obj_tag(v_val_517_) == 1)
{
lean_object* v_val_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_560_; 
v_val_521_ = lean_ctor_get(v_val_517_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v_val_517_);
if (v_isSharedCheck_560_ == 0)
{
v___x_523_ = v_val_517_;
v_isShared_524_ = v_isSharedCheck_560_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_val_521_);
lean_dec(v_val_517_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_560_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v_contentType_525_; lean_object* v_data_526_; lean_object* v_br_527_; lean_object* v___x_528_; lean_object* v___y_530_; 
v_contentType_525_ = lean_ctor_get(v_val_521_, 1);
lean_inc_ref(v_contentType_525_);
v_data_526_ = lean_ctor_get(v_val_521_, 2);
lean_inc_ref(v_data_526_);
v_br_527_ = lean_ctor_get(v_val_521_, 3);
lean_inc(v_br_527_);
lean_dec(v_val_521_);
v___x_528_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__4));
if (lean_obj_tag(v_br_527_) == 1)
{
if (v_accepts_493_ == 1)
{
lean_object* v_val_553_; lean_object* v___x_554_; uint16_t v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
lean_dec_ref(v_data_526_);
v_val_553_ = lean_ctor_get(v_br_527_, 0);
lean_inc(v_val_553_);
lean_dec_ref_known(v_br_527_, 1);
v___x_554_ = l_Lasm_Fetch_base64Decode(v_val_553_);
v___x_555_ = 200;
v___x_556_ = l_Lasm_Fetch_Response_withBody(v___x_554_, v_contentType_525_, v___x_555_);
v___x_557_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__7));
v___x_558_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__8));
v___x_559_ = l_Lasm_Fetch_Response_withHeader(v___x_556_, v___x_557_, v___x_558_);
v___y_530_ = v___x_559_;
goto v___jp_529_;
}
else
{
lean_dec_ref_known(v_br_527_, 1);
goto v___jp_549_;
}
}
else
{
lean_dec(v_br_527_);
goto v___jp_549_;
}
v___jp_529_:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_537_; 
v___x_531_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__5));
v___x_532_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl(v_head_499_);
v___x_533_ = l_Lasm_Fetch_Response_withHeader(v___y_530_, v___x_531_, v___x_532_);
v___x_534_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__6));
v___x_535_ = l_Lasm_Fetch_Response_withHeader(v___x_533_, v___x_534_, v___x_528_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_535_);
v___x_537_ = v___x_523_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_535_);
v___x_537_ = v_reuseFailAlloc_548_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
lean_object* v___x_539_; 
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_537_);
v___x_539_ = v___x_519_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_537_);
v___x_539_ = v_reuseFailAlloc_547_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
lean_object* v___x_541_; 
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 1, v___x_501_);
lean_ctor_set(v___x_508_, 0, v___x_539_);
v___x_541_ = v___x_508_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v___x_501_);
v___x_541_ = v_reuseFailAlloc_546_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
v___x_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
v___x_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
v___x_545_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_512_, v___x_513_, v___x_544_, v___f_511_);
return v___x_545_;
}
}
}
}
v___jp_549_:
{
lean_object* v___x_550_; uint16_t v___x_551_; lean_object* v___x_552_; 
v___x_550_ = l_Lasm_Fetch_base64Decode(v_data_526_);
v___x_551_ = 200;
v___x_552_ = l_Lasm_Fetch_Response_withBody(v___x_550_, v_contentType_525_, v___x_551_);
v___y_530_ = v___x_552_;
goto v___jp_529_;
}
}
}
else
{
lean_del_object(v___x_519_);
lean_dec(v_val_517_);
lean_del_object(v___x_508_);
goto v___jp_514_;
}
}
}
v___jp_514_:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__3));
v___x_516_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_512_, v___x_513_, v___x_515_, v___f_511_);
return v___x_516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___lam__0(lean_object* v___x_564_, uint8_t v_accepts_565_, lean_object* v_tail_566_, lean_object* v_x_567_){
_start:
{
if (lean_obj_tag(v_x_567_) == 0)
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_577_; 
lean_dec_ref(v___x_564_);
v_a_569_ = lean_ctor_get(v_x_567_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v_x_567_);
if (v_isSharedCheck_577_ == 0)
{
v___x_571_ = v_x_567_;
v_isShared_572_ = v_isSharedCheck_577_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v_x_567_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_577_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_569_);
v___x_574_ = v_reuseFailAlloc_576_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; 
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
}
}
else
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_595_; 
v_a_578_ = lean_ctor_get(v_x_567_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v_x_567_);
if (v_isSharedCheck_595_ == 0)
{
v___x_580_ = v_x_567_;
v_isShared_581_ = v_isSharedCheck_595_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v_x_567_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_595_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
if (lean_obj_tag(v_a_578_) == 0)
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_592_; 
lean_dec_ref(v___x_564_);
v_a_582_ = lean_ctor_get(v_a_578_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v_a_578_);
if (v_isSharedCheck_592_ == 0)
{
v___x_584_ = v_a_578_;
v_isShared_585_ = v_isSharedCheck_592_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v_a_578_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_592_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 0, v_a_582_);
v___x_587_ = v___x_580_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_582_);
v___x_587_ = v_reuseFailAlloc_591_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_589_; 
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 0, v___x_587_);
v___x_589_ = v___x_584_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_587_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
else
{
lean_object* v_a_593_; lean_object* v___x_594_; 
lean_del_object(v___x_580_);
v_a_593_ = lean_ctor_get(v_a_578_, 0);
lean_inc(v_a_593_);
lean_dec_ref_known(v_a_578_, 1);
v___x_594_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg(v___x_564_, v_accepts_565_, v_tail_566_, v_a_593_);
return v___x_594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___boxed(lean_object* v___x_596_, lean_object* v_accepts_597_, lean_object* v_as_x27_598_, lean_object* v_b_599_, lean_object* v___y_600_){
_start:
{
uint8_t v_accepts_boxed_601_; lean_object* v_res_602_; 
v_accepts_boxed_601_ = lean_unbox(v_accepts_597_);
v_res_602_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg(v___x_596_, v_accepts_boxed_601_, v_as_x27_598_, v_b_599_);
lean_dec(v_as_x27_598_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__1(lean_object* v_head_603_, lean_object* v___x_604_, lean_object* v___x_605_, lean_object* v_x_606_){
_start:
{
if (lean_obj_tag(v_x_606_) == 0)
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_616_; 
lean_dec_ref(v___x_605_);
v_a_608_ = lean_ctor_get(v_x_606_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v_x_606_);
if (v_isSharedCheck_616_ == 0)
{
v___x_610_ = v_x_606_;
v_isShared_611_ = v_isSharedCheck_616_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v_x_606_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_616_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_608_);
v___x_613_ = v_reuseFailAlloc_615_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
lean_object* v___x_614_; 
v___x_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
return v___x_614_;
}
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_647_; 
v_a_617_ = lean_ctor_get(v_x_606_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v_x_606_);
if (v_isSharedCheck_647_ == 0)
{
v___x_619_ = v_x_606_;
v_isShared_620_ = v_isSharedCheck_647_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v_x_606_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_647_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
if (lean_obj_tag(v_a_617_) == 1)
{
lean_object* v_val_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_641_; 
lean_dec_ref(v___x_605_);
v_val_621_ = lean_ctor_get(v_a_617_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v_a_617_);
if (v_isSharedCheck_641_ == 0)
{
v___x_623_ = v_a_617_;
v_isShared_624_ = v_isSharedCheck_641_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_val_621_);
lean_dec(v_a_617_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_641_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_625_; uint16_t v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_632_; 
v___x_625_ = l_Lasm_Fetch_contentTypeOf(v_head_603_);
v___x_626_ = 200;
v___x_627_ = l_Lasm_Fetch_Response_withBody(v_val_621_, v___x_625_, v___x_626_);
v___x_628_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__5));
v___x_629_ = ((lean_object*)(l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___closed__0));
v___x_630_ = l_Lasm_Fetch_Response_withHeader(v___x_627_, v___x_628_, v___x_629_);
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 0, v___x_630_);
v___x_632_ = v___x_623_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_630_);
v___x_632_ = v_reuseFailAlloc_640_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_637_; 
v___x_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
v___x_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
lean_ctor_set(v___x_634_, 1, v___x_604_);
v___x_635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 0, v___x_635_);
v___x_637_ = v___x_619_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_635_);
v___x_637_ = v_reuseFailAlloc_639_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
lean_object* v___x_638_; 
v___x_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
return v___x_638_;
}
}
}
}
else
{
lean_object* v___x_642_; lean_object* v___x_644_; 
lean_dec(v_a_617_);
v___x_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_605_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 0, v___x_642_);
v___x_644_ = v___x_619_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_642_);
v___x_644_ = v_reuseFailAlloc_646_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
lean_object* v___x_645_; 
v___x_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
return v___x_645_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__1___boxed(lean_object* v_head_648_, lean_object* v___x_649_, lean_object* v___x_650_, lean_object* v_x_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__1(v_head_648_, v___x_649_, v___x_650_, v_x_651_);
lean_dec_ref(v_head_648_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__0___boxed(lean_object* v___x_654_, lean_object* v___x_655_, lean_object* v_tail_656_, lean_object* v_x_657_, lean_object* v___y_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__0(v___x_654_, v___x_655_, v_tail_656_, v_x_657_);
lean_dec(v_tail_656_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg(lean_object* v___x_660_, lean_object* v___x_661_, lean_object* v_as_x27_662_, lean_object* v_b_663_){
_start:
{
if (lean_obj_tag(v_as_x27_662_) == 0)
{
lean_object* v___x_665_; lean_object* v___x_666_; 
lean_dec(v___x_661_);
lean_dec_ref(v___x_660_);
v___x_665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_665_, 0, v_b_663_);
v___x_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
return v___x_666_;
}
else
{
lean_object* v_head_667_; lean_object* v_tail_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; uint8_t v___x_672_; lean_object* v___f_673_; lean_object* v___f_674_; uint8_t v___x_675_; lean_object* v_val_677_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v_a_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_690_; 
lean_dec_ref(v_b_663_);
v_head_667_ = lean_ctor_get(v_as_x27_662_, 0);
v_tail_668_ = lean_ctor_get(v_as_x27_662_, 1);
v___x_669_ = lean_box(0);
v___x_670_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__0));
v___x_671_ = lean_unsigned_to_nat(0u);
v___x_672_ = lean_nat_dec_eq(v___x_661_, v___x_671_);
lean_inc(v_tail_668_);
lean_inc_ref(v___x_660_);
v___f_673_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_673_, 0, v___x_660_);
lean_closure_set(v___f_673_, 1, v___x_661_);
lean_closure_set(v___f_673_, 2, v_tail_668_);
lean_inc(v_head_667_);
v___f_674_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_674_, 0, v_head_667_);
lean_closure_set(v___f_674_, 1, v___x_669_);
lean_closure_set(v___f_674_, 2, v___x_670_);
v___x_675_ = 0;
v___x_681_ = lean_string_append(v___x_660_, v_head_667_);
v___x_682_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_readFile_x3f(v___x_681_);
lean_dec_ref(v___x_681_);
v_a_683_ = lean_ctor_get(v___x_682_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_690_ == 0)
{
v___x_685_ = v___x_682_;
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_a_683_);
lean_dec(v___x_682_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
v___jp_676_:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_678_, 0, v_val_677_);
v___x_679_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_671_, v___x_672_, v___x_678_, v___f_674_);
v___x_680_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_671_, v___x_675_, v___x_679_, v___f_673_);
return v___x_680_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
lean_ctor_set_tag(v___x_685_, 1);
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_683_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
v_val_677_ = v___x_688_;
goto v___jp_676_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__0(lean_object* v___x_691_, lean_object* v___x_692_, lean_object* v_tail_693_, lean_object* v_x_694_){
_start:
{
if (lean_obj_tag(v_x_694_) == 0)
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_704_; 
lean_dec(v___x_692_);
lean_dec_ref(v___x_691_);
v_a_696_ = lean_ctor_get(v_x_694_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v_x_694_);
if (v_isSharedCheck_704_ == 0)
{
v___x_698_ = v_x_694_;
v_isShared_699_ = v_isSharedCheck_704_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v_x_694_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_704_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_703_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
lean_object* v___x_702_; 
v___x_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_702_, 0, v___x_701_);
return v___x_702_;
}
}
}
else
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_722_; 
v_a_705_ = lean_ctor_get(v_x_694_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v_x_694_);
if (v_isSharedCheck_722_ == 0)
{
v___x_707_ = v_x_694_;
v_isShared_708_ = v_isSharedCheck_722_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v_x_694_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_722_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
if (lean_obj_tag(v_a_705_) == 0)
{
lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_719_; 
lean_dec(v___x_692_);
lean_dec_ref(v___x_691_);
v_a_709_ = lean_ctor_get(v_a_705_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v_a_705_);
if (v_isSharedCheck_719_ == 0)
{
v___x_711_ = v_a_705_;
v_isShared_712_ = v_isSharedCheck_719_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v_a_705_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_719_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 0, v_a_709_);
v___x_714_ = v___x_707_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_709_);
v___x_714_ = v_reuseFailAlloc_718_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
lean_object* v___x_716_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 0, v___x_714_);
v___x_716_ = v___x_711_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_714_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_721_; 
lean_del_object(v___x_707_);
v_a_720_ = lean_ctor_get(v_a_705_, 0);
lean_inc(v_a_720_);
lean_dec_ref_known(v_a_705_, 1);
v___x_721_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg(v___x_691_, v___x_692_, v_tail_693_, v_a_720_);
return v___x_721_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___boxed(lean_object* v___x_723_, lean_object* v___x_724_, lean_object* v_as_x27_725_, lean_object* v_b_726_, lean_object* v___y_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg(v___x_723_, v___x_724_, v_as_x27_725_, v_b_726_);
lean_dec(v_as_x27_725_);
return v_res_728_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1(lean_object* v_x_729_){
_start:
{
if (lean_obj_tag(v_x_729_) == 0)
{
uint8_t v___x_730_; 
v___x_730_ = 0;
return v___x_730_;
}
else
{
lean_object* v_head_731_; lean_object* v_tail_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; uint8_t v___x_740_; 
v_head_731_ = lean_ctor_get(v_x_729_, 0);
v_tail_732_ = lean_ctor_get(v_x_729_, 1);
v___x_733_ = lean_unsigned_to_nat(0u);
v___x_734_ = lean_string_utf8_byte_size(v_head_731_);
lean_inc(v_head_731_);
v___x_735_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_735_, 0, v_head_731_);
lean_ctor_set(v___x_735_, 1, v___x_733_);
lean_ctor_set(v___x_735_, 2, v___x_734_);
v___x_736_ = l_String_Slice_trimAscii(v___x_735_);
v___x_737_ = l_String_Slice_toString(v___x_736_);
lean_dec_ref(v___x_736_);
v___x_738_ = lean_string_utf8_byte_size(v___x_737_);
v___x_739_ = lean_unsigned_to_nat(2u);
v___x_740_ = lean_nat_dec_le(v___x_739_, v___x_738_);
if (v___x_740_ == 0)
{
lean_dec_ref(v___x_737_);
v_x_729_ = v_tail_732_;
goto _start;
}
else
{
lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_742_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__8));
v___x_743_ = lean_string_memcmp(v___x_737_, v___x_742_, v___x_733_, v___x_733_, v___x_739_);
lean_dec_ref(v___x_737_);
if (v___x_743_ == 0)
{
v_x_729_ = v_tail_732_;
goto _start;
}
else
{
return v___x_743_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1___boxed(lean_object* v_x_745_){
_start:
{
uint8_t v_res_746_; lean_object* v_r_747_; 
v_res_746_ = l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1(v_x_745_);
lean_dec(v_x_745_);
v_r_747_ = lean_box(v_res_746_);
return v_r_747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_serve(lean_object* v_a_752_, lean_object* v_req_753_){
_start:
{
lean_object* v_method_755_; lean_object* v___f_756_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___x_792_; uint8_t v___x_793_; 
v_method_755_ = lean_ctor_get(v_req_753_, 0);
v___f_756_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___closed__0));
v___x_792_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___closed__2));
v___x_793_ = lean_string_dec_eq(v_method_755_, v___x_792_);
if (v___x_793_ == 0)
{
lean_object* v___x_794_; uint8_t v___x_795_; 
v___x_794_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___closed__3));
v___x_795_ = lean_string_dec_eq(v_method_755_, v___x_794_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; 
lean_dec_ref(v_req_753_);
lean_dec_ref(v_a_752_);
v___x_796_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___lam__0___closed__1));
return v___x_796_;
}
else
{
goto v___jp_780_;
}
}
else
{
goto v___jp_780_;
}
v___jp_757_:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v_files_764_; lean_object* v_dir_765_; lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_760_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___closed__1));
v___x_761_ = lean_unsigned_to_nat(0u);
v___x_762_ = lean_box(0);
v___x_763_ = l_String_splitOnAux(v___y_759_, v___x_760_, v___x_761_, v___x_761_, v___x_761_, v___x_762_);
lean_dec_ref(v___y_759_);
v_files_764_ = lean_ctor_get(v_a_752_, 0);
lean_inc_ref(v_files_764_);
v_dir_765_ = lean_ctor_get(v_a_752_, 1);
lean_inc_ref(v_dir_765_);
lean_dec_ref(v_a_752_);
v___x_766_ = lean_array_get_size(v_files_764_);
v___x_767_ = lean_nat_dec_eq(v___x_766_, v___x_761_);
if (v___x_767_ == 0)
{
uint8_t v_accepts_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
lean_dec_ref(v_dir_765_);
v_accepts_768_ = l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1(v___x_763_);
lean_dec(v___x_763_);
v___x_769_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates(v___y_758_);
v___x_770_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__0));
v___x_771_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg(v_files_764_, v_accepts_768_, v___x_769_, v___x_770_);
lean_dec(v___x_769_);
v___x_772_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_761_, v___x_767_, v___x_771_, v___f_756_);
return v___x_772_;
}
else
{
lean_object* v___x_773_; uint8_t v___x_774_; 
lean_dec_ref(v_files_764_);
lean_dec(v___x_763_);
v___x_773_ = lean_string_utf8_byte_size(v_dir_765_);
v___x_774_ = lean_nat_dec_eq(v___x_773_, v___x_761_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_775_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates(v___y_758_);
v___x_776_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__0));
v___x_777_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg(v_dir_765_, v___x_773_, v___x_775_, v___x_776_);
lean_dec(v___x_775_);
v___x_778_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_761_, v___x_774_, v___x_777_, v___f_756_);
return v___x_778_;
}
else
{
lean_object* v___x_779_; 
lean_dec_ref(v_dir_765_);
lean_dec_ref(v___y_758_);
v___x_779_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___lam__0___closed__1));
return v___x_779_;
}
}
}
v___jp_780_:
{
lean_object* v_path_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; uint8_t v___x_786_; 
lean_inc_ref(v_req_753_);
v_path_781_ = l_Lasm_Fetch_Request_path(v_req_753_);
v___x_782_ = ((lean_object*)(l_Lasm_Fetch_immutable___closed__0));
v___x_783_ = lean_unsigned_to_nat(0u);
v___x_784_ = lean_box(0);
v___x_785_ = l_String_splitOnAux(v_path_781_, v___x_782_, v___x_783_, v___x_783_, v___x_783_, v___x_784_);
v___x_786_ = l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0(v___x_785_);
lean_dec(v___x_785_);
if (v___x_786_ == 0)
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__4));
v___x_788_ = l_Lasm_Fetch_Request_header_x3f(v_req_753_, v___x_787_);
lean_dec_ref(v_req_753_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v___x_789_; 
v___x_789_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedAsset_default___closed__0));
v___y_758_ = v_path_781_;
v___y_759_ = v___x_789_;
goto v___jp_757_;
}
else
{
lean_object* v_val_790_; 
v_val_790_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_val_790_);
lean_dec_ref_known(v___x_788_, 1);
v___y_758_ = v_path_781_;
v___y_759_ = v_val_790_;
goto v___jp_757_;
}
}
else
{
lean_object* v___x_791_; 
lean_dec_ref(v_path_781_);
lean_dec_ref(v_req_753_);
lean_dec_ref(v_a_752_);
v___x_791_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___lam__0___closed__1));
return v___x_791_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_serve___boxed(lean_object* v_a_797_, lean_object* v_req_798_, lean_object* v_a_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lasm_Fetch_Assets_serve(v_a_797_, v_req_798_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3(lean_object* v___x_801_, uint8_t v_accepts_802_, lean_object* v_as_803_, lean_object* v_as_x27_804_, lean_object* v_b_805_, lean_object* v_a_806_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg(v___x_801_, v_accepts_802_, v_as_x27_804_, v_b_805_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___boxed(lean_object* v___x_809_, lean_object* v_accepts_810_, lean_object* v_as_811_, lean_object* v_as_x27_812_, lean_object* v_b_813_, lean_object* v_a_814_, lean_object* v___y_815_){
_start:
{
uint8_t v_accepts_boxed_816_; lean_object* v_res_817_; 
v_accepts_boxed_816_ = lean_unbox(v_accepts_810_);
v_res_817_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3(v___x_809_, v_accepts_boxed_816_, v_as_811_, v_as_x27_812_, v_b_813_, v_a_814_);
lean_dec(v_as_x27_812_);
lean_dec(v_as_811_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4(lean_object* v___x_818_, lean_object* v___x_819_, lean_object* v_as_820_, lean_object* v_as_x27_821_, lean_object* v_b_822_, lean_object* v_a_823_){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg(v___x_818_, v___x_819_, v_as_x27_821_, v_b_822_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___boxed(lean_object* v___x_826_, lean_object* v___x_827_, lean_object* v_as_828_, lean_object* v_as_x27_829_, lean_object* v_b_830_, lean_object* v_a_831_, lean_object* v___y_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4(v___x_826_, v___x_827_, v_as_828_, v_as_x27_829_, v_b_830_, v_a_831_);
lean_dec(v_as_x27_829_);
lean_dec(v_as_828_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_wrap___lam__0(lean_object* v_handler_834_, lean_object* v_req_835_, lean_object* v_x_836_){
_start:
{
if (lean_obj_tag(v_x_836_) == 0)
{
lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_846_; 
lean_dec_ref(v_req_835_);
lean_dec_ref(v_handler_834_);
v_a_838_ = lean_ctor_get(v_x_836_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v_x_836_);
if (v_isSharedCheck_846_ == 0)
{
v___x_840_ = v_x_836_;
v_isShared_841_ = v_isSharedCheck_846_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_dec(v_x_836_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_846_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_843_; 
if (v_isShared_841_ == 0)
{
v___x_843_ = v___x_840_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_838_);
v___x_843_ = v_reuseFailAlloc_845_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
lean_object* v___x_844_; 
v___x_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
return v___x_844_;
}
}
}
else
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_863_; 
v_a_847_ = lean_ctor_get(v_x_836_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v_x_836_);
if (v_isSharedCheck_863_ == 0)
{
v___x_849_ = v_x_836_;
v_isShared_850_ = v_isSharedCheck_863_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v_x_836_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_863_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
if (lean_obj_tag(v_a_847_) == 0)
{
lean_object* v___x_851_; 
lean_del_object(v___x_849_);
v___x_851_ = lean_apply_2(v_handler_834_, v_req_835_, lean_box(0));
return v___x_851_;
}
else
{
lean_object* v_val_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_862_; 
lean_dec_ref(v_req_835_);
lean_dec_ref(v_handler_834_);
v_val_852_ = lean_ctor_get(v_a_847_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v_a_847_);
if (v_isSharedCheck_862_ == 0)
{
v___x_854_ = v_a_847_;
v_isShared_855_ = v_isSharedCheck_862_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_val_852_);
lean_dec(v_a_847_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_862_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v___x_857_; 
if (v_isShared_850_ == 0)
{
lean_ctor_set(v___x_849_, 0, v_val_852_);
v___x_857_ = v___x_849_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_val_852_);
v___x_857_ = v_reuseFailAlloc_861_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
lean_object* v___x_859_; 
if (v_isShared_855_ == 0)
{
lean_ctor_set_tag(v___x_854_, 0);
lean_ctor_set(v___x_854_, 0, v___x_857_);
v___x_859_ = v___x_854_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_857_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_wrap___lam__0___boxed(lean_object* v_handler_864_, lean_object* v_req_865_, lean_object* v_x_866_, lean_object* v___y_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lasm_Fetch_Assets_wrap___lam__0(v_handler_864_, v_req_865_, v_x_866_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_wrap(lean_object* v_a_869_, lean_object* v_handler_870_, lean_object* v_req_871_){
_start:
{
lean_object* v___f_873_; lean_object* v___x_874_; uint8_t v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
lean_inc_ref(v_req_871_);
v___f_873_ = lean_alloc_closure((void*)(l_Lasm_Fetch_Assets_wrap___lam__0___boxed), 4, 2);
lean_closure_set(v___f_873_, 0, v_handler_870_);
lean_closure_set(v___f_873_, 1, v_req_871_);
v___x_874_ = lean_unsigned_to_nat(0u);
v___x_875_ = 0;
v___x_876_ = l_Lasm_Fetch_Assets_serve(v_a_869_, v_req_871_);
v___x_877_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_874_, v___x_875_, v___x_876_, v___f_873_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_wrap___boxed(lean_object* v_a_878_, lean_object* v_handler_879_, lean_object* v_req_880_, lean_object* v_a_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lasm_Fetch_Assets_wrap(v_a_878_, v_handler_879_, v_req_880_);
return v_res_882_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Fetch(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fetch_Assets(uint8_t builtin) {
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
res = initialize_Lasm_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
