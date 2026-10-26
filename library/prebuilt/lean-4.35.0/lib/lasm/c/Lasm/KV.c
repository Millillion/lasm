// Lean compiler output
// Module: Lasm.KV
// Imports: public import Init public meta import Init public import Std.Data.HashMap public import Lasm.JS.Core public import Lasm.Fetch public import Lasm.Fastly
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
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lasm_fastly_kv_delete(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
uint32_t lasm_fetch_platform(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
extern lean_object* l_Lasm_Fetch_platformEnv;
lean_object* l_Lasm_Fastly_kvGetText(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_onEdge();
lean_object* l_Lasm_JS_global();
lean_object* lasm_fastly_kv_get(lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lasm_fastly_kv_put(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_KV_instInhabitedStore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_KV_instInhabitedStore___lam__0___closed__0 = (const lean_object*)&l_Lasm_KV_instInhabitedStore___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_KV_instInhabitedStore___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_KV_instInhabitedStore___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_KV_instInhabitedStore___lam__0___closed__1 = (const lean_object*)&l_Lasm_KV_instInhabitedStore___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_KV_instInhabitedStore___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_instInhabitedStore___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_KV_instInhabitedStore___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_KV_instInhabitedStore___lam__1___closed__0 = (const lean_object*)&l_Lasm_KV_instInhabitedStore___lam__1___closed__0_value;
static const lean_ctor_object l_Lasm_KV_instInhabitedStore___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_KV_instInhabitedStore___lam__1___closed__0_value)}};
static const lean_object* l_Lasm_KV_instInhabitedStore___lam__1___closed__1 = (const lean_object*)&l_Lasm_KV_instInhabitedStore___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_KV_instInhabitedStore___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_instInhabitedStore___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_instInhabitedStore___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_instInhabitedStore___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_KV_instInhabitedStore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_KV_instInhabitedStore___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_KV_instInhabitedStore___closed__0 = (const lean_object*)&l_Lasm_KV_instInhabitedStore___closed__0_value;
static const lean_closure_object l_Lasm_KV_instInhabitedStore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_KV_instInhabitedStore___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_KV_instInhabitedStore___closed__1 = (const lean_object*)&l_Lasm_KV_instInhabitedStore___closed__1_value;
static const lean_closure_object l_Lasm_KV_instInhabitedStore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_KV_instInhabitedStore___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_KV_instInhabitedStore___closed__2 = (const lean_object*)&l_Lasm_KV_instInhabitedStore___closed__2_value;
static const lean_string_object l_Lasm_KV_instInhabitedStore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lasm_KV_instInhabitedStore___closed__3 = (const lean_object*)&l_Lasm_KV_instInhabitedStore___closed__3_value;
static const lean_ctor_object l_Lasm_KV_instInhabitedStore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_KV_instInhabitedStore___closed__3_value),((lean_object*)&l_Lasm_KV_instInhabitedStore___closed__0_value),((lean_object*)&l_Lasm_KV_instInhabitedStore___closed__1_value),((lean_object*)&l_Lasm_KV_instInhabitedStore___closed__2_value)}};
static const lean_object* l_Lasm_KV_instInhabitedStore___closed__4 = (const lean_object*)&l_Lasm_KV_instInhabitedStore___closed__4_value;
LEAN_EXPORT const lean_object* l_Lasm_KV_instInhabitedStore = (const lean_object*)&l_Lasm_KV_instInhabitedStore___closed__4_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_KV_memory___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_KV_memory___closed__0;
static lean_once_cell_t l_Lasm_KV_memory___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_KV_memory___closed__1;
static const lean_string_object l_Lasm_KV_memory___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "memory"};
static const lean_object* l_Lasm_KV_memory___closed__2 = (const lean_object*)&l_Lasm_KV_memory___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_KV_memory();
LEAN_EXPORT lean_object* l_Lasm_KV_memory___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_workers___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lasm.KV: no Workers environment with a binding "};
static const lean_object* l_Lasm_KV_workers___lam__1___closed__0 = (const lean_object*)&l_Lasm_KV_workers___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_workers___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "put"};
static const lean_object* l_Lasm_KV_workers___lam__4___closed__0 = (const lean_object*)&l_Lasm_KV_workers___lam__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_workers___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lasm_KV_workers___lam__6___closed__0 = (const lean_object*)&l_Lasm_KV_workers___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_workers___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lasm_KV_workers___lam__8___closed__0 = (const lean_object*)&l_Lasm_KV_workers___lam__8___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_KV_workers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_KV_workers___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_KV_workers___closed__0 = (const lean_object*)&l_Lasm_KV_workers___closed__0_value;
static const lean_closure_object l_Lasm_KV_workers___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_KV_workers___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_KV_workers___closed__1 = (const lean_object*)&l_Lasm_KV_workers___closed__1_value;
static lean_once_cell_t l_Lasm_KV_workers___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_KV_workers___closed__2;
static const lean_string_object l_Lasm_KV_workers___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "workers"};
static const lean_object* l_Lasm_KV_workers___closed__3 = (const lean_object*)&l_Lasm_KV_workers___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_KV_workers(lean_object*);
static const lean_string_object l_Lasm_KV_deno___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_KV_deno___lam__0___closed__0 = (const lean_object*)&l_Lasm_KV_deno___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_deno___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "set"};
static const lean_object* l_Lasm_KV_deno___lam__1___closed__0 = (const lean_object*)&l_Lasm_KV_deno___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1;
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_KV_deno___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_KV_deno___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_KV_deno___closed__0 = (const lean_object*)&l_Lasm_KV_deno___closed__0_value;
static const lean_string_object l_Lasm_KV_deno___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Deno"};
static const lean_object* l_Lasm_KV_deno___closed__1 = (const lean_object*)&l_Lasm_KV_deno___closed__1_value;
static const lean_string_object l_Lasm_KV_deno___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "openKv"};
static const lean_object* l_Lasm_KV_deno___closed__2 = (const lean_object*)&l_Lasm_KV_deno___closed__2_value;
static const lean_array_object l_Lasm_KV_deno___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_KV_deno___closed__3 = (const lean_object*)&l_Lasm_KV_deno___closed__3_value;
static const lean_string_object l_Lasm_KV_deno___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "deno"};
static const lean_object* l_Lasm_KV_deno___closed__4 = (const lean_object*)&l_Lasm_KV_deno___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_KV_deno(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_fastly___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fastly"};
static const lean_object* l_Lasm_KV_fastly___closed__0 = (const lean_object*)&l_Lasm_KV_fastly___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_fastly(lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_KV_open___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l_Lasm_KV_open___closed__0;
static lean_once_cell_t l_Lasm_KV_open___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_KV_open___closed__1;
static lean_once_cell_t l_Lasm_KV_open___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_KV_open___closed__2;
static const lean_string_object l_Lasm_KV_open___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "workers or memory"};
static const lean_object* l_Lasm_KV_open___closed__3 = (const lean_object*)&l_Lasm_KV_open___closed__3_value;
static const lean_string_object l_Lasm_KV_open___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "lasm:probe"};
static const lean_object* l_Lasm_KV_open___closed__4 = (const lean_object*)&l_Lasm_KV_open___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_KV_open(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_instInhabitedStore___lam__0(lean_object* v_x_5_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__0___closed__1));
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_instInhabitedStore___lam__0___boxed(lean_object* v_x_8_, lean_object* v___y_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lasm_KV_instInhabitedStore___lam__0(v_x_8_);
lean_dec_ref(v_x_8_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_instInhabitedStore___lam__1(lean_object* v_x_15_, lean_object* v_x_16_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__1___closed__1));
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_instInhabitedStore___lam__1___boxed(lean_object* v_x_19_, lean_object* v_x_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lasm_KV_instInhabitedStore___lam__1(v_x_19_, v_x_20_);
lean_dec_ref(v_x_20_);
lean_dec_ref(v_x_19_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_instInhabitedStore___lam__2(lean_object* v_x_23_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__1___closed__1));
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_instInhabitedStore___lam__2___boxed(lean_object* v_x_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lasm_KV_instInhabitedStore___lam__2(v_x_26_);
lean_dec_ref(v_x_26_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2_spec__6___redArg(lean_object* v_a_39_, lean_object* v_x_40_){
_start:
{
if (lean_obj_tag(v_x_40_) == 0)
{
lean_object* v___x_41_; 
v___x_41_ = lean_box(0);
return v___x_41_;
}
else
{
lean_object* v_key_42_; lean_object* v_value_43_; lean_object* v_tail_44_; uint8_t v___x_45_; 
v_key_42_ = lean_ctor_get(v_x_40_, 0);
v_value_43_ = lean_ctor_get(v_x_40_, 1);
v_tail_44_ = lean_ctor_get(v_x_40_, 2);
v___x_45_ = lean_string_dec_eq(v_key_42_, v_a_39_);
if (v___x_45_ == 0)
{
v_x_40_ = v_tail_44_;
goto _start;
}
else
{
lean_object* v___x_47_; 
lean_inc(v_value_43_);
v___x_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_47_, 0, v_value_43_);
return v___x_47_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2_spec__6___redArg___boxed(lean_object* v_a_48_, lean_object* v_x_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2_spec__6___redArg(v_a_48_, v_x_49_);
lean_dec(v_x_49_);
lean_dec_ref(v_a_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2___redArg(lean_object* v_m_51_, lean_object* v_a_52_){
_start:
{
lean_object* v_buckets_53_; lean_object* v___x_54_; uint64_t v___x_55_; uint64_t v___x_56_; uint64_t v___x_57_; uint64_t v_fold_58_; uint64_t v___x_59_; uint64_t v___x_60_; uint64_t v___x_61_; size_t v___x_62_; size_t v___x_63_; size_t v___x_64_; size_t v___x_65_; size_t v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v_buckets_53_ = lean_ctor_get(v_m_51_, 1);
v___x_54_ = lean_array_get_size(v_buckets_53_);
v___x_55_ = lean_string_hash(v_a_52_);
v___x_56_ = 32ULL;
v___x_57_ = lean_uint64_shift_right(v___x_55_, v___x_56_);
v_fold_58_ = lean_uint64_xor(v___x_55_, v___x_57_);
v___x_59_ = 16ULL;
v___x_60_ = lean_uint64_shift_right(v_fold_58_, v___x_59_);
v___x_61_ = lean_uint64_xor(v_fold_58_, v___x_60_);
v___x_62_ = lean_uint64_to_usize(v___x_61_);
v___x_63_ = lean_usize_of_nat(v___x_54_);
v___x_64_ = ((size_t)1ULL);
v___x_65_ = lean_usize_sub(v___x_63_, v___x_64_);
v___x_66_ = lean_usize_land(v___x_62_, v___x_65_);
v___x_67_ = lean_array_uget_borrowed(v_buckets_53_, v___x_66_);
v___x_68_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2_spec__6___redArg(v_a_52_, v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2___redArg___boxed(lean_object* v_m_69_, lean_object* v_a_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2___redArg(v_m_69_, v_a_70_);
lean_dec_ref(v_a_70_);
lean_dec_ref(v_m_69_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__0(lean_object* v_k_72_, lean_object* v_x_73_){
_start:
{
if (lean_obj_tag(v_x_73_) == 0)
{
lean_object* v_a_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_83_; 
v_a_75_ = lean_ctor_get(v_x_73_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v_x_73_);
if (v_isSharedCheck_83_ == 0)
{
v___x_77_ = v_x_73_;
v_isShared_78_ = v_isSharedCheck_83_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_a_75_);
lean_dec(v_x_73_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_83_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_80_; 
if (v_isShared_78_ == 0)
{
v___x_80_ = v___x_77_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_a_75_);
v___x_80_ = v_reuseFailAlloc_82_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
lean_object* v___x_81_; 
v___x_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
return v___x_81_;
}
}
}
else
{
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_93_; 
v_a_84_ = lean_ctor_get(v_x_73_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v_x_73_);
if (v_isSharedCheck_93_ == 0)
{
v___x_86_ = v_x_73_;
v_isShared_87_ = v_isSharedCheck_93_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v_x_73_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_93_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_88_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2___redArg(v_a_84_, v_k_72_);
lean_dec(v_a_84_);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v___x_88_);
v___x_90_ = v___x_86_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_92_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
lean_object* v___x_91_; 
v___x_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
return v___x_91_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__0___boxed(lean_object* v_k_94_, lean_object* v_x_95_, lean_object* v___y_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lasm_KV_memory___lam__0(v_k_94_, v_x_95_);
lean_dec_ref(v_k_94_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__1(lean_object* v_val_98_, lean_object* v___x_99_, lean_object* v_k_100_){
_start:
{
lean_object* v___f_102_; uint8_t v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___f_102_ = lean_alloc_closure((void*)(l_Lasm_KV_memory___lam__0___boxed), 3, 1);
lean_closure_set(v___f_102_, 0, v_k_100_);
v___x_103_ = 0;
v___x_104_ = lean_st_ref_get(v_val_98_);
v___x_105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
v___x_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
v___x_107_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_99_, v___x_103_, v___x_106_, v___f_102_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__1___boxed(lean_object* v_val_108_, lean_object* v___x_109_, lean_object* v_k_110_, lean_object* v___y_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Lasm_KV_memory___lam__1(v_val_108_, v___x_109_, v_k_110_);
lean_dec(v_val_108_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3_spec__4_spec__6___redArg(lean_object* v_x_113_, lean_object* v_x_114_){
_start:
{
if (lean_obj_tag(v_x_114_) == 0)
{
return v_x_113_;
}
else
{
lean_object* v_key_115_; lean_object* v_value_116_; lean_object* v_tail_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_140_; 
v_key_115_ = lean_ctor_get(v_x_114_, 0);
v_value_116_ = lean_ctor_get(v_x_114_, 1);
v_tail_117_ = lean_ctor_get(v_x_114_, 2);
v_isSharedCheck_140_ = !lean_is_exclusive(v_x_114_);
if (v_isSharedCheck_140_ == 0)
{
v___x_119_ = v_x_114_;
v_isShared_120_ = v_isSharedCheck_140_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_tail_117_);
lean_inc(v_value_116_);
lean_inc(v_key_115_);
lean_dec(v_x_114_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_140_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_121_; uint64_t v___x_122_; uint64_t v___x_123_; uint64_t v___x_124_; uint64_t v_fold_125_; uint64_t v___x_126_; uint64_t v___x_127_; uint64_t v___x_128_; size_t v___x_129_; size_t v___x_130_; size_t v___x_131_; size_t v___x_132_; size_t v___x_133_; lean_object* v___x_134_; lean_object* v___x_136_; 
v___x_121_ = lean_array_get_size(v_x_113_);
v___x_122_ = lean_string_hash(v_key_115_);
v___x_123_ = 32ULL;
v___x_124_ = lean_uint64_shift_right(v___x_122_, v___x_123_);
v_fold_125_ = lean_uint64_xor(v___x_122_, v___x_124_);
v___x_126_ = 16ULL;
v___x_127_ = lean_uint64_shift_right(v_fold_125_, v___x_126_);
v___x_128_ = lean_uint64_xor(v_fold_125_, v___x_127_);
v___x_129_ = lean_uint64_to_usize(v___x_128_);
v___x_130_ = lean_usize_of_nat(v___x_121_);
v___x_131_ = ((size_t)1ULL);
v___x_132_ = lean_usize_sub(v___x_130_, v___x_131_);
v___x_133_ = lean_usize_land(v___x_129_, v___x_132_);
v___x_134_ = lean_array_uget_borrowed(v_x_113_, v___x_133_);
lean_inc(v___x_134_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 2, v___x_134_);
v___x_136_ = v___x_119_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_key_115_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v_value_116_);
lean_ctor_set(v_reuseFailAlloc_139_, 2, v___x_134_);
v___x_136_ = v_reuseFailAlloc_139_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
lean_object* v___x_137_; 
v___x_137_ = lean_array_uset(v_x_113_, v___x_133_, v___x_136_);
v_x_113_ = v___x_137_;
v_x_114_ = v_tail_117_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3_spec__4___redArg(lean_object* v_i_141_, lean_object* v_source_142_, lean_object* v_target_143_){
_start:
{
lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_144_ = lean_array_get_size(v_source_142_);
v___x_145_ = lean_nat_dec_lt(v_i_141_, v___x_144_);
if (v___x_145_ == 0)
{
lean_dec_ref(v_source_142_);
lean_dec(v_i_141_);
return v_target_143_;
}
else
{
lean_object* v_es_146_; lean_object* v___x_147_; lean_object* v_source_148_; lean_object* v_target_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v_es_146_ = lean_array_fget(v_source_142_, v_i_141_);
v___x_147_ = lean_box(0);
v_source_148_ = lean_array_fset(v_source_142_, v_i_141_, v___x_147_);
v_target_149_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3_spec__4_spec__6___redArg(v_target_143_, v_es_146_);
v___x_150_ = lean_unsigned_to_nat(1u);
v___x_151_ = lean_nat_add(v_i_141_, v___x_150_);
lean_dec(v_i_141_);
v_i_141_ = v___x_151_;
v_source_142_ = v_source_148_;
v_target_143_ = v_target_149_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3___redArg(lean_object* v_data_153_){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v_nbuckets_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_154_ = lean_array_get_size(v_data_153_);
v___x_155_ = lean_unsigned_to_nat(2u);
v_nbuckets_156_ = lean_nat_mul(v___x_154_, v___x_155_);
v___x_157_ = lean_unsigned_to_nat(0u);
v___x_158_ = lean_box(0);
v___x_159_ = lean_mk_array(v_nbuckets_156_, v___x_158_);
v___x_160_ = lean_array_propagate_mark(v_data_153_, v___x_159_);
v___x_161_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3_spec__4___redArg(v___x_157_, v_data_153_, v___x_160_);
return v___x_161_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0___redArg(lean_object* v_a_162_, lean_object* v_x_163_){
_start:
{
if (lean_obj_tag(v_x_163_) == 0)
{
uint8_t v___x_164_; 
v___x_164_ = 0;
return v___x_164_;
}
else
{
lean_object* v_key_165_; lean_object* v_tail_166_; uint8_t v___x_167_; 
v_key_165_ = lean_ctor_get(v_x_163_, 0);
v_tail_166_ = lean_ctor_get(v_x_163_, 2);
v___x_167_ = lean_string_dec_eq(v_key_165_, v_a_162_);
if (v___x_167_ == 0)
{
v_x_163_ = v_tail_166_;
goto _start;
}
else
{
return v___x_167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0___redArg___boxed(lean_object* v_a_169_, lean_object* v_x_170_){
_start:
{
uint8_t v_res_171_; lean_object* v_r_172_; 
v_res_171_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0___redArg(v_a_169_, v_x_170_);
lean_dec(v_x_170_);
lean_dec_ref(v_a_169_);
v_r_172_ = lean_box(v_res_171_);
return v_r_172_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__4___redArg(lean_object* v_a_173_, lean_object* v_b_174_, lean_object* v_x_175_){
_start:
{
if (lean_obj_tag(v_x_175_) == 0)
{
lean_dec(v_b_174_);
lean_dec_ref(v_a_173_);
return v_x_175_;
}
else
{
lean_object* v_key_176_; lean_object* v_value_177_; lean_object* v_tail_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_190_; 
v_key_176_ = lean_ctor_get(v_x_175_, 0);
v_value_177_ = lean_ctor_get(v_x_175_, 1);
v_tail_178_ = lean_ctor_get(v_x_175_, 2);
v_isSharedCheck_190_ = !lean_is_exclusive(v_x_175_);
if (v_isSharedCheck_190_ == 0)
{
v___x_180_ = v_x_175_;
v_isShared_181_ = v_isSharedCheck_190_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_tail_178_);
lean_inc(v_value_177_);
lean_inc(v_key_176_);
lean_dec(v_x_175_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_190_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
uint8_t v___x_182_; 
v___x_182_ = lean_string_dec_eq(v_key_176_, v_a_173_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v___x_185_; 
v___x_183_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__4___redArg(v_a_173_, v_b_174_, v_tail_178_);
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 2, v___x_183_);
v___x_185_ = v___x_180_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_key_176_);
lean_ctor_set(v_reuseFailAlloc_186_, 1, v_value_177_);
lean_ctor_set(v_reuseFailAlloc_186_, 2, v___x_183_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
else
{
lean_object* v___x_188_; 
lean_dec(v_value_177_);
lean_dec(v_key_176_);
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 1, v_b_174_);
lean_ctor_set(v___x_180_, 0, v_a_173_);
v___x_188_ = v___x_180_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_173_);
lean_ctor_set(v_reuseFailAlloc_189_, 1, v_b_174_);
lean_ctor_set(v_reuseFailAlloc_189_, 2, v_tail_178_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1___redArg(lean_object* v_m_191_, lean_object* v_a_192_, lean_object* v_b_193_){
_start:
{
lean_object* v_size_194_; lean_object* v_buckets_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_238_; 
v_size_194_ = lean_ctor_get(v_m_191_, 0);
v_buckets_195_ = lean_ctor_get(v_m_191_, 1);
v_isSharedCheck_238_ = !lean_is_exclusive(v_m_191_);
if (v_isSharedCheck_238_ == 0)
{
v___x_197_ = v_m_191_;
v_isShared_198_ = v_isSharedCheck_238_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_buckets_195_);
lean_inc(v_size_194_);
lean_dec(v_m_191_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_238_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_199_; uint64_t v___x_200_; uint64_t v___x_201_; uint64_t v___x_202_; uint64_t v_fold_203_; uint64_t v___x_204_; uint64_t v___x_205_; uint64_t v___x_206_; size_t v___x_207_; size_t v___x_208_; size_t v___x_209_; size_t v___x_210_; size_t v___x_211_; lean_object* v_bkt_212_; uint8_t v___x_213_; 
v___x_199_ = lean_array_get_size(v_buckets_195_);
v___x_200_ = lean_string_hash(v_a_192_);
v___x_201_ = 32ULL;
v___x_202_ = lean_uint64_shift_right(v___x_200_, v___x_201_);
v_fold_203_ = lean_uint64_xor(v___x_200_, v___x_202_);
v___x_204_ = 16ULL;
v___x_205_ = lean_uint64_shift_right(v_fold_203_, v___x_204_);
v___x_206_ = lean_uint64_xor(v_fold_203_, v___x_205_);
v___x_207_ = lean_uint64_to_usize(v___x_206_);
v___x_208_ = lean_usize_of_nat(v___x_199_);
v___x_209_ = ((size_t)1ULL);
v___x_210_ = lean_usize_sub(v___x_208_, v___x_209_);
v___x_211_ = lean_usize_land(v___x_207_, v___x_210_);
v_bkt_212_ = lean_array_uget_borrowed(v_buckets_195_, v___x_211_);
v___x_213_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0___redArg(v_a_192_, v_bkt_212_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; lean_object* v_size_x27_215_; lean_object* v___x_216_; lean_object* v_buckets_x27_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_214_ = lean_unsigned_to_nat(1u);
v_size_x27_215_ = lean_nat_add(v_size_194_, v___x_214_);
lean_dec(v_size_194_);
lean_inc(v_bkt_212_);
v___x_216_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_216_, 0, v_a_192_);
lean_ctor_set(v___x_216_, 1, v_b_193_);
lean_ctor_set(v___x_216_, 2, v_bkt_212_);
v_buckets_x27_217_ = lean_array_uset(v_buckets_195_, v___x_211_, v___x_216_);
v___x_218_ = lean_unsigned_to_nat(4u);
v___x_219_ = lean_nat_mul(v_size_x27_215_, v___x_218_);
v___x_220_ = lean_unsigned_to_nat(3u);
v___x_221_ = lean_nat_div(v___x_219_, v___x_220_);
lean_dec(v___x_219_);
v___x_222_ = lean_array_get_size(v_buckets_x27_217_);
v___x_223_ = lean_nat_dec_le(v___x_221_, v___x_222_);
lean_dec(v___x_221_);
if (v___x_223_ == 0)
{
lean_object* v_val_224_; lean_object* v___x_226_; 
v_val_224_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3___redArg(v_buckets_x27_217_);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 1, v_val_224_);
lean_ctor_set(v___x_197_, 0, v_size_x27_215_);
v___x_226_ = v___x_197_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_size_x27_215_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v_val_224_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
else
{
lean_object* v___x_229_; 
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 1, v_buckets_x27_217_);
lean_ctor_set(v___x_197_, 0, v_size_x27_215_);
v___x_229_ = v___x_197_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_size_x27_215_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v_buckets_x27_217_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
else
{
lean_object* v___x_231_; lean_object* v_buckets_x27_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
lean_inc(v_bkt_212_);
v___x_231_ = lean_box(0);
v_buckets_x27_232_ = lean_array_uset(v_buckets_195_, v___x_211_, v___x_231_);
v___x_233_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__4___redArg(v_a_192_, v_b_193_, v_bkt_212_);
v___x_234_ = lean_array_uset(v_buckets_x27_232_, v___x_211_, v___x_233_);
if (v_isShared_198_ == 0)
{
lean_ctor_set(v___x_197_, 1, v___x_234_);
v___x_236_ = v___x_197_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_size_194_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v___x_234_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__2(lean_object* v_val_239_, lean_object* v_k_240_, lean_object* v_v_241_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_243_ = lean_st_ref_take(v_val_239_);
v___x_244_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1___redArg(v___x_243_, v_k_240_, v_v_241_);
v___x_245_ = lean_st_ref_put(v_val_239_, v___x_244_);
v___x_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
v___x_247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__2___boxed(lean_object* v_val_248_, lean_object* v_k_249_, lean_object* v_v_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lasm_KV_memory___lam__2(v_val_248_, v_k_249_, v_v_250_);
lean_dec(v_val_248_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1___redArg(lean_object* v_a_253_, lean_object* v_x_254_){
_start:
{
if (lean_obj_tag(v_x_254_) == 0)
{
return v_x_254_;
}
else
{
lean_object* v_key_255_; lean_object* v_value_256_; lean_object* v_tail_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_266_; 
v_key_255_ = lean_ctor_get(v_x_254_, 0);
v_value_256_ = lean_ctor_get(v_x_254_, 1);
v_tail_257_ = lean_ctor_get(v_x_254_, 2);
v_isSharedCheck_266_ = !lean_is_exclusive(v_x_254_);
if (v_isSharedCheck_266_ == 0)
{
v___x_259_ = v_x_254_;
v_isShared_260_ = v_isSharedCheck_266_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_tail_257_);
lean_inc(v_value_256_);
lean_inc(v_key_255_);
lean_dec(v_x_254_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_266_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
uint8_t v___x_261_; 
v___x_261_ = lean_string_dec_eq(v_key_255_, v_a_253_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_264_; 
v___x_262_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1___redArg(v_a_253_, v_tail_257_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 2, v___x_262_);
v___x_264_ = v___x_259_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_key_255_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v_value_256_);
lean_ctor_set(v_reuseFailAlloc_265_, 2, v___x_262_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
else
{
lean_del_object(v___x_259_);
lean_dec(v_value_256_);
lean_dec(v_key_255_);
return v_tail_257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1___redArg___boxed(lean_object* v_a_267_, lean_object* v_x_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1___redArg(v_a_267_, v_x_268_);
lean_dec_ref(v_a_267_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0___redArg(lean_object* v_m_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_size_272_; lean_object* v_buckets_273_; lean_object* v___x_274_; uint64_t v___x_275_; uint64_t v___x_276_; uint64_t v___x_277_; uint64_t v_fold_278_; uint64_t v___x_279_; uint64_t v___x_280_; uint64_t v___x_281_; size_t v___x_282_; size_t v___x_283_; size_t v___x_284_; size_t v___x_285_; size_t v___x_286_; lean_object* v_bkt_287_; uint8_t v___x_288_; 
v_size_272_ = lean_ctor_get(v_m_270_, 0);
v_buckets_273_ = lean_ctor_get(v_m_270_, 1);
v___x_274_ = lean_array_get_size(v_buckets_273_);
v___x_275_ = lean_string_hash(v_a_271_);
v___x_276_ = 32ULL;
v___x_277_ = lean_uint64_shift_right(v___x_275_, v___x_276_);
v_fold_278_ = lean_uint64_xor(v___x_275_, v___x_277_);
v___x_279_ = 16ULL;
v___x_280_ = lean_uint64_shift_right(v_fold_278_, v___x_279_);
v___x_281_ = lean_uint64_xor(v_fold_278_, v___x_280_);
v___x_282_ = lean_uint64_to_usize(v___x_281_);
v___x_283_ = lean_usize_of_nat(v___x_274_);
v___x_284_ = ((size_t)1ULL);
v___x_285_ = lean_usize_sub(v___x_283_, v___x_284_);
v___x_286_ = lean_usize_land(v___x_282_, v___x_285_);
v_bkt_287_ = lean_array_uget_borrowed(v_buckets_273_, v___x_286_);
v___x_288_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0___redArg(v_a_271_, v_bkt_287_);
if (v___x_288_ == 0)
{
return v_m_270_;
}
else
{
lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_301_; 
lean_inc(v_bkt_287_);
lean_inc_ref(v_buckets_273_);
lean_inc(v_size_272_);
v_isSharedCheck_301_ = !lean_is_exclusive(v_m_270_);
if (v_isSharedCheck_301_ == 0)
{
lean_object* v_unused_302_; lean_object* v_unused_303_; 
v_unused_302_ = lean_ctor_get(v_m_270_, 1);
lean_dec(v_unused_302_);
v_unused_303_ = lean_ctor_get(v_m_270_, 0);
lean_dec(v_unused_303_);
v___x_290_ = v_m_270_;
v_isShared_291_ = v_isSharedCheck_301_;
goto v_resetjp_289_;
}
else
{
lean_dec(v_m_270_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_301_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v_buckets_x27_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_299_; 
v___x_292_ = lean_box(0);
v_buckets_x27_293_ = lean_array_uset(v_buckets_273_, v___x_286_, v___x_292_);
v___x_294_ = lean_unsigned_to_nat(1u);
v___x_295_ = lean_nat_sub(v_size_272_, v___x_294_);
lean_dec(v_size_272_);
v___x_296_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1___redArg(v_a_271_, v_bkt_287_);
v___x_297_ = lean_array_uset(v_buckets_x27_293_, v___x_286_, v___x_296_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 1, v___x_297_);
lean_ctor_set(v___x_290_, 0, v___x_295_);
v___x_299_ = v___x_290_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_295_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v___x_297_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0___redArg___boxed(lean_object* v_m_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0___redArg(v_m_304_, v_a_305_);
lean_dec_ref(v_a_305_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__3(lean_object* v_val_307_, lean_object* v_k_308_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_310_ = lean_st_ref_take(v_val_307_);
v___x_311_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0___redArg(v___x_310_, v_k_308_);
v___x_312_ = lean_st_ref_put(v_val_307_, v___x_311_);
v___x_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
v___x_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_314_, 0, v___x_313_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__3___boxed(lean_object* v_val_315_, lean_object* v_k_316_, lean_object* v___y_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lasm_KV_memory___lam__3(v_val_315_, v_k_316_);
lean_dec_ref(v_k_316_);
lean_dec(v_val_315_);
return v_res_318_;
}
}
static lean_object* _init_l_Lasm_KV_memory___closed__0(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_319_ = lean_box(0);
v___x_320_ = lean_unsigned_to_nat(16u);
v___x_321_ = lean_mk_array(v___x_320_, v___x_319_);
return v___x_321_;
}
}
static lean_object* _init_l_Lasm_KV_memory___closed__1(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_322_ = lean_obj_once(&l_Lasm_KV_memory___closed__0, &l_Lasm_KV_memory___closed__0_once, _init_l_Lasm_KV_memory___closed__0);
v___x_323_ = lean_unsigned_to_nat(0u);
v___x_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
lean_ctor_set(v___x_324_, 1, v___x_322_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory(){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___f_330_; lean_object* v___f_331_; lean_object* v___f_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = lean_obj_once(&l_Lasm_KV_memory___closed__1, &l_Lasm_KV_memory___closed__1_once, _init_l_Lasm_KV_memory___closed__1);
v___x_329_ = lean_st_mk_ref(v___x_328_);
lean_inc_n(v___x_329_, 2);
v___f_330_ = lean_alloc_closure((void*)(l_Lasm_KV_memory___lam__1___boxed), 4, 2);
lean_closure_set(v___f_330_, 0, v___x_329_);
lean_closure_set(v___f_330_, 1, v___x_327_);
v___f_331_ = lean_alloc_closure((void*)(l_Lasm_KV_memory___lam__2___boxed), 4, 1);
lean_closure_set(v___f_331_, 0, v___x_329_);
v___f_332_ = lean_alloc_closure((void*)(l_Lasm_KV_memory___lam__3___boxed), 3, 1);
lean_closure_set(v___f_332_, 0, v___x_329_);
v___x_333_ = ((lean_object*)(l_Lasm_KV_memory___closed__2));
v___x_334_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___f_330_);
lean_ctor_set(v___x_334_, 2, v___f_331_);
lean_ctor_set(v___x_334_, 3, v___f_332_);
v___x_335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___boxed(lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lasm_KV_memory();
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0(lean_object* v_00_u03b2_338_, lean_object* v_m_339_, lean_object* v_a_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0___redArg(v_m_339_, v_a_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0___boxed(lean_object* v_00_u03b2_342_, lean_object* v_m_343_, lean_object* v_a_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0(v_00_u03b2_342_, v_m_343_, v_a_344_);
lean_dec_ref(v_a_344_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1(lean_object* v_00_u03b2_346_, lean_object* v_m_347_, lean_object* v_a_348_, lean_object* v_b_349_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1___redArg(v_m_347_, v_a_348_, v_b_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2(lean_object* v_00_u03b2_351_, lean_object* v_m_352_, lean_object* v_a_353_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2___redArg(v_m_352_, v_a_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2___boxed(lean_object* v_00_u03b2_355_, lean_object* v_m_356_, lean_object* v_a_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2(v_00_u03b2_355_, v_m_356_, v_a_357_);
lean_dec_ref(v_a_357_);
lean_dec_ref(v_m_356_);
return v_res_358_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0(lean_object* v_00_u03b2_359_, lean_object* v_a_360_, lean_object* v_x_361_){
_start:
{
uint8_t v___x_362_; 
v___x_362_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0___redArg(v_a_360_, v_x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0___boxed(lean_object* v_00_u03b2_363_, lean_object* v_a_364_, lean_object* v_x_365_){
_start:
{
uint8_t v_res_366_; lean_object* v_r_367_; 
v_res_366_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__0(v_00_u03b2_363_, v_a_364_, v_x_365_);
lean_dec(v_x_365_);
lean_dec_ref(v_a_364_);
v_r_367_ = lean_box(v_res_366_);
return v_r_367_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1(lean_object* v_00_u03b2_368_, lean_object* v_a_369_, lean_object* v_x_370_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1___redArg(v_a_369_, v_x_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1___boxed(lean_object* v_00_u03b2_372_, lean_object* v_a_373_, lean_object* v_x_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_memory_spec__0_spec__1(v_00_u03b2_372_, v_a_373_, v_x_374_);
lean_dec_ref(v_a_373_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3(lean_object* v_00_u03b2_376_, lean_object* v_data_377_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3___redArg(v_data_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__4(lean_object* v_00_u03b2_379_, lean_object* v_a_380_, lean_object* v_b_381_, lean_object* v_x_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__4___redArg(v_a_380_, v_b_381_, v_x_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2_spec__6(lean_object* v_00_u03b2_384_, lean_object* v_a_385_, lean_object* v_x_386_){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2_spec__6___redArg(v_a_385_, v_x_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2_spec__6___boxed(lean_object* v_00_u03b2_388_, lean_object* v_a_389_, lean_object* v_x_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_memory_spec__2_spec__6(v_00_u03b2_388_, v_a_389_, v_x_390_);
lean_dec(v_x_390_);
lean_dec_ref(v_a_389_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_392_, lean_object* v_i_393_, lean_object* v_source_394_, lean_object* v_target_395_){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3_spec__4___redArg(v_i_393_, v_source_394_, v_target_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_397_, lean_object* v_x_398_, lean_object* v_x_399_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_memory_spec__1_spec__3_spec__4_spec__6___redArg(v_x_398_, v_x_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0(lean_object* v_x_401_){
_start:
{
if (lean_obj_tag(v_x_401_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_411_; 
v_a_403_ = lean_ctor_get(v_x_401_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v_x_401_);
if (v_isSharedCheck_411_ == 0)
{
v___x_405_ = v_x_401_;
v_isShared_406_ = v_isSharedCheck_411_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v_x_401_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_411_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_403_);
v___x_408_ = v_reuseFailAlloc_410_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
lean_object* v___x_409_; 
v___x_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
return v___x_409_;
}
}
}
else
{
lean_object* v___x_412_; 
lean_dec_ref_known(v_x_401_, 1);
v___x_412_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__1___closed__1));
return v___x_412_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0___boxed(lean_object* v_x_413_, lean_object* v___y_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lasm_KV_workers___lam__0(v_x_413_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2(lean_object* v_x_416_){
_start:
{
if (lean_obj_tag(v_x_416_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_426_; 
v_a_418_ = lean_ctor_get(v_x_416_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v_x_416_);
if (v_isSharedCheck_426_ == 0)
{
v___x_420_ = v_x_416_;
v_isShared_421_ = v_isSharedCheck_426_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v_x_416_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_426_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_423_; 
if (v_isShared_421_ == 0)
{
v___x_423_ = v___x_420_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_a_418_);
v___x_423_ = v_reuseFailAlloc_425_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
lean_object* v___x_424_; 
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
return v___x_424_;
}
}
}
else
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_444_; 
v_a_427_ = lean_ctor_get(v_x_416_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v_x_416_);
if (v_isSharedCheck_444_ == 0)
{
v___x_429_ = v_x_416_;
v_isShared_430_ = v_isSharedCheck_444_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v_x_416_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_444_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
if (lean_obj_tag(v_a_427_) == 4)
{
lean_object* v_s_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_442_; 
v_s_431_ = lean_ctor_get(v_a_427_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v_a_427_);
if (v_isSharedCheck_442_ == 0)
{
v___x_433_ = v_a_427_;
v_isShared_434_ = v_isSharedCheck_442_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_s_431_);
lean_dec(v_a_427_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_442_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_436_; 
if (v_isShared_434_ == 0)
{
lean_ctor_set_tag(v___x_433_, 1);
v___x_436_ = v___x_433_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_s_431_);
v___x_436_ = v_reuseFailAlloc_441_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
lean_object* v___x_438_; 
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 0, v___x_436_);
v___x_438_ = v___x_429_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v___x_436_);
v___x_438_ = v_reuseFailAlloc_440_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
lean_object* v___x_439_; 
v___x_439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_439_, 0, v___x_438_);
return v___x_439_;
}
}
}
}
else
{
lean_object* v___x_443_; 
lean_del_object(v___x_429_);
lean_dec(v_a_427_);
v___x_443_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__0___closed__1));
return v___x_443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2___boxed(lean_object* v_x_445_, lean_object* v___y_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lasm_KV_workers___lam__2(v_x_445_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1(lean_object* v_name_449_, lean_object* v_____do__lift_450_){
_start:
{
if (lean_obj_tag(v_____do__lift_450_) == 9)
{
lean_object* v_value_452_; lean_object* v___x_453_; 
v_value_452_ = lean_ctor_get(v_____do__lift_450_, 0);
lean_inc(v_value_452_);
lean_dec_ref_known(v_____do__lift_450_, 2);
v___x_453_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_value_452_, v_name_449_);
return v___x_453_;
}
else
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
lean_dec(v_____do__lift_450_);
v___x_454_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_455_ = lean_string_append(v___x_454_, v_name_449_);
lean_dec_ref(v_name_449_);
v___x_456_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
v___x_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
return v___x_457_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1___boxed(lean_object* v_name_458_, lean_object* v_____do__lift_459_, lean_object* v___y_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lasm_KV_workers___lam__1(v_name_458_, v_____do__lift_459_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3(lean_object* v___x_462_){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = lean_st_ref_get(v___x_462_);
v___x_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3___boxed(lean_object* v___x_466_, lean_object* v___y_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lasm_KV_workers___lam__3(v___x_466_);
lean_dec(v___x_466_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4(lean_object* v_k_470_, lean_object* v_v_471_, lean_object* v___f_472_, lean_object* v_x_473_){
_start:
{
if (lean_obj_tag(v_x_473_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_483_; 
lean_dec_ref(v___f_472_);
lean_dec_ref(v_v_471_);
lean_dec_ref(v_k_470_);
v_a_475_ = lean_ctor_get(v_x_473_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v_x_473_);
if (v_isSharedCheck_483_ == 0)
{
v___x_477_ = v_x_473_;
v_isShared_478_ = v_isSharedCheck_483_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v_x_473_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_483_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_475_);
v___x_480_ = v_reuseFailAlloc_482_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
lean_object* v___x_481_; 
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
return v___x_481_;
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; uint8_t v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v_a_484_ = lean_ctor_get(v_x_473_, 0);
lean_inc(v_a_484_);
lean_dec_ref_known(v_x_473_, 1);
v___x_485_ = ((lean_object*)(l_Lasm_KV_workers___lam__4___closed__0));
v___x_486_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_486_, 0, v_k_470_);
v___x_487_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_487_, 0, v_v_471_);
v___x_488_ = lean_unsigned_to_nat(2u);
v___x_489_ = lean_mk_empty_array_with_capacity(v___x_488_);
v___x_490_ = lean_array_push(v___x_489_, v___x_486_);
v___x_491_ = lean_array_push(v___x_490_, v___x_487_);
v___x_492_ = lean_unsigned_to_nat(0u);
v___x_493_ = 0;
v___x_494_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_484_, v___x_485_, v___x_491_);
v___x_495_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_492_, v___x_493_, v___x_494_, v___f_472_);
return v___x_495_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4___boxed(lean_object* v_k_496_, lean_object* v_v_497_, lean_object* v___f_498_, lean_object* v_x_499_, lean_object* v___y_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lasm_KV_workers___lam__4(v_k_496_, v_v_497_, v___f_498_, v_x_499_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5(lean_object* v___f_502_, lean_object* v___f_503_, lean_object* v___f_504_, lean_object* v_k_505_, lean_object* v_v_506_){
_start:
{
lean_object* v___f_508_; lean_object* v___x_509_; uint8_t v___x_510_; lean_object* v_val_512_; lean_object* v_a_516_; lean_object* v___x_518_; 
v___f_508_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__4___boxed), 5, 3);
lean_closure_set(v___f_508_, 0, v_k_505_);
lean_closure_set(v___f_508_, 1, v_v_506_);
lean_closure_set(v___f_508_, 2, v___f_502_);
v___x_509_ = lean_unsigned_to_nat(0u);
v___x_510_ = 0;
v___x_518_ = lean_apply_1(v___f_503_, lean_box(0));
if (lean_obj_tag(v___x_518_) == 0)
{
lean_object* v_a_519_; lean_object* v___x_520_; 
v_a_519_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_a_519_);
lean_dec_ref_known(v___x_518_, 1);
v___x_520_ = lean_apply_2(v___f_504_, v_a_519_, lean_box(0));
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_520_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_520_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set_tag(v___x_523_, 1);
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
v_val_512_ = v___x_526_;
goto v___jp_511_;
}
}
}
else
{
lean_object* v_a_529_; 
v_a_529_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_a_529_);
lean_dec_ref_known(v___x_520_, 1);
v_a_516_ = v_a_529_;
goto v___jp_515_;
}
}
else
{
lean_object* v_a_530_; 
lean_dec_ref(v___f_504_);
v_a_530_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_a_530_);
lean_dec_ref_known(v___x_518_, 1);
v_a_516_ = v_a_530_;
goto v___jp_515_;
}
v___jp_511_:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_513_, 0, v_val_512_);
v___x_514_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_509_, v___x_510_, v___x_513_, v___f_508_);
return v___x_514_;
}
v___jp_515_:
{
lean_object* v___x_517_; 
v___x_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_517_, 0, v_a_516_);
v_val_512_ = v___x_517_;
goto v___jp_511_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5___boxed(lean_object* v___f_531_, lean_object* v___f_532_, lean_object* v___f_533_, lean_object* v_k_534_, lean_object* v_v_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Lasm_KV_workers___lam__5(v___f_531_, v___f_532_, v___f_533_, v_k_534_, v_v_535_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6(lean_object* v_k_539_, lean_object* v___f_540_, lean_object* v_x_541_){
_start:
{
if (lean_obj_tag(v_x_541_) == 0)
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_551_; 
lean_dec_ref(v___f_540_);
lean_dec_ref(v_k_539_);
v_a_543_ = lean_ctor_get(v_x_541_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v_x_541_);
if (v_isSharedCheck_551_ == 0)
{
v___x_545_ = v_x_541_;
v_isShared_546_ = v_isSharedCheck_551_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v_x_541_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_551_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_550_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
lean_object* v___x_549_; 
v___x_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
return v___x_549_;
}
}
}
else
{
lean_object* v_a_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; uint8_t v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v_a_552_ = lean_ctor_get(v_x_541_, 0);
lean_inc(v_a_552_);
lean_dec_ref_known(v_x_541_, 1);
v___x_553_ = ((lean_object*)(l_Lasm_KV_workers___lam__6___closed__0));
v___x_554_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_554_, 0, v_k_539_);
v___x_555_ = lean_unsigned_to_nat(1u);
v___x_556_ = lean_mk_empty_array_with_capacity(v___x_555_);
v___x_557_ = lean_array_push(v___x_556_, v___x_554_);
v___x_558_ = lean_unsigned_to_nat(0u);
v___x_559_ = 0;
v___x_560_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_552_, v___x_553_, v___x_557_);
v___x_561_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_558_, v___x_559_, v___x_560_, v___f_540_);
return v___x_561_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6___boxed(lean_object* v_k_562_, lean_object* v___f_563_, lean_object* v_x_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lasm_KV_workers___lam__6(v_k_562_, v___f_563_, v_x_564_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7(lean_object* v___f_567_, lean_object* v___f_568_, lean_object* v___f_569_, lean_object* v_k_570_){
_start:
{
lean_object* v___f_572_; lean_object* v___x_573_; uint8_t v___x_574_; lean_object* v_val_576_; lean_object* v_a_580_; lean_object* v___x_582_; 
v___f_572_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__6___boxed), 4, 2);
lean_closure_set(v___f_572_, 0, v_k_570_);
lean_closure_set(v___f_572_, 1, v___f_567_);
v___x_573_ = lean_unsigned_to_nat(0u);
v___x_574_ = 0;
v___x_582_ = lean_apply_1(v___f_568_, lean_box(0));
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; lean_object* v___x_584_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_a_583_);
lean_dec_ref_known(v___x_582_, 1);
v___x_584_ = lean_apply_2(v___f_569_, v_a_583_, lean_box(0));
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_584_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_584_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
lean_ctor_set_tag(v___x_587_, 1);
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
v_val_576_ = v___x_590_;
goto v___jp_575_;
}
}
}
else
{
lean_object* v_a_593_; 
v_a_593_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_a_593_);
lean_dec_ref_known(v___x_584_, 1);
v_a_580_ = v_a_593_;
goto v___jp_579_;
}
}
else
{
lean_object* v_a_594_; 
lean_dec_ref(v___f_569_);
v_a_594_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_a_594_);
lean_dec_ref_known(v___x_582_, 1);
v_a_580_ = v_a_594_;
goto v___jp_579_;
}
v___jp_575_:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_577_, 0, v_val_576_);
v___x_578_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_573_, v___x_574_, v___x_577_, v___f_572_);
return v___x_578_;
}
v___jp_579_:
{
lean_object* v___x_581_; 
v___x_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_581_, 0, v_a_580_);
v_val_576_ = v___x_581_;
goto v___jp_575_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7___boxed(lean_object* v___f_595_, lean_object* v___f_596_, lean_object* v___f_597_, lean_object* v_k_598_, lean_object* v___y_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lasm_KV_workers___lam__7(v___f_595_, v___f_596_, v___f_597_, v_k_598_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8(lean_object* v_k_602_, lean_object* v___f_603_, lean_object* v_x_604_){
_start:
{
if (lean_obj_tag(v_x_604_) == 0)
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_614_; 
lean_dec_ref(v___f_603_);
lean_dec_ref(v_k_602_);
v_a_606_ = lean_ctor_get(v_x_604_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v_x_604_);
if (v_isSharedCheck_614_ == 0)
{
v___x_608_ = v_x_604_;
v_isShared_609_ = v_isSharedCheck_614_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v_x_604_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_614_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_606_);
v___x_611_ = v_reuseFailAlloc_613_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
lean_object* v___x_612_; 
v___x_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
return v___x_612_;
}
}
}
else
{
lean_object* v_a_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v_a_615_ = lean_ctor_get(v_x_604_, 0);
lean_inc(v_a_615_);
lean_dec_ref_known(v_x_604_, 1);
v___x_616_ = ((lean_object*)(l_Lasm_KV_workers___lam__8___closed__0));
v___x_617_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_617_, 0, v_k_602_);
v___x_618_ = lean_unsigned_to_nat(1u);
v___x_619_ = lean_mk_empty_array_with_capacity(v___x_618_);
v___x_620_ = lean_array_push(v___x_619_, v___x_617_);
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = 0;
v___x_623_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_615_, v___x_616_, v___x_620_);
v___x_624_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_621_, v___x_622_, v___x_623_, v___f_603_);
return v___x_624_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8___boxed(lean_object* v_k_625_, lean_object* v___f_626_, lean_object* v_x_627_, lean_object* v___y_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Lasm_KV_workers___lam__8(v_k_625_, v___f_626_, v_x_627_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__9(lean_object* v___f_630_, lean_object* v___x_631_, lean_object* v_name_632_, lean_object* v_k_633_){
_start:
{
lean_object* v___f_635_; lean_object* v___x_636_; uint8_t v___x_637_; lean_object* v_val_639_; lean_object* v_a_643_; lean_object* v___x_645_; 
v___f_635_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__8___boxed), 4, 2);
lean_closure_set(v___f_635_, 0, v_k_633_);
lean_closure_set(v___f_635_, 1, v___f_630_);
v___x_636_ = lean_unsigned_to_nat(0u);
v___x_637_ = 0;
v___x_645_ = lean_st_ref_get(v___x_631_);
if (lean_obj_tag(v___x_645_) == 9)
{
lean_object* v_value_646_; lean_object* v___x_647_; 
v_value_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_value_646_);
lean_dec_ref_known(v___x_645_, 2);
v___x_647_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_value_646_, v_name_632_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
v_a_648_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v___x_647_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_647_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
lean_ctor_set_tag(v___x_650_, 1);
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_a_648_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
v_val_639_ = v___x_653_;
goto v___jp_638_;
}
}
}
else
{
lean_object* v_a_656_; 
v_a_656_ = lean_ctor_get(v___x_647_, 0);
lean_inc(v_a_656_);
lean_dec_ref_known(v___x_647_, 1);
v_a_643_ = v_a_656_;
goto v___jp_642_;
}
}
else
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
lean_dec(v___x_645_);
v___x_657_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_658_ = lean_string_append(v___x_657_, v_name_632_);
lean_dec_ref(v_name_632_);
v___x_659_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
v_a_643_ = v___x_659_;
goto v___jp_642_;
}
v___jp_638_:
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v_val_639_);
v___x_641_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_636_, v___x_637_, v___x_640_, v___f_635_);
return v___x_641_;
}
v___jp_642_:
{
lean_object* v___x_644_; 
v___x_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_644_, 0, v_a_643_);
v_val_639_ = v___x_644_;
goto v___jp_638_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__9___boxed(lean_object* v___f_660_, lean_object* v___x_661_, lean_object* v_name_662_, lean_object* v_k_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lasm_KV_workers___lam__9(v___f_660_, v___x_661_, v_name_662_, v_k_663_);
lean_dec(v___x_661_);
return v_res_665_;
}
}
static lean_object* _init_l_Lasm_KV_workers___closed__2(void){
_start:
{
lean_object* v___x_668_; lean_object* v___f_669_; 
v___x_668_ = l_Lasm_Fetch_platformEnv;
v___f_669_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__3___boxed), 2, 1);
lean_closure_set(v___f_669_, 0, v___x_668_);
return v___f_669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers(lean_object* v_name_671_){
_start:
{
lean_object* v___f_672_; lean_object* v___f_673_; lean_object* v___f_674_; lean_object* v___x_675_; lean_object* v___f_676_; lean_object* v_put_677_; lean_object* v_delete_678_; lean_object* v_get_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___f_672_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_673_ = ((lean_object*)(l_Lasm_KV_workers___closed__1));
lean_inc_ref(v_name_671_);
v___f_674_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__1___boxed), 3, 1);
lean_closure_set(v___f_674_, 0, v_name_671_);
v___x_675_ = l_Lasm_Fetch_platformEnv;
v___f_676_ = lean_obj_once(&l_Lasm_KV_workers___closed__2, &l_Lasm_KV_workers___closed__2_once, _init_l_Lasm_KV_workers___closed__2);
lean_inc_ref(v___f_674_);
v_put_677_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__5___boxed), 6, 3);
lean_closure_set(v_put_677_, 0, v___f_672_);
lean_closure_set(v_put_677_, 1, v___f_676_);
lean_closure_set(v_put_677_, 2, v___f_674_);
v_delete_678_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__7___boxed), 5, 3);
lean_closure_set(v_delete_678_, 0, v___f_672_);
lean_closure_set(v_delete_678_, 1, v___f_676_);
lean_closure_set(v_delete_678_, 2, v___f_674_);
v_get_679_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__9___boxed), 5, 3);
lean_closure_set(v_get_679_, 0, v___f_673_);
lean_closure_set(v_get_679_, 1, v___x_675_);
lean_closure_set(v_get_679_, 2, v_name_671_);
v___x_680_ = ((lean_object*)(l_Lasm_KV_workers___closed__3));
v___x_681_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
lean_ctor_set(v___x_681_, 1, v_get_679_);
lean_ctor_set(v___x_681_, 2, v_put_677_);
lean_ctor_set(v___x_681_, 3, v_delete_678_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0(lean_object* v_x_683_){
_start:
{
if (lean_obj_tag(v_x_683_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
v_a_685_ = lean_ctor_get(v_x_683_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_683_);
if (v_isSharedCheck_693_ == 0)
{
v___x_687_ = v_x_683_;
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v_x_683_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_692_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; 
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
}
}
else
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_713_; 
v_a_694_ = lean_ctor_get(v_x_683_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v_x_683_);
if (v_isSharedCheck_713_ == 0)
{
v___x_696_ = v_x_683_;
v_isShared_697_ = v_isSharedCheck_713_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v_x_683_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_713_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = ((lean_object*)(l_Lasm_KV_deno___lam__0___closed__0));
v___x_699_ = l_Lasm_JS_Data_field(v_a_694_, v___x_698_);
lean_dec(v_a_694_);
if (lean_obj_tag(v___x_699_) == 4)
{
lean_object* v_s_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_711_; 
v_s_700_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_711_ == 0)
{
v___x_702_ = v___x_699_;
v_isShared_703_ = v_isSharedCheck_711_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_s_700_);
lean_dec(v___x_699_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_711_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
lean_ctor_set_tag(v___x_702_, 1);
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_s_700_);
v___x_705_ = v_reuseFailAlloc_710_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
lean_object* v___x_707_; 
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_705_);
v___x_707_ = v___x_696_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v___x_705_);
v___x_707_ = v_reuseFailAlloc_709_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_708_; 
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
return v___x_708_;
}
}
}
}
else
{
lean_object* v___x_712_; 
lean_dec(v___x_699_);
lean_del_object(v___x_696_);
v___x_712_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__0___closed__1));
return v___x_712_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0___boxed(lean_object* v_x_714_, lean_object* v___y_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lasm_KV_deno___lam__0(v_x_714_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3(lean_object* v_name_717_, lean_object* v_a_718_, lean_object* v___x_719_, lean_object* v___f_720_, lean_object* v_k_721_){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; uint8_t v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_723_ = ((lean_object*)(l_Lasm_KV_workers___lam__8___closed__0));
v___x_724_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_724_, 0, v_name_717_);
v___x_725_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_725_, 0, v_k_721_);
v___x_726_ = lean_unsigned_to_nat(2u);
v___x_727_ = lean_mk_empty_array_with_capacity(v___x_726_);
v___x_728_ = lean_array_push(v___x_727_, v___x_724_);
v___x_729_ = lean_array_push(v___x_728_, v___x_725_);
v___x_730_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
v___x_731_ = lean_unsigned_to_nat(1u);
v___x_732_ = lean_mk_empty_array_with_capacity(v___x_731_);
v___x_733_ = lean_array_push(v___x_732_, v___x_730_);
v___x_734_ = 0;
v___x_735_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_718_, v___x_723_, v___x_733_);
v___x_736_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_719_, v___x_734_, v___x_735_, v___f_720_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3___boxed(lean_object* v_name_737_, lean_object* v_a_738_, lean_object* v___x_739_, lean_object* v___f_740_, lean_object* v_k_741_, lean_object* v___y_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Lasm_KV_deno___lam__3(v_name_737_, v_a_738_, v___x_739_, v___f_740_, v_k_741_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1(lean_object* v_name_745_, lean_object* v_a_746_, lean_object* v___x_747_, lean_object* v___f_748_, lean_object* v_k_749_, lean_object* v_v_750_){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_752_ = ((lean_object*)(l_Lasm_KV_deno___lam__1___closed__0));
v___x_753_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_753_, 0, v_name_745_);
v___x_754_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_754_, 0, v_k_749_);
v___x_755_ = lean_unsigned_to_nat(2u);
v___x_756_ = lean_mk_empty_array_with_capacity(v___x_755_);
lean_inc_ref(v___x_756_);
v___x_757_ = lean_array_push(v___x_756_, v___x_753_);
v___x_758_ = lean_array_push(v___x_757_, v___x_754_);
v___x_759_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
v___x_760_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_760_, 0, v_v_750_);
v___x_761_ = lean_array_push(v___x_756_, v___x_759_);
v___x_762_ = lean_array_push(v___x_761_, v___x_760_);
v___x_763_ = 0;
v___x_764_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_746_, v___x_752_, v___x_762_);
v___x_765_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_747_, v___x_763_, v___x_764_, v___f_748_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1___boxed(lean_object* v_name_766_, lean_object* v_a_767_, lean_object* v___x_768_, lean_object* v___f_769_, lean_object* v_k_770_, lean_object* v_v_771_, lean_object* v___y_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Lasm_KV_deno___lam__1(v_name_766_, v_a_767_, v___x_768_, v___f_769_, v_k_770_, v_v_771_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2(lean_object* v_name_774_, lean_object* v_a_775_, lean_object* v___x_776_, lean_object* v___f_777_, lean_object* v_k_778_){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; uint8_t v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_780_ = ((lean_object*)(l_Lasm_KV_workers___lam__6___closed__0));
v___x_781_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_781_, 0, v_name_774_);
v___x_782_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_782_, 0, v_k_778_);
v___x_783_ = lean_unsigned_to_nat(2u);
v___x_784_ = lean_mk_empty_array_with_capacity(v___x_783_);
v___x_785_ = lean_array_push(v___x_784_, v___x_781_);
v___x_786_ = lean_array_push(v___x_785_, v___x_782_);
v___x_787_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
v___x_788_ = lean_unsigned_to_nat(1u);
v___x_789_ = lean_mk_empty_array_with_capacity(v___x_788_);
v___x_790_ = lean_array_push(v___x_789_, v___x_787_);
v___x_791_ = 0;
v___x_792_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_775_, v___x_780_, v___x_790_);
v___x_793_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_776_, v___x_791_, v___x_792_, v___f_777_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2___boxed(lean_object* v_name_794_, lean_object* v_a_795_, lean_object* v___x_796_, lean_object* v___f_797_, lean_object* v_k_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lasm_KV_deno___lam__2(v_name_794_, v_a_795_, v___x_796_, v___f_797_, v_k_798_);
return v_res_800_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1(void){
_start:
{
uint64_t v___x_802_; uint8_t v___x_803_; uint64_t v___x_804_; 
v___x_802_ = 8ULL;
v___x_803_ = 1;
v___x_804_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_803_, v___x_802_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(lean_object* v_o_806_, lean_object* v_name_807_, lean_object* v_args_808_){
_start:
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; uint64_t v___x_813_; lean_object* v___x_814_; 
v___x_810_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0));
v___x_811_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_811_, 0, v_o_806_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
lean_inc_ref(v_name_807_);
v___x_812_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_812_, 0, v_name_807_);
v___x_813_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1);
v___x_814_ = l_Lasm_JS_Value_invokeRaw(v___x_811_, v___x_812_, v_args_808_, v___x_813_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
lean_dec_ref_known(v___x_814_, 1);
v___x_816_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__2));
v___x_817_ = lean_string_append(v___x_816_, v_name_807_);
lean_dec_ref(v_name_807_);
v___x_818_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_817_, v_a_815_);
lean_dec(v_a_815_);
lean_dec_ref(v___x_817_);
return v___x_818_;
}
else
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
lean_dec_ref(v_name_807_);
v_a_819_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_814_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_814_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___boxed(lean_object* v_o_827_, lean_object* v_name_828_, lean_object* v_args_829_, lean_object* v___y_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_o_827_, v_name_828_, v_args_829_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno(lean_object* v_name_838_){
_start:
{
lean_object* v___f_840_; lean_object* v___f_841_; lean_object* v___x_842_; 
v___f_840_ = ((lean_object*)(l_Lasm_KV_deno___closed__0));
v___f_841_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___x_842_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v_a_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_a_843_ = lean_ctor_get(v___x_842_, 0);
lean_inc(v_a_843_);
lean_dec_ref_known(v___x_842_, 1);
v___x_844_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_845_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_843_, v___x_844_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v_a_846_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_846_);
lean_dec_ref_known(v___x_845_, 1);
v___x_847_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_848_ = lean_unsigned_to_nat(0u);
v___x_849_ = ((lean_object*)(l_Lasm_KV_deno___closed__3));
v___x_850_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_a_846_, v___x_847_, v___x_849_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_863_; 
v_a_851_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_863_ == 0)
{
v___x_853_ = v___x_850_;
v_isShared_854_ = v_isSharedCheck_863_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_850_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_863_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___f_855_; lean_object* v___f_856_; lean_object* v___f_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_861_; 
lean_inc_n(v_a_851_, 2);
lean_inc_ref_n(v_name_838_, 2);
v___f_855_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__3___boxed), 6, 4);
lean_closure_set(v___f_855_, 0, v_name_838_);
lean_closure_set(v___f_855_, 1, v_a_851_);
lean_closure_set(v___f_855_, 2, v___x_848_);
lean_closure_set(v___f_855_, 3, v___f_840_);
v___f_856_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__1___boxed), 7, 4);
lean_closure_set(v___f_856_, 0, v_name_838_);
lean_closure_set(v___f_856_, 1, v_a_851_);
lean_closure_set(v___f_856_, 2, v___x_848_);
lean_closure_set(v___f_856_, 3, v___f_841_);
v___f_857_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__2___boxed), 6, 4);
lean_closure_set(v___f_857_, 0, v_name_838_);
lean_closure_set(v___f_857_, 1, v_a_851_);
lean_closure_set(v___f_857_, 2, v___x_848_);
lean_closure_set(v___f_857_, 3, v___f_841_);
v___x_858_ = ((lean_object*)(l_Lasm_KV_deno___closed__4));
v___x_859_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
lean_ctor_set(v___x_859_, 1, v___f_855_);
lean_ctor_set(v___x_859_, 2, v___f_856_);
lean_ctor_set(v___x_859_, 3, v___f_857_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_859_);
v___x_861_ = v___x_853_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v___x_859_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
else
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
lean_dec_ref(v_name_838_);
v_a_864_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_871_ == 0)
{
v___x_866_ = v___x_850_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_850_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_a_864_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_879_; 
lean_dec_ref(v_name_838_);
v_a_872_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_879_ == 0)
{
v___x_874_ = v___x_845_;
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_845_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_a_872_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
lean_dec_ref(v_name_838_);
v_a_880_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_842_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_842_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___boxed(lean_object* v_name_888_, lean_object* v_a_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lasm_KV_deno(v_name_888_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0(lean_object* v_name_891_, lean_object* v_k_892_){
_start:
{
lean_object* v_val_895_; lean_object* v___x_897_; 
v___x_897_ = l_Lasm_Fastly_kvGetText(v_name_891_, v_k_892_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v___x_897_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_897_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
lean_ctor_set_tag(v___x_900_, 1);
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_a_898_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
v_val_895_ = v___x_903_;
goto v___jp_894_;
}
}
}
else
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
v_a_906_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v___x_897_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_897_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
lean_ctor_set_tag(v___x_908_, 0);
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_a_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
v_val_895_ = v___x_911_;
goto v___jp_894_;
}
}
}
v___jp_894_:
{
lean_object* v___x_896_; 
v___x_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_896_, 0, v_val_895_);
return v___x_896_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0___boxed(lean_object* v_name_914_, lean_object* v_k_915_, lean_object* v___y_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Lasm_KV_fastly___lam__0(v_name_914_, v_k_915_);
lean_dec_ref(v_k_915_);
lean_dec_ref(v_name_914_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1(lean_object* v_name_918_, lean_object* v_k_919_, lean_object* v_v_920_){
_start:
{
lean_object* v_val_923_; lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = lean_string_to_utf8(v_v_920_);
v___x_926_ = lasm_fastly_kv_put(v_name_918_, v_k_919_, v___x_925_);
lean_dec_ref(v___x_925_);
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_934_; 
v_a_927_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_934_ == 0)
{
v___x_929_ = v___x_926_;
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_dec(v___x_926_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_932_; 
if (v_isShared_930_ == 0)
{
lean_ctor_set_tag(v___x_929_, 1);
v___x_932_ = v___x_929_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_a_927_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
v_val_923_ = v___x_932_;
goto v___jp_922_;
}
}
}
else
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_942_; 
v_a_935_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_942_ == 0)
{
v___x_937_ = v___x_926_;
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_926_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
lean_ctor_set_tag(v___x_937_, 0);
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_a_935_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
v_val_923_ = v___x_940_;
goto v___jp_922_;
}
}
}
v___jp_922_:
{
lean_object* v___x_924_; 
v___x_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_924_, 0, v_val_923_);
return v___x_924_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1___boxed(lean_object* v_name_943_, lean_object* v_k_944_, lean_object* v_v_945_, lean_object* v___y_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lasm_KV_fastly___lam__1(v_name_943_, v_k_944_, v_v_945_);
lean_dec_ref(v_v_945_);
lean_dec_ref(v_k_944_);
lean_dec_ref(v_name_943_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2(lean_object* v_name_948_, lean_object* v_k_949_){
_start:
{
lean_object* v_val_952_; lean_object* v___x_954_; 
v___x_954_ = lasm_fastly_kv_delete(v_name_948_, v_k_949_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_962_; 
v_a_955_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_962_ == 0)
{
v___x_957_ = v___x_954_;
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_954_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_960_; 
if (v_isShared_958_ == 0)
{
lean_ctor_set_tag(v___x_957_, 1);
v___x_960_ = v___x_957_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_955_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
v_val_952_ = v___x_960_;
goto v___jp_951_;
}
}
}
else
{
lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_970_; 
v_a_963_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_970_ == 0)
{
v___x_965_ = v___x_954_;
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v___x_954_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
lean_ctor_set_tag(v___x_965_, 0);
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_963_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
v_val_952_ = v___x_968_;
goto v___jp_951_;
}
}
}
v___jp_951_:
{
lean_object* v___x_953_; 
v___x_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_953_, 0, v_val_952_);
return v___x_953_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2___boxed(lean_object* v_name_971_, lean_object* v_k_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lasm_KV_fastly___lam__2(v_name_971_, v_k_972_);
lean_dec_ref(v_k_972_);
lean_dec_ref(v_name_971_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly(lean_object* v_name_976_){
_start:
{
lean_object* v___f_977_; lean_object* v___f_978_; lean_object* v___f_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
lean_inc_ref_n(v_name_976_, 2);
v___f_977_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__0___boxed), 3, 1);
lean_closure_set(v___f_977_, 0, v_name_976_);
v___f_978_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__1___boxed), 4, 1);
lean_closure_set(v___f_978_, 0, v_name_976_);
v___f_979_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__2___boxed), 3, 1);
lean_closure_set(v___f_979_, 0, v_name_976_);
v___x_980_ = ((lean_object*)(l_Lasm_KV_fastly___closed__0));
v___x_981_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
lean_ctor_set(v___x_981_, 1, v___f_977_);
lean_ctor_set(v___x_981_, 2, v___f_978_);
lean_ctor_set(v___x_981_, 3, v___f_979_);
return v___x_981_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0___closed__0(void){
_start:
{
uint8_t v___x_982_; uint64_t v___x_983_; 
v___x_982_ = 0;
v___x_983_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_982_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0(lean_object* v_o_984_, lean_object* v_key_985_){
_start:
{
uint32_t v___x_987_; uint32_t v___x_988_; uint64_t v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_987_ = 203;
v___x_988_ = lasm_js_value_handle(v_o_984_);
v___x_989_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0___closed__0);
v___x_990_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_990_, 0, v_key_985_);
v___x_991_ = l_Lasm_JS_Wire_encode(v___x_990_);
lean_dec_ref_known(v___x_990_, 1);
v___x_992_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0));
v___x_993_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_993_, 0, v_o_984_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
v___x_994_ = lasm_js_call(v___x_987_, v___x_988_, v___x_989_, v___x_991_, v___x_993_);
lean_dec_ref_known(v___x_993_, 2);
lean_dec_ref(v___x_991_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_996_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_a_995_);
lean_dec_ref_known(v___x_994_, 1);
v___x_996_ = l_Lasm_JS_Wire_decode(v_a_995_);
lean_dec(v_a_995_);
return v___x_996_;
}
else
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
v_a_997_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_994_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_994_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0___boxed(lean_object* v_o_1005_, lean_object* v_key_1006_, lean_object* v_a_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0(v_o_1005_, v_key_1006_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0(lean_object* v_name_1009_, uint8_t v___x_1010_, uint8_t v_a_1011_, lean_object* v_____do__lift_1012_){
_start:
{
if (lean_obj_tag(v_____do__lift_1012_) == 9)
{
lean_object* v_value_1014_; lean_object* v___x_1015_; 
v_value_1014_ = lean_ctor_get(v_____do__lift_1012_, 0);
lean_inc(v_value_1014_);
lean_dec_ref_known(v_____do__lift_1012_, 2);
v___x_1015_ = l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0(v_value_1014_, v_name_1009_);
if (lean_obj_tag(v___x_1015_) == 0)
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1028_; 
v_a_1016_ = lean_ctor_get(v___x_1015_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1018_ = v___x_1015_;
v_isShared_1019_ = v_isSharedCheck_1028_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1015_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1028_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
if (lean_obj_tag(v_a_1016_) == 9)
{
lean_object* v___x_1020_; lean_object* v___x_1022_; 
lean_dec_ref_known(v_a_1016_, 2);
v___x_1020_ = lean_box(v___x_1010_);
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 0, v___x_1020_);
v___x_1022_ = v___x_1018_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1020_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
else
{
lean_object* v___x_1024_; lean_object* v___x_1026_; 
lean_dec(v_a_1016_);
v___x_1024_ = lean_box(v_a_1011_);
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 0, v___x_1024_);
v___x_1026_ = v___x_1018_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v___x_1024_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
}
else
{
lean_object* v_a_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1036_; 
v_a_1029_ = lean_ctor_get(v___x_1015_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1031_ = v___x_1015_;
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_a_1029_);
lean_dec(v___x_1015_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1036_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1034_; 
if (v_isShared_1032_ == 0)
{
v___x_1034_ = v___x_1031_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v_a_1029_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
else
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
lean_dec(v_____do__lift_1012_);
lean_dec_ref(v_name_1009_);
v___x_1037_ = lean_box(v_a_1011_);
v___x_1038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
return v___x_1038_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0___boxed(lean_object* v_name_1039_, lean_object* v___x_1040_, lean_object* v_a_1041_, lean_object* v_____do__lift_1042_, lean_object* v___y_1043_){
_start:
{
uint8_t v___x_3824__boxed_1044_; uint8_t v_a_3825__boxed_1045_; lean_object* v_res_1046_; 
v___x_3824__boxed_1044_ = lean_unbox(v___x_1040_);
v_a_3825__boxed_1045_ = lean_unbox(v_a_1041_);
v_res_1046_ = l_Lasm_KV_open___lam__0(v_name_1039_, v___x_3824__boxed_1044_, v_a_3825__boxed_1045_, v_____do__lift_1042_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2(lean_object* v_a_1047_, lean_object* v_k_1048_, lean_object* v_v_1049_, lean_object* v___x_1050_, lean_object* v_x_1051_){
_start:
{
if (lean_obj_tag(v_x_1051_) == 0)
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1061_; 
lean_dec_ref(v___x_1050_);
lean_dec_ref(v_v_1049_);
lean_dec_ref(v_k_1048_);
lean_dec_ref(v_a_1047_);
v_a_1053_ = lean_ctor_get(v_x_1051_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v_x_1051_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1055_ = v_x_1051_;
v_isShared_1056_ = v_isSharedCheck_1061_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v_x_1051_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1061_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1058_; 
if (v_isShared_1056_ == 0)
{
v___x_1058_ = v___x_1055_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_a_1053_);
v___x_1058_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
return v___x_1059_;
}
}
}
else
{
lean_object* v_a_1062_; uint8_t v___x_1063_; 
v_a_1062_ = lean_ctor_get(v_x_1051_, 0);
lean_inc(v_a_1062_);
lean_dec_ref_known(v_x_1051_, 1);
v___x_1063_ = lean_unbox(v_a_1062_);
lean_dec(v_a_1062_);
if (v___x_1063_ == 0)
{
lean_object* v_put_1064_; lean_object* v___x_1065_; 
lean_dec_ref(v___x_1050_);
v_put_1064_ = lean_ctor_get(v_a_1047_, 2);
lean_inc_ref(v_put_1064_);
lean_dec_ref(v_a_1047_);
v___x_1065_ = lean_apply_3(v_put_1064_, v_k_1048_, v_v_1049_, lean_box(0));
return v___x_1065_;
}
else
{
lean_object* v_put_1066_; lean_object* v___x_1067_; 
lean_dec_ref(v_a_1047_);
v_put_1066_ = lean_ctor_get(v___x_1050_, 2);
lean_inc_ref(v_put_1066_);
lean_dec_ref(v___x_1050_);
v___x_1067_ = lean_apply_3(v_put_1066_, v_k_1048_, v_v_1049_, lean_box(0));
return v___x_1067_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2___boxed(lean_object* v_a_1068_, lean_object* v_k_1069_, lean_object* v_v_1070_, lean_object* v___x_1071_, lean_object* v_x_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_Lasm_KV_open___lam__2(v_a_1068_, v_k_1069_, v_v_1070_, v___x_1071_, v_x_1072_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1(lean_object* v_a_1075_, lean_object* v___x_1076_, uint8_t v_a_1077_, lean_object* v___f_1078_, lean_object* v___f_1079_, lean_object* v_k_1080_, lean_object* v_v_1081_){
_start:
{
lean_object* v___f_1083_; lean_object* v___x_1084_; lean_object* v_val_1086_; lean_object* v_a_1090_; lean_object* v___x_1092_; 
v___f_1083_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__2___boxed), 6, 4);
lean_closure_set(v___f_1083_, 0, v_a_1075_);
lean_closure_set(v___f_1083_, 1, v_k_1080_);
lean_closure_set(v___f_1083_, 2, v_v_1081_);
lean_closure_set(v___f_1083_, 3, v___x_1076_);
v___x_1084_ = lean_unsigned_to_nat(0u);
v___x_1092_ = lean_apply_1(v___f_1078_, lean_box(0));
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1094_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1092_, 1);
v___x_1094_ = lean_apply_2(v___f_1079_, v_a_1093_, lean_box(0));
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
v_a_1095_ = lean_ctor_get(v___x_1094_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1094_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1094_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set_tag(v___x_1097_, 1);
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
v_val_1086_ = v___x_1100_;
goto v___jp_1085_;
}
}
}
else
{
lean_object* v_a_1103_; 
v_a_1103_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_a_1103_);
lean_dec_ref_known(v___x_1094_, 1);
v_a_1090_ = v_a_1103_;
goto v___jp_1089_;
}
}
else
{
lean_object* v_a_1104_; 
lean_dec_ref(v___f_1079_);
v_a_1104_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1104_);
lean_dec_ref_known(v___x_1092_, 1);
v_a_1090_ = v_a_1104_;
goto v___jp_1089_;
}
v___jp_1085_:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1087_, 0, v_val_1086_);
v___x_1088_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1084_, v_a_1077_, v___x_1087_, v___f_1083_);
return v___x_1088_;
}
v___jp_1089_:
{
lean_object* v___x_1091_; 
v___x_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1091_, 0, v_a_1090_);
v_val_1086_ = v___x_1091_;
goto v___jp_1085_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1___boxed(lean_object* v_a_1105_, lean_object* v___x_1106_, lean_object* v_a_1107_, lean_object* v___f_1108_, lean_object* v___f_1109_, lean_object* v_k_1110_, lean_object* v_v_1111_, lean_object* v___y_1112_){
_start:
{
uint8_t v_a_3929__boxed_1113_; lean_object* v_res_1114_; 
v_a_3929__boxed_1113_ = lean_unbox(v_a_1107_);
v_res_1114_ = l_Lasm_KV_open___lam__1(v_a_1105_, v___x_1106_, v_a_3929__boxed_1113_, v___f_1108_, v___f_1109_, v_k_1110_, v_v_1111_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3(lean_object* v_a_1115_, lean_object* v_k_1116_, lean_object* v___x_1117_, lean_object* v_x_1118_){
_start:
{
if (lean_obj_tag(v_x_1118_) == 0)
{
lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1128_; 
lean_dec_ref(v___x_1117_);
lean_dec_ref(v_k_1116_);
lean_dec_ref(v_a_1115_);
v_a_1120_ = lean_ctor_get(v_x_1118_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v_x_1118_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1122_ = v_x_1118_;
v_isShared_1123_ = v_isSharedCheck_1128_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_a_1120_);
lean_dec(v_x_1118_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1128_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1120_);
v___x_1125_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
lean_object* v___x_1126_; 
v___x_1126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
return v___x_1126_;
}
}
}
else
{
lean_object* v_a_1129_; uint8_t v___x_1130_; 
v_a_1129_ = lean_ctor_get(v_x_1118_, 0);
lean_inc(v_a_1129_);
lean_dec_ref_known(v_x_1118_, 1);
v___x_1130_ = lean_unbox(v_a_1129_);
lean_dec(v_a_1129_);
if (v___x_1130_ == 0)
{
lean_object* v_delete_1131_; lean_object* v___x_1132_; 
lean_dec_ref(v___x_1117_);
v_delete_1131_ = lean_ctor_get(v_a_1115_, 3);
lean_inc_ref(v_delete_1131_);
lean_dec_ref(v_a_1115_);
v___x_1132_ = lean_apply_2(v_delete_1131_, v_k_1116_, lean_box(0));
return v___x_1132_;
}
else
{
lean_object* v_delete_1133_; lean_object* v___x_1134_; 
lean_dec_ref(v_a_1115_);
v_delete_1133_ = lean_ctor_get(v___x_1117_, 3);
lean_inc_ref(v_delete_1133_);
lean_dec_ref(v___x_1117_);
v___x_1134_ = lean_apply_2(v_delete_1133_, v_k_1116_, lean_box(0));
return v___x_1134_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3___boxed(lean_object* v_a_1135_, lean_object* v_k_1136_, lean_object* v___x_1137_, lean_object* v_x_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l_Lasm_KV_open___lam__3(v_a_1135_, v_k_1136_, v___x_1137_, v_x_1138_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4(lean_object* v_a_1141_, lean_object* v___x_1142_, uint8_t v_a_1143_, lean_object* v___f_1144_, lean_object* v___f_1145_, lean_object* v_k_1146_){
_start:
{
lean_object* v___f_1148_; lean_object* v___x_1149_; lean_object* v_val_1151_; lean_object* v_a_1155_; lean_object* v___x_1157_; 
v___f_1148_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__3___boxed), 5, 3);
lean_closure_set(v___f_1148_, 0, v_a_1141_);
lean_closure_set(v___f_1148_, 1, v_k_1146_);
lean_closure_set(v___f_1148_, 2, v___x_1142_);
v___x_1149_ = lean_unsigned_to_nat(0u);
v___x_1157_ = lean_apply_1(v___f_1144_, lean_box(0));
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1159_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_a_1158_);
lean_dec_ref_known(v___x_1157_, 1);
v___x_1159_ = lean_apply_2(v___f_1145_, v_a_1158_, lean_box(0));
if (lean_obj_tag(v___x_1159_) == 0)
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1167_; 
v_a_1160_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1162_ = v___x_1159_;
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___x_1159_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1165_; 
if (v_isShared_1163_ == 0)
{
lean_ctor_set_tag(v___x_1162_, 1);
v___x_1165_ = v___x_1162_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1160_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
v_val_1151_ = v___x_1165_;
goto v___jp_1150_;
}
}
}
else
{
lean_object* v_a_1168_; 
v_a_1168_ = lean_ctor_get(v___x_1159_, 0);
lean_inc(v_a_1168_);
lean_dec_ref_known(v___x_1159_, 1);
v_a_1155_ = v_a_1168_;
goto v___jp_1154_;
}
}
else
{
lean_object* v_a_1169_; 
lean_dec_ref(v___f_1145_);
v_a_1169_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_a_1169_);
lean_dec_ref_known(v___x_1157_, 1);
v_a_1155_ = v_a_1169_;
goto v___jp_1154_;
}
v___jp_1150_:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1152_, 0, v_val_1151_);
v___x_1153_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1149_, v_a_1143_, v___x_1152_, v___f_1148_);
return v___x_1153_;
}
v___jp_1154_:
{
lean_object* v___x_1156_; 
v___x_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1156_, 0, v_a_1155_);
v_val_1151_ = v___x_1156_;
goto v___jp_1150_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4___boxed(lean_object* v_a_1170_, lean_object* v___x_1171_, lean_object* v_a_1172_, lean_object* v___f_1173_, lean_object* v___f_1174_, lean_object* v_k_1175_, lean_object* v___y_1176_){
_start:
{
uint8_t v_a_4029__boxed_1177_; lean_object* v_res_1178_; 
v_a_4029__boxed_1177_ = lean_unbox(v_a_1172_);
v_res_1178_ = l_Lasm_KV_open___lam__4(v_a_1170_, v___x_1171_, v_a_4029__boxed_1177_, v___f_1173_, v___f_1174_, v_k_1175_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5(lean_object* v_a_1179_, lean_object* v_k_1180_, lean_object* v___x_1181_, lean_object* v_x_1182_){
_start:
{
if (lean_obj_tag(v_x_1182_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1192_; 
lean_dec_ref(v___x_1181_);
lean_dec_ref(v_k_1180_);
lean_dec_ref(v_a_1179_);
v_a_1184_ = lean_ctor_get(v_x_1182_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v_x_1182_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1186_ = v_x_1182_;
v_isShared_1187_ = v_isSharedCheck_1192_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v_x_1182_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1192_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
lean_object* v___x_1190_; 
v___x_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
return v___x_1190_;
}
}
}
else
{
lean_object* v_a_1193_; uint8_t v___x_1194_; 
v_a_1193_ = lean_ctor_get(v_x_1182_, 0);
lean_inc(v_a_1193_);
lean_dec_ref_known(v_x_1182_, 1);
v___x_1194_ = lean_unbox(v_a_1193_);
lean_dec(v_a_1193_);
if (v___x_1194_ == 0)
{
lean_object* v_get_1195_; lean_object* v___x_1196_; 
lean_dec_ref(v___x_1181_);
v_get_1195_ = lean_ctor_get(v_a_1179_, 1);
lean_inc_ref(v_get_1195_);
lean_dec_ref(v_a_1179_);
v___x_1196_ = lean_apply_2(v_get_1195_, v_k_1180_, lean_box(0));
return v___x_1196_;
}
else
{
lean_object* v_get_1197_; lean_object* v___x_1198_; 
lean_dec_ref(v_a_1179_);
v_get_1197_ = lean_ctor_get(v___x_1181_, 1);
lean_inc_ref(v_get_1197_);
lean_dec_ref(v___x_1181_);
v___x_1198_ = lean_apply_2(v_get_1197_, v_k_1180_, lean_box(0));
return v___x_1198_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5___boxed(lean_object* v_a_1199_, lean_object* v_k_1200_, lean_object* v___x_1201_, lean_object* v_x_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Lasm_KV_open___lam__5(v_a_1199_, v_k_1200_, v___x_1201_, v_x_1202_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6(lean_object* v_a_1205_, lean_object* v___x_1206_, uint8_t v_a_1207_, lean_object* v___x_1208_, lean_object* v_name_1209_, uint8_t v___x_1210_, lean_object* v_k_1211_){
_start:
{
lean_object* v___f_1213_; lean_object* v___x_1214_; lean_object* v_val_1216_; uint8_t v_a_1220_; lean_object* v___x_1223_; 
v___f_1213_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__5___boxed), 5, 3);
lean_closure_set(v___f_1213_, 0, v_a_1205_);
lean_closure_set(v___f_1213_, 1, v_k_1211_);
lean_closure_set(v___f_1213_, 2, v___x_1206_);
v___x_1214_ = lean_unsigned_to_nat(0u);
v___x_1223_ = lean_st_ref_get(v___x_1208_);
if (lean_obj_tag(v___x_1223_) == 9)
{
lean_object* v_value_1224_; lean_object* v___x_1225_; 
v_value_1224_ = lean_ctor_get(v___x_1223_, 0);
lean_inc(v_value_1224_);
lean_dec_ref_known(v___x_1223_, 2);
v___x_1225_ = l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0(v_value_1224_, v_name_1209_);
if (lean_obj_tag(v___x_1225_) == 0)
{
lean_object* v_a_1226_; 
v_a_1226_ = lean_ctor_get(v___x_1225_, 0);
lean_inc(v_a_1226_);
lean_dec_ref_known(v___x_1225_, 1);
if (lean_obj_tag(v_a_1226_) == 9)
{
lean_dec_ref_known(v_a_1226_, 2);
v_a_1220_ = v___x_1210_;
goto v___jp_1219_;
}
else
{
lean_dec(v_a_1226_);
v_a_1220_ = v_a_1207_;
goto v___jp_1219_;
}
}
else
{
lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1234_; 
v_a_1227_ = lean_ctor_get(v___x_1225_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1229_ = v___x_1225_;
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_dec(v___x_1225_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1232_; 
if (v_isShared_1230_ == 0)
{
lean_ctor_set_tag(v___x_1229_, 0);
v___x_1232_ = v___x_1229_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1227_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
v_val_1216_ = v___x_1232_;
goto v___jp_1215_;
}
}
}
}
else
{
lean_dec(v___x_1223_);
lean_dec_ref(v_name_1209_);
v_a_1220_ = v_a_1207_;
goto v___jp_1219_;
}
v___jp_1215_:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1217_, 0, v_val_1216_);
v___x_1218_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1214_, v_a_1207_, v___x_1217_, v___f_1213_);
return v___x_1218_;
}
v___jp_1219_:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1221_ = lean_box(v_a_1220_);
v___x_1222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
v_val_1216_ = v___x_1222_;
goto v___jp_1215_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6___boxed(lean_object* v_a_1235_, lean_object* v___x_1236_, lean_object* v_a_1237_, lean_object* v___x_1238_, lean_object* v_name_1239_, lean_object* v___x_1240_, lean_object* v_k_1241_, lean_object* v___y_1242_){
_start:
{
uint8_t v_a_4129__boxed_1243_; uint8_t v___x_4131__boxed_1244_; lean_object* v_res_1245_; 
v_a_4129__boxed_1243_ = lean_unbox(v_a_1237_);
v___x_4131__boxed_1244_ = lean_unbox(v___x_1240_);
v_res_1245_ = l_Lasm_KV_open___lam__6(v_a_1235_, v___x_1236_, v_a_4129__boxed_1243_, v___x_1238_, v_name_1239_, v___x_4131__boxed_1244_, v_k_1241_);
lean_dec(v___x_1238_);
return v_res_1245_;
}
}
static uint32_t _init_l_Lasm_KV_open___closed__0(void){
_start:
{
lean_object* v___x_1246_; uint32_t v___x_1247_; 
v___x_1246_ = lean_box(0);
v___x_1247_ = lasm_fetch_platform(v___x_1246_);
return v___x_1247_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__1(void){
_start:
{
uint32_t v___x_1248_; uint32_t v___x_1249_; uint8_t v___x_1250_; 
v___x_1248_ = 2;
v___x_1249_ = lean_uint32_once(&l_Lasm_KV_open___closed__0, &l_Lasm_KV_open___closed__0_once, _init_l_Lasm_KV_open___closed__0);
v___x_1250_ = lean_uint32_dec_eq(v___x_1249_, v___x_1248_);
return v___x_1250_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__2(void){
_start:
{
uint32_t v___x_1251_; uint32_t v___x_1252_; uint8_t v___x_1253_; 
v___x_1251_ = 0;
v___x_1252_ = lean_uint32_once(&l_Lasm_KV_open___closed__0, &l_Lasm_KV_open___closed__0_once, _init_l_Lasm_KV_open___closed__0);
v___x_1253_ = lean_uint32_dec_eq(v___x_1252_, v___x_1251_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open(lean_object* v_name_1256_){
_start:
{
uint8_t v___x_1258_; 
v___x_1258_ = lean_uint8_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
if (v___x_1258_ == 0)
{
uint8_t v___x_1259_; uint8_t v_a_1261_; 
v___x_1259_ = lean_uint8_once(&l_Lasm_KV_open___closed__2, &l_Lasm_KV_open___closed__2_once, _init_l_Lasm_KV_open___closed__2);
if (v___x_1259_ == 0)
{
lean_object* v___x_1298_; 
lean_dec_ref(v_name_1256_);
v___x_1298_ = l_Lasm_KV_memory();
return v___x_1298_;
}
else
{
lean_object* v___x_1299_; 
v___x_1299_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1299_) == 0)
{
lean_object* v_a_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v_a_1300_ = lean_ctor_get(v___x_1299_, 0);
lean_inc(v_a_1300_);
lean_dec_ref_known(v___x_1299_, 1);
v___x_1301_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_1302_ = l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0(v_a_1300_, v___x_1301_);
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v_a_1303_; 
v_a_1303_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_a_1303_);
lean_dec_ref_known(v___x_1302_, 1);
if (lean_obj_tag(v_a_1303_) == 9)
{
lean_object* v_value_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v_value_1304_ = lean_ctor_get(v_a_1303_, 0);
lean_inc(v_value_1304_);
lean_dec_ref_known(v_a_1303_, 2);
v___x_1305_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_1306_ = l_Lasm_JS_Value_get___at___00Lasm_KV_open_spec__0(v_value_1304_, v___x_1305_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; 
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1307_);
lean_dec_ref_known(v___x_1306_, 1);
if (lean_obj_tag(v_a_1307_) == 9)
{
lean_object* v___x_1308_; 
lean_dec_ref_known(v_a_1307_, 2);
v___x_1308_ = l_Lasm_KV_deno(v_name_1256_);
if (lean_obj_tag(v___x_1308_) == 0)
{
return v___x_1308_;
}
else
{
lean_object* v___x_1309_; 
lean_dec_ref_known(v___x_1308_, 1);
v___x_1309_ = l_Lasm_KV_memory();
return v___x_1309_;
}
}
else
{
lean_dec(v_a_1307_);
v_a_1261_ = v___x_1258_;
goto v___jp_1260_;
}
}
else
{
lean_dec_ref_known(v___x_1306_, 1);
v_a_1261_ = v___x_1258_;
goto v___jp_1260_;
}
}
else
{
lean_dec(v_a_1303_);
v_a_1261_ = v___x_1258_;
goto v___jp_1260_;
}
}
else
{
lean_dec_ref_known(v___x_1302_, 1);
v_a_1261_ = v___x_1258_;
goto v___jp_1260_;
}
}
else
{
lean_object* v_a_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1317_; 
lean_dec_ref(v_name_1256_);
v_a_1310_ = lean_ctor_get(v___x_1299_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1299_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1299_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v___x_1299_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
v___x_1315_ = v___x_1312_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_a_1310_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
}
v___jp_1260_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___f_1264_; lean_object* v___x_1265_; 
v___x_1262_ = lean_box(v___x_1259_);
v___x_1263_ = lean_box(v_a_1261_);
lean_inc_ref(v_name_1256_);
v___f_1264_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1264_, 0, v_name_1256_);
lean_closure_set(v___f_1264_, 1, v___x_1262_);
lean_closure_set(v___f_1264_, 2, v___x_1263_);
v___x_1265_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; uint8_t v___x_1267_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_a_1266_);
lean_dec_ref_known(v___x_1265_, 1);
v___x_1267_ = lean_unbox(v_a_1266_);
lean_dec(v_a_1266_);
if (v___x_1267_ == 0)
{
lean_object* v___x_1268_; 
lean_dec_ref(v___f_1264_);
lean_dec_ref(v_name_1256_);
v___x_1268_ = l_Lasm_KV_memory();
return v___x_1268_;
}
else
{
lean_object* v___x_1269_; lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1289_; 
v___x_1269_ = l_Lasm_KV_memory();
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1272_ = v___x_1269_;
v_isShared_1273_ = v_isSharedCheck_1289_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1269_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1289_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___f_1276_; lean_object* v___x_1277_; lean_object* v___f_1278_; lean_object* v___x_1279_; lean_object* v___f_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___f_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1287_; 
lean_inc_ref(v_name_1256_);
v___x_1274_ = l_Lasm_KV_workers(v_name_1256_);
v___x_1275_ = l_Lasm_Fetch_platformEnv;
v___f_1276_ = lean_obj_once(&l_Lasm_KV_workers___closed__2, &l_Lasm_KV_workers___closed__2_once, _init_l_Lasm_KV_workers___closed__2);
v___x_1277_ = lean_box(v_a_1261_);
lean_inc_ref(v___f_1264_);
lean_inc_ref_n(v___x_1274_, 2);
lean_inc_n(v_a_1270_, 2);
v___f_1278_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__1___boxed), 8, 5);
lean_closure_set(v___f_1278_, 0, v_a_1270_);
lean_closure_set(v___f_1278_, 1, v___x_1274_);
lean_closure_set(v___f_1278_, 2, v___x_1277_);
lean_closure_set(v___f_1278_, 3, v___f_1276_);
lean_closure_set(v___f_1278_, 4, v___f_1264_);
v___x_1279_ = lean_box(v_a_1261_);
v___f_1280_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__4___boxed), 7, 5);
lean_closure_set(v___f_1280_, 0, v_a_1270_);
lean_closure_set(v___f_1280_, 1, v___x_1274_);
lean_closure_set(v___f_1280_, 2, v___x_1279_);
lean_closure_set(v___f_1280_, 3, v___f_1276_);
lean_closure_set(v___f_1280_, 4, v___f_1264_);
v___x_1281_ = lean_box(v_a_1261_);
v___x_1282_ = lean_box(v___x_1259_);
v___f_1283_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__6___boxed), 8, 6);
lean_closure_set(v___f_1283_, 0, v_a_1270_);
lean_closure_set(v___f_1283_, 1, v___x_1274_);
lean_closure_set(v___f_1283_, 2, v___x_1281_);
lean_closure_set(v___f_1283_, 3, v___x_1275_);
lean_closure_set(v___f_1283_, 4, v_name_1256_);
lean_closure_set(v___f_1283_, 5, v___x_1282_);
v___x_1284_ = ((lean_object*)(l_Lasm_KV_open___closed__3));
v___x_1285_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
lean_ctor_set(v___x_1285_, 1, v___f_1283_);
lean_ctor_set(v___x_1285_, 2, v___f_1278_);
lean_ctor_set(v___x_1285_, 3, v___f_1280_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1285_);
v___x_1287_ = v___x_1272_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v___x_1285_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
else
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1297_; 
lean_dec_ref(v___f_1264_);
lean_dec_ref(v_name_1256_);
v_a_1290_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1292_ = v___x_1265_;
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1265_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1293_ == 0)
{
v___x_1295_ = v___x_1292_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_a_1290_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
}
}
}
else
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = ((lean_object*)(l_Lasm_KV_open___closed__4));
v___x_1319_ = lasm_fastly_kv_get(v_name_1256_, v___x_1318_);
if (lean_obj_tag(v___x_1319_) == 0)
{
lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1327_; 
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1327_ == 0)
{
lean_object* v_unused_1328_; 
v_unused_1328_ = lean_ctor_get(v___x_1319_, 0);
lean_dec(v_unused_1328_);
v___x_1321_ = v___x_1319_;
v_isShared_1322_ = v_isSharedCheck_1327_;
goto v_resetjp_1320_;
}
else
{
lean_dec(v___x_1319_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1327_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1323_; lean_object* v___x_1325_; 
v___x_1323_ = l_Lasm_KV_fastly(v_name_1256_);
if (v_isShared_1322_ == 0)
{
lean_ctor_set(v___x_1321_, 0, v___x_1323_);
v___x_1325_ = v___x_1321_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v___x_1323_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
else
{
lean_object* v___x_1329_; 
lean_dec_ref_known(v___x_1319_, 1);
lean_dec_ref(v_name_1256_);
v___x_1329_ = l_Lasm_KV_memory();
return v___x_1329_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___boxed(lean_object* v_name_1330_, lean_object* v_a_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lasm_KV_open(v_name_1330_);
return v_res_1332_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_Fetch(uint8_t builtin);
lean_object* initialize_Lasm_Fastly(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_KV(uint8_t builtin) {
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
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
