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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lasm_fastly_kv_delete(lean_object*, lean_object*);
extern lean_object* l_Lasm_Fetch_platformEnv;
lean_object* lean_st_ref_get(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object*, lean_object*, lean_object*);
uint32_t lasm_fetch_platform(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lasm_Fastly_kvGetText(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_onEdge();
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object*, lean_object*);
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
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_binding(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_binding___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_workers___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lasm.KV: no Workers environment with a binding "};
static const lean_object* l_Lasm_KV_workers___lam__1___closed__0 = (const lean_object*)&l_Lasm_KV_workers___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_workers___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lasm_KV_workers___lam__3___closed__0 = (const lean_object*)&l_Lasm_KV_workers___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_workers___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "put"};
static const lean_object* l_Lasm_KV_workers___lam__5___closed__0 = (const lean_object*)&l_Lasm_KV_workers___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_workers___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lasm_KV_workers___lam__7___closed__0 = (const lean_object*)&l_Lasm_KV_workers___lam__7___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_KV_workers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_KV_workers___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_KV_workers___closed__0 = (const lean_object*)&l_Lasm_KV_workers___closed__0_value;
static const lean_closure_object l_Lasm_KV_workers___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_KV_workers___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_KV_workers___closed__1 = (const lean_object*)&l_Lasm_KV_workers___closed__1_value;
static const lean_string_object l_Lasm_KV_workers___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "workers"};
static const lean_object* l_Lasm_KV_workers___closed__2 = (const lean_object*)&l_Lasm_KV_workers___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_KV_workers(lean_object*);
static const lean_string_object l_Lasm_KV_deno___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_KV_deno___lam__3___closed__0 = (const lean_object*)&l_Lasm_KV_deno___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_deno___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "set"};
static const lean_object* l_Lasm_KV_deno___lam__1___closed__0 = (const lean_object*)&l_Lasm_KV_deno___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_KV_deno___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_KV_deno___lam__3___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_KV_workers___closed__1_value)} };
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
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_open___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "workers or memory"};
static const lean_object* l_Lasm_KV_open___closed__0 = (const lean_object*)&l_Lasm_KV_open___closed__0_value;
static lean_once_cell_t l_Lasm_KV_open___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l_Lasm_KV_open___closed__1;
static lean_once_cell_t l_Lasm_KV_open___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_KV_open___closed__2;
static lean_once_cell_t l_Lasm_KV_open___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_KV_open___closed__3;
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
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0(void){
_start:
{
uint8_t v___x_401_; uint64_t v___x_402_; 
v___x_401_ = 0;
v___x_402_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(lean_object* v_o_404_, lean_object* v_key_405_){
_start:
{
uint32_t v___x_407_; uint32_t v___x_408_; uint64_t v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_407_ = 203;
v___x_408_ = lasm_js_value_handle(v_o_404_);
v___x_409_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0);
v___x_410_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_410_, 0, v_key_405_);
v___x_411_ = l_Lasm_JS_Wire_encode(v___x_410_);
lean_dec_ref_known(v___x_410_, 1);
v___x_412_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1));
v___x_413_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_413_, 0, v_o_404_);
lean_ctor_set(v___x_413_, 1, v___x_412_);
v___x_414_ = lasm_js_call(v___x_407_, v___x_408_, v___x_409_, v___x_411_, v___x_413_);
lean_dec_ref_known(v___x_413_, 2);
lean_dec_ref(v___x_411_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; lean_object* v___x_416_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
lean_inc(v_a_415_);
lean_dec_ref_known(v___x_414_, 1);
v___x_416_ = l_Lasm_JS_Wire_decode(v_a_415_);
lean_dec(v_a_415_);
return v___x_416_;
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
v_a_417_ = lean_ctor_get(v___x_414_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_414_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_414_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_414_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___boxed(lean_object* v_o_425_, lean_object* v_key_426_, lean_object* v_a_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_o_425_, v_key_426_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_binding(lean_object* v_name_429_){
_start:
{
lean_object* v_found_435_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_439_ = l_Lasm_Fetch_platformEnv;
v___x_440_ = lean_st_ref_get(v___x_439_);
switch(lean_obj_tag(v___x_440_))
{
case 9:
{
lean_object* v_value_441_; lean_object* v___x_442_; 
v_value_441_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_value_441_);
lean_dec_ref_known(v___x_440_, 2);
v___x_442_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_value_441_, v_name_429_);
if (lean_obj_tag(v___x_442_) == 0)
{
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_a_443_);
lean_dec_ref_known(v___x_442_, 1);
v_found_435_ = v_a_443_;
goto v___jp_434_;
}
else
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_451_; 
v_a_444_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_451_ == 0)
{
v___x_446_ = v___x_442_;
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_442_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
lean_ctor_set_tag(v___x_446_, 1);
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_a_444_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_442_, 1);
goto v___jp_431_;
}
}
case 8:
{
lean_object* v___x_452_; 
v___x_452_ = l_Lasm_JS_Data_field(v___x_440_, v_name_429_);
lean_dec_ref(v_name_429_);
lean_dec_ref_known(v___x_440_, 1);
v_found_435_ = v___x_452_;
goto v___jp_434_;
}
default: 
{
lean_dec(v___x_440_);
lean_dec_ref(v_name_429_);
goto v___jp_431_;
}
}
v___jp_431_:
{
lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_432_ = lean_box(0);
v___x_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
return v___x_433_;
}
v___jp_434_:
{
if (lean_obj_tag(v_found_435_) == 9)
{
lean_object* v_value_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v_value_436_ = lean_ctor_get(v_found_435_, 0);
lean_inc(v_value_436_);
lean_dec_ref_known(v_found_435_, 2);
v___x_437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_437_, 0, v_value_436_);
v___x_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_438_, 0, v___x_437_);
return v___x_438_;
}
else
{
lean_dec(v_found_435_);
goto v___jp_431_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_binding___boxed(lean_object* v_name_453_, lean_object* v_a_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lasm_KV_binding(v_name_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0(lean_object* v_x_456_){
_start:
{
if (lean_obj_tag(v_x_456_) == 0)
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_466_; 
v_a_458_ = lean_ctor_get(v_x_456_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v_x_456_);
if (v_isSharedCheck_466_ == 0)
{
v___x_460_ = v_x_456_;
v_isShared_461_ = v_isSharedCheck_466_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v_x_456_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_466_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_465_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
lean_object* v___x_464_; 
v___x_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
return v___x_464_;
}
}
}
else
{
lean_object* v___x_467_; 
lean_dec_ref_known(v_x_456_, 1);
v___x_467_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__1___closed__1));
return v___x_467_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0___boxed(lean_object* v_x_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lasm_KV_workers___lam__0(v_x_468_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2(lean_object* v_x_471_){
_start:
{
if (lean_obj_tag(v_x_471_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_481_; 
v_a_473_ = lean_ctor_get(v_x_471_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v_x_471_);
if (v_isSharedCheck_481_ == 0)
{
v___x_475_ = v_x_471_;
v_isShared_476_ = v_isSharedCheck_481_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v_x_471_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_481_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_480_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v___x_479_; 
v___x_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
return v___x_479_;
}
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_499_; 
v_a_482_ = lean_ctor_get(v_x_471_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v_x_471_);
if (v_isSharedCheck_499_ == 0)
{
v___x_484_ = v_x_471_;
v_isShared_485_ = v_isSharedCheck_499_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v_x_471_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_499_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
if (lean_obj_tag(v_a_482_) == 4)
{
lean_object* v_s_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_497_; 
v_s_486_ = lean_ctor_get(v_a_482_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v_a_482_);
if (v_isSharedCheck_497_ == 0)
{
v___x_488_ = v_a_482_;
v_isShared_489_ = v_isSharedCheck_497_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_s_486_);
lean_dec(v_a_482_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_497_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
if (v_isShared_489_ == 0)
{
lean_ctor_set_tag(v___x_488_, 1);
v___x_491_ = v___x_488_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_s_486_);
v___x_491_ = v_reuseFailAlloc_496_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_493_; 
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 0, v___x_491_);
v___x_493_ = v___x_484_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_491_);
v___x_493_ = v_reuseFailAlloc_495_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
lean_object* v___x_494_; 
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
}
}
else
{
lean_object* v___x_498_; 
lean_del_object(v___x_484_);
lean_dec(v_a_482_);
v___x_498_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__0___closed__1));
return v___x_498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2___boxed(lean_object* v_x_500_, lean_object* v___y_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lasm_KV_workers___lam__2(v_x_500_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1(lean_object* v_name_504_, lean_object* v_____do__lift_505_){
_start:
{
if (lean_obj_tag(v_____do__lift_505_) == 0)
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_507_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_508_ = lean_string_append(v___x_507_, v_name_504_);
v___x_509_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
v___x_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
return v___x_510_;
}
else
{
lean_object* v_val_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
v_val_511_ = lean_ctor_get(v_____do__lift_505_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v_____do__lift_505_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v_____do__lift_505_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_val_511_);
lean_dec(v_____do__lift_505_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
lean_ctor_set_tag(v___x_513_, 0);
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_val_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1___boxed(lean_object* v_name_519_, lean_object* v_____do__lift_520_, lean_object* v___y_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lasm_KV_workers___lam__1(v_name_519_, v_____do__lift_520_);
lean_dec_ref(v_name_519_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3(lean_object* v_k_524_, lean_object* v___f_525_, lean_object* v_x_526_){
_start:
{
if (lean_obj_tag(v_x_526_) == 0)
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_536_; 
lean_dec_ref(v___f_525_);
lean_dec_ref(v_k_524_);
v_a_528_ = lean_ctor_get(v_x_526_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v_x_526_);
if (v_isSharedCheck_536_ == 0)
{
v___x_530_ = v_x_526_;
v_isShared_531_ = v_isSharedCheck_536_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v_x_526_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_536_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_533_; 
if (v_isShared_531_ == 0)
{
v___x_533_ = v___x_530_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_528_);
v___x_533_ = v_reuseFailAlloc_535_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
lean_object* v___x_534_; 
v___x_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
return v___x_534_;
}
}
}
else
{
lean_object* v_a_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; uint8_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v_a_537_ = lean_ctor_get(v_x_526_, 0);
lean_inc(v_a_537_);
lean_dec_ref_known(v_x_526_, 1);
v___x_538_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_539_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_539_, 0, v_k_524_);
v___x_540_ = lean_unsigned_to_nat(1u);
v___x_541_ = lean_mk_empty_array_with_capacity(v___x_540_);
v___x_542_ = lean_array_push(v___x_541_, v___x_539_);
v___x_543_ = lean_unsigned_to_nat(0u);
v___x_544_ = 0;
v___x_545_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_537_, v___x_538_, v___x_542_);
v___x_546_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_543_, v___x_544_, v___x_545_, v___f_525_);
return v___x_546_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3___boxed(lean_object* v_k_547_, lean_object* v___f_548_, lean_object* v_x_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lasm_KV_workers___lam__3(v_k_547_, v___f_548_, v_x_549_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4(lean_object* v___f_552_, lean_object* v_name_553_, lean_object* v___f_554_, lean_object* v_k_555_){
_start:
{
lean_object* v___f_557_; lean_object* v___x_558_; uint8_t v___x_559_; lean_object* v_val_561_; lean_object* v_a_565_; lean_object* v___x_567_; 
v___f_557_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__3___boxed), 4, 2);
lean_closure_set(v___f_557_, 0, v_k_555_);
lean_closure_set(v___f_557_, 1, v___f_552_);
v___x_558_ = lean_unsigned_to_nat(0u);
v___x_559_ = 0;
v___x_567_ = l_Lasm_KV_binding(v_name_553_);
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v_a_568_; lean_object* v___x_569_; 
v_a_568_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v___x_567_, 1);
v___x_569_ = lean_apply_2(v___f_554_, v_a_568_, lean_box(0));
if (lean_obj_tag(v___x_569_) == 0)
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
v_a_570_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_569_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_569_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
lean_ctor_set_tag(v___x_572_, 1);
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
v_val_561_ = v___x_575_;
goto v___jp_560_;
}
}
}
else
{
lean_object* v_a_578_; 
v_a_578_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_a_578_);
lean_dec_ref_known(v___x_569_, 1);
v_a_565_ = v_a_578_;
goto v___jp_564_;
}
}
else
{
lean_object* v_a_579_; 
lean_dec_ref(v___f_554_);
v_a_579_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_579_);
lean_dec_ref_known(v___x_567_, 1);
v_a_565_ = v_a_579_;
goto v___jp_564_;
}
v___jp_560_:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v_val_561_);
v___x_563_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_558_, v___x_559_, v___x_562_, v___f_557_);
return v___x_563_;
}
v___jp_564_:
{
lean_object* v___x_566_; 
v___x_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_566_, 0, v_a_565_);
v_val_561_ = v___x_566_;
goto v___jp_560_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4___boxed(lean_object* v___f_580_, lean_object* v_name_581_, lean_object* v___f_582_, lean_object* v_k_583_, lean_object* v___y_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Lasm_KV_workers___lam__4(v___f_580_, v_name_581_, v___f_582_, v_k_583_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5(lean_object* v_k_587_, lean_object* v_v_588_, lean_object* v___f_589_, lean_object* v_x_590_){
_start:
{
if (lean_obj_tag(v_x_590_) == 0)
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_600_; 
lean_dec_ref(v___f_589_);
lean_dec_ref(v_v_588_);
lean_dec_ref(v_k_587_);
v_a_592_ = lean_ctor_get(v_x_590_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v_x_590_);
if (v_isSharedCheck_600_ == 0)
{
v___x_594_ = v_x_590_;
v_isShared_595_ = v_isSharedCheck_600_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v_x_590_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_600_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_592_);
v___x_597_ = v_reuseFailAlloc_599_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
lean_object* v___x_598_; 
v___x_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
return v___x_598_;
}
}
}
else
{
lean_object* v_a_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; uint8_t v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v_a_601_ = lean_ctor_get(v_x_590_, 0);
lean_inc(v_a_601_);
lean_dec_ref_known(v_x_590_, 1);
v___x_602_ = ((lean_object*)(l_Lasm_KV_workers___lam__5___closed__0));
v___x_603_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_603_, 0, v_k_587_);
v___x_604_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_604_, 0, v_v_588_);
v___x_605_ = lean_unsigned_to_nat(2u);
v___x_606_ = lean_mk_empty_array_with_capacity(v___x_605_);
v___x_607_ = lean_array_push(v___x_606_, v___x_603_);
v___x_608_ = lean_array_push(v___x_607_, v___x_604_);
v___x_609_ = lean_unsigned_to_nat(0u);
v___x_610_ = 0;
v___x_611_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_601_, v___x_602_, v___x_608_);
v___x_612_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_609_, v___x_610_, v___x_611_, v___f_589_);
return v___x_612_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5___boxed(lean_object* v_k_613_, lean_object* v_v_614_, lean_object* v___f_615_, lean_object* v_x_616_, lean_object* v___y_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lasm_KV_workers___lam__5(v_k_613_, v_v_614_, v___f_615_, v_x_616_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6(lean_object* v___f_619_, lean_object* v_name_620_, lean_object* v___f_621_, lean_object* v_k_622_, lean_object* v_v_623_){
_start:
{
lean_object* v___f_625_; lean_object* v___x_626_; uint8_t v___x_627_; lean_object* v_val_629_; lean_object* v_a_633_; lean_object* v___x_635_; 
v___f_625_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__5___boxed), 5, 3);
lean_closure_set(v___f_625_, 0, v_k_622_);
lean_closure_set(v___f_625_, 1, v_v_623_);
lean_closure_set(v___f_625_, 2, v___f_619_);
v___x_626_ = lean_unsigned_to_nat(0u);
v___x_627_ = 0;
v___x_635_ = l_Lasm_KV_binding(v_name_620_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_637_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_636_);
lean_dec_ref_known(v___x_635_, 1);
v___x_637_ = lean_apply_2(v___f_621_, v_a_636_, lean_box(0));
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_645_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_645_ == 0)
{
v___x_640_ = v___x_637_;
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_637_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_643_; 
if (v_isShared_641_ == 0)
{
lean_ctor_set_tag(v___x_640_, 1);
v___x_643_ = v___x_640_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_a_638_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
v_val_629_ = v___x_643_;
goto v___jp_628_;
}
}
}
else
{
lean_object* v_a_646_; 
v_a_646_ = lean_ctor_get(v___x_637_, 0);
lean_inc(v_a_646_);
lean_dec_ref_known(v___x_637_, 1);
v_a_633_ = v_a_646_;
goto v___jp_632_;
}
}
else
{
lean_object* v_a_647_; 
lean_dec_ref(v___f_621_);
v_a_647_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_647_);
lean_dec_ref_known(v___x_635_, 1);
v_a_633_ = v_a_647_;
goto v___jp_632_;
}
v___jp_628_:
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v_val_629_);
v___x_631_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_626_, v___x_627_, v___x_630_, v___f_625_);
return v___x_631_;
}
v___jp_632_:
{
lean_object* v___x_634_; 
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v_a_633_);
v_val_629_ = v___x_634_;
goto v___jp_628_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6___boxed(lean_object* v___f_648_, lean_object* v_name_649_, lean_object* v___f_650_, lean_object* v_k_651_, lean_object* v_v_652_, lean_object* v___y_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lasm_KV_workers___lam__6(v___f_648_, v_name_649_, v___f_650_, v_k_651_, v_v_652_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7(lean_object* v_k_656_, lean_object* v___f_657_, lean_object* v_x_658_){
_start:
{
if (lean_obj_tag(v_x_658_) == 0)
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_668_; 
lean_dec_ref(v___f_657_);
lean_dec_ref(v_k_656_);
v_a_660_ = lean_ctor_get(v_x_658_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v_x_658_);
if (v_isSharedCheck_668_ == 0)
{
v___x_662_ = v_x_658_;
v_isShared_663_ = v_isSharedCheck_668_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v_x_658_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_668_;
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
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_a_660_);
v___x_665_ = v_reuseFailAlloc_667_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_666_; 
v___x_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
return v___x_666_;
}
}
}
else
{
lean_object* v_a_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; uint8_t v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v_a_669_ = lean_ctor_get(v_x_658_, 0);
lean_inc(v_a_669_);
lean_dec_ref_known(v_x_658_, 1);
v___x_670_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_671_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_671_, 0, v_k_656_);
v___x_672_ = lean_unsigned_to_nat(1u);
v___x_673_ = lean_mk_empty_array_with_capacity(v___x_672_);
v___x_674_ = lean_array_push(v___x_673_, v___x_671_);
v___x_675_ = lean_unsigned_to_nat(0u);
v___x_676_ = 0;
v___x_677_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_669_, v___x_670_, v___x_674_);
v___x_678_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_675_, v___x_676_, v___x_677_, v___f_657_);
return v___x_678_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7___boxed(lean_object* v_k_679_, lean_object* v___f_680_, lean_object* v_x_681_, lean_object* v___y_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lasm_KV_workers___lam__7(v_k_679_, v___f_680_, v_x_681_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8(lean_object* v___f_684_, lean_object* v_name_685_, lean_object* v_k_686_){
_start:
{
lean_object* v___f_688_; lean_object* v___x_689_; uint8_t v___x_690_; lean_object* v_val_692_; lean_object* v_a_696_; lean_object* v___x_698_; 
v___f_688_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__7___boxed), 4, 2);
lean_closure_set(v___f_688_, 0, v_k_686_);
lean_closure_set(v___f_688_, 1, v___f_684_);
v___x_689_ = lean_unsigned_to_nat(0u);
v___x_690_ = 0;
lean_inc_ref(v_name_685_);
v___x_698_ = l_Lasm_KV_binding(v_name_685_);
if (lean_obj_tag(v___x_698_) == 0)
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_716_; 
v_a_699_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_716_ == 0)
{
v___x_701_ = v___x_698_;
v_isShared_702_ = v_isSharedCheck_716_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_698_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_716_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
if (lean_obj_tag(v_a_699_) == 0)
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_706_; 
v___x_703_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_704_ = lean_string_append(v___x_703_, v_name_685_);
lean_dec_ref(v_name_685_);
if (v_isShared_702_ == 0)
{
lean_ctor_set_tag(v___x_701_, 18);
lean_ctor_set(v___x_701_, 0, v___x_704_);
v___x_706_ = v___x_701_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_704_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
v_a_696_ = v___x_706_;
goto v___jp_695_;
}
}
else
{
lean_object* v_val_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
lean_del_object(v___x_701_);
lean_dec_ref(v_name_685_);
v_val_708_ = lean_ctor_get(v_a_699_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v_a_699_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v_a_699_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_val_708_);
lean_dec(v_a_699_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_val_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
v_val_692_ = v___x_713_;
goto v___jp_691_;
}
}
}
}
}
else
{
lean_object* v_a_717_; 
lean_dec_ref(v_name_685_);
v_a_717_ = lean_ctor_get(v___x_698_, 0);
lean_inc(v_a_717_);
lean_dec_ref_known(v___x_698_, 1);
v_a_696_ = v_a_717_;
goto v___jp_695_;
}
v___jp_691_:
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_693_, 0, v_val_692_);
v___x_694_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_689_, v___x_690_, v___x_693_, v___f_688_);
return v___x_694_;
}
v___jp_695_:
{
lean_object* v___x_697_; 
v___x_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_697_, 0, v_a_696_);
v_val_692_ = v___x_697_;
goto v___jp_691_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8___boxed(lean_object* v___f_718_, lean_object* v_name_719_, lean_object* v_k_720_, lean_object* v___y_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lasm_KV_workers___lam__8(v___f_718_, v_name_719_, v_k_720_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers(lean_object* v_name_726_){
_start:
{
lean_object* v___f_727_; lean_object* v___f_728_; lean_object* v___f_729_; lean_object* v_delete_730_; lean_object* v_put_731_; lean_object* v_get_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___f_727_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_728_ = ((lean_object*)(l_Lasm_KV_workers___closed__1));
lean_inc_ref_n(v_name_726_, 3);
v___f_729_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__1___boxed), 3, 1);
lean_closure_set(v___f_729_, 0, v_name_726_);
lean_inc_ref(v___f_729_);
v_delete_730_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__4___boxed), 5, 3);
lean_closure_set(v_delete_730_, 0, v___f_727_);
lean_closure_set(v_delete_730_, 1, v_name_726_);
lean_closure_set(v_delete_730_, 2, v___f_729_);
v_put_731_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__6___boxed), 6, 3);
lean_closure_set(v_put_731_, 0, v___f_727_);
lean_closure_set(v_put_731_, 1, v_name_726_);
lean_closure_set(v_put_731_, 2, v___f_729_);
v_get_732_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__8___boxed), 4, 2);
lean_closure_set(v_get_732_, 0, v___f_728_);
lean_closure_set(v_get_732_, 1, v_name_726_);
v___x_733_ = ((lean_object*)(l_Lasm_KV_workers___closed__2));
v___x_734_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
lean_ctor_set(v___x_734_, 1, v_get_732_);
lean_ctor_set(v___x_734_, 2, v_put_731_);
lean_ctor_set(v___x_734_, 3, v_delete_730_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3(lean_object* v___f_736_, lean_object* v_x_737_){
_start:
{
if (lean_obj_tag(v_x_737_) == 0)
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_747_; 
lean_dec_ref(v___f_736_);
v_a_739_ = lean_ctor_get(v_x_737_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v_x_737_);
if (v_isSharedCheck_747_ == 0)
{
v___x_741_ = v_x_737_;
v_isShared_742_ = v_isSharedCheck_747_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v_x_737_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_747_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_746_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
lean_object* v___x_745_; 
v___x_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
return v___x_745_;
}
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_768_; 
v_a_748_ = lean_ctor_get(v_x_737_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v_x_737_);
if (v_isSharedCheck_768_ == 0)
{
v___x_750_ = v_x_737_;
v_isShared_751_ = v_isSharedCheck_768_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v_x_737_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_768_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_752_; lean_object* v___x_753_; uint8_t v___x_754_; lean_object* v_val_756_; lean_object* v___x_759_; 
v___x_752_ = ((lean_object*)(l_Lasm_KV_deno___lam__3___closed__0));
v___x_753_ = lean_unsigned_to_nat(0u);
v___x_754_ = 0;
v___x_759_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_a_748_, v___x_752_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_762_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_760_);
lean_dec_ref_known(v___x_759_, 1);
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 0, v_a_760_);
v___x_762_ = v___x_750_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_760_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
v_val_756_ = v___x_762_;
goto v___jp_755_;
}
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; 
v_a_764_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_764_);
lean_dec_ref_known(v___x_759_, 1);
if (v_isShared_751_ == 0)
{
lean_ctor_set_tag(v___x_750_, 0);
lean_ctor_set(v___x_750_, 0, v_a_764_);
v___x_766_ = v___x_750_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_764_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
v_val_756_ = v___x_766_;
goto v___jp_755_;
}
}
v___jp_755_:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_757_, 0, v_val_756_);
v___x_758_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_753_, v___x_754_, v___x_757_, v___f_736_);
return v___x_758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3___boxed(lean_object* v___f_769_, lean_object* v_x_770_, lean_object* v___y_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lasm_KV_deno___lam__3(v___f_769_, v_x_770_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0(lean_object* v_name_773_, lean_object* v_a_774_, lean_object* v___x_775_, lean_object* v___f_776_, lean_object* v_k_777_){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_779_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_780_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_780_, 0, v_name_773_);
v___x_781_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_781_, 0, v_k_777_);
v___x_782_ = lean_unsigned_to_nat(2u);
v___x_783_ = lean_mk_empty_array_with_capacity(v___x_782_);
v___x_784_ = lean_array_push(v___x_783_, v___x_780_);
v___x_785_ = lean_array_push(v___x_784_, v___x_781_);
v___x_786_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
v___x_787_ = lean_unsigned_to_nat(1u);
v___x_788_ = lean_mk_empty_array_with_capacity(v___x_787_);
v___x_789_ = lean_array_push(v___x_788_, v___x_786_);
v___x_790_ = 0;
v___x_791_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_774_, v___x_779_, v___x_789_);
v___x_792_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_775_, v___x_790_, v___x_791_, v___f_776_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0___boxed(lean_object* v_name_793_, lean_object* v_a_794_, lean_object* v___x_795_, lean_object* v___f_796_, lean_object* v_k_797_, lean_object* v___y_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_Lasm_KV_deno___lam__0(v_name_793_, v_a_794_, v___x_795_, v___f_796_, v_k_797_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1(lean_object* v_name_801_, lean_object* v_a_802_, lean_object* v___x_803_, lean_object* v___f_804_, lean_object* v_k_805_, lean_object* v_v_806_){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; uint8_t v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_808_ = ((lean_object*)(l_Lasm_KV_deno___lam__1___closed__0));
v___x_809_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_809_, 0, v_name_801_);
v___x_810_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_810_, 0, v_k_805_);
v___x_811_ = lean_unsigned_to_nat(2u);
v___x_812_ = lean_mk_empty_array_with_capacity(v___x_811_);
lean_inc_ref(v___x_812_);
v___x_813_ = lean_array_push(v___x_812_, v___x_809_);
v___x_814_ = lean_array_push(v___x_813_, v___x_810_);
v___x_815_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
v___x_816_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_816_, 0, v_v_806_);
v___x_817_ = lean_array_push(v___x_812_, v___x_815_);
v___x_818_ = lean_array_push(v___x_817_, v___x_816_);
v___x_819_ = 0;
v___x_820_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_802_, v___x_808_, v___x_818_);
v___x_821_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_803_, v___x_819_, v___x_820_, v___f_804_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1___boxed(lean_object* v_name_822_, lean_object* v_a_823_, lean_object* v___x_824_, lean_object* v___f_825_, lean_object* v_k_826_, lean_object* v_v_827_, lean_object* v___y_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Lasm_KV_deno___lam__1(v_name_822_, v_a_823_, v___x_824_, v___f_825_, v_k_826_, v_v_827_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2(lean_object* v_name_830_, lean_object* v_a_831_, lean_object* v___x_832_, lean_object* v___f_833_, lean_object* v_k_834_){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; uint8_t v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_836_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_837_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_837_, 0, v_name_830_);
v___x_838_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_838_, 0, v_k_834_);
v___x_839_ = lean_unsigned_to_nat(2u);
v___x_840_ = lean_mk_empty_array_with_capacity(v___x_839_);
v___x_841_ = lean_array_push(v___x_840_, v___x_837_);
v___x_842_ = lean_array_push(v___x_841_, v___x_838_);
v___x_843_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
v___x_844_ = lean_unsigned_to_nat(1u);
v___x_845_ = lean_mk_empty_array_with_capacity(v___x_844_);
v___x_846_ = lean_array_push(v___x_845_, v___x_843_);
v___x_847_ = 0;
v___x_848_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_831_, v___x_836_, v___x_846_);
v___x_849_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_832_, v___x_847_, v___x_848_, v___f_833_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2___boxed(lean_object* v_name_850_, lean_object* v_a_851_, lean_object* v___x_852_, lean_object* v___f_853_, lean_object* v_k_854_, lean_object* v___y_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l_Lasm_KV_deno___lam__2(v_name_850_, v_a_851_, v___x_852_, v___f_853_, v_k_854_);
return v_res_856_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0(void){
_start:
{
uint64_t v___x_857_; uint8_t v___x_858_; uint64_t v___x_859_; 
v___x_857_ = 8ULL;
v___x_858_ = 1;
v___x_859_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_858_, v___x_857_);
return v___x_859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(lean_object* v_o_861_, lean_object* v_name_862_, lean_object* v_args_863_){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; uint64_t v___x_868_; lean_object* v___x_869_; 
v___x_865_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1));
v___x_866_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_866_, 0, v_o_861_);
lean_ctor_set(v___x_866_, 1, v___x_865_);
lean_inc_ref(v_name_862_);
v___x_867_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_867_, 0, v_name_862_);
v___x_868_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0);
v___x_869_ = l_Lasm_JS_Value_invokeRaw(v___x_866_, v___x_867_, v_args_863_, v___x_868_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_a_870_);
lean_dec_ref_known(v___x_869_, 1);
v___x_871_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1));
v___x_872_ = lean_string_append(v___x_871_, v_name_862_);
lean_dec_ref(v_name_862_);
v___x_873_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_872_, v_a_870_);
lean_dec(v_a_870_);
lean_dec_ref(v___x_872_);
return v___x_873_;
}
else
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_881_; 
lean_dec_ref(v_name_862_);
v_a_874_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_881_ == 0)
{
v___x_876_ = v___x_869_;
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_869_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_879_; 
if (v_isShared_877_ == 0)
{
v___x_879_ = v___x_876_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_a_874_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___boxed(lean_object* v_o_882_, lean_object* v_name_883_, lean_object* v_args_884_, lean_object* v___y_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_o_882_, v_name_883_, v_args_884_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno(lean_object* v_name_894_){
_start:
{
lean_object* v___f_896_; lean_object* v___f_897_; lean_object* v___x_898_; 
v___f_896_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_897_ = ((lean_object*)(l_Lasm_KV_deno___closed__0));
v___x_898_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref_known(v___x_898_, 1);
v___x_900_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_901_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_899_, v___x_900_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_901_, 1);
v___x_903_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_904_ = lean_unsigned_to_nat(0u);
v___x_905_ = ((lean_object*)(l_Lasm_KV_deno___closed__3));
v___x_906_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_a_902_, v___x_903_, v___x_905_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_919_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_919_ == 0)
{
v___x_909_ = v___x_906_;
v_isShared_910_ = v_isSharedCheck_919_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_906_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_919_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___f_911_; lean_object* v___f_912_; lean_object* v___f_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_917_; 
lean_inc_n(v_a_907_, 2);
lean_inc_ref_n(v_name_894_, 2);
v___f_911_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__0___boxed), 6, 4);
lean_closure_set(v___f_911_, 0, v_name_894_);
lean_closure_set(v___f_911_, 1, v_a_907_);
lean_closure_set(v___f_911_, 2, v___x_904_);
lean_closure_set(v___f_911_, 3, v___f_897_);
v___f_912_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__1___boxed), 7, 4);
lean_closure_set(v___f_912_, 0, v_name_894_);
lean_closure_set(v___f_912_, 1, v_a_907_);
lean_closure_set(v___f_912_, 2, v___x_904_);
lean_closure_set(v___f_912_, 3, v___f_896_);
v___f_913_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__2___boxed), 6, 4);
lean_closure_set(v___f_913_, 0, v_name_894_);
lean_closure_set(v___f_913_, 1, v_a_907_);
lean_closure_set(v___f_913_, 2, v___x_904_);
lean_closure_set(v___f_913_, 3, v___f_896_);
v___x_914_ = ((lean_object*)(l_Lasm_KV_deno___closed__4));
v___x_915_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
lean_ctor_set(v___x_915_, 1, v___f_911_);
lean_ctor_set(v___x_915_, 2, v___f_912_);
lean_ctor_set(v___x_915_, 3, v___f_913_);
if (v_isShared_910_ == 0)
{
lean_ctor_set(v___x_909_, 0, v___x_915_);
v___x_917_ = v___x_909_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v___x_915_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
else
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
lean_dec_ref(v_name_894_);
v_a_920_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_906_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_906_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
else
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
lean_dec_ref(v_name_894_);
v_a_928_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_901_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_901_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_928_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
lean_dec_ref(v_name_894_);
v_a_936_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_898_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_898_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___boxed(lean_object* v_name_944_, lean_object* v_a_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_Lasm_KV_deno(v_name_944_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0(lean_object* v_name_947_, lean_object* v_k_948_){
_start:
{
lean_object* v_val_951_; lean_object* v___x_953_; 
v___x_953_ = l_Lasm_Fastly_kvGetText(v_name_947_, v_k_948_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_953_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_953_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set_tag(v___x_956_, 1);
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
v_val_951_ = v___x_959_;
goto v___jp_950_;
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
v_a_962_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_953_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_953_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
lean_ctor_set_tag(v___x_964_, 0);
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
v_val_951_ = v___x_967_;
goto v___jp_950_;
}
}
}
v___jp_950_:
{
lean_object* v___x_952_; 
v___x_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_952_, 0, v_val_951_);
return v___x_952_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0___boxed(lean_object* v_name_970_, lean_object* v_k_971_, lean_object* v___y_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_Lasm_KV_fastly___lam__0(v_name_970_, v_k_971_);
lean_dec_ref(v_k_971_);
lean_dec_ref(v_name_970_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1(lean_object* v_name_974_, lean_object* v_k_975_, lean_object* v_v_976_){
_start:
{
lean_object* v_val_979_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = lean_string_to_utf8(v_v_976_);
v___x_982_ = lasm_fastly_kv_put(v_name_974_, v_k_975_, v___x_981_);
lean_dec_ref(v___x_981_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_982_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_982_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
lean_ctor_set_tag(v___x_985_, 1);
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
v_val_979_ = v___x_988_;
goto v___jp_978_;
}
}
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
v_a_991_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_982_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_982_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
lean_ctor_set_tag(v___x_993_, 0);
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
v_val_979_ = v___x_996_;
goto v___jp_978_;
}
}
}
v___jp_978_:
{
lean_object* v___x_980_; 
v___x_980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_980_, 0, v_val_979_);
return v___x_980_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1___boxed(lean_object* v_name_999_, lean_object* v_k_1000_, lean_object* v_v_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = l_Lasm_KV_fastly___lam__1(v_name_999_, v_k_1000_, v_v_1001_);
lean_dec_ref(v_v_1001_);
lean_dec_ref(v_k_1000_);
lean_dec_ref(v_name_999_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2(lean_object* v_name_1004_, lean_object* v_k_1005_){
_start:
{
lean_object* v_val_1008_; lean_object* v___x_1010_; 
v___x_1010_ = lasm_fastly_kv_delete(v_name_1004_, v_k_1005_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v___x_1010_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_1010_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
lean_ctor_set_tag(v___x_1013_, 1);
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
v_val_1008_ = v___x_1016_;
goto v___jp_1007_;
}
}
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1026_; 
v_a_1019_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1021_ = v___x_1010_;
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_1010_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
lean_ctor_set_tag(v___x_1021_, 0);
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
v_val_1008_ = v___x_1024_;
goto v___jp_1007_;
}
}
}
v___jp_1007_:
{
lean_object* v___x_1009_; 
v___x_1009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1009_, 0, v_val_1008_);
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2___boxed(lean_object* v_name_1027_, lean_object* v_k_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_Lasm_KV_fastly___lam__2(v_name_1027_, v_k_1028_);
lean_dec_ref(v_k_1028_);
lean_dec_ref(v_name_1027_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly(lean_object* v_name_1032_){
_start:
{
lean_object* v___f_1033_; lean_object* v___f_1034_; lean_object* v___f_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
lean_inc_ref_n(v_name_1032_, 2);
v___f_1033_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1033_, 0, v_name_1032_);
v___f_1034_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1034_, 0, v_name_1032_);
v___f_1035_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1035_, 0, v_name_1032_);
v___x_1036_ = ((lean_object*)(l_Lasm_KV_fastly___closed__0));
v___x_1037_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1036_);
lean_ctor_set(v___x_1037_, 1, v___f_1033_);
lean_ctor_set(v___x_1037_, 2, v___f_1034_);
lean_ctor_set(v___x_1037_, 3, v___f_1035_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0(uint8_t v_a_1038_, uint8_t v_a_1039_, lean_object* v_____do__lift_1040_){
_start:
{
if (lean_obj_tag(v_____do__lift_1040_) == 0)
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = lean_box(v_a_1038_);
v___x_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
return v___x_1043_;
}
else
{
lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1051_; 
v_isSharedCheck_1051_ = !lean_is_exclusive(v_____do__lift_1040_);
if (v_isSharedCheck_1051_ == 0)
{
lean_object* v_unused_1052_; 
v_unused_1052_ = lean_ctor_get(v_____do__lift_1040_, 0);
lean_dec(v_unused_1052_);
v___x_1045_ = v_____do__lift_1040_;
v_isShared_1046_ = v_isSharedCheck_1051_;
goto v_resetjp_1044_;
}
else
{
lean_dec(v_____do__lift_1040_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1051_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1047_; lean_object* v___x_1049_; 
v___x_1047_ = lean_box(v_a_1039_);
if (v_isShared_1046_ == 0)
{
lean_ctor_set_tag(v___x_1045_, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1047_);
v___x_1049_ = v___x_1045_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v___x_1047_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
return v___x_1049_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0___boxed(lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_____do__lift_1055_, lean_object* v___y_1056_){
_start:
{
uint8_t v_a_3238__boxed_1057_; uint8_t v_a_3239__boxed_1058_; lean_object* v_res_1059_; 
v_a_3238__boxed_1057_ = lean_unbox(v_a_1053_);
v_a_3239__boxed_1058_ = lean_unbox(v_a_1054_);
v_res_1059_ = l_Lasm_KV_open___lam__0(v_a_3238__boxed_1057_, v_a_3239__boxed_1058_, v_____do__lift_1055_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1(lean_object* v_a_1060_, lean_object* v_k_1061_, lean_object* v___x_1062_, lean_object* v_x_1063_){
_start:
{
if (lean_obj_tag(v_x_1063_) == 0)
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1073_; 
lean_dec_ref(v___x_1062_);
lean_dec_ref(v_k_1061_);
lean_dec_ref(v_a_1060_);
v_a_1065_ = lean_ctor_get(v_x_1063_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_x_1063_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1067_ = v_x_1063_;
v_isShared_1068_ = v_isSharedCheck_1073_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v_x_1063_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1073_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1070_; 
if (v_isShared_1068_ == 0)
{
v___x_1070_ = v___x_1067_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1065_);
v___x_1070_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
lean_object* v___x_1071_; 
v___x_1071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
return v___x_1071_;
}
}
}
else
{
lean_object* v_a_1074_; uint8_t v___x_1075_; 
v_a_1074_ = lean_ctor_get(v_x_1063_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v_x_1063_, 1);
v___x_1075_ = lean_unbox(v_a_1074_);
lean_dec(v_a_1074_);
if (v___x_1075_ == 0)
{
lean_object* v_get_1076_; lean_object* v___x_1077_; 
lean_dec_ref(v___x_1062_);
v_get_1076_ = lean_ctor_get(v_a_1060_, 1);
lean_inc_ref(v_get_1076_);
lean_dec_ref(v_a_1060_);
v___x_1077_ = lean_apply_2(v_get_1076_, v_k_1061_, lean_box(0));
return v___x_1077_;
}
else
{
lean_object* v_get_1078_; lean_object* v___x_1079_; 
lean_dec_ref(v_a_1060_);
v_get_1078_ = lean_ctor_get(v___x_1062_, 1);
lean_inc_ref(v_get_1078_);
lean_dec_ref(v___x_1062_);
v___x_1079_ = lean_apply_2(v_get_1078_, v_k_1061_, lean_box(0));
return v___x_1079_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1___boxed(lean_object* v_a_1080_, lean_object* v_k_1081_, lean_object* v___x_1082_, lean_object* v_x_1083_, lean_object* v___y_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Lasm_KV_open___lam__1(v_a_1080_, v_k_1081_, v___x_1082_, v_x_1083_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2(lean_object* v_a_1086_, lean_object* v___x_1087_, uint8_t v_a_1088_, lean_object* v_name_1089_, uint8_t v_a_1090_, lean_object* v_k_1091_){
_start:
{
lean_object* v___f_1093_; lean_object* v___x_1094_; lean_object* v_val_1096_; uint8_t v_a_1100_; lean_object* v___x_1103_; 
v___f_1093_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1093_, 0, v_a_1086_);
lean_closure_set(v___f_1093_, 1, v_k_1091_);
lean_closure_set(v___f_1093_, 2, v___x_1087_);
v___x_1094_ = lean_unsigned_to_nat(0u);
v___x_1103_ = l_Lasm_KV_binding(v_name_1089_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_a_1104_);
lean_dec_ref_known(v___x_1103_, 1);
if (lean_obj_tag(v_a_1104_) == 0)
{
v_a_1100_ = v_a_1088_;
goto v___jp_1099_;
}
else
{
lean_dec_ref_known(v_a_1104_, 1);
v_a_1100_ = v_a_1090_;
goto v___jp_1099_;
}
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
v_a_1105_ = lean_ctor_get(v___x_1103_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1103_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1103_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
lean_ctor_set_tag(v___x_1107_, 0);
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1105_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
v_val_1096_ = v___x_1110_;
goto v___jp_1095_;
}
}
}
v___jp_1095_:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1097_, 0, v_val_1096_);
v___x_1098_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1094_, v_a_1088_, v___x_1097_, v___f_1093_);
return v___x_1098_;
}
v___jp_1099_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = lean_box(v_a_1100_);
v___x_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
v_val_1096_ = v___x_1102_;
goto v___jp_1095_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2___boxed(lean_object* v_a_1113_, lean_object* v___x_1114_, lean_object* v_a_1115_, lean_object* v_name_1116_, lean_object* v_a_1117_, lean_object* v_k_1118_, lean_object* v___y_1119_){
_start:
{
uint8_t v_a_3313__boxed_1120_; uint8_t v_a_3314__boxed_1121_; lean_object* v_res_1122_; 
v_a_3313__boxed_1120_ = lean_unbox(v_a_1115_);
v_a_3314__boxed_1121_ = lean_unbox(v_a_1117_);
v_res_1122_ = l_Lasm_KV_open___lam__2(v_a_1113_, v___x_1114_, v_a_3313__boxed_1120_, v_name_1116_, v_a_3314__boxed_1121_, v_k_1118_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3(lean_object* v_a_1123_, lean_object* v_k_1124_, lean_object* v_v_1125_, lean_object* v___x_1126_, lean_object* v_x_1127_){
_start:
{
if (lean_obj_tag(v_x_1127_) == 0)
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1137_; 
lean_dec_ref(v___x_1126_);
lean_dec_ref(v_v_1125_);
lean_dec_ref(v_k_1124_);
lean_dec_ref(v_a_1123_);
v_a_1129_ = lean_ctor_get(v_x_1127_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_x_1127_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1131_ = v_x_1127_;
v_isShared_1132_ = v_isSharedCheck_1137_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v_x_1127_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1137_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1129_);
v___x_1134_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
lean_object* v___x_1135_; 
v___x_1135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
return v___x_1135_;
}
}
}
else
{
lean_object* v_a_1138_; uint8_t v___x_1139_; 
v_a_1138_ = lean_ctor_get(v_x_1127_, 0);
lean_inc(v_a_1138_);
lean_dec_ref_known(v_x_1127_, 1);
v___x_1139_ = lean_unbox(v_a_1138_);
lean_dec(v_a_1138_);
if (v___x_1139_ == 0)
{
lean_object* v_put_1140_; lean_object* v___x_1141_; 
lean_dec_ref(v___x_1126_);
v_put_1140_ = lean_ctor_get(v_a_1123_, 2);
lean_inc_ref(v_put_1140_);
lean_dec_ref(v_a_1123_);
v___x_1141_ = lean_apply_3(v_put_1140_, v_k_1124_, v_v_1125_, lean_box(0));
return v___x_1141_;
}
else
{
lean_object* v_put_1142_; lean_object* v___x_1143_; 
lean_dec_ref(v_a_1123_);
v_put_1142_ = lean_ctor_get(v___x_1126_, 2);
lean_inc_ref(v_put_1142_);
lean_dec_ref(v___x_1126_);
v___x_1143_ = lean_apply_3(v_put_1142_, v_k_1124_, v_v_1125_, lean_box(0));
return v___x_1143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3___boxed(lean_object* v_a_1144_, lean_object* v_k_1145_, lean_object* v_v_1146_, lean_object* v___x_1147_, lean_object* v_x_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lasm_KV_open___lam__3(v_a_1144_, v_k_1145_, v_v_1146_, v___x_1147_, v_x_1148_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4(lean_object* v_a_1151_, lean_object* v___x_1152_, uint8_t v_a_1153_, lean_object* v_name_1154_, lean_object* v___f_1155_, lean_object* v_k_1156_, lean_object* v_v_1157_){
_start:
{
lean_object* v___f_1159_; lean_object* v___x_1160_; lean_object* v_val_1162_; lean_object* v_a_1166_; lean_object* v___x_1168_; 
v___f_1159_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__3___boxed), 6, 4);
lean_closure_set(v___f_1159_, 0, v_a_1151_);
lean_closure_set(v___f_1159_, 1, v_k_1156_);
lean_closure_set(v___f_1159_, 2, v_v_1157_);
lean_closure_set(v___f_1159_, 3, v___x_1152_);
v___x_1160_ = lean_unsigned_to_nat(0u);
v___x_1168_ = l_Lasm_KV_binding(v_name_1154_);
if (lean_obj_tag(v___x_1168_) == 0)
{
lean_object* v_a_1169_; lean_object* v___x_1170_; 
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
lean_inc(v_a_1169_);
lean_dec_ref_known(v___x_1168_, 1);
v___x_1170_ = lean_apply_2(v___f_1155_, v_a_1169_, lean_box(0));
if (lean_obj_tag(v___x_1170_) == 0)
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1178_; 
v_a_1171_ = lean_ctor_get(v___x_1170_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1170_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1173_ = v___x_1170_;
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1170_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1176_; 
if (v_isShared_1174_ == 0)
{
lean_ctor_set_tag(v___x_1173_, 1);
v___x_1176_ = v___x_1173_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_a_1171_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
v_val_1162_ = v___x_1176_;
goto v___jp_1161_;
}
}
}
else
{
lean_object* v_a_1179_; 
v_a_1179_ = lean_ctor_get(v___x_1170_, 0);
lean_inc(v_a_1179_);
lean_dec_ref_known(v___x_1170_, 1);
v_a_1166_ = v_a_1179_;
goto v___jp_1165_;
}
}
else
{
lean_object* v_a_1180_; 
lean_dec_ref(v___f_1155_);
v_a_1180_ = lean_ctor_get(v___x_1168_, 0);
lean_inc(v_a_1180_);
lean_dec_ref_known(v___x_1168_, 1);
v_a_1166_ = v_a_1180_;
goto v___jp_1165_;
}
v___jp_1161_:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1163_, 0, v_val_1162_);
v___x_1164_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1160_, v_a_1153_, v___x_1163_, v___f_1159_);
return v___x_1164_;
}
v___jp_1165_:
{
lean_object* v___x_1167_; 
v___x_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1167_, 0, v_a_1166_);
v_val_1162_ = v___x_1167_;
goto v___jp_1161_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4___boxed(lean_object* v_a_1181_, lean_object* v___x_1182_, lean_object* v_a_1183_, lean_object* v_name_1184_, lean_object* v___f_1185_, lean_object* v_k_1186_, lean_object* v_v_1187_, lean_object* v___y_1188_){
_start:
{
uint8_t v_a_3407__boxed_1189_; lean_object* v_res_1190_; 
v_a_3407__boxed_1189_ = lean_unbox(v_a_1183_);
v_res_1190_ = l_Lasm_KV_open___lam__4(v_a_1181_, v___x_1182_, v_a_3407__boxed_1189_, v_name_1184_, v___f_1185_, v_k_1186_, v_v_1187_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5(lean_object* v_a_1191_, lean_object* v_k_1192_, lean_object* v___x_1193_, lean_object* v_x_1194_){
_start:
{
if (lean_obj_tag(v_x_1194_) == 0)
{
lean_object* v_a_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1204_; 
lean_dec_ref(v___x_1193_);
lean_dec_ref(v_k_1192_);
lean_dec_ref(v_a_1191_);
v_a_1196_ = lean_ctor_get(v_x_1194_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v_x_1194_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1198_ = v_x_1194_;
v_isShared_1199_ = v_isSharedCheck_1204_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_a_1196_);
lean_dec(v_x_1194_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1204_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1201_; 
if (v_isShared_1199_ == 0)
{
v___x_1201_ = v___x_1198_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_a_1196_);
v___x_1201_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
lean_object* v___x_1202_; 
v___x_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
return v___x_1202_;
}
}
}
else
{
lean_object* v_a_1205_; uint8_t v___x_1206_; 
v_a_1205_ = lean_ctor_get(v_x_1194_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v_x_1194_, 1);
v___x_1206_ = lean_unbox(v_a_1205_);
lean_dec(v_a_1205_);
if (v___x_1206_ == 0)
{
lean_object* v_delete_1207_; lean_object* v___x_1208_; 
lean_dec_ref(v___x_1193_);
v_delete_1207_ = lean_ctor_get(v_a_1191_, 3);
lean_inc_ref(v_delete_1207_);
lean_dec_ref(v_a_1191_);
v___x_1208_ = lean_apply_2(v_delete_1207_, v_k_1192_, lean_box(0));
return v___x_1208_;
}
else
{
lean_object* v_delete_1209_; lean_object* v___x_1210_; 
lean_dec_ref(v_a_1191_);
v_delete_1209_ = lean_ctor_get(v___x_1193_, 3);
lean_inc_ref(v_delete_1209_);
lean_dec_ref(v___x_1193_);
v___x_1210_ = lean_apply_2(v_delete_1209_, v_k_1192_, lean_box(0));
return v___x_1210_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5___boxed(lean_object* v_a_1211_, lean_object* v_k_1212_, lean_object* v___x_1213_, lean_object* v_x_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Lasm_KV_open___lam__5(v_a_1211_, v_k_1212_, v___x_1213_, v_x_1214_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6(lean_object* v_a_1217_, lean_object* v___x_1218_, uint8_t v_a_1219_, lean_object* v_name_1220_, lean_object* v___f_1221_, lean_object* v_k_1222_){
_start:
{
lean_object* v___f_1224_; lean_object* v___x_1225_; lean_object* v_val_1227_; lean_object* v_a_1231_; lean_object* v___x_1233_; 
v___f_1224_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__5___boxed), 5, 3);
lean_closure_set(v___f_1224_, 0, v_a_1217_);
lean_closure_set(v___f_1224_, 1, v_k_1222_);
lean_closure_set(v___f_1224_, 2, v___x_1218_);
v___x_1225_ = lean_unsigned_to_nat(0u);
v___x_1233_ = l_Lasm_KV_binding(v_name_1220_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1235_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_a_1234_);
lean_dec_ref_known(v___x_1233_, 1);
v___x_1235_ = lean_apply_2(v___f_1221_, v_a_1234_, lean_box(0));
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1243_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1238_ = v___x_1235_;
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v___x_1235_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1241_; 
if (v_isShared_1239_ == 0)
{
lean_ctor_set_tag(v___x_1238_, 1);
v___x_1241_ = v___x_1238_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_a_1236_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
v_val_1227_ = v___x_1241_;
goto v___jp_1226_;
}
}
}
else
{
lean_object* v_a_1244_; 
v_a_1244_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1244_);
lean_dec_ref_known(v___x_1235_, 1);
v_a_1231_ = v_a_1244_;
goto v___jp_1230_;
}
}
else
{
lean_object* v_a_1245_; 
lean_dec_ref(v___f_1221_);
v_a_1245_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_a_1245_);
lean_dec_ref_known(v___x_1233_, 1);
v_a_1231_ = v_a_1245_;
goto v___jp_1230_;
}
v___jp_1226_:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1228_, 0, v_val_1227_);
v___x_1229_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1225_, v_a_1219_, v___x_1228_, v___f_1224_);
return v___x_1229_;
}
v___jp_1230_:
{
lean_object* v___x_1232_; 
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v_a_1231_);
v_val_1227_ = v___x_1232_;
goto v___jp_1226_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6___boxed(lean_object* v_a_1246_, lean_object* v___x_1247_, lean_object* v_a_1248_, lean_object* v_name_1249_, lean_object* v___f_1250_, lean_object* v_k_1251_, lean_object* v___y_1252_){
_start:
{
uint8_t v_a_3504__boxed_1253_; lean_object* v_res_1254_; 
v_a_3504__boxed_1253_ = lean_unbox(v_a_1248_);
v_res_1254_ = l_Lasm_KV_open___lam__6(v_a_1246_, v___x_1247_, v_a_3504__boxed_1253_, v_name_1249_, v___f_1250_, v_k_1251_);
return v_res_1254_;
}
}
static uint32_t _init_l_Lasm_KV_open___closed__1(void){
_start:
{
lean_object* v___x_1256_; uint32_t v___x_1257_; 
v___x_1256_ = lean_box(0);
v___x_1257_ = lasm_fetch_platform(v___x_1256_);
return v___x_1257_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__2(void){
_start:
{
uint32_t v___x_1258_; uint32_t v___x_1259_; uint8_t v___x_1260_; 
v___x_1258_ = 2;
v___x_1259_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1260_ = lean_uint32_dec_eq(v___x_1259_, v___x_1258_);
return v___x_1260_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__3(void){
_start:
{
uint32_t v___x_1261_; uint32_t v___x_1262_; uint8_t v___x_1263_; 
v___x_1261_ = 0;
v___x_1262_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1263_ = lean_uint32_dec_eq(v___x_1262_, v___x_1261_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open(lean_object* v_name_1265_){
_start:
{
uint8_t v_a_1268_; uint8_t v___x_1301_; 
v___x_1301_ = lean_uint8_once(&l_Lasm_KV_open___closed__2, &l_Lasm_KV_open___closed__2_once, _init_l_Lasm_KV_open___closed__2);
if (v___x_1301_ == 0)
{
uint8_t v___x_1302_; 
v___x_1302_ = lean_uint8_once(&l_Lasm_KV_open___closed__3, &l_Lasm_KV_open___closed__3_once, _init_l_Lasm_KV_open___closed__3);
if (v___x_1302_ == 0)
{
lean_object* v___x_1303_; 
lean_dec_ref(v_name_1265_);
v___x_1303_ = l_Lasm_KV_memory();
return v___x_1303_;
}
else
{
lean_object* v___x_1304_; 
v___x_1304_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_object* v_a_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v_a_1305_ = lean_ctor_get(v___x_1304_, 0);
lean_inc(v_a_1305_);
lean_dec_ref_known(v___x_1304_, 1);
v___x_1306_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_1307_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1305_, v___x_1306_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v_a_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v_a_1308_ = lean_ctor_get(v___x_1307_, 0);
lean_inc(v_a_1308_);
lean_dec_ref_known(v___x_1307_, 1);
v___x_1309_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_1310_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_a_1308_, v___x_1309_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1310_, 1);
if (lean_obj_tag(v_a_1311_) == 9)
{
lean_object* v___x_1312_; 
lean_dec_ref_known(v_a_1311_, 2);
v___x_1312_ = l_Lasm_KV_deno(v_name_1265_);
if (lean_obj_tag(v___x_1312_) == 0)
{
return v___x_1312_;
}
else
{
lean_object* v___x_1313_; 
lean_dec_ref_known(v___x_1312_, 1);
v___x_1313_ = l_Lasm_KV_memory();
return v___x_1313_;
}
}
else
{
lean_dec(v_a_1311_);
v_a_1268_ = v___x_1301_;
goto v___jp_1267_;
}
}
else
{
lean_dec_ref_known(v___x_1310_, 1);
v_a_1268_ = v___x_1301_;
goto v___jp_1267_;
}
}
else
{
lean_dec_ref_known(v___x_1307_, 1);
v_a_1268_ = v___x_1301_;
goto v___jp_1267_;
}
}
else
{
lean_object* v_a_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1321_; 
lean_dec_ref(v_name_1265_);
v_a_1314_ = lean_ctor_get(v___x_1304_, 0);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1316_ = v___x_1304_;
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_a_1314_);
lean_dec(v___x_1304_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1319_; 
if (v_isShared_1317_ == 0)
{
v___x_1319_ = v___x_1316_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1314_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
}
else
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = ((lean_object*)(l_Lasm_KV_open___closed__4));
v___x_1323_ = lasm_fastly_kv_get(v_name_1265_, v___x_1322_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1331_; 
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1331_ == 0)
{
lean_object* v_unused_1332_; 
v_unused_1332_ = lean_ctor_get(v___x_1323_, 0);
lean_dec(v_unused_1332_);
v___x_1325_ = v___x_1323_;
v_isShared_1326_ = v_isSharedCheck_1331_;
goto v_resetjp_1324_;
}
else
{
lean_dec(v___x_1323_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1331_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1329_; 
v___x_1327_ = l_Lasm_KV_fastly(v_name_1265_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 0, v___x_1327_);
v___x_1329_ = v___x_1325_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v___x_1327_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
else
{
lean_object* v___x_1333_; 
lean_dec_ref_known(v___x_1323_, 1);
lean_dec_ref(v_name_1265_);
v___x_1333_ = l_Lasm_KV_memory();
return v___x_1333_;
}
}
v___jp_1267_:
{
lean_object* v___x_1269_; 
v___x_1269_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; uint8_t v___x_1271_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
lean_inc(v_a_1270_);
lean_dec_ref_known(v___x_1269_, 1);
v___x_1271_ = lean_unbox(v_a_1270_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; 
lean_dec(v_a_1270_);
lean_dec_ref(v_name_1265_);
v___x_1272_ = l_Lasm_KV_memory();
return v___x_1272_;
}
else
{
lean_object* v___x_1273_; lean_object* v___f_1274_; lean_object* v___x_1275_; lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1292_; 
v___x_1273_ = lean_box(v_a_1268_);
lean_inc(v_a_1270_);
v___f_1274_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1274_, 0, v___x_1273_);
lean_closure_set(v___f_1274_, 1, v_a_1270_);
v___x_1275_ = l_Lasm_KV_memory();
v_a_1276_ = lean_ctor_get(v___x_1275_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1278_ = v___x_1275_;
v_isShared_1279_ = v_isSharedCheck_1292_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1275_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1292_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___f_1282_; lean_object* v___x_1283_; lean_object* v___f_1284_; lean_object* v___x_1285_; lean_object* v___f_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1290_; 
lean_inc_ref_n(v_name_1265_, 3);
v___x_1280_ = l_Lasm_KV_workers(v_name_1265_);
v___x_1281_ = lean_box(v_a_1268_);
lean_inc_ref_n(v___x_1280_, 2);
lean_inc_n(v_a_1276_, 2);
v___f_1282_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__2___boxed), 7, 5);
lean_closure_set(v___f_1282_, 0, v_a_1276_);
lean_closure_set(v___f_1282_, 1, v___x_1280_);
lean_closure_set(v___f_1282_, 2, v___x_1281_);
lean_closure_set(v___f_1282_, 3, v_name_1265_);
lean_closure_set(v___f_1282_, 4, v_a_1270_);
v___x_1283_ = lean_box(v_a_1268_);
lean_inc_ref(v___f_1274_);
v___f_1284_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__4___boxed), 8, 5);
lean_closure_set(v___f_1284_, 0, v_a_1276_);
lean_closure_set(v___f_1284_, 1, v___x_1280_);
lean_closure_set(v___f_1284_, 2, v___x_1283_);
lean_closure_set(v___f_1284_, 3, v_name_1265_);
lean_closure_set(v___f_1284_, 4, v___f_1274_);
v___x_1285_ = lean_box(v_a_1268_);
v___f_1286_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__6___boxed), 7, 5);
lean_closure_set(v___f_1286_, 0, v_a_1276_);
lean_closure_set(v___f_1286_, 1, v___x_1280_);
lean_closure_set(v___f_1286_, 2, v___x_1285_);
lean_closure_set(v___f_1286_, 3, v_name_1265_);
lean_closure_set(v___f_1286_, 4, v___f_1274_);
v___x_1287_ = ((lean_object*)(l_Lasm_KV_open___closed__0));
v___x_1288_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
lean_ctor_set(v___x_1288_, 1, v___f_1282_);
lean_ctor_set(v___x_1288_, 2, v___f_1284_);
lean_ctor_set(v___x_1288_, 3, v___f_1286_);
if (v_isShared_1279_ == 0)
{
lean_ctor_set(v___x_1278_, 0, v___x_1288_);
v___x_1290_ = v___x_1278_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v___x_1288_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
}
}
else
{
lean_object* v_a_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1300_; 
lean_dec_ref(v_name_1265_);
v_a_1293_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1295_ = v___x_1269_;
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_a_1293_);
lean_dec(v___x_1269_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1298_; 
if (v_isShared_1296_ == 0)
{
v___x_1298_ = v___x_1295_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_a_1293_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___boxed(lean_object* v_name_1334_, lean_object* v_a_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l_Lasm_KV_open(v_name_1334_);
return v_res_1336_;
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
