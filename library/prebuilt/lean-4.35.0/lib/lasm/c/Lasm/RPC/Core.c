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
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___redArg(lean_object* v_e_239_){
_start:
{
lean_object* v_name_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v_name_240_ = lean_ctor_get(v_e_239_, 0);
v___x_241_ = ((lean_object*)(l_Lasm_RPC_Endpoint_path___redArg___closed__0));
v___x_242_ = lean_string_append(v___x_241_, v_name_240_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___redArg___boxed(lean_object* v_e_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_243_);
lean_dec_ref(v_e_243_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path(lean_object* v_Req_245_, lean_object* v_Res_246_, lean_object* v_e_247_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___boxed(lean_object* v_Req_249_, lean_object* v_Res_250_, lean_object* v_e_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lasm_RPC_Endpoint_path(v_Req_249_, v_Res_250_, v_e_251_);
lean_dec_ref(v_e_251_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest___redArg(lean_object* v_inst_253_, lean_object* v_r_254_){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = lean_apply_1(v_inst_253_, v_r_254_);
v___x_256_ = l_Lean_Json_compress(v___x_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest(lean_object* v_Req_257_, lean_object* v_Res_258_, lean_object* v_inst_259_, lean_object* v_x_260_, lean_object* v_r_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l_Lasm_RPC_Endpoint_encodeRequest___redArg(v_inst_259_, v_r_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest___boxed(lean_object* v_Req_263_, lean_object* v_Res_264_, lean_object* v_inst_265_, lean_object* v_x_266_, lean_object* v_r_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lasm_RPC_Endpoint_encodeRequest(v_Req_263_, v_Res_264_, v_inst_265_, v_x_266_, v_r_267_);
lean_dec_ref(v_x_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeRequest___redArg(lean_object* v_inst_271_, lean_object* v_e_272_, lean_object* v_body_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_Json_parse(v_body_273_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_285_; 
lean_dec_ref(v_e_272_);
lean_dec_ref(v_inst_271_);
v_a_275_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_285_ == 0)
{
v___x_277_ = v___x_274_;
v_isShared_278_ = v_isSharedCheck_285_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_274_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_285_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_283_; 
v___x_279_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__0));
v___x_280_ = lean_string_append(v___x_279_, v_a_275_);
lean_dec(v_a_275_);
v___x_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 0, v___x_281_);
v___x_283_ = v___x_277_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v___x_281_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
else
{
lean_object* v_a_286_; lean_object* v___x_287_; 
v_a_286_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_a_286_);
lean_dec_ref_known(v___x_274_, 1);
v___x_287_ = lean_apply_1(v_inst_271_, v_a_286_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_298_; 
lean_dec_ref(v_e_272_);
v_a_288_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_298_ == 0)
{
v___x_290_ = v___x_287_;
v_isShared_291_ = v_isSharedCheck_298_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_287_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_298_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_296_; 
v___x_292_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__1));
v___x_293_ = lean_string_append(v___x_292_, v_a_288_);
lean_dec(v_a_288_);
v___x_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v___x_294_);
v___x_296_ = v___x_290_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_294_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
}
else
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_317_; 
v_a_299_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_317_ == 0)
{
v___x_301_ = v___x_287_;
v_isShared_302_ = v_isSharedCheck_317_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v___x_287_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_317_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v_validate_303_; lean_object* v___x_305_; 
v_validate_303_ = lean_ctor_get(v_e_272_, 1);
lean_inc_ref(v_validate_303_);
lean_dec_ref(v_e_272_);
lean_inc(v_a_299_);
if (v_isShared_302_ == 0)
{
v___x_305_ = v___x_301_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_299_);
v___x_305_ = v_reuseFailAlloc_316_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
lean_object* v___x_306_; 
v___x_306_ = lean_apply_1(v_validate_303_, v_a_299_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_315_; 
lean_dec_ref(v___x_305_);
v_a_307_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_315_ == 0)
{
v___x_309_ = v___x_306_;
v_isShared_310_ = v_isSharedCheck_315_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_306_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_315_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_311_; lean_object* v___x_313_; 
v___x_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_311_, 0, v_a_307_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 0, v___x_311_);
v___x_313_ = v___x_309_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v___x_311_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
else
{
lean_dec_ref_known(v___x_306_, 1);
return v___x_305_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeRequest(lean_object* v_Req_318_, lean_object* v_Res_319_, lean_object* v_inst_320_, lean_object* v_e_321_, lean_object* v_body_322_){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = l_Lasm_RPC_Endpoint_decodeRequest___redArg(v_inst_320_, v_e_321_, v_body_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Except_map_match__1_splitter___redArg(lean_object* v_x_324_, lean_object* v_h__1_325_, lean_object* v_h__2_326_){
_start:
{
if (lean_obj_tag(v_x_324_) == 0)
{
lean_object* v_a_327_; lean_object* v___x_328_; 
lean_dec(v_h__2_326_);
v_a_327_ = lean_ctor_get(v_x_324_, 0);
lean_inc(v_a_327_);
lean_dec_ref_known(v_x_324_, 1);
v___x_328_ = lean_apply_1(v_h__1_325_, v_a_327_);
return v___x_328_;
}
else
{
lean_object* v_a_329_; lean_object* v___x_330_; 
lean_dec(v_h__1_325_);
v_a_329_ = lean_ctor_get(v_x_324_, 0);
lean_inc(v_a_329_);
lean_dec_ref_known(v_x_324_, 1);
v___x_330_ = lean_apply_1(v_h__2_326_, v_a_329_);
return v___x_330_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Except_map_match__1_splitter(lean_object* v_00_u03b5_331_, lean_object* v_00_u03b1_332_, lean_object* v_motive_333_, lean_object* v_x_334_, lean_object* v_h__1_335_, lean_object* v_h__2_336_){
_start:
{
if (lean_obj_tag(v_x_334_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_338_; 
lean_dec(v_h__2_336_);
v_a_337_ = lean_ctor_get(v_x_334_, 0);
lean_inc(v_a_337_);
lean_dec_ref_known(v_x_334_, 1);
v___x_338_ = lean_apply_1(v_h__1_335_, v_a_337_);
return v___x_338_;
}
else
{
lean_object* v_a_339_; lean_object* v___x_340_; 
lean_dec(v_h__1_335_);
v_a_339_ = lean_ctor_get(v_x_334_, 0);
lean_inc(v_a_339_);
lean_dec_ref_known(v_x_334_, 1);
v___x_340_ = lean_apply_1(v_h__2_336_, v_a_339_);
return v___x_340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Lasm_RPC_Endpoint_decodeRequest_match__1_splitter___redArg(lean_object* v_x_341_, lean_object* v_h__1_342_, lean_object* v_h__2_343_){
_start:
{
if (lean_obj_tag(v_x_341_) == 0)
{
lean_object* v_a_344_; lean_object* v___x_345_; 
lean_dec(v_h__1_342_);
v_a_344_ = lean_ctor_get(v_x_341_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v_x_341_, 1);
v___x_345_ = lean_apply_1(v_h__2_343_, v_a_344_);
return v___x_345_;
}
else
{
lean_object* v_a_346_; lean_object* v___x_347_; 
lean_dec(v_h__2_343_);
v_a_346_ = lean_ctor_get(v_x_341_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v_x_341_, 1);
v___x_347_ = lean_apply_1(v_h__1_342_, v_a_346_);
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Lasm_RPC_Endpoint_decodeRequest_match__1_splitter(lean_object* v_motive_348_, lean_object* v_x_349_, lean_object* v_h__1_350_, lean_object* v_h__2_351_){
_start:
{
if (lean_obj_tag(v_x_349_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_353_; 
lean_dec(v_h__1_350_);
v_a_352_ = lean_ctor_get(v_x_349_, 0);
lean_inc(v_a_352_);
lean_dec_ref_known(v_x_349_, 1);
v___x_353_ = lean_apply_1(v_h__2_351_, v_a_352_);
return v___x_353_;
}
else
{
lean_object* v_a_354_; lean_object* v___x_355_; 
lean_dec(v_h__2_351_);
v_a_354_ = lean_ctor_get(v_x_349_, 0);
lean_inc(v_a_354_);
lean_dec_ref_known(v_x_349_, 1);
v___x_355_ = lean_apply_1(v_h__1_350_, v_a_354_);
return v___x_355_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse___redArg(lean_object* v_inst_358_, lean_object* v_x_359_){
_start:
{
if (lean_obj_tag(v_x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_373_; 
lean_dec_ref(v_inst_358_);
v_a_360_ = lean_ctor_get(v_x_359_, 0);
v_isSharedCheck_373_ = !lean_is_exclusive(v_x_359_);
if (v_isSharedCheck_373_ == 0)
{
v___x_362_ = v_x_359_;
v_isShared_363_ = v_isSharedCheck_373_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v_x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_373_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_364_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0));
if (v_isShared_363_ == 0)
{
lean_ctor_set_tag(v___x_362_, 3);
v___x_366_ = v___x_362_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_a_360_);
v___x_366_ = v_reuseFailAlloc_372_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_364_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
v___x_368_ = lean_box(0);
v___x_369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_367_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
v___x_370_ = l_Lean_Json_mkObj(v___x_369_);
lean_dec_ref_known(v___x_369_, 2);
v___x_371_ = l_Lean_Json_compress(v___x_370_);
return v___x_371_;
}
}
}
else
{
lean_object* v_a_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v_a_374_ = lean_ctor_get(v_x_359_, 0);
lean_inc(v_a_374_);
lean_dec_ref_known(v_x_359_, 1);
v___x_375_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1));
v___x_376_ = lean_apply_1(v_inst_358_, v_a_374_);
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_375_);
lean_ctor_set(v___x_377_, 1, v___x_376_);
v___x_378_ = lean_box(0);
v___x_379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_377_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
v___x_380_ = l_Lean_Json_mkObj(v___x_379_);
lean_dec_ref_known(v___x_379_, 2);
v___x_381_ = l_Lean_Json_compress(v___x_380_);
return v___x_381_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse(lean_object* v_Req_382_, lean_object* v_Res_383_, lean_object* v_inst_384_, lean_object* v_x_385_, lean_object* v_x_386_){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = l_Lasm_RPC_Endpoint_encodeResponse___redArg(v_inst_384_, v_x_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse___boxed(lean_object* v_Req_388_, lean_object* v_Res_389_, lean_object* v_inst_390_, lean_object* v_x_391_, lean_object* v_x_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lasm_RPC_Endpoint_encodeResponse(v_Req_388_, v_Res_389_, v_inst_390_, v_x_391_, v_x_392_);
lean_dec_ref(v_x_391_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse___redArg(lean_object* v_inst_400_, lean_object* v_status_401_, lean_object* v_body_402_){
_start:
{
lean_object* v___x_406_; 
lean_inc_ref(v_body_402_);
v___x_406_ = l_Lean_Json_parse(v_body_402_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_419_; 
lean_dec_ref(v_inst_400_);
v_a_407_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_419_ == 0)
{
v___x_409_ = v___x_406_;
v_isShared_410_ = v_isSharedCheck_419_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_406_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_419_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_411_; uint8_t v___x_412_; 
v___x_411_ = lean_unsigned_to_nat(200u);
v___x_412_ = lean_nat_dec_le(v___x_411_, v_status_401_);
if (v___x_412_ == 0)
{
lean_del_object(v___x_409_);
lean_dec(v_a_407_);
goto v___jp_403_;
}
else
{
lean_object* v___x_413_; uint8_t v___x_414_; 
v___x_413_ = lean_unsigned_to_nat(300u);
v___x_414_ = lean_nat_dec_lt(v_status_401_, v___x_413_);
if (v___x_414_ == 0)
{
lean_del_object(v___x_409_);
lean_dec(v_a_407_);
goto v___jp_403_;
}
else
{
lean_object* v___x_415_; lean_object* v___x_417_; 
lean_dec_ref(v_body_402_);
lean_dec(v_status_401_);
v___x_415_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_415_, 0, v_a_407_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v___x_415_);
v___x_417_ = v___x_409_;
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
else
{
lean_object* v_a_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
lean_dec_ref(v_body_402_);
v_a_420_ = lean_ctor_get(v___x_406_, 0);
lean_inc_n(v_a_420_, 2);
lean_dec_ref_known(v___x_406_, 1);
v___x_421_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1));
v___x_422_ = l_Lean_Json_getObjVal_x3f(v_a_420_, v___x_421_);
if (lean_obj_tag(v___x_422_) == 1)
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_447_; 
lean_dec(v_a_420_);
lean_dec(v_status_401_);
v_a_423_ = lean_ctor_get(v___x_422_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_447_ == 0)
{
v___x_425_ = v___x_422_;
v_isShared_426_ = v_isSharedCheck_447_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_422_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_447_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_427_; 
v___x_427_ = lean_apply_1(v_inst_400_, v_a_423_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_438_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_438_ == 0)
{
v___x_430_ = v___x_427_;
v_isShared_431_ = v_isSharedCheck_438_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_427_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_438_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_426_ == 0)
{
lean_ctor_set_tag(v___x_425_, 2);
lean_ctor_set(v___x_425_, 0, v_a_428_);
v___x_433_ = v___x_425_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_a_428_);
v___x_433_ = v_reuseFailAlloc_437_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_435_; 
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 0, v___x_433_);
v___x_435_ = v___x_430_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_433_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
else
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
lean_del_object(v___x_425_);
v_a_439_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_446_ == 0)
{
v___x_441_ = v___x_427_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_427_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_442_ == 0)
{
v___x_444_ = v___x_441_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_439_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
}
else
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
lean_dec_ref(v___x_422_);
lean_dec_ref(v_inst_400_);
v___x_448_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__0));
v___x_449_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0));
v___x_450_ = l_Lean_Json_getObjValAs_x3f___redArg(v_a_420_, v___x_448_, v___x_449_);
if (lean_obj_tag(v___x_450_) == 1)
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_465_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_465_ == 0)
{
v___x_453_ = v___x_450_;
v_isShared_454_ = v_isSharedCheck_465_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_450_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_465_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_455_; uint8_t v___x_456_; 
v___x_455_ = lean_unsigned_to_nat(400u);
v___x_456_ = lean_nat_dec_eq(v_status_401_, v___x_455_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; lean_object* v___x_459_; 
v___x_457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_457_, 0, v_status_401_);
lean_ctor_set(v___x_457_, 1, v_a_451_);
if (v_isShared_454_ == 0)
{
lean_ctor_set_tag(v___x_453_, 0);
lean_ctor_set(v___x_453_, 0, v___x_457_);
v___x_459_ = v___x_453_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___x_457_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
else
{
lean_object* v___x_461_; lean_object* v___x_463_; 
lean_dec(v_status_401_);
v___x_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_461_, 0, v_a_451_);
if (v_isShared_454_ == 0)
{
lean_ctor_set_tag(v___x_453_, 0);
lean_ctor_set(v___x_453_, 0, v___x_461_);
v___x_463_ = v___x_453_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v___x_461_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
else
{
lean_object* v___x_466_; 
lean_dec_ref(v___x_450_);
lean_dec(v_status_401_);
v___x_466_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__3));
return v___x_466_;
}
}
}
v___jp_403_:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_404_, 0, v_status_401_);
lean_ctor_set(v___x_404_, 1, v_body_402_);
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
return v___x_405_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse(lean_object* v_Req_467_, lean_object* v_Res_468_, lean_object* v_inst_469_, lean_object* v_x_470_, lean_object* v_status_471_, lean_object* v_body_472_){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = l_Lasm_RPC_Endpoint_decodeResponse___redArg(v_inst_469_, v_status_471_, v_body_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse___boxed(lean_object* v_Req_474_, lean_object* v_Res_475_, lean_object* v_inst_476_, lean_object* v_x_477_, lean_object* v_status_478_, lean_object* v_body_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lasm_RPC_Endpoint_decodeResponse(v_Req_474_, v_Res_475_, v_inst_476_, v_x_477_, v_status_478_, v_body_479_);
lean_dec_ref(v_x_477_);
return v_res_480_;
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
