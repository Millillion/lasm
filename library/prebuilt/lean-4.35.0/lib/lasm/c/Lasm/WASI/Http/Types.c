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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_uint64_to_nat(uint64_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
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
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__1___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq_spec__0___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__1___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorIdx(lean_object* v_x_597_){
_start:
{
switch(lean_obj_tag(v_x_597_))
{
case 0:
{
lean_object* v___x_598_; 
v___x_598_ = lean_unsigned_to_nat(0u);
return v___x_598_;
}
case 1:
{
lean_object* v___x_599_; 
v___x_599_ = lean_unsigned_to_nat(1u);
return v___x_599_;
}
case 2:
{
lean_object* v___x_600_; 
v___x_600_ = lean_unsigned_to_nat(2u);
return v___x_600_;
}
case 3:
{
lean_object* v___x_601_; 
v___x_601_ = lean_unsigned_to_nat(3u);
return v___x_601_;
}
case 4:
{
lean_object* v___x_602_; 
v___x_602_ = lean_unsigned_to_nat(4u);
return v___x_602_;
}
case 5:
{
lean_object* v___x_603_; 
v___x_603_ = lean_unsigned_to_nat(5u);
return v___x_603_;
}
case 6:
{
lean_object* v___x_604_; 
v___x_604_ = lean_unsigned_to_nat(6u);
return v___x_604_;
}
case 7:
{
lean_object* v___x_605_; 
v___x_605_ = lean_unsigned_to_nat(7u);
return v___x_605_;
}
case 8:
{
lean_object* v___x_606_; 
v___x_606_ = lean_unsigned_to_nat(8u);
return v___x_606_;
}
default: 
{
lean_object* v___x_607_; 
v___x_607_ = lean_unsigned_to_nat(9u);
return v___x_607_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorIdx___boxed(lean_object* v_x_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Lasm_WASI_Http_Types_Method_ctorIdx(v_x_608_);
lean_dec(v_x_608_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(lean_object* v_t_610_, lean_object* v_k_611_){
_start:
{
if (lean_obj_tag(v_t_610_) == 9)
{
lean_object* v_payload_612_; lean_object* v___x_613_; 
v_payload_612_ = lean_ctor_get(v_t_610_, 0);
lean_inc_ref(v_payload_612_);
lean_dec_ref_known(v_t_610_, 1);
v___x_613_ = lean_apply_1(v_k_611_, v_payload_612_);
return v___x_613_;
}
else
{
lean_dec(v_t_610_);
return v_k_611_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorElim(lean_object* v_motive_614_, lean_object* v_ctorIdx_615_, lean_object* v_t_616_, lean_object* v_h_617_, lean_object* v_k_618_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_616_, v_k_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_ctorElim___boxed(lean_object* v_motive_620_, lean_object* v_ctorIdx_621_, lean_object* v_t_622_, lean_object* v_h_623_, lean_object* v_k_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lasm_WASI_Http_Types_Method_ctorElim(v_motive_620_, v_ctorIdx_621_, v_t_622_, v_h_623_, v_k_624_);
lean_dec(v_ctorIdx_621_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_get_elim___redArg(lean_object* v_t_626_, lean_object* v_get_627_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_626_, v_get_627_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_get_elim(lean_object* v_motive_629_, lean_object* v_t_630_, lean_object* v_h_631_, lean_object* v_get_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_630_, v_get_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_head_elim___redArg(lean_object* v_t_634_, lean_object* v_head_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_634_, v_head_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_head_elim(lean_object* v_motive_637_, lean_object* v_t_638_, lean_object* v_h_639_, lean_object* v_head_640_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_638_, v_head_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_post_elim___redArg(lean_object* v_t_642_, lean_object* v_post_643_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_642_, v_post_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_post_elim(lean_object* v_motive_645_, lean_object* v_t_646_, lean_object* v_h_647_, lean_object* v_post_648_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_646_, v_post_648_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_put_elim___redArg(lean_object* v_t_650_, lean_object* v_put_651_){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_650_, v_put_651_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_put_elim(lean_object* v_motive_653_, lean_object* v_t_654_, lean_object* v_h_655_, lean_object* v_put_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_654_, v_put_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_delete_elim___redArg(lean_object* v_t_658_, lean_object* v_delete_659_){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_658_, v_delete_659_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_delete_elim(lean_object* v_motive_661_, lean_object* v_t_662_, lean_object* v_h_663_, lean_object* v_delete_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_662_, v_delete_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_connect_elim___redArg(lean_object* v_t_666_, lean_object* v_connect_667_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_666_, v_connect_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_connect_elim(lean_object* v_motive_669_, lean_object* v_t_670_, lean_object* v_h_671_, lean_object* v_connect_672_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_670_, v_connect_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_options_elim___redArg(lean_object* v_t_674_, lean_object* v_options_675_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_674_, v_options_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_options_elim(lean_object* v_motive_677_, lean_object* v_t_678_, lean_object* v_h_679_, lean_object* v_options_680_){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_678_, v_options_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_trace_elim___redArg(lean_object* v_t_682_, lean_object* v_trace_683_){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_682_, v_trace_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_trace_elim(lean_object* v_motive_685_, lean_object* v_t_686_, lean_object* v_h_687_, lean_object* v_trace_688_){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_686_, v_trace_688_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_patch_elim___redArg(lean_object* v_t_690_, lean_object* v_patch_691_){
_start:
{
lean_object* v___x_692_; 
v___x_692_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_690_, v_patch_691_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_patch_elim(lean_object* v_motive_693_, lean_object* v_t_694_, lean_object* v_h_695_, lean_object* v_patch_696_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_694_, v_patch_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_other_elim___redArg(lean_object* v_t_698_, lean_object* v_other_699_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_698_, v_other_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Method_other_elim(lean_object* v_motive_701_, lean_object* v_t_702_, lean_object* v_h_703_, lean_object* v_other_704_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = l_Lasm_WASI_Http_Types_Method_ctorElim___redArg(v_t_702_, v_other_704_);
return v___x_705_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instInhabitedMethod_default(void){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = lean_box(0);
return v___x_706_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instInhabitedMethod(void){
_start:
{
lean_object* v___x_707_; 
v___x_707_ = lean_box(0);
return v___x_707_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqMethod_beq(lean_object* v_x_708_, lean_object* v_x_709_){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; uint8_t v_decide_712_; 
v___x_710_ = l_Lasm_WASI_Http_Types_Method_ctorIdx(v_x_708_);
v___x_711_ = l_Lasm_WASI_Http_Types_Method_ctorIdx(v_x_709_);
v_decide_712_ = lean_nat_dec_eq(v___x_710_, v___x_711_);
lean_dec(v___x_711_);
lean_dec(v___x_710_);
if (v_decide_712_ == 0)
{
return v_decide_712_;
}
else
{
if (lean_obj_tag(v_x_708_) == 9)
{
lean_object* v_payload_713_; lean_object* v_payload_714_; uint8_t v___x_715_; 
v_payload_713_ = lean_ctor_get(v_x_708_, 0);
v_payload_714_ = lean_ctor_get(v_x_709_, 0);
v___x_715_ = lean_string_dec_eq(v_payload_713_, v_payload_714_);
return v___x_715_;
}
else
{
return v_decide_712_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqMethod_beq___boxed(lean_object* v_x_716_, lean_object* v_x_717_){
_start:
{
uint8_t v_res_718_; lean_object* v_r_719_; 
v_res_718_ = l_Lasm_WASI_Http_Types_instBEqMethod_beq(v_x_716_, v_x_717_);
lean_dec(v_x_717_);
lean_dec(v_x_716_);
v_r_719_ = lean_box(v_res_718_);
return v_r_719_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18(void){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = lean_unsigned_to_nat(2u);
v___x_750_ = lean_nat_to_int(v___x_749_);
return v___x_750_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = lean_unsigned_to_nat(1u);
v___x_752_ = lean_nat_to_int(v___x_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr(lean_object* v_x_759_, lean_object* v_prec_760_){
_start:
{
lean_object* v___y_762_; lean_object* v___y_769_; lean_object* v___y_776_; lean_object* v___y_783_; lean_object* v___y_790_; lean_object* v___y_797_; lean_object* v___y_804_; lean_object* v___y_811_; lean_object* v___y_818_; 
switch(lean_obj_tag(v_x_759_))
{
case 0:
{
lean_object* v___x_824_; uint8_t v___x_825_; 
v___x_824_ = lean_unsigned_to_nat(1024u);
v___x_825_ = lean_nat_dec_le(v___x_824_, v_prec_760_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; 
v___x_826_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_818_ = v___x_826_;
goto v___jp_817_;
}
else
{
lean_object* v___x_827_; 
v___x_827_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_818_ = v___x_827_;
goto v___jp_817_;
}
}
case 1:
{
lean_object* v___x_828_; uint8_t v___x_829_; 
v___x_828_ = lean_unsigned_to_nat(1024u);
v___x_829_ = lean_nat_dec_le(v___x_828_, v_prec_760_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; 
v___x_830_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_811_ = v___x_830_;
goto v___jp_810_;
}
else
{
lean_object* v___x_831_; 
v___x_831_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_811_ = v___x_831_;
goto v___jp_810_;
}
}
case 2:
{
lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_832_ = lean_unsigned_to_nat(1024u);
v___x_833_ = lean_nat_dec_le(v___x_832_, v_prec_760_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; 
v___x_834_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_804_ = v___x_834_;
goto v___jp_803_;
}
else
{
lean_object* v___x_835_; 
v___x_835_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_804_ = v___x_835_;
goto v___jp_803_;
}
}
case 3:
{
lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_836_ = lean_unsigned_to_nat(1024u);
v___x_837_ = lean_nat_dec_le(v___x_836_, v_prec_760_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; 
v___x_838_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_797_ = v___x_838_;
goto v___jp_796_;
}
else
{
lean_object* v___x_839_; 
v___x_839_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_797_ = v___x_839_;
goto v___jp_796_;
}
}
case 4:
{
lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_840_ = lean_unsigned_to_nat(1024u);
v___x_841_ = lean_nat_dec_le(v___x_840_, v_prec_760_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; 
v___x_842_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_790_ = v___x_842_;
goto v___jp_789_;
}
else
{
lean_object* v___x_843_; 
v___x_843_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_790_ = v___x_843_;
goto v___jp_789_;
}
}
case 5:
{
lean_object* v___x_844_; uint8_t v___x_845_; 
v___x_844_ = lean_unsigned_to_nat(1024u);
v___x_845_ = lean_nat_dec_le(v___x_844_, v_prec_760_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; 
v___x_846_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_783_ = v___x_846_;
goto v___jp_782_;
}
else
{
lean_object* v___x_847_; 
v___x_847_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_783_ = v___x_847_;
goto v___jp_782_;
}
}
case 6:
{
lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_848_ = lean_unsigned_to_nat(1024u);
v___x_849_ = lean_nat_dec_le(v___x_848_, v_prec_760_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; 
v___x_850_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_776_ = v___x_850_;
goto v___jp_775_;
}
else
{
lean_object* v___x_851_; 
v___x_851_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_776_ = v___x_851_;
goto v___jp_775_;
}
}
case 7:
{
lean_object* v___x_852_; uint8_t v___x_853_; 
v___x_852_ = lean_unsigned_to_nat(1024u);
v___x_853_ = lean_nat_dec_le(v___x_852_, v_prec_760_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; 
v___x_854_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_769_ = v___x_854_;
goto v___jp_768_;
}
else
{
lean_object* v___x_855_; 
v___x_855_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_769_ = v___x_855_;
goto v___jp_768_;
}
}
case 8:
{
lean_object* v___x_856_; uint8_t v___x_857_; 
v___x_856_ = lean_unsigned_to_nat(1024u);
v___x_857_ = lean_nat_dec_le(v___x_856_, v_prec_760_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; 
v___x_858_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_762_ = v___x_858_;
goto v___jp_761_;
}
else
{
lean_object* v___x_859_; 
v___x_859_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_762_ = v___x_859_;
goto v___jp_761_;
}
}
default: 
{
lean_object* v_payload_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_880_; 
v_payload_860_ = lean_ctor_get(v_x_759_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v_x_759_);
if (v_isSharedCheck_880_ == 0)
{
v___x_862_ = v_x_759_;
v_isShared_863_ = v_isSharedCheck_880_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_payload_860_);
lean_dec(v_x_759_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_880_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___y_865_; lean_object* v___x_876_; uint8_t v___x_877_; 
v___x_876_ = lean_unsigned_to_nat(1024u);
v___x_877_ = lean_nat_dec_le(v___x_876_, v_prec_760_);
if (v___x_877_ == 0)
{
lean_object* v___x_878_; 
v___x_878_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_865_ = v___x_878_;
goto v___jp_864_;
}
else
{
lean_object* v___x_879_; 
v___x_879_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_865_ = v___x_879_;
goto v___jp_864_;
}
v___jp_864_:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_869_; 
v___x_866_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__22));
v___x_867_ = l_String_quote(v_payload_860_);
if (v_isShared_863_ == 0)
{
lean_ctor_set_tag(v___x_862_, 3);
lean_ctor_set(v___x_862_, 0, v___x_867_);
v___x_869_ = v___x_862_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_867_);
v___x_869_ = v_reuseFailAlloc_875_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
lean_object* v___x_870_; lean_object* v___x_871_; uint8_t v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_870_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_870_, 0, v___x_866_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
lean_inc(v___y_865_);
v___x_871_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_871_, 0, v___y_865_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = 0;
v___x_873_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_873_, 0, v___x_871_);
lean_ctor_set_uint8(v___x_873_, sizeof(void*)*1, v___x_872_);
v___x_874_ = l_Repr_addAppParen(v___x_873_, v_prec_760_);
return v___x_874_;
}
}
}
}
}
v___jp_761_:
{
lean_object* v___x_763_; lean_object* v___x_764_; uint8_t v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_763_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__1));
lean_inc(v___y_762_);
v___x_764_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_764_, 0, v___y_762_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
v___x_765_ = 0;
v___x_766_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set_uint8(v___x_766_, sizeof(void*)*1, v___x_765_);
v___x_767_ = l_Repr_addAppParen(v___x_766_, v_prec_760_);
return v___x_767_;
}
v___jp_768_:
{
lean_object* v___x_770_; lean_object* v___x_771_; uint8_t v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_770_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__3));
lean_inc(v___y_769_);
v___x_771_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_771_, 0, v___y_769_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
v___x_772_ = 0;
v___x_773_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_773_, 0, v___x_771_);
lean_ctor_set_uint8(v___x_773_, sizeof(void*)*1, v___x_772_);
v___x_774_ = l_Repr_addAppParen(v___x_773_, v_prec_760_);
return v___x_774_;
}
v___jp_775_:
{
lean_object* v___x_777_; lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_777_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__5));
lean_inc(v___y_776_);
v___x_778_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_778_, 0, v___y_776_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
v___x_779_ = 0;
v___x_780_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_780_, 0, v___x_778_);
lean_ctor_set_uint8(v___x_780_, sizeof(void*)*1, v___x_779_);
v___x_781_ = l_Repr_addAppParen(v___x_780_, v_prec_760_);
return v___x_781_;
}
v___jp_782_:
{
lean_object* v___x_784_; lean_object* v___x_785_; uint8_t v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_784_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__7));
lean_inc(v___y_783_);
v___x_785_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_785_, 0, v___y_783_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
v___x_786_ = 0;
v___x_787_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_787_, 0, v___x_785_);
lean_ctor_set_uint8(v___x_787_, sizeof(void*)*1, v___x_786_);
v___x_788_ = l_Repr_addAppParen(v___x_787_, v_prec_760_);
return v___x_788_;
}
v___jp_789_:
{
lean_object* v___x_791_; lean_object* v___x_792_; uint8_t v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_791_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__9));
lean_inc(v___y_790_);
v___x_792_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_792_, 0, v___y_790_);
lean_ctor_set(v___x_792_, 1, v___x_791_);
v___x_793_ = 0;
v___x_794_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_794_, 0, v___x_792_);
lean_ctor_set_uint8(v___x_794_, sizeof(void*)*1, v___x_793_);
v___x_795_ = l_Repr_addAppParen(v___x_794_, v_prec_760_);
return v___x_795_;
}
v___jp_796_:
{
lean_object* v___x_798_; lean_object* v___x_799_; uint8_t v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_798_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__11));
lean_inc(v___y_797_);
v___x_799_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_799_, 0, v___y_797_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
v___x_800_ = 0;
v___x_801_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_801_, 0, v___x_799_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*1, v___x_800_);
v___x_802_ = l_Repr_addAppParen(v___x_801_, v_prec_760_);
return v___x_802_;
}
v___jp_803_:
{
lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_805_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__13));
lean_inc(v___y_804_);
v___x_806_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_806_, 0, v___y_804_);
lean_ctor_set(v___x_806_, 1, v___x_805_);
v___x_807_ = 0;
v___x_808_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_808_, 0, v___x_806_);
lean_ctor_set_uint8(v___x_808_, sizeof(void*)*1, v___x_807_);
v___x_809_ = l_Repr_addAppParen(v___x_808_, v_prec_760_);
return v___x_809_;
}
v___jp_810_:
{
lean_object* v___x_812_; lean_object* v___x_813_; uint8_t v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_812_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__15));
lean_inc(v___y_811_);
v___x_813_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_813_, 0, v___y_811_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v___x_814_ = 0;
v___x_815_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_815_, 0, v___x_813_);
lean_ctor_set_uint8(v___x_815_, sizeof(void*)*1, v___x_814_);
v___x_816_ = l_Repr_addAppParen(v___x_815_, v_prec_760_);
return v___x_816_;
}
v___jp_817_:
{
lean_object* v___x_819_; lean_object* v___x_820_; uint8_t v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_819_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__17));
lean_inc(v___y_818_);
v___x_820_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_820_, 0, v___y_818_);
lean_ctor_set(v___x_820_, 1, v___x_819_);
v___x_821_ = 0;
v___x_822_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_822_, 0, v___x_820_);
lean_ctor_set_uint8(v___x_822_, sizeof(void*)*1, v___x_821_);
v___x_823_ = l_Repr_addAppParen(v___x_822_, v_prec_760_);
return v___x_823_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprMethod_repr___boxed(lean_object* v_x_881_, lean_object* v_prec_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lasm_WASI_Http_Types_instReprMethod_repr(v_x_881_, v_prec_882_);
lean_dec(v_prec_882_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorIdx(lean_object* v_x_886_){
_start:
{
switch(lean_obj_tag(v_x_886_))
{
case 0:
{
lean_object* v___x_887_; 
v___x_887_ = lean_unsigned_to_nat(0u);
return v___x_887_;
}
case 1:
{
lean_object* v___x_888_; 
v___x_888_ = lean_unsigned_to_nat(1u);
return v___x_888_;
}
default: 
{
lean_object* v___x_889_; 
v___x_889_ = lean_unsigned_to_nat(2u);
return v___x_889_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorIdx___boxed(lean_object* v_x_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Lasm_WASI_Http_Types_Scheme_ctorIdx(v_x_890_);
lean_dec(v_x_890_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(lean_object* v_t_892_, lean_object* v_k_893_){
_start:
{
if (lean_obj_tag(v_t_892_) == 2)
{
lean_object* v_payload_894_; lean_object* v___x_895_; 
v_payload_894_ = lean_ctor_get(v_t_892_, 0);
lean_inc_ref(v_payload_894_);
lean_dec_ref_known(v_t_892_, 1);
v___x_895_ = lean_apply_1(v_k_893_, v_payload_894_);
return v___x_895_;
}
else
{
lean_dec(v_t_892_);
return v_k_893_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorElim(lean_object* v_motive_896_, lean_object* v_ctorIdx_897_, lean_object* v_t_898_, lean_object* v_h_899_, lean_object* v_k_900_){
_start:
{
lean_object* v___x_901_; 
v___x_901_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_898_, v_k_900_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_ctorElim___boxed(lean_object* v_motive_902_, lean_object* v_ctorIdx_903_, lean_object* v_t_904_, lean_object* v_h_905_, lean_object* v_k_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim(v_motive_902_, v_ctorIdx_903_, v_t_904_, v_h_905_, v_k_906_);
lean_dec(v_ctorIdx_903_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_http_elim___redArg(lean_object* v_t_908_, lean_object* v_http_909_){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_908_, v_http_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_http_elim(lean_object* v_motive_911_, lean_object* v_t_912_, lean_object* v_h_913_, lean_object* v_http_914_){
_start:
{
lean_object* v___x_915_; 
v___x_915_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_912_, v_http_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_https_elim___redArg(lean_object* v_t_916_, lean_object* v_https_917_){
_start:
{
lean_object* v___x_918_; 
v___x_918_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_916_, v_https_917_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_https_elim(lean_object* v_motive_919_, lean_object* v_t_920_, lean_object* v_h_921_, lean_object* v_https_922_){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_920_, v_https_922_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_other_elim___redArg(lean_object* v_t_924_, lean_object* v_other_925_){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_924_, v_other_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Scheme_other_elim(lean_object* v_motive_927_, lean_object* v_t_928_, lean_object* v_h_929_, lean_object* v_other_930_){
_start:
{
lean_object* v___x_931_; 
v___x_931_ = l_Lasm_WASI_Http_Types_Scheme_ctorElim___redArg(v_t_928_, v_other_930_);
return v___x_931_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instInhabitedScheme_default(void){
_start:
{
lean_object* v___x_932_; 
v___x_932_ = lean_box(0);
return v___x_932_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instInhabitedScheme(void){
_start:
{
lean_object* v___x_933_; 
v___x_933_ = lean_box(0);
return v___x_933_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqScheme_beq(lean_object* v_x_934_, lean_object* v_x_935_){
_start:
{
switch(lean_obj_tag(v_x_934_))
{
case 0:
{
if (lean_obj_tag(v_x_935_) == 0)
{
uint8_t v___x_936_; 
v___x_936_ = 1;
return v___x_936_;
}
else
{
uint8_t v___x_937_; 
v___x_937_ = 0;
return v___x_937_;
}
}
case 1:
{
if (lean_obj_tag(v_x_935_) == 1)
{
uint8_t v___x_938_; 
v___x_938_ = 1;
return v___x_938_;
}
else
{
uint8_t v___x_939_; 
v___x_939_ = 0;
return v___x_939_;
}
}
default: 
{
if (lean_obj_tag(v_x_935_) == 2)
{
lean_object* v_payload_940_; lean_object* v_payload_941_; uint8_t v___x_942_; 
v_payload_940_ = lean_ctor_get(v_x_934_, 0);
v_payload_941_ = lean_ctor_get(v_x_935_, 0);
v___x_942_ = lean_string_dec_eq(v_payload_940_, v_payload_941_);
return v___x_942_;
}
else
{
uint8_t v___x_943_; 
v___x_943_ = 0;
return v___x_943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqScheme_beq___boxed(lean_object* v_x_944_, lean_object* v_x_945_){
_start:
{
uint8_t v_res_946_; lean_object* v_r_947_; 
v_res_946_ = l_Lasm_WASI_Http_Types_instBEqScheme_beq(v_x_944_, v_x_945_);
lean_dec(v_x_945_);
lean_dec(v_x_944_);
v_r_947_ = lean_box(v_res_946_);
return v_r_947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr(lean_object* v_x_962_, lean_object* v_prec_963_){
_start:
{
lean_object* v___y_965_; lean_object* v___y_972_; 
switch(lean_obj_tag(v_x_962_))
{
case 0:
{
lean_object* v___x_978_; uint8_t v___x_979_; 
v___x_978_ = lean_unsigned_to_nat(1024u);
v___x_979_ = lean_nat_dec_le(v___x_978_, v_prec_963_);
if (v___x_979_ == 0)
{
lean_object* v___x_980_; 
v___x_980_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_972_ = v___x_980_;
goto v___jp_971_;
}
else
{
lean_object* v___x_981_; 
v___x_981_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_972_ = v___x_981_;
goto v___jp_971_;
}
}
case 1:
{
lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_982_ = lean_unsigned_to_nat(1024u);
v___x_983_ = lean_nat_dec_le(v___x_982_, v_prec_963_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; 
v___x_984_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_965_ = v___x_984_;
goto v___jp_964_;
}
else
{
lean_object* v___x_985_; 
v___x_985_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_965_ = v___x_985_;
goto v___jp_964_;
}
}
default: 
{
lean_object* v_payload_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1006_; 
v_payload_986_ = lean_ctor_get(v_x_962_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_x_962_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_988_ = v_x_962_;
v_isShared_989_ = v_isSharedCheck_1006_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_payload_986_);
lean_dec(v_x_962_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1006_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___y_991_; lean_object* v___x_1002_; uint8_t v___x_1003_; 
v___x_1002_ = lean_unsigned_to_nat(1024u);
v___x_1003_ = lean_nat_dec_le(v___x_1002_, v_prec_963_);
if (v___x_1003_ == 0)
{
lean_object* v___x_1004_; 
v___x_1004_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_991_ = v___x_1004_;
goto v___jp_990_;
}
else
{
lean_object* v___x_1005_; 
v___x_1005_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_991_ = v___x_1005_;
goto v___jp_990_;
}
v___jp_990_:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_995_; 
v___x_992_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__6));
v___x_993_ = l_String_quote(v_payload_986_);
if (v_isShared_989_ == 0)
{
lean_ctor_set_tag(v___x_988_, 3);
lean_ctor_set(v___x_988_, 0, v___x_993_);
v___x_995_ = v___x_988_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v___x_993_);
v___x_995_ = v_reuseFailAlloc_1001_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
lean_object* v___x_996_; lean_object* v___x_997_; uint8_t v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_996_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_992_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
lean_inc(v___y_991_);
v___x_997_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_997_, 0, v___y_991_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = 0;
v___x_999_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_999_, 0, v___x_997_);
lean_ctor_set_uint8(v___x_999_, sizeof(void*)*1, v___x_998_);
v___x_1000_ = l_Repr_addAppParen(v___x_999_, v_prec_963_);
return v___x_1000_;
}
}
}
}
}
v___jp_964_:
{
lean_object* v___x_966_; lean_object* v___x_967_; uint8_t v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_966_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__1));
lean_inc(v___y_965_);
v___x_967_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_967_, 0, v___y_965_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
v___x_968_ = 0;
v___x_969_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_969_, 0, v___x_967_);
lean_ctor_set_uint8(v___x_969_, sizeof(void*)*1, v___x_968_);
v___x_970_ = l_Repr_addAppParen(v___x_969_, v_prec_963_);
return v___x_970_;
}
v___jp_971_:
{
lean_object* v___x_973_; lean_object* v___x_974_; uint8_t v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_973_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprScheme_repr___closed__3));
lean_inc(v___y_972_);
v___x_974_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_974_, 0, v___y_972_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = 0;
v___x_976_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_976_, 0, v___x_974_);
lean_ctor_set_uint8(v___x_976_, sizeof(void*)*1, v___x_975_);
v___x_977_ = l_Repr_addAppParen(v___x_976_, v_prec_963_);
return v___x_977_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprScheme_repr___boxed(lean_object* v_x_1007_, lean_object* v_prec_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lasm_WASI_Http_Types_instReprScheme_repr(v_x_1007_, v_prec_1008_);
lean_dec(v_prec_1008_);
return v_res_1009_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(lean_object* v_x_1016_, lean_object* v_x_1017_){
_start:
{
if (lean_obj_tag(v_x_1016_) == 0)
{
if (lean_obj_tag(v_x_1017_) == 0)
{
uint8_t v___x_1018_; 
v___x_1018_ = 1;
return v___x_1018_;
}
else
{
uint8_t v___x_1019_; 
v___x_1019_ = 0;
return v___x_1019_;
}
}
else
{
if (lean_obj_tag(v_x_1017_) == 0)
{
uint8_t v___x_1020_; 
v___x_1020_ = 0;
return v___x_1020_;
}
else
{
lean_object* v_val_1021_; lean_object* v_val_1022_; uint8_t v___x_1023_; 
v_val_1021_ = lean_ctor_get(v_x_1016_, 0);
v_val_1022_ = lean_ctor_get(v_x_1017_, 0);
v___x_1023_ = lean_string_dec_eq(v_val_1021_, v_val_1022_);
return v___x_1023_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0___boxed(lean_object* v_x_1024_, lean_object* v_x_1025_){
_start:
{
uint8_t v_res_1026_; lean_object* v_r_1027_; 
v_res_1026_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_x_1024_, v_x_1025_);
lean_dec(v_x_1025_);
lean_dec(v_x_1024_);
v_r_1027_ = lean_box(v_res_1026_);
return v_r_1027_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__1(lean_object* v_x_1028_, lean_object* v_x_1029_){
_start:
{
if (lean_obj_tag(v_x_1028_) == 0)
{
if (lean_obj_tag(v_x_1029_) == 0)
{
uint8_t v___x_1030_; 
v___x_1030_ = 1;
return v___x_1030_;
}
else
{
uint8_t v___x_1031_; 
v___x_1031_ = 0;
return v___x_1031_;
}
}
else
{
if (lean_obj_tag(v_x_1029_) == 0)
{
uint8_t v___x_1032_; 
v___x_1032_ = 0;
return v___x_1032_;
}
else
{
lean_object* v_val_1033_; lean_object* v_val_1034_; uint16_t v___x_1035_; uint16_t v___x_1036_; uint8_t v___x_1037_; 
v_val_1033_ = lean_ctor_get(v_x_1028_, 0);
v_val_1034_ = lean_ctor_get(v_x_1029_, 0);
v___x_1035_ = lean_unbox(v_val_1033_);
v___x_1036_ = lean_unbox(v_val_1034_);
v___x_1037_ = lean_uint16_dec_eq(v___x_1035_, v___x_1036_);
return v___x_1037_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__1___boxed(lean_object* v_x_1038_, lean_object* v_x_1039_){
_start:
{
uint8_t v_res_1040_; lean_object* v_r_1041_; 
v_res_1040_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__1(v_x_1038_, v_x_1039_);
lean_dec(v_x_1039_);
lean_dec(v_x_1038_);
v_r_1041_ = lean_box(v_res_1040_);
return v_r_1041_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq(lean_object* v_x_1042_, lean_object* v_x_1043_){
_start:
{
lean_object* v_rcode_1044_; lean_object* v_infoCode_1045_; lean_object* v_rcode_1046_; lean_object* v_infoCode_1047_; uint8_t v___x_1048_; 
v_rcode_1044_ = lean_ctor_get(v_x_1042_, 0);
v_infoCode_1045_ = lean_ctor_get(v_x_1042_, 1);
v_rcode_1046_ = lean_ctor_get(v_x_1043_, 0);
v_infoCode_1047_ = lean_ctor_get(v_x_1043_, 1);
v___x_1048_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_rcode_1044_, v_rcode_1046_);
if (v___x_1048_ == 0)
{
return v___x_1048_;
}
else
{
uint8_t v___x_1049_; 
v___x_1049_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__1(v_infoCode_1045_, v_infoCode_1047_);
return v___x_1049_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq___boxed(lean_object* v_x_1050_, lean_object* v_x_1051_){
_start:
{
uint8_t v_res_1052_; lean_object* v_r_1053_; 
v_res_1052_ = l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq(v_x_1050_, v_x_1051_);
lean_dec_ref(v_x_1051_);
lean_dec_ref(v_x_1050_);
v_r_1053_ = lean_box(v_res_1052_);
return v_r_1053_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(lean_object* v_x_1062_, lean_object* v_x_1063_){
_start:
{
if (lean_obj_tag(v_x_1062_) == 0)
{
lean_object* v___x_1064_; 
v___x_1064_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1));
return v___x_1064_;
}
else
{
lean_object* v_val_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1076_; 
v_val_1065_ = lean_ctor_get(v_x_1062_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v_x_1062_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1067_ = v_x_1062_;
v_isShared_1068_ = v_isSharedCheck_1076_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_val_1065_);
lean_dec(v_x_1062_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1076_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1072_; 
v___x_1069_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3));
v___x_1070_ = l_String_quote(v_val_1065_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set_tag(v___x_1067_, 3);
lean_ctor_set(v___x_1067_, 0, v___x_1070_);
v___x_1072_ = v___x_1067_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v___x_1070_);
v___x_1072_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1073_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1069_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = l_Repr_addAppParen(v___x_1073_, v_x_1063_);
return v___x_1074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___boxed(lean_object* v_x_1077_, lean_object* v_x_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_x_1077_, v_x_1078_);
lean_dec(v_x_1078_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__1(lean_object* v_x_1080_, lean_object* v_x_1081_){
_start:
{
if (lean_obj_tag(v_x_1080_) == 0)
{
lean_object* v___x_1082_; 
v___x_1082_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1));
return v___x_1082_;
}
else
{
lean_object* v_val_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1096_; 
v_val_1083_ = lean_ctor_get(v_x_1080_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v_x_1080_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1085_ = v_x_1080_;
v_isShared_1086_ = v_isSharedCheck_1096_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_val_1083_);
lean_dec(v_x_1080_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1096_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1087_; uint16_t v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1092_; 
v___x_1087_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3));
v___x_1088_ = lean_unbox(v_val_1083_);
lean_dec(v_val_1083_);
v___x_1089_ = lean_uint16_to_nat(v___x_1088_);
v___x_1090_ = l_Nat_reprFast(v___x_1089_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set_tag(v___x_1085_, 3);
lean_ctor_set(v___x_1085_, 0, v___x_1090_);
v___x_1092_ = v___x_1085_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v___x_1090_);
v___x_1092_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1087_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = l_Repr_addAppParen(v___x_1093_, v_x_1081_);
return v___x_1094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__1___boxed(lean_object* v_x_1097_, lean_object* v_x_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__1(v_x_1097_, v_x_1098_);
lean_dec(v_x_1098_);
return v_res_1099_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = lean_unsigned_to_nat(9u);
v___x_1110_ = lean_nat_to_int(v___x_1109_);
return v___x_1110_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = lean_unsigned_to_nat(12u);
v___x_1118_ = lean_nat_to_int(v___x_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg(lean_object* v_x_1119_){
_start:
{
lean_object* v_rcode_1120_; lean_object* v_infoCode_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1155_; 
v_rcode_1120_ = lean_ctor_get(v_x_1119_, 0);
v_infoCode_1121_ = lean_ctor_get(v_x_1119_, 1);
v_isSharedCheck_1155_ = !lean_is_exclusive(v_x_1119_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1123_ = v_x_1119_;
v_isShared_1124_ = v_isSharedCheck_1155_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_infoCode_1121_);
lean_inc(v_rcode_1120_);
lean_dec(v_x_1119_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1155_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1131_; 
v___x_1125_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5));
v___x_1126_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__3));
v___x_1127_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__4, &l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__4_once, _init_l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__4);
v___x_1128_ = lean_unsigned_to_nat(0u);
v___x_1129_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_rcode_1120_, v___x_1128_);
if (v_isShared_1124_ == 0)
{
lean_ctor_set_tag(v___x_1123_, 4);
lean_ctor_set(v___x_1123_, 1, v___x_1129_);
lean_ctor_set(v___x_1123_, 0, v___x_1127_);
v___x_1131_ = v___x_1123_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1127_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v___x_1129_);
v___x_1131_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
uint8_t v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1132_ = 0;
v___x_1133_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1133_, 0, v___x_1131_);
lean_ctor_set_uint8(v___x_1133_, sizeof(void*)*1, v___x_1132_);
v___x_1134_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1126_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
v___x_1135_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__6));
v___x_1136_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1134_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
v___x_1137_ = lean_box(1);
v___x_1138_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1136_);
lean_ctor_set(v___x_1138_, 1, v___x_1137_);
v___x_1139_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__8));
v___x_1140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1138_);
lean_ctor_set(v___x_1140_, 1, v___x_1139_);
v___x_1141_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
lean_ctor_set(v___x_1141_, 1, v___x_1125_);
v___x_1142_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__9, &l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__9_once, _init_l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__9);
v___x_1143_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__1(v_infoCode_1121_, v___x_1128_);
v___x_1144_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1142_);
lean_ctor_set(v___x_1144_, 1, v___x_1143_);
v___x_1145_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
lean_ctor_set_uint8(v___x_1145_, sizeof(void*)*1, v___x_1132_);
v___x_1146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1141_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
v___x_1147_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_1148_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_1149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
lean_ctor_set(v___x_1149_, 1, v___x_1146_);
v___x_1150_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_1151_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1149_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1147_);
lean_ctor_set(v___x_1152_, 1, v___x_1151_);
v___x_1153_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1153_, 0, v___x_1152_);
lean_ctor_set_uint8(v___x_1153_, sizeof(void*)*1, v___x_1132_);
return v___x_1153_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr(lean_object* v_x_1156_, lean_object* v_prec_1157_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg(v_x_1156_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___boxed(lean_object* v_x_1159_, lean_object* v_prec_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr(v_x_1159_, v_prec_1160_);
lean_dec(v_prec_1160_);
return v_res_1161_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq_spec__0(lean_object* v_x_1168_, lean_object* v_x_1169_){
_start:
{
if (lean_obj_tag(v_x_1168_) == 0)
{
if (lean_obj_tag(v_x_1169_) == 0)
{
uint8_t v___x_1170_; 
v___x_1170_ = 1;
return v___x_1170_;
}
else
{
uint8_t v___x_1171_; 
v___x_1171_ = 0;
return v___x_1171_;
}
}
else
{
if (lean_obj_tag(v_x_1169_) == 0)
{
uint8_t v___x_1172_; 
v___x_1172_ = 0;
return v___x_1172_;
}
else
{
lean_object* v_val_1173_; lean_object* v_val_1174_; uint8_t v___x_1175_; uint8_t v___x_1176_; uint8_t v___x_1177_; 
v_val_1173_ = lean_ctor_get(v_x_1168_, 0);
v_val_1174_ = lean_ctor_get(v_x_1169_, 0);
v___x_1175_ = lean_unbox(v_val_1173_);
v___x_1176_ = lean_unbox(v_val_1174_);
v___x_1177_ = lean_uint8_dec_eq(v___x_1175_, v___x_1176_);
return v___x_1177_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq_spec__0___boxed(lean_object* v_x_1178_, lean_object* v_x_1179_){
_start:
{
uint8_t v_res_1180_; lean_object* v_r_1181_; 
v_res_1180_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq_spec__0(v_x_1178_, v_x_1179_);
lean_dec(v_x_1179_);
lean_dec(v_x_1178_);
v_r_1181_ = lean_box(v_res_1180_);
return v_r_1181_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq(lean_object* v_x_1182_, lean_object* v_x_1183_){
_start:
{
lean_object* v_alertId_1184_; lean_object* v_alertMessage_1185_; lean_object* v_alertId_1186_; lean_object* v_alertMessage_1187_; uint8_t v___x_1188_; 
v_alertId_1184_ = lean_ctor_get(v_x_1182_, 0);
v_alertMessage_1185_ = lean_ctor_get(v_x_1182_, 1);
v_alertId_1186_ = lean_ctor_get(v_x_1183_, 0);
v_alertMessage_1187_ = lean_ctor_get(v_x_1183_, 1);
v___x_1188_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq_spec__0(v_alertId_1184_, v_alertId_1186_);
if (v___x_1188_ == 0)
{
return v___x_1188_;
}
else
{
uint8_t v___x_1189_; 
v___x_1189_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_alertMessage_1185_, v_alertMessage_1187_);
return v___x_1189_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq___boxed(lean_object* v_x_1190_, lean_object* v_x_1191_){
_start:
{
uint8_t v_res_1192_; lean_object* v_r_1193_; 
v_res_1192_ = l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq(v_x_1190_, v_x_1191_);
lean_dec_ref(v_x_1191_);
lean_dec_ref(v_x_1190_);
v_r_1193_ = lean_box(v_res_1192_);
return v_r_1193_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr_spec__0(lean_object* v_x_1196_, lean_object* v_x_1197_){
_start:
{
if (lean_obj_tag(v_x_1196_) == 0)
{
lean_object* v___x_1198_; 
v___x_1198_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1));
return v___x_1198_;
}
else
{
lean_object* v_val_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1212_; 
v_val_1199_ = lean_ctor_get(v_x_1196_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v_x_1196_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1201_ = v_x_1196_;
v_isShared_1202_ = v_isSharedCheck_1212_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_val_1199_);
lean_dec(v_x_1196_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1212_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1203_; uint8_t v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1208_; 
v___x_1203_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3));
v___x_1204_ = lean_unbox(v_val_1199_);
lean_dec(v_val_1199_);
v___x_1205_ = lean_uint8_to_nat(v___x_1204_);
v___x_1206_ = l_Nat_reprFast(v___x_1205_);
if (v_isShared_1202_ == 0)
{
lean_ctor_set_tag(v___x_1201_, 3);
lean_ctor_set(v___x_1201_, 0, v___x_1206_);
v___x_1208_ = v___x_1201_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1206_);
v___x_1208_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1209_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1203_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = l_Repr_addAppParen(v___x_1209_, v_x_1197_);
return v___x_1210_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr_spec__0___boxed(lean_object* v_x_1213_, lean_object* v_x_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr_spec__0(v_x_1213_, v_x_1214_);
lean_dec(v_x_1214_);
return v_res_1215_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = lean_unsigned_to_nat(11u);
v___x_1226_ = lean_nat_to_int(v___x_1225_);
return v___x_1226_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1230_ = lean_unsigned_to_nat(16u);
v___x_1231_ = lean_nat_to_int(v___x_1230_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg(lean_object* v_x_1232_){
_start:
{
lean_object* v_alertId_1233_; lean_object* v_alertMessage_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1268_; 
v_alertId_1233_ = lean_ctor_get(v_x_1232_, 0);
v_alertMessage_1234_ = lean_ctor_get(v_x_1232_, 1);
v_isSharedCheck_1268_ = !lean_is_exclusive(v_x_1232_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1236_ = v_x_1232_;
v_isShared_1237_ = v_isSharedCheck_1268_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_alertMessage_1234_);
lean_inc(v_alertId_1233_);
lean_dec(v_x_1232_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1268_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1244_; 
v___x_1238_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5));
v___x_1239_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__3));
v___x_1240_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__4, &l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__4_once, _init_l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__4);
v___x_1241_ = lean_unsigned_to_nat(0u);
v___x_1242_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr_spec__0(v_alertId_1233_, v___x_1241_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set_tag(v___x_1236_, 4);
lean_ctor_set(v___x_1236_, 1, v___x_1242_);
lean_ctor_set(v___x_1236_, 0, v___x_1240_);
v___x_1244_ = v___x_1236_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1267_, 1, v___x_1242_);
v___x_1244_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
uint8_t v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1245_ = 0;
v___x_1246_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set_uint8(v___x_1246_, sizeof(void*)*1, v___x_1245_);
v___x_1247_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1239_);
lean_ctor_set(v___x_1247_, 1, v___x_1246_);
v___x_1248_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__6));
v___x_1249_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1247_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
v___x_1250_ = lean_box(1);
v___x_1251_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1249_);
lean_ctor_set(v___x_1251_, 1, v___x_1250_);
v___x_1252_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__6));
v___x_1253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1251_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
v___x_1254_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1253_);
lean_ctor_set(v___x_1254_, 1, v___x_1238_);
v___x_1255_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__7, &l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg___closed__7);
v___x_1256_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_alertMessage_1234_, v___x_1241_);
v___x_1257_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1255_);
lean_ctor_set(v___x_1257_, 1, v___x_1256_);
v___x_1258_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
lean_ctor_set_uint8(v___x_1258_, sizeof(void*)*1, v___x_1245_);
v___x_1259_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1254_);
lean_ctor_set(v___x_1259_, 1, v___x_1258_);
v___x_1260_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_1261_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_1262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
lean_ctor_set(v___x_1262_, 1, v___x_1259_);
v___x_1263_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_1264_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1262_);
lean_ctor_set(v___x_1264_, 1, v___x_1263_);
v___x_1265_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1260_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
lean_ctor_set_uint8(v___x_1266_, sizeof(void*)*1, v___x_1245_);
return v___x_1266_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr(lean_object* v_x_1269_, lean_object* v_prec_1270_){
_start:
{
lean_object* v___x_1271_; 
v___x_1271_ = l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg(v_x_1269_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___boxed(lean_object* v_x_1272_, lean_object* v_prec_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr(v_x_1272_, v_prec_1273_);
lean_dec(v_prec_1273_);
return v_res_1274_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(lean_object* v_x_1281_, lean_object* v_x_1282_){
_start:
{
if (lean_obj_tag(v_x_1281_) == 0)
{
if (lean_obj_tag(v_x_1282_) == 0)
{
uint8_t v___x_1283_; 
v___x_1283_ = 1;
return v___x_1283_;
}
else
{
uint8_t v___x_1284_; 
v___x_1284_ = 0;
return v___x_1284_;
}
}
else
{
if (lean_obj_tag(v_x_1282_) == 0)
{
uint8_t v___x_1285_; 
v___x_1285_ = 0;
return v___x_1285_;
}
else
{
lean_object* v_val_1286_; lean_object* v_val_1287_; uint32_t v___x_1288_; uint32_t v___x_1289_; uint8_t v___x_1290_; 
v_val_1286_ = lean_ctor_get(v_x_1281_, 0);
v_val_1287_ = lean_ctor_get(v_x_1282_, 0);
v___x_1288_ = lean_unbox_uint32(v_val_1286_);
v___x_1289_ = lean_unbox_uint32(v_val_1287_);
v___x_1290_ = lean_uint32_dec_eq(v___x_1288_, v___x_1289_);
return v___x_1290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0___boxed(lean_object* v_x_1291_, lean_object* v_x_1292_){
_start:
{
uint8_t v_res_1293_; lean_object* v_r_1294_; 
v_res_1293_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(v_x_1291_, v_x_1292_);
lean_dec(v_x_1292_);
lean_dec(v_x_1291_);
v_r_1294_ = lean_box(v_res_1293_);
return v_r_1294_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(lean_object* v_x_1295_, lean_object* v_x_1296_){
_start:
{
lean_object* v_fieldName_1297_; lean_object* v_fieldSize_1298_; lean_object* v_fieldName_1299_; lean_object* v_fieldSize_1300_; uint8_t v___x_1301_; 
v_fieldName_1297_ = lean_ctor_get(v_x_1295_, 0);
v_fieldSize_1298_ = lean_ctor_get(v_x_1295_, 1);
v_fieldName_1299_ = lean_ctor_get(v_x_1296_, 0);
v_fieldSize_1300_ = lean_ctor_get(v_x_1296_, 1);
v___x_1301_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_fieldName_1297_, v_fieldName_1299_);
if (v___x_1301_ == 0)
{
return v___x_1301_;
}
else
{
uint8_t v___x_1302_; 
v___x_1302_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(v_fieldSize_1298_, v_fieldSize_1300_);
return v___x_1302_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq___boxed(lean_object* v_x_1303_, lean_object* v_x_1304_){
_start:
{
uint8_t v_res_1305_; lean_object* v_r_1306_; 
v_res_1305_ = l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(v_x_1303_, v_x_1304_);
lean_dec_ref(v_x_1304_);
lean_dec_ref(v_x_1303_);
v_r_1306_ = lean_box(v_res_1305_);
return v_r_1306_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(lean_object* v_x_1309_, lean_object* v_x_1310_){
_start:
{
if (lean_obj_tag(v_x_1309_) == 0)
{
lean_object* v___x_1311_; 
v___x_1311_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1));
return v___x_1311_;
}
else
{
lean_object* v_val_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1325_; 
v_val_1312_ = lean_ctor_get(v_x_1309_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v_x_1309_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1314_ = v_x_1309_;
v_isShared_1315_ = v_isSharedCheck_1325_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_val_1312_);
lean_dec(v_x_1309_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1325_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1316_; uint32_t v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1321_; 
v___x_1316_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3));
v___x_1317_ = lean_unbox_uint32(v_val_1312_);
lean_dec(v_val_1312_);
v___x_1318_ = lean_uint32_to_nat(v___x_1317_);
v___x_1319_ = l_Nat_reprFast(v___x_1318_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 3);
lean_ctor_set(v___x_1314_, 0, v___x_1319_);
v___x_1321_ = v___x_1314_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___x_1319_);
v___x_1321_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1316_);
lean_ctor_set(v___x_1322_, 1, v___x_1321_);
v___x_1323_ = l_Repr_addAppParen(v___x_1322_, v_x_1310_);
return v___x_1323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0___boxed(lean_object* v_x_1326_, lean_object* v_x_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(v_x_1326_, v_x_1327_);
lean_dec(v_x_1327_);
return v_res_1328_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1338_ = lean_unsigned_to_nat(13u);
v___x_1339_ = lean_nat_to_int(v___x_1338_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(lean_object* v_x_1343_){
_start:
{
lean_object* v_fieldName_1344_; lean_object* v_fieldSize_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1378_; 
v_fieldName_1344_ = lean_ctor_get(v_x_1343_, 0);
v_fieldSize_1345_ = lean_ctor_get(v_x_1343_, 1);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_x_1343_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1347_ = v_x_1343_;
v_isShared_1348_ = v_isSharedCheck_1378_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_fieldSize_1345_);
lean_inc(v_fieldName_1344_);
lean_dec(v_x_1343_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1378_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1349_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__5));
v___x_1350_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__3));
v___x_1351_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__4, &l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__4_once, _init_l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__4);
v___x_1352_ = lean_unsigned_to_nat(0u);
v___x_1353_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_fieldName_1344_, v___x_1352_);
if (v_isShared_1348_ == 0)
{
lean_ctor_set_tag(v___x_1347_, 4);
lean_ctor_set(v___x_1347_, 1, v___x_1353_);
lean_ctor_set(v___x_1347_, 0, v___x_1351_);
v___x_1355_ = v___x_1347_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1351_);
lean_ctor_set(v_reuseFailAlloc_1377_, 1, v___x_1353_);
v___x_1355_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
uint8_t v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1356_ = 0;
v___x_1357_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1357_, 0, v___x_1355_);
lean_ctor_set_uint8(v___x_1357_, sizeof(void*)*1, v___x_1356_);
v___x_1358_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1350_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg___closed__6));
v___x_1360_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1358_);
lean_ctor_set(v___x_1360_, 1, v___x_1359_);
v___x_1361_ = lean_box(1);
v___x_1362_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1360_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
v___x_1363_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg___closed__6));
v___x_1364_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1362_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
v___x_1365_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1364_);
lean_ctor_set(v___x_1365_, 1, v___x_1349_);
v___x_1366_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(v_fieldSize_1345_, v___x_1352_);
v___x_1367_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1351_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
v___x_1368_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
lean_ctor_set_uint8(v___x_1368_, sizeof(void*)*1, v___x_1356_);
v___x_1369_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1365_);
lean_ctor_set(v___x_1369_, 1, v___x_1368_);
v___x_1370_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10, &l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__10);
v___x_1371_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__11));
v___x_1372_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1371_);
lean_ctor_set(v___x_1372_, 1, v___x_1369_);
v___x_1373_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprFields_repr___redArg___closed__12));
v___x_1374_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1372_);
lean_ctor_set(v___x_1374_, 1, v___x_1373_);
v___x_1375_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1370_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
v___x_1376_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1376_, 0, v___x_1375_);
lean_ctor_set_uint8(v___x_1376_, sizeof(void*)*1, v___x_1356_);
return v___x_1376_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr(lean_object* v_x_1379_, lean_object* v_prec_1380_){
_start:
{
lean_object* v___x_1381_; 
v___x_1381_ = l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(v_x_1379_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___boxed(lean_object* v_x_1382_, lean_object* v_prec_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr(v_x_1382_, v_prec_1383_);
lean_dec(v_prec_1383_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorIdx(lean_object* v_x_1387_){
_start:
{
switch(lean_obj_tag(v_x_1387_))
{
case 0:
{
lean_object* v___x_1388_; 
v___x_1388_ = lean_unsigned_to_nat(0u);
return v___x_1388_;
}
case 1:
{
lean_object* v___x_1389_; 
v___x_1389_ = lean_unsigned_to_nat(1u);
return v___x_1389_;
}
case 2:
{
lean_object* v___x_1390_; 
v___x_1390_ = lean_unsigned_to_nat(2u);
return v___x_1390_;
}
case 3:
{
lean_object* v___x_1391_; 
v___x_1391_ = lean_unsigned_to_nat(3u);
return v___x_1391_;
}
case 4:
{
lean_object* v___x_1392_; 
v___x_1392_ = lean_unsigned_to_nat(4u);
return v___x_1392_;
}
case 5:
{
lean_object* v___x_1393_; 
v___x_1393_ = lean_unsigned_to_nat(5u);
return v___x_1393_;
}
case 6:
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_unsigned_to_nat(6u);
return v___x_1394_;
}
case 7:
{
lean_object* v___x_1395_; 
v___x_1395_ = lean_unsigned_to_nat(7u);
return v___x_1395_;
}
case 8:
{
lean_object* v___x_1396_; 
v___x_1396_ = lean_unsigned_to_nat(8u);
return v___x_1396_;
}
case 9:
{
lean_object* v___x_1397_; 
v___x_1397_ = lean_unsigned_to_nat(9u);
return v___x_1397_;
}
case 10:
{
lean_object* v___x_1398_; 
v___x_1398_ = lean_unsigned_to_nat(10u);
return v___x_1398_;
}
case 11:
{
lean_object* v___x_1399_; 
v___x_1399_ = lean_unsigned_to_nat(11u);
return v___x_1399_;
}
case 12:
{
lean_object* v___x_1400_; 
v___x_1400_ = lean_unsigned_to_nat(12u);
return v___x_1400_;
}
case 13:
{
lean_object* v___x_1401_; 
v___x_1401_ = lean_unsigned_to_nat(13u);
return v___x_1401_;
}
case 14:
{
lean_object* v___x_1402_; 
v___x_1402_ = lean_unsigned_to_nat(14u);
return v___x_1402_;
}
case 15:
{
lean_object* v___x_1403_; 
v___x_1403_ = lean_unsigned_to_nat(15u);
return v___x_1403_;
}
case 16:
{
lean_object* v___x_1404_; 
v___x_1404_ = lean_unsigned_to_nat(16u);
return v___x_1404_;
}
case 17:
{
lean_object* v___x_1405_; 
v___x_1405_ = lean_unsigned_to_nat(17u);
return v___x_1405_;
}
case 18:
{
lean_object* v___x_1406_; 
v___x_1406_ = lean_unsigned_to_nat(18u);
return v___x_1406_;
}
case 19:
{
lean_object* v___x_1407_; 
v___x_1407_ = lean_unsigned_to_nat(19u);
return v___x_1407_;
}
case 20:
{
lean_object* v___x_1408_; 
v___x_1408_ = lean_unsigned_to_nat(20u);
return v___x_1408_;
}
case 21:
{
lean_object* v___x_1409_; 
v___x_1409_ = lean_unsigned_to_nat(21u);
return v___x_1409_;
}
case 22:
{
lean_object* v___x_1410_; 
v___x_1410_ = lean_unsigned_to_nat(22u);
return v___x_1410_;
}
case 23:
{
lean_object* v___x_1411_; 
v___x_1411_ = lean_unsigned_to_nat(23u);
return v___x_1411_;
}
case 24:
{
lean_object* v___x_1412_; 
v___x_1412_ = lean_unsigned_to_nat(24u);
return v___x_1412_;
}
case 25:
{
lean_object* v___x_1413_; 
v___x_1413_ = lean_unsigned_to_nat(25u);
return v___x_1413_;
}
case 26:
{
lean_object* v___x_1414_; 
v___x_1414_ = lean_unsigned_to_nat(26u);
return v___x_1414_;
}
case 27:
{
lean_object* v___x_1415_; 
v___x_1415_ = lean_unsigned_to_nat(27u);
return v___x_1415_;
}
case 28:
{
lean_object* v___x_1416_; 
v___x_1416_ = lean_unsigned_to_nat(28u);
return v___x_1416_;
}
case 29:
{
lean_object* v___x_1417_; 
v___x_1417_ = lean_unsigned_to_nat(29u);
return v___x_1417_;
}
case 30:
{
lean_object* v___x_1418_; 
v___x_1418_ = lean_unsigned_to_nat(30u);
return v___x_1418_;
}
case 31:
{
lean_object* v___x_1419_; 
v___x_1419_ = lean_unsigned_to_nat(31u);
return v___x_1419_;
}
case 32:
{
lean_object* v___x_1420_; 
v___x_1420_ = lean_unsigned_to_nat(32u);
return v___x_1420_;
}
case 33:
{
lean_object* v___x_1421_; 
v___x_1421_ = lean_unsigned_to_nat(33u);
return v___x_1421_;
}
case 34:
{
lean_object* v___x_1422_; 
v___x_1422_ = lean_unsigned_to_nat(34u);
return v___x_1422_;
}
case 35:
{
lean_object* v___x_1423_; 
v___x_1423_ = lean_unsigned_to_nat(35u);
return v___x_1423_;
}
case 36:
{
lean_object* v___x_1424_; 
v___x_1424_ = lean_unsigned_to_nat(36u);
return v___x_1424_;
}
case 37:
{
lean_object* v___x_1425_; 
v___x_1425_ = lean_unsigned_to_nat(37u);
return v___x_1425_;
}
default: 
{
lean_object* v___x_1426_; 
v___x_1426_ = lean_unsigned_to_nat(38u);
return v___x_1426_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorIdx___boxed(lean_object* v_x_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorIdx(v_x_1427_);
lean_dec(v_x_1427_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(lean_object* v_t_1429_, lean_object* v_k_1430_){
_start:
{
switch(lean_obj_tag(v_t_1429_))
{
case 1:
{
lean_object* v_payload_1431_; lean_object* v___x_1432_; 
v_payload_1431_ = lean_ctor_get(v_t_1429_, 0);
lean_inc_ref(v_payload_1431_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1432_ = lean_apply_1(v_k_1430_, v_payload_1431_);
return v___x_1432_;
}
case 14:
{
lean_object* v_payload_1433_; lean_object* v___x_1434_; 
v_payload_1433_ = lean_ctor_get(v_t_1429_, 0);
lean_inc_ref(v_payload_1433_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1434_ = lean_apply_1(v_k_1430_, v_payload_1433_);
return v___x_1434_;
}
case 17:
{
lean_object* v_payload_1435_; lean_object* v___x_1436_; 
v_payload_1435_ = lean_ctor_get(v_t_1429_, 0);
lean_inc(v_payload_1435_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1436_ = lean_apply_1(v_k_1430_, v_payload_1435_);
return v___x_1436_;
}
case 21:
{
lean_object* v_payload_1437_; lean_object* v___x_1438_; 
v_payload_1437_ = lean_ctor_get(v_t_1429_, 0);
lean_inc(v_payload_1437_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1438_ = lean_apply_1(v_k_1430_, v_payload_1437_);
return v___x_1438_;
}
case 22:
{
lean_object* v_payload_1439_; lean_object* v___x_1440_; 
v_payload_1439_ = lean_ctor_get(v_t_1429_, 0);
lean_inc(v_payload_1439_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1440_ = lean_apply_1(v_k_1430_, v_payload_1439_);
return v___x_1440_;
}
case 23:
{
lean_object* v_payload_1441_; lean_object* v___x_1442_; 
v_payload_1441_ = lean_ctor_get(v_t_1429_, 0);
lean_inc(v_payload_1441_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1442_ = lean_apply_1(v_k_1430_, v_payload_1441_);
return v___x_1442_;
}
case 24:
{
lean_object* v_payload_1443_; lean_object* v___x_1444_; 
v_payload_1443_ = lean_ctor_get(v_t_1429_, 0);
lean_inc_ref(v_payload_1443_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1444_ = lean_apply_1(v_k_1430_, v_payload_1443_);
return v___x_1444_;
}
case 26:
{
lean_object* v_payload_1445_; lean_object* v___x_1446_; 
v_payload_1445_ = lean_ctor_get(v_t_1429_, 0);
lean_inc(v_payload_1445_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1446_ = lean_apply_1(v_k_1430_, v_payload_1445_);
return v___x_1446_;
}
case 27:
{
lean_object* v_payload_1447_; lean_object* v___x_1448_; 
v_payload_1447_ = lean_ctor_get(v_t_1429_, 0);
lean_inc_ref(v_payload_1447_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1448_ = lean_apply_1(v_k_1430_, v_payload_1447_);
return v___x_1448_;
}
case 28:
{
lean_object* v_payload_1449_; lean_object* v___x_1450_; 
v_payload_1449_ = lean_ctor_get(v_t_1429_, 0);
lean_inc(v_payload_1449_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1450_ = lean_apply_1(v_k_1430_, v_payload_1449_);
return v___x_1450_;
}
case 29:
{
lean_object* v_payload_1451_; lean_object* v___x_1452_; 
v_payload_1451_ = lean_ctor_get(v_t_1429_, 0);
lean_inc(v_payload_1451_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1452_ = lean_apply_1(v_k_1430_, v_payload_1451_);
return v___x_1452_;
}
case 30:
{
lean_object* v_payload_1453_; lean_object* v___x_1454_; 
v_payload_1453_ = lean_ctor_get(v_t_1429_, 0);
lean_inc_ref(v_payload_1453_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1454_ = lean_apply_1(v_k_1430_, v_payload_1453_);
return v___x_1454_;
}
case 31:
{
lean_object* v_payload_1455_; lean_object* v___x_1456_; 
v_payload_1455_ = lean_ctor_get(v_t_1429_, 0);
lean_inc(v_payload_1455_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1456_ = lean_apply_1(v_k_1430_, v_payload_1455_);
return v___x_1456_;
}
case 32:
{
lean_object* v_payload_1457_; lean_object* v___x_1458_; 
v_payload_1457_ = lean_ctor_get(v_t_1429_, 0);
lean_inc(v_payload_1457_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1458_ = lean_apply_1(v_k_1430_, v_payload_1457_);
return v___x_1458_;
}
case 38:
{
lean_object* v_payload_1459_; lean_object* v___x_1460_; 
v_payload_1459_ = lean_ctor_get(v_t_1429_, 0);
lean_inc(v_payload_1459_);
lean_dec_ref_known(v_t_1429_, 1);
v___x_1460_ = lean_apply_1(v_k_1430_, v_payload_1459_);
return v___x_1460_;
}
default: 
{
lean_dec(v_t_1429_);
return v_k_1430_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorElim(lean_object* v_motive_1461_, lean_object* v_ctorIdx_1462_, lean_object* v_t_1463_, lean_object* v_h_1464_, lean_object* v_k_1465_){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1463_, v_k_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___boxed(lean_object* v_motive_1467_, lean_object* v_ctorIdx_1468_, lean_object* v_t_1469_, lean_object* v_h_1470_, lean_object* v_k_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim(v_motive_1467_, v_ctorIdx_1468_, v_t_1469_, v_h_1470_, v_k_1471_);
lean_dec(v_ctorIdx_1468_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_dnsTimeout_elim___redArg(lean_object* v_t_1473_, lean_object* v_dnsTimeout_1474_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1473_, v_dnsTimeout_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_dnsTimeout_elim(lean_object* v_motive_1476_, lean_object* v_t_1477_, lean_object* v_h_1478_, lean_object* v_dnsTimeout_1479_){
_start:
{
lean_object* v___x_1480_; 
v___x_1480_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1477_, v_dnsTimeout_1479_);
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_dnsError_elim___redArg(lean_object* v_t_1481_, lean_object* v_dnsError_1482_){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1481_, v_dnsError_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_dnsError_elim(lean_object* v_motive_1484_, lean_object* v_t_1485_, lean_object* v_h_1486_, lean_object* v_dnsError_1487_){
_start:
{
lean_object* v___x_1488_; 
v___x_1488_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1485_, v_dnsError_1487_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationNotFound_elim___redArg(lean_object* v_t_1489_, lean_object* v_destinationNotFound_1490_){
_start:
{
lean_object* v___x_1491_; 
v___x_1491_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1489_, v_destinationNotFound_1490_);
return v___x_1491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationNotFound_elim(lean_object* v_motive_1492_, lean_object* v_t_1493_, lean_object* v_h_1494_, lean_object* v_destinationNotFound_1495_){
_start:
{
lean_object* v___x_1496_; 
v___x_1496_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1493_, v_destinationNotFound_1495_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationUnavailable_elim___redArg(lean_object* v_t_1497_, lean_object* v_destinationUnavailable_1498_){
_start:
{
lean_object* v___x_1499_; 
v___x_1499_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1497_, v_destinationUnavailable_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationUnavailable_elim(lean_object* v_motive_1500_, lean_object* v_t_1501_, lean_object* v_h_1502_, lean_object* v_destinationUnavailable_1503_){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1501_, v_destinationUnavailable_1503_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationIpProhibited_elim___redArg(lean_object* v_t_1505_, lean_object* v_destinationIpProhibited_1506_){
_start:
{
lean_object* v___x_1507_; 
v___x_1507_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1505_, v_destinationIpProhibited_1506_);
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationIpProhibited_elim(lean_object* v_motive_1508_, lean_object* v_t_1509_, lean_object* v_h_1510_, lean_object* v_destinationIpProhibited_1511_){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1509_, v_destinationIpProhibited_1511_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationIpUnroutable_elim___redArg(lean_object* v_t_1513_, lean_object* v_destinationIpUnroutable_1514_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1513_, v_destinationIpUnroutable_1514_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_destinationIpUnroutable_elim(lean_object* v_motive_1516_, lean_object* v_t_1517_, lean_object* v_h_1518_, lean_object* v_destinationIpUnroutable_1519_){
_start:
{
lean_object* v___x_1520_; 
v___x_1520_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1517_, v_destinationIpUnroutable_1519_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionRefused_elim___redArg(lean_object* v_t_1521_, lean_object* v_connectionRefused_1522_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1521_, v_connectionRefused_1522_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionRefused_elim(lean_object* v_motive_1524_, lean_object* v_t_1525_, lean_object* v_h_1526_, lean_object* v_connectionRefused_1527_){
_start:
{
lean_object* v___x_1528_; 
v___x_1528_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1525_, v_connectionRefused_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionTerminated_elim___redArg(lean_object* v_t_1529_, lean_object* v_connectionTerminated_1530_){
_start:
{
lean_object* v___x_1531_; 
v___x_1531_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1529_, v_connectionTerminated_1530_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionTerminated_elim(lean_object* v_motive_1532_, lean_object* v_t_1533_, lean_object* v_h_1534_, lean_object* v_connectionTerminated_1535_){
_start:
{
lean_object* v___x_1536_; 
v___x_1536_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1533_, v_connectionTerminated_1535_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionTimeout_elim___redArg(lean_object* v_t_1537_, lean_object* v_connectionTimeout_1538_){
_start:
{
lean_object* v___x_1539_; 
v___x_1539_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1537_, v_connectionTimeout_1538_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionTimeout_elim(lean_object* v_motive_1540_, lean_object* v_t_1541_, lean_object* v_h_1542_, lean_object* v_connectionTimeout_1543_){
_start:
{
lean_object* v___x_1544_; 
v___x_1544_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1541_, v_connectionTimeout_1543_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionReadTimeout_elim___redArg(lean_object* v_t_1545_, lean_object* v_connectionReadTimeout_1546_){
_start:
{
lean_object* v___x_1547_; 
v___x_1547_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1545_, v_connectionReadTimeout_1546_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionReadTimeout_elim(lean_object* v_motive_1548_, lean_object* v_t_1549_, lean_object* v_h_1550_, lean_object* v_connectionReadTimeout_1551_){
_start:
{
lean_object* v___x_1552_; 
v___x_1552_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1549_, v_connectionReadTimeout_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionWriteTimeout_elim___redArg(lean_object* v_t_1553_, lean_object* v_connectionWriteTimeout_1554_){
_start:
{
lean_object* v___x_1555_; 
v___x_1555_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1553_, v_connectionWriteTimeout_1554_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionWriteTimeout_elim(lean_object* v_motive_1556_, lean_object* v_t_1557_, lean_object* v_h_1558_, lean_object* v_connectionWriteTimeout_1559_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1557_, v_connectionWriteTimeout_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionLimitReached_elim___redArg(lean_object* v_t_1561_, lean_object* v_connectionLimitReached_1562_){
_start:
{
lean_object* v___x_1563_; 
v___x_1563_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1561_, v_connectionLimitReached_1562_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_connectionLimitReached_elim(lean_object* v_motive_1564_, lean_object* v_t_1565_, lean_object* v_h_1566_, lean_object* v_connectionLimitReached_1567_){
_start:
{
lean_object* v___x_1568_; 
v___x_1568_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1565_, v_connectionLimitReached_1567_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsProtocolError_elim___redArg(lean_object* v_t_1569_, lean_object* v_tlsProtocolError_1570_){
_start:
{
lean_object* v___x_1571_; 
v___x_1571_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1569_, v_tlsProtocolError_1570_);
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsProtocolError_elim(lean_object* v_motive_1572_, lean_object* v_t_1573_, lean_object* v_h_1574_, lean_object* v_tlsProtocolError_1575_){
_start:
{
lean_object* v___x_1576_; 
v___x_1576_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1573_, v_tlsProtocolError_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsCertificateError_elim___redArg(lean_object* v_t_1577_, lean_object* v_tlsCertificateError_1578_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1577_, v_tlsCertificateError_1578_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsCertificateError_elim(lean_object* v_motive_1580_, lean_object* v_t_1581_, lean_object* v_h_1582_, lean_object* v_tlsCertificateError_1583_){
_start:
{
lean_object* v___x_1584_; 
v___x_1584_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1581_, v_tlsCertificateError_1583_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsAlertReceived_elim___redArg(lean_object* v_t_1585_, lean_object* v_tlsAlertReceived_1586_){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1585_, v_tlsAlertReceived_1586_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_tlsAlertReceived_elim(lean_object* v_motive_1588_, lean_object* v_t_1589_, lean_object* v_h_1590_, lean_object* v_tlsAlertReceived_1591_){
_start:
{
lean_object* v___x_1592_; 
v___x_1592_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1589_, v_tlsAlertReceived_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestDenied_elim___redArg(lean_object* v_t_1593_, lean_object* v_httpRequestDenied_1594_){
_start:
{
lean_object* v___x_1595_; 
v___x_1595_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1593_, v_httpRequestDenied_1594_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestDenied_elim(lean_object* v_motive_1596_, lean_object* v_t_1597_, lean_object* v_h_1598_, lean_object* v_httpRequestDenied_1599_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1597_, v_httpRequestDenied_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestLengthRequired_elim___redArg(lean_object* v_t_1601_, lean_object* v_httpRequestLengthRequired_1602_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1601_, v_httpRequestLengthRequired_1602_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestLengthRequired_elim(lean_object* v_motive_1604_, lean_object* v_t_1605_, lean_object* v_h_1606_, lean_object* v_httpRequestLengthRequired_1607_){
_start:
{
lean_object* v___x_1608_; 
v___x_1608_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1605_, v_httpRequestLengthRequired_1607_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestBodySize_elim___redArg(lean_object* v_t_1609_, lean_object* v_httpRequestBodySize_1610_){
_start:
{
lean_object* v___x_1611_; 
v___x_1611_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1609_, v_httpRequestBodySize_1610_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestBodySize_elim(lean_object* v_motive_1612_, lean_object* v_t_1613_, lean_object* v_h_1614_, lean_object* v_httpRequestBodySize_1615_){
_start:
{
lean_object* v___x_1616_; 
v___x_1616_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1613_, v_httpRequestBodySize_1615_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestMethodInvalid_elim___redArg(lean_object* v_t_1617_, lean_object* v_httpRequestMethodInvalid_1618_){
_start:
{
lean_object* v___x_1619_; 
v___x_1619_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1617_, v_httpRequestMethodInvalid_1618_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestMethodInvalid_elim(lean_object* v_motive_1620_, lean_object* v_t_1621_, lean_object* v_h_1622_, lean_object* v_httpRequestMethodInvalid_1623_){
_start:
{
lean_object* v___x_1624_; 
v___x_1624_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1621_, v_httpRequestMethodInvalid_1623_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestUriInvalid_elim___redArg(lean_object* v_t_1625_, lean_object* v_httpRequestUriInvalid_1626_){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1625_, v_httpRequestUriInvalid_1626_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestUriInvalid_elim(lean_object* v_motive_1628_, lean_object* v_t_1629_, lean_object* v_h_1630_, lean_object* v_httpRequestUriInvalid_1631_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1629_, v_httpRequestUriInvalid_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestUriTooLong_elim___redArg(lean_object* v_t_1633_, lean_object* v_httpRequestUriTooLong_1634_){
_start:
{
lean_object* v___x_1635_; 
v___x_1635_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1633_, v_httpRequestUriTooLong_1634_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestUriTooLong_elim(lean_object* v_motive_1636_, lean_object* v_t_1637_, lean_object* v_h_1638_, lean_object* v_httpRequestUriTooLong_1639_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1637_, v_httpRequestUriTooLong_1639_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestHeaderSectionSize_elim___redArg(lean_object* v_t_1641_, lean_object* v_httpRequestHeaderSectionSize_1642_){
_start:
{
lean_object* v___x_1643_; 
v___x_1643_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1641_, v_httpRequestHeaderSectionSize_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestHeaderSectionSize_elim(lean_object* v_motive_1644_, lean_object* v_t_1645_, lean_object* v_h_1646_, lean_object* v_httpRequestHeaderSectionSize_1647_){
_start:
{
lean_object* v___x_1648_; 
v___x_1648_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1645_, v_httpRequestHeaderSectionSize_1647_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestHeaderSize_elim___redArg(lean_object* v_t_1649_, lean_object* v_httpRequestHeaderSize_1650_){
_start:
{
lean_object* v___x_1651_; 
v___x_1651_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1649_, v_httpRequestHeaderSize_1650_);
return v___x_1651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestHeaderSize_elim(lean_object* v_motive_1652_, lean_object* v_t_1653_, lean_object* v_h_1654_, lean_object* v_httpRequestHeaderSize_1655_){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1653_, v_httpRequestHeaderSize_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestTrailerSectionSize_elim___redArg(lean_object* v_t_1657_, lean_object* v_httpRequestTrailerSectionSize_1658_){
_start:
{
lean_object* v___x_1659_; 
v___x_1659_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1657_, v_httpRequestTrailerSectionSize_1658_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestTrailerSectionSize_elim(lean_object* v_motive_1660_, lean_object* v_t_1661_, lean_object* v_h_1662_, lean_object* v_httpRequestTrailerSectionSize_1663_){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1661_, v_httpRequestTrailerSectionSize_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestTrailerSize_elim___redArg(lean_object* v_t_1665_, lean_object* v_httpRequestTrailerSize_1666_){
_start:
{
lean_object* v___x_1667_; 
v___x_1667_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1665_, v_httpRequestTrailerSize_1666_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpRequestTrailerSize_elim(lean_object* v_motive_1668_, lean_object* v_t_1669_, lean_object* v_h_1670_, lean_object* v_httpRequestTrailerSize_1671_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1669_, v_httpRequestTrailerSize_1671_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseIncomplete_elim___redArg(lean_object* v_t_1673_, lean_object* v_httpResponseIncomplete_1674_){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1673_, v_httpResponseIncomplete_1674_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseIncomplete_elim(lean_object* v_motive_1676_, lean_object* v_t_1677_, lean_object* v_h_1678_, lean_object* v_httpResponseIncomplete_1679_){
_start:
{
lean_object* v___x_1680_; 
v___x_1680_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1677_, v_httpResponseIncomplete_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseHeaderSectionSize_elim___redArg(lean_object* v_t_1681_, lean_object* v_httpResponseHeaderSectionSize_1682_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1681_, v_httpResponseHeaderSectionSize_1682_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseHeaderSectionSize_elim(lean_object* v_motive_1684_, lean_object* v_t_1685_, lean_object* v_h_1686_, lean_object* v_httpResponseHeaderSectionSize_1687_){
_start:
{
lean_object* v___x_1688_; 
v___x_1688_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1685_, v_httpResponseHeaderSectionSize_1687_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseHeaderSize_elim___redArg(lean_object* v_t_1689_, lean_object* v_httpResponseHeaderSize_1690_){
_start:
{
lean_object* v___x_1691_; 
v___x_1691_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1689_, v_httpResponseHeaderSize_1690_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseHeaderSize_elim(lean_object* v_motive_1692_, lean_object* v_t_1693_, lean_object* v_h_1694_, lean_object* v_httpResponseHeaderSize_1695_){
_start:
{
lean_object* v___x_1696_; 
v___x_1696_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1693_, v_httpResponseHeaderSize_1695_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseBodySize_elim___redArg(lean_object* v_t_1697_, lean_object* v_httpResponseBodySize_1698_){
_start:
{
lean_object* v___x_1699_; 
v___x_1699_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1697_, v_httpResponseBodySize_1698_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseBodySize_elim(lean_object* v_motive_1700_, lean_object* v_t_1701_, lean_object* v_h_1702_, lean_object* v_httpResponseBodySize_1703_){
_start:
{
lean_object* v___x_1704_; 
v___x_1704_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1701_, v_httpResponseBodySize_1703_);
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTrailerSectionSize_elim___redArg(lean_object* v_t_1705_, lean_object* v_httpResponseTrailerSectionSize_1706_){
_start:
{
lean_object* v___x_1707_; 
v___x_1707_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1705_, v_httpResponseTrailerSectionSize_1706_);
return v___x_1707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTrailerSectionSize_elim(lean_object* v_motive_1708_, lean_object* v_t_1709_, lean_object* v_h_1710_, lean_object* v_httpResponseTrailerSectionSize_1711_){
_start:
{
lean_object* v___x_1712_; 
v___x_1712_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1709_, v_httpResponseTrailerSectionSize_1711_);
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTrailerSize_elim___redArg(lean_object* v_t_1713_, lean_object* v_httpResponseTrailerSize_1714_){
_start:
{
lean_object* v___x_1715_; 
v___x_1715_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1713_, v_httpResponseTrailerSize_1714_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTrailerSize_elim(lean_object* v_motive_1716_, lean_object* v_t_1717_, lean_object* v_h_1718_, lean_object* v_httpResponseTrailerSize_1719_){
_start:
{
lean_object* v___x_1720_; 
v___x_1720_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1717_, v_httpResponseTrailerSize_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTransferCoding_elim___redArg(lean_object* v_t_1721_, lean_object* v_httpResponseTransferCoding_1722_){
_start:
{
lean_object* v___x_1723_; 
v___x_1723_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1721_, v_httpResponseTransferCoding_1722_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTransferCoding_elim(lean_object* v_motive_1724_, lean_object* v_t_1725_, lean_object* v_h_1726_, lean_object* v_httpResponseTransferCoding_1727_){
_start:
{
lean_object* v___x_1728_; 
v___x_1728_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1725_, v_httpResponseTransferCoding_1727_);
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseContentCoding_elim___redArg(lean_object* v_t_1729_, lean_object* v_httpResponseContentCoding_1730_){
_start:
{
lean_object* v___x_1731_; 
v___x_1731_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1729_, v_httpResponseContentCoding_1730_);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseContentCoding_elim(lean_object* v_motive_1732_, lean_object* v_t_1733_, lean_object* v_h_1734_, lean_object* v_httpResponseContentCoding_1735_){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1733_, v_httpResponseContentCoding_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTimeout_elim___redArg(lean_object* v_t_1737_, lean_object* v_httpResponseTimeout_1738_){
_start:
{
lean_object* v___x_1739_; 
v___x_1739_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1737_, v_httpResponseTimeout_1738_);
return v___x_1739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpResponseTimeout_elim(lean_object* v_motive_1740_, lean_object* v_t_1741_, lean_object* v_h_1742_, lean_object* v_httpResponseTimeout_1743_){
_start:
{
lean_object* v___x_1744_; 
v___x_1744_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1741_, v_httpResponseTimeout_1743_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpUpgradeFailed_elim___redArg(lean_object* v_t_1745_, lean_object* v_httpUpgradeFailed_1746_){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1745_, v_httpUpgradeFailed_1746_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpUpgradeFailed_elim(lean_object* v_motive_1748_, lean_object* v_t_1749_, lean_object* v_h_1750_, lean_object* v_httpUpgradeFailed_1751_){
_start:
{
lean_object* v___x_1752_; 
v___x_1752_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1749_, v_httpUpgradeFailed_1751_);
return v___x_1752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpProtocolError_elim___redArg(lean_object* v_t_1753_, lean_object* v_httpProtocolError_1754_){
_start:
{
lean_object* v___x_1755_; 
v___x_1755_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1753_, v_httpProtocolError_1754_);
return v___x_1755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_httpProtocolError_elim(lean_object* v_motive_1756_, lean_object* v_t_1757_, lean_object* v_h_1758_, lean_object* v_httpProtocolError_1759_){
_start:
{
lean_object* v___x_1760_; 
v___x_1760_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1757_, v_httpProtocolError_1759_);
return v___x_1760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_loopDetected_elim___redArg(lean_object* v_t_1761_, lean_object* v_loopDetected_1762_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1761_, v_loopDetected_1762_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_loopDetected_elim(lean_object* v_motive_1764_, lean_object* v_t_1765_, lean_object* v_h_1766_, lean_object* v_loopDetected_1767_){
_start:
{
lean_object* v___x_1768_; 
v___x_1768_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1765_, v_loopDetected_1767_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_configurationError_elim___redArg(lean_object* v_t_1769_, lean_object* v_configurationError_1770_){
_start:
{
lean_object* v___x_1771_; 
v___x_1771_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1769_, v_configurationError_1770_);
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_configurationError_elim(lean_object* v_motive_1772_, lean_object* v_t_1773_, lean_object* v_h_1774_, lean_object* v_configurationError_1775_){
_start:
{
lean_object* v___x_1776_; 
v___x_1776_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1773_, v_configurationError_1775_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_internalError_elim___redArg(lean_object* v_t_1777_, lean_object* v_internalError_1778_){
_start:
{
lean_object* v___x_1779_; 
v___x_1779_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1777_, v_internalError_1778_);
return v___x_1779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ErrorCode_internalError_elim(lean_object* v_motive_1780_, lean_object* v_t_1781_, lean_object* v_h_1782_, lean_object* v_internalError_1783_){
_start:
{
lean_object* v___x_1784_; 
v___x_1784_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorElim___redArg(v_t_1781_, v_internalError_1783_);
return v___x_1784_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instInhabitedErrorCode_default(void){
_start:
{
lean_object* v___x_1785_; 
v___x_1785_ = lean_box(0);
return v___x_1785_;
}
}
static lean_object* _init_l_Lasm_WASI_Http_Types_instInhabitedErrorCode(void){
_start:
{
lean_object* v___x_1786_; 
v___x_1786_ = lean_box(0);
return v___x_1786_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0(lean_object* v_x_1787_, lean_object* v_x_1788_){
_start:
{
if (lean_obj_tag(v_x_1787_) == 0)
{
if (lean_obj_tag(v_x_1788_) == 0)
{
uint8_t v___x_1789_; 
v___x_1789_ = 1;
return v___x_1789_;
}
else
{
uint8_t v___x_1790_; 
v___x_1790_ = 0;
return v___x_1790_;
}
}
else
{
if (lean_obj_tag(v_x_1788_) == 0)
{
uint8_t v___x_1791_; 
v___x_1791_ = 0;
return v___x_1791_;
}
else
{
lean_object* v_val_1792_; lean_object* v_val_1793_; uint64_t v___x_1794_; uint64_t v___x_1795_; uint8_t v___x_1796_; 
v_val_1792_ = lean_ctor_get(v_x_1787_, 0);
v_val_1793_ = lean_ctor_get(v_x_1788_, 0);
v___x_1794_ = lean_unbox_uint64(v_val_1792_);
v___x_1795_ = lean_unbox_uint64(v_val_1793_);
v___x_1796_ = lean_uint64_dec_eq(v___x_1794_, v___x_1795_);
return v___x_1796_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0___boxed(lean_object* v_x_1797_, lean_object* v_x_1798_){
_start:
{
uint8_t v_res_1799_; lean_object* v_r_1800_; 
v_res_1799_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0(v_x_1797_, v_x_1798_);
lean_dec(v_x_1798_);
lean_dec(v_x_1797_);
v_r_1800_ = lean_box(v_res_1799_);
return v_r_1800_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__1(lean_object* v_x_1801_, lean_object* v_x_1802_){
_start:
{
if (lean_obj_tag(v_x_1801_) == 0)
{
if (lean_obj_tag(v_x_1802_) == 0)
{
uint8_t v___x_1803_; 
v___x_1803_ = 1;
return v___x_1803_;
}
else
{
uint8_t v___x_1804_; 
v___x_1804_ = 0;
return v___x_1804_;
}
}
else
{
if (lean_obj_tag(v_x_1802_) == 0)
{
uint8_t v___x_1805_; 
v___x_1805_ = 0;
return v___x_1805_;
}
else
{
lean_object* v_val_1806_; lean_object* v_val_1807_; uint8_t v___x_1808_; 
v_val_1806_ = lean_ctor_get(v_x_1801_, 0);
v_val_1807_ = lean_ctor_get(v_x_1802_, 0);
v___x_1808_ = l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(v_val_1806_, v_val_1807_);
return v___x_1808_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__1___boxed(lean_object* v_x_1809_, lean_object* v_x_1810_){
_start:
{
uint8_t v_res_1811_; lean_object* v_r_1812_; 
v_res_1811_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__1(v_x_1809_, v_x_1810_);
lean_dec(v_x_1810_);
lean_dec(v_x_1809_);
v_r_1812_ = lean_box(v_res_1811_);
return v_r_1812_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqErrorCode_beq(lean_object* v_x_1813_, lean_object* v_x_1814_){
_start:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; uint8_t v_decide_1817_; 
v___x_1815_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorIdx(v_x_1813_);
v___x_1816_ = l_Lasm_WASI_Http_Types_ErrorCode_ctorIdx(v_x_1814_);
v_decide_1817_ = lean_nat_dec_eq(v___x_1815_, v___x_1816_);
lean_dec(v___x_1816_);
lean_dec(v___x_1815_);
if (v_decide_1817_ == 0)
{
return v_decide_1817_;
}
else
{
switch(lean_obj_tag(v_x_1813_))
{
case 1:
{
lean_object* v_payload_1818_; lean_object* v_payload_1819_; uint8_t v___x_1820_; 
v_payload_1818_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1819_ = lean_ctor_get(v_x_1814_, 0);
v___x_1820_ = l_Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq(v_payload_1818_, v_payload_1819_);
return v___x_1820_;
}
case 14:
{
lean_object* v_payload_1821_; lean_object* v_payload_1822_; uint8_t v___x_1823_; 
v_payload_1821_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1822_ = lean_ctor_get(v_x_1814_, 0);
v___x_1823_ = l_Lasm_WASI_Http_Types_instBEqTlsAlertReceivedPayload_beq(v_payload_1821_, v_payload_1822_);
return v___x_1823_;
}
case 17:
{
lean_object* v_payload_1824_; lean_object* v_payload_1825_; uint8_t v___x_1826_; 
v_payload_1824_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1825_ = lean_ctor_get(v_x_1814_, 0);
v___x_1826_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0(v_payload_1824_, v_payload_1825_);
return v___x_1826_;
}
case 21:
{
lean_object* v_payload_1827_; lean_object* v_payload_1828_; uint8_t v___x_1829_; 
v_payload_1827_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1828_ = lean_ctor_get(v_x_1814_, 0);
v___x_1829_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(v_payload_1827_, v_payload_1828_);
return v___x_1829_;
}
case 22:
{
lean_object* v_payload_1830_; lean_object* v_payload_1831_; uint8_t v___x_1832_; 
v_payload_1830_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1831_ = lean_ctor_get(v_x_1814_, 0);
v___x_1832_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__1(v_payload_1830_, v_payload_1831_);
return v___x_1832_;
}
case 23:
{
lean_object* v_payload_1833_; lean_object* v_payload_1834_; uint8_t v___x_1835_; 
v_payload_1833_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1834_ = lean_ctor_get(v_x_1814_, 0);
v___x_1835_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(v_payload_1833_, v_payload_1834_);
return v___x_1835_;
}
case 24:
{
lean_object* v_payload_1836_; lean_object* v_payload_1837_; uint8_t v___x_1838_; 
v_payload_1836_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1837_ = lean_ctor_get(v_x_1814_, 0);
v___x_1838_ = l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(v_payload_1836_, v_payload_1837_);
return v___x_1838_;
}
case 26:
{
lean_object* v_payload_1839_; lean_object* v_payload_1840_; uint8_t v___x_1841_; 
v_payload_1839_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1840_ = lean_ctor_get(v_x_1814_, 0);
v___x_1841_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(v_payload_1839_, v_payload_1840_);
return v___x_1841_;
}
case 27:
{
lean_object* v_payload_1842_; lean_object* v_payload_1843_; uint8_t v___x_1844_; 
v_payload_1842_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1843_ = lean_ctor_get(v_x_1814_, 0);
v___x_1844_ = l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(v_payload_1842_, v_payload_1843_);
return v___x_1844_;
}
case 28:
{
lean_object* v_payload_1845_; lean_object* v_payload_1846_; uint8_t v___x_1847_; 
v_payload_1845_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1846_ = lean_ctor_get(v_x_1814_, 0);
v___x_1847_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqErrorCode_beq_spec__0(v_payload_1845_, v_payload_1846_);
return v___x_1847_;
}
case 29:
{
lean_object* v_payload_1848_; lean_object* v_payload_1849_; uint8_t v___x_1850_; 
v_payload_1848_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1849_ = lean_ctor_get(v_x_1814_, 0);
v___x_1850_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq_spec__0(v_payload_1848_, v_payload_1849_);
return v___x_1850_;
}
case 30:
{
lean_object* v_payload_1851_; lean_object* v_payload_1852_; uint8_t v___x_1853_; 
v_payload_1851_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1852_ = lean_ctor_get(v_x_1814_, 0);
v___x_1853_ = l_Lasm_WASI_Http_Types_instBEqFieldSizePayload_beq(v_payload_1851_, v_payload_1852_);
return v___x_1853_;
}
case 31:
{
lean_object* v_payload_1854_; lean_object* v_payload_1855_; uint8_t v___x_1856_; 
v_payload_1854_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1855_ = lean_ctor_get(v_x_1814_, 0);
v___x_1856_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_payload_1854_, v_payload_1855_);
return v___x_1856_;
}
case 32:
{
lean_object* v_payload_1857_; lean_object* v_payload_1858_; uint8_t v___x_1859_; 
v_payload_1857_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1858_ = lean_ctor_get(v_x_1814_, 0);
v___x_1859_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_payload_1857_, v_payload_1858_);
return v___x_1859_;
}
case 38:
{
lean_object* v_payload_1860_; lean_object* v_payload_1861_; uint8_t v___x_1862_; 
v_payload_1860_ = lean_ctor_get(v_x_1813_, 0);
v_payload_1861_ = lean_ctor_get(v_x_1814_, 0);
v___x_1862_ = l_Option_instBEq_beq___at___00Lasm_WASI_Http_Types_instBEqDnsErrorPayload_beq_spec__0(v_payload_1860_, v_payload_1861_);
return v___x_1862_;
}
default: 
{
return v_decide_1817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqErrorCode_beq___boxed(lean_object* v_x_1863_, lean_object* v_x_1864_){
_start:
{
uint8_t v_res_1865_; lean_object* v_r_1866_; 
v_res_1865_ = l_Lasm_WASI_Http_Types_instBEqErrorCode_beq(v_x_1863_, v_x_1864_);
lean_dec(v_x_1864_);
lean_dec(v_x_1863_);
v_r_1866_ = lean_box(v_res_1865_);
return v_r_1866_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__0(lean_object* v_x_1869_, lean_object* v_x_1870_){
_start:
{
if (lean_obj_tag(v_x_1869_) == 0)
{
lean_object* v___x_1871_; 
v___x_1871_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1));
return v___x_1871_;
}
else
{
lean_object* v_val_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1885_; 
v_val_1872_ = lean_ctor_get(v_x_1869_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v_x_1869_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1874_ = v_x_1869_;
v_isShared_1875_ = v_isSharedCheck_1885_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_val_1872_);
lean_dec(v_x_1869_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1885_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1876_; uint64_t v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1881_; 
v___x_1876_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3));
v___x_1877_ = lean_unbox_uint64(v_val_1872_);
lean_dec(v_val_1872_);
v___x_1878_ = lean_uint64_to_nat(v___x_1877_);
v___x_1879_ = l_Nat_reprFast(v___x_1878_);
if (v_isShared_1875_ == 0)
{
lean_ctor_set_tag(v___x_1874_, 3);
lean_ctor_set(v___x_1874_, 0, v___x_1879_);
v___x_1881_ = v___x_1874_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v___x_1879_);
v___x_1881_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1882_, 0, v___x_1876_);
lean_ctor_set(v___x_1882_, 1, v___x_1881_);
v___x_1883_ = l_Repr_addAppParen(v___x_1882_, v_x_1870_);
return v___x_1883_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__0___boxed(lean_object* v_x_1886_, lean_object* v_x_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__0(v_x_1886_, v_x_1887_);
lean_dec(v_x_1887_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__1(lean_object* v_x_1889_, lean_object* v_x_1890_){
_start:
{
if (lean_obj_tag(v_x_1889_) == 0)
{
lean_object* v___x_1891_; 
v___x_1891_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__1));
return v___x_1891_;
}
else
{
lean_object* v_val_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v_val_1892_ = lean_ctor_get(v_x_1889_, 0);
lean_inc(v_val_1892_);
lean_dec_ref_known(v_x_1889_, 1);
v___x_1893_ = ((lean_object*)(l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0___closed__3));
v___x_1894_ = l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(v_val_1892_);
v___x_1895_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1893_);
lean_ctor_set(v___x_1895_, 1, v___x_1894_);
v___x_1896_ = l_Repr_addAppParen(v___x_1895_, v_x_1890_);
return v___x_1896_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__1___boxed(lean_object* v_x_1897_, lean_object* v_x_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__1(v_x_1897_, v_x_1898_);
lean_dec(v_x_1898_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr(lean_object* v_x_2062_, lean_object* v_prec_2063_){
_start:
{
lean_object* v___y_2065_; lean_object* v___y_2072_; lean_object* v___y_2079_; lean_object* v___y_2086_; lean_object* v___y_2093_; lean_object* v___y_2100_; lean_object* v___y_2107_; lean_object* v___y_2114_; lean_object* v___y_2121_; lean_object* v___y_2128_; lean_object* v___y_2135_; lean_object* v___y_2142_; lean_object* v___y_2149_; lean_object* v___y_2156_; lean_object* v___y_2163_; lean_object* v___y_2170_; lean_object* v___y_2177_; lean_object* v___y_2184_; lean_object* v___y_2191_; lean_object* v___y_2198_; lean_object* v___y_2205_; lean_object* v___y_2212_; lean_object* v___y_2219_; lean_object* v___y_2226_; 
switch(lean_obj_tag(v_x_2062_))
{
case 0:
{
lean_object* v___x_2232_; uint8_t v___x_2233_; 
v___x_2232_ = lean_unsigned_to_nat(1024u);
v___x_2233_ = lean_nat_dec_le(v___x_2232_, v_prec_2063_);
if (v___x_2233_ == 0)
{
lean_object* v___x_2234_; 
v___x_2234_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2114_ = v___x_2234_;
goto v___jp_2113_;
}
else
{
lean_object* v___x_2235_; 
v___x_2235_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2114_ = v___x_2235_;
goto v___jp_2113_;
}
}
case 1:
{
lean_object* v_payload_2236_; lean_object* v___y_2238_; lean_object* v___x_2246_; uint8_t v___x_2247_; 
v_payload_2236_ = lean_ctor_get(v_x_2062_, 0);
lean_inc_ref(v_payload_2236_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2246_ = lean_unsigned_to_nat(1024u);
v___x_2247_ = lean_nat_dec_le(v___x_2246_, v_prec_2063_);
if (v___x_2247_ == 0)
{
lean_object* v___x_2248_; 
v___x_2248_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2238_ = v___x_2248_;
goto v___jp_2237_;
}
else
{
lean_object* v___x_2249_; 
v___x_2249_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2238_ = v___x_2249_;
goto v___jp_2237_;
}
v___jp_2237_:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; uint8_t v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___x_2239_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__50));
v___x_2240_ = l_Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr___redArg(v_payload_2236_);
v___x_2241_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2239_);
lean_ctor_set(v___x_2241_, 1, v___x_2240_);
lean_inc(v___y_2238_);
v___x_2242_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2242_, 0, v___y_2238_);
lean_ctor_set(v___x_2242_, 1, v___x_2241_);
v___x_2243_ = 0;
v___x_2244_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2244_, 0, v___x_2242_);
lean_ctor_set_uint8(v___x_2244_, sizeof(void*)*1, v___x_2243_);
v___x_2245_ = l_Repr_addAppParen(v___x_2244_, v_prec_2063_);
return v___x_2245_;
}
}
case 2:
{
lean_object* v___x_2250_; uint8_t v___x_2251_; 
v___x_2250_ = lean_unsigned_to_nat(1024u);
v___x_2251_ = lean_nat_dec_le(v___x_2250_, v_prec_2063_);
if (v___x_2251_ == 0)
{
lean_object* v___x_2252_; 
v___x_2252_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2121_ = v___x_2252_;
goto v___jp_2120_;
}
else
{
lean_object* v___x_2253_; 
v___x_2253_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2121_ = v___x_2253_;
goto v___jp_2120_;
}
}
case 3:
{
lean_object* v___x_2254_; uint8_t v___x_2255_; 
v___x_2254_ = lean_unsigned_to_nat(1024u);
v___x_2255_ = lean_nat_dec_le(v___x_2254_, v_prec_2063_);
if (v___x_2255_ == 0)
{
lean_object* v___x_2256_; 
v___x_2256_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2128_ = v___x_2256_;
goto v___jp_2127_;
}
else
{
lean_object* v___x_2257_; 
v___x_2257_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2128_ = v___x_2257_;
goto v___jp_2127_;
}
}
case 4:
{
lean_object* v___x_2258_; uint8_t v___x_2259_; 
v___x_2258_ = lean_unsigned_to_nat(1024u);
v___x_2259_ = lean_nat_dec_le(v___x_2258_, v_prec_2063_);
if (v___x_2259_ == 0)
{
lean_object* v___x_2260_; 
v___x_2260_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2135_ = v___x_2260_;
goto v___jp_2134_;
}
else
{
lean_object* v___x_2261_; 
v___x_2261_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2135_ = v___x_2261_;
goto v___jp_2134_;
}
}
case 5:
{
lean_object* v___x_2262_; uint8_t v___x_2263_; 
v___x_2262_ = lean_unsigned_to_nat(1024u);
v___x_2263_ = lean_nat_dec_le(v___x_2262_, v_prec_2063_);
if (v___x_2263_ == 0)
{
lean_object* v___x_2264_; 
v___x_2264_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2142_ = v___x_2264_;
goto v___jp_2141_;
}
else
{
lean_object* v___x_2265_; 
v___x_2265_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2142_ = v___x_2265_;
goto v___jp_2141_;
}
}
case 6:
{
lean_object* v___x_2266_; uint8_t v___x_2267_; 
v___x_2266_ = lean_unsigned_to_nat(1024u);
v___x_2267_ = lean_nat_dec_le(v___x_2266_, v_prec_2063_);
if (v___x_2267_ == 0)
{
lean_object* v___x_2268_; 
v___x_2268_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2149_ = v___x_2268_;
goto v___jp_2148_;
}
else
{
lean_object* v___x_2269_; 
v___x_2269_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2149_ = v___x_2269_;
goto v___jp_2148_;
}
}
case 7:
{
lean_object* v___x_2270_; uint8_t v___x_2271_; 
v___x_2270_ = lean_unsigned_to_nat(1024u);
v___x_2271_ = lean_nat_dec_le(v___x_2270_, v_prec_2063_);
if (v___x_2271_ == 0)
{
lean_object* v___x_2272_; 
v___x_2272_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2156_ = v___x_2272_;
goto v___jp_2155_;
}
else
{
lean_object* v___x_2273_; 
v___x_2273_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2156_ = v___x_2273_;
goto v___jp_2155_;
}
}
case 8:
{
lean_object* v___x_2274_; uint8_t v___x_2275_; 
v___x_2274_ = lean_unsigned_to_nat(1024u);
v___x_2275_ = lean_nat_dec_le(v___x_2274_, v_prec_2063_);
if (v___x_2275_ == 0)
{
lean_object* v___x_2276_; 
v___x_2276_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2163_ = v___x_2276_;
goto v___jp_2162_;
}
else
{
lean_object* v___x_2277_; 
v___x_2277_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2163_ = v___x_2277_;
goto v___jp_2162_;
}
}
case 9:
{
lean_object* v___x_2278_; uint8_t v___x_2279_; 
v___x_2278_ = lean_unsigned_to_nat(1024u);
v___x_2279_ = lean_nat_dec_le(v___x_2278_, v_prec_2063_);
if (v___x_2279_ == 0)
{
lean_object* v___x_2280_; 
v___x_2280_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2170_ = v___x_2280_;
goto v___jp_2169_;
}
else
{
lean_object* v___x_2281_; 
v___x_2281_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2170_ = v___x_2281_;
goto v___jp_2169_;
}
}
case 10:
{
lean_object* v___x_2282_; uint8_t v___x_2283_; 
v___x_2282_ = lean_unsigned_to_nat(1024u);
v___x_2283_ = lean_nat_dec_le(v___x_2282_, v_prec_2063_);
if (v___x_2283_ == 0)
{
lean_object* v___x_2284_; 
v___x_2284_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2177_ = v___x_2284_;
goto v___jp_2176_;
}
else
{
lean_object* v___x_2285_; 
v___x_2285_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2177_ = v___x_2285_;
goto v___jp_2176_;
}
}
case 11:
{
lean_object* v___x_2286_; uint8_t v___x_2287_; 
v___x_2286_ = lean_unsigned_to_nat(1024u);
v___x_2287_ = lean_nat_dec_le(v___x_2286_, v_prec_2063_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; 
v___x_2288_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2184_ = v___x_2288_;
goto v___jp_2183_;
}
else
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2184_ = v___x_2289_;
goto v___jp_2183_;
}
}
case 12:
{
lean_object* v___x_2290_; uint8_t v___x_2291_; 
v___x_2290_ = lean_unsigned_to_nat(1024u);
v___x_2291_ = lean_nat_dec_le(v___x_2290_, v_prec_2063_);
if (v___x_2291_ == 0)
{
lean_object* v___x_2292_; 
v___x_2292_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2191_ = v___x_2292_;
goto v___jp_2190_;
}
else
{
lean_object* v___x_2293_; 
v___x_2293_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2191_ = v___x_2293_;
goto v___jp_2190_;
}
}
case 13:
{
lean_object* v___x_2294_; uint8_t v___x_2295_; 
v___x_2294_ = lean_unsigned_to_nat(1024u);
v___x_2295_ = lean_nat_dec_le(v___x_2294_, v_prec_2063_);
if (v___x_2295_ == 0)
{
lean_object* v___x_2296_; 
v___x_2296_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2198_ = v___x_2296_;
goto v___jp_2197_;
}
else
{
lean_object* v___x_2297_; 
v___x_2297_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2198_ = v___x_2297_;
goto v___jp_2197_;
}
}
case 14:
{
lean_object* v_payload_2298_; lean_object* v___y_2300_; lean_object* v___x_2308_; uint8_t v___x_2309_; 
v_payload_2298_ = lean_ctor_get(v_x_2062_, 0);
lean_inc_ref(v_payload_2298_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2308_ = lean_unsigned_to_nat(1024u);
v___x_2309_ = lean_nat_dec_le(v___x_2308_, v_prec_2063_);
if (v___x_2309_ == 0)
{
lean_object* v___x_2310_; 
v___x_2310_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2300_ = v___x_2310_;
goto v___jp_2299_;
}
else
{
lean_object* v___x_2311_; 
v___x_2311_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2300_ = v___x_2311_;
goto v___jp_2299_;
}
v___jp_2299_:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; uint8_t v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; 
v___x_2301_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__53));
v___x_2302_ = l_Lasm_WASI_Http_Types_instReprTlsAlertReceivedPayload_repr___redArg(v_payload_2298_);
v___x_2303_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2301_);
lean_ctor_set(v___x_2303_, 1, v___x_2302_);
lean_inc(v___y_2300_);
v___x_2304_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2304_, 0, v___y_2300_);
lean_ctor_set(v___x_2304_, 1, v___x_2303_);
v___x_2305_ = 0;
v___x_2306_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2306_, 0, v___x_2304_);
lean_ctor_set_uint8(v___x_2306_, sizeof(void*)*1, v___x_2305_);
v___x_2307_ = l_Repr_addAppParen(v___x_2306_, v_prec_2063_);
return v___x_2307_;
}
}
case 15:
{
lean_object* v___x_2312_; uint8_t v___x_2313_; 
v___x_2312_ = lean_unsigned_to_nat(1024u);
v___x_2313_ = lean_nat_dec_le(v___x_2312_, v_prec_2063_);
if (v___x_2313_ == 0)
{
lean_object* v___x_2314_; 
v___x_2314_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2107_ = v___x_2314_;
goto v___jp_2106_;
}
else
{
lean_object* v___x_2315_; 
v___x_2315_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2107_ = v___x_2315_;
goto v___jp_2106_;
}
}
case 16:
{
lean_object* v___x_2316_; uint8_t v___x_2317_; 
v___x_2316_ = lean_unsigned_to_nat(1024u);
v___x_2317_ = lean_nat_dec_le(v___x_2316_, v_prec_2063_);
if (v___x_2317_ == 0)
{
lean_object* v___x_2318_; 
v___x_2318_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2100_ = v___x_2318_;
goto v___jp_2099_;
}
else
{
lean_object* v___x_2319_; 
v___x_2319_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2100_ = v___x_2319_;
goto v___jp_2099_;
}
}
case 17:
{
lean_object* v_payload_2320_; lean_object* v___y_2322_; lean_object* v___x_2331_; uint8_t v___x_2332_; 
v_payload_2320_ = lean_ctor_get(v_x_2062_, 0);
lean_inc(v_payload_2320_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2331_ = lean_unsigned_to_nat(1024u);
v___x_2332_ = lean_nat_dec_le(v___x_2331_, v_prec_2063_);
if (v___x_2332_ == 0)
{
lean_object* v___x_2333_; 
v___x_2333_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2322_ = v___x_2333_;
goto v___jp_2321_;
}
else
{
lean_object* v___x_2334_; 
v___x_2334_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2322_ = v___x_2334_;
goto v___jp_2321_;
}
v___jp_2321_:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; uint8_t v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2323_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__56));
v___x_2324_ = lean_unsigned_to_nat(1024u);
v___x_2325_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__0(v_payload_2320_, v___x_2324_);
v___x_2326_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2323_);
lean_ctor_set(v___x_2326_, 1, v___x_2325_);
lean_inc(v___y_2322_);
v___x_2327_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2327_, 0, v___y_2322_);
lean_ctor_set(v___x_2327_, 1, v___x_2326_);
v___x_2328_ = 0;
v___x_2329_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2329_, 0, v___x_2327_);
lean_ctor_set_uint8(v___x_2329_, sizeof(void*)*1, v___x_2328_);
v___x_2330_ = l_Repr_addAppParen(v___x_2329_, v_prec_2063_);
return v___x_2330_;
}
}
case 18:
{
lean_object* v___x_2335_; uint8_t v___x_2336_; 
v___x_2335_ = lean_unsigned_to_nat(1024u);
v___x_2336_ = lean_nat_dec_le(v___x_2335_, v_prec_2063_);
if (v___x_2336_ == 0)
{
lean_object* v___x_2337_; 
v___x_2337_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2205_ = v___x_2337_;
goto v___jp_2204_;
}
else
{
lean_object* v___x_2338_; 
v___x_2338_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2205_ = v___x_2338_;
goto v___jp_2204_;
}
}
case 19:
{
lean_object* v___x_2339_; uint8_t v___x_2340_; 
v___x_2339_ = lean_unsigned_to_nat(1024u);
v___x_2340_ = lean_nat_dec_le(v___x_2339_, v_prec_2063_);
if (v___x_2340_ == 0)
{
lean_object* v___x_2341_; 
v___x_2341_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2212_ = v___x_2341_;
goto v___jp_2211_;
}
else
{
lean_object* v___x_2342_; 
v___x_2342_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2212_ = v___x_2342_;
goto v___jp_2211_;
}
}
case 20:
{
lean_object* v___x_2343_; uint8_t v___x_2344_; 
v___x_2343_ = lean_unsigned_to_nat(1024u);
v___x_2344_ = lean_nat_dec_le(v___x_2343_, v_prec_2063_);
if (v___x_2344_ == 0)
{
lean_object* v___x_2345_; 
v___x_2345_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2219_ = v___x_2345_;
goto v___jp_2218_;
}
else
{
lean_object* v___x_2346_; 
v___x_2346_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2219_ = v___x_2346_;
goto v___jp_2218_;
}
}
case 21:
{
lean_object* v_payload_2347_; lean_object* v___y_2349_; lean_object* v___x_2358_; uint8_t v___x_2359_; 
v_payload_2347_ = lean_ctor_get(v_x_2062_, 0);
lean_inc(v_payload_2347_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2358_ = lean_unsigned_to_nat(1024u);
v___x_2359_ = lean_nat_dec_le(v___x_2358_, v_prec_2063_);
if (v___x_2359_ == 0)
{
lean_object* v___x_2360_; 
v___x_2360_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2349_ = v___x_2360_;
goto v___jp_2348_;
}
else
{
lean_object* v___x_2361_; 
v___x_2361_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2349_ = v___x_2361_;
goto v___jp_2348_;
}
v___jp_2348_:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; uint8_t v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; 
v___x_2350_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__59));
v___x_2351_ = lean_unsigned_to_nat(1024u);
v___x_2352_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(v_payload_2347_, v___x_2351_);
v___x_2353_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2350_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
lean_inc(v___y_2349_);
v___x_2354_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2354_, 0, v___y_2349_);
lean_ctor_set(v___x_2354_, 1, v___x_2353_);
v___x_2355_ = 0;
v___x_2356_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2356_, 0, v___x_2354_);
lean_ctor_set_uint8(v___x_2356_, sizeof(void*)*1, v___x_2355_);
v___x_2357_ = l_Repr_addAppParen(v___x_2356_, v_prec_2063_);
return v___x_2357_;
}
}
case 22:
{
lean_object* v_payload_2362_; lean_object* v___y_2364_; lean_object* v___x_2373_; uint8_t v___x_2374_; 
v_payload_2362_ = lean_ctor_get(v_x_2062_, 0);
lean_inc(v_payload_2362_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2373_ = lean_unsigned_to_nat(1024u);
v___x_2374_ = lean_nat_dec_le(v___x_2373_, v_prec_2063_);
if (v___x_2374_ == 0)
{
lean_object* v___x_2375_; 
v___x_2375_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2364_ = v___x_2375_;
goto v___jp_2363_;
}
else
{
lean_object* v___x_2376_; 
v___x_2376_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2364_ = v___x_2376_;
goto v___jp_2363_;
}
v___jp_2363_:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; uint8_t v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2365_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__62));
v___x_2366_ = lean_unsigned_to_nat(1024u);
v___x_2367_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__1(v_payload_2362_, v___x_2366_);
v___x_2368_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2368_, 0, v___x_2365_);
lean_ctor_set(v___x_2368_, 1, v___x_2367_);
lean_inc(v___y_2364_);
v___x_2369_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2369_, 0, v___y_2364_);
lean_ctor_set(v___x_2369_, 1, v___x_2368_);
v___x_2370_ = 0;
v___x_2371_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2371_, 0, v___x_2369_);
lean_ctor_set_uint8(v___x_2371_, sizeof(void*)*1, v___x_2370_);
v___x_2372_ = l_Repr_addAppParen(v___x_2371_, v_prec_2063_);
return v___x_2372_;
}
}
case 23:
{
lean_object* v_payload_2377_; lean_object* v___y_2379_; lean_object* v___x_2388_; uint8_t v___x_2389_; 
v_payload_2377_ = lean_ctor_get(v_x_2062_, 0);
lean_inc(v_payload_2377_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2388_ = lean_unsigned_to_nat(1024u);
v___x_2389_ = lean_nat_dec_le(v___x_2388_, v_prec_2063_);
if (v___x_2389_ == 0)
{
lean_object* v___x_2390_; 
v___x_2390_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2379_ = v___x_2390_;
goto v___jp_2378_;
}
else
{
lean_object* v___x_2391_; 
v___x_2391_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2379_ = v___x_2391_;
goto v___jp_2378_;
}
v___jp_2378_:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; uint8_t v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2380_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__65));
v___x_2381_ = lean_unsigned_to_nat(1024u);
v___x_2382_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(v_payload_2377_, v___x_2381_);
v___x_2383_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2383_, 0, v___x_2380_);
lean_ctor_set(v___x_2383_, 1, v___x_2382_);
lean_inc(v___y_2379_);
v___x_2384_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2384_, 0, v___y_2379_);
lean_ctor_set(v___x_2384_, 1, v___x_2383_);
v___x_2385_ = 0;
v___x_2386_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2386_, 0, v___x_2384_);
lean_ctor_set_uint8(v___x_2386_, sizeof(void*)*1, v___x_2385_);
v___x_2387_ = l_Repr_addAppParen(v___x_2386_, v_prec_2063_);
return v___x_2387_;
}
}
case 24:
{
lean_object* v_payload_2392_; lean_object* v___y_2394_; lean_object* v___x_2402_; uint8_t v___x_2403_; 
v_payload_2392_ = lean_ctor_get(v_x_2062_, 0);
lean_inc_ref(v_payload_2392_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2402_ = lean_unsigned_to_nat(1024u);
v___x_2403_ = lean_nat_dec_le(v___x_2402_, v_prec_2063_);
if (v___x_2403_ == 0)
{
lean_object* v___x_2404_; 
v___x_2404_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2394_ = v___x_2404_;
goto v___jp_2393_;
}
else
{
lean_object* v___x_2405_; 
v___x_2405_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2394_ = v___x_2405_;
goto v___jp_2393_;
}
v___jp_2393_:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; uint8_t v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2395_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__68));
v___x_2396_ = l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(v_payload_2392_);
v___x_2397_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2395_);
lean_ctor_set(v___x_2397_, 1, v___x_2396_);
lean_inc(v___y_2394_);
v___x_2398_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2398_, 0, v___y_2394_);
lean_ctor_set(v___x_2398_, 1, v___x_2397_);
v___x_2399_ = 0;
v___x_2400_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2400_, 0, v___x_2398_);
lean_ctor_set_uint8(v___x_2400_, sizeof(void*)*1, v___x_2399_);
v___x_2401_ = l_Repr_addAppParen(v___x_2400_, v_prec_2063_);
return v___x_2401_;
}
}
case 25:
{
lean_object* v___x_2406_; uint8_t v___x_2407_; 
v___x_2406_ = lean_unsigned_to_nat(1024u);
v___x_2407_ = lean_nat_dec_le(v___x_2406_, v_prec_2063_);
if (v___x_2407_ == 0)
{
lean_object* v___x_2408_; 
v___x_2408_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2226_ = v___x_2408_;
goto v___jp_2225_;
}
else
{
lean_object* v___x_2409_; 
v___x_2409_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2226_ = v___x_2409_;
goto v___jp_2225_;
}
}
case 26:
{
lean_object* v_payload_2410_; lean_object* v___y_2412_; lean_object* v___x_2421_; uint8_t v___x_2422_; 
v_payload_2410_ = lean_ctor_get(v_x_2062_, 0);
lean_inc(v_payload_2410_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2421_ = lean_unsigned_to_nat(1024u);
v___x_2422_ = lean_nat_dec_le(v___x_2421_, v_prec_2063_);
if (v___x_2422_ == 0)
{
lean_object* v___x_2423_; 
v___x_2423_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2412_ = v___x_2423_;
goto v___jp_2411_;
}
else
{
lean_object* v___x_2424_; 
v___x_2424_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2412_ = v___x_2424_;
goto v___jp_2411_;
}
v___jp_2411_:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; uint8_t v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2413_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__71));
v___x_2414_ = lean_unsigned_to_nat(1024u);
v___x_2415_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(v_payload_2410_, v___x_2414_);
v___x_2416_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2416_, 0, v___x_2413_);
lean_ctor_set(v___x_2416_, 1, v___x_2415_);
lean_inc(v___y_2412_);
v___x_2417_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2417_, 0, v___y_2412_);
lean_ctor_set(v___x_2417_, 1, v___x_2416_);
v___x_2418_ = 0;
v___x_2419_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2419_, 0, v___x_2417_);
lean_ctor_set_uint8(v___x_2419_, sizeof(void*)*1, v___x_2418_);
v___x_2420_ = l_Repr_addAppParen(v___x_2419_, v_prec_2063_);
return v___x_2420_;
}
}
case 27:
{
lean_object* v_payload_2425_; lean_object* v___y_2427_; lean_object* v___x_2435_; uint8_t v___x_2436_; 
v_payload_2425_ = lean_ctor_get(v_x_2062_, 0);
lean_inc_ref(v_payload_2425_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2435_ = lean_unsigned_to_nat(1024u);
v___x_2436_ = lean_nat_dec_le(v___x_2435_, v_prec_2063_);
if (v___x_2436_ == 0)
{
lean_object* v___x_2437_; 
v___x_2437_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2427_ = v___x_2437_;
goto v___jp_2426_;
}
else
{
lean_object* v___x_2438_; 
v___x_2438_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2427_ = v___x_2438_;
goto v___jp_2426_;
}
v___jp_2426_:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; uint8_t v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2428_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__74));
v___x_2429_ = l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(v_payload_2425_);
v___x_2430_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2428_);
lean_ctor_set(v___x_2430_, 1, v___x_2429_);
lean_inc(v___y_2427_);
v___x_2431_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___y_2427_);
lean_ctor_set(v___x_2431_, 1, v___x_2430_);
v___x_2432_ = 0;
v___x_2433_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2433_, 0, v___x_2431_);
lean_ctor_set_uint8(v___x_2433_, sizeof(void*)*1, v___x_2432_);
v___x_2434_ = l_Repr_addAppParen(v___x_2433_, v_prec_2063_);
return v___x_2434_;
}
}
case 28:
{
lean_object* v_payload_2439_; lean_object* v___y_2441_; lean_object* v___x_2450_; uint8_t v___x_2451_; 
v_payload_2439_ = lean_ctor_get(v_x_2062_, 0);
lean_inc(v_payload_2439_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2450_ = lean_unsigned_to_nat(1024u);
v___x_2451_ = lean_nat_dec_le(v___x_2450_, v_prec_2063_);
if (v___x_2451_ == 0)
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2441_ = v___x_2452_;
goto v___jp_2440_;
}
else
{
lean_object* v___x_2453_; 
v___x_2453_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2441_ = v___x_2453_;
goto v___jp_2440_;
}
v___jp_2440_:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; uint8_t v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2442_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__77));
v___x_2443_ = lean_unsigned_to_nat(1024u);
v___x_2444_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprErrorCode_repr_spec__0(v_payload_2439_, v___x_2443_);
v___x_2445_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2442_);
lean_ctor_set(v___x_2445_, 1, v___x_2444_);
lean_inc(v___y_2441_);
v___x_2446_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2446_, 0, v___y_2441_);
lean_ctor_set(v___x_2446_, 1, v___x_2445_);
v___x_2447_ = 0;
v___x_2448_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2448_, 0, v___x_2446_);
lean_ctor_set_uint8(v___x_2448_, sizeof(void*)*1, v___x_2447_);
v___x_2449_ = l_Repr_addAppParen(v___x_2448_, v_prec_2063_);
return v___x_2449_;
}
}
case 29:
{
lean_object* v_payload_2454_; lean_object* v___y_2456_; lean_object* v___x_2465_; uint8_t v___x_2466_; 
v_payload_2454_ = lean_ctor_get(v_x_2062_, 0);
lean_inc(v_payload_2454_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2465_ = lean_unsigned_to_nat(1024u);
v___x_2466_ = lean_nat_dec_le(v___x_2465_, v_prec_2063_);
if (v___x_2466_ == 0)
{
lean_object* v___x_2467_; 
v___x_2467_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2456_ = v___x_2467_;
goto v___jp_2455_;
}
else
{
lean_object* v___x_2468_; 
v___x_2468_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2456_ = v___x_2468_;
goto v___jp_2455_;
}
v___jp_2455_:
{
lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; uint8_t v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2457_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__80));
v___x_2458_ = lean_unsigned_to_nat(1024u);
v___x_2459_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprFieldSizePayload_repr_spec__0(v_payload_2454_, v___x_2458_);
v___x_2460_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2460_, 0, v___x_2457_);
lean_ctor_set(v___x_2460_, 1, v___x_2459_);
lean_inc(v___y_2456_);
v___x_2461_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2461_, 0, v___y_2456_);
lean_ctor_set(v___x_2461_, 1, v___x_2460_);
v___x_2462_ = 0;
v___x_2463_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2463_, 0, v___x_2461_);
lean_ctor_set_uint8(v___x_2463_, sizeof(void*)*1, v___x_2462_);
v___x_2464_ = l_Repr_addAppParen(v___x_2463_, v_prec_2063_);
return v___x_2464_;
}
}
case 30:
{
lean_object* v_payload_2469_; lean_object* v___y_2471_; lean_object* v___x_2479_; uint8_t v___x_2480_; 
v_payload_2469_ = lean_ctor_get(v_x_2062_, 0);
lean_inc_ref(v_payload_2469_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2479_ = lean_unsigned_to_nat(1024u);
v___x_2480_ = lean_nat_dec_le(v___x_2479_, v_prec_2063_);
if (v___x_2480_ == 0)
{
lean_object* v___x_2481_; 
v___x_2481_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2471_ = v___x_2481_;
goto v___jp_2470_;
}
else
{
lean_object* v___x_2482_; 
v___x_2482_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2471_ = v___x_2482_;
goto v___jp_2470_;
}
v___jp_2470_:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; uint8_t v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v___x_2472_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__83));
v___x_2473_ = l_Lasm_WASI_Http_Types_instReprFieldSizePayload_repr___redArg(v_payload_2469_);
v___x_2474_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2472_);
lean_ctor_set(v___x_2474_, 1, v___x_2473_);
lean_inc(v___y_2471_);
v___x_2475_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2475_, 0, v___y_2471_);
lean_ctor_set(v___x_2475_, 1, v___x_2474_);
v___x_2476_ = 0;
v___x_2477_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2477_, 0, v___x_2475_);
lean_ctor_set_uint8(v___x_2477_, sizeof(void*)*1, v___x_2476_);
v___x_2478_ = l_Repr_addAppParen(v___x_2477_, v_prec_2063_);
return v___x_2478_;
}
}
case 31:
{
lean_object* v_payload_2483_; lean_object* v___y_2485_; lean_object* v___x_2494_; uint8_t v___x_2495_; 
v_payload_2483_ = lean_ctor_get(v_x_2062_, 0);
lean_inc(v_payload_2483_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2494_ = lean_unsigned_to_nat(1024u);
v___x_2495_ = lean_nat_dec_le(v___x_2494_, v_prec_2063_);
if (v___x_2495_ == 0)
{
lean_object* v___x_2496_; 
v___x_2496_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2485_ = v___x_2496_;
goto v___jp_2484_;
}
else
{
lean_object* v___x_2497_; 
v___x_2497_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2485_ = v___x_2497_;
goto v___jp_2484_;
}
v___jp_2484_:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; uint8_t v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2486_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__86));
v___x_2487_ = lean_unsigned_to_nat(1024u);
v___x_2488_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_payload_2483_, v___x_2487_);
v___x_2489_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2486_);
lean_ctor_set(v___x_2489_, 1, v___x_2488_);
lean_inc(v___y_2485_);
v___x_2490_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2490_, 0, v___y_2485_);
lean_ctor_set(v___x_2490_, 1, v___x_2489_);
v___x_2491_ = 0;
v___x_2492_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2492_, 0, v___x_2490_);
lean_ctor_set_uint8(v___x_2492_, sizeof(void*)*1, v___x_2491_);
v___x_2493_ = l_Repr_addAppParen(v___x_2492_, v_prec_2063_);
return v___x_2493_;
}
}
case 32:
{
lean_object* v_payload_2498_; lean_object* v___y_2500_; lean_object* v___x_2509_; uint8_t v___x_2510_; 
v_payload_2498_ = lean_ctor_get(v_x_2062_, 0);
lean_inc(v_payload_2498_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2509_ = lean_unsigned_to_nat(1024u);
v___x_2510_ = lean_nat_dec_le(v___x_2509_, v_prec_2063_);
if (v___x_2510_ == 0)
{
lean_object* v___x_2511_; 
v___x_2511_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2500_ = v___x_2511_;
goto v___jp_2499_;
}
else
{
lean_object* v___x_2512_; 
v___x_2512_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2500_ = v___x_2512_;
goto v___jp_2499_;
}
v___jp_2499_:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; uint8_t v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2501_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__89));
v___x_2502_ = lean_unsigned_to_nat(1024u);
v___x_2503_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_payload_2498_, v___x_2502_);
v___x_2504_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2501_);
lean_ctor_set(v___x_2504_, 1, v___x_2503_);
lean_inc(v___y_2500_);
v___x_2505_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2505_, 0, v___y_2500_);
lean_ctor_set(v___x_2505_, 1, v___x_2504_);
v___x_2506_ = 0;
v___x_2507_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2507_, 0, v___x_2505_);
lean_ctor_set_uint8(v___x_2507_, sizeof(void*)*1, v___x_2506_);
v___x_2508_ = l_Repr_addAppParen(v___x_2507_, v_prec_2063_);
return v___x_2508_;
}
}
case 33:
{
lean_object* v___x_2513_; uint8_t v___x_2514_; 
v___x_2513_ = lean_unsigned_to_nat(1024u);
v___x_2514_ = lean_nat_dec_le(v___x_2513_, v_prec_2063_);
if (v___x_2514_ == 0)
{
lean_object* v___x_2515_; 
v___x_2515_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2093_ = v___x_2515_;
goto v___jp_2092_;
}
else
{
lean_object* v___x_2516_; 
v___x_2516_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2093_ = v___x_2516_;
goto v___jp_2092_;
}
}
case 34:
{
lean_object* v___x_2517_; uint8_t v___x_2518_; 
v___x_2517_ = lean_unsigned_to_nat(1024u);
v___x_2518_ = lean_nat_dec_le(v___x_2517_, v_prec_2063_);
if (v___x_2518_ == 0)
{
lean_object* v___x_2519_; 
v___x_2519_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2086_ = v___x_2519_;
goto v___jp_2085_;
}
else
{
lean_object* v___x_2520_; 
v___x_2520_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2086_ = v___x_2520_;
goto v___jp_2085_;
}
}
case 35:
{
lean_object* v___x_2521_; uint8_t v___x_2522_; 
v___x_2521_ = lean_unsigned_to_nat(1024u);
v___x_2522_ = lean_nat_dec_le(v___x_2521_, v_prec_2063_);
if (v___x_2522_ == 0)
{
lean_object* v___x_2523_; 
v___x_2523_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2079_ = v___x_2523_;
goto v___jp_2078_;
}
else
{
lean_object* v___x_2524_; 
v___x_2524_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2079_ = v___x_2524_;
goto v___jp_2078_;
}
}
case 36:
{
lean_object* v___x_2525_; uint8_t v___x_2526_; 
v___x_2525_ = lean_unsigned_to_nat(1024u);
v___x_2526_ = lean_nat_dec_le(v___x_2525_, v_prec_2063_);
if (v___x_2526_ == 0)
{
lean_object* v___x_2527_; 
v___x_2527_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2072_ = v___x_2527_;
goto v___jp_2071_;
}
else
{
lean_object* v___x_2528_; 
v___x_2528_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2072_ = v___x_2528_;
goto v___jp_2071_;
}
}
case 37:
{
lean_object* v___x_2529_; uint8_t v___x_2530_; 
v___x_2529_ = lean_unsigned_to_nat(1024u);
v___x_2530_ = lean_nat_dec_le(v___x_2529_, v_prec_2063_);
if (v___x_2530_ == 0)
{
lean_object* v___x_2531_; 
v___x_2531_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2065_ = v___x_2531_;
goto v___jp_2064_;
}
else
{
lean_object* v___x_2532_; 
v___x_2532_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2065_ = v___x_2532_;
goto v___jp_2064_;
}
}
default: 
{
lean_object* v_payload_2533_; lean_object* v___y_2535_; lean_object* v___x_2544_; uint8_t v___x_2545_; 
v_payload_2533_ = lean_ctor_get(v_x_2062_, 0);
lean_inc(v_payload_2533_);
lean_dec_ref_known(v_x_2062_, 1);
v___x_2544_ = lean_unsigned_to_nat(1024u);
v___x_2545_ = lean_nat_dec_le(v___x_2544_, v_prec_2063_);
if (v___x_2545_ == 0)
{
lean_object* v___x_2546_; 
v___x_2546_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2535_ = v___x_2546_;
goto v___jp_2534_;
}
else
{
lean_object* v___x_2547_; 
v___x_2547_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2535_ = v___x_2547_;
goto v___jp_2534_;
}
v___jp_2534_:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; uint8_t v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2536_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__92));
v___x_2537_ = lean_unsigned_to_nat(1024u);
v___x_2538_ = l_Option_repr___at___00Lasm_WASI_Http_Types_instReprDnsErrorPayload_repr_spec__0(v_payload_2533_, v___x_2537_);
v___x_2539_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2539_, 0, v___x_2536_);
lean_ctor_set(v___x_2539_, 1, v___x_2538_);
lean_inc(v___y_2535_);
v___x_2540_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2540_, 0, v___y_2535_);
lean_ctor_set(v___x_2540_, 1, v___x_2539_);
v___x_2541_ = 0;
v___x_2542_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2542_, 0, v___x_2540_);
lean_ctor_set_uint8(v___x_2542_, sizeof(void*)*1, v___x_2541_);
v___x_2543_ = l_Repr_addAppParen(v___x_2542_, v_prec_2063_);
return v___x_2543_;
}
}
}
v___jp_2064_:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; uint8_t v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2066_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__1));
lean_inc(v___y_2065_);
v___x_2067_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2067_, 0, v___y_2065_);
lean_ctor_set(v___x_2067_, 1, v___x_2066_);
v___x_2068_ = 0;
v___x_2069_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2069_, 0, v___x_2067_);
lean_ctor_set_uint8(v___x_2069_, sizeof(void*)*1, v___x_2068_);
v___x_2070_ = l_Repr_addAppParen(v___x_2069_, v_prec_2063_);
return v___x_2070_;
}
v___jp_2071_:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; uint8_t v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2073_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__3));
lean_inc(v___y_2072_);
v___x_2074_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2074_, 0, v___y_2072_);
lean_ctor_set(v___x_2074_, 1, v___x_2073_);
v___x_2075_ = 0;
v___x_2076_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2076_, 0, v___x_2074_);
lean_ctor_set_uint8(v___x_2076_, sizeof(void*)*1, v___x_2075_);
v___x_2077_ = l_Repr_addAppParen(v___x_2076_, v_prec_2063_);
return v___x_2077_;
}
v___jp_2078_:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; uint8_t v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2080_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__5));
lean_inc(v___y_2079_);
v___x_2081_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2081_, 0, v___y_2079_);
lean_ctor_set(v___x_2081_, 1, v___x_2080_);
v___x_2082_ = 0;
v___x_2083_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2083_, 0, v___x_2081_);
lean_ctor_set_uint8(v___x_2083_, sizeof(void*)*1, v___x_2082_);
v___x_2084_ = l_Repr_addAppParen(v___x_2083_, v_prec_2063_);
return v___x_2084_;
}
v___jp_2085_:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; uint8_t v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2087_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__7));
lean_inc(v___y_2086_);
v___x_2088_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___y_2086_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___x_2089_ = 0;
v___x_2090_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2090_, 0, v___x_2088_);
lean_ctor_set_uint8(v___x_2090_, sizeof(void*)*1, v___x_2089_);
v___x_2091_ = l_Repr_addAppParen(v___x_2090_, v_prec_2063_);
return v___x_2091_;
}
v___jp_2092_:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; uint8_t v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2094_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__9));
lean_inc(v___y_2093_);
v___x_2095_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2095_, 0, v___y_2093_);
lean_ctor_set(v___x_2095_, 1, v___x_2094_);
v___x_2096_ = 0;
v___x_2097_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2097_, 0, v___x_2095_);
lean_ctor_set_uint8(v___x_2097_, sizeof(void*)*1, v___x_2096_);
v___x_2098_ = l_Repr_addAppParen(v___x_2097_, v_prec_2063_);
return v___x_2098_;
}
v___jp_2099_:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; uint8_t v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2101_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__11));
lean_inc(v___y_2100_);
v___x_2102_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2102_, 0, v___y_2100_);
lean_ctor_set(v___x_2102_, 1, v___x_2101_);
v___x_2103_ = 0;
v___x_2104_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2104_, 0, v___x_2102_);
lean_ctor_set_uint8(v___x_2104_, sizeof(void*)*1, v___x_2103_);
v___x_2105_ = l_Repr_addAppParen(v___x_2104_, v_prec_2063_);
return v___x_2105_;
}
v___jp_2106_:
{
lean_object* v___x_2108_; lean_object* v___x_2109_; uint8_t v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2108_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__13));
lean_inc(v___y_2107_);
v___x_2109_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2109_, 0, v___y_2107_);
lean_ctor_set(v___x_2109_, 1, v___x_2108_);
v___x_2110_ = 0;
v___x_2111_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2111_, 0, v___x_2109_);
lean_ctor_set_uint8(v___x_2111_, sizeof(void*)*1, v___x_2110_);
v___x_2112_ = l_Repr_addAppParen(v___x_2111_, v_prec_2063_);
return v___x_2112_;
}
v___jp_2113_:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2115_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__15));
lean_inc(v___y_2114_);
v___x_2116_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___y_2114_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = 0;
v___x_2118_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2118_, 0, v___x_2116_);
lean_ctor_set_uint8(v___x_2118_, sizeof(void*)*1, v___x_2117_);
v___x_2119_ = l_Repr_addAppParen(v___x_2118_, v_prec_2063_);
return v___x_2119_;
}
v___jp_2120_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; uint8_t v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2122_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__17));
lean_inc(v___y_2121_);
v___x_2123_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___y_2121_);
lean_ctor_set(v___x_2123_, 1, v___x_2122_);
v___x_2124_ = 0;
v___x_2125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2125_, 0, v___x_2123_);
lean_ctor_set_uint8(v___x_2125_, sizeof(void*)*1, v___x_2124_);
v___x_2126_ = l_Repr_addAppParen(v___x_2125_, v_prec_2063_);
return v___x_2126_;
}
v___jp_2127_:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; uint8_t v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2129_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__19));
lean_inc(v___y_2128_);
v___x_2130_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___y_2128_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
v___x_2131_ = 0;
v___x_2132_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2132_, 0, v___x_2130_);
lean_ctor_set_uint8(v___x_2132_, sizeof(void*)*1, v___x_2131_);
v___x_2133_ = l_Repr_addAppParen(v___x_2132_, v_prec_2063_);
return v___x_2133_;
}
v___jp_2134_:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; uint8_t v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2136_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__21));
lean_inc(v___y_2135_);
v___x_2137_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2137_, 0, v___y_2135_);
lean_ctor_set(v___x_2137_, 1, v___x_2136_);
v___x_2138_ = 0;
v___x_2139_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2139_, 0, v___x_2137_);
lean_ctor_set_uint8(v___x_2139_, sizeof(void*)*1, v___x_2138_);
v___x_2140_ = l_Repr_addAppParen(v___x_2139_, v_prec_2063_);
return v___x_2140_;
}
v___jp_2141_:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; uint8_t v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2143_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__23));
lean_inc(v___y_2142_);
v___x_2144_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2144_, 0, v___y_2142_);
lean_ctor_set(v___x_2144_, 1, v___x_2143_);
v___x_2145_ = 0;
v___x_2146_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2146_, 0, v___x_2144_);
lean_ctor_set_uint8(v___x_2146_, sizeof(void*)*1, v___x_2145_);
v___x_2147_ = l_Repr_addAppParen(v___x_2146_, v_prec_2063_);
return v___x_2147_;
}
v___jp_2148_:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; uint8_t v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2150_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__25));
lean_inc(v___y_2149_);
v___x_2151_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2151_, 0, v___y_2149_);
lean_ctor_set(v___x_2151_, 1, v___x_2150_);
v___x_2152_ = 0;
v___x_2153_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2153_, 0, v___x_2151_);
lean_ctor_set_uint8(v___x_2153_, sizeof(void*)*1, v___x_2152_);
v___x_2154_ = l_Repr_addAppParen(v___x_2153_, v_prec_2063_);
return v___x_2154_;
}
v___jp_2155_:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; uint8_t v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2157_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__27));
lean_inc(v___y_2156_);
v___x_2158_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2158_, 0, v___y_2156_);
lean_ctor_set(v___x_2158_, 1, v___x_2157_);
v___x_2159_ = 0;
v___x_2160_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2160_, 0, v___x_2158_);
lean_ctor_set_uint8(v___x_2160_, sizeof(void*)*1, v___x_2159_);
v___x_2161_ = l_Repr_addAppParen(v___x_2160_, v_prec_2063_);
return v___x_2161_;
}
v___jp_2162_:
{
lean_object* v___x_2164_; lean_object* v___x_2165_; uint8_t v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2164_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__29));
lean_inc(v___y_2163_);
v___x_2165_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___y_2163_);
lean_ctor_set(v___x_2165_, 1, v___x_2164_);
v___x_2166_ = 0;
v___x_2167_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2167_, 0, v___x_2165_);
lean_ctor_set_uint8(v___x_2167_, sizeof(void*)*1, v___x_2166_);
v___x_2168_ = l_Repr_addAppParen(v___x_2167_, v_prec_2063_);
return v___x_2168_;
}
v___jp_2169_:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; uint8_t v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2171_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__31));
lean_inc(v___y_2170_);
v___x_2172_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___y_2170_);
lean_ctor_set(v___x_2172_, 1, v___x_2171_);
v___x_2173_ = 0;
v___x_2174_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2174_, 0, v___x_2172_);
lean_ctor_set_uint8(v___x_2174_, sizeof(void*)*1, v___x_2173_);
v___x_2175_ = l_Repr_addAppParen(v___x_2174_, v_prec_2063_);
return v___x_2175_;
}
v___jp_2176_:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; uint8_t v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2178_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__33));
lean_inc(v___y_2177_);
v___x_2179_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2179_, 0, v___y_2177_);
lean_ctor_set(v___x_2179_, 1, v___x_2178_);
v___x_2180_ = 0;
v___x_2181_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2181_, 0, v___x_2179_);
lean_ctor_set_uint8(v___x_2181_, sizeof(void*)*1, v___x_2180_);
v___x_2182_ = l_Repr_addAppParen(v___x_2181_, v_prec_2063_);
return v___x_2182_;
}
v___jp_2183_:
{
lean_object* v___x_2185_; lean_object* v___x_2186_; uint8_t v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2185_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__35));
lean_inc(v___y_2184_);
v___x_2186_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2186_, 0, v___y_2184_);
lean_ctor_set(v___x_2186_, 1, v___x_2185_);
v___x_2187_ = 0;
v___x_2188_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2188_, 0, v___x_2186_);
lean_ctor_set_uint8(v___x_2188_, sizeof(void*)*1, v___x_2187_);
v___x_2189_ = l_Repr_addAppParen(v___x_2188_, v_prec_2063_);
return v___x_2189_;
}
v___jp_2190_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; uint8_t v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2192_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__37));
lean_inc(v___y_2191_);
v___x_2193_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2193_, 0, v___y_2191_);
lean_ctor_set(v___x_2193_, 1, v___x_2192_);
v___x_2194_ = 0;
v___x_2195_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2195_, 0, v___x_2193_);
lean_ctor_set_uint8(v___x_2195_, sizeof(void*)*1, v___x_2194_);
v___x_2196_ = l_Repr_addAppParen(v___x_2195_, v_prec_2063_);
return v___x_2196_;
}
v___jp_2197_:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; uint8_t v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2199_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__39));
lean_inc(v___y_2198_);
v___x_2200_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2200_, 0, v___y_2198_);
lean_ctor_set(v___x_2200_, 1, v___x_2199_);
v___x_2201_ = 0;
v___x_2202_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2202_, 0, v___x_2200_);
lean_ctor_set_uint8(v___x_2202_, sizeof(void*)*1, v___x_2201_);
v___x_2203_ = l_Repr_addAppParen(v___x_2202_, v_prec_2063_);
return v___x_2203_;
}
v___jp_2204_:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; uint8_t v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2206_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__41));
lean_inc(v___y_2205_);
v___x_2207_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2207_, 0, v___y_2205_);
lean_ctor_set(v___x_2207_, 1, v___x_2206_);
v___x_2208_ = 0;
v___x_2209_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2209_, 0, v___x_2207_);
lean_ctor_set_uint8(v___x_2209_, sizeof(void*)*1, v___x_2208_);
v___x_2210_ = l_Repr_addAppParen(v___x_2209_, v_prec_2063_);
return v___x_2210_;
}
v___jp_2211_:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; uint8_t v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2213_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__43));
lean_inc(v___y_2212_);
v___x_2214_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___y_2212_);
lean_ctor_set(v___x_2214_, 1, v___x_2213_);
v___x_2215_ = 0;
v___x_2216_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2216_, 0, v___x_2214_);
lean_ctor_set_uint8(v___x_2216_, sizeof(void*)*1, v___x_2215_);
v___x_2217_ = l_Repr_addAppParen(v___x_2216_, v_prec_2063_);
return v___x_2217_;
}
v___jp_2218_:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; uint8_t v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2220_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__45));
lean_inc(v___y_2219_);
v___x_2221_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2221_, 0, v___y_2219_);
lean_ctor_set(v___x_2221_, 1, v___x_2220_);
v___x_2222_ = 0;
v___x_2223_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2223_, 0, v___x_2221_);
lean_ctor_set_uint8(v___x_2223_, sizeof(void*)*1, v___x_2222_);
v___x_2224_ = l_Repr_addAppParen(v___x_2223_, v_prec_2063_);
return v___x_2224_;
}
v___jp_2225_:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; uint8_t v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2227_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprErrorCode_repr___closed__47));
lean_inc(v___y_2226_);
v___x_2228_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2228_, 0, v___y_2226_);
lean_ctor_set(v___x_2228_, 1, v___x_2227_);
v___x_2229_ = 0;
v___x_2230_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2230_, 0, v___x_2228_);
lean_ctor_set_uint8(v___x_2230_, sizeof(void*)*1, v___x_2229_);
v___x_2231_ = l_Repr_addAppParen(v___x_2230_, v_prec_2063_);
return v___x_2231_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprErrorCode_repr___boxed(lean_object* v_x_2548_, lean_object* v_prec_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l_Lasm_WASI_Http_Types_instReprErrorCode_repr(v_x_2548_, v_prec_2549_);
lean_dec(v_prec_2549_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorIdx(uint8_t v_x_2553_){
_start:
{
switch(v_x_2553_)
{
case 0:
{
lean_object* v___x_2554_; 
v___x_2554_ = lean_unsigned_to_nat(0u);
return v___x_2554_;
}
case 1:
{
lean_object* v___x_2555_; 
v___x_2555_ = lean_unsigned_to_nat(1u);
return v___x_2555_;
}
default: 
{
lean_object* v___x_2556_; 
v___x_2556_ = lean_unsigned_to_nat(2u);
return v___x_2556_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorIdx___boxed(lean_object* v_x_2557_){
_start:
{
uint8_t v_x_boxed_2558_; lean_object* v_res_2559_; 
v_x_boxed_2558_ = lean_unbox(v_x_2557_);
v_res_2559_ = l_Lasm_WASI_Http_Types_HeaderError_ctorIdx(v_x_boxed_2558_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorElim___redArg(lean_object* v_k_2560_){
_start:
{
lean_inc(v_k_2560_);
return v_k_2560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorElim___redArg___boxed(lean_object* v_k_2561_){
_start:
{
lean_object* v_res_2562_; 
v_res_2562_ = l_Lasm_WASI_Http_Types_HeaderError_ctorElim___redArg(v_k_2561_);
lean_dec(v_k_2561_);
return v_res_2562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorElim(lean_object* v_motive_2563_, lean_object* v_ctorIdx_2564_, uint8_t v_t_2565_, lean_object* v_h_2566_, lean_object* v_k_2567_){
_start:
{
lean_inc(v_k_2567_);
return v_k_2567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_ctorElim___boxed(lean_object* v_motive_2568_, lean_object* v_ctorIdx_2569_, lean_object* v_t_2570_, lean_object* v_h_2571_, lean_object* v_k_2572_){
_start:
{
uint8_t v_t_boxed_2573_; lean_object* v_res_2574_; 
v_t_boxed_2573_ = lean_unbox(v_t_2570_);
v_res_2574_ = l_Lasm_WASI_Http_Types_HeaderError_ctorElim(v_motive_2568_, v_ctorIdx_2569_, v_t_boxed_2573_, v_h_2571_, v_k_2572_);
lean_dec(v_k_2572_);
lean_dec(v_ctorIdx_2569_);
return v_res_2574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim___redArg(lean_object* v_invalidSyntax_2575_){
_start:
{
lean_inc(v_invalidSyntax_2575_);
return v_invalidSyntax_2575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim___redArg___boxed(lean_object* v_invalidSyntax_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim___redArg(v_invalidSyntax_2576_);
lean_dec(v_invalidSyntax_2576_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim(lean_object* v_motive_2578_, uint8_t v_t_2579_, lean_object* v_h_2580_, lean_object* v_invalidSyntax_2581_){
_start:
{
lean_inc(v_invalidSyntax_2581_);
return v_invalidSyntax_2581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim___boxed(lean_object* v_motive_2582_, lean_object* v_t_2583_, lean_object* v_h_2584_, lean_object* v_invalidSyntax_2585_){
_start:
{
uint8_t v_t_boxed_2586_; lean_object* v_res_2587_; 
v_t_boxed_2586_ = lean_unbox(v_t_2583_);
v_res_2587_ = l_Lasm_WASI_Http_Types_HeaderError_invalidSyntax_elim(v_motive_2582_, v_t_boxed_2586_, v_h_2584_, v_invalidSyntax_2585_);
lean_dec(v_invalidSyntax_2585_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim___redArg(lean_object* v_forbidden_2588_){
_start:
{
lean_inc(v_forbidden_2588_);
return v_forbidden_2588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim___redArg___boxed(lean_object* v_forbidden_2589_){
_start:
{
lean_object* v_res_2590_; 
v_res_2590_ = l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim___redArg(v_forbidden_2589_);
lean_dec(v_forbidden_2589_);
return v_res_2590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim(lean_object* v_motive_2591_, uint8_t v_t_2592_, lean_object* v_h_2593_, lean_object* v_forbidden_2594_){
_start:
{
lean_inc(v_forbidden_2594_);
return v_forbidden_2594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim___boxed(lean_object* v_motive_2595_, lean_object* v_t_2596_, lean_object* v_h_2597_, lean_object* v_forbidden_2598_){
_start:
{
uint8_t v_t_boxed_2599_; lean_object* v_res_2600_; 
v_t_boxed_2599_ = lean_unbox(v_t_2596_);
v_res_2600_ = l_Lasm_WASI_Http_Types_HeaderError_forbidden_elim(v_motive_2595_, v_t_boxed_2599_, v_h_2597_, v_forbidden_2598_);
lean_dec(v_forbidden_2598_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_immutable_elim___redArg(lean_object* v_immutable_2601_){
_start:
{
lean_inc(v_immutable_2601_);
return v_immutable_2601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_immutable_elim___redArg___boxed(lean_object* v_immutable_2602_){
_start:
{
lean_object* v_res_2603_; 
v_res_2603_ = l_Lasm_WASI_Http_Types_HeaderError_immutable_elim___redArg(v_immutable_2602_);
lean_dec(v_immutable_2602_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_immutable_elim(lean_object* v_motive_2604_, uint8_t v_t_2605_, lean_object* v_h_2606_, lean_object* v_immutable_2607_){
_start:
{
lean_inc(v_immutable_2607_);
return v_immutable_2607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_HeaderError_immutable_elim___boxed(lean_object* v_motive_2608_, lean_object* v_t_2609_, lean_object* v_h_2610_, lean_object* v_immutable_2611_){
_start:
{
uint8_t v_t_boxed_2612_; lean_object* v_res_2613_; 
v_t_boxed_2612_ = lean_unbox(v_t_2609_);
v_res_2613_ = l_Lasm_WASI_Http_Types_HeaderError_immutable_elim(v_motive_2608_, v_t_boxed_2612_, v_h_2610_, v_immutable_2611_);
lean_dec(v_immutable_2611_);
return v_res_2613_;
}
}
static uint8_t _init_l_Lasm_WASI_Http_Types_instInhabitedHeaderError_default(void){
_start:
{
uint8_t v___x_2614_; 
v___x_2614_ = 0;
return v___x_2614_;
}
}
static uint8_t _init_l_Lasm_WASI_Http_Types_instInhabitedHeaderError(void){
_start:
{
uint8_t v___x_2615_; 
v___x_2615_ = 0;
return v___x_2615_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Http_Types_instBEqHeaderError_beq(uint8_t v_x_2616_, uint8_t v_y_2617_){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; uint8_t v___x_2620_; 
v___x_2618_ = l_Lasm_WASI_Http_Types_HeaderError_ctorIdx(v_x_2616_);
v___x_2619_ = l_Lasm_WASI_Http_Types_HeaderError_ctorIdx(v_y_2617_);
v___x_2620_ = lean_nat_dec_eq(v___x_2618_, v___x_2619_);
lean_dec(v___x_2619_);
lean_dec(v___x_2618_);
return v___x_2620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instBEqHeaderError_beq___boxed(lean_object* v_x_2621_, lean_object* v_y_2622_){
_start:
{
uint8_t v_x_21__boxed_2623_; uint8_t v_y_22__boxed_2624_; uint8_t v_res_2625_; lean_object* v_r_2626_; 
v_x_21__boxed_2623_ = lean_unbox(v_x_2621_);
v_y_22__boxed_2624_ = lean_unbox(v_y_2622_);
v_res_2625_ = l_Lasm_WASI_Http_Types_instBEqHeaderError_beq(v_x_21__boxed_2623_, v_y_22__boxed_2624_);
v_r_2626_ = lean_box(v_res_2625_);
return v_r_2626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr(uint8_t v_x_2638_, lean_object* v_prec_2639_){
_start:
{
lean_object* v___y_2641_; lean_object* v___y_2648_; lean_object* v___y_2655_; 
switch(v_x_2638_)
{
case 0:
{
lean_object* v___x_2661_; uint8_t v___x_2662_; 
v___x_2661_ = lean_unsigned_to_nat(1024u);
v___x_2662_ = lean_nat_dec_le(v___x_2661_, v_prec_2639_);
if (v___x_2662_ == 0)
{
lean_object* v___x_2663_; 
v___x_2663_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2641_ = v___x_2663_;
goto v___jp_2640_;
}
else
{
lean_object* v___x_2664_; 
v___x_2664_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2641_ = v___x_2664_;
goto v___jp_2640_;
}
}
case 1:
{
lean_object* v___x_2665_; uint8_t v___x_2666_; 
v___x_2665_ = lean_unsigned_to_nat(1024u);
v___x_2666_ = lean_nat_dec_le(v___x_2665_, v_prec_2639_);
if (v___x_2666_ == 0)
{
lean_object* v___x_2667_; 
v___x_2667_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2648_ = v___x_2667_;
goto v___jp_2647_;
}
else
{
lean_object* v___x_2668_; 
v___x_2668_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2648_ = v___x_2668_;
goto v___jp_2647_;
}
}
default: 
{
lean_object* v___x_2669_; uint8_t v___x_2670_; 
v___x_2669_ = lean_unsigned_to_nat(1024u);
v___x_2670_ = lean_nat_dec_le(v___x_2669_, v_prec_2639_);
if (v___x_2670_ == 0)
{
lean_object* v___x_2671_; 
v___x_2671_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__18);
v___y_2655_ = v___x_2671_;
goto v___jp_2654_;
}
else
{
lean_object* v___x_2672_; 
v___x_2672_ = lean_obj_once(&l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19, &l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19_once, _init_l_Lasm_WASI_Http_Types_instReprMethod_repr___closed__19);
v___y_2655_ = v___x_2672_;
goto v___jp_2654_;
}
}
}
v___jp_2640_:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; uint8_t v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2642_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__1));
lean_inc(v___y_2641_);
v___x_2643_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2643_, 0, v___y_2641_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
v___x_2644_ = 0;
v___x_2645_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2645_, 0, v___x_2643_);
lean_ctor_set_uint8(v___x_2645_, sizeof(void*)*1, v___x_2644_);
v___x_2646_ = l_Repr_addAppParen(v___x_2645_, v_prec_2639_);
return v___x_2646_;
}
v___jp_2647_:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; uint8_t v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2649_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__3));
lean_inc(v___y_2648_);
v___x_2650_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2650_, 0, v___y_2648_);
lean_ctor_set(v___x_2650_, 1, v___x_2649_);
v___x_2651_ = 0;
v___x_2652_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2652_, 0, v___x_2650_);
lean_ctor_set_uint8(v___x_2652_, sizeof(void*)*1, v___x_2651_);
v___x_2653_ = l_Repr_addAppParen(v___x_2652_, v_prec_2639_);
return v___x_2653_;
}
v___jp_2654_:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; uint8_t v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v___x_2656_ = ((lean_object*)(l_Lasm_WASI_Http_Types_instReprHeaderError_repr___closed__5));
lean_inc(v___y_2655_);
v___x_2657_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2657_, 0, v___y_2655_);
lean_ctor_set(v___x_2657_, 1, v___x_2656_);
v___x_2658_ = 0;
v___x_2659_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2659_, 0, v___x_2657_);
lean_ctor_set_uint8(v___x_2659_, sizeof(void*)*1, v___x_2658_);
v___x_2660_ = l_Repr_addAppParen(v___x_2659_, v_prec_2639_);
return v___x_2660_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_instReprHeaderError_repr___boxed(lean_object* v_x_2673_, lean_object* v_prec_2674_){
_start:
{
uint8_t v_x_167__boxed_2675_; lean_object* v_res_2676_; 
v_x_167__boxed_2675_ = lean_unbox(v_x_2673_);
v_res_2676_ = l_Lasm_WASI_Http_Types_instReprHeaderError_repr(v_x_167__boxed_2675_, v_prec_2674_);
lean_dec(v_prec_2674_);
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_new___boxed(lean_object* v_a_00___x40___internal___hyg_2680_){
_start:
{
lean_object* v_res_2681_; 
v_res_2681_ = lasm_wasi_http_types_fields_new();
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_fromList___boxed(lean_object* v_entries_2684_, lean_object* v_a_00___x40___internal___hyg_2685_){
_start:
{
lean_object* v_res_2686_; 
v_res_2686_ = lasm_wasi_http_types_fields_from_list(v_entries_2684_);
lean_dec_ref(v_entries_2684_);
return v_res_2686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_get___boxed(lean_object* v_self_2690_, lean_object* v_name_2691_, lean_object* v_a_00___x40___internal___hyg_2692_){
_start:
{
uint32_t v_self_boxed_2693_; lean_object* v_res_2694_; 
v_self_boxed_2693_ = lean_unbox_uint32(v_self_2690_);
lean_dec(v_self_2690_);
v_res_2694_ = lasm_wasi_http_types_fields_get(v_self_boxed_2693_, v_name_2691_);
lean_dec_ref(v_name_2691_);
return v_res_2694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_has___boxed(lean_object* v_self_2698_, lean_object* v_name_2699_, lean_object* v_a_00___x40___internal___hyg_2700_){
_start:
{
uint32_t v_self_boxed_2701_; lean_object* v_res_2702_; 
v_self_boxed_2701_ = lean_unbox_uint32(v_self_2698_);
lean_dec(v_self_2698_);
v_res_2702_ = lasm_wasi_http_types_fields_has(v_self_boxed_2701_, v_name_2699_);
lean_dec_ref(v_name_2699_);
return v_res_2702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_set___boxed(lean_object* v_self_2707_, lean_object* v_name_2708_, lean_object* v_value_2709_, lean_object* v_a_00___x40___internal___hyg_2710_){
_start:
{
uint32_t v_self_boxed_2711_; lean_object* v_res_2712_; 
v_self_boxed_2711_ = lean_unbox_uint32(v_self_2707_);
lean_dec(v_self_2707_);
v_res_2712_ = lasm_wasi_http_types_fields_set(v_self_boxed_2711_, v_name_2708_, v_value_2709_);
lean_dec_ref(v_value_2709_);
lean_dec_ref(v_name_2708_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_delete___boxed(lean_object* v_self_2716_, lean_object* v_name_2717_, lean_object* v_a_00___x40___internal___hyg_2718_){
_start:
{
uint32_t v_self_boxed_2719_; lean_object* v_res_2720_; 
v_self_boxed_2719_ = lean_unbox_uint32(v_self_2716_);
lean_dec(v_self_2716_);
v_res_2720_ = lasm_wasi_http_types_fields_delete(v_self_boxed_2719_, v_name_2717_);
lean_dec_ref(v_name_2717_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_append___boxed(lean_object* v_self_2725_, lean_object* v_name_2726_, lean_object* v_value_2727_, lean_object* v_a_00___x40___internal___hyg_2728_){
_start:
{
uint32_t v_self_boxed_2729_; lean_object* v_res_2730_; 
v_self_boxed_2729_ = lean_unbox_uint32(v_self_2725_);
lean_dec(v_self_2725_);
v_res_2730_ = lasm_wasi_http_types_fields_append(v_self_boxed_2729_, v_name_2726_, v_value_2727_);
lean_dec_ref(v_value_2727_);
lean_dec_ref(v_name_2726_);
return v_res_2730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_entries___boxed(lean_object* v_self_2733_, lean_object* v_a_00___x40___internal___hyg_2734_){
_start:
{
uint32_t v_self_boxed_2735_; lean_object* v_res_2736_; 
v_self_boxed_2735_ = lean_unbox_uint32(v_self_2733_);
lean_dec(v_self_2733_);
v_res_2736_ = lasm_wasi_http_types_fields_entries(v_self_boxed_2735_);
return v_res_2736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_clone___boxed(lean_object* v_self_2739_, lean_object* v_a_00___x40___internal___hyg_2740_){
_start:
{
uint32_t v_self_boxed_2741_; lean_object* v_res_2742_; 
v_self_boxed_2741_ = lean_unbox_uint32(v_self_2739_);
lean_dec(v_self_2739_);
v_res_2742_ = lasm_wasi_http_types_fields_clone(v_self_boxed_2741_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_Fields_drop___boxed(lean_object* v_self_2745_, lean_object* v_a_00___x40___internal___hyg_2746_){
_start:
{
uint32_t v_self_boxed_2747_; lean_object* v_res_2748_; 
v_self_boxed_2747_ = lean_unbox_uint32(v_self_2745_);
lean_dec(v_self_2745_);
v_res_2748_ = lasm_wasi_http_types_fields_drop(v_self_boxed_2747_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_method___boxed(lean_object* v_self_2751_, lean_object* v_a_00___x40___internal___hyg_2752_){
_start:
{
uint32_t v_self_boxed_2753_; lean_object* v_res_2754_; 
v_self_boxed_2753_ = lean_unbox_uint32(v_self_2751_);
lean_dec(v_self_2751_);
v_res_2754_ = lasm_wasi_http_types_incoming_request_method(v_self_boxed_2753_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_pathWithQuery___boxed(lean_object* v_self_2757_, lean_object* v_a_00___x40___internal___hyg_2758_){
_start:
{
uint32_t v_self_boxed_2759_; lean_object* v_res_2760_; 
v_self_boxed_2759_ = lean_unbox_uint32(v_self_2757_);
lean_dec(v_self_2757_);
v_res_2760_ = lasm_wasi_http_types_incoming_request_path_with_query(v_self_boxed_2759_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_scheme___boxed(lean_object* v_self_2763_, lean_object* v_a_00___x40___internal___hyg_2764_){
_start:
{
uint32_t v_self_boxed_2765_; lean_object* v_res_2766_; 
v_self_boxed_2765_ = lean_unbox_uint32(v_self_2763_);
lean_dec(v_self_2763_);
v_res_2766_ = lasm_wasi_http_types_incoming_request_scheme(v_self_boxed_2765_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_authority___boxed(lean_object* v_self_2769_, lean_object* v_a_00___x40___internal___hyg_2770_){
_start:
{
uint32_t v_self_boxed_2771_; lean_object* v_res_2772_; 
v_self_boxed_2771_ = lean_unbox_uint32(v_self_2769_);
lean_dec(v_self_2769_);
v_res_2772_ = lasm_wasi_http_types_incoming_request_authority(v_self_boxed_2771_);
return v_res_2772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_headers___boxed(lean_object* v_self_2775_, lean_object* v_a_00___x40___internal___hyg_2776_){
_start:
{
uint32_t v_self_boxed_2777_; lean_object* v_res_2778_; 
v_self_boxed_2777_ = lean_unbox_uint32(v_self_2775_);
lean_dec(v_self_2775_);
v_res_2778_ = lasm_wasi_http_types_incoming_request_headers(v_self_boxed_2777_);
return v_res_2778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_consume___boxed(lean_object* v_self_2781_, lean_object* v_a_00___x40___internal___hyg_2782_){
_start:
{
uint32_t v_self_boxed_2783_; lean_object* v_res_2784_; 
v_self_boxed_2783_ = lean_unbox_uint32(v_self_2781_);
lean_dec(v_self_2781_);
v_res_2784_ = lasm_wasi_http_types_incoming_request_consume(v_self_boxed_2783_);
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingRequest_drop___boxed(lean_object* v_self_2787_, lean_object* v_a_00___x40___internal___hyg_2788_){
_start:
{
uint32_t v_self_boxed_2789_; lean_object* v_res_2790_; 
v_self_boxed_2789_ = lean_unbox_uint32(v_self_2787_);
lean_dec(v_self_2787_);
v_res_2790_ = lasm_wasi_http_types_incoming_request_drop(v_self_boxed_2789_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_new___boxed(lean_object* v_headers_2793_, lean_object* v_a_00___x40___internal___hyg_2794_){
_start:
{
uint32_t v_headers_boxed_2795_; lean_object* v_res_2796_; 
v_headers_boxed_2795_ = lean_unbox_uint32(v_headers_2793_);
lean_dec(v_headers_2793_);
v_res_2796_ = lasm_wasi_http_types_outgoing_request_new(v_headers_boxed_2795_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_body___boxed(lean_object* v_self_2799_, lean_object* v_a_00___x40___internal___hyg_2800_){
_start:
{
uint32_t v_self_boxed_2801_; lean_object* v_res_2802_; 
v_self_boxed_2801_ = lean_unbox_uint32(v_self_2799_);
lean_dec(v_self_2799_);
v_res_2802_ = lasm_wasi_http_types_outgoing_request_body(v_self_boxed_2801_);
return v_res_2802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_method___boxed(lean_object* v_self_2805_, lean_object* v_a_00___x40___internal___hyg_2806_){
_start:
{
uint32_t v_self_boxed_2807_; lean_object* v_res_2808_; 
v_self_boxed_2807_ = lean_unbox_uint32(v_self_2805_);
lean_dec(v_self_2805_);
v_res_2808_ = lasm_wasi_http_types_outgoing_request_method(v_self_boxed_2807_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_setMethod___boxed(lean_object* v_self_2812_, lean_object* v_method_2813_, lean_object* v_a_00___x40___internal___hyg_2814_){
_start:
{
uint32_t v_self_boxed_2815_; lean_object* v_res_2816_; 
v_self_boxed_2815_ = lean_unbox_uint32(v_self_2812_);
lean_dec(v_self_2812_);
v_res_2816_ = lasm_wasi_http_types_outgoing_request_set_method(v_self_boxed_2815_, v_method_2813_);
lean_dec(v_method_2813_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_pathWithQuery___boxed(lean_object* v_self_2819_, lean_object* v_a_00___x40___internal___hyg_2820_){
_start:
{
uint32_t v_self_boxed_2821_; lean_object* v_res_2822_; 
v_self_boxed_2821_ = lean_unbox_uint32(v_self_2819_);
lean_dec(v_self_2819_);
v_res_2822_ = lasm_wasi_http_types_outgoing_request_path_with_query(v_self_boxed_2821_);
return v_res_2822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_setPathWithQuery___boxed(lean_object* v_self_2826_, lean_object* v_pathWithQuery_2827_, lean_object* v_a_00___x40___internal___hyg_2828_){
_start:
{
uint32_t v_self_boxed_2829_; lean_object* v_res_2830_; 
v_self_boxed_2829_ = lean_unbox_uint32(v_self_2826_);
lean_dec(v_self_2826_);
v_res_2830_ = lasm_wasi_http_types_outgoing_request_set_path_with_query(v_self_boxed_2829_, v_pathWithQuery_2827_);
lean_dec(v_pathWithQuery_2827_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_scheme___boxed(lean_object* v_self_2833_, lean_object* v_a_00___x40___internal___hyg_2834_){
_start:
{
uint32_t v_self_boxed_2835_; lean_object* v_res_2836_; 
v_self_boxed_2835_ = lean_unbox_uint32(v_self_2833_);
lean_dec(v_self_2833_);
v_res_2836_ = lasm_wasi_http_types_outgoing_request_scheme(v_self_boxed_2835_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_setScheme___boxed(lean_object* v_self_2840_, lean_object* v_scheme_2841_, lean_object* v_a_00___x40___internal___hyg_2842_){
_start:
{
uint32_t v_self_boxed_2843_; lean_object* v_res_2844_; 
v_self_boxed_2843_ = lean_unbox_uint32(v_self_2840_);
lean_dec(v_self_2840_);
v_res_2844_ = lasm_wasi_http_types_outgoing_request_set_scheme(v_self_boxed_2843_, v_scheme_2841_);
lean_dec(v_scheme_2841_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_authority___boxed(lean_object* v_self_2847_, lean_object* v_a_00___x40___internal___hyg_2848_){
_start:
{
uint32_t v_self_boxed_2849_; lean_object* v_res_2850_; 
v_self_boxed_2849_ = lean_unbox_uint32(v_self_2847_);
lean_dec(v_self_2847_);
v_res_2850_ = lasm_wasi_http_types_outgoing_request_authority(v_self_boxed_2849_);
return v_res_2850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_setAuthority___boxed(lean_object* v_self_2854_, lean_object* v_authority_2855_, lean_object* v_a_00___x40___internal___hyg_2856_){
_start:
{
uint32_t v_self_boxed_2857_; lean_object* v_res_2858_; 
v_self_boxed_2857_ = lean_unbox_uint32(v_self_2854_);
lean_dec(v_self_2854_);
v_res_2858_ = lasm_wasi_http_types_outgoing_request_set_authority(v_self_boxed_2857_, v_authority_2855_);
lean_dec(v_authority_2855_);
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_headers___boxed(lean_object* v_self_2861_, lean_object* v_a_00___x40___internal___hyg_2862_){
_start:
{
uint32_t v_self_boxed_2863_; lean_object* v_res_2864_; 
v_self_boxed_2863_ = lean_unbox_uint32(v_self_2861_);
lean_dec(v_self_2861_);
v_res_2864_ = lasm_wasi_http_types_outgoing_request_headers(v_self_boxed_2863_);
return v_res_2864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingRequest_drop___boxed(lean_object* v_self_2867_, lean_object* v_a_00___x40___internal___hyg_2868_){
_start:
{
uint32_t v_self_boxed_2869_; lean_object* v_res_2870_; 
v_self_boxed_2869_ = lean_unbox_uint32(v_self_2867_);
lean_dec(v_self_2867_);
v_res_2870_ = lasm_wasi_http_types_outgoing_request_drop(v_self_boxed_2869_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_new___boxed(lean_object* v_a_00___x40___internal___hyg_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = lasm_wasi_http_types_request_options_new();
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_connectTimeout___boxed(lean_object* v_self_2876_, lean_object* v_a_00___x40___internal___hyg_2877_){
_start:
{
uint32_t v_self_boxed_2878_; lean_object* v_res_2879_; 
v_self_boxed_2878_ = lean_unbox_uint32(v_self_2876_);
lean_dec(v_self_2876_);
v_res_2879_ = lasm_wasi_http_types_request_options_connect_timeout(v_self_boxed_2878_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_setConnectTimeout___boxed(lean_object* v_self_2883_, lean_object* v_duration_2884_, lean_object* v_a_00___x40___internal___hyg_2885_){
_start:
{
uint32_t v_self_boxed_2886_; lean_object* v_res_2887_; 
v_self_boxed_2886_ = lean_unbox_uint32(v_self_2883_);
lean_dec(v_self_2883_);
v_res_2887_ = lasm_wasi_http_types_request_options_set_connect_timeout(v_self_boxed_2886_, v_duration_2884_);
lean_dec(v_duration_2884_);
return v_res_2887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_firstByteTimeout___boxed(lean_object* v_self_2890_, lean_object* v_a_00___x40___internal___hyg_2891_){
_start:
{
uint32_t v_self_boxed_2892_; lean_object* v_res_2893_; 
v_self_boxed_2892_ = lean_unbox_uint32(v_self_2890_);
lean_dec(v_self_2890_);
v_res_2893_ = lasm_wasi_http_types_request_options_first_byte_timeout(v_self_boxed_2892_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_setFirstByteTimeout___boxed(lean_object* v_self_2897_, lean_object* v_duration_2898_, lean_object* v_a_00___x40___internal___hyg_2899_){
_start:
{
uint32_t v_self_boxed_2900_; lean_object* v_res_2901_; 
v_self_boxed_2900_ = lean_unbox_uint32(v_self_2897_);
lean_dec(v_self_2897_);
v_res_2901_ = lasm_wasi_http_types_request_options_set_first_byte_timeout(v_self_boxed_2900_, v_duration_2898_);
lean_dec(v_duration_2898_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_betweenBytesTimeout___boxed(lean_object* v_self_2904_, lean_object* v_a_00___x40___internal___hyg_2905_){
_start:
{
uint32_t v_self_boxed_2906_; lean_object* v_res_2907_; 
v_self_boxed_2906_ = lean_unbox_uint32(v_self_2904_);
lean_dec(v_self_2904_);
v_res_2907_ = lasm_wasi_http_types_request_options_between_bytes_timeout(v_self_boxed_2906_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_setBetweenBytesTimeout___boxed(lean_object* v_self_2911_, lean_object* v_duration_2912_, lean_object* v_a_00___x40___internal___hyg_2913_){
_start:
{
uint32_t v_self_boxed_2914_; lean_object* v_res_2915_; 
v_self_boxed_2914_ = lean_unbox_uint32(v_self_2911_);
lean_dec(v_self_2911_);
v_res_2915_ = lasm_wasi_http_types_request_options_set_between_bytes_timeout(v_self_boxed_2914_, v_duration_2912_);
lean_dec(v_duration_2912_);
return v_res_2915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_RequestOptions_drop___boxed(lean_object* v_self_2918_, lean_object* v_a_00___x40___internal___hyg_2919_){
_start:
{
uint32_t v_self_boxed_2920_; lean_object* v_res_2921_; 
v_self_boxed_2920_ = lean_unbox_uint32(v_self_2918_);
lean_dec(v_self_2918_);
v_res_2921_ = lasm_wasi_http_types_request_options_drop(v_self_boxed_2920_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ResponseOutparam_set___boxed(lean_object* v_param_2925_, lean_object* v_response_2926_, lean_object* v_a_00___x40___internal___hyg_2927_){
_start:
{
uint32_t v_param_boxed_2928_; lean_object* v_res_2929_; 
v_param_boxed_2928_ = lean_unbox_uint32(v_param_2925_);
lean_dec(v_param_2925_);
v_res_2929_ = lasm_wasi_http_types_response_outparam_set(v_param_boxed_2928_, v_response_2926_);
lean_dec_ref(v_response_2926_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_ResponseOutparam_drop___boxed(lean_object* v_self_2932_, lean_object* v_a_00___x40___internal___hyg_2933_){
_start:
{
uint32_t v_self_boxed_2934_; lean_object* v_res_2935_; 
v_self_boxed_2934_ = lean_unbox_uint32(v_self_2932_);
lean_dec(v_self_2932_);
v_res_2935_ = lasm_wasi_http_types_response_outparam_drop(v_self_boxed_2934_);
return v_res_2935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingResponse_status___boxed(lean_object* v_self_2938_, lean_object* v_a_00___x40___internal___hyg_2939_){
_start:
{
uint32_t v_self_boxed_2940_; lean_object* v_res_2941_; 
v_self_boxed_2940_ = lean_unbox_uint32(v_self_2938_);
lean_dec(v_self_2938_);
v_res_2941_ = lasm_wasi_http_types_incoming_response_status(v_self_boxed_2940_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingResponse_headers___boxed(lean_object* v_self_2944_, lean_object* v_a_00___x40___internal___hyg_2945_){
_start:
{
uint32_t v_self_boxed_2946_; lean_object* v_res_2947_; 
v_self_boxed_2946_ = lean_unbox_uint32(v_self_2944_);
lean_dec(v_self_2944_);
v_res_2947_ = lasm_wasi_http_types_incoming_response_headers(v_self_boxed_2946_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingResponse_consume___boxed(lean_object* v_self_2950_, lean_object* v_a_00___x40___internal___hyg_2951_){
_start:
{
uint32_t v_self_boxed_2952_; lean_object* v_res_2953_; 
v_self_boxed_2952_ = lean_unbox_uint32(v_self_2950_);
lean_dec(v_self_2950_);
v_res_2953_ = lasm_wasi_http_types_incoming_response_consume(v_self_boxed_2952_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingResponse_drop___boxed(lean_object* v_self_2956_, lean_object* v_a_00___x40___internal___hyg_2957_){
_start:
{
uint32_t v_self_boxed_2958_; lean_object* v_res_2959_; 
v_self_boxed_2958_ = lean_unbox_uint32(v_self_2956_);
lean_dec(v_self_2956_);
v_res_2959_ = lasm_wasi_http_types_incoming_response_drop(v_self_boxed_2958_);
return v_res_2959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingBody_stream___boxed(lean_object* v_self_2962_, lean_object* v_a_00___x40___internal___hyg_2963_){
_start:
{
uint32_t v_self_boxed_2964_; lean_object* v_res_2965_; 
v_self_boxed_2964_ = lean_unbox_uint32(v_self_2962_);
lean_dec(v_self_2962_);
v_res_2965_ = lasm_wasi_http_types_incoming_body_stream(v_self_boxed_2964_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingBody_finish___boxed(lean_object* v_this_2968_, lean_object* v_a_00___x40___internal___hyg_2969_){
_start:
{
uint32_t v_this_boxed_2970_; lean_object* v_res_2971_; 
v_this_boxed_2970_ = lean_unbox_uint32(v_this_2968_);
lean_dec(v_this_2968_);
v_res_2971_ = lasm_wasi_http_types_incoming_body_finish(v_this_boxed_2970_);
return v_res_2971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_IncomingBody_drop___boxed(lean_object* v_self_2974_, lean_object* v_a_00___x40___internal___hyg_2975_){
_start:
{
uint32_t v_self_boxed_2976_; lean_object* v_res_2977_; 
v_self_boxed_2976_ = lean_unbox_uint32(v_self_2974_);
lean_dec(v_self_2974_);
v_res_2977_ = lasm_wasi_http_types_incoming_body_drop(v_self_boxed_2976_);
return v_res_2977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureTrailers_subscribe___boxed(lean_object* v_self_2980_, lean_object* v_a_00___x40___internal___hyg_2981_){
_start:
{
uint32_t v_self_boxed_2982_; lean_object* v_res_2983_; 
v_self_boxed_2982_ = lean_unbox_uint32(v_self_2980_);
lean_dec(v_self_2980_);
v_res_2983_ = lasm_wasi_http_types_future_trailers_subscribe(v_self_boxed_2982_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureTrailers_get___boxed(lean_object* v_self_2986_, lean_object* v_a_00___x40___internal___hyg_2987_){
_start:
{
uint32_t v_self_boxed_2988_; lean_object* v_res_2989_; 
v_self_boxed_2988_ = lean_unbox_uint32(v_self_2986_);
lean_dec(v_self_2986_);
v_res_2989_ = lasm_wasi_http_types_future_trailers_get(v_self_boxed_2988_);
return v_res_2989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureTrailers_drop___boxed(lean_object* v_self_2992_, lean_object* v_a_00___x40___internal___hyg_2993_){
_start:
{
uint32_t v_self_boxed_2994_; lean_object* v_res_2995_; 
v_self_boxed_2994_ = lean_unbox_uint32(v_self_2992_);
lean_dec(v_self_2992_);
v_res_2995_ = lasm_wasi_http_types_future_trailers_drop(v_self_boxed_2994_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_new___boxed(lean_object* v_headers_2998_, lean_object* v_a_00___x40___internal___hyg_2999_){
_start:
{
uint32_t v_headers_boxed_3000_; lean_object* v_res_3001_; 
v_headers_boxed_3000_ = lean_unbox_uint32(v_headers_2998_);
lean_dec(v_headers_2998_);
v_res_3001_ = lasm_wasi_http_types_outgoing_response_new(v_headers_boxed_3000_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_statusCode___boxed(lean_object* v_self_3004_, lean_object* v_a_00___x40___internal___hyg_3005_){
_start:
{
uint32_t v_self_boxed_3006_; lean_object* v_res_3007_; 
v_self_boxed_3006_ = lean_unbox_uint32(v_self_3004_);
lean_dec(v_self_3004_);
v_res_3007_ = lasm_wasi_http_types_outgoing_response_status_code(v_self_boxed_3006_);
return v_res_3007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_setStatusCode___boxed(lean_object* v_self_3011_, lean_object* v_statusCode_3012_, lean_object* v_a_00___x40___internal___hyg_3013_){
_start:
{
uint32_t v_self_boxed_3014_; uint16_t v_statusCode_boxed_3015_; lean_object* v_res_3016_; 
v_self_boxed_3014_ = lean_unbox_uint32(v_self_3011_);
lean_dec(v_self_3011_);
v_statusCode_boxed_3015_ = lean_unbox(v_statusCode_3012_);
v_res_3016_ = lasm_wasi_http_types_outgoing_response_set_status_code(v_self_boxed_3014_, v_statusCode_boxed_3015_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_headers___boxed(lean_object* v_self_3019_, lean_object* v_a_00___x40___internal___hyg_3020_){
_start:
{
uint32_t v_self_boxed_3021_; lean_object* v_res_3022_; 
v_self_boxed_3021_ = lean_unbox_uint32(v_self_3019_);
lean_dec(v_self_3019_);
v_res_3022_ = lasm_wasi_http_types_outgoing_response_headers(v_self_boxed_3021_);
return v_res_3022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_body___boxed(lean_object* v_self_3025_, lean_object* v_a_00___x40___internal___hyg_3026_){
_start:
{
uint32_t v_self_boxed_3027_; lean_object* v_res_3028_; 
v_self_boxed_3027_ = lean_unbox_uint32(v_self_3025_);
lean_dec(v_self_3025_);
v_res_3028_ = lasm_wasi_http_types_outgoing_response_body(v_self_boxed_3027_);
return v_res_3028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingResponse_drop___boxed(lean_object* v_self_3031_, lean_object* v_a_00___x40___internal___hyg_3032_){
_start:
{
uint32_t v_self_boxed_3033_; lean_object* v_res_3034_; 
v_self_boxed_3033_ = lean_unbox_uint32(v_self_3031_);
lean_dec(v_self_3031_);
v_res_3034_ = lasm_wasi_http_types_outgoing_response_drop(v_self_boxed_3033_);
return v_res_3034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingBody_write___boxed(lean_object* v_self_3037_, lean_object* v_a_00___x40___internal___hyg_3038_){
_start:
{
uint32_t v_self_boxed_3039_; lean_object* v_res_3040_; 
v_self_boxed_3039_ = lean_unbox_uint32(v_self_3037_);
lean_dec(v_self_3037_);
v_res_3040_ = lasm_wasi_http_types_outgoing_body_write(v_self_boxed_3039_);
return v_res_3040_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingBody_finish___boxed(lean_object* v_this_3044_, lean_object* v_trailers_3045_, lean_object* v_a_00___x40___internal___hyg_3046_){
_start:
{
uint32_t v_this_boxed_3047_; lean_object* v_res_3048_; 
v_this_boxed_3047_ = lean_unbox_uint32(v_this_3044_);
lean_dec(v_this_3044_);
v_res_3048_ = lasm_wasi_http_types_outgoing_body_finish(v_this_boxed_3047_, v_trailers_3045_);
lean_dec(v_trailers_3045_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_OutgoingBody_drop___boxed(lean_object* v_self_3051_, lean_object* v_a_00___x40___internal___hyg_3052_){
_start:
{
uint32_t v_self_boxed_3053_; lean_object* v_res_3054_; 
v_self_boxed_3053_ = lean_unbox_uint32(v_self_3051_);
lean_dec(v_self_3051_);
v_res_3054_ = lasm_wasi_http_types_outgoing_body_drop(v_self_boxed_3053_);
return v_res_3054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureIncomingResponse_subscribe___boxed(lean_object* v_self_3057_, lean_object* v_a_00___x40___internal___hyg_3058_){
_start:
{
uint32_t v_self_boxed_3059_; lean_object* v_res_3060_; 
v_self_boxed_3059_ = lean_unbox_uint32(v_self_3057_);
lean_dec(v_self_3057_);
v_res_3060_ = lasm_wasi_http_types_future_incoming_response_subscribe(v_self_boxed_3059_);
return v_res_3060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureIncomingResponse_get___boxed(lean_object* v_self_3063_, lean_object* v_a_00___x40___internal___hyg_3064_){
_start:
{
uint32_t v_self_boxed_3065_; lean_object* v_res_3066_; 
v_self_boxed_3065_ = lean_unbox_uint32(v_self_3063_);
lean_dec(v_self_3063_);
v_res_3066_ = lasm_wasi_http_types_future_incoming_response_get(v_self_boxed_3065_);
return v_res_3066_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_FutureIncomingResponse_drop___boxed(lean_object* v_self_3069_, lean_object* v_a_00___x40___internal___hyg_3070_){
_start:
{
uint32_t v_self_boxed_3071_; lean_object* v_res_3072_; 
v_self_boxed_3071_ = lean_unbox_uint32(v_self_3069_);
lean_dec(v_self_3069_);
v_res_3072_ = lasm_wasi_http_types_future_incoming_response_drop(v_self_boxed_3071_);
return v_res_3072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Http_Types_httpErrorCode___boxed(lean_object* v_err_3075_, lean_object* v_a_00___x40___internal___hyg_3076_){
_start:
{
uint32_t v_err_boxed_3077_; lean_object* v_res_3078_; 
v_err_boxed_3077_ = lean_unbox_uint32(v_err_3075_);
lean_dec(v_err_3075_);
v_res_3078_ = lasm_wasi_http_types_http_error_code(v_err_boxed_3077_);
return v_res_3078_;
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
