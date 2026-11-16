// Lean compiler output
// Module: Lasm.RPC.Server
// Imports: public import Init public meta import Init public import Lasm.RPC.Core public import Lasm.Fetch public import Std.Async.Basic
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
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__7(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Lasm_Fetch_Response_json(lean_object*, uint16_t);
lean_object* l_Lasm_Fetch_Response_withHeader(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_Lasm_Fetch_Response_text(lean_object*, uint16_t);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lasm_RPC_Endpoint_encodeResponse___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_RPC_Endpoint_decodeRequest___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_RPC_Error_toString(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_Fetch_Request_segments(lean_object*);
lean_object* l_Lasm_Fetch_Request_text(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_RPC_instInhabitedAnswer_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_RPC_instInhabitedAnswer_default___closed__0 = (const lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__0_value;
static const lean_string_object l_Lasm_RPC_instInhabitedAnswer_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_RPC_instInhabitedAnswer_default___closed__1 = (const lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__1_value;
static const lean_ctor_object l_Lasm_RPC_instInhabitedAnswer_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__0_value),((lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_RPC_instInhabitedAnswer_default___closed__2 = (const lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_instInhabitedAnswer_default = (const lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_instInhabitedAnswer = (const lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__2_value;
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__2_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__3 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__3_value;
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__4_value;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__5;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__6;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__7 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__7_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__4_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__8 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__1_value;
static lean_once_cell_t l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__2;
static lean_once_cell_t l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__3;
static const lean_ctor_object l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__5_value;
static const lean_string_object l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__6_value;
static const lean_ctor_object l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__6_value)}};
static const lean_object* l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__7_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0(lean_object*);
static const lean_string_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__0_value;
static const lean_string_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "status"};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__2_value)}};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__3_value;
static const lean_string_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__3_value),((lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__6 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lasm_RPC_instReprAnswer_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__7;
static const lean_string_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "headers"};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__8_value)}};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lasm_RPC_instReprAnswer_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__10;
static const lean_string_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__11_value)}};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__12 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lasm_RPC_instReprAnswer_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__13;
static const lean_string_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__14 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lasm_RPC_instReprAnswer_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__15;
static lean_once_cell_t l_Lasm_RPC_instReprAnswer_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__16;
static const lean_ctor_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__17 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lasm_RPC_instReprAnswer_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__14_value)}};
static const lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg___closed__18 = (const lean_object*)&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__18_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_instReprAnswer_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_instReprAnswer_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_RPC_instReprAnswer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_instReprAnswer_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_instReprAnswer___closed__0 = (const lean_object*)&l_Lasm_RPC_instReprAnswer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_instReprAnswer = (const lean_object*)&l_Lasm_RPC_instReprAnswer___closed__0_value;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lasm_RPC_instBEqAnswer_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lasm_RPC_instBEqAnswer_beq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_RPC_instBEqAnswer_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_instBEqAnswer_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lasm_RPC_instBEqAnswer_beq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lasm_RPC_instBEqAnswer_beq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_RPC_instBEqAnswer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_instBEqAnswer_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_instBEqAnswer___closed__0 = (const lean_object*)&l_Lasm_RPC_instBEqAnswer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_instBEqAnswer = (const lean_object*)&l_Lasm_RPC_instBEqAnswer___closed__0_value;
static const lean_string_object l_Lasm_RPC_Answer_ofRoute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "content-type"};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__0 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__0_value;
static const lean_string_object l_Lasm_RPC_Answer_ofRoute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "application/json"};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__1 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__1_value;
static const lean_ctor_object l_Lasm_RPC_Answer_ofRoute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__0_value),((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__1_value)}};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__2 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__2_value;
static const lean_string_object l_Lasm_RPC_Answer_ofRoute___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cache-control"};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__3 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__3_value;
static const lean_string_object l_Lasm_RPC_Answer_ofRoute___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "no-store"};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__4 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__4_value;
static const lean_ctor_object l_Lasm_RPC_Answer_ofRoute___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__3_value),((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__4_value)}};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__5 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__5_value;
static const lean_array_object l_Lasm_RPC_Answer_ofRoute___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__2_value),((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__5_value)}};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__6 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_ofRoute(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_ofRoute___boxed(lean_object*);
static const lean_array_object l_Lasm_RPC_Answer_unknown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__2_value)}};
static const lean_object* l_Lasm_RPC_Answer_unknown___closed__0 = (const lean_object*)&l_Lasm_RPC_Answer_unknown___closed__0_value;
static const lean_string_object l_Lasm_RPC_Answer_unknown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_RPC_Answer_unknown___closed__1 = (const lean_object*)&l_Lasm_RPC_Answer_unknown___closed__1_value;
static const lean_string_object l_Lasm_RPC_Answer_unknown___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "no endpoint "};
static const lean_object* l_Lasm_RPC_Answer_unknown___closed__2 = (const lean_object*)&l_Lasm_RPC_Answer_unknown___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_unknown(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_unknown___boxed(lean_object*);
static const lean_string_object l_Lasm_RPC_Answer_wrongMethod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "text/plain; charset=utf-8"};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__0 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__0_value;
static const lean_ctor_object l_Lasm_RPC_Answer_wrongMethod___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__0_value),((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__0_value)}};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__1 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__1_value;
static const lean_string_object l_Lasm_RPC_Answer_wrongMethod___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "allow"};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__2 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__2_value;
static const lean_string_object l_Lasm_RPC_Answer_wrongMethod___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__3 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__3_value;
static const lean_ctor_object l_Lasm_RPC_Answer_wrongMethod___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__2_value),((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__3_value)}};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__4 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__4_value;
static const lean_array_object l_Lasm_RPC_Answer_wrongMethod___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__1_value),((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__4_value)}};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__5 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__5_value;
static const lean_string_object l_Lasm_RPC_Answer_wrongMethod___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Use POST\n"};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__6 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__6_value;
static const lean_ctor_object l_Lasm_RPC_Answer_wrongMethod___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__5_value),((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__6_value),LEAN_SCALAR_PTR_LITERAL(149, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__7 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__7_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_Answer_wrongMethod = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__7_value;
static const lean_string_object l_Lasm_RPC_endpointName_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lasm_RPC_endpointName_x3f___closed__0 = (const lean_object*)&l_Lasm_RPC_endpointName_x3f___closed__0_value;
static const lean_string_object l_Lasm_RPC_endpointName_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lasm_RPC_endpointName_x3f___closed__1 = (const lean_object*)&l_Lasm_RPC_endpointName_x3f___closed__1_value;
static const lean_string_object l_Lasm_RPC_endpointName_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rpc"};
static const lean_object* l_Lasm_RPC_endpointName_x3f___closed__2 = (const lean_object*)&l_Lasm_RPC_endpointName_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_endpointName_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_endpointName_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_RPC_dispatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_dispatch___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__7_value)} };
static const lean_object* l_Lasm_RPC_dispatch___closed__0 = (const lean_object*)&l_Lasm_RPC_dispatch___closed__0_value;
static const lean_ctor_object l_Lasm_RPC_dispatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_RPC_dispatch___closed__0_value)}};
static const lean_object* l_Lasm_RPC_dispatch___closed__1 = (const lean_object*)&l_Lasm_RPC_dispatch___closed__1_value;
static const lean_closure_object l_Lasm_RPC_dispatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_dispatch___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_dispatch___closed__2 = (const lean_object*)&l_Lasm_RPC_dispatch___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_handler___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_handler___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_RPC_handler___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_handler___closed__0;
static lean_once_cell_t l_Lasm_RPC_handler___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_handler___closed__1;
static lean_once_cell_t l_Lasm_RPC_handler___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_handler___closed__2;
static lean_once_cell_t l_Lasm_RPC_handler___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_handler___closed__3;
static const lean_closure_object l_Lasm_RPC_handler___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_handler___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_handler___closed__4 = (const lean_object*)&l_Lasm_RPC_handler___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_handler(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_handler___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__0(lean_object* v_inst_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v_a_4_; lean_object* v___x_6_; uint8_t v_isShared_7_; uint8_t v_isSharedCheck_12_; 
lean_dec_ref(v_inst_1_);
v_a_4_ = lean_ctor_get(v_x_2_, 0);
v_isSharedCheck_12_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_12_ == 0)
{
v___x_6_ = v_x_2_;
v_isShared_7_ = v_isSharedCheck_12_;
goto v_resetjp_5_;
}
else
{
lean_inc(v_a_4_);
lean_dec(v_x_2_);
v___x_6_ = lean_box(0);
v_isShared_7_ = v_isSharedCheck_12_;
goto v_resetjp_5_;
}
v_resetjp_5_:
{
lean_object* v___x_9_; 
if (v_isShared_7_ == 0)
{
v___x_9_ = v___x_6_;
goto v_reusejp_8_;
}
else
{
lean_object* v_reuseFailAlloc_11_; 
v_reuseFailAlloc_11_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_11_, 0, v_a_4_);
v___x_9_ = v_reuseFailAlloc_11_;
goto v_reusejp_8_;
}
v_reusejp_8_:
{
lean_object* v___x_10_; 
v___x_10_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
return v___x_10_;
}
}
}
else
{
lean_object* v_a_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_28_; 
v_a_13_ = lean_ctor_get(v_x_2_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_28_ == 0)
{
v___x_15_ = v_x_2_;
v_isShared_16_ = v_isSharedCheck_28_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_a_13_);
lean_dec(v_x_2_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_28_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
uint16_t v___y_18_; 
if (lean_obj_tag(v_a_13_) == 1)
{
uint16_t v___x_26_; 
v___x_26_ = 200;
v___y_18_ = v___x_26_;
goto v___jp_17_;
}
else
{
uint16_t v___x_27_; 
v___x_27_ = 500;
v___y_18_ = v___x_27_;
goto v___jp_17_;
}
v___jp_17_:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_23_; 
v___x_19_ = l_Lasm_RPC_Endpoint_encodeResponse___redArg(v_inst_1_, v_a_13_);
v___x_20_ = lean_box(v___y_18_);
v___x_21_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
lean_ctor_set(v___x_21_, 1, v___x_19_);
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 0, v___x_21_);
v___x_23_ = v___x_15_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v___x_21_);
v___x_23_ = v_reuseFailAlloc_25_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
lean_object* v___x_24_; 
v___x_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__0___boxed(lean_object* v_inst_29_, lean_object* v_x_30_, lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lasm_RPC_Endpoint_serve___redArg___lam__0(v_inst_29_, v_x_30_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__1(lean_object* v_inst_33_, lean_object* v_e_34_, lean_object* v_inst_35_, lean_object* v_handler_36_, lean_object* v___f_37_, lean_object* v_body_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lasm_RPC_Endpoint_decodeRequest___redArg(v_inst_33_, v_e_34_, v_body_38_);
if (lean_obj_tag(v___x_40_) == 0)
{
lean_object* v_a_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_55_; 
lean_dec_ref(v___f_37_);
lean_dec_ref(v_handler_36_);
v_a_41_ = lean_ctor_get(v___x_40_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_55_ == 0)
{
v___x_43_ = v___x_40_;
v_isShared_44_ = v_isSharedCheck_55_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_a_41_);
lean_dec(v___x_40_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_55_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
uint16_t v___x_45_; lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_45_ = 400;
v___x_46_ = l_Lasm_RPC_Error_toString(v_a_41_);
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 0, v___x_46_);
v___x_48_ = v___x_43_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v___x_46_);
v___x_48_ = v_reuseFailAlloc_54_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_49_ = l_Lasm_RPC_Endpoint_encodeResponse___redArg(v_inst_35_, v___x_48_);
v___x_50_ = lean_box(v___x_45_);
v___x_51_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set(v___x_51_, 1, v___x_49_);
v___x_52_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
v___x_53_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
}
else
{
lean_object* v_a_56_; lean_object* v___x_57_; uint8_t v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec_ref(v_inst_35_);
v_a_56_ = lean_ctor_get(v___x_40_, 0);
lean_inc(v_a_56_);
lean_dec_ref_known(v___x_40_, 1);
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = 0;
v___x_59_ = lean_apply_3(v_handler_36_, v_a_56_, lean_box(0), lean_box(0));
v___x_60_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_57_, v___x_58_, v___x_59_, v___f_37_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__1___boxed(lean_object* v_inst_61_, lean_object* v_e_62_, lean_object* v_inst_63_, lean_object* v_handler_64_, lean_object* v___f_65_, lean_object* v_body_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lasm_RPC_Endpoint_serve___redArg___lam__1(v_inst_61_, v_e_62_, v_inst_63_, v_handler_64_, v___f_65_, v_body_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg(lean_object* v_inst_69_, lean_object* v_inst_70_, lean_object* v_e_71_, lean_object* v_handler_72_){
_start:
{
lean_object* v_name_73_; lean_object* v___f_74_; lean_object* v___f_75_; lean_object* v___x_76_; 
v_name_73_ = lean_ctor_get(v_e_71_, 0);
lean_inc_ref(v_name_73_);
lean_inc_ref(v_inst_70_);
v___f_74_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_serve___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_74_, 0, v_inst_70_);
v___f_75_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_serve___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_75_, 0, v_inst_69_);
lean_closure_set(v___f_75_, 1, v_e_71_);
lean_closure_set(v___f_75_, 2, v_inst_70_);
lean_closure_set(v___f_75_, 3, v_handler_72_);
lean_closure_set(v___f_75_, 4, v___f_74_);
v___x_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_76_, 0, v_name_73_);
lean_ctor_set(v___x_76_, 1, v___f_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve(lean_object* v_Req_77_, lean_object* v_Res_78_, lean_object* v_inst_79_, lean_object* v_inst_80_, lean_object* v_e_81_, lean_object* v_handler_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lasm_RPC_Endpoint_serve___redArg(v_inst_79_, v_inst_80_, v_e_81_, v_handler_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0(lean_object* v_handler_84_, lean_object* v_r_85_, lean_object* v_x_86_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_apply_2(v_handler_84_, v_r_85_, lean_box(0));
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0___boxed(lean_object* v_handler_89_, lean_object* v_r_90_, lean_object* v_x_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0(v_handler_89_, v_r_90_, v_x_91_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg(lean_object* v_inst_94_, lean_object* v_inst_95_, lean_object* v_e_96_, lean_object* v_handler_97_){
_start:
{
lean_object* v___f_98_; lean_object* v___x_99_; 
v___f_98_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_98_, 0, v_handler_97_);
v___x_99_ = l_Lasm_RPC_Endpoint_serve___redArg(v_inst_94_, v_inst_95_, v_e_96_, v___f_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27(lean_object* v_Req_100_, lean_object* v_Res_101_, lean_object* v_inst_102_, lean_object* v_inst_103_, lean_object* v_e_104_, lean_object* v_handler_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lasm_RPC_Endpoint_serve_x27___redArg(v_inst_102_, v_inst_103_, v_e_104_, v_handler_105_);
return v___x_106_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__0));
v___x_125_ = lean_string_length(v___x_124_);
return v___x_125_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__5, &l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__5_once, _init_l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__5);
v___x_127_ = lean_nat_to_int(v___x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg(lean_object* v_x_132_){
_start:
{
lean_object* v_fst_133_; lean_object* v_snd_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_158_; 
v_fst_133_ = lean_ctor_get(v_x_132_, 0);
v_snd_134_ = lean_ctor_get(v_x_132_, 1);
v_isSharedCheck_158_ = !lean_is_exclusive(v_x_132_);
if (v_isSharedCheck_158_ == 0)
{
v___x_136_ = v_x_132_;
v_isShared_137_ = v_isSharedCheck_158_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_snd_134_);
lean_inc(v_fst_133_);
lean_dec(v_x_132_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_158_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_138_ = l_String_quote(v_fst_133_);
v___x_139_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
v___x_140_ = lean_box(0);
if (v_isShared_137_ == 0)
{
lean_ctor_set_tag(v___x_136_, 1);
lean_ctor_set(v___x_136_, 1, v___x_140_);
lean_ctor_set(v___x_136_, 0, v___x_139_);
v___x_142_ = v___x_136_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v___x_139_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v___x_140_);
v___x_142_ = v_reuseFailAlloc_157_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; lean_object* v___x_156_; 
v___x_143_ = l_String_quote(v_snd_134_);
v___x_144_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
v___x_145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
lean_ctor_set(v___x_145_, 1, v___x_142_);
v___x_146_ = l_List_reverse___redArg(v___x_145_);
v___x_147_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__3));
v___x_148_ = l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__7(v___x_146_, v___x_147_);
v___x_149_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__6, &l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__6_once, _init_l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__6);
v___x_150_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__7));
v___x_151_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v___x_148_);
v___x_152_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__8));
v___x_153_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_151_);
lean_ctor_set(v___x_153_, 1, v___x_152_);
v___x_154_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_149_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
v___x_155_ = 0;
v___x_156_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_156_, 0, v___x_154_);
lean_ctor_set_uint8(v___x_156_, sizeof(void*)*1, v___x_155_);
return v___x_156_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__1_spec__2_spec__3(lean_object* v_x_159_, lean_object* v_x_160_, lean_object* v_x_161_){
_start:
{
if (lean_obj_tag(v_x_161_) == 0)
{
lean_dec(v_x_159_);
return v_x_160_;
}
else
{
lean_object* v_head_162_; lean_object* v_tail_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_173_; 
v_head_162_ = lean_ctor_get(v_x_161_, 0);
v_tail_163_ = lean_ctor_get(v_x_161_, 1);
v_isSharedCheck_173_ = !lean_is_exclusive(v_x_161_);
if (v_isSharedCheck_173_ == 0)
{
v___x_165_ = v_x_161_;
v_isShared_166_ = v_isSharedCheck_173_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_tail_163_);
lean_inc(v_head_162_);
lean_dec(v_x_161_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_173_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_168_; 
lean_inc(v_x_159_);
if (v_isShared_166_ == 0)
{
lean_ctor_set_tag(v___x_165_, 5);
lean_ctor_set(v___x_165_, 1, v_x_159_);
lean_ctor_set(v___x_165_, 0, v_x_160_);
v___x_168_ = v___x_165_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_x_160_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v_x_159_);
v___x_168_ = v_reuseFailAlloc_172_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg(v_head_162_);
v___x_170_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_170_, 0, v___x_168_);
lean_ctor_set(v___x_170_, 1, v___x_169_);
v_x_160_ = v___x_170_;
v_x_161_ = v_tail_163_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__1_spec__2(lean_object* v_x_174_, lean_object* v_x_175_, lean_object* v_x_176_){
_start:
{
if (lean_obj_tag(v_x_176_) == 0)
{
lean_dec(v_x_174_);
return v_x_175_;
}
else
{
lean_object* v_head_177_; lean_object* v_tail_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_188_; 
v_head_177_ = lean_ctor_get(v_x_176_, 0);
v_tail_178_ = lean_ctor_get(v_x_176_, 1);
v_isSharedCheck_188_ = !lean_is_exclusive(v_x_176_);
if (v_isSharedCheck_188_ == 0)
{
v___x_180_ = v_x_176_;
v_isShared_181_ = v_isSharedCheck_188_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_tail_178_);
lean_inc(v_head_177_);
lean_dec(v_x_176_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_188_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
lean_inc(v_x_174_);
if (v_isShared_181_ == 0)
{
lean_ctor_set_tag(v___x_180_, 5);
lean_ctor_set(v___x_180_, 1, v_x_174_);
lean_ctor_set(v___x_180_, 0, v_x_175_);
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_x_175_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v_x_174_);
v___x_183_ = v_reuseFailAlloc_187_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_184_ = l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg(v_head_177_);
v___x_185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_183_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
v___x_186_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__1_spec__2_spec__3(v_x_174_, v___x_185_, v_tail_178_);
return v___x_186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__1(lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
if (lean_obj_tag(v_x_189_) == 0)
{
lean_object* v___x_191_; 
lean_dec(v_x_190_);
v___x_191_ = lean_box(0);
return v___x_191_;
}
else
{
lean_object* v_tail_192_; 
v_tail_192_ = lean_ctor_get(v_x_189_, 1);
if (lean_obj_tag(v_tail_192_) == 0)
{
lean_object* v_head_193_; lean_object* v___x_194_; 
lean_dec(v_x_190_);
v_head_193_ = lean_ctor_get(v_x_189_, 0);
lean_inc(v_head_193_);
lean_dec_ref_known(v_x_189_, 2);
v___x_194_ = l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg(v_head_193_);
return v___x_194_;
}
else
{
lean_object* v_head_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
lean_inc(v_tail_192_);
v_head_195_ = lean_ctor_get(v_x_189_, 0);
lean_inc(v_head_195_);
lean_dec_ref_known(v_x_189_, 2);
v___x_196_ = l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg(v_head_195_);
v___x_197_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__1_spec__2(v_x_190_, v___x_196_, v_tail_192_);
return v___x_197_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__2(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = ((lean_object*)(l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__0));
v___x_201_ = lean_string_length(v___x_200_);
return v___x_201_;
}
}
static lean_object* _init_l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_obj_once(&l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__2, &l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__2_once, _init_l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__2);
v___x_203_ = lean_nat_to_int(v___x_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0(lean_object* v_xs_211_){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; uint8_t v___x_214_; 
v___x_212_ = lean_array_get_size(v_xs_211_);
v___x_213_ = lean_unsigned_to_nat(0u);
v___x_214_ = lean_nat_dec_eq(v___x_212_, v___x_213_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_215_ = lean_array_to_list(v_xs_211_);
v___x_216_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__3));
v___x_217_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__1(v___x_215_, v___x_216_);
v___x_218_ = lean_obj_once(&l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__3, &l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__3);
v___x_219_ = ((lean_object*)(l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__4));
v___x_220_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set(v___x_220_, 1, v___x_217_);
v___x_221_ = ((lean_object*)(l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__5));
v___x_222_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_220_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_218_);
lean_ctor_set(v___x_223_, 1, v___x_222_);
v___x_224_ = l_Std_Format_fill(v___x_223_);
return v___x_224_;
}
else
{
lean_object* v___x_225_; 
lean_dec_ref(v_xs_211_);
v___x_225_ = ((lean_object*)(l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0___closed__7));
return v___x_225_;
}
}
}
static lean_object* _init_l_Lasm_RPC_instReprAnswer_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = lean_unsigned_to_nat(10u);
v___x_240_ = lean_nat_to_int(v___x_239_);
return v___x_240_;
}
}
static lean_object* _init_l_Lasm_RPC_instReprAnswer_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = lean_unsigned_to_nat(11u);
v___x_245_ = lean_nat_to_int(v___x_244_);
return v___x_245_;
}
}
static lean_object* _init_l_Lasm_RPC_instReprAnswer_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_249_ = lean_unsigned_to_nat(8u);
v___x_250_ = lean_nat_to_int(v___x_249_);
return v___x_250_;
}
}
static lean_object* _init_l_Lasm_RPC_instReprAnswer_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = ((lean_object*)(l_Lasm_RPC_instReprAnswer_repr___redArg___closed__0));
v___x_253_ = lean_string_length(v___x_252_);
return v___x_253_;
}
}
static lean_object* _init_l_Lasm_RPC_instReprAnswer_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = lean_obj_once(&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__15, &l_Lasm_RPC_instReprAnswer_repr___redArg___closed__15_once, _init_l_Lasm_RPC_instReprAnswer_repr___redArg___closed__15);
v___x_255_ = lean_nat_to_int(v___x_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_instReprAnswer_repr___redArg(lean_object* v_x_260_){
_start:
{
uint16_t v_status_261_; lean_object* v_headers_262_; lean_object* v_body_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v_status_261_ = lean_ctor_get_uint16(v_x_260_, sizeof(void*)*2);
v_headers_262_ = lean_ctor_get(v_x_260_, 0);
lean_inc_ref(v_headers_262_);
v_body_263_ = lean_ctor_get(v_x_260_, 1);
lean_inc_ref(v_body_263_);
lean_dec_ref(v_x_260_);
v___x_264_ = ((lean_object*)(l_Lasm_RPC_instReprAnswer_repr___redArg___closed__5));
v___x_265_ = ((lean_object*)(l_Lasm_RPC_instReprAnswer_repr___redArg___closed__6));
v___x_266_ = lean_obj_once(&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__7, &l_Lasm_RPC_instReprAnswer_repr___redArg___closed__7_once, _init_l_Lasm_RPC_instReprAnswer_repr___redArg___closed__7);
v___x_267_ = lean_uint16_to_nat(v_status_261_);
v___x_268_ = l_Nat_reprFast(v___x_267_);
v___x_269_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
v___x_270_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_266_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___x_271_ = 0;
v___x_272_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_272_, 0, v___x_270_);
lean_ctor_set_uint8(v___x_272_, sizeof(void*)*1, v___x_271_);
v___x_273_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_265_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
v___x_274_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg___closed__2));
v___x_275_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_273_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = lean_box(1);
v___x_277_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_275_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
v___x_278_ = ((lean_object*)(l_Lasm_RPC_instReprAnswer_repr___redArg___closed__9));
v___x_279_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_277_);
lean_ctor_set(v___x_279_, 1, v___x_278_);
v___x_280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
lean_ctor_set(v___x_280_, 1, v___x_264_);
v___x_281_ = lean_obj_once(&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__10, &l_Lasm_RPC_instReprAnswer_repr___redArg___closed__10_once, _init_l_Lasm_RPC_instReprAnswer_repr___redArg___closed__10);
v___x_282_ = l_Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0(v_headers_262_);
v___x_283_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_281_);
lean_ctor_set(v___x_283_, 1, v___x_282_);
v___x_284_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set_uint8(v___x_284_, sizeof(void*)*1, v___x_271_);
v___x_285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_280_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
lean_ctor_set(v___x_286_, 1, v___x_274_);
v___x_287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v___x_276_);
v___x_288_ = ((lean_object*)(l_Lasm_RPC_instReprAnswer_repr___redArg___closed__12));
v___x_289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_287_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___x_264_);
v___x_291_ = lean_obj_once(&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__13, &l_Lasm_RPC_instReprAnswer_repr___redArg___closed__13_once, _init_l_Lasm_RPC_instReprAnswer_repr___redArg___closed__13);
v___x_292_ = l_String_quote(v_body_263_);
v___x_293_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
v___x_294_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_291_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set_uint8(v___x_295_, sizeof(void*)*1, v___x_271_);
v___x_296_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_290_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_obj_once(&l_Lasm_RPC_instReprAnswer_repr___redArg___closed__16, &l_Lasm_RPC_instReprAnswer_repr___redArg___closed__16_once, _init_l_Lasm_RPC_instReprAnswer_repr___redArg___closed__16);
v___x_298_ = ((lean_object*)(l_Lasm_RPC_instReprAnswer_repr___redArg___closed__17));
v___x_299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
lean_ctor_set(v___x_299_, 1, v___x_296_);
v___x_300_ = ((lean_object*)(l_Lasm_RPC_instReprAnswer_repr___redArg___closed__18));
v___x_301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_301_, 0, v___x_299_);
lean_ctor_set(v___x_301_, 1, v___x_300_);
v___x_302_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_297_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_303_, 0, v___x_302_);
lean_ctor_set_uint8(v___x_303_, sizeof(void*)*1, v___x_271_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_instReprAnswer_repr(lean_object* v_x_304_, lean_object* v_prec_305_){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = l_Lasm_RPC_instReprAnswer_repr___redArg(v_x_304_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_instReprAnswer_repr___boxed(lean_object* v_x_307_, lean_object* v_prec_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lasm_RPC_instReprAnswer_repr(v_x_307_, v_prec_308_);
lean_dec(v_prec_308_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0(lean_object* v_x_310_, lean_object* v_x_311_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___redArg(v_x_310_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0___boxed(lean_object* v_x_313_, lean_object* v_x_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_Prod_repr___at___00Array_repr___at___00Lasm_RPC_instReprAnswer_repr_spec__0_spec__0(v_x_313_, v_x_314_);
lean_dec(v_x_314_);
return v_res_315_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lasm_RPC_instBEqAnswer_beq_spec__0___redArg(lean_object* v_xs_318_, lean_object* v_ys_319_, lean_object* v_x_320_){
_start:
{
lean_object* v_zero_321_; uint8_t v_isZero_322_; 
v_zero_321_ = lean_unsigned_to_nat(0u);
v_isZero_322_ = lean_nat_dec_eq(v_x_320_, v_zero_321_);
if (v_isZero_322_ == 1)
{
lean_dec(v_x_320_);
return v_isZero_322_;
}
else
{
lean_object* v_one_323_; lean_object* v_n_324_; lean_object* v___x_325_; lean_object* v_fst_326_; lean_object* v_snd_327_; lean_object* v___x_328_; lean_object* v_fst_329_; lean_object* v_snd_330_; uint8_t v___x_331_; 
v_one_323_ = lean_unsigned_to_nat(1u);
v_n_324_ = lean_nat_sub(v_x_320_, v_one_323_);
lean_dec(v_x_320_);
v___x_325_ = lean_array_fget_borrowed(v_xs_318_, v_n_324_);
v_fst_326_ = lean_ctor_get(v___x_325_, 0);
v_snd_327_ = lean_ctor_get(v___x_325_, 1);
v___x_328_ = lean_array_fget_borrowed(v_ys_319_, v_n_324_);
v_fst_329_ = lean_ctor_get(v___x_328_, 0);
v_snd_330_ = lean_ctor_get(v___x_328_, 1);
v___x_331_ = lean_string_dec_eq(v_fst_326_, v_fst_329_);
if (v___x_331_ == 0)
{
lean_dec(v_n_324_);
return v___x_331_;
}
else
{
uint8_t v___x_332_; 
v___x_332_ = lean_string_dec_eq(v_snd_327_, v_snd_330_);
if (v___x_332_ == 0)
{
lean_dec(v_n_324_);
return v___x_332_;
}
else
{
v_x_320_ = v_n_324_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lasm_RPC_instBEqAnswer_beq_spec__0___redArg___boxed(lean_object* v_xs_334_, lean_object* v_ys_335_, lean_object* v_x_336_){
_start:
{
uint8_t v_res_337_; lean_object* v_r_338_; 
v_res_337_ = l_Array_isEqvAux___at___00Lasm_RPC_instBEqAnswer_beq_spec__0___redArg(v_xs_334_, v_ys_335_, v_x_336_);
lean_dec_ref(v_ys_335_);
lean_dec_ref(v_xs_334_);
v_r_338_ = lean_box(v_res_337_);
return v_r_338_;
}
}
LEAN_EXPORT uint8_t l_Lasm_RPC_instBEqAnswer_beq(lean_object* v_x_339_, lean_object* v_x_340_){
_start:
{
uint16_t v_status_341_; lean_object* v_headers_342_; lean_object* v_body_343_; uint16_t v_status_344_; lean_object* v_headers_345_; lean_object* v_body_346_; uint8_t v___x_347_; 
v_status_341_ = lean_ctor_get_uint16(v_x_339_, sizeof(void*)*2);
v_headers_342_ = lean_ctor_get(v_x_339_, 0);
v_body_343_ = lean_ctor_get(v_x_339_, 1);
v_status_344_ = lean_ctor_get_uint16(v_x_340_, sizeof(void*)*2);
v_headers_345_ = lean_ctor_get(v_x_340_, 0);
v_body_346_ = lean_ctor_get(v_x_340_, 1);
v___x_347_ = lean_uint16_dec_eq(v_status_341_, v_status_344_);
if (v___x_347_ == 0)
{
return v___x_347_;
}
else
{
lean_object* v___x_348_; lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_348_ = lean_array_get_size(v_headers_342_);
v___x_349_ = lean_array_get_size(v_headers_345_);
v___x_350_ = lean_nat_dec_eq(v___x_348_, v___x_349_);
if (v___x_350_ == 0)
{
return v___x_350_;
}
else
{
uint8_t v___x_351_; 
v___x_351_ = l_Array_isEqvAux___at___00Lasm_RPC_instBEqAnswer_beq_spec__0___redArg(v_headers_342_, v_headers_345_, v___x_348_);
if (v___x_351_ == 0)
{
return v___x_351_;
}
else
{
uint8_t v___x_352_; 
v___x_352_ = lean_string_dec_eq(v_body_343_, v_body_346_);
return v___x_352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_instBEqAnswer_beq___boxed(lean_object* v_x_353_, lean_object* v_x_354_){
_start:
{
uint8_t v_res_355_; lean_object* v_r_356_; 
v_res_355_ = l_Lasm_RPC_instBEqAnswer_beq(v_x_353_, v_x_354_);
lean_dec_ref(v_x_354_);
lean_dec_ref(v_x_353_);
v_r_356_ = lean_box(v_res_355_);
return v_r_356_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lasm_RPC_instBEqAnswer_beq_spec__0(lean_object* v_xs_357_, lean_object* v_ys_358_, lean_object* v_hsz_359_, lean_object* v_x_360_, lean_object* v_x_361_){
_start:
{
uint8_t v___x_362_; 
v___x_362_ = l_Array_isEqvAux___at___00Lasm_RPC_instBEqAnswer_beq_spec__0___redArg(v_xs_357_, v_ys_358_, v_x_360_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lasm_RPC_instBEqAnswer_beq_spec__0___boxed(lean_object* v_xs_363_, lean_object* v_ys_364_, lean_object* v_hsz_365_, lean_object* v_x_366_, lean_object* v_x_367_){
_start:
{
uint8_t v_res_368_; lean_object* v_r_369_; 
v_res_368_ = l_Array_isEqvAux___at___00Lasm_RPC_instBEqAnswer_beq_spec__0(v_xs_363_, v_ys_364_, v_hsz_365_, v_x_366_, v_x_367_);
lean_dec_ref(v_ys_364_);
lean_dec_ref(v_xs_363_);
v_r_369_ = lean_box(v_res_368_);
return v_r_369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_ofRoute(lean_object* v_r_388_){
_start:
{
lean_object* v_fst_389_; lean_object* v_snd_390_; lean_object* v___x_391_; lean_object* v___x_392_; uint16_t v___x_393_; 
v_fst_389_ = lean_ctor_get(v_r_388_, 0);
v_snd_390_ = lean_ctor_get(v_r_388_, 1);
v___x_391_ = ((lean_object*)(l_Lasm_RPC_Answer_ofRoute___closed__6));
lean_inc(v_snd_390_);
v___x_392_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v_snd_390_);
v___x_393_ = lean_unbox(v_fst_389_);
lean_ctor_set_uint16(v___x_392_, sizeof(void*)*2, v___x_393_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_ofRoute___boxed(lean_object* v_r_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lasm_RPC_Answer_ofRoute(v_r_394_);
lean_dec_ref(v_r_394_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_unknown(lean_object* v_name_402_){
_start:
{
uint16_t v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_403_ = 404;
v___x_404_ = ((lean_object*)(l_Lasm_RPC_Answer_unknown___closed__0));
v___x_405_ = ((lean_object*)(l_Lasm_RPC_Answer_unknown___closed__1));
v___x_406_ = ((lean_object*)(l_Lasm_RPC_Answer_unknown___closed__2));
v___x_407_ = lean_string_append(v___x_406_, v_name_402_);
v___x_408_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_405_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
v___x_410_ = lean_box(0);
v___x_411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_409_);
lean_ctor_set(v___x_411_, 1, v___x_410_);
v___x_412_ = l_Lean_Json_mkObj(v___x_411_);
lean_dec_ref_known(v___x_411_, 2);
v___x_413_ = l_Lean_Json_compress(v___x_412_);
v___x_414_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_414_, 0, v___x_404_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
lean_ctor_set_uint16(v___x_414_, sizeof(void*)*2, v___x_403_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_unknown___boxed(lean_object* v_name_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lasm_RPC_Answer_unknown(v_name_415_);
lean_dec_ref(v_name_415_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_endpointName_x3f(lean_object* v_path_441_){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___y_448_; 
v___x_442_ = ((lean_object*)(l_Lasm_RPC_endpointName_x3f___closed__0));
v___x_443_ = lean_unsigned_to_nat(0u);
v___x_444_ = lean_box(0);
v___x_445_ = l_String_splitOnAux(v_path_441_, v___x_442_, v___x_443_, v___x_443_, v___x_443_, v___x_444_);
v___x_446_ = ((lean_object*)(l_Lasm_RPC_instInhabitedAnswer_default___closed__1));
if (lean_obj_tag(v___x_445_) == 0)
{
v___y_448_ = v___x_446_;
goto v___jp_447_;
}
else
{
lean_object* v_head_470_; 
v_head_470_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_head_470_);
lean_dec_ref_known(v___x_445_, 2);
v___y_448_ = v_head_470_;
goto v___jp_447_;
}
v___jp_447_:
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = ((lean_object*)(l_Lasm_RPC_endpointName_x3f___closed__1));
v___x_450_ = l_String_splitOnAux(v___y_448_, v___x_449_, v___x_443_, v___x_443_, v___x_443_, v___x_444_);
lean_dec_ref(v___y_448_);
if (lean_obj_tag(v___x_450_) == 1)
{
lean_object* v_head_451_; lean_object* v_tail_452_; uint8_t v___x_453_; 
v_head_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_head_451_);
v_tail_452_ = lean_ctor_get(v___x_450_, 1);
lean_inc(v_tail_452_);
lean_dec_ref_known(v___x_450_, 2);
v___x_453_ = lean_string_dec_eq(v_head_451_, v___x_446_);
lean_dec(v_head_451_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
lean_dec(v_tail_452_);
v___x_454_ = lean_box(0);
return v___x_454_;
}
else
{
if (lean_obj_tag(v_tail_452_) == 1)
{
lean_object* v_head_455_; lean_object* v_tail_456_; lean_object* v___x_457_; uint8_t v___x_458_; 
v_head_455_ = lean_ctor_get(v_tail_452_, 0);
lean_inc(v_head_455_);
v_tail_456_ = lean_ctor_get(v_tail_452_, 1);
lean_inc(v_tail_456_);
lean_dec_ref_known(v_tail_452_, 2);
v___x_457_ = ((lean_object*)(l_Lasm_RPC_endpointName_x3f___closed__2));
v___x_458_ = lean_string_dec_eq(v_head_455_, v___x_457_);
lean_dec(v_head_455_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; 
lean_dec(v_tail_456_);
v___x_459_ = lean_box(0);
return v___x_459_;
}
else
{
if (lean_obj_tag(v_tail_456_) == 1)
{
lean_object* v_tail_460_; 
v_tail_460_ = lean_ctor_get(v_tail_456_, 1);
if (lean_obj_tag(v_tail_460_) == 0)
{
lean_object* v_head_461_; lean_object* v___x_462_; uint8_t v___x_463_; 
v_head_461_ = lean_ctor_get(v_tail_456_, 0);
lean_inc(v_head_461_);
lean_dec_ref_known(v_tail_456_, 2);
v___x_462_ = lean_string_utf8_byte_size(v_head_461_);
v___x_463_ = lean_nat_dec_eq(v___x_462_, v___x_443_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; 
v___x_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_464_, 0, v_head_461_);
return v___x_464_;
}
else
{
lean_object* v___x_465_; 
lean_dec(v_head_461_);
v___x_465_ = lean_box(0);
return v___x_465_;
}
}
else
{
lean_object* v___x_466_; 
lean_dec_ref_known(v_tail_456_, 2);
v___x_466_ = lean_box(0);
return v___x_466_;
}
}
else
{
lean_object* v___x_467_; 
lean_dec(v_tail_456_);
v___x_467_ = lean_box(0);
return v___x_467_;
}
}
}
else
{
lean_object* v___x_468_; 
lean_dec(v_tail_452_);
v___x_468_ = lean_box(0);
return v___x_468_;
}
}
}
else
{
lean_object* v___x_469_; 
lean_dec(v___x_450_);
v___x_469_ = lean_box(0);
return v___x_469_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_endpointName_x3f___boxed(lean_object* v_path_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Lasm_RPC_endpointName_x3f(v_path_471_);
lean_dec_ref(v_path_471_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__0(lean_object* v___x_473_){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_475_, 0, v___x_473_);
v___x_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__0___boxed(lean_object* v___x_477_, lean_object* v___y_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Lasm_RPC_dispatch___lam__0(v___x_477_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__2(lean_object* v___y_480_){
_start:
{
if (lean_obj_tag(v___y_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
v_a_481_ = lean_ctor_get(v___y_480_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___y_480_);
if (v_isSharedCheck_488_ == 0)
{
v___x_483_ = v___y_480_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___y_480_);
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
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_497_; 
v_a_489_ = lean_ctor_get(v___y_480_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v___y_480_);
if (v_isSharedCheck_497_ == 0)
{
v___x_491_ = v___y_480_;
v_isShared_492_ = v_isSharedCheck_497_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___y_480_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_497_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_493_; lean_object* v___x_495_; 
v___x_493_ = l_Lasm_RPC_Answer_ofRoute(v_a_489_);
lean_dec(v_a_489_);
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 0, v___x_493_);
v___x_495_ = v___x_491_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_493_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__1(lean_object* v_run_498_, lean_object* v_body_499_, lean_object* v___f_500_){
_start:
{
lean_object* v___x_502_; uint8_t v___x_503_; lean_object* v___x_504_; lean_object* v___y_506_; 
v___x_502_ = lean_unsigned_to_nat(0u);
v___x_503_ = 0;
v___x_504_ = lean_apply_2(v_run_498_, v_body_499_, lean_box(0));
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v_a_508_; 
lean_dec_ref(v___f_500_);
v_a_508_ = lean_ctor_get(v___x_504_, 0);
lean_inc(v_a_508_);
lean_dec_ref_known(v___x_504_, 1);
if (lean_obj_tag(v_a_508_) == 0)
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_516_; 
v_a_509_ = lean_ctor_get(v_a_508_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v_a_508_);
if (v_isSharedCheck_516_ == 0)
{
v___x_511_ = v_a_508_;
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v_a_508_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
if (v_isShared_512_ == 0)
{
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_509_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
v___y_506_ = v___x_514_;
goto v___jp_505_;
}
}
}
else
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_525_; 
v_a_517_ = lean_ctor_get(v_a_508_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v_a_508_);
if (v_isSharedCheck_525_ == 0)
{
v___x_519_ = v_a_508_;
v_isShared_520_ = v_isSharedCheck_525_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v_a_508_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_525_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_521_ = l_Lasm_RPC_Answer_ofRoute(v_a_517_);
lean_dec(v_a_517_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_521_);
v___x_523_ = v___x_519_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
v___y_506_ = v___x_523_;
goto v___jp_505_;
}
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_534_; 
v_a_526_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_534_ == 0)
{
v___x_528_ = v___x_504_;
v_isShared_529_ = v_isSharedCheck_534_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_504_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_534_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_530_ = lean_task_map(v___f_500_, v_a_526_, v___x_502_, v___x_503_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_530_);
v___x_532_ = v___x_528_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
v___jp_505_:
{
lean_object* v___x_507_; 
v___x_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_507_, 0, v___y_506_);
return v___x_507_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__1___boxed(lean_object* v_run_535_, lean_object* v_body_536_, lean_object* v___f_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lasm_RPC_dispatch___lam__1(v_run_535_, v_body_536_, v___f_537_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0(lean_object* v_val_540_, lean_object* v_x_541_){
_start:
{
if (lean_obj_tag(v_x_541_) == 0)
{
lean_object* v___x_542_; 
v___x_542_ = lean_box(0);
return v___x_542_;
}
else
{
lean_object* v_head_543_; lean_object* v_tail_544_; lean_object* v_name_545_; uint8_t v___x_546_; 
v_head_543_ = lean_ctor_get(v_x_541_, 0);
v_tail_544_ = lean_ctor_get(v_x_541_, 1);
v_name_545_ = lean_ctor_get(v_head_543_, 0);
v___x_546_ = lean_string_dec_eq(v_name_545_, v_val_540_);
if (v___x_546_ == 0)
{
v_x_541_ = v_tail_544_;
goto _start;
}
else
{
lean_object* v___x_548_; 
lean_inc(v_head_543_);
v___x_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_548_, 0, v_head_543_);
return v___x_548_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0___boxed(lean_object* v_val_549_, lean_object* v_x_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0(v_val_549_, v_x_550_);
lean_dec(v_x_550_);
lean_dec_ref(v_val_549_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch(lean_object* v_routes_557_, lean_object* v_method_558_, lean_object* v_path_559_, lean_object* v_body_560_){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = l_Lasm_RPC_endpointName_x3f(v_path_559_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v___x_562_; 
lean_dec_ref(v_body_560_);
v___x_562_ = lean_box(0);
return v___x_562_;
}
else
{
lean_object* v_val_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_587_; 
v_val_563_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_587_ == 0)
{
v___x_565_ = v___x_561_;
v_isShared_566_ = v_isSharedCheck_587_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_val_563_);
lean_dec(v___x_561_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_587_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_567_ = ((lean_object*)(l_Lasm_RPC_Answer_wrongMethod___closed__3));
v___x_568_ = lean_string_dec_eq(v_method_558_, v___x_567_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; 
lean_del_object(v___x_565_);
lean_dec(v_val_563_);
lean_dec_ref(v_body_560_);
v___x_569_ = ((lean_object*)(l_Lasm_RPC_dispatch___closed__1));
return v___x_569_;
}
else
{
lean_object* v___x_570_; 
v___x_570_ = l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0(v_val_563_, v_routes_557_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v___x_571_; lean_object* v___f_572_; lean_object* v___x_574_; 
lean_dec_ref(v_body_560_);
v___x_571_ = l_Lasm_RPC_Answer_unknown(v_val_563_);
lean_dec(v_val_563_);
v___f_572_ = lean_alloc_closure((void*)(l_Lasm_RPC_dispatch___lam__0___boxed), 2, 1);
lean_closure_set(v___f_572_, 0, v___x_571_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 0, v___f_572_);
v___x_574_ = v___x_565_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___f_572_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
else
{
lean_object* v_val_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_586_; 
lean_del_object(v___x_565_);
lean_dec(v_val_563_);
v_val_576_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_586_ == 0)
{
v___x_578_ = v___x_570_;
v_isShared_579_ = v_isSharedCheck_586_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_val_576_);
lean_dec(v___x_570_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_586_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v_run_580_; lean_object* v___f_581_; lean_object* v___f_582_; lean_object* v___x_584_; 
v_run_580_ = lean_ctor_get(v_val_576_, 1);
lean_inc_ref(v_run_580_);
lean_dec(v_val_576_);
v___f_581_ = ((lean_object*)(l_Lasm_RPC_dispatch___closed__2));
v___f_582_ = lean_alloc_closure((void*)(l_Lasm_RPC_dispatch___lam__1___boxed), 4, 3);
lean_closure_set(v___f_582_, 0, v_run_580_);
lean_closure_set(v___f_582_, 1, v_body_560_);
lean_closure_set(v___f_582_, 2, v___f_581_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v___f_582_);
v___x_584_ = v___x_578_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___f_582_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___boxed(lean_object* v_routes_588_, lean_object* v_method_589_, lean_object* v_path_590_, lean_object* v_body_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lasm_RPC_dispatch(v_routes_588_, v_method_589_, v_path_590_, v_body_591_);
lean_dec_ref(v_path_590_);
lean_dec_ref(v_method_589_);
lean_dec(v_routes_588_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_handler___lam__0(lean_object* v_x_593_){
_start:
{
if (lean_obj_tag(v_x_593_) == 0)
{
lean_object* v_a_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_603_; 
v_a_595_ = lean_ctor_get(v_x_593_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v_x_593_);
if (v_isSharedCheck_603_ == 0)
{
v___x_597_ = v_x_593_;
v_isShared_598_ = v_isSharedCheck_603_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_a_595_);
lean_dec(v_x_593_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_603_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_600_; 
if (v_isShared_598_ == 0)
{
v___x_600_ = v___x_597_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_a_595_);
v___x_600_ = v_reuseFailAlloc_602_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
lean_object* v___x_601_; 
v___x_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
return v___x_601_;
}
}
}
else
{
lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_619_; 
v_a_604_ = lean_ctor_get(v_x_593_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v_x_593_);
if (v_isSharedCheck_619_ == 0)
{
v___x_606_ = v_x_593_;
v_isShared_607_ = v_isSharedCheck_619_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v_x_593_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_619_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v_fst_608_; lean_object* v_snd_609_; uint16_t v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_616_; 
v_fst_608_ = lean_ctor_get(v_a_604_, 0);
lean_inc(v_fst_608_);
v_snd_609_ = lean_ctor_get(v_a_604_, 1);
lean_inc(v_snd_609_);
lean_dec(v_a_604_);
v___x_610_ = lean_unbox(v_fst_608_);
lean_dec(v_fst_608_);
v___x_611_ = l_Lasm_Fetch_Response_json(v_snd_609_, v___x_610_);
lean_dec(v_snd_609_);
v___x_612_ = ((lean_object*)(l_Lasm_RPC_Answer_ofRoute___closed__3));
v___x_613_ = ((lean_object*)(l_Lasm_RPC_Answer_ofRoute___closed__4));
v___x_614_ = l_Lasm_Fetch_Response_withHeader(v___x_611_, v___x_612_, v___x_613_);
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 0, v___x_614_);
v___x_616_ = v___x_606_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_614_);
v___x_616_ = v_reuseFailAlloc_618_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_617_; 
v___x_617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
return v___x_617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_handler___lam__0___boxed(lean_object* v_x_620_, lean_object* v___y_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Lasm_RPC_handler___lam__0(v_x_620_);
return v_res_622_;
}
}
static lean_object* _init_l_Lasm_RPC_handler___closed__0(void){
_start:
{
uint16_t v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_623_ = 405;
v___x_624_ = ((lean_object*)(l_Lasm_RPC_Answer_wrongMethod___closed__6));
v___x_625_ = l_Lasm_Fetch_Response_text(v___x_624_, v___x_623_);
return v___x_625_;
}
}
static lean_object* _init_l_Lasm_RPC_handler___closed__1(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_626_ = ((lean_object*)(l_Lasm_RPC_Answer_wrongMethod___closed__3));
v___x_627_ = ((lean_object*)(l_Lasm_RPC_Answer_wrongMethod___closed__2));
v___x_628_ = lean_obj_once(&l_Lasm_RPC_handler___closed__0, &l_Lasm_RPC_handler___closed__0_once, _init_l_Lasm_RPC_handler___closed__0);
v___x_629_ = l_Lasm_Fetch_Response_withHeader(v___x_628_, v___x_627_, v___x_626_);
return v___x_629_;
}
}
static lean_object* _init_l_Lasm_RPC_handler___closed__2(void){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_obj_once(&l_Lasm_RPC_handler___closed__1, &l_Lasm_RPC_handler___closed__1_once, _init_l_Lasm_RPC_handler___closed__1);
v___x_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
return v___x_631_;
}
}
static lean_object* _init_l_Lasm_RPC_handler___closed__3(void){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = lean_obj_once(&l_Lasm_RPC_handler___closed__2, &l_Lasm_RPC_handler___closed__2_once, _init_l_Lasm_RPC_handler___closed__2);
v___x_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_handler(lean_object* v_routes_635_, lean_object* v_fallback_636_, lean_object* v_req_637_){
_start:
{
lean_object* v_method_639_; lean_object* v___x_640_; uint8_t v___x_641_; 
v_method_639_ = lean_ctor_get(v_req_637_, 0);
v___x_640_ = ((lean_object*)(l_Lasm_RPC_Answer_wrongMethod___closed__3));
v___x_641_ = lean_string_dec_eq(v_method_639_, v___x_640_);
if (v___x_641_ == 0)
{
lean_object* v___x_642_; 
lean_inc_ref(v_req_637_);
v___x_642_ = l_Lasm_Fetch_Request_segments(v_req_637_);
if (lean_obj_tag(v___x_642_) == 1)
{
lean_object* v_head_643_; lean_object* v_tail_644_; lean_object* v___x_645_; uint8_t v___x_646_; 
v_head_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_head_643_);
v_tail_644_ = lean_ctor_get(v___x_642_, 1);
lean_inc(v_tail_644_);
lean_dec_ref_known(v___x_642_, 2);
v___x_645_ = ((lean_object*)(l_Lasm_RPC_endpointName_x3f___closed__2));
v___x_646_ = lean_string_dec_eq(v_head_643_, v___x_645_);
lean_dec(v_head_643_);
if (v___x_646_ == 0)
{
lean_object* v___x_647_; 
lean_dec(v_tail_644_);
v___x_647_ = lean_apply_2(v_fallback_636_, v_req_637_, lean_box(0));
return v___x_647_;
}
else
{
if (lean_obj_tag(v_tail_644_) == 1)
{
lean_object* v_tail_648_; 
v_tail_648_ = lean_ctor_get(v_tail_644_, 1);
lean_inc(v_tail_648_);
lean_dec_ref_known(v_tail_644_, 2);
if (lean_obj_tag(v_tail_648_) == 0)
{
lean_object* v___x_649_; 
lean_dec_ref(v_req_637_);
lean_dec_ref(v_fallback_636_);
v___x_649_ = lean_obj_once(&l_Lasm_RPC_handler___closed__3, &l_Lasm_RPC_handler___closed__3_once, _init_l_Lasm_RPC_handler___closed__3);
return v___x_649_;
}
else
{
lean_object* v___x_650_; 
lean_dec(v_tail_648_);
v___x_650_ = lean_apply_2(v_fallback_636_, v_req_637_, lean_box(0));
return v___x_650_;
}
}
else
{
lean_object* v___x_651_; 
lean_dec(v_tail_644_);
v___x_651_ = lean_apply_2(v_fallback_636_, v_req_637_, lean_box(0));
return v___x_651_;
}
}
}
else
{
lean_object* v___x_652_; 
lean_dec(v___x_642_);
v___x_652_ = lean_apply_2(v_fallback_636_, v_req_637_, lean_box(0));
return v___x_652_;
}
}
else
{
lean_object* v___x_653_; 
lean_inc_ref(v_req_637_);
v___x_653_ = l_Lasm_Fetch_Request_segments(v_req_637_);
if (lean_obj_tag(v___x_653_) == 1)
{
lean_object* v_head_654_; lean_object* v_tail_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_697_; 
v_head_654_ = lean_ctor_get(v___x_653_, 0);
v_tail_655_ = lean_ctor_get(v___x_653_, 1);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_697_ == 0)
{
v___x_657_ = v___x_653_;
v_isShared_658_ = v_isSharedCheck_697_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_tail_655_);
lean_inc(v_head_654_);
lean_dec(v___x_653_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_697_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_659_ = ((lean_object*)(l_Lasm_RPC_endpointName_x3f___closed__2));
v___x_660_ = lean_string_dec_eq(v_head_654_, v___x_659_);
lean_dec(v_head_654_);
if (v___x_660_ == 0)
{
lean_object* v___x_661_; 
lean_del_object(v___x_657_);
lean_dec(v_tail_655_);
v___x_661_ = lean_apply_2(v_fallback_636_, v_req_637_, lean_box(0));
return v___x_661_;
}
else
{
if (lean_obj_tag(v_tail_655_) == 1)
{
lean_object* v_tail_662_; 
v_tail_662_ = lean_ctor_get(v_tail_655_, 1);
if (lean_obj_tag(v_tail_662_) == 0)
{
lean_object* v_head_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref(v_fallback_636_);
v_head_663_ = lean_ctor_get(v_tail_655_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v_tail_655_);
if (v_isSharedCheck_693_ == 0)
{
lean_object* v_unused_694_; 
v_unused_694_ = lean_ctor_get(v_tail_655_, 1);
lean_dec(v_unused_694_);
v___x_665_ = v_tail_655_;
v_isShared_666_ = v_isSharedCheck_693_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_head_663_);
lean_dec(v_tail_655_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_693_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_667_; 
v___x_667_ = l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0(v_head_663_, v_routes_635_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_673_; 
lean_dec_ref(v_req_637_);
v___x_668_ = ((lean_object*)(l_Lasm_RPC_Answer_unknown___closed__1));
v___x_669_ = ((lean_object*)(l_Lasm_RPC_Answer_unknown___closed__2));
v___x_670_ = lean_string_append(v___x_669_, v_head_663_);
lean_dec(v_head_663_);
v___x_671_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
if (v_isShared_658_ == 0)
{
lean_ctor_set_tag(v___x_657_, 0);
lean_ctor_set(v___x_657_, 1, v___x_671_);
lean_ctor_set(v___x_657_, 0, v___x_668_);
v___x_673_ = v___x_657_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_668_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v___x_671_);
v___x_673_ = v_reuseFailAlloc_684_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
lean_object* v___x_674_; lean_object* v___x_676_; 
v___x_674_ = lean_box(0);
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 1, v___x_674_);
lean_ctor_set(v___x_665_, 0, v___x_673_);
v___x_676_ = v___x_665_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_673_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v___x_674_);
v___x_676_ = v_reuseFailAlloc_683_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
lean_object* v___x_677_; lean_object* v___x_678_; uint16_t v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_677_ = l_Lean_Json_mkObj(v___x_676_);
lean_dec_ref(v___x_676_);
v___x_678_ = l_Lean_Json_compress(v___x_677_);
v___x_679_ = 404;
v___x_680_ = l_Lasm_Fetch_Response_json(v___x_678_, v___x_679_);
lean_dec_ref(v___x_678_);
v___x_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
return v___x_682_;
}
}
}
else
{
lean_object* v_val_685_; lean_object* v_run_686_; lean_object* v___f_687_; lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
lean_del_object(v___x_665_);
lean_dec(v_head_663_);
lean_del_object(v___x_657_);
v_val_685_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_val_685_);
lean_dec_ref_known(v___x_667_, 1);
v_run_686_ = lean_ctor_get(v_val_685_, 1);
lean_inc_ref(v_run_686_);
lean_dec(v_val_685_);
v___f_687_ = ((lean_object*)(l_Lasm_RPC_handler___closed__4));
v___x_688_ = l_Lasm_Fetch_Request_text(v_req_637_);
v___x_689_ = lean_unsigned_to_nat(0u);
v___x_690_ = 0;
v___x_691_ = lean_apply_2(v_run_686_, v___x_688_, lean_box(0));
v___x_692_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_689_, v___x_690_, v___x_691_, v___f_687_);
return v___x_692_;
}
}
}
else
{
lean_object* v___x_695_; 
lean_dec_ref_known(v_tail_655_, 2);
lean_del_object(v___x_657_);
v___x_695_ = lean_apply_2(v_fallback_636_, v_req_637_, lean_box(0));
return v___x_695_;
}
}
else
{
lean_object* v___x_696_; 
lean_del_object(v___x_657_);
lean_dec(v_tail_655_);
v___x_696_ = lean_apply_2(v_fallback_636_, v_req_637_, lean_box(0));
return v___x_696_;
}
}
}
}
else
{
lean_object* v___x_698_; 
lean_dec(v___x_653_);
v___x_698_ = lean_apply_2(v_fallback_636_, v_req_637_, lean_box(0));
return v___x_698_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_handler___boxed(lean_object* v_routes_699_, lean_object* v_fallback_700_, lean_object* v_req_701_, lean_object* v_a_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_Lasm_RPC_handler(v_routes_699_, v_fallback_700_, v_req_701_);
lean_dec(v_routes_699_);
return v_res_703_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_RPC_Core(uint8_t builtin);
lean_object* initialize_Lasm_Fetch(uint8_t builtin);
lean_object* initialize_Std_Async_Basic(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_RPC_Server(uint8_t builtin) {
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
res = initialize_Lasm_RPC_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
