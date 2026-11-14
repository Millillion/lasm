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
lean_object* l_String_toListImpl(lean_object*);
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
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lasm_RPC_Error_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 1)
{
lean_object* v_status_7_; lean_object* v_message_8_; lean_object* v___x_9_; 
v_status_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_status_7_);
v_message_8_ = lean_ctor_get(v_t_5_, 1);
lean_inc_ref(v_message_8_);
lean_dec_ref_known(v_t_5_, 2);
v___x_9_ = lean_apply_2(v_k_6_, v_status_7_, v_message_8_);
return v___x_9_;
}
else
{
lean_object* v_message_10_; lean_object* v___x_11_; 
v_message_10_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_message_10_);
lean_dec_ref(v_t_5_);
v___x_11_ = lean_apply_1(v_k_6_, v_message_10_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lasm_RPC_Error_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_invalid_elim___redArg(lean_object* v_t_24_, lean_object* v_invalid_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_24_, v_invalid_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_invalid_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_invalid_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_28_, v_invalid_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_failed_elim___redArg(lean_object* v_t_32_, lean_object* v_failed_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_32_, v_failed_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_failed_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_failed_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_36_, v_failed_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_decode_elim___redArg(lean_object* v_t_40_, lean_object* v_decode_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_40_, v_decode_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_decode_elim(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_decode_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_44_, v_decode_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_network_elim___redArg(lean_object* v_t_48_, lean_object* v_network_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_48_, v_network_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_network_elim(lean_object* v_motive_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_network_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lasm_RPC_Error_ctorElim___redArg(v_t_52_, v_network_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Lasm_RPC_instReprError_repr___closed__3(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_unsigned_to_nat(2u);
v___x_63_ = lean_nat_to_int(v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l_Lasm_RPC_instReprError_repr___closed__4(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_unsigned_to_nat(1u);
v___x_65_ = lean_nat_to_int(v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_instReprError_repr(lean_object* v_x_84_, lean_object* v_prec_85_){
_start:
{
switch(lean_obj_tag(v_x_84_))
{
case 0:
{
lean_object* v_message_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_106_; 
v_message_86_ = lean_ctor_get(v_x_84_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v_x_84_);
if (v_isSharedCheck_106_ == 0)
{
v___x_88_ = v_x_84_;
v_isShared_89_ = v_isSharedCheck_106_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_message_86_);
lean_dec(v_x_84_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_106_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___y_91_; lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_102_ = lean_unsigned_to_nat(1024u);
v___x_103_ = lean_nat_dec_le(v___x_102_, v_prec_85_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; 
v___x_104_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__3, &l_Lasm_RPC_instReprError_repr___closed__3_once, _init_l_Lasm_RPC_instReprError_repr___closed__3);
v___y_91_ = v___x_104_;
goto v___jp_90_;
}
else
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__4, &l_Lasm_RPC_instReprError_repr___closed__4_once, _init_l_Lasm_RPC_instReprError_repr___closed__4);
v___y_91_ = v___x_105_;
goto v___jp_90_;
}
v___jp_90_:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_95_; 
v___x_92_ = ((lean_object*)(l_Lasm_RPC_instReprError_repr___closed__2));
v___x_93_ = l_String_quote(v_message_86_);
if (v_isShared_89_ == 0)
{
lean_ctor_set_tag(v___x_88_, 3);
lean_ctor_set(v___x_88_, 0, v___x_93_);
v___x_95_ = v___x_88_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_93_);
v___x_95_ = v_reuseFailAlloc_101_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
lean_object* v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_96_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_92_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
lean_inc(v___y_91_);
v___x_97_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_97_, 0, v___y_91_);
lean_ctor_set(v___x_97_, 1, v___x_96_);
v___x_98_ = 0;
v___x_99_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_99_, 0, v___x_97_);
lean_ctor_set_uint8(v___x_99_, sizeof(void*)*1, v___x_98_);
v___x_100_ = l_Repr_addAppParen(v___x_99_, v_prec_85_);
return v___x_100_;
}
}
}
}
case 1:
{
lean_object* v_status_107_; lean_object* v_message_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_133_; 
v_status_107_ = lean_ctor_get(v_x_84_, 0);
v_message_108_ = lean_ctor_get(v_x_84_, 1);
v_isSharedCheck_133_ = !lean_is_exclusive(v_x_84_);
if (v_isSharedCheck_133_ == 0)
{
v___x_110_ = v_x_84_;
v_isShared_111_ = v_isSharedCheck_133_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_message_108_);
lean_inc(v_status_107_);
lean_dec(v_x_84_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_133_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___y_113_; lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_129_ = lean_unsigned_to_nat(1024u);
v___x_130_ = lean_nat_dec_le(v___x_129_, v_prec_85_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; 
v___x_131_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__3, &l_Lasm_RPC_instReprError_repr___closed__3_once, _init_l_Lasm_RPC_instReprError_repr___closed__3);
v___y_113_ = v___x_131_;
goto v___jp_112_;
}
else
{
lean_object* v___x_132_; 
v___x_132_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__4, &l_Lasm_RPC_instReprError_repr___closed__4_once, _init_l_Lasm_RPC_instReprError_repr___closed__4);
v___y_113_ = v___x_132_;
goto v___jp_112_;
}
v___jp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_119_; 
v___x_114_ = lean_box(1);
v___x_115_ = ((lean_object*)(l_Lasm_RPC_instReprError_repr___closed__7));
v___x_116_ = l_Nat_reprFast(v_status_107_);
v___x_117_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
if (v_isShared_111_ == 0)
{
lean_ctor_set_tag(v___x_110_, 5);
lean_ctor_set(v___x_110_, 1, v___x_117_);
lean_ctor_set(v___x_110_, 0, v___x_115_);
v___x_119_ = v___x_110_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_115_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v___x_117_);
v___x_119_ = v_reuseFailAlloc_128_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_120_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v___x_114_);
v___x_121_ = l_String_quote(v_message_108_);
v___x_122_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
v___x_123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_120_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
lean_inc(v___y_113_);
v___x_124_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_124_, 0, v___y_113_);
lean_ctor_set(v___x_124_, 1, v___x_123_);
v___x_125_ = 0;
v___x_126_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_126_, 0, v___x_124_);
lean_ctor_set_uint8(v___x_126_, sizeof(void*)*1, v___x_125_);
v___x_127_ = l_Repr_addAppParen(v___x_126_, v_prec_85_);
return v___x_127_;
}
}
}
}
case 2:
{
lean_object* v_message_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_154_; 
v_message_134_ = lean_ctor_get(v_x_84_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v_x_84_);
if (v_isSharedCheck_154_ == 0)
{
v___x_136_ = v_x_84_;
v_isShared_137_ = v_isSharedCheck_154_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_message_134_);
lean_dec(v_x_84_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_154_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___y_139_; lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_150_ = lean_unsigned_to_nat(1024u);
v___x_151_ = lean_nat_dec_le(v___x_150_, v_prec_85_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; 
v___x_152_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__3, &l_Lasm_RPC_instReprError_repr___closed__3_once, _init_l_Lasm_RPC_instReprError_repr___closed__3);
v___y_139_ = v___x_152_;
goto v___jp_138_;
}
else
{
lean_object* v___x_153_; 
v___x_153_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__4, &l_Lasm_RPC_instReprError_repr___closed__4_once, _init_l_Lasm_RPC_instReprError_repr___closed__4);
v___y_139_ = v___x_153_;
goto v___jp_138_;
}
v___jp_138_:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_143_; 
v___x_140_ = ((lean_object*)(l_Lasm_RPC_instReprError_repr___closed__10));
v___x_141_ = l_String_quote(v_message_134_);
if (v_isShared_137_ == 0)
{
lean_ctor_set_tag(v___x_136_, 3);
lean_ctor_set(v___x_136_, 0, v___x_141_);
v___x_143_ = v___x_136_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v___x_141_);
v___x_143_ = v_reuseFailAlloc_149_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_144_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_140_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
lean_inc(v___y_139_);
v___x_145_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_145_, 0, v___y_139_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
v___x_146_ = 0;
v___x_147_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_147_, 0, v___x_145_);
lean_ctor_set_uint8(v___x_147_, sizeof(void*)*1, v___x_146_);
v___x_148_ = l_Repr_addAppParen(v___x_147_, v_prec_85_);
return v___x_148_;
}
}
}
}
default: 
{
lean_object* v_message_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_175_; 
v_message_155_ = lean_ctor_get(v_x_84_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v_x_84_);
if (v_isSharedCheck_175_ == 0)
{
v___x_157_ = v_x_84_;
v_isShared_158_ = v_isSharedCheck_175_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_message_155_);
lean_dec(v_x_84_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_175_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___y_160_; lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = lean_unsigned_to_nat(1024u);
v___x_172_ = lean_nat_dec_le(v___x_171_, v_prec_85_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; 
v___x_173_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__3, &l_Lasm_RPC_instReprError_repr___closed__3_once, _init_l_Lasm_RPC_instReprError_repr___closed__3);
v___y_160_ = v___x_173_;
goto v___jp_159_;
}
else
{
lean_object* v___x_174_; 
v___x_174_ = lean_obj_once(&l_Lasm_RPC_instReprError_repr___closed__4, &l_Lasm_RPC_instReprError_repr___closed__4_once, _init_l_Lasm_RPC_instReprError_repr___closed__4);
v___y_160_ = v___x_174_;
goto v___jp_159_;
}
v___jp_159_:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_161_ = ((lean_object*)(l_Lasm_RPC_instReprError_repr___closed__13));
v___x_162_ = l_String_quote(v_message_155_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v___x_162_);
v___x_164_ = v___x_157_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_162_);
v___x_164_ = v_reuseFailAlloc_170_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_165_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_161_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
lean_inc(v___y_160_);
v___x_166_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_166_, 0, v___y_160_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = 0;
v___x_168_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_168_, 0, v___x_166_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*1, v___x_167_);
v___x_169_ = l_Repr_addAppParen(v___x_168_, v_prec_85_);
return v___x_169_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_instReprError_repr___boxed(lean_object* v_x_176_, lean_object* v_prec_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lasm_RPC_instReprError_repr(v_x_176_, v_prec_177_);
lean_dec(v_prec_177_);
return v_res_178_;
}
}
LEAN_EXPORT uint8_t l_Lasm_RPC_instBEqError_beq(lean_object* v_x_186_, lean_object* v_x_187_){
_start:
{
switch(lean_obj_tag(v_x_186_))
{
case 0:
{
if (lean_obj_tag(v_x_187_) == 0)
{
lean_object* v_message_188_; lean_object* v_message_189_; uint8_t v___x_190_; 
v_message_188_ = lean_ctor_get(v_x_186_, 0);
v_message_189_ = lean_ctor_get(v_x_187_, 0);
v___x_190_ = lean_string_dec_eq(v_message_188_, v_message_189_);
return v___x_190_;
}
else
{
uint8_t v___x_191_; 
v___x_191_ = 0;
return v___x_191_;
}
}
case 1:
{
if (lean_obj_tag(v_x_187_) == 1)
{
lean_object* v_status_192_; lean_object* v_message_193_; lean_object* v_status_194_; lean_object* v_message_195_; uint8_t v___x_196_; 
v_status_192_ = lean_ctor_get(v_x_186_, 0);
v_message_193_ = lean_ctor_get(v_x_186_, 1);
v_status_194_ = lean_ctor_get(v_x_187_, 0);
v_message_195_ = lean_ctor_get(v_x_187_, 1);
v___x_196_ = lean_nat_dec_eq(v_status_192_, v_status_194_);
if (v___x_196_ == 0)
{
return v___x_196_;
}
else
{
uint8_t v___x_197_; 
v___x_197_ = lean_string_dec_eq(v_message_193_, v_message_195_);
return v___x_197_;
}
}
else
{
uint8_t v___x_198_; 
v___x_198_ = 0;
return v___x_198_;
}
}
case 2:
{
if (lean_obj_tag(v_x_187_) == 2)
{
lean_object* v_message_199_; lean_object* v_message_200_; uint8_t v___x_201_; 
v_message_199_ = lean_ctor_get(v_x_186_, 0);
v_message_200_ = lean_ctor_get(v_x_187_, 0);
v___x_201_ = lean_string_dec_eq(v_message_199_, v_message_200_);
return v___x_201_;
}
else
{
uint8_t v___x_202_; 
v___x_202_ = 0;
return v___x_202_;
}
}
default: 
{
if (lean_obj_tag(v_x_187_) == 3)
{
lean_object* v_message_203_; lean_object* v_message_204_; uint8_t v___x_205_; 
v_message_203_ = lean_ctor_get(v_x_186_, 0);
v_message_204_ = lean_ctor_get(v_x_187_, 0);
v___x_205_ = lean_string_dec_eq(v_message_203_, v_message_204_);
return v___x_205_;
}
else
{
uint8_t v___x_206_; 
v___x_206_ = 0;
return v___x_206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_instBEqError_beq___boxed(lean_object* v_x_207_, lean_object* v_x_208_){
_start:
{
uint8_t v_res_209_; lean_object* v_r_210_; 
v_res_209_ = l_Lasm_RPC_instBEqError_beq(v_x_207_, v_x_208_);
lean_dec_ref(v_x_208_);
lean_dec_ref(v_x_207_);
v_r_210_ = lean_box(v_res_209_);
return v_r_210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Error_toString(lean_object* v_x_217_){
_start:
{
switch(lean_obj_tag(v_x_217_))
{
case 0:
{
lean_object* v_message_218_; 
v_message_218_ = lean_ctor_get(v_x_217_, 0);
lean_inc_ref(v_message_218_);
lean_dec_ref_known(v_x_217_, 1);
return v_message_218_;
}
case 1:
{
lean_object* v_status_219_; lean_object* v_message_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v_status_219_ = lean_ctor_get(v_x_217_, 0);
lean_inc(v_status_219_);
v_message_220_ = lean_ctor_get(v_x_217_, 1);
lean_inc_ref(v_message_220_);
lean_dec_ref_known(v_x_217_, 2);
v___x_221_ = ((lean_object*)(l_Lasm_RPC_Error_toString___closed__0));
v___x_222_ = l_Nat_reprFast(v_status_219_);
v___x_223_ = lean_string_append(v___x_221_, v___x_222_);
lean_dec_ref(v___x_222_);
v___x_224_ = ((lean_object*)(l_Lasm_RPC_Error_toString___closed__1));
v___x_225_ = lean_string_append(v___x_223_, v___x_224_);
v___x_226_ = lean_string_append(v___x_225_, v_message_220_);
lean_dec_ref(v_message_220_);
return v___x_226_;
}
case 2:
{
lean_object* v_message_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v_message_227_ = lean_ctor_get(v_x_217_, 0);
lean_inc_ref(v_message_227_);
lean_dec_ref_known(v_x_217_, 1);
v___x_228_ = ((lean_object*)(l_Lasm_RPC_Error_toString___closed__2));
v___x_229_ = lean_string_append(v___x_228_, v_message_227_);
lean_dec_ref(v_message_227_);
return v___x_229_;
}
default: 
{
lean_object* v_message_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_message_230_ = lean_ctor_get(v_x_217_, 0);
lean_inc_ref(v_message_230_);
lean_dec_ref_known(v_x_217_, 1);
v___x_231_ = ((lean_object*)(l_Lasm_RPC_Error_toString___closed__3));
v___x_232_ = lean_string_append(v___x_231_, v_message_230_);
lean_dec_ref(v_message_230_);
return v___x_232_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg(lean_object* v_as_x27_244_, lean_object* v_b_245_){
_start:
{
if (lean_obj_tag(v_as_x27_244_) == 0)
{
return v_b_245_;
}
else
{
lean_object* v_snd_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_408_; 
v_snd_246_ = lean_ctor_get(v_b_245_, 1);
v_isSharedCheck_408_ = !lean_is_exclusive(v_b_245_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; 
v_unused_409_ = lean_ctor_get(v_b_245_, 0);
lean_dec(v_unused_409_);
v___x_248_ = v_b_245_;
v_isShared_249_ = v_isSharedCheck_408_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_snd_246_);
lean_dec(v_b_245_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_408_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v_snd_250_; lean_object* v_snd_251_; lean_object* v_head_252_; lean_object* v_tail_253_; lean_object* v_fst_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_406_; 
v_snd_250_ = lean_ctor_get(v_snd_246_, 1);
lean_inc(v_snd_250_);
v_snd_251_ = lean_ctor_get(v_snd_250_, 1);
lean_inc(v_snd_251_);
v_head_252_ = lean_ctor_get(v_as_x27_244_, 0);
v_tail_253_ = lean_ctor_get(v_as_x27_244_, 1);
v_fst_254_ = lean_ctor_get(v_snd_246_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v_snd_246_);
if (v_isSharedCheck_406_ == 0)
{
lean_object* v_unused_407_; 
v_unused_407_ = lean_ctor_get(v_snd_246_, 1);
lean_dec(v_unused_407_);
v___x_256_ = v_snd_246_;
v_isShared_257_ = v_isSharedCheck_406_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_fst_254_);
lean_dec(v_snd_246_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_406_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v_fst_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_404_; 
v_fst_258_ = lean_ctor_get(v_snd_250_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v_snd_250_);
if (v_isSharedCheck_404_ == 0)
{
lean_object* v_unused_405_; 
v_unused_405_ = lean_ctor_get(v_snd_250_, 1);
lean_dec(v_unused_405_);
v___x_260_ = v_snd_250_;
v_isShared_261_ = v_isSharedCheck_404_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_fst_258_);
lean_dec(v_snd_250_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_404_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v_fst_262_; lean_object* v_snd_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_403_; 
v_fst_262_ = lean_ctor_get(v_snd_251_, 0);
v_snd_263_ = lean_ctor_get(v_snd_251_, 1);
v_isSharedCheck_403_ = !lean_is_exclusive(v_snd_251_);
if (v_isSharedCheck_403_ == 0)
{
v___x_265_ = v_snd_251_;
v_isShared_266_ = v_isSharedCheck_403_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_snd_263_);
lean_inc(v_fst_262_);
lean_dec(v_snd_251_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_403_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_267_; uint8_t v_inString_269_; uint8_t v_escaped_270_; lean_object* v___y_287_; uint8_t v___y_288_; lean_object* v___y_296_; uint8_t v_inString_300_; uint8_t v___x_301_; lean_object* v___y_303_; lean_object* v___y_311_; lean_object* v_exponent_319_; uint8_t v___x_336_; 
v___x_267_ = lean_box(0);
v_inString_300_ = 0;
v___x_301_ = 1;
v___x_336_ = lean_unbox(v_fst_254_);
if (v___x_336_ == 0)
{
lean_del_object(v___x_265_);
lean_del_object(v___x_260_);
lean_del_object(v___x_256_);
lean_del_object(v___x_248_);
if (lean_obj_tag(v_snd_263_) == 1)
{
lean_object* v_val_337_; uint32_t v___x_376_; uint32_t v___x_377_; uint8_t v___x_378_; 
v_val_337_ = lean_ctor_get(v_snd_263_, 0);
v___x_376_ = 48;
v___x_377_ = lean_unbox_uint32(v_head_252_);
v___x_378_ = lean_uint32_dec_le(v___x_376_, v___x_377_);
if (v___x_378_ == 0)
{
goto v___jp_369_;
}
else
{
uint32_t v___x_379_; uint32_t v___x_380_; uint8_t v___x_381_; 
v___x_379_ = 57;
v___x_380_ = lean_unbox_uint32(v_head_252_);
v___x_381_ = lean_uint32_dec_le(v___x_380_, v___x_379_);
if (v___x_381_ == 0)
{
goto v___jp_369_;
}
else
{
lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_382_ = lean_unsigned_to_nat(0u);
v___x_383_ = lean_nat_dec_eq(v_val_337_, v___x_382_);
if (v___x_383_ == 0)
{
goto v___jp_338_;
}
else
{
uint32_t v___x_384_; uint8_t v___x_385_; 
v___x_384_ = lean_unbox_uint32(v_head_252_);
v___x_385_ = lean_uint32_dec_eq(v___x_384_, v___x_376_);
if (v___x_385_ == 0)
{
goto v___jp_338_;
}
else
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_386_, 0, v_fst_262_);
lean_ctor_set(v___x_386_, 1, v_snd_263_);
v___x_387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_387_, 0, v_fst_258_);
lean_ctor_set(v___x_387_, 1, v___x_386_);
v___x_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_388_, 0, v_fst_254_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_267_);
lean_ctor_set(v___x_389_, 1, v___x_388_);
v_as_x27_244_ = v_tail_253_;
v_b_245_ = v___x_389_;
goto _start;
}
}
}
}
v___jp_338_:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_339_ = lean_unsigned_to_nat(4u);
v___x_340_ = lean_unsigned_to_nat(1u);
v___x_341_ = lean_nat_add(v_val_337_, v___x_340_);
v___x_342_ = lean_nat_dec_lt(v___x_339_, v___x_341_);
if (v___x_342_ == 0)
{
lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_354_; 
v_isSharedCheck_354_ = !lean_is_exclusive(v_snd_263_);
if (v_isSharedCheck_354_ == 0)
{
lean_object* v_unused_355_; 
v_unused_355_ = lean_ctor_get(v_snd_263_, 0);
lean_dec(v_unused_355_);
v___x_344_ = v_snd_263_;
v_isShared_345_ = v_isSharedCheck_354_;
goto v_resetjp_343_;
}
else
{
lean_dec(v_snd_263_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_354_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_347_; 
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 0, v___x_341_);
v___x_347_ = v___x_344_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v___x_341_);
v___x_347_ = v_reuseFailAlloc_353_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_348_, 0, v_fst_262_);
lean_ctor_set(v___x_348_, 1, v___x_347_);
v___x_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_349_, 0, v_fst_258_);
lean_ctor_set(v___x_349_, 1, v___x_348_);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v_fst_254_);
lean_ctor_set(v___x_350_, 1, v___x_349_);
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_267_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v_as_x27_244_ = v_tail_253_;
v_b_245_ = v___x_351_;
goto _start;
}
}
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
lean_dec(v___x_341_);
v___x_356_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__2));
v___x_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_357_, 0, v_fst_262_);
lean_ctor_set(v___x_357_, 1, v_snd_263_);
v___x_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_358_, 0, v_fst_258_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
v___x_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_359_, 0, v_fst_254_);
lean_ctor_set(v___x_359_, 1, v___x_358_);
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_356_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
return v___x_360_;
}
}
v___jp_361_:
{
lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_362_ = lean_unsigned_to_nat(0u);
v___x_363_ = lean_nat_dec_eq(v_val_337_, v___x_362_);
if (v___x_363_ == 0)
{
lean_dec_ref_known(v_snd_263_, 1);
v_exponent_319_ = v___x_267_;
goto v___jp_318_;
}
else
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_364_, 0, v_fst_262_);
lean_ctor_set(v___x_364_, 1, v_snd_263_);
v___x_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_365_, 0, v_fst_258_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_366_, 0, v_fst_254_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_267_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
v_as_x27_244_ = v_tail_253_;
v_b_245_ = v___x_367_;
goto _start;
}
}
v___jp_369_:
{
uint32_t v___x_370_; uint32_t v___x_371_; uint8_t v___x_372_; 
v___x_370_ = 43;
v___x_371_ = lean_unbox_uint32(v_head_252_);
v___x_372_ = lean_uint32_dec_eq(v___x_371_, v___x_370_);
if (v___x_372_ == 0)
{
uint32_t v___x_373_; uint32_t v___x_374_; uint8_t v___x_375_; 
v___x_373_ = 45;
v___x_374_ = lean_unbox_uint32(v_head_252_);
v___x_375_ = lean_uint32_dec_eq(v___x_374_, v___x_373_);
if (v___x_375_ == 0)
{
lean_dec_ref_known(v_snd_263_, 1);
v_exponent_319_ = v___x_267_;
goto v___jp_318_;
}
else
{
goto v___jp_361_;
}
}
else
{
goto v___jp_361_;
}
}
}
else
{
v_exponent_319_ = v_snd_263_;
goto v___jp_318_;
}
}
else
{
uint8_t v___x_391_; 
v___x_391_ = lean_unbox(v_fst_258_);
if (v___x_391_ == 0)
{
uint32_t v___x_392_; uint32_t v___x_393_; uint8_t v___x_394_; 
v___x_392_ = 92;
v___x_393_ = lean_unbox_uint32(v_head_252_);
v___x_394_ = lean_uint32_dec_eq(v___x_393_, v___x_392_);
if (v___x_394_ == 0)
{
uint32_t v___x_395_; uint32_t v___x_396_; uint8_t v___x_397_; 
v___x_395_ = 34;
v___x_396_ = lean_unbox_uint32(v_head_252_);
v___x_397_ = lean_uint32_dec_eq(v___x_396_, v___x_395_);
if (v___x_397_ == 0)
{
uint8_t v___x_398_; uint8_t v___x_399_; 
v___x_398_ = lean_unbox(v_fst_254_);
lean_dec(v_fst_254_);
v___x_399_ = lean_unbox(v_fst_258_);
lean_dec(v_fst_258_);
v_inString_269_ = v___x_398_;
v_escaped_270_ = v___x_399_;
goto v___jp_268_;
}
else
{
uint8_t v___x_400_; 
lean_dec(v_fst_254_);
v___x_400_ = lean_unbox(v_fst_258_);
lean_dec(v_fst_258_);
v_inString_269_ = v_inString_300_;
v_escaped_270_ = v___x_400_;
goto v___jp_268_;
}
}
else
{
uint8_t v___x_401_; 
lean_dec(v_fst_258_);
v___x_401_ = lean_unbox(v_fst_254_);
lean_dec(v_fst_254_);
v_inString_269_ = v___x_401_;
v_escaped_270_ = v___x_301_;
goto v___jp_268_;
}
}
else
{
uint8_t v___x_402_; 
lean_dec(v_fst_258_);
v___x_402_ = lean_unbox(v_fst_254_);
lean_dec(v_fst_254_);
v_inString_269_ = v___x_402_;
v_escaped_270_ = v_inString_300_;
goto v___jp_268_;
}
}
v___jp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_266_ == 0)
{
v___x_272_ = v___x_265_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_fst_262_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v_snd_263_);
v___x_272_ = v_reuseFailAlloc_285_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
lean_object* v___x_273_; lean_object* v___x_275_; 
v___x_273_ = lean_box(v_escaped_270_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 1, v___x_272_);
lean_ctor_set(v___x_260_, 0, v___x_273_);
v___x_275_ = v___x_260_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_284_, 1, v___x_272_);
v___x_275_ = v_reuseFailAlloc_284_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_276_ = lean_box(v_inString_269_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 1, v___x_275_);
lean_ctor_set(v___x_256_, 0, v___x_276_);
v___x_278_ = v___x_256_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v___x_275_);
v___x_278_ = v_reuseFailAlloc_283_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
lean_object* v___x_280_; 
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 1, v___x_278_);
lean_ctor_set(v___x_248_, 0, v___x_267_);
v___x_280_ = v___x_248_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_267_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v___x_278_);
v___x_280_ = v_reuseFailAlloc_282_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
v_as_x27_244_ = v_tail_253_;
v_b_245_ = v___x_280_;
goto _start;
}
}
}
}
}
v___jp_286_:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_289_ = lean_box(v___y_288_);
v___x_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___y_287_);
v___x_291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_291_, 0, v_fst_258_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v_fst_254_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_267_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v_as_x27_244_ = v_tail_253_;
v_b_245_ = v___x_293_;
goto _start;
}
v___jp_295_:
{
uint32_t v___x_297_; uint32_t v___x_298_; uint8_t v___x_299_; 
v___x_297_ = 46;
v___x_298_ = lean_unbox_uint32(v_head_252_);
v___x_299_ = lean_uint32_dec_eq(v___x_298_, v___x_297_);
v___y_287_ = v___y_296_;
v___y_288_ = v___x_299_;
goto v___jp_286_;
}
v___jp_302_:
{
uint32_t v___x_304_; uint32_t v___x_305_; uint8_t v___x_306_; 
v___x_304_ = 48;
v___x_305_ = lean_unbox_uint32(v_head_252_);
v___x_306_ = lean_uint32_dec_le(v___x_304_, v___x_305_);
if (v___x_306_ == 0)
{
v___y_296_ = v___y_303_;
goto v___jp_295_;
}
else
{
uint32_t v___x_307_; uint32_t v___x_308_; uint8_t v___x_309_; 
v___x_307_ = 57;
v___x_308_ = lean_unbox_uint32(v_head_252_);
v___x_309_ = lean_uint32_dec_le(v___x_308_, v___x_307_);
if (v___x_309_ == 0)
{
v___y_296_ = v___y_303_;
goto v___jp_295_;
}
else
{
v___y_287_ = v___y_303_;
v___y_288_ = v___x_301_;
goto v___jp_286_;
}
}
}
v___jp_310_:
{
uint8_t v___x_312_; 
v___x_312_ = lean_unbox(v_fst_262_);
lean_dec(v_fst_262_);
if (v___x_312_ == 0)
{
v___y_303_ = v___y_311_;
goto v___jp_302_;
}
else
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
lean_dec(v___y_311_);
v___x_313_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___closed__1));
v___x_314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_314_, 0, v_fst_258_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v_fst_254_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_267_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v_as_x27_244_ = v_tail_253_;
v_b_245_ = v___x_316_;
goto _start;
}
}
v___jp_318_:
{
uint32_t v___x_320_; uint32_t v___x_321_; uint8_t v___x_322_; 
v___x_320_ = 34;
v___x_321_ = lean_unbox_uint32(v_head_252_);
v___x_322_ = lean_uint32_dec_eq(v___x_321_, v___x_320_);
if (v___x_322_ == 0)
{
uint32_t v___x_323_; uint32_t v___x_324_; uint8_t v___x_325_; 
v___x_323_ = 101;
v___x_324_ = lean_unbox_uint32(v_head_252_);
v___x_325_ = lean_uint32_dec_eq(v___x_324_, v___x_323_);
if (v___x_325_ == 0)
{
uint32_t v___x_326_; uint32_t v___x_327_; uint8_t v___x_328_; 
v___x_326_ = 69;
v___x_327_ = lean_unbox_uint32(v_head_252_);
v___x_328_ = lean_uint32_dec_eq(v___x_327_, v___x_326_);
if (v___x_328_ == 0)
{
lean_dec(v_fst_262_);
v___y_303_ = v_exponent_319_;
goto v___jp_302_;
}
else
{
v___y_311_ = v_exponent_319_;
goto v___jp_310_;
}
}
else
{
v___y_311_ = v_exponent_319_;
goto v___jp_310_;
}
}
else
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
lean_dec(v_fst_262_);
lean_dec(v_fst_254_);
v___x_329_ = lean_box(v_inString_300_);
v___x_330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
lean_ctor_set(v___x_330_, 1, v_exponent_319_);
v___x_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_331_, 0, v_fst_258_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
v___x_332_ = lean_box(v___x_301_);
v___x_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
lean_ctor_set(v___x_333_, 1, v___x_331_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_267_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v_as_x27_244_ = v_tail_253_;
v_b_245_ = v___x_334_;
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
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg___boxed(lean_object* v_as_x27_410_, lean_object* v_b_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg(v_as_x27_410_, v_b_411_);
lean_dec(v_as_x27_410_);
return v_res_412_;
}
}
LEAN_EXPORT uint8_t l_Lasm_RPC_hugeExponent(lean_object* v_text_428_){
_start:
{
uint8_t v_inString_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v_fst_433_; 
v_inString_429_ = 0;
v___x_430_ = l_String_toListImpl(v_text_428_);
v___x_431_ = ((lean_object*)(l_Lasm_RPC_hugeExponent___closed__3));
v___x_432_ = l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg(v___x_430_, v___x_431_);
lean_dec(v___x_430_);
v_fst_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_fst_433_);
lean_dec_ref(v___x_432_);
if (lean_obj_tag(v_fst_433_) == 0)
{
return v_inString_429_;
}
else
{
lean_object* v_val_434_; uint8_t v___x_435_; 
v_val_434_ = lean_ctor_get(v_fst_433_, 0);
lean_inc(v_val_434_);
lean_dec_ref_known(v_fst_433_, 1);
v___x_435_ = lean_unbox(v_val_434_);
lean_dec(v_val_434_);
return v___x_435_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_hugeExponent___boxed(lean_object* v_text_436_){
_start:
{
uint8_t v_res_437_; lean_object* v_r_438_; 
v_res_437_ = l_Lasm_RPC_hugeExponent(v_text_436_);
v_r_438_ = lean_box(v_res_437_);
return v_r_438_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0(lean_object* v_as_439_, lean_object* v_as_x27_440_, lean_object* v_b_441_, lean_object* v_a_442_){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___redArg(v_as_x27_440_, v_b_441_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0___boxed(lean_object* v_as_444_, lean_object* v_as_x27_445_, lean_object* v_b_446_, lean_object* v_a_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_List_forIn_x27_loop___at___00Lasm_RPC_hugeExponent_spec__0(v_as_444_, v_as_x27_445_, v_b_446_, v_a_447_);
lean_dec(v_as_x27_445_);
lean_dec(v_as_444_);
return v_res_448_;
}
}
static lean_object* _init_l_Lasm_RPC_zerosAsZero___closed__0(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = lean_nat_to_int(v___x_449_);
return v___x_450_;
}
}
static lean_object* _init_l_Lasm_RPC_zerosAsZero___closed__1(void){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = lean_obj_once(&l_Lasm_RPC_zerosAsZero___closed__0, &l_Lasm_RPC_zerosAsZero___closed__0_once, _init_l_Lasm_RPC_zerosAsZero___closed__0);
v___x_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
lean_ctor_set(v___x_453_, 1, v___x_451_);
return v___x_453_;
}
}
static lean_object* _init_l_Lasm_RPC_zerosAsZero___closed__2(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_obj_once(&l_Lasm_RPC_zerosAsZero___closed__1, &l_Lasm_RPC_zerosAsZero___closed__1_once, _init_l_Lasm_RPC_zerosAsZero___closed__1);
v___x_455_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_zerosAsZero_spec__0(size_t v_sz_456_, size_t v_i_457_, lean_object* v_bs_458_){
_start:
{
uint8_t v___x_459_; 
v___x_459_ = lean_usize_dec_lt(v_i_457_, v_sz_456_);
if (v___x_459_ == 0)
{
return v_bs_458_;
}
else
{
lean_object* v_v_460_; lean_object* v___x_461_; lean_object* v_bs_x27_462_; lean_object* v___x_463_; size_t v___x_464_; size_t v___x_465_; lean_object* v___x_466_; 
v_v_460_ = lean_array_uget(v_bs_458_, v_i_457_);
v___x_461_ = lean_unsigned_to_nat(0u);
v_bs_x27_462_ = lean_array_uset(v_bs_458_, v_i_457_, v___x_461_);
v___x_463_ = l_Lasm_RPC_zerosAsZero(v_v_460_);
v___x_464_ = ((size_t)1ULL);
v___x_465_ = lean_usize_add(v_i_457_, v___x_464_);
v___x_466_ = lean_array_uset(v_bs_x27_462_, v_i_457_, v___x_463_);
v_i_457_ = v___x_465_;
v_bs_458_ = v___x_466_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_zerosAsZero(lean_object* v_x_468_){
_start:
{
switch(lean_obj_tag(v_x_468_))
{
case 2:
{
lean_object* v_n_469_; lean_object* v_mantissa_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
v_n_469_ = lean_ctor_get(v_x_468_, 0);
v_mantissa_470_ = lean_ctor_get(v_n_469_, 0);
v___x_471_ = lean_obj_once(&l_Lasm_RPC_zerosAsZero___closed__0, &l_Lasm_RPC_zerosAsZero___closed__0_once, _init_l_Lasm_RPC_zerosAsZero___closed__0);
v___x_472_ = lean_int_dec_eq(v_mantissa_470_, v___x_471_);
if (v___x_472_ == 0)
{
return v_x_468_;
}
else
{
lean_object* v___x_473_; 
lean_dec_ref_known(v_x_468_, 1);
v___x_473_ = lean_obj_once(&l_Lasm_RPC_zerosAsZero___closed__2, &l_Lasm_RPC_zerosAsZero___closed__2_once, _init_l_Lasm_RPC_zerosAsZero___closed__2);
return v___x_473_;
}
}
case 4:
{
lean_object* v_elems_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_484_; 
v_elems_474_ = lean_ctor_get(v_x_468_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v_x_468_);
if (v_isSharedCheck_484_ == 0)
{
v___x_476_ = v_x_468_;
v_isShared_477_ = v_isSharedCheck_484_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_elems_474_);
lean_dec(v_x_468_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_484_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
size_t v_sz_478_; size_t v___x_479_; lean_object* v___x_480_; lean_object* v___x_482_; 
v_sz_478_ = lean_array_size(v_elems_474_);
v___x_479_ = ((size_t)0ULL);
v___x_480_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_zerosAsZero_spec__0(v_sz_478_, v___x_479_, v_elems_474_);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v___x_480_);
v___x_482_ = v___x_476_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_480_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
case 5:
{
lean_object* v_kvPairs_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_493_; 
v_kvPairs_485_ = lean_ctor_get(v_x_468_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v_x_468_);
if (v_isSharedCheck_493_ == 0)
{
v___x_487_ = v_x_468_;
v_isShared_488_ = v_isSharedCheck_493_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_kvPairs_485_);
lean_dec(v_x_468_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_493_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; lean_object* v___x_491_; 
lean_inc(v_kvPairs_485_);
v___x_489_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_RPC_zerosAsZero_spec__1_spec__1(v_kvPairs_485_, v_kvPairs_485_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_489_);
v___x_491_ = v___x_487_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v___x_489_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
default: 
{
return v_x_468_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_RPC_zerosAsZero_spec__1_spec__1(lean_object* v_init_494_, lean_object* v_x_495_){
_start:
{
if (lean_obj_tag(v_x_495_) == 0)
{
lean_object* v_k_496_; lean_object* v_v_497_; lean_object* v_l_498_; lean_object* v_r_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v_k_496_ = lean_ctor_get(v_x_495_, 1);
lean_inc(v_k_496_);
v_v_497_ = lean_ctor_get(v_x_495_, 2);
lean_inc(v_v_497_);
v_l_498_ = lean_ctor_get(v_x_495_, 3);
lean_inc(v_l_498_);
v_r_499_ = lean_ctor_get(v_x_495_, 4);
lean_inc(v_r_499_);
lean_dec_ref_known(v_x_495_, 5);
v___x_500_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_RPC_zerosAsZero_spec__1_spec__1(v_init_494_, v_l_498_);
v___x_501_ = l_Lasm_RPC_zerosAsZero(v_v_497_);
v___x_502_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00Lean_instToJsonModuleSetup_toJson_spec__1_spec__2___redArg(v_k_496_, v___x_501_, v___x_500_);
v_init_494_ = v___x_502_;
v_x_495_ = v_r_499_;
goto _start;
}
else
{
return v_init_494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_zerosAsZero_spec__0___boxed(lean_object* v_sz_504_, lean_object* v_i_505_, lean_object* v_bs_506_){
_start:
{
size_t v_sz_boxed_507_; size_t v_i_boxed_508_; lean_object* v_res_509_; 
v_sz_boxed_507_ = lean_unbox_usize(v_sz_504_);
lean_dec(v_sz_504_);
v_i_boxed_508_ = lean_unbox_usize(v_i_505_);
lean_dec(v_i_505_);
v_res_509_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_RPC_zerosAsZero_spec__0(v_sz_boxed_507_, v_i_boxed_508_, v_bs_506_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_RPC_zerosAsZero_spec__1(lean_object* v_init_510_, lean_object* v_t_511_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_RPC_zerosAsZero_spec__1_spec__1(v_init_510_, v_t_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_parseJson(lean_object* v_text_516_){
_start:
{
uint8_t v___x_517_; 
lean_inc_ref(v_text_516_);
v___x_517_ = l_Lasm_RPC_hugeExponent(v_text_516_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; 
v___x_518_ = l_Lean_Json_parse(v_text_516_);
if (lean_obj_tag(v___x_518_) == 0)
{
return v___x_518_;
}
else
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_527_; 
v_a_519_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_527_ == 0)
{
v___x_521_ = v___x_518_;
v_isShared_522_ = v_isSharedCheck_527_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_518_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_527_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_523_; lean_object* v___x_525_; 
v___x_523_ = l_Lasm_RPC_zerosAsZero(v_a_519_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 0, v___x_523_);
v___x_525_ = v___x_521_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v___x_523_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
}
else
{
lean_object* v___x_528_; 
lean_dec_ref(v_text_516_);
v___x_528_ = ((lean_object*)(l_Lasm_RPC_parseJson___closed__1));
return v___x_528_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___redArg(lean_object* v_e_530_){
_start:
{
lean_object* v_name_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v_name_531_ = lean_ctor_get(v_e_530_, 0);
v___x_532_ = ((lean_object*)(l_Lasm_RPC_Endpoint_path___redArg___closed__0));
v___x_533_ = lean_string_append(v___x_532_, v_name_531_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___redArg___boxed(lean_object* v_e_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_534_);
lean_dec_ref(v_e_534_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path(lean_object* v_Req_536_, lean_object* v_Res_537_, lean_object* v_e_538_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___boxed(lean_object* v_Req_540_, lean_object* v_Res_541_, lean_object* v_e_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Lasm_RPC_Endpoint_path(v_Req_540_, v_Res_541_, v_e_542_);
lean_dec_ref(v_e_542_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest___redArg(lean_object* v_inst_544_, lean_object* v_r_545_){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_apply_1(v_inst_544_, v_r_545_);
v___x_547_ = l_Lean_Json_compress(v___x_546_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest(lean_object* v_Req_548_, lean_object* v_Res_549_, lean_object* v_inst_550_, lean_object* v_x_551_, lean_object* v_r_552_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_Lasm_RPC_Endpoint_encodeRequest___redArg(v_inst_550_, v_r_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest___boxed(lean_object* v_Req_554_, lean_object* v_Res_555_, lean_object* v_inst_556_, lean_object* v_x_557_, lean_object* v_r_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lasm_RPC_Endpoint_encodeRequest(v_Req_554_, v_Res_555_, v_inst_556_, v_x_557_, v_r_558_);
lean_dec_ref(v_x_557_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeRequest___redArg(lean_object* v_inst_562_, lean_object* v_e_563_, lean_object* v_body_564_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = l_Lasm_RPC_parseJson(v_body_564_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_576_; 
lean_dec_ref(v_e_563_);
lean_dec_ref(v_inst_562_);
v_a_566_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_576_ == 0)
{
v___x_568_ = v___x_565_;
v_isShared_569_ = v_isSharedCheck_576_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_576_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_570_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__0));
v___x_571_ = lean_string_append(v___x_570_, v_a_566_);
lean_dec(v_a_566_);
v___x_572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v___x_572_);
v___x_574_ = v___x_568_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
else
{
lean_object* v_a_577_; lean_object* v___x_578_; 
v_a_577_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_a_577_);
lean_dec_ref_known(v___x_565_, 1);
v___x_578_ = lean_apply_1(v_inst_562_, v_a_577_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_589_; 
lean_dec_ref(v_e_563_);
v_a_579_ = lean_ctor_get(v___x_578_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_578_);
if (v_isSharedCheck_589_ == 0)
{
v___x_581_ = v___x_578_;
v_isShared_582_ = v_isSharedCheck_589_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_578_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_589_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_587_; 
v___x_583_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__1));
v___x_584_ = lean_string_append(v___x_583_, v_a_579_);
lean_dec(v_a_579_);
v___x_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 0, v___x_585_);
v___x_587_ = v___x_581_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
else
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_608_; 
v_a_590_ = lean_ctor_get(v___x_578_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_578_);
if (v_isSharedCheck_608_ == 0)
{
v___x_592_ = v___x_578_;
v_isShared_593_ = v_isSharedCheck_608_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_578_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_608_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v_validate_594_; lean_object* v___x_596_; 
v_validate_594_ = lean_ctor_get(v_e_563_, 1);
lean_inc_ref(v_validate_594_);
lean_dec_ref(v_e_563_);
lean_inc(v_a_590_);
if (v_isShared_593_ == 0)
{
v___x_596_ = v___x_592_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_590_);
v___x_596_ = v_reuseFailAlloc_607_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v___x_597_; 
v___x_597_ = lean_apply_1(v_validate_594_, v_a_590_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_606_; 
lean_dec_ref(v___x_596_);
v_a_598_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_606_ == 0)
{
v___x_600_ = v___x_597_;
v_isShared_601_ = v_isSharedCheck_606_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_597_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_606_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_602_, 0, v_a_598_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_602_);
v___x_604_ = v___x_600_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_602_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
else
{
lean_dec_ref_known(v___x_597_, 1);
return v___x_596_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeRequest(lean_object* v_Req_609_, lean_object* v_Res_610_, lean_object* v_inst_611_, lean_object* v_e_612_, lean_object* v_body_613_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = l_Lasm_RPC_Endpoint_decodeRequest___redArg(v_inst_611_, v_e_612_, v_body_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Except_map_match__1_splitter___redArg(lean_object* v_x_615_, lean_object* v_h__1_616_, lean_object* v_h__2_617_){
_start:
{
if (lean_obj_tag(v_x_615_) == 0)
{
lean_object* v_a_618_; lean_object* v___x_619_; 
lean_dec(v_h__2_617_);
v_a_618_ = lean_ctor_get(v_x_615_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v_x_615_, 1);
v___x_619_ = lean_apply_1(v_h__1_616_, v_a_618_);
return v___x_619_;
}
else
{
lean_object* v_a_620_; lean_object* v___x_621_; 
lean_dec(v_h__1_616_);
v_a_620_ = lean_ctor_get(v_x_615_, 0);
lean_inc(v_a_620_);
lean_dec_ref_known(v_x_615_, 1);
v___x_621_ = lean_apply_1(v_h__2_617_, v_a_620_);
return v___x_621_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Except_map_match__1_splitter(lean_object* v_00_u03b5_622_, lean_object* v_00_u03b1_623_, lean_object* v_motive_624_, lean_object* v_x_625_, lean_object* v_h__1_626_, lean_object* v_h__2_627_){
_start:
{
if (lean_obj_tag(v_x_625_) == 0)
{
lean_object* v_a_628_; lean_object* v___x_629_; 
lean_dec(v_h__2_627_);
v_a_628_ = lean_ctor_get(v_x_625_, 0);
lean_inc(v_a_628_);
lean_dec_ref_known(v_x_625_, 1);
v___x_629_ = lean_apply_1(v_h__1_626_, v_a_628_);
return v___x_629_;
}
else
{
lean_object* v_a_630_; lean_object* v___x_631_; 
lean_dec(v_h__1_626_);
v_a_630_ = lean_ctor_get(v_x_625_, 0);
lean_inc(v_a_630_);
lean_dec_ref_known(v_x_625_, 1);
v___x_631_ = lean_apply_1(v_h__2_627_, v_a_630_);
return v___x_631_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Lasm_RPC_Endpoint_decodeRequest_match__1_splitter___redArg(lean_object* v_x_632_, lean_object* v_h__1_633_, lean_object* v_h__2_634_){
_start:
{
if (lean_obj_tag(v_x_632_) == 0)
{
lean_object* v_a_635_; lean_object* v___x_636_; 
lean_dec(v_h__1_633_);
v_a_635_ = lean_ctor_get(v_x_632_, 0);
lean_inc(v_a_635_);
lean_dec_ref_known(v_x_632_, 1);
v___x_636_ = lean_apply_1(v_h__2_634_, v_a_635_);
return v___x_636_;
}
else
{
lean_object* v_a_637_; lean_object* v___x_638_; 
lean_dec(v_h__2_634_);
v_a_637_ = lean_ctor_get(v_x_632_, 0);
lean_inc(v_a_637_);
lean_dec_ref_known(v_x_632_, 1);
v___x_638_ = lean_apply_1(v_h__1_633_, v_a_637_);
return v___x_638_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Lasm_RPC_Endpoint_decodeRequest_match__1_splitter(lean_object* v_motive_639_, lean_object* v_x_640_, lean_object* v_h__1_641_, lean_object* v_h__2_642_){
_start:
{
if (lean_obj_tag(v_x_640_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_644_; 
lean_dec(v_h__1_641_);
v_a_643_ = lean_ctor_get(v_x_640_, 0);
lean_inc(v_a_643_);
lean_dec_ref_known(v_x_640_, 1);
v___x_644_ = lean_apply_1(v_h__2_642_, v_a_643_);
return v___x_644_;
}
else
{
lean_object* v_a_645_; lean_object* v___x_646_; 
lean_dec(v_h__2_642_);
v_a_645_ = lean_ctor_get(v_x_640_, 0);
lean_inc(v_a_645_);
lean_dec_ref_known(v_x_640_, 1);
v___x_646_ = lean_apply_1(v_h__1_641_, v_a_645_);
return v___x_646_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse___redArg(lean_object* v_inst_649_, lean_object* v_x_650_){
_start:
{
if (lean_obj_tag(v_x_650_) == 0)
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_664_; 
lean_dec_ref(v_inst_649_);
v_a_651_ = lean_ctor_get(v_x_650_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v_x_650_);
if (v_isSharedCheck_664_ == 0)
{
v___x_653_ = v_x_650_;
v_isShared_654_ = v_isSharedCheck_664_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v_x_650_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_664_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_655_; lean_object* v___x_657_; 
v___x_655_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0));
if (v_isShared_654_ == 0)
{
lean_ctor_set_tag(v___x_653_, 3);
v___x_657_ = v___x_653_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_651_);
v___x_657_ = v_reuseFailAlloc_663_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_655_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
v___x_659_ = lean_box(0);
v___x_660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_658_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
v___x_661_ = l_Lean_Json_mkObj(v___x_660_);
lean_dec_ref_known(v___x_660_, 2);
v___x_662_ = l_Lean_Json_compress(v___x_661_);
return v___x_662_;
}
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v_a_665_ = lean_ctor_get(v_x_650_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v_x_650_, 1);
v___x_666_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1));
v___x_667_ = lean_apply_1(v_inst_649_, v_a_665_);
v___x_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_666_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = lean_box(0);
v___x_670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_668_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
v___x_671_ = l_Lean_Json_mkObj(v___x_670_);
lean_dec_ref_known(v___x_670_, 2);
v___x_672_ = l_Lean_Json_compress(v___x_671_);
return v___x_672_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse(lean_object* v_Req_673_, lean_object* v_Res_674_, lean_object* v_inst_675_, lean_object* v_x_676_, lean_object* v_x_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Lasm_RPC_Endpoint_encodeResponse___redArg(v_inst_675_, v_x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse___boxed(lean_object* v_Req_679_, lean_object* v_Res_680_, lean_object* v_inst_681_, lean_object* v_x_682_, lean_object* v_x_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lasm_RPC_Endpoint_encodeResponse(v_Req_679_, v_Res_680_, v_inst_681_, v_x_682_, v_x_683_);
lean_dec_ref(v_x_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse___redArg(lean_object* v_inst_691_, lean_object* v_status_692_, lean_object* v_body_693_){
_start:
{
lean_object* v___x_697_; 
lean_inc_ref(v_body_693_);
v___x_697_ = l_Lasm_RPC_parseJson(v_body_693_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_710_; 
lean_dec_ref(v_inst_691_);
v_a_698_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_710_ == 0)
{
v___x_700_ = v___x_697_;
v_isShared_701_ = v_isSharedCheck_710_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_697_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_710_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_702_; uint8_t v___x_703_; 
v___x_702_ = lean_unsigned_to_nat(200u);
v___x_703_ = lean_nat_dec_le(v___x_702_, v_status_692_);
if (v___x_703_ == 0)
{
lean_del_object(v___x_700_);
lean_dec(v_a_698_);
goto v___jp_694_;
}
else
{
lean_object* v___x_704_; uint8_t v___x_705_; 
v___x_704_ = lean_unsigned_to_nat(300u);
v___x_705_ = lean_nat_dec_lt(v_status_692_, v___x_704_);
if (v___x_705_ == 0)
{
lean_del_object(v___x_700_);
lean_dec(v_a_698_);
goto v___jp_694_;
}
else
{
lean_object* v___x_706_; lean_object* v___x_708_; 
lean_dec_ref(v_body_693_);
lean_dec(v_status_692_);
v___x_706_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_706_, 0, v_a_698_);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v___x_706_);
v___x_708_ = v___x_700_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v___x_706_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
}
else
{
lean_object* v_a_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
lean_dec_ref(v_body_693_);
v_a_711_ = lean_ctor_get(v___x_697_, 0);
lean_inc_n(v_a_711_, 2);
lean_dec_ref_known(v___x_697_, 1);
v___x_712_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1));
v___x_713_ = l_Lean_Json_getObjVal_x3f(v_a_711_, v___x_712_);
if (lean_obj_tag(v___x_713_) == 1)
{
lean_object* v_a_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_738_; 
lean_dec(v_a_711_);
lean_dec(v_status_692_);
v_a_714_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_738_ == 0)
{
v___x_716_ = v___x_713_;
v_isShared_717_ = v_isSharedCheck_738_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_a_714_);
lean_dec(v___x_713_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_738_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_718_; 
v___x_718_ = lean_apply_1(v_inst_691_, v_a_714_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_729_; 
v_a_719_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_729_ == 0)
{
v___x_721_ = v___x_718_;
v_isShared_722_ = v_isSharedCheck_729_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_718_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_729_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_717_ == 0)
{
lean_ctor_set_tag(v___x_716_, 2);
lean_ctor_set(v___x_716_, 0, v_a_719_);
v___x_724_ = v___x_716_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_719_);
v___x_724_ = v_reuseFailAlloc_728_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
lean_object* v___x_726_; 
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v___x_724_);
v___x_726_ = v___x_721_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_724_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
lean_del_object(v___x_716_);
v_a_730_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_718_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_718_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
}
else
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec_ref(v___x_713_);
lean_dec_ref(v_inst_691_);
v___x_739_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__0));
v___x_740_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0));
v___x_741_ = l_Lean_Json_getObjValAs_x3f___redArg(v_a_711_, v___x_739_, v___x_740_);
if (lean_obj_tag(v___x_741_) == 1)
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_756_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_756_ == 0)
{
v___x_744_ = v___x_741_;
v_isShared_745_ = v_isSharedCheck_756_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_741_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_756_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; uint8_t v___x_747_; 
v___x_746_ = lean_unsigned_to_nat(400u);
v___x_747_ = lean_nat_dec_eq(v_status_692_, v___x_746_);
if (v___x_747_ == 0)
{
lean_object* v___x_748_; lean_object* v___x_750_; 
v___x_748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_748_, 0, v_status_692_);
lean_ctor_set(v___x_748_, 1, v_a_742_);
if (v_isShared_745_ == 0)
{
lean_ctor_set_tag(v___x_744_, 0);
lean_ctor_set(v___x_744_, 0, v___x_748_);
v___x_750_ = v___x_744_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v___x_748_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
else
{
lean_object* v___x_752_; lean_object* v___x_754_; 
lean_dec(v_status_692_);
v___x_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_752_, 0, v_a_742_);
if (v_isShared_745_ == 0)
{
lean_ctor_set_tag(v___x_744_, 0);
lean_ctor_set(v___x_744_, 0, v___x_752_);
v___x_754_ = v___x_744_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v___x_752_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
else
{
lean_object* v___x_757_; 
lean_dec_ref(v___x_741_);
lean_dec(v_status_692_);
v___x_757_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__3));
return v___x_757_;
}
}
}
v___jp_694_:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_695_, 0, v_status_692_);
lean_ctor_set(v___x_695_, 1, v_body_693_);
v___x_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
return v___x_696_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse(lean_object* v_Req_758_, lean_object* v_Res_759_, lean_object* v_inst_760_, lean_object* v_x_761_, lean_object* v_status_762_, lean_object* v_body_763_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l_Lasm_RPC_Endpoint_decodeResponse___redArg(v_inst_760_, v_status_762_, v_body_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse___boxed(lean_object* v_Req_765_, lean_object* v_Res_766_, lean_object* v_inst_767_, lean_object* v_x_768_, lean_object* v_status_769_, lean_object* v_body_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Lasm_RPC_Endpoint_decodeResponse(v_Req_765_, v_Res_766_, v_inst_767_, v_x_768_, v_status_769_, v_body_770_);
lean_dec_ref(v_x_768_);
return v_res_771_;
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
