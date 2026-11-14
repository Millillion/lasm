// Lean compiler output
// Module: Lasm.WASI.Http.Types
// Imports: public import Init public meta import Init public import Lasm.WASI.Clocks.MonotonicClock public import Lasm.WASI.Io.Streams public import Lasm.WASI.Io.Error public import Lasm.WASI.Io.Poll
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
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint64_t lean_uint32_to_uint64(uint32_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* lean_uint64_to_nat(uint64_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_uint8_to_nat(uint8_t);
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedFields_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedFields;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqFields_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqFields_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqFields___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqFields_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqFields___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqFields___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqFields = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqFields___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableFields_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableFields_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instHashableFields___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instHashableFields_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instHashableFields___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableFields___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instHashableFields = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableFields___closed__0_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__0_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "handle"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__2_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__3_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__3_value),((lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__9;
static lean_once_cell_t l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__8_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprFields___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprFields_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprFields___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFields___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprFields = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFields___closed__0_value;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedIncomingRequest_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedIncomingRequest;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqIncomingRequest_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqIncomingRequest_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqIncomingRequest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqIncomingRequest_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqIncomingRequest___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqIncomingRequest___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqIncomingRequest = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqIncomingRequest___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableIncomingRequest_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableIncomingRequest_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instHashableIncomingRequest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instHashableIncomingRequest_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instHashableIncomingRequest___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableIncomingRequest___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instHashableIncomingRequest = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableIncomingRequest___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingRequest_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingRequest_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingRequest_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingRequest_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprIncomingRequest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprIncomingRequest_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprIncomingRequest___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprIncomingRequest___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprIncomingRequest = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprIncomingRequest___closed__0_value;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedOutgoingRequest_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedOutgoingRequest;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqOutgoingRequest_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqOutgoingRequest_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqOutgoingRequest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqOutgoingRequest_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqOutgoingRequest___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqOutgoingRequest___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqOutgoingRequest = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqOutgoingRequest___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableOutgoingRequest_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableOutgoingRequest_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instHashableOutgoingRequest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instHashableOutgoingRequest_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instHashableOutgoingRequest___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableOutgoingRequest___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instHashableOutgoingRequest = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableOutgoingRequest___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingRequest_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingRequest_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingRequest_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingRequest_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprOutgoingRequest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprOutgoingRequest_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingRequest___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprOutgoingRequest___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingRequest = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprOutgoingRequest___closed__0_value;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedRequestOptions_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedRequestOptions;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqRequestOptions_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqRequestOptions_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqRequestOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqRequestOptions_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqRequestOptions___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqRequestOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqRequestOptions = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqRequestOptions___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableRequestOptions_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableRequestOptions_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instHashableRequestOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instHashableRequestOptions_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instHashableRequestOptions___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableRequestOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instHashableRequestOptions = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableRequestOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprRequestOptions_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprRequestOptions_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprRequestOptions_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprRequestOptions_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprRequestOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprRequestOptions_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprRequestOptions___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprRequestOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprRequestOptions = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprRequestOptions___closed__0_value;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedResponseOutparam_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedResponseOutparam;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqResponseOutparam_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqResponseOutparam_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqResponseOutparam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqResponseOutparam_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqResponseOutparam___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqResponseOutparam___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqResponseOutparam = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqResponseOutparam___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableResponseOutparam_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableResponseOutparam_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instHashableResponseOutparam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instHashableResponseOutparam_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instHashableResponseOutparam___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableResponseOutparam___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instHashableResponseOutparam = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableResponseOutparam___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprResponseOutparam_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprResponseOutparam_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprResponseOutparam_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprResponseOutparam_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprResponseOutparam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprResponseOutparam_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprResponseOutparam___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprResponseOutparam___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprResponseOutparam = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprResponseOutparam___closed__0_value;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedIncomingResponse_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedIncomingResponse;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqIncomingResponse_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqIncomingResponse_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqIncomingResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqIncomingResponse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqIncomingResponse___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqIncomingResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqIncomingResponse = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqIncomingResponse___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableIncomingResponse_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableIncomingResponse_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instHashableIncomingResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instHashableIncomingResponse_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instHashableIncomingResponse___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableIncomingResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instHashableIncomingResponse = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableIncomingResponse___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingResponse_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingResponse_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingResponse_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingResponse_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprIncomingResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprIncomingResponse_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprIncomingResponse___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprIncomingResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprIncomingResponse = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprIncomingResponse___closed__0_value;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedIncomingBody_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedIncomingBody;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqIncomingBody_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqIncomingBody_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqIncomingBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqIncomingBody_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqIncomingBody___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqIncomingBody___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqIncomingBody = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqIncomingBody___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableIncomingBody_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableIncomingBody_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instHashableIncomingBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instHashableIncomingBody_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instHashableIncomingBody___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableIncomingBody___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instHashableIncomingBody = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableIncomingBody___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingBody_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingBody_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingBody_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingBody_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprIncomingBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprIncomingBody_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprIncomingBody___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprIncomingBody___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprIncomingBody = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprIncomingBody___closed__0_value;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedFutureTrailers_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedFutureTrailers;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqFutureTrailers_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqFutureTrailers_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqFutureTrailers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqFutureTrailers_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqFutureTrailers___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqFutureTrailers___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqFutureTrailers = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqFutureTrailers___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableFutureTrailers_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableFutureTrailers_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instHashableFutureTrailers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instHashableFutureTrailers_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instHashableFutureTrailers___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableFutureTrailers___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instHashableFutureTrailers = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableFutureTrailers___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureTrailers_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureTrailers_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureTrailers_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureTrailers_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprFutureTrailers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprFutureTrailers_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprFutureTrailers___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFutureTrailers___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprFutureTrailers = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFutureTrailers___closed__0_value;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedOutgoingResponse_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedOutgoingResponse;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqOutgoingResponse_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqOutgoingResponse_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqOutgoingResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqOutgoingResponse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqOutgoingResponse___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqOutgoingResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqOutgoingResponse = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqOutgoingResponse___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableOutgoingResponse_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableOutgoingResponse_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instHashableOutgoingResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instHashableOutgoingResponse_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instHashableOutgoingResponse___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableOutgoingResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instHashableOutgoingResponse = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableOutgoingResponse___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingResponse_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingResponse_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingResponse_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingResponse_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprOutgoingResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprOutgoingResponse_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingResponse___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprOutgoingResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingResponse = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprOutgoingResponse___closed__0_value;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedOutgoingBody_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedOutgoingBody;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqOutgoingBody_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqOutgoingBody_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqOutgoingBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqOutgoingBody_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqOutgoingBody___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqOutgoingBody___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqOutgoingBody = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqOutgoingBody___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableOutgoingBody_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableOutgoingBody_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instHashableOutgoingBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instHashableOutgoingBody_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instHashableOutgoingBody___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableOutgoingBody___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instHashableOutgoingBody = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableOutgoingBody___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingBody_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingBody_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingBody_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingBody_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprOutgoingBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprOutgoingBody_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingBody___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprOutgoingBody___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingBody = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprOutgoingBody___closed__0_value;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedFutureIncomingResponse_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Http_Types_instInhabitedFutureIncomingResponse;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqFutureIncomingResponse_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqFutureIncomingResponse_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqFutureIncomingResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqFutureIncomingResponse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqFutureIncomingResponse___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqFutureIncomingResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqFutureIncomingResponse = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqFutureIncomingResponse___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableFutureIncomingResponse_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableFutureIncomingResponse_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instHashableFutureIncomingResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instHashableFutureIncomingResponse_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instHashableFutureIncomingResponse___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableFutureIncomingResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instHashableFutureIncomingResponse = (const lean_object*)&l_Lasm_WASI_Http_Types_instHashableFutureIncomingResponse___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_get_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_get_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_head_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_head_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_post_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_post_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_put_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_put_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_delete_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_delete_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_connect_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_connect_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_options_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_options_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_trace_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_trace_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_patch_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_patch_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instInhabitedMethod_default;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instInhabitedMethod;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqMethod_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqMethod_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqMethod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqMethod_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqMethod___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqMethod___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqMethod = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqMethod___closed__0_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.WASI.Http.Types.Method.patch"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__0_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__0_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__1 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__1_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.WASI.Http.Types.Method.trace"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__2 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__2_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__2_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__3 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__3_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.WASI.Http.Types.Method.options"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__4 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__4_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__4_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__5 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__5_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.WASI.Http.Types.Method.connect"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__6 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__6_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__6_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__7 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__7_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.WASI.Http.Types.Method.delete"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__8 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__8_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__8_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__9 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__9_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.WASI.Http.Types.Method.put"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__10 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__10_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__10_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__11 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__11_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.WASI.Http.Types.Method.post"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__12 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__12_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__12_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__13 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__13_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.WASI.Http.Types.Method.head"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__14 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__14_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__14_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__15 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__15_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.WASI.Http.Types.Method.get"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__16 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__16_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__16_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__17 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__17_value;
static lean_once_cell_t l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18;
static lean_once_cell_t l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.WASI.Http.Types.Method.other"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__20 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__20_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__20_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__21 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__21_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__21_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__22 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__22_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprMethod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprMethod_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprMethod___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprMethod = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprMethod___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_http_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_http_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_https_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_https_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instInhabitedScheme_default;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instInhabitedScheme;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqScheme_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqScheme_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqScheme___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqScheme_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqScheme___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqScheme___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqScheme = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqScheme___closed__0_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.WASI.Http.Types.Scheme.https"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__0_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__0_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__1 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__1_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.WASI.Http.Types.Scheme.http"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__2 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__2_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__2_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__3 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__3_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.WASI.Http.Types.Scheme.other"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__4 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__4_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__4_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__5 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__5_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__6 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprScheme___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprScheme_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprScheme___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprScheme = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprScheme___closed__0_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instInhabitedDnsErrorPayload_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instInhabitedDnsErrorPayload_default___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instInhabitedDnsErrorPayload_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instInhabitedDnsErrorPayload_default = (const lean_object*)&l_Lasm_WASI_Http_Types_instInhabitedDnsErrorPayload_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instInhabitedDnsErrorPayload = (const lean_object*)&l_Lasm_WASI_Http_Types_instInhabitedDnsErrorPayload_default___closed__0_value;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload___closed__0_value;
static const lean_string_object l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rcode"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__2_value),((lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__4;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__6 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__6_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "infoCode"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__7 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__7_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprDnsErrorPayload___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload___closed__0_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instInhabitedTlsAlertReceivedPayload_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instInhabitedTlsAlertReceivedPayload_default___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instInhabitedTlsAlertReceivedPayload_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instInhabitedTlsAlertReceivedPayload_default = (const lean_object*)&l_Lasm_WASI_Http_Types_instInhabitedTlsAlertReceivedPayload_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instInhabitedTlsAlertReceivedPayload = (const lean_object*)&l_Lasm_WASI_Http_Types_instInhabitedTlsAlertReceivedPayload_default___closed__0_value;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload___closed__0_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "alertId"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__2_value),((lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__4;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "alertMessage"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__6 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload___closed__0_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instInhabitedFieldSizePayload_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instInhabitedFieldSizePayload_default___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instInhabitedFieldSizePayload_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instInhabitedFieldSizePayload_default = (const lean_object*)&l_Lasm_WASI_Http_Types_instInhabitedFieldSizePayload_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instInhabitedFieldSizePayload = (const lean_object*)&l_Lasm_WASI_Http_Types_instInhabitedFieldSizePayload_default___closed__0_value;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqFieldSizePayload___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqFieldSizePayload___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqFieldSizePayload___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqFieldSizePayload = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqFieldSizePayload___closed__0_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fieldName"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__2_value),((lean_object*)&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__4;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fieldSize"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__6 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprFieldSizePayload___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFieldSizePayload___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprFieldSizePayload___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_dnsTimeout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_dnsTimeout_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_dnsError_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_dnsError_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationNotFound_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationNotFound_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationUnavailable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationUnavailable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationIpProhibited_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationIpProhibited_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationIpUnroutable_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationIpUnroutable_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionRefused_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionRefused_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionTerminated_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionTerminated_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionTimeout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionTimeout_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionReadTimeout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionReadTimeout_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionWriteTimeout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionWriteTimeout_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionLimitReached_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionLimitReached_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsProtocolError_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsProtocolError_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsCertificateError_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsCertificateError_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsAlertReceived_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsAlertReceived_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestDenied_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestDenied_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestLengthRequired_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestLengthRequired_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestBodySize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestBodySize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestMethodInvalid_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestMethodInvalid_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestUriInvalid_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestUriInvalid_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestUriTooLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestUriTooLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestHeaderSectionSize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestHeaderSectionSize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestHeaderSize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestHeaderSize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestTrailerSectionSize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestTrailerSectionSize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestTrailerSize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestTrailerSize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseIncomplete_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseIncomplete_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseHeaderSectionSize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseHeaderSectionSize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseHeaderSize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseHeaderSize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseBodySize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseBodySize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTrailerSectionSize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTrailerSectionSize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTrailerSize_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTrailerSize_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTransferCoding_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTransferCoding_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseContentCoding_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseContentCoding_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTimeout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTimeout_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpUpgradeFailed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpUpgradeFailed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpProtocolError_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpProtocolError_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_loopDetected_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_loopDetected_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_configurationError_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_configurationError_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_internalError_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_internalError_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instInhabitedErrorCode_default;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instInhabitedErrorCode;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqErrorCode_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqErrorCode_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqErrorCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqErrorCode_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqErrorCode___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqErrorCode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqErrorCode = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqErrorCode___closed__0_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lasm.WASI.Http.Types.ErrorCode.configurationError"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__0_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__0_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__1 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__1_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lasm.WASI.Http.Types.ErrorCode.loopDetected"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__2 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__2_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__2_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__3 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__3_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpProtocolError"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__4 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__4_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__4_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__5 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__5_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpUpgradeFailed"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__6 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__6_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__6_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__7 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__7_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpResponseTimeout"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__8 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__8_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__8_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__9 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__9_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpRequestLengthRequired"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__10 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__10_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__10_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__11 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__11_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpRequestDenied"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__12 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__12_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__12_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__13 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__13_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.WASI.Http.Types.ErrorCode.dnsTimeout"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__14 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__14_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__14_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__15 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__15_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Lasm.WASI.Http.Types.ErrorCode.destinationNotFound"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__16 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__16_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__16_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__17 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__17_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Lasm.WASI.Http.Types.ErrorCode.destinationUnavailable"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__18 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__18_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__18_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__19 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__19_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Lasm.WASI.Http.Types.ErrorCode.destinationIpProhibited"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__20 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__20_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__20_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__21 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__21_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Lasm.WASI.Http.Types.ErrorCode.destinationIpUnroutable"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__22 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__22_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__22_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__23 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__23_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.WASI.Http.Types.ErrorCode.connectionRefused"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__24 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__24_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__24_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__25 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__25_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Lasm.WASI.Http.Types.ErrorCode.connectionTerminated"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__26 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__26_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__26_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__27 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__27_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.WASI.Http.Types.ErrorCode.connectionTimeout"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__28 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__28_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__28_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__29 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__29_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Lasm.WASI.Http.Types.ErrorCode.connectionReadTimeout"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__30 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__30_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__30_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__31 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__31_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Lasm.WASI.Http.Types.ErrorCode.connectionWriteTimeout"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__32 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__32_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__32_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__33 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__33_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Lasm.WASI.Http.Types.ErrorCode.connectionLimitReached"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__34 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__34_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__34_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__35 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__35_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lasm.WASI.Http.Types.ErrorCode.tlsProtocolError"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__36 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__36_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__36_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__37 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__37_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Lasm.WASI.Http.Types.ErrorCode.tlsCertificateError"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__38 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__38_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__38_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__39 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__39_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpRequestMethodInvalid"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__40 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__40_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__40_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__41 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__41_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpRequestUriInvalid"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__42 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__42_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__42_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__43 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__43_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpRequestUriTooLong"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__44 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__44_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__44_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__45 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__45_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpResponseIncomplete"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__46 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__46_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__46_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__47 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__47_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.WASI.Http.Types.ErrorCode.dnsError"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__48 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__48_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__48_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__49 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__49_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__49_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__50 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__50_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lasm.WASI.Http.Types.ErrorCode.tlsAlertReceived"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__51 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__51_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__51_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__52 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__52_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__52_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__53 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__53_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpRequestBodySize"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__54 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__54_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__54_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__55 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__55_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__55_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__56 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__56_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpRequestHeaderSectionSize"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__57 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__57_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__57_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__58 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__58_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__58_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__59 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__59_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpRequestHeaderSize"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__60 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__60_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__60_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__61 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__61_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__61_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__62 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__62_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpRequestTrailerSectionSize"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__63 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__63_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__63_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__64 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__64_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__64_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__65 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__65_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpRequestTrailerSize"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__66 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__66_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__66_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__67 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__67_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__67_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__68 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__68_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpResponseHeaderSectionSize"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__69 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__69_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__69_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__70 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__70_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__70_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__71 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__71_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpResponseHeaderSize"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__72 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__72_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__72_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__73 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__73_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__73_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__74 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__74_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpResponseBodySize"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__75 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__75_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__75_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__76 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__76_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__76_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__77 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__77_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpResponseTrailerSectionSize"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__78 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__78_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__78_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__79 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__79_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__79_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__80 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__80_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpResponseTrailerSize"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__81 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__81_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__81_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__82 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__82_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__82_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__83 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__83_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpResponseTransferCoding"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__84 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__84_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__84_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__85 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__85_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__85_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__86 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__86_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Lasm.WASI.Http.Types.ErrorCode.httpResponseContentCoding"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__87 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__87_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__87_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__88 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__88_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__88_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__89 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__89_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lasm.WASI.Http.Types.ErrorCode.internalError"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__90 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__90_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__90_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__91 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__91_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__91_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__92 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__92_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprErrorCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprErrorCode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprErrorCode___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_immutable_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_immutable_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_immutable_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_immutable_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instInhabitedHeaderError_default;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instInhabitedHeaderError;
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqHeaderError_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqHeaderError_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instBEqHeaderError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instBEqHeaderError_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instBEqHeaderError___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqHeaderError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instBEqHeaderError = (const lean_object*)&l_Lasm_WASI_Http_Types_instBEqHeaderError___closed__0_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Lasm.WASI.Http.Types.HeaderError.invalidSyntax"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__0_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__0_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__1 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__1_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lasm.WASI.Http.Types.HeaderError.forbidden"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__2 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__2_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__2_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__3 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__3_value;
static const lean_string_object l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lasm.WASI.Http.Types.HeaderError.immutable"};
static const lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__4 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__4_value;
static const lean_ctor_object l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__4_value)}};
static const lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__5 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Http_Types_instReprHeaderError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Http_Types_instReprHeaderError_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError___closed__0 = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprHeaderError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError = (const lean_object*)&l_Lasm_WASI_Http_Types_instReprHeaderError___closed__0_value;
lean_object* lasm_wasi_http_types_fields_new();
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_new___boxed(lean_object*);
lean_object* lasm_wasi_http_types_fields_from_list(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_fromList___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_fields_get(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_get___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_fields_has(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_has___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_fields_set(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_fields_delete(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_delete___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_fields_append(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_append___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_fields_entries(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_entries___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_fields_clone(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_clone___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_fields_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_request_method(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_method___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_request_path_with_query(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_pathWithQuery___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_request_scheme(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_scheme___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_request_authority(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_authority___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_request_headers(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_headers___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_request_consume(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_consume___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_request_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_request_new(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_new___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_request_body(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_body___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_request_method(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_method___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_request_set_method(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_setMethod___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_request_path_with_query(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_pathWithQuery___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_request_set_path_with_query(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_setPathWithQuery___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_request_scheme(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_scheme___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_request_set_scheme(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_setScheme___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_request_authority(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_authority___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_request_set_authority(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_setAuthority___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_request_headers(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_headers___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_request_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_request_options_new();
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_new___boxed(lean_object*);
lean_object* lasm_wasi_http_types_request_options_connect_timeout(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_connectTimeout___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_request_options_set_connect_timeout(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_setConnectTimeout___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_request_options_first_byte_timeout(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_firstByteTimeout___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_request_options_set_first_byte_timeout(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_setFirstByteTimeout___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_request_options_between_bytes_timeout(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_betweenBytesTimeout___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_request_options_set_between_bytes_timeout(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_setBetweenBytesTimeout___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_request_options_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_response_outparam_set(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ResponseOutparam_set___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_response_outparam_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ResponseOutparam_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_response_status(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingResponse_status___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_response_headers(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingResponse_headers___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_response_consume(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingResponse_consume___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_response_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingResponse_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_body_stream(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingBody_stream___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_body_finish(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingBody_finish___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_incoming_body_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingBody_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_future_trailers_subscribe(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureTrailers_subscribe___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_future_trailers_get(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureTrailers_get___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_future_trailers_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureTrailers_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_response_new(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_new___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_response_status_code(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_statusCode___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_response_set_status_code(uint32_t, uint16_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_setStatusCode___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_response_headers(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_headers___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_response_body(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_body___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_response_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_body_write(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingBody_write___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_body_finish(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingBody_finish___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_outgoing_body_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingBody_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_future_incoming_response_subscribe(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureIncomingResponse_subscribe___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_future_incoming_response_get(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureIncomingResponse_get___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_future_incoming_response_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureIncomingResponse_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_http_types_http_error_code(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_httpErrorCode___boxed(lean_object*, lean_object*);
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedFields_default(void){
_start:
{
uint32_t v___x_1_; 
v___x_1_ = 0;
return v___x_1_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedFields(void){
_start:
{
uint32_t v___x_2_; 
v___x_2_ = 0;
return v___x_2_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqFields_beq(uint32_t v_x_3_, uint32_t v_x_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_uint32_dec_eq(v_x_3_, v_x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqFields_beq___boxed(lean_object* v_x_6_, lean_object* v_x_7_){
_start:
{
uint32_t v_x_45__boxed_8_; uint32_t v_x_46__boxed_9_; uint8_t v_res_10_; lean_object* v_r_11_; 
v_x_45__boxed_8_ = lean_unbox_uint32(v_x_6_);
lean_dec(v_x_6_);
v_x_46__boxed_9_ = lean_unbox_uint32(v_x_7_);
lean_dec(v_x_7_);
v_res_10_ = l_Lasm_WASI_Http_Types_instBEqFields_beq(v_x_45__boxed_8_, v_x_46__boxed_9_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableFields_hash(uint32_t v_x_14_){
_start:
{
uint64_t v___x_15_; uint64_t v___x_16_; uint64_t v___x_17_; 
v___x_15_ = 0ULL;
v___x_16_ = lean_uint32_to_uint64(v_x_14_);
v___x_17_ = lean_uint64_mix_hash(v___x_15_, v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableFields_hash___boxed(lean_object* v_x_18_){
_start:
{
uint32_t v_x_26__boxed_19_; uint64_t v_res_20_; lean_object* v_r_21_; 
v_x_26__boxed_19_ = lean_unbox_uint32(v_x_18_);
lean_dec(v_x_18_);
v_res_20_ = l_Lasm_WASI_Http_Types_instHashableFields_hash(v_x_26__boxed_19_);
v_r_21_ = lean_box_uint64(v_res_20_);
return v_r_21_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_unsigned_to_nat(10u);
v___x_38_ = lean_nat_to_int(v___x_37_);
return v___x_38_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__0));
v___x_41_ = lean_string_length(v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__9, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__9_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__9);
v___x_43_ = lean_nat_to_int(v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg(uint32_t v_x_48_){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; uint8_t v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_49_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6));
v___x_50_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7);
v___x_51_ = lean_uint32_to_nat(v_x_48_);
v___x_52_ = l_Nat_reprFast(v___x_51_);
v___x_53_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
v___x_54_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_50_);
lean_ctor_set(v___x_54_, 1, v___x_53_);
v___x_55_ = 0;
v___x_56_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_56_, 0, v___x_54_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*1, v___x_55_);
v___x_57_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_49_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
v___x_58_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_59_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___x_57_);
v___x_61_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_58_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
v___x_64_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set_uint8(v___x_64_, sizeof(void*)*1, v___x_55_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___boxed(lean_object* v_x_65_){
_start:
{
uint32_t v_x_131__boxed_66_; lean_object* v_res_67_; 
v_x_131__boxed_66_ = lean_unbox_uint32(v_x_65_);
lean_dec(v_x_65_);
v_res_67_ = l_Lasm_WASI_Http_Types_instReprFields_repr___redArg(v_x_131__boxed_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr(uint32_t v_x_68_, lean_object* v_prec_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lasm_WASI_Http_Types_instReprFields_repr___redArg(v_x_68_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFields_repr___boxed(lean_object* v_x_71_, lean_object* v_prec_72_){
_start:
{
uint32_t v_x_190__boxed_73_; lean_object* v_res_74_; 
v_x_190__boxed_73_ = lean_unbox_uint32(v_x_71_);
lean_dec(v_x_71_);
v_res_74_ = l_Lasm_WASI_Http_Types_instReprFields_repr(v_x_190__boxed_73_, v_prec_72_);
lean_dec(v_prec_72_);
return v_res_74_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedIncomingRequest_default(void){
_start:
{
uint32_t v___x_77_; 
v___x_77_ = 0;
return v___x_77_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedIncomingRequest(void){
_start:
{
uint32_t v___x_78_; 
v___x_78_ = 0;
return v___x_78_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqIncomingRequest_beq(uint32_t v_x_79_, uint32_t v_x_80_){
_start:
{
uint8_t v___x_81_; 
v___x_81_ = lean_uint32_dec_eq(v_x_79_, v_x_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqIncomingRequest_beq___boxed(lean_object* v_x_82_, lean_object* v_x_83_){
_start:
{
uint32_t v_x_45__boxed_84_; uint32_t v_x_46__boxed_85_; uint8_t v_res_86_; lean_object* v_r_87_; 
v_x_45__boxed_84_ = lean_unbox_uint32(v_x_82_);
lean_dec(v_x_82_);
v_x_46__boxed_85_ = lean_unbox_uint32(v_x_83_);
lean_dec(v_x_83_);
v_res_86_ = l_Lasm_WASI_Http_Types_instBEqIncomingRequest_beq(v_x_45__boxed_84_, v_x_46__boxed_85_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableIncomingRequest_hash(uint32_t v_x_90_){
_start:
{
uint64_t v___x_91_; uint64_t v___x_92_; uint64_t v___x_93_; 
v___x_91_ = 0ULL;
v___x_92_ = lean_uint32_to_uint64(v_x_90_);
v___x_93_ = lean_uint64_mix_hash(v___x_91_, v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableIncomingRequest_hash___boxed(lean_object* v_x_94_){
_start:
{
uint32_t v_x_26__boxed_95_; uint64_t v_res_96_; lean_object* v_r_97_; 
v_x_26__boxed_95_ = lean_unbox_uint32(v_x_94_);
lean_dec(v_x_94_);
v_res_96_ = l_Lasm_WASI_Http_Types_instHashableIncomingRequest_hash(v_x_26__boxed_95_);
v_r_97_ = lean_box_uint64(v_res_96_);
return v_r_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingRequest_repr___redArg(uint32_t v_x_100_){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_101_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6));
v___x_102_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7);
v___x_103_ = lean_uint32_to_nat(v_x_100_);
v___x_104_ = l_Nat_reprFast(v___x_103_);
v___x_105_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
v___x_106_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_102_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
v___x_107_ = 0;
v___x_108_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set_uint8(v___x_108_, sizeof(void*)*1, v___x_107_);
v___x_109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_101_);
lean_ctor_set(v___x_109_, 1, v___x_108_);
v___x_110_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_111_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_112_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set(v___x_112_, 1, v___x_109_);
v___x_113_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_114_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_112_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
v___x_115_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_110_);
lean_ctor_set(v___x_115_, 1, v___x_114_);
v___x_116_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_116_, 0, v___x_115_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*1, v___x_107_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingRequest_repr___redArg___boxed(lean_object* v_x_117_){
_start:
{
uint32_t v_x_107__boxed_118_; lean_object* v_res_119_; 
v_x_107__boxed_118_ = lean_unbox_uint32(v_x_117_);
lean_dec(v_x_117_);
v_res_119_ = l_Lasm_WASI_Http_Types_instReprIncomingRequest_repr___redArg(v_x_107__boxed_118_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingRequest_repr(uint32_t v_x_120_, lean_object* v_prec_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lasm_WASI_Http_Types_instReprIncomingRequest_repr___redArg(v_x_120_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingRequest_repr___boxed(lean_object* v_x_123_, lean_object* v_prec_124_){
_start:
{
uint32_t v_x_152__boxed_125_; lean_object* v_res_126_; 
v_x_152__boxed_125_ = lean_unbox_uint32(v_x_123_);
lean_dec(v_x_123_);
v_res_126_ = l_Lasm_WASI_Http_Types_instReprIncomingRequest_repr(v_x_152__boxed_125_, v_prec_124_);
lean_dec(v_prec_124_);
return v_res_126_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedOutgoingRequest_default(void){
_start:
{
uint32_t v___x_129_; 
v___x_129_ = 0;
return v___x_129_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedOutgoingRequest(void){
_start:
{
uint32_t v___x_130_; 
v___x_130_ = 0;
return v___x_130_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqOutgoingRequest_beq(uint32_t v_x_131_, uint32_t v_x_132_){
_start:
{
uint8_t v___x_133_; 
v___x_133_ = lean_uint32_dec_eq(v_x_131_, v_x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqOutgoingRequest_beq___boxed(lean_object* v_x_134_, lean_object* v_x_135_){
_start:
{
uint32_t v_x_45__boxed_136_; uint32_t v_x_46__boxed_137_; uint8_t v_res_138_; lean_object* v_r_139_; 
v_x_45__boxed_136_ = lean_unbox_uint32(v_x_134_);
lean_dec(v_x_134_);
v_x_46__boxed_137_ = lean_unbox_uint32(v_x_135_);
lean_dec(v_x_135_);
v_res_138_ = l_Lasm_WASI_Http_Types_instBEqOutgoingRequest_beq(v_x_45__boxed_136_, v_x_46__boxed_137_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableOutgoingRequest_hash(uint32_t v_x_142_){
_start:
{
uint64_t v___x_143_; uint64_t v___x_144_; uint64_t v___x_145_; 
v___x_143_ = 0ULL;
v___x_144_ = lean_uint32_to_uint64(v_x_142_);
v___x_145_ = lean_uint64_mix_hash(v___x_143_, v___x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableOutgoingRequest_hash___boxed(lean_object* v_x_146_){
_start:
{
uint32_t v_x_26__boxed_147_; uint64_t v_res_148_; lean_object* v_r_149_; 
v_x_26__boxed_147_ = lean_unbox_uint32(v_x_146_);
lean_dec(v_x_146_);
v_res_148_ = l_Lasm_WASI_Http_Types_instHashableOutgoingRequest_hash(v_x_26__boxed_147_);
v_r_149_ = lean_box_uint64(v_res_148_);
return v_r_149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingRequest_repr___redArg(uint32_t v_x_152_){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_153_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6));
v___x_154_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7);
v___x_155_ = lean_uint32_to_nat(v_x_152_);
v___x_156_ = l_Nat_reprFast(v___x_155_);
v___x_157_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
v___x_158_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_158_, 0, v___x_154_);
lean_ctor_set(v___x_158_, 1, v___x_157_);
v___x_159_ = 0;
v___x_160_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_160_, 0, v___x_158_);
lean_ctor_set_uint8(v___x_160_, sizeof(void*)*1, v___x_159_);
v___x_161_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_153_);
lean_ctor_set(v___x_161_, 1, v___x_160_);
v___x_162_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_163_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v___x_161_);
v___x_165_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_166_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_164_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_162_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
v___x_168_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_168_, 0, v___x_167_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*1, v___x_159_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingRequest_repr___redArg___boxed(lean_object* v_x_169_){
_start:
{
uint32_t v_x_107__boxed_170_; lean_object* v_res_171_; 
v_x_107__boxed_170_ = lean_unbox_uint32(v_x_169_);
lean_dec(v_x_169_);
v_res_171_ = l_Lasm_WASI_Http_Types_instReprOutgoingRequest_repr___redArg(v_x_107__boxed_170_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingRequest_repr(uint32_t v_x_172_, lean_object* v_prec_173_){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = l_Lasm_WASI_Http_Types_instReprOutgoingRequest_repr___redArg(v_x_172_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingRequest_repr___boxed(lean_object* v_x_175_, lean_object* v_prec_176_){
_start:
{
uint32_t v_x_152__boxed_177_; lean_object* v_res_178_; 
v_x_152__boxed_177_ = lean_unbox_uint32(v_x_175_);
lean_dec(v_x_175_);
v_res_178_ = l_Lasm_WASI_Http_Types_instReprOutgoingRequest_repr(v_x_152__boxed_177_, v_prec_176_);
lean_dec(v_prec_176_);
return v_res_178_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedRequestOptions_default(void){
_start:
{
uint32_t v___x_181_; 
v___x_181_ = 0;
return v___x_181_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedRequestOptions(void){
_start:
{
uint32_t v___x_182_; 
v___x_182_ = 0;
return v___x_182_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqRequestOptions_beq(uint32_t v_x_183_, uint32_t v_x_184_){
_start:
{
uint8_t v___x_185_; 
v___x_185_ = lean_uint32_dec_eq(v_x_183_, v_x_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqRequestOptions_beq___boxed(lean_object* v_x_186_, lean_object* v_x_187_){
_start:
{
uint32_t v_x_45__boxed_188_; uint32_t v_x_46__boxed_189_; uint8_t v_res_190_; lean_object* v_r_191_; 
v_x_45__boxed_188_ = lean_unbox_uint32(v_x_186_);
lean_dec(v_x_186_);
v_x_46__boxed_189_ = lean_unbox_uint32(v_x_187_);
lean_dec(v_x_187_);
v_res_190_ = l_Lasm_WASI_Http_Types_instBEqRequestOptions_beq(v_x_45__boxed_188_, v_x_46__boxed_189_);
v_r_191_ = lean_box(v_res_190_);
return v_r_191_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableRequestOptions_hash(uint32_t v_x_194_){
_start:
{
uint64_t v___x_195_; uint64_t v___x_196_; uint64_t v___x_197_; 
v___x_195_ = 0ULL;
v___x_196_ = lean_uint32_to_uint64(v_x_194_);
v___x_197_ = lean_uint64_mix_hash(v___x_195_, v___x_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableRequestOptions_hash___boxed(lean_object* v_x_198_){
_start:
{
uint32_t v_x_26__boxed_199_; uint64_t v_res_200_; lean_object* v_r_201_; 
v_x_26__boxed_199_ = lean_unbox_uint32(v_x_198_);
lean_dec(v_x_198_);
v_res_200_ = l_Lasm_WASI_Http_Types_instHashableRequestOptions_hash(v_x_26__boxed_199_);
v_r_201_ = lean_box_uint64(v_res_200_);
return v_r_201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprRequestOptions_repr___redArg(uint32_t v_x_204_){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_205_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6));
v___x_206_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7);
v___x_207_ = lean_uint32_to_nat(v_x_204_);
v___x_208_ = l_Nat_reprFast(v___x_207_);
v___x_209_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
v___x_210_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_206_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = 0;
v___x_212_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_212_, 0, v___x_210_);
lean_ctor_set_uint8(v___x_212_, sizeof(void*)*1, v___x_211_);
v___x_213_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_205_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
v___x_214_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_215_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_216_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v___x_213_);
v___x_217_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_214_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set_uint8(v___x_220_, sizeof(void*)*1, v___x_211_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprRequestOptions_repr___redArg___boxed(lean_object* v_x_221_){
_start:
{
uint32_t v_x_107__boxed_222_; lean_object* v_res_223_; 
v_x_107__boxed_222_ = lean_unbox_uint32(v_x_221_);
lean_dec(v_x_221_);
v_res_223_ = l_Lasm_WASI_Http_Types_instReprRequestOptions_repr___redArg(v_x_107__boxed_222_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprRequestOptions_repr(uint32_t v_x_224_, lean_object* v_prec_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lasm_WASI_Http_Types_instReprRequestOptions_repr___redArg(v_x_224_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprRequestOptions_repr___boxed(lean_object* v_x_227_, lean_object* v_prec_228_){
_start:
{
uint32_t v_x_152__boxed_229_; lean_object* v_res_230_; 
v_x_152__boxed_229_ = lean_unbox_uint32(v_x_227_);
lean_dec(v_x_227_);
v_res_230_ = l_Lasm_WASI_Http_Types_instReprRequestOptions_repr(v_x_152__boxed_229_, v_prec_228_);
lean_dec(v_prec_228_);
return v_res_230_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedResponseOutparam_default(void){
_start:
{
uint32_t v___x_233_; 
v___x_233_ = 0;
return v___x_233_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedResponseOutparam(void){
_start:
{
uint32_t v___x_234_; 
v___x_234_ = 0;
return v___x_234_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqResponseOutparam_beq(uint32_t v_x_235_, uint32_t v_x_236_){
_start:
{
uint8_t v___x_237_; 
v___x_237_ = lean_uint32_dec_eq(v_x_235_, v_x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqResponseOutparam_beq___boxed(lean_object* v_x_238_, lean_object* v_x_239_){
_start:
{
uint32_t v_x_45__boxed_240_; uint32_t v_x_46__boxed_241_; uint8_t v_res_242_; lean_object* v_r_243_; 
v_x_45__boxed_240_ = lean_unbox_uint32(v_x_238_);
lean_dec(v_x_238_);
v_x_46__boxed_241_ = lean_unbox_uint32(v_x_239_);
lean_dec(v_x_239_);
v_res_242_ = l_Lasm_WASI_Http_Types_instBEqResponseOutparam_beq(v_x_45__boxed_240_, v_x_46__boxed_241_);
v_r_243_ = lean_box(v_res_242_);
return v_r_243_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableResponseOutparam_hash(uint32_t v_x_246_){
_start:
{
uint64_t v___x_247_; uint64_t v___x_248_; uint64_t v___x_249_; 
v___x_247_ = 0ULL;
v___x_248_ = lean_uint32_to_uint64(v_x_246_);
v___x_249_ = lean_uint64_mix_hash(v___x_247_, v___x_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableResponseOutparam_hash___boxed(lean_object* v_x_250_){
_start:
{
uint32_t v_x_26__boxed_251_; uint64_t v_res_252_; lean_object* v_r_253_; 
v_x_26__boxed_251_ = lean_unbox_uint32(v_x_250_);
lean_dec(v_x_250_);
v_res_252_ = l_Lasm_WASI_Http_Types_instHashableResponseOutparam_hash(v_x_26__boxed_251_);
v_r_253_ = lean_box_uint64(v_res_252_);
return v_r_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprResponseOutparam_repr___redArg(uint32_t v_x_256_){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_257_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6));
v___x_258_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7);
v___x_259_ = lean_uint32_to_nat(v_x_256_);
v___x_260_ = l_Nat_reprFast(v___x_259_);
v___x_261_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
v___x_262_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_258_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = 0;
v___x_264_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set_uint8(v___x_264_, sizeof(void*)*1, v___x_263_);
v___x_265_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_257_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
v___x_266_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_267_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_268_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set(v___x_268_, 1, v___x_265_);
v___x_269_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_268_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___x_271_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_266_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
v___x_272_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set_uint8(v___x_272_, sizeof(void*)*1, v___x_263_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprResponseOutparam_repr___redArg___boxed(lean_object* v_x_273_){
_start:
{
uint32_t v_x_107__boxed_274_; lean_object* v_res_275_; 
v_x_107__boxed_274_ = lean_unbox_uint32(v_x_273_);
lean_dec(v_x_273_);
v_res_275_ = l_Lasm_WASI_Http_Types_instReprResponseOutparam_repr___redArg(v_x_107__boxed_274_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprResponseOutparam_repr(uint32_t v_x_276_, lean_object* v_prec_277_){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lasm_WASI_Http_Types_instReprResponseOutparam_repr___redArg(v_x_276_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprResponseOutparam_repr___boxed(lean_object* v_x_279_, lean_object* v_prec_280_){
_start:
{
uint32_t v_x_152__boxed_281_; lean_object* v_res_282_; 
v_x_152__boxed_281_ = lean_unbox_uint32(v_x_279_);
lean_dec(v_x_279_);
v_res_282_ = l_Lasm_WASI_Http_Types_instReprResponseOutparam_repr(v_x_152__boxed_281_, v_prec_280_);
lean_dec(v_prec_280_);
return v_res_282_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedIncomingResponse_default(void){
_start:
{
uint32_t v___x_285_; 
v___x_285_ = 0;
return v___x_285_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedIncomingResponse(void){
_start:
{
uint32_t v___x_286_; 
v___x_286_ = 0;
return v___x_286_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqIncomingResponse_beq(uint32_t v_x_287_, uint32_t v_x_288_){
_start:
{
uint8_t v___x_289_; 
v___x_289_ = lean_uint32_dec_eq(v_x_287_, v_x_288_);
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqIncomingResponse_beq___boxed(lean_object* v_x_290_, lean_object* v_x_291_){
_start:
{
uint32_t v_x_45__boxed_292_; uint32_t v_x_46__boxed_293_; uint8_t v_res_294_; lean_object* v_r_295_; 
v_x_45__boxed_292_ = lean_unbox_uint32(v_x_290_);
lean_dec(v_x_290_);
v_x_46__boxed_293_ = lean_unbox_uint32(v_x_291_);
lean_dec(v_x_291_);
v_res_294_ = l_Lasm_WASI_Http_Types_instBEqIncomingResponse_beq(v_x_45__boxed_292_, v_x_46__boxed_293_);
v_r_295_ = lean_box(v_res_294_);
return v_r_295_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableIncomingResponse_hash(uint32_t v_x_298_){
_start:
{
uint64_t v___x_299_; uint64_t v___x_300_; uint64_t v___x_301_; 
v___x_299_ = 0ULL;
v___x_300_ = lean_uint32_to_uint64(v_x_298_);
v___x_301_ = lean_uint64_mix_hash(v___x_299_, v___x_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableIncomingResponse_hash___boxed(lean_object* v_x_302_){
_start:
{
uint32_t v_x_26__boxed_303_; uint64_t v_res_304_; lean_object* v_r_305_; 
v_x_26__boxed_303_ = lean_unbox_uint32(v_x_302_);
lean_dec(v_x_302_);
v_res_304_ = l_Lasm_WASI_Http_Types_instHashableIncomingResponse_hash(v_x_26__boxed_303_);
v_r_305_ = lean_box_uint64(v_res_304_);
return v_r_305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingResponse_repr___redArg(uint32_t v_x_308_){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; uint8_t v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_309_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6));
v___x_310_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7);
v___x_311_ = lean_uint32_to_nat(v_x_308_);
v___x_312_ = l_Nat_reprFast(v___x_311_);
v___x_313_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
v___x_314_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_310_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
v___x_315_ = 0;
v___x_316_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_316_, 0, v___x_314_);
lean_ctor_set_uint8(v___x_316_, sizeof(void*)*1, v___x_315_);
v___x_317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_309_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
v___x_318_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_319_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v___x_317_);
v___x_321_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_322_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_320_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
v___x_323_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_318_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_324_, 0, v___x_323_);
lean_ctor_set_uint8(v___x_324_, sizeof(void*)*1, v___x_315_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingResponse_repr___redArg___boxed(lean_object* v_x_325_){
_start:
{
uint32_t v_x_107__boxed_326_; lean_object* v_res_327_; 
v_x_107__boxed_326_ = lean_unbox_uint32(v_x_325_);
lean_dec(v_x_325_);
v_res_327_ = l_Lasm_WASI_Http_Types_instReprIncomingResponse_repr___redArg(v_x_107__boxed_326_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingResponse_repr(uint32_t v_x_328_, lean_object* v_prec_329_){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = l_Lasm_WASI_Http_Types_instReprIncomingResponse_repr___redArg(v_x_328_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingResponse_repr___boxed(lean_object* v_x_331_, lean_object* v_prec_332_){
_start:
{
uint32_t v_x_152__boxed_333_; lean_object* v_res_334_; 
v_x_152__boxed_333_ = lean_unbox_uint32(v_x_331_);
lean_dec(v_x_331_);
v_res_334_ = l_Lasm_WASI_Http_Types_instReprIncomingResponse_repr(v_x_152__boxed_333_, v_prec_332_);
lean_dec(v_prec_332_);
return v_res_334_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedIncomingBody_default(void){
_start:
{
uint32_t v___x_337_; 
v___x_337_ = 0;
return v___x_337_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedIncomingBody(void){
_start:
{
uint32_t v___x_338_; 
v___x_338_ = 0;
return v___x_338_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqIncomingBody_beq(uint32_t v_x_339_, uint32_t v_x_340_){
_start:
{
uint8_t v___x_341_; 
v___x_341_ = lean_uint32_dec_eq(v_x_339_, v_x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqIncomingBody_beq___boxed(lean_object* v_x_342_, lean_object* v_x_343_){
_start:
{
uint32_t v_x_45__boxed_344_; uint32_t v_x_46__boxed_345_; uint8_t v_res_346_; lean_object* v_r_347_; 
v_x_45__boxed_344_ = lean_unbox_uint32(v_x_342_);
lean_dec(v_x_342_);
v_x_46__boxed_345_ = lean_unbox_uint32(v_x_343_);
lean_dec(v_x_343_);
v_res_346_ = l_Lasm_WASI_Http_Types_instBEqIncomingBody_beq(v_x_45__boxed_344_, v_x_46__boxed_345_);
v_r_347_ = lean_box(v_res_346_);
return v_r_347_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableIncomingBody_hash(uint32_t v_x_350_){
_start:
{
uint64_t v___x_351_; uint64_t v___x_352_; uint64_t v___x_353_; 
v___x_351_ = 0ULL;
v___x_352_ = lean_uint32_to_uint64(v_x_350_);
v___x_353_ = lean_uint64_mix_hash(v___x_351_, v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableIncomingBody_hash___boxed(lean_object* v_x_354_){
_start:
{
uint32_t v_x_26__boxed_355_; uint64_t v_res_356_; lean_object* v_r_357_; 
v_x_26__boxed_355_ = lean_unbox_uint32(v_x_354_);
lean_dec(v_x_354_);
v_res_356_ = l_Lasm_WASI_Http_Types_instHashableIncomingBody_hash(v_x_26__boxed_355_);
v_r_357_ = lean_box_uint64(v_res_356_);
return v_r_357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingBody_repr___redArg(uint32_t v_x_360_){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_361_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6));
v___x_362_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7);
v___x_363_ = lean_uint32_to_nat(v_x_360_);
v___x_364_ = l_Nat_reprFast(v___x_363_);
v___x_365_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
v___x_366_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_362_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = 0;
v___x_368_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_368_, 0, v___x_366_);
lean_ctor_set_uint8(v___x_368_, sizeof(void*)*1, v___x_367_);
v___x_369_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_361_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
v___x_370_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_371_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_372_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v___x_369_);
v___x_373_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_374_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_372_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_370_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
v___x_376_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_376_, 0, v___x_375_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*1, v___x_367_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingBody_repr___redArg___boxed(lean_object* v_x_377_){
_start:
{
uint32_t v_x_107__boxed_378_; lean_object* v_res_379_; 
v_x_107__boxed_378_ = lean_unbox_uint32(v_x_377_);
lean_dec(v_x_377_);
v_res_379_ = l_Lasm_WASI_Http_Types_instReprIncomingBody_repr___redArg(v_x_107__boxed_378_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingBody_repr(uint32_t v_x_380_, lean_object* v_prec_381_){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = l_Lasm_WASI_Http_Types_instReprIncomingBody_repr___redArg(v_x_380_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprIncomingBody_repr___boxed(lean_object* v_x_383_, lean_object* v_prec_384_){
_start:
{
uint32_t v_x_152__boxed_385_; lean_object* v_res_386_; 
v_x_152__boxed_385_ = lean_unbox_uint32(v_x_383_);
lean_dec(v_x_383_);
v_res_386_ = l_Lasm_WASI_Http_Types_instReprIncomingBody_repr(v_x_152__boxed_385_, v_prec_384_);
lean_dec(v_prec_384_);
return v_res_386_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedFutureTrailers_default(void){
_start:
{
uint32_t v___x_389_; 
v___x_389_ = 0;
return v___x_389_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedFutureTrailers(void){
_start:
{
uint32_t v___x_390_; 
v___x_390_ = 0;
return v___x_390_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqFutureTrailers_beq(uint32_t v_x_391_, uint32_t v_x_392_){
_start:
{
uint8_t v___x_393_; 
v___x_393_ = lean_uint32_dec_eq(v_x_391_, v_x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqFutureTrailers_beq___boxed(lean_object* v_x_394_, lean_object* v_x_395_){
_start:
{
uint32_t v_x_45__boxed_396_; uint32_t v_x_46__boxed_397_; uint8_t v_res_398_; lean_object* v_r_399_; 
v_x_45__boxed_396_ = lean_unbox_uint32(v_x_394_);
lean_dec(v_x_394_);
v_x_46__boxed_397_ = lean_unbox_uint32(v_x_395_);
lean_dec(v_x_395_);
v_res_398_ = l_Lasm_WASI_Http_Types_instBEqFutureTrailers_beq(v_x_45__boxed_396_, v_x_46__boxed_397_);
v_r_399_ = lean_box(v_res_398_);
return v_r_399_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableFutureTrailers_hash(uint32_t v_x_402_){
_start:
{
uint64_t v___x_403_; uint64_t v___x_404_; uint64_t v___x_405_; 
v___x_403_ = 0ULL;
v___x_404_ = lean_uint32_to_uint64(v_x_402_);
v___x_405_ = lean_uint64_mix_hash(v___x_403_, v___x_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableFutureTrailers_hash___boxed(lean_object* v_x_406_){
_start:
{
uint32_t v_x_26__boxed_407_; uint64_t v_res_408_; lean_object* v_r_409_; 
v_x_26__boxed_407_ = lean_unbox_uint32(v_x_406_);
lean_dec(v_x_406_);
v_res_408_ = l_Lasm_WASI_Http_Types_instHashableFutureTrailers_hash(v_x_26__boxed_407_);
v_r_409_ = lean_box_uint64(v_res_408_);
return v_r_409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureTrailers_repr___redArg(uint32_t v_x_412_){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_413_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6));
v___x_414_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7);
v___x_415_ = lean_uint32_to_nat(v_x_412_);
v___x_416_ = l_Nat_reprFast(v___x_415_);
v___x_417_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
v___x_418_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_414_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
v___x_419_ = 0;
v___x_420_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_420_, 0, v___x_418_);
lean_ctor_set_uint8(v___x_420_, sizeof(void*)*1, v___x_419_);
v___x_421_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_413_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
v___x_422_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_423_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_424_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
lean_ctor_set(v___x_424_, 1, v___x_421_);
v___x_425_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_426_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_424_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
v___x_427_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_422_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
v___x_428_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_428_, 0, v___x_427_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*1, v___x_419_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureTrailers_repr___redArg___boxed(lean_object* v_x_429_){
_start:
{
uint32_t v_x_107__boxed_430_; lean_object* v_res_431_; 
v_x_107__boxed_430_ = lean_unbox_uint32(v_x_429_);
lean_dec(v_x_429_);
v_res_431_ = l_Lasm_WASI_Http_Types_instReprFutureTrailers_repr___redArg(v_x_107__boxed_430_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureTrailers_repr(uint32_t v_x_432_, lean_object* v_prec_433_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l_Lasm_WASI_Http_Types_instReprFutureTrailers_repr___redArg(v_x_432_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureTrailers_repr___boxed(lean_object* v_x_435_, lean_object* v_prec_436_){
_start:
{
uint32_t v_x_152__boxed_437_; lean_object* v_res_438_; 
v_x_152__boxed_437_ = lean_unbox_uint32(v_x_435_);
lean_dec(v_x_435_);
v_res_438_ = l_Lasm_WASI_Http_Types_instReprFutureTrailers_repr(v_x_152__boxed_437_, v_prec_436_);
lean_dec(v_prec_436_);
return v_res_438_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedOutgoingResponse_default(void){
_start:
{
uint32_t v___x_441_; 
v___x_441_ = 0;
return v___x_441_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedOutgoingResponse(void){
_start:
{
uint32_t v___x_442_; 
v___x_442_ = 0;
return v___x_442_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqOutgoingResponse_beq(uint32_t v_x_443_, uint32_t v_x_444_){
_start:
{
uint8_t v___x_445_; 
v___x_445_ = lean_uint32_dec_eq(v_x_443_, v_x_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqOutgoingResponse_beq___boxed(lean_object* v_x_446_, lean_object* v_x_447_){
_start:
{
uint32_t v_x_45__boxed_448_; uint32_t v_x_46__boxed_449_; uint8_t v_res_450_; lean_object* v_r_451_; 
v_x_45__boxed_448_ = lean_unbox_uint32(v_x_446_);
lean_dec(v_x_446_);
v_x_46__boxed_449_ = lean_unbox_uint32(v_x_447_);
lean_dec(v_x_447_);
v_res_450_ = l_Lasm_WASI_Http_Types_instBEqOutgoingResponse_beq(v_x_45__boxed_448_, v_x_46__boxed_449_);
v_r_451_ = lean_box(v_res_450_);
return v_r_451_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableOutgoingResponse_hash(uint32_t v_x_454_){
_start:
{
uint64_t v___x_455_; uint64_t v___x_456_; uint64_t v___x_457_; 
v___x_455_ = 0ULL;
v___x_456_ = lean_uint32_to_uint64(v_x_454_);
v___x_457_ = lean_uint64_mix_hash(v___x_455_, v___x_456_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableOutgoingResponse_hash___boxed(lean_object* v_x_458_){
_start:
{
uint32_t v_x_26__boxed_459_; uint64_t v_res_460_; lean_object* v_r_461_; 
v_x_26__boxed_459_ = lean_unbox_uint32(v_x_458_);
lean_dec(v_x_458_);
v_res_460_ = l_Lasm_WASI_Http_Types_instHashableOutgoingResponse_hash(v_x_26__boxed_459_);
v_r_461_ = lean_box_uint64(v_res_460_);
return v_r_461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingResponse_repr___redArg(uint32_t v_x_464_){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_465_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6));
v___x_466_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7);
v___x_467_ = lean_uint32_to_nat(v_x_464_);
v___x_468_ = l_Nat_reprFast(v___x_467_);
v___x_469_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
v___x_470_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_466_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = 0;
v___x_472_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_472_, 0, v___x_470_);
lean_ctor_set_uint8(v___x_472_, sizeof(void*)*1, v___x_471_);
v___x_473_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_465_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_475_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_476_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
lean_ctor_set(v___x_476_, 1, v___x_473_);
v___x_477_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_478_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_478_, 0, v___x_476_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
v___x_479_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_474_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set_uint8(v___x_480_, sizeof(void*)*1, v___x_471_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingResponse_repr___redArg___boxed(lean_object* v_x_481_){
_start:
{
uint32_t v_x_107__boxed_482_; lean_object* v_res_483_; 
v_x_107__boxed_482_ = lean_unbox_uint32(v_x_481_);
lean_dec(v_x_481_);
v_res_483_ = l_Lasm_WASI_Http_Types_instReprOutgoingResponse_repr___redArg(v_x_107__boxed_482_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingResponse_repr(uint32_t v_x_484_, lean_object* v_prec_485_){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l_Lasm_WASI_Http_Types_instReprOutgoingResponse_repr___redArg(v_x_484_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingResponse_repr___boxed(lean_object* v_x_487_, lean_object* v_prec_488_){
_start:
{
uint32_t v_x_152__boxed_489_; lean_object* v_res_490_; 
v_x_152__boxed_489_ = lean_unbox_uint32(v_x_487_);
lean_dec(v_x_487_);
v_res_490_ = l_Lasm_WASI_Http_Types_instReprOutgoingResponse_repr(v_x_152__boxed_489_, v_prec_488_);
lean_dec(v_prec_488_);
return v_res_490_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedOutgoingBody_default(void){
_start:
{
uint32_t v___x_493_; 
v___x_493_ = 0;
return v___x_493_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedOutgoingBody(void){
_start:
{
uint32_t v___x_494_; 
v___x_494_ = 0;
return v___x_494_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqOutgoingBody_beq(uint32_t v_x_495_, uint32_t v_x_496_){
_start:
{
uint8_t v___x_497_; 
v___x_497_ = lean_uint32_dec_eq(v_x_495_, v_x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqOutgoingBody_beq___boxed(lean_object* v_x_498_, lean_object* v_x_499_){
_start:
{
uint32_t v_x_45__boxed_500_; uint32_t v_x_46__boxed_501_; uint8_t v_res_502_; lean_object* v_r_503_; 
v_x_45__boxed_500_ = lean_unbox_uint32(v_x_498_);
lean_dec(v_x_498_);
v_x_46__boxed_501_ = lean_unbox_uint32(v_x_499_);
lean_dec(v_x_499_);
v_res_502_ = l_Lasm_WASI_Http_Types_instBEqOutgoingBody_beq(v_x_45__boxed_500_, v_x_46__boxed_501_);
v_r_503_ = lean_box(v_res_502_);
return v_r_503_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableOutgoingBody_hash(uint32_t v_x_506_){
_start:
{
uint64_t v___x_507_; uint64_t v___x_508_; uint64_t v___x_509_; 
v___x_507_ = 0ULL;
v___x_508_ = lean_uint32_to_uint64(v_x_506_);
v___x_509_ = lean_uint64_mix_hash(v___x_507_, v___x_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableOutgoingBody_hash___boxed(lean_object* v_x_510_){
_start:
{
uint32_t v_x_26__boxed_511_; uint64_t v_res_512_; lean_object* v_r_513_; 
v_x_26__boxed_511_ = lean_unbox_uint32(v_x_510_);
lean_dec(v_x_510_);
v_res_512_ = l_Lasm_WASI_Http_Types_instHashableOutgoingBody_hash(v_x_26__boxed_511_);
v_r_513_ = lean_box_uint64(v_res_512_);
return v_r_513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingBody_repr___redArg(uint32_t v_x_516_){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; uint8_t v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_517_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6));
v___x_518_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7);
v___x_519_ = lean_uint32_to_nat(v_x_516_);
v___x_520_ = l_Nat_reprFast(v___x_519_);
v___x_521_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
v___x_522_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_522_, 0, v___x_518_);
lean_ctor_set(v___x_522_, 1, v___x_521_);
v___x_523_ = 0;
v___x_524_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_524_, 0, v___x_522_);
lean_ctor_set_uint8(v___x_524_, sizeof(void*)*1, v___x_523_);
v___x_525_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_517_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
v___x_526_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_527_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_528_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
lean_ctor_set(v___x_528_, 1, v___x_525_);
v___x_529_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_530_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_526_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_532_, 0, v___x_531_);
lean_ctor_set_uint8(v___x_532_, sizeof(void*)*1, v___x_523_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingBody_repr___redArg___boxed(lean_object* v_x_533_){
_start:
{
uint32_t v_x_107__boxed_534_; lean_object* v_res_535_; 
v_x_107__boxed_534_ = lean_unbox_uint32(v_x_533_);
lean_dec(v_x_533_);
v_res_535_ = l_Lasm_WASI_Http_Types_instReprOutgoingBody_repr___redArg(v_x_107__boxed_534_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingBody_repr(uint32_t v_x_536_, lean_object* v_prec_537_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l_Lasm_WASI_Http_Types_instReprOutgoingBody_repr___redArg(v_x_536_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprOutgoingBody_repr___boxed(lean_object* v_x_539_, lean_object* v_prec_540_){
_start:
{
uint32_t v_x_152__boxed_541_; lean_object* v_res_542_; 
v_x_152__boxed_541_ = lean_unbox_uint32(v_x_539_);
lean_dec(v_x_539_);
v_res_542_ = l_Lasm_WASI_Http_Types_instReprOutgoingBody_repr(v_x_152__boxed_541_, v_prec_540_);
lean_dec(v_prec_540_);
return v_res_542_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedFutureIncomingResponse_default(void){
_start:
{
uint32_t v___x_545_; 
v___x_545_ = 0;
return v___x_545_;
}
}
static uint32_t _init_l_Lasm_WASI_Http_Types_instInhabitedFutureIncomingResponse(void){
_start:
{
uint32_t v___x_546_; 
v___x_546_ = 0;
return v___x_546_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqFutureIncomingResponse_beq(uint32_t v_x_547_, uint32_t v_x_548_){
_start:
{
uint8_t v___x_549_; 
v___x_549_ = lean_uint32_dec_eq(v_x_547_, v_x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqFutureIncomingResponse_beq___boxed(lean_object* v_x_550_, lean_object* v_x_551_){
_start:
{
uint32_t v_x_45__boxed_552_; uint32_t v_x_46__boxed_553_; uint8_t v_res_554_; lean_object* v_r_555_; 
v_x_45__boxed_552_ = lean_unbox_uint32(v_x_550_);
lean_dec(v_x_550_);
v_x_46__boxed_553_ = lean_unbox_uint32(v_x_551_);
lean_dec(v_x_551_);
v_res_554_ = l_Lasm_WASI_Http_Types_instBEqFutureIncomingResponse_beq(v_x_45__boxed_552_, v_x_46__boxed_553_);
v_r_555_ = lean_box(v_res_554_);
return v_r_555_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Http_Types_instHashableFutureIncomingResponse_hash(uint32_t v_x_558_){
_start:
{
uint64_t v___x_559_; uint64_t v___x_560_; uint64_t v___x_561_; 
v___x_559_ = 0ULL;
v___x_560_ = lean_uint32_to_uint64(v_x_558_);
v___x_561_ = lean_uint64_mix_hash(v___x_559_, v___x_560_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instHashableFutureIncomingResponse_hash___boxed(lean_object* v_x_562_){
_start:
{
uint32_t v_x_26__boxed_563_; uint64_t v_res_564_; lean_object* v_r_565_; 
v_x_26__boxed_563_ = lean_unbox_uint32(v_x_562_);
lean_dec(v_x_562_);
v_res_564_ = l_Lasm_WASI_Http_Types_instHashableFutureIncomingResponse_hash(v_x_26__boxed_563_);
v_r_565_ = lean_box_uint64(v_res_564_);
return v_r_565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse_repr___redArg(uint32_t v_x_568_){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; uint8_t v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_569_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__6));
v___x_570_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__7);
v___x_571_ = lean_uint32_to_nat(v_x_568_);
v___x_572_ = l_Nat_reprFast(v___x_571_);
v___x_573_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
v___x_574_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_574_, 0, v___x_570_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
v___x_575_ = 0;
v___x_576_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_576_, 0, v___x_574_);
lean_ctor_set_uint8(v___x_576_, sizeof(void*)*1, v___x_575_);
v___x_577_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_577_, 0, v___x_569_);
lean_ctor_set(v___x_577_, 1, v___x_576_);
v___x_578_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_579_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_580_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
lean_ctor_set(v___x_580_, 1, v___x_577_);
v___x_581_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_582_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_582_, 0, v___x_580_);
lean_ctor_set(v___x_582_, 1, v___x_581_);
v___x_583_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_578_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_584_, 0, v___x_583_);
lean_ctor_set_uint8(v___x_584_, sizeof(void*)*1, v___x_575_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse_repr___redArg___boxed(lean_object* v_x_585_){
_start:
{
uint32_t v_x_107__boxed_586_; lean_object* v_res_587_; 
v_x_107__boxed_586_ = lean_unbox_uint32(v_x_585_);
lean_dec(v_x_585_);
v_res_587_ = l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse_repr___redArg(v_x_107__boxed_586_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse_repr(uint32_t v_x_588_, lean_object* v_prec_589_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse_repr___redArg(v_x_588_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse_repr___boxed(lean_object* v_x_591_, lean_object* v_prec_592_){
_start:
{
uint32_t v_x_152__boxed_593_; lean_object* v_res_594_; 
v_x_152__boxed_593_ = lean_unbox_uint32(v_x_591_);
lean_dec(v_x_591_);
v_res_594_ = l_Lasm_WASI_Http_Types_instReprFutureIncomingResponse_repr(v_x_152__boxed_593_, v_prec_592_);
lean_dec(v_prec_592_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorIdx___impl(lean_object* v_x_597_){
_start:
{
lean_object* v___x_598_; 
v___x_598_ = lean_obj_tag_nat(v_x_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorIdx___impl___boxed(lean_object* v_x_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lasm_WASI_Http_Types_Method_ctorIdx___impl(v_x_599_);
lean_dec(v_x_599_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(lean_object* v_t_601_, lean_object* v_k_602_){
_start:
{
if (lean_obj_tag(v_t_601_) == 9)
{
lean_object* v_payload_603_; lean_object* v___x_604_; 
v_payload_603_ = lean_ctor_get(v_t_601_, 0);
lean_inc_ref(v_payload_603_);
lean_dec_ref_known(v_t_601_, 1);
v___x_604_ = lean_apply_1(v_k_602_, v_payload_603_);
return v___x_604_;
}
else
{
lean_dec(v_t_601_);
return v_k_602_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorElim(lean_object* v_motive_605_, lean_object* v_ctorIdx_606_, lean_object* v_t_607_, lean_object* v_h_608_, lean_object* v_k_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_607_, v_k_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorElim___boxed(lean_object* v_motive_611_, lean_object* v_ctorIdx_612_, lean_object* v_t_613_, lean_object* v_h_614_, lean_object* v_k_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lasm_WASI_Http_Types_Method_ctorElim(v_motive_611_, v_ctorIdx_612_, v_t_613_, v_h_614_, v_k_615_);
lean_dec(v_ctorIdx_612_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_get_elim___redArg(lean_object* v_t_617_, lean_object* v_get_618_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_617_, v_get_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_get_elim(lean_object* v_motive_620_, lean_object* v_t_621_, lean_object* v_h_622_, lean_object* v_get_623_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_621_, v_get_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_head_elim___redArg(lean_object* v_t_625_, lean_object* v_head_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_625_, v_head_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_head_elim(lean_object* v_motive_628_, lean_object* v_t_629_, lean_object* v_h_630_, lean_object* v_head_631_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_629_, v_head_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_post_elim___redArg(lean_object* v_t_633_, lean_object* v_post_634_){
_start:
{
lean_object* v___x_635_; 
v___x_635_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_633_, v_post_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_post_elim(lean_object* v_motive_636_, lean_object* v_t_637_, lean_object* v_h_638_, lean_object* v_post_639_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_637_, v_post_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_put_elim___redArg(lean_object* v_t_641_, lean_object* v_put_642_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_641_, v_put_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_put_elim(lean_object* v_motive_644_, lean_object* v_t_645_, lean_object* v_h_646_, lean_object* v_put_647_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_645_, v_put_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_delete_elim___redArg(lean_object* v_t_649_, lean_object* v_delete_650_){
_start:
{
lean_object* v___x_651_; 
v___x_651_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_649_, v_delete_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_delete_elim(lean_object* v_motive_652_, lean_object* v_t_653_, lean_object* v_h_654_, lean_object* v_delete_655_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_653_, v_delete_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_connect_elim___redArg(lean_object* v_t_657_, lean_object* v_connect_658_){
_start:
{
lean_object* v___x_659_; 
v___x_659_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_657_, v_connect_658_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_connect_elim(lean_object* v_motive_660_, lean_object* v_t_661_, lean_object* v_h_662_, lean_object* v_connect_663_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_661_, v_connect_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_options_elim___redArg(lean_object* v_t_665_, lean_object* v_options_666_){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_665_, v_options_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_options_elim(lean_object* v_motive_668_, lean_object* v_t_669_, lean_object* v_h_670_, lean_object* v_options_671_){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_669_, v_options_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_trace_elim___redArg(lean_object* v_t_673_, lean_object* v_trace_674_){
_start:
{
lean_object* v___x_675_; 
v___x_675_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_673_, v_trace_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_trace_elim(lean_object* v_motive_676_, lean_object* v_t_677_, lean_object* v_h_678_, lean_object* v_trace_679_){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_677_, v_trace_679_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_patch_elim___redArg(lean_object* v_t_681_, lean_object* v_patch_682_){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_681_, v_patch_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_patch_elim(lean_object* v_motive_684_, lean_object* v_t_685_, lean_object* v_h_686_, lean_object* v_patch_687_){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_685_, v_patch_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_other_elim___redArg(lean_object* v_t_689_, lean_object* v_other_690_){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_689_, v_other_690_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_other_elim(lean_object* v_motive_692_, lean_object* v_t_693_, lean_object* v_h_694_, lean_object* v_other_695_){
_start:
{
lean_object* v___x_696_; 
v___x_696_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_693_, v_other_695_);
return v___x_696_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instInhabitedMethod_default(void){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = lean_box(0);
return v___x_697_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instInhabitedMethod(void){
_start:
{
lean_object* v___x_698_; 
v___x_698_ = lean_box(0);
return v___x_698_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqMethod_beq(lean_object* v_x_699_, lean_object* v_x_700_){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; uint8_t v_decide_703_; 
v___x_701_ = lean_obj_tag_nat(v_x_699_);
v___x_702_ = lean_obj_tag_nat(v_x_700_);
v_decide_703_ = lean_nat_dec_eq(v___x_701_, v___x_702_);
if (v_decide_703_ == 0)
{
return v_decide_703_;
}
else
{
if (lean_obj_tag(v_x_699_) == 9)
{
lean_object* v_payload_704_; lean_object* v_payload_705_; uint8_t v___x_706_; 
v_payload_704_ = lean_ctor_get(v_x_699_, 0);
v_payload_705_ = lean_ctor_get(v_x_700_, 0);
v___x_706_ = lean_string_dec_eq(v_payload_704_, v_payload_705_);
return v___x_706_;
}
else
{
return v_decide_703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqMethod_beq___boxed(lean_object* v_x_707_, lean_object* v_x_708_){
_start:
{
uint8_t v_res_709_; lean_object* v_r_710_; 
v_res_709_ = l_Lasm_WASI_Http_Types_instBEqMethod_beq(v_x_707_, v_x_708_);
lean_dec(v_x_708_);
lean_dec(v_x_707_);
v_r_710_ = lean_box(v_res_709_);
return v_r_710_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18(void){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_740_ = lean_unsigned_to_nat(2u);
v___x_741_ = lean_nat_to_int(v___x_740_);
return v___x_741_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19(void){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = lean_unsigned_to_nat(1u);
v___x_743_ = lean_nat_to_int(v___x_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr(lean_object* v_x_750_, lean_object* v_prec_751_){
_start:
{
lean_object* v___y_753_; lean_object* v___y_760_; lean_object* v___y_767_; lean_object* v___y_774_; lean_object* v___y_781_; lean_object* v___y_788_; lean_object* v___y_795_; lean_object* v___y_802_; lean_object* v___y_809_; 
switch(lean_obj_tag(v_x_750_))
{
case 0:
{
lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_815_ = lean_unsigned_to_nat(1024u);
v___x_816_ = lean_nat_dec_le(v___x_815_, v_prec_751_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; 
v___x_817_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_809_ = v___x_817_;
goto v___jp_808_;
}
else
{
lean_object* v___x_818_; 
v___x_818_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_809_ = v___x_818_;
goto v___jp_808_;
}
}
case 1:
{
lean_object* v___x_819_; uint8_t v___x_820_; 
v___x_819_ = lean_unsigned_to_nat(1024u);
v___x_820_ = lean_nat_dec_le(v___x_819_, v_prec_751_);
if (v___x_820_ == 0)
{
lean_object* v___x_821_; 
v___x_821_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_802_ = v___x_821_;
goto v___jp_801_;
}
else
{
lean_object* v___x_822_; 
v___x_822_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_802_ = v___x_822_;
goto v___jp_801_;
}
}
case 2:
{
lean_object* v___x_823_; uint8_t v___x_824_; 
v___x_823_ = lean_unsigned_to_nat(1024u);
v___x_824_ = lean_nat_dec_le(v___x_823_, v_prec_751_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; 
v___x_825_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_795_ = v___x_825_;
goto v___jp_794_;
}
else
{
lean_object* v___x_826_; 
v___x_826_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_795_ = v___x_826_;
goto v___jp_794_;
}
}
case 3:
{
lean_object* v___x_827_; uint8_t v___x_828_; 
v___x_827_ = lean_unsigned_to_nat(1024u);
v___x_828_ = lean_nat_dec_le(v___x_827_, v_prec_751_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; 
v___x_829_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_788_ = v___x_829_;
goto v___jp_787_;
}
else
{
lean_object* v___x_830_; 
v___x_830_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_788_ = v___x_830_;
goto v___jp_787_;
}
}
case 4:
{
lean_object* v___x_831_; uint8_t v___x_832_; 
v___x_831_ = lean_unsigned_to_nat(1024u);
v___x_832_ = lean_nat_dec_le(v___x_831_, v_prec_751_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; 
v___x_833_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_781_ = v___x_833_;
goto v___jp_780_;
}
else
{
lean_object* v___x_834_; 
v___x_834_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_781_ = v___x_834_;
goto v___jp_780_;
}
}
case 5:
{
lean_object* v___x_835_; uint8_t v___x_836_; 
v___x_835_ = lean_unsigned_to_nat(1024u);
v___x_836_ = lean_nat_dec_le(v___x_835_, v_prec_751_);
if (v___x_836_ == 0)
{
lean_object* v___x_837_; 
v___x_837_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_774_ = v___x_837_;
goto v___jp_773_;
}
else
{
lean_object* v___x_838_; 
v___x_838_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_774_ = v___x_838_;
goto v___jp_773_;
}
}
case 6:
{
lean_object* v___x_839_; uint8_t v___x_840_; 
v___x_839_ = lean_unsigned_to_nat(1024u);
v___x_840_ = lean_nat_dec_le(v___x_839_, v_prec_751_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; 
v___x_841_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_767_ = v___x_841_;
goto v___jp_766_;
}
else
{
lean_object* v___x_842_; 
v___x_842_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_767_ = v___x_842_;
goto v___jp_766_;
}
}
case 7:
{
lean_object* v___x_843_; uint8_t v___x_844_; 
v___x_843_ = lean_unsigned_to_nat(1024u);
v___x_844_ = lean_nat_dec_le(v___x_843_, v_prec_751_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; 
v___x_845_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_760_ = v___x_845_;
goto v___jp_759_;
}
else
{
lean_object* v___x_846_; 
v___x_846_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_760_ = v___x_846_;
goto v___jp_759_;
}
}
case 8:
{
lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_847_ = lean_unsigned_to_nat(1024u);
v___x_848_ = lean_nat_dec_le(v___x_847_, v_prec_751_);
if (v___x_848_ == 0)
{
lean_object* v___x_849_; 
v___x_849_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_753_ = v___x_849_;
goto v___jp_752_;
}
else
{
lean_object* v___x_850_; 
v___x_850_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_753_ = v___x_850_;
goto v___jp_752_;
}
}
default: 
{
lean_object* v_payload_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_871_; 
v_payload_851_ = lean_ctor_get(v_x_750_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v_x_750_);
if (v_isSharedCheck_871_ == 0)
{
v___x_853_ = v_x_750_;
v_isShared_854_ = v_isSharedCheck_871_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_payload_851_);
lean_dec(v_x_750_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_871_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___y_856_; lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_867_ = lean_unsigned_to_nat(1024u);
v___x_868_ = lean_nat_dec_le(v___x_867_, v_prec_751_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; 
v___x_869_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_856_ = v___x_869_;
goto v___jp_855_;
}
else
{
lean_object* v___x_870_; 
v___x_870_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_856_ = v___x_870_;
goto v___jp_855_;
}
v___jp_855_:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_860_; 
v___x_857_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__22));
v___x_858_ = l_String_quote(v_payload_851_);
if (v_isShared_854_ == 0)
{
lean_ctor_set_tag(v___x_853_, 3);
lean_ctor_set(v___x_853_, 0, v___x_858_);
v___x_860_ = v___x_853_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v___x_858_);
v___x_860_ = v_reuseFailAlloc_866_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
lean_object* v___x_861_; lean_object* v___x_862_; uint8_t v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_861_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_861_, 0, v___x_857_);
lean_ctor_set(v___x_861_, 1, v___x_860_);
lean_inc(v___y_856_);
v___x_862_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_862_, 0, v___y_856_);
lean_ctor_set(v___x_862_, 1, v___x_861_);
v___x_863_ = 0;
v___x_864_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_864_, 0, v___x_862_);
lean_ctor_set_uint8(v___x_864_, sizeof(void*)*1, v___x_863_);
v___x_865_ = l_Repr_addAppParen(v___x_864_, v_prec_751_);
return v___x_865_;
}
}
}
}
}
v___jp_752_:
{
lean_object* v___x_754_; lean_object* v___x_755_; uint8_t v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_754_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__1));
lean_inc(v___y_753_);
v___x_755_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_755_, 0, v___y_753_);
lean_ctor_set(v___x_755_, 1, v___x_754_);
v___x_756_ = 0;
v___x_757_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_757_, 0, v___x_755_);
lean_ctor_set_uint8(v___x_757_, sizeof(void*)*1, v___x_756_);
v___x_758_ = l_Repr_addAppParen(v___x_757_, v_prec_751_);
return v___x_758_;
}
v___jp_759_:
{
lean_object* v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_761_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__3));
lean_inc(v___y_760_);
v___x_762_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_762_, 0, v___y_760_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___x_763_ = 0;
v___x_764_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_764_, 0, v___x_762_);
lean_ctor_set_uint8(v___x_764_, sizeof(void*)*1, v___x_763_);
v___x_765_ = l_Repr_addAppParen(v___x_764_, v_prec_751_);
return v___x_765_;
}
v___jp_766_:
{
lean_object* v___x_768_; lean_object* v___x_769_; uint8_t v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_768_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__5));
lean_inc(v___y_767_);
v___x_769_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_769_, 0, v___y_767_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = 0;
v___x_771_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_771_, 0, v___x_769_);
lean_ctor_set_uint8(v___x_771_, sizeof(void*)*1, v___x_770_);
v___x_772_ = l_Repr_addAppParen(v___x_771_, v_prec_751_);
return v___x_772_;
}
v___jp_773_:
{
lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_775_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__7));
lean_inc(v___y_774_);
v___x_776_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_776_, 0, v___y_774_);
lean_ctor_set(v___x_776_, 1, v___x_775_);
v___x_777_ = 0;
v___x_778_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_778_, 0, v___x_776_);
lean_ctor_set_uint8(v___x_778_, sizeof(void*)*1, v___x_777_);
v___x_779_ = l_Repr_addAppParen(v___x_778_, v_prec_751_);
return v___x_779_;
}
v___jp_780_:
{
lean_object* v___x_782_; lean_object* v___x_783_; uint8_t v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_782_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__9));
lean_inc(v___y_781_);
v___x_783_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_783_, 0, v___y_781_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = 0;
v___x_785_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_785_, 0, v___x_783_);
lean_ctor_set_uint8(v___x_785_, sizeof(void*)*1, v___x_784_);
v___x_786_ = l_Repr_addAppParen(v___x_785_, v_prec_751_);
return v___x_786_;
}
v___jp_787_:
{
lean_object* v___x_789_; lean_object* v___x_790_; uint8_t v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_789_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__11));
lean_inc(v___y_788_);
v___x_790_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_790_, 0, v___y_788_);
lean_ctor_set(v___x_790_, 1, v___x_789_);
v___x_791_ = 0;
v___x_792_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_792_, 0, v___x_790_);
lean_ctor_set_uint8(v___x_792_, sizeof(void*)*1, v___x_791_);
v___x_793_ = l_Repr_addAppParen(v___x_792_, v_prec_751_);
return v___x_793_;
}
v___jp_794_:
{
lean_object* v___x_796_; lean_object* v___x_797_; uint8_t v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_796_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__13));
lean_inc(v___y_795_);
v___x_797_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_797_, 0, v___y_795_);
lean_ctor_set(v___x_797_, 1, v___x_796_);
v___x_798_ = 0;
v___x_799_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_799_, 0, v___x_797_);
lean_ctor_set_uint8(v___x_799_, sizeof(void*)*1, v___x_798_);
v___x_800_ = l_Repr_addAppParen(v___x_799_, v_prec_751_);
return v___x_800_;
}
v___jp_801_:
{
lean_object* v___x_803_; lean_object* v___x_804_; uint8_t v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_803_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__15));
lean_inc(v___y_802_);
v___x_804_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_804_, 0, v___y_802_);
lean_ctor_set(v___x_804_, 1, v___x_803_);
v___x_805_ = 0;
v___x_806_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_806_, 0, v___x_804_);
lean_ctor_set_uint8(v___x_806_, sizeof(void*)*1, v___x_805_);
v___x_807_ = l_Repr_addAppParen(v___x_806_, v_prec_751_);
return v___x_807_;
}
v___jp_808_:
{
lean_object* v___x_810_; lean_object* v___x_811_; uint8_t v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_810_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__17));
lean_inc(v___y_809_);
v___x_811_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_811_, 0, v___y_809_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
v___x_812_ = 0;
v___x_813_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_813_, 0, v___x_811_);
lean_ctor_set_uint8(v___x_813_, sizeof(void*)*1, v___x_812_);
v___x_814_ = l_Repr_addAppParen(v___x_813_, v_prec_751_);
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___boxed(lean_object* v_x_872_, lean_object* v_prec_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_Lasm_WASI_Http_Types_instReprMethod_repr(v_x_872_, v_prec_873_);
lean_dec(v_prec_873_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorIdx___impl(lean_object* v_x_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = lean_obj_tag_nat(v_x_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorIdx___impl___boxed(lean_object* v_x_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_Lasm_WASI_Http_Types_Scheme_ctorIdx___impl(v_x_879_);
lean_dec(v_x_879_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(lean_object* v_t_881_, lean_object* v_k_882_){
_start:
{
if (lean_obj_tag(v_t_881_) == 2)
{
lean_object* v_payload_883_; lean_object* v___x_884_; 
v_payload_883_ = lean_ctor_get(v_t_881_, 0);
lean_inc_ref(v_payload_883_);
lean_dec_ref_known(v_t_881_, 1);
v___x_884_ = lean_apply_1(v_k_882_, v_payload_883_);
return v___x_884_;
}
else
{
lean_dec(v_t_881_);
return v_k_882_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorElim(lean_object* v_motive_885_, lean_object* v_ctorIdx_886_, lean_object* v_t_887_, lean_object* v_h_888_, lean_object* v_k_889_){
_start:
{
lean_object* v___x_890_; 
v___x_890_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_887_, v_k_889_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorElim___boxed(lean_object* v_motive_891_, lean_object* v_ctorIdx_892_, lean_object* v_t_893_, lean_object* v_h_894_, lean_object* v_k_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim(v_motive_891_, v_ctorIdx_892_, v_t_893_, v_h_894_, v_k_895_);
lean_dec(v_ctorIdx_892_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_http_elim___redArg(lean_object* v_t_897_, lean_object* v_http_898_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_897_, v_http_898_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_http_elim(lean_object* v_motive_900_, lean_object* v_t_901_, lean_object* v_h_902_, lean_object* v_http_903_){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_901_, v_http_903_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_https_elim___redArg(lean_object* v_t_905_, lean_object* v_https_906_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_905_, v_https_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_https_elim(lean_object* v_motive_908_, lean_object* v_t_909_, lean_object* v_h_910_, lean_object* v_https_911_){
_start:
{
lean_object* v___x_912_; 
v___x_912_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_909_, v_https_911_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_other_elim___redArg(lean_object* v_t_913_, lean_object* v_other_914_){
_start:
{
lean_object* v___x_915_; 
v___x_915_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_913_, v_other_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_other_elim(lean_object* v_motive_916_, lean_object* v_t_917_, lean_object* v_h_918_, lean_object* v_other_919_){
_start:
{
lean_object* v___x_920_; 
v___x_920_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_917_, v_other_919_);
return v___x_920_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instInhabitedScheme_default(void){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = lean_box(0);
return v___x_921_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instInhabitedScheme(void){
_start:
{
lean_object* v___x_922_; 
v___x_922_ = lean_box(0);
return v___x_922_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqScheme_beq(lean_object* v_x_923_, lean_object* v_x_924_){
_start:
{
switch(lean_obj_tag(v_x_923_))
{
case 0:
{
if (lean_obj_tag(v_x_924_) == 0)
{
uint8_t v___x_925_; 
v___x_925_ = 1;
return v___x_925_;
}
else
{
uint8_t v___x_926_; 
v___x_926_ = 0;
return v___x_926_;
}
}
case 1:
{
if (lean_obj_tag(v_x_924_) == 1)
{
uint8_t v___x_927_; 
v___x_927_ = 1;
return v___x_927_;
}
else
{
uint8_t v___x_928_; 
v___x_928_ = 0;
return v___x_928_;
}
}
default: 
{
if (lean_obj_tag(v_x_924_) == 2)
{
lean_object* v_payload_929_; lean_object* v_payload_930_; uint8_t v___x_931_; 
v_payload_929_ = lean_ctor_get(v_x_923_, 0);
v_payload_930_ = lean_ctor_get(v_x_924_, 0);
v___x_931_ = lean_string_dec_eq(v_payload_929_, v_payload_930_);
return v___x_931_;
}
else
{
uint8_t v___x_932_; 
v___x_932_ = 0;
return v___x_932_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqScheme_beq___boxed(lean_object* v_x_933_, lean_object* v_x_934_){
_start:
{
uint8_t v_res_935_; lean_object* v_r_936_; 
v_res_935_ = l_Lasm_WASI_Http_Types_instBEqScheme_beq(v_x_933_, v_x_934_);
lean_dec(v_x_934_);
lean_dec(v_x_933_);
v_r_936_ = lean_box(v_res_935_);
return v_r_936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr(lean_object* v_x_951_, lean_object* v_prec_952_){
_start:
{
lean_object* v___y_954_; lean_object* v___y_961_; 
switch(lean_obj_tag(v_x_951_))
{
case 0:
{
lean_object* v___x_967_; uint8_t v___x_968_; 
v___x_967_ = lean_unsigned_to_nat(1024u);
v___x_968_ = lean_nat_dec_le(v___x_967_, v_prec_952_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; 
v___x_969_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_961_ = v___x_969_;
goto v___jp_960_;
}
else
{
lean_object* v___x_970_; 
v___x_970_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_961_ = v___x_970_;
goto v___jp_960_;
}
}
case 1:
{
lean_object* v___x_971_; uint8_t v___x_972_; 
v___x_971_ = lean_unsigned_to_nat(1024u);
v___x_972_ = lean_nat_dec_le(v___x_971_, v_prec_952_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; 
v___x_973_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_954_ = v___x_973_;
goto v___jp_953_;
}
else
{
lean_object* v___x_974_; 
v___x_974_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_954_ = v___x_974_;
goto v___jp_953_;
}
}
default: 
{
lean_object* v_payload_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_995_; 
v_payload_975_ = lean_ctor_get(v_x_951_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v_x_951_);
if (v_isSharedCheck_995_ == 0)
{
v___x_977_ = v_x_951_;
v_isShared_978_ = v_isSharedCheck_995_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_payload_975_);
lean_dec(v_x_951_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_995_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___y_980_; lean_object* v___x_991_; uint8_t v___x_992_; 
v___x_991_ = lean_unsigned_to_nat(1024u);
v___x_992_ = lean_nat_dec_le(v___x_991_, v_prec_952_);
if (v___x_992_ == 0)
{
lean_object* v___x_993_; 
v___x_993_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_980_ = v___x_993_;
goto v___jp_979_;
}
else
{
lean_object* v___x_994_; 
v___x_994_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_980_ = v___x_994_;
goto v___jp_979_;
}
v___jp_979_:
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_984_; 
v___x_981_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__6));
v___x_982_ = l_String_quote(v_payload_975_);
if (v_isShared_978_ == 0)
{
lean_ctor_set_tag(v___x_977_, 3);
lean_ctor_set(v___x_977_, 0, v___x_982_);
v___x_984_ = v___x_977_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___x_982_);
v___x_984_ = v_reuseFailAlloc_990_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_object* v___x_985_; lean_object* v___x_986_; uint8_t v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_985_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_981_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
lean_inc(v___y_980_);
v___x_986_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_986_, 0, v___y_980_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = 0;
v___x_988_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set_uint8(v___x_988_, sizeof(void*)*1, v___x_987_);
v___x_989_ = l_Repr_addAppParen(v___x_988_, v_prec_952_);
return v___x_989_;
}
}
}
}
}
v___jp_953_:
{
lean_object* v___x_955_; lean_object* v___x_956_; uint8_t v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_955_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__1));
lean_inc(v___y_954_);
v___x_956_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_956_, 0, v___y_954_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = 0;
v___x_958_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_958_, 0, v___x_956_);
lean_ctor_set_uint8(v___x_958_, sizeof(void*)*1, v___x_957_);
v___x_959_ = l_Repr_addAppParen(v___x_958_, v_prec_952_);
return v___x_959_;
}
v___jp_960_:
{
lean_object* v___x_962_; lean_object* v___x_963_; uint8_t v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_962_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__3));
lean_inc(v___y_961_);
v___x_963_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_963_, 0, v___y_961_);
lean_ctor_set(v___x_963_, 1, v___x_962_);
v___x_964_ = 0;
v___x_965_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_965_, 0, v___x_963_);
lean_ctor_set_uint8(v___x_965_, sizeof(void*)*1, v___x_964_);
v___x_966_ = l_Repr_addAppParen(v___x_965_, v_prec_952_);
return v___x_966_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr___boxed(lean_object* v_x_996_, lean_object* v_prec_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Lasm_WASI_Http_Types_instReprScheme_repr(v_x_996_, v_prec_997_);
lean_dec(v_prec_997_);
return v_res_998_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(lean_object* v_x_1005_, lean_object* v_x_1006_){
_start:
{
if (lean_obj_tag(v_x_1005_) == 0)
{
if (lean_obj_tag(v_x_1006_) == 0)
{
uint8_t v___x_1007_; 
v___x_1007_ = 1;
return v___x_1007_;
}
else
{
uint8_t v___x_1008_; 
v___x_1008_ = 0;
return v___x_1008_;
}
}
else
{
if (lean_obj_tag(v_x_1006_) == 0)
{
uint8_t v___x_1009_; 
v___x_1009_ = 0;
return v___x_1009_;
}
else
{
lean_object* v_val_1010_; lean_object* v_val_1011_; uint8_t v___x_1012_; 
v_val_1010_ = lean_ctor_get(v_x_1005_, 0);
v_val_1011_ = lean_ctor_get(v_x_1006_, 0);
v___x_1012_ = lean_string_dec_eq(v_val_1010_, v_val_1011_);
return v___x_1012_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0___boxed(lean_object* v_x_1013_, lean_object* v_x_1014_){
_start:
{
uint8_t v_res_1015_; lean_object* v_r_1016_; 
v_res_1015_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_x_1013_, v_x_1014_);
lean_dec(v_x_1014_);
lean_dec(v_x_1013_);
v_r_1016_ = lean_box(v_res_1015_);
return v_r_1016_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__1(lean_object* v_x_1017_, lean_object* v_x_1018_){
_start:
{
if (lean_obj_tag(v_x_1017_) == 0)
{
if (lean_obj_tag(v_x_1018_) == 0)
{
uint8_t v___x_1019_; 
v___x_1019_ = 1;
return v___x_1019_;
}
else
{
uint8_t v___x_1020_; 
v___x_1020_ = 0;
return v___x_1020_;
}
}
else
{
if (lean_obj_tag(v_x_1018_) == 0)
{
uint8_t v___x_1021_; 
v___x_1021_ = 0;
return v___x_1021_;
}
else
{
lean_object* v_val_1022_; lean_object* v_val_1023_; uint16_t v___x_1024_; uint16_t v___x_1025_; uint8_t v___x_1026_; 
v_val_1022_ = lean_ctor_get(v_x_1017_, 0);
v_val_1023_ = lean_ctor_get(v_x_1018_, 0);
v___x_1024_ = lean_unbox(v_val_1022_);
v___x_1025_ = lean_unbox(v_val_1023_);
v___x_1026_ = lean_uint16_dec_eq(v___x_1024_, v___x_1025_);
return v___x_1026_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__1___boxed(lean_object* v_x_1027_, lean_object* v_x_1028_){
_start:
{
uint8_t v_res_1029_; lean_object* v_r_1030_; 
v_res_1029_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__1(v_x_1027_, v_x_1028_);
lean_dec(v_x_1028_);
lean_dec(v_x_1027_);
v_r_1030_ = lean_box(v_res_1029_);
return v_r_1030_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq(lean_object* v_x_1031_, lean_object* v_x_1032_){
_start:
{
lean_object* v_rcode_1033_; lean_object* v_infoCode_1034_; lean_object* v_rcode_1035_; lean_object* v_infoCode_1036_; uint8_t v___x_1037_; 
v_rcode_1033_ = lean_ctor_get(v_x_1031_, 0);
v_infoCode_1034_ = lean_ctor_get(v_x_1031_, 1);
v_rcode_1035_ = lean_ctor_get(v_x_1032_, 0);
v_infoCode_1036_ = lean_ctor_get(v_x_1032_, 1);
v___x_1037_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_rcode_1033_, v_rcode_1035_);
if (v___x_1037_ == 0)
{
return v___x_1037_;
}
else
{
uint8_t v___x_1038_; 
v___x_1038_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__1(v_infoCode_1034_, v_infoCode_1036_);
return v___x_1038_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq___boxed(lean_object* v_x_1039_, lean_object* v_x_1040_){
_start:
{
uint8_t v_res_1041_; lean_object* v_r_1042_; 
v_res_1041_ = l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq(v_x_1039_, v_x_1040_);
lean_dec_ref(v_x_1040_);
lean_dec_ref(v_x_1039_);
v_r_1042_ = lean_box(v_res_1041_);
return v_r_1042_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(lean_object* v_x_1051_, lean_object* v_x_1052_){
_start:
{
if (lean_obj_tag(v_x_1051_) == 0)
{
lean_object* v___x_1053_; 
v___x_1053_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1));
return v___x_1053_;
}
else
{
lean_object* v_val_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1065_; 
v_val_1054_ = lean_ctor_get(v_x_1051_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_x_1051_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1056_ = v_x_1051_;
v_isShared_1057_ = v_isSharedCheck_1065_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_val_1054_);
lean_dec(v_x_1051_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1065_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1061_; 
v___x_1058_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3));
v___x_1059_ = l_String_quote(v_val_1054_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set_tag(v___x_1056_, 3);
lean_ctor_set(v___x_1056_, 0, v___x_1059_);
v___x_1061_ = v___x_1056_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1059_);
v___x_1061_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1062_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1058_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
v___x_1063_ = l_Repr_addAppParen(v___x_1062_, v_x_1052_);
return v___x_1063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___boxed(lean_object* v_x_1066_, lean_object* v_x_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_x_1066_, v_x_1067_);
lean_dec(v_x_1067_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__1(lean_object* v_x_1069_, lean_object* v_x_1070_){
_start:
{
if (lean_obj_tag(v_x_1069_) == 0)
{
lean_object* v___x_1071_; 
v___x_1071_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1));
return v___x_1071_;
}
else
{
lean_object* v_val_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1085_; 
v_val_1072_ = lean_ctor_get(v_x_1069_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v_x_1069_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1074_ = v_x_1069_;
v_isShared_1075_ = v_isSharedCheck_1085_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_val_1072_);
lean_dec(v_x_1069_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1085_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1076_; uint16_t v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1081_; 
v___x_1076_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3));
v___x_1077_ = lean_unbox(v_val_1072_);
lean_dec(v_val_1072_);
v___x_1078_ = lean_uint16_to_nat(v___x_1077_);
v___x_1079_ = l_Nat_reprFast(v___x_1078_);
if (v_isShared_1075_ == 0)
{
lean_ctor_set_tag(v___x_1074_, 3);
lean_ctor_set(v___x_1074_, 0, v___x_1079_);
v___x_1081_ = v___x_1074_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1079_);
v___x_1081_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1076_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = l_Repr_addAppParen(v___x_1082_, v_x_1070_);
return v___x_1083_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__1___boxed(lean_object* v_x_1086_, lean_object* v_x_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__1(v_x_1086_, v_x_1087_);
lean_dec(v_x_1087_);
return v_res_1088_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = lean_unsigned_to_nat(9u);
v___x_1099_ = lean_nat_to_int(v___x_1098_);
return v___x_1099_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1106_ = lean_unsigned_to_nat(12u);
v___x_1107_ = lean_nat_to_int(v___x_1106_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg(lean_object* v_x_1108_){
_start:
{
lean_object* v_rcode_1109_; lean_object* v_infoCode_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1144_; 
v_rcode_1109_ = lean_ctor_get(v_x_1108_, 0);
v_infoCode_1110_ = lean_ctor_get(v_x_1108_, 1);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_x_1108_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1112_ = v_x_1108_;
v_isShared_1113_ = v_isSharedCheck_1144_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_infoCode_1110_);
lean_inc(v_rcode_1109_);
lean_dec(v_x_1108_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1144_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1120_; 
v___x_1114_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5));
v___x_1115_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__3));
v___x_1116_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__4, &l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__4_once, _init_l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__4);
v___x_1117_ = lean_unsigned_to_nat(0u);
v___x_1118_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_rcode_1109_, v___x_1117_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set_tag(v___x_1112_, 4);
lean_ctor_set(v___x_1112_, 1, v___x_1118_);
lean_ctor_set(v___x_1112_, 0, v___x_1116_);
v___x_1120_ = v___x_1112_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1116_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v___x_1118_);
v___x_1120_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
uint8_t v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1121_ = 0;
v___x_1122_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1122_, 0, v___x_1120_);
lean_ctor_set_uint8(v___x_1122_, sizeof(void*)*1, v___x_1121_);
v___x_1123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1123_, 0, v___x_1115_);
lean_ctor_set(v___x_1123_, 1, v___x_1122_);
v___x_1124_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__6));
v___x_1125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1123_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
v___x_1126_ = lean_box(1);
v___x_1127_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1125_);
lean_ctor_set(v___x_1127_, 1, v___x_1126_);
v___x_1128_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__8));
v___x_1129_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1127_);
lean_ctor_set(v___x_1129_, 1, v___x_1128_);
v___x_1130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
lean_ctor_set(v___x_1130_, 1, v___x_1114_);
v___x_1131_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__9, &l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__9_once, _init_l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__9);
v___x_1132_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__1(v_infoCode_1110_, v___x_1117_);
v___x_1133_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1131_);
lean_ctor_set(v___x_1133_, 1, v___x_1132_);
v___x_1134_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
lean_ctor_set_uint8(v___x_1134_, sizeof(void*)*1, v___x_1121_);
v___x_1135_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1130_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
v___x_1136_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_1137_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_1138_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
lean_ctor_set(v___x_1138_, 1, v___x_1135_);
v___x_1139_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_1140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1138_);
lean_ctor_set(v___x_1140_, 1, v___x_1139_);
v___x_1141_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1136_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v___x_1142_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
lean_ctor_set_uint8(v___x_1142_, sizeof(void*)*1, v___x_1121_);
return v___x_1142_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr(lean_object* v_x_1145_, lean_object* v_prec_1146_){
_start:
{
lean_object* v___x_1147_; 
v___x_1147_ = l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg(v_x_1145_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___boxed(lean_object* v_x_1148_, lean_object* v_prec_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr(v_x_1148_, v_prec_1149_);
lean_dec(v_prec_1149_);
return v_res_1150_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq_spec__0(lean_object* v_x_1157_, lean_object* v_x_1158_){
_start:
{
if (lean_obj_tag(v_x_1157_) == 0)
{
if (lean_obj_tag(v_x_1158_) == 0)
{
uint8_t v___x_1159_; 
v___x_1159_ = 1;
return v___x_1159_;
}
else
{
uint8_t v___x_1160_; 
v___x_1160_ = 0;
return v___x_1160_;
}
}
else
{
if (lean_obj_tag(v_x_1158_) == 0)
{
uint8_t v___x_1161_; 
v___x_1161_ = 0;
return v___x_1161_;
}
else
{
lean_object* v_val_1162_; lean_object* v_val_1163_; uint8_t v___x_1164_; uint8_t v___x_1165_; uint8_t v___x_1166_; 
v_val_1162_ = lean_ctor_get(v_x_1157_, 0);
v_val_1163_ = lean_ctor_get(v_x_1158_, 0);
v___x_1164_ = lean_unbox(v_val_1162_);
v___x_1165_ = lean_unbox(v_val_1163_);
v___x_1166_ = lean_uint8_dec_eq(v___x_1164_, v___x_1165_);
return v___x_1166_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq_spec__0___boxed(lean_object* v_x_1167_, lean_object* v_x_1168_){
_start:
{
uint8_t v_res_1169_; lean_object* v_r_1170_; 
v_res_1169_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq_spec__0(v_x_1167_, v_x_1168_);
lean_dec(v_x_1168_);
lean_dec(v_x_1167_);
v_r_1170_ = lean_box(v_res_1169_);
return v_r_1170_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq(lean_object* v_x_1171_, lean_object* v_x_1172_){
_start:
{
lean_object* v_alertId_1173_; lean_object* v_alertMessage_1174_; lean_object* v_alertId_1175_; lean_object* v_alertMessage_1176_; uint8_t v___x_1177_; 
v_alertId_1173_ = lean_ctor_get(v_x_1171_, 0);
v_alertMessage_1174_ = lean_ctor_get(v_x_1171_, 1);
v_alertId_1175_ = lean_ctor_get(v_x_1172_, 0);
v_alertMessage_1176_ = lean_ctor_get(v_x_1172_, 1);
v___x_1177_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq_spec__0(v_alertId_1173_, v_alertId_1175_);
if (v___x_1177_ == 0)
{
return v___x_1177_;
}
else
{
uint8_t v___x_1178_; 
v___x_1178_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_alertMessage_1174_, v_alertMessage_1176_);
return v___x_1178_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq___boxed(lean_object* v_x_1179_, lean_object* v_x_1180_){
_start:
{
uint8_t v_res_1181_; lean_object* v_r_1182_; 
v_res_1181_ = l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq(v_x_1179_, v_x_1180_);
lean_dec_ref(v_x_1180_);
lean_dec_ref(v_x_1179_);
v_r_1182_ = lean_box(v_res_1181_);
return v_r_1182_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr_spec__0(lean_object* v_x_1185_, lean_object* v_x_1186_){
_start:
{
if (lean_obj_tag(v_x_1185_) == 0)
{
lean_object* v___x_1187_; 
v___x_1187_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1));
return v___x_1187_;
}
else
{
lean_object* v_val_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1201_; 
v_val_1188_ = lean_ctor_get(v_x_1185_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v_x_1185_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1190_ = v_x_1185_;
v_isShared_1191_ = v_isSharedCheck_1201_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_val_1188_);
lean_dec(v_x_1185_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1201_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1192_; uint8_t v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1192_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3));
v___x_1193_ = lean_unbox(v_val_1188_);
lean_dec(v_val_1188_);
v___x_1194_ = lean_uint8_to_nat(v___x_1193_);
v___x_1195_ = l_Nat_reprFast(v___x_1194_);
if (v_isShared_1191_ == 0)
{
lean_ctor_set_tag(v___x_1190_, 3);
lean_ctor_set(v___x_1190_, 0, v___x_1195_);
v___x_1197_ = v___x_1190_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1198_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1192_);
lean_ctor_set(v___x_1198_, 1, v___x_1197_);
v___x_1199_ = l_Repr_addAppParen(v___x_1198_, v_x_1186_);
return v___x_1199_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr_spec__0___boxed(lean_object* v_x_1202_, lean_object* v_x_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr_spec__0(v_x_1202_, v_x_1203_);
lean_dec(v_x_1203_);
return v_res_1204_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1214_ = lean_unsigned_to_nat(11u);
v___x_1215_ = lean_nat_to_int(v___x_1214_);
return v___x_1215_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1219_ = lean_unsigned_to_nat(16u);
v___x_1220_ = lean_nat_to_int(v___x_1219_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg(lean_object* v_x_1221_){
_start:
{
lean_object* v_alertId_1222_; lean_object* v_alertMessage_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1257_; 
v_alertId_1222_ = lean_ctor_get(v_x_1221_, 0);
v_alertMessage_1223_ = lean_ctor_get(v_x_1221_, 1);
v_isSharedCheck_1257_ = !lean_is_exclusive(v_x_1221_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1225_ = v_x_1221_;
v_isShared_1226_ = v_isSharedCheck_1257_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_alertMessage_1223_);
lean_inc(v_alertId_1222_);
lean_dec(v_x_1221_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1257_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1233_; 
v___x_1227_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5));
v___x_1228_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__3));
v___x_1229_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__4, &l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__4_once, _init_l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__4);
v___x_1230_ = lean_unsigned_to_nat(0u);
v___x_1231_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr_spec__0(v_alertId_1222_, v___x_1230_);
if (v_isShared_1226_ == 0)
{
lean_ctor_set_tag(v___x_1225_, 4);
lean_ctor_set(v___x_1225_, 1, v___x_1231_);
lean_ctor_set(v___x_1225_, 0, v___x_1229_);
v___x_1233_ = v___x_1225_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1229_);
lean_ctor_set(v_reuseFailAlloc_1256_, 1, v___x_1231_);
v___x_1233_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
uint8_t v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1234_ = 0;
v___x_1235_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1235_, 0, v___x_1233_);
lean_ctor_set_uint8(v___x_1235_, sizeof(void*)*1, v___x_1234_);
v___x_1236_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1228_);
lean_ctor_set(v___x_1236_, 1, v___x_1235_);
v___x_1237_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__6));
v___x_1238_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1236_);
lean_ctor_set(v___x_1238_, 1, v___x_1237_);
v___x_1239_ = lean_box(1);
v___x_1240_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1238_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__6));
v___x_1242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1240_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
v___x_1243_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
lean_ctor_set(v___x_1243_, 1, v___x_1227_);
v___x_1244_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__7);
v___x_1245_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_alertMessage_1223_, v___x_1230_);
v___x_1246_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1247_, 0, v___x_1246_);
lean_ctor_set_uint8(v___x_1247_, sizeof(void*)*1, v___x_1234_);
v___x_1248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1243_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
v___x_1249_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_1250_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_1251_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
lean_ctor_set(v___x_1251_, 1, v___x_1248_);
v___x_1252_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_1253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1251_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
v___x_1254_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1249_);
lean_ctor_set(v___x_1254_, 1, v___x_1253_);
v___x_1255_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
lean_ctor_set_uint8(v___x_1255_, sizeof(void*)*1, v___x_1234_);
return v___x_1255_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr(lean_object* v_x_1258_, lean_object* v_prec_1259_){
_start:
{
lean_object* v___x_1260_; 
v___x_1260_ = l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg(v_x_1258_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___boxed(lean_object* v_x_1261_, lean_object* v_prec_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr(v_x_1261_, v_prec_1262_);
lean_dec(v_prec_1262_);
return v_res_1263_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(lean_object* v_x_1270_, lean_object* v_x_1271_){
_start:
{
if (lean_obj_tag(v_x_1270_) == 0)
{
if (lean_obj_tag(v_x_1271_) == 0)
{
uint8_t v___x_1272_; 
v___x_1272_ = 1;
return v___x_1272_;
}
else
{
uint8_t v___x_1273_; 
v___x_1273_ = 0;
return v___x_1273_;
}
}
else
{
if (lean_obj_tag(v_x_1271_) == 0)
{
uint8_t v___x_1274_; 
v___x_1274_ = 0;
return v___x_1274_;
}
else
{
lean_object* v_val_1275_; lean_object* v_val_1276_; uint32_t v___x_1277_; uint32_t v___x_1278_; uint8_t v___x_1279_; 
v_val_1275_ = lean_ctor_get(v_x_1270_, 0);
v_val_1276_ = lean_ctor_get(v_x_1271_, 0);
v___x_1277_ = lean_unbox_uint32(v_val_1275_);
v___x_1278_ = lean_unbox_uint32(v_val_1276_);
v___x_1279_ = lean_uint32_dec_eq(v___x_1277_, v___x_1278_);
return v___x_1279_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0___boxed(lean_object* v_x_1280_, lean_object* v_x_1281_){
_start:
{
uint8_t v_res_1282_; lean_object* v_r_1283_; 
v_res_1282_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(v_x_1280_, v_x_1281_);
lean_dec(v_x_1281_);
lean_dec(v_x_1280_);
v_r_1283_ = lean_box(v_res_1282_);
return v_r_1283_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(lean_object* v_x_1284_, lean_object* v_x_1285_){
_start:
{
lean_object* v_fieldName_1286_; lean_object* v_fieldSize_1287_; lean_object* v_fieldName_1288_; lean_object* v_fieldSize_1289_; uint8_t v___x_1290_; 
v_fieldName_1286_ = lean_ctor_get(v_x_1284_, 0);
v_fieldSize_1287_ = lean_ctor_get(v_x_1284_, 1);
v_fieldName_1288_ = lean_ctor_get(v_x_1285_, 0);
v_fieldSize_1289_ = lean_ctor_get(v_x_1285_, 1);
v___x_1290_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_fieldName_1286_, v_fieldName_1288_);
if (v___x_1290_ == 0)
{
return v___x_1290_;
}
else
{
uint8_t v___x_1291_; 
v___x_1291_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(v_fieldSize_1287_, v_fieldSize_1289_);
return v___x_1291_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq___boxed(lean_object* v_x_1292_, lean_object* v_x_1293_){
_start:
{
uint8_t v_res_1294_; lean_object* v_r_1295_; 
v_res_1294_ = l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(v_x_1292_, v_x_1293_);
lean_dec_ref(v_x_1293_);
lean_dec_ref(v_x_1292_);
v_r_1295_ = lean_box(v_res_1294_);
return v_r_1295_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(lean_object* v_x_1298_, lean_object* v_x_1299_){
_start:
{
if (lean_obj_tag(v_x_1298_) == 0)
{
lean_object* v___x_1300_; 
v___x_1300_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1));
return v___x_1300_;
}
else
{
lean_object* v_val_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1314_; 
v_val_1301_ = lean_ctor_get(v_x_1298_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_x_1298_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1303_ = v_x_1298_;
v_isShared_1304_ = v_isSharedCheck_1314_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_val_1301_);
lean_dec(v_x_1298_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1314_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1305_; uint32_t v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1310_; 
v___x_1305_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3));
v___x_1306_ = lean_unbox_uint32(v_val_1301_);
lean_dec(v_val_1301_);
v___x_1307_ = lean_uint32_to_nat(v___x_1306_);
v___x_1308_ = l_Nat_reprFast(v___x_1307_);
if (v_isShared_1304_ == 0)
{
lean_ctor_set_tag(v___x_1303_, 3);
lean_ctor_set(v___x_1303_, 0, v___x_1308_);
v___x_1310_ = v___x_1303_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1308_);
v___x_1310_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1311_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1305_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v___x_1312_ = l_Repr_addAppParen(v___x_1311_, v_x_1299_);
return v___x_1312_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0___boxed(lean_object* v_x_1315_, lean_object* v_x_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(v_x_1315_, v_x_1316_);
lean_dec(v_x_1316_);
return v_res_1317_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = lean_unsigned_to_nat(13u);
v___x_1328_ = lean_nat_to_int(v___x_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(lean_object* v_x_1332_){
_start:
{
lean_object* v_fieldName_1333_; lean_object* v_fieldSize_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1367_; 
v_fieldName_1333_ = lean_ctor_get(v_x_1332_, 0);
v_fieldSize_1334_ = lean_ctor_get(v_x_1332_, 1);
v_isSharedCheck_1367_ = !lean_is_exclusive(v_x_1332_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1336_ = v_x_1332_;
v_isShared_1337_ = v_isSharedCheck_1367_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_fieldSize_1334_);
lean_inc(v_fieldName_1333_);
lean_dec(v_x_1332_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1367_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1344_; 
v___x_1338_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5));
v___x_1339_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__3));
v___x_1340_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__4, &l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__4_once, _init_l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__4);
v___x_1341_ = lean_unsigned_to_nat(0u);
v___x_1342_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_fieldName_1333_, v___x_1341_);
if (v_isShared_1337_ == 0)
{
lean_ctor_set_tag(v___x_1336_, 4);
lean_ctor_set(v___x_1336_, 1, v___x_1342_);
lean_ctor_set(v___x_1336_, 0, v___x_1340_);
v___x_1344_ = v___x_1336_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v___x_1340_);
lean_ctor_set(v_reuseFailAlloc_1366_, 1, v___x_1342_);
v___x_1344_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
uint8_t v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1345_ = 0;
v___x_1346_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1346_, 0, v___x_1344_);
lean_ctor_set_uint8(v___x_1346_, sizeof(void*)*1, v___x_1345_);
v___x_1347_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1339_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
v___x_1348_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__6));
v___x_1349_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = lean_box(1);
v___x_1351_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1349_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
v___x_1352_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__6));
v___x_1353_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1351_);
lean_ctor_set(v___x_1353_, 1, v___x_1352_);
v___x_1354_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1353_);
lean_ctor_set(v___x_1354_, 1, v___x_1338_);
v___x_1355_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(v_fieldSize_1334_, v___x_1341_);
v___x_1356_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1340_);
lean_ctor_set(v___x_1356_, 1, v___x_1355_);
v___x_1357_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1357_, 0, v___x_1356_);
lean_ctor_set_uint8(v___x_1357_, sizeof(void*)*1, v___x_1345_);
v___x_1358_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1354_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_1360_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_1361_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
lean_ctor_set(v___x_1361_, 1, v___x_1358_);
v___x_1362_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_1363_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1361_);
lean_ctor_set(v___x_1363_, 1, v___x_1362_);
v___x_1364_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1359_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
v___x_1365_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1365_, 0, v___x_1364_);
lean_ctor_set_uint8(v___x_1365_, sizeof(void*)*1, v___x_1345_);
return v___x_1365_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr(lean_object* v_x_1368_, lean_object* v_prec_1369_){
_start:
{
lean_object* v___x_1370_; 
v___x_1370_ = l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(v_x_1368_);
return v___x_1370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___boxed(lean_object* v_x_1371_, lean_object* v_prec_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr(v_x_1371_, v_prec_1372_);
lean_dec(v_prec_1372_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorIdx___impl(lean_object* v_x_1376_){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = lean_obj_tag_nat(v_x_1376_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorIdx___impl___boxed(lean_object* v_x_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorIdx___impl(v_x_1378_);
lean_dec(v_x_1378_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(lean_object* v_t_1380_, lean_object* v_k_1381_){
_start:
{
switch(lean_obj_tag(v_t_1380_))
{
case 1:
{
lean_object* v_payload_1382_; lean_object* v___x_1383_; 
v_payload_1382_ = lean_ctor_get(v_t_1380_, 0);
lean_inc_ref(v_payload_1382_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1383_ = lean_apply_1(v_k_1381_, v_payload_1382_);
return v___x_1383_;
}
case 14:
{
lean_object* v_payload_1384_; lean_object* v___x_1385_; 
v_payload_1384_ = lean_ctor_get(v_t_1380_, 0);
lean_inc_ref(v_payload_1384_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1385_ = lean_apply_1(v_k_1381_, v_payload_1384_);
return v___x_1385_;
}
case 17:
{
lean_object* v_payload_1386_; lean_object* v___x_1387_; 
v_payload_1386_ = lean_ctor_get(v_t_1380_, 0);
lean_inc(v_payload_1386_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1387_ = lean_apply_1(v_k_1381_, v_payload_1386_);
return v___x_1387_;
}
case 21:
{
lean_object* v_payload_1388_; lean_object* v___x_1389_; 
v_payload_1388_ = lean_ctor_get(v_t_1380_, 0);
lean_inc(v_payload_1388_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1389_ = lean_apply_1(v_k_1381_, v_payload_1388_);
return v___x_1389_;
}
case 22:
{
lean_object* v_payload_1390_; lean_object* v___x_1391_; 
v_payload_1390_ = lean_ctor_get(v_t_1380_, 0);
lean_inc(v_payload_1390_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1391_ = lean_apply_1(v_k_1381_, v_payload_1390_);
return v___x_1391_;
}
case 23:
{
lean_object* v_payload_1392_; lean_object* v___x_1393_; 
v_payload_1392_ = lean_ctor_get(v_t_1380_, 0);
lean_inc(v_payload_1392_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1393_ = lean_apply_1(v_k_1381_, v_payload_1392_);
return v___x_1393_;
}
case 24:
{
lean_object* v_payload_1394_; lean_object* v___x_1395_; 
v_payload_1394_ = lean_ctor_get(v_t_1380_, 0);
lean_inc_ref(v_payload_1394_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1395_ = lean_apply_1(v_k_1381_, v_payload_1394_);
return v___x_1395_;
}
case 26:
{
lean_object* v_payload_1396_; lean_object* v___x_1397_; 
v_payload_1396_ = lean_ctor_get(v_t_1380_, 0);
lean_inc(v_payload_1396_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1397_ = lean_apply_1(v_k_1381_, v_payload_1396_);
return v___x_1397_;
}
case 27:
{
lean_object* v_payload_1398_; lean_object* v___x_1399_; 
v_payload_1398_ = lean_ctor_get(v_t_1380_, 0);
lean_inc_ref(v_payload_1398_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1399_ = lean_apply_1(v_k_1381_, v_payload_1398_);
return v___x_1399_;
}
case 28:
{
lean_object* v_payload_1400_; lean_object* v___x_1401_; 
v_payload_1400_ = lean_ctor_get(v_t_1380_, 0);
lean_inc(v_payload_1400_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1401_ = lean_apply_1(v_k_1381_, v_payload_1400_);
return v___x_1401_;
}
case 29:
{
lean_object* v_payload_1402_; lean_object* v___x_1403_; 
v_payload_1402_ = lean_ctor_get(v_t_1380_, 0);
lean_inc(v_payload_1402_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1403_ = lean_apply_1(v_k_1381_, v_payload_1402_);
return v___x_1403_;
}
case 30:
{
lean_object* v_payload_1404_; lean_object* v___x_1405_; 
v_payload_1404_ = lean_ctor_get(v_t_1380_, 0);
lean_inc_ref(v_payload_1404_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1405_ = lean_apply_1(v_k_1381_, v_payload_1404_);
return v___x_1405_;
}
case 31:
{
lean_object* v_payload_1406_; lean_object* v___x_1407_; 
v_payload_1406_ = lean_ctor_get(v_t_1380_, 0);
lean_inc(v_payload_1406_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1407_ = lean_apply_1(v_k_1381_, v_payload_1406_);
return v___x_1407_;
}
case 32:
{
lean_object* v_payload_1408_; lean_object* v___x_1409_; 
v_payload_1408_ = lean_ctor_get(v_t_1380_, 0);
lean_inc(v_payload_1408_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1409_ = lean_apply_1(v_k_1381_, v_payload_1408_);
return v___x_1409_;
}
case 38:
{
lean_object* v_payload_1410_; lean_object* v___x_1411_; 
v_payload_1410_ = lean_ctor_get(v_t_1380_, 0);
lean_inc(v_payload_1410_);
lean_dec_ref_known(v_t_1380_, 1);
v___x_1411_ = lean_apply_1(v_k_1381_, v_payload_1410_);
return v___x_1411_;
}
default: 
{
lean_dec(v_t_1380_);
return v_k_1381_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorElim(lean_object* v_motive_1412_, lean_object* v_ctorIdx_1413_, lean_object* v_t_1414_, lean_object* v_h_1415_, lean_object* v_k_1416_){
_start:
{
lean_object* v___x_1417_; 
v___x_1417_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1414_, v_k_1416_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___boxed(lean_object* v_motive_1418_, lean_object* v_ctorIdx_1419_, lean_object* v_t_1420_, lean_object* v_h_1421_, lean_object* v_k_1422_){
_start:
{
lean_object* v_res_1423_; 
v_res_1423_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim(v_motive_1418_, v_ctorIdx_1419_, v_t_1420_, v_h_1421_, v_k_1422_);
lean_dec(v_ctorIdx_1419_);
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_dnsTimeout_elim___redArg(lean_object* v_t_1424_, lean_object* v_dnsTimeout_1425_){
_start:
{
lean_object* v___x_1426_; 
v___x_1426_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1424_, v_dnsTimeout_1425_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_dnsTimeout_elim(lean_object* v_motive_1427_, lean_object* v_t_1428_, lean_object* v_h_1429_, lean_object* v_dnsTimeout_1430_){
_start:
{
lean_object* v___x_1431_; 
v___x_1431_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1428_, v_dnsTimeout_1430_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_dnsError_elim___redArg(lean_object* v_t_1432_, lean_object* v_dnsError_1433_){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1432_, v_dnsError_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_dnsError_elim(lean_object* v_motive_1435_, lean_object* v_t_1436_, lean_object* v_h_1437_, lean_object* v_dnsError_1438_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1436_, v_dnsError_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationNotFound_elim___redArg(lean_object* v_t_1440_, lean_object* v_destinationNotFound_1441_){
_start:
{
lean_object* v___x_1442_; 
v___x_1442_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1440_, v_destinationNotFound_1441_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationNotFound_elim(lean_object* v_motive_1443_, lean_object* v_t_1444_, lean_object* v_h_1445_, lean_object* v_destinationNotFound_1446_){
_start:
{
lean_object* v___x_1447_; 
v___x_1447_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1444_, v_destinationNotFound_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationUnavailable_elim___redArg(lean_object* v_t_1448_, lean_object* v_destinationUnavailable_1449_){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1448_, v_destinationUnavailable_1449_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationUnavailable_elim(lean_object* v_motive_1451_, lean_object* v_t_1452_, lean_object* v_h_1453_, lean_object* v_destinationUnavailable_1454_){
_start:
{
lean_object* v___x_1455_; 
v___x_1455_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1452_, v_destinationUnavailable_1454_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationIpProhibited_elim___redArg(lean_object* v_t_1456_, lean_object* v_destinationIpProhibited_1457_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1456_, v_destinationIpProhibited_1457_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationIpProhibited_elim(lean_object* v_motive_1459_, lean_object* v_t_1460_, lean_object* v_h_1461_, lean_object* v_destinationIpProhibited_1462_){
_start:
{
lean_object* v___x_1463_; 
v___x_1463_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1460_, v_destinationIpProhibited_1462_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationIpUnroutable_elim___redArg(lean_object* v_t_1464_, lean_object* v_destinationIpUnroutable_1465_){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1464_, v_destinationIpUnroutable_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationIpUnroutable_elim(lean_object* v_motive_1467_, lean_object* v_t_1468_, lean_object* v_h_1469_, lean_object* v_destinationIpUnroutable_1470_){
_start:
{
lean_object* v___x_1471_; 
v___x_1471_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1468_, v_destinationIpUnroutable_1470_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionRefused_elim___redArg(lean_object* v_t_1472_, lean_object* v_connectionRefused_1473_){
_start:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1472_, v_connectionRefused_1473_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionRefused_elim(lean_object* v_motive_1475_, lean_object* v_t_1476_, lean_object* v_h_1477_, lean_object* v_connectionRefused_1478_){
_start:
{
lean_object* v___x_1479_; 
v___x_1479_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1476_, v_connectionRefused_1478_);
return v___x_1479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionTerminated_elim___redArg(lean_object* v_t_1480_, lean_object* v_connectionTerminated_1481_){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1480_, v_connectionTerminated_1481_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionTerminated_elim(lean_object* v_motive_1483_, lean_object* v_t_1484_, lean_object* v_h_1485_, lean_object* v_connectionTerminated_1486_){
_start:
{
lean_object* v___x_1487_; 
v___x_1487_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1484_, v_connectionTerminated_1486_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionTimeout_elim___redArg(lean_object* v_t_1488_, lean_object* v_connectionTimeout_1489_){
_start:
{
lean_object* v___x_1490_; 
v___x_1490_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1488_, v_connectionTimeout_1489_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionTimeout_elim(lean_object* v_motive_1491_, lean_object* v_t_1492_, lean_object* v_h_1493_, lean_object* v_connectionTimeout_1494_){
_start:
{
lean_object* v___x_1495_; 
v___x_1495_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1492_, v_connectionTimeout_1494_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionReadTimeout_elim___redArg(lean_object* v_t_1496_, lean_object* v_connectionReadTimeout_1497_){
_start:
{
lean_object* v___x_1498_; 
v___x_1498_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1496_, v_connectionReadTimeout_1497_);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionReadTimeout_elim(lean_object* v_motive_1499_, lean_object* v_t_1500_, lean_object* v_h_1501_, lean_object* v_connectionReadTimeout_1502_){
_start:
{
lean_object* v___x_1503_; 
v___x_1503_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1500_, v_connectionReadTimeout_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionWriteTimeout_elim___redArg(lean_object* v_t_1504_, lean_object* v_connectionWriteTimeout_1505_){
_start:
{
lean_object* v___x_1506_; 
v___x_1506_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1504_, v_connectionWriteTimeout_1505_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionWriteTimeout_elim(lean_object* v_motive_1507_, lean_object* v_t_1508_, lean_object* v_h_1509_, lean_object* v_connectionWriteTimeout_1510_){
_start:
{
lean_object* v___x_1511_; 
v___x_1511_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1508_, v_connectionWriteTimeout_1510_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionLimitReached_elim___redArg(lean_object* v_t_1512_, lean_object* v_connectionLimitReached_1513_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1512_, v_connectionLimitReached_1513_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionLimitReached_elim(lean_object* v_motive_1515_, lean_object* v_t_1516_, lean_object* v_h_1517_, lean_object* v_connectionLimitReached_1518_){
_start:
{
lean_object* v___x_1519_; 
v___x_1519_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1516_, v_connectionLimitReached_1518_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsProtocolError_elim___redArg(lean_object* v_t_1520_, lean_object* v_tlsProtocolError_1521_){
_start:
{
lean_object* v___x_1522_; 
v___x_1522_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1520_, v_tlsProtocolError_1521_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsProtocolError_elim(lean_object* v_motive_1523_, lean_object* v_t_1524_, lean_object* v_h_1525_, lean_object* v_tlsProtocolError_1526_){
_start:
{
lean_object* v___x_1527_; 
v___x_1527_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1524_, v_tlsProtocolError_1526_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsCertificateError_elim___redArg(lean_object* v_t_1528_, lean_object* v_tlsCertificateError_1529_){
_start:
{
lean_object* v___x_1530_; 
v___x_1530_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1528_, v_tlsCertificateError_1529_);
return v___x_1530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsCertificateError_elim(lean_object* v_motive_1531_, lean_object* v_t_1532_, lean_object* v_h_1533_, lean_object* v_tlsCertificateError_1534_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1532_, v_tlsCertificateError_1534_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsAlertReceived_elim___redArg(lean_object* v_t_1536_, lean_object* v_tlsAlertReceived_1537_){
_start:
{
lean_object* v___x_1538_; 
v___x_1538_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1536_, v_tlsAlertReceived_1537_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsAlertReceived_elim(lean_object* v_motive_1539_, lean_object* v_t_1540_, lean_object* v_h_1541_, lean_object* v_tlsAlertReceived_1542_){
_start:
{
lean_object* v___x_1543_; 
v___x_1543_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1540_, v_tlsAlertReceived_1542_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestDenied_elim___redArg(lean_object* v_t_1544_, lean_object* v_httpRequestDenied_1545_){
_start:
{
lean_object* v___x_1546_; 
v___x_1546_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1544_, v_httpRequestDenied_1545_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestDenied_elim(lean_object* v_motive_1547_, lean_object* v_t_1548_, lean_object* v_h_1549_, lean_object* v_httpRequestDenied_1550_){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1548_, v_httpRequestDenied_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestLengthRequired_elim___redArg(lean_object* v_t_1552_, lean_object* v_httpRequestLengthRequired_1553_){
_start:
{
lean_object* v___x_1554_; 
v___x_1554_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1552_, v_httpRequestLengthRequired_1553_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestLengthRequired_elim(lean_object* v_motive_1555_, lean_object* v_t_1556_, lean_object* v_h_1557_, lean_object* v_httpRequestLengthRequired_1558_){
_start:
{
lean_object* v___x_1559_; 
v___x_1559_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1556_, v_httpRequestLengthRequired_1558_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestBodySize_elim___redArg(lean_object* v_t_1560_, lean_object* v_httpRequestBodySize_1561_){
_start:
{
lean_object* v___x_1562_; 
v___x_1562_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1560_, v_httpRequestBodySize_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestBodySize_elim(lean_object* v_motive_1563_, lean_object* v_t_1564_, lean_object* v_h_1565_, lean_object* v_httpRequestBodySize_1566_){
_start:
{
lean_object* v___x_1567_; 
v___x_1567_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1564_, v_httpRequestBodySize_1566_);
return v___x_1567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestMethodInvalid_elim___redArg(lean_object* v_t_1568_, lean_object* v_httpRequestMethodInvalid_1569_){
_start:
{
lean_object* v___x_1570_; 
v___x_1570_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1568_, v_httpRequestMethodInvalid_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestMethodInvalid_elim(lean_object* v_motive_1571_, lean_object* v_t_1572_, lean_object* v_h_1573_, lean_object* v_httpRequestMethodInvalid_1574_){
_start:
{
lean_object* v___x_1575_; 
v___x_1575_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1572_, v_httpRequestMethodInvalid_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestUriInvalid_elim___redArg(lean_object* v_t_1576_, lean_object* v_httpRequestUriInvalid_1577_){
_start:
{
lean_object* v___x_1578_; 
v___x_1578_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1576_, v_httpRequestUriInvalid_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestUriInvalid_elim(lean_object* v_motive_1579_, lean_object* v_t_1580_, lean_object* v_h_1581_, lean_object* v_httpRequestUriInvalid_1582_){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1580_, v_httpRequestUriInvalid_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestUriTooLong_elim___redArg(lean_object* v_t_1584_, lean_object* v_httpRequestUriTooLong_1585_){
_start:
{
lean_object* v___x_1586_; 
v___x_1586_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1584_, v_httpRequestUriTooLong_1585_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestUriTooLong_elim(lean_object* v_motive_1587_, lean_object* v_t_1588_, lean_object* v_h_1589_, lean_object* v_httpRequestUriTooLong_1590_){
_start:
{
lean_object* v___x_1591_; 
v___x_1591_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1588_, v_httpRequestUriTooLong_1590_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestHeaderSectionSize_elim___redArg(lean_object* v_t_1592_, lean_object* v_httpRequestHeaderSectionSize_1593_){
_start:
{
lean_object* v___x_1594_; 
v___x_1594_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1592_, v_httpRequestHeaderSectionSize_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestHeaderSectionSize_elim(lean_object* v_motive_1595_, lean_object* v_t_1596_, lean_object* v_h_1597_, lean_object* v_httpRequestHeaderSectionSize_1598_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1596_, v_httpRequestHeaderSectionSize_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestHeaderSize_elim___redArg(lean_object* v_t_1600_, lean_object* v_httpRequestHeaderSize_1601_){
_start:
{
lean_object* v___x_1602_; 
v___x_1602_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1600_, v_httpRequestHeaderSize_1601_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestHeaderSize_elim(lean_object* v_motive_1603_, lean_object* v_t_1604_, lean_object* v_h_1605_, lean_object* v_httpRequestHeaderSize_1606_){
_start:
{
lean_object* v___x_1607_; 
v___x_1607_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1604_, v_httpRequestHeaderSize_1606_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestTrailerSectionSize_elim___redArg(lean_object* v_t_1608_, lean_object* v_httpRequestTrailerSectionSize_1609_){
_start:
{
lean_object* v___x_1610_; 
v___x_1610_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1608_, v_httpRequestTrailerSectionSize_1609_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestTrailerSectionSize_elim(lean_object* v_motive_1611_, lean_object* v_t_1612_, lean_object* v_h_1613_, lean_object* v_httpRequestTrailerSectionSize_1614_){
_start:
{
lean_object* v___x_1615_; 
v___x_1615_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1612_, v_httpRequestTrailerSectionSize_1614_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestTrailerSize_elim___redArg(lean_object* v_t_1616_, lean_object* v_httpRequestTrailerSize_1617_){
_start:
{
lean_object* v___x_1618_; 
v___x_1618_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1616_, v_httpRequestTrailerSize_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestTrailerSize_elim(lean_object* v_motive_1619_, lean_object* v_t_1620_, lean_object* v_h_1621_, lean_object* v_httpRequestTrailerSize_1622_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1620_, v_httpRequestTrailerSize_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseIncomplete_elim___redArg(lean_object* v_t_1624_, lean_object* v_httpResponseIncomplete_1625_){
_start:
{
lean_object* v___x_1626_; 
v___x_1626_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1624_, v_httpResponseIncomplete_1625_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseIncomplete_elim(lean_object* v_motive_1627_, lean_object* v_t_1628_, lean_object* v_h_1629_, lean_object* v_httpResponseIncomplete_1630_){
_start:
{
lean_object* v___x_1631_; 
v___x_1631_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1628_, v_httpResponseIncomplete_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseHeaderSectionSize_elim___redArg(lean_object* v_t_1632_, lean_object* v_httpResponseHeaderSectionSize_1633_){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1632_, v_httpResponseHeaderSectionSize_1633_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseHeaderSectionSize_elim(lean_object* v_motive_1635_, lean_object* v_t_1636_, lean_object* v_h_1637_, lean_object* v_httpResponseHeaderSectionSize_1638_){
_start:
{
lean_object* v___x_1639_; 
v___x_1639_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1636_, v_httpResponseHeaderSectionSize_1638_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseHeaderSize_elim___redArg(lean_object* v_t_1640_, lean_object* v_httpResponseHeaderSize_1641_){
_start:
{
lean_object* v___x_1642_; 
v___x_1642_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1640_, v_httpResponseHeaderSize_1641_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseHeaderSize_elim(lean_object* v_motive_1643_, lean_object* v_t_1644_, lean_object* v_h_1645_, lean_object* v_httpResponseHeaderSize_1646_){
_start:
{
lean_object* v___x_1647_; 
v___x_1647_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1644_, v_httpResponseHeaderSize_1646_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseBodySize_elim___redArg(lean_object* v_t_1648_, lean_object* v_httpResponseBodySize_1649_){
_start:
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1648_, v_httpResponseBodySize_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseBodySize_elim(lean_object* v_motive_1651_, lean_object* v_t_1652_, lean_object* v_h_1653_, lean_object* v_httpResponseBodySize_1654_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1652_, v_httpResponseBodySize_1654_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTrailerSectionSize_elim___redArg(lean_object* v_t_1656_, lean_object* v_httpResponseTrailerSectionSize_1657_){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1656_, v_httpResponseTrailerSectionSize_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTrailerSectionSize_elim(lean_object* v_motive_1659_, lean_object* v_t_1660_, lean_object* v_h_1661_, lean_object* v_httpResponseTrailerSectionSize_1662_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1660_, v_httpResponseTrailerSectionSize_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTrailerSize_elim___redArg(lean_object* v_t_1664_, lean_object* v_httpResponseTrailerSize_1665_){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1664_, v_httpResponseTrailerSize_1665_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTrailerSize_elim(lean_object* v_motive_1667_, lean_object* v_t_1668_, lean_object* v_h_1669_, lean_object* v_httpResponseTrailerSize_1670_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1668_, v_httpResponseTrailerSize_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTransferCoding_elim___redArg(lean_object* v_t_1672_, lean_object* v_httpResponseTransferCoding_1673_){
_start:
{
lean_object* v___x_1674_; 
v___x_1674_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1672_, v_httpResponseTransferCoding_1673_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTransferCoding_elim(lean_object* v_motive_1675_, lean_object* v_t_1676_, lean_object* v_h_1677_, lean_object* v_httpResponseTransferCoding_1678_){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1676_, v_httpResponseTransferCoding_1678_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseContentCoding_elim___redArg(lean_object* v_t_1680_, lean_object* v_httpResponseContentCoding_1681_){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1680_, v_httpResponseContentCoding_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseContentCoding_elim(lean_object* v_motive_1683_, lean_object* v_t_1684_, lean_object* v_h_1685_, lean_object* v_httpResponseContentCoding_1686_){
_start:
{
lean_object* v___x_1687_; 
v___x_1687_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1684_, v_httpResponseContentCoding_1686_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTimeout_elim___redArg(lean_object* v_t_1688_, lean_object* v_httpResponseTimeout_1689_){
_start:
{
lean_object* v___x_1690_; 
v___x_1690_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1688_, v_httpResponseTimeout_1689_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTimeout_elim(lean_object* v_motive_1691_, lean_object* v_t_1692_, lean_object* v_h_1693_, lean_object* v_httpResponseTimeout_1694_){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1692_, v_httpResponseTimeout_1694_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpUpgradeFailed_elim___redArg(lean_object* v_t_1696_, lean_object* v_httpUpgradeFailed_1697_){
_start:
{
lean_object* v___x_1698_; 
v___x_1698_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1696_, v_httpUpgradeFailed_1697_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpUpgradeFailed_elim(lean_object* v_motive_1699_, lean_object* v_t_1700_, lean_object* v_h_1701_, lean_object* v_httpUpgradeFailed_1702_){
_start:
{
lean_object* v___x_1703_; 
v___x_1703_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1700_, v_httpUpgradeFailed_1702_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpProtocolError_elim___redArg(lean_object* v_t_1704_, lean_object* v_httpProtocolError_1705_){
_start:
{
lean_object* v___x_1706_; 
v___x_1706_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1704_, v_httpProtocolError_1705_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpProtocolError_elim(lean_object* v_motive_1707_, lean_object* v_t_1708_, lean_object* v_h_1709_, lean_object* v_httpProtocolError_1710_){
_start:
{
lean_object* v___x_1711_; 
v___x_1711_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1708_, v_httpProtocolError_1710_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_loopDetected_elim___redArg(lean_object* v_t_1712_, lean_object* v_loopDetected_1713_){
_start:
{
lean_object* v___x_1714_; 
v___x_1714_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1712_, v_loopDetected_1713_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_loopDetected_elim(lean_object* v_motive_1715_, lean_object* v_t_1716_, lean_object* v_h_1717_, lean_object* v_loopDetected_1718_){
_start:
{
lean_object* v___x_1719_; 
v___x_1719_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1716_, v_loopDetected_1718_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_configurationError_elim___redArg(lean_object* v_t_1720_, lean_object* v_configurationError_1721_){
_start:
{
lean_object* v___x_1722_; 
v___x_1722_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1720_, v_configurationError_1721_);
return v___x_1722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_configurationError_elim(lean_object* v_motive_1723_, lean_object* v_t_1724_, lean_object* v_h_1725_, lean_object* v_configurationError_1726_){
_start:
{
lean_object* v___x_1727_; 
v___x_1727_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1724_, v_configurationError_1726_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_internalError_elim___redArg(lean_object* v_t_1728_, lean_object* v_internalError_1729_){
_start:
{
lean_object* v___x_1730_; 
v___x_1730_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1728_, v_internalError_1729_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_internalError_elim(lean_object* v_motive_1731_, lean_object* v_t_1732_, lean_object* v_h_1733_, lean_object* v_internalError_1734_){
_start:
{
lean_object* v___x_1735_; 
v___x_1735_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1732_, v_internalError_1734_);
return v___x_1735_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instInhabitedErrorCode_default(void){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = lean_box(0);
return v___x_1736_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instInhabitedErrorCode(void){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = lean_box(0);
return v___x_1737_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0(lean_object* v_x_1738_, lean_object* v_x_1739_){
_start:
{
if (lean_obj_tag(v_x_1738_) == 0)
{
if (lean_obj_tag(v_x_1739_) == 0)
{
uint8_t v___x_1740_; 
v___x_1740_ = 1;
return v___x_1740_;
}
else
{
uint8_t v___x_1741_; 
v___x_1741_ = 0;
return v___x_1741_;
}
}
else
{
if (lean_obj_tag(v_x_1739_) == 0)
{
uint8_t v___x_1742_; 
v___x_1742_ = 0;
return v___x_1742_;
}
else
{
lean_object* v_val_1743_; lean_object* v_val_1744_; uint64_t v___x_1745_; uint64_t v___x_1746_; uint8_t v___x_1747_; 
v_val_1743_ = lean_ctor_get(v_x_1738_, 0);
v_val_1744_ = lean_ctor_get(v_x_1739_, 0);
v___x_1745_ = lean_unbox_uint64(v_val_1743_);
v___x_1746_ = lean_unbox_uint64(v_val_1744_);
v___x_1747_ = lean_uint64_dec_eq(v___x_1745_, v___x_1746_);
return v___x_1747_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0___boxed(lean_object* v_x_1748_, lean_object* v_x_1749_){
_start:
{
uint8_t v_res_1750_; lean_object* v_r_1751_; 
v_res_1750_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0(v_x_1748_, v_x_1749_);
lean_dec(v_x_1749_);
lean_dec(v_x_1748_);
v_r_1751_ = lean_box(v_res_1750_);
return v_r_1751_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__1(lean_object* v_x_1752_, lean_object* v_x_1753_){
_start:
{
if (lean_obj_tag(v_x_1752_) == 0)
{
if (lean_obj_tag(v_x_1753_) == 0)
{
uint8_t v___x_1754_; 
v___x_1754_ = 1;
return v___x_1754_;
}
else
{
uint8_t v___x_1755_; 
v___x_1755_ = 0;
return v___x_1755_;
}
}
else
{
if (lean_obj_tag(v_x_1753_) == 0)
{
uint8_t v___x_1756_; 
v___x_1756_ = 0;
return v___x_1756_;
}
else
{
lean_object* v_val_1757_; lean_object* v_val_1758_; uint8_t v___x_1759_; 
v_val_1757_ = lean_ctor_get(v_x_1752_, 0);
v_val_1758_ = lean_ctor_get(v_x_1753_, 0);
v___x_1759_ = l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(v_val_1757_, v_val_1758_);
return v___x_1759_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__1___boxed(lean_object* v_x_1760_, lean_object* v_x_1761_){
_start:
{
uint8_t v_res_1762_; lean_object* v_r_1763_; 
v_res_1762_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__1(v_x_1760_, v_x_1761_);
lean_dec(v_x_1761_);
lean_dec(v_x_1760_);
v_r_1763_ = lean_box(v_res_1762_);
return v_r_1763_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqErrorCode_beq(lean_object* v_x_1764_, lean_object* v_x_1765_){
_start:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; uint8_t v_decide_1768_; 
v___x_1766_ = lean_obj_tag_nat(v_x_1764_);
v___x_1767_ = lean_obj_tag_nat(v_x_1765_);
v_decide_1768_ = lean_nat_dec_eq(v___x_1766_, v___x_1767_);
if (v_decide_1768_ == 0)
{
return v_decide_1768_;
}
else
{
switch(lean_obj_tag(v_x_1764_))
{
case 1:
{
lean_object* v_payload_1769_; lean_object* v_payload_1770_; uint8_t v___x_1771_; 
v_payload_1769_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1770_ = lean_ctor_get(v_x_1765_, 0);
v___x_1771_ = l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq(v_payload_1769_, v_payload_1770_);
return v___x_1771_;
}
case 14:
{
lean_object* v_payload_1772_; lean_object* v_payload_1773_; uint8_t v___x_1774_; 
v_payload_1772_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1773_ = lean_ctor_get(v_x_1765_, 0);
v___x_1774_ = l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq(v_payload_1772_, v_payload_1773_);
return v___x_1774_;
}
case 17:
{
lean_object* v_payload_1775_; lean_object* v_payload_1776_; uint8_t v___x_1777_; 
v_payload_1775_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1776_ = lean_ctor_get(v_x_1765_, 0);
v___x_1777_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0(v_payload_1775_, v_payload_1776_);
return v___x_1777_;
}
case 21:
{
lean_object* v_payload_1778_; lean_object* v_payload_1779_; uint8_t v___x_1780_; 
v_payload_1778_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1779_ = lean_ctor_get(v_x_1765_, 0);
v___x_1780_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(v_payload_1778_, v_payload_1779_);
return v___x_1780_;
}
case 22:
{
lean_object* v_payload_1781_; lean_object* v_payload_1782_; uint8_t v___x_1783_; 
v_payload_1781_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1782_ = lean_ctor_get(v_x_1765_, 0);
v___x_1783_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__1(v_payload_1781_, v_payload_1782_);
return v___x_1783_;
}
case 23:
{
lean_object* v_payload_1784_; lean_object* v_payload_1785_; uint8_t v___x_1786_; 
v_payload_1784_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1785_ = lean_ctor_get(v_x_1765_, 0);
v___x_1786_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(v_payload_1784_, v_payload_1785_);
return v___x_1786_;
}
case 24:
{
lean_object* v_payload_1787_; lean_object* v_payload_1788_; uint8_t v___x_1789_; 
v_payload_1787_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1788_ = lean_ctor_get(v_x_1765_, 0);
v___x_1789_ = l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(v_payload_1787_, v_payload_1788_);
return v___x_1789_;
}
case 26:
{
lean_object* v_payload_1790_; lean_object* v_payload_1791_; uint8_t v___x_1792_; 
v_payload_1790_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1791_ = lean_ctor_get(v_x_1765_, 0);
v___x_1792_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(v_payload_1790_, v_payload_1791_);
return v___x_1792_;
}
case 27:
{
lean_object* v_payload_1793_; lean_object* v_payload_1794_; uint8_t v___x_1795_; 
v_payload_1793_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1794_ = lean_ctor_get(v_x_1765_, 0);
v___x_1795_ = l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(v_payload_1793_, v_payload_1794_);
return v___x_1795_;
}
case 28:
{
lean_object* v_payload_1796_; lean_object* v_payload_1797_; uint8_t v___x_1798_; 
v_payload_1796_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1797_ = lean_ctor_get(v_x_1765_, 0);
v___x_1798_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0(v_payload_1796_, v_payload_1797_);
return v___x_1798_;
}
case 29:
{
lean_object* v_payload_1799_; lean_object* v_payload_1800_; uint8_t v___x_1801_; 
v_payload_1799_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1800_ = lean_ctor_get(v_x_1765_, 0);
v___x_1801_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(v_payload_1799_, v_payload_1800_);
return v___x_1801_;
}
case 30:
{
lean_object* v_payload_1802_; lean_object* v_payload_1803_; uint8_t v___x_1804_; 
v_payload_1802_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1803_ = lean_ctor_get(v_x_1765_, 0);
v___x_1804_ = l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(v_payload_1802_, v_payload_1803_);
return v___x_1804_;
}
case 31:
{
lean_object* v_payload_1805_; lean_object* v_payload_1806_; uint8_t v___x_1807_; 
v_payload_1805_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1806_ = lean_ctor_get(v_x_1765_, 0);
v___x_1807_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_payload_1805_, v_payload_1806_);
return v___x_1807_;
}
case 32:
{
lean_object* v_payload_1808_; lean_object* v_payload_1809_; uint8_t v___x_1810_; 
v_payload_1808_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1809_ = lean_ctor_get(v_x_1765_, 0);
v___x_1810_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_payload_1808_, v_payload_1809_);
return v___x_1810_;
}
case 38:
{
lean_object* v_payload_1811_; lean_object* v_payload_1812_; uint8_t v___x_1813_; 
v_payload_1811_ = lean_ctor_get(v_x_1764_, 0);
v_payload_1812_ = lean_ctor_get(v_x_1765_, 0);
v___x_1813_ = l_instBEqOption_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_payload_1811_, v_payload_1812_);
return v___x_1813_;
}
default: 
{
return v_decide_1768_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqErrorCode_beq___boxed(lean_object* v_x_1814_, lean_object* v_x_1815_){
_start:
{
uint8_t v_res_1816_; lean_object* v_r_1817_; 
v_res_1816_ = l_Lasm_WASI_Http_Types_instBEqErrorCode_beq(v_x_1814_, v_x_1815_);
lean_dec(v_x_1815_);
lean_dec(v_x_1814_);
v_r_1817_ = lean_box(v_res_1816_);
return v_r_1817_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__0(lean_object* v_x_1820_, lean_object* v_x_1821_){
_start:
{
if (lean_obj_tag(v_x_1820_) == 0)
{
lean_object* v___x_1822_; 
v___x_1822_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1));
return v___x_1822_;
}
else
{
lean_object* v_val_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1836_; 
v_val_1823_ = lean_ctor_get(v_x_1820_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_x_1820_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1825_ = v_x_1820_;
v_isShared_1826_ = v_isSharedCheck_1836_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_val_1823_);
lean_dec(v_x_1820_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1836_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1827_; uint64_t v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1832_; 
v___x_1827_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3));
v___x_1828_ = lean_unbox_uint64(v_val_1823_);
lean_dec(v_val_1823_);
v___x_1829_ = lean_uint64_to_nat(v___x_1828_);
v___x_1830_ = l_Nat_reprFast(v___x_1829_);
if (v_isShared_1826_ == 0)
{
lean_ctor_set_tag(v___x_1825_, 3);
lean_ctor_set(v___x_1825_, 0, v___x_1830_);
v___x_1832_ = v___x_1825_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v___x_1830_);
v___x_1832_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1833_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1827_);
lean_ctor_set(v___x_1833_, 1, v___x_1832_);
v___x_1834_ = l_Repr_addAppParen(v___x_1833_, v_x_1821_);
return v___x_1834_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__0___boxed(lean_object* v_x_1837_, lean_object* v_x_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__0(v_x_1837_, v_x_1838_);
lean_dec(v_x_1838_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__1(lean_object* v_x_1840_, lean_object* v_x_1841_){
_start:
{
if (lean_obj_tag(v_x_1840_) == 0)
{
lean_object* v___x_1842_; 
v___x_1842_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1));
return v___x_1842_;
}
else
{
lean_object* v_val_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v_val_1843_ = lean_ctor_get(v_x_1840_, 0);
lean_inc(v_val_1843_);
lean_dec_ref_known(v_x_1840_, 1);
v___x_1844_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3));
v___x_1845_ = l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(v_val_1843_);
v___x_1846_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1844_);
lean_ctor_set(v___x_1846_, 1, v___x_1845_);
v___x_1847_ = l_Repr_addAppParen(v___x_1846_, v_x_1841_);
return v___x_1847_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__1___boxed(lean_object* v_x_1848_, lean_object* v_x_1849_){
_start:
{
lean_object* v_res_1850_; 
v_res_1850_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__1(v_x_1848_, v_x_1849_);
lean_dec(v_x_1849_);
return v_res_1850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr(lean_object* v_x_2013_, lean_object* v_prec_2014_){
_start:
{
lean_object* v___y_2016_; lean_object* v___y_2023_; lean_object* v___y_2030_; lean_object* v___y_2037_; lean_object* v___y_2044_; lean_object* v___y_2051_; lean_object* v___y_2058_; lean_object* v___y_2065_; lean_object* v___y_2072_; lean_object* v___y_2079_; lean_object* v___y_2086_; lean_object* v___y_2093_; lean_object* v___y_2100_; lean_object* v___y_2107_; lean_object* v___y_2114_; lean_object* v___y_2121_; lean_object* v___y_2128_; lean_object* v___y_2135_; lean_object* v___y_2142_; lean_object* v___y_2149_; lean_object* v___y_2156_; lean_object* v___y_2163_; lean_object* v___y_2170_; lean_object* v___y_2177_; 
switch(lean_obj_tag(v_x_2013_))
{
case 0:
{
lean_object* v___x_2183_; uint8_t v___x_2184_; 
v___x_2183_ = lean_unsigned_to_nat(1024u);
v___x_2184_ = lean_nat_dec_le(v___x_2183_, v_prec_2014_);
if (v___x_2184_ == 0)
{
lean_object* v___x_2185_; 
v___x_2185_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2065_ = v___x_2185_;
goto v___jp_2064_;
}
else
{
lean_object* v___x_2186_; 
v___x_2186_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2065_ = v___x_2186_;
goto v___jp_2064_;
}
}
case 1:
{
lean_object* v_payload_2187_; lean_object* v___y_2189_; lean_object* v___x_2197_; uint8_t v___x_2198_; 
v_payload_2187_ = lean_ctor_get(v_x_2013_, 0);
lean_inc_ref(v_payload_2187_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2197_ = lean_unsigned_to_nat(1024u);
v___x_2198_ = lean_nat_dec_le(v___x_2197_, v_prec_2014_);
if (v___x_2198_ == 0)
{
lean_object* v___x_2199_; 
v___x_2199_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2189_ = v___x_2199_;
goto v___jp_2188_;
}
else
{
lean_object* v___x_2200_; 
v___x_2200_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2189_ = v___x_2200_;
goto v___jp_2188_;
}
v___jp_2188_:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; uint8_t v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2190_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__50));
v___x_2191_ = l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg(v_payload_2187_);
v___x_2192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2190_);
lean_ctor_set(v___x_2192_, 1, v___x_2191_);
lean_inc(v___y_2189_);
v___x_2193_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2193_, 0, v___y_2189_);
lean_ctor_set(v___x_2193_, 1, v___x_2192_);
v___x_2194_ = 0;
v___x_2195_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2195_, 0, v___x_2193_);
lean_ctor_set_uint8(v___x_2195_, sizeof(void*)*1, v___x_2194_);
v___x_2196_ = l_Repr_addAppParen(v___x_2195_, v_prec_2014_);
return v___x_2196_;
}
}
case 2:
{
lean_object* v___x_2201_; uint8_t v___x_2202_; 
v___x_2201_ = lean_unsigned_to_nat(1024u);
v___x_2202_ = lean_nat_dec_le(v___x_2201_, v_prec_2014_);
if (v___x_2202_ == 0)
{
lean_object* v___x_2203_; 
v___x_2203_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2072_ = v___x_2203_;
goto v___jp_2071_;
}
else
{
lean_object* v___x_2204_; 
v___x_2204_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2072_ = v___x_2204_;
goto v___jp_2071_;
}
}
case 3:
{
lean_object* v___x_2205_; uint8_t v___x_2206_; 
v___x_2205_ = lean_unsigned_to_nat(1024u);
v___x_2206_ = lean_nat_dec_le(v___x_2205_, v_prec_2014_);
if (v___x_2206_ == 0)
{
lean_object* v___x_2207_; 
v___x_2207_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2079_ = v___x_2207_;
goto v___jp_2078_;
}
else
{
lean_object* v___x_2208_; 
v___x_2208_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2079_ = v___x_2208_;
goto v___jp_2078_;
}
}
case 4:
{
lean_object* v___x_2209_; uint8_t v___x_2210_; 
v___x_2209_ = lean_unsigned_to_nat(1024u);
v___x_2210_ = lean_nat_dec_le(v___x_2209_, v_prec_2014_);
if (v___x_2210_ == 0)
{
lean_object* v___x_2211_; 
v___x_2211_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2086_ = v___x_2211_;
goto v___jp_2085_;
}
else
{
lean_object* v___x_2212_; 
v___x_2212_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2086_ = v___x_2212_;
goto v___jp_2085_;
}
}
case 5:
{
lean_object* v___x_2213_; uint8_t v___x_2214_; 
v___x_2213_ = lean_unsigned_to_nat(1024u);
v___x_2214_ = lean_nat_dec_le(v___x_2213_, v_prec_2014_);
if (v___x_2214_ == 0)
{
lean_object* v___x_2215_; 
v___x_2215_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2093_ = v___x_2215_;
goto v___jp_2092_;
}
else
{
lean_object* v___x_2216_; 
v___x_2216_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2093_ = v___x_2216_;
goto v___jp_2092_;
}
}
case 6:
{
lean_object* v___x_2217_; uint8_t v___x_2218_; 
v___x_2217_ = lean_unsigned_to_nat(1024u);
v___x_2218_ = lean_nat_dec_le(v___x_2217_, v_prec_2014_);
if (v___x_2218_ == 0)
{
lean_object* v___x_2219_; 
v___x_2219_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2100_ = v___x_2219_;
goto v___jp_2099_;
}
else
{
lean_object* v___x_2220_; 
v___x_2220_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2100_ = v___x_2220_;
goto v___jp_2099_;
}
}
case 7:
{
lean_object* v___x_2221_; uint8_t v___x_2222_; 
v___x_2221_ = lean_unsigned_to_nat(1024u);
v___x_2222_ = lean_nat_dec_le(v___x_2221_, v_prec_2014_);
if (v___x_2222_ == 0)
{
lean_object* v___x_2223_; 
v___x_2223_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2107_ = v___x_2223_;
goto v___jp_2106_;
}
else
{
lean_object* v___x_2224_; 
v___x_2224_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2107_ = v___x_2224_;
goto v___jp_2106_;
}
}
case 8:
{
lean_object* v___x_2225_; uint8_t v___x_2226_; 
v___x_2225_ = lean_unsigned_to_nat(1024u);
v___x_2226_ = lean_nat_dec_le(v___x_2225_, v_prec_2014_);
if (v___x_2226_ == 0)
{
lean_object* v___x_2227_; 
v___x_2227_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2114_ = v___x_2227_;
goto v___jp_2113_;
}
else
{
lean_object* v___x_2228_; 
v___x_2228_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2114_ = v___x_2228_;
goto v___jp_2113_;
}
}
case 9:
{
lean_object* v___x_2229_; uint8_t v___x_2230_; 
v___x_2229_ = lean_unsigned_to_nat(1024u);
v___x_2230_ = lean_nat_dec_le(v___x_2229_, v_prec_2014_);
if (v___x_2230_ == 0)
{
lean_object* v___x_2231_; 
v___x_2231_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2121_ = v___x_2231_;
goto v___jp_2120_;
}
else
{
lean_object* v___x_2232_; 
v___x_2232_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2121_ = v___x_2232_;
goto v___jp_2120_;
}
}
case 10:
{
lean_object* v___x_2233_; uint8_t v___x_2234_; 
v___x_2233_ = lean_unsigned_to_nat(1024u);
v___x_2234_ = lean_nat_dec_le(v___x_2233_, v_prec_2014_);
if (v___x_2234_ == 0)
{
lean_object* v___x_2235_; 
v___x_2235_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2128_ = v___x_2235_;
goto v___jp_2127_;
}
else
{
lean_object* v___x_2236_; 
v___x_2236_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2128_ = v___x_2236_;
goto v___jp_2127_;
}
}
case 11:
{
lean_object* v___x_2237_; uint8_t v___x_2238_; 
v___x_2237_ = lean_unsigned_to_nat(1024u);
v___x_2238_ = lean_nat_dec_le(v___x_2237_, v_prec_2014_);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; 
v___x_2239_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2135_ = v___x_2239_;
goto v___jp_2134_;
}
else
{
lean_object* v___x_2240_; 
v___x_2240_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2135_ = v___x_2240_;
goto v___jp_2134_;
}
}
case 12:
{
lean_object* v___x_2241_; uint8_t v___x_2242_; 
v___x_2241_ = lean_unsigned_to_nat(1024u);
v___x_2242_ = lean_nat_dec_le(v___x_2241_, v_prec_2014_);
if (v___x_2242_ == 0)
{
lean_object* v___x_2243_; 
v___x_2243_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2142_ = v___x_2243_;
goto v___jp_2141_;
}
else
{
lean_object* v___x_2244_; 
v___x_2244_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2142_ = v___x_2244_;
goto v___jp_2141_;
}
}
case 13:
{
lean_object* v___x_2245_; uint8_t v___x_2246_; 
v___x_2245_ = lean_unsigned_to_nat(1024u);
v___x_2246_ = lean_nat_dec_le(v___x_2245_, v_prec_2014_);
if (v___x_2246_ == 0)
{
lean_object* v___x_2247_; 
v___x_2247_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2149_ = v___x_2247_;
goto v___jp_2148_;
}
else
{
lean_object* v___x_2248_; 
v___x_2248_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2149_ = v___x_2248_;
goto v___jp_2148_;
}
}
case 14:
{
lean_object* v_payload_2249_; lean_object* v___y_2251_; lean_object* v___x_2259_; uint8_t v___x_2260_; 
v_payload_2249_ = lean_ctor_get(v_x_2013_, 0);
lean_inc_ref(v_payload_2249_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2259_ = lean_unsigned_to_nat(1024u);
v___x_2260_ = lean_nat_dec_le(v___x_2259_, v_prec_2014_);
if (v___x_2260_ == 0)
{
lean_object* v___x_2261_; 
v___x_2261_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2251_ = v___x_2261_;
goto v___jp_2250_;
}
else
{
lean_object* v___x_2262_; 
v___x_2262_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2251_ = v___x_2262_;
goto v___jp_2250_;
}
v___jp_2250_:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; uint8_t v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2252_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__53));
v___x_2253_ = l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg(v_payload_2249_);
v___x_2254_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2252_);
lean_ctor_set(v___x_2254_, 1, v___x_2253_);
lean_inc(v___y_2251_);
v___x_2255_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2255_, 0, v___y_2251_);
lean_ctor_set(v___x_2255_, 1, v___x_2254_);
v___x_2256_ = 0;
v___x_2257_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2257_, 0, v___x_2255_);
lean_ctor_set_uint8(v___x_2257_, sizeof(void*)*1, v___x_2256_);
v___x_2258_ = l_Repr_addAppParen(v___x_2257_, v_prec_2014_);
return v___x_2258_;
}
}
case 15:
{
lean_object* v___x_2263_; uint8_t v___x_2264_; 
v___x_2263_ = lean_unsigned_to_nat(1024u);
v___x_2264_ = lean_nat_dec_le(v___x_2263_, v_prec_2014_);
if (v___x_2264_ == 0)
{
lean_object* v___x_2265_; 
v___x_2265_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2058_ = v___x_2265_;
goto v___jp_2057_;
}
else
{
lean_object* v___x_2266_; 
v___x_2266_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2058_ = v___x_2266_;
goto v___jp_2057_;
}
}
case 16:
{
lean_object* v___x_2267_; uint8_t v___x_2268_; 
v___x_2267_ = lean_unsigned_to_nat(1024u);
v___x_2268_ = lean_nat_dec_le(v___x_2267_, v_prec_2014_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; 
v___x_2269_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2051_ = v___x_2269_;
goto v___jp_2050_;
}
else
{
lean_object* v___x_2270_; 
v___x_2270_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2051_ = v___x_2270_;
goto v___jp_2050_;
}
}
case 17:
{
lean_object* v_payload_2271_; lean_object* v___y_2273_; lean_object* v___x_2282_; uint8_t v___x_2283_; 
v_payload_2271_ = lean_ctor_get(v_x_2013_, 0);
lean_inc(v_payload_2271_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2282_ = lean_unsigned_to_nat(1024u);
v___x_2283_ = lean_nat_dec_le(v___x_2282_, v_prec_2014_);
if (v___x_2283_ == 0)
{
lean_object* v___x_2284_; 
v___x_2284_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2273_ = v___x_2284_;
goto v___jp_2272_;
}
else
{
lean_object* v___x_2285_; 
v___x_2285_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2273_ = v___x_2285_;
goto v___jp_2272_;
}
v___jp_2272_:
{
lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; uint8_t v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2274_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__56));
v___x_2275_ = lean_unsigned_to_nat(1024u);
v___x_2276_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__0(v_payload_2271_, v___x_2275_);
v___x_2277_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2274_);
lean_ctor_set(v___x_2277_, 1, v___x_2276_);
lean_inc(v___y_2273_);
v___x_2278_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2278_, 0, v___y_2273_);
lean_ctor_set(v___x_2278_, 1, v___x_2277_);
v___x_2279_ = 0;
v___x_2280_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2280_, 0, v___x_2278_);
lean_ctor_set_uint8(v___x_2280_, sizeof(void*)*1, v___x_2279_);
v___x_2281_ = l_Repr_addAppParen(v___x_2280_, v_prec_2014_);
return v___x_2281_;
}
}
case 18:
{
lean_object* v___x_2286_; uint8_t v___x_2287_; 
v___x_2286_ = lean_unsigned_to_nat(1024u);
v___x_2287_ = lean_nat_dec_le(v___x_2286_, v_prec_2014_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; 
v___x_2288_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2156_ = v___x_2288_;
goto v___jp_2155_;
}
else
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2156_ = v___x_2289_;
goto v___jp_2155_;
}
}
case 19:
{
lean_object* v___x_2290_; uint8_t v___x_2291_; 
v___x_2290_ = lean_unsigned_to_nat(1024u);
v___x_2291_ = lean_nat_dec_le(v___x_2290_, v_prec_2014_);
if (v___x_2291_ == 0)
{
lean_object* v___x_2292_; 
v___x_2292_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2163_ = v___x_2292_;
goto v___jp_2162_;
}
else
{
lean_object* v___x_2293_; 
v___x_2293_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2163_ = v___x_2293_;
goto v___jp_2162_;
}
}
case 20:
{
lean_object* v___x_2294_; uint8_t v___x_2295_; 
v___x_2294_ = lean_unsigned_to_nat(1024u);
v___x_2295_ = lean_nat_dec_le(v___x_2294_, v_prec_2014_);
if (v___x_2295_ == 0)
{
lean_object* v___x_2296_; 
v___x_2296_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2170_ = v___x_2296_;
goto v___jp_2169_;
}
else
{
lean_object* v___x_2297_; 
v___x_2297_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2170_ = v___x_2297_;
goto v___jp_2169_;
}
}
case 21:
{
lean_object* v_payload_2298_; lean_object* v___y_2300_; lean_object* v___x_2309_; uint8_t v___x_2310_; 
v_payload_2298_ = lean_ctor_get(v_x_2013_, 0);
lean_inc(v_payload_2298_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2309_ = lean_unsigned_to_nat(1024u);
v___x_2310_ = lean_nat_dec_le(v___x_2309_, v_prec_2014_);
if (v___x_2310_ == 0)
{
lean_object* v___x_2311_; 
v___x_2311_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2300_ = v___x_2311_;
goto v___jp_2299_;
}
else
{
lean_object* v___x_2312_; 
v___x_2312_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2300_ = v___x_2312_;
goto v___jp_2299_;
}
v___jp_2299_:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; uint8_t v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2301_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__59));
v___x_2302_ = lean_unsigned_to_nat(1024u);
v___x_2303_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(v_payload_2298_, v___x_2302_);
v___x_2304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2301_);
lean_ctor_set(v___x_2304_, 1, v___x_2303_);
lean_inc(v___y_2300_);
v___x_2305_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___y_2300_);
lean_ctor_set(v___x_2305_, 1, v___x_2304_);
v___x_2306_ = 0;
v___x_2307_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2307_, 0, v___x_2305_);
lean_ctor_set_uint8(v___x_2307_, sizeof(void*)*1, v___x_2306_);
v___x_2308_ = l_Repr_addAppParen(v___x_2307_, v_prec_2014_);
return v___x_2308_;
}
}
case 22:
{
lean_object* v_payload_2313_; lean_object* v___y_2315_; lean_object* v___x_2324_; uint8_t v___x_2325_; 
v_payload_2313_ = lean_ctor_get(v_x_2013_, 0);
lean_inc(v_payload_2313_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2324_ = lean_unsigned_to_nat(1024u);
v___x_2325_ = lean_nat_dec_le(v___x_2324_, v_prec_2014_);
if (v___x_2325_ == 0)
{
lean_object* v___x_2326_; 
v___x_2326_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2315_ = v___x_2326_;
goto v___jp_2314_;
}
else
{
lean_object* v___x_2327_; 
v___x_2327_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2315_ = v___x_2327_;
goto v___jp_2314_;
}
v___jp_2314_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; uint8_t v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2316_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__62));
v___x_2317_ = lean_unsigned_to_nat(1024u);
v___x_2318_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__1(v_payload_2313_, v___x_2317_);
v___x_2319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2316_);
lean_ctor_set(v___x_2319_, 1, v___x_2318_);
lean_inc(v___y_2315_);
v___x_2320_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___y_2315_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
v___x_2321_ = 0;
v___x_2322_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2322_, 0, v___x_2320_);
lean_ctor_set_uint8(v___x_2322_, sizeof(void*)*1, v___x_2321_);
v___x_2323_ = l_Repr_addAppParen(v___x_2322_, v_prec_2014_);
return v___x_2323_;
}
}
case 23:
{
lean_object* v_payload_2328_; lean_object* v___y_2330_; lean_object* v___x_2339_; uint8_t v___x_2340_; 
v_payload_2328_ = lean_ctor_get(v_x_2013_, 0);
lean_inc(v_payload_2328_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2339_ = lean_unsigned_to_nat(1024u);
v___x_2340_ = lean_nat_dec_le(v___x_2339_, v_prec_2014_);
if (v___x_2340_ == 0)
{
lean_object* v___x_2341_; 
v___x_2341_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2330_ = v___x_2341_;
goto v___jp_2329_;
}
else
{
lean_object* v___x_2342_; 
v___x_2342_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2330_ = v___x_2342_;
goto v___jp_2329_;
}
v___jp_2329_:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; uint8_t v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___x_2331_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__65));
v___x_2332_ = lean_unsigned_to_nat(1024u);
v___x_2333_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(v_payload_2328_, v___x_2332_);
v___x_2334_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2331_);
lean_ctor_set(v___x_2334_, 1, v___x_2333_);
lean_inc(v___y_2330_);
v___x_2335_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___y_2330_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
v___x_2336_ = 0;
v___x_2337_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2337_, 0, v___x_2335_);
lean_ctor_set_uint8(v___x_2337_, sizeof(void*)*1, v___x_2336_);
v___x_2338_ = l_Repr_addAppParen(v___x_2337_, v_prec_2014_);
return v___x_2338_;
}
}
case 24:
{
lean_object* v_payload_2343_; lean_object* v___y_2345_; lean_object* v___x_2353_; uint8_t v___x_2354_; 
v_payload_2343_ = lean_ctor_get(v_x_2013_, 0);
lean_inc_ref(v_payload_2343_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2353_ = lean_unsigned_to_nat(1024u);
v___x_2354_ = lean_nat_dec_le(v___x_2353_, v_prec_2014_);
if (v___x_2354_ == 0)
{
lean_object* v___x_2355_; 
v___x_2355_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2345_ = v___x_2355_;
goto v___jp_2344_;
}
else
{
lean_object* v___x_2356_; 
v___x_2356_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2345_ = v___x_2356_;
goto v___jp_2344_;
}
v___jp_2344_:
{
lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; uint8_t v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2346_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__68));
v___x_2347_ = l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(v_payload_2343_);
v___x_2348_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2346_);
lean_ctor_set(v___x_2348_, 1, v___x_2347_);
lean_inc(v___y_2345_);
v___x_2349_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2349_, 0, v___y_2345_);
lean_ctor_set(v___x_2349_, 1, v___x_2348_);
v___x_2350_ = 0;
v___x_2351_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2351_, 0, v___x_2349_);
lean_ctor_set_uint8(v___x_2351_, sizeof(void*)*1, v___x_2350_);
v___x_2352_ = l_Repr_addAppParen(v___x_2351_, v_prec_2014_);
return v___x_2352_;
}
}
case 25:
{
lean_object* v___x_2357_; uint8_t v___x_2358_; 
v___x_2357_ = lean_unsigned_to_nat(1024u);
v___x_2358_ = lean_nat_dec_le(v___x_2357_, v_prec_2014_);
if (v___x_2358_ == 0)
{
lean_object* v___x_2359_; 
v___x_2359_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2177_ = v___x_2359_;
goto v___jp_2176_;
}
else
{
lean_object* v___x_2360_; 
v___x_2360_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2177_ = v___x_2360_;
goto v___jp_2176_;
}
}
case 26:
{
lean_object* v_payload_2361_; lean_object* v___y_2363_; lean_object* v___x_2372_; uint8_t v___x_2373_; 
v_payload_2361_ = lean_ctor_get(v_x_2013_, 0);
lean_inc(v_payload_2361_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2372_ = lean_unsigned_to_nat(1024u);
v___x_2373_ = lean_nat_dec_le(v___x_2372_, v_prec_2014_);
if (v___x_2373_ == 0)
{
lean_object* v___x_2374_; 
v___x_2374_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2363_ = v___x_2374_;
goto v___jp_2362_;
}
else
{
lean_object* v___x_2375_; 
v___x_2375_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2363_ = v___x_2375_;
goto v___jp_2362_;
}
v___jp_2362_:
{
lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; uint8_t v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2364_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__71));
v___x_2365_ = lean_unsigned_to_nat(1024u);
v___x_2366_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(v_payload_2361_, v___x_2365_);
v___x_2367_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2364_);
lean_ctor_set(v___x_2367_, 1, v___x_2366_);
lean_inc(v___y_2363_);
v___x_2368_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2368_, 0, v___y_2363_);
lean_ctor_set(v___x_2368_, 1, v___x_2367_);
v___x_2369_ = 0;
v___x_2370_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2370_, 0, v___x_2368_);
lean_ctor_set_uint8(v___x_2370_, sizeof(void*)*1, v___x_2369_);
v___x_2371_ = l_Repr_addAppParen(v___x_2370_, v_prec_2014_);
return v___x_2371_;
}
}
case 27:
{
lean_object* v_payload_2376_; lean_object* v___y_2378_; lean_object* v___x_2386_; uint8_t v___x_2387_; 
v_payload_2376_ = lean_ctor_get(v_x_2013_, 0);
lean_inc_ref(v_payload_2376_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2386_ = lean_unsigned_to_nat(1024u);
v___x_2387_ = lean_nat_dec_le(v___x_2386_, v_prec_2014_);
if (v___x_2387_ == 0)
{
lean_object* v___x_2388_; 
v___x_2388_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2378_ = v___x_2388_;
goto v___jp_2377_;
}
else
{
lean_object* v___x_2389_; 
v___x_2389_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2378_ = v___x_2389_;
goto v___jp_2377_;
}
v___jp_2377_:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; uint8_t v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2379_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__74));
v___x_2380_ = l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(v_payload_2376_);
v___x_2381_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2379_);
lean_ctor_set(v___x_2381_, 1, v___x_2380_);
lean_inc(v___y_2378_);
v___x_2382_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2382_, 0, v___y_2378_);
lean_ctor_set(v___x_2382_, 1, v___x_2381_);
v___x_2383_ = 0;
v___x_2384_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2384_, 0, v___x_2382_);
lean_ctor_set_uint8(v___x_2384_, sizeof(void*)*1, v___x_2383_);
v___x_2385_ = l_Repr_addAppParen(v___x_2384_, v_prec_2014_);
return v___x_2385_;
}
}
case 28:
{
lean_object* v_payload_2390_; lean_object* v___y_2392_; lean_object* v___x_2401_; uint8_t v___x_2402_; 
v_payload_2390_ = lean_ctor_get(v_x_2013_, 0);
lean_inc(v_payload_2390_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2401_ = lean_unsigned_to_nat(1024u);
v___x_2402_ = lean_nat_dec_le(v___x_2401_, v_prec_2014_);
if (v___x_2402_ == 0)
{
lean_object* v___x_2403_; 
v___x_2403_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2392_ = v___x_2403_;
goto v___jp_2391_;
}
else
{
lean_object* v___x_2404_; 
v___x_2404_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2392_ = v___x_2404_;
goto v___jp_2391_;
}
v___jp_2391_:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; uint8_t v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2393_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__77));
v___x_2394_ = lean_unsigned_to_nat(1024u);
v___x_2395_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__0(v_payload_2390_, v___x_2394_);
v___x_2396_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2393_);
lean_ctor_set(v___x_2396_, 1, v___x_2395_);
lean_inc(v___y_2392_);
v___x_2397_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2397_, 0, v___y_2392_);
lean_ctor_set(v___x_2397_, 1, v___x_2396_);
v___x_2398_ = 0;
v___x_2399_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2399_, 0, v___x_2397_);
lean_ctor_set_uint8(v___x_2399_, sizeof(void*)*1, v___x_2398_);
v___x_2400_ = l_Repr_addAppParen(v___x_2399_, v_prec_2014_);
return v___x_2400_;
}
}
case 29:
{
lean_object* v_payload_2405_; lean_object* v___y_2407_; lean_object* v___x_2416_; uint8_t v___x_2417_; 
v_payload_2405_ = lean_ctor_get(v_x_2013_, 0);
lean_inc(v_payload_2405_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2416_ = lean_unsigned_to_nat(1024u);
v___x_2417_ = lean_nat_dec_le(v___x_2416_, v_prec_2014_);
if (v___x_2417_ == 0)
{
lean_object* v___x_2418_; 
v___x_2418_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2407_ = v___x_2418_;
goto v___jp_2406_;
}
else
{
lean_object* v___x_2419_; 
v___x_2419_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2407_ = v___x_2419_;
goto v___jp_2406_;
}
v___jp_2406_:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; uint8_t v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2408_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__80));
v___x_2409_ = lean_unsigned_to_nat(1024u);
v___x_2410_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(v_payload_2405_, v___x_2409_);
v___x_2411_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2411_, 0, v___x_2408_);
lean_ctor_set(v___x_2411_, 1, v___x_2410_);
lean_inc(v___y_2407_);
v___x_2412_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2412_, 0, v___y_2407_);
lean_ctor_set(v___x_2412_, 1, v___x_2411_);
v___x_2413_ = 0;
v___x_2414_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2414_, 0, v___x_2412_);
lean_ctor_set_uint8(v___x_2414_, sizeof(void*)*1, v___x_2413_);
v___x_2415_ = l_Repr_addAppParen(v___x_2414_, v_prec_2014_);
return v___x_2415_;
}
}
case 30:
{
lean_object* v_payload_2420_; lean_object* v___y_2422_; lean_object* v___x_2430_; uint8_t v___x_2431_; 
v_payload_2420_ = lean_ctor_get(v_x_2013_, 0);
lean_inc_ref(v_payload_2420_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2430_ = lean_unsigned_to_nat(1024u);
v___x_2431_ = lean_nat_dec_le(v___x_2430_, v_prec_2014_);
if (v___x_2431_ == 0)
{
lean_object* v___x_2432_; 
v___x_2432_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2422_ = v___x_2432_;
goto v___jp_2421_;
}
else
{
lean_object* v___x_2433_; 
v___x_2433_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2422_ = v___x_2433_;
goto v___jp_2421_;
}
v___jp_2421_:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; uint8_t v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2423_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__83));
v___x_2424_ = l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(v_payload_2420_);
v___x_2425_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2423_);
lean_ctor_set(v___x_2425_, 1, v___x_2424_);
lean_inc(v___y_2422_);
v___x_2426_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2426_, 0, v___y_2422_);
lean_ctor_set(v___x_2426_, 1, v___x_2425_);
v___x_2427_ = 0;
v___x_2428_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2428_, 0, v___x_2426_);
lean_ctor_set_uint8(v___x_2428_, sizeof(void*)*1, v___x_2427_);
v___x_2429_ = l_Repr_addAppParen(v___x_2428_, v_prec_2014_);
return v___x_2429_;
}
}
case 31:
{
lean_object* v_payload_2434_; lean_object* v___y_2436_; lean_object* v___x_2445_; uint8_t v___x_2446_; 
v_payload_2434_ = lean_ctor_get(v_x_2013_, 0);
lean_inc(v_payload_2434_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2445_ = lean_unsigned_to_nat(1024u);
v___x_2446_ = lean_nat_dec_le(v___x_2445_, v_prec_2014_);
if (v___x_2446_ == 0)
{
lean_object* v___x_2447_; 
v___x_2447_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2436_ = v___x_2447_;
goto v___jp_2435_;
}
else
{
lean_object* v___x_2448_; 
v___x_2448_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2436_ = v___x_2448_;
goto v___jp_2435_;
}
v___jp_2435_:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; uint8_t v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2437_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__86));
v___x_2438_ = lean_unsigned_to_nat(1024u);
v___x_2439_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_payload_2434_, v___x_2438_);
v___x_2440_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2437_);
lean_ctor_set(v___x_2440_, 1, v___x_2439_);
lean_inc(v___y_2436_);
v___x_2441_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2441_, 0, v___y_2436_);
lean_ctor_set(v___x_2441_, 1, v___x_2440_);
v___x_2442_ = 0;
v___x_2443_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2443_, 0, v___x_2441_);
lean_ctor_set_uint8(v___x_2443_, sizeof(void*)*1, v___x_2442_);
v___x_2444_ = l_Repr_addAppParen(v___x_2443_, v_prec_2014_);
return v___x_2444_;
}
}
case 32:
{
lean_object* v_payload_2449_; lean_object* v___y_2451_; lean_object* v___x_2460_; uint8_t v___x_2461_; 
v_payload_2449_ = lean_ctor_get(v_x_2013_, 0);
lean_inc(v_payload_2449_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2460_ = lean_unsigned_to_nat(1024u);
v___x_2461_ = lean_nat_dec_le(v___x_2460_, v_prec_2014_);
if (v___x_2461_ == 0)
{
lean_object* v___x_2462_; 
v___x_2462_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2451_ = v___x_2462_;
goto v___jp_2450_;
}
else
{
lean_object* v___x_2463_; 
v___x_2463_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2451_ = v___x_2463_;
goto v___jp_2450_;
}
v___jp_2450_:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; uint8_t v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; 
v___x_2452_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__89));
v___x_2453_ = lean_unsigned_to_nat(1024u);
v___x_2454_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_payload_2449_, v___x_2453_);
v___x_2455_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2455_, 0, v___x_2452_);
lean_ctor_set(v___x_2455_, 1, v___x_2454_);
lean_inc(v___y_2451_);
v___x_2456_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2456_, 0, v___y_2451_);
lean_ctor_set(v___x_2456_, 1, v___x_2455_);
v___x_2457_ = 0;
v___x_2458_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2458_, 0, v___x_2456_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*1, v___x_2457_);
v___x_2459_ = l_Repr_addAppParen(v___x_2458_, v_prec_2014_);
return v___x_2459_;
}
}
case 33:
{
lean_object* v___x_2464_; uint8_t v___x_2465_; 
v___x_2464_ = lean_unsigned_to_nat(1024u);
v___x_2465_ = lean_nat_dec_le(v___x_2464_, v_prec_2014_);
if (v___x_2465_ == 0)
{
lean_object* v___x_2466_; 
v___x_2466_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2044_ = v___x_2466_;
goto v___jp_2043_;
}
else
{
lean_object* v___x_2467_; 
v___x_2467_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2044_ = v___x_2467_;
goto v___jp_2043_;
}
}
case 34:
{
lean_object* v___x_2468_; uint8_t v___x_2469_; 
v___x_2468_ = lean_unsigned_to_nat(1024u);
v___x_2469_ = lean_nat_dec_le(v___x_2468_, v_prec_2014_);
if (v___x_2469_ == 0)
{
lean_object* v___x_2470_; 
v___x_2470_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2037_ = v___x_2470_;
goto v___jp_2036_;
}
else
{
lean_object* v___x_2471_; 
v___x_2471_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2037_ = v___x_2471_;
goto v___jp_2036_;
}
}
case 35:
{
lean_object* v___x_2472_; uint8_t v___x_2473_; 
v___x_2472_ = lean_unsigned_to_nat(1024u);
v___x_2473_ = lean_nat_dec_le(v___x_2472_, v_prec_2014_);
if (v___x_2473_ == 0)
{
lean_object* v___x_2474_; 
v___x_2474_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2030_ = v___x_2474_;
goto v___jp_2029_;
}
else
{
lean_object* v___x_2475_; 
v___x_2475_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2030_ = v___x_2475_;
goto v___jp_2029_;
}
}
case 36:
{
lean_object* v___x_2476_; uint8_t v___x_2477_; 
v___x_2476_ = lean_unsigned_to_nat(1024u);
v___x_2477_ = lean_nat_dec_le(v___x_2476_, v_prec_2014_);
if (v___x_2477_ == 0)
{
lean_object* v___x_2478_; 
v___x_2478_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2023_ = v___x_2478_;
goto v___jp_2022_;
}
else
{
lean_object* v___x_2479_; 
v___x_2479_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2023_ = v___x_2479_;
goto v___jp_2022_;
}
}
case 37:
{
lean_object* v___x_2480_; uint8_t v___x_2481_; 
v___x_2480_ = lean_unsigned_to_nat(1024u);
v___x_2481_ = lean_nat_dec_le(v___x_2480_, v_prec_2014_);
if (v___x_2481_ == 0)
{
lean_object* v___x_2482_; 
v___x_2482_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2016_ = v___x_2482_;
goto v___jp_2015_;
}
else
{
lean_object* v___x_2483_; 
v___x_2483_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2016_ = v___x_2483_;
goto v___jp_2015_;
}
}
default: 
{
lean_object* v_payload_2484_; lean_object* v___y_2486_; lean_object* v___x_2495_; uint8_t v___x_2496_; 
v_payload_2484_ = lean_ctor_get(v_x_2013_, 0);
lean_inc(v_payload_2484_);
lean_dec_ref_known(v_x_2013_, 1);
v___x_2495_ = lean_unsigned_to_nat(1024u);
v___x_2496_ = lean_nat_dec_le(v___x_2495_, v_prec_2014_);
if (v___x_2496_ == 0)
{
lean_object* v___x_2497_; 
v___x_2497_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2486_ = v___x_2497_;
goto v___jp_2485_;
}
else
{
lean_object* v___x_2498_; 
v___x_2498_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2486_ = v___x_2498_;
goto v___jp_2485_;
}
v___jp_2485_:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; uint8_t v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2487_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__92));
v___x_2488_ = lean_unsigned_to_nat(1024u);
v___x_2489_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_payload_2484_, v___x_2488_);
v___x_2490_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2487_);
lean_ctor_set(v___x_2490_, 1, v___x_2489_);
lean_inc(v___y_2486_);
v___x_2491_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2491_, 0, v___y_2486_);
lean_ctor_set(v___x_2491_, 1, v___x_2490_);
v___x_2492_ = 0;
v___x_2493_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2493_, 0, v___x_2491_);
lean_ctor_set_uint8(v___x_2493_, sizeof(void*)*1, v___x_2492_);
v___x_2494_ = l_Repr_addAppParen(v___x_2493_, v_prec_2014_);
return v___x_2494_;
}
}
}
v___jp_2015_:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2017_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__1));
lean_inc(v___y_2016_);
v___x_2018_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2018_, 0, v___y_2016_);
lean_ctor_set(v___x_2018_, 1, v___x_2017_);
v___x_2019_ = 0;
v___x_2020_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2020_, 0, v___x_2018_);
lean_ctor_set_uint8(v___x_2020_, sizeof(void*)*1, v___x_2019_);
v___x_2021_ = l_Repr_addAppParen(v___x_2020_, v_prec_2014_);
return v___x_2021_;
}
v___jp_2022_:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; uint8_t v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2024_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__3));
lean_inc(v___y_2023_);
v___x_2025_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2025_, 0, v___y_2023_);
lean_ctor_set(v___x_2025_, 1, v___x_2024_);
v___x_2026_ = 0;
v___x_2027_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2027_, 0, v___x_2025_);
lean_ctor_set_uint8(v___x_2027_, sizeof(void*)*1, v___x_2026_);
v___x_2028_ = l_Repr_addAppParen(v___x_2027_, v_prec_2014_);
return v___x_2028_;
}
v___jp_2029_:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; uint8_t v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2031_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__5));
lean_inc(v___y_2030_);
v___x_2032_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2032_, 0, v___y_2030_);
lean_ctor_set(v___x_2032_, 1, v___x_2031_);
v___x_2033_ = 0;
v___x_2034_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2034_, 0, v___x_2032_);
lean_ctor_set_uint8(v___x_2034_, sizeof(void*)*1, v___x_2033_);
v___x_2035_ = l_Repr_addAppParen(v___x_2034_, v_prec_2014_);
return v___x_2035_;
}
v___jp_2036_:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; uint8_t v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2038_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__7));
lean_inc(v___y_2037_);
v___x_2039_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2039_, 0, v___y_2037_);
lean_ctor_set(v___x_2039_, 1, v___x_2038_);
v___x_2040_ = 0;
v___x_2041_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2041_, 0, v___x_2039_);
lean_ctor_set_uint8(v___x_2041_, sizeof(void*)*1, v___x_2040_);
v___x_2042_ = l_Repr_addAppParen(v___x_2041_, v_prec_2014_);
return v___x_2042_;
}
v___jp_2043_:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; uint8_t v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; 
v___x_2045_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__9));
lean_inc(v___y_2044_);
v___x_2046_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2046_, 0, v___y_2044_);
lean_ctor_set(v___x_2046_, 1, v___x_2045_);
v___x_2047_ = 0;
v___x_2048_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2048_, 0, v___x_2046_);
lean_ctor_set_uint8(v___x_2048_, sizeof(void*)*1, v___x_2047_);
v___x_2049_ = l_Repr_addAppParen(v___x_2048_, v_prec_2014_);
return v___x_2049_;
}
v___jp_2050_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; uint8_t v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; 
v___x_2052_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__11));
lean_inc(v___y_2051_);
v___x_2053_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2053_, 0, v___y_2051_);
lean_ctor_set(v___x_2053_, 1, v___x_2052_);
v___x_2054_ = 0;
v___x_2055_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2055_, 0, v___x_2053_);
lean_ctor_set_uint8(v___x_2055_, sizeof(void*)*1, v___x_2054_);
v___x_2056_ = l_Repr_addAppParen(v___x_2055_, v_prec_2014_);
return v___x_2056_;
}
v___jp_2057_:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; uint8_t v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2059_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__13));
lean_inc(v___y_2058_);
v___x_2060_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___y_2058_);
lean_ctor_set(v___x_2060_, 1, v___x_2059_);
v___x_2061_ = 0;
v___x_2062_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2062_, 0, v___x_2060_);
lean_ctor_set_uint8(v___x_2062_, sizeof(void*)*1, v___x_2061_);
v___x_2063_ = l_Repr_addAppParen(v___x_2062_, v_prec_2014_);
return v___x_2063_;
}
v___jp_2064_:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; uint8_t v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2066_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__15));
lean_inc(v___y_2065_);
v___x_2067_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2067_, 0, v___y_2065_);
lean_ctor_set(v___x_2067_, 1, v___x_2066_);
v___x_2068_ = 0;
v___x_2069_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2069_, 0, v___x_2067_);
lean_ctor_set_uint8(v___x_2069_, sizeof(void*)*1, v___x_2068_);
v___x_2070_ = l_Repr_addAppParen(v___x_2069_, v_prec_2014_);
return v___x_2070_;
}
v___jp_2071_:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; uint8_t v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2073_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__17));
lean_inc(v___y_2072_);
v___x_2074_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2074_, 0, v___y_2072_);
lean_ctor_set(v___x_2074_, 1, v___x_2073_);
v___x_2075_ = 0;
v___x_2076_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2076_, 0, v___x_2074_);
lean_ctor_set_uint8(v___x_2076_, sizeof(void*)*1, v___x_2075_);
v___x_2077_ = l_Repr_addAppParen(v___x_2076_, v_prec_2014_);
return v___x_2077_;
}
v___jp_2078_:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; uint8_t v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2080_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__19));
lean_inc(v___y_2079_);
v___x_2081_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2081_, 0, v___y_2079_);
lean_ctor_set(v___x_2081_, 1, v___x_2080_);
v___x_2082_ = 0;
v___x_2083_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2083_, 0, v___x_2081_);
lean_ctor_set_uint8(v___x_2083_, sizeof(void*)*1, v___x_2082_);
v___x_2084_ = l_Repr_addAppParen(v___x_2083_, v_prec_2014_);
return v___x_2084_;
}
v___jp_2085_:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; uint8_t v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2087_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__21));
lean_inc(v___y_2086_);
v___x_2088_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___y_2086_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___x_2089_ = 0;
v___x_2090_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2090_, 0, v___x_2088_);
lean_ctor_set_uint8(v___x_2090_, sizeof(void*)*1, v___x_2089_);
v___x_2091_ = l_Repr_addAppParen(v___x_2090_, v_prec_2014_);
return v___x_2091_;
}
v___jp_2092_:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; uint8_t v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2094_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__23));
lean_inc(v___y_2093_);
v___x_2095_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2095_, 0, v___y_2093_);
lean_ctor_set(v___x_2095_, 1, v___x_2094_);
v___x_2096_ = 0;
v___x_2097_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2097_, 0, v___x_2095_);
lean_ctor_set_uint8(v___x_2097_, sizeof(void*)*1, v___x_2096_);
v___x_2098_ = l_Repr_addAppParen(v___x_2097_, v_prec_2014_);
return v___x_2098_;
}
v___jp_2099_:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; uint8_t v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2101_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__25));
lean_inc(v___y_2100_);
v___x_2102_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2102_, 0, v___y_2100_);
lean_ctor_set(v___x_2102_, 1, v___x_2101_);
v___x_2103_ = 0;
v___x_2104_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2104_, 0, v___x_2102_);
lean_ctor_set_uint8(v___x_2104_, sizeof(void*)*1, v___x_2103_);
v___x_2105_ = l_Repr_addAppParen(v___x_2104_, v_prec_2014_);
return v___x_2105_;
}
v___jp_2106_:
{
lean_object* v___x_2108_; lean_object* v___x_2109_; uint8_t v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2108_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__27));
lean_inc(v___y_2107_);
v___x_2109_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2109_, 0, v___y_2107_);
lean_ctor_set(v___x_2109_, 1, v___x_2108_);
v___x_2110_ = 0;
v___x_2111_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2111_, 0, v___x_2109_);
lean_ctor_set_uint8(v___x_2111_, sizeof(void*)*1, v___x_2110_);
v___x_2112_ = l_Repr_addAppParen(v___x_2111_, v_prec_2014_);
return v___x_2112_;
}
v___jp_2113_:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2115_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__29));
lean_inc(v___y_2114_);
v___x_2116_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___y_2114_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = 0;
v___x_2118_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2118_, 0, v___x_2116_);
lean_ctor_set_uint8(v___x_2118_, sizeof(void*)*1, v___x_2117_);
v___x_2119_ = l_Repr_addAppParen(v___x_2118_, v_prec_2014_);
return v___x_2119_;
}
v___jp_2120_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; uint8_t v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2122_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__31));
lean_inc(v___y_2121_);
v___x_2123_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___y_2121_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
v___x_2124_ = 0;
v___x_2125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2125_, 0, v___x_2123_);
lean_ctor_set_uint8(v___x_2125_, sizeof(void*)*1, v___x_2124_);
v___x_2126_ = l_Repr_addAppParen(v___x_2125_, v_prec_2014_);
return v___x_2126_;
}
v___jp_2127_:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; uint8_t v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2129_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__33));
lean_inc(v___y_2128_);
v___x_2130_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___y_2128_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
v___x_2131_ = 0;
v___x_2132_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2132_, 0, v___x_2130_);
lean_ctor_set_uint8(v___x_2132_, sizeof(void*)*1, v___x_2131_);
v___x_2133_ = l_Repr_addAppParen(v___x_2132_, v_prec_2014_);
return v___x_2133_;
}
v___jp_2134_:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; uint8_t v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2136_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__35));
lean_inc(v___y_2135_);
v___x_2137_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2137_, 0, v___y_2135_);
lean_ctor_set(v___x_2137_, 1, v___x_2136_);
v___x_2138_ = 0;
v___x_2139_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2139_, 0, v___x_2137_);
lean_ctor_set_uint8(v___x_2139_, sizeof(void*)*1, v___x_2138_);
v___x_2140_ = l_Repr_addAppParen(v___x_2139_, v_prec_2014_);
return v___x_2140_;
}
v___jp_2141_:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; uint8_t v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2143_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__37));
lean_inc(v___y_2142_);
v___x_2144_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2144_, 0, v___y_2142_);
lean_ctor_set(v___x_2144_, 1, v___x_2143_);
v___x_2145_ = 0;
v___x_2146_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2146_, 0, v___x_2144_);
lean_ctor_set_uint8(v___x_2146_, sizeof(void*)*1, v___x_2145_);
v___x_2147_ = l_Repr_addAppParen(v___x_2146_, v_prec_2014_);
return v___x_2147_;
}
v___jp_2148_:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; uint8_t v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2150_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__39));
lean_inc(v___y_2149_);
v___x_2151_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2151_, 0, v___y_2149_);
lean_ctor_set(v___x_2151_, 1, v___x_2150_);
v___x_2152_ = 0;
v___x_2153_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2153_, 0, v___x_2151_);
lean_ctor_set_uint8(v___x_2153_, sizeof(void*)*1, v___x_2152_);
v___x_2154_ = l_Repr_addAppParen(v___x_2153_, v_prec_2014_);
return v___x_2154_;
}
v___jp_2155_:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; uint8_t v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2157_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__41));
lean_inc(v___y_2156_);
v___x_2158_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2158_, 0, v___y_2156_);
lean_ctor_set(v___x_2158_, 1, v___x_2157_);
v___x_2159_ = 0;
v___x_2160_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2160_, 0, v___x_2158_);
lean_ctor_set_uint8(v___x_2160_, sizeof(void*)*1, v___x_2159_);
v___x_2161_ = l_Repr_addAppParen(v___x_2160_, v_prec_2014_);
return v___x_2161_;
}
v___jp_2162_:
{
lean_object* v___x_2164_; lean_object* v___x_2165_; uint8_t v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2164_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__43));
lean_inc(v___y_2163_);
v___x_2165_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___y_2163_);
lean_ctor_set(v___x_2165_, 1, v___x_2164_);
v___x_2166_ = 0;
v___x_2167_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2167_, 0, v___x_2165_);
lean_ctor_set_uint8(v___x_2167_, sizeof(void*)*1, v___x_2166_);
v___x_2168_ = l_Repr_addAppParen(v___x_2167_, v_prec_2014_);
return v___x_2168_;
}
v___jp_2169_:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; uint8_t v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2171_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__45));
lean_inc(v___y_2170_);
v___x_2172_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___y_2170_);
lean_ctor_set(v___x_2172_, 1, v___x_2171_);
v___x_2173_ = 0;
v___x_2174_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2174_, 0, v___x_2172_);
lean_ctor_set_uint8(v___x_2174_, sizeof(void*)*1, v___x_2173_);
v___x_2175_ = l_Repr_addAppParen(v___x_2174_, v_prec_2014_);
return v___x_2175_;
}
v___jp_2176_:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; uint8_t v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2178_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__47));
lean_inc(v___y_2177_);
v___x_2179_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2179_, 0, v___y_2177_);
lean_ctor_set(v___x_2179_, 1, v___x_2178_);
v___x_2180_ = 0;
v___x_2181_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2181_, 0, v___x_2179_);
lean_ctor_set_uint8(v___x_2181_, sizeof(void*)*1, v___x_2180_);
v___x_2182_ = l_Repr_addAppParen(v___x_2181_, v_prec_2014_);
return v___x_2182_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___boxed(lean_object* v_x_2499_, lean_object* v_prec_2500_){
_start:
{
lean_object* v_res_2501_; 
v_res_2501_ = l_Lasm_WASI_Http_Types_instReprErrorCode_repr(v_x_2499_, v_prec_2500_);
lean_dec(v_prec_2500_);
return v_res_2501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorIdx___impl(uint8_t v_x_2504_){
_start:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2505_ = lean_box(v_x_2504_);
v___x_2506_ = lean_obj_tag_nat(v___x_2505_);
lean_dec(v___x_2505_);
return v___x_2506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorIdx___impl___boxed(lean_object* v_x_2507_){
_start:
{
uint8_t v_x_4__boxed_2508_; lean_object* v_res_2509_; 
v_x_4__boxed_2508_ = lean_unbox(v_x_2507_);
v_res_2509_ = l_Lasm_WASI_Http_Types_HeaderError_ctorIdx___impl(v_x_4__boxed_2508_);
return v_res_2509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorElim___redArg(lean_object* v_k_2510_){
_start:
{
lean_inc(v_k_2510_);
return v_k_2510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorElim___redArg___boxed(lean_object* v_k_2511_){
_start:
{
lean_object* v_res_2512_; 
v_res_2512_ = l_Lasm_WASI_Http_Types_HeaderError_ctorElim___redArg(v_k_2511_);
lean_dec(v_k_2511_);
return v_res_2512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorElim(lean_object* v_motive_2513_, lean_object* v_ctorIdx_2514_, uint8_t v_t_2515_, lean_object* v_h_2516_, lean_object* v_k_2517_){
_start:
{
lean_inc(v_k_2517_);
return v_k_2517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorElim___boxed(lean_object* v_motive_2518_, lean_object* v_ctorIdx_2519_, lean_object* v_t_2520_, lean_object* v_h_2521_, lean_object* v_k_2522_){
_start:
{
uint8_t v_t_boxed_2523_; lean_object* v_res_2524_; 
v_t_boxed_2523_ = lean_unbox(v_t_2520_);
v_res_2524_ = l_Lasm_WASI_Http_Types_HeaderError_ctorElim(v_motive_2518_, v_ctorIdx_2519_, v_t_boxed_2523_, v_h_2521_, v_k_2522_);
lean_dec(v_k_2522_);
lean_dec(v_ctorIdx_2519_);
return v_res_2524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim___redArg(lean_object* v_invalidSyntax_2525_){
_start:
{
lean_inc(v_invalidSyntax_2525_);
return v_invalidSyntax_2525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim___redArg___boxed(lean_object* v_invalidSyntax_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim___redArg(v_invalidSyntax_2526_);
lean_dec(v_invalidSyntax_2526_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim(lean_object* v_motive_2528_, uint8_t v_t_2529_, lean_object* v_h_2530_, lean_object* v_invalidSyntax_2531_){
_start:
{
lean_inc(v_invalidSyntax_2531_);
return v_invalidSyntax_2531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim___boxed(lean_object* v_motive_2532_, lean_object* v_t_2533_, lean_object* v_h_2534_, lean_object* v_invalidSyntax_2535_){
_start:
{
uint8_t v_t_boxed_2536_; lean_object* v_res_2537_; 
v_t_boxed_2536_ = lean_unbox(v_t_2533_);
v_res_2537_ = l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim(v_motive_2532_, v_t_boxed_2536_, v_h_2534_, v_invalidSyntax_2535_);
lean_dec(v_invalidSyntax_2535_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim___redArg(lean_object* v_forbidden_2538_){
_start:
{
lean_inc(v_forbidden_2538_);
return v_forbidden_2538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim___redArg___boxed(lean_object* v_forbidden_2539_){
_start:
{
lean_object* v_res_2540_; 
v_res_2540_ = l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim___redArg(v_forbidden_2539_);
lean_dec(v_forbidden_2539_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim(lean_object* v_motive_2541_, uint8_t v_t_2542_, lean_object* v_h_2543_, lean_object* v_forbidden_2544_){
_start:
{
lean_inc(v_forbidden_2544_);
return v_forbidden_2544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim___boxed(lean_object* v_motive_2545_, lean_object* v_t_2546_, lean_object* v_h_2547_, lean_object* v_forbidden_2548_){
_start:
{
uint8_t v_t_boxed_2549_; lean_object* v_res_2550_; 
v_t_boxed_2549_ = lean_unbox(v_t_2546_);
v_res_2550_ = l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim(v_motive_2545_, v_t_boxed_2549_, v_h_2547_, v_forbidden_2548_);
lean_dec(v_forbidden_2548_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_immutable_elim___redArg(lean_object* v_immutable_2551_){
_start:
{
lean_inc(v_immutable_2551_);
return v_immutable_2551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_immutable_elim___redArg___boxed(lean_object* v_immutable_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_Lasm_WASI_Http_Types_HeaderError_immutable_elim___redArg(v_immutable_2552_);
lean_dec(v_immutable_2552_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_immutable_elim(lean_object* v_motive_2554_, uint8_t v_t_2555_, lean_object* v_h_2556_, lean_object* v_immutable_2557_){
_start:
{
lean_inc(v_immutable_2557_);
return v_immutable_2557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_immutable_elim___boxed(lean_object* v_motive_2558_, lean_object* v_t_2559_, lean_object* v_h_2560_, lean_object* v_immutable_2561_){
_start:
{
uint8_t v_t_boxed_2562_; lean_object* v_res_2563_; 
v_t_boxed_2562_ = lean_unbox(v_t_2559_);
v_res_2563_ = l_Lasm_WASI_Http_Types_HeaderError_immutable_elim(v_motive_2558_, v_t_boxed_2562_, v_h_2560_, v_immutable_2561_);
lean_dec(v_immutable_2561_);
return v_res_2563_;
}
}
static uint8_t _init_l_Lasm_WASI_Http_Types_instInhabitedHeaderError_default(void){
_start:
{
uint8_t v___x_2564_; 
v___x_2564_ = 0;
return v___x_2564_;
}
}
static uint8_t _init_l_Lasm_WASI_Http_Types_instInhabitedHeaderError(void){
_start:
{
uint8_t v___x_2565_; 
v___x_2565_ = 0;
return v___x_2565_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqHeaderError_beq(uint8_t v_x_2566_, uint8_t v_y_2567_){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; uint8_t v___x_2572_; 
v___x_2568_ = lean_box(v_x_2566_);
v___x_2569_ = lean_obj_tag_nat(v___x_2568_);
lean_dec(v___x_2568_);
v___x_2570_ = lean_box(v_y_2567_);
v___x_2571_ = lean_obj_tag_nat(v___x_2570_);
lean_dec(v___x_2570_);
v___x_2572_ = lean_nat_dec_eq(v___x_2569_, v___x_2571_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqHeaderError_beq___boxed(lean_object* v_x_2573_, lean_object* v_y_2574_){
_start:
{
uint8_t v_x_24__boxed_2575_; uint8_t v_y_25__boxed_2576_; uint8_t v_res_2577_; lean_object* v_r_2578_; 
v_x_24__boxed_2575_ = lean_unbox(v_x_2573_);
v_y_25__boxed_2576_ = lean_unbox(v_y_2574_);
v_res_2577_ = l_Lasm_WASI_Http_Types_instBEqHeaderError_beq(v_x_24__boxed_2575_, v_y_25__boxed_2576_);
v_r_2578_ = lean_box(v_res_2577_);
return v_r_2578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr(uint8_t v_x_2590_, lean_object* v_prec_2591_){
_start:
{
lean_object* v___y_2593_; lean_object* v___y_2600_; lean_object* v___y_2607_; 
switch(v_x_2590_)
{
case 0:
{
lean_object* v___x_2613_; uint8_t v___x_2614_; 
v___x_2613_ = lean_unsigned_to_nat(1024u);
v___x_2614_ = lean_nat_dec_le(v___x_2613_, v_prec_2591_);
if (v___x_2614_ == 0)
{
lean_object* v___x_2615_; 
v___x_2615_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2593_ = v___x_2615_;
goto v___jp_2592_;
}
else
{
lean_object* v___x_2616_; 
v___x_2616_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2593_ = v___x_2616_;
goto v___jp_2592_;
}
}
case 1:
{
lean_object* v___x_2617_; uint8_t v___x_2618_; 
v___x_2617_ = lean_unsigned_to_nat(1024u);
v___x_2618_ = lean_nat_dec_le(v___x_2617_, v_prec_2591_);
if (v___x_2618_ == 0)
{
lean_object* v___x_2619_; 
v___x_2619_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2600_ = v___x_2619_;
goto v___jp_2599_;
}
else
{
lean_object* v___x_2620_; 
v___x_2620_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2600_ = v___x_2620_;
goto v___jp_2599_;
}
}
default: 
{
lean_object* v___x_2621_; uint8_t v___x_2622_; 
v___x_2621_ = lean_unsigned_to_nat(1024u);
v___x_2622_ = lean_nat_dec_le(v___x_2621_, v_prec_2591_);
if (v___x_2622_ == 0)
{
lean_object* v___x_2623_; 
v___x_2623_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2607_ = v___x_2623_;
goto v___jp_2606_;
}
else
{
lean_object* v___x_2624_; 
v___x_2624_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2607_ = v___x_2624_;
goto v___jp_2606_;
}
}
}
v___jp_2592_:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; uint8_t v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2594_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__1));
lean_inc(v___y_2593_);
v___x_2595_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2595_, 0, v___y_2593_);
lean_ctor_set(v___x_2595_, 1, v___x_2594_);
v___x_2596_ = 0;
v___x_2597_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2597_, 0, v___x_2595_);
lean_ctor_set_uint8(v___x_2597_, sizeof(void*)*1, v___x_2596_);
v___x_2598_ = l_Repr_addAppParen(v___x_2597_, v_prec_2591_);
return v___x_2598_;
}
v___jp_2599_:
{
lean_object* v___x_2601_; lean_object* v___x_2602_; uint8_t v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2601_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__3));
lean_inc(v___y_2600_);
v___x_2602_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2602_, 0, v___y_2600_);
lean_ctor_set(v___x_2602_, 1, v___x_2601_);
v___x_2603_ = 0;
v___x_2604_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2604_, 0, v___x_2602_);
lean_ctor_set_uint8(v___x_2604_, sizeof(void*)*1, v___x_2603_);
v___x_2605_ = l_Repr_addAppParen(v___x_2604_, v_prec_2591_);
return v___x_2605_;
}
v___jp_2606_:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; uint8_t v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2608_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__5));
lean_inc(v___y_2607_);
v___x_2609_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2609_, 0, v___y_2607_);
lean_ctor_set(v___x_2609_, 1, v___x_2608_);
v___x_2610_ = 0;
v___x_2611_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2611_, 0, v___x_2609_);
lean_ctor_set_uint8(v___x_2611_, sizeof(void*)*1, v___x_2610_);
v___x_2612_ = l_Repr_addAppParen(v___x_2611_, v_prec_2591_);
return v___x_2612_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr___boxed(lean_object* v_x_2625_, lean_object* v_prec_2626_){
_start:
{
uint8_t v_x_167__boxed_2627_; lean_object* v_res_2628_; 
v_x_167__boxed_2627_ = lean_unbox(v_x_2625_);
v_res_2628_ = l_Lasm_WASI_Http_Types_instReprHeaderError_repr(v_x_167__boxed_2627_, v_prec_2626_);
lean_dec(v_prec_2626_);
return v_res_2628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_new___boxed(lean_object* v_a_00___x40___internal___hyg_2632_){
_start:
{
lean_object* v_res_2633_; 
v_res_2633_ = lasm_wasi_http_types_fields_new();
return v_res_2633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_fromList___boxed(lean_object* v_entries_2636_, lean_object* v_a_00___x40___internal___hyg_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = lasm_wasi_http_types_fields_from_list(v_entries_2636_);
lean_dec_ref(v_entries_2636_);
return v_res_2638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_get___boxed(lean_object* v_self_2642_, lean_object* v_name_2643_, lean_object* v_a_00___x40___internal___hyg_2644_){
_start:
{
uint32_t v_self_boxed_2645_; lean_object* v_res_2646_; 
v_self_boxed_2645_ = lean_unbox_uint32(v_self_2642_);
lean_dec(v_self_2642_);
v_res_2646_ = lasm_wasi_http_types_fields_get(v_self_boxed_2645_, v_name_2643_);
lean_dec_ref(v_name_2643_);
return v_res_2646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_has___boxed(lean_object* v_self_2650_, lean_object* v_name_2651_, lean_object* v_a_00___x40___internal___hyg_2652_){
_start:
{
uint32_t v_self_boxed_2653_; lean_object* v_res_2654_; 
v_self_boxed_2653_ = lean_unbox_uint32(v_self_2650_);
lean_dec(v_self_2650_);
v_res_2654_ = lasm_wasi_http_types_fields_has(v_self_boxed_2653_, v_name_2651_);
lean_dec_ref(v_name_2651_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_set___boxed(lean_object* v_self_2659_, lean_object* v_name_2660_, lean_object* v_value_2661_, lean_object* v_a_00___x40___internal___hyg_2662_){
_start:
{
uint32_t v_self_boxed_2663_; lean_object* v_res_2664_; 
v_self_boxed_2663_ = lean_unbox_uint32(v_self_2659_);
lean_dec(v_self_2659_);
v_res_2664_ = lasm_wasi_http_types_fields_set(v_self_boxed_2663_, v_name_2660_, v_value_2661_);
lean_dec_ref(v_value_2661_);
lean_dec_ref(v_name_2660_);
return v_res_2664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_delete___boxed(lean_object* v_self_2668_, lean_object* v_name_2669_, lean_object* v_a_00___x40___internal___hyg_2670_){
_start:
{
uint32_t v_self_boxed_2671_; lean_object* v_res_2672_; 
v_self_boxed_2671_ = lean_unbox_uint32(v_self_2668_);
lean_dec(v_self_2668_);
v_res_2672_ = lasm_wasi_http_types_fields_delete(v_self_boxed_2671_, v_name_2669_);
lean_dec_ref(v_name_2669_);
return v_res_2672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_append___boxed(lean_object* v_self_2677_, lean_object* v_name_2678_, lean_object* v_value_2679_, lean_object* v_a_00___x40___internal___hyg_2680_){
_start:
{
uint32_t v_self_boxed_2681_; lean_object* v_res_2682_; 
v_self_boxed_2681_ = lean_unbox_uint32(v_self_2677_);
lean_dec(v_self_2677_);
v_res_2682_ = lasm_wasi_http_types_fields_append(v_self_boxed_2681_, v_name_2678_, v_value_2679_);
lean_dec_ref(v_value_2679_);
lean_dec_ref(v_name_2678_);
return v_res_2682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_entries___boxed(lean_object* v_self_2685_, lean_object* v_a_00___x40___internal___hyg_2686_){
_start:
{
uint32_t v_self_boxed_2687_; lean_object* v_res_2688_; 
v_self_boxed_2687_ = lean_unbox_uint32(v_self_2685_);
lean_dec(v_self_2685_);
v_res_2688_ = lasm_wasi_http_types_fields_entries(v_self_boxed_2687_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_clone___boxed(lean_object* v_self_2691_, lean_object* v_a_00___x40___internal___hyg_2692_){
_start:
{
uint32_t v_self_boxed_2693_; lean_object* v_res_2694_; 
v_self_boxed_2693_ = lean_unbox_uint32(v_self_2691_);
lean_dec(v_self_2691_);
v_res_2694_ = lasm_wasi_http_types_fields_clone(v_self_boxed_2693_);
return v_res_2694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_drop___boxed(lean_object* v_self_2697_, lean_object* v_a_00___x40___internal___hyg_2698_){
_start:
{
uint32_t v_self_boxed_2699_; lean_object* v_res_2700_; 
v_self_boxed_2699_ = lean_unbox_uint32(v_self_2697_);
lean_dec(v_self_2697_);
v_res_2700_ = lasm_wasi_http_types_fields_drop(v_self_boxed_2699_);
return v_res_2700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_method___boxed(lean_object* v_self_2703_, lean_object* v_a_00___x40___internal___hyg_2704_){
_start:
{
uint32_t v_self_boxed_2705_; lean_object* v_res_2706_; 
v_self_boxed_2705_ = lean_unbox_uint32(v_self_2703_);
lean_dec(v_self_2703_);
v_res_2706_ = lasm_wasi_http_types_incoming_request_method(v_self_boxed_2705_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_pathWithQuery___boxed(lean_object* v_self_2709_, lean_object* v_a_00___x40___internal___hyg_2710_){
_start:
{
uint32_t v_self_boxed_2711_; lean_object* v_res_2712_; 
v_self_boxed_2711_ = lean_unbox_uint32(v_self_2709_);
lean_dec(v_self_2709_);
v_res_2712_ = lasm_wasi_http_types_incoming_request_path_with_query(v_self_boxed_2711_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_scheme___boxed(lean_object* v_self_2715_, lean_object* v_a_00___x40___internal___hyg_2716_){
_start:
{
uint32_t v_self_boxed_2717_; lean_object* v_res_2718_; 
v_self_boxed_2717_ = lean_unbox_uint32(v_self_2715_);
lean_dec(v_self_2715_);
v_res_2718_ = lasm_wasi_http_types_incoming_request_scheme(v_self_boxed_2717_);
return v_res_2718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_authority___boxed(lean_object* v_self_2721_, lean_object* v_a_00___x40___internal___hyg_2722_){
_start:
{
uint32_t v_self_boxed_2723_; lean_object* v_res_2724_; 
v_self_boxed_2723_ = lean_unbox_uint32(v_self_2721_);
lean_dec(v_self_2721_);
v_res_2724_ = lasm_wasi_http_types_incoming_request_authority(v_self_boxed_2723_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_headers___boxed(lean_object* v_self_2727_, lean_object* v_a_00___x40___internal___hyg_2728_){
_start:
{
uint32_t v_self_boxed_2729_; lean_object* v_res_2730_; 
v_self_boxed_2729_ = lean_unbox_uint32(v_self_2727_);
lean_dec(v_self_2727_);
v_res_2730_ = lasm_wasi_http_types_incoming_request_headers(v_self_boxed_2729_);
return v_res_2730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_consume___boxed(lean_object* v_self_2733_, lean_object* v_a_00___x40___internal___hyg_2734_){
_start:
{
uint32_t v_self_boxed_2735_; lean_object* v_res_2736_; 
v_self_boxed_2735_ = lean_unbox_uint32(v_self_2733_);
lean_dec(v_self_2733_);
v_res_2736_ = lasm_wasi_http_types_incoming_request_consume(v_self_boxed_2735_);
return v_res_2736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_drop___boxed(lean_object* v_self_2739_, lean_object* v_a_00___x40___internal___hyg_2740_){
_start:
{
uint32_t v_self_boxed_2741_; lean_object* v_res_2742_; 
v_self_boxed_2741_ = lean_unbox_uint32(v_self_2739_);
lean_dec(v_self_2739_);
v_res_2742_ = lasm_wasi_http_types_incoming_request_drop(v_self_boxed_2741_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_new___boxed(lean_object* v_headers_2745_, lean_object* v_a_00___x40___internal___hyg_2746_){
_start:
{
uint32_t v_headers_boxed_2747_; lean_object* v_res_2748_; 
v_headers_boxed_2747_ = lean_unbox_uint32(v_headers_2745_);
lean_dec(v_headers_2745_);
v_res_2748_ = lasm_wasi_http_types_outgoing_request_new(v_headers_boxed_2747_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_body___boxed(lean_object* v_self_2751_, lean_object* v_a_00___x40___internal___hyg_2752_){
_start:
{
uint32_t v_self_boxed_2753_; lean_object* v_res_2754_; 
v_self_boxed_2753_ = lean_unbox_uint32(v_self_2751_);
lean_dec(v_self_2751_);
v_res_2754_ = lasm_wasi_http_types_outgoing_request_body(v_self_boxed_2753_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_method___boxed(lean_object* v_self_2757_, lean_object* v_a_00___x40___internal___hyg_2758_){
_start:
{
uint32_t v_self_boxed_2759_; lean_object* v_res_2760_; 
v_self_boxed_2759_ = lean_unbox_uint32(v_self_2757_);
lean_dec(v_self_2757_);
v_res_2760_ = lasm_wasi_http_types_outgoing_request_method(v_self_boxed_2759_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_setMethod___boxed(lean_object* v_self_2764_, lean_object* v_method_2765_, lean_object* v_a_00___x40___internal___hyg_2766_){
_start:
{
uint32_t v_self_boxed_2767_; lean_object* v_res_2768_; 
v_self_boxed_2767_ = lean_unbox_uint32(v_self_2764_);
lean_dec(v_self_2764_);
v_res_2768_ = lasm_wasi_http_types_outgoing_request_set_method(v_self_boxed_2767_, v_method_2765_);
lean_dec(v_method_2765_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_pathWithQuery___boxed(lean_object* v_self_2771_, lean_object* v_a_00___x40___internal___hyg_2772_){
_start:
{
uint32_t v_self_boxed_2773_; lean_object* v_res_2774_; 
v_self_boxed_2773_ = lean_unbox_uint32(v_self_2771_);
lean_dec(v_self_2771_);
v_res_2774_ = lasm_wasi_http_types_outgoing_request_path_with_query(v_self_boxed_2773_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_setPathWithQuery___boxed(lean_object* v_self_2778_, lean_object* v_pathWithQuery_2779_, lean_object* v_a_00___x40___internal___hyg_2780_){
_start:
{
uint32_t v_self_boxed_2781_; lean_object* v_res_2782_; 
v_self_boxed_2781_ = lean_unbox_uint32(v_self_2778_);
lean_dec(v_self_2778_);
v_res_2782_ = lasm_wasi_http_types_outgoing_request_set_path_with_query(v_self_boxed_2781_, v_pathWithQuery_2779_);
lean_dec(v_pathWithQuery_2779_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_scheme___boxed(lean_object* v_self_2785_, lean_object* v_a_00___x40___internal___hyg_2786_){
_start:
{
uint32_t v_self_boxed_2787_; lean_object* v_res_2788_; 
v_self_boxed_2787_ = lean_unbox_uint32(v_self_2785_);
lean_dec(v_self_2785_);
v_res_2788_ = lasm_wasi_http_types_outgoing_request_scheme(v_self_boxed_2787_);
return v_res_2788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_setScheme___boxed(lean_object* v_self_2792_, lean_object* v_scheme_2793_, lean_object* v_a_00___x40___internal___hyg_2794_){
_start:
{
uint32_t v_self_boxed_2795_; lean_object* v_res_2796_; 
v_self_boxed_2795_ = lean_unbox_uint32(v_self_2792_);
lean_dec(v_self_2792_);
v_res_2796_ = lasm_wasi_http_types_outgoing_request_set_scheme(v_self_boxed_2795_, v_scheme_2793_);
lean_dec(v_scheme_2793_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_authority___boxed(lean_object* v_self_2799_, lean_object* v_a_00___x40___internal___hyg_2800_){
_start:
{
uint32_t v_self_boxed_2801_; lean_object* v_res_2802_; 
v_self_boxed_2801_ = lean_unbox_uint32(v_self_2799_);
lean_dec(v_self_2799_);
v_res_2802_ = lasm_wasi_http_types_outgoing_request_authority(v_self_boxed_2801_);
return v_res_2802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_setAuthority___boxed(lean_object* v_self_2806_, lean_object* v_authority_2807_, lean_object* v_a_00___x40___internal___hyg_2808_){
_start:
{
uint32_t v_self_boxed_2809_; lean_object* v_res_2810_; 
v_self_boxed_2809_ = lean_unbox_uint32(v_self_2806_);
lean_dec(v_self_2806_);
v_res_2810_ = lasm_wasi_http_types_outgoing_request_set_authority(v_self_boxed_2809_, v_authority_2807_);
lean_dec(v_authority_2807_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_headers___boxed(lean_object* v_self_2813_, lean_object* v_a_00___x40___internal___hyg_2814_){
_start:
{
uint32_t v_self_boxed_2815_; lean_object* v_res_2816_; 
v_self_boxed_2815_ = lean_unbox_uint32(v_self_2813_);
lean_dec(v_self_2813_);
v_res_2816_ = lasm_wasi_http_types_outgoing_request_headers(v_self_boxed_2815_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_drop___boxed(lean_object* v_self_2819_, lean_object* v_a_00___x40___internal___hyg_2820_){
_start:
{
uint32_t v_self_boxed_2821_; lean_object* v_res_2822_; 
v_self_boxed_2821_ = lean_unbox_uint32(v_self_2819_);
lean_dec(v_self_2819_);
v_res_2822_ = lasm_wasi_http_types_outgoing_request_drop(v_self_boxed_2821_);
return v_res_2822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_new___boxed(lean_object* v_a_00___x40___internal___hyg_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = lasm_wasi_http_types_request_options_new();
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_connectTimeout___boxed(lean_object* v_self_2828_, lean_object* v_a_00___x40___internal___hyg_2829_){
_start:
{
uint32_t v_self_boxed_2830_; lean_object* v_res_2831_; 
v_self_boxed_2830_ = lean_unbox_uint32(v_self_2828_);
lean_dec(v_self_2828_);
v_res_2831_ = lasm_wasi_http_types_request_options_connect_timeout(v_self_boxed_2830_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_setConnectTimeout___boxed(lean_object* v_self_2835_, lean_object* v_duration_2836_, lean_object* v_a_00___x40___internal___hyg_2837_){
_start:
{
uint32_t v_self_boxed_2838_; lean_object* v_res_2839_; 
v_self_boxed_2838_ = lean_unbox_uint32(v_self_2835_);
lean_dec(v_self_2835_);
v_res_2839_ = lasm_wasi_http_types_request_options_set_connect_timeout(v_self_boxed_2838_, v_duration_2836_);
lean_dec(v_duration_2836_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_firstByteTimeout___boxed(lean_object* v_self_2842_, lean_object* v_a_00___x40___internal___hyg_2843_){
_start:
{
uint32_t v_self_boxed_2844_; lean_object* v_res_2845_; 
v_self_boxed_2844_ = lean_unbox_uint32(v_self_2842_);
lean_dec(v_self_2842_);
v_res_2845_ = lasm_wasi_http_types_request_options_first_byte_timeout(v_self_boxed_2844_);
return v_res_2845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_setFirstByteTimeout___boxed(lean_object* v_self_2849_, lean_object* v_duration_2850_, lean_object* v_a_00___x40___internal___hyg_2851_){
_start:
{
uint32_t v_self_boxed_2852_; lean_object* v_res_2853_; 
v_self_boxed_2852_ = lean_unbox_uint32(v_self_2849_);
lean_dec(v_self_2849_);
v_res_2853_ = lasm_wasi_http_types_request_options_set_first_byte_timeout(v_self_boxed_2852_, v_duration_2850_);
lean_dec(v_duration_2850_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_betweenBytesTimeout___boxed(lean_object* v_self_2856_, lean_object* v_a_00___x40___internal___hyg_2857_){
_start:
{
uint32_t v_self_boxed_2858_; lean_object* v_res_2859_; 
v_self_boxed_2858_ = lean_unbox_uint32(v_self_2856_);
lean_dec(v_self_2856_);
v_res_2859_ = lasm_wasi_http_types_request_options_between_bytes_timeout(v_self_boxed_2858_);
return v_res_2859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_setBetweenBytesTimeout___boxed(lean_object* v_self_2863_, lean_object* v_duration_2864_, lean_object* v_a_00___x40___internal___hyg_2865_){
_start:
{
uint32_t v_self_boxed_2866_; lean_object* v_res_2867_; 
v_self_boxed_2866_ = lean_unbox_uint32(v_self_2863_);
lean_dec(v_self_2863_);
v_res_2867_ = lasm_wasi_http_types_request_options_set_between_bytes_timeout(v_self_boxed_2866_, v_duration_2864_);
lean_dec(v_duration_2864_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_drop___boxed(lean_object* v_self_2870_, lean_object* v_a_00___x40___internal___hyg_2871_){
_start:
{
uint32_t v_self_boxed_2872_; lean_object* v_res_2873_; 
v_self_boxed_2872_ = lean_unbox_uint32(v_self_2870_);
lean_dec(v_self_2870_);
v_res_2873_ = lasm_wasi_http_types_request_options_drop(v_self_boxed_2872_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ResponseOutparam_set___boxed(lean_object* v_param_2877_, lean_object* v_response_2878_, lean_object* v_a_00___x40___internal___hyg_2879_){
_start:
{
uint32_t v_param_boxed_2880_; lean_object* v_res_2881_; 
v_param_boxed_2880_ = lean_unbox_uint32(v_param_2877_);
lean_dec(v_param_2877_);
v_res_2881_ = lasm_wasi_http_types_response_outparam_set(v_param_boxed_2880_, v_response_2878_);
lean_dec_ref(v_response_2878_);
return v_res_2881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ResponseOutparam_drop___boxed(lean_object* v_self_2884_, lean_object* v_a_00___x40___internal___hyg_2885_){
_start:
{
uint32_t v_self_boxed_2886_; lean_object* v_res_2887_; 
v_self_boxed_2886_ = lean_unbox_uint32(v_self_2884_);
lean_dec(v_self_2884_);
v_res_2887_ = lasm_wasi_http_types_response_outparam_drop(v_self_boxed_2886_);
return v_res_2887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingResponse_status___boxed(lean_object* v_self_2890_, lean_object* v_a_00___x40___internal___hyg_2891_){
_start:
{
uint32_t v_self_boxed_2892_; lean_object* v_res_2893_; 
v_self_boxed_2892_ = lean_unbox_uint32(v_self_2890_);
lean_dec(v_self_2890_);
v_res_2893_ = lasm_wasi_http_types_incoming_response_status(v_self_boxed_2892_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingResponse_headers___boxed(lean_object* v_self_2896_, lean_object* v_a_00___x40___internal___hyg_2897_){
_start:
{
uint32_t v_self_boxed_2898_; lean_object* v_res_2899_; 
v_self_boxed_2898_ = lean_unbox_uint32(v_self_2896_);
lean_dec(v_self_2896_);
v_res_2899_ = lasm_wasi_http_types_incoming_response_headers(v_self_boxed_2898_);
return v_res_2899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingResponse_consume___boxed(lean_object* v_self_2902_, lean_object* v_a_00___x40___internal___hyg_2903_){
_start:
{
uint32_t v_self_boxed_2904_; lean_object* v_res_2905_; 
v_self_boxed_2904_ = lean_unbox_uint32(v_self_2902_);
lean_dec(v_self_2902_);
v_res_2905_ = lasm_wasi_http_types_incoming_response_consume(v_self_boxed_2904_);
return v_res_2905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingResponse_drop___boxed(lean_object* v_self_2908_, lean_object* v_a_00___x40___internal___hyg_2909_){
_start:
{
uint32_t v_self_boxed_2910_; lean_object* v_res_2911_; 
v_self_boxed_2910_ = lean_unbox_uint32(v_self_2908_);
lean_dec(v_self_2908_);
v_res_2911_ = lasm_wasi_http_types_incoming_response_drop(v_self_boxed_2910_);
return v_res_2911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingBody_stream___boxed(lean_object* v_self_2914_, lean_object* v_a_00___x40___internal___hyg_2915_){
_start:
{
uint32_t v_self_boxed_2916_; lean_object* v_res_2917_; 
v_self_boxed_2916_ = lean_unbox_uint32(v_self_2914_);
lean_dec(v_self_2914_);
v_res_2917_ = lasm_wasi_http_types_incoming_body_stream(v_self_boxed_2916_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingBody_finish___boxed(lean_object* v_this_2920_, lean_object* v_a_00___x40___internal___hyg_2921_){
_start:
{
uint32_t v_this_boxed_2922_; lean_object* v_res_2923_; 
v_this_boxed_2922_ = lean_unbox_uint32(v_this_2920_);
lean_dec(v_this_2920_);
v_res_2923_ = lasm_wasi_http_types_incoming_body_finish(v_this_boxed_2922_);
return v_res_2923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingBody_drop___boxed(lean_object* v_self_2926_, lean_object* v_a_00___x40___internal___hyg_2927_){
_start:
{
uint32_t v_self_boxed_2928_; lean_object* v_res_2929_; 
v_self_boxed_2928_ = lean_unbox_uint32(v_self_2926_);
lean_dec(v_self_2926_);
v_res_2929_ = lasm_wasi_http_types_incoming_body_drop(v_self_boxed_2928_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureTrailers_subscribe___boxed(lean_object* v_self_2932_, lean_object* v_a_00___x40___internal___hyg_2933_){
_start:
{
uint32_t v_self_boxed_2934_; lean_object* v_res_2935_; 
v_self_boxed_2934_ = lean_unbox_uint32(v_self_2932_);
lean_dec(v_self_2932_);
v_res_2935_ = lasm_wasi_http_types_future_trailers_subscribe(v_self_boxed_2934_);
return v_res_2935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureTrailers_get___boxed(lean_object* v_self_2938_, lean_object* v_a_00___x40___internal___hyg_2939_){
_start:
{
uint32_t v_self_boxed_2940_; lean_object* v_res_2941_; 
v_self_boxed_2940_ = lean_unbox_uint32(v_self_2938_);
lean_dec(v_self_2938_);
v_res_2941_ = lasm_wasi_http_types_future_trailers_get(v_self_boxed_2940_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureTrailers_drop___boxed(lean_object* v_self_2944_, lean_object* v_a_00___x40___internal___hyg_2945_){
_start:
{
uint32_t v_self_boxed_2946_; lean_object* v_res_2947_; 
v_self_boxed_2946_ = lean_unbox_uint32(v_self_2944_);
lean_dec(v_self_2944_);
v_res_2947_ = lasm_wasi_http_types_future_trailers_drop(v_self_boxed_2946_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_new___boxed(lean_object* v_headers_2950_, lean_object* v_a_00___x40___internal___hyg_2951_){
_start:
{
uint32_t v_headers_boxed_2952_; lean_object* v_res_2953_; 
v_headers_boxed_2952_ = lean_unbox_uint32(v_headers_2950_);
lean_dec(v_headers_2950_);
v_res_2953_ = lasm_wasi_http_types_outgoing_response_new(v_headers_boxed_2952_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_statusCode___boxed(lean_object* v_self_2956_, lean_object* v_a_00___x40___internal___hyg_2957_){
_start:
{
uint32_t v_self_boxed_2958_; lean_object* v_res_2959_; 
v_self_boxed_2958_ = lean_unbox_uint32(v_self_2956_);
lean_dec(v_self_2956_);
v_res_2959_ = lasm_wasi_http_types_outgoing_response_status_code(v_self_boxed_2958_);
return v_res_2959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_setStatusCode___boxed(lean_object* v_self_2963_, lean_object* v_statusCode_2964_, lean_object* v_a_00___x40___internal___hyg_2965_){
_start:
{
uint32_t v_self_boxed_2966_; uint16_t v_statusCode_boxed_2967_; lean_object* v_res_2968_; 
v_self_boxed_2966_ = lean_unbox_uint32(v_self_2963_);
lean_dec(v_self_2963_);
v_statusCode_boxed_2967_ = lean_unbox(v_statusCode_2964_);
v_res_2968_ = lasm_wasi_http_types_outgoing_response_set_status_code(v_self_boxed_2966_, v_statusCode_boxed_2967_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_headers___boxed(lean_object* v_self_2971_, lean_object* v_a_00___x40___internal___hyg_2972_){
_start:
{
uint32_t v_self_boxed_2973_; lean_object* v_res_2974_; 
v_self_boxed_2973_ = lean_unbox_uint32(v_self_2971_);
lean_dec(v_self_2971_);
v_res_2974_ = lasm_wasi_http_types_outgoing_response_headers(v_self_boxed_2973_);
return v_res_2974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_body___boxed(lean_object* v_self_2977_, lean_object* v_a_00___x40___internal___hyg_2978_){
_start:
{
uint32_t v_self_boxed_2979_; lean_object* v_res_2980_; 
v_self_boxed_2979_ = lean_unbox_uint32(v_self_2977_);
lean_dec(v_self_2977_);
v_res_2980_ = lasm_wasi_http_types_outgoing_response_body(v_self_boxed_2979_);
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_drop___boxed(lean_object* v_self_2983_, lean_object* v_a_00___x40___internal___hyg_2984_){
_start:
{
uint32_t v_self_boxed_2985_; lean_object* v_res_2986_; 
v_self_boxed_2985_ = lean_unbox_uint32(v_self_2983_);
lean_dec(v_self_2983_);
v_res_2986_ = lasm_wasi_http_types_outgoing_response_drop(v_self_boxed_2985_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingBody_write___boxed(lean_object* v_self_2989_, lean_object* v_a_00___x40___internal___hyg_2990_){
_start:
{
uint32_t v_self_boxed_2991_; lean_object* v_res_2992_; 
v_self_boxed_2991_ = lean_unbox_uint32(v_self_2989_);
lean_dec(v_self_2989_);
v_res_2992_ = lasm_wasi_http_types_outgoing_body_write(v_self_boxed_2991_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingBody_finish___boxed(lean_object* v_this_2996_, lean_object* v_trailers_2997_, lean_object* v_a_00___x40___internal___hyg_2998_){
_start:
{
uint32_t v_this_boxed_2999_; lean_object* v_res_3000_; 
v_this_boxed_2999_ = lean_unbox_uint32(v_this_2996_);
lean_dec(v_this_2996_);
v_res_3000_ = lasm_wasi_http_types_outgoing_body_finish(v_this_boxed_2999_, v_trailers_2997_);
lean_dec(v_trailers_2997_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingBody_drop___boxed(lean_object* v_self_3003_, lean_object* v_a_00___x40___internal___hyg_3004_){
_start:
{
uint32_t v_self_boxed_3005_; lean_object* v_res_3006_; 
v_self_boxed_3005_ = lean_unbox_uint32(v_self_3003_);
lean_dec(v_self_3003_);
v_res_3006_ = lasm_wasi_http_types_outgoing_body_drop(v_self_boxed_3005_);
return v_res_3006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureIncomingResponse_subscribe___boxed(lean_object* v_self_3009_, lean_object* v_a_00___x40___internal___hyg_3010_){
_start:
{
uint32_t v_self_boxed_3011_; lean_object* v_res_3012_; 
v_self_boxed_3011_ = lean_unbox_uint32(v_self_3009_);
lean_dec(v_self_3009_);
v_res_3012_ = lasm_wasi_http_types_future_incoming_response_subscribe(v_self_boxed_3011_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureIncomingResponse_get___boxed(lean_object* v_self_3015_, lean_object* v_a_00___x40___internal___hyg_3016_){
_start:
{
uint32_t v_self_boxed_3017_; lean_object* v_res_3018_; 
v_self_boxed_3017_ = lean_unbox_uint32(v_self_3015_);
lean_dec(v_self_3015_);
v_res_3018_ = lasm_wasi_http_types_future_incoming_response_get(v_self_boxed_3017_);
return v_res_3018_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureIncomingResponse_drop___boxed(lean_object* v_self_3021_, lean_object* v_a_00___x40___internal___hyg_3022_){
_start:
{
uint32_t v_self_boxed_3023_; lean_object* v_res_3024_; 
v_self_boxed_3023_ = lean_unbox_uint32(v_self_3021_);
lean_dec(v_self_3021_);
v_res_3024_ = lasm_wasi_http_types_future_incoming_response_drop(v_self_boxed_3023_);
return v_res_3024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_httpErrorCode___boxed(lean_object* v_err_3027_, lean_object* v_a_00___x40___internal___hyg_3028_){
_start:
{
uint32_t v_err_boxed_3029_; lean_object* v_res_3030_; 
v_err_boxed_3029_ = lean_unbox_uint32(v_err_3027_);
lean_dec(v_err_3027_);
v_res_3030_ = lasm_wasi_http_types_http_error_code(v_err_boxed_3029_);
return v_res_3030_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Clocks_MonotonicClock(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Io_Streams(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Io_Error(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Io_Poll(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_WASI_Http_Types(uint8_t builtin) {
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
res = initialize_Lasm_WASI_Clocks_MonotonicClock(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_WASI_Io_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_WASI_Io_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_WASI_Io_Poll(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_WASI_Http_Types_instInhabitedFields_default = _init_l_Lasm_WASI_Http_Types_instInhabitedFields_default();
l_Lasm_WASI_Http_Types_instInhabitedFields = _init_l_Lasm_WASI_Http_Types_instInhabitedFields();
l_Lasm_WASI_Http_Types_instInhabitedIncomingRequest_default = _init_l_Lasm_WASI_Http_Types_instInhabitedIncomingRequest_default();
l_Lasm_WASI_Http_Types_instInhabitedIncomingRequest = _init_l_Lasm_WASI_Http_Types_instInhabitedIncomingRequest();
l_Lasm_WASI_Http_Types_instInhabitedOutgoingRequest_default = _init_l_Lasm_WASI_Http_Types_instInhabitedOutgoingRequest_default();
l_Lasm_WASI_Http_Types_instInhabitedOutgoingRequest = _init_l_Lasm_WASI_Http_Types_instInhabitedOutgoingRequest();
l_Lasm_WASI_Http_Types_instInhabitedRequestOptions_default = _init_l_Lasm_WASI_Http_Types_instInhabitedRequestOptions_default();
l_Lasm_WASI_Http_Types_instInhabitedRequestOptions = _init_l_Lasm_WASI_Http_Types_instInhabitedRequestOptions();
l_Lasm_WASI_Http_Types_instInhabitedResponseOutparam_default = _init_l_Lasm_WASI_Http_Types_instInhabitedResponseOutparam_default();
l_Lasm_WASI_Http_Types_instInhabitedResponseOutparam = _init_l_Lasm_WASI_Http_Types_instInhabitedResponseOutparam();
l_Lasm_WASI_Http_Types_instInhabitedIncomingResponse_default = _init_l_Lasm_WASI_Http_Types_instInhabitedIncomingResponse_default();
l_Lasm_WASI_Http_Types_instInhabitedIncomingResponse = _init_l_Lasm_WASI_Http_Types_instInhabitedIncomingResponse();
l_Lasm_WASI_Http_Types_instInhabitedIncomingBody_default = _init_l_Lasm_WASI_Http_Types_instInhabitedIncomingBody_default();
l_Lasm_WASI_Http_Types_instInhabitedIncomingBody = _init_l_Lasm_WASI_Http_Types_instInhabitedIncomingBody();
l_Lasm_WASI_Http_Types_instInhabitedFutureTrailers_default = _init_l_Lasm_WASI_Http_Types_instInhabitedFutureTrailers_default();
l_Lasm_WASI_Http_Types_instInhabitedFutureTrailers = _init_l_Lasm_WASI_Http_Types_instInhabitedFutureTrailers();
l_Lasm_WASI_Http_Types_instInhabitedOutgoingResponse_default = _init_l_Lasm_WASI_Http_Types_instInhabitedOutgoingResponse_default();
l_Lasm_WASI_Http_Types_instInhabitedOutgoingResponse = _init_l_Lasm_WASI_Http_Types_instInhabitedOutgoingResponse();
l_Lasm_WASI_Http_Types_instInhabitedOutgoingBody_default = _init_l_Lasm_WASI_Http_Types_instInhabitedOutgoingBody_default();
l_Lasm_WASI_Http_Types_instInhabitedOutgoingBody = _init_l_Lasm_WASI_Http_Types_instInhabitedOutgoingBody();
l_Lasm_WASI_Http_Types_instInhabitedFutureIncomingResponse_default = _init_l_Lasm_WASI_Http_Types_instInhabitedFutureIncomingResponse_default();
l_Lasm_WASI_Http_Types_instInhabitedFutureIncomingResponse = _init_l_Lasm_WASI_Http_Types_instInhabitedFutureIncomingResponse();
l_Lasm_WASI_Http_Types_instInhabitedMethod_default = _init_l_Lasm_WASI_Http_Types_instInhabitedMethod_default();
lean_mark_persistent(l_Lasm_WASI_Http_Types_instInhabitedMethod_default);
l_Lasm_WASI_Http_Types_instInhabitedMethod = _init_l_Lasm_WASI_Http_Types_instInhabitedMethod();
lean_mark_persistent(l_Lasm_WASI_Http_Types_instInhabitedMethod);
l_Lasm_WASI_Http_Types_instInhabitedScheme_default = _init_l_Lasm_WASI_Http_Types_instInhabitedScheme_default();
lean_mark_persistent(l_Lasm_WASI_Http_Types_instInhabitedScheme_default);
l_Lasm_WASI_Http_Types_instInhabitedScheme = _init_l_Lasm_WASI_Http_Types_instInhabitedScheme();
lean_mark_persistent(l_Lasm_WASI_Http_Types_instInhabitedScheme);
l_Lasm_WASI_Http_Types_instInhabitedErrorCode_default = _init_l_Lasm_WASI_Http_Types_instInhabitedErrorCode_default();
lean_mark_persistent(l_Lasm_WASI_Http_Types_instInhabitedErrorCode_default);
l_Lasm_WASI_Http_Types_instInhabitedErrorCode = _init_l_Lasm_WASI_Http_Types_instInhabitedErrorCode();
lean_mark_persistent(l_Lasm_WASI_Http_Types_instInhabitedErrorCode);
l_Lasm_WASI_Http_Types_instInhabitedHeaderError_default = _init_l_Lasm_WASI_Http_Types_instInhabitedHeaderError_default();
l_Lasm_WASI_Http_Types_instInhabitedHeaderError = _init_l_Lasm_WASI_Http_Types_instInhabitedHeaderError();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
