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
lean_object* v_k_423_; lean_object* v___x_424_; 
v_k_423_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_423_, 0, v_key_421_);
v___x_424_ = l_Lasm_JS_Wire_encodeIO(v_k_423_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; uint32_t v___x_426_; uint32_t v___x_427_; uint64_t v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
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
v___x_431_ = lean_unsigned_to_nat(2u);
v___x_432_ = lean_mk_empty_array_with_capacity(v___x_431_);
v___x_433_ = lean_array_push(v___x_432_, v_k_423_);
v___x_434_ = lean_array_push(v___x_433_, v___x_430_);
v___x_435_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
v___x_436_ = lasm_js_call(v___x_426_, v___x_427_, v___x_428_, v_a_425_, v___x_435_);
lean_dec_ref_known(v___x_435_, 1);
lean_dec(v_a_425_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v_a_437_; lean_object* v___x_438_; 
v_a_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_a_437_);
lean_dec_ref_known(v___x_436_, 1);
v___x_438_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_437_);
lean_dec(v_a_437_);
return v___x_438_;
}
else
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
v_a_439_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_446_ == 0)
{
v___x_441_ = v___x_436_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_436_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_442_ == 0)
{
v___x_444_ = v___x_441_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_439_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_dec_ref_known(v_k_423_, 1);
lean_dec(v_o_420_);
v_a_447_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_424_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_424_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___boxed(lean_object* v_o_455_, lean_object* v_key_456_, lean_object* v_a_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_o_455_, v_key_456_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_binding(lean_object* v_name_459_){
_start:
{
lean_object* v_found_465_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = l_Lasm_Fetch_platformEnv;
v___x_470_ = lean_st_ref_get(v___x_469_);
switch(lean_obj_tag(v___x_470_))
{
case 9:
{
lean_object* v_value_471_; lean_object* v___x_472_; 
v_value_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_value_471_);
lean_dec_ref_known(v___x_470_, 2);
v___x_472_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_value_471_, v_name_459_);
if (lean_obj_tag(v___x_472_) == 0)
{
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_473_);
lean_dec_ref_known(v___x_472_, 1);
v_found_465_ = v_a_473_;
goto v___jp_464_;
}
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
v_a_474_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_472_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_472_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
lean_ctor_set_tag(v___x_476_, 1);
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_472_, 1);
goto v___jp_461_;
}
}
case 8:
{
lean_object* v___x_482_; 
v___x_482_ = l_Lasm_JS_Data_field(v___x_470_, v_name_459_);
lean_dec_ref(v_name_459_);
lean_dec_ref_known(v___x_470_, 1);
v_found_465_ = v___x_482_;
goto v___jp_464_;
}
default: 
{
lean_dec(v___x_470_);
lean_dec_ref(v_name_459_);
goto v___jp_461_;
}
}
v___jp_461_:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_box(0);
v___x_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
return v___x_463_;
}
v___jp_464_:
{
if (lean_obj_tag(v_found_465_) == 9)
{
lean_object* v_value_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v_value_466_ = lean_ctor_get(v_found_465_, 0);
lean_inc(v_value_466_);
lean_dec_ref_known(v_found_465_, 2);
v___x_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_467_, 0, v_value_466_);
v___x_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
return v___x_468_;
}
else
{
lean_dec(v_found_465_);
goto v___jp_461_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_binding___boxed(lean_object* v_name_483_, lean_object* v_a_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lasm_KV_binding(v_name_483_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0(lean_object* v_x_486_){
_start:
{
if (lean_obj_tag(v_x_486_) == 0)
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_496_; 
v_a_488_ = lean_ctor_get(v_x_486_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v_x_486_);
if (v_isSharedCheck_496_ == 0)
{
v___x_490_ = v_x_486_;
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v_x_486_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_488_);
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
else
{
lean_object* v___x_497_; 
lean_dec_ref_known(v_x_486_, 1);
v___x_497_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__1___closed__1));
return v___x_497_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0___boxed(lean_object* v_x_498_, lean_object* v___y_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Lasm_KV_workers___lam__0(v_x_498_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2(lean_object* v_x_501_){
_start:
{
if (lean_obj_tag(v_x_501_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_511_; 
v_a_503_ = lean_ctor_get(v_x_501_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v_x_501_);
if (v_isSharedCheck_511_ == 0)
{
v___x_505_ = v_x_501_;
v_isShared_506_ = v_isSharedCheck_511_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v_x_501_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_511_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_503_);
v___x_508_ = v_reuseFailAlloc_510_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
lean_object* v___x_509_; 
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
return v___x_509_;
}
}
}
else
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_529_; 
v_a_512_ = lean_ctor_get(v_x_501_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v_x_501_);
if (v_isSharedCheck_529_ == 0)
{
v___x_514_ = v_x_501_;
v_isShared_515_ = v_isSharedCheck_529_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v_x_501_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_529_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
if (lean_obj_tag(v_a_512_) == 4)
{
lean_object* v_s_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_527_; 
v_s_516_ = lean_ctor_get(v_a_512_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v_a_512_);
if (v_isSharedCheck_527_ == 0)
{
v___x_518_ = v_a_512_;
v_isShared_519_ = v_isSharedCheck_527_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_s_516_);
lean_dec(v_a_512_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_527_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
lean_ctor_set_tag(v___x_518_, 1);
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_s_516_);
v___x_521_ = v_reuseFailAlloc_526_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_523_; 
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 0, v___x_521_);
v___x_523_ = v___x_514_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_521_);
v___x_523_ = v_reuseFailAlloc_525_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
lean_object* v___x_524_; 
v___x_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_524_, 0, v___x_523_);
return v___x_524_;
}
}
}
}
else
{
lean_object* v___x_528_; 
lean_del_object(v___x_514_);
lean_dec(v_a_512_);
v___x_528_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__0___closed__1));
return v___x_528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2___boxed(lean_object* v_x_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Lasm_KV_workers___lam__2(v_x_530_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1(lean_object* v_name_534_, lean_object* v_____do__lift_535_){
_start:
{
if (lean_obj_tag(v_____do__lift_535_) == 0)
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_537_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_538_ = lean_string_append(v___x_537_, v_name_534_);
v___x_539_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
v___x_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
return v___x_540_;
}
else
{
lean_object* v_val_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
v_val_541_ = lean_ctor_get(v_____do__lift_535_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v_____do__lift_535_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v_____do__lift_535_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_val_541_);
lean_dec(v_____do__lift_535_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
lean_ctor_set_tag(v___x_543_, 0);
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_val_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1___boxed(lean_object* v_name_549_, lean_object* v_____do__lift_550_, lean_object* v___y_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lasm_KV_workers___lam__1(v_name_549_, v_____do__lift_550_);
lean_dec_ref(v_name_549_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3(lean_object* v_k_554_, lean_object* v___f_555_, lean_object* v_x_556_){
_start:
{
if (lean_obj_tag(v_x_556_) == 0)
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_566_; 
lean_dec_ref(v___f_555_);
lean_dec_ref(v_k_554_);
v_a_558_ = lean_ctor_get(v_x_556_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v_x_556_);
if (v_isSharedCheck_566_ == 0)
{
v___x_560_ = v_x_556_;
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v_x_556_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_558_);
v___x_563_ = v_reuseFailAlloc_565_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
lean_object* v___x_564_; 
v___x_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
}
}
else
{
lean_object* v_a_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; uint8_t v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v_a_567_ = lean_ctor_get(v_x_556_, 0);
lean_inc(v_a_567_);
lean_dec_ref_known(v_x_556_, 1);
v___x_568_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_569_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_569_, 0, v_k_554_);
v___x_570_ = lean_unsigned_to_nat(1u);
v___x_571_ = lean_mk_empty_array_with_capacity(v___x_570_);
v___x_572_ = lean_array_push(v___x_571_, v___x_569_);
v___x_573_ = lean_unsigned_to_nat(0u);
v___x_574_ = 0;
v___x_575_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_567_, v___x_568_, v___x_572_);
v___x_576_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_573_, v___x_574_, v___x_575_, v___f_555_);
return v___x_576_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3___boxed(lean_object* v_k_577_, lean_object* v___f_578_, lean_object* v_x_579_, lean_object* v___y_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Lasm_KV_workers___lam__3(v_k_577_, v___f_578_, v_x_579_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4(lean_object* v___f_582_, lean_object* v_name_583_, lean_object* v___f_584_, lean_object* v_k_585_){
_start:
{
lean_object* v___f_587_; lean_object* v___x_588_; uint8_t v___x_589_; lean_object* v_val_591_; lean_object* v_a_595_; lean_object* v___x_597_; 
v___f_587_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__3___boxed), 4, 2);
lean_closure_set(v___f_587_, 0, v_k_585_);
lean_closure_set(v___f_587_, 1, v___f_582_);
v___x_588_ = lean_unsigned_to_nat(0u);
v___x_589_ = 0;
v___x_597_ = l_Lasm_KV_binding(v_name_583_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_599_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_a_598_);
lean_dec_ref_known(v___x_597_, 1);
v___x_599_ = lean_apply_2(v___f_584_, v_a_598_, lean_box(0));
if (lean_obj_tag(v___x_599_) == 0)
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
v_a_600_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_599_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_599_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
lean_ctor_set_tag(v___x_602_, 1);
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_600_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
v_val_591_ = v___x_605_;
goto v___jp_590_;
}
}
}
else
{
lean_object* v_a_608_; 
v_a_608_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_a_608_);
lean_dec_ref_known(v___x_599_, 1);
v_a_595_ = v_a_608_;
goto v___jp_594_;
}
}
else
{
lean_object* v_a_609_; 
lean_dec_ref(v___f_584_);
v_a_609_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_a_609_);
lean_dec_ref_known(v___x_597_, 1);
v_a_595_ = v_a_609_;
goto v___jp_594_;
}
v___jp_590_:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_592_, 0, v_val_591_);
v___x_593_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_588_, v___x_589_, v___x_592_, v___f_587_);
return v___x_593_;
}
v___jp_594_:
{
lean_object* v___x_596_; 
v___x_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_596_, 0, v_a_595_);
v_val_591_ = v___x_596_;
goto v___jp_590_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4___boxed(lean_object* v___f_610_, lean_object* v_name_611_, lean_object* v___f_612_, lean_object* v_k_613_, lean_object* v___y_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lasm_KV_workers___lam__4(v___f_610_, v_name_611_, v___f_612_, v_k_613_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5(lean_object* v_k_617_, lean_object* v_v_618_, lean_object* v___f_619_, lean_object* v_x_620_){
_start:
{
if (lean_obj_tag(v_x_620_) == 0)
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_630_; 
lean_dec_ref(v___f_619_);
lean_dec_ref(v_v_618_);
lean_dec_ref(v_k_617_);
v_a_622_ = lean_ctor_get(v_x_620_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v_x_620_);
if (v_isSharedCheck_630_ == 0)
{
v___x_624_ = v_x_620_;
v_isShared_625_ = v_isSharedCheck_630_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v_x_620_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_630_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_627_; 
if (v_isShared_625_ == 0)
{
v___x_627_ = v___x_624_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_622_);
v___x_627_ = v_reuseFailAlloc_629_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
lean_object* v___x_628_; 
v___x_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
return v___x_628_;
}
}
}
else
{
lean_object* v_a_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v_a_631_ = lean_ctor_get(v_x_620_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v_x_620_, 1);
v___x_632_ = ((lean_object*)(l_Lasm_KV_workers___lam__5___closed__0));
v___x_633_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_633_, 0, v_k_617_);
v___x_634_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_634_, 0, v_v_618_);
v___x_635_ = lean_unsigned_to_nat(2u);
v___x_636_ = lean_mk_empty_array_with_capacity(v___x_635_);
v___x_637_ = lean_array_push(v___x_636_, v___x_633_);
v___x_638_ = lean_array_push(v___x_637_, v___x_634_);
v___x_639_ = lean_unsigned_to_nat(0u);
v___x_640_ = 0;
v___x_641_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_631_, v___x_632_, v___x_638_);
v___x_642_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_639_, v___x_640_, v___x_641_, v___f_619_);
return v___x_642_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5___boxed(lean_object* v_k_643_, lean_object* v_v_644_, lean_object* v___f_645_, lean_object* v_x_646_, lean_object* v___y_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l_Lasm_KV_workers___lam__5(v_k_643_, v_v_644_, v___f_645_, v_x_646_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6(lean_object* v___f_649_, lean_object* v_name_650_, lean_object* v___f_651_, lean_object* v_k_652_, lean_object* v_v_653_){
_start:
{
lean_object* v___f_655_; lean_object* v___x_656_; uint8_t v___x_657_; lean_object* v_val_659_; lean_object* v_a_663_; lean_object* v___x_665_; 
v___f_655_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__5___boxed), 5, 3);
lean_closure_set(v___f_655_, 0, v_k_652_);
lean_closure_set(v___f_655_, 1, v_v_653_);
lean_closure_set(v___f_655_, 2, v___f_649_);
v___x_656_ = lean_unsigned_to_nat(0u);
v___x_657_ = 0;
v___x_665_ = l_Lasm_KV_binding(v_name_650_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; lean_object* v___x_667_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_a_666_);
lean_dec_ref_known(v___x_665_, 1);
v___x_667_ = lean_apply_2(v___f_651_, v_a_666_, lean_box(0));
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
v_a_668_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_675_ == 0)
{
v___x_670_ = v___x_667_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v___x_667_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set_tag(v___x_670_, 1);
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
v_val_659_ = v___x_673_;
goto v___jp_658_;
}
}
}
else
{
lean_object* v_a_676_; 
v_a_676_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_a_676_);
lean_dec_ref_known(v___x_667_, 1);
v_a_663_ = v_a_676_;
goto v___jp_662_;
}
}
else
{
lean_object* v_a_677_; 
lean_dec_ref(v___f_651_);
v_a_677_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_a_677_);
lean_dec_ref_known(v___x_665_, 1);
v_a_663_ = v_a_677_;
goto v___jp_662_;
}
v___jp_658_:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_660_, 0, v_val_659_);
v___x_661_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_656_, v___x_657_, v___x_660_, v___f_655_);
return v___x_661_;
}
v___jp_662_:
{
lean_object* v___x_664_; 
v___x_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_664_, 0, v_a_663_);
v_val_659_ = v___x_664_;
goto v___jp_658_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6___boxed(lean_object* v___f_678_, lean_object* v_name_679_, lean_object* v___f_680_, lean_object* v_k_681_, lean_object* v_v_682_, lean_object* v___y_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Lasm_KV_workers___lam__6(v___f_678_, v_name_679_, v___f_680_, v_k_681_, v_v_682_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7(lean_object* v_k_686_, lean_object* v___f_687_, lean_object* v_x_688_){
_start:
{
if (lean_obj_tag(v_x_688_) == 0)
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_698_; 
lean_dec_ref(v___f_687_);
lean_dec_ref(v_k_686_);
v_a_690_ = lean_ctor_get(v_x_688_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v_x_688_);
if (v_isSharedCheck_698_ == 0)
{
v___x_692_ = v_x_688_;
v_isShared_693_ = v_isSharedCheck_698_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v_x_688_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_698_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_697_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_696_; 
v___x_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
return v___x_696_;
}
}
}
else
{
lean_object* v_a_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; uint8_t v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v_a_699_ = lean_ctor_get(v_x_688_, 0);
lean_inc(v_a_699_);
lean_dec_ref_known(v_x_688_, 1);
v___x_700_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_701_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_701_, 0, v_k_686_);
v___x_702_ = lean_unsigned_to_nat(1u);
v___x_703_ = lean_mk_empty_array_with_capacity(v___x_702_);
v___x_704_ = lean_array_push(v___x_703_, v___x_701_);
v___x_705_ = lean_unsigned_to_nat(0u);
v___x_706_ = 0;
v___x_707_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_699_, v___x_700_, v___x_704_);
v___x_708_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_705_, v___x_706_, v___x_707_, v___f_687_);
return v___x_708_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7___boxed(lean_object* v_k_709_, lean_object* v___f_710_, lean_object* v_x_711_, lean_object* v___y_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lasm_KV_workers___lam__7(v_k_709_, v___f_710_, v_x_711_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8(lean_object* v___f_714_, lean_object* v_name_715_, lean_object* v_k_716_){
_start:
{
lean_object* v___f_718_; lean_object* v___x_719_; uint8_t v___x_720_; lean_object* v_val_722_; lean_object* v_a_726_; lean_object* v___x_728_; 
v___f_718_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__7___boxed), 4, 2);
lean_closure_set(v___f_718_, 0, v_k_716_);
lean_closure_set(v___f_718_, 1, v___f_714_);
v___x_719_ = lean_unsigned_to_nat(0u);
v___x_720_ = 0;
lean_inc_ref(v_name_715_);
v___x_728_ = l_Lasm_KV_binding(v_name_715_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_746_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_746_ == 0)
{
v___x_731_ = v___x_728_;
v_isShared_732_ = v_isSharedCheck_746_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_728_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_746_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
if (lean_obj_tag(v_a_729_) == 0)
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_736_; 
v___x_733_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_734_ = lean_string_append(v___x_733_, v_name_715_);
lean_dec_ref(v_name_715_);
if (v_isShared_732_ == 0)
{
lean_ctor_set_tag(v___x_731_, 18);
lean_ctor_set(v___x_731_, 0, v___x_734_);
v___x_736_ = v___x_731_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_734_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
v_a_726_ = v___x_736_;
goto v___jp_725_;
}
}
else
{
lean_object* v_val_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
lean_del_object(v___x_731_);
lean_dec_ref(v_name_715_);
v_val_738_ = lean_ctor_get(v_a_729_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v_a_729_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v_a_729_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_val_738_);
lean_dec(v_a_729_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_741_ == 0)
{
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_val_738_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
v_val_722_ = v___x_743_;
goto v___jp_721_;
}
}
}
}
}
else
{
lean_object* v_a_747_; 
lean_dec_ref(v_name_715_);
v_a_747_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_747_);
lean_dec_ref_known(v___x_728_, 1);
v_a_726_ = v_a_747_;
goto v___jp_725_;
}
v___jp_721_:
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v_val_722_);
v___x_724_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_719_, v___x_720_, v___x_723_, v___f_718_);
return v___x_724_;
}
v___jp_725_:
{
lean_object* v___x_727_; 
v___x_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_727_, 0, v_a_726_);
v_val_722_ = v___x_727_;
goto v___jp_721_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8___boxed(lean_object* v___f_748_, lean_object* v_name_749_, lean_object* v_k_750_, lean_object* v___y_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Lasm_KV_workers___lam__8(v___f_748_, v_name_749_, v_k_750_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers(lean_object* v_name_756_){
_start:
{
lean_object* v___f_757_; lean_object* v___f_758_; lean_object* v___f_759_; lean_object* v_delete_760_; lean_object* v_put_761_; lean_object* v_get_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v___f_757_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_758_ = ((lean_object*)(l_Lasm_KV_workers___closed__1));
lean_inc_ref_n(v_name_756_, 3);
v___f_759_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__1___boxed), 3, 1);
lean_closure_set(v___f_759_, 0, v_name_756_);
lean_inc_ref(v___f_759_);
v_delete_760_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__4___boxed), 5, 3);
lean_closure_set(v_delete_760_, 0, v___f_757_);
lean_closure_set(v_delete_760_, 1, v_name_756_);
lean_closure_set(v_delete_760_, 2, v___f_759_);
v_put_761_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__6___boxed), 6, 3);
lean_closure_set(v_put_761_, 0, v___f_757_);
lean_closure_set(v_put_761_, 1, v_name_756_);
lean_closure_set(v_put_761_, 2, v___f_759_);
v_get_762_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__8___boxed), 4, 2);
lean_closure_set(v_get_762_, 0, v___f_758_);
lean_closure_set(v_get_762_, 1, v_name_756_);
v___x_763_ = ((lean_object*)(l_Lasm_KV_workers___closed__2));
v___x_764_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
lean_ctor_set(v___x_764_, 1, v_get_762_);
lean_ctor_set(v___x_764_, 2, v_put_761_);
lean_ctor_set(v___x_764_, 3, v_delete_760_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3(lean_object* v___f_766_, lean_object* v_x_767_){
_start:
{
if (lean_obj_tag(v_x_767_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_777_; 
lean_dec_ref(v___f_766_);
v_a_769_ = lean_ctor_get(v_x_767_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v_x_767_);
if (v_isSharedCheck_777_ == 0)
{
v___x_771_ = v_x_767_;
v_isShared_772_ = v_isSharedCheck_777_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v_x_767_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_777_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_776_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_775_; 
v___x_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
return v___x_775_;
}
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_798_; 
v_a_778_ = lean_ctor_get(v_x_767_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v_x_767_);
if (v_isSharedCheck_798_ == 0)
{
v___x_780_ = v_x_767_;
v_isShared_781_ = v_isSharedCheck_798_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v_x_767_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_798_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_782_; lean_object* v___x_783_; uint8_t v___x_784_; lean_object* v_val_786_; lean_object* v___x_789_; 
v___x_782_ = ((lean_object*)(l_Lasm_KV_deno___lam__3___closed__0));
v___x_783_ = lean_unsigned_to_nat(0u);
v___x_784_ = 0;
v___x_789_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_a_778_, v___x_782_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v_a_790_; lean_object* v___x_792_; 
v_a_790_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_a_790_);
lean_dec_ref_known(v___x_789_, 1);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 0, v_a_790_);
v___x_792_ = v___x_780_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
v_val_786_ = v___x_792_;
goto v___jp_785_;
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; 
v_a_794_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_a_794_);
lean_dec_ref_known(v___x_789_, 1);
if (v_isShared_781_ == 0)
{
lean_ctor_set_tag(v___x_780_, 0);
lean_ctor_set(v___x_780_, 0, v_a_794_);
v___x_796_ = v___x_780_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_794_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
v_val_786_ = v___x_796_;
goto v___jp_785_;
}
}
v___jp_785_:
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_787_, 0, v_val_786_);
v___x_788_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_783_, v___x_784_, v___x_787_, v___f_766_);
return v___x_788_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3___boxed(lean_object* v___f_799_, lean_object* v_x_800_, lean_object* v___y_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_Lasm_KV_deno___lam__3(v___f_799_, v_x_800_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0(lean_object* v_name_803_, lean_object* v_a_804_, lean_object* v___x_805_, lean_object* v___f_806_, lean_object* v_k_807_){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; uint8_t v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_809_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_810_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_810_, 0, v_name_803_);
v___x_811_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_811_, 0, v_k_807_);
v___x_812_ = lean_unsigned_to_nat(2u);
v___x_813_ = lean_mk_empty_array_with_capacity(v___x_812_);
v___x_814_ = lean_array_push(v___x_813_, v___x_810_);
v___x_815_ = lean_array_push(v___x_814_, v___x_811_);
v___x_816_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
v___x_817_ = lean_unsigned_to_nat(1u);
v___x_818_ = lean_mk_empty_array_with_capacity(v___x_817_);
v___x_819_ = lean_array_push(v___x_818_, v___x_816_);
v___x_820_ = 0;
v___x_821_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_804_, v___x_809_, v___x_819_);
v___x_822_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_805_, v___x_820_, v___x_821_, v___f_806_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0___boxed(lean_object* v_name_823_, lean_object* v_a_824_, lean_object* v___x_825_, lean_object* v___f_826_, lean_object* v_k_827_, lean_object* v___y_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Lasm_KV_deno___lam__0(v_name_823_, v_a_824_, v___x_825_, v___f_826_, v_k_827_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1(lean_object* v_name_831_, lean_object* v_a_832_, lean_object* v___x_833_, lean_object* v___f_834_, lean_object* v_k_835_, lean_object* v_v_836_){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; uint8_t v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_838_ = ((lean_object*)(l_Lasm_KV_deno___lam__1___closed__0));
v___x_839_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_839_, 0, v_name_831_);
v___x_840_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_840_, 0, v_k_835_);
v___x_841_ = lean_unsigned_to_nat(2u);
v___x_842_ = lean_mk_empty_array_with_capacity(v___x_841_);
lean_inc_ref(v___x_842_);
v___x_843_ = lean_array_push(v___x_842_, v___x_839_);
v___x_844_ = lean_array_push(v___x_843_, v___x_840_);
v___x_845_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
v___x_846_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_846_, 0, v_v_836_);
v___x_847_ = lean_array_push(v___x_842_, v___x_845_);
v___x_848_ = lean_array_push(v___x_847_, v___x_846_);
v___x_849_ = 0;
v___x_850_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_832_, v___x_838_, v___x_848_);
v___x_851_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_833_, v___x_849_, v___x_850_, v___f_834_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1___boxed(lean_object* v_name_852_, lean_object* v_a_853_, lean_object* v___x_854_, lean_object* v___f_855_, lean_object* v_k_856_, lean_object* v_v_857_, lean_object* v___y_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Lasm_KV_deno___lam__1(v_name_852_, v_a_853_, v___x_854_, v___f_855_, v_k_856_, v_v_857_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2(lean_object* v_name_860_, lean_object* v_a_861_, lean_object* v___x_862_, lean_object* v___f_863_, lean_object* v_k_864_){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; uint8_t v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_866_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_867_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_867_, 0, v_name_860_);
v___x_868_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_868_, 0, v_k_864_);
v___x_869_ = lean_unsigned_to_nat(2u);
v___x_870_ = lean_mk_empty_array_with_capacity(v___x_869_);
v___x_871_ = lean_array_push(v___x_870_, v___x_867_);
v___x_872_ = lean_array_push(v___x_871_, v___x_868_);
v___x_873_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
v___x_874_ = lean_unsigned_to_nat(1u);
v___x_875_ = lean_mk_empty_array_with_capacity(v___x_874_);
v___x_876_ = lean_array_push(v___x_875_, v___x_873_);
v___x_877_ = 0;
v___x_878_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_861_, v___x_866_, v___x_876_);
v___x_879_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_862_, v___x_877_, v___x_878_, v___f_863_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2___boxed(lean_object* v_name_880_, lean_object* v_a_881_, lean_object* v___x_882_, lean_object* v___f_883_, lean_object* v_k_884_, lean_object* v___y_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_Lasm_KV_deno___lam__2(v_name_880_, v_a_881_, v___x_882_, v___f_883_, v_k_884_);
return v_res_886_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0(void){
_start:
{
uint64_t v___x_887_; uint8_t v___x_888_; uint64_t v___x_889_; 
v___x_887_ = 8ULL;
v___x_888_ = 1;
v___x_889_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_888_, v___x_887_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(lean_object* v_o_891_, lean_object* v_name_892_, lean_object* v_args_893_){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; uint64_t v___x_898_; lean_object* v___x_899_; 
v___x_895_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1));
v___x_896_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_896_, 0, v_o_891_);
lean_ctor_set(v___x_896_, 1, v___x_895_);
lean_inc_ref(v_name_892_);
v___x_897_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_897_, 0, v_name_892_);
v___x_898_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0);
v___x_899_ = l_Lasm_JS_Value_invokeRaw(v___x_896_, v___x_897_, v_args_893_, v___x_898_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_899_, 1);
v___x_901_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1));
v___x_902_ = lean_string_append(v___x_901_, v_name_892_);
lean_dec_ref(v_name_892_);
v___x_903_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_902_, v_a_900_);
lean_dec(v_a_900_);
lean_dec_ref(v___x_902_);
return v___x_903_;
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_dec_ref(v_name_892_);
v_a_904_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_899_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_899_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___boxed(lean_object* v_o_912_, lean_object* v_name_913_, lean_object* v_args_914_, lean_object* v___y_915_){
_start:
{
lean_object* v_res_916_; 
v_res_916_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_o_912_, v_name_913_, v_args_914_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno(lean_object* v_name_924_){
_start:
{
lean_object* v___f_926_; lean_object* v___f_927_; lean_object* v___x_928_; 
v___f_926_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_927_ = ((lean_object*)(l_Lasm_KV_deno___closed__0));
v___x_928_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_929_);
lean_dec_ref_known(v___x_928_, 1);
v___x_930_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_931_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_929_, v___x_930_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
lean_inc(v_a_932_);
lean_dec_ref_known(v___x_931_, 1);
v___x_933_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_934_ = lean_unsigned_to_nat(0u);
v___x_935_ = ((lean_object*)(l_Lasm_KV_deno___closed__3));
v___x_936_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_a_932_, v___x_933_, v___x_935_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_949_; 
v_a_937_ = lean_ctor_get(v___x_936_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_949_ == 0)
{
v___x_939_ = v___x_936_;
v_isShared_940_ = v_isSharedCheck_949_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_936_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_949_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___f_941_; lean_object* v___f_942_; lean_object* v___f_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_947_; 
lean_inc_n(v_a_937_, 2);
lean_inc_ref_n(v_name_924_, 2);
v___f_941_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__0___boxed), 6, 4);
lean_closure_set(v___f_941_, 0, v_name_924_);
lean_closure_set(v___f_941_, 1, v_a_937_);
lean_closure_set(v___f_941_, 2, v___x_934_);
lean_closure_set(v___f_941_, 3, v___f_927_);
v___f_942_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__1___boxed), 7, 4);
lean_closure_set(v___f_942_, 0, v_name_924_);
lean_closure_set(v___f_942_, 1, v_a_937_);
lean_closure_set(v___f_942_, 2, v___x_934_);
lean_closure_set(v___f_942_, 3, v___f_926_);
v___f_943_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__2___boxed), 6, 4);
lean_closure_set(v___f_943_, 0, v_name_924_);
lean_closure_set(v___f_943_, 1, v_a_937_);
lean_closure_set(v___f_943_, 2, v___x_934_);
lean_closure_set(v___f_943_, 3, v___f_926_);
v___x_944_ = ((lean_object*)(l_Lasm_KV_deno___closed__4));
v___x_945_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
lean_ctor_set(v___x_945_, 1, v___f_941_);
lean_ctor_set(v___x_945_, 2, v___f_942_);
lean_ctor_set(v___x_945_, 3, v___f_943_);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 0, v___x_945_);
v___x_947_ = v___x_939_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_945_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
lean_dec_ref(v_name_924_);
v_a_950_ = lean_ctor_get(v___x_936_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_936_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_936_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_950_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
else
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_dec_ref(v_name_924_);
v_a_958_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_931_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_931_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
else
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
lean_dec_ref(v_name_924_);
v_a_966_ = lean_ctor_get(v___x_928_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_928_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_928_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___boxed(lean_object* v_name_974_, lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lasm_KV_deno(v_name_974_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0(lean_object* v_name_977_, lean_object* v_k_978_){
_start:
{
lean_object* v_val_981_; lean_object* v___x_983_; 
v___x_983_ = l_Lasm_Fastly_kvGetText(v_name_977_, v_k_978_);
if (lean_obj_tag(v___x_983_) == 0)
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
v_a_984_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_991_ == 0)
{
v___x_986_ = v___x_983_;
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_983_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_989_; 
if (v_isShared_987_ == 0)
{
lean_ctor_set_tag(v___x_986_, 1);
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_984_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
v_val_981_ = v___x_989_;
goto v___jp_980_;
}
}
}
else
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
v_a_992_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_983_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_983_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
lean_ctor_set_tag(v___x_994_, 0);
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
v_val_981_ = v___x_997_;
goto v___jp_980_;
}
}
}
v___jp_980_:
{
lean_object* v___x_982_; 
v___x_982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_982_, 0, v_val_981_);
return v___x_982_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0___boxed(lean_object* v_name_1000_, lean_object* v_k_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = l_Lasm_KV_fastly___lam__0(v_name_1000_, v_k_1001_);
lean_dec_ref(v_k_1001_);
lean_dec_ref(v_name_1000_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1(lean_object* v_name_1004_, lean_object* v_k_1005_, lean_object* v_v_1006_){
_start:
{
lean_object* v_val_1009_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = lean_string_to_utf8(v_v_1006_);
v___x_1012_ = lasm_fastly_kv_put(v_name_1004_, v_k_1005_, v___x_1011_);
lean_dec_ref(v___x_1011_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_1012_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1012_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
lean_ctor_set_tag(v___x_1015_, 1);
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
v_val_1009_ = v___x_1018_;
goto v___jp_1008_;
}
}
}
else
{
lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1028_; 
v_a_1021_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1023_ = v___x_1012_;
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1012_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1024_ == 0)
{
lean_ctor_set_tag(v___x_1023_, 0);
v___x_1026_ = v___x_1023_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_a_1021_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
v_val_1009_ = v___x_1026_;
goto v___jp_1008_;
}
}
}
v___jp_1008_:
{
lean_object* v___x_1010_; 
v___x_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1010_, 0, v_val_1009_);
return v___x_1010_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1___boxed(lean_object* v_name_1029_, lean_object* v_k_1030_, lean_object* v_v_1031_, lean_object* v___y_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l_Lasm_KV_fastly___lam__1(v_name_1029_, v_k_1030_, v_v_1031_);
lean_dec_ref(v_v_1031_);
lean_dec_ref(v_k_1030_);
lean_dec_ref(v_name_1029_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2(lean_object* v_name_1034_, lean_object* v_k_1035_){
_start:
{
lean_object* v_val_1038_; lean_object* v___x_1040_; 
v___x_1040_ = lasm_fastly_kv_delete(v_name_1034_, v_k_1035_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___x_1040_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1040_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
lean_ctor_set_tag(v___x_1043_, 1);
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
v_val_1038_ = v___x_1046_;
goto v___jp_1037_;
}
}
}
else
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
v_a_1049_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___x_1040_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1040_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
lean_ctor_set_tag(v___x_1051_, 0);
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
v_val_1038_ = v___x_1054_;
goto v___jp_1037_;
}
}
}
v___jp_1037_:
{
lean_object* v___x_1039_; 
v___x_1039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1039_, 0, v_val_1038_);
return v___x_1039_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2___boxed(lean_object* v_name_1057_, lean_object* v_k_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l_Lasm_KV_fastly___lam__2(v_name_1057_, v_k_1058_);
lean_dec_ref(v_k_1058_);
lean_dec_ref(v_name_1057_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly(lean_object* v_name_1062_){
_start:
{
lean_object* v___f_1063_; lean_object* v___f_1064_; lean_object* v___f_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
lean_inc_ref_n(v_name_1062_, 2);
v___f_1063_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1063_, 0, v_name_1062_);
v___f_1064_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1064_, 0, v_name_1062_);
v___f_1065_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1065_, 0, v_name_1062_);
v___x_1066_ = ((lean_object*)(l_Lasm_KV_fastly___closed__0));
v___x_1067_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
lean_ctor_set(v___x_1067_, 1, v___f_1063_);
lean_ctor_set(v___x_1067_, 2, v___f_1064_);
lean_ctor_set(v___x_1067_, 3, v___f_1065_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0(uint8_t v_a_1068_, uint8_t v_a_1069_, lean_object* v_____do__lift_1070_){
_start:
{
if (lean_obj_tag(v_____do__lift_1070_) == 0)
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = lean_box(v_a_1068_);
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
return v___x_1073_;
}
else
{
lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1081_; 
v_isSharedCheck_1081_ = !lean_is_exclusive(v_____do__lift_1070_);
if (v_isSharedCheck_1081_ == 0)
{
lean_object* v_unused_1082_; 
v_unused_1082_ = lean_ctor_get(v_____do__lift_1070_, 0);
lean_dec(v_unused_1082_);
v___x_1075_ = v_____do__lift_1070_;
v_isShared_1076_ = v_isSharedCheck_1081_;
goto v_resetjp_1074_;
}
else
{
lean_dec(v_____do__lift_1070_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1081_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1077_; lean_object* v___x_1079_; 
v___x_1077_ = lean_box(v_a_1069_);
if (v_isShared_1076_ == 0)
{
lean_ctor_set_tag(v___x_1075_, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1077_);
v___x_1079_ = v___x_1075_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v___x_1077_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0___boxed(lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_____do__lift_1085_, lean_object* v___y_1086_){
_start:
{
uint8_t v_a_3239__boxed_1087_; uint8_t v_a_3240__boxed_1088_; lean_object* v_res_1089_; 
v_a_3239__boxed_1087_ = lean_unbox(v_a_1083_);
v_a_3240__boxed_1088_ = lean_unbox(v_a_1084_);
v_res_1089_ = l_Lasm_KV_open___lam__0(v_a_3239__boxed_1087_, v_a_3240__boxed_1088_, v_____do__lift_1085_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1(lean_object* v_a_1090_, lean_object* v_k_1091_, lean_object* v___x_1092_, lean_object* v_x_1093_){
_start:
{
if (lean_obj_tag(v_x_1093_) == 0)
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1103_; 
lean_dec_ref(v___x_1092_);
lean_dec_ref(v_k_1091_);
lean_dec_ref(v_a_1090_);
v_a_1095_ = lean_ctor_get(v_x_1093_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v_x_1093_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1097_ = v_x_1093_;
v_isShared_1098_ = v_isSharedCheck_1103_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v_x_1093_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1103_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v___x_1101_; 
v___x_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
return v___x_1101_;
}
}
}
else
{
lean_object* v_a_1104_; uint8_t v___x_1105_; 
v_a_1104_ = lean_ctor_get(v_x_1093_, 0);
lean_inc(v_a_1104_);
lean_dec_ref_known(v_x_1093_, 1);
v___x_1105_ = lean_unbox(v_a_1104_);
lean_dec(v_a_1104_);
if (v___x_1105_ == 0)
{
lean_object* v_get_1106_; lean_object* v___x_1107_; 
lean_dec_ref(v___x_1092_);
v_get_1106_ = lean_ctor_get(v_a_1090_, 1);
lean_inc_ref(v_get_1106_);
lean_dec_ref(v_a_1090_);
v___x_1107_ = lean_apply_2(v_get_1106_, v_k_1091_, lean_box(0));
return v___x_1107_;
}
else
{
lean_object* v_get_1108_; lean_object* v___x_1109_; 
lean_dec_ref(v_a_1090_);
v_get_1108_ = lean_ctor_get(v___x_1092_, 1);
lean_inc_ref(v_get_1108_);
lean_dec_ref(v___x_1092_);
v___x_1109_ = lean_apply_2(v_get_1108_, v_k_1091_, lean_box(0));
return v___x_1109_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1___boxed(lean_object* v_a_1110_, lean_object* v_k_1111_, lean_object* v___x_1112_, lean_object* v_x_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l_Lasm_KV_open___lam__1(v_a_1110_, v_k_1111_, v___x_1112_, v_x_1113_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2(lean_object* v_a_1116_, lean_object* v___x_1117_, uint8_t v_a_1118_, lean_object* v_name_1119_, uint8_t v_a_1120_, lean_object* v_k_1121_){
_start:
{
lean_object* v___f_1123_; lean_object* v___x_1124_; lean_object* v_val_1126_; uint8_t v_a_1130_; lean_object* v___x_1133_; 
v___f_1123_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1123_, 0, v_a_1116_);
lean_closure_set(v___f_1123_, 1, v_k_1121_);
lean_closure_set(v___f_1123_, 2, v___x_1117_);
v___x_1124_ = lean_unsigned_to_nat(0u);
v___x_1133_ = l_Lasm_KV_binding(v_name_1119_);
if (lean_obj_tag(v___x_1133_) == 0)
{
lean_object* v_a_1134_; 
v_a_1134_ = lean_ctor_get(v___x_1133_, 0);
lean_inc(v_a_1134_);
lean_dec_ref_known(v___x_1133_, 1);
if (lean_obj_tag(v_a_1134_) == 0)
{
v_a_1130_ = v_a_1118_;
goto v___jp_1129_;
}
else
{
lean_dec_ref_known(v_a_1134_, 1);
v_a_1130_ = v_a_1120_;
goto v___jp_1129_;
}
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
v_a_1135_ = lean_ctor_get(v___x_1133_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1133_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1133_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
lean_ctor_set_tag(v___x_1137_, 0);
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
v_val_1126_ = v___x_1140_;
goto v___jp_1125_;
}
}
}
v___jp_1125_:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1127_, 0, v_val_1126_);
v___x_1128_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1124_, v_a_1118_, v___x_1127_, v___f_1123_);
return v___x_1128_;
}
v___jp_1129_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = lean_box(v_a_1130_);
v___x_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
v_val_1126_ = v___x_1132_;
goto v___jp_1125_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2___boxed(lean_object* v_a_1143_, lean_object* v___x_1144_, lean_object* v_a_1145_, lean_object* v_name_1146_, lean_object* v_a_1147_, lean_object* v_k_1148_, lean_object* v___y_1149_){
_start:
{
uint8_t v_a_3314__boxed_1150_; uint8_t v_a_3315__boxed_1151_; lean_object* v_res_1152_; 
v_a_3314__boxed_1150_ = lean_unbox(v_a_1145_);
v_a_3315__boxed_1151_ = lean_unbox(v_a_1147_);
v_res_1152_ = l_Lasm_KV_open___lam__2(v_a_1143_, v___x_1144_, v_a_3314__boxed_1150_, v_name_1146_, v_a_3315__boxed_1151_, v_k_1148_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3(lean_object* v_a_1153_, lean_object* v_k_1154_, lean_object* v_v_1155_, lean_object* v___x_1156_, lean_object* v_x_1157_){
_start:
{
if (lean_obj_tag(v_x_1157_) == 0)
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1167_; 
lean_dec_ref(v___x_1156_);
lean_dec_ref(v_v_1155_);
lean_dec_ref(v_k_1154_);
lean_dec_ref(v_a_1153_);
v_a_1159_ = lean_ctor_get(v_x_1157_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_x_1157_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1161_ = v_x_1157_;
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v_x_1157_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
lean_object* v___x_1165_; 
v___x_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1164_);
return v___x_1165_;
}
}
}
else
{
lean_object* v_a_1168_; uint8_t v___x_1169_; 
v_a_1168_ = lean_ctor_get(v_x_1157_, 0);
lean_inc(v_a_1168_);
lean_dec_ref_known(v_x_1157_, 1);
v___x_1169_ = lean_unbox(v_a_1168_);
lean_dec(v_a_1168_);
if (v___x_1169_ == 0)
{
lean_object* v_put_1170_; lean_object* v___x_1171_; 
lean_dec_ref(v___x_1156_);
v_put_1170_ = lean_ctor_get(v_a_1153_, 2);
lean_inc_ref(v_put_1170_);
lean_dec_ref(v_a_1153_);
v___x_1171_ = lean_apply_3(v_put_1170_, v_k_1154_, v_v_1155_, lean_box(0));
return v___x_1171_;
}
else
{
lean_object* v_put_1172_; lean_object* v___x_1173_; 
lean_dec_ref(v_a_1153_);
v_put_1172_ = lean_ctor_get(v___x_1156_, 2);
lean_inc_ref(v_put_1172_);
lean_dec_ref(v___x_1156_);
v___x_1173_ = lean_apply_3(v_put_1172_, v_k_1154_, v_v_1155_, lean_box(0));
return v___x_1173_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3___boxed(lean_object* v_a_1174_, lean_object* v_k_1175_, lean_object* v_v_1176_, lean_object* v___x_1177_, lean_object* v_x_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l_Lasm_KV_open___lam__3(v_a_1174_, v_k_1175_, v_v_1176_, v___x_1177_, v_x_1178_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4(lean_object* v_a_1181_, lean_object* v___x_1182_, uint8_t v_a_1183_, lean_object* v_name_1184_, lean_object* v___f_1185_, lean_object* v_k_1186_, lean_object* v_v_1187_){
_start:
{
lean_object* v___f_1189_; lean_object* v___x_1190_; lean_object* v_val_1192_; lean_object* v_a_1196_; lean_object* v___x_1198_; 
v___f_1189_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__3___boxed), 6, 4);
lean_closure_set(v___f_1189_, 0, v_a_1181_);
lean_closure_set(v___f_1189_, 1, v_k_1186_);
lean_closure_set(v___f_1189_, 2, v_v_1187_);
lean_closure_set(v___f_1189_, 3, v___x_1182_);
v___x_1190_ = lean_unsigned_to_nat(0u);
v___x_1198_ = l_Lasm_KV_binding(v_name_1184_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_a_1199_; lean_object* v___x_1200_; 
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_a_1199_);
lean_dec_ref_known(v___x_1198_, 1);
v___x_1200_ = lean_apply_2(v___f_1185_, v_a_1199_, lean_box(0));
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1208_; 
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1203_ = v___x_1200_;
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1200_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1206_; 
if (v_isShared_1204_ == 0)
{
lean_ctor_set_tag(v___x_1203_, 1);
v___x_1206_ = v___x_1203_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_a_1201_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
v_val_1192_ = v___x_1206_;
goto v___jp_1191_;
}
}
}
else
{
lean_object* v_a_1209_; 
v_a_1209_ = lean_ctor_get(v___x_1200_, 0);
lean_inc(v_a_1209_);
lean_dec_ref_known(v___x_1200_, 1);
v_a_1196_ = v_a_1209_;
goto v___jp_1195_;
}
}
else
{
lean_object* v_a_1210_; 
lean_dec_ref(v___f_1185_);
v_a_1210_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_a_1210_);
lean_dec_ref_known(v___x_1198_, 1);
v_a_1196_ = v_a_1210_;
goto v___jp_1195_;
}
v___jp_1191_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1193_, 0, v_val_1192_);
v___x_1194_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1190_, v_a_1183_, v___x_1193_, v___f_1189_);
return v___x_1194_;
}
v___jp_1195_:
{
lean_object* v___x_1197_; 
v___x_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1197_, 0, v_a_1196_);
v_val_1192_ = v___x_1197_;
goto v___jp_1191_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4___boxed(lean_object* v_a_1211_, lean_object* v___x_1212_, lean_object* v_a_1213_, lean_object* v_name_1214_, lean_object* v___f_1215_, lean_object* v_k_1216_, lean_object* v_v_1217_, lean_object* v___y_1218_){
_start:
{
uint8_t v_a_3408__boxed_1219_; lean_object* v_res_1220_; 
v_a_3408__boxed_1219_ = lean_unbox(v_a_1213_);
v_res_1220_ = l_Lasm_KV_open___lam__4(v_a_1211_, v___x_1212_, v_a_3408__boxed_1219_, v_name_1214_, v___f_1215_, v_k_1216_, v_v_1217_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5(lean_object* v_a_1221_, lean_object* v_k_1222_, lean_object* v___x_1223_, lean_object* v_x_1224_){
_start:
{
if (lean_obj_tag(v_x_1224_) == 0)
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1234_; 
lean_dec_ref(v___x_1223_);
lean_dec_ref(v_k_1222_);
lean_dec_ref(v_a_1221_);
v_a_1226_ = lean_ctor_get(v_x_1224_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v_x_1224_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1228_ = v_x_1224_;
v_isShared_1229_ = v_isSharedCheck_1234_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v_x_1224_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1234_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
lean_object* v___x_1232_; 
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
return v___x_1232_;
}
}
}
else
{
lean_object* v_a_1235_; uint8_t v___x_1236_; 
v_a_1235_ = lean_ctor_get(v_x_1224_, 0);
lean_inc(v_a_1235_);
lean_dec_ref_known(v_x_1224_, 1);
v___x_1236_ = lean_unbox(v_a_1235_);
lean_dec(v_a_1235_);
if (v___x_1236_ == 0)
{
lean_object* v_delete_1237_; lean_object* v___x_1238_; 
lean_dec_ref(v___x_1223_);
v_delete_1237_ = lean_ctor_get(v_a_1221_, 3);
lean_inc_ref(v_delete_1237_);
lean_dec_ref(v_a_1221_);
v___x_1238_ = lean_apply_2(v_delete_1237_, v_k_1222_, lean_box(0));
return v___x_1238_;
}
else
{
lean_object* v_delete_1239_; lean_object* v___x_1240_; 
lean_dec_ref(v_a_1221_);
v_delete_1239_ = lean_ctor_get(v___x_1223_, 3);
lean_inc_ref(v_delete_1239_);
lean_dec_ref(v___x_1223_);
v___x_1240_ = lean_apply_2(v_delete_1239_, v_k_1222_, lean_box(0));
return v___x_1240_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5___boxed(lean_object* v_a_1241_, lean_object* v_k_1242_, lean_object* v___x_1243_, lean_object* v_x_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lasm_KV_open___lam__5(v_a_1241_, v_k_1242_, v___x_1243_, v_x_1244_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6(lean_object* v_a_1247_, lean_object* v___x_1248_, uint8_t v_a_1249_, lean_object* v_name_1250_, lean_object* v___f_1251_, lean_object* v_k_1252_){
_start:
{
lean_object* v___f_1254_; lean_object* v___x_1255_; lean_object* v_val_1257_; lean_object* v_a_1261_; lean_object* v___x_1263_; 
v___f_1254_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__5___boxed), 5, 3);
lean_closure_set(v___f_1254_, 0, v_a_1247_);
lean_closure_set(v___f_1254_, 1, v_k_1252_);
lean_closure_set(v___f_1254_, 2, v___x_1248_);
v___x_1255_ = lean_unsigned_to_nat(0u);
v___x_1263_ = l_Lasm_KV_binding(v_name_1250_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v___x_1265_; 
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
lean_inc(v_a_1264_);
lean_dec_ref_known(v___x_1263_, 1);
v___x_1265_ = lean_apply_2(v___f_1251_, v_a_1264_, lean_box(0));
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1265_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1265_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
lean_ctor_set_tag(v___x_1268_, 1);
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
v_val_1257_ = v___x_1271_;
goto v___jp_1256_;
}
}
}
else
{
lean_object* v_a_1274_; 
v_a_1274_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1265_, 1);
v_a_1261_ = v_a_1274_;
goto v___jp_1260_;
}
}
else
{
lean_object* v_a_1275_; 
lean_dec_ref(v___f_1251_);
v_a_1275_ = lean_ctor_get(v___x_1263_, 0);
lean_inc(v_a_1275_);
lean_dec_ref_known(v___x_1263_, 1);
v_a_1261_ = v_a_1275_;
goto v___jp_1260_;
}
v___jp_1256_:
{
lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1258_, 0, v_val_1257_);
v___x_1259_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1255_, v_a_1249_, v___x_1258_, v___f_1254_);
return v___x_1259_;
}
v___jp_1260_:
{
lean_object* v___x_1262_; 
v___x_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1262_, 0, v_a_1261_);
v_val_1257_ = v___x_1262_;
goto v___jp_1256_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6___boxed(lean_object* v_a_1276_, lean_object* v___x_1277_, lean_object* v_a_1278_, lean_object* v_name_1279_, lean_object* v___f_1280_, lean_object* v_k_1281_, lean_object* v___y_1282_){
_start:
{
uint8_t v_a_3505__boxed_1283_; lean_object* v_res_1284_; 
v_a_3505__boxed_1283_ = lean_unbox(v_a_1278_);
v_res_1284_ = l_Lasm_KV_open___lam__6(v_a_1276_, v___x_1277_, v_a_3505__boxed_1283_, v_name_1279_, v___f_1280_, v_k_1281_);
return v_res_1284_;
}
}
static uint32_t _init_l_Lasm_KV_open___closed__1(void){
_start:
{
lean_object* v___x_1286_; uint32_t v___x_1287_; 
v___x_1286_ = lean_box(0);
v___x_1287_ = lasm_fetch_platform(v___x_1286_);
return v___x_1287_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__2(void){
_start:
{
uint32_t v___x_1288_; uint32_t v___x_1289_; uint8_t v___x_1290_; 
v___x_1288_ = 2;
v___x_1289_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1290_ = lean_uint32_dec_eq(v___x_1289_, v___x_1288_);
return v___x_1290_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__3(void){
_start:
{
uint32_t v___x_1291_; uint32_t v___x_1292_; uint8_t v___x_1293_; 
v___x_1291_ = 0;
v___x_1292_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1293_ = lean_uint32_dec_eq(v___x_1292_, v___x_1291_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open(lean_object* v_name_1295_){
_start:
{
uint8_t v_a_1298_; uint8_t v___x_1331_; 
v___x_1331_ = lean_uint8_once(&l_Lasm_KV_open___closed__2, &l_Lasm_KV_open___closed__2_once, _init_l_Lasm_KV_open___closed__2);
if (v___x_1331_ == 0)
{
uint8_t v___x_1332_; 
v___x_1332_ = lean_uint8_once(&l_Lasm_KV_open___closed__3, &l_Lasm_KV_open___closed__3_once, _init_l_Lasm_KV_open___closed__3);
if (v___x_1332_ == 0)
{
lean_object* v___x_1333_; 
lean_dec_ref(v_name_1295_);
v___x_1333_ = l_Lasm_KV_memory();
return v___x_1333_;
}
else
{
lean_object* v___x_1334_; 
v___x_1334_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1334_) == 0)
{
lean_object* v_a_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v_a_1335_ = lean_ctor_get(v___x_1334_, 0);
lean_inc(v_a_1335_);
lean_dec_ref_known(v___x_1334_, 1);
v___x_1336_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_1337_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1335_, v___x_1336_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
lean_inc(v_a_1338_);
lean_dec_ref_known(v___x_1337_, 1);
v___x_1339_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_1340_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_a_1338_, v___x_1339_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
lean_inc(v_a_1341_);
lean_dec_ref_known(v___x_1340_, 1);
if (lean_obj_tag(v_a_1341_) == 9)
{
lean_object* v___x_1342_; 
lean_dec_ref_known(v_a_1341_, 2);
v___x_1342_ = l_Lasm_KV_deno(v_name_1295_);
if (lean_obj_tag(v___x_1342_) == 0)
{
return v___x_1342_;
}
else
{
lean_object* v___x_1343_; 
lean_dec_ref_known(v___x_1342_, 1);
v___x_1343_ = l_Lasm_KV_memory();
return v___x_1343_;
}
}
else
{
lean_dec(v_a_1341_);
v_a_1298_ = v___x_1331_;
goto v___jp_1297_;
}
}
else
{
lean_dec_ref_known(v___x_1340_, 1);
v_a_1298_ = v___x_1331_;
goto v___jp_1297_;
}
}
else
{
lean_dec_ref_known(v___x_1337_, 1);
v_a_1298_ = v___x_1331_;
goto v___jp_1297_;
}
}
else
{
lean_object* v_a_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1351_; 
lean_dec_ref(v_name_1295_);
v_a_1344_ = lean_ctor_get(v___x_1334_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1346_ = v___x_1334_;
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_a_1344_);
lean_dec(v___x_1334_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1349_; 
if (v_isShared_1347_ == 0)
{
v___x_1349_ = v___x_1346_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_a_1344_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
}
}
}
else
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1352_ = ((lean_object*)(l_Lasm_KV_open___closed__4));
v___x_1353_ = lasm_fastly_kv_get(v_name_1295_, v___x_1352_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1361_; 
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1361_ == 0)
{
lean_object* v_unused_1362_; 
v_unused_1362_ = lean_ctor_get(v___x_1353_, 0);
lean_dec(v_unused_1362_);
v___x_1355_ = v___x_1353_;
v_isShared_1356_ = v_isSharedCheck_1361_;
goto v_resetjp_1354_;
}
else
{
lean_dec(v___x_1353_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1361_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1357_; lean_object* v___x_1359_; 
v___x_1357_ = l_Lasm_KV_fastly(v_name_1295_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___x_1357_);
v___x_1359_ = v___x_1355_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1357_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
}
else
{
lean_object* v___x_1363_; 
lean_dec_ref_known(v___x_1353_, 1);
lean_dec_ref(v_name_1295_);
v___x_1363_ = l_Lasm_KV_memory();
return v___x_1363_;
}
}
v___jp_1297_:
{
lean_object* v___x_1299_; 
v___x_1299_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_1299_) == 0)
{
lean_object* v_a_1300_; uint8_t v___x_1301_; 
v_a_1300_ = lean_ctor_get(v___x_1299_, 0);
lean_inc(v_a_1300_);
lean_dec_ref_known(v___x_1299_, 1);
v___x_1301_ = lean_unbox(v_a_1300_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1302_; 
lean_dec(v_a_1300_);
lean_dec_ref(v_name_1295_);
v___x_1302_ = l_Lasm_KV_memory();
return v___x_1302_;
}
else
{
lean_object* v___x_1303_; lean_object* v___f_1304_; lean_object* v___x_1305_; lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1322_; 
v___x_1303_ = lean_box(v_a_1298_);
lean_inc(v_a_1300_);
v___f_1304_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1304_, 0, v___x_1303_);
lean_closure_set(v___f_1304_, 1, v_a_1300_);
v___x_1305_ = l_Lasm_KV_memory();
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1322_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1308_ = v___x_1305_;
v_isShared_1309_ = v_isSharedCheck_1322_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1322_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___f_1312_; lean_object* v___x_1313_; lean_object* v___f_1314_; lean_object* v___x_1315_; lean_object* v___f_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1320_; 
lean_inc_ref_n(v_name_1295_, 3);
v___x_1310_ = l_Lasm_KV_workers(v_name_1295_);
v___x_1311_ = lean_box(v_a_1298_);
lean_inc_ref_n(v___x_1310_, 2);
lean_inc_n(v_a_1306_, 2);
v___f_1312_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__2___boxed), 7, 5);
lean_closure_set(v___f_1312_, 0, v_a_1306_);
lean_closure_set(v___f_1312_, 1, v___x_1310_);
lean_closure_set(v___f_1312_, 2, v___x_1311_);
lean_closure_set(v___f_1312_, 3, v_name_1295_);
lean_closure_set(v___f_1312_, 4, v_a_1300_);
v___x_1313_ = lean_box(v_a_1298_);
lean_inc_ref(v___f_1304_);
v___f_1314_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__4___boxed), 8, 5);
lean_closure_set(v___f_1314_, 0, v_a_1306_);
lean_closure_set(v___f_1314_, 1, v___x_1310_);
lean_closure_set(v___f_1314_, 2, v___x_1313_);
lean_closure_set(v___f_1314_, 3, v_name_1295_);
lean_closure_set(v___f_1314_, 4, v___f_1304_);
v___x_1315_ = lean_box(v_a_1298_);
v___f_1316_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__6___boxed), 7, 5);
lean_closure_set(v___f_1316_, 0, v_a_1306_);
lean_closure_set(v___f_1316_, 1, v___x_1310_);
lean_closure_set(v___f_1316_, 2, v___x_1315_);
lean_closure_set(v___f_1316_, 3, v_name_1295_);
lean_closure_set(v___f_1316_, 4, v___f_1304_);
v___x_1317_ = ((lean_object*)(l_Lasm_KV_open___closed__0));
v___x_1318_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
lean_ctor_set(v___x_1318_, 1, v___f_1312_);
lean_ctor_set(v___x_1318_, 2, v___f_1314_);
lean_ctor_set(v___x_1318_, 3, v___f_1316_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 0, v___x_1318_);
v___x_1320_ = v___x_1308_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v___x_1318_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
}
}
else
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1330_; 
lean_dec_ref(v_name_1295_);
v_a_1323_ = lean_ctor_get(v___x_1299_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1299_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1325_ = v___x_1299_;
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1299_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1328_; 
if (v_isShared_1326_ == 0)
{
v___x_1328_ = v___x_1325_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_a_1323_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___boxed(lean_object* v_name_1364_, lean_object* v_a_1365_){
_start:
{
lean_object* v_res_1366_; 
v_res_1366_ = l_Lasm_KV_open(v_name_1364_);
return v_res_1366_;
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
