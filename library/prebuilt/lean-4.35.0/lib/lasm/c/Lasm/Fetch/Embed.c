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
lean_object* lean_string_data(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabFixedTermElab_spec__0___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* lean_io_read_dir(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_IO_FS_DirEntry_path(lean_object*);
uint8_t l_System_FilePath_isDir(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
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
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__2;
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
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__19;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__20;
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
v___x_3_ = lean_string_data(v___x_2_);
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
lean_object* v___y_38_; lean_object* v___y_39_; lean_object* v___y_40_; uint8_t v___y_41_; lean_object* v___y_42_; uint32_t v___y_43_; lean_object* v___y_51_; uint8_t v___y_52_; uint8_t v___y_53_; lean_object* v___y_54_; lean_object* v___y_55_; lean_object* v___y_86_; uint8_t v___y_87_; lean_object* v___y_88_; uint8_t v___y_89_; uint8_t v___y_90_; lean_object* v_i_92_; uint8_t v___x_93_; uint8_t v___y_95_; lean_object* v___y_96_; lean_object* v___y_97_; uint8_t v___y_107_; lean_object* v___y_108_; uint8_t v___y_109_; uint8_t v___y_112_; uint8_t v___x_122_; 
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
if (v___y_41_ == 0)
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
v___x_46_ = lean_nat_mod(v___y_39_, v___y_42_);
lean_dec(v___y_39_);
v___x_47_ = l___private_Init_While_0__repeatM_erased___at___00Lasm_Fetch_base64Encode_spec__0___redArg___boxed__const__1;
v___x_48_ = lean_array_get_borrowed(v___x_47_, v___y_40_, v___x_46_);
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
v___x_57_ = lean_nat_mul(v___y_54_, v___x_56_);
lean_dec(v___y_54_);
v___x_58_ = lean_unsigned_to_nat(256u);
v___x_59_ = lean_nat_mul(v___y_51_, v___x_58_);
lean_dec(v___y_51_);
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
if (v___y_52_ == 0)
{
uint32_t v___x_78_; 
v___x_78_ = 61;
v___y_38_ = v___x_77_;
v___y_39_ = v___x_61_;
v___y_40_ = v___x_62_;
v___y_41_ = v___y_53_;
v___y_42_ = v___x_65_;
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
v___y_40_ = v___x_62_;
v___y_41_ = v___y_53_;
v___y_42_ = v___x_65_;
v___y_43_ = v___x_84_;
goto v___jp_37_;
}
}
v___jp_85_:
{
lean_object* v___x_91_; 
v___x_91_ = lean_uint8_to_nat(v___y_90_);
v___y_51_ = v___y_86_;
v___y_52_ = v___y_87_;
v___y_53_ = v___y_89_;
v___y_54_ = v___y_88_;
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
v___y_51_ = v___y_97_;
v___y_52_ = v___y_95_;
v___y_53_ = v___x_100_;
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
v___y_86_ = v___y_97_;
v___y_87_ = v___y_95_;
v___y_88_ = v___y_96_;
v___y_89_ = v___x_100_;
v___y_90_ = v___x_104_;
goto v___jp_85_;
}
else
{
uint8_t v___x_105_; 
v___x_105_ = lean_byte_array_fget(v_b_17_, v___x_99_);
lean_dec(v___x_99_);
v___y_86_ = v___y_97_;
v___y_87_ = v___y_95_;
v___y_88_ = v___y_96_;
v___y_89_ = v___x_100_;
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
v___y_95_ = v___x_116_;
v___y_96_ = v___x_113_;
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
v___y_107_ = v___x_116_;
v___y_108_ = v___x_113_;
v___y_109_ = v___x_120_;
goto v___jp_106_;
}
else
{
uint8_t v___x_121_; 
v___x_121_ = lean_byte_array_fget(v_b_17_, v___x_115_);
lean_dec(v___x_115_);
v___y_107_ = v___x_116_;
v___y_108_ = v___x_113_;
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
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__2(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__1));
v___x_154_ = lean_string_utf8_byte_size(v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0(lean_object* v_root_155_, lean_object* v_rel_156_, lean_object* v_as_157_, size_t v_sz_158_, size_t v_i_159_, lean_object* v_b_160_){
_start:
{
lean_object* v_a_163_; uint8_t v___x_167_; 
v___x_167_ = lean_usize_dec_lt(v_i_159_, v_sz_158_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; 
lean_dec_ref(v_rel_156_);
lean_dec_ref(v_root_155_);
v___x_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_168_, 0, v_b_160_);
return v___x_168_;
}
else
{
lean_object* v_a_169_; lean_object* v___y_171_; lean_object* v_fileName_178_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v_a_169_ = lean_array_uget_borrowed(v_as_157_, v_i_159_);
v_fileName_178_ = lean_ctor_get(v_a_169_, 1);
v___x_186_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__1));
v___x_187_ = lean_string_utf8_byte_size(v_fileName_178_);
v___x_188_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__2);
v___x_189_ = lean_nat_dec_le(v___x_188_, v___x_187_);
if (v___x_189_ == 0)
{
goto v___jp_179_;
}
else
{
lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_190_ = lean_unsigned_to_nat(0u);
v___x_191_ = lean_string_memcmp(v_fileName_178_, v___x_186_, v___x_190_, v___x_190_, v___x_188_);
if (v___x_191_ == 0)
{
goto v___jp_179_;
}
else
{
v_a_163_ = v_b_160_;
goto v___jp_162_;
}
}
v___jp_170_:
{
lean_object* v___x_172_; uint8_t v___x_173_; 
lean_inc(v_a_169_);
v___x_172_ = l_IO_FS_DirEntry_path(v_a_169_);
v___x_173_ = l_System_FilePath_isDir(v___x_172_);
lean_dec_ref(v___x_172_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; 
v___x_174_ = lean_array_push(v_b_160_, v___y_171_);
v_a_163_ = v___x_174_;
goto v___jp_162_;
}
else
{
lean_object* v___x_175_; 
lean_inc_ref(v_root_155_);
v___x_175_ = l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk(v_root_155_, v___y_171_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v_a_176_; lean_object* v___x_177_; 
v_a_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_a_176_);
lean_dec_ref_known(v___x_175_, 1);
v___x_177_ = l_Array_append___redArg(v_b_160_, v_a_176_);
lean_dec(v_a_176_);
v_a_163_ = v___x_177_;
goto v___jp_162_;
}
else
{
lean_dec_ref(v_b_160_);
lean_dec_ref(v_rel_156_);
lean_dec_ref(v_root_155_);
return v___x_175_;
}
}
}
v___jp_179_:
{
lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_180_ = lean_string_utf8_byte_size(v_rel_156_);
v___x_181_ = lean_unsigned_to_nat(0u);
v___x_182_ = lean_nat_dec_eq(v___x_180_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_183_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__0));
lean_inc_ref(v_rel_156_);
v___x_184_ = lean_string_append(v_rel_156_, v___x_183_);
v___x_185_ = lean_string_append(v___x_184_, v_fileName_178_);
v___y_171_ = v___x_185_;
goto v___jp_170_;
}
else
{
lean_inc_ref(v_fileName_178_);
v___y_171_ = v_fileName_178_;
goto v___jp_170_;
}
}
}
v___jp_162_:
{
size_t v___x_164_; size_t v___x_165_; 
v___x_164_ = ((size_t)1ULL);
v___x_165_ = lean_usize_add(v_i_159_, v___x_164_);
v_i_159_ = v___x_165_;
v_b_160_ = v_a_163_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk(lean_object* v_root_192_, lean_object* v_rel_193_){
_start:
{
lean_object* v___x_195_; lean_object* v_out_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_195_ = lean_unsigned_to_nat(0u);
v_out_196_ = ((lean_object*)(l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk___closed__0));
lean_inc_ref(v_rel_193_);
lean_inc_ref(v_root_192_);
v___x_197_ = l_System_FilePath_join(v_root_192_, v_rel_193_);
v___x_198_ = lean_io_read_dir(v___x_197_);
lean_dec_ref(v___x_197_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_222_; 
v_a_199_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_222_ == 0)
{
v___x_201_ = v___x_198_;
v_isShared_202_ = v_isSharedCheck_222_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_198_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_222_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
size_t v_sz_203_; size_t v___x_204_; lean_object* v___x_205_; 
v_sz_203_ = lean_array_size(v_a_199_);
v___x_204_ = ((size_t)0ULL);
v___x_205_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0(v_root_192_, v_rel_193_, v_a_199_, v_sz_203_, v___x_204_, v_out_196_);
lean_dec(v_a_199_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_207_; lean_object* v___y_209_; lean_object* v___y_210_; uint8_t v___x_215_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
lean_inc(v_a_206_);
v___x_207_ = lean_array_get_size(v_a_206_);
v___x_215_ = lean_nat_dec_eq(v___x_207_, v___x_195_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___y_219_; uint8_t v___x_221_; 
lean_dec_ref_known(v___x_205_, 1);
v___x_216_ = lean_unsigned_to_nat(1u);
v___x_217_ = lean_nat_sub(v___x_207_, v___x_216_);
v___x_221_ = lean_nat_dec_le(v___x_195_, v___x_217_);
if (v___x_221_ == 0)
{
lean_inc(v___x_217_);
v___y_219_ = v___x_217_;
goto v___jp_218_;
}
else
{
v___y_219_ = v___x_195_;
goto v___jp_218_;
}
v___jp_218_:
{
uint8_t v___x_220_; 
v___x_220_ = lean_nat_dec_le(v___y_219_, v___x_217_);
if (v___x_220_ == 0)
{
lean_dec(v___x_217_);
lean_inc(v___y_219_);
v___y_209_ = v___y_219_;
v___y_210_ = v___y_219_;
goto v___jp_208_;
}
else
{
v___y_209_ = v___y_219_;
v___y_210_ = v___x_217_;
goto v___jp_208_;
}
}
}
else
{
lean_dec(v_a_206_);
lean_del_object(v___x_201_);
return v___x_205_;
}
v___jp_208_:
{
lean_object* v___x_211_; lean_object* v___x_213_; 
v___x_211_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v___x_207_, v_a_206_, v___y_209_, v___y_210_);
lean_dec(v___y_210_);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v___x_211_);
v___x_213_ = v___x_201_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_211_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
else
{
lean_del_object(v___x_201_);
return v___x_205_;
}
}
}
else
{
lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_230_; 
lean_dec_ref(v_rel_193_);
lean_dec_ref(v_root_192_);
v_a_223_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_230_ == 0)
{
v___x_225_ = v___x_198_;
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_dec(v___x_198_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_228_; 
if (v_isShared_226_ == 0)
{
v___x_228_ = v___x_225_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_a_223_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk___boxed(lean_object* v_root_231_, lean_object* v_rel_232_, lean_object* v_a_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk(v_root_231_, v_rel_232_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___boxed(lean_object* v_root_235_, lean_object* v_rel_236_, lean_object* v_as_237_, lean_object* v_sz_238_, lean_object* v_i_239_, lean_object* v_b_240_, lean_object* v___y_241_){
_start:
{
size_t v_sz_boxed_242_; size_t v_i_boxed_243_; lean_object* v_res_244_; 
v_sz_boxed_242_ = lean_unbox_usize(v_sz_238_);
lean_dec(v_sz_238_);
v_i_boxed_243_ = lean_unbox_usize(v_i_239_);
lean_dec(v_i_239_);
v_res_244_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0(v_root_235_, v_rel_236_, v_as_237_, v_sz_boxed_242_, v_i_boxed_243_, v_b_240_);
lean_dec_ref(v_as_237_);
return v_res_244_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_279_ = lean_box(0);
v___x_280_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__2));
v___x_281_ = l_Lean_Expr_const___override(v___x_280_, v___x_279_);
return v___x_281_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_unsigned_to_nat(0u);
v___x_289_ = l_Lean_Level_ofNat(v___x_288_);
return v___x_289_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_290_ = lean_box(0);
v___x_291_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__8);
v___x_292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
lean_ctor_set(v___x_292_, 1, v___x_290_);
return v___x_292_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__10(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_293_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9);
v___x_294_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__7));
v___x_295_ = l_Lean_Expr_const___override(v___x_294_, v___x_293_);
return v___x_295_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_299_ = lean_box(0);
v___x_300_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__12));
v___x_301_ = l_Lean_Expr_const___override(v___x_300_, v___x_299_);
return v___x_301_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__14(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13);
v___x_303_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__10);
v___x_304_ = l_Lean_Expr_app___override(v___x_303_, v___x_302_);
return v___x_304_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__17(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__9);
v___x_310_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__16));
v___x_311_ = l_Lean_Expr_const___override(v___x_310_, v___x_309_);
return v___x_311_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__19(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__18));
v___x_314_ = lean_string_utf8_byte_size(v___x_313_);
return v___x_314_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__20(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__4));
v___x_316_ = lean_string_utf8_byte_size(v___x_315_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg(lean_object* v___x_317_, lean_object* v_as_318_, size_t v_sz_319_, size_t v_i_320_, lean_object* v_b_321_, lean_object* v___y_322_){
_start:
{
lean_object* v_a_325_; uint8_t v___x_329_; 
v___x_329_ = lean_usize_dec_lt(v_i_320_, v_sz_319_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; 
lean_dec_ref(v___x_317_);
v___x_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_330_, 0, v_b_321_);
return v___x_330_;
}
else
{
lean_object* v___x_331_; lean_object* v_a_332_; lean_object* v___y_334_; lean_object* v___y_335_; lean_object* v___x_346_; lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_331_ = lean_unsigned_to_nat(0u);
v_a_332_ = lean_array_uget_borrowed(v_as_318_, v_i_320_);
v___x_346_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__4));
v___x_394_ = lean_string_utf8_byte_size(v_a_332_);
v___x_395_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__20, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__20_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__20);
v___x_396_ = lean_nat_dec_le(v___x_395_, v___x_394_);
if (v___x_396_ == 0)
{
goto v___jp_387_;
}
else
{
lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_397_ = lean_nat_sub(v___x_394_, v___x_395_);
v___x_398_ = lean_string_memcmp(v_a_332_, v___x_346_, v___x_397_, v___x_331_, v___x_395_);
lean_dec(v___x_397_);
if (v___x_398_ == 0)
{
goto v___jp_387_;
}
else
{
v_a_325_ = v_b_321_;
goto v___jp_324_;
}
}
v___jp_333_:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_336_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__3);
v___x_337_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__0));
v___x_338_ = lean_string_append(v___x_337_, v_a_332_);
v___x_339_ = l_Lean_mkStrLit(v___x_338_);
v___x_340_ = l_Lasm_Fetch_contentTypeOf(v_a_332_);
v___x_341_ = l_Lean_mkStrLit(v___x_340_);
v___x_342_ = l_Lasm_Fetch_base64Encode(v___y_334_);
lean_dec_ref(v___y_334_);
v___x_343_ = l_Lean_mkStrLit(v___x_342_);
v___x_344_ = l_Lean_mkApp4(v___x_336_, v___x_339_, v___x_341_, v___x_343_, v___y_335_);
v___x_345_ = lean_array_push(v_b_321_, v___x_344_);
v_a_325_ = v___x_345_;
goto v___jp_324_;
}
v___jp_347_:
{
lean_object* v_ref_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_ref_348_ = lean_ctor_get(v___y_322_, 2);
lean_inc(v_a_332_);
lean_inc_ref(v___x_317_);
v___x_349_ = l_System_FilePath_join(v___x_317_, v_a_332_);
v___x_350_ = l_IO_FS_readBinFile(v___x_349_);
lean_dec_ref(v___x_349_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v_a_351_ = lean_ctor_get(v___x_350_, 0);
lean_inc(v_a_351_);
lean_dec_ref_known(v___x_350_, 1);
lean_inc(v_a_332_);
v___x_352_ = lean_string_append(v_a_332_, v___x_346_);
lean_inc_ref(v___x_317_);
v___x_353_ = l_System_FilePath_join(v___x_317_, v___x_352_);
v___x_354_ = l_System_FilePath_pathExists(v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; 
lean_dec_ref(v___x_353_);
v___x_355_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__14, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__14);
v___y_334_ = v_a_351_;
v___y_335_ = v___x_355_;
goto v___jp_333_;
}
else
{
lean_object* v___x_356_; 
v___x_356_ = l_IO_FS_readBinFile(v___x_353_);
lean_dec_ref(v___x_353_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_a_357_);
lean_dec_ref_known(v___x_356_, 1);
v___x_358_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__17, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__17_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__17);
v___x_359_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__13);
v___x_360_ = l_Lasm_Fetch_base64Encode(v_a_357_);
lean_dec(v_a_357_);
v___x_361_ = l_Lean_mkStrLit(v___x_360_);
v___x_362_ = l_Lean_mkAppB(v___x_358_, v___x_359_, v___x_361_);
v___y_334_ = v_a_351_;
v___y_335_ = v___x_362_;
goto v___jp_333_;
}
else
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_374_; 
lean_dec(v_a_351_);
lean_dec_ref(v_b_321_);
lean_dec_ref(v___x_317_);
v_a_363_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_374_ == 0)
{
v___x_365_ = v___x_356_;
v_isShared_366_ = v_isSharedCheck_374_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v___x_356_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_374_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_367_ = lean_io_error_to_string(v_a_363_);
v___x_368_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
v___x_369_ = l_Lean_MessageData_ofFormat(v___x_368_);
lean_inc(v_ref_348_);
v___x_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_370_, 0, v_ref_348_);
lean_ctor_set(v___x_370_, 1, v___x_369_);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 0, v___x_370_);
v___x_372_ = v___x_365_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_386_; 
lean_dec_ref(v_b_321_);
lean_dec_ref(v___x_317_);
v_a_375_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_386_ == 0)
{
v___x_377_ = v___x_350_;
v_isShared_378_ = v_isSharedCheck_386_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_350_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_386_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_384_; 
v___x_379_ = lean_io_error_to_string(v_a_375_);
v___x_380_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
v___x_381_ = l_Lean_MessageData_ofFormat(v___x_380_);
lean_inc(v_ref_348_);
v___x_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_382_, 0, v_ref_348_);
lean_ctor_set(v___x_382_, 1, v___x_381_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v___x_382_);
v___x_384_ = v___x_377_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(1, 1, 0);
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
v___jp_387_:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_388_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__18));
v___x_389_ = lean_string_utf8_byte_size(v_a_332_);
v___x_390_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__19, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__19_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___closed__19);
v___x_391_ = lean_nat_dec_le(v___x_390_, v___x_389_);
if (v___x_391_ == 0)
{
goto v___jp_347_;
}
else
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = lean_nat_sub(v___x_389_, v___x_390_);
v___x_393_ = lean_string_memcmp(v_a_332_, v___x_388_, v___x_392_, v___x_331_, v___x_390_);
lean_dec(v___x_392_);
if (v___x_393_ == 0)
{
goto v___jp_347_;
}
else
{
v_a_325_ = v_b_321_;
goto v___jp_324_;
}
}
}
}
v___jp_324_:
{
size_t v___x_326_; size_t v___x_327_; 
v___x_326_ = ((size_t)1ULL);
v___x_327_ = lean_usize_add(v_i_320_, v___x_326_);
v_i_320_ = v___x_327_;
v_b_321_ = v_a_325_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg___boxed(lean_object* v___x_399_, lean_object* v_as_400_, lean_object* v_sz_401_, lean_object* v_i_402_, lean_object* v_b_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
size_t v_sz_boxed_406_; size_t v_i_boxed_407_; lean_object* v_res_408_; 
v_sz_boxed_406_ = lean_unbox_usize(v_sz_401_);
lean_dec(v_sz_401_);
v_i_boxed_407_ = lean_unbox_usize(v_i_402_);
lean_dec(v_i_402_);
v_res_408_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg(v___x_399_, v_as_400_, v_sz_boxed_406_, v_i_boxed_407_, v_b_403_, v___y_404_);
lean_dec_ref(v___y_404_);
lean_dec_ref(v_as_400_);
return v_res_408_;
}
}
static lean_object* _init_l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1(void){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_413_ = lean_box(0);
v___x_414_ = ((lean_object*)(l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__0));
v___x_415_ = l_Lean_Expr_const___override(v___x_414_, v___x_413_);
return v___x_415_;
}
}
static lean_object* _init_l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_422_ = lean_box(0);
v___x_423_ = ((lean_object*)(l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__3));
v___x_424_ = l_Lean_Expr_const___override(v___x_423_, v___x_422_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg(lean_object* v_stx_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_){
_start:
{
lean_object* v___y_437_; lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_452_ = ((lean_object*)(l_Lasm_Fetch_termEmbed__dir_x21___00__closed__3));
lean_inc(v_stx_428_);
v___x_453_ = l_Lean_Syntax_isOfKind(v_stx_428_, v___x_452_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
lean_dec(v_stx_428_);
v___x_454_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Term_elabFixedTermElab_spec__0___redArg();
return v___x_454_;
}
else
{
lean_object* v_toCold_455_; lean_object* v_ref_456_; lean_object* v___y_458_; lean_object* v___y_502_; uint8_t v___y_503_; lean_object* v_fileName_505_; lean_object* v___x_506_; lean_object* v_dir_507_; lean_object* v___y_509_; lean_object* v___x_515_; 
v_toCold_455_ = lean_ctor_get(v_a_433_, 0);
v_ref_456_ = lean_ctor_get(v_a_433_, 2);
v_fileName_505_ = lean_ctor_get(v_toCold_455_, 0);
v___x_506_ = lean_unsigned_to_nat(1u);
v_dir_507_ = l_Lean_Syntax_getArg(v_stx_428_, v___x_506_);
lean_dec(v_stx_428_);
lean_inc_ref(v_fileName_505_);
v___x_515_ = l_System_FilePath_parent(v_fileName_505_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v___x_516_; 
v___x_516_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk_spec__0___closed__1));
v___y_509_ = v___x_516_;
goto v___jp_508_;
}
else
{
lean_object* v_val_517_; 
v_val_517_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_val_517_);
lean_dec_ref_known(v___x_515_, 1);
v___y_509_ = v_val_517_;
goto v___jp_508_;
}
v___jp_457_:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = ((lean_object*)(l_Lasm_Fetch_base64Encode___closed__0));
lean_inc_ref(v___y_458_);
v___x_460_ = l___private_Lasm_Fetch_Embed_0__Lasm_Fetch_walk(v___y_458_, v___x_459_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_462_; size_t v_sz_463_; size_t v___x_464_; lean_object* v___x_465_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v___x_460_, 1);
v___x_462_ = ((lean_object*)(l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__5));
v_sz_463_ = lean_array_size(v_a_461_);
v___x_464_ = ((size_t)0ULL);
lean_inc_ref(v___y_458_);
v___x_465_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg(v___y_458_, v_a_461_, v_sz_463_, v___x_464_, v___x_462_, v_a_433_);
lean_dec(v_a_461_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v_a_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v_a_466_ = lean_ctor_get(v___x_465_, 0);
lean_inc(v_a_466_);
lean_dec_ref_known(v___x_465_, 1);
v___x_467_ = lean_obj_once(&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1, &l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1_once, _init_l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1);
v___x_468_ = lean_array_to_list(v_a_466_);
v___x_469_ = l_Lean_Meta_mkArrayLit(v___x_467_, v___x_468_, v_a_431_, v_a_432_, v_a_433_, v_a_434_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_480_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_480_ == 0)
{
v___x_472_ = v___x_469_;
v_isShared_473_ = v_isSharedCheck_480_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_469_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_480_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_478_; 
v___x_474_ = lean_obj_once(&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4, &l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4_once, _init_l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4);
v___x_475_ = l_Lean_mkStrLit(v___y_458_);
v___x_476_ = l_Lean_mkAppB(v___x_474_, v_a_470_, v___x_475_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 0, v___x_476_);
v___x_478_ = v___x_472_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_476_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
else
{
lean_dec_ref(v___y_458_);
return v___x_469_;
}
}
else
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
lean_dec_ref(v___y_458_);
v_a_481_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_488_ == 0)
{
v___x_483_ = v___x_465_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_465_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_486_; 
if (v_isShared_484_ == 0)
{
v___x_486_ = v___x_483_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_a_481_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
else
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_500_; 
lean_dec_ref(v___y_458_);
v_a_489_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_500_ == 0)
{
v___x_491_ = v___x_460_;
v_isShared_492_ = v_isSharedCheck_500_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_460_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_500_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_498_; 
v___x_493_ = lean_io_error_to_string(v_a_489_);
v___x_494_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
v___x_495_ = l_Lean_MessageData_ofFormat(v___x_494_);
lean_inc(v_ref_456_);
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v_ref_456_);
lean_ctor_set(v___x_496_, 1, v___x_495_);
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 0, v___x_496_);
v___x_498_ = v___x_491_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
v___jp_501_:
{
uint8_t v___x_504_; 
v___x_504_ = l_System_FilePath_isDir(v___y_502_);
if (v___y_503_ == 0)
{
if (v___x_504_ == 0)
{
if (v___x_453_ == 0)
{
v___y_458_ = v___y_502_;
goto v___jp_457_;
}
else
{
v___y_437_ = v___y_502_;
goto v___jp_436_;
}
}
else
{
v___y_458_ = v___y_502_;
goto v___jp_457_;
}
}
else
{
v___y_437_ = v___y_502_;
goto v___jp_436_;
}
}
v___jp_508_:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_510_ = l_Lean_TSyntax_getString(v_dir_507_);
lean_dec(v_dir_507_);
v___x_511_ = l_System_FilePath_join(v___y_509_, v___x_510_);
v___x_512_ = ((lean_object*)(l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__6));
v___x_513_ = lean_io_getenv(v___x_512_);
if (lean_obj_tag(v___x_513_) == 0)
{
uint8_t v___x_514_; 
v___x_514_ = 0;
v___y_502_ = v___x_511_;
v___y_503_ = v___x_514_;
goto v___jp_501_;
}
else
{
lean_dec_ref_known(v___x_513_, 1);
v___y_502_ = v___x_511_;
v___y_503_ = v___x_453_;
goto v___jp_501_;
}
}
}
v___jp_436_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_438_ = lean_box(0);
v___x_439_ = lean_obj_once(&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1, &l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1_once, _init_l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__1);
v___x_440_ = l_Lean_Meta_mkArrayLit(v___x_439_, v___x_438_, v_a_431_, v_a_432_, v_a_433_, v_a_434_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_451_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_451_ == 0)
{
v___x_443_ = v___x_440_;
v_isShared_444_ = v_isSharedCheck_451_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_440_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_451_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_445_ = lean_obj_once(&l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4, &l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4_once, _init_l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___closed__4);
v___x_446_ = l_Lean_mkStrLit(v___y_437_);
v___x_447_ = l_Lean_mkAppB(v___x_445_, v_a_441_, v___x_446_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 0, v___x_447_);
v___x_449_ = v___x_443_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v___x_447_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
else
{
lean_dec_ref(v___y_437_);
return v___x_440_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg___boxed(lean_object* v_stx_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg(v_stx_518_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_);
lean_dec(v_a_524_);
lean_dec_ref(v_a_523_);
lean_dec(v_a_522_);
lean_dec_ref(v_a_521_);
lean_dec(v_a_520_);
lean_dec_ref(v_a_519_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1(lean_object* v_stx_527_, lean_object* v_x_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___redArg(v_stx_527_, v_a_529_, v_a_530_, v_a_531_, v_a_532_, v_a_533_, v_a_534_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1___boxed(lean_object* v_stx_537_, lean_object* v_x_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1(v_stx_537_, v_x_538_, v_a_539_, v_a_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec_ref(v_a_541_);
lean_dec(v_a_540_);
lean_dec_ref(v_a_539_);
lean_dec(v_x_538_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0(lean_object* v___x_547_, lean_object* v_as_548_, size_t v_sz_549_, size_t v_i_550_, lean_object* v_b_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___redArg(v___x_547_, v_as_548_, v_sz_549_, v_i_550_, v_b_551_, v___y_556_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0___boxed(lean_object* v___x_560_, lean_object* v_as_561_, lean_object* v_sz_562_, lean_object* v_i_563_, lean_object* v_b_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
size_t v_sz_boxed_572_; size_t v_i_boxed_573_; lean_object* v_res_574_; 
v_sz_boxed_572_ = lean_unbox_usize(v_sz_562_);
lean_dec(v_sz_562_);
v_i_boxed_573_ = lean_unbox_usize(v_i_563_);
lean_dec(v_i_563_);
v_res_574_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_Fetch___aux__Lasm__Fetch__Embed______elabRules__Lasm__Fetch__termEmbed__dir_x21____1_spec__0(v___x_560_, v_as_561_, v_sz_boxed_572_, v_i_boxed_573_, v_b_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_);
lean_dec(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec_ref(v_as_561_);
return v_res_574_;
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
