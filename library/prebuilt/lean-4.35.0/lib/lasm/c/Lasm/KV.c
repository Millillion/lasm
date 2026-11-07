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
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
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
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_423_, 0, v_key_421_);
v___x_424_ = l_Lasm_JS_Wire_encodeIO(v___x_423_);
lean_dec_ref_known(v___x_423_, 1);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; uint32_t v___x_426_; uint32_t v___x_427_; uint64_t v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
lean_inc(v_a_425_);
lean_dec_ref_known(v___x_424_, 1);
v___x_426_ = 203;
v___x_427_ = lasm_js_value_handle(v_o_420_);
v___x_428_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__0);
v___x_429_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1));
v___x_430_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_430_, 0, v_o_420_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = lasm_js_call(v___x_426_, v___x_427_, v___x_428_, v_a_425_, v___x_430_);
lean_dec_ref_known(v___x_430_, 2);
lean_dec(v_a_425_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v___x_433_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_a_432_);
lean_dec_ref_known(v___x_431_, 1);
v___x_433_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_432_);
lean_dec(v_a_432_);
return v___x_433_;
}
else
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
v_a_434_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_431_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_431_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
else
{
lean_object* v_a_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_449_; 
lean_dec(v_o_420_);
v_a_442_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_449_ == 0)
{
v___x_444_ = v___x_424_;
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_a_442_);
lean_dec(v___x_424_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_447_; 
if (v_isShared_445_ == 0)
{
v___x_447_ = v___x_444_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_a_442_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___boxed(lean_object* v_o_450_, lean_object* v_key_451_, lean_object* v_a_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_o_450_, v_key_451_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_binding(lean_object* v_name_454_){
_start:
{
lean_object* v_found_460_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = l_Lasm_Fetch_platformEnv;
v___x_465_ = lean_st_ref_get(v___x_464_);
switch(lean_obj_tag(v___x_465_))
{
case 9:
{
lean_object* v_value_466_; lean_object* v___x_467_; 
v_value_466_ = lean_ctor_get(v___x_465_, 0);
lean_inc(v_value_466_);
lean_dec_ref_known(v___x_465_, 2);
v___x_467_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_value_466_, v_name_454_);
if (lean_obj_tag(v___x_467_) == 0)
{
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v_a_468_; 
v_a_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_a_468_);
lean_dec_ref_known(v___x_467_, 1);
v_found_460_ = v_a_468_;
goto v___jp_459_;
}
else
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_476_; 
v_a_469_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_476_ == 0)
{
v___x_471_ = v___x_467_;
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_467_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_474_; 
if (v_isShared_472_ == 0)
{
lean_ctor_set_tag(v___x_471_, 1);
v___x_474_ = v___x_471_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_a_469_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_467_, 1);
goto v___jp_456_;
}
}
case 8:
{
lean_object* v___x_477_; 
v___x_477_ = l_Lasm_JS_Data_field(v___x_465_, v_name_454_);
lean_dec_ref(v_name_454_);
lean_dec_ref_known(v___x_465_, 1);
v_found_460_ = v___x_477_;
goto v___jp_459_;
}
default: 
{
lean_dec(v___x_465_);
lean_dec_ref(v_name_454_);
goto v___jp_456_;
}
}
v___jp_456_:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = lean_box(0);
v___x_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
return v___x_458_;
}
v___jp_459_:
{
if (lean_obj_tag(v_found_460_) == 9)
{
lean_object* v_value_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v_value_461_ = lean_ctor_get(v_found_460_, 0);
lean_inc(v_value_461_);
lean_dec_ref_known(v_found_460_, 2);
v___x_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_462_, 0, v_value_461_);
v___x_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
return v___x_463_;
}
else
{
lean_dec(v_found_460_);
goto v___jp_456_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_binding___boxed(lean_object* v_name_478_, lean_object* v_a_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lasm_KV_binding(v_name_478_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0(lean_object* v_x_481_){
_start:
{
if (lean_obj_tag(v_x_481_) == 0)
{
lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_491_; 
v_a_483_ = lean_ctor_get(v_x_481_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v_x_481_);
if (v_isSharedCheck_491_ == 0)
{
v___x_485_ = v_x_481_;
v_isShared_486_ = v_isSharedCheck_491_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_dec(v_x_481_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_491_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_483_);
v___x_488_ = v_reuseFailAlloc_490_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
lean_object* v___x_489_; 
v___x_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
return v___x_489_;
}
}
}
else
{
lean_object* v___x_492_; 
lean_dec_ref_known(v_x_481_, 1);
v___x_492_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__1___closed__1));
return v___x_492_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0___boxed(lean_object* v_x_493_, lean_object* v___y_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lasm_KV_workers___lam__0(v_x_493_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2(lean_object* v_x_496_){
_start:
{
if (lean_obj_tag(v_x_496_) == 0)
{
lean_object* v_a_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_506_; 
v_a_498_ = lean_ctor_get(v_x_496_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v_x_496_);
if (v_isSharedCheck_506_ == 0)
{
v___x_500_ = v_x_496_;
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_a_498_);
lean_dec(v_x_496_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_503_; 
if (v_isShared_501_ == 0)
{
v___x_503_ = v___x_500_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_498_);
v___x_503_ = v_reuseFailAlloc_505_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
lean_object* v___x_504_; 
v___x_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
return v___x_504_;
}
}
}
else
{
lean_object* v_a_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_524_; 
v_a_507_ = lean_ctor_get(v_x_496_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v_x_496_);
if (v_isSharedCheck_524_ == 0)
{
v___x_509_ = v_x_496_;
v_isShared_510_ = v_isSharedCheck_524_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_a_507_);
lean_dec(v_x_496_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_524_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
if (lean_obj_tag(v_a_507_) == 4)
{
lean_object* v_s_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_522_; 
v_s_511_ = lean_ctor_get(v_a_507_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v_a_507_);
if (v_isSharedCheck_522_ == 0)
{
v___x_513_ = v_a_507_;
v_isShared_514_ = v_isSharedCheck_522_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_s_511_);
lean_dec(v_a_507_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_522_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
lean_ctor_set_tag(v___x_513_, 1);
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_s_511_);
v___x_516_ = v_reuseFailAlloc_521_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_518_; 
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 0, v___x_516_);
v___x_518_ = v___x_509_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v___x_516_);
v___x_518_ = v_reuseFailAlloc_520_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
lean_object* v___x_519_; 
v___x_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
return v___x_519_;
}
}
}
}
else
{
lean_object* v___x_523_; 
lean_del_object(v___x_509_);
lean_dec(v_a_507_);
v___x_523_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__0___closed__1));
return v___x_523_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2___boxed(lean_object* v_x_525_, lean_object* v___y_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lasm_KV_workers___lam__2(v_x_525_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1(lean_object* v_name_529_, lean_object* v_____do__lift_530_){
_start:
{
if (lean_obj_tag(v_____do__lift_530_) == 0)
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_532_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_533_ = lean_string_append(v___x_532_, v_name_529_);
v___x_534_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
v___x_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
return v___x_535_;
}
else
{
lean_object* v_val_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_543_; 
v_val_536_ = lean_ctor_get(v_____do__lift_530_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v_____do__lift_530_);
if (v_isSharedCheck_543_ == 0)
{
v___x_538_ = v_____do__lift_530_;
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_val_536_);
lean_dec(v_____do__lift_530_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
lean_ctor_set_tag(v___x_538_, 0);
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_val_536_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1___boxed(lean_object* v_name_544_, lean_object* v_____do__lift_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lasm_KV_workers___lam__1(v_name_544_, v_____do__lift_545_);
lean_dec_ref(v_name_544_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3(lean_object* v_k_549_, lean_object* v___f_550_, lean_object* v_x_551_){
_start:
{
if (lean_obj_tag(v_x_551_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_561_; 
lean_dec_ref(v___f_550_);
lean_dec_ref(v_k_549_);
v_a_553_ = lean_ctor_get(v_x_551_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v_x_551_);
if (v_isSharedCheck_561_ == 0)
{
v___x_555_ = v_x_551_;
v_isShared_556_ = v_isSharedCheck_561_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v_x_551_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_561_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_553_);
v___x_558_ = v_reuseFailAlloc_560_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
lean_object* v___x_559_; 
v___x_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
return v___x_559_;
}
}
}
else
{
lean_object* v_a_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; uint8_t v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v_a_562_ = lean_ctor_get(v_x_551_, 0);
lean_inc(v_a_562_);
lean_dec_ref_known(v_x_551_, 1);
v___x_563_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_564_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_564_, 0, v_k_549_);
v___x_565_ = lean_unsigned_to_nat(1u);
v___x_566_ = lean_mk_empty_array_with_capacity(v___x_565_);
v___x_567_ = lean_array_push(v___x_566_, v___x_564_);
v___x_568_ = lean_unsigned_to_nat(0u);
v___x_569_ = 0;
v___x_570_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_562_, v___x_563_, v___x_567_);
v___x_571_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_568_, v___x_569_, v___x_570_, v___f_550_);
return v___x_571_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3___boxed(lean_object* v_k_572_, lean_object* v___f_573_, lean_object* v_x_574_, lean_object* v___y_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lasm_KV_workers___lam__3(v_k_572_, v___f_573_, v_x_574_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4(lean_object* v___f_577_, lean_object* v_name_578_, lean_object* v___f_579_, lean_object* v_k_580_){
_start:
{
lean_object* v___f_582_; lean_object* v___x_583_; uint8_t v___x_584_; lean_object* v_val_586_; lean_object* v_a_590_; lean_object* v___x_592_; 
v___f_582_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__3___boxed), 4, 2);
lean_closure_set(v___f_582_, 0, v_k_580_);
lean_closure_set(v___f_582_, 1, v___f_577_);
v___x_583_ = lean_unsigned_to_nat(0u);
v___x_584_ = 0;
v___x_592_ = l_Lasm_KV_binding(v_name_578_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_594_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_593_);
lean_dec_ref_known(v___x_592_, 1);
v___x_594_ = lean_apply_2(v___f_579_, v_a_593_, lean_box(0));
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v_a_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_602_; 
v_a_595_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_602_ == 0)
{
v___x_597_ = v___x_594_;
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_a_595_);
lean_dec(v___x_594_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_600_; 
if (v_isShared_598_ == 0)
{
lean_ctor_set_tag(v___x_597_, 1);
v___x_600_ = v___x_597_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_a_595_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
v_val_586_ = v___x_600_;
goto v___jp_585_;
}
}
}
else
{
lean_object* v_a_603_; 
v_a_603_ = lean_ctor_get(v___x_594_, 0);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_594_, 1);
v_a_590_ = v_a_603_;
goto v___jp_589_;
}
}
else
{
lean_object* v_a_604_; 
lean_dec_ref(v___f_579_);
v_a_604_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_604_);
lean_dec_ref_known(v___x_592_, 1);
v_a_590_ = v_a_604_;
goto v___jp_589_;
}
v___jp_585_:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_587_, 0, v_val_586_);
v___x_588_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_583_, v___x_584_, v___x_587_, v___f_582_);
return v___x_588_;
}
v___jp_589_:
{
lean_object* v___x_591_; 
v___x_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_591_, 0, v_a_590_);
v_val_586_ = v___x_591_;
goto v___jp_585_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4___boxed(lean_object* v___f_605_, lean_object* v_name_606_, lean_object* v___f_607_, lean_object* v_k_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lasm_KV_workers___lam__4(v___f_605_, v_name_606_, v___f_607_, v_k_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5(lean_object* v_k_612_, lean_object* v_v_613_, lean_object* v___f_614_, lean_object* v_x_615_){
_start:
{
if (lean_obj_tag(v_x_615_) == 0)
{
lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_625_; 
lean_dec_ref(v___f_614_);
lean_dec_ref(v_v_613_);
lean_dec_ref(v_k_612_);
v_a_617_ = lean_ctor_get(v_x_615_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v_x_615_);
if (v_isSharedCheck_625_ == 0)
{
v___x_619_ = v_x_615_;
v_isShared_620_ = v_isSharedCheck_625_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v_x_615_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_625_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_622_; 
if (v_isShared_620_ == 0)
{
v___x_622_ = v___x_619_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_617_);
v___x_622_ = v_reuseFailAlloc_624_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_623_; 
v___x_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
return v___x_623_;
}
}
}
else
{
lean_object* v_a_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v_a_626_ = lean_ctor_get(v_x_615_, 0);
lean_inc(v_a_626_);
lean_dec_ref_known(v_x_615_, 1);
v___x_627_ = ((lean_object*)(l_Lasm_KV_workers___lam__5___closed__0));
v___x_628_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_628_, 0, v_k_612_);
v___x_629_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_629_, 0, v_v_613_);
v___x_630_ = lean_unsigned_to_nat(2u);
v___x_631_ = lean_mk_empty_array_with_capacity(v___x_630_);
v___x_632_ = lean_array_push(v___x_631_, v___x_628_);
v___x_633_ = lean_array_push(v___x_632_, v___x_629_);
v___x_634_ = lean_unsigned_to_nat(0u);
v___x_635_ = 0;
v___x_636_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_626_, v___x_627_, v___x_633_);
v___x_637_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_634_, v___x_635_, v___x_636_, v___f_614_);
return v___x_637_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5___boxed(lean_object* v_k_638_, lean_object* v_v_639_, lean_object* v___f_640_, lean_object* v_x_641_, lean_object* v___y_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_Lasm_KV_workers___lam__5(v_k_638_, v_v_639_, v___f_640_, v_x_641_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6(lean_object* v___f_644_, lean_object* v_name_645_, lean_object* v___f_646_, lean_object* v_k_647_, lean_object* v_v_648_){
_start:
{
lean_object* v___f_650_; lean_object* v___x_651_; uint8_t v___x_652_; lean_object* v_val_654_; lean_object* v_a_658_; lean_object* v___x_660_; 
v___f_650_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__5___boxed), 5, 3);
lean_closure_set(v___f_650_, 0, v_k_647_);
lean_closure_set(v___f_650_, 1, v_v_648_);
lean_closure_set(v___f_650_, 2, v___f_644_);
v___x_651_ = lean_unsigned_to_nat(0u);
v___x_652_ = 0;
v___x_660_ = l_Lasm_KV_binding(v_name_645_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_662_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_a_661_);
lean_dec_ref_known(v___x_660_, 1);
v___x_662_ = lean_apply_2(v___f_646_, v_a_661_, lean_box(0));
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_662_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_662_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
lean_ctor_set_tag(v___x_665_, 1);
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
v_val_654_ = v___x_668_;
goto v___jp_653_;
}
}
}
else
{
lean_object* v_a_671_; 
v_a_671_ = lean_ctor_get(v___x_662_, 0);
lean_inc(v_a_671_);
lean_dec_ref_known(v___x_662_, 1);
v_a_658_ = v_a_671_;
goto v___jp_657_;
}
}
else
{
lean_object* v_a_672_; 
lean_dec_ref(v___f_646_);
v_a_672_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_a_672_);
lean_dec_ref_known(v___x_660_, 1);
v_a_658_ = v_a_672_;
goto v___jp_657_;
}
v___jp_653_:
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_655_, 0, v_val_654_);
v___x_656_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_651_, v___x_652_, v___x_655_, v___f_650_);
return v___x_656_;
}
v___jp_657_:
{
lean_object* v___x_659_; 
v___x_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_659_, 0, v_a_658_);
v_val_654_ = v___x_659_;
goto v___jp_653_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6___boxed(lean_object* v___f_673_, lean_object* v_name_674_, lean_object* v___f_675_, lean_object* v_k_676_, lean_object* v_v_677_, lean_object* v___y_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Lasm_KV_workers___lam__6(v___f_673_, v_name_674_, v___f_675_, v_k_676_, v_v_677_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7(lean_object* v_k_681_, lean_object* v___f_682_, lean_object* v_x_683_){
_start:
{
if (lean_obj_tag(v_x_683_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref(v___f_682_);
lean_dec_ref(v_k_681_);
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
lean_object* v_a_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; uint8_t v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v_a_694_ = lean_ctor_get(v_x_683_, 0);
lean_inc(v_a_694_);
lean_dec_ref_known(v_x_683_, 1);
v___x_695_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_696_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_696_, 0, v_k_681_);
v___x_697_ = lean_unsigned_to_nat(1u);
v___x_698_ = lean_mk_empty_array_with_capacity(v___x_697_);
v___x_699_ = lean_array_push(v___x_698_, v___x_696_);
v___x_700_ = lean_unsigned_to_nat(0u);
v___x_701_ = 0;
v___x_702_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_694_, v___x_695_, v___x_699_);
v___x_703_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_700_, v___x_701_, v___x_702_, v___f_682_);
return v___x_703_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7___boxed(lean_object* v_k_704_, lean_object* v___f_705_, lean_object* v_x_706_, lean_object* v___y_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Lasm_KV_workers___lam__7(v_k_704_, v___f_705_, v_x_706_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8(lean_object* v___f_709_, lean_object* v_name_710_, lean_object* v_k_711_){
_start:
{
lean_object* v___f_713_; lean_object* v___x_714_; uint8_t v___x_715_; lean_object* v_val_717_; lean_object* v_a_721_; lean_object* v___x_723_; 
v___f_713_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__7___boxed), 4, 2);
lean_closure_set(v___f_713_, 0, v_k_711_);
lean_closure_set(v___f_713_, 1, v___f_709_);
v___x_714_ = lean_unsigned_to_nat(0u);
v___x_715_ = 0;
lean_inc_ref(v_name_710_);
v___x_723_ = l_Lasm_KV_binding(v_name_710_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_741_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_741_ == 0)
{
v___x_726_ = v___x_723_;
v_isShared_727_ = v_isSharedCheck_741_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_723_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_741_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
if (lean_obj_tag(v_a_724_) == 0)
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_731_; 
v___x_728_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_729_ = lean_string_append(v___x_728_, v_name_710_);
lean_dec_ref(v_name_710_);
if (v_isShared_727_ == 0)
{
lean_ctor_set_tag(v___x_726_, 18);
lean_ctor_set(v___x_726_, 0, v___x_729_);
v___x_731_ = v___x_726_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_729_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
v_a_721_ = v___x_731_;
goto v___jp_720_;
}
}
else
{
lean_object* v_val_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_del_object(v___x_726_);
lean_dec_ref(v_name_710_);
v_val_733_ = lean_ctor_get(v_a_724_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v_a_724_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v_a_724_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_val_733_);
lean_dec(v_a_724_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_val_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
v_val_717_ = v___x_738_;
goto v___jp_716_;
}
}
}
}
}
else
{
lean_object* v_a_742_; 
lean_dec_ref(v_name_710_);
v_a_742_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_723_, 1);
v_a_721_ = v_a_742_;
goto v___jp_720_;
}
v___jp_716_:
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_718_, 0, v_val_717_);
v___x_719_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_714_, v___x_715_, v___x_718_, v___f_713_);
return v___x_719_;
}
v___jp_720_:
{
lean_object* v___x_722_; 
v___x_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_722_, 0, v_a_721_);
v_val_717_ = v___x_722_;
goto v___jp_716_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8___boxed(lean_object* v___f_743_, lean_object* v_name_744_, lean_object* v_k_745_, lean_object* v___y_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_Lasm_KV_workers___lam__8(v___f_743_, v_name_744_, v_k_745_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers(lean_object* v_name_751_){
_start:
{
lean_object* v___f_752_; lean_object* v___f_753_; lean_object* v___f_754_; lean_object* v_delete_755_; lean_object* v_put_756_; lean_object* v_get_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___f_752_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_753_ = ((lean_object*)(l_Lasm_KV_workers___closed__1));
lean_inc_ref_n(v_name_751_, 3);
v___f_754_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__1___boxed), 3, 1);
lean_closure_set(v___f_754_, 0, v_name_751_);
lean_inc_ref(v___f_754_);
v_delete_755_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__4___boxed), 5, 3);
lean_closure_set(v_delete_755_, 0, v___f_752_);
lean_closure_set(v_delete_755_, 1, v_name_751_);
lean_closure_set(v_delete_755_, 2, v___f_754_);
v_put_756_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__6___boxed), 6, 3);
lean_closure_set(v_put_756_, 0, v___f_752_);
lean_closure_set(v_put_756_, 1, v_name_751_);
lean_closure_set(v_put_756_, 2, v___f_754_);
v_get_757_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__8___boxed), 4, 2);
lean_closure_set(v_get_757_, 0, v___f_753_);
lean_closure_set(v_get_757_, 1, v_name_751_);
v___x_758_ = ((lean_object*)(l_Lasm_KV_workers___closed__2));
v___x_759_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
lean_ctor_set(v___x_759_, 1, v_get_757_);
lean_ctor_set(v___x_759_, 2, v_put_756_);
lean_ctor_set(v___x_759_, 3, v_delete_755_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3(lean_object* v___f_761_, lean_object* v_x_762_){
_start:
{
if (lean_obj_tag(v_x_762_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_772_; 
lean_dec_ref(v___f_761_);
v_a_764_ = lean_ctor_get(v_x_762_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v_x_762_);
if (v_isSharedCheck_772_ == 0)
{
v___x_766_ = v_x_762_;
v_isShared_767_ = v_isSharedCheck_772_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v_x_762_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_772_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_771_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_770_; 
v___x_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
return v___x_770_;
}
}
}
else
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_793_; 
v_a_773_ = lean_ctor_get(v_x_762_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v_x_762_);
if (v_isSharedCheck_793_ == 0)
{
v___x_775_ = v_x_762_;
v_isShared_776_ = v_isSharedCheck_793_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v_x_762_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_793_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_777_; lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v_val_781_; lean_object* v___x_784_; 
v___x_777_ = ((lean_object*)(l_Lasm_KV_deno___lam__3___closed__0));
v___x_778_ = lean_unsigned_to_nat(0u);
v___x_779_ = 0;
v___x_784_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_a_773_, v___x_777_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v___x_787_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_785_);
lean_dec_ref_known(v___x_784_, 1);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v_a_785_);
v___x_787_ = v___x_775_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
v_val_781_ = v___x_787_;
goto v___jp_780_;
}
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; 
v_a_789_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_789_);
lean_dec_ref_known(v___x_784_, 1);
if (v_isShared_776_ == 0)
{
lean_ctor_set_tag(v___x_775_, 0);
lean_ctor_set(v___x_775_, 0, v_a_789_);
v___x_791_ = v___x_775_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
v_val_781_ = v___x_791_;
goto v___jp_780_;
}
}
v___jp_780_:
{
lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_782_, 0, v_val_781_);
v___x_783_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_778_, v___x_779_, v___x_782_, v___f_761_);
return v___x_783_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3___boxed(lean_object* v___f_794_, lean_object* v_x_795_, lean_object* v___y_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l_Lasm_KV_deno___lam__3(v___f_794_, v_x_795_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0(lean_object* v_name_798_, lean_object* v_a_799_, lean_object* v___x_800_, lean_object* v___f_801_, lean_object* v_k_802_){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; uint8_t v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_804_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_805_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_805_, 0, v_name_798_);
v___x_806_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_806_, 0, v_k_802_);
v___x_807_ = lean_unsigned_to_nat(2u);
v___x_808_ = lean_mk_empty_array_with_capacity(v___x_807_);
v___x_809_ = lean_array_push(v___x_808_, v___x_805_);
v___x_810_ = lean_array_push(v___x_809_, v___x_806_);
v___x_811_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_811_, 0, v___x_810_);
v___x_812_ = lean_unsigned_to_nat(1u);
v___x_813_ = lean_mk_empty_array_with_capacity(v___x_812_);
v___x_814_ = lean_array_push(v___x_813_, v___x_811_);
v___x_815_ = 0;
v___x_816_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_799_, v___x_804_, v___x_814_);
v___x_817_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_800_, v___x_815_, v___x_816_, v___f_801_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0___boxed(lean_object* v_name_818_, lean_object* v_a_819_, lean_object* v___x_820_, lean_object* v___f_821_, lean_object* v_k_822_, lean_object* v___y_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l_Lasm_KV_deno___lam__0(v_name_818_, v_a_819_, v___x_820_, v___f_821_, v_k_822_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1(lean_object* v_name_826_, lean_object* v_a_827_, lean_object* v___x_828_, lean_object* v___f_829_, lean_object* v_k_830_, lean_object* v_v_831_){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; uint8_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_833_ = ((lean_object*)(l_Lasm_KV_deno___lam__1___closed__0));
v___x_834_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_834_, 0, v_name_826_);
v___x_835_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_835_, 0, v_k_830_);
v___x_836_ = lean_unsigned_to_nat(2u);
v___x_837_ = lean_mk_empty_array_with_capacity(v___x_836_);
lean_inc_ref(v___x_837_);
v___x_838_ = lean_array_push(v___x_837_, v___x_834_);
v___x_839_ = lean_array_push(v___x_838_, v___x_835_);
v___x_840_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
v___x_841_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_841_, 0, v_v_831_);
v___x_842_ = lean_array_push(v___x_837_, v___x_840_);
v___x_843_ = lean_array_push(v___x_842_, v___x_841_);
v___x_844_ = 0;
v___x_845_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_827_, v___x_833_, v___x_843_);
v___x_846_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_828_, v___x_844_, v___x_845_, v___f_829_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1___boxed(lean_object* v_name_847_, lean_object* v_a_848_, lean_object* v___x_849_, lean_object* v___f_850_, lean_object* v_k_851_, lean_object* v_v_852_, lean_object* v___y_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l_Lasm_KV_deno___lam__1(v_name_847_, v_a_848_, v___x_849_, v___f_850_, v_k_851_, v_v_852_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2(lean_object* v_name_855_, lean_object* v_a_856_, lean_object* v___x_857_, lean_object* v___f_858_, lean_object* v_k_859_){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; uint8_t v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_861_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_862_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_862_, 0, v_name_855_);
v___x_863_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_863_, 0, v_k_859_);
v___x_864_ = lean_unsigned_to_nat(2u);
v___x_865_ = lean_mk_empty_array_with_capacity(v___x_864_);
v___x_866_ = lean_array_push(v___x_865_, v___x_862_);
v___x_867_ = lean_array_push(v___x_866_, v___x_863_);
v___x_868_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
v___x_869_ = lean_unsigned_to_nat(1u);
v___x_870_ = lean_mk_empty_array_with_capacity(v___x_869_);
v___x_871_ = lean_array_push(v___x_870_, v___x_868_);
v___x_872_ = 0;
v___x_873_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_856_, v___x_861_, v___x_871_);
v___x_874_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_857_, v___x_872_, v___x_873_, v___f_858_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2___boxed(lean_object* v_name_875_, lean_object* v_a_876_, lean_object* v___x_877_, lean_object* v___f_878_, lean_object* v_k_879_, lean_object* v___y_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Lasm_KV_deno___lam__2(v_name_875_, v_a_876_, v___x_877_, v___f_878_, v_k_879_);
return v_res_881_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0(void){
_start:
{
uint64_t v___x_882_; uint8_t v___x_883_; uint64_t v___x_884_; 
v___x_882_ = 8ULL;
v___x_883_ = 1;
v___x_884_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_883_, v___x_882_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(lean_object* v_o_886_, lean_object* v_name_887_, lean_object* v_args_888_){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; uint64_t v___x_893_; lean_object* v___x_894_; 
v___x_890_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1));
v___x_891_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_891_, 0, v_o_886_);
lean_ctor_set(v___x_891_, 1, v___x_890_);
lean_inc_ref(v_name_887_);
v___x_892_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_892_, 0, v_name_887_);
v___x_893_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0);
v___x_894_ = l_Lasm_JS_Value_invokeRaw(v___x_891_, v___x_892_, v_args_888_, v___x_893_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc(v_a_895_);
lean_dec_ref_known(v___x_894_, 1);
v___x_896_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1));
v___x_897_ = lean_string_append(v___x_896_, v_name_887_);
lean_dec_ref(v_name_887_);
v___x_898_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_897_, v_a_895_);
lean_dec(v_a_895_);
lean_dec_ref(v___x_897_);
return v___x_898_;
}
else
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
lean_dec_ref(v_name_887_);
v_a_899_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_894_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_894_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___boxed(lean_object* v_o_907_, lean_object* v_name_908_, lean_object* v_args_909_, lean_object* v___y_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_o_907_, v_name_908_, v_args_909_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno(lean_object* v_name_919_){
_start:
{
lean_object* v___f_921_; lean_object* v___f_922_; lean_object* v___x_923_; 
v___f_921_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_922_ = ((lean_object*)(l_Lasm_KV_deno___closed__0));
v___x_923_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v_a_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v_a_924_ = lean_ctor_get(v___x_923_, 0);
lean_inc(v_a_924_);
lean_dec_ref_known(v___x_923_, 1);
v___x_925_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_926_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_924_, v___x_925_);
if (lean_obj_tag(v___x_926_) == 0)
{
lean_object* v_a_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_a_927_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_a_927_);
lean_dec_ref_known(v___x_926_, 1);
v___x_928_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_929_ = lean_unsigned_to_nat(0u);
v___x_930_ = ((lean_object*)(l_Lasm_KV_deno___closed__3));
v___x_931_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_a_927_, v___x_928_, v___x_930_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_944_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_944_ == 0)
{
v___x_934_ = v___x_931_;
v_isShared_935_ = v_isSharedCheck_944_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_931_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_944_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___f_936_; lean_object* v___f_937_; lean_object* v___f_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_942_; 
lean_inc_n(v_a_932_, 2);
lean_inc_ref_n(v_name_919_, 2);
v___f_936_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__0___boxed), 6, 4);
lean_closure_set(v___f_936_, 0, v_name_919_);
lean_closure_set(v___f_936_, 1, v_a_932_);
lean_closure_set(v___f_936_, 2, v___x_929_);
lean_closure_set(v___f_936_, 3, v___f_922_);
v___f_937_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__1___boxed), 7, 4);
lean_closure_set(v___f_937_, 0, v_name_919_);
lean_closure_set(v___f_937_, 1, v_a_932_);
lean_closure_set(v___f_937_, 2, v___x_929_);
lean_closure_set(v___f_937_, 3, v___f_921_);
v___f_938_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__2___boxed), 6, 4);
lean_closure_set(v___f_938_, 0, v_name_919_);
lean_closure_set(v___f_938_, 1, v_a_932_);
lean_closure_set(v___f_938_, 2, v___x_929_);
lean_closure_set(v___f_938_, 3, v___f_921_);
v___x_939_ = ((lean_object*)(l_Lasm_KV_deno___closed__4));
v___x_940_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
lean_ctor_set(v___x_940_, 1, v___f_936_);
lean_ctor_set(v___x_940_, 2, v___f_937_);
lean_ctor_set(v___x_940_, 3, v___f_938_);
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 0, v___x_940_);
v___x_942_ = v___x_934_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_940_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec_ref(v_name_919_);
v_a_945_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_931_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_931_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
lean_dec_ref(v_name_919_);
v_a_953_ = lean_ctor_get(v___x_926_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_926_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_926_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
lean_dec_ref(v_name_919_);
v_a_961_ = lean_ctor_get(v___x_923_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___x_923_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_923_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___boxed(lean_object* v_name_969_, lean_object* v_a_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l_Lasm_KV_deno(v_name_969_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0(lean_object* v_name_972_, lean_object* v_k_973_){
_start:
{
lean_object* v_val_976_; lean_object* v___x_978_; 
v___x_978_ = l_Lasm_Fastly_kvGetText(v_name_972_, v_k_973_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
v_a_979_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_986_ == 0)
{
v___x_981_ = v___x_978_;
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_978_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
lean_ctor_set_tag(v___x_981_, 1);
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
v_val_976_ = v___x_984_;
goto v___jp_975_;
}
}
}
else
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
v_a_987_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_994_ == 0)
{
v___x_989_ = v___x_978_;
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_a_987_);
lean_dec(v___x_978_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_990_ == 0)
{
lean_ctor_set_tag(v___x_989_, 0);
v___x_992_ = v___x_989_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_a_987_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
v_val_976_ = v___x_992_;
goto v___jp_975_;
}
}
}
v___jp_975_:
{
lean_object* v___x_977_; 
v___x_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_977_, 0, v_val_976_);
return v___x_977_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0___boxed(lean_object* v_name_995_, lean_object* v_k_996_, lean_object* v___y_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Lasm_KV_fastly___lam__0(v_name_995_, v_k_996_);
lean_dec_ref(v_k_996_);
lean_dec_ref(v_name_995_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1(lean_object* v_name_999_, lean_object* v_k_1000_, lean_object* v_v_1001_){
_start:
{
lean_object* v_val_1004_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = lean_string_to_utf8(v_v_1001_);
v___x_1007_ = lasm_fastly_kv_put(v_name_999_, v_k_1000_, v___x_1006_);
lean_dec_ref(v___x_1006_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_1007_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_1007_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
lean_ctor_set_tag(v___x_1010_, 1);
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
v_val_1004_ = v___x_1013_;
goto v___jp_1003_;
}
}
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
v_a_1016_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_1007_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1007_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
lean_ctor_set_tag(v___x_1018_, 0);
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
v_val_1004_ = v___x_1021_;
goto v___jp_1003_;
}
}
}
v___jp_1003_:
{
lean_object* v___x_1005_; 
v___x_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1005_, 0, v_val_1004_);
return v___x_1005_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1___boxed(lean_object* v_name_1024_, lean_object* v_k_1025_, lean_object* v_v_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lasm_KV_fastly___lam__1(v_name_1024_, v_k_1025_, v_v_1026_);
lean_dec_ref(v_v_1026_);
lean_dec_ref(v_k_1025_);
lean_dec_ref(v_name_1024_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2(lean_object* v_name_1029_, lean_object* v_k_1030_){
_start:
{
lean_object* v_val_1033_; lean_object* v___x_1035_; 
v___x_1035_ = lasm_fastly_kv_delete(v_name_1029_, v_k_1030_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1043_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1038_ = v___x_1035_;
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_1035_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1041_; 
if (v_isShared_1039_ == 0)
{
lean_ctor_set_tag(v___x_1038_, 1);
v___x_1041_ = v___x_1038_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_a_1036_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
v_val_1033_ = v___x_1041_;
goto v___jp_1032_;
}
}
}
else
{
lean_object* v_a_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1051_; 
v_a_1044_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1046_ = v___x_1035_;
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_a_1044_);
lean_dec(v___x_1035_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1049_; 
if (v_isShared_1047_ == 0)
{
lean_ctor_set_tag(v___x_1046_, 0);
v___x_1049_ = v___x_1046_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_a_1044_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
v_val_1033_ = v___x_1049_;
goto v___jp_1032_;
}
}
}
v___jp_1032_:
{
lean_object* v___x_1034_; 
v___x_1034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1034_, 0, v_val_1033_);
return v___x_1034_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2___boxed(lean_object* v_name_1052_, lean_object* v_k_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lasm_KV_fastly___lam__2(v_name_1052_, v_k_1053_);
lean_dec_ref(v_k_1053_);
lean_dec_ref(v_name_1052_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly(lean_object* v_name_1057_){
_start:
{
lean_object* v___f_1058_; lean_object* v___f_1059_; lean_object* v___f_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
lean_inc_ref_n(v_name_1057_, 2);
v___f_1058_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1058_, 0, v_name_1057_);
v___f_1059_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1059_, 0, v_name_1057_);
v___f_1060_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1060_, 0, v_name_1057_);
v___x_1061_ = ((lean_object*)(l_Lasm_KV_fastly___closed__0));
v___x_1062_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
lean_ctor_set(v___x_1062_, 1, v___f_1058_);
lean_ctor_set(v___x_1062_, 2, v___f_1059_);
lean_ctor_set(v___x_1062_, 3, v___f_1060_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0(uint8_t v_a_1063_, uint8_t v_a_1064_, lean_object* v_____do__lift_1065_){
_start:
{
if (lean_obj_tag(v_____do__lift_1065_) == 0)
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = lean_box(v_a_1063_);
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1067_);
return v___x_1068_;
}
else
{
lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1076_; 
v_isSharedCheck_1076_ = !lean_is_exclusive(v_____do__lift_1065_);
if (v_isSharedCheck_1076_ == 0)
{
lean_object* v_unused_1077_; 
v_unused_1077_ = lean_ctor_get(v_____do__lift_1065_, 0);
lean_dec(v_unused_1077_);
v___x_1070_ = v_____do__lift_1065_;
v_isShared_1071_ = v_isSharedCheck_1076_;
goto v_resetjp_1069_;
}
else
{
lean_dec(v_____do__lift_1065_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1076_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1072_; lean_object* v___x_1074_; 
v___x_1072_ = lean_box(v_a_1064_);
if (v_isShared_1071_ == 0)
{
lean_ctor_set_tag(v___x_1070_, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1072_);
v___x_1074_ = v___x_1070_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v___x_1072_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0___boxed(lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_____do__lift_1080_, lean_object* v___y_1081_){
_start:
{
uint8_t v_a_3238__boxed_1082_; uint8_t v_a_3239__boxed_1083_; lean_object* v_res_1084_; 
v_a_3238__boxed_1082_ = lean_unbox(v_a_1078_);
v_a_3239__boxed_1083_ = lean_unbox(v_a_1079_);
v_res_1084_ = l_Lasm_KV_open___lam__0(v_a_3238__boxed_1082_, v_a_3239__boxed_1083_, v_____do__lift_1080_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1(lean_object* v_a_1085_, lean_object* v_k_1086_, lean_object* v___x_1087_, lean_object* v_x_1088_){
_start:
{
if (lean_obj_tag(v_x_1088_) == 0)
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1098_; 
lean_dec_ref(v___x_1087_);
lean_dec_ref(v_k_1086_);
lean_dec_ref(v_a_1085_);
v_a_1090_ = lean_ctor_get(v_x_1088_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v_x_1088_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1092_ = v_x_1088_;
v_isShared_1093_ = v_isSharedCheck_1098_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v_x_1088_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1098_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
lean_object* v___x_1096_; 
v___x_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
return v___x_1096_;
}
}
}
else
{
lean_object* v_a_1099_; uint8_t v___x_1100_; 
v_a_1099_ = lean_ctor_get(v_x_1088_, 0);
lean_inc(v_a_1099_);
lean_dec_ref_known(v_x_1088_, 1);
v___x_1100_ = lean_unbox(v_a_1099_);
lean_dec(v_a_1099_);
if (v___x_1100_ == 0)
{
lean_object* v_get_1101_; lean_object* v___x_1102_; 
lean_dec_ref(v___x_1087_);
v_get_1101_ = lean_ctor_get(v_a_1085_, 1);
lean_inc_ref(v_get_1101_);
lean_dec_ref(v_a_1085_);
v___x_1102_ = lean_apply_2(v_get_1101_, v_k_1086_, lean_box(0));
return v___x_1102_;
}
else
{
lean_object* v_get_1103_; lean_object* v___x_1104_; 
lean_dec_ref(v_a_1085_);
v_get_1103_ = lean_ctor_get(v___x_1087_, 1);
lean_inc_ref(v_get_1103_);
lean_dec_ref(v___x_1087_);
v___x_1104_ = lean_apply_2(v_get_1103_, v_k_1086_, lean_box(0));
return v___x_1104_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1___boxed(lean_object* v_a_1105_, lean_object* v_k_1106_, lean_object* v___x_1107_, lean_object* v_x_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lasm_KV_open___lam__1(v_a_1105_, v_k_1106_, v___x_1107_, v_x_1108_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2(lean_object* v_a_1111_, lean_object* v___x_1112_, uint8_t v_a_1113_, lean_object* v_name_1114_, uint8_t v_a_1115_, lean_object* v_k_1116_){
_start:
{
lean_object* v___f_1118_; lean_object* v___x_1119_; lean_object* v_val_1121_; uint8_t v_a_1125_; lean_object* v___x_1128_; 
v___f_1118_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1118_, 0, v_a_1111_);
lean_closure_set(v___f_1118_, 1, v_k_1116_);
lean_closure_set(v___f_1118_, 2, v___x_1112_);
v___x_1119_ = lean_unsigned_to_nat(0u);
v___x_1128_ = l_Lasm_KV_binding(v_name_1114_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_object* v_a_1129_; 
v_a_1129_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_a_1129_);
lean_dec_ref_known(v___x_1128_, 1);
if (lean_obj_tag(v_a_1129_) == 0)
{
v_a_1125_ = v_a_1113_;
goto v___jp_1124_;
}
else
{
lean_dec_ref_known(v_a_1129_, 1);
v_a_1125_ = v_a_1115_;
goto v___jp_1124_;
}
}
else
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
v_a_1130_ = lean_ctor_get(v___x_1128_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1128_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1128_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1128_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
lean_ctor_set_tag(v___x_1132_, 0);
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
v_val_1121_ = v___x_1135_;
goto v___jp_1120_;
}
}
}
v___jp_1120_:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1122_, 0, v_val_1121_);
v___x_1123_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1119_, v_a_1113_, v___x_1122_, v___f_1118_);
return v___x_1123_;
}
v___jp_1124_:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = lean_box(v_a_1125_);
v___x_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
v_val_1121_ = v___x_1127_;
goto v___jp_1120_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2___boxed(lean_object* v_a_1138_, lean_object* v___x_1139_, lean_object* v_a_1140_, lean_object* v_name_1141_, lean_object* v_a_1142_, lean_object* v_k_1143_, lean_object* v___y_1144_){
_start:
{
uint8_t v_a_3313__boxed_1145_; uint8_t v_a_3314__boxed_1146_; lean_object* v_res_1147_; 
v_a_3313__boxed_1145_ = lean_unbox(v_a_1140_);
v_a_3314__boxed_1146_ = lean_unbox(v_a_1142_);
v_res_1147_ = l_Lasm_KV_open___lam__2(v_a_1138_, v___x_1139_, v_a_3313__boxed_1145_, v_name_1141_, v_a_3314__boxed_1146_, v_k_1143_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3(lean_object* v_a_1148_, lean_object* v_k_1149_, lean_object* v_v_1150_, lean_object* v___x_1151_, lean_object* v_x_1152_){
_start:
{
if (lean_obj_tag(v_x_1152_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1162_; 
lean_dec_ref(v___x_1151_);
lean_dec_ref(v_v_1150_);
lean_dec_ref(v_k_1149_);
lean_dec_ref(v_a_1148_);
v_a_1154_ = lean_ctor_get(v_x_1152_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v_x_1152_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1156_ = v_x_1152_;
v_isShared_1157_ = v_isSharedCheck_1162_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v_x_1152_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1162_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
lean_object* v___x_1160_; 
v___x_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
return v___x_1160_;
}
}
}
else
{
lean_object* v_a_1163_; uint8_t v___x_1164_; 
v_a_1163_ = lean_ctor_get(v_x_1152_, 0);
lean_inc(v_a_1163_);
lean_dec_ref_known(v_x_1152_, 1);
v___x_1164_ = lean_unbox(v_a_1163_);
lean_dec(v_a_1163_);
if (v___x_1164_ == 0)
{
lean_object* v_put_1165_; lean_object* v___x_1166_; 
lean_dec_ref(v___x_1151_);
v_put_1165_ = lean_ctor_get(v_a_1148_, 2);
lean_inc_ref(v_put_1165_);
lean_dec_ref(v_a_1148_);
v___x_1166_ = lean_apply_3(v_put_1165_, v_k_1149_, v_v_1150_, lean_box(0));
return v___x_1166_;
}
else
{
lean_object* v_put_1167_; lean_object* v___x_1168_; 
lean_dec_ref(v_a_1148_);
v_put_1167_ = lean_ctor_get(v___x_1151_, 2);
lean_inc_ref(v_put_1167_);
lean_dec_ref(v___x_1151_);
v___x_1168_ = lean_apply_3(v_put_1167_, v_k_1149_, v_v_1150_, lean_box(0));
return v___x_1168_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3___boxed(lean_object* v_a_1169_, lean_object* v_k_1170_, lean_object* v_v_1171_, lean_object* v___x_1172_, lean_object* v_x_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Lasm_KV_open___lam__3(v_a_1169_, v_k_1170_, v_v_1171_, v___x_1172_, v_x_1173_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4(lean_object* v_a_1176_, lean_object* v___x_1177_, uint8_t v_a_1178_, lean_object* v_name_1179_, lean_object* v___f_1180_, lean_object* v_k_1181_, lean_object* v_v_1182_){
_start:
{
lean_object* v___f_1184_; lean_object* v___x_1185_; lean_object* v_val_1187_; lean_object* v_a_1191_; lean_object* v___x_1193_; 
v___f_1184_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__3___boxed), 6, 4);
lean_closure_set(v___f_1184_, 0, v_a_1176_);
lean_closure_set(v___f_1184_, 1, v_k_1181_);
lean_closure_set(v___f_1184_, 2, v_v_1182_);
lean_closure_set(v___f_1184_, 3, v___x_1177_);
v___x_1185_ = lean_unsigned_to_nat(0u);
v___x_1193_ = l_Lasm_KV_binding(v_name_1179_);
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v_a_1194_; lean_object* v___x_1195_; 
v_a_1194_ = lean_ctor_get(v___x_1193_, 0);
lean_inc(v_a_1194_);
lean_dec_ref_known(v___x_1193_, 1);
v___x_1195_ = lean_apply_2(v___f_1180_, v_a_1194_, lean_box(0));
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_object* v_a_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1203_; 
v_a_1196_ = lean_ctor_get(v___x_1195_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1195_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1198_ = v___x_1195_;
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_a_1196_);
lean_dec(v___x_1195_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1201_; 
if (v_isShared_1199_ == 0)
{
lean_ctor_set_tag(v___x_1198_, 1);
v___x_1201_ = v___x_1198_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_a_1196_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
v_val_1187_ = v___x_1201_;
goto v___jp_1186_;
}
}
}
else
{
lean_object* v_a_1204_; 
v_a_1204_ = lean_ctor_get(v___x_1195_, 0);
lean_inc(v_a_1204_);
lean_dec_ref_known(v___x_1195_, 1);
v_a_1191_ = v_a_1204_;
goto v___jp_1190_;
}
}
else
{
lean_object* v_a_1205_; 
lean_dec_ref(v___f_1180_);
v_a_1205_ = lean_ctor_get(v___x_1193_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1193_, 1);
v_a_1191_ = v_a_1205_;
goto v___jp_1190_;
}
v___jp_1186_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1188_, 0, v_val_1187_);
v___x_1189_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1185_, v_a_1178_, v___x_1188_, v___f_1184_);
return v___x_1189_;
}
v___jp_1190_:
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1192_, 0, v_a_1191_);
v_val_1187_ = v___x_1192_;
goto v___jp_1186_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4___boxed(lean_object* v_a_1206_, lean_object* v___x_1207_, lean_object* v_a_1208_, lean_object* v_name_1209_, lean_object* v___f_1210_, lean_object* v_k_1211_, lean_object* v_v_1212_, lean_object* v___y_1213_){
_start:
{
uint8_t v_a_3407__boxed_1214_; lean_object* v_res_1215_; 
v_a_3407__boxed_1214_ = lean_unbox(v_a_1208_);
v_res_1215_ = l_Lasm_KV_open___lam__4(v_a_1206_, v___x_1207_, v_a_3407__boxed_1214_, v_name_1209_, v___f_1210_, v_k_1211_, v_v_1212_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5(lean_object* v_a_1216_, lean_object* v_k_1217_, lean_object* v___x_1218_, lean_object* v_x_1219_){
_start:
{
if (lean_obj_tag(v_x_1219_) == 0)
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1229_; 
lean_dec_ref(v___x_1218_);
lean_dec_ref(v_k_1217_);
lean_dec_ref(v_a_1216_);
v_a_1221_ = lean_ctor_get(v_x_1219_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v_x_1219_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1223_ = v_x_1219_;
v_isShared_1224_ = v_isSharedCheck_1229_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v_x_1219_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1229_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_a_1221_);
v___x_1226_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
lean_object* v___x_1227_; 
v___x_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1226_);
return v___x_1227_;
}
}
}
else
{
lean_object* v_a_1230_; uint8_t v___x_1231_; 
v_a_1230_ = lean_ctor_get(v_x_1219_, 0);
lean_inc(v_a_1230_);
lean_dec_ref_known(v_x_1219_, 1);
v___x_1231_ = lean_unbox(v_a_1230_);
lean_dec(v_a_1230_);
if (v___x_1231_ == 0)
{
lean_object* v_delete_1232_; lean_object* v___x_1233_; 
lean_dec_ref(v___x_1218_);
v_delete_1232_ = lean_ctor_get(v_a_1216_, 3);
lean_inc_ref(v_delete_1232_);
lean_dec_ref(v_a_1216_);
v___x_1233_ = lean_apply_2(v_delete_1232_, v_k_1217_, lean_box(0));
return v___x_1233_;
}
else
{
lean_object* v_delete_1234_; lean_object* v___x_1235_; 
lean_dec_ref(v_a_1216_);
v_delete_1234_ = lean_ctor_get(v___x_1218_, 3);
lean_inc_ref(v_delete_1234_);
lean_dec_ref(v___x_1218_);
v___x_1235_ = lean_apply_2(v_delete_1234_, v_k_1217_, lean_box(0));
return v___x_1235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5___boxed(lean_object* v_a_1236_, lean_object* v_k_1237_, lean_object* v___x_1238_, lean_object* v_x_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l_Lasm_KV_open___lam__5(v_a_1236_, v_k_1237_, v___x_1238_, v_x_1239_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6(lean_object* v_a_1242_, lean_object* v___x_1243_, uint8_t v_a_1244_, lean_object* v_name_1245_, lean_object* v___f_1246_, lean_object* v_k_1247_){
_start:
{
lean_object* v___f_1249_; lean_object* v___x_1250_; lean_object* v_val_1252_; lean_object* v_a_1256_; lean_object* v___x_1258_; 
v___f_1249_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__5___boxed), 5, 3);
lean_closure_set(v___f_1249_, 0, v_a_1242_);
lean_closure_set(v___f_1249_, 1, v_k_1247_);
lean_closure_set(v___f_1249_, 2, v___x_1243_);
v___x_1250_ = lean_unsigned_to_nat(0u);
v___x_1258_ = l_Lasm_KV_binding(v_name_1245_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v_a_1259_; lean_object* v___x_1260_; 
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
lean_inc(v_a_1259_);
lean_dec_ref_known(v___x_1258_, 1);
v___x_1260_ = lean_apply_2(v___f_1246_, v_a_1259_, lean_box(0));
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1268_; 
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1263_ = v___x_1260_;
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1260_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1266_; 
if (v_isShared_1264_ == 0)
{
lean_ctor_set_tag(v___x_1263_, 1);
v___x_1266_ = v___x_1263_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1261_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
v_val_1252_ = v___x_1266_;
goto v___jp_1251_;
}
}
}
else
{
lean_object* v_a_1269_; 
v_a_1269_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_a_1269_);
lean_dec_ref_known(v___x_1260_, 1);
v_a_1256_ = v_a_1269_;
goto v___jp_1255_;
}
}
else
{
lean_object* v_a_1270_; 
lean_dec_ref(v___f_1246_);
v_a_1270_ = lean_ctor_get(v___x_1258_, 0);
lean_inc(v_a_1270_);
lean_dec_ref_known(v___x_1258_, 1);
v_a_1256_ = v_a_1270_;
goto v___jp_1255_;
}
v___jp_1251_:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1253_, 0, v_val_1252_);
v___x_1254_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1250_, v_a_1244_, v___x_1253_, v___f_1249_);
return v___x_1254_;
}
v___jp_1255_:
{
lean_object* v___x_1257_; 
v___x_1257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1257_, 0, v_a_1256_);
v_val_1252_ = v___x_1257_;
goto v___jp_1251_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6___boxed(lean_object* v_a_1271_, lean_object* v___x_1272_, lean_object* v_a_1273_, lean_object* v_name_1274_, lean_object* v___f_1275_, lean_object* v_k_1276_, lean_object* v___y_1277_){
_start:
{
uint8_t v_a_3504__boxed_1278_; lean_object* v_res_1279_; 
v_a_3504__boxed_1278_ = lean_unbox(v_a_1273_);
v_res_1279_ = l_Lasm_KV_open___lam__6(v_a_1271_, v___x_1272_, v_a_3504__boxed_1278_, v_name_1274_, v___f_1275_, v_k_1276_);
return v_res_1279_;
}
}
static uint32_t _init_l_Lasm_KV_open___closed__1(void){
_start:
{
lean_object* v___x_1281_; uint32_t v___x_1282_; 
v___x_1281_ = lean_box(0);
v___x_1282_ = lasm_fetch_platform(v___x_1281_);
return v___x_1282_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__2(void){
_start:
{
uint32_t v___x_1283_; uint32_t v___x_1284_; uint8_t v___x_1285_; 
v___x_1283_ = 2;
v___x_1284_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1285_ = lean_uint32_dec_eq(v___x_1284_, v___x_1283_);
return v___x_1285_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__3(void){
_start:
{
uint32_t v___x_1286_; uint32_t v___x_1287_; uint8_t v___x_1288_; 
v___x_1286_ = 0;
v___x_1287_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1288_ = lean_uint32_dec_eq(v___x_1287_, v___x_1286_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open(lean_object* v_name_1290_){
_start:
{
uint8_t v_a_1293_; uint8_t v___x_1326_; 
v___x_1326_ = lean_uint8_once(&l_Lasm_KV_open___closed__2, &l_Lasm_KV_open___closed__2_once, _init_l_Lasm_KV_open___closed__2);
if (v___x_1326_ == 0)
{
uint8_t v___x_1327_; 
v___x_1327_ = lean_uint8_once(&l_Lasm_KV_open___closed__3, &l_Lasm_KV_open___closed__3_once, _init_l_Lasm_KV_open___closed__3);
if (v___x_1327_ == 0)
{
lean_object* v___x_1328_; 
lean_dec_ref(v_name_1290_);
v___x_1328_ = l_Lasm_KV_memory();
return v___x_1328_;
}
else
{
lean_object* v___x_1329_; 
v___x_1329_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_object* v_a_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v_a_1330_ = lean_ctor_get(v___x_1329_, 0);
lean_inc(v_a_1330_);
lean_dec_ref_known(v___x_1329_, 1);
v___x_1331_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_1332_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1330_, v___x_1331_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_object* v_a_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v_a_1333_ = lean_ctor_get(v___x_1332_, 0);
lean_inc(v_a_1333_);
lean_dec_ref_known(v___x_1332_, 1);
v___x_1334_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_1335_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_a_1333_, v___x_1334_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_a_1336_);
lean_dec_ref_known(v___x_1335_, 1);
if (lean_obj_tag(v_a_1336_) == 9)
{
lean_object* v___x_1337_; 
lean_dec_ref_known(v_a_1336_, 2);
v___x_1337_ = l_Lasm_KV_deno(v_name_1290_);
if (lean_obj_tag(v___x_1337_) == 0)
{
return v___x_1337_;
}
else
{
lean_object* v___x_1338_; 
lean_dec_ref_known(v___x_1337_, 1);
v___x_1338_ = l_Lasm_KV_memory();
return v___x_1338_;
}
}
else
{
lean_dec(v_a_1336_);
v_a_1293_ = v___x_1326_;
goto v___jp_1292_;
}
}
else
{
lean_dec_ref_known(v___x_1335_, 1);
v_a_1293_ = v___x_1326_;
goto v___jp_1292_;
}
}
else
{
lean_dec_ref_known(v___x_1332_, 1);
v_a_1293_ = v___x_1326_;
goto v___jp_1292_;
}
}
else
{
lean_object* v_a_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1346_; 
lean_dec_ref(v_name_1290_);
v_a_1339_ = lean_ctor_get(v___x_1329_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1341_ = v___x_1329_;
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_a_1339_);
lean_dec(v___x_1329_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1344_; 
if (v_isShared_1342_ == 0)
{
v___x_1344_ = v___x_1341_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_a_1339_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
}
}
else
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1347_ = ((lean_object*)(l_Lasm_KV_open___closed__4));
v___x_1348_ = lasm_fastly_kv_get(v_name_1290_, v___x_1347_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1356_; 
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1356_ == 0)
{
lean_object* v_unused_1357_; 
v_unused_1357_ = lean_ctor_get(v___x_1348_, 0);
lean_dec(v_unused_1357_);
v___x_1350_ = v___x_1348_;
v_isShared_1351_ = v_isSharedCheck_1356_;
goto v_resetjp_1349_;
}
else
{
lean_dec(v___x_1348_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1356_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1352_; lean_object* v___x_1354_; 
v___x_1352_ = l_Lasm_KV_fastly(v_name_1290_);
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 0, v___x_1352_);
v___x_1354_ = v___x_1350_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v___x_1352_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
}
}
}
else
{
lean_object* v___x_1358_; 
lean_dec_ref_known(v___x_1348_, 1);
lean_dec_ref(v_name_1290_);
v___x_1358_ = l_Lasm_KV_memory();
return v___x_1358_;
}
}
v___jp_1292_:
{
lean_object* v___x_1294_; 
v___x_1294_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_1294_) == 0)
{
lean_object* v_a_1295_; uint8_t v___x_1296_; 
v_a_1295_ = lean_ctor_get(v___x_1294_, 0);
lean_inc(v_a_1295_);
lean_dec_ref_known(v___x_1294_, 1);
v___x_1296_ = lean_unbox(v_a_1295_);
if (v___x_1296_ == 0)
{
lean_object* v___x_1297_; 
lean_dec(v_a_1295_);
lean_dec_ref(v_name_1290_);
v___x_1297_ = l_Lasm_KV_memory();
return v___x_1297_;
}
else
{
lean_object* v___x_1298_; lean_object* v___f_1299_; lean_object* v___x_1300_; lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1317_; 
v___x_1298_ = lean_box(v_a_1293_);
lean_inc(v_a_1295_);
v___f_1299_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1299_, 0, v___x_1298_);
lean_closure_set(v___f_1299_, 1, v_a_1295_);
v___x_1300_ = l_Lasm_KV_memory();
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1303_ = v___x_1300_;
v_isShared_1304_ = v_isSharedCheck_1317_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1300_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1317_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___f_1307_; lean_object* v___x_1308_; lean_object* v___f_1309_; lean_object* v___x_1310_; lean_object* v___f_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1315_; 
lean_inc_ref_n(v_name_1290_, 3);
v___x_1305_ = l_Lasm_KV_workers(v_name_1290_);
v___x_1306_ = lean_box(v_a_1293_);
lean_inc_ref_n(v___x_1305_, 2);
lean_inc_n(v_a_1301_, 2);
v___f_1307_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__2___boxed), 7, 5);
lean_closure_set(v___f_1307_, 0, v_a_1301_);
lean_closure_set(v___f_1307_, 1, v___x_1305_);
lean_closure_set(v___f_1307_, 2, v___x_1306_);
lean_closure_set(v___f_1307_, 3, v_name_1290_);
lean_closure_set(v___f_1307_, 4, v_a_1295_);
v___x_1308_ = lean_box(v_a_1293_);
lean_inc_ref(v___f_1299_);
v___f_1309_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__4___boxed), 8, 5);
lean_closure_set(v___f_1309_, 0, v_a_1301_);
lean_closure_set(v___f_1309_, 1, v___x_1305_);
lean_closure_set(v___f_1309_, 2, v___x_1308_);
lean_closure_set(v___f_1309_, 3, v_name_1290_);
lean_closure_set(v___f_1309_, 4, v___f_1299_);
v___x_1310_ = lean_box(v_a_1293_);
v___f_1311_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__6___boxed), 7, 5);
lean_closure_set(v___f_1311_, 0, v_a_1301_);
lean_closure_set(v___f_1311_, 1, v___x_1305_);
lean_closure_set(v___f_1311_, 2, v___x_1310_);
lean_closure_set(v___f_1311_, 3, v_name_1290_);
lean_closure_set(v___f_1311_, 4, v___f_1299_);
v___x_1312_ = ((lean_object*)(l_Lasm_KV_open___closed__0));
v___x_1313_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
lean_ctor_set(v___x_1313_, 1, v___f_1307_);
lean_ctor_set(v___x_1313_, 2, v___f_1309_);
lean_ctor_set(v___x_1313_, 3, v___f_1311_);
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v___x_1313_);
v___x_1315_ = v___x_1303_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v___x_1313_);
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
else
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
lean_dec_ref(v_name_1290_);
v_a_1318_ = lean_ctor_get(v___x_1294_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1294_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1294_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1294_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___boxed(lean_object* v_name_1359_, lean_object* v_a_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_Lasm_KV_open(v_name_1359_);
return v_res_1361_;
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
