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
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___redArg(lean_object* v_e_236_){
_start:
{
lean_object* v_name_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v_name_237_ = lean_ctor_get(v_e_236_, 0);
v___x_238_ = ((lean_object*)(l_Lasm_RPC_Endpoint_path___redArg___closed__0));
v___x_239_ = lean_string_append(v___x_238_, v_name_237_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___redArg___boxed(lean_object* v_e_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_240_);
lean_dec_ref(v_e_240_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path(lean_object* v_Req_242_, lean_object* v_Res_243_, lean_object* v_e_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_path___boxed(lean_object* v_Req_246_, lean_object* v_Res_247_, lean_object* v_e_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Lasm_RPC_Endpoint_path(v_Req_246_, v_Res_247_, v_e_248_);
lean_dec_ref(v_e_248_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest___redArg(lean_object* v_inst_250_, lean_object* v_r_251_){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_apply_1(v_inst_250_, v_r_251_);
v___x_253_ = l_Lean_Json_compress(v___x_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest(lean_object* v_Req_254_, lean_object* v_Res_255_, lean_object* v_inst_256_, lean_object* v_x_257_, lean_object* v_r_258_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = l_Lasm_RPC_Endpoint_encodeRequest___redArg(v_inst_256_, v_r_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeRequest___boxed(lean_object* v_Req_260_, lean_object* v_Res_261_, lean_object* v_inst_262_, lean_object* v_x_263_, lean_object* v_r_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lasm_RPC_Endpoint_encodeRequest(v_Req_260_, v_Res_261_, v_inst_262_, v_x_263_, v_r_264_);
lean_dec_ref(v_x_263_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeRequest___redArg(lean_object* v_inst_268_, lean_object* v_e_269_, lean_object* v_body_270_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l_Lean_Json_parse(v_body_270_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_282_; 
lean_dec_ref(v_e_269_);
lean_dec_ref(v_inst_268_);
v_a_272_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_282_ == 0)
{
v___x_274_ = v___x_271_;
v_isShared_275_ = v_isSharedCheck_282_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_271_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_282_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_280_; 
v___x_276_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__0));
v___x_277_ = lean_string_append(v___x_276_, v_a_272_);
lean_dec(v_a_272_);
v___x_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 0, v___x_278_);
v___x_280_ = v___x_274_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_278_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
else
{
lean_object* v_a_283_; lean_object* v___x_284_; 
v_a_283_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_a_283_);
lean_dec_ref_known(v___x_271_, 1);
v___x_284_ = lean_apply_1(v_inst_268_, v_a_283_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_295_; 
lean_dec_ref(v_e_269_);
v_a_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_295_ == 0)
{
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_295_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_295_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_293_; 
v___x_289_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeRequest___redArg___closed__1));
v___x_290_ = lean_string_append(v___x_289_, v_a_285_);
lean_dec(v_a_285_);
v___x_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v___x_291_);
v___x_293_ = v___x_287_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v___x_291_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_314_; 
v_a_296_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_314_ == 0)
{
v___x_298_ = v___x_284_;
v_isShared_299_ = v_isSharedCheck_314_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_284_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_314_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v_validate_300_; lean_object* v___x_302_; 
v_validate_300_ = lean_ctor_get(v_e_269_, 1);
lean_inc_ref(v_validate_300_);
lean_dec_ref(v_e_269_);
lean_inc(v_a_296_);
if (v_isShared_299_ == 0)
{
v___x_302_ = v___x_298_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_a_296_);
v___x_302_ = v_reuseFailAlloc_313_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
lean_object* v___x_303_; 
v___x_303_ = lean_apply_1(v_validate_300_, v_a_296_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_312_; 
lean_dec_ref(v___x_302_);
v_a_304_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_312_ == 0)
{
v___x_306_ = v___x_303_;
v_isShared_307_ = v_isSharedCheck_312_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v___x_303_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_312_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_310_; 
v___x_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_308_, 0, v_a_304_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 0, v___x_308_);
v___x_310_ = v___x_306_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_308_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
else
{
lean_dec_ref_known(v___x_303_, 1);
return v___x_302_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeRequest(lean_object* v_Req_315_, lean_object* v_Res_316_, lean_object* v_inst_317_, lean_object* v_e_318_, lean_object* v_body_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lasm_RPC_Endpoint_decodeRequest___redArg(v_inst_317_, v_e_318_, v_body_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Except_map_match__1_splitter___redArg(lean_object* v_x_321_, lean_object* v_h__1_322_, lean_object* v_h__2_323_){
_start:
{
if (lean_obj_tag(v_x_321_) == 0)
{
lean_object* v_a_324_; lean_object* v___x_325_; 
lean_dec(v_h__2_323_);
v_a_324_ = lean_ctor_get(v_x_321_, 0);
lean_inc(v_a_324_);
lean_dec_ref_known(v_x_321_, 1);
v___x_325_ = lean_apply_1(v_h__1_322_, v_a_324_);
return v___x_325_;
}
else
{
lean_object* v_a_326_; lean_object* v___x_327_; 
lean_dec(v_h__1_322_);
v_a_326_ = lean_ctor_get(v_x_321_, 0);
lean_inc(v_a_326_);
lean_dec_ref_known(v_x_321_, 1);
v___x_327_ = lean_apply_1(v_h__2_323_, v_a_326_);
return v___x_327_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Except_map_match__1_splitter(lean_object* v_00_u03b5_328_, lean_object* v_00_u03b1_329_, lean_object* v_motive_330_, lean_object* v_x_331_, lean_object* v_h__1_332_, lean_object* v_h__2_333_){
_start:
{
if (lean_obj_tag(v_x_331_) == 0)
{
lean_object* v_a_334_; lean_object* v___x_335_; 
lean_dec(v_h__2_333_);
v_a_334_ = lean_ctor_get(v_x_331_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v_x_331_, 1);
v___x_335_ = lean_apply_1(v_h__1_332_, v_a_334_);
return v___x_335_;
}
else
{
lean_object* v_a_336_; lean_object* v___x_337_; 
lean_dec(v_h__1_332_);
v_a_336_ = lean_ctor_get(v_x_331_, 0);
lean_inc(v_a_336_);
lean_dec_ref_known(v_x_331_, 1);
v___x_337_ = lean_apply_1(v_h__2_333_, v_a_336_);
return v___x_337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Lasm_RPC_Endpoint_decodeRequest_match__1_splitter___redArg(lean_object* v_x_338_, lean_object* v_h__1_339_, lean_object* v_h__2_340_){
_start:
{
if (lean_obj_tag(v_x_338_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_342_; 
lean_dec(v_h__1_339_);
v_a_341_ = lean_ctor_get(v_x_338_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v_x_338_, 1);
v___x_342_ = lean_apply_1(v_h__2_340_, v_a_341_);
return v___x_342_;
}
else
{
lean_object* v_a_343_; lean_object* v___x_344_; 
lean_dec(v_h__2_340_);
v_a_343_ = lean_ctor_get(v_x_338_, 0);
lean_inc(v_a_343_);
lean_dec_ref_known(v_x_338_, 1);
v___x_344_ = lean_apply_1(v_h__1_339_, v_a_343_);
return v___x_344_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_RPC_Core_0__Lasm_RPC_Endpoint_decodeRequest_match__1_splitter(lean_object* v_motive_345_, lean_object* v_x_346_, lean_object* v_h__1_347_, lean_object* v_h__2_348_){
_start:
{
if (lean_obj_tag(v_x_346_) == 0)
{
lean_object* v_a_349_; lean_object* v___x_350_; 
lean_dec(v_h__1_347_);
v_a_349_ = lean_ctor_get(v_x_346_, 0);
lean_inc(v_a_349_);
lean_dec_ref_known(v_x_346_, 1);
v___x_350_ = lean_apply_1(v_h__2_348_, v_a_349_);
return v___x_350_;
}
else
{
lean_object* v_a_351_; lean_object* v___x_352_; 
lean_dec(v_h__2_348_);
v_a_351_ = lean_ctor_get(v_x_346_, 0);
lean_inc(v_a_351_);
lean_dec_ref_known(v_x_346_, 1);
v___x_352_ = lean_apply_1(v_h__1_347_, v_a_351_);
return v___x_352_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse___redArg(lean_object* v_inst_355_, lean_object* v_x_356_){
_start:
{
if (lean_obj_tag(v_x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_370_; 
lean_dec_ref(v_inst_355_);
v_a_357_ = lean_ctor_get(v_x_356_, 0);
v_isSharedCheck_370_ = !lean_is_exclusive(v_x_356_);
if (v_isSharedCheck_370_ == 0)
{
v___x_359_ = v_x_356_;
v_isShared_360_ = v_isSharedCheck_370_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v_x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_370_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; lean_object* v___x_363_; 
v___x_361_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0));
if (v_isShared_360_ == 0)
{
lean_ctor_set_tag(v___x_359_, 3);
v___x_363_ = v___x_359_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_a_357_);
v___x_363_ = v_reuseFailAlloc_369_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_361_);
lean_ctor_set(v___x_364_, 1, v___x_363_);
v___x_365_ = lean_box(0);
v___x_366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_364_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = l_Lean_Json_mkObj(v___x_366_);
lean_dec_ref_known(v___x_366_, 2);
v___x_368_ = l_Lean_Json_compress(v___x_367_);
return v___x_368_;
}
}
}
else
{
lean_object* v_a_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v_a_371_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v_x_356_, 1);
v___x_372_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1));
v___x_373_ = lean_apply_1(v_inst_355_, v_a_371_);
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_372_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = lean_box(0);
v___x_376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_374_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
v___x_377_ = l_Lean_Json_mkObj(v___x_376_);
lean_dec_ref_known(v___x_376_, 2);
v___x_378_ = l_Lean_Json_compress(v___x_377_);
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse(lean_object* v_Req_379_, lean_object* v_Res_380_, lean_object* v_inst_381_, lean_object* v_x_382_, lean_object* v_x_383_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = l_Lasm_RPC_Endpoint_encodeResponse___redArg(v_inst_381_, v_x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_encodeResponse___boxed(lean_object* v_Req_385_, lean_object* v_Res_386_, lean_object* v_inst_387_, lean_object* v_x_388_, lean_object* v_x_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lasm_RPC_Endpoint_encodeResponse(v_Req_385_, v_Res_386_, v_inst_387_, v_x_388_, v_x_389_);
lean_dec_ref(v_x_388_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse___redArg(lean_object* v_inst_397_, lean_object* v_status_398_, lean_object* v_body_399_){
_start:
{
lean_object* v___x_403_; 
lean_inc_ref(v_body_399_);
v___x_403_ = l_Lean_Json_parse(v_body_399_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_416_; 
lean_dec_ref(v_inst_397_);
v_a_404_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_416_ == 0)
{
v___x_406_ = v___x_403_;
v_isShared_407_ = v_isSharedCheck_416_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_403_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_416_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_408_ = lean_unsigned_to_nat(200u);
v___x_409_ = lean_nat_dec_le(v___x_408_, v_status_398_);
if (v___x_409_ == 0)
{
lean_del_object(v___x_406_);
lean_dec(v_a_404_);
goto v___jp_400_;
}
else
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = lean_unsigned_to_nat(300u);
v___x_411_ = lean_nat_dec_lt(v_status_398_, v___x_410_);
if (v___x_411_ == 0)
{
lean_del_object(v___x_406_);
lean_dec(v_a_404_);
goto v___jp_400_;
}
else
{
lean_object* v___x_412_; lean_object* v___x_414_; 
lean_dec_ref(v_body_399_);
lean_dec(v_status_398_);
v___x_412_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_412_, 0, v_a_404_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v___x_412_);
v___x_414_ = v___x_406_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_412_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
lean_dec_ref(v_body_399_);
v_a_417_ = lean_ctor_get(v___x_403_, 0);
lean_inc_n(v_a_417_, 2);
lean_dec_ref_known(v___x_403_, 1);
v___x_418_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__1));
v___x_419_ = l_Lean_Json_getObjVal_x3f(v_a_417_, v___x_418_);
if (lean_obj_tag(v___x_419_) == 1)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_444_; 
lean_dec(v_a_417_);
lean_dec(v_status_398_);
v_a_420_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_444_ == 0)
{
v___x_422_ = v___x_419_;
v_isShared_423_ = v_isSharedCheck_444_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_444_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; 
v___x_424_ = lean_apply_1(v_inst_397_, v_a_420_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_435_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_435_ == 0)
{
v___x_427_ = v___x_424_;
v_isShared_428_ = v_isSharedCheck_435_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_424_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_435_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_430_; 
if (v_isShared_423_ == 0)
{
lean_ctor_set_tag(v___x_422_, 2);
lean_ctor_set(v___x_422_, 0, v_a_425_);
v___x_430_ = v___x_422_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_425_);
v___x_430_ = v_reuseFailAlloc_434_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
lean_object* v___x_432_; 
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 0, v___x_430_);
v___x_432_ = v___x_427_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_430_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
lean_del_object(v___x_422_);
v_a_436_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_424_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_424_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
}
else
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
lean_dec_ref(v___x_419_);
lean_dec_ref(v_inst_397_);
v___x_445_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__0));
v___x_446_ = ((lean_object*)(l_Lasm_RPC_Endpoint_encodeResponse___redArg___closed__0));
v___x_447_ = l_Lean_Json_getObjValAs_x3f___redArg(v_a_417_, v___x_445_, v___x_446_);
if (lean_obj_tag(v___x_447_) == 1)
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_462_; 
v_a_448_ = lean_ctor_get(v___x_447_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_462_ == 0)
{
v___x_450_ = v___x_447_;
v_isShared_451_ = v_isSharedCheck_462_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_447_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_462_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_452_ = lean_unsigned_to_nat(400u);
v___x_453_ = lean_nat_dec_eq(v_status_398_, v___x_452_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; lean_object* v___x_456_; 
v___x_454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_454_, 0, v_status_398_);
lean_ctor_set(v___x_454_, 1, v_a_448_);
if (v_isShared_451_ == 0)
{
lean_ctor_set_tag(v___x_450_, 0);
lean_ctor_set(v___x_450_, 0, v___x_454_);
v___x_456_ = v___x_450_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_454_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
else
{
lean_object* v___x_458_; lean_object* v___x_460_; 
lean_dec(v_status_398_);
v___x_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_458_, 0, v_a_448_);
if (v_isShared_451_ == 0)
{
lean_ctor_set_tag(v___x_450_, 0);
lean_ctor_set(v___x_450_, 0, v___x_458_);
v___x_460_ = v___x_450_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_458_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
else
{
lean_object* v___x_463_; 
lean_dec_ref(v___x_447_);
lean_dec(v_status_398_);
v___x_463_ = ((lean_object*)(l_Lasm_RPC_Endpoint_decodeResponse___redArg___closed__3));
return v___x_463_;
}
}
}
v___jp_400_:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_401_, 0, v_status_398_);
lean_ctor_set(v___x_401_, 1, v_body_399_);
v___x_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
return v___x_402_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse(lean_object* v_Req_464_, lean_object* v_Res_465_, lean_object* v_inst_466_, lean_object* v_x_467_, lean_object* v_status_468_, lean_object* v_body_469_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_Lasm_RPC_Endpoint_decodeResponse___redArg(v_inst_466_, v_status_468_, v_body_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_decodeResponse___boxed(lean_object* v_Req_471_, lean_object* v_Res_472_, lean_object* v_inst_473_, lean_object* v_x_474_, lean_object* v_status_475_, lean_object* v_body_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lasm_RPC_Endpoint_decodeResponse(v_Req_471_, v_Res_472_, v_inst_473_, v_x_474_, v_status_475_, v_body_476_);
lean_dec_ref(v_x_474_);
return v_res_477_;
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
