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
lean_object* lean_obj_tag_nat(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorIdx___impl(lean_object* v_x_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_tag_nat(v_x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorIdx___impl___boxed(lean_object* v_x_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lasm_WASI_Io_Streams_StreamError_ctorIdx___impl(v_x_131_);
lean_dec(v_x_131_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(lean_object* v_t_133_, lean_object* v_k_134_){
_start:
{
if (lean_obj_tag(v_t_133_) == 0)
{
uint32_t v_payload_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v_payload_135_ = lean_ctor_get_uint32(v_t_133_, 0);
v___x_136_ = lean_box_uint32(v_payload_135_);
v___x_137_ = lean_apply_1(v_k_134_, v___x_136_);
return v___x_137_;
}
else
{
return v_k_134_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg___boxed(lean_object* v_t_138_, lean_object* v_k_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(v_t_138_, v_k_139_);
lean_dec(v_t_138_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorElim(lean_object* v_motive_141_, lean_object* v_ctorIdx_142_, lean_object* v_t_143_, lean_object* v_h_144_, lean_object* v_k_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(v_t_143_, v_k_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_ctorElim___boxed(lean_object* v_motive_147_, lean_object* v_ctorIdx_148_, lean_object* v_t_149_, lean_object* v_h_150_, lean_object* v_k_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim(v_motive_147_, v_ctorIdx_148_, v_t_149_, v_h_150_, v_k_151_);
lean_dec(v_t_149_);
lean_dec(v_ctorIdx_148_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim___redArg(lean_object* v_t_153_, lean_object* v_lastOperationFailed_154_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(v_t_153_, v_lastOperationFailed_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim___redArg___boxed(lean_object* v_t_156_, lean_object* v_lastOperationFailed_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim___redArg(v_t_156_, v_lastOperationFailed_157_);
lean_dec(v_t_156_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim(lean_object* v_motive_159_, lean_object* v_t_160_, lean_object* v_h_161_, lean_object* v_lastOperationFailed_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(v_t_160_, v_lastOperationFailed_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim___boxed(lean_object* v_motive_164_, lean_object* v_t_165_, lean_object* v_h_166_, lean_object* v_lastOperationFailed_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lasm_WASI_Io_Streams_StreamError_lastOperationFailed_elim(v_motive_164_, v_t_165_, v_h_166_, v_lastOperationFailed_167_);
lean_dec(v_t_165_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_closed_elim___redArg(lean_object* v_t_169_, lean_object* v_closed_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(v_t_169_, v_closed_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_closed_elim___redArg___boxed(lean_object* v_t_172_, lean_object* v_closed_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lasm_WASI_Io_Streams_StreamError_closed_elim___redArg(v_t_172_, v_closed_173_);
lean_dec(v_t_172_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_closed_elim(lean_object* v_motive_175_, lean_object* v_t_176_, lean_object* v_h_177_, lean_object* v_closed_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l_Lasm_WASI_Io_Streams_StreamError_ctorElim___redArg(v_t_176_, v_closed_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_StreamError_closed_elim___boxed(lean_object* v_motive_180_, lean_object* v_t_181_, lean_object* v_h_182_, lean_object* v_closed_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lasm_WASI_Io_Streams_StreamError_closed_elim(v_motive_180_, v_t_181_, v_h_182_, v_closed_183_);
lean_dec(v_t_181_);
return v_res_184_;
}
}
LEAN_EXPORT uint8_t l_Lasm_WASI_Io_Streams_instBEqStreamError_beq(lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
if (lean_obj_tag(v_x_189_) == 0)
{
if (lean_obj_tag(v_x_190_) == 0)
{
uint32_t v_payload_191_; uint32_t v_payload_192_; uint8_t v___x_193_; 
v_payload_191_ = lean_ctor_get_uint32(v_x_189_, 0);
v_payload_192_ = lean_ctor_get_uint32(v_x_190_, 0);
v___x_193_ = lean_uint32_dec_eq(v_payload_191_, v_payload_192_);
return v___x_193_;
}
else
{
uint8_t v___x_194_; 
v___x_194_ = 0;
return v___x_194_;
}
}
else
{
if (lean_obj_tag(v_x_190_) == 1)
{
uint8_t v___x_195_; 
v___x_195_ = 1;
return v___x_195_;
}
else
{
uint8_t v___x_196_; 
v___x_196_ = 0;
return v___x_196_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instBEqStreamError_beq___boxed(lean_object* v_x_197_, lean_object* v_x_198_){
_start:
{
uint8_t v_res_199_; lean_object* v_r_200_; 
v_res_199_ = l_Lasm_WASI_Io_Streams_instBEqStreamError_beq(v_x_197_, v_x_198_);
lean_dec(v_x_198_);
lean_dec(v_x_197_);
v_r_200_ = lean_box(v_res_199_);
return v_r_200_;
}
}
static lean_object* _init_l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_unsigned_to_nat(2u);
v___x_213_ = lean_nat_to_int(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_unsigned_to_nat(1u);
v___x_215_ = lean_nat_to_int(v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr(lean_object* v_x_216_, lean_object* v_prec_217_){
_start:
{
lean_object* v___y_219_; 
if (lean_obj_tag(v_x_216_) == 0)
{
uint32_t v_payload_225_; lean_object* v___y_227_; lean_object* v___x_235_; uint8_t v___x_236_; 
v_payload_225_ = lean_ctor_get_uint32(v_x_216_, 0);
v___x_235_ = lean_unsigned_to_nat(1024u);
v___x_236_ = lean_nat_dec_le(v___x_235_, v_prec_217_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; 
v___x_237_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5, &l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5_once, _init_l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5);
v___y_227_ = v___x_237_;
goto v___jp_226_;
}
else
{
lean_object* v___x_238_; 
v___x_238_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6, &l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6_once, _init_l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6);
v___y_227_ = v___x_238_;
goto v___jp_226_;
}
v___jp_226_:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_228_ = ((lean_object*)(l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__4));
v___x_229_ = l_Lasm_WASI_Io_Error_instReprError_repr___redArg(v_payload_225_);
v___x_230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_228_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
lean_inc(v___y_227_);
v___x_231_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_231_, 0, v___y_227_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = 0;
v___x_233_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*1, v___x_232_);
v___x_234_ = l_Repr_addAppParen(v___x_233_, v_prec_217_);
return v___x_234_;
}
}
else
{
lean_object* v___x_239_; uint8_t v___x_240_; 
v___x_239_ = lean_unsigned_to_nat(1024u);
v___x_240_ = lean_nat_dec_le(v___x_239_, v_prec_217_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; 
v___x_241_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5, &l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5_once, _init_l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__5);
v___y_219_ = v___x_241_;
goto v___jp_218_;
}
else
{
lean_object* v___x_242_; 
v___x_242_ = lean_obj_once(&l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6, &l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6_once, _init_l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__6);
v___y_219_ = v___x_242_;
goto v___jp_218_;
}
}
v___jp_218_:
{
lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_220_ = ((lean_object*)(l_Lasm_WASI_Io_Streams_instReprStreamError_repr___closed__1));
lean_inc(v___y_219_);
v___x_221_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_221_, 0, v___y_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = 0;
v___x_223_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_223_, 0, v___x_221_);
lean_ctor_set_uint8(v___x_223_, sizeof(void*)*1, v___x_222_);
v___x_224_ = l_Repr_addAppParen(v___x_223_, v_prec_217_);
return v___x_224_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_instReprStreamError_repr___boxed(lean_object* v_x_243_, lean_object* v_prec_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lasm_WASI_Io_Streams_instReprStreamError_repr(v_x_243_, v_prec_244_);
lean_dec(v_prec_244_);
lean_dec(v_x_243_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_read___boxed(lean_object* v_self_251_, lean_object* v_len_252_, lean_object* v_a_00___x40___internal___hyg_253_){
_start:
{
uint32_t v_self_boxed_254_; uint64_t v_len_boxed_255_; lean_object* v_res_256_; 
v_self_boxed_254_ = lean_unbox_uint32(v_self_251_);
lean_dec(v_self_251_);
v_len_boxed_255_ = lean_unbox_uint64(v_len_252_);
lean_dec_ref(v_len_252_);
v_res_256_ = lasm_wasi_io_streams_input_stream_read(v_self_boxed_254_, v_len_boxed_255_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_blockingRead___boxed(lean_object* v_self_260_, lean_object* v_len_261_, lean_object* v_a_00___x40___internal___hyg_262_){
_start:
{
uint32_t v_self_boxed_263_; uint64_t v_len_boxed_264_; lean_object* v_res_265_; 
v_self_boxed_263_ = lean_unbox_uint32(v_self_260_);
lean_dec(v_self_260_);
v_len_boxed_264_ = lean_unbox_uint64(v_len_261_);
lean_dec_ref(v_len_261_);
v_res_265_ = lasm_wasi_io_streams_input_stream_blocking_read(v_self_boxed_263_, v_len_boxed_264_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_skip___boxed(lean_object* v_self_269_, lean_object* v_len_270_, lean_object* v_a_00___x40___internal___hyg_271_){
_start:
{
uint32_t v_self_boxed_272_; uint64_t v_len_boxed_273_; lean_object* v_res_274_; 
v_self_boxed_272_ = lean_unbox_uint32(v_self_269_);
lean_dec(v_self_269_);
v_len_boxed_273_ = lean_unbox_uint64(v_len_270_);
lean_dec_ref(v_len_270_);
v_res_274_ = lasm_wasi_io_streams_input_stream_skip(v_self_boxed_272_, v_len_boxed_273_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_blockingSkip___boxed(lean_object* v_self_278_, lean_object* v_len_279_, lean_object* v_a_00___x40___internal___hyg_280_){
_start:
{
uint32_t v_self_boxed_281_; uint64_t v_len_boxed_282_; lean_object* v_res_283_; 
v_self_boxed_281_ = lean_unbox_uint32(v_self_278_);
lean_dec(v_self_278_);
v_len_boxed_282_ = lean_unbox_uint64(v_len_279_);
lean_dec_ref(v_len_279_);
v_res_283_ = lasm_wasi_io_streams_input_stream_blocking_skip(v_self_boxed_281_, v_len_boxed_282_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_subscribe___boxed(lean_object* v_self_286_, lean_object* v_a_00___x40___internal___hyg_287_){
_start:
{
uint32_t v_self_boxed_288_; lean_object* v_res_289_; 
v_self_boxed_288_ = lean_unbox_uint32(v_self_286_);
lean_dec(v_self_286_);
v_res_289_ = lasm_wasi_io_streams_input_stream_subscribe(v_self_boxed_288_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_InputStream_drop___boxed(lean_object* v_self_292_, lean_object* v_a_00___x40___internal___hyg_293_){
_start:
{
uint32_t v_self_boxed_294_; lean_object* v_res_295_; 
v_self_boxed_294_ = lean_unbox_uint32(v_self_292_);
lean_dec(v_self_292_);
v_res_295_ = lasm_wasi_io_streams_input_stream_drop(v_self_boxed_294_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_checkWrite___boxed(lean_object* v_self_298_, lean_object* v_a_00___x40___internal___hyg_299_){
_start:
{
uint32_t v_self_boxed_300_; lean_object* v_res_301_; 
v_self_boxed_300_ = lean_unbox_uint32(v_self_298_);
lean_dec(v_self_298_);
v_res_301_ = lasm_wasi_io_streams_output_stream_check_write(v_self_boxed_300_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_write___boxed(lean_object* v_self_305_, lean_object* v_contents_306_, lean_object* v_a_00___x40___internal___hyg_307_){
_start:
{
uint32_t v_self_boxed_308_; lean_object* v_res_309_; 
v_self_boxed_308_ = lean_unbox_uint32(v_self_305_);
lean_dec(v_self_305_);
v_res_309_ = lasm_wasi_io_streams_output_stream_write(v_self_boxed_308_, v_contents_306_);
lean_dec_ref(v_contents_306_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_blockingWriteAndFlush___boxed(lean_object* v_self_313_, lean_object* v_contents_314_, lean_object* v_a_00___x40___internal___hyg_315_){
_start:
{
uint32_t v_self_boxed_316_; lean_object* v_res_317_; 
v_self_boxed_316_ = lean_unbox_uint32(v_self_313_);
lean_dec(v_self_313_);
v_res_317_ = lasm_wasi_io_streams_output_stream_blocking_write_and_flush(v_self_boxed_316_, v_contents_314_);
lean_dec_ref(v_contents_314_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_flush___boxed(lean_object* v_self_320_, lean_object* v_a_00___x40___internal___hyg_321_){
_start:
{
uint32_t v_self_boxed_322_; lean_object* v_res_323_; 
v_self_boxed_322_ = lean_unbox_uint32(v_self_320_);
lean_dec(v_self_320_);
v_res_323_ = lasm_wasi_io_streams_output_stream_flush(v_self_boxed_322_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_blockingFlush___boxed(lean_object* v_self_326_, lean_object* v_a_00___x40___internal___hyg_327_){
_start:
{
uint32_t v_self_boxed_328_; lean_object* v_res_329_; 
v_self_boxed_328_ = lean_unbox_uint32(v_self_326_);
lean_dec(v_self_326_);
v_res_329_ = lasm_wasi_io_streams_output_stream_blocking_flush(v_self_boxed_328_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_subscribe___boxed(lean_object* v_self_332_, lean_object* v_a_00___x40___internal___hyg_333_){
_start:
{
uint32_t v_self_boxed_334_; lean_object* v_res_335_; 
v_self_boxed_334_ = lean_unbox_uint32(v_self_332_);
lean_dec(v_self_332_);
v_res_335_ = lasm_wasi_io_streams_output_stream_subscribe(v_self_boxed_334_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_writeZeroes___boxed(lean_object* v_self_339_, lean_object* v_len_340_, lean_object* v_a_00___x40___internal___hyg_341_){
_start:
{
uint32_t v_self_boxed_342_; uint64_t v_len_boxed_343_; lean_object* v_res_344_; 
v_self_boxed_342_ = lean_unbox_uint32(v_self_339_);
lean_dec(v_self_339_);
v_len_boxed_343_ = lean_unbox_uint64(v_len_340_);
lean_dec_ref(v_len_340_);
v_res_344_ = lasm_wasi_io_streams_output_stream_write_zeroes(v_self_boxed_342_, v_len_boxed_343_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_blockingWriteZeroesAndFlush___boxed(lean_object* v_self_348_, lean_object* v_len_349_, lean_object* v_a_00___x40___internal___hyg_350_){
_start:
{
uint32_t v_self_boxed_351_; uint64_t v_len_boxed_352_; lean_object* v_res_353_; 
v_self_boxed_351_ = lean_unbox_uint32(v_self_348_);
lean_dec(v_self_348_);
v_len_boxed_352_ = lean_unbox_uint64(v_len_349_);
lean_dec_ref(v_len_349_);
v_res_353_ = lasm_wasi_io_streams_output_stream_blocking_write_zeroes_and_flush(v_self_boxed_351_, v_len_boxed_352_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_splice___boxed(lean_object* v_self_358_, lean_object* v_src_359_, lean_object* v_len_360_, lean_object* v_a_00___x40___internal___hyg_361_){
_start:
{
uint32_t v_self_boxed_362_; uint32_t v_src_boxed_363_; uint64_t v_len_boxed_364_; lean_object* v_res_365_; 
v_self_boxed_362_ = lean_unbox_uint32(v_self_358_);
lean_dec(v_self_358_);
v_src_boxed_363_ = lean_unbox_uint32(v_src_359_);
lean_dec(v_src_359_);
v_len_boxed_364_ = lean_unbox_uint64(v_len_360_);
lean_dec_ref(v_len_360_);
v_res_365_ = lasm_wasi_io_streams_output_stream_splice(v_self_boxed_362_, v_src_boxed_363_, v_len_boxed_364_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_blockingSplice___boxed(lean_object* v_self_370_, lean_object* v_src_371_, lean_object* v_len_372_, lean_object* v_a_00___x40___internal___hyg_373_){
_start:
{
uint32_t v_self_boxed_374_; uint32_t v_src_boxed_375_; uint64_t v_len_boxed_376_; lean_object* v_res_377_; 
v_self_boxed_374_ = lean_unbox_uint32(v_self_370_);
lean_dec(v_self_370_);
v_src_boxed_375_ = lean_unbox_uint32(v_src_371_);
lean_dec(v_src_371_);
v_len_boxed_376_ = lean_unbox_uint64(v_len_372_);
lean_dec_ref(v_len_372_);
v_res_377_ = lasm_wasi_io_streams_output_stream_blocking_splice(v_self_boxed_374_, v_src_boxed_375_, v_len_boxed_376_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_WASI_Io_Streams_OutputStream_drop___boxed(lean_object* v_self_380_, lean_object* v_a_00___x40___internal___hyg_381_){
_start:
{
uint32_t v_self_boxed_382_; lean_object* v_res_383_; 
v_self_boxed_382_ = lean_unbox_uint32(v_self_380_);
lean_dec(v_self_380_);
v_res_383_ = lasm_wasi_io_streams_output_stream_drop(v_self_boxed_382_);
return v_res_383_;
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
