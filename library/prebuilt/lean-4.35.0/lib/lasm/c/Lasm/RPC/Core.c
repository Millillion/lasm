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
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_data(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
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
static lean_once_cell_t l_Lasm_RPC_zerosAsZero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_zerosAsZero___closed__0;
static lean_once_cell_t l_Lasm_RPC_zerosAsZero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_zerosAsZero___closed__1;
static lean_once_cell_t l_Lasm_RPC_zerosAsZero___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_zerosAsZero___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_zerosAsZero_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_zerosAsZero(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_RPC_zerosAsZero_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_zerosAsZero_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_RPC_zerosAsZero_spec__1(lean_object*, lean_object*);
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
static lean_object* _init_l_Lasm_RPC_zerosAsZero___closed__0(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_unsigned_to_nat(0u);
v___x_453_ = lean_nat_to_int(v___x_452_);
return v___x_453_;
}
}
static lean_object* _init_l_Lasm_RPC_zerosAsZero___closed__1(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_454_ = lean_unsigned_to_nat(0u);
v___x_455_ = lean_obj_once(&l_Lasm_RPC_zerosAsZero___closed__0, &l_Lasm_RPC_zerosAsZero___closed__0_once, _init_l_Lasm_RPC_zerosAsZero___closed__0);
v___x_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
lean_ctor_set(v___x_456_, 1, v___x_454_);
return v___x_456_;
}
}
static lean_object* _init_l_Lasm_RPC_zerosAsZero___closed__2(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = lean_obj_once(&l_Lasm_RPC_zerosAsZero___closed__1, &l_Lasm_RPC_zerosAsZero___closed__1_once, _init_l_Lasm_RPC_zerosAsZero___closed__1);
v___x_458_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_zerosAsZero_spec__0(size_t v_sz_459_, size_t v_i_460_, lean_object* v_bs_461_){
_start:
{
uint8_t v___x_462_; 
v___x_462_ = lean_usize_dec_lt(v_i_460_, v_sz_459_);
if (v___x_462_ == 0)
{
return v_bs_461_;
}
else
{
lean_object* v_v_463_; lean_object* v___x_464_; lean_object* v_bs_x27_465_; lean_object* v___x_466_; size_t v___x_467_; size_t v___x_468_; lean_object* v___x_469_; 
v_v_463_ = lean_array_uget(v_bs_461_, v_i_460_);
v___x_464_ = lean_unsigned_to_nat(0u);
v_bs_x27_465_ = lean_array_uset(v_bs_461_, v_i_460_, v___x_464_);
v___x_466_ = l_Lasm_RPC_zerosAsZero(v_v_463_);
v___x_467_ = ((size_t)1ULL);
v___x_468_ = lean_usize_add(v_i_460_, v___x_467_);
v___x_469_ = lean_array_uset(v_bs_x27_465_, v_i_460_, v___x_466_);
v_i_460_ = v___x_468_;
v_bs_461_ = v___x_469_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_zerosAsZero(lean_object* v_x_471_){
_start:
{
switch(lean_obj_tag(v_x_471_))
{
case 2:
{
lean_object* v_n_472_; lean_object* v_mantissa_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
v_n_472_ = lean_ctor_get(v_x_471_, 0);
v_mantissa_473_ = lean_ctor_get(v_n_472_, 0);
v___x_474_ = lean_obj_once(&l_Lasm_RPC_zerosAsZero___closed__0, &l_Lasm_RPC_zerosAsZero___closed__0_once, _init_l_Lasm_RPC_zerosAsZero___closed__0);
v___x_475_ = lean_int_dec_eq(v_mantissa_473_, v___x_474_);
if (v___x_475_ == 0)
{
return v_x_471_;
}
else
{
lean_object* v___x_476_; 
lean_dec_ref_known(v_x_471_, 1);
v___x_476_ = lean_obj_once(&l_Lasm_RPC_zerosAsZero___closed__2, &l_Lasm_RPC_zerosAsZero___closed__2_once, _init_l_Lasm_RPC_zerosAsZero___closed__2);
return v___x_476_;
}
}
case 4:
{
lean_object* v_elems_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_487_; 
v_elems_477_ = lean_ctor_get(v_x_471_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v_x_471_);
if (v_isSharedCheck_487_ == 0)
{
v___x_479_ = v_x_471_;
v_isShared_480_ = v_isSharedCheck_487_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_elems_477_);
lean_dec(v_x_471_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_487_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
size_t v_sz_481_; size_t v___x_482_; lean_object* v___x_483_; lean_object* v___x_485_; 
v_sz_481_ = lean_array_size(v_elems_477_);
v___x_482_ = ((size_t)0ULL);
v___x_483_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_zerosAsZero_spec__0(v_sz_481_, v___x_482_, v_elems_477_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 0, v___x_483_);
v___x_485_ = v___x_479_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_483_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
case 5:
{
lean_object* v_kvPairs_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_496_; 
v_kvPairs_488_ = lean_ctor_get(v_x_471_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v_x_471_);
if (v_isSharedCheck_496_ == 0)
{
v___x_490_ = v_x_471_;
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_kvPairs_488_);
lean_dec(v_x_471_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_492_; lean_object* v___x_494_; 
lean_inc(v_kvPairs_488_);
v___x_492_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_RPC_zerosAsZero_spec__1_spec__1(v_kvPairs_488_, v_kvPairs_488_);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v___x_492_);
v___x_494_ = v___x_490_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(5, 1, 0);
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
default: 
{
return v_x_471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_RPC_zerosAsZero_spec__1_spec__1(lean_object* v_init_497_, lean_object* v_x_498_){
_start:
{
if (lean_obj_tag(v_x_498_) == 0)
{
lean_object* v_k_499_; lean_object* v_v_500_; lean_object* v_l_501_; lean_object* v_r_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v_k_499_ = lean_ctor_get(v_x_498_, 1);
lean_inc(v_k_499_);
v_v_500_ = lean_ctor_get(v_x_498_, 2);
lean_inc(v_v_500_);
v_l_501_ = lean_ctor_get(v_x_498_, 3);
lean_inc(v_l_501_);
v_r_502_ = lean_ctor_get(v_x_498_, 4);
lean_inc(v_r_502_);
lean_dec_ref_known(v_x_498_, 5);
v___x_503_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_RPC_zerosAsZero_spec__1_spec__1(v_init_497_, v_l_501_);
v___x_504_ = l_Lasm_RPC_zerosAsZero(v_v_500_);
v___x_505_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg(v_k_499_, v___x_504_, v___x_503_);
v_init_497_ = v___x_505_;
v_x_498_ = v_r_502_;
goto _start;
}
else
{
return v_init_497_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_zerosAsZero_spec__0___boxed(lean_object* v_sz_507_, lean_object* v_i_508_, lean_object* v_bs_509_){
_start:
{
size_t v_sz_boxed_510_; size_t v_i_boxed_511_; lean_object* v_res_512_; 
v_sz_boxed_510_ = lean_unbox_usize(v_sz_507_);
lean_dec(v_sz_507_);
v_i_boxed_511_ = lean_unbox_usize(v_i_508_);
lean_dec(v_i_508_);
v_res_512_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_zerosAsZero_spec__0(v_sz_boxed_510_, v_i_boxed_511_, v_bs_509_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_RPC_zerosAsZero_spec__1(lean_object* v_init_513_, lean_object* v_t_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_RPC_zerosAsZero_spec__1_spec__1(v_init_513_, v_t_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_parseJson(lean_object* v_text_519_){
_start:
{
uint8_t v___x_520_; 
lean_inc_ref(v_text_519_);
v___x_520_ = l_Lasm_RPC_hugeExponent(v_text_519_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; 
v___x_521_ = l_Lean_Json_parse(v_text_519_);
if (lean_obj_tag(v___x_521_) == 0)
{
return v___x_521_;
}
else
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_530_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_530_ == 0)
{
v___x_524_ = v___x_521_;
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_521_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_526_ = l_Lasm_RPC_zerosAsZero(v_a_522_);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v___x_526_);
v___x_528_ = v___x_524_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_526_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
else
{
lean_object* v___x_531_; 
lean_dec_ref(v_text_519_);
v___x_531_ = ((lean_object*)(l_Lasm_RPC_parseJson___closed__1));
return v___x_531_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___redArg(lean_object* v_e_533_){
_start:
{
lean_object* v_name_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v_name_534_ = lean_ctor_get(v_e_533_, 0);
v___x_535_ = ((lean_object*)(l_Lasm_RPC_Endpoint_path___redArg___closed__0));
v___x_536_ = lean_string_append(v___x_535_, v_name_534_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___redArg___boxed(lean_object* v_e_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_537_);
lean_dec_ref(v_e_537_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path(lean_object* v_Req_539_, lean_object* v_Res_540_, lean_object* v_e_541_){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___boxed(lean_object* v_Req_543_, lean_object* v_Res_544_, lean_object* v_e_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lasm_RPC_Endpoint_path(v_Req_543_, v_Res_544_, v_e_545_);
lean_dec_ref(v_e_545_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest___redArg(lean_object* v_inst_547_, lean_object* v_r_548_){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_apply_1(v_inst_547_, v_r_548_);
v___x_550_ = l_Lean_Json_compress(v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest(lean_object* v_Req_551_, lean_object* v_Res_552_, lean_object* v_inst_553_, lean_object* v_x_554_, lean_object* v_r_555_){
_start:
{
lean_object* v___x_556_; 
v___x_556_ = l_Lasm_RPC_Endpoint_encodeRequest___redArg(v_inst_553_, v_r_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest___boxed(lean_object* v_Req_557_, lean_object* v_Res_558_, lean_object* v_inst_559_, lean_object* v_x_560_, lean_object* v_r_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lasm_RPC_Endpoint_encodeRequest(v_Req_557_, v_Res_558_, v_inst_559_, v_x_560_, v_r_561_);
lean_dec_ref(v_x_560_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeRequest___redArg(lean_object* v_inst_565_, lean_object* v_e_566_, lean_object* v_body_567_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = l_Lasm_RPC_parseJson(v_body_567_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_579_; 
lean_dec_ref(v_e_566_);
lean_dec_ref(v_inst_565_);
v_a_569_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_579_ == 0)
{
v___x_571_ = v___x_568_;
v_isShared_572_ = v_isSharedCheck_579_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_568_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_579_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_577_; 
v___x_573_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__0));
v___x_574_ = lean_string_append(v___x_573_, v_a_569_);
lean_dec(v_a_569_);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v___x_575_);
v___x_577_ = v___x_571_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_575_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
else
{
lean_object* v_a_580_; lean_object* v___x_581_; 
v_a_580_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_a_580_);
lean_dec_ref_known(v___x_568_, 1);
v___x_581_ = lean_apply_1(v_inst_565_, v_a_580_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_592_; 
lean_dec_ref(v_e_566_);
v_a_582_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_592_ == 0)
{
v___x_584_ = v___x_581_;
v_isShared_585_ = v_isSharedCheck_592_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_581_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_592_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_590_; 
v___x_586_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__1));
v___x_587_ = lean_string_append(v___x_586_, v_a_582_);
lean_dec(v_a_582_);
v___x_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 0, v___x_588_);
v___x_590_ = v___x_584_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_588_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
else
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_611_; 
v_a_593_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_611_ == 0)
{
v___x_595_ = v___x_581_;
v_isShared_596_ = v_isSharedCheck_611_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_581_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_611_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v_validate_597_; lean_object* v___x_599_; 
v_validate_597_ = lean_ctor_get(v_e_566_, 1);
lean_inc_ref(v_validate_597_);
lean_dec_ref(v_e_566_);
lean_inc(v_a_593_);
if (v_isShared_596_ == 0)
{
v___x_599_ = v___x_595_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_593_);
v___x_599_ = v_reuseFailAlloc_610_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
lean_object* v___x_600_; 
v___x_600_ = lean_apply_1(v_validate_597_, v_a_593_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_609_; 
lean_dec_ref(v___x_599_);
v_a_601_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_609_ == 0)
{
v___x_603_ = v___x_600_;
v_isShared_604_ = v_isSharedCheck_609_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_600_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_609_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_605_; lean_object* v___x_607_; 
v___x_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_605_, 0, v_a_601_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v___x_605_);
v___x_607_ = v___x_603_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_605_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
else
{
lean_dec_ref_known(v___x_600_, 1);
return v___x_599_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeRequest(lean_object* v_Req_612_, lean_object* v_Res_613_, lean_object* v_inst_614_, lean_object* v_e_615_, lean_object* v_body_616_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = l_Lasm_RPC_Endpoint_decodeRequest___redArg(v_inst_614_, v_e_615_, v_body_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Except_map_match__1_splitter___redArg(lean_object* v_x_618_, lean_object* v_h__1_619_, lean_object* v_h__2_620_){
_start:
{
if (lean_obj_tag(v_x_618_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_622_; 
lean_dec(v_h__2_620_);
v_a_621_ = lean_ctor_get(v_x_618_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v_x_618_, 1);
v___x_622_ = lean_apply_1(v_h__1_619_, v_a_621_);
return v___x_622_;
}
else
{
lean_object* v_a_623_; lean_object* v___x_624_; 
lean_dec(v_h__1_619_);
v_a_623_ = lean_ctor_get(v_x_618_, 0);
lean_inc(v_a_623_);
lean_dec_ref_known(v_x_618_, 1);
v___x_624_ = lean_apply_1(v_h__2_620_, v_a_623_);
return v___x_624_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Except_map_match__1_splitter(lean_object* v_00_u03b5_625_, lean_object* v_00_u03b1_626_, lean_object* v_motive_627_, lean_object* v_x_628_, lean_object* v_h__1_629_, lean_object* v_h__2_630_){
_start:
{
if (lean_obj_tag(v_x_628_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_632_; 
lean_dec(v_h__2_630_);
v_a_631_ = lean_ctor_get(v_x_628_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v_x_628_, 1);
v___x_632_ = lean_apply_1(v_h__1_629_, v_a_631_);
return v___x_632_;
}
else
{
lean_object* v_a_633_; lean_object* v___x_634_; 
lean_dec(v_h__1_629_);
v_a_633_ = lean_ctor_get(v_x_628_, 0);
lean_inc(v_a_633_);
lean_dec_ref_known(v_x_628_, 1);
v___x_634_ = lean_apply_1(v_h__2_630_, v_a_633_);
return v___x_634_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Lasm_RPC_Endpoint_decodeRequest_match__1_splitter___redArg(lean_object* v_x_635_, lean_object* v_h__1_636_, lean_object* v_h__2_637_){
_start:
{
if (lean_obj_tag(v_x_635_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_639_; 
lean_dec(v_h__1_636_);
v_a_638_ = lean_ctor_get(v_x_635_, 0);
lean_inc(v_a_638_);
lean_dec_ref_known(v_x_635_, 1);
v___x_639_ = lean_apply_1(v_h__2_637_, v_a_638_);
return v___x_639_;
}
else
{
lean_object* v_a_640_; lean_object* v___x_641_; 
lean_dec(v_h__2_637_);
v_a_640_ = lean_ctor_get(v_x_635_, 0);
lean_inc(v_a_640_);
lean_dec_ref_known(v_x_635_, 1);
v___x_641_ = lean_apply_1(v_h__1_636_, v_a_640_);
return v___x_641_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Lasm_RPC_Endpoint_decodeRequest_match__1_splitter(lean_object* v_motive_642_, lean_object* v_x_643_, lean_object* v_h__1_644_, lean_object* v_h__2_645_){
_start:
{
if (lean_obj_tag(v_x_643_) == 0)
{
lean_object* v_a_646_; lean_object* v___x_647_; 
lean_dec(v_h__1_644_);
v_a_646_ = lean_ctor_get(v_x_643_, 0);
lean_inc(v_a_646_);
lean_dec_ref_known(v_x_643_, 1);
v___x_647_ = lean_apply_1(v_h__2_645_, v_a_646_);
return v___x_647_;
}
else
{
lean_object* v_a_648_; lean_object* v___x_649_; 
lean_dec(v_h__2_645_);
v_a_648_ = lean_ctor_get(v_x_643_, 0);
lean_inc(v_a_648_);
lean_dec_ref_known(v_x_643_, 1);
v___x_649_ = lean_apply_1(v_h__1_644_, v_a_648_);
return v___x_649_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse___redArg(lean_object* v_inst_652_, lean_object* v_x_653_){
_start:
{
if (lean_obj_tag(v_x_653_) == 0)
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_667_; 
lean_dec_ref(v_inst_652_);
v_a_654_ = lean_ctor_get(v_x_653_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v_x_653_);
if (v_isSharedCheck_667_ == 0)
{
v___x_656_ = v_x_653_;
v_isShared_657_ = v_isSharedCheck_667_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v_x_653_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_667_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_658_; lean_object* v___x_660_; 
v___x_658_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0));
if (v_isShared_657_ == 0)
{
lean_ctor_set_tag(v___x_656_, 3);
v___x_660_ = v___x_656_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_654_);
v___x_660_ = v_reuseFailAlloc_666_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_658_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
v___x_662_ = lean_box(0);
v___x_663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_661_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v___x_664_ = l_Lean_Json_mkObj(v___x_663_);
lean_dec_ref_known(v___x_663_, 2);
v___x_665_ = l_Lean_Json_compress(v___x_664_);
return v___x_665_;
}
}
}
else
{
lean_object* v_a_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v_a_668_ = lean_ctor_get(v_x_653_, 0);
lean_inc(v_a_668_);
lean_dec_ref_known(v_x_653_, 1);
v___x_669_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1));
v___x_670_ = lean_apply_1(v_inst_652_, v_a_668_);
v___x_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_669_);
lean_ctor_set(v___x_671_, 1, v___x_670_);
v___x_672_ = lean_box(0);
v___x_673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = l_Lean_Json_mkObj(v___x_673_);
lean_dec_ref_known(v___x_673_, 2);
v___x_675_ = l_Lean_Json_compress(v___x_674_);
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse(lean_object* v_Req_676_, lean_object* v_Res_677_, lean_object* v_inst_678_, lean_object* v_x_679_, lean_object* v_x_680_){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = l_Lasm_RPC_Endpoint_encodeResponse___redArg(v_inst_678_, v_x_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse___boxed(lean_object* v_Req_682_, lean_object* v_Res_683_, lean_object* v_inst_684_, lean_object* v_x_685_, lean_object* v_x_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_Lasm_RPC_Endpoint_encodeResponse(v_Req_682_, v_Res_683_, v_inst_684_, v_x_685_, v_x_686_);
lean_dec_ref(v_x_685_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse___redArg(lean_object* v_inst_694_, lean_object* v_status_695_, lean_object* v_body_696_){
_start:
{
lean_object* v___x_700_; 
lean_inc_ref(v_body_696_);
v___x_700_ = l_Lasm_RPC_parseJson(v_body_696_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_713_; 
lean_dec_ref(v_inst_694_);
v_a_701_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_713_ == 0)
{
v___x_703_ = v___x_700_;
v_isShared_704_ = v_isSharedCheck_713_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_700_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_713_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; uint8_t v___x_706_; 
v___x_705_ = lean_unsigned_to_nat(200u);
v___x_706_ = lean_nat_dec_le(v___x_705_, v_status_695_);
if (v___x_706_ == 0)
{
lean_del_object(v___x_703_);
lean_dec(v_a_701_);
goto v___jp_697_;
}
else
{
lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_707_ = lean_unsigned_to_nat(300u);
v___x_708_ = lean_nat_dec_lt(v_status_695_, v___x_707_);
if (v___x_708_ == 0)
{
lean_del_object(v___x_703_);
lean_dec(v_a_701_);
goto v___jp_697_;
}
else
{
lean_object* v___x_709_; lean_object* v___x_711_; 
lean_dec_ref(v_body_696_);
lean_dec(v_status_695_);
v___x_709_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_709_, 0, v_a_701_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v___x_709_);
v___x_711_ = v___x_703_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_709_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
}
}
}
else
{
lean_object* v_a_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
lean_dec_ref(v_body_696_);
v_a_714_ = lean_ctor_get(v___x_700_, 0);
lean_inc_n(v_a_714_, 2);
lean_dec_ref_known(v___x_700_, 1);
v___x_715_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1));
v___x_716_ = l_Lean_Json_getObjVal_x3f(v_a_714_, v___x_715_);
if (lean_obj_tag(v___x_716_) == 1)
{
lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_741_; 
lean_dec(v_a_714_);
lean_dec(v_status_695_);
v_a_717_ = lean_ctor_get(v___x_716_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_716_);
if (v_isSharedCheck_741_ == 0)
{
v___x_719_ = v___x_716_;
v_isShared_720_ = v_isSharedCheck_741_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_a_717_);
lean_dec(v___x_716_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_741_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_721_; 
v___x_721_ = lean_apply_1(v_inst_694_, v_a_717_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_732_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_732_ == 0)
{
v___x_724_ = v___x_721_;
v_isShared_725_ = v_isSharedCheck_732_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_721_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_732_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set_tag(v___x_719_, 2);
lean_ctor_set(v___x_719_, 0, v_a_722_);
v___x_727_ = v___x_719_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_731_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
lean_object* v___x_729_; 
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 0, v___x_727_);
v___x_729_ = v___x_724_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v___x_727_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
else
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_del_object(v___x_719_);
v_a_733_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_721_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_721_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
}
else
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
lean_dec_ref(v___x_716_);
lean_dec_ref(v_inst_694_);
v___x_742_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__0));
v___x_743_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0));
v___x_744_ = l_Lean_Json_getObjValAs_x3f___redArg(v_a_714_, v___x_742_, v___x_743_);
if (lean_obj_tag(v___x_744_) == 1)
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_759_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_759_ == 0)
{
v___x_747_ = v___x_744_;
v_isShared_748_ = v_isSharedCheck_759_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_744_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_759_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_749_; uint8_t v___x_750_; 
v___x_749_ = lean_unsigned_to_nat(400u);
v___x_750_ = lean_nat_dec_eq(v_status_695_, v___x_749_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; lean_object* v___x_753_; 
v___x_751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_751_, 0, v_status_695_);
lean_ctor_set(v___x_751_, 1, v_a_745_);
if (v_isShared_748_ == 0)
{
lean_ctor_set_tag(v___x_747_, 0);
lean_ctor_set(v___x_747_, 0, v___x_751_);
v___x_753_ = v___x_747_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_751_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
else
{
lean_object* v___x_755_; lean_object* v___x_757_; 
lean_dec(v_status_695_);
v___x_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_755_, 0, v_a_745_);
if (v_isShared_748_ == 0)
{
lean_ctor_set_tag(v___x_747_, 0);
lean_ctor_set(v___x_747_, 0, v___x_755_);
v___x_757_ = v___x_747_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_755_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
else
{
lean_object* v___x_760_; 
lean_dec_ref(v___x_744_);
lean_dec(v_status_695_);
v___x_760_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__3));
return v___x_760_;
}
}
}
v___jp_697_:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_698_, 0, v_status_695_);
lean_ctor_set(v___x_698_, 1, v_body_696_);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse(lean_object* v_Req_761_, lean_object* v_Res_762_, lean_object* v_inst_763_, lean_object* v_x_764_, lean_object* v_status_765_, lean_object* v_body_766_){
_start:
{
lean_object* v___x_767_; 
v___x_767_ = l_Lasm_RPC_Endpoint_decodeResponse___redArg(v_inst_763_, v_status_765_, v_body_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse___boxed(lean_object* v_Req_768_, lean_object* v_Res_769_, lean_object* v_inst_770_, lean_object* v_x_771_, lean_object* v_status_772_, lean_object* v_body_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lasm_RPC_Endpoint_decodeResponse(v_Req_768_, v_Res_769_, v_inst_770_, v_x_771_, v_status_772_, v_body_773_);
lean_dec_ref(v_x_771_);
return v_res_774_;
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
