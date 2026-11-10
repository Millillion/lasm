// Lean compiler output
// Module: Lasm.WASI.Io.Streams
// Imports: public import Init public meta import Init public import Lasm.WASI.Io.Error public import Lasm.WASI.Io.Poll
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint64_t lean_uint32_to_uint64(uint32_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lasm_WASI_Io_Error_instReprError_repr___redArg(uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lasm_WASI_Io_Streams_instInhabitedInputStream_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Io_Streams_instInhabitedInputStream;
LEAN_EXPORT uint8_t l_Lasm_WASI_Io_Streams_instBEqInputStream_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instBEqInputStream_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Io_Streams_instBEqInputStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Io_Streams_instBEqInputStream_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Io_Streams_instBEqInputStream___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instBEqInputStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Streams_instBEqInputStream = (const lean_object*)&l_Lasm_WASI_Io_Streams_instBEqInputStream___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Io_Streams_instHashableInputStream_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instHashableInputStream_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Io_Streams_instHashableInputStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Io_Streams_instHashableInputStream_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Io_Streams_instHashableInputStream___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instHashableInputStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Streams_instHashableInputStream = (const lean_object*)&l_Lasm_WASI_Io_Streams_instHashableInputStream___closed__0_value;
static const lean_string_object l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__0_value;
static const lean_string_object l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "handle"};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__2_value)}};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__3_value;
static const lean_string_object l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__3_value),((lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__6 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__7;
static const lean_string_object l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__9;
static lean_once_cell_t l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__10;
static const lean_ctor_object l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__8_value)}};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__12 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Io_Streams_instReprInputStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Io_Streams_instReprInputStream_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprInputStream___closed__0_value;
LEAN_EXPORT uint32_t l_Lasm_WASI_Io_Streams_instInhabitedOutputStream_default;
LEAN_EXPORT uint32_t l_Lasm_WASI_Io_Streams_instInhabitedOutputStream;
LEAN_EXPORT uint8_t l_Lasm_WASI_Io_Streams_instBEqOutputStream_beq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instBEqOutputStream_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Io_Streams_instBEqOutputStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Io_Streams_instBEqOutputStream_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Io_Streams_instBEqOutputStream___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instBEqOutputStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Streams_instBEqOutputStream = (const lean_object*)&l_Lasm_WASI_Io_Streams_instBEqOutputStream___closed__0_value;
LEAN_EXPORT uint64_t l_Lasm_WASI_Io_Streams_instHashableOutputStream_hash(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instHashableOutputStream_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_WASI_Io_Streams_instHashableOutputStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Io_Streams_instHashableOutputStream_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Io_Streams_instHashableOutputStream___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instHashableOutputStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Streams_instHashableOutputStream = (const lean_object*)&l_Lasm_WASI_Io_Streams_instHashableOutputStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprOutputStream_repr___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprOutputStream_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprOutputStream_repr(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprOutputStream_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Io_Streams_instReprOutputStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Io_Streams_instReprOutputStream_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Io_Streams_instReprOutputStream___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprOutputStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Streams_instReprOutputStream = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprOutputStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_closed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_closed_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_closed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_closed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_WASI_Io_Streams_instInhabitedStreamError_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_WASI_Io_Streams_instInhabitedStreamError_default___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instInhabitedStreamError_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Streams_instInhabitedStreamError_default = (const lean_object*)&l_Lasm_WASI_Io_Streams_instInhabitedStreamError_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Streams_instInhabitedStreamError = (const lean_object*)&l_Lasm_WASI_Io_Streams_instInhabitedStreamError_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_WASI_Io_Streams_instBEqStreamError_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instBEqStreamError_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Io_Streams_instBEqStreamError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Io_Streams_instBEqStreamError_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Io_Streams_instBEqStreamError___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instBEqStreamError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Streams_instBEqStreamError = (const lean_object*)&l_Lasm_WASI_Io_Streams_instBEqStreamError___closed__0_value;
static const lean_string_object l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.WASI.Io.Streams.StreamError.closed"};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__0_value;
static const lean_ctor_object l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__0_value)}};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__1 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__1_value;
static const lean_string_object l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Lasm.WASI.Io.Streams.StreamError.lastOperationFailed"};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__2 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__2_value;
static const lean_ctor_object l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__2_value)}};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__3 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__3_value;
static const lean_ctor_object l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__4 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__4_value;
static lean_once_cell_t l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5;
static lean_once_cell_t l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6;
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_WASI_Io_Streams_instReprStreamError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_WASI_Io_Streams_instReprStreamError_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError___closed__0 = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprStreamError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError = (const lean_object*)&l_Lasm_WASI_Io_Streams_instReprStreamError___closed__0_value;
lean_object* lasm_wasi_io_streams_input_stream_read(uint32_t, uint64_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_read___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_input_stream_blocking_read(uint32_t, uint64_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_blockingRead___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_input_stream_skip(uint32_t, uint64_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_skip___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_input_stream_blocking_skip(uint32_t, uint64_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_blockingSkip___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_input_stream_subscribe(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_subscribe___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_input_stream_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_drop___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_check_write(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_checkWrite___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_write(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_write___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_blocking_write_and_flush(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_blockingWriteAndFlush___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_flush(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_flush___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_blocking_flush(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_blockingFlush___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_subscribe(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_subscribe___boxed(lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_write_zeroes(uint32_t, uint64_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_writeZeroes___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_blocking_write_zeroes_and_flush(uint32_t, uint64_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_blockingWriteZeroesAndFlush___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_splice(uint32_t, uint32_t, uint64_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_splice___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_blocking_splice(uint32_t, uint32_t, uint64_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_blockingSplice___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_wasi_io_streams_output_stream_drop(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_drop___boxed(lean_object*, lean_object*);
static uint32_t _init_l_Lasm_WASI_Io_Streams_instInhabitedInputStream_default(void){
_start:
{
uint32_t v___x_1_; 
v___x_1_ = 0;
return v___x_1_;
}
}
static uint32_t _init_l_Lasm_WASI_Io_Streams_instInhabitedInputStream(void){
_start:
{
uint32_t v___x_2_; 
v___x_2_ = 0;
return v___x_2_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Io_Streams_instBEqInputStream_beq(uint32_t v_x_3_, uint32_t v_x_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_uint32_dec_eq(v_x_3_, v_x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instBEqInputStream_beq___boxed(lean_object* v_x_6_, lean_object* v_x_7_){
_start:
{
uint32_t v_x_45__boxed_8_; uint32_t v_x_46__boxed_9_; uint8_t v_res_10_; lean_object* v_r_11_; 
v_x_45__boxed_8_ = lean_unbox_uint32(v_x_6_);
lean_dec(v_x_6_);
v_x_46__boxed_9_ = lean_unbox_uint32(v_x_7_);
lean_dec(v_x_7_);
v_res_10_ = l_Lasm_WASI_Io_Streams_instBEqInputStream_beq(v_x_45__boxed_8_, v_x_46__boxed_9_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Io_Streams_instHashableInputStream_hash(uint32_t v_x_14_){
_start:
{
uint64_t v___x_15_; uint64_t v___x_16_; uint64_t v___x_17_; 
v___x_15_ = 0ULL;
v___x_16_ = lean_uint32_to_uint64(v_x_14_);
v___x_17_ = lean_uint64_mix_hash(v___x_15_, v___x_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instHashableInputStream_hash___boxed(lean_object* v_x_18_){
_start:
{
uint32_t v_x_26__boxed_19_; uint64_t v_res_20_; lean_object* v_r_21_; 
v_x_26__boxed_19_ = lean_unbox_uint32(v_x_18_);
lean_dec(v_x_18_);
v_res_20_ = l_Lasm_WASI_Io_Streams_instHashableInputStream_hash(v_x_26__boxed_19_);
v_r_21_ = lean_box_uint64(v_res_20_);
return v_r_21_;
}
}
static lean_object* _init_l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_unsigned_to_nat(10u);
v___x_38_ = lean_nat_to_int(v___x_37_);
return v___x_38_;
}
}
static lean_object* _init_l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = ((lean_object*)(l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__0));
v___x_41_ = lean_string_length(v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__9, &l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__9_once, _init_l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__9);
v___x_43_ = lean_nat_to_int(v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg(uint32_t v_x_48_){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; uint8_t v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_49_ = ((lean_object*)(l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__6));
v___x_50_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__7, &l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__7);
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
v___x_58_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__10, &l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__10);
v___x_59_ = ((lean_object*)(l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__11));
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___x_57_);
v___x_61_ = ((lean_object*)(l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__12));
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
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___boxed(lean_object* v_x_65_){
_start:
{
uint32_t v_x_131__boxed_66_; lean_object* v_res_67_; 
v_x_131__boxed_66_ = lean_unbox_uint32(v_x_65_);
lean_dec(v_x_65_);
v_res_67_ = l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg(v_x_131__boxed_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr(uint32_t v_x_68_, lean_object* v_prec_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg(v_x_68_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprInputStream_repr___boxed(lean_object* v_x_71_, lean_object* v_prec_72_){
_start:
{
uint32_t v_x_190__boxed_73_; lean_object* v_res_74_; 
v_x_190__boxed_73_ = lean_unbox_uint32(v_x_71_);
lean_dec(v_x_71_);
v_res_74_ = l_Lasm_WASI_Io_Streams_instReprInputStream_repr(v_x_190__boxed_73_, v_prec_72_);
lean_dec(v_prec_72_);
return v_res_74_;
}
}
static uint32_t _init_l_Lasm_WASI_Io_Streams_instInhabitedOutputStream_default(void){
_start:
{
uint32_t v___x_77_; 
v___x_77_ = 0;
return v___x_77_;
}
}
static uint32_t _init_l_Lasm_WASI_Io_Streams_instInhabitedOutputStream(void){
_start:
{
uint32_t v___x_78_; 
v___x_78_ = 0;
return v___x_78_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Io_Streams_instBEqOutputStream_beq(uint32_t v_x_79_, uint32_t v_x_80_){
_start:
{
uint8_t v___x_81_; 
v___x_81_ = lean_uint32_dec_eq(v_x_79_, v_x_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instBEqOutputStream_beq___boxed(lean_object* v_x_82_, lean_object* v_x_83_){
_start:
{
uint32_t v_x_45__boxed_84_; uint32_t v_x_46__boxed_85_; uint8_t v_res_86_; lean_object* v_r_87_; 
v_x_45__boxed_84_ = lean_unbox_uint32(v_x_82_);
lean_dec(v_x_82_);
v_x_46__boxed_85_ = lean_unbox_uint32(v_x_83_);
lean_dec(v_x_83_);
v_res_86_ = l_Lasm_WASI_Io_Streams_instBEqOutputStream_beq(v_x_45__boxed_84_, v_x_46__boxed_85_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT uint64_t l_Lasm_WASI_Io_Streams_instHashableOutputStream_hash(uint32_t v_x_90_){
_start:
{
uint64_t v___x_91_; uint64_t v___x_92_; uint64_t v___x_93_; 
v___x_91_ = 0ULL;
v___x_92_ = lean_uint32_to_uint64(v_x_90_);
v___x_93_ = lean_uint64_mix_hash(v___x_91_, v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instHashableOutputStream_hash___boxed(lean_object* v_x_94_){
_start:
{
uint32_t v_x_26__boxed_95_; uint64_t v_res_96_; lean_object* v_r_97_; 
v_x_26__boxed_95_ = lean_unbox_uint32(v_x_94_);
lean_dec(v_x_94_);
v_res_96_ = l_Lasm_WASI_Io_Streams_instHashableOutputStream_hash(v_x_26__boxed_95_);
v_r_97_ = lean_box_uint64(v_res_96_);
return v_r_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprOutputStream_repr___redArg(uint32_t v_x_100_){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_101_ = ((lean_object*)(l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__6));
v___x_102_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__7, &l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__7_once, _init_l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__7);
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
v___x_110_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__10, &l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__10_once, _init_l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__10);
v___x_111_ = ((lean_object*)(l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__11));
v___x_112_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set(v___x_112_, 1, v___x_109_);
v___x_113_ = ((lean_object*)(l_Lasm_WASI_Io_Streams_instReprInputStream_repr___redArg___closed__12));
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
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprOutputStream_repr___redArg___boxed(lean_object* v_x_117_){
_start:
{
uint32_t v_x_107__boxed_118_; lean_object* v_res_119_; 
v_x_107__boxed_118_ = lean_unbox_uint32(v_x_117_);
lean_dec(v_x_117_);
v_res_119_ = l_Lasm_WASI_Io_Streams_instReprOutputStream_repr___redArg(v_x_107__boxed_118_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprOutputStream_repr(uint32_t v_x_120_, lean_object* v_prec_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lasm_WASI_Io_Streams_instReprOutputStream_repr___redArg(v_x_120_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprOutputStream_repr___boxed(lean_object* v_x_123_, lean_object* v_prec_124_){
_start:
{
uint32_t v_x_152__boxed_125_; lean_object* v_res_126_; 
v_x_152__boxed_125_ = lean_unbox_uint32(v_x_123_);
lean_dec(v_x_123_);
v_res_126_ = l_Lasm_WASI_Io_Streams_instReprOutputStream_repr(v_x_152__boxed_125_, v_prec_124_);
lean_dec(v_prec_124_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorIdx(lean_object* v_x_129_){
_start:
{
if (lean_obj_tag(v_x_129_) == 0)
{
lean_object* v___x_130_; 
v___x_130_ = lean_unsigned_to_nat(0u);
return v___x_130_;
}
else
{
lean_object* v___x_131_; 
v___x_131_ = lean_unsigned_to_nat(1u);
return v___x_131_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorIdx___boxed(lean_object* v_x_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_Lasm_WASI_Io_Streams_StreamError_ctorIdx(v_x_132_);
lean_dec(v_x_132_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(lean_object* v_t_134_, lean_object* v_k_135_){
_start:
{
if (lean_obj_tag(v_t_134_) == 0)
{
uint32_t v_payload_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v_payload_136_ = lean_ctor_get_uint32(v_t_134_, 0);
v___x_137_ = lean_box_uint32(v_payload_136_);
v___x_138_ = lean_apply_1(v_k_135_, v___x_137_);
return v___x_138_;
}
else
{
return v_k_135_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg___boxed(lean_object* v_t_139_, lean_object* v_k_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(v_t_139_, v_k_140_);
lean_dec(v_t_139_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorElim(lean_object* v_motive_142_, lean_object* v_ctorIdx_143_, lean_object* v_t_144_, lean_object* v_h_145_, lean_object* v_k_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(v_t_144_, v_k_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorElim___boxed(lean_object* v_motive_148_, lean_object* v_ctorIdx_149_, lean_object* v_t_150_, lean_object* v_h_151_, lean_object* v_k_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim(v_motive_148_, v_ctorIdx_149_, v_t_150_, v_h_151_, v_k_152_);
lean_dec(v_t_150_);
lean_dec(v_ctorIdx_149_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim___redArg(lean_object* v_t_154_, lean_object* v_lastOperationFailed_155_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(v_t_154_, v_lastOperationFailed_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim___redArg___boxed(lean_object* v_t_157_, lean_object* v_lastOperationFailed_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim___redArg(v_t_157_, v_lastOperationFailed_158_);
lean_dec(v_t_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim(lean_object* v_motive_160_, lean_object* v_t_161_, lean_object* v_h_162_, lean_object* v_lastOperationFailed_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(v_t_161_, v_lastOperationFailed_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim___boxed(lean_object* v_motive_165_, lean_object* v_t_166_, lean_object* v_h_167_, lean_object* v_lastOperationFailed_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim(v_motive_165_, v_t_166_, v_h_167_, v_lastOperationFailed_168_);
lean_dec(v_t_166_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_closed_elim___redArg(lean_object* v_t_170_, lean_object* v_closed_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(v_t_170_, v_closed_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_closed_elim___redArg___boxed(lean_object* v_t_173_, lean_object* v_closed_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lasm_WASI_Io_Streams_StreamError_closed_elim___redArg(v_t_173_, v_closed_174_);
lean_dec(v_t_173_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_closed_elim(lean_object* v_motive_176_, lean_object* v_t_177_, lean_object* v_h_178_, lean_object* v_closed_179_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(v_t_177_, v_closed_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_closed_elim___boxed(lean_object* v_motive_181_, lean_object* v_t_182_, lean_object* v_h_183_, lean_object* v_closed_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Lasm_WASI_Io_Streams_StreamError_closed_elim(v_motive_181_, v_t_182_, v_h_183_, v_closed_184_);
lean_dec(v_t_182_);
return v_res_185_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Io_Streams_instBEqStreamError_beq(lean_object* v_x_190_, lean_object* v_x_191_){
_start:
{
if (lean_obj_tag(v_x_190_) == 0)
{
if (lean_obj_tag(v_x_191_) == 0)
{
uint32_t v_payload_192_; uint32_t v_payload_193_; uint8_t v___x_194_; 
v_payload_192_ = lean_ctor_get_uint32(v_x_190_, 0);
v_payload_193_ = lean_ctor_get_uint32(v_x_191_, 0);
v___x_194_ = lean_uint32_dec_eq(v_payload_192_, v_payload_193_);
return v___x_194_;
}
else
{
uint8_t v___x_195_; 
v___x_195_ = 0;
return v___x_195_;
}
}
else
{
if (lean_obj_tag(v_x_191_) == 1)
{
uint8_t v___x_196_; 
v___x_196_ = 1;
return v___x_196_;
}
else
{
uint8_t v___x_197_; 
v___x_197_ = 0;
return v___x_197_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instBEqStreamError_beq___boxed(lean_object* v_x_198_, lean_object* v_x_199_){
_start:
{
uint8_t v_res_200_; lean_object* v_r_201_; 
v_res_200_ = l_Lasm_WASI_Io_Streams_instBEqStreamError_beq(v_x_198_, v_x_199_);
lean_dec(v_x_199_);
lean_dec(v_x_198_);
v_r_201_ = lean_box(v_res_200_);
return v_r_201_;
}
}
static lean_object* _init_l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_213_ = lean_unsigned_to_nat(2u);
v___x_214_ = lean_nat_to_int(v___x_213_);
return v___x_214_;
}
}
static lean_object* _init_l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_unsigned_to_nat(1u);
v___x_216_ = lean_nat_to_int(v___x_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr(lean_object* v_x_217_, lean_object* v_prec_218_){
_start:
{
lean_object* v___y_220_; 
if (lean_obj_tag(v_x_217_) == 0)
{
uint32_t v_payload_226_; lean_object* v___y_228_; lean_object* v___x_236_; uint8_t v___x_237_; 
v_payload_226_ = lean_ctor_get_uint32(v_x_217_, 0);
v___x_236_ = lean_unsigned_to_nat(1024u);
v___x_237_ = lean_nat_dec_le(v___x_236_, v_prec_218_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; 
v___x_238_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5, &l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5_once, _init_l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5);
v___y_228_ = v___x_238_;
goto v___jp_227_;
}
else
{
lean_object* v___x_239_; 
v___x_239_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6, &l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6_once, _init_l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6);
v___y_228_ = v___x_239_;
goto v___jp_227_;
}
v___jp_227_:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_229_ = ((lean_object*)(l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__4));
v___x_230_ = l_Lasm_WASI_Io_Error_instReprError_repr___redArg(v_payload_226_);
v___x_231_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
lean_inc(v___y_228_);
v___x_232_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_232_, 0, v___y_228_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = 0;
v___x_234_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_234_, 0, v___x_232_);
lean_ctor_set_uint8(v___x_234_, sizeof(void*)*1, v___x_233_);
v___x_235_ = l_Repr_addAppParen(v___x_234_, v_prec_218_);
return v___x_235_;
}
}
else
{
lean_object* v___x_240_; uint8_t v___x_241_; 
v___x_240_ = lean_unsigned_to_nat(1024u);
v___x_241_ = lean_nat_dec_le(v___x_240_, v_prec_218_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; 
v___x_242_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5, &l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5_once, _init_l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5);
v___y_220_ = v___x_242_;
goto v___jp_219_;
}
else
{
lean_object* v___x_243_; 
v___x_243_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6, &l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6_once, _init_l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6);
v___y_220_ = v___x_243_;
goto v___jp_219_;
}
}
v___jp_219_:
{
lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_221_ = ((lean_object*)(l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__1));
lean_inc(v___y_220_);
v___x_222_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_222_, 0, v___y_220_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = 0;
v___x_224_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_224_, 0, v___x_222_);
lean_ctor_set_uint8(v___x_224_, sizeof(void*)*1, v___x_223_);
v___x_225_ = l_Repr_addAppParen(v___x_224_, v_prec_218_);
return v___x_225_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr___boxed(lean_object* v_x_244_, lean_object* v_prec_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lasm_WASI_Io_Streams_instReprStreamError_repr(v_x_244_, v_prec_245_);
lean_dec(v_prec_245_);
lean_dec(v_x_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_read___boxed(lean_object* v_self_252_, lean_object* v_len_253_, lean_object* v_a_00___x40___internal___hyg_254_){
_start:
{
uint32_t v_self_boxed_255_; uint64_t v_len_boxed_256_; lean_object* v_res_257_; 
v_self_boxed_255_ = lean_unbox_uint32(v_self_252_);
lean_dec(v_self_252_);
v_len_boxed_256_ = lean_unbox_uint64(v_len_253_);
lean_dec_ref(v_len_253_);
v_res_257_ = lasm_wasi_io_streams_input_stream_read(v_self_boxed_255_, v_len_boxed_256_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_blockingRead___boxed(lean_object* v_self_261_, lean_object* v_len_262_, lean_object* v_a_00___x40___internal___hyg_263_){
_start:
{
uint32_t v_self_boxed_264_; uint64_t v_len_boxed_265_; lean_object* v_res_266_; 
v_self_boxed_264_ = lean_unbox_uint32(v_self_261_);
lean_dec(v_self_261_);
v_len_boxed_265_ = lean_unbox_uint64(v_len_262_);
lean_dec_ref(v_len_262_);
v_res_266_ = lasm_wasi_io_streams_input_stream_blocking_read(v_self_boxed_264_, v_len_boxed_265_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_skip___boxed(lean_object* v_self_270_, lean_object* v_len_271_, lean_object* v_a_00___x40___internal___hyg_272_){
_start:
{
uint32_t v_self_boxed_273_; uint64_t v_len_boxed_274_; lean_object* v_res_275_; 
v_self_boxed_273_ = lean_unbox_uint32(v_self_270_);
lean_dec(v_self_270_);
v_len_boxed_274_ = lean_unbox_uint64(v_len_271_);
lean_dec_ref(v_len_271_);
v_res_275_ = lasm_wasi_io_streams_input_stream_skip(v_self_boxed_273_, v_len_boxed_274_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_blockingSkip___boxed(lean_object* v_self_279_, lean_object* v_len_280_, lean_object* v_a_00___x40___internal___hyg_281_){
_start:
{
uint32_t v_self_boxed_282_; uint64_t v_len_boxed_283_; lean_object* v_res_284_; 
v_self_boxed_282_ = lean_unbox_uint32(v_self_279_);
lean_dec(v_self_279_);
v_len_boxed_283_ = lean_unbox_uint64(v_len_280_);
lean_dec_ref(v_len_280_);
v_res_284_ = lasm_wasi_io_streams_input_stream_blocking_skip(v_self_boxed_282_, v_len_boxed_283_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_subscribe___boxed(lean_object* v_self_287_, lean_object* v_a_00___x40___internal___hyg_288_){
_start:
{
uint32_t v_self_boxed_289_; lean_object* v_res_290_; 
v_self_boxed_289_ = lean_unbox_uint32(v_self_287_);
lean_dec(v_self_287_);
v_res_290_ = lasm_wasi_io_streams_input_stream_subscribe(v_self_boxed_289_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_drop___boxed(lean_object* v_self_293_, lean_object* v_a_00___x40___internal___hyg_294_){
_start:
{
uint32_t v_self_boxed_295_; lean_object* v_res_296_; 
v_self_boxed_295_ = lean_unbox_uint32(v_self_293_);
lean_dec(v_self_293_);
v_res_296_ = lasm_wasi_io_streams_input_stream_drop(v_self_boxed_295_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_checkWrite___boxed(lean_object* v_self_299_, lean_object* v_a_00___x40___internal___hyg_300_){
_start:
{
uint32_t v_self_boxed_301_; lean_object* v_res_302_; 
v_self_boxed_301_ = lean_unbox_uint32(v_self_299_);
lean_dec(v_self_299_);
v_res_302_ = lasm_wasi_io_streams_output_stream_check_write(v_self_boxed_301_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_write___boxed(lean_object* v_self_306_, lean_object* v_contents_307_, lean_object* v_a_00___x40___internal___hyg_308_){
_start:
{
uint32_t v_self_boxed_309_; lean_object* v_res_310_; 
v_self_boxed_309_ = lean_unbox_uint32(v_self_306_);
lean_dec(v_self_306_);
v_res_310_ = lasm_wasi_io_streams_output_stream_write(v_self_boxed_309_, v_contents_307_);
lean_dec_ref(v_contents_307_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_blockingWriteAndFlush___boxed(lean_object* v_self_314_, lean_object* v_contents_315_, lean_object* v_a_00___x40___internal___hyg_316_){
_start:
{
uint32_t v_self_boxed_317_; lean_object* v_res_318_; 
v_self_boxed_317_ = lean_unbox_uint32(v_self_314_);
lean_dec(v_self_314_);
v_res_318_ = lasm_wasi_io_streams_output_stream_blocking_write_and_flush(v_self_boxed_317_, v_contents_315_);
lean_dec_ref(v_contents_315_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_flush___boxed(lean_object* v_self_321_, lean_object* v_a_00___x40___internal___hyg_322_){
_start:
{
uint32_t v_self_boxed_323_; lean_object* v_res_324_; 
v_self_boxed_323_ = lean_unbox_uint32(v_self_321_);
lean_dec(v_self_321_);
v_res_324_ = lasm_wasi_io_streams_output_stream_flush(v_self_boxed_323_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_blockingFlush___boxed(lean_object* v_self_327_, lean_object* v_a_00___x40___internal___hyg_328_){
_start:
{
uint32_t v_self_boxed_329_; lean_object* v_res_330_; 
v_self_boxed_329_ = lean_unbox_uint32(v_self_327_);
lean_dec(v_self_327_);
v_res_330_ = lasm_wasi_io_streams_output_stream_blocking_flush(v_self_boxed_329_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_subscribe___boxed(lean_object* v_self_333_, lean_object* v_a_00___x40___internal___hyg_334_){
_start:
{
uint32_t v_self_boxed_335_; lean_object* v_res_336_; 
v_self_boxed_335_ = lean_unbox_uint32(v_self_333_);
lean_dec(v_self_333_);
v_res_336_ = lasm_wasi_io_streams_output_stream_subscribe(v_self_boxed_335_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_writeZeroes___boxed(lean_object* v_self_340_, lean_object* v_len_341_, lean_object* v_a_00___x40___internal___hyg_342_){
_start:
{
uint32_t v_self_boxed_343_; uint64_t v_len_boxed_344_; lean_object* v_res_345_; 
v_self_boxed_343_ = lean_unbox_uint32(v_self_340_);
lean_dec(v_self_340_);
v_len_boxed_344_ = lean_unbox_uint64(v_len_341_);
lean_dec_ref(v_len_341_);
v_res_345_ = lasm_wasi_io_streams_output_stream_write_zeroes(v_self_boxed_343_, v_len_boxed_344_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_blockingWriteZeroesAndFlush___boxed(lean_object* v_self_349_, lean_object* v_len_350_, lean_object* v_a_00___x40___internal___hyg_351_){
_start:
{
uint32_t v_self_boxed_352_; uint64_t v_len_boxed_353_; lean_object* v_res_354_; 
v_self_boxed_352_ = lean_unbox_uint32(v_self_349_);
lean_dec(v_self_349_);
v_len_boxed_353_ = lean_unbox_uint64(v_len_350_);
lean_dec_ref(v_len_350_);
v_res_354_ = lasm_wasi_io_streams_output_stream_blocking_write_zeroes_and_flush(v_self_boxed_352_, v_len_boxed_353_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_splice___boxed(lean_object* v_self_359_, lean_object* v_src_360_, lean_object* v_len_361_, lean_object* v_a_00___x40___internal___hyg_362_){
_start:
{
uint32_t v_self_boxed_363_; uint32_t v_src_boxed_364_; uint64_t v_len_boxed_365_; lean_object* v_res_366_; 
v_self_boxed_363_ = lean_unbox_uint32(v_self_359_);
lean_dec(v_self_359_);
v_src_boxed_364_ = lean_unbox_uint32(v_src_360_);
lean_dec(v_src_360_);
v_len_boxed_365_ = lean_unbox_uint64(v_len_361_);
lean_dec_ref(v_len_361_);
v_res_366_ = lasm_wasi_io_streams_output_stream_splice(v_self_boxed_363_, v_src_boxed_364_, v_len_boxed_365_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_blockingSplice___boxed(lean_object* v_self_371_, lean_object* v_src_372_, lean_object* v_len_373_, lean_object* v_a_00___x40___internal___hyg_374_){
_start:
{
uint32_t v_self_boxed_375_; uint32_t v_src_boxed_376_; uint64_t v_len_boxed_377_; lean_object* v_res_378_; 
v_self_boxed_375_ = lean_unbox_uint32(v_self_371_);
lean_dec(v_self_371_);
v_src_boxed_376_ = lean_unbox_uint32(v_src_372_);
lean_dec(v_src_372_);
v_len_boxed_377_ = lean_unbox_uint64(v_len_373_);
lean_dec_ref(v_len_373_);
v_res_378_ = lasm_wasi_io_streams_output_stream_blocking_splice(v_self_boxed_375_, v_src_boxed_376_, v_len_boxed_377_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_drop___boxed(lean_object* v_self_381_, lean_object* v_a_00___x40___internal___hyg_382_){
_start:
{
uint32_t v_self_boxed_383_; lean_object* v_res_384_; 
v_self_boxed_383_ = lean_unbox_uint32(v_self_381_);
lean_dec(v_self_381_);
v_res_384_ = lasm_wasi_io_streams_output_stream_drop(v_self_boxed_383_);
return v_res_384_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Io_Error(uint8_t builtin);
lean_object* initialize_Lasm_WASI_Io_Poll(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_WASI_Io_Streams(uint8_t builtin) {
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
res = initialize_Lasm_WASI_Io_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_WASI_Io_Poll(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_WASI_Io_Streams_instInhabitedInputStream_default = _init_l_Lasm_WASI_Io_Streams_instInhabitedInputStream_default();
l_Lasm_WASI_Io_Streams_instInhabitedInputStream = _init_l_Lasm_WASI_Io_Streams_instInhabitedInputStream();
l_Lasm_WASI_Io_Streams_instInhabitedOutputStream_default = _init_l_Lasm_WASI_Io_Streams_instInhabitedOutputStream_default();
l_Lasm_WASI_Io_Streams_instInhabitedOutputStream = _init_l_Lasm_WASI_Io_Streams_instInhabitedOutputStream();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
