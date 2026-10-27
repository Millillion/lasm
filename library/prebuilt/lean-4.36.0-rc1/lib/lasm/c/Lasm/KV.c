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
lean_object* v_a_443_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_a_443_);
lean_dec_ref_known(v___x_442_, 1);
v_found_435_ = v_a_443_;
goto v___jp_434_;
}
else
{
lean_dec_ref_known(v___x_442_, 1);
goto v___jp_431_;
}
}
case 8:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lasm_JS_Data_field(v___x_440_, v_name_429_);
lean_dec_ref(v_name_429_);
lean_dec_ref_known(v___x_440_, 1);
v_found_435_ = v___x_444_;
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
LEAN_EXPORT lean_object* l_Lasm_KV_binding___boxed(lean_object* v_name_445_, lean_object* v_a_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lasm_KV_binding(v_name_445_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0(lean_object* v_x_448_){
_start:
{
if (lean_obj_tag(v_x_448_) == 0)
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_458_; 
v_a_450_ = lean_ctor_get(v_x_448_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v_x_448_);
if (v_isSharedCheck_458_ == 0)
{
v___x_452_ = v_x_448_;
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v_x_448_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_457_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
lean_object* v___x_456_; 
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
return v___x_456_;
}
}
}
else
{
lean_object* v___x_459_; 
lean_dec_ref_known(v_x_448_, 1);
v___x_459_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__1___closed__1));
return v___x_459_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0___boxed(lean_object* v_x_460_, lean_object* v___y_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Lasm_KV_workers___lam__0(v_x_460_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2(lean_object* v_x_463_){
_start:
{
if (lean_obj_tag(v_x_463_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_473_; 
v_a_465_ = lean_ctor_get(v_x_463_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v_x_463_);
if (v_isSharedCheck_473_ == 0)
{
v___x_467_ = v_x_463_;
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v_x_463_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_473_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_a_465_);
v___x_470_ = v_reuseFailAlloc_472_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
lean_object* v___x_471_; 
v___x_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
return v___x_471_;
}
}
}
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_491_; 
v_a_474_ = lean_ctor_get(v_x_463_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v_x_463_);
if (v_isSharedCheck_491_ == 0)
{
v___x_476_ = v_x_463_;
v_isShared_477_ = v_isSharedCheck_491_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v_x_463_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_491_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
if (lean_obj_tag(v_a_474_) == 4)
{
lean_object* v_s_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_489_; 
v_s_478_ = lean_ctor_get(v_a_474_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v_a_474_);
if (v_isSharedCheck_489_ == 0)
{
v___x_480_ = v_a_474_;
v_isShared_481_ = v_isSharedCheck_489_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_s_478_);
lean_dec(v_a_474_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_489_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_483_; 
if (v_isShared_481_ == 0)
{
lean_ctor_set_tag(v___x_480_, 1);
v___x_483_ = v___x_480_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_s_478_);
v___x_483_ = v_reuseFailAlloc_488_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
lean_object* v___x_485_; 
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v___x_483_);
v___x_485_ = v___x_476_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_483_);
v___x_485_ = v_reuseFailAlloc_487_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
lean_object* v___x_486_; 
v___x_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
return v___x_486_;
}
}
}
}
else
{
lean_object* v___x_490_; 
lean_del_object(v___x_476_);
lean_dec(v_a_474_);
v___x_490_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__0___closed__1));
return v___x_490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2___boxed(lean_object* v_x_492_, lean_object* v___y_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Lasm_KV_workers___lam__2(v_x_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1(lean_object* v_name_496_, lean_object* v_____do__lift_497_){
_start:
{
if (lean_obj_tag(v_____do__lift_497_) == 0)
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_499_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_500_ = lean_string_append(v___x_499_, v_name_496_);
v___x_501_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
v___x_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_502_, 0, v___x_501_);
return v___x_502_;
}
else
{
lean_object* v_val_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
v_val_503_ = lean_ctor_get(v_____do__lift_497_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v_____do__lift_497_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v_____do__lift_497_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_val_503_);
lean_dec(v_____do__lift_497_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
lean_ctor_set_tag(v___x_505_, 0);
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_val_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1___boxed(lean_object* v_name_511_, lean_object* v_____do__lift_512_, lean_object* v___y_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_Lasm_KV_workers___lam__1(v_name_511_, v_____do__lift_512_);
lean_dec_ref(v_name_511_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3(lean_object* v_k_516_, lean_object* v___f_517_, lean_object* v_x_518_){
_start:
{
if (lean_obj_tag(v_x_518_) == 0)
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_528_; 
lean_dec_ref(v___f_517_);
lean_dec_ref(v_k_516_);
v_a_520_ = lean_ctor_get(v_x_518_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v_x_518_);
if (v_isSharedCheck_528_ == 0)
{
v___x_522_ = v_x_518_;
v_isShared_523_ = v_isSharedCheck_528_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v_x_518_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_528_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_527_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
lean_object* v___x_526_; 
v___x_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
return v___x_526_;
}
}
}
else
{
lean_object* v_a_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v_a_529_ = lean_ctor_get(v_x_518_, 0);
lean_inc(v_a_529_);
lean_dec_ref_known(v_x_518_, 1);
v___x_530_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_531_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_531_, 0, v_k_516_);
v___x_532_ = lean_unsigned_to_nat(1u);
v___x_533_ = lean_mk_empty_array_with_capacity(v___x_532_);
v___x_534_ = lean_array_push(v___x_533_, v___x_531_);
v___x_535_ = lean_unsigned_to_nat(0u);
v___x_536_ = 0;
v___x_537_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_529_, v___x_530_, v___x_534_);
v___x_538_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_535_, v___x_536_, v___x_537_, v___f_517_);
return v___x_538_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3___boxed(lean_object* v_k_539_, lean_object* v___f_540_, lean_object* v_x_541_, lean_object* v___y_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Lasm_KV_workers___lam__3(v_k_539_, v___f_540_, v_x_541_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4(lean_object* v___f_544_, lean_object* v_name_545_, lean_object* v___f_546_, lean_object* v_k_547_){
_start:
{
lean_object* v___f_549_; lean_object* v___x_550_; uint8_t v___x_551_; lean_object* v_val_553_; lean_object* v_a_557_; lean_object* v___x_559_; lean_object* v_a_560_; lean_object* v___x_561_; 
v___f_549_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__3___boxed), 4, 2);
lean_closure_set(v___f_549_, 0, v_k_547_);
lean_closure_set(v___f_549_, 1, v___f_544_);
v___x_550_ = lean_unsigned_to_nat(0u);
v___x_551_ = 0;
v___x_559_ = l_Lasm_KV_binding(v_name_545_);
v_a_560_ = lean_ctor_get(v___x_559_, 0);
lean_inc(v_a_560_);
lean_dec_ref(v___x_559_);
v___x_561_ = lean_apply_2(v___f_546_, v_a_560_, lean_box(0));
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
v_a_562_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_561_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_561_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
lean_ctor_set_tag(v___x_564_, 1);
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
v_val_553_ = v___x_567_;
goto v___jp_552_;
}
}
}
else
{
lean_object* v_a_570_; 
v_a_570_ = lean_ctor_get(v___x_561_, 0);
lean_inc(v_a_570_);
lean_dec_ref_known(v___x_561_, 1);
v_a_557_ = v_a_570_;
goto v___jp_556_;
}
v___jp_552_:
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_554_, 0, v_val_553_);
v___x_555_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_550_, v___x_551_, v___x_554_, v___f_549_);
return v___x_555_;
}
v___jp_556_:
{
lean_object* v___x_558_; 
v___x_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_558_, 0, v_a_557_);
v_val_553_ = v___x_558_;
goto v___jp_552_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4___boxed(lean_object* v___f_571_, lean_object* v_name_572_, lean_object* v___f_573_, lean_object* v_k_574_, lean_object* v___y_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lasm_KV_workers___lam__4(v___f_571_, v_name_572_, v___f_573_, v_k_574_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5(lean_object* v_k_578_, lean_object* v_v_579_, lean_object* v___f_580_, lean_object* v_x_581_){
_start:
{
if (lean_obj_tag(v_x_581_) == 0)
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_591_; 
lean_dec_ref(v___f_580_);
lean_dec_ref(v_v_579_);
lean_dec_ref(v_k_578_);
v_a_583_ = lean_ctor_get(v_x_581_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v_x_581_);
if (v_isSharedCheck_591_ == 0)
{
v___x_585_ = v_x_581_;
v_isShared_586_ = v_isSharedCheck_591_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v_x_581_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_591_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_588_; 
if (v_isShared_586_ == 0)
{
v___x_588_ = v___x_585_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_583_);
v___x_588_ = v_reuseFailAlloc_590_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
lean_object* v___x_589_; 
v___x_589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
return v___x_589_;
}
}
}
else
{
lean_object* v_a_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; uint8_t v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v_a_592_ = lean_ctor_get(v_x_581_, 0);
lean_inc(v_a_592_);
lean_dec_ref_known(v_x_581_, 1);
v___x_593_ = ((lean_object*)(l_Lasm_KV_workers___lam__5___closed__0));
v___x_594_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_594_, 0, v_k_578_);
v___x_595_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_595_, 0, v_v_579_);
v___x_596_ = lean_unsigned_to_nat(2u);
v___x_597_ = lean_mk_empty_array_with_capacity(v___x_596_);
v___x_598_ = lean_array_push(v___x_597_, v___x_594_);
v___x_599_ = lean_array_push(v___x_598_, v___x_595_);
v___x_600_ = lean_unsigned_to_nat(0u);
v___x_601_ = 0;
v___x_602_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_592_, v___x_593_, v___x_599_);
v___x_603_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_600_, v___x_601_, v___x_602_, v___f_580_);
return v___x_603_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5___boxed(lean_object* v_k_604_, lean_object* v_v_605_, lean_object* v___f_606_, lean_object* v_x_607_, lean_object* v___y_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Lasm_KV_workers___lam__5(v_k_604_, v_v_605_, v___f_606_, v_x_607_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6(lean_object* v___f_610_, lean_object* v_name_611_, lean_object* v___f_612_, lean_object* v_k_613_, lean_object* v_v_614_){
_start:
{
lean_object* v___f_616_; lean_object* v___x_617_; uint8_t v___x_618_; lean_object* v_val_620_; lean_object* v_a_624_; lean_object* v___x_626_; lean_object* v_a_627_; lean_object* v___x_628_; 
v___f_616_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__5___boxed), 5, 3);
lean_closure_set(v___f_616_, 0, v_k_613_);
lean_closure_set(v___f_616_, 1, v_v_614_);
lean_closure_set(v___f_616_, 2, v___f_610_);
v___x_617_ = lean_unsigned_to_nat(0u);
v___x_618_ = 0;
v___x_626_ = l_Lasm_KV_binding(v_name_611_);
v_a_627_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_a_627_);
lean_dec_ref(v___x_626_);
v___x_628_ = lean_apply_2(v___f_612_, v_a_627_, lean_box(0));
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_636_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_636_ == 0)
{
v___x_631_ = v___x_628_;
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_628_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_634_; 
if (v_isShared_632_ == 0)
{
lean_ctor_set_tag(v___x_631_, 1);
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_629_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
v_val_620_ = v___x_634_;
goto v___jp_619_;
}
}
}
else
{
lean_object* v_a_637_; 
v_a_637_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_a_637_);
lean_dec_ref_known(v___x_628_, 1);
v_a_624_ = v_a_637_;
goto v___jp_623_;
}
v___jp_619_:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_621_, 0, v_val_620_);
v___x_622_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_617_, v___x_618_, v___x_621_, v___f_616_);
return v___x_622_;
}
v___jp_623_:
{
lean_object* v___x_625_; 
v___x_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_625_, 0, v_a_624_);
v_val_620_ = v___x_625_;
goto v___jp_619_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6___boxed(lean_object* v___f_638_, lean_object* v_name_639_, lean_object* v___f_640_, lean_object* v_k_641_, lean_object* v_v_642_, lean_object* v___y_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lasm_KV_workers___lam__6(v___f_638_, v_name_639_, v___f_640_, v_k_641_, v_v_642_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7(lean_object* v_k_646_, lean_object* v___f_647_, lean_object* v_x_648_){
_start:
{
if (lean_obj_tag(v_x_648_) == 0)
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_658_; 
lean_dec_ref(v___f_647_);
lean_dec_ref(v_k_646_);
v_a_650_ = lean_ctor_get(v_x_648_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v_x_648_);
if (v_isSharedCheck_658_ == 0)
{
v___x_652_ = v_x_648_;
v_isShared_653_ = v_isSharedCheck_658_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v_x_648_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_658_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_657_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_656_; 
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
return v___x_656_;
}
}
}
else
{
lean_object* v_a_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; uint8_t v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_a_659_ = lean_ctor_get(v_x_648_, 0);
lean_inc(v_a_659_);
lean_dec_ref_known(v_x_648_, 1);
v___x_660_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_661_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_661_, 0, v_k_646_);
v___x_662_ = lean_unsigned_to_nat(1u);
v___x_663_ = lean_mk_empty_array_with_capacity(v___x_662_);
v___x_664_ = lean_array_push(v___x_663_, v___x_661_);
v___x_665_ = lean_unsigned_to_nat(0u);
v___x_666_ = 0;
v___x_667_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_659_, v___x_660_, v___x_664_);
v___x_668_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_665_, v___x_666_, v___x_667_, v___f_647_);
return v___x_668_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7___boxed(lean_object* v_k_669_, lean_object* v___f_670_, lean_object* v_x_671_, lean_object* v___y_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Lasm_KV_workers___lam__7(v_k_669_, v___f_670_, v_x_671_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8(lean_object* v___f_674_, lean_object* v_name_675_, lean_object* v_k_676_){
_start:
{
lean_object* v___f_678_; lean_object* v___x_679_; uint8_t v___x_680_; lean_object* v_val_682_; lean_object* v_a_686_; lean_object* v___x_688_; lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_706_; 
v___f_678_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__7___boxed), 4, 2);
lean_closure_set(v___f_678_, 0, v_k_676_);
lean_closure_set(v___f_678_, 1, v___f_674_);
v___x_679_ = lean_unsigned_to_nat(0u);
v___x_680_ = 0;
lean_inc_ref(v_name_675_);
v___x_688_ = l_Lasm_KV_binding(v_name_675_);
v_a_689_ = lean_ctor_get(v___x_688_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_688_);
if (v_isSharedCheck_706_ == 0)
{
v___x_691_ = v___x_688_;
v_isShared_692_ = v_isSharedCheck_706_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_688_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_706_;
goto v_resetjp_690_;
}
v___jp_681_:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v_val_682_);
v___x_684_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_679_, v___x_680_, v___x_683_, v___f_678_);
return v___x_684_;
}
v___jp_685_:
{
lean_object* v___x_687_; 
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v_a_686_);
v_val_682_ = v___x_687_;
goto v___jp_681_;
}
v_resetjp_690_:
{
if (lean_obj_tag(v_a_689_) == 0)
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_696_; 
v___x_693_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_694_ = lean_string_append(v___x_693_, v_name_675_);
lean_dec_ref(v_name_675_);
if (v_isShared_692_ == 0)
{
lean_ctor_set_tag(v___x_691_, 18);
lean_ctor_set(v___x_691_, 0, v___x_694_);
v___x_696_ = v___x_691_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_694_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
v_a_686_ = v___x_696_;
goto v___jp_685_;
}
}
else
{
lean_object* v_val_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
lean_del_object(v___x_691_);
lean_dec_ref(v_name_675_);
v_val_698_ = lean_ctor_get(v_a_689_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v_a_689_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v_a_689_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_val_698_);
lean_dec(v_a_689_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_val_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
v_val_682_ = v___x_703_;
goto v___jp_681_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8___boxed(lean_object* v___f_707_, lean_object* v_name_708_, lean_object* v_k_709_, lean_object* v___y_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lasm_KV_workers___lam__8(v___f_707_, v_name_708_, v_k_709_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers(lean_object* v_name_715_){
_start:
{
lean_object* v___f_716_; lean_object* v___f_717_; lean_object* v___f_718_; lean_object* v_delete_719_; lean_object* v_put_720_; lean_object* v_get_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___f_716_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_717_ = ((lean_object*)(l_Lasm_KV_workers___closed__1));
lean_inc_ref_n(v_name_715_, 3);
v___f_718_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__1___boxed), 3, 1);
lean_closure_set(v___f_718_, 0, v_name_715_);
lean_inc_ref(v___f_718_);
v_delete_719_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__4___boxed), 5, 3);
lean_closure_set(v_delete_719_, 0, v___f_716_);
lean_closure_set(v_delete_719_, 1, v_name_715_);
lean_closure_set(v_delete_719_, 2, v___f_718_);
v_put_720_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__6___boxed), 6, 3);
lean_closure_set(v_put_720_, 0, v___f_716_);
lean_closure_set(v_put_720_, 1, v_name_715_);
lean_closure_set(v_put_720_, 2, v___f_718_);
v_get_721_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__8___boxed), 4, 2);
lean_closure_set(v_get_721_, 0, v___f_717_);
lean_closure_set(v_get_721_, 1, v_name_715_);
v___x_722_ = ((lean_object*)(l_Lasm_KV_workers___closed__2));
v___x_723_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
lean_ctor_set(v___x_723_, 1, v_get_721_);
lean_ctor_set(v___x_723_, 2, v_put_720_);
lean_ctor_set(v___x_723_, 3, v_delete_719_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3(lean_object* v___f_725_, lean_object* v_x_726_){
_start:
{
if (lean_obj_tag(v_x_726_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_736_; 
lean_dec_ref(v___f_725_);
v_a_728_ = lean_ctor_get(v_x_726_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v_x_726_);
if (v_isSharedCheck_736_ == 0)
{
v___x_730_ = v_x_726_;
v_isShared_731_ = v_isSharedCheck_736_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v_x_726_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_736_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_735_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; 
v___x_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
return v___x_734_;
}
}
}
else
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_757_; 
v_a_737_ = lean_ctor_get(v_x_726_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v_x_726_);
if (v_isSharedCheck_757_ == 0)
{
v___x_739_ = v_x_726_;
v_isShared_740_ = v_isSharedCheck_757_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v_x_726_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_757_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; lean_object* v_val_745_; lean_object* v___x_748_; 
v___x_741_ = ((lean_object*)(l_Lasm_KV_deno___lam__3___closed__0));
v___x_742_ = lean_unsigned_to_nat(0u);
v___x_743_ = 0;
v___x_748_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_a_737_, v___x_741_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_751_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 0, v_a_749_);
v___x_751_ = v___x_739_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_749_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
v_val_745_ = v___x_751_;
goto v___jp_744_;
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; 
v_a_753_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_753_);
lean_dec_ref_known(v___x_748_, 1);
if (v_isShared_740_ == 0)
{
lean_ctor_set_tag(v___x_739_, 0);
lean_ctor_set(v___x_739_, 0, v_a_753_);
v___x_755_ = v___x_739_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_753_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
v_val_745_ = v___x_755_;
goto v___jp_744_;
}
}
v___jp_744_:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_746_, 0, v_val_745_);
v___x_747_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_742_, v___x_743_, v___x_746_, v___f_725_);
return v___x_747_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3___boxed(lean_object* v___f_758_, lean_object* v_x_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lasm_KV_deno___lam__3(v___f_758_, v_x_759_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0(lean_object* v_name_762_, lean_object* v_a_763_, lean_object* v___x_764_, lean_object* v___f_765_, lean_object* v_k_766_){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_768_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_769_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_769_, 0, v_name_762_);
v___x_770_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_770_, 0, v_k_766_);
v___x_771_ = lean_unsigned_to_nat(2u);
v___x_772_ = lean_mk_empty_array_with_capacity(v___x_771_);
v___x_773_ = lean_array_push(v___x_772_, v___x_769_);
v___x_774_ = lean_array_push(v___x_773_, v___x_770_);
v___x_775_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
v___x_776_ = lean_unsigned_to_nat(1u);
v___x_777_ = lean_mk_empty_array_with_capacity(v___x_776_);
v___x_778_ = lean_array_push(v___x_777_, v___x_775_);
v___x_779_ = 0;
v___x_780_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_763_, v___x_768_, v___x_778_);
v___x_781_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_764_, v___x_779_, v___x_780_, v___f_765_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0___boxed(lean_object* v_name_782_, lean_object* v_a_783_, lean_object* v___x_784_, lean_object* v___f_785_, lean_object* v_k_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lasm_KV_deno___lam__0(v_name_782_, v_a_783_, v___x_784_, v___f_785_, v_k_786_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1(lean_object* v_name_790_, lean_object* v_a_791_, lean_object* v___x_792_, lean_object* v___f_793_, lean_object* v_k_794_, lean_object* v_v_795_){
_start:
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; uint8_t v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_797_ = ((lean_object*)(l_Lasm_KV_deno___lam__1___closed__0));
v___x_798_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_798_, 0, v_name_790_);
v___x_799_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_799_, 0, v_k_794_);
v___x_800_ = lean_unsigned_to_nat(2u);
v___x_801_ = lean_mk_empty_array_with_capacity(v___x_800_);
lean_inc_ref(v___x_801_);
v___x_802_ = lean_array_push(v___x_801_, v___x_798_);
v___x_803_ = lean_array_push(v___x_802_, v___x_799_);
v___x_804_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
v___x_805_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_805_, 0, v_v_795_);
v___x_806_ = lean_array_push(v___x_801_, v___x_804_);
v___x_807_ = lean_array_push(v___x_806_, v___x_805_);
v___x_808_ = 0;
v___x_809_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_791_, v___x_797_, v___x_807_);
v___x_810_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_792_, v___x_808_, v___x_809_, v___f_793_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1___boxed(lean_object* v_name_811_, lean_object* v_a_812_, lean_object* v___x_813_, lean_object* v___f_814_, lean_object* v_k_815_, lean_object* v_v_816_, lean_object* v___y_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lasm_KV_deno___lam__1(v_name_811_, v_a_812_, v___x_813_, v___f_814_, v_k_815_, v_v_816_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2(lean_object* v_name_819_, lean_object* v_a_820_, lean_object* v___x_821_, lean_object* v___f_822_, lean_object* v_k_823_){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; uint8_t v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_825_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_826_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_826_, 0, v_name_819_);
v___x_827_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_827_, 0, v_k_823_);
v___x_828_ = lean_unsigned_to_nat(2u);
v___x_829_ = lean_mk_empty_array_with_capacity(v___x_828_);
v___x_830_ = lean_array_push(v___x_829_, v___x_826_);
v___x_831_ = lean_array_push(v___x_830_, v___x_827_);
v___x_832_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
v___x_833_ = lean_unsigned_to_nat(1u);
v___x_834_ = lean_mk_empty_array_with_capacity(v___x_833_);
v___x_835_ = lean_array_push(v___x_834_, v___x_832_);
v___x_836_ = 0;
v___x_837_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_820_, v___x_825_, v___x_835_);
v___x_838_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_821_, v___x_836_, v___x_837_, v___f_822_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2___boxed(lean_object* v_name_839_, lean_object* v_a_840_, lean_object* v___x_841_, lean_object* v___f_842_, lean_object* v_k_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lasm_KV_deno___lam__2(v_name_839_, v_a_840_, v___x_841_, v___f_842_, v_k_843_);
return v_res_845_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0(void){
_start:
{
uint64_t v___x_846_; uint8_t v___x_847_; uint64_t v___x_848_; 
v___x_846_ = 8ULL;
v___x_847_ = 1;
v___x_848_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_847_, v___x_846_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(lean_object* v_o_850_, lean_object* v_name_851_, lean_object* v_args_852_){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; uint64_t v___x_857_; lean_object* v___x_858_; 
v___x_854_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1));
v___x_855_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_855_, 0, v_o_850_);
lean_ctor_set(v___x_855_, 1, v___x_854_);
lean_inc_ref(v_name_851_);
v___x_856_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_856_, 0, v_name_851_);
v___x_857_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0);
v___x_858_ = l_Lasm_JS_Value_invokeRaw(v___x_855_, v___x_856_, v_args_852_, v___x_857_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_a_859_);
lean_dec_ref_known(v___x_858_, 1);
v___x_860_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1));
v___x_861_ = lean_string_append(v___x_860_, v_name_851_);
lean_dec_ref(v_name_851_);
v___x_862_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_861_, v_a_859_);
lean_dec(v_a_859_);
lean_dec_ref(v___x_861_);
return v___x_862_;
}
else
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
lean_dec_ref(v_name_851_);
v_a_863_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_870_ == 0)
{
v___x_865_ = v___x_858_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_858_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_863_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___boxed(lean_object* v_o_871_, lean_object* v_name_872_, lean_object* v_args_873_, lean_object* v___y_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_o_871_, v_name_872_, v_args_873_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno(lean_object* v_name_883_){
_start:
{
lean_object* v___f_885_; lean_object* v___f_886_; lean_object* v___x_887_; 
v___f_885_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_886_ = ((lean_object*)(l_Lasm_KV_deno___closed__0));
v___x_887_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_888_);
lean_dec_ref_known(v___x_887_, 1);
v___x_889_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_890_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_888_, v___x_889_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v_a_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v_a_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc(v_a_891_);
lean_dec_ref_known(v___x_890_, 1);
v___x_892_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_893_ = lean_unsigned_to_nat(0u);
v___x_894_ = ((lean_object*)(l_Lasm_KV_deno___closed__3));
v___x_895_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_a_891_, v___x_892_, v___x_894_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_908_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_908_ == 0)
{
v___x_898_ = v___x_895_;
v_isShared_899_ = v_isSharedCheck_908_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_895_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_908_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___f_900_; lean_object* v___f_901_; lean_object* v___f_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_906_; 
lean_inc_n(v_a_896_, 2);
lean_inc_ref_n(v_name_883_, 2);
v___f_900_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__0___boxed), 6, 4);
lean_closure_set(v___f_900_, 0, v_name_883_);
lean_closure_set(v___f_900_, 1, v_a_896_);
lean_closure_set(v___f_900_, 2, v___x_893_);
lean_closure_set(v___f_900_, 3, v___f_886_);
v___f_901_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__1___boxed), 7, 4);
lean_closure_set(v___f_901_, 0, v_name_883_);
lean_closure_set(v___f_901_, 1, v_a_896_);
lean_closure_set(v___f_901_, 2, v___x_893_);
lean_closure_set(v___f_901_, 3, v___f_885_);
v___f_902_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__2___boxed), 6, 4);
lean_closure_set(v___f_902_, 0, v_name_883_);
lean_closure_set(v___f_902_, 1, v_a_896_);
lean_closure_set(v___f_902_, 2, v___x_893_);
lean_closure_set(v___f_902_, 3, v___f_885_);
v___x_903_ = ((lean_object*)(l_Lasm_KV_deno___closed__4));
v___x_904_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
lean_ctor_set(v___x_904_, 1, v___f_900_);
lean_ctor_set(v___x_904_, 2, v___f_901_);
lean_ctor_set(v___x_904_, 3, v___f_902_);
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 0, v___x_904_);
v___x_906_ = v___x_898_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v___x_904_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_dec_ref(v_name_883_);
v_a_909_ = lean_ctor_get(v___x_895_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_895_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_895_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec_ref(v_name_883_);
v_a_917_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_890_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_890_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
else
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
lean_dec_ref(v_name_883_);
v_a_925_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_887_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_887_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___boxed(lean_object* v_name_933_, lean_object* v_a_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_Lasm_KV_deno(v_name_933_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0(lean_object* v_name_936_, lean_object* v_k_937_){
_start:
{
lean_object* v_val_940_; lean_object* v___x_942_; 
v___x_942_ = l_Lasm_Fastly_kvGetText(v_name_936_, v_k_937_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_950_; 
v_a_943_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_950_ == 0)
{
v___x_945_ = v___x_942_;
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_942_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_948_; 
if (v_isShared_946_ == 0)
{
lean_ctor_set_tag(v___x_945_, 1);
v___x_948_ = v___x_945_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_a_943_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
v_val_940_ = v___x_948_;
goto v___jp_939_;
}
}
}
else
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
v_a_951_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_942_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_942_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
lean_ctor_set_tag(v___x_953_, 0);
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
v_val_940_ = v___x_956_;
goto v___jp_939_;
}
}
}
v___jp_939_:
{
lean_object* v___x_941_; 
v___x_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_941_, 0, v_val_940_);
return v___x_941_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0___boxed(lean_object* v_name_959_, lean_object* v_k_960_, lean_object* v___y_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Lasm_KV_fastly___lam__0(v_name_959_, v_k_960_);
lean_dec_ref(v_k_960_);
lean_dec_ref(v_name_959_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1(lean_object* v_name_963_, lean_object* v_k_964_, lean_object* v_v_965_){
_start:
{
lean_object* v_val_968_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_string_to_utf8(v_v_965_);
v___x_971_ = lasm_fastly_kv_put(v_name_963_, v_k_964_, v___x_970_);
lean_dec_ref(v___x_970_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
v_a_972_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_971_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_971_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
lean_ctor_set_tag(v___x_974_, 1);
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
v_val_968_ = v___x_977_;
goto v___jp_967_;
}
}
}
else
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
v_a_980_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_987_ == 0)
{
v___x_982_ = v___x_971_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_971_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
lean_ctor_set_tag(v___x_982_, 0);
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
v_val_968_ = v___x_985_;
goto v___jp_967_;
}
}
}
v___jp_967_:
{
lean_object* v___x_969_; 
v___x_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_969_, 0, v_val_968_);
return v___x_969_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1___boxed(lean_object* v_name_988_, lean_object* v_k_989_, lean_object* v_v_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lasm_KV_fastly___lam__1(v_name_988_, v_k_989_, v_v_990_);
lean_dec_ref(v_k_989_);
lean_dec_ref(v_name_988_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2(lean_object* v_name_993_, lean_object* v_k_994_){
_start:
{
lean_object* v_val_997_; lean_object* v___x_999_; 
v___x_999_ = lasm_fastly_kv_delete(v_name_993_, v_k_994_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1002_ = v___x_999_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_999_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
lean_ctor_set_tag(v___x_1002_, 1);
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_1000_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
v_val_997_ = v___x_1005_;
goto v___jp_996_;
}
}
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
v_a_1008_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_999_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_999_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
lean_ctor_set_tag(v___x_1010_, 0);
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
v_val_997_ = v___x_1013_;
goto v___jp_996_;
}
}
}
v___jp_996_:
{
lean_object* v___x_998_; 
v___x_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_998_, 0, v_val_997_);
return v___x_998_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2___boxed(lean_object* v_name_1016_, lean_object* v_k_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_Lasm_KV_fastly___lam__2(v_name_1016_, v_k_1017_);
lean_dec_ref(v_k_1017_);
lean_dec_ref(v_name_1016_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly(lean_object* v_name_1021_){
_start:
{
lean_object* v___f_1022_; lean_object* v___f_1023_; lean_object* v___f_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
lean_inc_ref_n(v_name_1021_, 2);
v___f_1022_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1022_, 0, v_name_1021_);
v___f_1023_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1023_, 0, v_name_1021_);
v___f_1024_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1024_, 0, v_name_1021_);
v___x_1025_ = ((lean_object*)(l_Lasm_KV_fastly___closed__0));
v___x_1026_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1025_);
lean_ctor_set(v___x_1026_, 1, v___f_1022_);
lean_ctor_set(v___x_1026_, 2, v___f_1023_);
lean_ctor_set(v___x_1026_, 3, v___f_1024_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0(uint8_t v_a_1027_, uint8_t v_a_1028_, lean_object* v_____do__lift_1029_){
_start:
{
if (lean_obj_tag(v_____do__lift_1029_) == 0)
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = lean_box(v_a_1027_);
v___x_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
return v___x_1032_;
}
else
{
lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1040_; 
v_isSharedCheck_1040_ = !lean_is_exclusive(v_____do__lift_1029_);
if (v_isSharedCheck_1040_ == 0)
{
lean_object* v_unused_1041_; 
v_unused_1041_ = lean_ctor_get(v_____do__lift_1029_, 0);
lean_dec(v_unused_1041_);
v___x_1034_ = v_____do__lift_1029_;
v_isShared_1035_ = v_isSharedCheck_1040_;
goto v_resetjp_1033_;
}
else
{
lean_dec(v_____do__lift_1029_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1040_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1036_; lean_object* v___x_1038_; 
v___x_1036_ = lean_box(v_a_1028_);
if (v_isShared_1035_ == 0)
{
lean_ctor_set_tag(v___x_1034_, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1036_);
v___x_1038_ = v___x_1034_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v___x_1036_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0___boxed(lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_____do__lift_1044_, lean_object* v___y_1045_){
_start:
{
uint8_t v_a_3238__boxed_1046_; uint8_t v_a_3239__boxed_1047_; lean_object* v_res_1048_; 
v_a_3238__boxed_1046_ = lean_unbox(v_a_1042_);
v_a_3239__boxed_1047_ = lean_unbox(v_a_1043_);
v_res_1048_ = l_Lasm_KV_open___lam__0(v_a_3238__boxed_1046_, v_a_3239__boxed_1047_, v_____do__lift_1044_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1(lean_object* v_a_1049_, lean_object* v_k_1050_, lean_object* v___x_1051_, lean_object* v_x_1052_){
_start:
{
if (lean_obj_tag(v_x_1052_) == 0)
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1062_; 
lean_dec_ref(v___x_1051_);
lean_dec_ref(v_k_1050_);
lean_dec_ref(v_a_1049_);
v_a_1054_ = lean_ctor_get(v_x_1052_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v_x_1052_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1056_ = v_x_1052_;
v_isShared_1057_ = v_isSharedCheck_1062_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v_x_1052_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1062_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_a_1054_);
v___x_1059_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
return v___x_1060_;
}
}
}
else
{
lean_object* v_a_1063_; uint8_t v___x_1064_; 
v_a_1063_ = lean_ctor_get(v_x_1052_, 0);
lean_inc(v_a_1063_);
lean_dec_ref_known(v_x_1052_, 1);
v___x_1064_ = lean_unbox(v_a_1063_);
lean_dec(v_a_1063_);
if (v___x_1064_ == 0)
{
lean_object* v_get_1065_; lean_object* v___x_1066_; 
lean_dec_ref(v___x_1051_);
v_get_1065_ = lean_ctor_get(v_a_1049_, 1);
lean_inc_ref(v_get_1065_);
lean_dec_ref(v_a_1049_);
v___x_1066_ = lean_apply_2(v_get_1065_, v_k_1050_, lean_box(0));
return v___x_1066_;
}
else
{
lean_object* v_get_1067_; lean_object* v___x_1068_; 
lean_dec_ref(v_a_1049_);
v_get_1067_ = lean_ctor_get(v___x_1051_, 1);
lean_inc_ref(v_get_1067_);
lean_dec_ref(v___x_1051_);
v___x_1068_ = lean_apply_2(v_get_1067_, v_k_1050_, lean_box(0));
return v___x_1068_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1___boxed(lean_object* v_a_1069_, lean_object* v_k_1070_, lean_object* v___x_1071_, lean_object* v_x_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_Lasm_KV_open___lam__1(v_a_1069_, v_k_1070_, v___x_1071_, v_x_1072_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2(lean_object* v_a_1075_, lean_object* v___x_1076_, uint8_t v_a_1077_, lean_object* v_name_1078_, uint8_t v_a_1079_, lean_object* v_k_1080_){
_start:
{
lean_object* v___f_1082_; lean_object* v___x_1083_; lean_object* v_val_1085_; uint8_t v_a_1089_; lean_object* v___x_1092_; lean_object* v_a_1093_; 
v___f_1082_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1082_, 0, v_a_1075_);
lean_closure_set(v___f_1082_, 1, v_k_1080_);
lean_closure_set(v___f_1082_, 2, v___x_1076_);
v___x_1083_ = lean_unsigned_to_nat(0u);
v___x_1092_ = l_Lasm_KV_binding(v_name_1078_);
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1093_);
lean_dec_ref(v___x_1092_);
if (lean_obj_tag(v_a_1093_) == 0)
{
v_a_1089_ = v_a_1077_;
goto v___jp_1088_;
}
else
{
lean_dec_ref_known(v_a_1093_, 1);
v_a_1089_ = v_a_1079_;
goto v___jp_1088_;
}
v___jp_1084_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1086_, 0, v_val_1085_);
v___x_1087_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1083_, v_a_1077_, v___x_1086_, v___f_1082_);
return v___x_1087_;
}
v___jp_1088_:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = lean_box(v_a_1089_);
v___x_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
v_val_1085_ = v___x_1091_;
goto v___jp_1084_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2___boxed(lean_object* v_a_1094_, lean_object* v___x_1095_, lean_object* v_a_1096_, lean_object* v_name_1097_, lean_object* v_a_1098_, lean_object* v_k_1099_, lean_object* v___y_1100_){
_start:
{
uint8_t v_a_3313__boxed_1101_; uint8_t v_a_3314__boxed_1102_; lean_object* v_res_1103_; 
v_a_3313__boxed_1101_ = lean_unbox(v_a_1096_);
v_a_3314__boxed_1102_ = lean_unbox(v_a_1098_);
v_res_1103_ = l_Lasm_KV_open___lam__2(v_a_1094_, v___x_1095_, v_a_3313__boxed_1101_, v_name_1097_, v_a_3314__boxed_1102_, v_k_1099_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3(lean_object* v_a_1104_, lean_object* v_k_1105_, lean_object* v_v_1106_, lean_object* v___x_1107_, lean_object* v_x_1108_){
_start:
{
if (lean_obj_tag(v_x_1108_) == 0)
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1118_; 
lean_dec_ref(v___x_1107_);
lean_dec_ref(v_v_1106_);
lean_dec_ref(v_k_1105_);
lean_dec_ref(v_a_1104_);
v_a_1110_ = lean_ctor_get(v_x_1108_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v_x_1108_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1112_ = v_x_1108_;
v_isShared_1113_ = v_isSharedCheck_1118_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v_x_1108_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1118_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1110_);
v___x_1115_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
lean_object* v___x_1116_; 
v___x_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1115_);
return v___x_1116_;
}
}
}
else
{
lean_object* v_a_1119_; uint8_t v___x_1120_; 
v_a_1119_ = lean_ctor_get(v_x_1108_, 0);
lean_inc(v_a_1119_);
lean_dec_ref_known(v_x_1108_, 1);
v___x_1120_ = lean_unbox(v_a_1119_);
lean_dec(v_a_1119_);
if (v___x_1120_ == 0)
{
lean_object* v_put_1121_; lean_object* v___x_1122_; 
lean_dec_ref(v___x_1107_);
v_put_1121_ = lean_ctor_get(v_a_1104_, 2);
lean_inc_ref(v_put_1121_);
lean_dec_ref(v_a_1104_);
v___x_1122_ = lean_apply_3(v_put_1121_, v_k_1105_, v_v_1106_, lean_box(0));
return v___x_1122_;
}
else
{
lean_object* v_put_1123_; lean_object* v___x_1124_; 
lean_dec_ref(v_a_1104_);
v_put_1123_ = lean_ctor_get(v___x_1107_, 2);
lean_inc_ref(v_put_1123_);
lean_dec_ref(v___x_1107_);
v___x_1124_ = lean_apply_3(v_put_1123_, v_k_1105_, v_v_1106_, lean_box(0));
return v___x_1124_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3___boxed(lean_object* v_a_1125_, lean_object* v_k_1126_, lean_object* v_v_1127_, lean_object* v___x_1128_, lean_object* v_x_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lasm_KV_open___lam__3(v_a_1125_, v_k_1126_, v_v_1127_, v___x_1128_, v_x_1129_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4(lean_object* v_a_1132_, lean_object* v___x_1133_, uint8_t v_a_1134_, lean_object* v_name_1135_, lean_object* v___f_1136_, lean_object* v_k_1137_, lean_object* v_v_1138_){
_start:
{
lean_object* v___f_1140_; lean_object* v___x_1141_; lean_object* v_val_1143_; lean_object* v_a_1147_; lean_object* v___x_1149_; lean_object* v_a_1150_; lean_object* v___x_1151_; 
v___f_1140_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__3___boxed), 6, 4);
lean_closure_set(v___f_1140_, 0, v_a_1132_);
lean_closure_set(v___f_1140_, 1, v_k_1137_);
lean_closure_set(v___f_1140_, 2, v_v_1138_);
lean_closure_set(v___f_1140_, 3, v___x_1133_);
v___x_1141_ = lean_unsigned_to_nat(0u);
v___x_1149_ = l_Lasm_KV_binding(v_name_1135_);
v_a_1150_ = lean_ctor_get(v___x_1149_, 0);
lean_inc(v_a_1150_);
lean_dec_ref(v___x_1149_);
v___x_1151_ = lean_apply_2(v___f_1136_, v_a_1150_, lean_box(0));
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v___x_1151_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1151_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
lean_ctor_set_tag(v___x_1154_, 1);
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_a_1152_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
v_val_1143_ = v___x_1157_;
goto v___jp_1142_;
}
}
}
else
{
lean_object* v_a_1160_; 
v_a_1160_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1160_);
lean_dec_ref_known(v___x_1151_, 1);
v_a_1147_ = v_a_1160_;
goto v___jp_1146_;
}
v___jp_1142_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1144_, 0, v_val_1143_);
v___x_1145_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1141_, v_a_1134_, v___x_1144_, v___f_1140_);
return v___x_1145_;
}
v___jp_1146_:
{
lean_object* v___x_1148_; 
v___x_1148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1148_, 0, v_a_1147_);
v_val_1143_ = v___x_1148_;
goto v___jp_1142_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4___boxed(lean_object* v_a_1161_, lean_object* v___x_1162_, lean_object* v_a_1163_, lean_object* v_name_1164_, lean_object* v___f_1165_, lean_object* v_k_1166_, lean_object* v_v_1167_, lean_object* v___y_1168_){
_start:
{
uint8_t v_a_3392__boxed_1169_; lean_object* v_res_1170_; 
v_a_3392__boxed_1169_ = lean_unbox(v_a_1163_);
v_res_1170_ = l_Lasm_KV_open___lam__4(v_a_1161_, v___x_1162_, v_a_3392__boxed_1169_, v_name_1164_, v___f_1165_, v_k_1166_, v_v_1167_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5(lean_object* v_a_1171_, lean_object* v_k_1172_, lean_object* v___x_1173_, lean_object* v_x_1174_){
_start:
{
if (lean_obj_tag(v_x_1174_) == 0)
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1184_; 
lean_dec_ref(v___x_1173_);
lean_dec_ref(v_k_1172_);
lean_dec_ref(v_a_1171_);
v_a_1176_ = lean_ctor_get(v_x_1174_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v_x_1174_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1178_ = v_x_1174_;
v_isShared_1179_ = v_isSharedCheck_1184_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v_x_1174_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1184_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
lean_object* v___x_1182_; 
v___x_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1181_);
return v___x_1182_;
}
}
}
else
{
lean_object* v_a_1185_; uint8_t v___x_1186_; 
v_a_1185_ = lean_ctor_get(v_x_1174_, 0);
lean_inc(v_a_1185_);
lean_dec_ref_known(v_x_1174_, 1);
v___x_1186_ = lean_unbox(v_a_1185_);
lean_dec(v_a_1185_);
if (v___x_1186_ == 0)
{
lean_object* v_delete_1187_; lean_object* v___x_1188_; 
lean_dec_ref(v___x_1173_);
v_delete_1187_ = lean_ctor_get(v_a_1171_, 3);
lean_inc_ref(v_delete_1187_);
lean_dec_ref(v_a_1171_);
v___x_1188_ = lean_apply_2(v_delete_1187_, v_k_1172_, lean_box(0));
return v___x_1188_;
}
else
{
lean_object* v_delete_1189_; lean_object* v___x_1190_; 
lean_dec_ref(v_a_1171_);
v_delete_1189_ = lean_ctor_get(v___x_1173_, 3);
lean_inc_ref(v_delete_1189_);
lean_dec_ref(v___x_1173_);
v___x_1190_ = lean_apply_2(v_delete_1189_, v_k_1172_, lean_box(0));
return v___x_1190_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5___boxed(lean_object* v_a_1191_, lean_object* v_k_1192_, lean_object* v___x_1193_, lean_object* v_x_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Lasm_KV_open___lam__5(v_a_1191_, v_k_1192_, v___x_1193_, v_x_1194_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6(lean_object* v_a_1197_, lean_object* v___x_1198_, uint8_t v_a_1199_, lean_object* v_name_1200_, lean_object* v___f_1201_, lean_object* v_k_1202_){
_start:
{
lean_object* v___f_1204_; lean_object* v___x_1205_; lean_object* v_val_1207_; lean_object* v_a_1211_; lean_object* v___x_1213_; lean_object* v_a_1214_; lean_object* v___x_1215_; 
v___f_1204_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__5___boxed), 5, 3);
lean_closure_set(v___f_1204_, 0, v_a_1197_);
lean_closure_set(v___f_1204_, 1, v_k_1202_);
lean_closure_set(v___f_1204_, 2, v___x_1198_);
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1213_ = l_Lasm_KV_binding(v_name_1200_);
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_a_1214_);
lean_dec_ref(v___x_1213_);
v___x_1215_ = lean_apply_2(v___f_1201_, v_a_1214_, lean_box(0));
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_a_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1223_; 
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1218_ = v___x_1215_;
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_a_1216_);
lean_dec(v___x_1215_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1221_; 
if (v_isShared_1219_ == 0)
{
lean_ctor_set_tag(v___x_1218_, 1);
v___x_1221_ = v___x_1218_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_a_1216_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
v_val_1207_ = v___x_1221_;
goto v___jp_1206_;
}
}
}
else
{
lean_object* v_a_1224_; 
v_a_1224_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1224_);
lean_dec_ref_known(v___x_1215_, 1);
v_a_1211_ = v_a_1224_;
goto v___jp_1210_;
}
v___jp_1206_:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1208_, 0, v_val_1207_);
v___x_1209_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1205_, v_a_1199_, v___x_1208_, v___f_1204_);
return v___x_1209_;
}
v___jp_1210_:
{
lean_object* v___x_1212_; 
v___x_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1212_, 0, v_a_1211_);
v_val_1207_ = v___x_1212_;
goto v___jp_1206_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6___boxed(lean_object* v_a_1225_, lean_object* v___x_1226_, lean_object* v_a_1227_, lean_object* v_name_1228_, lean_object* v___f_1229_, lean_object* v_k_1230_, lean_object* v___y_1231_){
_start:
{
uint8_t v_a_3488__boxed_1232_; lean_object* v_res_1233_; 
v_a_3488__boxed_1232_ = lean_unbox(v_a_1227_);
v_res_1233_ = l_Lasm_KV_open___lam__6(v_a_1225_, v___x_1226_, v_a_3488__boxed_1232_, v_name_1228_, v___f_1229_, v_k_1230_);
return v_res_1233_;
}
}
static uint32_t _init_l_Lasm_KV_open___closed__1(void){
_start:
{
lean_object* v___x_1235_; uint32_t v___x_1236_; 
v___x_1235_ = lean_box(0);
v___x_1236_ = lasm_fetch_platform(v___x_1235_);
return v___x_1236_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__2(void){
_start:
{
uint32_t v___x_1237_; uint32_t v___x_1238_; uint8_t v___x_1239_; 
v___x_1237_ = 2;
v___x_1238_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1239_ = lean_uint32_dec_eq(v___x_1238_, v___x_1237_);
return v___x_1239_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__3(void){
_start:
{
uint32_t v___x_1240_; uint32_t v___x_1241_; uint8_t v___x_1242_; 
v___x_1240_ = 0;
v___x_1241_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1242_ = lean_uint32_dec_eq(v___x_1241_, v___x_1240_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open(lean_object* v_name_1244_){
_start:
{
uint8_t v_a_1247_; uint8_t v___x_1280_; 
v___x_1280_ = lean_uint8_once(&l_Lasm_KV_open___closed__2, &l_Lasm_KV_open___closed__2_once, _init_l_Lasm_KV_open___closed__2);
if (v___x_1280_ == 0)
{
uint8_t v___x_1281_; 
v___x_1281_ = lean_uint8_once(&l_Lasm_KV_open___closed__3, &l_Lasm_KV_open___closed__3_once, _init_l_Lasm_KV_open___closed__3);
if (v___x_1281_ == 0)
{
lean_object* v___x_1282_; 
lean_dec_ref(v_name_1244_);
v___x_1282_ = l_Lasm_KV_memory();
return v___x_1282_;
}
else
{
lean_object* v___x_1283_; 
v___x_1283_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_a_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
lean_inc(v_a_1284_);
lean_dec_ref_known(v___x_1283_, 1);
v___x_1285_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_1286_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1284_, v___x_1285_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_a_1287_);
lean_dec_ref_known(v___x_1286_, 1);
v___x_1288_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_1289_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_a_1287_, v___x_1288_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_a_1290_);
lean_dec_ref_known(v___x_1289_, 1);
if (lean_obj_tag(v_a_1290_) == 9)
{
lean_object* v___x_1291_; 
lean_dec_ref_known(v_a_1290_, 2);
v___x_1291_ = l_Lasm_KV_deno(v_name_1244_);
if (lean_obj_tag(v___x_1291_) == 0)
{
return v___x_1291_;
}
else
{
lean_object* v___x_1292_; 
lean_dec_ref_known(v___x_1291_, 1);
v___x_1292_ = l_Lasm_KV_memory();
return v___x_1292_;
}
}
else
{
lean_dec(v_a_1290_);
v_a_1247_ = v___x_1280_;
goto v___jp_1246_;
}
}
else
{
lean_dec_ref_known(v___x_1289_, 1);
v_a_1247_ = v___x_1280_;
goto v___jp_1246_;
}
}
else
{
lean_dec_ref_known(v___x_1286_, 1);
v_a_1247_ = v___x_1280_;
goto v___jp_1246_;
}
}
else
{
lean_object* v_a_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1300_; 
lean_dec_ref(v_name_1244_);
v_a_1293_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1295_ = v___x_1283_;
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_a_1293_);
lean_dec(v___x_1283_);
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
else
{
lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1301_ = ((lean_object*)(l_Lasm_KV_open___closed__4));
v___x_1302_ = lasm_fastly_kv_get(v_name_1244_, v___x_1301_);
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1310_; 
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1310_ == 0)
{
lean_object* v_unused_1311_; 
v_unused_1311_ = lean_ctor_get(v___x_1302_, 0);
lean_dec(v_unused_1311_);
v___x_1304_ = v___x_1302_;
v_isShared_1305_ = v_isSharedCheck_1310_;
goto v_resetjp_1303_;
}
else
{
lean_dec(v___x_1302_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1310_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1306_; lean_object* v___x_1308_; 
v___x_1306_ = l_Lasm_KV_fastly(v_name_1244_);
if (v_isShared_1305_ == 0)
{
lean_ctor_set(v___x_1304_, 0, v___x_1306_);
v___x_1308_ = v___x_1304_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v___x_1306_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
else
{
lean_object* v___x_1312_; 
lean_dec_ref_known(v___x_1302_, 1);
lean_dec_ref(v_name_1244_);
v___x_1312_ = l_Lasm_KV_memory();
return v___x_1312_;
}
}
v___jp_1246_:
{
lean_object* v___x_1248_; 
v___x_1248_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1249_; uint8_t v___x_1250_; 
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1249_);
lean_dec_ref_known(v___x_1248_, 1);
v___x_1250_ = lean_unbox(v_a_1249_);
if (v___x_1250_ == 0)
{
lean_object* v___x_1251_; 
lean_dec(v_a_1249_);
lean_dec_ref(v_name_1244_);
v___x_1251_ = l_Lasm_KV_memory();
return v___x_1251_;
}
else
{
lean_object* v___x_1252_; lean_object* v___f_1253_; lean_object* v___x_1254_; lean_object* v_a_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1271_; 
v___x_1252_ = lean_box(v_a_1247_);
lean_inc(v_a_1249_);
v___f_1253_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1253_, 0, v___x_1252_);
lean_closure_set(v___f_1253_, 1, v_a_1249_);
v___x_1254_ = l_Lasm_KV_memory();
v_a_1255_ = lean_ctor_get(v___x_1254_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1257_ = v___x_1254_;
v_isShared_1258_ = v_isSharedCheck_1271_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_a_1255_);
lean_dec(v___x_1254_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1271_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___f_1261_; lean_object* v___x_1262_; lean_object* v___f_1263_; lean_object* v___x_1264_; lean_object* v___f_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1269_; 
lean_inc_ref_n(v_name_1244_, 3);
v___x_1259_ = l_Lasm_KV_workers(v_name_1244_);
v___x_1260_ = lean_box(v_a_1247_);
lean_inc_ref_n(v___x_1259_, 2);
lean_inc_n(v_a_1255_, 2);
v___f_1261_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__2___boxed), 7, 5);
lean_closure_set(v___f_1261_, 0, v_a_1255_);
lean_closure_set(v___f_1261_, 1, v___x_1259_);
lean_closure_set(v___f_1261_, 2, v___x_1260_);
lean_closure_set(v___f_1261_, 3, v_name_1244_);
lean_closure_set(v___f_1261_, 4, v_a_1249_);
v___x_1262_ = lean_box(v_a_1247_);
lean_inc_ref(v___f_1253_);
v___f_1263_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__4___boxed), 8, 5);
lean_closure_set(v___f_1263_, 0, v_a_1255_);
lean_closure_set(v___f_1263_, 1, v___x_1259_);
lean_closure_set(v___f_1263_, 2, v___x_1262_);
lean_closure_set(v___f_1263_, 3, v_name_1244_);
lean_closure_set(v___f_1263_, 4, v___f_1253_);
v___x_1264_ = lean_box(v_a_1247_);
v___f_1265_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__6___boxed), 7, 5);
lean_closure_set(v___f_1265_, 0, v_a_1255_);
lean_closure_set(v___f_1265_, 1, v___x_1259_);
lean_closure_set(v___f_1265_, 2, v___x_1264_);
lean_closure_set(v___f_1265_, 3, v_name_1244_);
lean_closure_set(v___f_1265_, 4, v___f_1253_);
v___x_1266_ = ((lean_object*)(l_Lasm_KV_open___closed__0));
v___x_1267_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1266_);
lean_ctor_set(v___x_1267_, 1, v___f_1261_);
lean_ctor_set(v___x_1267_, 2, v___f_1263_);
lean_ctor_set(v___x_1267_, 3, v___f_1265_);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 0, v___x_1267_);
v___x_1269_ = v___x_1257_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
else
{
lean_object* v_a_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1279_; 
lean_dec_ref(v_name_1244_);
v_a_1272_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1274_ = v___x_1248_;
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_a_1272_);
lean_dec(v___x_1248_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1277_; 
if (v_isShared_1275_ == 0)
{
v___x_1277_ = v___x_1274_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_a_1272_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___boxed(lean_object* v_name_1313_, lean_object* v_a_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lasm_KV_open(v_name_1313_);
return v_res_1315_;
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
