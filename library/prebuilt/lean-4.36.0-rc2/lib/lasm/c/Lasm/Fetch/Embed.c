// Lean compiler output
// Module: Lasm.Fetch.Embed
// Imports: public import Init public meta import Init public import Lean.Elab.Term public import Lean.Meta.AppBuilder public import Lasm.Fetch.Assets
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabFixedTermElab_spec__0___redArg();
uint8_t l_System_FilePath_isDir(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* lean_io_read_dir(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_IO_FS_DirEntry_path(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lasm_Fetch_contentTypeOf(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* lean_io_getenv(lean_object*);
lean_object* l_System_FilePath_parent(lean_object*);
static const lean_string_object l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"};
static const lean_object* l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__0_value;
static lean_once_cell_t l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__1;
static lean_once_cell_t l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__2;
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars;
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_base64Encode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_Fetch_base64Encode___closed__0 = (const lean_object*)&l_Lasm_Fetch_base64Encode___closed__0_value;
static const lean_ctor_object l_Lasm_Fetch_base64Encode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_base64Encode___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_Fetch_base64Encode___closed__1 = (const lean_object*)&l_Lasm_Fetch_base64Encode___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch_base64Encode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch_base64Encode___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk___closed__0 = (const lean_object*)&l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lasm"};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__0 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__0_value;
static const lean_string_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Fetch"};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__1 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__1_value;
static const lean_string_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "termEmbed_dir!_"};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__2 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__2_value;
static const lean_ctor_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__3_value_aux_0),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(158, 46, 52, 109, 125, 32, 85, 241)}};
static const lean_ctor_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__3_value_aux_1),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(130, 98, 183, 3, 164, 190, 160, 67)}};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__3 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__3_value;
static const lean_string_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__4 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__4_value;
static const lean_ctor_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__5 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__5_value;
static const lean_string_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "embed_dir!"};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__6 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__6_value;
static const lean_ctor_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__6_value)}};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__7 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__7_value;
static const lean_string_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__8 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__8_value;
static const lean_ctor_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__9 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__9_value;
static const lean_ctor_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__9_value)}};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__10 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__10_value;
static const lean_ctor_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__5_value),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__7_value),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__10_value)}};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__11 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__11_value;
static const lean_ctor_object l_Lasm_Fetch_termEmbed__dir_x21___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__3_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__11_value)}};
static const lean_object* l_Lasm_Fetch_termEmbed__dir_x21___00__closed__12 = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__12_value;
LEAN_EXPORT const lean_object* l_Lasm_Fetch_termEmbed__dir_x21__ = (const lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Asset"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(158, 46, 52, 109, 125, 32, 85, 241)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 168, 48, 76, 141, 38, 194, 202)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(45, 213, 225, 129, 135, 222, 251, 178)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ".br"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__8;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__10;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__12_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__14;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__15_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__16_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__16_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__17;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ".gz"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__18_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__0_value_aux_0),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(158, 46, 52, 109, 125, 32, 85, 241)}};
static const lean_ctor_object l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__0_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(33, 168, 48, 76, 141, 38, 194, 202)}};
static const lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__0 = (const lean_object*)&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__0_value;
static lean_once_cell_t l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1;
static const lean_string_object l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Assets"};
static const lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__2 = (const lean_object*)&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 112, 232, 34, 93, 30, 148, 226)}};
static const lean_ctor_object l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__3_value_aux_0),((lean_object*)&l_Lasm_Fetch_termEmbed__dir_x21___00__closed__1_value),LEAN_SCALAR_PTR_LITERAL(158, 46, 52, 109, 125, 32, 85, 241)}};
static const lean_ctor_object l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__3_value_aux_1),((lean_object*)&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(253, 213, 183, 220, 132, 108, 56, 139)}};
static const lean_ctor_object l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(73, 52, 77, 76, 1, 44, 110, 113)}};
static const lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__3 = (const lean_object*)&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__3_value;
static lean_once_cell_t l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4;
static const lean_array_object l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__5 = (const lean_object*)&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__5_value;
static const lean_string_object l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LASM_DEV_SERVER"};
static const lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__6 = (const lean_object*)&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__0));
v___x_3_ = l_String_toListImpl(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_obj_once(&l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__1, &l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__1_once, _init_l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__1);
v___x_5_ = lean_array_mk(v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__2, &l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__2_once, _init_l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars___closed__2);
return v___x_6_;
}
}
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___lam__0(lean_object* v_xs_7_, lean_object* v_i_8_){
_start:
{
lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_9_ = lean_byte_array_size(v_xs_7_);
v___x_10_ = lean_nat_dec_lt(v_i_8_, v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___lam__0___boxed(lean_object* v_xs_11_, lean_object* v_i_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___lam__0(v_xs_11_, v_i_12_);
lean_dec(v_i_12_);
lean_dec_ref(v_xs_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_15_; lean_object* v___x_16_; 
v___x_15_ = 65;
v___x_16_ = lean_box_uint32(v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg(lean_object* v_b_17_, lean_object* v_a_18_){
_start:
{
lean_object* v_fst_19_; lean_object* v_snd_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_127_; 
v_fst_19_ = lean_ctor_get(v_a_18_, 0);
v_snd_20_ = lean_ctor_get(v_a_18_, 1);
v_isSharedCheck_127_ = !lean_is_exclusive(v_a_18_);
if (v_isSharedCheck_127_ == 0)
{
v___x_22_ = v_a_18_;
v_isShared_23_ = v_isSharedCheck_127_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_snd_20_);
lean_inc(v_fst_19_);
lean_dec(v_a_18_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_127_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___y_25_; uint32_t v___y_26_; lean_object* v___x_34_; uint8_t v___x_35_; 
v___x_34_ = lean_byte_array_size(v_b_17_);
v___x_35_ = lean_nat_dec_lt(v_snd_20_, v___x_34_);
if (v___x_35_ == 0)
{
lean_object* v___x_36_; 
lean_del_object(v___x_22_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v_fst_19_);
lean_ctor_set(v___x_36_, 1, v_snd_20_);
return v___x_36_;
}
else
{
lean_object* v___y_38_; lean_object* v___y_39_; uint8_t v___y_40_; lean_object* v___y_41_; lean_object* v___y_42_; uint32_t v___y_43_; uint8_t v___y_51_; lean_object* v___y_52_; lean_object* v___y_53_; uint8_t v___y_54_; lean_object* v___y_55_; lean_object* v___y_86_; uint8_t v___y_87_; lean_object* v___y_88_; uint8_t v___y_89_; uint8_t v___y_90_; lean_object* v_i_92_; uint8_t v___x_93_; lean_object* v___y_95_; uint8_t v___y_96_; lean_object* v___y_97_; lean_object* v___y_107_; uint8_t v___y_108_; uint8_t v___y_109_; uint8_t v___y_112_; uint8_t v___x_122_; 
v_i_92_ = lean_unsigned_to_nat(0u);
v___x_93_ = 0;
v___x_122_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___lam__0(v_b_17_, v_snd_20_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_123_ = lean_box(v___x_93_);
v___x_124_ = l_outOfBounds___redArg(v___x_123_);
lean_dec(v___x_123_);
v___x_125_ = lean_unbox(v___x_124_);
lean_dec(v___x_124_);
v___y_112_ = v___x_125_;
goto v___jp_111_;
}
else
{
uint8_t v___x_126_; 
v___x_126_ = lean_byte_array_fget(v_b_17_, v_snd_20_);
v___y_112_ = v___x_126_;
goto v___jp_111_;
}
v___jp_37_:
{
lean_object* v___x_44_; 
v___x_44_ = lean_string_push(v___y_38_, v___y_43_);
if (v___y_40_ == 0)
{
uint32_t v___x_45_; 
lean_dec(v___y_39_);
v___x_45_ = 61;
v___y_25_ = v___x_44_;
v___y_26_ = v___x_45_;
goto v___jp_24_;
}
else
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; uint32_t v___x_49_; 
v___x_46_ = lean_nat_mod(v___y_39_, v___y_41_);
lean_dec(v___y_39_);
v___x_47_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___boxed__const__1;
v___x_48_ = lean_array_get_borrowed(v___x_47_, v___y_42_, v___x_46_);
lean_dec(v___x_46_);
v___x_49_ = lean_unbox_uint32(v___x_48_);
v___y_25_ = v___x_44_;
v___y_26_ = v___x_49_;
goto v___jp_24_;
}
}
v___jp_50_:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; uint32_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; uint32_t v___x_76_; lean_object* v___x_77_; 
v___x_56_ = lean_unsigned_to_nat(65536u);
v___x_57_ = lean_nat_mul(v___y_52_, v___x_56_);
lean_dec(v___y_52_);
v___x_58_ = lean_unsigned_to_nat(256u);
v___x_59_ = lean_nat_mul(v___y_53_, v___x_58_);
lean_dec(v___y_53_);
v___x_60_ = lean_nat_add(v___x_57_, v___x_59_);
lean_dec(v___x_59_);
lean_dec(v___x_57_);
v___x_61_ = lean_nat_add(v___x_60_, v___y_55_);
lean_dec(v___y_55_);
lean_dec(v___x_60_);
v___x_62_ = l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars;
v___x_63_ = lean_unsigned_to_nat(18u);
v___x_64_ = lean_nat_shiftr(v___x_61_, v___x_63_);
v___x_65_ = lean_unsigned_to_nat(64u);
v___x_66_ = lean_nat_mod(v___x_64_, v___x_65_);
lean_dec(v___x_64_);
v___x_67_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___boxed__const__1;
v___x_68_ = lean_array_get_borrowed(v___x_67_, v___x_62_, v___x_66_);
lean_dec(v___x_66_);
v___x_69_ = lean_unbox_uint32(v___x_68_);
v___x_70_ = lean_string_push(v_fst_19_, v___x_69_);
v___x_71_ = lean_unsigned_to_nat(12u);
v___x_72_ = lean_nat_shiftr(v___x_61_, v___x_71_);
v___x_73_ = lean_nat_mod(v___x_72_, v___x_65_);
lean_dec(v___x_72_);
v___x_74_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___boxed__const__1;
v___x_75_ = lean_array_get_borrowed(v___x_74_, v___x_62_, v___x_73_);
lean_dec(v___x_73_);
v___x_76_ = lean_unbox_uint32(v___x_75_);
v___x_77_ = lean_string_push(v___x_70_, v___x_76_);
if (v___y_54_ == 0)
{
uint32_t v___x_78_; 
v___x_78_ = 61;
v___y_38_ = v___x_77_;
v___y_39_ = v___x_61_;
v___y_40_ = v___y_51_;
v___y_41_ = v___x_65_;
v___y_42_ = v___x_62_;
v___y_43_ = v___x_78_;
goto v___jp_37_;
}
else
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; uint32_t v___x_84_; 
v___x_79_ = lean_unsigned_to_nat(6u);
v___x_80_ = lean_nat_shiftr(v___x_61_, v___x_79_);
v___x_81_ = lean_nat_mod(v___x_80_, v___x_65_);
lean_dec(v___x_80_);
v___x_82_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___boxed__const__1;
v___x_83_ = lean_array_get_borrowed(v___x_82_, v___x_62_, v___x_81_);
lean_dec(v___x_81_);
v___x_84_ = lean_unbox_uint32(v___x_83_);
v___y_38_ = v___x_77_;
v___y_39_ = v___x_61_;
v___y_40_ = v___y_51_;
v___y_41_ = v___x_65_;
v___y_42_ = v___x_62_;
v___y_43_ = v___x_84_;
goto v___jp_37_;
}
}
v___jp_85_:
{
lean_object* v___x_91_; 
v___x_91_ = lean_uint8_to_nat(v___y_90_);
v___y_51_ = v___y_87_;
v___y_52_ = v___y_86_;
v___y_53_ = v___y_88_;
v___y_54_ = v___y_89_;
v___y_55_ = v___x_91_;
goto v___jp_50_;
}
v___jp_94_:
{
lean_object* v___x_98_; lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_98_ = lean_unsigned_to_nat(2u);
v___x_99_ = lean_nat_add(v_snd_20_, v___x_98_);
v___x_100_ = lean_nat_dec_lt(v___x_99_, v___x_34_);
if (v___x_100_ == 0)
{
lean_dec(v___x_99_);
v___y_51_ = v___x_100_;
v___y_52_ = v___y_95_;
v___y_53_ = v___y_97_;
v___y_54_ = v___y_96_;
v___y_55_ = v_i_92_;
goto v___jp_50_;
}
else
{
uint8_t v___x_101_; 
v___x_101_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___lam__0(v_b_17_, v___x_99_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
lean_dec(v___x_99_);
v___x_102_ = lean_box(v___x_93_);
v___x_103_ = l_outOfBounds___redArg(v___x_102_);
lean_dec(v___x_102_);
v___x_104_ = lean_unbox(v___x_103_);
lean_dec(v___x_103_);
v___y_86_ = v___y_95_;
v___y_87_ = v___x_100_;
v___y_88_ = v___y_97_;
v___y_89_ = v___y_96_;
v___y_90_ = v___x_104_;
goto v___jp_85_;
}
else
{
uint8_t v___x_105_; 
v___x_105_ = lean_byte_array_fget(v_b_17_, v___x_99_);
lean_dec(v___x_99_);
v___y_86_ = v___y_95_;
v___y_87_ = v___x_100_;
v___y_88_ = v___y_97_;
v___y_89_ = v___y_96_;
v___y_90_ = v___x_105_;
goto v___jp_85_;
}
}
}
v___jp_106_:
{
lean_object* v___x_110_; 
v___x_110_ = lean_uint8_to_nat(v___y_109_);
v___y_95_ = v___y_107_;
v___y_96_ = v___y_108_;
v___y_97_ = v___x_110_;
goto v___jp_94_;
}
v___jp_111_:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_113_ = lean_uint8_to_nat(v___y_112_);
v___x_114_ = lean_unsigned_to_nat(1u);
v___x_115_ = lean_nat_add(v_snd_20_, v___x_114_);
v___x_116_ = lean_nat_dec_lt(v___x_115_, v___x_34_);
if (v___x_116_ == 0)
{
lean_dec(v___x_115_);
v___y_95_ = v___x_113_;
v___y_96_ = v___x_116_;
v___y_97_ = v_i_92_;
goto v___jp_94_;
}
else
{
uint8_t v___x_117_; 
v___x_117_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___lam__0(v_b_17_, v___x_115_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
lean_dec(v___x_115_);
v___x_118_ = lean_box(v___x_93_);
v___x_119_ = l_outOfBounds___redArg(v___x_118_);
lean_dec(v___x_118_);
v___x_120_ = lean_unbox(v___x_119_);
lean_dec(v___x_119_);
v___y_107_ = v___x_113_;
v___y_108_ = v___x_116_;
v___y_109_ = v___x_120_;
goto v___jp_106_;
}
else
{
uint8_t v___x_121_; 
v___x_121_ = lean_byte_array_fget(v_b_17_, v___x_115_);
lean_dec(v___x_115_);
v___y_107_ = v___x_113_;
v___y_108_ = v___x_116_;
v___y_109_ = v___x_121_;
goto v___jp_106_;
}
}
}
}
v___jp_24_:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_31_; 
v___x_27_ = lean_string_push(v___y_25_, v___y_26_);
v___x_28_ = lean_unsigned_to_nat(3u);
v___x_29_ = lean_nat_add(v_snd_20_, v___x_28_);
lean_dec(v_snd_20_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 1, v___x_29_);
lean_ctor_set(v___x_22_, 0, v___x_27_);
v___x_31_ = v___x_22_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_33_, 1, v___x_29_);
v___x_31_ = v_reuseFailAlloc_33_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
v_a_18_ = v___x_31_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___boxed(lean_object* v_b_128_, lean_object* v_a_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg(v_b_128_, v_a_129_);
lean_dec_ref(v_b_128_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_base64Encode(lean_object* v_b_135_){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v_fst_138_; 
v___x_136_ = ((lean_object*)(l_Lasm_Fetch_base64Encode___closed__1));
v___x_137_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg(v_b_135_, v___x_136_);
v_fst_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_fst_138_);
lean_dec_ref(v___x_137_);
return v_fst_138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch_base64Encode___boxed(lean_object* v_b_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lasm_Fetch_base64Encode(v_b_139_);
lean_dec_ref(v_b_139_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0(lean_object* v_b_141_, lean_object* v_inst_142_, lean_object* v_a_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg(v_b_141_, v_a_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___boxed(lean_object* v_b_145_, lean_object* v_inst_146_, lean_object* v_a_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0(v_b_145_, v_inst_146_, v_a_147_);
lean_dec_ref(v_b_145_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0(lean_object* v_root_153_, lean_object* v_rel_154_, lean_object* v_as_155_, size_t v_sz_156_, size_t v_i_157_, lean_object* v_b_158_){
_start:
{
lean_object* v_a_161_; uint8_t v___x_165_; 
v___x_165_ = lean_usize_dec_lt(v_i_157_, v_sz_156_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; 
lean_dec_ref(v_rel_154_);
lean_dec_ref(v_root_153_);
v___x_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_166_, 0, v_b_158_);
return v___x_166_;
}
else
{
lean_object* v_a_167_; lean_object* v___y_169_; lean_object* v_fileName_176_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v_a_167_ = lean_array_uget_borrowed(v_as_155_, v_i_157_);
v_fileName_176_ = lean_ctor_get(v_a_167_, 1);
v___x_184_ = lean_string_utf8_byte_size(v_fileName_176_);
v___x_185_ = lean_unsigned_to_nat(1u);
v___x_186_ = lean_nat_dec_le(v___x_185_, v___x_184_);
if (v___x_186_ == 0)
{
goto v___jp_177_;
}
else
{
lean_object* v___x_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_187_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__1));
v___x_188_ = lean_unsigned_to_nat(0u);
v___x_189_ = lean_string_memcmp(v_fileName_176_, v___x_187_, v___x_188_, v___x_188_, v___x_185_);
if (v___x_189_ == 0)
{
goto v___jp_177_;
}
else
{
v_a_161_ = v_b_158_;
goto v___jp_160_;
}
}
v___jp_168_:
{
lean_object* v___x_170_; uint8_t v___x_171_; 
lean_inc(v_a_167_);
v___x_170_ = l_IO_FS_DirEntry_path(v_a_167_);
v___x_171_ = l_System_FilePath_isDir(v___x_170_);
lean_dec_ref(v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; 
v___x_172_ = lean_array_push(v_b_158_, v___y_169_);
v_a_161_ = v___x_172_;
goto v___jp_160_;
}
else
{
lean_object* v___x_173_; 
lean_inc_ref(v_root_153_);
v___x_173_ = l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk(v_root_153_, v___y_169_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; lean_object* v___x_175_; 
v_a_174_ = lean_ctor_get(v___x_173_, 0);
lean_inc(v_a_174_);
lean_dec_ref_known(v___x_173_, 1);
v___x_175_ = l_Array_append___redArg(v_b_158_, v_a_174_);
lean_dec(v_a_174_);
v_a_161_ = v___x_175_;
goto v___jp_160_;
}
else
{
lean_dec_ref(v_b_158_);
lean_dec_ref(v_rel_154_);
lean_dec_ref(v_root_153_);
return v___x_173_;
}
}
}
v___jp_177_:
{
lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_178_ = lean_string_utf8_byte_size(v_rel_154_);
v___x_179_ = lean_unsigned_to_nat(0u);
v___x_180_ = lean_nat_dec_eq(v___x_178_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_181_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__0));
lean_inc_ref(v_rel_154_);
v___x_182_ = lean_string_append(v_rel_154_, v___x_181_);
v___x_183_ = lean_string_append(v___x_182_, v_fileName_176_);
v___y_169_ = v___x_183_;
goto v___jp_168_;
}
else
{
lean_inc_ref(v_fileName_176_);
v___y_169_ = v_fileName_176_;
goto v___jp_168_;
}
}
}
v___jp_160_:
{
size_t v___x_162_; size_t v___x_163_; 
v___x_162_ = ((size_t)1ULL);
v___x_163_ = lean_usize_add(v_i_157_, v___x_162_);
v_i_157_ = v___x_163_;
v_b_158_ = v_a_161_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk(lean_object* v_root_190_, lean_object* v_rel_191_){
_start:
{
lean_object* v___x_193_; lean_object* v_out_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_193_ = lean_unsigned_to_nat(0u);
v_out_194_ = ((lean_object*)(l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk___closed__0));
lean_inc_ref(v_rel_191_);
lean_inc_ref(v_root_190_);
v___x_195_ = l_System_FilePath_join(v_root_190_, v_rel_191_);
v___x_196_ = lean_io_read_dir(v___x_195_);
lean_dec_ref(v___x_195_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_220_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_220_ == 0)
{
v___x_199_ = v___x_196_;
v_isShared_200_ = v_isSharedCheck_220_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_196_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_220_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
size_t v_sz_201_; size_t v___x_202_; lean_object* v___x_203_; 
v_sz_201_ = lean_array_size(v_a_197_);
v___x_202_ = ((size_t)0ULL);
v___x_203_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0(v_root_190_, v_rel_191_, v_a_197_, v_sz_201_, v___x_202_, v_out_194_);
lean_dec(v_a_197_);
if (lean_obj_tag(v___x_203_) == 0)
{
lean_object* v_a_204_; lean_object* v___x_205_; lean_object* v___y_207_; lean_object* v___y_208_; uint8_t v___x_213_; 
v_a_204_ = lean_ctor_get(v___x_203_, 0);
v___x_205_ = lean_array_get_size(v_a_204_);
v___x_213_ = lean_nat_dec_eq(v___x_205_, v___x_193_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___y_217_; uint8_t v___x_219_; 
lean_inc(v_a_204_);
lean_dec_ref_known(v___x_203_, 1);
v___x_214_ = lean_unsigned_to_nat(1u);
v___x_215_ = lean_nat_sub(v___x_205_, v___x_214_);
v___x_219_ = lean_nat_dec_le(v___x_193_, v___x_215_);
if (v___x_219_ == 0)
{
lean_inc(v___x_215_);
v___y_217_ = v___x_215_;
goto v___jp_216_;
}
else
{
v___y_217_ = v___x_193_;
goto v___jp_216_;
}
v___jp_216_:
{
uint8_t v___x_218_; 
v___x_218_ = lean_nat_dec_le(v___y_217_, v___x_215_);
if (v___x_218_ == 0)
{
lean_dec(v___x_215_);
lean_inc(v___y_217_);
v___y_207_ = v___y_217_;
v___y_208_ = v___y_217_;
goto v___jp_206_;
}
else
{
v___y_207_ = v___y_217_;
v___y_208_ = v___x_215_;
goto v___jp_206_;
}
}
}
else
{
lean_del_object(v___x_199_);
return v___x_203_;
}
v___jp_206_:
{
lean_object* v___x_209_; lean_object* v___x_211_; 
v___x_209_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v___x_205_, v_a_204_, v___y_207_, v___y_208_);
lean_dec(v___y_208_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v___x_209_);
v___x_211_ = v___x_199_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_209_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
else
{
lean_del_object(v___x_199_);
return v___x_203_;
}
}
}
else
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
lean_dec_ref(v_rel_191_);
lean_dec_ref(v_root_190_);
v_a_221_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_196_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_196_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
v___x_226_ = v___x_223_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_221_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk___boxed(lean_object* v_root_229_, lean_object* v_rel_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk(v_root_229_, v_rel_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___boxed(lean_object* v_root_233_, lean_object* v_rel_234_, lean_object* v_as_235_, lean_object* v_sz_236_, lean_object* v_i_237_, lean_object* v_b_238_, lean_object* v___y_239_){
_start:
{
size_t v_sz_boxed_240_; size_t v_i_boxed_241_; lean_object* v_res_242_; 
v_sz_boxed_240_ = lean_unbox_usize(v_sz_236_);
lean_dec(v_sz_236_);
v_i_boxed_241_ = lean_unbox_usize(v_i_237_);
lean_dec(v_i_237_);
v_res_242_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0(v_root_233_, v_rel_234_, v_as_235_, v_sz_boxed_240_, v_i_boxed_241_, v_b_238_);
lean_dec_ref(v_as_235_);
return v_res_242_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_277_ = lean_box(0);
v___x_278_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__2));
v___x_279_ = l_Lean_Expr_const___override(v___x_278_, v___x_277_);
return v___x_279_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = lean_unsigned_to_nat(0u);
v___x_287_ = l_Lean_Level_ofNat(v___x_286_);
return v___x_287_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_288_ = lean_box(0);
v___x_289_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__8);
v___x_290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___x_288_);
return v___x_290_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__10(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_291_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9);
v___x_292_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__7));
v___x_293_ = l_Lean_Expr_const___override(v___x_292_, v___x_291_);
return v___x_293_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_297_ = lean_box(0);
v___x_298_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__12));
v___x_299_ = l_Lean_Expr_const___override(v___x_298_, v___x_297_);
return v___x_299_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__14(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_300_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13);
v___x_301_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__10);
v___x_302_ = l_Lean_Expr_app___override(v___x_301_, v___x_300_);
return v___x_302_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__17(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_307_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9);
v___x_308_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__16));
v___x_309_ = l_Lean_Expr_const___override(v___x_308_, v___x_307_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg(lean_object* v___x_311_, lean_object* v_as_312_, size_t v_sz_313_, size_t v_i_314_, lean_object* v_b_315_, lean_object* v___y_316_){
_start:
{
lean_object* v_a_319_; uint8_t v___x_323_; 
v___x_323_ = lean_usize_dec_lt(v_i_314_, v_sz_313_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; 
lean_dec_ref(v___x_311_);
v___x_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_324_, 0, v_b_315_);
return v___x_324_;
}
else
{
lean_object* v___x_325_; lean_object* v_a_326_; lean_object* v___y_328_; lean_object* v___y_329_; lean_object* v___x_340_; lean_object* v___x_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_325_ = lean_unsigned_to_nat(0u);
v_a_326_ = lean_array_uget_borrowed(v_as_312_, v_i_314_);
v___x_340_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__4));
v___x_388_ = lean_string_utf8_byte_size(v_a_326_);
v___x_389_ = lean_unsigned_to_nat(3u);
v___x_390_ = lean_nat_dec_le(v___x_389_, v___x_388_);
if (v___x_390_ == 0)
{
goto v___jp_381_;
}
else
{
lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_391_ = lean_nat_sub(v___x_388_, v___x_389_);
v___x_392_ = lean_string_memcmp(v_a_326_, v___x_340_, v___x_391_, v___x_325_, v___x_389_);
lean_dec(v___x_391_);
if (v___x_392_ == 0)
{
goto v___jp_381_;
}
else
{
v_a_319_ = v_b_315_;
goto v___jp_318_;
}
}
v___jp_327_:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_330_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__3);
v___x_331_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__0));
v___x_332_ = lean_string_append(v___x_331_, v_a_326_);
v___x_333_ = l_Lean_mkStrLit(v___x_332_);
v___x_334_ = l_Lasm_Fetch_contentTypeOf(v_a_326_);
v___x_335_ = l_Lean_mkStrLit(v___x_334_);
v___x_336_ = l_Lasm_Fetch_base64Encode(v___y_328_);
lean_dec_ref(v___y_328_);
v___x_337_ = l_Lean_mkStrLit(v___x_336_);
v___x_338_ = l_Lean_mkApp4(v___x_330_, v___x_333_, v___x_335_, v___x_337_, v___y_329_);
v___x_339_ = lean_array_push(v_b_315_, v___x_338_);
v_a_319_ = v___x_339_;
goto v___jp_318_;
}
v___jp_341_:
{
lean_object* v_ref_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v_ref_342_ = lean_ctor_get(v___y_316_, 2);
lean_inc(v_a_326_);
lean_inc_ref(v___x_311_);
v___x_343_ = l_System_FilePath_join(v___x_311_, v_a_326_);
v___x_344_ = l_IO_FS_readBinFile(v___x_343_);
lean_dec_ref(v___x_343_);
if (lean_obj_tag(v___x_344_) == 0)
{
lean_object* v_a_345_; lean_object* v___x_346_; lean_object* v___x_347_; uint8_t v___x_348_; 
v_a_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc(v_a_345_);
lean_dec_ref_known(v___x_344_, 1);
lean_inc(v_a_326_);
v___x_346_ = lean_string_append(v_a_326_, v___x_340_);
lean_inc_ref(v___x_311_);
v___x_347_ = l_System_FilePath_join(v___x_311_, v___x_346_);
v___x_348_ = l_System_FilePath_pathExists(v___x_347_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; 
lean_dec_ref(v___x_347_);
v___x_349_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__14);
v___y_328_ = v_a_345_;
v___y_329_ = v___x_349_;
goto v___jp_327_;
}
else
{
lean_object* v___x_350_; 
v___x_350_ = l_IO_FS_readBinFile(v___x_347_);
lean_dec_ref(v___x_347_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v_a_351_ = lean_ctor_get(v___x_350_, 0);
lean_inc(v_a_351_);
lean_dec_ref_known(v___x_350_, 1);
v___x_352_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__17, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__17_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__17);
v___x_353_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13);
v___x_354_ = l_Lasm_Fetch_base64Encode(v_a_351_);
lean_dec(v_a_351_);
v___x_355_ = l_Lean_mkStrLit(v___x_354_);
v___x_356_ = l_Lean_mkAppB(v___x_352_, v___x_353_, v___x_355_);
v___y_328_ = v_a_345_;
v___y_329_ = v___x_356_;
goto v___jp_327_;
}
else
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_368_; 
lean_dec(v_a_345_);
lean_dec_ref(v_b_315_);
lean_dec_ref(v___x_311_);
v_a_357_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_368_ == 0)
{
v___x_359_ = v___x_350_;
v_isShared_360_ = v_isSharedCheck_368_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_350_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_368_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_361_ = lean_io_error_to_string(v_a_357_);
v___x_362_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_362_, 0, v___x_361_);
v___x_363_ = l_Lean_MessageData_ofFormat(v___x_362_);
lean_inc(v_ref_342_);
v___x_364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_364_, 0, v_ref_342_);
lean_ctor_set(v___x_364_, 1, v___x_363_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_364_);
v___x_366_ = v___x_359_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
}
else
{
lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_380_; 
lean_dec_ref(v_b_315_);
lean_dec_ref(v___x_311_);
v_a_369_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_380_ == 0)
{
v___x_371_ = v___x_344_;
v_isShared_372_ = v_isSharedCheck_380_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_dec(v___x_344_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_380_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_378_; 
v___x_373_ = lean_io_error_to_string(v_a_369_);
v___x_374_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
v___x_375_ = l_Lean_MessageData_ofFormat(v___x_374_);
lean_inc(v_ref_342_);
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v_ref_342_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 0, v___x_376_);
v___x_378_ = v___x_371_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_376_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
v___jp_381_:
{
lean_object* v___x_382_; lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_382_ = lean_string_utf8_byte_size(v_a_326_);
v___x_383_ = lean_unsigned_to_nat(3u);
v___x_384_ = lean_nat_dec_le(v___x_383_, v___x_382_);
if (v___x_384_ == 0)
{
goto v___jp_341_;
}
else
{
lean_object* v___x_385_; lean_object* v___x_386_; uint8_t v___x_387_; 
v___x_385_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__18));
v___x_386_ = lean_nat_sub(v___x_382_, v___x_383_);
v___x_387_ = lean_string_memcmp(v_a_326_, v___x_385_, v___x_386_, v___x_325_, v___x_383_);
lean_dec(v___x_386_);
if (v___x_387_ == 0)
{
goto v___jp_341_;
}
else
{
v_a_319_ = v_b_315_;
goto v___jp_318_;
}
}
}
}
v___jp_318_:
{
size_t v___x_320_; size_t v___x_321_; 
v___x_320_ = ((size_t)1ULL);
v___x_321_ = lean_usize_add(v_i_314_, v___x_320_);
v_i_314_ = v___x_321_;
v_b_315_ = v_a_319_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___boxed(lean_object* v___x_393_, lean_object* v_as_394_, lean_object* v_sz_395_, lean_object* v_i_396_, lean_object* v_b_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
size_t v_sz_boxed_400_; size_t v_i_boxed_401_; lean_object* v_res_402_; 
v_sz_boxed_400_ = lean_unbox_usize(v_sz_395_);
lean_dec(v_sz_395_);
v_i_boxed_401_ = lean_unbox_usize(v_i_396_);
lean_dec(v_i_396_);
v_res_402_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg(v___x_393_, v_as_394_, v_sz_boxed_400_, v_i_boxed_401_, v_b_397_, v___y_398_);
lean_dec_ref(v___y_398_);
lean_dec_ref(v_as_394_);
return v_res_402_;
}
}
static lean_object* _init_l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_407_ = lean_box(0);
v___x_408_ = ((lean_object*)(l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__0));
v___x_409_ = l_Lean_Expr_const___override(v___x_408_, v___x_407_);
return v___x_409_;
}
}
static lean_object* _init_l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = lean_box(0);
v___x_417_ = ((lean_object*)(l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__3));
v___x_418_ = l_Lean_Expr_const___override(v___x_417_, v___x_416_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg(lean_object* v_stx_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_){
_start:
{
lean_object* v___y_431_; lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_446_ = ((lean_object*)(l_Lasm_Fetch_termEmbed__dir_x21___00__closed__3));
lean_inc(v_stx_422_);
v___x_447_ = l_Lean_Syntax_isOfKind(v_stx_422_, v___x_446_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; 
lean_dec(v_stx_422_);
v___x_448_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabFixedTermElab_spec__0___redArg();
return v___x_448_;
}
else
{
lean_object* v_toCold_449_; lean_object* v_ref_450_; lean_object* v___y_452_; uint8_t v___y_453_; lean_object* v_fileName_497_; lean_object* v___x_498_; lean_object* v_dir_499_; lean_object* v___y_501_; lean_object* v___x_507_; 
v_toCold_449_ = lean_ctor_get(v_a_427_, 0);
v_ref_450_ = lean_ctor_get(v_a_427_, 2);
v_fileName_497_ = lean_ctor_get(v_toCold_449_, 0);
v___x_498_ = lean_unsigned_to_nat(1u);
v_dir_499_ = l_Lean_Syntax_getArg(v_stx_422_, v___x_498_);
lean_dec(v_stx_422_);
lean_inc_ref(v_fileName_497_);
v___x_507_ = l_System_FilePath_parent(v_fileName_497_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v___x_508_; 
v___x_508_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__1));
v___y_501_ = v___x_508_;
goto v___jp_500_;
}
else
{
lean_object* v_val_509_; 
v_val_509_ = lean_ctor_get(v___x_507_, 0);
lean_inc(v_val_509_);
lean_dec_ref_known(v___x_507_, 1);
v___y_501_ = v_val_509_;
goto v___jp_500_;
}
v___jp_451_:
{
uint8_t v___x_454_; 
v___x_454_ = l_System_FilePath_isDir(v___y_452_);
if (v___y_453_ == 0)
{
if (v___x_454_ == 0)
{
v___y_431_ = v___y_452_;
goto v___jp_430_;
}
else
{
lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = ((lean_object*)(l_Lasm_Fetch_base64Encode___closed__0));
lean_inc_ref(v___y_452_);
v___x_456_ = l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk(v___y_452_, v___x_455_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; lean_object* v___x_458_; size_t v_sz_459_; size_t v___x_460_; lean_object* v___x_461_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_a_457_);
lean_dec_ref_known(v___x_456_, 1);
v___x_458_ = ((lean_object*)(l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__5));
v_sz_459_ = lean_array_size(v_a_457_);
v___x_460_ = ((size_t)0ULL);
lean_inc_ref(v___y_452_);
v___x_461_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg(v___y_452_, v_a_457_, v_sz_459_, v___x_460_, v___x_458_, v_a_427_);
lean_dec(v_a_457_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_a_462_);
lean_dec_ref_known(v___x_461_, 1);
v___x_463_ = lean_obj_once(&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1, &l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1_once, _init_l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1);
v___x_464_ = lean_array_to_list(v_a_462_);
v___x_465_ = l_Lean_Meta_mkArrayLit(v___x_463_, v___x_464_, v_a_425_, v_a_426_, v_a_427_, v_a_428_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v_a_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_476_; 
v_a_466_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_476_ == 0)
{
v___x_468_ = v___x_465_;
v_isShared_469_ = v_isSharedCheck_476_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_a_466_);
lean_dec(v___x_465_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_476_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_474_; 
v___x_470_ = lean_obj_once(&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4, &l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4_once, _init_l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4);
v___x_471_ = l_Lean_mkStrLit(v___y_452_);
v___x_472_ = l_Lean_mkAppB(v___x_470_, v_a_466_, v___x_471_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 0, v___x_472_);
v___x_474_ = v___x_468_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_472_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
else
{
lean_dec_ref(v___y_452_);
return v___x_465_;
}
}
else
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
lean_dec_ref(v___y_452_);
v_a_477_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_461_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_461_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_477_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_496_; 
lean_dec_ref(v___y_452_);
v_a_485_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_496_ == 0)
{
v___x_487_ = v___x_456_;
v_isShared_488_ = v_isSharedCheck_496_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_456_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_496_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_494_; 
v___x_489_ = lean_io_error_to_string(v_a_485_);
v___x_490_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
v___x_491_ = l_Lean_MessageData_ofFormat(v___x_490_);
lean_inc(v_ref_450_);
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v_ref_450_);
lean_ctor_set(v___x_492_, 1, v___x_491_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_492_);
v___x_494_ = v___x_487_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_492_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
}
else
{
v___y_431_ = v___y_452_;
goto v___jp_430_;
}
}
v___jp_500_:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_502_ = l_Lean_TSyntax_getString(v_dir_499_);
lean_dec(v_dir_499_);
v___x_503_ = l_System_FilePath_join(v___y_501_, v___x_502_);
v___x_504_ = ((lean_object*)(l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__6));
v___x_505_ = lean_io_getenv(v___x_504_);
if (lean_obj_tag(v___x_505_) == 0)
{
uint8_t v___x_506_; 
v___x_506_ = 0;
v___y_452_ = v___x_503_;
v___y_453_ = v___x_506_;
goto v___jp_451_;
}
else
{
lean_dec_ref_known(v___x_505_, 1);
v___y_452_ = v___x_503_;
v___y_453_ = v___x_447_;
goto v___jp_451_;
}
}
}
v___jp_430_:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = lean_box(0);
v___x_433_ = lean_obj_once(&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1, &l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1_once, _init_l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1);
v___x_434_ = l_Lean_Meta_mkArrayLit(v___x_433_, v___x_432_, v_a_425_, v_a_426_, v_a_427_, v_a_428_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_445_; 
v_a_435_ = lean_ctor_get(v___x_434_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_434_);
if (v_isSharedCheck_445_ == 0)
{
v___x_437_ = v___x_434_;
v_isShared_438_ = v_isSharedCheck_445_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v___x_434_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_445_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_443_; 
v___x_439_ = lean_obj_once(&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4, &l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4_once, _init_l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4);
v___x_440_ = l_Lean_mkStrLit(v___y_431_);
v___x_441_ = l_Lean_mkAppB(v___x_439_, v_a_435_, v___x_440_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 0, v___x_441_);
v___x_443_ = v___x_437_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_441_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
else
{
lean_dec_ref(v___y_431_);
return v___x_434_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___boxed(lean_object* v_stx_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg(v_stx_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_, v_a_515_, v_a_516_);
lean_dec(v_a_516_);
lean_dec_ref(v_a_515_);
lean_dec(v_a_514_);
lean_dec_ref(v_a_513_);
lean_dec(v_a_512_);
lean_dec_ref(v_a_511_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1(lean_object* v_stx_519_, lean_object* v_x_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg(v_stx_519_, v_a_521_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___boxed(lean_object* v_stx_529_, lean_object* v_x_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1(v_stx_529_, v_x_530_, v_a_531_, v_a_532_, v_a_533_, v_a_534_, v_a_535_, v_a_536_);
lean_dec(v_a_536_);
lean_dec_ref(v_a_535_);
lean_dec(v_a_534_);
lean_dec_ref(v_a_533_);
lean_dec(v_a_532_);
lean_dec_ref(v_a_531_);
lean_dec(v_x_530_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0(lean_object* v___x_539_, lean_object* v_as_540_, size_t v_sz_541_, size_t v_i_542_, lean_object* v_b_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg(v___x_539_, v_as_540_, v_sz_541_, v_i_542_, v_b_543_, v___y_548_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___boxed(lean_object* v___x_552_, lean_object* v_as_553_, lean_object* v_sz_554_, lean_object* v_i_555_, lean_object* v_b_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
size_t v_sz_boxed_564_; size_t v_i_boxed_565_; lean_object* v_res_566_; 
v_sz_boxed_564_ = lean_unbox_usize(v_sz_554_);
lean_dec(v_sz_554_);
v_i_boxed_565_ = lean_unbox_usize(v_i_555_);
lean_dec(v_i_555_);
v_res_566_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0(v___x_552_, v_as_553_, v_sz_boxed_564_, v_i_boxed_565_, v_b_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec_ref(v_as_553_);
return v_res_566_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lasm_Fetch_Assets(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fetch_Embed(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fetch_Assets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars = _init_l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars();
lean_mark_persistent(l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_b64chars);
l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___boxed__const__1 = _init_l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___boxed__const__1();
lean_mark_persistent(l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
