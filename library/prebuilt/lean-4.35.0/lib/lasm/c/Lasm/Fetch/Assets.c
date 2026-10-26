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
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_empty_byte_array(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_Fetch_Response_withHeader(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_Fetch_base64Decode___boxed(lean_object*);
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
static lean_once_cell_t l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__0;
static const lean_string_object l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "index.html"};
static const lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__1 = (const lean_object*)&l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__1_value;
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
static lean_once_cell_t l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___closed__1;
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
static lean_once_cell_t l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1___closed__0;
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
uint8_t v___y_1240__boxed_166_; uint32_t v___x_1241__boxed_167_; lean_object* v_res_168_; 
v___y_1240__boxed_166_ = lean_unbox(v___y_162_);
v___x_1241__boxed_167_ = lean_unbox_uint32(v___x_163_);
lean_dec(v___x_163_);
v_res_168_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg___lam__1(v_snd_160_, v___x_161_, v___y_1240__boxed_166_, v___x_1241__boxed_167_, v_____r_164_, v_out_165_);
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
lean_object* v___x_188_; uint8_t v___y_190_; uint32_t v___y_191_; uint8_t v___y_192_; uint8_t v___x_209_; uint32_t v___y_211_; uint8_t v___y_212_; uint32_t v___y_223_; uint8_t v___y_224_; uint8_t v___y_237_; uint8_t v___x_248_; 
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
v___x_194_ = lean_uint32_lor(v___y_191_, v___x_193_);
v___x_195_ = 16;
v___x_196_ = lean_uint32_shift_right(v___x_194_, v___x_195_);
v___x_197_ = lean_uint32_to_uint8(v___x_196_);
v___x_198_ = lean_byte_array_push(v_fst_177_, v___x_197_);
v___x_199_ = 61;
v___x_200_ = lean_uint8_dec_eq(v___y_190_, v___x_199_);
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
v___y_190_ = v___y_212_;
v___y_191_ = v___x_216_;
v___y_192_ = v___x_220_;
goto v___jp_189_;
}
else
{
uint8_t v___x_221_; 
v___x_221_ = lean_byte_array_fget(v_b_169_, v___x_183_);
lean_dec(v___x_183_);
v___y_190_ = v___y_212_;
v___y_191_ = v___x_216_;
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
LEAN_EXPORT lean_object* l_Lasm_Fetch_base64Decode___boxed(lean_object* v_s_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Lasm_Fetch_base64Decode(v_s_270_);
lean_dec_ref(v_s_270_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0(lean_object* v_b_272_, lean_object* v___x_273_, lean_object* v_inst_274_, lean_object* v_a_275_){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___redArg(v_b_272_, v___x_273_, v_a_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0___boxed(lean_object* v_b_277_, lean_object* v___x_278_, lean_object* v_inst_279_, lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Decode_spec__0(v_b_277_, v___x_278_, v_inst_279_, v_a_280_);
lean_dec(v___x_278_);
lean_dec_ref(v_b_277_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_immutable_spec__0(lean_object* v_s_282_, lean_object* v_pos_283_){
_start:
{
lean_object* v_str_284_; lean_object* v_startInclusive_285_; lean_object* v_endExclusive_286_; lean_object* v___x_287_; lean_object* v___x_296_; lean_object* v___x_297_; uint8_t v_decide_298_; 
v_str_284_ = lean_ctor_get(v_s_282_, 0);
v_startInclusive_285_ = lean_ctor_get(v_s_282_, 1);
v_endExclusive_286_ = lean_ctor_get(v_s_282_, 2);
v___x_287_ = lean_nat_add(v_startInclusive_285_, v_pos_283_);
v___x_296_ = lean_unsigned_to_nat(0u);
v___x_297_ = lean_nat_sub(v_endExclusive_286_, v___x_287_);
v_decide_298_ = lean_nat_dec_eq(v___x_296_, v___x_297_);
lean_dec(v___x_297_);
if (v_decide_298_ == 0)
{
uint32_t v___x_299_; uint32_t v___x_305_; uint8_t v___x_306_; 
v___x_299_ = lean_string_utf8_get_fast(v_str_284_, v___x_287_);
v___x_305_ = 48;
v___x_306_ = lean_uint32_dec_le(v___x_305_, v___x_299_);
if (v___x_306_ == 0)
{
goto v___jp_300_;
}
else
{
uint32_t v___x_307_; uint8_t v___x_308_; 
v___x_307_ = 57;
v___x_308_ = lean_uint32_dec_le(v___x_299_, v___x_307_);
if (v___x_308_ == 0)
{
goto v___jp_300_;
}
else
{
goto v___jp_288_;
}
}
v___jp_300_:
{
uint32_t v___x_301_; uint8_t v___x_302_; 
v___x_301_ = 97;
v___x_302_ = lean_uint32_dec_le(v___x_301_, v___x_299_);
if (v___x_302_ == 0)
{
lean_dec(v___x_287_);
return v_pos_283_;
}
else
{
uint32_t v___x_303_; uint8_t v___x_304_; 
v___x_303_ = 102;
v___x_304_ = lean_uint32_dec_le(v___x_299_, v___x_303_);
if (v___x_304_ == 0)
{
lean_dec(v___x_287_);
return v_pos_283_;
}
else
{
goto v___jp_288_;
}
}
}
}
else
{
lean_dec(v___x_287_);
return v_pos_283_;
}
v___jp_288_:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_289_ = lean_string_utf8_next_fast(v_str_284_, v___x_287_);
v___x_290_ = lean_nat_sub(v___x_289_, v___x_287_);
lean_dec(v___x_287_);
v___x_291_ = lean_nat_add(v_pos_283_, v___x_290_);
lean_dec(v___x_290_);
v___x_292_ = lean_unsigned_to_nat(1u);
v___x_293_ = lean_nat_add(v_pos_283_, v___x_292_);
v___x_294_ = lean_nat_dec_le(v___x_293_, v___x_291_);
lean_dec(v___x_293_);
if (v___x_294_ == 0)
{
lean_dec(v___x_291_);
return v_pos_283_;
}
else
{
lean_dec(v_pos_283_);
v_pos_283_ = v___x_291_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_immutable_spec__0___boxed(lean_object* v_s_309_, lean_object* v_pos_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_immutable_spec__0(v_s_309_, v_pos_310_);
lean_dec_ref(v_s_309_);
return v_res_311_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Fetch_immutable(lean_object* v_path_313_){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_314_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedAsset_default___closed__0));
v___x_315_ = ((lean_object*)(l_Lasm_Fetch_immutable___closed__0));
v___x_316_ = lean_unsigned_to_nat(0u);
v___x_317_ = lean_box(0);
v___x_318_ = l_String_splitOnAux(v_path_313_, v___x_315_, v___x_316_, v___x_316_, v___x_316_, v___x_317_);
v___x_319_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__0));
v___x_320_ = 0;
v___x_321_ = l_List_getLast_x21___redArg(v___x_314_, v___x_318_);
lean_dec(v___x_318_);
v___x_322_ = l_String_splitOnAux(v___x_321_, v___x_319_, v___x_316_, v___x_316_, v___x_316_, v___x_317_);
lean_dec(v___x_321_);
if (lean_obj_tag(v___x_322_) == 1)
{
lean_object* v_tail_323_; 
v_tail_323_ = lean_ctor_get(v___x_322_, 1);
lean_inc(v_tail_323_);
lean_dec_ref_known(v___x_322_, 2);
if (lean_obj_tag(v_tail_323_) == 1)
{
lean_object* v_tail_324_; 
v_tail_324_ = lean_ctor_get(v_tail_323_, 1);
if (lean_obj_tag(v_tail_324_) == 1)
{
lean_object* v_tail_325_; 
v_tail_325_ = lean_ctor_get(v_tail_324_, 1);
if (lean_obj_tag(v_tail_325_) == 0)
{
lean_object* v_head_326_; lean_object* v___x_327_; lean_object* v___x_328_; uint8_t v___x_329_; 
v_head_326_ = lean_ctor_get(v_tail_323_, 0);
lean_inc(v_head_326_);
lean_dec_ref_known(v_tail_323_, 2);
v___x_327_ = lean_string_length(v_head_326_);
v___x_328_ = lean_unsigned_to_nat(12u);
v___x_329_ = lean_nat_dec_eq(v___x_327_, v___x_328_);
if (v___x_329_ == 0)
{
lean_dec(v_head_326_);
return v___x_329_;
}
else
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; uint8_t v_decide_333_; 
v___x_330_ = lean_string_utf8_byte_size(v_head_326_);
v___x_331_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_331_, 0, v_head_326_);
lean_ctor_set(v___x_331_, 1, v___x_316_);
lean_ctor_set(v___x_331_, 2, v___x_330_);
v___x_332_ = l_String_Slice_Pos_skipWhile___at___00Lasm_Fetch_immutable_spec__0(v___x_331_, v___x_316_);
lean_dec_ref_known(v___x_331_, 3);
v_decide_333_ = lean_nat_dec_eq(v___x_332_, v___x_330_);
lean_dec(v___x_332_);
return v_decide_333_;
}
}
else
{
lean_dec_ref_known(v_tail_323_, 2);
return v___x_320_;
}
}
else
{
lean_dec_ref_known(v_tail_323_, 2);
return v___x_320_;
}
}
else
{
lean_dec(v_tail_323_);
return v___x_320_;
}
}
else
{
lean_dec(v___x_322_);
return v___x_320_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_immutable___boxed(lean_object* v_path_334_){
_start:
{
uint8_t v_res_335_; lean_object* v_r_336_; 
v_res_335_ = l_Lasm_Fetch_immutable(v_path_334_);
lean_dec_ref(v_path_334_);
v_r_336_ = lean_box(v_res_335_);
return v_r_336_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl(lean_object* v_path_339_){
_start:
{
uint8_t v___x_340_; 
v___x_340_ = l_Lasm_Fetch_immutable(v_path_339_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; 
v___x_341_ = ((lean_object*)(l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___closed__0));
return v___x_341_;
}
else
{
lean_object* v___x_342_; 
v___x_342_ = ((lean_object*)(l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___closed__1));
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___boxed(lean_object* v_path_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl(v_path_343_);
lean_dec_ref(v_path_343_);
return v_res_344_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__0(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = ((lean_object*)(l_Lasm_Fetch_immutable___closed__0));
v___x_346_ = lean_string_utf8_byte_size(v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates(lean_object* v_path_348_){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_352_ = ((lean_object*)(l_Lasm_Fetch_immutable___closed__0));
v___x_353_ = lean_string_utf8_byte_size(v_path_348_);
v___x_354_ = lean_obj_once(&l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__0, &l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__0_once, _init_l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__0);
v___x_355_ = lean_nat_dec_le(v___x_354_, v___x_353_);
if (v___x_355_ == 0)
{
goto v___jp_349_;
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_357_ = lean_nat_sub(v___x_353_, v___x_354_);
v___x_358_ = lean_string_memcmp(v_path_348_, v___x_352_, v___x_357_, v___x_356_, v___x_354_);
lean_dec(v___x_357_);
if (v___x_358_ == 0)
{
goto v___jp_349_;
}
else
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_359_ = ((lean_object*)(l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates___closed__1));
v___x_360_ = lean_string_append(v_path_348_, v___x_359_);
v___x_361_ = lean_box(0);
v___x_362_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_362_, 0, v___x_360_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
return v___x_362_;
}
}
v___jp_349_:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_box(0);
v___x_351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_351_, 0, v_path_348_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
return v___x_351_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_readFile_x3f(lean_object* v_file_363_){
_start:
{
uint8_t v___x_365_; 
v___x_365_ = l_System_FilePath_isDir(v_file_363_);
if (v___x_365_ == 0)
{
uint8_t v___x_366_; 
v___x_366_ = l_System_FilePath_pathExists(v_file_363_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = lean_box(0);
v___x_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
return v___x_368_;
}
else
{
lean_object* v___x_369_; 
v___x_369_ = l_IO_FS_readBinFile(v_file_363_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_378_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_378_ == 0)
{
v___x_372_ = v___x_369_;
v_isShared_373_ = v_isSharedCheck_378_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_369_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_378_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_374_; lean_object* v___x_376_; 
v___x_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_374_, 0, v_a_370_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_374_);
v___x_376_ = v___x_372_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_374_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
}
else
{
lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_386_; 
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_386_ == 0)
{
lean_object* v_unused_387_; 
v_unused_387_ = lean_ctor_get(v___x_369_, 0);
lean_dec(v_unused_387_);
v___x_380_ = v___x_369_;
v_isShared_381_ = v_isSharedCheck_386_;
goto v_resetjp_379_;
}
else
{
lean_dec(v___x_369_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_386_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_382_; lean_object* v___x_384_; 
v___x_382_ = lean_box(0);
if (v_isShared_381_ == 0)
{
lean_ctor_set_tag(v___x_380_, 0);
lean_ctor_set(v___x_380_, 0, v___x_382_);
v___x_384_ = v___x_380_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v___x_382_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
}
}
else
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = lean_box(0);
v___x_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
return v___x_389_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_readFile_x3f___boxed(lean_object* v_file_390_, lean_object* v_a_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_readFile_x3f(v_file_390_);
lean_dec_ref(v_file_390_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_serve___lam__0(lean_object* v_x_397_){
_start:
{
if (lean_obj_tag(v_x_397_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_407_; 
v_a_399_ = lean_ctor_get(v_x_397_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v_x_397_);
if (v_isSharedCheck_407_ == 0)
{
v___x_401_ = v_x_397_;
v_isShared_402_ = v_isSharedCheck_407_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v_x_397_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_407_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_406_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v___x_405_; 
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
return v___x_405_;
}
}
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_425_; 
v_a_408_ = lean_ctor_get(v_x_397_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v_x_397_);
if (v_isSharedCheck_425_ == 0)
{
v___x_410_ = v_x_397_;
v_isShared_411_ = v_isSharedCheck_425_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v_x_397_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_425_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v_fst_412_; 
v_fst_412_ = lean_ctor_get(v_a_408_, 0);
lean_inc(v_fst_412_);
lean_dec(v_a_408_);
if (lean_obj_tag(v_fst_412_) == 0)
{
lean_object* v___x_413_; 
lean_del_object(v___x_410_);
v___x_413_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___lam__0___closed__1));
return v___x_413_;
}
else
{
lean_object* v_val_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_424_; 
v_val_414_ = lean_ctor_get(v_fst_412_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v_fst_412_);
if (v_isSharedCheck_424_ == 0)
{
v___x_416_ = v_fst_412_;
v_isShared_417_ = v_isSharedCheck_424_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_val_414_);
lean_dec(v_fst_412_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_424_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 0, v_val_414_);
v___x_419_ = v___x_410_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_val_414_);
v___x_419_ = v_reuseFailAlloc_423_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
lean_object* v___x_421_; 
if (v_isShared_417_ == 0)
{
lean_ctor_set_tag(v___x_416_, 0);
lean_ctor_set(v___x_416_, 0, v___x_419_);
v___x_421_ = v___x_416_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_419_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_serve___lam__0___boxed(lean_object* v_x_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lasm_Fetch_Assets_serve___lam__0(v_x_426_);
return v_res_428_;
}
}
static lean_object* _init_l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___closed__1(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__0));
v___x_431_ = lean_string_utf8_byte_size(v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0(lean_object* v_x_432_){
_start:
{
if (lean_obj_tag(v_x_432_) == 0)
{
uint8_t v___x_433_; 
v___x_433_ = 0;
return v___x_433_;
}
else
{
lean_object* v_head_434_; lean_object* v_tail_435_; lean_object* v___x_436_; uint8_t v___x_437_; 
v_head_434_ = lean_ctor_get(v_x_432_, 0);
v_tail_435_ = lean_ctor_get(v_x_432_, 1);
v___x_436_ = ((lean_object*)(l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___closed__0));
v___x_437_ = lean_string_dec_eq(v_head_434_, v___x_436_);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_438_ = ((lean_object*)(l_Lasm_Fetch_contentTypeOf___closed__0));
v___x_439_ = lean_string_utf8_byte_size(v_head_434_);
v___x_440_ = lean_obj_once(&l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___closed__1, &l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___closed__1_once, _init_l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___closed__1);
v___x_441_ = lean_nat_dec_le(v___x_440_, v___x_439_);
if (v___x_441_ == 0)
{
v_x_432_ = v_tail_435_;
goto _start;
}
else
{
lean_object* v___x_443_; uint8_t v___x_444_; 
v___x_443_ = lean_unsigned_to_nat(0u);
v___x_444_ = lean_string_memcmp(v_head_434_, v___x_438_, v___x_443_, v___x_443_, v___x_440_);
if (v___x_444_ == 0)
{
v_x_432_ = v_tail_435_;
goto _start;
}
else
{
return v___x_444_;
}
}
}
else
{
return v___x_437_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0___boxed(lean_object* v_x_446_){
_start:
{
uint8_t v_res_447_; lean_object* v_r_448_; 
v_res_447_ = l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0(v_x_446_);
lean_dec(v_x_446_);
v_r_448_ = lean_box(v_res_447_);
return v_r_448_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2(lean_object* v_a_452_, lean_object* v_as_453_, size_t v_sz_454_, size_t v_i_455_, lean_object* v_b_456_){
_start:
{
uint8_t v___x_457_; 
v___x_457_ = lean_usize_dec_lt(v_i_455_, v_sz_454_);
if (v___x_457_ == 0)
{
lean_inc_ref(v_b_456_);
return v_b_456_;
}
else
{
lean_object* v_a_458_; lean_object* v_path_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
v_a_458_ = lean_array_uget_borrowed(v_as_453_, v_i_455_);
v_path_459_ = lean_ctor_get(v_a_458_, 0);
v___x_460_ = lean_box(0);
v___x_461_ = lean_string_dec_eq(v_path_459_, v_a_452_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; size_t v___x_463_; size_t v___x_464_; 
v___x_462_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2___closed__0));
v___x_463_ = ((size_t)1ULL);
v___x_464_ = lean_usize_add(v_i_455_, v___x_463_);
v_i_455_ = v___x_464_;
v_b_456_ = v___x_462_;
goto _start;
}
else
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
lean_inc(v_a_458_);
v___x_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_466_, 0, v_a_458_);
v___x_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_467_, 0, v___x_466_);
v___x_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
lean_ctor_set(v___x_468_, 1, v___x_460_);
return v___x_468_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2___boxed(lean_object* v_a_469_, lean_object* v_as_470_, lean_object* v_sz_471_, lean_object* v_i_472_, lean_object* v_b_473_){
_start:
{
size_t v_sz_boxed_474_; size_t v_i_boxed_475_; lean_object* v_res_476_; 
v_sz_boxed_474_ = lean_unbox_usize(v_sz_471_);
lean_dec(v_sz_471_);
v_i_boxed_475_ = lean_unbox_usize(v_i_472_);
lean_dec(v_i_472_);
v_res_476_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2(v_a_469_, v_as_470_, v_sz_boxed_474_, v_i_boxed_475_, v_b_473_);
lean_dec_ref(v_b_473_);
lean_dec_ref(v_as_470_);
lean_dec_ref(v_a_469_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___lam__0___boxed(lean_object* v___x_480_, lean_object* v_accepts_481_, lean_object* v_tail_482_, lean_object* v_x_483_, lean_object* v___y_484_){
_start:
{
uint8_t v_accepts_boxed_485_; lean_object* v_res_486_; 
v_accepts_boxed_485_ = lean_unbox(v_accepts_481_);
v_res_486_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___lam__0(v___x_480_, v_accepts_boxed_485_, v_tail_482_, v_x_483_);
lean_dec(v_tail_482_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg(lean_object* v___x_498_, uint8_t v_accepts_499_, lean_object* v_as_x27_500_, lean_object* v_b_501_){
_start:
{
if (lean_obj_tag(v_as_x27_500_) == 0)
{
lean_object* v___x_503_; lean_object* v___x_504_; 
lean_dec_ref(v___x_498_);
v___x_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_503_, 0, v_b_501_);
v___x_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
return v___x_504_;
}
else
{
lean_object* v_head_505_; lean_object* v_tail_506_; lean_object* v___x_507_; lean_object* v___x_508_; size_t v_sz_509_; size_t v___x_510_; lean_object* v___x_511_; lean_object* v_fst_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_568_; 
lean_dec_ref(v_b_501_);
v_head_505_ = lean_ctor_get(v_as_x27_500_, 0);
v_tail_506_ = lean_ctor_get(v_as_x27_500_, 1);
v___x_507_ = lean_box(0);
v___x_508_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__0));
v_sz_509_ = lean_array_size(v___x_498_);
v___x_510_ = ((size_t)0ULL);
v___x_511_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch_Assets_serve_spec__2(v_head_505_, v___x_498_, v_sz_509_, v___x_510_, v___x_508_);
v_fst_512_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_568_ == 0)
{
lean_object* v_unused_569_; 
v_unused_569_ = lean_ctor_get(v___x_511_, 1);
lean_dec(v_unused_569_);
v___x_514_ = v___x_511_;
v_isShared_515_ = v_isSharedCheck_568_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_fst_512_);
lean_dec(v___x_511_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_568_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_516_; lean_object* v___f_517_; lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_516_ = lean_box(v_accepts_499_);
lean_inc(v_tail_506_);
v___f_517_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_517_, 0, v___x_498_);
lean_closure_set(v___f_517_, 1, v___x_516_);
lean_closure_set(v___f_517_, 2, v_tail_506_);
v___x_518_ = lean_unsigned_to_nat(0u);
v___x_519_ = 0;
if (lean_obj_tag(v_fst_512_) == 0)
{
lean_del_object(v___x_514_);
goto v___jp_520_;
}
else
{
lean_object* v_val_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_567_; 
v_val_523_ = lean_ctor_get(v_fst_512_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v_fst_512_);
if (v_isSharedCheck_567_ == 0)
{
v___x_525_ = v_fst_512_;
v_isShared_526_ = v_isSharedCheck_567_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_val_523_);
lean_dec(v_fst_512_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_567_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
if (lean_obj_tag(v_val_523_) == 1)
{
lean_object* v_val_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_566_; 
v_val_527_ = lean_ctor_get(v_val_523_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v_val_523_);
if (v_isSharedCheck_566_ == 0)
{
v___x_529_ = v_val_523_;
v_isShared_530_ = v_isSharedCheck_566_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_val_527_);
lean_dec(v_val_523_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_566_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v_contentType_531_; lean_object* v_data_532_; lean_object* v_br_533_; lean_object* v___x_534_; lean_object* v___y_536_; 
v_contentType_531_ = lean_ctor_get(v_val_527_, 1);
lean_inc_ref(v_contentType_531_);
v_data_532_ = lean_ctor_get(v_val_527_, 2);
lean_inc_ref(v_data_532_);
v_br_533_ = lean_ctor_get(v_val_527_, 3);
lean_inc(v_br_533_);
lean_dec(v_val_527_);
v___x_534_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__4));
if (lean_obj_tag(v_br_533_) == 1)
{
if (v_accepts_499_ == 1)
{
lean_object* v_val_559_; lean_object* v___x_560_; uint16_t v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
lean_dec_ref(v_data_532_);
v_val_559_ = lean_ctor_get(v_br_533_, 0);
lean_inc(v_val_559_);
lean_dec_ref_known(v_br_533_, 1);
v___x_560_ = l_Lasm_Fetch_base64Decode(v_val_559_);
lean_dec(v_val_559_);
v___x_561_ = 200;
v___x_562_ = l_Lasm_Fetch_Response_withBody(v___x_560_, v_contentType_531_, v___x_561_);
v___x_563_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__7));
v___x_564_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__8));
v___x_565_ = l_Lasm_Fetch_Response_withHeader(v___x_562_, v___x_563_, v___x_564_);
v___y_536_ = v___x_565_;
goto v___jp_535_;
}
else
{
lean_dec_ref_known(v_br_533_, 1);
goto v___jp_555_;
}
}
else
{
lean_dec(v_br_533_);
goto v___jp_555_;
}
v___jp_535_:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_537_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__5));
v___x_538_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl(v_head_505_);
v___x_539_ = l_Lasm_Fetch_Response_withHeader(v___y_536_, v___x_537_, v___x_538_);
v___x_540_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__6));
v___x_541_ = l_Lasm_Fetch_Response_withHeader(v___x_539_, v___x_540_, v___x_534_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 0, v___x_541_);
v___x_543_ = v___x_529_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_554_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
lean_object* v___x_545_; 
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 0, v___x_543_);
v___x_545_ = v___x_525_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_543_);
v___x_545_ = v_reuseFailAlloc_553_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
lean_object* v___x_547_; 
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 1, v___x_507_);
lean_ctor_set(v___x_514_, 0, v___x_545_);
v___x_547_ = v___x_514_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_545_);
lean_ctor_set(v_reuseFailAlloc_552_, 1, v___x_507_);
v___x_547_ = v_reuseFailAlloc_552_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
v___x_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
v___x_551_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_518_, v___x_519_, v___x_550_, v___f_517_);
return v___x_551_;
}
}
}
}
v___jp_555_:
{
lean_object* v___x_556_; uint16_t v___x_557_; lean_object* v___x_558_; 
v___x_556_ = l_Lasm_Fetch_base64Decode(v_data_532_);
lean_dec_ref(v_data_532_);
v___x_557_ = 200;
v___x_558_ = l_Lasm_Fetch_Response_withBody(v___x_556_, v_contentType_531_, v___x_557_);
v___y_536_ = v___x_558_;
goto v___jp_535_;
}
}
}
else
{
lean_del_object(v___x_525_);
lean_dec(v_val_523_);
lean_del_object(v___x_514_);
goto v___jp_520_;
}
}
}
v___jp_520_:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__3));
v___x_522_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_518_, v___x_519_, v___x_521_, v___f_517_);
return v___x_522_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___lam__0(lean_object* v___x_570_, uint8_t v_accepts_571_, lean_object* v_tail_572_, lean_object* v_x_573_){
_start:
{
if (lean_obj_tag(v_x_573_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_583_; 
lean_dec_ref(v___x_570_);
v_a_575_ = lean_ctor_get(v_x_573_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v_x_573_);
if (v_isSharedCheck_583_ == 0)
{
v___x_577_ = v_x_573_;
v_isShared_578_ = v_isSharedCheck_583_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v_x_573_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_583_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_575_);
v___x_580_ = v_reuseFailAlloc_582_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_581_; 
v___x_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
return v___x_581_;
}
}
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_601_; 
v_a_584_ = lean_ctor_get(v_x_573_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v_x_573_);
if (v_isSharedCheck_601_ == 0)
{
v___x_586_ = v_x_573_;
v_isShared_587_ = v_isSharedCheck_601_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v_x_573_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_601_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
if (lean_obj_tag(v_a_584_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_598_; 
lean_dec_ref(v___x_570_);
v_a_588_ = lean_ctor_get(v_a_584_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v_a_584_);
if (v_isSharedCheck_598_ == 0)
{
v___x_590_ = v_a_584_;
v_isShared_591_ = v_isSharedCheck_598_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v_a_584_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_598_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_593_; 
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v_a_588_);
v___x_593_ = v___x_586_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_588_);
v___x_593_ = v_reuseFailAlloc_597_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_595_; 
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 0, v___x_593_);
v___x_595_ = v___x_590_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v___x_593_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
else
{
lean_object* v_a_599_; lean_object* v___x_600_; 
lean_del_object(v___x_586_);
v_a_599_ = lean_ctor_get(v_a_584_, 0);
lean_inc(v_a_599_);
lean_dec_ref_known(v_a_584_, 1);
v___x_600_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg(v___x_570_, v_accepts_571_, v_tail_572_, v_a_599_);
return v___x_600_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___boxed(lean_object* v___x_602_, lean_object* v_accepts_603_, lean_object* v_as_x27_604_, lean_object* v_b_605_, lean_object* v___y_606_){
_start:
{
uint8_t v_accepts_boxed_607_; lean_object* v_res_608_; 
v_accepts_boxed_607_ = lean_unbox(v_accepts_603_);
v_res_608_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg(v___x_602_, v_accepts_boxed_607_, v_as_x27_604_, v_b_605_);
lean_dec(v_as_x27_604_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__1(lean_object* v_head_609_, lean_object* v___x_610_, lean_object* v___x_611_, lean_object* v_x_612_){
_start:
{
if (lean_obj_tag(v_x_612_) == 0)
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_622_; 
lean_dec_ref(v___x_611_);
v_a_614_ = lean_ctor_get(v_x_612_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v_x_612_);
if (v_isSharedCheck_622_ == 0)
{
v___x_616_ = v_x_612_;
v_isShared_617_ = v_isSharedCheck_622_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v_x_612_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_622_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_621_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
lean_object* v___x_620_; 
v___x_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
return v___x_620_;
}
}
}
else
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_653_; 
v_a_623_ = lean_ctor_get(v_x_612_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v_x_612_);
if (v_isSharedCheck_653_ == 0)
{
v___x_625_ = v_x_612_;
v_isShared_626_ = v_isSharedCheck_653_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v_x_612_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_653_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
if (lean_obj_tag(v_a_623_) == 1)
{
lean_object* v_val_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_647_; 
lean_dec_ref(v___x_611_);
v_val_627_ = lean_ctor_get(v_a_623_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v_a_623_);
if (v_isSharedCheck_647_ == 0)
{
v___x_629_ = v_a_623_;
v_isShared_630_ = v_isSharedCheck_647_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_val_627_);
lean_dec(v_a_623_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_647_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_631_; uint16_t v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_638_; 
v___x_631_ = l_Lasm_Fetch_contentTypeOf(v_head_609_);
v___x_632_ = 200;
v___x_633_ = l_Lasm_Fetch_Response_withBody(v_val_627_, v___x_631_, v___x_632_);
v___x_634_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__5));
v___x_635_ = ((lean_object*)(l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_cacheControl___closed__0));
v___x_636_ = l_Lasm_Fetch_Response_withHeader(v___x_633_, v___x_634_, v___x_635_);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 0, v___x_636_);
v___x_638_ = v___x_629_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_636_);
v___x_638_ = v_reuseFailAlloc_646_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_643_; 
v___x_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
v___x_640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
lean_ctor_set(v___x_640_, 1, v___x_610_);
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 0, v___x_641_);
v___x_643_ = v___x_625_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_641_);
v___x_643_ = v_reuseFailAlloc_645_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
lean_object* v___x_644_; 
v___x_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
return v___x_644_;
}
}
}
}
else
{
lean_object* v___x_648_; lean_object* v___x_650_; 
lean_dec(v_a_623_);
v___x_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_648_, 0, v___x_611_);
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 0, v___x_648_);
v___x_650_ = v___x_625_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_648_);
v___x_650_ = v_reuseFailAlloc_652_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v___x_651_; 
v___x_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
return v___x_651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__1___boxed(lean_object* v_head_654_, lean_object* v___x_655_, lean_object* v___x_656_, lean_object* v_x_657_, lean_object* v___y_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__1(v_head_654_, v___x_655_, v___x_656_, v_x_657_);
lean_dec_ref(v_head_654_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__0___boxed(lean_object* v___x_660_, lean_object* v___x_661_, lean_object* v_tail_662_, lean_object* v_x_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__0(v___x_660_, v___x_661_, v_tail_662_, v_x_663_);
lean_dec(v_tail_662_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg(lean_object* v___x_666_, lean_object* v___x_667_, lean_object* v_as_x27_668_, lean_object* v_b_669_){
_start:
{
if (lean_obj_tag(v_as_x27_668_) == 0)
{
lean_object* v___x_671_; lean_object* v___x_672_; 
lean_dec(v___x_667_);
lean_dec_ref(v___x_666_);
v___x_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_671_, 0, v_b_669_);
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
return v___x_672_;
}
else
{
lean_object* v_head_673_; lean_object* v_tail_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; uint8_t v___x_678_; lean_object* v___f_679_; lean_object* v___f_680_; uint8_t v___x_681_; lean_object* v_val_683_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
lean_dec_ref(v_b_669_);
v_head_673_ = lean_ctor_get(v_as_x27_668_, 0);
v_tail_674_ = lean_ctor_get(v_as_x27_668_, 1);
v___x_675_ = lean_box(0);
v___x_676_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__0));
v___x_677_ = lean_unsigned_to_nat(0u);
v___x_678_ = lean_nat_dec_eq(v___x_667_, v___x_677_);
lean_inc(v_tail_674_);
lean_inc_ref(v___x_666_);
v___f_679_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_679_, 0, v___x_666_);
lean_closure_set(v___f_679_, 1, v___x_667_);
lean_closure_set(v___f_679_, 2, v_tail_674_);
lean_inc(v_head_673_);
v___f_680_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_680_, 0, v_head_673_);
lean_closure_set(v___f_680_, 1, v___x_675_);
lean_closure_set(v___f_680_, 2, v___x_676_);
v___x_681_ = 0;
v___x_687_ = lean_string_append(v___x_666_, v_head_673_);
v___x_688_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_readFile_x3f(v___x_687_);
lean_dec_ref(v___x_687_);
v_a_689_ = lean_ctor_get(v___x_688_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_688_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___x_688_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_688_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v___jp_682_:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_684_, 0, v_val_683_);
v___x_685_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_677_, v___x_678_, v___x_684_, v___f_680_);
v___x_686_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_677_, v___x_681_, v___x_685_, v___f_679_);
return v___x_686_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
lean_ctor_set_tag(v___x_691_, 1);
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_689_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
v_val_683_ = v___x_694_;
goto v___jp_682_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___lam__0(lean_object* v___x_697_, lean_object* v___x_698_, lean_object* v_tail_699_, lean_object* v_x_700_){
_start:
{
if (lean_obj_tag(v_x_700_) == 0)
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_710_; 
lean_dec(v___x_698_);
lean_dec_ref(v___x_697_);
v_a_702_ = lean_ctor_get(v_x_700_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v_x_700_);
if (v_isSharedCheck_710_ == 0)
{
v___x_704_ = v_x_700_;
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v_x_700_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_707_; 
if (v_isShared_705_ == 0)
{
v___x_707_ = v___x_704_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_702_);
v___x_707_ = v_reuseFailAlloc_709_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_708_; 
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
return v___x_708_;
}
}
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_728_; 
v_a_711_ = lean_ctor_get(v_x_700_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v_x_700_);
if (v_isSharedCheck_728_ == 0)
{
v___x_713_ = v_x_700_;
v_isShared_714_ = v_isSharedCheck_728_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v_x_700_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_728_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
if (lean_obj_tag(v_a_711_) == 0)
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_725_; 
lean_dec(v___x_698_);
lean_dec_ref(v___x_697_);
v_a_715_ = lean_ctor_get(v_a_711_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v_a_711_);
if (v_isSharedCheck_725_ == 0)
{
v___x_717_ = v_a_711_;
v_isShared_718_ = v_isSharedCheck_725_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v_a_711_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_725_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_720_; 
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v_a_715_);
v___x_720_ = v___x_713_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_715_);
v___x_720_ = v_reuseFailAlloc_724_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
lean_object* v___x_722_; 
if (v_isShared_718_ == 0)
{
lean_ctor_set(v___x_717_, 0, v___x_720_);
v___x_722_ = v___x_717_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_720_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
else
{
lean_object* v_a_726_; lean_object* v___x_727_; 
lean_del_object(v___x_713_);
v_a_726_ = lean_ctor_get(v_a_711_, 0);
lean_inc(v_a_726_);
lean_dec_ref_known(v_a_711_, 1);
v___x_727_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg(v___x_697_, v___x_698_, v_tail_699_, v_a_726_);
return v___x_727_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg___boxed(lean_object* v___x_729_, lean_object* v___x_730_, lean_object* v_as_x27_731_, lean_object* v_b_732_, lean_object* v___y_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg(v___x_729_, v___x_730_, v_as_x27_731_, v_b_732_);
lean_dec(v_as_x27_731_);
return v_res_734_;
}
}
static lean_object* _init_l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1___closed__0(void){
_start:
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__8));
v___x_736_ = lean_string_utf8_byte_size(v___x_735_);
return v___x_736_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1(lean_object* v_x_737_){
_start:
{
if (lean_obj_tag(v_x_737_) == 0)
{
uint8_t v___x_738_; 
v___x_738_ = 0;
return v___x_738_;
}
else
{
lean_object* v_head_739_; lean_object* v_tail_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; uint8_t v___x_749_; 
v_head_739_ = lean_ctor_get(v_x_737_, 0);
v_tail_740_ = lean_ctor_get(v_x_737_, 1);
v___x_741_ = lean_unsigned_to_nat(0u);
v___x_742_ = lean_string_utf8_byte_size(v_head_739_);
lean_inc(v_head_739_);
v___x_743_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_743_, 0, v_head_739_);
lean_ctor_set(v___x_743_, 1, v___x_741_);
lean_ctor_set(v___x_743_, 2, v___x_742_);
v___x_744_ = l_String_Slice_trimAscii(v___x_743_);
v___x_745_ = l_String_Slice_toString(v___x_744_);
lean_dec_ref(v___x_744_);
v___x_746_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__8));
v___x_747_ = lean_string_utf8_byte_size(v___x_745_);
v___x_748_ = lean_obj_once(&l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1___closed__0, &l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1___closed__0_once, _init_l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1___closed__0);
v___x_749_ = lean_nat_dec_le(v___x_748_, v___x_747_);
if (v___x_749_ == 0)
{
lean_dec_ref(v___x_745_);
v_x_737_ = v_tail_740_;
goto _start;
}
else
{
uint8_t v___x_751_; 
v___x_751_ = lean_string_memcmp(v___x_745_, v___x_746_, v___x_741_, v___x_741_, v___x_748_);
lean_dec_ref(v___x_745_);
if (v___x_751_ == 0)
{
v_x_737_ = v_tail_740_;
goto _start;
}
else
{
return v___x_751_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1___boxed(lean_object* v_x_753_){
_start:
{
uint8_t v_res_754_; lean_object* v_r_755_; 
v_res_754_ = l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1(v_x_753_);
lean_dec(v_x_753_);
v_r_755_ = lean_box(v_res_754_);
return v_r_755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_serve(lean_object* v_a_760_, lean_object* v_req_761_){
_start:
{
lean_object* v_method_763_; lean_object* v___f_764_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___x_800_; uint8_t v___x_801_; 
v_method_763_ = lean_ctor_get(v_req_761_, 0);
v___f_764_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___closed__0));
v___x_800_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___closed__2));
v___x_801_ = lean_string_dec_eq(v_method_763_, v___x_800_);
if (v___x_801_ == 0)
{
lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_802_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___closed__3));
v___x_803_ = lean_string_dec_eq(v_method_763_, v___x_802_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; 
lean_dec_ref(v_req_761_);
lean_dec_ref(v_a_760_);
v___x_804_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___lam__0___closed__1));
return v___x_804_;
}
else
{
goto v___jp_788_;
}
}
else
{
goto v___jp_788_;
}
v___jp_765_:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v_files_772_; lean_object* v_dir_773_; lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_768_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___closed__1));
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = lean_box(0);
v___x_771_ = l_String_splitOnAux(v___y_767_, v___x_768_, v___x_769_, v___x_769_, v___x_769_, v___x_770_);
lean_dec_ref(v___y_767_);
v_files_772_ = lean_ctor_get(v_a_760_, 0);
lean_inc_ref(v_files_772_);
v_dir_773_ = lean_ctor_get(v_a_760_, 1);
lean_inc_ref(v_dir_773_);
lean_dec_ref(v_a_760_);
v___x_774_ = lean_array_get_size(v_files_772_);
v___x_775_ = lean_nat_dec_eq(v___x_774_, v___x_769_);
if (v___x_775_ == 0)
{
uint8_t v_accepts_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
lean_dec_ref(v_dir_773_);
v_accepts_776_ = l_List_any___at___00Lasm_Fetch_Assets_serve_spec__1(v___x_771_);
lean_dec(v___x_771_);
v___x_777_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates(v___y_766_);
v___x_778_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__0));
v___x_779_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg(v_files_772_, v_accepts_776_, v___x_777_, v___x_778_);
lean_dec(v___x_777_);
v___x_780_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_769_, v___x_775_, v___x_779_, v___f_764_);
return v___x_780_;
}
else
{
lean_object* v___x_781_; uint8_t v___x_782_; 
lean_dec_ref(v_files_772_);
lean_dec(v___x_771_);
v___x_781_ = lean_string_utf8_byte_size(v_dir_773_);
v___x_782_ = lean_nat_dec_eq(v___x_781_, v___x_769_);
if (v___x_782_ == 0)
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_783_ = l___private_Lasm_Fetch_Assets_0__Lasm_Fetch_candidates(v___y_766_);
v___x_784_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__0));
v___x_785_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg(v_dir_773_, v___x_781_, v___x_783_, v___x_784_);
lean_dec(v___x_783_);
v___x_786_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_769_, v___x_782_, v___x_785_, v___f_764_);
return v___x_786_;
}
else
{
lean_object* v___x_787_; 
lean_dec_ref(v_dir_773_);
lean_dec_ref(v___y_766_);
v___x_787_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___lam__0___closed__1));
return v___x_787_;
}
}
}
v___jp_788_:
{
lean_object* v_path_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; uint8_t v___x_794_; 
lean_inc_ref(v_req_761_);
v_path_789_ = l_Lasm_Fetch_Request_path(v_req_761_);
v___x_790_ = ((lean_object*)(l_Lasm_Fetch_immutable___closed__0));
v___x_791_ = lean_unsigned_to_nat(0u);
v___x_792_ = lean_box(0);
v___x_793_ = l_String_splitOnAux(v_path_789_, v___x_790_, v___x_791_, v___x_791_, v___x_791_, v___x_792_);
v___x_794_ = l_List_any___at___00Lasm_Fetch_Assets_serve_spec__0(v___x_793_);
lean_dec(v___x_793_);
if (v___x_794_ == 0)
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg___closed__4));
v___x_796_ = l_Lasm_Fetch_Request_header_x3f(v_req_761_, v___x_795_);
lean_dec_ref(v_req_761_);
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v___x_797_; 
v___x_797_ = ((lean_object*)(l_Lasm_Fetch_instInhabitedAsset_default___closed__0));
v___y_766_ = v_path_789_;
v___y_767_ = v___x_797_;
goto v___jp_765_;
}
else
{
lean_object* v_val_798_; 
v_val_798_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_val_798_);
lean_dec_ref_known(v___x_796_, 1);
v___y_766_ = v_path_789_;
v___y_767_ = v_val_798_;
goto v___jp_765_;
}
}
else
{
lean_object* v___x_799_; 
lean_dec_ref(v_path_789_);
lean_dec_ref(v_req_761_);
lean_dec_ref(v_a_760_);
v___x_799_ = ((lean_object*)(l_Lasm_Fetch_Assets_serve___lam__0___closed__1));
return v___x_799_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_serve___boxed(lean_object* v_a_805_, lean_object* v_req_806_, lean_object* v_a_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Lasm_Fetch_Assets_serve(v_a_805_, v_req_806_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3(lean_object* v___x_809_, uint8_t v_accepts_810_, lean_object* v_as_811_, lean_object* v_as_x27_812_, lean_object* v_b_813_, lean_object* v_a_814_){
_start:
{
lean_object* v___x_816_; 
v___x_816_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___redArg(v___x_809_, v_accepts_810_, v_as_x27_812_, v_b_813_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3___boxed(lean_object* v___x_817_, lean_object* v_accepts_818_, lean_object* v_as_819_, lean_object* v_as_x27_820_, lean_object* v_b_821_, lean_object* v_a_822_, lean_object* v___y_823_){
_start:
{
uint8_t v_accepts_boxed_824_; lean_object* v_res_825_; 
v_accepts_boxed_824_ = lean_unbox(v_accepts_818_);
v_res_825_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__3(v___x_817_, v_accepts_boxed_824_, v_as_819_, v_as_x27_820_, v_b_821_, v_a_822_);
lean_dec(v_as_x27_820_);
lean_dec(v_as_819_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4(lean_object* v___x_826_, lean_object* v___x_827_, lean_object* v_as_828_, lean_object* v_as_x27_829_, lean_object* v_b_830_, lean_object* v_a_831_){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___redArg(v___x_826_, v___x_827_, v_as_x27_829_, v_b_830_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4___boxed(lean_object* v___x_834_, lean_object* v___x_835_, lean_object* v_as_836_, lean_object* v_as_x27_837_, lean_object* v_b_838_, lean_object* v_a_839_, lean_object* v___y_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_List_forIn_x27_loop___at___00Lasm_Fetch_Assets_serve_spec__4(v___x_834_, v___x_835_, v_as_836_, v_as_x27_837_, v_b_838_, v_a_839_);
lean_dec(v_as_x27_837_);
lean_dec(v_as_836_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_wrap___lam__0(lean_object* v_handler_842_, lean_object* v_req_843_, lean_object* v_x_844_){
_start:
{
if (lean_obj_tag(v_x_844_) == 0)
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_854_; 
lean_dec_ref(v_req_843_);
lean_dec_ref(v_handler_842_);
v_a_846_ = lean_ctor_get(v_x_844_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v_x_844_);
if (v_isSharedCheck_854_ == 0)
{
v___x_848_ = v_x_844_;
v_isShared_849_ = v_isSharedCheck_854_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v_x_844_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_854_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_853_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
lean_object* v___x_852_; 
v___x_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_852_, 0, v___x_851_);
return v___x_852_;
}
}
}
else
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_871_; 
v_a_855_ = lean_ctor_get(v_x_844_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v_x_844_);
if (v_isSharedCheck_871_ == 0)
{
v___x_857_ = v_x_844_;
v_isShared_858_ = v_isSharedCheck_871_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v_x_844_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_871_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
if (lean_obj_tag(v_a_855_) == 0)
{
lean_object* v___x_859_; 
lean_del_object(v___x_857_);
v___x_859_ = lean_apply_2(v_handler_842_, v_req_843_, lean_box(0));
return v___x_859_;
}
else
{
lean_object* v_val_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_870_; 
lean_dec_ref(v_req_843_);
lean_dec_ref(v_handler_842_);
v_val_860_ = lean_ctor_get(v_a_855_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v_a_855_);
if (v_isSharedCheck_870_ == 0)
{
v___x_862_ = v_a_855_;
v_isShared_863_ = v_isSharedCheck_870_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_val_860_);
lean_dec(v_a_855_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_870_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v_val_860_);
v___x_865_ = v___x_857_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_val_860_);
v___x_865_ = v_reuseFailAlloc_869_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
lean_object* v___x_867_; 
if (v_isShared_863_ == 0)
{
lean_ctor_set_tag(v___x_862_, 0);
lean_ctor_set(v___x_862_, 0, v___x_865_);
v___x_867_ = v___x_862_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_865_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_wrap___lam__0___boxed(lean_object* v_handler_872_, lean_object* v_req_873_, lean_object* v_x_874_, lean_object* v___y_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Lasm_Fetch_Assets_wrap___lam__0(v_handler_872_, v_req_873_, v_x_874_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_wrap(lean_object* v_a_877_, lean_object* v_handler_878_, lean_object* v_req_879_){
_start:
{
lean_object* v___f_881_; lean_object* v___x_882_; uint8_t v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
lean_inc_ref(v_req_879_);
v___f_881_ = lean_alloc_closure((void*)(l_Lasm_Fetch_Assets_wrap___lam__0___boxed), 4, 2);
lean_closure_set(v___f_881_, 0, v_handler_878_);
lean_closure_set(v___f_881_, 1, v_req_879_);
v___x_882_ = lean_unsigned_to_nat(0u);
v___x_883_ = 0;
v___x_884_ = l_Lasm_Fetch_Assets_serve(v_a_877_, v_req_879_);
v___x_885_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_882_, v___x_883_, v___x_884_, v___f_881_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_Assets_wrap___boxed(lean_object* v_a_886_, lean_object* v_handler_887_, lean_object* v_req_888_, lean_object* v_a_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lasm_Fetch_Assets_wrap(v_a_886_, v_handler_887_, v_req_888_);
return v_res_890_;
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
