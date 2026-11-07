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
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_Table_read(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_Table_read___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_Table_write(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_Table_remove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_Table_remove___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0_spec__0___redArg(lean_object* v_a_39_, lean_object* v_x_40_){
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0_spec__0___redArg___boxed(lean_object* v_a_48_, lean_object* v_x_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0_spec__0___redArg(v_a_48_, v_x_49_);
lean_dec(v_x_49_);
lean_dec_ref(v_a_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0___redArg(lean_object* v_m_51_, lean_object* v_a_52_){
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
v___x_68_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0_spec__0___redArg(v_a_52_, v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0___redArg___boxed(lean_object* v_m_69_, lean_object* v_a_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0___redArg(v_m_69_, v_a_70_);
lean_dec_ref(v_a_70_);
lean_dec_ref(v_m_69_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_Table_read(lean_object* v_t_72_, lean_object* v_key_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0___redArg(v_t_72_, v_key_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_Table_read___boxed(lean_object* v_t_75_, lean_object* v_key_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lasm_KV_Table_read(v_t_75_, v_key_76_);
lean_dec_ref(v_key_76_);
lean_dec_ref(v_t_75_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0(lean_object* v_00_u03b2_78_, lean_object* v_m_79_, lean_object* v_a_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0___redArg(v_m_79_, v_a_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0___boxed(lean_object* v_00_u03b2_82_, lean_object* v_m_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0(v_00_u03b2_82_, v_m_83_, v_a_84_);
lean_dec_ref(v_a_84_);
lean_dec_ref(v_m_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0_spec__0(lean_object* v_00_u03b2_86_, lean_object* v_a_87_, lean_object* v_x_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0_spec__0___redArg(v_a_87_, v_x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0_spec__0___boxed(lean_object* v_00_u03b2_90_, lean_object* v_a_91_, lean_object* v_x_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0_spec__0(v_00_u03b2_90_, v_a_91_, v_x_92_);
lean_dec(v_x_92_);
lean_dec_ref(v_a_91_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__2___redArg(lean_object* v_a_94_, lean_object* v_b_95_, lean_object* v_x_96_){
_start:
{
if (lean_obj_tag(v_x_96_) == 0)
{
lean_dec(v_b_95_);
lean_dec_ref(v_a_94_);
return v_x_96_;
}
else
{
lean_object* v_key_97_; lean_object* v_value_98_; lean_object* v_tail_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_111_; 
v_key_97_ = lean_ctor_get(v_x_96_, 0);
v_value_98_ = lean_ctor_get(v_x_96_, 1);
v_tail_99_ = lean_ctor_get(v_x_96_, 2);
v_isSharedCheck_111_ = !lean_is_exclusive(v_x_96_);
if (v_isSharedCheck_111_ == 0)
{
v___x_101_ = v_x_96_;
v_isShared_102_ = v_isSharedCheck_111_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_tail_99_);
lean_inc(v_value_98_);
lean_inc(v_key_97_);
lean_dec(v_x_96_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_111_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
uint8_t v___x_103_; 
v___x_103_ = lean_string_dec_eq(v_key_97_, v_a_94_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_104_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__2___redArg(v_a_94_, v_b_95_, v_tail_99_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 2, v___x_104_);
v___x_106_ = v___x_101_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_key_97_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v_value_98_);
lean_ctor_set(v_reuseFailAlloc_107_, 2, v___x_104_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
else
{
lean_object* v___x_109_; 
lean_dec(v_value_98_);
lean_dec(v_key_97_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v_b_95_);
lean_ctor_set(v___x_101_, 0, v_a_94_);
v___x_109_ = v___x_101_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_a_94_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v_b_95_);
lean_ctor_set(v_reuseFailAlloc_110_, 2, v_tail_99_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_112_, lean_object* v_x_113_){
_start:
{
if (lean_obj_tag(v_x_113_) == 0)
{
return v_x_112_;
}
else
{
lean_object* v_key_114_; lean_object* v_value_115_; lean_object* v_tail_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_139_; 
v_key_114_ = lean_ctor_get(v_x_113_, 0);
v_value_115_ = lean_ctor_get(v_x_113_, 1);
v_tail_116_ = lean_ctor_get(v_x_113_, 2);
v_isSharedCheck_139_ = !lean_is_exclusive(v_x_113_);
if (v_isSharedCheck_139_ == 0)
{
v___x_118_ = v_x_113_;
v_isShared_119_ = v_isSharedCheck_139_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_tail_116_);
lean_inc(v_value_115_);
lean_inc(v_key_114_);
lean_dec(v_x_113_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_139_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_120_; uint64_t v___x_121_; uint64_t v___x_122_; uint64_t v___x_123_; uint64_t v_fold_124_; uint64_t v___x_125_; uint64_t v___x_126_; uint64_t v___x_127_; size_t v___x_128_; size_t v___x_129_; size_t v___x_130_; size_t v___x_131_; size_t v___x_132_; lean_object* v___x_133_; lean_object* v___x_135_; 
v___x_120_ = lean_array_get_size(v_x_112_);
v___x_121_ = lean_string_hash(v_key_114_);
v___x_122_ = 32ULL;
v___x_123_ = lean_uint64_shift_right(v___x_121_, v___x_122_);
v_fold_124_ = lean_uint64_xor(v___x_121_, v___x_123_);
v___x_125_ = 16ULL;
v___x_126_ = lean_uint64_shift_right(v_fold_124_, v___x_125_);
v___x_127_ = lean_uint64_xor(v_fold_124_, v___x_126_);
v___x_128_ = lean_uint64_to_usize(v___x_127_);
v___x_129_ = lean_usize_of_nat(v___x_120_);
v___x_130_ = ((size_t)1ULL);
v___x_131_ = lean_usize_sub(v___x_129_, v___x_130_);
v___x_132_ = lean_usize_land(v___x_128_, v___x_131_);
v___x_133_ = lean_array_uget_borrowed(v_x_112_, v___x_132_);
lean_inc(v___x_133_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 2, v___x_133_);
v___x_135_ = v___x_118_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_key_114_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v_value_115_);
lean_ctor_set(v_reuseFailAlloc_138_, 2, v___x_133_);
v___x_135_ = v_reuseFailAlloc_138_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
lean_object* v___x_136_; 
v___x_136_ = lean_array_uset(v_x_112_, v___x_132_, v___x_135_);
v_x_112_ = v___x_136_;
v_x_113_ = v_tail_116_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1_spec__2___redArg(lean_object* v_i_140_, lean_object* v_source_141_, lean_object* v_target_142_){
_start:
{
lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_143_ = lean_array_get_size(v_source_141_);
v___x_144_ = lean_nat_dec_lt(v_i_140_, v___x_143_);
if (v___x_144_ == 0)
{
lean_dec_ref(v_source_141_);
lean_dec(v_i_140_);
return v_target_142_;
}
else
{
lean_object* v_es_145_; lean_object* v___x_146_; lean_object* v_source_147_; lean_object* v_target_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_es_145_ = lean_array_fget(v_source_141_, v_i_140_);
v___x_146_ = lean_box(0);
v_source_147_ = lean_array_fset(v_source_141_, v_i_140_, v___x_146_);
v_target_148_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1_spec__2_spec__3___redArg(v_target_142_, v_es_145_);
v___x_149_ = lean_unsigned_to_nat(1u);
v___x_150_ = lean_nat_add(v_i_140_, v___x_149_);
lean_dec(v_i_140_);
v_i_140_ = v___x_150_;
v_source_141_ = v_source_147_;
v_target_142_ = v_target_148_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1___redArg(lean_object* v_data_152_){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v_nbuckets_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_153_ = lean_array_get_size(v_data_152_);
v___x_154_ = lean_unsigned_to_nat(2u);
v_nbuckets_155_ = lean_nat_mul(v___x_153_, v___x_154_);
v___x_156_ = lean_unsigned_to_nat(0u);
v___x_157_ = lean_box(0);
v___x_158_ = lean_mk_array(v_nbuckets_155_, v___x_157_);
v___x_159_ = lean_array_propagate_mark(v_data_152_, v___x_158_);
v___x_160_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1_spec__2___redArg(v___x_156_, v_data_152_, v___x_159_);
return v___x_160_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0___redArg(lean_object* v_a_161_, lean_object* v_x_162_){
_start:
{
if (lean_obj_tag(v_x_162_) == 0)
{
uint8_t v___x_163_; 
v___x_163_ = 0;
return v___x_163_;
}
else
{
lean_object* v_key_164_; lean_object* v_tail_165_; uint8_t v___x_166_; 
v_key_164_ = lean_ctor_get(v_x_162_, 0);
v_tail_165_ = lean_ctor_get(v_x_162_, 2);
v___x_166_ = lean_string_dec_eq(v_key_164_, v_a_161_);
if (v___x_166_ == 0)
{
v_x_162_ = v_tail_165_;
goto _start;
}
else
{
return v___x_166_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0___redArg___boxed(lean_object* v_a_168_, lean_object* v_x_169_){
_start:
{
uint8_t v_res_170_; lean_object* v_r_171_; 
v_res_170_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0___redArg(v_a_168_, v_x_169_);
lean_dec(v_x_169_);
lean_dec_ref(v_a_168_);
v_r_171_ = lean_box(v_res_170_);
return v_r_171_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0___redArg(lean_object* v_m_172_, lean_object* v_a_173_, lean_object* v_b_174_){
_start:
{
lean_object* v_size_175_; lean_object* v_buckets_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_219_; 
v_size_175_ = lean_ctor_get(v_m_172_, 0);
v_buckets_176_ = lean_ctor_get(v_m_172_, 1);
v_isSharedCheck_219_ = !lean_is_exclusive(v_m_172_);
if (v_isSharedCheck_219_ == 0)
{
v___x_178_ = v_m_172_;
v_isShared_179_ = v_isSharedCheck_219_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_buckets_176_);
lean_inc(v_size_175_);
lean_dec(v_m_172_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_219_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_180_; uint64_t v___x_181_; uint64_t v___x_182_; uint64_t v___x_183_; uint64_t v_fold_184_; uint64_t v___x_185_; uint64_t v___x_186_; uint64_t v___x_187_; size_t v___x_188_; size_t v___x_189_; size_t v___x_190_; size_t v___x_191_; size_t v___x_192_; lean_object* v_bkt_193_; uint8_t v___x_194_; 
v___x_180_ = lean_array_get_size(v_buckets_176_);
v___x_181_ = lean_string_hash(v_a_173_);
v___x_182_ = 32ULL;
v___x_183_ = lean_uint64_shift_right(v___x_181_, v___x_182_);
v_fold_184_ = lean_uint64_xor(v___x_181_, v___x_183_);
v___x_185_ = 16ULL;
v___x_186_ = lean_uint64_shift_right(v_fold_184_, v___x_185_);
v___x_187_ = lean_uint64_xor(v_fold_184_, v___x_186_);
v___x_188_ = lean_uint64_to_usize(v___x_187_);
v___x_189_ = lean_usize_of_nat(v___x_180_);
v___x_190_ = ((size_t)1ULL);
v___x_191_ = lean_usize_sub(v___x_189_, v___x_190_);
v___x_192_ = lean_usize_land(v___x_188_, v___x_191_);
v_bkt_193_ = lean_array_uget_borrowed(v_buckets_176_, v___x_192_);
v___x_194_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0___redArg(v_a_173_, v_bkt_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; lean_object* v_size_x27_196_; lean_object* v___x_197_; lean_object* v_buckets_x27_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; uint8_t v___x_204_; 
v___x_195_ = lean_unsigned_to_nat(1u);
v_size_x27_196_ = lean_nat_add(v_size_175_, v___x_195_);
lean_dec(v_size_175_);
lean_inc(v_bkt_193_);
v___x_197_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_197_, 0, v_a_173_);
lean_ctor_set(v___x_197_, 1, v_b_174_);
lean_ctor_set(v___x_197_, 2, v_bkt_193_);
v_buckets_x27_198_ = lean_array_uset(v_buckets_176_, v___x_192_, v___x_197_);
v___x_199_ = lean_unsigned_to_nat(4u);
v___x_200_ = lean_nat_mul(v_size_x27_196_, v___x_199_);
v___x_201_ = lean_unsigned_to_nat(3u);
v___x_202_ = lean_nat_div(v___x_200_, v___x_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_array_get_size(v_buckets_x27_198_);
v___x_204_ = lean_nat_dec_le(v___x_202_, v___x_203_);
lean_dec(v___x_202_);
if (v___x_204_ == 0)
{
lean_object* v_val_205_; lean_object* v___x_207_; 
v_val_205_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1___redArg(v_buckets_x27_198_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v_val_205_);
lean_ctor_set(v___x_178_, 0, v_size_x27_196_);
v___x_207_ = v___x_178_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_size_x27_196_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_val_205_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
else
{
lean_object* v___x_210_; 
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v_buckets_x27_198_);
lean_ctor_set(v___x_178_, 0, v_size_x27_196_);
v___x_210_ = v___x_178_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_size_x27_196_);
lean_ctor_set(v_reuseFailAlloc_211_, 1, v_buckets_x27_198_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
else
{
lean_object* v___x_212_; lean_object* v_buckets_x27_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_217_; 
lean_inc(v_bkt_193_);
v___x_212_ = lean_box(0);
v_buckets_x27_213_ = lean_array_uset(v_buckets_176_, v___x_192_, v___x_212_);
v___x_214_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__2___redArg(v_a_173_, v_b_174_, v_bkt_193_);
v___x_215_ = lean_array_uset(v_buckets_x27_213_, v___x_192_, v___x_214_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v___x_215_);
v___x_217_ = v___x_178_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_size_175_);
lean_ctor_set(v_reuseFailAlloc_218_, 1, v___x_215_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_Table_write(lean_object* v_t_220_, lean_object* v_key_221_, lean_object* v_value_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0___redArg(v_t_220_, v_key_221_, v_value_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0(lean_object* v_00_u03b2_224_, lean_object* v_m_225_, lean_object* v_a_226_, lean_object* v_b_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0___redArg(v_m_225_, v_a_226_, v_b_227_);
return v___x_228_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0(lean_object* v_00_u03b2_229_, lean_object* v_a_230_, lean_object* v_x_231_){
_start:
{
uint8_t v___x_232_; 
v___x_232_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0___redArg(v_a_230_, v_x_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0___boxed(lean_object* v_00_u03b2_233_, lean_object* v_a_234_, lean_object* v_x_235_){
_start:
{
uint8_t v_res_236_; lean_object* v_r_237_; 
v_res_236_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0(v_00_u03b2_233_, v_a_234_, v_x_235_);
lean_dec(v_x_235_);
lean_dec_ref(v_a_234_);
v_r_237_ = lean_box(v_res_236_);
return v_r_237_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1(lean_object* v_00_u03b2_238_, lean_object* v_data_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1___redArg(v_data_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__2(lean_object* v_00_u03b2_241_, lean_object* v_a_242_, lean_object* v_b_243_, lean_object* v_x_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__2___redArg(v_a_242_, v_b_243_, v_x_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_246_, lean_object* v_i_247_, lean_object* v_source_248_, lean_object* v_target_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1_spec__2___redArg(v_i_247_, v_source_248_, v_target_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_251_, lean_object* v_x_252_, lean_object* v_x_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__1_spec__2_spec__3___redArg(v_x_252_, v_x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0___redArg(lean_object* v_a_255_, lean_object* v_x_256_){
_start:
{
if (lean_obj_tag(v_x_256_) == 0)
{
return v_x_256_;
}
else
{
lean_object* v_key_257_; lean_object* v_value_258_; lean_object* v_tail_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_268_; 
v_key_257_ = lean_ctor_get(v_x_256_, 0);
v_value_258_ = lean_ctor_get(v_x_256_, 1);
v_tail_259_ = lean_ctor_get(v_x_256_, 2);
v_isSharedCheck_268_ = !lean_is_exclusive(v_x_256_);
if (v_isSharedCheck_268_ == 0)
{
v___x_261_ = v_x_256_;
v_isShared_262_ = v_isSharedCheck_268_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_tail_259_);
lean_inc(v_value_258_);
lean_inc(v_key_257_);
lean_dec(v_x_256_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_268_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
uint8_t v___x_263_; 
v___x_263_ = lean_string_dec_eq(v_key_257_, v_a_255_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; lean_object* v___x_266_; 
v___x_264_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0___redArg(v_a_255_, v_tail_259_);
if (v_isShared_262_ == 0)
{
lean_ctor_set(v___x_261_, 2, v___x_264_);
v___x_266_ = v___x_261_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_key_257_);
lean_ctor_set(v_reuseFailAlloc_267_, 1, v_value_258_);
lean_ctor_set(v_reuseFailAlloc_267_, 2, v___x_264_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
else
{
lean_del_object(v___x_261_);
lean_dec(v_value_258_);
lean_dec(v_key_257_);
return v_tail_259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0___redArg___boxed(lean_object* v_a_269_, lean_object* v_x_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0___redArg(v_a_269_, v_x_270_);
lean_dec_ref(v_a_269_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0___redArg(lean_object* v_m_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_size_274_; lean_object* v_buckets_275_; lean_object* v___x_276_; uint64_t v___x_277_; uint64_t v___x_278_; uint64_t v___x_279_; uint64_t v_fold_280_; uint64_t v___x_281_; uint64_t v___x_282_; uint64_t v___x_283_; size_t v___x_284_; size_t v___x_285_; size_t v___x_286_; size_t v___x_287_; size_t v___x_288_; lean_object* v_bkt_289_; uint8_t v___x_290_; 
v_size_274_ = lean_ctor_get(v_m_272_, 0);
v_buckets_275_ = lean_ctor_get(v_m_272_, 1);
v___x_276_ = lean_array_get_size(v_buckets_275_);
v___x_277_ = lean_string_hash(v_a_273_);
v___x_278_ = 32ULL;
v___x_279_ = lean_uint64_shift_right(v___x_277_, v___x_278_);
v_fold_280_ = lean_uint64_xor(v___x_277_, v___x_279_);
v___x_281_ = 16ULL;
v___x_282_ = lean_uint64_shift_right(v_fold_280_, v___x_281_);
v___x_283_ = lean_uint64_xor(v_fold_280_, v___x_282_);
v___x_284_ = lean_uint64_to_usize(v___x_283_);
v___x_285_ = lean_usize_of_nat(v___x_276_);
v___x_286_ = ((size_t)1ULL);
v___x_287_ = lean_usize_sub(v___x_285_, v___x_286_);
v___x_288_ = lean_usize_land(v___x_284_, v___x_287_);
v_bkt_289_ = lean_array_uget_borrowed(v_buckets_275_, v___x_288_);
v___x_290_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0_spec__0___redArg(v_a_273_, v_bkt_289_);
if (v___x_290_ == 0)
{
return v_m_272_;
}
else
{
lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_303_; 
lean_inc(v_bkt_289_);
lean_inc_ref(v_buckets_275_);
lean_inc(v_size_274_);
v_isSharedCheck_303_ = !lean_is_exclusive(v_m_272_);
if (v_isSharedCheck_303_ == 0)
{
lean_object* v_unused_304_; lean_object* v_unused_305_; 
v_unused_304_ = lean_ctor_get(v_m_272_, 1);
lean_dec(v_unused_304_);
v_unused_305_ = lean_ctor_get(v_m_272_, 0);
lean_dec(v_unused_305_);
v___x_292_ = v_m_272_;
v_isShared_293_ = v_isSharedCheck_303_;
goto v_resetjp_291_;
}
else
{
lean_dec(v_m_272_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_303_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_294_; lean_object* v_buckets_x27_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_294_ = lean_box(0);
v_buckets_x27_295_ = lean_array_uset(v_buckets_275_, v___x_288_, v___x_294_);
v___x_296_ = lean_unsigned_to_nat(1u);
v___x_297_ = lean_nat_sub(v_size_274_, v___x_296_);
lean_dec(v_size_274_);
v___x_298_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0___redArg(v_a_273_, v_bkt_289_);
v___x_299_ = lean_array_uset(v_buckets_x27_295_, v___x_288_, v___x_298_);
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 1, v___x_299_);
lean_ctor_set(v___x_292_, 0, v___x_297_);
v___x_301_ = v___x_292_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v___x_297_);
lean_ctor_set(v_reuseFailAlloc_302_, 1, v___x_299_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0___redArg___boxed(lean_object* v_m_306_, lean_object* v_a_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0___redArg(v_m_306_, v_a_307_);
lean_dec_ref(v_a_307_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_Table_remove(lean_object* v_t_309_, lean_object* v_key_310_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0___redArg(v_t_309_, v_key_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_Table_remove___boxed(lean_object* v_t_312_, lean_object* v_key_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lasm_KV_Table_remove(v_t_312_, v_key_313_);
lean_dec_ref(v_key_313_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0(lean_object* v_00_u03b2_315_, lean_object* v_m_316_, lean_object* v_a_317_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0___redArg(v_m_316_, v_a_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0___boxed(lean_object* v_00_u03b2_319_, lean_object* v_m_320_, lean_object* v_a_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0(v_00_u03b2_319_, v_m_320_, v_a_321_);
lean_dec_ref(v_a_321_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0(lean_object* v_00_u03b2_323_, lean_object* v_a_324_, lean_object* v_x_325_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0___redArg(v_a_324_, v_x_325_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0___boxed(lean_object* v_00_u03b2_327_, lean_object* v_a_328_, lean_object* v_x_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0_spec__0(v_00_u03b2_327_, v_a_328_, v_x_329_);
lean_dec_ref(v_a_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__0(lean_object* v_k_331_, lean_object* v_x_332_){
_start:
{
if (lean_obj_tag(v_x_332_) == 0)
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_342_; 
v_a_334_ = lean_ctor_get(v_x_332_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v_x_332_);
if (v_isSharedCheck_342_ == 0)
{
v___x_336_ = v_x_332_;
v_isShared_337_ = v_isSharedCheck_342_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v_x_332_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_342_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_339_; 
if (v_isShared_337_ == 0)
{
v___x_339_ = v___x_336_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_334_);
v___x_339_ = v_reuseFailAlloc_341_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
lean_object* v___x_340_; 
v___x_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
return v___x_340_;
}
}
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_352_; 
v_a_343_ = lean_ctor_get(v_x_332_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v_x_332_);
if (v_isSharedCheck_352_ == 0)
{
v___x_345_ = v_x_332_;
v_isShared_346_ = v_isSharedCheck_352_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v_x_332_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_352_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_347_; lean_object* v___x_349_; 
v___x_347_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_KV_Table_read_spec__0___redArg(v_a_343_, v_k_331_);
lean_dec(v_a_343_);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 0, v___x_347_);
v___x_349_ = v___x_345_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v___x_347_);
v___x_349_ = v_reuseFailAlloc_351_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
lean_object* v___x_350_; 
v___x_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
return v___x_350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__0___boxed(lean_object* v_k_353_, lean_object* v_x_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lasm_KV_memory___lam__0(v_k_353_, v_x_354_);
lean_dec_ref(v_k_353_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__1(lean_object* v_val_357_, lean_object* v___x_358_, lean_object* v_k_359_){
_start:
{
lean_object* v___f_361_; uint8_t v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v___f_361_ = lean_alloc_closure((void*)(l_Lasm_KV_memory___lam__0___boxed), 3, 1);
lean_closure_set(v___f_361_, 0, v_k_359_);
v___x_362_ = 0;
v___x_363_ = lean_st_ref_get(v_val_357_);
v___x_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
v___x_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
v___x_366_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_358_, v___x_362_, v___x_365_, v___f_361_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__1___boxed(lean_object* v_val_367_, lean_object* v___x_368_, lean_object* v_k_369_, lean_object* v___y_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lasm_KV_memory___lam__1(v_val_367_, v___x_368_, v_k_369_);
lean_dec(v_val_367_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__2(lean_object* v_val_372_, lean_object* v_k_373_, lean_object* v_v_374_){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_376_ = lean_st_ref_take(v_val_372_);
v___x_377_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_KV_Table_write_spec__0___redArg(v___x_376_, v_k_373_, v_v_374_);
v___x_378_ = lean_st_ref_put(v_val_372_, v___x_377_);
v___x_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
v___x_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__2___boxed(lean_object* v_val_381_, lean_object* v_k_382_, lean_object* v_v_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lasm_KV_memory___lam__2(v_val_381_, v_k_382_, v_v_383_);
lean_dec(v_val_381_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__3(lean_object* v_val_386_, lean_object* v_k_387_){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_389_ = lean_st_ref_take(v_val_386_);
v___x_390_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lasm_KV_Table_remove_spec__0___redArg(v___x_389_, v_k_387_);
v___x_391_ = lean_st_ref_put(v_val_386_, v___x_390_);
v___x_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
v___x_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___lam__3___boxed(lean_object* v_val_394_, lean_object* v_k_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lasm_KV_memory___lam__3(v_val_394_, v_k_395_);
lean_dec_ref(v_k_395_);
lean_dec(v_val_394_);
return v_res_397_;
}
}
static lean_object* _init_l_Lasm_KV_memory___closed__0(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_398_ = lean_box(0);
v___x_399_ = lean_unsigned_to_nat(16u);
v___x_400_ = lean_mk_array(v___x_399_, v___x_398_);
return v___x_400_;
}
}
static lean_object* _init_l_Lasm_KV_memory___closed__1(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_401_ = lean_obj_once(&l_Lasm_KV_memory___closed__0, &l_Lasm_KV_memory___closed__0_once, _init_l_Lasm_KV_memory___closed__0);
v___x_402_ = lean_unsigned_to_nat(0u);
v___x_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
lean_ctor_set(v___x_403_, 1, v___x_401_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory(){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___f_409_; lean_object* v___f_410_; lean_object* v___f_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_406_ = lean_unsigned_to_nat(0u);
v___x_407_ = lean_obj_once(&l_Lasm_KV_memory___closed__1, &l_Lasm_KV_memory___closed__1_once, _init_l_Lasm_KV_memory___closed__1);
v___x_408_ = lean_st_mk_ref(v___x_407_);
lean_inc_n(v___x_408_, 2);
v___f_409_ = lean_alloc_closure((void*)(l_Lasm_KV_memory___lam__1___boxed), 4, 2);
lean_closure_set(v___f_409_, 0, v___x_408_);
lean_closure_set(v___f_409_, 1, v___x_406_);
v___f_410_ = lean_alloc_closure((void*)(l_Lasm_KV_memory___lam__2___boxed), 4, 1);
lean_closure_set(v___f_410_, 0, v___x_408_);
v___f_411_ = lean_alloc_closure((void*)(l_Lasm_KV_memory___lam__3___boxed), 3, 1);
lean_closure_set(v___f_411_, 0, v___x_408_);
v___x_412_ = ((lean_object*)(l_Lasm_KV_memory___closed__2));
v___x_413_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
lean_ctor_set(v___x_413_, 1, v___f_409_);
lean_ctor_set(v___x_413_, 2, v___f_410_);
lean_ctor_set(v___x_413_, 3, v___f_411_);
v___x_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_memory___boxed(lean_object* v_a_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lasm_KV_memory();
return v_res_416_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0(void){
_start:
{
uint8_t v___x_417_; uint64_t v___x_418_; 
v___x_417_ = 0;
v___x_418_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(lean_object* v_o_420_, lean_object* v_key_421_){
_start:
{
uint32_t v___x_423_; uint32_t v___x_424_; uint64_t v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_423_ = 203;
v___x_424_ = lasm_js_value_handle(v_o_420_);
v___x_425_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0);
v___x_426_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_426_, 0, v_key_421_);
v___x_427_ = l_Lasm_JS_Wire_encode(v___x_426_);
lean_dec_ref_known(v___x_426_, 1);
v___x_428_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1));
v___x_429_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_429_, 0, v_o_420_);
lean_ctor_set(v___x_429_, 1, v___x_428_);
v___x_430_ = lasm_js_call(v___x_423_, v___x_424_, v___x_425_, v___x_427_, v___x_429_);
lean_dec_ref_known(v___x_429_, 2);
lean_dec_ref(v___x_427_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v_a_431_; lean_object* v___x_432_; 
v_a_431_ = lean_ctor_get(v___x_430_, 0);
lean_inc(v_a_431_);
lean_dec_ref_known(v___x_430_, 1);
v___x_432_ = l_Lasm_JS_Wire_decode(v_a_431_);
lean_dec(v_a_431_);
return v___x_432_;
}
else
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
v_a_433_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_430_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_430_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___boxed(lean_object* v_o_441_, lean_object* v_key_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_o_441_, v_key_442_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_binding(lean_object* v_name_445_){
_start:
{
lean_object* v_found_451_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = l_Lasm_Fetch_platformEnv;
v___x_456_ = lean_st_ref_get(v___x_455_);
switch(lean_obj_tag(v___x_456_))
{
case 9:
{
lean_object* v_value_457_; lean_object* v___x_458_; 
v_value_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_value_457_);
lean_dec_ref_known(v___x_456_, 2);
v___x_458_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_value_457_, v_name_445_);
if (lean_obj_tag(v___x_458_) == 0)
{
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
v_found_451_ = v_a_459_;
goto v___jp_450_;
}
else
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
v_a_460_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v___x_458_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_458_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
lean_ctor_set_tag(v___x_462_, 1);
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_a_460_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_458_, 1);
goto v___jp_447_;
}
}
case 8:
{
lean_object* v___x_468_; 
v___x_468_ = l_Lasm_JS_Data_field(v___x_456_, v_name_445_);
lean_dec_ref(v_name_445_);
lean_dec_ref_known(v___x_456_, 1);
v_found_451_ = v___x_468_;
goto v___jp_450_;
}
default: 
{
lean_dec(v___x_456_);
lean_dec_ref(v_name_445_);
goto v___jp_447_;
}
}
v___jp_447_:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = lean_box(0);
v___x_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
return v___x_449_;
}
v___jp_450_:
{
if (lean_obj_tag(v_found_451_) == 9)
{
lean_object* v_value_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v_value_452_ = lean_ctor_get(v_found_451_, 0);
lean_inc(v_value_452_);
lean_dec_ref_known(v_found_451_, 2);
v___x_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_453_, 0, v_value_452_);
v___x_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
return v___x_454_;
}
else
{
lean_dec(v_found_451_);
goto v___jp_447_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_binding___boxed(lean_object* v_name_469_, lean_object* v_a_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lasm_KV_binding(v_name_469_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0(lean_object* v_x_472_){
_start:
{
if (lean_obj_tag(v_x_472_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_482_; 
v_a_474_ = lean_ctor_get(v_x_472_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v_x_472_);
if (v_isSharedCheck_482_ == 0)
{
v___x_476_ = v_x_472_;
v_isShared_477_ = v_isSharedCheck_482_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v_x_472_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_482_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_481_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
lean_object* v___x_480_; 
v___x_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
return v___x_480_;
}
}
}
else
{
lean_object* v___x_483_; 
lean_dec_ref_known(v_x_472_, 1);
v___x_483_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__1___closed__1));
return v___x_483_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0___boxed(lean_object* v_x_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lasm_KV_workers___lam__0(v_x_484_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2(lean_object* v_x_487_){
_start:
{
if (lean_obj_tag(v_x_487_) == 0)
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_497_; 
v_a_489_ = lean_ctor_get(v_x_487_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v_x_487_);
if (v_isSharedCheck_497_ == 0)
{
v___x_491_ = v_x_487_;
v_isShared_492_ = v_isSharedCheck_497_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v_x_487_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_497_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_a_489_);
v___x_494_ = v_reuseFailAlloc_496_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
lean_object* v___x_495_; 
v___x_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
return v___x_495_;
}
}
}
else
{
lean_object* v_a_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_515_; 
v_a_498_ = lean_ctor_get(v_x_487_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v_x_487_);
if (v_isSharedCheck_515_ == 0)
{
v___x_500_ = v_x_487_;
v_isShared_501_ = v_isSharedCheck_515_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_a_498_);
lean_dec(v_x_487_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_515_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
if (lean_obj_tag(v_a_498_) == 4)
{
lean_object* v_s_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_513_; 
v_s_502_ = lean_ctor_get(v_a_498_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v_a_498_);
if (v_isSharedCheck_513_ == 0)
{
v___x_504_ = v_a_498_;
v_isShared_505_ = v_isSharedCheck_513_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_s_502_);
lean_dec(v_a_498_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_513_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_507_; 
if (v_isShared_505_ == 0)
{
lean_ctor_set_tag(v___x_504_, 1);
v___x_507_ = v___x_504_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_s_502_);
v___x_507_ = v_reuseFailAlloc_512_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
lean_object* v___x_509_; 
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 0, v___x_507_);
v___x_509_ = v___x_500_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_507_);
v___x_509_ = v_reuseFailAlloc_511_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
lean_object* v___x_510_; 
v___x_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
return v___x_510_;
}
}
}
}
else
{
lean_object* v___x_514_; 
lean_del_object(v___x_500_);
lean_dec(v_a_498_);
v___x_514_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__0___closed__1));
return v___x_514_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2___boxed(lean_object* v_x_516_, lean_object* v___y_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lasm_KV_workers___lam__2(v_x_516_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1(lean_object* v_name_520_, lean_object* v_____do__lift_521_){
_start:
{
if (lean_obj_tag(v_____do__lift_521_) == 0)
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_523_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_524_ = lean_string_append(v___x_523_, v_name_520_);
v___x_525_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
v___x_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
return v___x_526_;
}
else
{
lean_object* v_val_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
v_val_527_ = lean_ctor_get(v_____do__lift_521_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v_____do__lift_521_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v_____do__lift_521_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_val_527_);
lean_dec(v_____do__lift_521_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
lean_ctor_set_tag(v___x_529_, 0);
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_val_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1___boxed(lean_object* v_name_535_, lean_object* v_____do__lift_536_, lean_object* v___y_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lasm_KV_workers___lam__1(v_name_535_, v_____do__lift_536_);
lean_dec_ref(v_name_535_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3(lean_object* v_k_540_, lean_object* v___f_541_, lean_object* v_x_542_){
_start:
{
if (lean_obj_tag(v_x_542_) == 0)
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_552_; 
lean_dec_ref(v___f_541_);
lean_dec_ref(v_k_540_);
v_a_544_ = lean_ctor_get(v_x_542_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v_x_542_);
if (v_isSharedCheck_552_ == 0)
{
v___x_546_ = v_x_542_;
v_isShared_547_ = v_isSharedCheck_552_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v_x_542_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_552_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_a_544_);
v___x_549_ = v_reuseFailAlloc_551_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
lean_object* v___x_550_; 
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
return v___x_550_;
}
}
}
else
{
lean_object* v_a_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; uint8_t v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v_a_553_ = lean_ctor_get(v_x_542_, 0);
lean_inc(v_a_553_);
lean_dec_ref_known(v_x_542_, 1);
v___x_554_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_555_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_555_, 0, v_k_540_);
v___x_556_ = lean_unsigned_to_nat(1u);
v___x_557_ = lean_mk_empty_array_with_capacity(v___x_556_);
v___x_558_ = lean_array_push(v___x_557_, v___x_555_);
v___x_559_ = lean_unsigned_to_nat(0u);
v___x_560_ = 0;
v___x_561_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_553_, v___x_554_, v___x_558_);
v___x_562_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_559_, v___x_560_, v___x_561_, v___f_541_);
return v___x_562_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3___boxed(lean_object* v_k_563_, lean_object* v___f_564_, lean_object* v_x_565_, lean_object* v___y_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lasm_KV_workers___lam__3(v_k_563_, v___f_564_, v_x_565_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4(lean_object* v___f_568_, lean_object* v_name_569_, lean_object* v___f_570_, lean_object* v_k_571_){
_start:
{
lean_object* v___f_573_; lean_object* v___x_574_; uint8_t v___x_575_; lean_object* v_val_577_; lean_object* v_a_581_; lean_object* v___x_583_; 
v___f_573_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__3___boxed), 4, 2);
lean_closure_set(v___f_573_, 0, v_k_571_);
lean_closure_set(v___f_573_, 1, v___f_568_);
v___x_574_ = lean_unsigned_to_nat(0u);
v___x_575_ = 0;
v___x_583_ = l_Lasm_KV_binding(v_name_569_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_585_; 
v_a_584_ = lean_ctor_get(v___x_583_, 0);
lean_inc(v_a_584_);
lean_dec_ref_known(v___x_583_, 1);
v___x_585_ = lean_apply_2(v___f_570_, v_a_584_, lean_box(0));
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_585_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_585_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_591_; 
if (v_isShared_589_ == 0)
{
lean_ctor_set_tag(v___x_588_, 1);
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
v_val_577_ = v___x_591_;
goto v___jp_576_;
}
}
}
else
{
lean_object* v_a_594_; 
v_a_594_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_594_);
lean_dec_ref_known(v___x_585_, 1);
v_a_581_ = v_a_594_;
goto v___jp_580_;
}
}
else
{
lean_object* v_a_595_; 
lean_dec_ref(v___f_570_);
v_a_595_ = lean_ctor_get(v___x_583_, 0);
lean_inc(v_a_595_);
lean_dec_ref_known(v___x_583_, 1);
v_a_581_ = v_a_595_;
goto v___jp_580_;
}
v___jp_576_:
{
lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_578_, 0, v_val_577_);
v___x_579_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_574_, v___x_575_, v___x_578_, v___f_573_);
return v___x_579_;
}
v___jp_580_:
{
lean_object* v___x_582_; 
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v_a_581_);
v_val_577_ = v___x_582_;
goto v___jp_576_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4___boxed(lean_object* v___f_596_, lean_object* v_name_597_, lean_object* v___f_598_, lean_object* v_k_599_, lean_object* v___y_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Lasm_KV_workers___lam__4(v___f_596_, v_name_597_, v___f_598_, v_k_599_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5(lean_object* v_k_603_, lean_object* v_v_604_, lean_object* v___f_605_, lean_object* v_x_606_){
_start:
{
if (lean_obj_tag(v_x_606_) == 0)
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_616_; 
lean_dec_ref(v___f_605_);
lean_dec_ref(v_v_604_);
lean_dec_ref(v_k_603_);
v_a_608_ = lean_ctor_get(v_x_606_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v_x_606_);
if (v_isSharedCheck_616_ == 0)
{
v___x_610_ = v_x_606_;
v_isShared_611_ = v_isSharedCheck_616_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v_x_606_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_616_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_608_);
v___x_613_ = v_reuseFailAlloc_615_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
lean_object* v___x_614_; 
v___x_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
return v___x_614_;
}
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; uint8_t v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v_a_617_ = lean_ctor_get(v_x_606_, 0);
lean_inc(v_a_617_);
lean_dec_ref_known(v_x_606_, 1);
v___x_618_ = ((lean_object*)(l_Lasm_KV_workers___lam__5___closed__0));
v___x_619_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_619_, 0, v_k_603_);
v___x_620_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_620_, 0, v_v_604_);
v___x_621_ = lean_unsigned_to_nat(2u);
v___x_622_ = lean_mk_empty_array_with_capacity(v___x_621_);
v___x_623_ = lean_array_push(v___x_622_, v___x_619_);
v___x_624_ = lean_array_push(v___x_623_, v___x_620_);
v___x_625_ = lean_unsigned_to_nat(0u);
v___x_626_ = 0;
v___x_627_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_617_, v___x_618_, v___x_624_);
v___x_628_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_625_, v___x_626_, v___x_627_, v___f_605_);
return v___x_628_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5___boxed(lean_object* v_k_629_, lean_object* v_v_630_, lean_object* v___f_631_, lean_object* v_x_632_, lean_object* v___y_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Lasm_KV_workers___lam__5(v_k_629_, v_v_630_, v___f_631_, v_x_632_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6(lean_object* v___f_635_, lean_object* v_name_636_, lean_object* v___f_637_, lean_object* v_k_638_, lean_object* v_v_639_){
_start:
{
lean_object* v___f_641_; lean_object* v___x_642_; uint8_t v___x_643_; lean_object* v_val_645_; lean_object* v_a_649_; lean_object* v___x_651_; 
v___f_641_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__5___boxed), 5, 3);
lean_closure_set(v___f_641_, 0, v_k_638_);
lean_closure_set(v___f_641_, 1, v_v_639_);
lean_closure_set(v___f_641_, 2, v___f_635_);
v___x_642_ = lean_unsigned_to_nat(0u);
v___x_643_ = 0;
v___x_651_ = l_Lasm_KV_binding(v_name_636_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_653_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_a_652_);
lean_dec_ref_known(v___x_651_, 1);
v___x_653_ = lean_apply_2(v___f_637_, v_a_652_, lean_box(0));
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
v_a_654_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_653_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_653_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
lean_ctor_set_tag(v___x_656_, 1);
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
v_val_645_ = v___x_659_;
goto v___jp_644_;
}
}
}
else
{
lean_object* v_a_662_; 
v_a_662_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_a_662_);
lean_dec_ref_known(v___x_653_, 1);
v_a_649_ = v_a_662_;
goto v___jp_648_;
}
}
else
{
lean_object* v_a_663_; 
lean_dec_ref(v___f_637_);
v_a_663_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_a_663_);
lean_dec_ref_known(v___x_651_, 1);
v_a_649_ = v_a_663_;
goto v___jp_648_;
}
v___jp_644_:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_646_, 0, v_val_645_);
v___x_647_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_642_, v___x_643_, v___x_646_, v___f_641_);
return v___x_647_;
}
v___jp_648_:
{
lean_object* v___x_650_; 
v___x_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_650_, 0, v_a_649_);
v_val_645_ = v___x_650_;
goto v___jp_644_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6___boxed(lean_object* v___f_664_, lean_object* v_name_665_, lean_object* v___f_666_, lean_object* v_k_667_, lean_object* v_v_668_, lean_object* v___y_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lasm_KV_workers___lam__6(v___f_664_, v_name_665_, v___f_666_, v_k_667_, v_v_668_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7(lean_object* v_k_672_, lean_object* v___f_673_, lean_object* v_x_674_){
_start:
{
if (lean_obj_tag(v_x_674_) == 0)
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_684_; 
lean_dec_ref(v___f_673_);
lean_dec_ref(v_k_672_);
v_a_676_ = lean_ctor_get(v_x_674_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v_x_674_);
if (v_isSharedCheck_684_ == 0)
{
v___x_678_ = v_x_674_;
v_isShared_679_ = v_isSharedCheck_684_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v_x_674_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_684_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_676_);
v___x_681_ = v_reuseFailAlloc_683_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_682_; 
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
return v___x_682_;
}
}
}
else
{
lean_object* v_a_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; uint8_t v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v_a_685_ = lean_ctor_get(v_x_674_, 0);
lean_inc(v_a_685_);
lean_dec_ref_known(v_x_674_, 1);
v___x_686_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_687_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_687_, 0, v_k_672_);
v___x_688_ = lean_unsigned_to_nat(1u);
v___x_689_ = lean_mk_empty_array_with_capacity(v___x_688_);
v___x_690_ = lean_array_push(v___x_689_, v___x_687_);
v___x_691_ = lean_unsigned_to_nat(0u);
v___x_692_ = 0;
v___x_693_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_685_, v___x_686_, v___x_690_);
v___x_694_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_691_, v___x_692_, v___x_693_, v___f_673_);
return v___x_694_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7___boxed(lean_object* v_k_695_, lean_object* v___f_696_, lean_object* v_x_697_, lean_object* v___y_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lasm_KV_workers___lam__7(v_k_695_, v___f_696_, v_x_697_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8(lean_object* v___f_700_, lean_object* v_name_701_, lean_object* v_k_702_){
_start:
{
lean_object* v___f_704_; lean_object* v___x_705_; uint8_t v___x_706_; lean_object* v_val_708_; lean_object* v_a_712_; lean_object* v___x_714_; 
v___f_704_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__7___boxed), 4, 2);
lean_closure_set(v___f_704_, 0, v_k_702_);
lean_closure_set(v___f_704_, 1, v___f_700_);
v___x_705_ = lean_unsigned_to_nat(0u);
v___x_706_ = 0;
lean_inc_ref(v_name_701_);
v___x_714_ = l_Lasm_KV_binding(v_name_701_);
if (lean_obj_tag(v___x_714_) == 0)
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_732_; 
v_a_715_ = lean_ctor_get(v___x_714_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_714_);
if (v_isSharedCheck_732_ == 0)
{
v___x_717_ = v___x_714_;
v_isShared_718_ = v_isSharedCheck_732_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v___x_714_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_732_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
if (lean_obj_tag(v_a_715_) == 0)
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_722_; 
v___x_719_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_720_ = lean_string_append(v___x_719_, v_name_701_);
lean_dec_ref(v_name_701_);
if (v_isShared_718_ == 0)
{
lean_ctor_set_tag(v___x_717_, 18);
lean_ctor_set(v___x_717_, 0, v___x_720_);
v___x_722_ = v___x_717_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_720_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
v_a_712_ = v___x_722_;
goto v___jp_711_;
}
}
else
{
lean_object* v_val_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
lean_del_object(v___x_717_);
lean_dec_ref(v_name_701_);
v_val_724_ = lean_ctor_get(v_a_715_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v_a_715_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v_a_715_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_val_724_);
lean_dec(v_a_715_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_val_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
v_val_708_ = v___x_729_;
goto v___jp_707_;
}
}
}
}
}
else
{
lean_object* v_a_733_; 
lean_dec_ref(v_name_701_);
v_a_733_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_a_733_);
lean_dec_ref_known(v___x_714_, 1);
v_a_712_ = v_a_733_;
goto v___jp_711_;
}
v___jp_707_:
{
lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_709_, 0, v_val_708_);
v___x_710_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_705_, v___x_706_, v___x_709_, v___f_704_);
return v___x_710_;
}
v___jp_711_:
{
lean_object* v___x_713_; 
v___x_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_713_, 0, v_a_712_);
v_val_708_ = v___x_713_;
goto v___jp_707_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8___boxed(lean_object* v___f_734_, lean_object* v_name_735_, lean_object* v_k_736_, lean_object* v___y_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lasm_KV_workers___lam__8(v___f_734_, v_name_735_, v_k_736_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers(lean_object* v_name_742_){
_start:
{
lean_object* v___f_743_; lean_object* v___f_744_; lean_object* v___f_745_; lean_object* v_delete_746_; lean_object* v_put_747_; lean_object* v_get_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___f_743_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_744_ = ((lean_object*)(l_Lasm_KV_workers___closed__1));
lean_inc_ref_n(v_name_742_, 3);
v___f_745_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__1___boxed), 3, 1);
lean_closure_set(v___f_745_, 0, v_name_742_);
lean_inc_ref(v___f_745_);
v_delete_746_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__4___boxed), 5, 3);
lean_closure_set(v_delete_746_, 0, v___f_743_);
lean_closure_set(v_delete_746_, 1, v_name_742_);
lean_closure_set(v_delete_746_, 2, v___f_745_);
v_put_747_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__6___boxed), 6, 3);
lean_closure_set(v_put_747_, 0, v___f_743_);
lean_closure_set(v_put_747_, 1, v_name_742_);
lean_closure_set(v_put_747_, 2, v___f_745_);
v_get_748_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__8___boxed), 4, 2);
lean_closure_set(v_get_748_, 0, v___f_744_);
lean_closure_set(v_get_748_, 1, v_name_742_);
v___x_749_ = ((lean_object*)(l_Lasm_KV_workers___closed__2));
v___x_750_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
lean_ctor_set(v___x_750_, 1, v_get_748_);
lean_ctor_set(v___x_750_, 2, v_put_747_);
lean_ctor_set(v___x_750_, 3, v_delete_746_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3(lean_object* v___f_752_, lean_object* v_x_753_){
_start:
{
if (lean_obj_tag(v_x_753_) == 0)
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_763_; 
lean_dec_ref(v___f_752_);
v_a_755_ = lean_ctor_get(v_x_753_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v_x_753_);
if (v_isSharedCheck_763_ == 0)
{
v___x_757_ = v_x_753_;
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v_x_753_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_762_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_761_; 
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
return v___x_761_;
}
}
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_784_; 
v_a_764_ = lean_ctor_get(v_x_753_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v_x_753_);
if (v_isSharedCheck_784_ == 0)
{
v___x_766_ = v_x_753_;
v_isShared_767_ = v_isSharedCheck_784_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v_x_753_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_784_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_768_; lean_object* v___x_769_; uint8_t v___x_770_; lean_object* v_val_772_; lean_object* v___x_775_; 
v___x_768_ = ((lean_object*)(l_Lasm_KV_deno___lam__3___closed__0));
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = 0;
v___x_775_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_a_764_, v___x_768_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v_a_776_; lean_object* v___x_778_; 
v_a_776_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_a_776_);
lean_dec_ref_known(v___x_775_, 1);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v_a_776_);
v___x_778_ = v___x_766_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_776_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
v_val_772_ = v___x_778_;
goto v___jp_771_;
}
}
else
{
lean_object* v_a_780_; lean_object* v___x_782_; 
v_a_780_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_a_780_);
lean_dec_ref_known(v___x_775_, 1);
if (v_isShared_767_ == 0)
{
lean_ctor_set_tag(v___x_766_, 0);
lean_ctor_set(v___x_766_, 0, v_a_780_);
v___x_782_ = v___x_766_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_780_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
v_val_772_ = v___x_782_;
goto v___jp_771_;
}
}
v___jp_771_:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v_val_772_);
v___x_774_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_769_, v___x_770_, v___x_773_, v___f_752_);
return v___x_774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3___boxed(lean_object* v___f_785_, lean_object* v_x_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lasm_KV_deno___lam__3(v___f_785_, v_x_786_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0(lean_object* v_name_789_, lean_object* v_a_790_, lean_object* v___x_791_, lean_object* v___f_792_, lean_object* v_k_793_){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_795_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_796_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_796_, 0, v_name_789_);
v___x_797_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_797_, 0, v_k_793_);
v___x_798_ = lean_unsigned_to_nat(2u);
v___x_799_ = lean_mk_empty_array_with_capacity(v___x_798_);
v___x_800_ = lean_array_push(v___x_799_, v___x_796_);
v___x_801_ = lean_array_push(v___x_800_, v___x_797_);
v___x_802_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
v___x_803_ = lean_unsigned_to_nat(1u);
v___x_804_ = lean_mk_empty_array_with_capacity(v___x_803_);
v___x_805_ = lean_array_push(v___x_804_, v___x_802_);
v___x_806_ = 0;
v___x_807_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_790_, v___x_795_, v___x_805_);
v___x_808_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_791_, v___x_806_, v___x_807_, v___f_792_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0___boxed(lean_object* v_name_809_, lean_object* v_a_810_, lean_object* v___x_811_, lean_object* v___f_812_, lean_object* v_k_813_, lean_object* v___y_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lasm_KV_deno___lam__0(v_name_809_, v_a_810_, v___x_811_, v___f_812_, v_k_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1(lean_object* v_name_817_, lean_object* v_a_818_, lean_object* v___x_819_, lean_object* v___f_820_, lean_object* v_k_821_, lean_object* v_v_822_){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; uint8_t v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_824_ = ((lean_object*)(l_Lasm_KV_deno___lam__1___closed__0));
v___x_825_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_825_, 0, v_name_817_);
v___x_826_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_826_, 0, v_k_821_);
v___x_827_ = lean_unsigned_to_nat(2u);
v___x_828_ = lean_mk_empty_array_with_capacity(v___x_827_);
lean_inc_ref(v___x_828_);
v___x_829_ = lean_array_push(v___x_828_, v___x_825_);
v___x_830_ = lean_array_push(v___x_829_, v___x_826_);
v___x_831_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
v___x_832_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_832_, 0, v_v_822_);
v___x_833_ = lean_array_push(v___x_828_, v___x_831_);
v___x_834_ = lean_array_push(v___x_833_, v___x_832_);
v___x_835_ = 0;
v___x_836_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_818_, v___x_824_, v___x_834_);
v___x_837_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_819_, v___x_835_, v___x_836_, v___f_820_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1___boxed(lean_object* v_name_838_, lean_object* v_a_839_, lean_object* v___x_840_, lean_object* v___f_841_, lean_object* v_k_842_, lean_object* v_v_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lasm_KV_deno___lam__1(v_name_838_, v_a_839_, v___x_840_, v___f_841_, v_k_842_, v_v_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2(lean_object* v_name_846_, lean_object* v_a_847_, lean_object* v___x_848_, lean_object* v___f_849_, lean_object* v_k_850_){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; uint8_t v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_852_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_853_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_853_, 0, v_name_846_);
v___x_854_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_854_, 0, v_k_850_);
v___x_855_ = lean_unsigned_to_nat(2u);
v___x_856_ = lean_mk_empty_array_with_capacity(v___x_855_);
v___x_857_ = lean_array_push(v___x_856_, v___x_853_);
v___x_858_ = lean_array_push(v___x_857_, v___x_854_);
v___x_859_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
v___x_860_ = lean_unsigned_to_nat(1u);
v___x_861_ = lean_mk_empty_array_with_capacity(v___x_860_);
v___x_862_ = lean_array_push(v___x_861_, v___x_859_);
v___x_863_ = 0;
v___x_864_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_847_, v___x_852_, v___x_862_);
v___x_865_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_848_, v___x_863_, v___x_864_, v___f_849_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2___boxed(lean_object* v_name_866_, lean_object* v_a_867_, lean_object* v___x_868_, lean_object* v___f_869_, lean_object* v_k_870_, lean_object* v___y_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lasm_KV_deno___lam__2(v_name_866_, v_a_867_, v___x_868_, v___f_869_, v_k_870_);
return v_res_872_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0(void){
_start:
{
uint64_t v___x_873_; uint8_t v___x_874_; uint64_t v___x_875_; 
v___x_873_ = 8ULL;
v___x_874_ = 1;
v___x_875_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_874_, v___x_873_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(lean_object* v_o_877_, lean_object* v_name_878_, lean_object* v_args_879_){
_start:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; uint64_t v___x_884_; lean_object* v___x_885_; 
v___x_881_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1));
v___x_882_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_882_, 0, v_o_877_);
lean_ctor_set(v___x_882_, 1, v___x_881_);
lean_inc_ref(v_name_878_);
v___x_883_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_883_, 0, v_name_878_);
v___x_884_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0);
v___x_885_ = l_Lasm_JS_Value_invokeRaw(v___x_882_, v___x_883_, v_args_879_, v___x_884_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v___x_887_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1));
v___x_888_ = lean_string_append(v___x_887_, v_name_878_);
lean_dec_ref(v_name_878_);
v___x_889_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_888_, v_a_886_);
lean_dec(v_a_886_);
lean_dec_ref(v___x_888_);
return v___x_889_;
}
else
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
lean_dec_ref(v_name_878_);
v_a_890_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_885_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_885_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___boxed(lean_object* v_o_898_, lean_object* v_name_899_, lean_object* v_args_900_, lean_object* v___y_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_o_898_, v_name_899_, v_args_900_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno(lean_object* v_name_910_){
_start:
{
lean_object* v___f_912_; lean_object* v___f_913_; lean_object* v___x_914_; 
v___f_912_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_913_ = ((lean_object*)(l_Lasm_KV_deno___closed__0));
v___x_914_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v_a_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v_a_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_914_, 1);
v___x_916_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_917_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_915_, v___x_916_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_918_);
lean_dec_ref_known(v___x_917_, 1);
v___x_919_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_920_ = lean_unsigned_to_nat(0u);
v___x_921_ = ((lean_object*)(l_Lasm_KV_deno___closed__3));
v___x_922_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_a_918_, v___x_919_, v___x_921_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_935_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_935_ == 0)
{
v___x_925_ = v___x_922_;
v_isShared_926_ = v_isSharedCheck_935_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_935_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___f_927_; lean_object* v___f_928_; lean_object* v___f_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_933_; 
lean_inc_n(v_a_923_, 2);
lean_inc_ref_n(v_name_910_, 2);
v___f_927_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__0___boxed), 6, 4);
lean_closure_set(v___f_927_, 0, v_name_910_);
lean_closure_set(v___f_927_, 1, v_a_923_);
lean_closure_set(v___f_927_, 2, v___x_920_);
lean_closure_set(v___f_927_, 3, v___f_913_);
v___f_928_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__1___boxed), 7, 4);
lean_closure_set(v___f_928_, 0, v_name_910_);
lean_closure_set(v___f_928_, 1, v_a_923_);
lean_closure_set(v___f_928_, 2, v___x_920_);
lean_closure_set(v___f_928_, 3, v___f_912_);
v___f_929_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__2___boxed), 6, 4);
lean_closure_set(v___f_929_, 0, v_name_910_);
lean_closure_set(v___f_929_, 1, v_a_923_);
lean_closure_set(v___f_929_, 2, v___x_920_);
lean_closure_set(v___f_929_, 3, v___f_912_);
v___x_930_ = ((lean_object*)(l_Lasm_KV_deno___closed__4));
v___x_931_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
lean_ctor_set(v___x_931_, 1, v___f_927_);
lean_ctor_set(v___x_931_, 2, v___f_928_);
lean_ctor_set(v___x_931_, 3, v___f_929_);
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 0, v___x_931_);
v___x_933_ = v___x_925_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_931_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
lean_dec_ref(v_name_910_);
v_a_936_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_922_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_922_);
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
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
lean_dec_ref(v_name_910_);
v_a_944_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_917_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_917_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
else
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
lean_dec_ref(v_name_910_);
v_a_952_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_959_ == 0)
{
v___x_954_ = v___x_914_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_914_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_957_; 
if (v_isShared_955_ == 0)
{
v___x_957_ = v___x_954_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_a_952_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___boxed(lean_object* v_name_960_, lean_object* v_a_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Lasm_KV_deno(v_name_960_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0(lean_object* v_name_963_, lean_object* v_k_964_){
_start:
{
lean_object* v_val_967_; lean_object* v___x_969_; 
v___x_969_ = l_Lasm_Fastly_kvGetText(v_name_963_, v_k_964_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_969_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_969_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
lean_ctor_set_tag(v___x_972_, 1);
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
v_val_967_ = v___x_975_;
goto v___jp_966_;
}
}
}
else
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
v_a_978_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_969_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_969_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
lean_ctor_set_tag(v___x_980_, 0);
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
v_val_967_ = v___x_983_;
goto v___jp_966_;
}
}
}
v___jp_966_:
{
lean_object* v___x_968_; 
v___x_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_968_, 0, v_val_967_);
return v___x_968_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0___boxed(lean_object* v_name_986_, lean_object* v_k_987_, lean_object* v___y_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l_Lasm_KV_fastly___lam__0(v_name_986_, v_k_987_);
lean_dec_ref(v_k_987_);
lean_dec_ref(v_name_986_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1(lean_object* v_name_990_, lean_object* v_k_991_, lean_object* v_v_992_){
_start:
{
lean_object* v_val_995_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = lean_string_to_utf8(v_v_992_);
v___x_998_ = lasm_fastly_kv_put(v_name_990_, v_k_991_, v___x_997_);
lean_dec_ref(v___x_997_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_998_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_998_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
lean_ctor_set_tag(v___x_1001_, 1);
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_a_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
v_val_995_ = v___x_1004_;
goto v___jp_994_;
}
}
}
else
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
v_a_1007_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_998_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_998_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
lean_ctor_set_tag(v___x_1009_, 0);
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
v_val_995_ = v___x_1012_;
goto v___jp_994_;
}
}
}
v___jp_994_:
{
lean_object* v___x_996_; 
v___x_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_996_, 0, v_val_995_);
return v___x_996_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1___boxed(lean_object* v_name_1015_, lean_object* v_k_1016_, lean_object* v_v_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_Lasm_KV_fastly___lam__1(v_name_1015_, v_k_1016_, v_v_1017_);
lean_dec_ref(v_v_1017_);
lean_dec_ref(v_k_1016_);
lean_dec_ref(v_name_1015_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2(lean_object* v_name_1020_, lean_object* v_k_1021_){
_start:
{
lean_object* v_val_1024_; lean_object* v___x_1026_; 
v___x_1026_ = lasm_fastly_kv_delete(v_name_1020_, v_k_1021_);
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
v_a_1027_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1026_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1026_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
lean_ctor_set_tag(v___x_1029_, 1);
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
v_val_1024_ = v___x_1032_;
goto v___jp_1023_;
}
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
v_a_1035_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1026_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1026_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
lean_ctor_set_tag(v___x_1037_, 0);
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
v_val_1024_ = v___x_1040_;
goto v___jp_1023_;
}
}
}
v___jp_1023_:
{
lean_object* v___x_1025_; 
v___x_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1025_, 0, v_val_1024_);
return v___x_1025_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2___boxed(lean_object* v_name_1043_, lean_object* v_k_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l_Lasm_KV_fastly___lam__2(v_name_1043_, v_k_1044_);
lean_dec_ref(v_k_1044_);
lean_dec_ref(v_name_1043_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly(lean_object* v_name_1048_){
_start:
{
lean_object* v___f_1049_; lean_object* v___f_1050_; lean_object* v___f_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
lean_inc_ref_n(v_name_1048_, 2);
v___f_1049_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1049_, 0, v_name_1048_);
v___f_1050_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1050_, 0, v_name_1048_);
v___f_1051_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1051_, 0, v_name_1048_);
v___x_1052_ = ((lean_object*)(l_Lasm_KV_fastly___closed__0));
v___x_1053_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
lean_ctor_set(v___x_1053_, 1, v___f_1049_);
lean_ctor_set(v___x_1053_, 2, v___f_1050_);
lean_ctor_set(v___x_1053_, 3, v___f_1051_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0(uint8_t v_a_1054_, uint8_t v_a_1055_, lean_object* v_____do__lift_1056_){
_start:
{
if (lean_obj_tag(v_____do__lift_1056_) == 0)
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1058_ = lean_box(v_a_1054_);
v___x_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
return v___x_1059_;
}
else
{
lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1067_; 
v_isSharedCheck_1067_ = !lean_is_exclusive(v_____do__lift_1056_);
if (v_isSharedCheck_1067_ == 0)
{
lean_object* v_unused_1068_; 
v_unused_1068_ = lean_ctor_get(v_____do__lift_1056_, 0);
lean_dec(v_unused_1068_);
v___x_1061_ = v_____do__lift_1056_;
v_isShared_1062_ = v_isSharedCheck_1067_;
goto v_resetjp_1060_;
}
else
{
lean_dec(v_____do__lift_1056_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1067_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1063_; lean_object* v___x_1065_; 
v___x_1063_ = lean_box(v_a_1055_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set_tag(v___x_1061_, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1063_);
v___x_1065_ = v___x_1061_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1063_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0___boxed(lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_____do__lift_1071_, lean_object* v___y_1072_){
_start:
{
uint8_t v_a_3238__boxed_1073_; uint8_t v_a_3239__boxed_1074_; lean_object* v_res_1075_; 
v_a_3238__boxed_1073_ = lean_unbox(v_a_1069_);
v_a_3239__boxed_1074_ = lean_unbox(v_a_1070_);
v_res_1075_ = l_Lasm_KV_open___lam__0(v_a_3238__boxed_1073_, v_a_3239__boxed_1074_, v_____do__lift_1071_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1(lean_object* v_a_1076_, lean_object* v_k_1077_, lean_object* v___x_1078_, lean_object* v_x_1079_){
_start:
{
if (lean_obj_tag(v_x_1079_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1089_; 
lean_dec_ref(v___x_1078_);
lean_dec_ref(v_k_1077_);
lean_dec_ref(v_a_1076_);
v_a_1081_ = lean_ctor_get(v_x_1079_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v_x_1079_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1083_ = v_x_1079_;
v_isShared_1084_ = v_isSharedCheck_1089_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v_x_1079_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1089_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1086_; 
if (v_isShared_1084_ == 0)
{
v___x_1086_ = v___x_1083_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1081_);
v___x_1086_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
lean_object* v___x_1087_; 
v___x_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
return v___x_1087_;
}
}
}
else
{
lean_object* v_a_1090_; uint8_t v___x_1091_; 
v_a_1090_ = lean_ctor_get(v_x_1079_, 0);
lean_inc(v_a_1090_);
lean_dec_ref_known(v_x_1079_, 1);
v___x_1091_ = lean_unbox(v_a_1090_);
lean_dec(v_a_1090_);
if (v___x_1091_ == 0)
{
lean_object* v_get_1092_; lean_object* v___x_1093_; 
lean_dec_ref(v___x_1078_);
v_get_1092_ = lean_ctor_get(v_a_1076_, 1);
lean_inc_ref(v_get_1092_);
lean_dec_ref(v_a_1076_);
v___x_1093_ = lean_apply_2(v_get_1092_, v_k_1077_, lean_box(0));
return v___x_1093_;
}
else
{
lean_object* v_get_1094_; lean_object* v___x_1095_; 
lean_dec_ref(v_a_1076_);
v_get_1094_ = lean_ctor_get(v___x_1078_, 1);
lean_inc_ref(v_get_1094_);
lean_dec_ref(v___x_1078_);
v___x_1095_ = lean_apply_2(v_get_1094_, v_k_1077_, lean_box(0));
return v___x_1095_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1___boxed(lean_object* v_a_1096_, lean_object* v_k_1097_, lean_object* v___x_1098_, lean_object* v_x_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lasm_KV_open___lam__1(v_a_1096_, v_k_1097_, v___x_1098_, v_x_1099_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2(lean_object* v_a_1102_, lean_object* v___x_1103_, uint8_t v_a_1104_, lean_object* v_name_1105_, uint8_t v_a_1106_, lean_object* v_k_1107_){
_start:
{
lean_object* v___f_1109_; lean_object* v___x_1110_; lean_object* v_val_1112_; uint8_t v_a_1116_; lean_object* v___x_1119_; 
v___f_1109_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1109_, 0, v_a_1102_);
lean_closure_set(v___f_1109_, 1, v_k_1107_);
lean_closure_set(v___f_1109_, 2, v___x_1103_);
v___x_1110_ = lean_unsigned_to_nat(0u);
v___x_1119_ = l_Lasm_KV_binding(v_name_1105_);
if (lean_obj_tag(v___x_1119_) == 0)
{
lean_object* v_a_1120_; 
v_a_1120_ = lean_ctor_get(v___x_1119_, 0);
lean_inc(v_a_1120_);
lean_dec_ref_known(v___x_1119_, 1);
if (lean_obj_tag(v_a_1120_) == 0)
{
v_a_1116_ = v_a_1104_;
goto v___jp_1115_;
}
else
{
lean_dec_ref_known(v_a_1120_, 1);
v_a_1116_ = v_a_1106_;
goto v___jp_1115_;
}
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
v_a_1121_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1119_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1119_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
lean_ctor_set_tag(v___x_1123_, 0);
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
v_val_1112_ = v___x_1126_;
goto v___jp_1111_;
}
}
}
v___jp_1111_:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1113_, 0, v_val_1112_);
v___x_1114_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1110_, v_a_1104_, v___x_1113_, v___f_1109_);
return v___x_1114_;
}
v___jp_1115_:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = lean_box(v_a_1116_);
v___x_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
v_val_1112_ = v___x_1118_;
goto v___jp_1111_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2___boxed(lean_object* v_a_1129_, lean_object* v___x_1130_, lean_object* v_a_1131_, lean_object* v_name_1132_, lean_object* v_a_1133_, lean_object* v_k_1134_, lean_object* v___y_1135_){
_start:
{
uint8_t v_a_3313__boxed_1136_; uint8_t v_a_3314__boxed_1137_; lean_object* v_res_1138_; 
v_a_3313__boxed_1136_ = lean_unbox(v_a_1131_);
v_a_3314__boxed_1137_ = lean_unbox(v_a_1133_);
v_res_1138_ = l_Lasm_KV_open___lam__2(v_a_1129_, v___x_1130_, v_a_3313__boxed_1136_, v_name_1132_, v_a_3314__boxed_1137_, v_k_1134_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3(lean_object* v_a_1139_, lean_object* v_k_1140_, lean_object* v_v_1141_, lean_object* v___x_1142_, lean_object* v_x_1143_){
_start:
{
if (lean_obj_tag(v_x_1143_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1153_; 
lean_dec_ref(v___x_1142_);
lean_dec_ref(v_v_1141_);
lean_dec_ref(v_k_1140_);
lean_dec_ref(v_a_1139_);
v_a_1145_ = lean_ctor_get(v_x_1143_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1147_ = v_x_1143_;
v_isShared_1148_ = v_isSharedCheck_1153_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v_x_1143_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1153_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
lean_object* v___x_1151_; 
v___x_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
return v___x_1151_;
}
}
}
else
{
lean_object* v_a_1154_; uint8_t v___x_1155_; 
v_a_1154_ = lean_ctor_get(v_x_1143_, 0);
lean_inc(v_a_1154_);
lean_dec_ref_known(v_x_1143_, 1);
v___x_1155_ = lean_unbox(v_a_1154_);
lean_dec(v_a_1154_);
if (v___x_1155_ == 0)
{
lean_object* v_put_1156_; lean_object* v___x_1157_; 
lean_dec_ref(v___x_1142_);
v_put_1156_ = lean_ctor_get(v_a_1139_, 2);
lean_inc_ref(v_put_1156_);
lean_dec_ref(v_a_1139_);
v___x_1157_ = lean_apply_3(v_put_1156_, v_k_1140_, v_v_1141_, lean_box(0));
return v___x_1157_;
}
else
{
lean_object* v_put_1158_; lean_object* v___x_1159_; 
lean_dec_ref(v_a_1139_);
v_put_1158_ = lean_ctor_get(v___x_1142_, 2);
lean_inc_ref(v_put_1158_);
lean_dec_ref(v___x_1142_);
v___x_1159_ = lean_apply_3(v_put_1158_, v_k_1140_, v_v_1141_, lean_box(0));
return v___x_1159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3___boxed(lean_object* v_a_1160_, lean_object* v_k_1161_, lean_object* v_v_1162_, lean_object* v___x_1163_, lean_object* v_x_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lasm_KV_open___lam__3(v_a_1160_, v_k_1161_, v_v_1162_, v___x_1163_, v_x_1164_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4(lean_object* v_a_1167_, lean_object* v___x_1168_, uint8_t v_a_1169_, lean_object* v_name_1170_, lean_object* v___f_1171_, lean_object* v_k_1172_, lean_object* v_v_1173_){
_start:
{
lean_object* v___f_1175_; lean_object* v___x_1176_; lean_object* v_val_1178_; lean_object* v_a_1182_; lean_object* v___x_1184_; 
v___f_1175_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__3___boxed), 6, 4);
lean_closure_set(v___f_1175_, 0, v_a_1167_);
lean_closure_set(v___f_1175_, 1, v_k_1172_);
lean_closure_set(v___f_1175_, 2, v_v_1173_);
lean_closure_set(v___f_1175_, 3, v___x_1168_);
v___x_1176_ = lean_unsigned_to_nat(0u);
v___x_1184_ = l_Lasm_KV_binding(v_name_1170_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_object* v_a_1185_; lean_object* v___x_1186_; 
v_a_1185_ = lean_ctor_get(v___x_1184_, 0);
lean_inc(v_a_1185_);
lean_dec_ref_known(v___x_1184_, 1);
v___x_1186_ = lean_apply_2(v___f_1171_, v_a_1185_, lean_box(0));
if (lean_obj_tag(v___x_1186_) == 0)
{
lean_object* v_a_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1194_; 
v_a_1187_ = lean_ctor_get(v___x_1186_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1186_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1189_ = v___x_1186_;
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_a_1187_);
lean_dec(v___x_1186_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v___x_1192_; 
if (v_isShared_1190_ == 0)
{
lean_ctor_set_tag(v___x_1189_, 1);
v___x_1192_ = v___x_1189_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_a_1187_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
v_val_1178_ = v___x_1192_;
goto v___jp_1177_;
}
}
}
else
{
lean_object* v_a_1195_; 
v_a_1195_ = lean_ctor_get(v___x_1186_, 0);
lean_inc(v_a_1195_);
lean_dec_ref_known(v___x_1186_, 1);
v_a_1182_ = v_a_1195_;
goto v___jp_1181_;
}
}
else
{
lean_object* v_a_1196_; 
lean_dec_ref(v___f_1171_);
v_a_1196_ = lean_ctor_get(v___x_1184_, 0);
lean_inc(v_a_1196_);
lean_dec_ref_known(v___x_1184_, 1);
v_a_1182_ = v_a_1196_;
goto v___jp_1181_;
}
v___jp_1177_:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1179_, 0, v_val_1178_);
v___x_1180_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1176_, v_a_1169_, v___x_1179_, v___f_1175_);
return v___x_1180_;
}
v___jp_1181_:
{
lean_object* v___x_1183_; 
v___x_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1183_, 0, v_a_1182_);
v_val_1178_ = v___x_1183_;
goto v___jp_1177_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4___boxed(lean_object* v_a_1197_, lean_object* v___x_1198_, lean_object* v_a_1199_, lean_object* v_name_1200_, lean_object* v___f_1201_, lean_object* v_k_1202_, lean_object* v_v_1203_, lean_object* v___y_1204_){
_start:
{
uint8_t v_a_3407__boxed_1205_; lean_object* v_res_1206_; 
v_a_3407__boxed_1205_ = lean_unbox(v_a_1199_);
v_res_1206_ = l_Lasm_KV_open___lam__4(v_a_1197_, v___x_1198_, v_a_3407__boxed_1205_, v_name_1200_, v___f_1201_, v_k_1202_, v_v_1203_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5(lean_object* v_a_1207_, lean_object* v_k_1208_, lean_object* v___x_1209_, lean_object* v_x_1210_){
_start:
{
if (lean_obj_tag(v_x_1210_) == 0)
{
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1220_; 
lean_dec_ref(v___x_1209_);
lean_dec_ref(v_k_1208_);
lean_dec_ref(v_a_1207_);
v_a_1212_ = lean_ctor_get(v_x_1210_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_x_1210_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1214_ = v_x_1210_;
v_isShared_1215_ = v_isSharedCheck_1220_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v_x_1210_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1220_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
lean_object* v___x_1218_; 
v___x_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
return v___x_1218_;
}
}
}
else
{
lean_object* v_a_1221_; uint8_t v___x_1222_; 
v_a_1221_ = lean_ctor_get(v_x_1210_, 0);
lean_inc(v_a_1221_);
lean_dec_ref_known(v_x_1210_, 1);
v___x_1222_ = lean_unbox(v_a_1221_);
lean_dec(v_a_1221_);
if (v___x_1222_ == 0)
{
lean_object* v_delete_1223_; lean_object* v___x_1224_; 
lean_dec_ref(v___x_1209_);
v_delete_1223_ = lean_ctor_get(v_a_1207_, 3);
lean_inc_ref(v_delete_1223_);
lean_dec_ref(v_a_1207_);
v___x_1224_ = lean_apply_2(v_delete_1223_, v_k_1208_, lean_box(0));
return v___x_1224_;
}
else
{
lean_object* v_delete_1225_; lean_object* v___x_1226_; 
lean_dec_ref(v_a_1207_);
v_delete_1225_ = lean_ctor_get(v___x_1209_, 3);
lean_inc_ref(v_delete_1225_);
lean_dec_ref(v___x_1209_);
v___x_1226_ = lean_apply_2(v_delete_1225_, v_k_1208_, lean_box(0));
return v___x_1226_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5___boxed(lean_object* v_a_1227_, lean_object* v_k_1228_, lean_object* v___x_1229_, lean_object* v_x_1230_, lean_object* v___y_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Lasm_KV_open___lam__5(v_a_1227_, v_k_1228_, v___x_1229_, v_x_1230_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6(lean_object* v_a_1233_, lean_object* v___x_1234_, uint8_t v_a_1235_, lean_object* v_name_1236_, lean_object* v___f_1237_, lean_object* v_k_1238_){
_start:
{
lean_object* v___f_1240_; lean_object* v___x_1241_; lean_object* v_val_1243_; lean_object* v_a_1247_; lean_object* v___x_1249_; 
v___f_1240_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__5___boxed), 5, 3);
lean_closure_set(v___f_1240_, 0, v_a_1233_);
lean_closure_set(v___f_1240_, 1, v_k_1238_);
lean_closure_set(v___f_1240_, 2, v___x_1234_);
v___x_1241_ = lean_unsigned_to_nat(0u);
v___x_1249_ = l_Lasm_KV_binding(v_name_1236_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v_a_1250_; lean_object* v___x_1251_; 
v_a_1250_ = lean_ctor_get(v___x_1249_, 0);
lean_inc(v_a_1250_);
lean_dec_ref_known(v___x_1249_, 1);
v___x_1251_ = lean_apply_2(v___f_1237_, v_a_1250_, lean_box(0));
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1259_; 
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1254_ = v___x_1251_;
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___x_1251_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
lean_ctor_set_tag(v___x_1254_, 1);
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_a_1252_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
v_val_1243_ = v___x_1257_;
goto v___jp_1242_;
}
}
}
else
{
lean_object* v_a_1260_; 
v_a_1260_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_a_1260_);
lean_dec_ref_known(v___x_1251_, 1);
v_a_1247_ = v_a_1260_;
goto v___jp_1246_;
}
}
else
{
lean_object* v_a_1261_; 
lean_dec_ref(v___f_1237_);
v_a_1261_ = lean_ctor_get(v___x_1249_, 0);
lean_inc(v_a_1261_);
lean_dec_ref_known(v___x_1249_, 1);
v_a_1247_ = v_a_1261_;
goto v___jp_1246_;
}
v___jp_1242_:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1244_, 0, v_val_1243_);
v___x_1245_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1241_, v_a_1235_, v___x_1244_, v___f_1240_);
return v___x_1245_;
}
v___jp_1246_:
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1248_, 0, v_a_1247_);
v_val_1243_ = v___x_1248_;
goto v___jp_1242_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6___boxed(lean_object* v_a_1262_, lean_object* v___x_1263_, lean_object* v_a_1264_, lean_object* v_name_1265_, lean_object* v___f_1266_, lean_object* v_k_1267_, lean_object* v___y_1268_){
_start:
{
uint8_t v_a_3504__boxed_1269_; lean_object* v_res_1270_; 
v_a_3504__boxed_1269_ = lean_unbox(v_a_1264_);
v_res_1270_ = l_Lasm_KV_open___lam__6(v_a_1262_, v___x_1263_, v_a_3504__boxed_1269_, v_name_1265_, v___f_1266_, v_k_1267_);
return v_res_1270_;
}
}
static uint32_t _init_l_Lasm_KV_open___closed__1(void){
_start:
{
lean_object* v___x_1272_; uint32_t v___x_1273_; 
v___x_1272_ = lean_box(0);
v___x_1273_ = lasm_fetch_platform(v___x_1272_);
return v___x_1273_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__2(void){
_start:
{
uint32_t v___x_1274_; uint32_t v___x_1275_; uint8_t v___x_1276_; 
v___x_1274_ = 2;
v___x_1275_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1276_ = lean_uint32_dec_eq(v___x_1275_, v___x_1274_);
return v___x_1276_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__3(void){
_start:
{
uint32_t v___x_1277_; uint32_t v___x_1278_; uint8_t v___x_1279_; 
v___x_1277_ = 0;
v___x_1278_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1279_ = lean_uint32_dec_eq(v___x_1278_, v___x_1277_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open(lean_object* v_name_1281_){
_start:
{
uint8_t v_a_1284_; uint8_t v___x_1317_; 
v___x_1317_ = lean_uint8_once(&l_Lasm_KV_open___closed__2, &l_Lasm_KV_open___closed__2_once, _init_l_Lasm_KV_open___closed__2);
if (v___x_1317_ == 0)
{
uint8_t v___x_1318_; 
v___x_1318_ = lean_uint8_once(&l_Lasm_KV_open___closed__3, &l_Lasm_KV_open___closed__3_once, _init_l_Lasm_KV_open___closed__3);
if (v___x_1318_ == 0)
{
lean_object* v___x_1319_; 
lean_dec_ref(v_name_1281_);
v___x_1319_ = l_Lasm_KV_memory();
return v___x_1319_;
}
else
{
lean_object* v___x_1320_; 
v___x_1320_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_a_1321_);
lean_dec_ref_known(v___x_1320_, 1);
v___x_1322_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_1323_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1321_, v___x_1322_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_a_1324_);
lean_dec_ref_known(v___x_1323_, 1);
v___x_1325_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_1326_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_a_1324_, v___x_1325_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1326_, 1);
if (lean_obj_tag(v_a_1327_) == 9)
{
lean_object* v___x_1328_; 
lean_dec_ref_known(v_a_1327_, 2);
v___x_1328_ = l_Lasm_KV_deno(v_name_1281_);
if (lean_obj_tag(v___x_1328_) == 0)
{
return v___x_1328_;
}
else
{
lean_object* v___x_1329_; 
lean_dec_ref_known(v___x_1328_, 1);
v___x_1329_ = l_Lasm_KV_memory();
return v___x_1329_;
}
}
else
{
lean_dec(v_a_1327_);
v_a_1284_ = v___x_1317_;
goto v___jp_1283_;
}
}
else
{
lean_dec_ref_known(v___x_1326_, 1);
v_a_1284_ = v___x_1317_;
goto v___jp_1283_;
}
}
else
{
lean_dec_ref_known(v___x_1323_, 1);
v_a_1284_ = v___x_1317_;
goto v___jp_1283_;
}
}
else
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1337_; 
lean_dec_ref(v_name_1281_);
v_a_1330_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1332_ = v___x_1320_;
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v___x_1320_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1337_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1335_; 
if (v_isShared_1333_ == 0)
{
v___x_1335_ = v___x_1332_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_a_1330_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
}
}
else
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1338_ = ((lean_object*)(l_Lasm_KV_open___closed__4));
v___x_1339_ = lasm_fastly_kv_get(v_name_1281_, v___x_1338_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1347_; 
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1347_ == 0)
{
lean_object* v_unused_1348_; 
v_unused_1348_ = lean_ctor_get(v___x_1339_, 0);
lean_dec(v_unused_1348_);
v___x_1341_ = v___x_1339_;
v_isShared_1342_ = v_isSharedCheck_1347_;
goto v_resetjp_1340_;
}
else
{
lean_dec(v___x_1339_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1347_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1343_; lean_object* v___x_1345_; 
v___x_1343_ = l_Lasm_KV_fastly(v_name_1281_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set(v___x_1341_, 0, v___x_1343_);
v___x_1345_ = v___x_1341_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1343_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
else
{
lean_object* v___x_1349_; 
lean_dec_ref_known(v___x_1339_, 1);
lean_dec_ref(v_name_1281_);
v___x_1349_ = l_Lasm_KV_memory();
return v___x_1349_;
}
}
v___jp_1283_:
{
lean_object* v___x_1285_; 
v___x_1285_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_a_1286_; uint8_t v___x_1287_; 
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
lean_inc(v_a_1286_);
lean_dec_ref_known(v___x_1285_, 1);
v___x_1287_ = lean_unbox(v_a_1286_);
if (v___x_1287_ == 0)
{
lean_object* v___x_1288_; 
lean_dec(v_a_1286_);
lean_dec_ref(v_name_1281_);
v___x_1288_ = l_Lasm_KV_memory();
return v___x_1288_;
}
else
{
lean_object* v___x_1289_; lean_object* v___f_1290_; lean_object* v___x_1291_; lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1308_; 
v___x_1289_ = lean_box(v_a_1284_);
lean_inc(v_a_1286_);
v___f_1290_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1290_, 0, v___x_1289_);
lean_closure_set(v___f_1290_, 1, v_a_1286_);
v___x_1291_ = l_Lasm_KV_memory();
v_a_1292_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1294_ = v___x_1291_;
v_isShared_1295_ = v_isSharedCheck_1308_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v___x_1291_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1308_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___f_1298_; lean_object* v___x_1299_; lean_object* v___f_1300_; lean_object* v___x_1301_; lean_object* v___f_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1306_; 
lean_inc_ref_n(v_name_1281_, 3);
v___x_1296_ = l_Lasm_KV_workers(v_name_1281_);
v___x_1297_ = lean_box(v_a_1284_);
lean_inc_ref_n(v___x_1296_, 2);
lean_inc_n(v_a_1292_, 2);
v___f_1298_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__2___boxed), 7, 5);
lean_closure_set(v___f_1298_, 0, v_a_1292_);
lean_closure_set(v___f_1298_, 1, v___x_1296_);
lean_closure_set(v___f_1298_, 2, v___x_1297_);
lean_closure_set(v___f_1298_, 3, v_name_1281_);
lean_closure_set(v___f_1298_, 4, v_a_1286_);
v___x_1299_ = lean_box(v_a_1284_);
lean_inc_ref(v___f_1290_);
v___f_1300_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__4___boxed), 8, 5);
lean_closure_set(v___f_1300_, 0, v_a_1292_);
lean_closure_set(v___f_1300_, 1, v___x_1296_);
lean_closure_set(v___f_1300_, 2, v___x_1299_);
lean_closure_set(v___f_1300_, 3, v_name_1281_);
lean_closure_set(v___f_1300_, 4, v___f_1290_);
v___x_1301_ = lean_box(v_a_1284_);
v___f_1302_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__6___boxed), 7, 5);
lean_closure_set(v___f_1302_, 0, v_a_1292_);
lean_closure_set(v___f_1302_, 1, v___x_1296_);
lean_closure_set(v___f_1302_, 2, v___x_1301_);
lean_closure_set(v___f_1302_, 3, v_name_1281_);
lean_closure_set(v___f_1302_, 4, v___f_1290_);
v___x_1303_ = ((lean_object*)(l_Lasm_KV_open___closed__0));
v___x_1304_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
lean_ctor_set(v___x_1304_, 1, v___f_1298_);
lean_ctor_set(v___x_1304_, 2, v___f_1300_);
lean_ctor_set(v___x_1304_, 3, v___f_1302_);
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 0, v___x_1304_);
v___x_1306_ = v___x_1294_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v___x_1304_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
else
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1316_; 
lean_dec_ref(v_name_1281_);
v_a_1309_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1311_ = v___x_1285_;
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1285_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1309_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___boxed(lean_object* v_name_1350_, lean_object* v_a_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Lasm_KV_open(v_name_1350_);
return v_res_1352_;
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
