// Lean compiler output
// Module: Lasm.RPC.Core
// Imports: public import Init public meta import Init public import Lean.Data.Json.Basic public import Lean.Data.Json.Parser public import Lean.Data.Json.Printer public import Lean.Data.Json.FromToJson.Basic public import Lean.Elab.Deriving.FromToJson
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_data(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_invalid_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_invalid_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_failed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_failed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_decode_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_decode_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_network_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_network_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_instReprError_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.RPC.Error.invalid"};
static const lean_object* l_Lasm_RPC_instReprError_repr___closed__0 = (const lean_object*)&l_Lasm_RPC_instReprError_repr___closed__0_value;
static const lean_ctor_object l_Lasm_RPC_instReprError_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprError_repr___closed__0_value)}};
static const lean_object* l_Lasm_RPC_instReprError_repr___closed__1 = (const lean_object*)&l_Lasm_RPC_instReprError_repr___closed__1_value;
static const lean_ctor_object l_Lasm_RPC_instReprError_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprError_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_RPC_instReprError_repr___closed__2 = (const lean_object*)&l_Lasm_RPC_instReprError_repr___closed__2_value;
static lean_once_cell_t l_Lasm_RPC_instReprError_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_instReprError_repr___closed__3;
static lean_once_cell_t l_Lasm_RPC_instReprError_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_instReprError_repr___closed__4;
static const lean_string_object l_Lasm_RPC_instReprError_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.RPC.Error.failed"};
static const lean_object* l_Lasm_RPC_instReprError_repr___closed__5 = (const lean_object*)&l_Lasm_RPC_instReprError_repr___closed__5_value;
static const lean_ctor_object l_Lasm_RPC_instReprError_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprError_repr___closed__5_value)}};
static const lean_object* l_Lasm_RPC_instReprError_repr___closed__6 = (const lean_object*)&l_Lasm_RPC_instReprError_repr___closed__6_value;
static const lean_ctor_object l_Lasm_RPC_instReprError_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprError_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_RPC_instReprError_repr___closed__7 = (const lean_object*)&l_Lasm_RPC_instReprError_repr___closed__7_value;
static const lean_string_object l_Lasm_RPC_instReprError_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.RPC.Error.decode"};
static const lean_object* l_Lasm_RPC_instReprError_repr___closed__8 = (const lean_object*)&l_Lasm_RPC_instReprError_repr___closed__8_value;
static const lean_ctor_object l_Lasm_RPC_instReprError_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprError_repr___closed__8_value)}};
static const lean_object* l_Lasm_RPC_instReprError_repr___closed__9 = (const lean_object*)&l_Lasm_RPC_instReprError_repr___closed__9_value;
static const lean_ctor_object l_Lasm_RPC_instReprError_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprError_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_RPC_instReprError_repr___closed__10 = (const lean_object*)&l_Lasm_RPC_instReprError_repr___closed__10_value;
static const lean_string_object l_Lasm_RPC_instReprError_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.RPC.Error.network"};
static const lean_object* l_Lasm_RPC_instReprError_repr___closed__11 = (const lean_object*)&l_Lasm_RPC_instReprError_repr___closed__11_value;
static const lean_ctor_object l_Lasm_RPC_instReprError_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprError_repr___closed__11_value)}};
static const lean_object* l_Lasm_RPC_instReprError_repr___closed__12 = (const lean_object*)&l_Lasm_RPC_instReprError_repr___closed__12_value;
static const lean_ctor_object l_Lasm_RPC_instReprError_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_RPC_instReprError_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_RPC_instReprError_repr___closed__13 = (const lean_object*)&l_Lasm_RPC_instReprError_repr___closed__13_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_instReprError_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_instReprError_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_RPC_instReprError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_instReprError_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_instReprError___closed__0 = (const lean_object*)&l_Lasm_RPC_instReprError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_instReprError = (const lean_object*)&l_Lasm_RPC_instReprError___closed__0_value;
static const lean_string_object l_Lasm_RPC_instInhabitedError_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_RPC_instInhabitedError_default___closed__0 = (const lean_object*)&l_Lasm_RPC_instInhabitedError_default___closed__0_value;
static const lean_ctor_object l_Lasm_RPC_instInhabitedError_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_instInhabitedError_default___closed__0_value)}};
static const lean_object* l_Lasm_RPC_instInhabitedError_default___closed__1 = (const lean_object*)&l_Lasm_RPC_instInhabitedError_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_instInhabitedError_default = (const lean_object*)&l_Lasm_RPC_instInhabitedError_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_instInhabitedError = (const lean_object*)&l_Lasm_RPC_instInhabitedError_default___closed__1_value;
LEAN_EXPORT uint8_t l_Lasm_RPC_instBEqError_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_instBEqError_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_RPC_instBEqError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_instBEqError_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_instBEqError___closed__0 = (const lean_object*)&l_Lasm_RPC_instBEqError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_instBEqError = (const lean_object*)&l_Lasm_RPC_instBEqError___closed__0_value;
static const lean_string_object l_Lasm_RPC_Error_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "the server failed ("};
static const lean_object* l_Lasm_RPC_Error_toString___closed__0 = (const lean_object*)&l_Lasm_RPC_Error_toString___closed__0_value;
static const lean_string_object l_Lasm_RPC_Error_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "): "};
static const lean_object* l_Lasm_RPC_Error_toString___closed__1 = (const lean_object*)&l_Lasm_RPC_Error_toString___closed__1_value;
static const lean_string_object l_Lasm_RPC_Error_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unreadable answer: "};
static const lean_object* l_Lasm_RPC_Error_toString___closed__2 = (const lean_object*)&l_Lasm_RPC_Error_toString___closed__2_value;
static const lean_string_object l_Lasm_RPC_Error_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "network error: "};
static const lean_object* l_Lasm_RPC_Error_toString___closed__3 = (const lean_object*)&l_Lasm_RPC_Error_toString___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_toString(lean_object*);
static const lean_closure_object l_Lasm_RPC_instToStringError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_Error_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_instToStringError___closed__0 = (const lean_object*)&l_Lasm_RPC_instToStringError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_instToStringError = (const lean_object*)&l_Lasm_RPC_instToStringError___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_RPC_hugeExponent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_RPC_hugeExponent___closed__0 = (const lean_object*)&l_Lasm_RPC_hugeExponent___closed__0_value;
static const lean_ctor_object l_Lasm_RPC_hugeExponent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_RPC_hugeExponent___closed__0_value)}};
static const lean_object* l_Lasm_RPC_hugeExponent___closed__1 = (const lean_object*)&l_Lasm_RPC_hugeExponent___closed__1_value;
static const lean_ctor_object l_Lasm_RPC_hugeExponent___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_RPC_hugeExponent___closed__1_value)}};
static const lean_object* l_Lasm_RPC_hugeExponent___closed__2 = (const lean_object*)&l_Lasm_RPC_hugeExponent___closed__2_value;
static const lean_ctor_object l_Lasm_RPC_hugeExponent___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_RPC_hugeExponent___closed__2_value)}};
static const lean_object* l_Lasm_RPC_hugeExponent___closed__3 = (const lean_object*)&l_Lasm_RPC_hugeExponent___closed__3_value;
LEAN_EXPORT uint8_t l_Lasm_RPC_hugeExponent(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_hugeExponent___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_parseJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "a number's exponent has more than four digits"};
static const lean_object* l_Lasm_RPC_parseJson___closed__0 = (const lean_object*)&l_Lasm_RPC_parseJson___closed__0_value;
static const lean_ctor_object l_Lasm_RPC_parseJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_parseJson___closed__0_value)}};
static const lean_object* l_Lasm_RPC_parseJson___closed__1 = (const lean_object*)&l_Lasm_RPC_parseJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_parseJson(lean_object*);
static const lean_string_object l_Lasm_RPC_Endpoint_path___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "/rpc/"};
static const lean_object* l_Lasm_RPC_Endpoint_path___redArg___closed__0 = (const lean_object*)&l_Lasm_RPC_Endpoint_path___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "the request is not JSON: "};
static const lean_object* l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__0 = (const lean_object*)&l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__0_value;
static const lean_string_object l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "malformed request: "};
static const lean_object* l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__1 = (const lean_object*)&l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeRequest___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeRequest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Except_map_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Except_map_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Lasm_RPC_Endpoint_decodeRequest_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Lasm_RPC_Endpoint_decodeRequest_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0 = (const lean_object*)&l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0_value;
static const lean_string_object l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ok"};
static const lean_object* l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1 = (const lean_object*)&l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getStr_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__0 = (const lean_object*)&l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__0_value;
static const lean_string_object l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "neither ok nor error"};
static const lean_object* l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__1 = (const lean_object*)&l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__1_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__2 = (const lean_object*)&l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__2_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__3 = (const lean_object*)&l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
default: 
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorIdx___boxed(lean_object* v_x_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lasm_RPC_Error_ctorIdx(v_x_6_);
lean_dec_ref(v_x_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorElim___redArg(lean_object* v_t_8_, lean_object* v_k_9_){
_start:
{
if (lean_obj_tag(v_t_8_) == 1)
{
lean_object* v_status_10_; lean_object* v_message_11_; lean_object* v___x_12_; 
v_status_10_ = lean_ctor_get(v_t_8_, 0);
lean_inc(v_status_10_);
v_message_11_ = lean_ctor_get(v_t_8_, 1);
lean_inc_ref(v_message_11_);
lean_dec_ref_known(v_t_8_, 2);
v___x_12_ = lean_apply_2(v_k_9_, v_status_10_, v_message_11_);
return v___x_12_;
}
else
{
lean_object* v_message_13_; lean_object* v___x_14_; 
v_message_13_ = lean_ctor_get(v_t_8_, 0);
lean_inc_ref(v_message_13_);
lean_dec_ref(v_t_8_);
v___x_14_ = lean_apply_1(v_k_9_, v_message_13_);
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorElim(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_17_, v_k_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorElim___boxed(lean_object* v_motive_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lasm_RPC_Error_ctorElim(v_motive_21_, v_ctorIdx_22_, v_t_23_, v_h_24_, v_k_25_);
lean_dec(v_ctorIdx_22_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_invalid_elim___redArg(lean_object* v_t_27_, lean_object* v_invalid_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_27_, v_invalid_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_invalid_elim(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_invalid_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_31_, v_invalid_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_failed_elim___redArg(lean_object* v_t_35_, lean_object* v_failed_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_35_, v_failed_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_failed_elim(lean_object* v_motive_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_failed_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_39_, v_failed_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_decode_elim___redArg(lean_object* v_t_43_, lean_object* v_decode_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_43_, v_decode_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_decode_elim(lean_object* v_motive_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_decode_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_47_, v_decode_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_network_elim___redArg(lean_object* v_t_51_, lean_object* v_network_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_51_, v_network_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_network_elim(lean_object* v_motive_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_network_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_55_, v_network_57_);
return v___x_58_;
}
}
static lean_object* _init_l_Lasm_RPC_instReprError_repr___closed__3(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_unsigned_to_nat(2u);
v___x_66_ = lean_nat_to_int(v___x_65_);
return v___x_66_;
}
}
static lean_object* _init_l_Lasm_RPC_instReprError_repr___closed__4(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_unsigned_to_nat(1u);
v___x_68_ = lean_nat_to_int(v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_instReprError_repr(lean_object* v_x_87_, lean_object* v_prec_88_){
_start:
{
switch(lean_obj_tag(v_x_87_))
{
case 0:
{
lean_object* v_message_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_109_; 
v_message_89_ = lean_ctor_get(v_x_87_, 0);
v_isSharedCheck_109_ = !lean_is_exclusive(v_x_87_);
if (v_isSharedCheck_109_ == 0)
{
v___x_91_ = v_x_87_;
v_isShared_92_ = v_isSharedCheck_109_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_message_89_);
lean_dec(v_x_87_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_109_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___y_94_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_105_ = lean_unsigned_to_nat(1024u);
v___x_106_ = lean_nat_dec_le(v___x_105_, v_prec_88_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
v___x_107_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__3, &l_Lasm_RPC_instReprError_repr___closed__3_once, _init_l_Lasm_RPC_instReprError_repr___closed__3);
v___y_94_ = v___x_107_;
goto v___jp_93_;
}
else
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__4, &l_Lasm_RPC_instReprError_repr___closed__4_once, _init_l_Lasm_RPC_instReprError_repr___closed__4);
v___y_94_ = v___x_108_;
goto v___jp_93_;
}
v___jp_93_:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_95_ = ((lean_object*)(l_Lasm_RPC_instReprError_repr___closed__2));
v___x_96_ = l_String_quote(v_message_89_);
if (v_isShared_92_ == 0)
{
lean_ctor_set_tag(v___x_91_, 3);
lean_ctor_set(v___x_91_, 0, v___x_96_);
v___x_98_ = v___x_91_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_96_);
v___x_98_ = v_reuseFailAlloc_104_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_99_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_95_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
lean_inc(v___y_94_);
v___x_100_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_100_, 0, v___y_94_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = 0;
v___x_102_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_102_, 0, v___x_100_);
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*1, v___x_101_);
v___x_103_ = l_Repr_addAppParen(v___x_102_, v_prec_88_);
return v___x_103_;
}
}
}
}
case 1:
{
lean_object* v_status_110_; lean_object* v_message_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_136_; 
v_status_110_ = lean_ctor_get(v_x_87_, 0);
v_message_111_ = lean_ctor_get(v_x_87_, 1);
v_isSharedCheck_136_ = !lean_is_exclusive(v_x_87_);
if (v_isSharedCheck_136_ == 0)
{
v___x_113_ = v_x_87_;
v_isShared_114_ = v_isSharedCheck_136_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_message_111_);
lean_inc(v_status_110_);
lean_dec(v_x_87_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_136_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___y_116_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_132_ = lean_unsigned_to_nat(1024u);
v___x_133_ = lean_nat_dec_le(v___x_132_, v_prec_88_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; 
v___x_134_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__3, &l_Lasm_RPC_instReprError_repr___closed__3_once, _init_l_Lasm_RPC_instReprError_repr___closed__3);
v___y_116_ = v___x_134_;
goto v___jp_115_;
}
else
{
lean_object* v___x_135_; 
v___x_135_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__4, &l_Lasm_RPC_instReprError_repr___closed__4_once, _init_l_Lasm_RPC_instReprError_repr___closed__4);
v___y_116_ = v___x_135_;
goto v___jp_115_;
}
v___jp_115_:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_122_; 
v___x_117_ = lean_box(1);
v___x_118_ = ((lean_object*)(l_Lasm_RPC_instReprError_repr___closed__7));
v___x_119_ = l_Nat_reprFast(v_status_110_);
v___x_120_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
if (v_isShared_114_ == 0)
{
lean_ctor_set_tag(v___x_113_, 5);
lean_ctor_set(v___x_113_, 1, v___x_120_);
lean_ctor_set(v___x_113_, 0, v___x_118_);
v___x_122_ = v___x_113_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_118_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v___x_120_);
v___x_122_ = v_reuseFailAlloc_131_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set(v___x_123_, 1, v___x_117_);
v___x_124_ = l_String_quote(v_message_111_);
v___x_125_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_123_);
lean_ctor_set(v___x_126_, 1, v___x_125_);
lean_inc(v___y_116_);
v___x_127_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_127_, 0, v___y_116_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = 0;
v___x_129_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_129_, 0, v___x_127_);
lean_ctor_set_uint8(v___x_129_, sizeof(void*)*1, v___x_128_);
v___x_130_ = l_Repr_addAppParen(v___x_129_, v_prec_88_);
return v___x_130_;
}
}
}
}
case 2:
{
lean_object* v_message_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_157_; 
v_message_137_ = lean_ctor_get(v_x_87_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v_x_87_);
if (v_isSharedCheck_157_ == 0)
{
v___x_139_ = v_x_87_;
v_isShared_140_ = v_isSharedCheck_157_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_message_137_);
lean_dec(v_x_87_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_157_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___y_142_; lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_153_ = lean_unsigned_to_nat(1024u);
v___x_154_ = lean_nat_dec_le(v___x_153_, v_prec_88_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; 
v___x_155_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__3, &l_Lasm_RPC_instReprError_repr___closed__3_once, _init_l_Lasm_RPC_instReprError_repr___closed__3);
v___y_142_ = v___x_155_;
goto v___jp_141_;
}
else
{
lean_object* v___x_156_; 
v___x_156_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__4, &l_Lasm_RPC_instReprError_repr___closed__4_once, _init_l_Lasm_RPC_instReprError_repr___closed__4);
v___y_142_ = v___x_156_;
goto v___jp_141_;
}
v___jp_141_:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_146_; 
v___x_143_ = ((lean_object*)(l_Lasm_RPC_instReprError_repr___closed__10));
v___x_144_ = l_String_quote(v_message_137_);
if (v_isShared_140_ == 0)
{
lean_ctor_set_tag(v___x_139_, 3);
lean_ctor_set(v___x_139_, 0, v___x_144_);
v___x_146_ = v___x_139_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v___x_144_);
v___x_146_ = v_reuseFailAlloc_152_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_147_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_147_, 0, v___x_143_);
lean_ctor_set(v___x_147_, 1, v___x_146_);
lean_inc(v___y_142_);
v___x_148_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_148_, 0, v___y_142_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = 0;
v___x_150_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_150_, 0, v___x_148_);
lean_ctor_set_uint8(v___x_150_, sizeof(void*)*1, v___x_149_);
v___x_151_ = l_Repr_addAppParen(v___x_150_, v_prec_88_);
return v___x_151_;
}
}
}
}
default: 
{
lean_object* v_message_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_178_; 
v_message_158_ = lean_ctor_get(v_x_87_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v_x_87_);
if (v_isSharedCheck_178_ == 0)
{
v___x_160_ = v_x_87_;
v_isShared_161_ = v_isSharedCheck_178_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_message_158_);
lean_dec(v_x_87_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_178_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___y_163_; lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = lean_unsigned_to_nat(1024u);
v___x_175_ = lean_nat_dec_le(v___x_174_, v_prec_88_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; 
v___x_176_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__3, &l_Lasm_RPC_instReprError_repr___closed__3_once, _init_l_Lasm_RPC_instReprError_repr___closed__3);
v___y_163_ = v___x_176_;
goto v___jp_162_;
}
else
{
lean_object* v___x_177_; 
v___x_177_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__4, &l_Lasm_RPC_instReprError_repr___closed__4_once, _init_l_Lasm_RPC_instReprError_repr___closed__4);
v___y_163_ = v___x_177_;
goto v___jp_162_;
}
v___jp_162_:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_167_; 
v___x_164_ = ((lean_object*)(l_Lasm_RPC_instReprError_repr___closed__13));
v___x_165_ = l_String_quote(v_message_158_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 0, v___x_165_);
v___x_167_ = v___x_160_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_165_);
v___x_167_ = v_reuseFailAlloc_173_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
lean_object* v___x_168_; lean_object* v___x_169_; uint8_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_168_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_164_);
lean_ctor_set(v___x_168_, 1, v___x_167_);
lean_inc(v___y_163_);
v___x_169_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_169_, 0, v___y_163_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
v___x_170_ = 0;
v___x_171_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_171_, 0, v___x_169_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*1, v___x_170_);
v___x_172_ = l_Repr_addAppParen(v___x_171_, v_prec_88_);
return v___x_172_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_instReprError_repr___boxed(lean_object* v_x_179_, lean_object* v_prec_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lasm_RPC_instReprError_repr(v_x_179_, v_prec_180_);
lean_dec(v_prec_180_);
return v_res_181_;
}
}
LEAN_EXPORT uint8_t l_Lasm_RPC_instBEqError_beq(lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
switch(lean_obj_tag(v_x_189_))
{
case 0:
{
if (lean_obj_tag(v_x_190_) == 0)
{
lean_object* v_message_191_; lean_object* v_message_192_; uint8_t v___x_193_; 
v_message_191_ = lean_ctor_get(v_x_189_, 0);
v_message_192_ = lean_ctor_get(v_x_190_, 0);
v___x_193_ = lean_string_dec_eq(v_message_191_, v_message_192_);
return v___x_193_;
}
else
{
uint8_t v___x_194_; 
v___x_194_ = 0;
return v___x_194_;
}
}
case 1:
{
if (lean_obj_tag(v_x_190_) == 1)
{
lean_object* v_status_195_; lean_object* v_message_196_; lean_object* v_status_197_; lean_object* v_message_198_; uint8_t v___x_199_; 
v_status_195_ = lean_ctor_get(v_x_189_, 0);
v_message_196_ = lean_ctor_get(v_x_189_, 1);
v_status_197_ = lean_ctor_get(v_x_190_, 0);
v_message_198_ = lean_ctor_get(v_x_190_, 1);
v___x_199_ = lean_nat_dec_eq(v_status_195_, v_status_197_);
if (v___x_199_ == 0)
{
return v___x_199_;
}
else
{
uint8_t v___x_200_; 
v___x_200_ = lean_string_dec_eq(v_message_196_, v_message_198_);
return v___x_200_;
}
}
else
{
uint8_t v___x_201_; 
v___x_201_ = 0;
return v___x_201_;
}
}
case 2:
{
if (lean_obj_tag(v_x_190_) == 2)
{
lean_object* v_message_202_; lean_object* v_message_203_; uint8_t v___x_204_; 
v_message_202_ = lean_ctor_get(v_x_189_, 0);
v_message_203_ = lean_ctor_get(v_x_190_, 0);
v___x_204_ = lean_string_dec_eq(v_message_202_, v_message_203_);
return v___x_204_;
}
else
{
uint8_t v___x_205_; 
v___x_205_ = 0;
return v___x_205_;
}
}
default: 
{
if (lean_obj_tag(v_x_190_) == 3)
{
lean_object* v_message_206_; lean_object* v_message_207_; uint8_t v___x_208_; 
v_message_206_ = lean_ctor_get(v_x_189_, 0);
v_message_207_ = lean_ctor_get(v_x_190_, 0);
v___x_208_ = lean_string_dec_eq(v_message_206_, v_message_207_);
return v___x_208_;
}
else
{
uint8_t v___x_209_; 
v___x_209_ = 0;
return v___x_209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_instBEqError_beq___boxed(lean_object* v_x_210_, lean_object* v_x_211_){
_start:
{
uint8_t v_res_212_; lean_object* v_r_213_; 
v_res_212_ = l_Lasm_RPC_instBEqError_beq(v_x_210_, v_x_211_);
lean_dec_ref(v_x_211_);
lean_dec_ref(v_x_210_);
v_r_213_ = lean_box(v_res_212_);
return v_r_213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_toString(lean_object* v_x_220_){
_start:
{
switch(lean_obj_tag(v_x_220_))
{
case 0:
{
lean_object* v_message_221_; 
v_message_221_ = lean_ctor_get(v_x_220_, 0);
lean_inc_ref(v_message_221_);
lean_dec_ref_known(v_x_220_, 1);
return v_message_221_;
}
case 1:
{
lean_object* v_status_222_; lean_object* v_message_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v_status_222_ = lean_ctor_get(v_x_220_, 0);
lean_inc(v_status_222_);
v_message_223_ = lean_ctor_get(v_x_220_, 1);
lean_inc_ref(v_message_223_);
lean_dec_ref_known(v_x_220_, 2);
v___x_224_ = ((lean_object*)(l_Lasm_RPC_Error_toString___closed__0));
v___x_225_ = l_Nat_reprFast(v_status_222_);
v___x_226_ = lean_string_append(v___x_224_, v___x_225_);
lean_dec_ref(v___x_225_);
v___x_227_ = ((lean_object*)(l_Lasm_RPC_Error_toString___closed__1));
v___x_228_ = lean_string_append(v___x_226_, v___x_227_);
v___x_229_ = lean_string_append(v___x_228_, v_message_223_);
lean_dec_ref(v_message_223_);
return v___x_229_;
}
case 2:
{
lean_object* v_message_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_message_230_ = lean_ctor_get(v_x_220_, 0);
lean_inc_ref(v_message_230_);
lean_dec_ref_known(v_x_220_, 1);
v___x_231_ = ((lean_object*)(l_Lasm_RPC_Error_toString___closed__2));
v___x_232_ = lean_string_append(v___x_231_, v_message_230_);
lean_dec_ref(v_message_230_);
return v___x_232_;
}
default: 
{
lean_object* v_message_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v_message_233_ = lean_ctor_get(v_x_220_, 0);
lean_inc_ref(v_message_233_);
lean_dec_ref_known(v_x_220_, 1);
v___x_234_ = ((lean_object*)(l_Lasm_RPC_Error_toString___closed__3));
v___x_235_ = lean_string_append(v___x_234_, v_message_233_);
lean_dec_ref(v_message_233_);
return v___x_235_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg(lean_object* v_as_x27_247_, lean_object* v_b_248_){
_start:
{
if (lean_obj_tag(v_as_x27_247_) == 0)
{
return v_b_248_;
}
else
{
lean_object* v_snd_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_411_; 
v_snd_249_ = lean_ctor_get(v_b_248_, 1);
v_isSharedCheck_411_ = !lean_is_exclusive(v_b_248_);
if (v_isSharedCheck_411_ == 0)
{
lean_object* v_unused_412_; 
v_unused_412_ = lean_ctor_get(v_b_248_, 0);
lean_dec(v_unused_412_);
v___x_251_ = v_b_248_;
v_isShared_252_ = v_isSharedCheck_411_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_snd_249_);
lean_dec(v_b_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_411_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v_snd_253_; lean_object* v_snd_254_; lean_object* v_head_255_; lean_object* v_tail_256_; lean_object* v_fst_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_409_; 
v_snd_253_ = lean_ctor_get(v_snd_249_, 1);
lean_inc(v_snd_253_);
v_snd_254_ = lean_ctor_get(v_snd_253_, 1);
lean_inc(v_snd_254_);
v_head_255_ = lean_ctor_get(v_as_x27_247_, 0);
v_tail_256_ = lean_ctor_get(v_as_x27_247_, 1);
v_fst_257_ = lean_ctor_get(v_snd_249_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v_snd_249_);
if (v_isSharedCheck_409_ == 0)
{
lean_object* v_unused_410_; 
v_unused_410_ = lean_ctor_get(v_snd_249_, 1);
lean_dec(v_unused_410_);
v___x_259_ = v_snd_249_;
v_isShared_260_ = v_isSharedCheck_409_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_fst_257_);
lean_dec(v_snd_249_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_409_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v_fst_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_407_; 
v_fst_261_ = lean_ctor_get(v_snd_253_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v_snd_253_);
if (v_isSharedCheck_407_ == 0)
{
lean_object* v_unused_408_; 
v_unused_408_ = lean_ctor_get(v_snd_253_, 1);
lean_dec(v_unused_408_);
v___x_263_ = v_snd_253_;
v_isShared_264_ = v_isSharedCheck_407_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_fst_261_);
lean_dec(v_snd_253_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_407_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v_fst_265_; lean_object* v_snd_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_406_; 
v_fst_265_ = lean_ctor_get(v_snd_254_, 0);
v_snd_266_ = lean_ctor_get(v_snd_254_, 1);
v_isSharedCheck_406_ = !lean_is_exclusive(v_snd_254_);
if (v_isSharedCheck_406_ == 0)
{
v___x_268_ = v_snd_254_;
v_isShared_269_ = v_isSharedCheck_406_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_snd_266_);
lean_inc(v_fst_265_);
lean_dec(v_snd_254_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_406_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_270_; uint8_t v_inString_272_; uint8_t v_escaped_273_; lean_object* v___y_290_; uint8_t v___y_291_; lean_object* v___y_299_; uint8_t v_inString_303_; uint8_t v___x_304_; lean_object* v___y_306_; lean_object* v___y_314_; lean_object* v_exponent_322_; uint8_t v___x_339_; 
v___x_270_ = lean_box(0);
v_inString_303_ = 0;
v___x_304_ = 1;
v___x_339_ = lean_unbox(v_fst_257_);
if (v___x_339_ == 0)
{
lean_del_object(v___x_268_);
lean_del_object(v___x_263_);
lean_del_object(v___x_259_);
lean_del_object(v___x_251_);
if (lean_obj_tag(v_snd_266_) == 1)
{
lean_object* v_val_340_; uint32_t v___x_379_; uint32_t v___x_380_; uint8_t v___x_381_; 
v_val_340_ = lean_ctor_get(v_snd_266_, 0);
v___x_379_ = 48;
v___x_380_ = lean_unbox_uint32(v_head_255_);
v___x_381_ = lean_uint32_dec_le(v___x_379_, v___x_380_);
if (v___x_381_ == 0)
{
goto v___jp_372_;
}
else
{
uint32_t v___x_382_; uint32_t v___x_383_; uint8_t v___x_384_; 
v___x_382_ = 57;
v___x_383_ = lean_unbox_uint32(v_head_255_);
v___x_384_ = lean_uint32_dec_le(v___x_383_, v___x_382_);
if (v___x_384_ == 0)
{
goto v___jp_372_;
}
else
{
lean_object* v___x_385_; uint8_t v___x_386_; 
v___x_385_ = lean_unsigned_to_nat(0u);
v___x_386_ = lean_nat_dec_eq(v_val_340_, v___x_385_);
if (v___x_386_ == 0)
{
goto v___jp_341_;
}
else
{
uint32_t v___x_387_; uint8_t v___x_388_; 
v___x_387_ = lean_unbox_uint32(v_head_255_);
v___x_388_ = lean_uint32_dec_eq(v___x_387_, v___x_379_);
if (v___x_388_ == 0)
{
goto v___jp_341_;
}
else
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_389_, 0, v_fst_265_);
lean_ctor_set(v___x_389_, 1, v_snd_266_);
v___x_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_390_, 0, v_fst_261_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___x_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_391_, 0, v_fst_257_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_270_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v_as_x27_247_ = v_tail_256_;
v_b_248_ = v___x_392_;
goto _start;
}
}
}
}
v___jp_341_:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_342_ = lean_unsigned_to_nat(4u);
v___x_343_ = lean_unsigned_to_nat(1u);
v___x_344_ = lean_nat_add(v_val_340_, v___x_343_);
v___x_345_ = lean_nat_dec_lt(v___x_342_, v___x_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_357_; 
v_isSharedCheck_357_ = !lean_is_exclusive(v_snd_266_);
if (v_isSharedCheck_357_ == 0)
{
lean_object* v_unused_358_; 
v_unused_358_ = lean_ctor_get(v_snd_266_, 0);
lean_dec(v_unused_358_);
v___x_347_ = v_snd_266_;
v_isShared_348_ = v_isSharedCheck_357_;
goto v_resetjp_346_;
}
else
{
lean_dec(v_snd_266_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_357_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 0, v___x_344_);
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v___x_344_);
v___x_350_ = v_reuseFailAlloc_356_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v_fst_265_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v___x_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_352_, 0, v_fst_261_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
v___x_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_353_, 0, v_fst_257_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
v___x_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_270_);
lean_ctor_set(v___x_354_, 1, v___x_353_);
v_as_x27_247_ = v_tail_256_;
v_b_248_ = v___x_354_;
goto _start;
}
}
}
else
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
lean_dec(v___x_344_);
v___x_359_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__2));
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v_fst_265_);
lean_ctor_set(v___x_360_, 1, v_snd_266_);
v___x_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_361_, 0, v_fst_261_);
lean_ctor_set(v___x_361_, 1, v___x_360_);
v___x_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_362_, 0, v_fst_257_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
v___x_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_359_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
return v___x_363_;
}
}
v___jp_364_:
{
lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_365_ = lean_unsigned_to_nat(0u);
v___x_366_ = lean_nat_dec_eq(v_val_340_, v___x_365_);
if (v___x_366_ == 0)
{
lean_dec_ref_known(v_snd_266_, 1);
v_exponent_322_ = v___x_270_;
goto v___jp_321_;
}
else
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_367_, 0, v_fst_265_);
lean_ctor_set(v___x_367_, 1, v_snd_266_);
v___x_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_368_, 0, v_fst_261_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v_fst_257_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
v___x_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_270_);
lean_ctor_set(v___x_370_, 1, v___x_369_);
v_as_x27_247_ = v_tail_256_;
v_b_248_ = v___x_370_;
goto _start;
}
}
v___jp_372_:
{
uint32_t v___x_373_; uint32_t v___x_374_; uint8_t v___x_375_; 
v___x_373_ = 43;
v___x_374_ = lean_unbox_uint32(v_head_255_);
v___x_375_ = lean_uint32_dec_eq(v___x_374_, v___x_373_);
if (v___x_375_ == 0)
{
uint32_t v___x_376_; uint32_t v___x_377_; uint8_t v___x_378_; 
v___x_376_ = 45;
v___x_377_ = lean_unbox_uint32(v_head_255_);
v___x_378_ = lean_uint32_dec_eq(v___x_377_, v___x_376_);
if (v___x_378_ == 0)
{
lean_dec_ref_known(v_snd_266_, 1);
v_exponent_322_ = v___x_270_;
goto v___jp_321_;
}
else
{
goto v___jp_364_;
}
}
else
{
goto v___jp_364_;
}
}
}
else
{
v_exponent_322_ = v_snd_266_;
goto v___jp_321_;
}
}
else
{
uint8_t v___x_394_; 
v___x_394_ = lean_unbox(v_fst_261_);
if (v___x_394_ == 0)
{
uint32_t v___x_395_; uint32_t v___x_396_; uint8_t v___x_397_; 
v___x_395_ = 92;
v___x_396_ = lean_unbox_uint32(v_head_255_);
v___x_397_ = lean_uint32_dec_eq(v___x_396_, v___x_395_);
if (v___x_397_ == 0)
{
uint32_t v___x_398_; uint32_t v___x_399_; uint8_t v___x_400_; 
v___x_398_ = 34;
v___x_399_ = lean_unbox_uint32(v_head_255_);
v___x_400_ = lean_uint32_dec_eq(v___x_399_, v___x_398_);
if (v___x_400_ == 0)
{
uint8_t v___x_401_; uint8_t v___x_402_; 
v___x_401_ = lean_unbox(v_fst_257_);
lean_dec(v_fst_257_);
v___x_402_ = lean_unbox(v_fst_261_);
lean_dec(v_fst_261_);
v_inString_272_ = v___x_401_;
v_escaped_273_ = v___x_402_;
goto v___jp_271_;
}
else
{
uint8_t v___x_403_; 
lean_dec(v_fst_257_);
v___x_403_ = lean_unbox(v_fst_261_);
lean_dec(v_fst_261_);
v_inString_272_ = v_inString_303_;
v_escaped_273_ = v___x_403_;
goto v___jp_271_;
}
}
else
{
uint8_t v___x_404_; 
lean_dec(v_fst_261_);
v___x_404_ = lean_unbox(v_fst_257_);
lean_dec(v_fst_257_);
v_inString_272_ = v___x_404_;
v_escaped_273_ = v___x_304_;
goto v___jp_271_;
}
}
else
{
uint8_t v___x_405_; 
lean_dec(v_fst_261_);
v___x_405_ = lean_unbox(v_fst_257_);
lean_dec(v_fst_257_);
v_inString_272_ = v___x_405_;
v_escaped_273_ = v_inString_303_;
goto v___jp_271_;
}
}
v___jp_271_:
{
lean_object* v___x_275_; 
if (v_isShared_269_ == 0)
{
v___x_275_ = v___x_268_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_fst_265_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v_snd_266_);
v___x_275_ = v_reuseFailAlloc_288_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_276_ = lean_box(v_escaped_273_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 1, v___x_275_);
lean_ctor_set(v___x_263_, 0, v___x_276_);
v___x_278_ = v___x_263_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v___x_275_);
v___x_278_ = v_reuseFailAlloc_287_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_279_ = lean_box(v_inString_272_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 1, v___x_278_);
lean_ctor_set(v___x_259_, 0, v___x_279_);
v___x_281_ = v___x_259_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_279_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v___x_278_);
v___x_281_ = v_reuseFailAlloc_286_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
lean_object* v___x_283_; 
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 1, v___x_281_);
lean_ctor_set(v___x_251_, 0, v___x_270_);
v___x_283_ = v___x_251_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_270_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v___x_281_);
v___x_283_ = v_reuseFailAlloc_285_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
v_as_x27_247_ = v_tail_256_;
v_b_248_ = v___x_283_;
goto _start;
}
}
}
}
}
v___jp_289_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_292_ = lean_box(v___y_291_);
v___x_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___y_290_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v_fst_261_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_295_, 0, v_fst_257_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_270_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v_as_x27_247_ = v_tail_256_;
v_b_248_ = v___x_296_;
goto _start;
}
v___jp_298_:
{
uint32_t v___x_300_; uint32_t v___x_301_; uint8_t v___x_302_; 
v___x_300_ = 46;
v___x_301_ = lean_unbox_uint32(v_head_255_);
v___x_302_ = lean_uint32_dec_eq(v___x_301_, v___x_300_);
v___y_290_ = v___y_299_;
v___y_291_ = v___x_302_;
goto v___jp_289_;
}
v___jp_305_:
{
uint32_t v___x_307_; uint32_t v___x_308_; uint8_t v___x_309_; 
v___x_307_ = 48;
v___x_308_ = lean_unbox_uint32(v_head_255_);
v___x_309_ = lean_uint32_dec_le(v___x_307_, v___x_308_);
if (v___x_309_ == 0)
{
v___y_299_ = v___y_306_;
goto v___jp_298_;
}
else
{
uint32_t v___x_310_; uint32_t v___x_311_; uint8_t v___x_312_; 
v___x_310_ = 57;
v___x_311_ = lean_unbox_uint32(v_head_255_);
v___x_312_ = lean_uint32_dec_le(v___x_311_, v___x_310_);
if (v___x_312_ == 0)
{
v___y_299_ = v___y_306_;
goto v___jp_298_;
}
else
{
v___y_290_ = v___y_306_;
v___y_291_ = v___x_304_;
goto v___jp_289_;
}
}
}
v___jp_313_:
{
uint8_t v___x_315_; 
v___x_315_ = lean_unbox(v_fst_265_);
lean_dec(v_fst_265_);
if (v___x_315_ == 0)
{
v___y_306_ = v___y_314_;
goto v___jp_305_;
}
else
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
lean_dec(v___y_314_);
v___x_316_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__1));
v___x_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_317_, 0, v_fst_261_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v_fst_257_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
v___x_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_270_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
v_as_x27_247_ = v_tail_256_;
v_b_248_ = v___x_319_;
goto _start;
}
}
v___jp_321_:
{
uint32_t v___x_323_; uint32_t v___x_324_; uint8_t v___x_325_; 
v___x_323_ = 34;
v___x_324_ = lean_unbox_uint32(v_head_255_);
v___x_325_ = lean_uint32_dec_eq(v___x_324_, v___x_323_);
if (v___x_325_ == 0)
{
uint32_t v___x_326_; uint32_t v___x_327_; uint8_t v___x_328_; 
v___x_326_ = 101;
v___x_327_ = lean_unbox_uint32(v_head_255_);
v___x_328_ = lean_uint32_dec_eq(v___x_327_, v___x_326_);
if (v___x_328_ == 0)
{
uint32_t v___x_329_; uint32_t v___x_330_; uint8_t v___x_331_; 
v___x_329_ = 69;
v___x_330_ = lean_unbox_uint32(v_head_255_);
v___x_331_ = lean_uint32_dec_eq(v___x_330_, v___x_329_);
if (v___x_331_ == 0)
{
lean_dec(v_fst_265_);
v___y_306_ = v_exponent_322_;
goto v___jp_305_;
}
else
{
v___y_314_ = v_exponent_322_;
goto v___jp_313_;
}
}
else
{
v___y_314_ = v_exponent_322_;
goto v___jp_313_;
}
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
lean_dec(v_fst_265_);
lean_dec(v_fst_257_);
v___x_332_ = lean_box(v_inString_303_);
v___x_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
lean_ctor_set(v___x_333_, 1, v_exponent_322_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v_fst_261_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = lean_box(v___x_304_);
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v___x_334_);
v___x_337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_270_);
lean_ctor_set(v___x_337_, 1, v___x_336_);
v_as_x27_247_ = v_tail_256_;
v_b_248_ = v___x_337_;
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
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___boxed(lean_object* v_as_x27_413_, lean_object* v_b_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg(v_as_x27_413_, v_b_414_);
lean_dec(v_as_x27_413_);
return v_res_415_;
}
}
LEAN_EXPORT uint8_t l_Lasm_RPC_hugeExponent(lean_object* v_text_431_){
_start:
{
uint8_t v_inString_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v_fst_436_; 
v_inString_432_ = 0;
v___x_433_ = lean_string_data(v_text_431_);
v___x_434_ = ((lean_object*)(l_Lasm_RPC_hugeExponent___closed__3));
v___x_435_ = l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg(v___x_433_, v___x_434_);
lean_dec(v___x_433_);
v_fst_436_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_fst_436_);
lean_dec_ref(v___x_435_);
if (lean_obj_tag(v_fst_436_) == 0)
{
return v_inString_432_;
}
else
{
lean_object* v_val_437_; uint8_t v___x_438_; 
v_val_437_ = lean_ctor_get(v_fst_436_, 0);
lean_inc(v_val_437_);
lean_dec_ref_known(v_fst_436_, 1);
v___x_438_ = lean_unbox(v_val_437_);
lean_dec(v_val_437_);
return v___x_438_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_hugeExponent___boxed(lean_object* v_text_439_){
_start:
{
uint8_t v_res_440_; lean_object* v_r_441_; 
v_res_440_ = l_Lasm_RPC_hugeExponent(v_text_439_);
v_r_441_ = lean_box(v_res_440_);
return v_r_441_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0(lean_object* v_as_442_, lean_object* v_as_x27_443_, lean_object* v_b_444_, lean_object* v_a_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg(v_as_x27_443_, v_b_444_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___boxed(lean_object* v_as_447_, lean_object* v_as_x27_448_, lean_object* v_b_449_, lean_object* v_a_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0(v_as_447_, v_as_x27_448_, v_b_449_, v_a_450_);
lean_dec(v_as_x27_448_);
lean_dec(v_as_447_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_parseJson(lean_object* v_text_455_){
_start:
{
uint8_t v___x_456_; 
lean_inc_ref(v_text_455_);
v___x_456_ = l_Lasm_RPC_hugeExponent(v_text_455_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; 
v___x_457_ = l_Lean_Json_parse(v_text_455_);
return v___x_457_;
}
else
{
lean_object* v___x_458_; 
lean_dec_ref(v_text_455_);
v___x_458_ = ((lean_object*)(l_Lasm_RPC_parseJson___closed__1));
return v___x_458_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___redArg(lean_object* v_e_460_){
_start:
{
lean_object* v_name_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v_name_461_ = lean_ctor_get(v_e_460_, 0);
v___x_462_ = ((lean_object*)(l_Lasm_RPC_Endpoint_path___redArg___closed__0));
v___x_463_ = lean_string_append(v___x_462_, v_name_461_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___redArg___boxed(lean_object* v_e_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_464_);
lean_dec_ref(v_e_464_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path(lean_object* v_Req_466_, lean_object* v_Res_467_, lean_object* v_e_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___boxed(lean_object* v_Req_470_, lean_object* v_Res_471_, lean_object* v_e_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lasm_RPC_Endpoint_path(v_Req_470_, v_Res_471_, v_e_472_);
lean_dec_ref(v_e_472_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest___redArg(lean_object* v_inst_474_, lean_object* v_r_475_){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = lean_apply_1(v_inst_474_, v_r_475_);
v___x_477_ = l_Lean_Json_compress(v___x_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest(lean_object* v_Req_478_, lean_object* v_Res_479_, lean_object* v_inst_480_, lean_object* v_x_481_, lean_object* v_r_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Lasm_RPC_Endpoint_encodeRequest___redArg(v_inst_480_, v_r_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest___boxed(lean_object* v_Req_484_, lean_object* v_Res_485_, lean_object* v_inst_486_, lean_object* v_x_487_, lean_object* v_r_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Lasm_RPC_Endpoint_encodeRequest(v_Req_484_, v_Res_485_, v_inst_486_, v_x_487_, v_r_488_);
lean_dec_ref(v_x_487_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeRequest___redArg(lean_object* v_inst_492_, lean_object* v_e_493_, lean_object* v_body_494_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = l_Lasm_RPC_parseJson(v_body_494_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_506_; 
lean_dec_ref(v_e_493_);
lean_dec_ref(v_inst_492_);
v_a_496_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_506_ == 0)
{
v___x_498_ = v___x_495_;
v_isShared_499_ = v_isSharedCheck_506_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_495_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_506_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_500_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__0));
v___x_501_ = lean_string_append(v___x_500_, v_a_496_);
lean_dec(v_a_496_);
v___x_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_502_, 0, v___x_501_);
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v___x_502_);
v___x_504_ = v___x_498_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
else
{
lean_object* v_a_507_; lean_object* v___x_508_; 
v_a_507_ = lean_ctor_get(v___x_495_, 0);
lean_inc(v_a_507_);
lean_dec_ref_known(v___x_495_, 1);
v___x_508_ = lean_apply_1(v_inst_492_, v_a_507_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_519_; 
lean_dec_ref(v_e_493_);
v_a_509_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_519_ == 0)
{
v___x_511_ = v___x_508_;
v_isShared_512_ = v_isSharedCheck_519_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_508_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_519_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
v___x_513_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__1));
v___x_514_ = lean_string_append(v___x_513_, v_a_509_);
lean_dec(v_a_509_);
v___x_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 0, v___x_515_);
v___x_517_ = v___x_511_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_538_; 
v_a_520_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_538_ == 0)
{
v___x_522_ = v___x_508_;
v_isShared_523_ = v_isSharedCheck_538_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_508_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_538_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v_validate_524_; lean_object* v___x_526_; 
v_validate_524_ = lean_ctor_get(v_e_493_, 1);
lean_inc_ref(v_validate_524_);
lean_dec_ref(v_e_493_);
lean_inc(v_a_520_);
if (v_isShared_523_ == 0)
{
v___x_526_ = v___x_522_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_a_520_);
v___x_526_ = v_reuseFailAlloc_537_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
lean_object* v___x_527_; 
v___x_527_ = lean_apply_1(v_validate_524_, v_a_520_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_536_; 
lean_dec_ref(v___x_526_);
v_a_528_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_536_ == 0)
{
v___x_530_ = v___x_527_;
v_isShared_531_ = v_isSharedCheck_536_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_527_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_536_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_532_; lean_object* v___x_534_; 
v___x_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_532_, 0, v_a_528_);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 0, v___x_532_);
v___x_534_ = v___x_530_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_532_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
else
{
lean_dec_ref_known(v___x_527_, 1);
return v___x_526_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeRequest(lean_object* v_Req_539_, lean_object* v_Res_540_, lean_object* v_inst_541_, lean_object* v_e_542_, lean_object* v_body_543_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_Lasm_RPC_Endpoint_decodeRequest___redArg(v_inst_541_, v_e_542_, v_body_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Except_map_match__1_splitter___redArg(lean_object* v_x_545_, lean_object* v_h__1_546_, lean_object* v_h__2_547_){
_start:
{
if (lean_obj_tag(v_x_545_) == 0)
{
lean_object* v_a_548_; lean_object* v___x_549_; 
lean_dec(v_h__2_547_);
v_a_548_ = lean_ctor_get(v_x_545_, 0);
lean_inc(v_a_548_);
lean_dec_ref_known(v_x_545_, 1);
v___x_549_ = lean_apply_1(v_h__1_546_, v_a_548_);
return v___x_549_;
}
else
{
lean_object* v_a_550_; lean_object* v___x_551_; 
lean_dec(v_h__1_546_);
v_a_550_ = lean_ctor_get(v_x_545_, 0);
lean_inc(v_a_550_);
lean_dec_ref_known(v_x_545_, 1);
v___x_551_ = lean_apply_1(v_h__2_547_, v_a_550_);
return v___x_551_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Except_map_match__1_splitter(lean_object* v_00_u03b5_552_, lean_object* v_00_u03b1_553_, lean_object* v_motive_554_, lean_object* v_x_555_, lean_object* v_h__1_556_, lean_object* v_h__2_557_){
_start:
{
if (lean_obj_tag(v_x_555_) == 0)
{
lean_object* v_a_558_; lean_object* v___x_559_; 
lean_dec(v_h__2_557_);
v_a_558_ = lean_ctor_get(v_x_555_, 0);
lean_inc(v_a_558_);
lean_dec_ref_known(v_x_555_, 1);
v___x_559_ = lean_apply_1(v_h__1_556_, v_a_558_);
return v___x_559_;
}
else
{
lean_object* v_a_560_; lean_object* v___x_561_; 
lean_dec(v_h__1_556_);
v_a_560_ = lean_ctor_get(v_x_555_, 0);
lean_inc(v_a_560_);
lean_dec_ref_known(v_x_555_, 1);
v___x_561_ = lean_apply_1(v_h__2_557_, v_a_560_);
return v___x_561_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Lasm_RPC_Endpoint_decodeRequest_match__1_splitter___redArg(lean_object* v_x_562_, lean_object* v_h__1_563_, lean_object* v_h__2_564_){
_start:
{
if (lean_obj_tag(v_x_562_) == 0)
{
lean_object* v_a_565_; lean_object* v___x_566_; 
lean_dec(v_h__1_563_);
v_a_565_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_a_565_);
lean_dec_ref_known(v_x_562_, 1);
v___x_566_ = lean_apply_1(v_h__2_564_, v_a_565_);
return v___x_566_;
}
else
{
lean_object* v_a_567_; lean_object* v___x_568_; 
lean_dec(v_h__2_564_);
v_a_567_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_a_567_);
lean_dec_ref_known(v_x_562_, 1);
v___x_568_ = lean_apply_1(v_h__1_563_, v_a_567_);
return v___x_568_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Lasm_RPC_Endpoint_decodeRequest_match__1_splitter(lean_object* v_motive_569_, lean_object* v_x_570_, lean_object* v_h__1_571_, lean_object* v_h__2_572_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
lean_object* v_a_573_; lean_object* v___x_574_; 
lean_dec(v_h__1_571_);
v_a_573_ = lean_ctor_get(v_x_570_, 0);
lean_inc(v_a_573_);
lean_dec_ref_known(v_x_570_, 1);
v___x_574_ = lean_apply_1(v_h__2_572_, v_a_573_);
return v___x_574_;
}
else
{
lean_object* v_a_575_; lean_object* v___x_576_; 
lean_dec(v_h__2_572_);
v_a_575_ = lean_ctor_get(v_x_570_, 0);
lean_inc(v_a_575_);
lean_dec_ref_known(v_x_570_, 1);
v___x_576_ = lean_apply_1(v_h__1_571_, v_a_575_);
return v___x_576_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse___redArg(lean_object* v_inst_579_, lean_object* v_x_580_){
_start:
{
if (lean_obj_tag(v_x_580_) == 0)
{
lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_594_; 
lean_dec_ref(v_inst_579_);
v_a_581_ = lean_ctor_get(v_x_580_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v_x_580_);
if (v_isSharedCheck_594_ == 0)
{
v___x_583_ = v_x_580_;
v_isShared_584_ = v_isSharedCheck_594_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_dec(v_x_580_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_594_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_585_; lean_object* v___x_587_; 
v___x_585_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0));
if (v_isShared_584_ == 0)
{
lean_ctor_set_tag(v___x_583_, 3);
v___x_587_ = v___x_583_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_a_581_);
v___x_587_ = v_reuseFailAlloc_593_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_585_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = lean_box(0);
v___x_590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_588_);
lean_ctor_set(v___x_590_, 1, v___x_589_);
v___x_591_ = l_Lean_Json_mkObj(v___x_590_);
lean_dec_ref_known(v___x_590_, 2);
v___x_592_ = l_Lean_Json_compress(v___x_591_);
return v___x_592_;
}
}
}
else
{
lean_object* v_a_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v_a_595_ = lean_ctor_get(v_x_580_, 0);
lean_inc(v_a_595_);
lean_dec_ref_known(v_x_580_, 1);
v___x_596_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1));
v___x_597_ = lean_apply_1(v_inst_579_, v_a_595_);
v___x_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_596_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
v___x_599_ = lean_box(0);
v___x_600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_598_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
v___x_601_ = l_Lean_Json_mkObj(v___x_600_);
lean_dec_ref_known(v___x_600_, 2);
v___x_602_ = l_Lean_Json_compress(v___x_601_);
return v___x_602_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse(lean_object* v_Req_603_, lean_object* v_Res_604_, lean_object* v_inst_605_, lean_object* v_x_606_, lean_object* v_x_607_){
_start:
{
lean_object* v___x_608_; 
v___x_608_ = l_Lasm_RPC_Endpoint_encodeResponse___redArg(v_inst_605_, v_x_607_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse___boxed(lean_object* v_Req_609_, lean_object* v_Res_610_, lean_object* v_inst_611_, lean_object* v_x_612_, lean_object* v_x_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lasm_RPC_Endpoint_encodeResponse(v_Req_609_, v_Res_610_, v_inst_611_, v_x_612_, v_x_613_);
lean_dec_ref(v_x_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse___redArg(lean_object* v_inst_621_, lean_object* v_status_622_, lean_object* v_body_623_){
_start:
{
lean_object* v___x_627_; 
lean_inc_ref(v_body_623_);
v___x_627_ = l_Lasm_RPC_parseJson(v_body_623_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_640_; 
lean_dec_ref(v_inst_621_);
v_a_628_ = lean_ctor_get(v___x_627_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_640_ == 0)
{
v___x_630_ = v___x_627_;
v_isShared_631_ = v_isSharedCheck_640_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_627_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_640_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_632_; uint8_t v___x_633_; 
v___x_632_ = lean_unsigned_to_nat(200u);
v___x_633_ = lean_nat_dec_le(v___x_632_, v_status_622_);
if (v___x_633_ == 0)
{
lean_del_object(v___x_630_);
lean_dec(v_a_628_);
goto v___jp_624_;
}
else
{
lean_object* v___x_634_; uint8_t v___x_635_; 
v___x_634_ = lean_unsigned_to_nat(300u);
v___x_635_ = lean_nat_dec_lt(v_status_622_, v___x_634_);
if (v___x_635_ == 0)
{
lean_del_object(v___x_630_);
lean_dec(v_a_628_);
goto v___jp_624_;
}
else
{
lean_object* v___x_636_; lean_object* v___x_638_; 
lean_dec_ref(v_body_623_);
lean_dec(v_status_622_);
v___x_636_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_636_, 0, v_a_628_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 0, v___x_636_);
v___x_638_ = v___x_630_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_636_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
}
else
{
lean_object* v_a_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
lean_dec_ref(v_body_623_);
v_a_641_ = lean_ctor_get(v___x_627_, 0);
lean_inc_n(v_a_641_, 2);
lean_dec_ref_known(v___x_627_, 1);
v___x_642_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1));
v___x_643_ = l_Lean_Json_getObjVal_x3f(v_a_641_, v___x_642_);
if (lean_obj_tag(v___x_643_) == 1)
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_668_; 
lean_dec(v_a_641_);
lean_dec(v_status_622_);
v_a_644_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_668_ == 0)
{
v___x_646_ = v___x_643_;
v_isShared_647_ = v_isSharedCheck_668_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_643_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_668_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_648_; 
v___x_648_ = lean_apply_1(v_inst_621_, v_a_644_);
if (lean_obj_tag(v___x_648_) == 0)
{
lean_object* v_a_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_659_; 
v_a_649_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_659_ == 0)
{
v___x_651_ = v___x_648_;
v_isShared_652_ = v_isSharedCheck_659_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_a_649_);
lean_dec(v___x_648_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_659_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_654_; 
if (v_isShared_647_ == 0)
{
lean_ctor_set_tag(v___x_646_, 2);
lean_ctor_set(v___x_646_, 0, v_a_649_);
v___x_654_ = v___x_646_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_649_);
v___x_654_ = v_reuseFailAlloc_658_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v___x_656_; 
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 0, v___x_654_);
v___x_656_ = v___x_651_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_654_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
else
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_667_; 
lean_del_object(v___x_646_);
v_a_660_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_667_ == 0)
{
v___x_662_ = v___x_648_;
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_648_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_660_);
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
else
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
lean_dec_ref(v___x_643_);
lean_dec_ref(v_inst_621_);
v___x_669_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__0));
v___x_670_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0));
v___x_671_ = l_Lean_Json_getObjValAs_x3f___redArg(v_a_641_, v___x_669_, v___x_670_);
if (lean_obj_tag(v___x_671_) == 1)
{
lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_686_; 
v_a_672_ = lean_ctor_get(v___x_671_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_686_ == 0)
{
v___x_674_ = v___x_671_;
v_isShared_675_ = v_isSharedCheck_686_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_dec(v___x_671_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_686_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_676_; uint8_t v___x_677_; 
v___x_676_ = lean_unsigned_to_nat(400u);
v___x_677_ = lean_nat_dec_eq(v_status_622_, v___x_676_);
if (v___x_677_ == 0)
{
lean_object* v___x_678_; lean_object* v___x_680_; 
v___x_678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_678_, 0, v_status_622_);
lean_ctor_set(v___x_678_, 1, v_a_672_);
if (v_isShared_675_ == 0)
{
lean_ctor_set_tag(v___x_674_, 0);
lean_ctor_set(v___x_674_, 0, v___x_678_);
v___x_680_ = v___x_674_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_678_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
else
{
lean_object* v___x_682_; lean_object* v___x_684_; 
lean_dec(v_status_622_);
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v_a_672_);
if (v_isShared_675_ == 0)
{
lean_ctor_set_tag(v___x_674_, 0);
lean_ctor_set(v___x_674_, 0, v___x_682_);
v___x_684_ = v___x_674_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
else
{
lean_object* v___x_687_; 
lean_dec_ref(v___x_671_);
lean_dec(v_status_622_);
v___x_687_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__3));
return v___x_687_;
}
}
}
v___jp_624_:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_625_, 0, v_status_622_);
lean_ctor_set(v___x_625_, 1, v_body_623_);
v___x_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
return v___x_626_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse(lean_object* v_Req_688_, lean_object* v_Res_689_, lean_object* v_inst_690_, lean_object* v_x_691_, lean_object* v_status_692_, lean_object* v_body_693_){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = l_Lasm_RPC_Endpoint_decodeResponse___redArg(v_inst_690_, v_status_692_, v_body_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse___boxed(lean_object* v_Req_695_, lean_object* v_Res_696_, lean_object* v_inst_697_, lean_object* v_x_698_, lean_object* v_status_699_, lean_object* v_body_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lasm_RPC_Endpoint_decodeResponse(v_Req_695_, v_Res_696_, v_inst_697_, v_x_698_, v_status_699_, v_body_700_);
lean_dec_ref(v_x_698_);
return v_res_701_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_Data_Json_Basic(uint8_t builtin);
lean_object* initialize_Lean_Data_Json_Parser(uint8_t builtin);
lean_object* initialize_Lean_Data_Json_Printer(uint8_t builtin);
lean_object* initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Deriving_FromToJson(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_RPC_Core(uint8_t builtin) {
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
res = initialize_Lean_Data_Json_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_Printer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_FromToJson(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
