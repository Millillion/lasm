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
uint8_t l_ByteArray_isEmpty(lean_object*);
lean_object* lasm_fastly_http_body_write(uint32_t, lean_object*, uint8_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_byte_array_size(lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_kv_store_open(lean_object*);
lean_object* lasm_fastly_kv_store_delete(uint32_t, lean_object*, uint32_t, uint32_t);
lean_object* lasm_fastly_kv_store_delete_wait(uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_Fastly_KvError_witxName(uint8_t);
lean_object* l_Lasm_Fastly_FastlyStatus_toIOError(uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lasm_Fetch_platformEnv;
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lasm_fastly_http_body_new();
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Lasm_Fastly_KvStore_insert(uint32_t, lean_object*, uint32_t, uint32_t, lean_object*);
lean_object* lasm_fastly_kv_store_insert_wait(uint32_t);
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
lean_object* lasm_fastly_kv_store_lookup(uint32_t, lean_object*, uint32_t, uint32_t);
lean_object* l_Lasm_Fastly_KvStore_lookupWaitV2___boxed(lean_object*, lean_object*);
lean_object* l_Lasm_Fastly_found_x3f___redArg(lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* lasm_fastly_http_body_read(uint32_t, uint32_t);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(uint8_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_onEdge();
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1;
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__2_value;
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
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_readAll(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_readAll___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_writeAll(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_writeAll___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_FastlyKV_get___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.KV: Fastly KV Store "};
static const lean_object* l_Lasm_KV_FastlyKV_get___closed__0 = (const lean_object*)&l_Lasm_KV_FastlyKV_get___closed__0_value;
static const lean_string_object l_Lasm_KV_FastlyKV_get___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ": lookup of "};
static const lean_object* l_Lasm_KV_FastlyKV_get___closed__1 = (const lean_object*)&l_Lasm_KV_FastlyKV_get___closed__1_value;
static const lean_string_object l_Lasm_KV_FastlyKV_get___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_KV_FastlyKV_get___closed__2 = (const lean_object*)&l_Lasm_KV_FastlyKV_get___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_get___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_KV_FastlyKV_put___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 24, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_KV_FastlyKV_put___closed__0 = (const lean_object*)&l_Lasm_KV_FastlyKV_put___closed__0_value;
static const lean_string_object l_Lasm_KV_FastlyKV_put___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ": insert of "};
static const lean_object* l_Lasm_KV_FastlyKV_put___closed__1 = (const lean_object*)&l_Lasm_KV_FastlyKV_put___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_put(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_put___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_KV_FastlyKV_delete___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ": delete of "};
static const lean_object* l_Lasm_KV_FastlyKV_delete___closed__0 = (const lean_object*)&l_Lasm_KV_FastlyKV_delete___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_delete(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_delete___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_KV_binding(lean_object* v_name_417_){
_start:
{
lean_object* v_found_423_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = l_Lasm_Fetch_platformEnv;
v___x_428_ = lean_st_ref_get(v___x_427_);
switch(lean_obj_tag(v___x_428_))
{
case 9:
{
lean_object* v_value_429_; lean_object* v___x_430_; 
v_value_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_value_429_);
lean_dec_ref_known(v___x_428_, 2);
v___x_430_ = l_Lasm_JS_Value_get___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__1(v_value_429_, v_name_417_);
if (lean_obj_tag(v___x_430_) == 0)
{
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v_a_431_; 
v_a_431_ = lean_ctor_get(v___x_430_, 0);
lean_inc(v_a_431_);
lean_dec_ref_known(v___x_430_, 1);
v_found_423_ = v_a_431_;
goto v___jp_422_;
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_a_432_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_430_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_430_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
lean_ctor_set_tag(v___x_434_, 1);
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_430_, 1);
goto v___jp_419_;
}
}
case 8:
{
lean_object* v___x_440_; 
v___x_440_ = l_Lasm_JS_Data_field(v___x_428_, v_name_417_);
lean_dec_ref(v_name_417_);
lean_dec_ref_known(v___x_428_, 1);
v_found_423_ = v___x_440_;
goto v___jp_422_;
}
default: 
{
lean_dec(v___x_428_);
lean_dec_ref(v_name_417_);
goto v___jp_419_;
}
}
v___jp_419_:
{
lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_420_ = lean_box(0);
v___x_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
return v___x_421_;
}
v___jp_422_:
{
if (lean_obj_tag(v_found_423_) == 9)
{
lean_object* v_value_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v_value_424_ = lean_ctor_get(v_found_423_, 0);
lean_inc(v_value_424_);
lean_dec_ref_known(v_found_423_, 2);
v___x_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_425_, 0, v_value_424_);
v___x_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
return v___x_426_;
}
else
{
lean_dec(v_found_423_);
goto v___jp_419_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_binding___boxed(lean_object* v_name_441_, lean_object* v_a_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lasm_KV_binding(v_name_441_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0(lean_object* v_x_444_){
_start:
{
if (lean_obj_tag(v_x_444_) == 0)
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_454_; 
v_a_446_ = lean_ctor_get(v_x_444_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v_x_444_);
if (v_isSharedCheck_454_ == 0)
{
v___x_448_ = v_x_444_;
v_isShared_449_ = v_isSharedCheck_454_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v_x_444_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_454_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_453_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
lean_object* v___x_452_; 
v___x_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
return v___x_452_;
}
}
}
else
{
lean_object* v___x_455_; 
lean_dec_ref_known(v_x_444_, 1);
v___x_455_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__1___closed__1));
return v___x_455_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0___boxed(lean_object* v_x_456_, lean_object* v___y_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Lasm_KV_workers___lam__0(v_x_456_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2(lean_object* v_x_459_){
_start:
{
if (lean_obj_tag(v_x_459_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_469_; 
v_a_461_ = lean_ctor_get(v_x_459_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v_x_459_);
if (v_isSharedCheck_469_ == 0)
{
v___x_463_ = v_x_459_;
v_isShared_464_ = v_isSharedCheck_469_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v_x_459_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_469_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_a_461_);
v___x_466_ = v_reuseFailAlloc_468_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_467_; 
v___x_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_467_, 0, v___x_466_);
return v___x_467_;
}
}
}
else
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_487_; 
v_a_470_ = lean_ctor_get(v_x_459_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v_x_459_);
if (v_isSharedCheck_487_ == 0)
{
v___x_472_ = v_x_459_;
v_isShared_473_ = v_isSharedCheck_487_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v_x_459_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_487_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
if (lean_obj_tag(v_a_470_) == 4)
{
lean_object* v_s_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_485_; 
v_s_474_ = lean_ctor_get(v_a_470_, 0);
v_isSharedCheck_485_ = !lean_is_exclusive(v_a_470_);
if (v_isSharedCheck_485_ == 0)
{
v___x_476_ = v_a_470_;
v_isShared_477_ = v_isSharedCheck_485_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_s_474_);
lean_dec(v_a_470_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_485_;
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
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_s_474_);
v___x_479_ = v_reuseFailAlloc_484_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
lean_object* v___x_481_; 
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 0, v___x_479_);
v___x_481_ = v___x_472_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_479_);
v___x_481_ = v_reuseFailAlloc_483_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
lean_object* v___x_482_; 
v___x_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
return v___x_482_;
}
}
}
}
else
{
lean_object* v___x_486_; 
lean_del_object(v___x_472_);
lean_dec(v_a_470_);
v___x_486_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__0___closed__1));
return v___x_486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2___boxed(lean_object* v_x_488_, lean_object* v___y_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lasm_KV_workers___lam__2(v_x_488_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1(lean_object* v_name_492_, lean_object* v_____do__lift_493_){
_start:
{
if (lean_obj_tag(v_____do__lift_493_) == 0)
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_495_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_496_ = lean_string_append(v___x_495_, v_name_492_);
v___x_497_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
v___x_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
return v___x_498_;
}
else
{
lean_object* v_val_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_506_; 
v_val_499_ = lean_ctor_get(v_____do__lift_493_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v_____do__lift_493_);
if (v_isSharedCheck_506_ == 0)
{
v___x_501_ = v_____do__lift_493_;
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_val_499_);
lean_dec(v_____do__lift_493_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_506_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
lean_ctor_set_tag(v___x_501_, 0);
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_val_499_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1___boxed(lean_object* v_name_507_, lean_object* v_____do__lift_508_, lean_object* v___y_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Lasm_KV_workers___lam__1(v_name_507_, v_____do__lift_508_);
lean_dec_ref(v_name_507_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3(lean_object* v_k_512_, lean_object* v___f_513_, lean_object* v_x_514_){
_start:
{
if (lean_obj_tag(v_x_514_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_524_; 
lean_dec_ref(v___f_513_);
lean_dec_ref(v_k_512_);
v_a_516_ = lean_ctor_get(v_x_514_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v_x_514_);
if (v_isSharedCheck_524_ == 0)
{
v___x_518_ = v_x_514_;
v_isShared_519_ = v_isSharedCheck_524_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v_x_514_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_524_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_523_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_522_; 
v___x_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
return v___x_522_;
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; uint8_t v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v_a_525_ = lean_ctor_get(v_x_514_, 0);
lean_inc(v_a_525_);
lean_dec_ref_known(v_x_514_, 1);
v___x_526_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_527_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_527_, 0, v_k_512_);
v___x_528_ = lean_unsigned_to_nat(1u);
v___x_529_ = lean_mk_empty_array_with_capacity(v___x_528_);
v___x_530_ = lean_array_push(v___x_529_, v___x_527_);
v___x_531_ = lean_unsigned_to_nat(0u);
v___x_532_ = 0;
v___x_533_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_525_, v___x_526_, v___x_530_);
v___x_534_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_531_, v___x_532_, v___x_533_, v___f_513_);
return v___x_534_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3___boxed(lean_object* v_k_535_, lean_object* v___f_536_, lean_object* v_x_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lasm_KV_workers___lam__3(v_k_535_, v___f_536_, v_x_537_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4(lean_object* v___f_540_, lean_object* v_name_541_, lean_object* v___f_542_, lean_object* v_k_543_){
_start:
{
lean_object* v___f_545_; lean_object* v___x_546_; uint8_t v___x_547_; lean_object* v_val_549_; lean_object* v_a_553_; lean_object* v___x_555_; 
v___f_545_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__3___boxed), 4, 2);
lean_closure_set(v___f_545_, 0, v_k_543_);
lean_closure_set(v___f_545_, 1, v___f_540_);
v___x_546_ = lean_unsigned_to_nat(0u);
v___x_547_ = 0;
v___x_555_ = l_Lasm_KV_binding(v_name_541_);
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_556_; lean_object* v___x_557_; 
v_a_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_a_556_);
lean_dec_ref_known(v___x_555_, 1);
v___x_557_ = lean_apply_2(v___f_542_, v_a_556_, lean_box(0));
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
v_a_558_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v___x_557_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_557_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set_tag(v___x_560_, 1);
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_558_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
v_val_549_ = v___x_563_;
goto v___jp_548_;
}
}
}
else
{
lean_object* v_a_566_; 
v_a_566_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_a_566_);
lean_dec_ref_known(v___x_557_, 1);
v_a_553_ = v_a_566_;
goto v___jp_552_;
}
}
else
{
lean_object* v_a_567_; 
lean_dec_ref(v___f_542_);
v_a_567_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_a_567_);
lean_dec_ref_known(v___x_555_, 1);
v_a_553_ = v_a_567_;
goto v___jp_552_;
}
v___jp_548_:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v_val_549_);
v___x_551_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_546_, v___x_547_, v___x_550_, v___f_545_);
return v___x_551_;
}
v___jp_552_:
{
lean_object* v___x_554_; 
v___x_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_554_, 0, v_a_553_);
v_val_549_ = v___x_554_;
goto v___jp_548_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4___boxed(lean_object* v___f_568_, lean_object* v_name_569_, lean_object* v___f_570_, lean_object* v_k_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lasm_KV_workers___lam__4(v___f_568_, v_name_569_, v___f_570_, v_k_571_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5(lean_object* v_k_575_, lean_object* v_v_576_, lean_object* v___f_577_, lean_object* v_x_578_){
_start:
{
if (lean_obj_tag(v_x_578_) == 0)
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_588_; 
lean_dec_ref(v___f_577_);
lean_dec_ref(v_v_576_);
lean_dec_ref(v_k_575_);
v_a_580_ = lean_ctor_get(v_x_578_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v_x_578_);
if (v_isSharedCheck_588_ == 0)
{
v___x_582_ = v_x_578_;
v_isShared_583_ = v_isSharedCheck_588_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v_x_578_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_588_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_583_ == 0)
{
v___x_585_ = v___x_582_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_a_580_);
v___x_585_ = v_reuseFailAlloc_587_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_586_; 
v___x_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
return v___x_586_;
}
}
}
else
{
lean_object* v_a_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v_a_589_ = lean_ctor_get(v_x_578_, 0);
lean_inc(v_a_589_);
lean_dec_ref_known(v_x_578_, 1);
v___x_590_ = ((lean_object*)(l_Lasm_KV_workers___lam__5___closed__0));
v___x_591_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_591_, 0, v_k_575_);
v___x_592_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_592_, 0, v_v_576_);
v___x_593_ = lean_unsigned_to_nat(2u);
v___x_594_ = lean_mk_empty_array_with_capacity(v___x_593_);
v___x_595_ = lean_array_push(v___x_594_, v___x_591_);
v___x_596_ = lean_array_push(v___x_595_, v___x_592_);
v___x_597_ = lean_unsigned_to_nat(0u);
v___x_598_ = 0;
v___x_599_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_589_, v___x_590_, v___x_596_);
v___x_600_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_597_, v___x_598_, v___x_599_, v___f_577_);
return v___x_600_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5___boxed(lean_object* v_k_601_, lean_object* v_v_602_, lean_object* v___f_603_, lean_object* v_x_604_, lean_object* v___y_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l_Lasm_KV_workers___lam__5(v_k_601_, v_v_602_, v___f_603_, v_x_604_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6(lean_object* v___f_607_, lean_object* v_name_608_, lean_object* v___f_609_, lean_object* v_k_610_, lean_object* v_v_611_){
_start:
{
lean_object* v___f_613_; lean_object* v___x_614_; uint8_t v___x_615_; lean_object* v_val_617_; lean_object* v_a_621_; lean_object* v___x_623_; 
v___f_613_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__5___boxed), 5, 3);
lean_closure_set(v___f_613_, 0, v_k_610_);
lean_closure_set(v___f_613_, 1, v_v_611_);
lean_closure_set(v___f_613_, 2, v___f_607_);
v___x_614_ = lean_unsigned_to_nat(0u);
v___x_615_ = 0;
v___x_623_ = l_Lasm_KV_binding(v_name_608_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v_a_624_; lean_object* v___x_625_; 
v_a_624_ = lean_ctor_get(v___x_623_, 0);
lean_inc(v_a_624_);
lean_dec_ref_known(v___x_623_, 1);
v___x_625_ = lean_apply_2(v___f_609_, v_a_624_, lean_box(0));
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
v_a_626_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_625_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_625_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set_tag(v___x_628_, 1);
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
v_val_617_ = v___x_631_;
goto v___jp_616_;
}
}
}
else
{
lean_object* v_a_634_; 
v_a_634_ = lean_ctor_get(v___x_625_, 0);
lean_inc(v_a_634_);
lean_dec_ref_known(v___x_625_, 1);
v_a_621_ = v_a_634_;
goto v___jp_620_;
}
}
else
{
lean_object* v_a_635_; 
lean_dec_ref(v___f_609_);
v_a_635_ = lean_ctor_get(v___x_623_, 0);
lean_inc(v_a_635_);
lean_dec_ref_known(v___x_623_, 1);
v_a_621_ = v_a_635_;
goto v___jp_620_;
}
v___jp_616_:
{
lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v_val_617_);
v___x_619_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_614_, v___x_615_, v___x_618_, v___f_613_);
return v___x_619_;
}
v___jp_620_:
{
lean_object* v___x_622_; 
v___x_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_622_, 0, v_a_621_);
v_val_617_ = v___x_622_;
goto v___jp_616_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6___boxed(lean_object* v___f_636_, lean_object* v_name_637_, lean_object* v___f_638_, lean_object* v_k_639_, lean_object* v_v_640_, lean_object* v___y_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Lasm_KV_workers___lam__6(v___f_636_, v_name_637_, v___f_638_, v_k_639_, v_v_640_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7(lean_object* v_k_644_, lean_object* v___f_645_, lean_object* v_x_646_){
_start:
{
if (lean_obj_tag(v_x_646_) == 0)
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_656_; 
lean_dec_ref(v___f_645_);
lean_dec_ref(v_k_644_);
v_a_648_ = lean_ctor_get(v_x_646_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v_x_646_);
if (v_isSharedCheck_656_ == 0)
{
v___x_650_ = v_x_646_;
v_isShared_651_ = v_isSharedCheck_656_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v_x_646_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_656_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_a_648_);
v___x_653_ = v_reuseFailAlloc_655_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
lean_object* v___x_654_; 
v___x_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
return v___x_654_;
}
}
}
else
{
lean_object* v_a_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v_a_657_ = lean_ctor_get(v_x_646_, 0);
lean_inc(v_a_657_);
lean_dec_ref_known(v_x_646_, 1);
v___x_658_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_659_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_659_, 0, v_k_644_);
v___x_660_ = lean_unsigned_to_nat(1u);
v___x_661_ = lean_mk_empty_array_with_capacity(v___x_660_);
v___x_662_ = lean_array_push(v___x_661_, v___x_659_);
v___x_663_ = lean_unsigned_to_nat(0u);
v___x_664_ = 0;
v___x_665_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_657_, v___x_658_, v___x_662_);
v___x_666_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_663_, v___x_664_, v___x_665_, v___f_645_);
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7___boxed(lean_object* v_k_667_, lean_object* v___f_668_, lean_object* v_x_669_, lean_object* v___y_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_Lasm_KV_workers___lam__7(v_k_667_, v___f_668_, v_x_669_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8(lean_object* v___f_672_, lean_object* v_name_673_, lean_object* v_k_674_){
_start:
{
lean_object* v___f_676_; lean_object* v___x_677_; uint8_t v___x_678_; lean_object* v_val_680_; lean_object* v_a_684_; lean_object* v___x_686_; 
v___f_676_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__7___boxed), 4, 2);
lean_closure_set(v___f_676_, 0, v_k_674_);
lean_closure_set(v___f_676_, 1, v___f_672_);
v___x_677_ = lean_unsigned_to_nat(0u);
v___x_678_ = 0;
lean_inc_ref(v_name_673_);
v___x_686_ = l_Lasm_KV_binding(v_name_673_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_704_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_704_ == 0)
{
v___x_689_ = v___x_686_;
v_isShared_690_ = v_isSharedCheck_704_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_686_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_704_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
if (lean_obj_tag(v_a_687_) == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_694_; 
v___x_691_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_692_ = lean_string_append(v___x_691_, v_name_673_);
lean_dec_ref(v_name_673_);
if (v_isShared_690_ == 0)
{
lean_ctor_set_tag(v___x_689_, 18);
lean_ctor_set(v___x_689_, 0, v___x_692_);
v___x_694_ = v___x_689_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
v_a_684_ = v___x_694_;
goto v___jp_683_;
}
}
else
{
lean_object* v_val_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
lean_del_object(v___x_689_);
lean_dec_ref(v_name_673_);
v_val_696_ = lean_ctor_get(v_a_687_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v_a_687_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v_a_687_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_val_696_);
lean_dec(v_a_687_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_val_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
v_val_680_ = v___x_701_;
goto v___jp_679_;
}
}
}
}
}
else
{
lean_object* v_a_705_; 
lean_dec_ref(v_name_673_);
v_a_705_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_705_);
lean_dec_ref_known(v___x_686_, 1);
v_a_684_ = v_a_705_;
goto v___jp_683_;
}
v___jp_679_:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_681_, 0, v_val_680_);
v___x_682_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_677_, v___x_678_, v___x_681_, v___f_676_);
return v___x_682_;
}
v___jp_683_:
{
lean_object* v___x_685_; 
v___x_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_685_, 0, v_a_684_);
v_val_680_ = v___x_685_;
goto v___jp_679_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8___boxed(lean_object* v___f_706_, lean_object* v_name_707_, lean_object* v_k_708_, lean_object* v___y_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Lasm_KV_workers___lam__8(v___f_706_, v_name_707_, v_k_708_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers(lean_object* v_name_714_){
_start:
{
lean_object* v___f_715_; lean_object* v___f_716_; lean_object* v___f_717_; lean_object* v_delete_718_; lean_object* v_put_719_; lean_object* v_get_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___f_715_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_716_ = ((lean_object*)(l_Lasm_KV_workers___closed__1));
lean_inc_ref_n(v_name_714_, 3);
v___f_717_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__1___boxed), 3, 1);
lean_closure_set(v___f_717_, 0, v_name_714_);
lean_inc_ref(v___f_717_);
v_delete_718_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__4___boxed), 5, 3);
lean_closure_set(v_delete_718_, 0, v___f_715_);
lean_closure_set(v_delete_718_, 1, v_name_714_);
lean_closure_set(v_delete_718_, 2, v___f_717_);
v_put_719_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__6___boxed), 6, 3);
lean_closure_set(v_put_719_, 0, v___f_715_);
lean_closure_set(v_put_719_, 1, v_name_714_);
lean_closure_set(v_put_719_, 2, v___f_717_);
v_get_720_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__8___boxed), 4, 2);
lean_closure_set(v_get_720_, 0, v___f_716_);
lean_closure_set(v_get_720_, 1, v_name_714_);
v___x_721_ = ((lean_object*)(l_Lasm_KV_workers___closed__2));
v___x_722_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
lean_ctor_set(v___x_722_, 1, v_get_720_);
lean_ctor_set(v___x_722_, 2, v_put_719_);
lean_ctor_set(v___x_722_, 3, v_delete_718_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3(lean_object* v___f_724_, lean_object* v_x_725_){
_start:
{
if (lean_obj_tag(v_x_725_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_735_; 
lean_dec_ref(v___f_724_);
v_a_727_ = lean_ctor_get(v_x_725_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v_x_725_);
if (v_isSharedCheck_735_ == 0)
{
v___x_729_ = v_x_725_;
v_isShared_730_ = v_isSharedCheck_735_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v_x_725_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_735_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_734_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
lean_object* v___x_733_; 
v___x_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_733_, 0, v___x_732_);
return v___x_733_;
}
}
}
else
{
lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_756_; 
v_a_736_ = lean_ctor_get(v_x_725_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v_x_725_);
if (v_isSharedCheck_756_ == 0)
{
v___x_738_ = v_x_725_;
v_isShared_739_ = v_isSharedCheck_756_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v_x_725_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_756_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; lean_object* v_val_744_; lean_object* v___x_747_; 
v___x_740_ = ((lean_object*)(l_Lasm_KV_deno___lam__3___closed__0));
v___x_741_ = lean_unsigned_to_nat(0u);
v___x_742_ = 0;
v___x_747_ = l_Lasm_JS_Value_get___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__1(v_a_736_, v___x_740_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; lean_object* v___x_750_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_748_);
lean_dec_ref_known(v___x_747_, 1);
if (v_isShared_739_ == 0)
{
lean_ctor_set(v___x_738_, 0, v_a_748_);
v___x_750_ = v___x_738_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_748_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
v_val_744_ = v___x_750_;
goto v___jp_743_;
}
}
else
{
lean_object* v_a_752_; lean_object* v___x_754_; 
v_a_752_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_752_);
lean_dec_ref_known(v___x_747_, 1);
if (v_isShared_739_ == 0)
{
lean_ctor_set_tag(v___x_738_, 0);
lean_ctor_set(v___x_738_, 0, v_a_752_);
v___x_754_ = v___x_738_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_752_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
v_val_744_ = v___x_754_;
goto v___jp_743_;
}
}
v___jp_743_:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_745_, 0, v_val_744_);
v___x_746_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_741_, v___x_742_, v___x_745_, v___f_724_);
return v___x_746_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3___boxed(lean_object* v___f_757_, lean_object* v_x_758_, lean_object* v___y_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l_Lasm_KV_deno___lam__3(v___f_757_, v_x_758_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0(lean_object* v_name_761_, lean_object* v_a_762_, lean_object* v___x_763_, lean_object* v___f_764_, lean_object* v_k_765_){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; uint8_t v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_767_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_768_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_768_, 0, v_name_761_);
v___x_769_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_769_, 0, v_k_765_);
v___x_770_ = lean_unsigned_to_nat(2u);
v___x_771_ = lean_mk_empty_array_with_capacity(v___x_770_);
v___x_772_ = lean_array_push(v___x_771_, v___x_768_);
v___x_773_ = lean_array_push(v___x_772_, v___x_769_);
v___x_774_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_774_, 0, v___x_773_);
v___x_775_ = lean_unsigned_to_nat(1u);
v___x_776_ = lean_mk_empty_array_with_capacity(v___x_775_);
v___x_777_ = lean_array_push(v___x_776_, v___x_774_);
v___x_778_ = 0;
v___x_779_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_762_, v___x_767_, v___x_777_);
v___x_780_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_763_, v___x_778_, v___x_779_, v___f_764_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0___boxed(lean_object* v_name_781_, lean_object* v_a_782_, lean_object* v___x_783_, lean_object* v___f_784_, lean_object* v_k_785_, lean_object* v___y_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Lasm_KV_deno___lam__0(v_name_781_, v_a_782_, v___x_783_, v___f_784_, v_k_785_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1(lean_object* v_name_789_, lean_object* v_a_790_, lean_object* v___x_791_, lean_object* v___f_792_, lean_object* v_k_793_, lean_object* v_v_794_){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_796_ = ((lean_object*)(l_Lasm_KV_deno___lam__1___closed__0));
v___x_797_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_797_, 0, v_name_789_);
v___x_798_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_798_, 0, v_k_793_);
v___x_799_ = lean_unsigned_to_nat(2u);
v___x_800_ = lean_mk_empty_array_with_capacity(v___x_799_);
lean_inc_ref(v___x_800_);
v___x_801_ = lean_array_push(v___x_800_, v___x_797_);
v___x_802_ = lean_array_push(v___x_801_, v___x_798_);
v___x_803_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
v___x_804_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_804_, 0, v_v_794_);
v___x_805_ = lean_array_push(v___x_800_, v___x_803_);
v___x_806_ = lean_array_push(v___x_805_, v___x_804_);
v___x_807_ = 0;
v___x_808_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_790_, v___x_796_, v___x_806_);
v___x_809_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_791_, v___x_807_, v___x_808_, v___f_792_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1___boxed(lean_object* v_name_810_, lean_object* v_a_811_, lean_object* v___x_812_, lean_object* v___f_813_, lean_object* v_k_814_, lean_object* v_v_815_, lean_object* v___y_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lasm_KV_deno___lam__1(v_name_810_, v_a_811_, v___x_812_, v___f_813_, v_k_814_, v_v_815_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2(lean_object* v_name_818_, lean_object* v_a_819_, lean_object* v___x_820_, lean_object* v___f_821_, lean_object* v_k_822_){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; uint8_t v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_824_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_825_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_825_, 0, v_name_818_);
v___x_826_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_826_, 0, v_k_822_);
v___x_827_ = lean_unsigned_to_nat(2u);
v___x_828_ = lean_mk_empty_array_with_capacity(v___x_827_);
v___x_829_ = lean_array_push(v___x_828_, v___x_825_);
v___x_830_ = lean_array_push(v___x_829_, v___x_826_);
v___x_831_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
v___x_832_ = lean_unsigned_to_nat(1u);
v___x_833_ = lean_mk_empty_array_with_capacity(v___x_832_);
v___x_834_ = lean_array_push(v___x_833_, v___x_831_);
v___x_835_ = 0;
v___x_836_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_819_, v___x_824_, v___x_834_);
v___x_837_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_820_, v___x_835_, v___x_836_, v___f_821_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2___boxed(lean_object* v_name_838_, lean_object* v_a_839_, lean_object* v___x_840_, lean_object* v___f_841_, lean_object* v_k_842_, lean_object* v___y_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lasm_KV_deno___lam__2(v_name_838_, v_a_839_, v___x_840_, v___f_841_, v_k_842_);
return v_res_844_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1(void){
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
v___x_854_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0));
v___x_855_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_855_, 0, v_o_850_);
lean_ctor_set(v___x_855_, 1, v___x_854_);
lean_inc_ref(v_name_851_);
v___x_856_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_856_, 0, v_name_851_);
v___x_857_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1);
v___x_858_ = l_Lasm_JS_Value_invokeRaw(v___x_855_, v___x_856_, v_args_852_, v___x_857_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_a_859_);
lean_dec_ref_known(v___x_858_, 1);
v___x_860_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__2));
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
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_readAll(uint32_t v_body_936_, lean_object* v_acc_937_){
_start:
{
uint32_t v___x_939_; lean_object* v___x_940_; 
v___x_939_ = 65536;
v___x_940_ = lasm_fastly_http_body_read(v_body_936_, v___x_939_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_954_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_954_ == 0)
{
v___x_943_ = v___x_940_;
v_isShared_944_ = v_isSharedCheck_954_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_940_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_954_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
uint8_t v___x_945_; 
v___x_945_ = l_ByteArray_isEmpty(v_a_941_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
lean_del_object(v___x_943_);
v___x_946_ = lean_unsigned_to_nat(0u);
v___x_947_ = lean_byte_array_size(v_acc_937_);
v___x_948_ = lean_byte_array_size(v_a_941_);
v___x_949_ = lean_byte_array_copy_slice(v_a_941_, v___x_946_, v_acc_937_, v___x_947_, v___x_948_, v___x_945_);
lean_dec(v_a_941_);
v_acc_937_ = v___x_949_;
goto _start;
}
else
{
lean_object* v___x_952_; 
lean_dec(v_a_941_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v_acc_937_);
v___x_952_ = v___x_943_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_acc_937_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
else
{
lean_dec_ref(v_acc_937_);
return v___x_940_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_readAll___boxed(lean_object* v_body_955_, lean_object* v_acc_956_, lean_object* v_a_957_){
_start:
{
uint32_t v_body_boxed_958_; lean_object* v_res_959_; 
v_body_boxed_958_ = lean_unbox_uint32(v_body_955_);
lean_dec(v_body_955_);
v_res_959_ = l_Lasm_KV_FastlyKV_readAll(v_body_boxed_958_, v_acc_956_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_writeAll(uint32_t v_body_960_, lean_object* v_bytes_961_){
_start:
{
uint8_t v___x_963_; 
v___x_963_ = l_ByteArray_isEmpty(v_bytes_961_);
if (v___x_963_ == 0)
{
uint8_t v___x_964_; lean_object* v___x_965_; 
v___x_964_ = 0;
v___x_965_ = lasm_fastly_http_body_write(v_body_960_, v_bytes_961_, v___x_964_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v_a_966_; uint32_t v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v_a_966_ = lean_ctor_get(v___x_965_, 0);
lean_inc(v_a_966_);
lean_dec_ref_known(v___x_965_, 1);
v___x_967_ = lean_unbox_uint32(v_a_966_);
lean_dec(v_a_966_);
v___x_968_ = lean_uint32_to_nat(v___x_967_);
v___x_969_ = lean_byte_array_size(v_bytes_961_);
v___x_970_ = l_ByteArray_extract(v_bytes_961_, v___x_968_, v___x_969_);
lean_dec_ref(v_bytes_961_);
v_bytes_961_ = v___x_970_;
goto _start;
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec_ref(v_bytes_961_);
v_a_972_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_965_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_965_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
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
return v___x_977_;
}
}
}
}
else
{
lean_object* v___x_980_; lean_object* v___x_981_; 
lean_dec_ref(v_bytes_961_);
v___x_980_ = lean_box(0);
v___x_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
return v___x_981_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_writeAll___boxed(lean_object* v_body_982_, lean_object* v_bytes_983_, lean_object* v_a_984_){
_start:
{
uint32_t v_body_boxed_985_; lean_object* v_res_986_; 
v_body_boxed_985_ = lean_unbox_uint32(v_body_982_);
lean_dec(v_body_982_);
v_res_986_ = l_Lasm_KV_FastlyKV_writeAll(v_body_boxed_985_, v_bytes_983_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_get(lean_object* v_name_990_, lean_object* v_key_991_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = lasm_fastly_kv_store_open(v_name_990_);
if (lean_obj_tag(v___x_993_) == 0)
{
lean_object* v_a_994_; uint32_t v___x_995_; uint32_t v___x_996_; lean_object* v___x_997_; 
v_a_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_a_994_);
lean_dec_ref_known(v___x_993_, 1);
v___x_995_ = 0;
v___x_996_ = lean_unbox_uint32(v_a_994_);
lean_dec(v_a_994_);
v___x_997_ = lasm_fastly_kv_store_lookup(v___x_996_, v_key_991_, v___x_995_, v___x_995_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
lean_inc(v_a_998_);
lean_dec_ref_known(v___x_997_, 1);
v___x_999_ = lean_alloc_closure((void*)(l_Lasm_Fastly_KvStore_lookupWaitV2___boxed), 2, 1);
lean_closure_set(v___x_999_, 0, v_a_998_);
v___x_1000_ = l_Lasm_Fastly_found_x3f___redArg(v___x_999_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1067_; 
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1003_ = v___x_1000_;
v_isShared_1004_ = v_isSharedCheck_1067_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_1000_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1067_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
if (lean_obj_tag(v_a_1001_) == 0)
{
lean_object* v___x_1005_; lean_object* v___x_1007_; 
v___x_1005_ = lean_box(0);
if (v_isShared_1004_ == 0)
{
lean_ctor_set(v___x_1003_, 0, v___x_1005_);
v___x_1007_ = v___x_1003_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_1005_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
else
{
lean_object* v_val_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1066_; 
v_val_1009_ = lean_ctor_get(v_a_1001_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v_a_1001_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1011_ = v_a_1001_;
v_isShared_1012_ = v_isSharedCheck_1066_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_val_1009_);
lean_dec(v_a_1001_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1066_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v_snd_1013_; lean_object* v_snd_1014_; lean_object* v_snd_1015_; uint8_t v___x_1016_; 
v_snd_1013_ = lean_ctor_get(v_val_1009_, 1);
v_snd_1014_ = lean_ctor_get(v_snd_1013_, 1);
v_snd_1015_ = lean_ctor_get(v_snd_1014_, 1);
v___x_1016_ = lean_unbox(v_snd_1015_);
switch(v___x_1016_)
{
case 1:
{
lean_object* v_fst_1017_; lean_object* v___x_1018_; uint32_t v___x_1019_; lean_object* v___x_1020_; 
lean_del_object(v___x_1003_);
v_fst_1017_ = lean_ctor_get(v_val_1009_, 0);
lean_inc(v_fst_1017_);
lean_dec(v_val_1009_);
v___x_1018_ = l_ByteArray_empty;
v___x_1019_ = lean_unbox_uint32(v_fst_1017_);
lean_dec(v_fst_1017_);
v___x_1020_ = l_Lasm_KV_FastlyKV_readAll(v___x_1019_, v___x_1018_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1037_; 
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1023_ = v___x_1020_;
v_isShared_1024_ = v_isSharedCheck_1037_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1020_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1037_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
uint8_t v___x_1025_; 
v___x_1025_ = lean_string_validate_utf8(v_a_1021_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; lean_object* v___x_1028_; 
lean_dec(v_a_1021_);
lean_del_object(v___x_1011_);
v___x_1026_ = lean_box(0);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v___x_1026_);
v___x_1028_ = v___x_1023_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1026_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
else
{
lean_object* v___x_1030_; lean_object* v___x_1032_; 
v___x_1030_ = lean_string_from_utf8_unchecked(v_a_1021_);
if (v_isShared_1012_ == 0)
{
lean_ctor_set(v___x_1011_, 0, v___x_1030_);
v___x_1032_ = v___x_1011_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1030_);
v___x_1032_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1034_; 
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v___x_1032_);
v___x_1034_ = v___x_1023_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v___x_1032_);
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
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1047_; 
lean_del_object(v___x_1011_);
v_a_1038_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1040_ = v___x_1020_;
v_isShared_1041_ = v_isSharedCheck_1047_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_1020_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1047_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
uint8_t v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1045_; 
v___x_1042_ = lean_unbox(v_a_1038_);
lean_dec(v_a_1038_);
v___x_1043_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1042_);
if (v_isShared_1041_ == 0)
{
lean_ctor_set(v___x_1040_, 0, v___x_1043_);
v___x_1045_ = v___x_1040_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v___x_1043_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
}
case 3:
{
lean_object* v___x_1048_; lean_object* v___x_1050_; 
lean_del_object(v___x_1011_);
lean_dec(v_val_1009_);
v___x_1048_ = lean_box(0);
if (v_isShared_1004_ == 0)
{
lean_ctor_set(v___x_1003_, 0, v___x_1048_);
v___x_1050_ = v___x_1003_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
default: 
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; uint8_t v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1064_; 
lean_inc(v_snd_1015_);
lean_del_object(v___x_1011_);
lean_dec(v_val_1009_);
v___x_1052_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__0));
v___x_1053_ = lean_string_append(v___x_1052_, v_name_990_);
v___x_1054_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__1));
v___x_1055_ = lean_string_append(v___x_1053_, v___x_1054_);
v___x_1056_ = lean_string_append(v___x_1055_, v_key_991_);
v___x_1057_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__2));
v___x_1058_ = lean_string_append(v___x_1056_, v___x_1057_);
v___x_1059_ = lean_unbox(v_snd_1015_);
lean_dec(v_snd_1015_);
v___x_1060_ = l_Lasm_Fastly_KvError_witxName(v___x_1059_);
v___x_1061_ = lean_string_append(v___x_1058_, v___x_1060_);
lean_dec_ref(v___x_1060_);
v___x_1062_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
if (v_isShared_1004_ == 0)
{
lean_ctor_set_tag(v___x_1003_, 1);
lean_ctor_set(v___x_1003_, 0, v___x_1062_);
v___x_1064_ = v___x_1003_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1062_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1077_; 
v_a_1068_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1070_ = v___x_1000_;
v_isShared_1071_ = v_isSharedCheck_1077_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1000_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1077_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
uint8_t v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1075_; 
v___x_1072_ = lean_unbox(v_a_1068_);
lean_dec(v_a_1068_);
v___x_1073_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1072_);
if (v_isShared_1071_ == 0)
{
lean_ctor_set(v___x_1070_, 0, v___x_1073_);
v___x_1075_ = v___x_1070_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
else
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1087_; 
v_a_1078_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1080_ = v___x_997_;
v_isShared_1081_ = v_isSharedCheck_1087_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_997_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1087_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
uint8_t v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1085_; 
v___x_1082_ = lean_unbox(v_a_1078_);
lean_dec(v_a_1078_);
v___x_1083_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1082_);
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 0, v___x_1083_);
v___x_1085_ = v___x_1080_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v___x_1083_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
else
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1097_; 
v_a_1088_ = lean_ctor_get(v___x_993_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_993_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1090_ = v___x_993_;
v_isShared_1091_ = v_isSharedCheck_1097_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_993_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1097_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
uint8_t v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1095_; 
v___x_1092_ = lean_unbox(v_a_1088_);
lean_dec(v_a_1088_);
v___x_1093_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1092_);
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 0, v___x_1093_);
v___x_1095_ = v___x_1090_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v___x_1093_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_get___boxed(lean_object* v_name_1098_, lean_object* v_key_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lasm_KV_FastlyKV_get(v_name_1098_, v_key_1099_);
lean_dec_ref(v_key_1099_);
lean_dec_ref(v_name_1098_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_put(lean_object* v_name_1108_, lean_object* v_key_1109_, lean_object* v_value_1110_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = lasm_fastly_kv_store_open(v_name_1108_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; lean_object* v___x_1114_; 
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_a_1113_);
lean_dec_ref_known(v___x_1112_, 1);
v___x_1114_ = lasm_fastly_http_body_new();
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; lean_object* v___x_1116_; uint32_t v___x_1117_; lean_object* v___x_1118_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___x_1114_, 1);
v___x_1116_ = lean_string_to_utf8(v_value_1110_);
v___x_1117_ = lean_unbox_uint32(v_a_1115_);
v___x_1118_ = l_Lasm_KV_FastlyKV_writeAll(v___x_1117_, v___x_1116_);
if (lean_obj_tag(v___x_1118_) == 0)
{
uint32_t v___x_1119_; lean_object* v___x_1120_; uint32_t v___x_1121_; uint32_t v___x_1122_; lean_object* v___x_1123_; 
lean_dec_ref_known(v___x_1118_, 1);
v___x_1119_ = 0;
v___x_1120_ = ((lean_object*)(l_Lasm_KV_FastlyKV_put___closed__0));
v___x_1121_ = lean_unbox_uint32(v_a_1113_);
lean_dec(v_a_1113_);
v___x_1122_ = lean_unbox_uint32(v_a_1115_);
lean_dec(v_a_1115_);
v___x_1123_ = l_Lasm_Fastly_KvStore_insert(v___x_1121_, v_key_1109_, v___x_1122_, v___x_1119_, v___x_1120_);
if (lean_obj_tag(v___x_1123_) == 0)
{
lean_object* v_a_1124_; uint32_t v___x_1125_; lean_object* v___x_1126_; 
v_a_1124_ = lean_ctor_get(v___x_1123_, 0);
lean_inc(v_a_1124_);
lean_dec_ref_known(v___x_1123_, 1);
v___x_1125_ = lean_unbox_uint32(v_a_1124_);
lean_dec(v_a_1124_);
v___x_1126_ = lasm_fastly_kv_store_insert_wait(v___x_1125_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1150_; 
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1129_ = v___x_1126_;
v_isShared_1130_ = v_isSharedCheck_1150_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1126_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1150_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
uint8_t v___x_1131_; 
v___x_1131_ = lean_unbox(v_a_1127_);
if (v___x_1131_ == 1)
{
lean_object* v___x_1132_; lean_object* v___x_1134_; 
lean_dec(v_a_1127_);
v___x_1132_ = lean_box(0);
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 0, v___x_1132_);
v___x_1134_ = v___x_1129_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1132_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
else
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; uint8_t v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1148_; 
v___x_1136_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__0));
v___x_1137_ = lean_string_append(v___x_1136_, v_name_1108_);
v___x_1138_ = ((lean_object*)(l_Lasm_KV_FastlyKV_put___closed__1));
v___x_1139_ = lean_string_append(v___x_1137_, v___x_1138_);
v___x_1140_ = lean_string_append(v___x_1139_, v_key_1109_);
v___x_1141_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__2));
v___x_1142_ = lean_string_append(v___x_1140_, v___x_1141_);
v___x_1143_ = lean_unbox(v_a_1127_);
lean_dec(v_a_1127_);
v___x_1144_ = l_Lasm_Fastly_KvError_witxName(v___x_1143_);
v___x_1145_ = lean_string_append(v___x_1142_, v___x_1144_);
lean_dec_ref(v___x_1144_);
v___x_1146_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1145_);
if (v_isShared_1130_ == 0)
{
lean_ctor_set_tag(v___x_1129_, 1);
lean_ctor_set(v___x_1129_, 0, v___x_1146_);
v___x_1148_ = v___x_1129_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v___x_1146_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1160_; 
v_a_1151_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1153_ = v___x_1126_;
v_isShared_1154_ = v_isSharedCheck_1160_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1126_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1160_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
uint8_t v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1158_; 
v___x_1155_ = lean_unbox(v_a_1151_);
lean_dec(v_a_1151_);
v___x_1156_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1155_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 0, v___x_1156_);
v___x_1158_ = v___x_1153_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1156_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1170_; 
v_a_1161_ = lean_ctor_get(v___x_1123_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1163_ = v___x_1123_;
v_isShared_1164_ = v_isSharedCheck_1170_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v___x_1123_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1170_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
uint8_t v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1168_; 
v___x_1165_ = lean_unbox(v_a_1161_);
lean_dec(v_a_1161_);
v___x_1166_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1165_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 0, v___x_1166_);
v___x_1168_ = v___x_1163_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1166_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1180_; 
lean_dec(v_a_1115_);
lean_dec(v_a_1113_);
v_a_1171_ = lean_ctor_get(v___x_1118_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1173_ = v___x_1118_;
v_isShared_1174_ = v_isSharedCheck_1180_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1118_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1180_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
uint8_t v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1178_; 
v___x_1175_ = lean_unbox(v_a_1171_);
lean_dec(v_a_1171_);
v___x_1176_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1175_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 0, v___x_1176_);
v___x_1178_ = v___x_1173_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1176_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
}
else
{
lean_object* v_a_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1190_; 
lean_dec(v_a_1113_);
v_a_1181_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1183_ = v___x_1114_;
v_isShared_1184_ = v_isSharedCheck_1190_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_a_1181_);
lean_dec(v___x_1114_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1190_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
uint8_t v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1188_; 
v___x_1185_ = lean_unbox(v_a_1181_);
lean_dec(v_a_1181_);
v___x_1186_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1185_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v___x_1186_);
v___x_1188_ = v___x_1183_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1186_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
else
{
lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1200_; 
v_a_1191_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1193_ = v___x_1112_;
v_isShared_1194_ = v_isSharedCheck_1200_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v___x_1112_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1200_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
uint8_t v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1195_ = lean_unbox(v_a_1191_);
lean_dec(v_a_1191_);
v___x_1196_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1195_);
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 0, v___x_1196_);
v___x_1198_ = v___x_1193_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_put___boxed(lean_object* v_name_1201_, lean_object* v_key_1202_, lean_object* v_value_1203_, lean_object* v_a_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lasm_KV_FastlyKV_put(v_name_1201_, v_key_1202_, v_value_1203_);
lean_dec_ref(v_value_1203_);
lean_dec_ref(v_key_1202_);
lean_dec_ref(v_name_1201_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_delete(lean_object* v_name_1207_, lean_object* v_key_1208_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = lasm_fastly_kv_store_open(v_name_1207_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v_a_1214_; uint32_t v___x_1215_; uint32_t v___x_1216_; lean_object* v___x_1217_; 
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_a_1214_);
lean_dec_ref_known(v___x_1213_, 1);
v___x_1215_ = 0;
v___x_1216_ = lean_unbox_uint32(v_a_1214_);
lean_dec(v_a_1214_);
v___x_1217_ = lasm_fastly_kv_store_delete(v___x_1216_, v_key_1208_, v___x_1215_, v___x_1215_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1218_; uint32_t v___x_1219_; lean_object* v___x_1220_; 
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
lean_inc(v_a_1218_);
lean_dec_ref_known(v___x_1217_, 1);
v___x_1219_ = lean_unbox_uint32(v_a_1218_);
lean_dec(v_a_1218_);
v___x_1220_ = lasm_fastly_kv_store_delete_wait(v___x_1219_);
if (lean_obj_tag(v___x_1220_) == 0)
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1240_; 
v_a_1221_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1223_ = v___x_1220_;
v_isShared_1224_ = v_isSharedCheck_1240_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v___x_1220_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1240_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
uint8_t v___x_1225_; 
v___x_1225_ = lean_unbox(v_a_1221_);
switch(v___x_1225_)
{
case 1:
{
lean_del_object(v___x_1223_);
lean_dec(v_a_1221_);
goto v___jp_1210_;
}
case 3:
{
lean_del_object(v___x_1223_);
lean_dec(v_a_1221_);
goto v___jp_1210_;
}
default: 
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1238_; 
v___x_1226_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__0));
v___x_1227_ = lean_string_append(v___x_1226_, v_name_1207_);
v___x_1228_ = ((lean_object*)(l_Lasm_KV_FastlyKV_delete___closed__0));
v___x_1229_ = lean_string_append(v___x_1227_, v___x_1228_);
v___x_1230_ = lean_string_append(v___x_1229_, v_key_1208_);
v___x_1231_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__2));
v___x_1232_ = lean_string_append(v___x_1230_, v___x_1231_);
v___x_1233_ = lean_unbox(v_a_1221_);
lean_dec(v_a_1221_);
v___x_1234_ = l_Lasm_Fastly_KvError_witxName(v___x_1233_);
v___x_1235_ = lean_string_append(v___x_1232_, v___x_1234_);
lean_dec_ref(v___x_1234_);
v___x_1236_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1235_);
if (v_isShared_1224_ == 0)
{
lean_ctor_set_tag(v___x_1223_, 1);
lean_ctor_set(v___x_1223_, 0, v___x_1236_);
v___x_1238_ = v___x_1223_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1236_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
}
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1250_; 
v_a_1241_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1243_ = v___x_1220_;
v_isShared_1244_ = v_isSharedCheck_1250_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1220_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1250_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
uint8_t v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1245_ = lean_unbox(v_a_1241_);
lean_dec(v_a_1241_);
v___x_1246_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1245_);
if (v_isShared_1244_ == 0)
{
lean_ctor_set(v___x_1243_, 0, v___x_1246_);
v___x_1248_ = v___x_1243_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___x_1246_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
}
else
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1260_; 
v_a_1251_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1253_ = v___x_1217_;
v_isShared_1254_ = v_isSharedCheck_1260_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1217_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1260_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
uint8_t v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1255_ = lean_unbox(v_a_1251_);
lean_dec(v_a_1251_);
v___x_1256_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1255_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v___x_1256_);
v___x_1258_ = v___x_1253_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1270_; 
v_a_1261_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1263_ = v___x_1213_;
v_isShared_1264_ = v_isSharedCheck_1270_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1213_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1270_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
uint8_t v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1268_; 
v___x_1265_ = lean_unbox(v_a_1261_);
lean_dec(v_a_1261_);
v___x_1266_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1265_);
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 0, v___x_1266_);
v___x_1268_ = v___x_1263_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v___x_1266_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
v___jp_1210_:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1211_ = lean_box(0);
v___x_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
return v___x_1212_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_delete___boxed(lean_object* v_name_1271_, lean_object* v_key_1272_, lean_object* v_a_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lasm_KV_FastlyKV_delete(v_name_1271_, v_key_1272_);
lean_dec_ref(v_key_1272_);
lean_dec_ref(v_name_1271_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0(lean_object* v_name_1275_, lean_object* v_k_1276_){
_start:
{
lean_object* v_val_1279_; lean_object* v___x_1281_; 
v___x_1281_ = l_Lasm_KV_FastlyKV_get(v_name_1275_, v_k_1276_);
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1289_; 
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1284_ = v___x_1281_;
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v___x_1281_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1287_; 
if (v_isShared_1285_ == 0)
{
lean_ctor_set_tag(v___x_1284_, 1);
v___x_1287_ = v___x_1284_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1282_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
v_val_1279_ = v___x_1287_;
goto v___jp_1278_;
}
}
}
else
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1297_; 
v_a_1290_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1292_ = v___x_1281_;
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1281_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1293_ == 0)
{
lean_ctor_set_tag(v___x_1292_, 0);
v___x_1295_ = v___x_1292_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_a_1290_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
v_val_1279_ = v___x_1295_;
goto v___jp_1278_;
}
}
}
v___jp_1278_:
{
lean_object* v___x_1280_; 
v___x_1280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1280_, 0, v_val_1279_);
return v___x_1280_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0___boxed(lean_object* v_name_1298_, lean_object* v_k_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lasm_KV_fastly___lam__0(v_name_1298_, v_k_1299_);
lean_dec_ref(v_k_1299_);
lean_dec_ref(v_name_1298_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1(lean_object* v_name_1302_, lean_object* v_k_1303_, lean_object* v_v_1304_){
_start:
{
lean_object* v_val_1307_; lean_object* v___x_1309_; 
v___x_1309_ = l_Lasm_KV_FastlyKV_put(v_name_1302_, v_k_1303_, v_v_1304_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v_a_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1317_; 
v_a_1310_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1309_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v___x_1309_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
lean_ctor_set_tag(v___x_1312_, 1);
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
v_val_1307_ = v___x_1315_;
goto v___jp_1306_;
}
}
}
else
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
v_a_1318_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1309_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1309_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
lean_ctor_set_tag(v___x_1320_, 0);
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
v_val_1307_ = v___x_1323_;
goto v___jp_1306_;
}
}
}
v___jp_1306_:
{
lean_object* v___x_1308_; 
v___x_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1308_, 0, v_val_1307_);
return v___x_1308_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1___boxed(lean_object* v_name_1326_, lean_object* v_k_1327_, lean_object* v_v_1328_, lean_object* v___y_1329_){
_start:
{
lean_object* v_res_1330_; 
v_res_1330_ = l_Lasm_KV_fastly___lam__1(v_name_1326_, v_k_1327_, v_v_1328_);
lean_dec_ref(v_v_1328_);
lean_dec_ref(v_k_1327_);
lean_dec_ref(v_name_1326_);
return v_res_1330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2(lean_object* v_name_1331_, lean_object* v_k_1332_){
_start:
{
lean_object* v_val_1335_; lean_object* v___x_1337_; 
v___x_1337_ = l_Lasm_KV_FastlyKV_delete(v_name_1331_, v_k_1332_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1345_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1340_ = v___x_1337_;
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v___x_1337_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1343_; 
if (v_isShared_1341_ == 0)
{
lean_ctor_set_tag(v___x_1340_, 1);
v___x_1343_ = v___x_1340_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_a_1338_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
v_val_1335_ = v___x_1343_;
goto v___jp_1334_;
}
}
}
else
{
lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1353_; 
v_a_1346_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1353_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1348_ = v___x_1337_;
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_dec(v___x_1337_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1351_; 
if (v_isShared_1349_ == 0)
{
lean_ctor_set_tag(v___x_1348_, 0);
v___x_1351_ = v___x_1348_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_a_1346_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
v_val_1335_ = v___x_1351_;
goto v___jp_1334_;
}
}
}
v___jp_1334_:
{
lean_object* v___x_1336_; 
v___x_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1336_, 0, v_val_1335_);
return v___x_1336_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2___boxed(lean_object* v_name_1354_, lean_object* v_k_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l_Lasm_KV_fastly___lam__2(v_name_1354_, v_k_1355_);
lean_dec_ref(v_k_1355_);
lean_dec_ref(v_name_1354_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly(lean_object* v_name_1359_){
_start:
{
lean_object* v___f_1360_; lean_object* v___f_1361_; lean_object* v___f_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
lean_inc_ref_n(v_name_1359_, 2);
v___f_1360_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1360_, 0, v_name_1359_);
v___f_1361_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1361_, 0, v_name_1359_);
v___f_1362_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1362_, 0, v_name_1359_);
v___x_1363_ = ((lean_object*)(l_Lasm_KV_fastly___closed__0));
v___x_1364_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1363_);
lean_ctor_set(v___x_1364_, 1, v___f_1360_);
lean_ctor_set(v___x_1364_, 2, v___f_1361_);
lean_ctor_set(v___x_1364_, 3, v___f_1362_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0(uint8_t v_a_1365_, uint8_t v_a_1366_, lean_object* v_____do__lift_1367_){
_start:
{
if (lean_obj_tag(v_____do__lift_1367_) == 0)
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = lean_box(v_a_1365_);
v___x_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1369_);
return v___x_1370_;
}
else
{
lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1378_; 
v_isSharedCheck_1378_ = !lean_is_exclusive(v_____do__lift_1367_);
if (v_isSharedCheck_1378_ == 0)
{
lean_object* v_unused_1379_; 
v_unused_1379_ = lean_ctor_get(v_____do__lift_1367_, 0);
lean_dec(v_unused_1379_);
v___x_1372_ = v_____do__lift_1367_;
v_isShared_1373_ = v_isSharedCheck_1378_;
goto v_resetjp_1371_;
}
else
{
lean_dec(v_____do__lift_1367_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1378_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1374_; lean_object* v___x_1376_; 
v___x_1374_ = lean_box(v_a_1366_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set_tag(v___x_1372_, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1374_);
v___x_1376_ = v___x_1372_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1374_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0___boxed(lean_object* v_a_1380_, lean_object* v_a_1381_, lean_object* v_____do__lift_1382_, lean_object* v___y_1383_){
_start:
{
uint8_t v_a_3297__boxed_1384_; uint8_t v_a_3298__boxed_1385_; lean_object* v_res_1386_; 
v_a_3297__boxed_1384_ = lean_unbox(v_a_1380_);
v_a_3298__boxed_1385_ = lean_unbox(v_a_1381_);
v_res_1386_ = l_Lasm_KV_open___lam__0(v_a_3297__boxed_1384_, v_a_3298__boxed_1385_, v_____do__lift_1382_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1(lean_object* v_a_1387_, lean_object* v_k_1388_, lean_object* v___x_1389_, lean_object* v_x_1390_){
_start:
{
if (lean_obj_tag(v_x_1390_) == 0)
{
lean_object* v_a_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1400_; 
lean_dec_ref(v___x_1389_);
lean_dec_ref(v_k_1388_);
lean_dec_ref(v_a_1387_);
v_a_1392_ = lean_ctor_get(v_x_1390_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v_x_1390_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1394_ = v_x_1390_;
v_isShared_1395_ = v_isSharedCheck_1400_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_a_1392_);
lean_dec(v_x_1390_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1400_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___x_1397_; 
if (v_isShared_1395_ == 0)
{
v___x_1397_ = v___x_1394_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_a_1392_);
v___x_1397_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
lean_object* v___x_1398_; 
v___x_1398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1398_, 0, v___x_1397_);
return v___x_1398_;
}
}
}
else
{
lean_object* v_a_1401_; uint8_t v___x_1402_; 
v_a_1401_ = lean_ctor_get(v_x_1390_, 0);
lean_inc(v_a_1401_);
lean_dec_ref_known(v_x_1390_, 1);
v___x_1402_ = lean_unbox(v_a_1401_);
lean_dec(v_a_1401_);
if (v___x_1402_ == 0)
{
lean_object* v_get_1403_; lean_object* v___x_1404_; 
lean_dec_ref(v___x_1389_);
v_get_1403_ = lean_ctor_get(v_a_1387_, 1);
lean_inc_ref(v_get_1403_);
lean_dec_ref(v_a_1387_);
v___x_1404_ = lean_apply_2(v_get_1403_, v_k_1388_, lean_box(0));
return v___x_1404_;
}
else
{
lean_object* v_get_1405_; lean_object* v___x_1406_; 
lean_dec_ref(v_a_1387_);
v_get_1405_ = lean_ctor_get(v___x_1389_, 1);
lean_inc_ref(v_get_1405_);
lean_dec_ref(v___x_1389_);
v___x_1406_ = lean_apply_2(v_get_1405_, v_k_1388_, lean_box(0));
return v___x_1406_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1___boxed(lean_object* v_a_1407_, lean_object* v_k_1408_, lean_object* v___x_1409_, lean_object* v_x_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l_Lasm_KV_open___lam__1(v_a_1407_, v_k_1408_, v___x_1409_, v_x_1410_);
return v_res_1412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2(lean_object* v_a_1413_, lean_object* v___x_1414_, uint8_t v_a_1415_, lean_object* v_name_1416_, uint8_t v_a_1417_, lean_object* v_k_1418_){
_start:
{
lean_object* v___f_1420_; lean_object* v___x_1421_; lean_object* v_val_1423_; uint8_t v_a_1427_; lean_object* v___x_1430_; 
v___f_1420_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1420_, 0, v_a_1413_);
lean_closure_set(v___f_1420_, 1, v_k_1418_);
lean_closure_set(v___f_1420_, 2, v___x_1414_);
v___x_1421_ = lean_unsigned_to_nat(0u);
v___x_1430_ = l_Lasm_KV_binding(v_name_1416_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v_a_1431_; 
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
lean_inc(v_a_1431_);
lean_dec_ref_known(v___x_1430_, 1);
if (lean_obj_tag(v_a_1431_) == 0)
{
v_a_1427_ = v_a_1415_;
goto v___jp_1426_;
}
else
{
lean_dec_ref_known(v_a_1431_, 1);
v_a_1427_ = v_a_1417_;
goto v___jp_1426_;
}
}
else
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
v_a_1432_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1430_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1430_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
lean_ctor_set_tag(v___x_1434_, 0);
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1432_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
v_val_1423_ = v___x_1437_;
goto v___jp_1422_;
}
}
}
v___jp_1422_:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1424_, 0, v_val_1423_);
v___x_1425_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1421_, v_a_1415_, v___x_1424_, v___f_1420_);
return v___x_1425_;
}
v___jp_1426_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1428_ = lean_box(v_a_1427_);
v___x_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1428_);
v_val_1423_ = v___x_1429_;
goto v___jp_1422_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2___boxed(lean_object* v_a_1440_, lean_object* v___x_1441_, lean_object* v_a_1442_, lean_object* v_name_1443_, lean_object* v_a_1444_, lean_object* v_k_1445_, lean_object* v___y_1446_){
_start:
{
uint8_t v_a_3372__boxed_1447_; uint8_t v_a_3373__boxed_1448_; lean_object* v_res_1449_; 
v_a_3372__boxed_1447_ = lean_unbox(v_a_1442_);
v_a_3373__boxed_1448_ = lean_unbox(v_a_1444_);
v_res_1449_ = l_Lasm_KV_open___lam__2(v_a_1440_, v___x_1441_, v_a_3372__boxed_1447_, v_name_1443_, v_a_3373__boxed_1448_, v_k_1445_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3(lean_object* v_a_1450_, lean_object* v_k_1451_, lean_object* v_v_1452_, lean_object* v___x_1453_, lean_object* v_x_1454_){
_start:
{
if (lean_obj_tag(v_x_1454_) == 0)
{
lean_object* v_a_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1464_; 
lean_dec_ref(v___x_1453_);
lean_dec_ref(v_v_1452_);
lean_dec_ref(v_k_1451_);
lean_dec_ref(v_a_1450_);
v_a_1456_ = lean_ctor_get(v_x_1454_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_x_1454_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1458_ = v_x_1454_;
v_isShared_1459_ = v_isSharedCheck_1464_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_a_1456_);
lean_dec(v_x_1454_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1464_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1456_);
v___x_1461_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
lean_object* v___x_1462_; 
v___x_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
return v___x_1462_;
}
}
}
else
{
lean_object* v_a_1465_; uint8_t v___x_1466_; 
v_a_1465_ = lean_ctor_get(v_x_1454_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v_x_1454_, 1);
v___x_1466_ = lean_unbox(v_a_1465_);
lean_dec(v_a_1465_);
if (v___x_1466_ == 0)
{
lean_object* v_put_1467_; lean_object* v___x_1468_; 
lean_dec_ref(v___x_1453_);
v_put_1467_ = lean_ctor_get(v_a_1450_, 2);
lean_inc_ref(v_put_1467_);
lean_dec_ref(v_a_1450_);
v___x_1468_ = lean_apply_3(v_put_1467_, v_k_1451_, v_v_1452_, lean_box(0));
return v___x_1468_;
}
else
{
lean_object* v_put_1469_; lean_object* v___x_1470_; 
lean_dec_ref(v_a_1450_);
v_put_1469_ = lean_ctor_get(v___x_1453_, 2);
lean_inc_ref(v_put_1469_);
lean_dec_ref(v___x_1453_);
v___x_1470_ = lean_apply_3(v_put_1469_, v_k_1451_, v_v_1452_, lean_box(0));
return v___x_1470_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3___boxed(lean_object* v_a_1471_, lean_object* v_k_1472_, lean_object* v_v_1473_, lean_object* v___x_1474_, lean_object* v_x_1475_, lean_object* v___y_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l_Lasm_KV_open___lam__3(v_a_1471_, v_k_1472_, v_v_1473_, v___x_1474_, v_x_1475_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4(lean_object* v_a_1478_, lean_object* v___x_1479_, uint8_t v_a_1480_, lean_object* v_name_1481_, lean_object* v___f_1482_, lean_object* v_k_1483_, lean_object* v_v_1484_){
_start:
{
lean_object* v___f_1486_; lean_object* v___x_1487_; lean_object* v_val_1489_; lean_object* v_a_1493_; lean_object* v___x_1495_; 
v___f_1486_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__3___boxed), 6, 4);
lean_closure_set(v___f_1486_, 0, v_a_1478_);
lean_closure_set(v___f_1486_, 1, v_k_1483_);
lean_closure_set(v___f_1486_, 2, v_v_1484_);
lean_closure_set(v___f_1486_, 3, v___x_1479_);
v___x_1487_ = lean_unsigned_to_nat(0u);
v___x_1495_ = l_Lasm_KV_binding(v_name_1481_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1497_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1496_);
lean_dec_ref_known(v___x_1495_, 1);
v___x_1497_ = lean_apply_2(v___f_1482_, v_a_1496_, lean_box(0));
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1505_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1500_ = v___x_1497_;
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1497_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1503_; 
if (v_isShared_1501_ == 0)
{
lean_ctor_set_tag(v___x_1500_, 1);
v___x_1503_ = v___x_1500_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1498_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
v_val_1489_ = v___x_1503_;
goto v___jp_1488_;
}
}
}
else
{
lean_object* v_a_1506_; 
v_a_1506_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_a_1506_);
lean_dec_ref_known(v___x_1497_, 1);
v_a_1493_ = v_a_1506_;
goto v___jp_1492_;
}
}
else
{
lean_object* v_a_1507_; 
lean_dec_ref(v___f_1482_);
v_a_1507_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1507_);
lean_dec_ref_known(v___x_1495_, 1);
v_a_1493_ = v_a_1507_;
goto v___jp_1492_;
}
v___jp_1488_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1490_, 0, v_val_1489_);
v___x_1491_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1487_, v_a_1480_, v___x_1490_, v___f_1486_);
return v___x_1491_;
}
v___jp_1492_:
{
lean_object* v___x_1494_; 
v___x_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1494_, 0, v_a_1493_);
v_val_1489_ = v___x_1494_;
goto v___jp_1488_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4___boxed(lean_object* v_a_1508_, lean_object* v___x_1509_, lean_object* v_a_1510_, lean_object* v_name_1511_, lean_object* v___f_1512_, lean_object* v_k_1513_, lean_object* v_v_1514_, lean_object* v___y_1515_){
_start:
{
uint8_t v_a_3466__boxed_1516_; lean_object* v_res_1517_; 
v_a_3466__boxed_1516_ = lean_unbox(v_a_1510_);
v_res_1517_ = l_Lasm_KV_open___lam__4(v_a_1508_, v___x_1509_, v_a_3466__boxed_1516_, v_name_1511_, v___f_1512_, v_k_1513_, v_v_1514_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5(lean_object* v_a_1518_, lean_object* v_k_1519_, lean_object* v___x_1520_, lean_object* v_x_1521_){
_start:
{
if (lean_obj_tag(v_x_1521_) == 0)
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1531_; 
lean_dec_ref(v___x_1520_);
lean_dec_ref(v_k_1519_);
lean_dec_ref(v_a_1518_);
v_a_1523_ = lean_ctor_get(v_x_1521_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v_x_1521_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1525_ = v_x_1521_;
v_isShared_1526_ = v_isSharedCheck_1531_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v_x_1521_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1531_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
lean_object* v___x_1529_; 
v___x_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1528_);
return v___x_1529_;
}
}
}
else
{
lean_object* v_a_1532_; uint8_t v___x_1533_; 
v_a_1532_ = lean_ctor_get(v_x_1521_, 0);
lean_inc(v_a_1532_);
lean_dec_ref_known(v_x_1521_, 1);
v___x_1533_ = lean_unbox(v_a_1532_);
lean_dec(v_a_1532_);
if (v___x_1533_ == 0)
{
lean_object* v_delete_1534_; lean_object* v___x_1535_; 
lean_dec_ref(v___x_1520_);
v_delete_1534_ = lean_ctor_get(v_a_1518_, 3);
lean_inc_ref(v_delete_1534_);
lean_dec_ref(v_a_1518_);
v___x_1535_ = lean_apply_2(v_delete_1534_, v_k_1519_, lean_box(0));
return v___x_1535_;
}
else
{
lean_object* v_delete_1536_; lean_object* v___x_1537_; 
lean_dec_ref(v_a_1518_);
v_delete_1536_ = lean_ctor_get(v___x_1520_, 3);
lean_inc_ref(v_delete_1536_);
lean_dec_ref(v___x_1520_);
v___x_1537_ = lean_apply_2(v_delete_1536_, v_k_1519_, lean_box(0));
return v___x_1537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5___boxed(lean_object* v_a_1538_, lean_object* v_k_1539_, lean_object* v___x_1540_, lean_object* v_x_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l_Lasm_KV_open___lam__5(v_a_1538_, v_k_1539_, v___x_1540_, v_x_1541_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6(lean_object* v_a_1544_, lean_object* v___x_1545_, uint8_t v_a_1546_, lean_object* v_name_1547_, lean_object* v___f_1548_, lean_object* v_k_1549_){
_start:
{
lean_object* v___f_1551_; lean_object* v___x_1552_; lean_object* v_val_1554_; lean_object* v_a_1558_; lean_object* v___x_1560_; 
v___f_1551_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__5___boxed), 5, 3);
lean_closure_set(v___f_1551_, 0, v_a_1544_);
lean_closure_set(v___f_1551_, 1, v_k_1549_);
lean_closure_set(v___f_1551_, 2, v___x_1545_);
v___x_1552_ = lean_unsigned_to_nat(0u);
v___x_1560_ = l_Lasm_KV_binding(v_name_1547_);
if (lean_obj_tag(v___x_1560_) == 0)
{
lean_object* v_a_1561_; lean_object* v___x_1562_; 
v_a_1561_ = lean_ctor_get(v___x_1560_, 0);
lean_inc(v_a_1561_);
lean_dec_ref_known(v___x_1560_, 1);
v___x_1562_ = lean_apply_2(v___f_1548_, v_a_1561_, lean_box(0));
if (lean_obj_tag(v___x_1562_) == 0)
{
lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
v_a_1563_ = lean_ctor_get(v___x_1562_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1565_ = v___x_1562_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v___x_1562_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
lean_ctor_set_tag(v___x_1565_, 1);
v___x_1568_ = v___x_1565_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_a_1563_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
v_val_1554_ = v___x_1568_;
goto v___jp_1553_;
}
}
}
else
{
lean_object* v_a_1571_; 
v_a_1571_ = lean_ctor_get(v___x_1562_, 0);
lean_inc(v_a_1571_);
lean_dec_ref_known(v___x_1562_, 1);
v_a_1558_ = v_a_1571_;
goto v___jp_1557_;
}
}
else
{
lean_object* v_a_1572_; 
lean_dec_ref(v___f_1548_);
v_a_1572_ = lean_ctor_get(v___x_1560_, 0);
lean_inc(v_a_1572_);
lean_dec_ref_known(v___x_1560_, 1);
v_a_1558_ = v_a_1572_;
goto v___jp_1557_;
}
v___jp_1553_:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1555_, 0, v_val_1554_);
v___x_1556_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1552_, v_a_1546_, v___x_1555_, v___f_1551_);
return v___x_1556_;
}
v___jp_1557_:
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1559_, 0, v_a_1558_);
v_val_1554_ = v___x_1559_;
goto v___jp_1553_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6___boxed(lean_object* v_a_1573_, lean_object* v___x_1574_, lean_object* v_a_1575_, lean_object* v_name_1576_, lean_object* v___f_1577_, lean_object* v_k_1578_, lean_object* v___y_1579_){
_start:
{
uint8_t v_a_3563__boxed_1580_; lean_object* v_res_1581_; 
v_a_3563__boxed_1580_ = lean_unbox(v_a_1575_);
v_res_1581_ = l_Lasm_KV_open___lam__6(v_a_1573_, v___x_1574_, v_a_3563__boxed_1580_, v_name_1576_, v___f_1577_, v_k_1578_);
return v_res_1581_;
}
}
static uint32_t _init_l_Lasm_KV_open___closed__1(void){
_start:
{
lean_object* v___x_1583_; uint32_t v___x_1584_; 
v___x_1583_ = lean_box(0);
v___x_1584_ = lasm_fetch_platform(v___x_1583_);
return v___x_1584_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__2(void){
_start:
{
uint32_t v___x_1585_; uint32_t v___x_1586_; uint8_t v___x_1587_; 
v___x_1585_ = 2;
v___x_1586_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1587_ = lean_uint32_dec_eq(v___x_1586_, v___x_1585_);
return v___x_1587_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__3(void){
_start:
{
uint32_t v___x_1588_; uint32_t v___x_1589_; uint8_t v___x_1590_; 
v___x_1588_ = 0;
v___x_1589_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1590_ = lean_uint32_dec_eq(v___x_1589_, v___x_1588_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open(lean_object* v_name_1591_){
_start:
{
uint8_t v_a_1594_; uint8_t v___x_1627_; 
v___x_1627_ = lean_uint8_once(&l_Lasm_KV_open___closed__2, &l_Lasm_KV_open___closed__2_once, _init_l_Lasm_KV_open___closed__2);
if (v___x_1627_ == 0)
{
uint8_t v___x_1628_; 
v___x_1628_ = lean_uint8_once(&l_Lasm_KV_open___closed__3, &l_Lasm_KV_open___closed__3_once, _init_l_Lasm_KV_open___closed__3);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; 
lean_dec_ref(v_name_1591_);
v___x_1629_ = l_Lasm_KV_memory();
return v___x_1629_;
}
else
{
lean_object* v___x_1630_; 
v___x_1630_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1630_) == 0)
{
lean_object* v_a_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
v_a_1631_ = lean_ctor_get(v___x_1630_, 0);
lean_inc(v_a_1631_);
lean_dec_ref_known(v___x_1630_, 1);
v___x_1632_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_1633_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1631_, v___x_1632_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
lean_inc(v_a_1634_);
lean_dec_ref_known(v___x_1633_, 1);
v___x_1635_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_1636_ = l_Lasm_JS_Value_get___at___00Lasm_JS_exportDefault___at___00Lasm_Fetch_serveWith_spec__0_spec__1(v_a_1634_, v___x_1635_);
if (lean_obj_tag(v___x_1636_) == 0)
{
lean_object* v_a_1637_; 
v_a_1637_ = lean_ctor_get(v___x_1636_, 0);
lean_inc(v_a_1637_);
lean_dec_ref_known(v___x_1636_, 1);
if (lean_obj_tag(v_a_1637_) == 9)
{
lean_object* v___x_1638_; 
lean_dec_ref_known(v_a_1637_, 2);
v___x_1638_ = l_Lasm_KV_deno(v_name_1591_);
if (lean_obj_tag(v___x_1638_) == 0)
{
return v___x_1638_;
}
else
{
lean_object* v___x_1639_; 
lean_dec_ref_known(v___x_1638_, 1);
v___x_1639_ = l_Lasm_KV_memory();
return v___x_1639_;
}
}
else
{
lean_dec(v_a_1637_);
v_a_1594_ = v___x_1627_;
goto v___jp_1593_;
}
}
else
{
lean_dec_ref_known(v___x_1636_, 1);
v_a_1594_ = v___x_1627_;
goto v___jp_1593_;
}
}
else
{
lean_dec_ref_known(v___x_1633_, 1);
v_a_1594_ = v___x_1627_;
goto v___jp_1593_;
}
}
else
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
lean_dec_ref(v_name_1591_);
v_a_1640_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1630_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1630_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
}
else
{
lean_object* v___x_1648_; 
v___x_1648_ = lasm_fastly_kv_store_open(v_name_1591_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1656_; 
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1656_ == 0)
{
lean_object* v_unused_1657_; 
v_unused_1657_ = lean_ctor_get(v___x_1648_, 0);
lean_dec(v_unused_1657_);
v___x_1650_ = v___x_1648_;
v_isShared_1651_ = v_isSharedCheck_1656_;
goto v_resetjp_1649_;
}
else
{
lean_dec(v___x_1648_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1656_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1652_; lean_object* v___x_1654_; 
v___x_1652_ = l_Lasm_KV_fastly(v_name_1591_);
if (v_isShared_1651_ == 0)
{
lean_ctor_set(v___x_1650_, 0, v___x_1652_);
v___x_1654_ = v___x_1650_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v___x_1652_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
else
{
lean_object* v___x_1658_; 
lean_dec_ref_known(v___x_1648_, 1);
lean_dec_ref(v_name_1591_);
v___x_1658_ = l_Lasm_KV_memory();
return v___x_1658_;
}
}
v___jp_1593_:
{
lean_object* v___x_1595_; 
v___x_1595_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_1595_) == 0)
{
lean_object* v_a_1596_; uint8_t v___x_1597_; 
v_a_1596_ = lean_ctor_get(v___x_1595_, 0);
lean_inc(v_a_1596_);
lean_dec_ref_known(v___x_1595_, 1);
v___x_1597_ = lean_unbox(v_a_1596_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; 
lean_dec(v_a_1596_);
lean_dec_ref(v_name_1591_);
v___x_1598_ = l_Lasm_KV_memory();
return v___x_1598_;
}
else
{
lean_object* v___x_1599_; lean_object* v___f_1600_; lean_object* v___x_1601_; lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1618_; 
v___x_1599_ = lean_box(v_a_1594_);
lean_inc(v_a_1596_);
v___f_1600_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1600_, 0, v___x_1599_);
lean_closure_set(v___f_1600_, 1, v_a_1596_);
v___x_1601_ = l_Lasm_KV_memory();
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1604_ = v___x_1601_;
v_isShared_1605_ = v_isSharedCheck_1618_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1601_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1618_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___f_1608_; lean_object* v___x_1609_; lean_object* v___f_1610_; lean_object* v___x_1611_; lean_object* v___f_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1616_; 
lean_inc_ref_n(v_name_1591_, 3);
v___x_1606_ = l_Lasm_KV_workers(v_name_1591_);
v___x_1607_ = lean_box(v_a_1594_);
lean_inc_ref_n(v___x_1606_, 2);
lean_inc_n(v_a_1602_, 2);
v___f_1608_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__2___boxed), 7, 5);
lean_closure_set(v___f_1608_, 0, v_a_1602_);
lean_closure_set(v___f_1608_, 1, v___x_1606_);
lean_closure_set(v___f_1608_, 2, v___x_1607_);
lean_closure_set(v___f_1608_, 3, v_name_1591_);
lean_closure_set(v___f_1608_, 4, v_a_1596_);
v___x_1609_ = lean_box(v_a_1594_);
lean_inc_ref(v___f_1600_);
v___f_1610_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__4___boxed), 8, 5);
lean_closure_set(v___f_1610_, 0, v_a_1602_);
lean_closure_set(v___f_1610_, 1, v___x_1606_);
lean_closure_set(v___f_1610_, 2, v___x_1609_);
lean_closure_set(v___f_1610_, 3, v_name_1591_);
lean_closure_set(v___f_1610_, 4, v___f_1600_);
v___x_1611_ = lean_box(v_a_1594_);
v___f_1612_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__6___boxed), 7, 5);
lean_closure_set(v___f_1612_, 0, v_a_1602_);
lean_closure_set(v___f_1612_, 1, v___x_1606_);
lean_closure_set(v___f_1612_, 2, v___x_1611_);
lean_closure_set(v___f_1612_, 3, v_name_1591_);
lean_closure_set(v___f_1612_, 4, v___f_1600_);
v___x_1613_ = ((lean_object*)(l_Lasm_KV_open___closed__0));
v___x_1614_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1613_);
lean_ctor_set(v___x_1614_, 1, v___f_1608_);
lean_ctor_set(v___x_1614_, 2, v___f_1610_);
lean_ctor_set(v___x_1614_, 3, v___f_1612_);
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 0, v___x_1614_);
v___x_1616_ = v___x_1604_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v___x_1614_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
else
{
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1626_; 
lean_dec_ref(v_name_1591_);
v_a_1619_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1621_ = v___x_1595_;
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v___x_1595_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1624_; 
if (v_isShared_1622_ == 0)
{
v___x_1624_ = v___x_1621_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_a_1619_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___boxed(lean_object* v_name_1659_, lean_object* v_a_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l_Lasm_KV_open(v_name_1659_);
return v_res_1661_;
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
