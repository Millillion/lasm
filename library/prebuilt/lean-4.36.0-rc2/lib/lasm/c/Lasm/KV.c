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
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
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
static const lean_ctor_object l_Lasm_KV_FastlyKV_put___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 24, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
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
lean_inc_ref(v_k_423_);
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
lean_object* v_a_473_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_473_);
lean_dec_ref_known(v___x_472_, 1);
v_found_465_ = v_a_473_;
goto v___jp_464_;
}
else
{
lean_dec_ref_known(v___x_472_, 1);
goto v___jp_461_;
}
}
case 8:
{
lean_object* v___x_474_; 
v___x_474_ = l_Lasm_JS_Data_field(v___x_470_, v_name_459_);
lean_dec_ref(v_name_459_);
lean_dec_ref_known(v___x_470_, 1);
v_found_465_ = v___x_474_;
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
LEAN_EXPORT lean_object* l_Lasm_KV_binding___boxed(lean_object* v_name_475_, lean_object* v_a_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lasm_KV_binding(v_name_475_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0(lean_object* v_x_478_){
_start:
{
if (lean_obj_tag(v_x_478_) == 0)
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_488_; 
v_a_480_ = lean_ctor_get(v_x_478_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v_x_478_);
if (v_isSharedCheck_488_ == 0)
{
v___x_482_ = v_x_478_;
v_isShared_483_ = v_isSharedCheck_488_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v_x_478_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_488_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_483_ == 0)
{
v___x_485_ = v___x_482_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_a_480_);
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
else
{
lean_object* v___x_489_; 
lean_dec_ref_known(v_x_478_, 1);
v___x_489_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__1___closed__1));
return v___x_489_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__0___boxed(lean_object* v_x_490_, lean_object* v___y_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Lasm_KV_workers___lam__0(v_x_490_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2(lean_object* v_x_493_){
_start:
{
if (lean_obj_tag(v_x_493_) == 0)
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_503_; 
v_a_495_ = lean_ctor_get(v_x_493_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v_x_493_);
if (v_isSharedCheck_503_ == 0)
{
v___x_497_ = v_x_493_;
v_isShared_498_ = v_isSharedCheck_503_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v_x_493_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_503_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_495_);
v___x_500_ = v_reuseFailAlloc_502_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
lean_object* v___x_501_; 
v___x_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
return v___x_501_;
}
}
}
else
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_521_; 
v_a_504_ = lean_ctor_get(v_x_493_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v_x_493_);
if (v_isSharedCheck_521_ == 0)
{
v___x_506_ = v_x_493_;
v_isShared_507_ = v_isSharedCheck_521_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v_x_493_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_521_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
if (lean_obj_tag(v_a_504_) == 4)
{
lean_object* v_s_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_519_; 
v_s_508_ = lean_ctor_get(v_a_504_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v_a_504_);
if (v_isSharedCheck_519_ == 0)
{
v___x_510_ = v_a_504_;
v_isShared_511_ = v_isSharedCheck_519_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_s_508_);
lean_dec(v_a_504_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_519_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
lean_ctor_set_tag(v___x_510_, 1);
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_s_508_);
v___x_513_ = v_reuseFailAlloc_518_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
lean_object* v___x_515_; 
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 0, v___x_513_);
v___x_515_ = v___x_506_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_513_);
v___x_515_ = v_reuseFailAlloc_517_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
lean_object* v___x_516_; 
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_515_);
return v___x_516_;
}
}
}
}
else
{
lean_object* v___x_520_; 
lean_del_object(v___x_506_);
lean_dec(v_a_504_);
v___x_520_ = ((lean_object*)(l_Lasm_KV_instInhabitedStore___lam__0___closed__1));
return v___x_520_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__2___boxed(lean_object* v_x_522_, lean_object* v___y_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l_Lasm_KV_workers___lam__2(v_x_522_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1(lean_object* v_name_526_, lean_object* v_____do__lift_527_){
_start:
{
if (lean_obj_tag(v_____do__lift_527_) == 0)
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_529_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_530_ = lean_string_append(v___x_529_, v_name_526_);
v___x_531_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
v___x_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
return v___x_532_;
}
else
{
lean_object* v_val_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_540_; 
v_val_533_ = lean_ctor_get(v_____do__lift_527_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v_____do__lift_527_);
if (v_isSharedCheck_540_ == 0)
{
v___x_535_ = v_____do__lift_527_;
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_val_533_);
lean_dec(v_____do__lift_527_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_538_; 
if (v_isShared_536_ == 0)
{
lean_ctor_set_tag(v___x_535_, 0);
v___x_538_ = v___x_535_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_val_533_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__1___boxed(lean_object* v_name_541_, lean_object* v_____do__lift_542_, lean_object* v___y_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lasm_KV_workers___lam__1(v_name_541_, v_____do__lift_542_);
lean_dec_ref(v_name_541_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3(lean_object* v_k_546_, lean_object* v___f_547_, lean_object* v_x_548_){
_start:
{
if (lean_obj_tag(v_x_548_) == 0)
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_558_; 
lean_dec_ref(v___f_547_);
lean_dec_ref(v_k_546_);
v_a_550_ = lean_ctor_get(v_x_548_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v_x_548_);
if (v_isSharedCheck_558_ == 0)
{
v___x_552_ = v_x_548_;
v_isShared_553_ = v_isSharedCheck_558_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v_x_548_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_558_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_557_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
lean_object* v___x_556_; 
v___x_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
return v___x_556_;
}
}
}
else
{
lean_object* v_a_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; uint8_t v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v_a_559_ = lean_ctor_get(v_x_548_, 0);
lean_inc(v_a_559_);
lean_dec_ref_known(v_x_548_, 1);
v___x_560_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_561_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_561_, 0, v_k_546_);
v___x_562_ = lean_unsigned_to_nat(1u);
v___x_563_ = lean_mk_empty_array_with_capacity(v___x_562_);
v___x_564_ = lean_array_push(v___x_563_, v___x_561_);
v___x_565_ = lean_unsigned_to_nat(0u);
v___x_566_ = 0;
v___x_567_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_559_, v___x_560_, v___x_564_);
v___x_568_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_565_, v___x_566_, v___x_567_, v___f_547_);
return v___x_568_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__3___boxed(lean_object* v_k_569_, lean_object* v___f_570_, lean_object* v_x_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lasm_KV_workers___lam__3(v_k_569_, v___f_570_, v_x_571_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4(lean_object* v___f_574_, lean_object* v_name_575_, lean_object* v___f_576_, lean_object* v_k_577_){
_start:
{
lean_object* v___f_579_; lean_object* v___x_580_; uint8_t v___x_581_; lean_object* v_val_583_; lean_object* v_a_587_; lean_object* v___x_589_; lean_object* v_a_590_; lean_object* v___x_591_; 
v___f_579_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__3___boxed), 4, 2);
lean_closure_set(v___f_579_, 0, v_k_577_);
lean_closure_set(v___f_579_, 1, v___f_574_);
v___x_580_ = lean_unsigned_to_nat(0u);
v___x_581_ = 0;
v___x_589_ = l_Lasm_KV_binding(v_name_575_);
v_a_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_590_);
lean_dec_ref(v___x_589_);
v___x_591_ = lean_apply_2(v___f_576_, v_a_590_, lean_box(0));
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_591_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_591_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
lean_ctor_set_tag(v___x_594_, 1);
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
v_val_583_ = v___x_597_;
goto v___jp_582_;
}
}
}
else
{
lean_object* v_a_600_; 
v_a_600_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_a_600_);
lean_dec_ref_known(v___x_591_, 1);
v_a_587_ = v_a_600_;
goto v___jp_586_;
}
v___jp_582_:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_584_, 0, v_val_583_);
v___x_585_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_580_, v___x_581_, v___x_584_, v___f_579_);
return v___x_585_;
}
v___jp_586_:
{
lean_object* v___x_588_; 
v___x_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_588_, 0, v_a_587_);
v_val_583_ = v___x_588_;
goto v___jp_582_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__4___boxed(lean_object* v___f_601_, lean_object* v_name_602_, lean_object* v___f_603_, lean_object* v_k_604_, lean_object* v___y_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l_Lasm_KV_workers___lam__4(v___f_601_, v_name_602_, v___f_603_, v_k_604_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5(lean_object* v_k_608_, lean_object* v_v_609_, lean_object* v___f_610_, lean_object* v_x_611_){
_start:
{
if (lean_obj_tag(v_x_611_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_621_; 
lean_dec_ref(v___f_610_);
lean_dec_ref(v_v_609_);
lean_dec_ref(v_k_608_);
v_a_613_ = lean_ctor_get(v_x_611_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v_x_611_);
if (v_isSharedCheck_621_ == 0)
{
v___x_615_ = v_x_611_;
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v_x_611_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_620_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_619_; 
v___x_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
return v___x_619_;
}
}
}
else
{
lean_object* v_a_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; uint8_t v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v_a_622_ = lean_ctor_get(v_x_611_, 0);
lean_inc(v_a_622_);
lean_dec_ref_known(v_x_611_, 1);
v___x_623_ = ((lean_object*)(l_Lasm_KV_workers___lam__5___closed__0));
v___x_624_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_624_, 0, v_k_608_);
v___x_625_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_625_, 0, v_v_609_);
v___x_626_ = lean_unsigned_to_nat(2u);
v___x_627_ = lean_mk_empty_array_with_capacity(v___x_626_);
v___x_628_ = lean_array_push(v___x_627_, v___x_624_);
v___x_629_ = lean_array_push(v___x_628_, v___x_625_);
v___x_630_ = lean_unsigned_to_nat(0u);
v___x_631_ = 0;
v___x_632_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_622_, v___x_623_, v___x_629_);
v___x_633_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_630_, v___x_631_, v___x_632_, v___f_610_);
return v___x_633_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__5___boxed(lean_object* v_k_634_, lean_object* v_v_635_, lean_object* v___f_636_, lean_object* v_x_637_, lean_object* v___y_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lasm_KV_workers___lam__5(v_k_634_, v_v_635_, v___f_636_, v_x_637_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6(lean_object* v___f_640_, lean_object* v_name_641_, lean_object* v___f_642_, lean_object* v_k_643_, lean_object* v_v_644_){
_start:
{
lean_object* v___f_646_; lean_object* v___x_647_; uint8_t v___x_648_; lean_object* v_val_650_; lean_object* v_a_654_; lean_object* v___x_656_; lean_object* v_a_657_; lean_object* v___x_658_; 
v___f_646_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__5___boxed), 5, 3);
lean_closure_set(v___f_646_, 0, v_k_643_);
lean_closure_set(v___f_646_, 1, v_v_644_);
lean_closure_set(v___f_646_, 2, v___f_640_);
v___x_647_ = lean_unsigned_to_nat(0u);
v___x_648_ = 0;
v___x_656_ = l_Lasm_KV_binding(v_name_641_);
v_a_657_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_a_657_);
lean_dec_ref(v___x_656_);
v___x_658_ = lean_apply_2(v___f_642_, v_a_657_, lean_box(0));
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_666_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_666_ == 0)
{
v___x_661_ = v___x_658_;
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_658_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
lean_ctor_set_tag(v___x_661_, 1);
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_a_659_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
v_val_650_ = v___x_664_;
goto v___jp_649_;
}
}
}
else
{
lean_object* v_a_667_; 
v_a_667_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_a_667_);
lean_dec_ref_known(v___x_658_, 1);
v_a_654_ = v_a_667_;
goto v___jp_653_;
}
v___jp_649_:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_651_, 0, v_val_650_);
v___x_652_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_647_, v___x_648_, v___x_651_, v___f_646_);
return v___x_652_;
}
v___jp_653_:
{
lean_object* v___x_655_; 
v___x_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_655_, 0, v_a_654_);
v_val_650_ = v___x_655_;
goto v___jp_649_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__6___boxed(lean_object* v___f_668_, lean_object* v_name_669_, lean_object* v___f_670_, lean_object* v_k_671_, lean_object* v_v_672_, lean_object* v___y_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Lasm_KV_workers___lam__6(v___f_668_, v_name_669_, v___f_670_, v_k_671_, v_v_672_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7(lean_object* v_k_676_, lean_object* v___f_677_, lean_object* v_x_678_){
_start:
{
if (lean_obj_tag(v_x_678_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_688_; 
lean_dec_ref(v___f_677_);
lean_dec_ref(v_k_676_);
v_a_680_ = lean_ctor_get(v_x_678_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v_x_678_);
if (v_isSharedCheck_688_ == 0)
{
v___x_682_ = v_x_678_;
v_isShared_683_ = v_isSharedCheck_688_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v_x_678_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_688_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_687_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
lean_object* v___x_686_; 
v___x_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
return v___x_686_;
}
}
}
else
{
lean_object* v_a_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; uint8_t v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v_a_689_ = lean_ctor_get(v_x_678_, 0);
lean_inc(v_a_689_);
lean_dec_ref_known(v_x_678_, 1);
v___x_690_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_691_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_691_, 0, v_k_676_);
v___x_692_ = lean_unsigned_to_nat(1u);
v___x_693_ = lean_mk_empty_array_with_capacity(v___x_692_);
v___x_694_ = lean_array_push(v___x_693_, v___x_691_);
v___x_695_ = lean_unsigned_to_nat(0u);
v___x_696_ = 0;
v___x_697_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_689_, v___x_690_, v___x_694_);
v___x_698_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_695_, v___x_696_, v___x_697_, v___f_677_);
return v___x_698_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__7___boxed(lean_object* v_k_699_, lean_object* v___f_700_, lean_object* v_x_701_, lean_object* v___y_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_Lasm_KV_workers___lam__7(v_k_699_, v___f_700_, v_x_701_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8(lean_object* v___f_704_, lean_object* v_name_705_, lean_object* v_k_706_){
_start:
{
lean_object* v___f_708_; lean_object* v___x_709_; uint8_t v___x_710_; lean_object* v_val_712_; lean_object* v_a_716_; lean_object* v___x_718_; lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_736_; 
v___f_708_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__7___boxed), 4, 2);
lean_closure_set(v___f_708_, 0, v_k_706_);
lean_closure_set(v___f_708_, 1, v___f_704_);
v___x_709_ = lean_unsigned_to_nat(0u);
v___x_710_ = 0;
lean_inc_ref(v_name_705_);
v___x_718_ = l_Lasm_KV_binding(v_name_705_);
v_a_719_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_736_ == 0)
{
v___x_721_ = v___x_718_;
v_isShared_722_ = v_isSharedCheck_736_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_718_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_736_;
goto v_resetjp_720_;
}
v___jp_711_:
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_713_, 0, v_val_712_);
v___x_714_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_709_, v___x_710_, v___x_713_, v___f_708_);
return v___x_714_;
}
v___jp_715_:
{
lean_object* v___x_717_; 
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v_a_716_);
v_val_712_ = v___x_717_;
goto v___jp_711_;
}
v_resetjp_720_:
{
if (lean_obj_tag(v_a_719_) == 0)
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_726_; 
v___x_723_ = ((lean_object*)(l_Lasm_KV_workers___lam__1___closed__0));
v___x_724_ = lean_string_append(v___x_723_, v_name_705_);
lean_dec_ref(v_name_705_);
if (v_isShared_722_ == 0)
{
lean_ctor_set_tag(v___x_721_, 18);
lean_ctor_set(v___x_721_, 0, v___x_724_);
v___x_726_ = v___x_721_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_724_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
v_a_716_ = v___x_726_;
goto v___jp_715_;
}
}
else
{
lean_object* v_val_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
lean_del_object(v___x_721_);
lean_dec_ref(v_name_705_);
v_val_728_ = lean_ctor_get(v_a_719_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v_a_719_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v_a_719_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_val_728_);
lean_dec(v_a_719_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
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
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_val_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
v_val_712_ = v___x_733_;
goto v___jp_711_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers___lam__8___boxed(lean_object* v___f_737_, lean_object* v_name_738_, lean_object* v_k_739_, lean_object* v___y_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lasm_KV_workers___lam__8(v___f_737_, v_name_738_, v_k_739_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_workers(lean_object* v_name_745_){
_start:
{
lean_object* v___f_746_; lean_object* v___f_747_; lean_object* v___f_748_; lean_object* v_delete_749_; lean_object* v_put_750_; lean_object* v_get_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___f_746_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_747_ = ((lean_object*)(l_Lasm_KV_workers___closed__1));
lean_inc_ref_n(v_name_745_, 3);
v___f_748_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__1___boxed), 3, 1);
lean_closure_set(v___f_748_, 0, v_name_745_);
lean_inc_ref(v___f_748_);
v_delete_749_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__4___boxed), 5, 3);
lean_closure_set(v_delete_749_, 0, v___f_746_);
lean_closure_set(v_delete_749_, 1, v_name_745_);
lean_closure_set(v_delete_749_, 2, v___f_748_);
v_put_750_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__6___boxed), 6, 3);
lean_closure_set(v_put_750_, 0, v___f_746_);
lean_closure_set(v_put_750_, 1, v_name_745_);
lean_closure_set(v_put_750_, 2, v___f_748_);
v_get_751_ = lean_alloc_closure((void*)(l_Lasm_KV_workers___lam__8___boxed), 4, 2);
lean_closure_set(v_get_751_, 0, v___f_747_);
lean_closure_set(v_get_751_, 1, v_name_745_);
v___x_752_ = ((lean_object*)(l_Lasm_KV_workers___closed__2));
v___x_753_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
lean_ctor_set(v___x_753_, 1, v_get_751_);
lean_ctor_set(v___x_753_, 2, v_put_750_);
lean_ctor_set(v___x_753_, 3, v_delete_749_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3(lean_object* v___f_755_, lean_object* v_x_756_){
_start:
{
if (lean_obj_tag(v_x_756_) == 0)
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_766_; 
lean_dec_ref(v___f_755_);
v_a_758_ = lean_ctor_get(v_x_756_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v_x_756_);
if (v_isSharedCheck_766_ == 0)
{
v___x_760_ = v_x_756_;
v_isShared_761_ = v_isSharedCheck_766_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v_x_756_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_766_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_765_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
lean_object* v___x_764_; 
v___x_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
return v___x_764_;
}
}
}
else
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_787_; 
v_a_767_ = lean_ctor_get(v_x_756_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v_x_756_);
if (v_isSharedCheck_787_ == 0)
{
v___x_769_ = v_x_756_;
v_isShared_770_ = v_isSharedCheck_787_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v_x_756_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_787_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_771_; lean_object* v___x_772_; uint8_t v___x_773_; lean_object* v_val_775_; lean_object* v___x_778_; 
v___x_771_ = ((lean_object*)(l_Lasm_KV_deno___lam__3___closed__0));
v___x_772_ = lean_unsigned_to_nat(0u);
v___x_773_ = 0;
v___x_778_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_a_767_, v___x_771_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_781_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_779_);
lean_dec_ref_known(v___x_778_, 1);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 0, v_a_779_);
v___x_781_ = v___x_769_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
v_val_775_ = v___x_781_;
goto v___jp_774_;
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; 
v_a_783_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_783_);
lean_dec_ref_known(v___x_778_, 1);
if (v_isShared_770_ == 0)
{
lean_ctor_set_tag(v___x_769_, 0);
lean_ctor_set(v___x_769_, 0, v_a_783_);
v___x_785_ = v___x_769_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
v_val_775_ = v___x_785_;
goto v___jp_774_;
}
}
v___jp_774_:
{
lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_776_, 0, v_val_775_);
v___x_777_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_772_, v___x_773_, v___x_776_, v___f_755_);
return v___x_777_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__3___boxed(lean_object* v___f_788_, lean_object* v_x_789_, lean_object* v___y_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lasm_KV_deno___lam__3(v___f_788_, v_x_789_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0(lean_object* v_name_792_, lean_object* v_a_793_, lean_object* v___x_794_, lean_object* v___f_795_, lean_object* v_k_796_){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; uint8_t v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_798_ = ((lean_object*)(l_Lasm_KV_workers___lam__7___closed__0));
v___x_799_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_799_, 0, v_name_792_);
v___x_800_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_800_, 0, v_k_796_);
v___x_801_ = lean_unsigned_to_nat(2u);
v___x_802_ = lean_mk_empty_array_with_capacity(v___x_801_);
v___x_803_ = lean_array_push(v___x_802_, v___x_799_);
v___x_804_ = lean_array_push(v___x_803_, v___x_800_);
v___x_805_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
v___x_806_ = lean_unsigned_to_nat(1u);
v___x_807_ = lean_mk_empty_array_with_capacity(v___x_806_);
v___x_808_ = lean_array_push(v___x_807_, v___x_805_);
v___x_809_ = 0;
v___x_810_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_Fetch_jsFetchHandler_spec__1(v_a_793_, v___x_798_, v___x_808_);
v___x_811_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_794_, v___x_809_, v___x_810_, v___f_795_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__0___boxed(lean_object* v_name_812_, lean_object* v_a_813_, lean_object* v___x_814_, lean_object* v___f_815_, lean_object* v_k_816_, lean_object* v___y_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lasm_KV_deno___lam__0(v_name_812_, v_a_813_, v___x_814_, v___f_815_, v_k_816_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1(lean_object* v_name_820_, lean_object* v_a_821_, lean_object* v___x_822_, lean_object* v___f_823_, lean_object* v_k_824_, lean_object* v_v_825_){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; uint8_t v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_827_ = ((lean_object*)(l_Lasm_KV_deno___lam__1___closed__0));
v___x_828_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_828_, 0, v_name_820_);
v___x_829_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_829_, 0, v_k_824_);
v___x_830_ = lean_unsigned_to_nat(2u);
v___x_831_ = lean_mk_empty_array_with_capacity(v___x_830_);
lean_inc_ref(v___x_831_);
v___x_832_ = lean_array_push(v___x_831_, v___x_828_);
v___x_833_ = lean_array_push(v___x_832_, v___x_829_);
v___x_834_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_834_, 0, v___x_833_);
v___x_835_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_835_, 0, v_v_825_);
v___x_836_ = lean_array_push(v___x_831_, v___x_834_);
v___x_837_ = lean_array_push(v___x_836_, v___x_835_);
v___x_838_ = 0;
v___x_839_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_821_, v___x_827_, v___x_837_);
v___x_840_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_822_, v___x_838_, v___x_839_, v___f_823_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__1___boxed(lean_object* v_name_841_, lean_object* v_a_842_, lean_object* v___x_843_, lean_object* v___f_844_, lean_object* v_k_845_, lean_object* v_v_846_, lean_object* v___y_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Lasm_KV_deno___lam__1(v_name_841_, v_a_842_, v___x_843_, v___f_844_, v_k_845_, v_v_846_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2(lean_object* v_name_849_, lean_object* v_a_850_, lean_object* v___x_851_, lean_object* v___f_852_, lean_object* v_k_853_){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; uint8_t v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_855_ = ((lean_object*)(l_Lasm_KV_workers___lam__3___closed__0));
v___x_856_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_856_, 0, v_name_849_);
v___x_857_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_857_, 0, v_k_853_);
v___x_858_ = lean_unsigned_to_nat(2u);
v___x_859_ = lean_mk_empty_array_with_capacity(v___x_858_);
v___x_860_ = lean_array_push(v___x_859_, v___x_856_);
v___x_861_ = lean_array_push(v___x_860_, v___x_857_);
v___x_862_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
v___x_863_ = lean_unsigned_to_nat(1u);
v___x_864_ = lean_mk_empty_array_with_capacity(v___x_863_);
v___x_865_ = lean_array_push(v___x_864_, v___x_862_);
v___x_866_ = 0;
v___x_867_ = l_Lasm_JS_Value_callMethodAwait___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__1(v_a_850_, v___x_855_, v___x_865_);
v___x_868_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_851_, v___x_866_, v___x_867_, v___f_852_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___lam__2___boxed(lean_object* v_name_869_, lean_object* v_a_870_, lean_object* v___x_871_, lean_object* v___f_872_, lean_object* v_k_873_, lean_object* v___y_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Lasm_KV_deno___lam__2(v_name_869_, v_a_870_, v___x_871_, v___f_872_, v_k_873_);
return v_res_875_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0(void){
_start:
{
uint64_t v___x_876_; uint8_t v___x_877_; uint64_t v___x_878_; 
v___x_876_ = 8ULL;
v___x_877_ = 1;
v___x_878_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsChunks_spec__0_spec__0(v___x_877_, v___x_876_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(lean_object* v_o_880_, lean_object* v_name_881_, lean_object* v_args_882_){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; uint64_t v___x_887_; lean_object* v___x_888_; 
v___x_884_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0___closed__1));
v___x_885_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_885_, 0, v_o_880_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
lean_inc_ref(v_name_881_);
v___x_886_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_886_, 0, v_name_881_);
v___x_887_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__0);
v___x_888_ = l_Lasm_JS_Value_invokeRaw(v___x_885_, v___x_886_, v_args_882_, v___x_887_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_888_, 1);
v___x_890_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___closed__1));
v___x_891_ = lean_string_append(v___x_890_, v_name_881_);
lean_dec_ref(v_name_881_);
v___x_892_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_891_, v_a_889_);
lean_dec(v_a_889_);
lean_dec_ref(v___x_891_);
return v___x_892_;
}
else
{
lean_object* v_a_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_900_; 
lean_dec_ref(v_name_881_);
v_a_893_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_900_ == 0)
{
v___x_895_ = v___x_888_;
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_a_893_);
lean_dec(v___x_888_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_898_; 
if (v_isShared_896_ == 0)
{
v___x_898_ = v___x_895_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_a_893_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0___boxed(lean_object* v_o_901_, lean_object* v_name_902_, lean_object* v_args_903_, lean_object* v___y_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_o_901_, v_name_902_, v_args_903_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno(lean_object* v_name_913_){
_start:
{
lean_object* v___f_915_; lean_object* v___f_916_; lean_object* v___x_917_; 
v___f_915_ = ((lean_object*)(l_Lasm_KV_workers___closed__0));
v___f_916_ = ((lean_object*)(l_Lasm_KV_deno___closed__0));
v___x_917_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_918_);
lean_dec_ref_known(v___x_917_, 1);
v___x_919_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_920_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_918_, v___x_919_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_a_921_);
lean_dec_ref_known(v___x_920_, 1);
v___x_922_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_923_ = lean_unsigned_to_nat(0u);
v___x_924_ = ((lean_object*)(l_Lasm_KV_deno___closed__3));
v___x_925_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_KV_deno_spec__0(v_a_921_, v___x_922_, v___x_924_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_938_; 
v_a_926_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_938_ == 0)
{
v___x_928_ = v___x_925_;
v_isShared_929_ = v_isSharedCheck_938_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_925_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_938_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___f_930_; lean_object* v___f_931_; lean_object* v___f_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_936_; 
lean_inc_n(v_a_926_, 2);
lean_inc_ref_n(v_name_913_, 2);
v___f_930_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__0___boxed), 6, 4);
lean_closure_set(v___f_930_, 0, v_name_913_);
lean_closure_set(v___f_930_, 1, v_a_926_);
lean_closure_set(v___f_930_, 2, v___x_923_);
lean_closure_set(v___f_930_, 3, v___f_916_);
v___f_931_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__1___boxed), 7, 4);
lean_closure_set(v___f_931_, 0, v_name_913_);
lean_closure_set(v___f_931_, 1, v_a_926_);
lean_closure_set(v___f_931_, 2, v___x_923_);
lean_closure_set(v___f_931_, 3, v___f_915_);
v___f_932_ = lean_alloc_closure((void*)(l_Lasm_KV_deno___lam__2___boxed), 6, 4);
lean_closure_set(v___f_932_, 0, v_name_913_);
lean_closure_set(v___f_932_, 1, v_a_926_);
lean_closure_set(v___f_932_, 2, v___x_923_);
lean_closure_set(v___f_932_, 3, v___f_915_);
v___x_933_ = ((lean_object*)(l_Lasm_KV_deno___closed__4));
v___x_934_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
lean_ctor_set(v___x_934_, 1, v___f_930_);
lean_ctor_set(v___x_934_, 2, v___f_931_);
lean_ctor_set(v___x_934_, 3, v___f_932_);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 0, v___x_934_);
v___x_936_ = v___x_928_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_934_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
else
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_946_; 
lean_dec_ref(v_name_913_);
v_a_939_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_946_ == 0)
{
v___x_941_ = v___x_925_;
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_925_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_944_; 
if (v_isShared_942_ == 0)
{
v___x_944_ = v___x_941_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_939_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
else
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
lean_dec_ref(v_name_913_);
v_a_947_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_954_ == 0)
{
v___x_949_ = v___x_920_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_920_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_947_);
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
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_962_; 
lean_dec_ref(v_name_913_);
v_a_955_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_962_ == 0)
{
v___x_957_ = v___x_917_;
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_917_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_960_; 
if (v_isShared_958_ == 0)
{
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
return v___x_960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_deno___boxed(lean_object* v_name_963_, lean_object* v_a_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Lasm_KV_deno(v_name_963_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_readAll(uint32_t v_body_966_, lean_object* v_acc_967_){
_start:
{
uint32_t v___x_969_; lean_object* v___x_970_; 
v___x_969_ = 65536;
v___x_970_ = lasm_fastly_http_body_read(v_body_966_, v___x_969_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_984_; 
v_a_971_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_984_ == 0)
{
v___x_973_ = v___x_970_;
v_isShared_974_ = v_isSharedCheck_984_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_970_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_984_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
uint8_t v___x_975_; 
v___x_975_ = l_ByteArray_isEmpty(v_a_971_);
if (v___x_975_ == 0)
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
lean_del_object(v___x_973_);
v___x_976_ = lean_unsigned_to_nat(0u);
v___x_977_ = lean_byte_array_size(v_acc_967_);
v___x_978_ = lean_byte_array_size(v_a_971_);
v___x_979_ = lean_byte_array_copy_slice(v_a_971_, v___x_976_, v_acc_967_, v___x_977_, v___x_978_, v___x_975_);
lean_dec(v_a_971_);
v_acc_967_ = v___x_979_;
goto _start;
}
else
{
lean_object* v___x_982_; 
lean_dec(v_a_971_);
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 0, v_acc_967_);
v___x_982_ = v___x_973_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_acc_967_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
else
{
lean_dec_ref(v_acc_967_);
return v___x_970_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_readAll___boxed(lean_object* v_body_985_, lean_object* v_acc_986_, lean_object* v_a_987_){
_start:
{
uint32_t v_body_boxed_988_; lean_object* v_res_989_; 
v_body_boxed_988_ = lean_unbox_uint32(v_body_985_);
lean_dec(v_body_985_);
v_res_989_ = l_Lasm_KV_FastlyKV_readAll(v_body_boxed_988_, v_acc_986_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_writeAll(uint32_t v_body_990_, lean_object* v_bytes_991_){
_start:
{
uint8_t v___x_993_; 
v___x_993_ = l_ByteArray_isEmpty(v_bytes_991_);
if (v___x_993_ == 0)
{
uint8_t v___x_994_; lean_object* v___x_995_; 
v___x_994_ = 0;
v___x_995_ = lasm_fastly_http_body_write(v_body_990_, v_bytes_991_, v___x_994_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; uint32_t v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_995_, 1);
v___x_997_ = lean_unbox_uint32(v_a_996_);
lean_dec(v_a_996_);
v___x_998_ = lean_uint32_to_nat(v___x_997_);
v___x_999_ = lean_byte_array_size(v_bytes_991_);
v___x_1000_ = l_ByteArray_extract(v_bytes_991_, v___x_998_, v___x_999_);
lean_dec_ref(v_bytes_991_);
v_bytes_991_ = v___x_1000_;
goto _start;
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
lean_dec_ref(v_bytes_991_);
v_a_1002_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_995_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_995_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1007_; 
if (v_isShared_1005_ == 0)
{
v___x_1007_ = v___x_1004_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_a_1002_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
else
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
lean_dec_ref(v_bytes_991_);
v___x_1010_ = lean_box(0);
v___x_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
return v___x_1011_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_writeAll___boxed(lean_object* v_body_1012_, lean_object* v_bytes_1013_, lean_object* v_a_1014_){
_start:
{
uint32_t v_body_boxed_1015_; lean_object* v_res_1016_; 
v_body_boxed_1015_ = lean_unbox_uint32(v_body_1012_);
lean_dec(v_body_1012_);
v_res_1016_ = l_Lasm_KV_FastlyKV_writeAll(v_body_boxed_1015_, v_bytes_1013_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_get(lean_object* v_name_1020_, lean_object* v_key_1021_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = lasm_fastly_kv_store_open(v_name_1020_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; uint32_t v___x_1025_; uint32_t v___x_1026_; lean_object* v___x_1027_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_a_1024_);
lean_dec_ref_known(v___x_1023_, 1);
v___x_1025_ = 0;
v___x_1026_ = lean_unbox_uint32(v_a_1024_);
lean_dec(v_a_1024_);
v___x_1027_ = lasm_fastly_kv_store_lookup(v___x_1026_, v_key_1021_, v___x_1025_, v___x_1025_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc(v_a_1028_);
lean_dec_ref_known(v___x_1027_, 1);
v___x_1029_ = lean_alloc_closure((void*)(l_Lasm_Fastly_KvStore_lookupWaitV2___boxed), 2, 1);
lean_closure_set(v___x_1029_, 0, v_a_1028_);
v___x_1030_ = l_Lasm_Fastly_found_x3f___redArg(v___x_1029_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1097_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1033_ = v___x_1030_;
v_isShared_1034_ = v_isSharedCheck_1097_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_1030_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1097_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
if (lean_obj_tag(v_a_1031_) == 0)
{
lean_object* v___x_1035_; lean_object* v___x_1037_; 
v___x_1035_ = lean_box(0);
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 0, v___x_1035_);
v___x_1037_ = v___x_1033_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_1035_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
else
{
lean_object* v_val_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1096_; 
v_val_1039_ = lean_ctor_get(v_a_1031_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v_a_1031_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1041_ = v_a_1031_;
v_isShared_1042_ = v_isSharedCheck_1096_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_val_1039_);
lean_dec(v_a_1031_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1096_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v_snd_1043_; lean_object* v_snd_1044_; lean_object* v_snd_1045_; uint8_t v___x_1046_; 
v_snd_1043_ = lean_ctor_get(v_val_1039_, 1);
v_snd_1044_ = lean_ctor_get(v_snd_1043_, 1);
v_snd_1045_ = lean_ctor_get(v_snd_1044_, 1);
v___x_1046_ = lean_unbox(v_snd_1045_);
switch(v___x_1046_)
{
case 1:
{
lean_object* v_fst_1047_; lean_object* v___x_1048_; uint32_t v___x_1049_; lean_object* v___x_1050_; 
lean_del_object(v___x_1033_);
v_fst_1047_ = lean_ctor_get(v_val_1039_, 0);
lean_inc(v_fst_1047_);
lean_dec(v_val_1039_);
v___x_1048_ = l_ByteArray_empty;
v___x_1049_ = lean_unbox_uint32(v_fst_1047_);
lean_dec(v_fst_1047_);
v___x_1050_ = l_Lasm_KV_FastlyKV_readAll(v___x_1049_, v___x_1048_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1067_; 
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1053_ = v___x_1050_;
v_isShared_1054_ = v_isSharedCheck_1067_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1050_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1067_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
uint8_t v___x_1055_; 
v___x_1055_ = lean_string_validate_utf8(v_a_1051_);
if (v___x_1055_ == 0)
{
lean_object* v___x_1056_; lean_object* v___x_1058_; 
lean_dec(v_a_1051_);
lean_del_object(v___x_1041_);
v___x_1056_ = lean_box(0);
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 0, v___x_1056_);
v___x_1058_ = v___x_1053_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v___x_1056_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
else
{
lean_object* v___x_1060_; lean_object* v___x_1062_; 
v___x_1060_ = lean_string_from_utf8_unchecked(v_a_1051_);
if (v_isShared_1042_ == 0)
{
lean_ctor_set(v___x_1041_, 0, v___x_1060_);
v___x_1062_ = v___x_1041_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1060_);
v___x_1062_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
lean_object* v___x_1064_; 
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 0, v___x_1062_);
v___x_1064_ = v___x_1053_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1077_; 
lean_del_object(v___x_1041_);
v_a_1068_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1070_ = v___x_1050_;
v_isShared_1071_ = v_isSharedCheck_1077_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1050_);
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
case 3:
{
lean_object* v___x_1078_; lean_object* v___x_1080_; 
lean_del_object(v___x_1041_);
lean_dec(v_val_1039_);
v___x_1078_ = lean_box(0);
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 0, v___x_1078_);
v___x_1080_ = v___x_1033_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v___x_1078_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
default: 
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1094_; 
lean_inc(v_snd_1045_);
lean_del_object(v___x_1041_);
lean_dec(v_val_1039_);
v___x_1082_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__0));
v___x_1083_ = lean_string_append(v___x_1082_, v_name_1020_);
v___x_1084_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__1));
v___x_1085_ = lean_string_append(v___x_1083_, v___x_1084_);
v___x_1086_ = lean_string_append(v___x_1085_, v_key_1021_);
v___x_1087_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__2));
v___x_1088_ = lean_string_append(v___x_1086_, v___x_1087_);
v___x_1089_ = lean_unbox(v_snd_1045_);
lean_dec(v_snd_1045_);
v___x_1090_ = l_Lasm_Fastly_KvError_witxName(v___x_1089_);
v___x_1091_ = lean_string_append(v___x_1088_, v___x_1090_);
lean_dec_ref(v___x_1090_);
v___x_1092_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
if (v_isShared_1034_ == 0)
{
lean_ctor_set_tag(v___x_1033_, 1);
lean_ctor_set(v___x_1033_, 0, v___x_1092_);
v___x_1094_ = v___x_1033_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v___x_1092_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1107_; 
v_a_1098_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1100_ = v___x_1030_;
v_isShared_1101_ = v_isSharedCheck_1107_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1030_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1107_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
uint8_t v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1105_; 
v___x_1102_ = lean_unbox(v_a_1098_);
lean_dec(v_a_1098_);
v___x_1103_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1102_);
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 0, v___x_1103_);
v___x_1105_ = v___x_1100_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v___x_1103_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1117_; 
v_a_1108_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1110_ = v___x_1027_;
v_isShared_1111_ = v_isSharedCheck_1117_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1027_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1117_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
uint8_t v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1115_; 
v___x_1112_ = lean_unbox(v_a_1108_);
lean_dec(v_a_1108_);
v___x_1113_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1112_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 0, v___x_1113_);
v___x_1115_ = v___x_1110_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1113_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1127_; 
v_a_1118_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1120_ = v___x_1023_;
v_isShared_1121_ = v_isSharedCheck_1127_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1023_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1127_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
uint8_t v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1125_; 
v___x_1122_ = lean_unbox(v_a_1118_);
lean_dec(v_a_1118_);
v___x_1123_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1122_);
if (v_isShared_1121_ == 0)
{
lean_ctor_set(v___x_1120_, 0, v___x_1123_);
v___x_1125_ = v___x_1120_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1123_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_get___boxed(lean_object* v_name_1128_, lean_object* v_key_1129_, lean_object* v_a_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lasm_KV_FastlyKV_get(v_name_1128_, v_key_1129_);
lean_dec_ref(v_key_1129_);
lean_dec_ref(v_name_1128_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_put(lean_object* v_name_1138_, lean_object* v_key_1139_, lean_object* v_value_1140_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = lasm_fastly_kv_store_open(v_name_1138_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1144_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_a_1143_);
lean_dec_ref_known(v___x_1142_, 1);
v___x_1144_ = lasm_fastly_http_body_new();
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1146_; uint32_t v___x_1147_; lean_object* v___x_1148_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1144_, 1);
v___x_1146_ = lean_string_to_utf8(v_value_1140_);
v___x_1147_ = lean_unbox_uint32(v_a_1145_);
v___x_1148_ = l_Lasm_KV_FastlyKV_writeAll(v___x_1147_, v___x_1146_);
if (lean_obj_tag(v___x_1148_) == 0)
{
uint32_t v___x_1149_; lean_object* v___x_1150_; uint32_t v___x_1151_; uint32_t v___x_1152_; lean_object* v___x_1153_; 
lean_dec_ref_known(v___x_1148_, 1);
v___x_1149_ = 0;
v___x_1150_ = ((lean_object*)(l_Lasm_KV_FastlyKV_put___closed__0));
v___x_1151_ = lean_unbox_uint32(v_a_1143_);
lean_dec(v_a_1143_);
v___x_1152_ = lean_unbox_uint32(v_a_1145_);
lean_dec(v_a_1145_);
v___x_1153_ = l_Lasm_Fastly_KvStore_insert(v___x_1151_, v_key_1139_, v___x_1152_, v___x_1149_, v___x_1150_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; uint32_t v___x_1155_; lean_object* v___x_1156_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_a_1154_);
lean_dec_ref_known(v___x_1153_, 1);
v___x_1155_ = lean_unbox_uint32(v_a_1154_);
lean_dec(v_a_1154_);
v___x_1156_ = lasm_fastly_kv_store_insert_wait(v___x_1155_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1180_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1159_ = v___x_1156_;
v_isShared_1160_ = v_isSharedCheck_1180_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1156_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1180_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
uint8_t v___x_1161_; 
v___x_1161_ = lean_unbox(v_a_1157_);
if (v___x_1161_ == 1)
{
lean_object* v___x_1162_; lean_object* v___x_1164_; 
lean_dec(v_a_1157_);
v___x_1162_ = lean_box(0);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 0, v___x_1162_);
v___x_1164_ = v___x_1159_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v___x_1162_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
else
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1178_; 
v___x_1166_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__0));
v___x_1167_ = lean_string_append(v___x_1166_, v_name_1138_);
v___x_1168_ = ((lean_object*)(l_Lasm_KV_FastlyKV_put___closed__1));
v___x_1169_ = lean_string_append(v___x_1167_, v___x_1168_);
v___x_1170_ = lean_string_append(v___x_1169_, v_key_1139_);
v___x_1171_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__2));
v___x_1172_ = lean_string_append(v___x_1170_, v___x_1171_);
v___x_1173_ = lean_unbox(v_a_1157_);
lean_dec(v_a_1157_);
v___x_1174_ = l_Lasm_Fastly_KvError_witxName(v___x_1173_);
v___x_1175_ = lean_string_append(v___x_1172_, v___x_1174_);
lean_dec_ref(v___x_1174_);
v___x_1176_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set_tag(v___x_1159_, 1);
lean_ctor_set(v___x_1159_, 0, v___x_1176_);
v___x_1178_ = v___x_1159_;
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
v_a_1181_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1183_ = v___x_1156_;
v_isShared_1184_ = v_isSharedCheck_1190_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_a_1181_);
lean_dec(v___x_1156_);
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
v_a_1191_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1193_ = v___x_1153_;
v_isShared_1194_ = v_isSharedCheck_1200_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v___x_1153_);
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
else
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1210_; 
lean_dec(v_a_1145_);
lean_dec(v_a_1143_);
v_a_1201_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1203_ = v___x_1148_;
v_isShared_1204_ = v_isSharedCheck_1210_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1148_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1210_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
uint8_t v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1208_; 
v___x_1205_ = lean_unbox(v_a_1201_);
lean_dec(v_a_1201_);
v___x_1206_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1205_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 0, v___x_1206_);
v___x_1208_ = v___x_1203_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v___x_1206_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
}
else
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1220_; 
lean_dec(v_a_1143_);
lean_dec_ref(v_value_1140_);
v_a_1211_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1213_ = v___x_1144_;
v_isShared_1214_ = v_isSharedCheck_1220_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v___x_1144_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1220_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
uint8_t v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1218_; 
v___x_1215_ = lean_unbox(v_a_1211_);
lean_dec(v_a_1211_);
v___x_1216_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1215_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 0, v___x_1216_);
v___x_1218_ = v___x_1213_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v___x_1216_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
}
else
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1230_; 
lean_dec_ref(v_value_1140_);
v_a_1221_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1223_ = v___x_1142_;
v_isShared_1224_ = v_isSharedCheck_1230_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v___x_1142_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1230_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
uint8_t v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1228_; 
v___x_1225_ = lean_unbox(v_a_1221_);
lean_dec(v_a_1221_);
v___x_1226_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1225_);
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 0, v___x_1226_);
v___x_1228_ = v___x_1223_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___x_1226_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_put___boxed(lean_object* v_name_1231_, lean_object* v_key_1232_, lean_object* v_value_1233_, lean_object* v_a_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Lasm_KV_FastlyKV_put(v_name_1231_, v_key_1232_, v_value_1233_);
lean_dec_ref(v_key_1232_);
lean_dec_ref(v_name_1231_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_delete(lean_object* v_name_1237_, lean_object* v_key_1238_){
_start:
{
lean_object* v___x_1243_; 
v___x_1243_ = lasm_fastly_kv_store_open(v_name_1237_);
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; uint32_t v___x_1245_; uint32_t v___x_1246_; lean_object* v___x_1247_; 
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_a_1244_);
lean_dec_ref_known(v___x_1243_, 1);
v___x_1245_ = 0;
v___x_1246_ = lean_unbox_uint32(v_a_1244_);
lean_dec(v_a_1244_);
v___x_1247_ = lasm_fastly_kv_store_delete(v___x_1246_, v_key_1238_, v___x_1245_, v___x_1245_);
if (lean_obj_tag(v___x_1247_) == 0)
{
lean_object* v_a_1248_; uint32_t v___x_1249_; lean_object* v___x_1250_; 
v_a_1248_ = lean_ctor_get(v___x_1247_, 0);
lean_inc(v_a_1248_);
lean_dec_ref_known(v___x_1247_, 1);
v___x_1249_ = lean_unbox_uint32(v_a_1248_);
lean_dec(v_a_1248_);
v___x_1250_ = lasm_fastly_kv_store_delete_wait(v___x_1249_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1270_; 
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1253_ = v___x_1250_;
v_isShared_1254_ = v_isSharedCheck_1270_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1250_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1270_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
uint8_t v___x_1255_; 
v___x_1255_ = lean_unbox(v_a_1251_);
switch(v___x_1255_)
{
case 1:
{
lean_del_object(v___x_1253_);
lean_dec(v_a_1251_);
goto v___jp_1240_;
}
case 3:
{
lean_del_object(v___x_1253_);
lean_dec(v_a_1251_);
goto v___jp_1240_;
}
default: 
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1268_; 
v___x_1256_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__0));
v___x_1257_ = lean_string_append(v___x_1256_, v_name_1237_);
v___x_1258_ = ((lean_object*)(l_Lasm_KV_FastlyKV_delete___closed__0));
v___x_1259_ = lean_string_append(v___x_1257_, v___x_1258_);
v___x_1260_ = lean_string_append(v___x_1259_, v_key_1238_);
v___x_1261_ = ((lean_object*)(l_Lasm_KV_FastlyKV_get___closed__2));
v___x_1262_ = lean_string_append(v___x_1260_, v___x_1261_);
v___x_1263_ = lean_unbox(v_a_1251_);
lean_dec(v_a_1251_);
v___x_1264_ = l_Lasm_Fastly_KvError_witxName(v___x_1263_);
v___x_1265_ = lean_string_append(v___x_1262_, v___x_1264_);
lean_dec_ref(v___x_1264_);
v___x_1266_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set_tag(v___x_1253_, 1);
lean_ctor_set(v___x_1253_, 0, v___x_1266_);
v___x_1268_ = v___x_1253_;
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
}
}
else
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1280_; 
v_a_1271_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1273_ = v___x_1250_;
v_isShared_1274_ = v_isSharedCheck_1280_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v___x_1250_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1280_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
uint8_t v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1275_ = lean_unbox(v_a_1271_);
lean_dec(v_a_1271_);
v___x_1276_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1275_);
if (v_isShared_1274_ == 0)
{
lean_ctor_set(v___x_1273_, 0, v___x_1276_);
v___x_1278_ = v___x_1273_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
}
else
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1290_; 
v_a_1281_ = lean_ctor_get(v___x_1247_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1283_ = v___x_1247_;
v_isShared_1284_ = v_isSharedCheck_1290_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1247_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1290_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
uint8_t v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1288_; 
v___x_1285_ = lean_unbox(v_a_1281_);
lean_dec(v_a_1281_);
v___x_1286_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1285_);
if (v_isShared_1284_ == 0)
{
lean_ctor_set(v___x_1283_, 0, v___x_1286_);
v___x_1288_ = v___x_1283_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1286_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1300_; 
v_a_1291_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1293_ = v___x_1243_;
v_isShared_1294_ = v_isSharedCheck_1300_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1243_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1300_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
uint8_t v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1298_; 
v___x_1295_ = lean_unbox(v_a_1291_);
lean_dec(v_a_1291_);
v___x_1296_ = l_Lasm_Fastly_FastlyStatus_toIOError(v___x_1295_);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 0, v___x_1296_);
v___x_1298_ = v___x_1293_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v___x_1296_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
v___jp_1240_:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1241_ = lean_box(0);
v___x_1242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1241_);
return v___x_1242_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_FastlyKV_delete___boxed(lean_object* v_name_1301_, lean_object* v_key_1302_, lean_object* v_a_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_Lasm_KV_FastlyKV_delete(v_name_1301_, v_key_1302_);
lean_dec_ref(v_key_1302_);
lean_dec_ref(v_name_1301_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0(lean_object* v_name_1305_, lean_object* v_k_1306_){
_start:
{
lean_object* v_val_1309_; lean_object* v___x_1311_; 
v___x_1311_ = l_Lasm_KV_FastlyKV_get(v_name_1305_, v_k_1306_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1311_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1311_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 1);
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
v_val_1309_ = v___x_1317_;
goto v___jp_1308_;
}
}
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1327_; 
v_a_1320_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1322_ = v___x_1311_;
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v___x_1311_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
lean_ctor_set_tag(v___x_1322_, 0);
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_a_1320_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
v_val_1309_ = v___x_1325_;
goto v___jp_1308_;
}
}
}
v___jp_1308_:
{
lean_object* v___x_1310_; 
v___x_1310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1310_, 0, v_val_1309_);
return v___x_1310_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__0___boxed(lean_object* v_name_1328_, lean_object* v_k_1329_, lean_object* v___y_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l_Lasm_KV_fastly___lam__0(v_name_1328_, v_k_1329_);
lean_dec_ref(v_k_1329_);
lean_dec_ref(v_name_1328_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1(lean_object* v_name_1332_, lean_object* v_k_1333_, lean_object* v_v_1334_){
_start:
{
lean_object* v_val_1337_; lean_object* v___x_1339_; 
v___x_1339_ = l_Lasm_KV_FastlyKV_put(v_name_1332_, v_k_1333_, v_v_1334_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
v_a_1340_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1339_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1339_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
lean_ctor_set_tag(v___x_1342_, 1);
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
v_val_1337_ = v___x_1345_;
goto v___jp_1336_;
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
v_a_1348_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1339_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1339_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
lean_ctor_set_tag(v___x_1350_, 0);
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
v_val_1337_ = v___x_1353_;
goto v___jp_1336_;
}
}
}
v___jp_1336_:
{
lean_object* v___x_1338_; 
v___x_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1338_, 0, v_val_1337_);
return v___x_1338_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__1___boxed(lean_object* v_name_1356_, lean_object* v_k_1357_, lean_object* v_v_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_Lasm_KV_fastly___lam__1(v_name_1356_, v_k_1357_, v_v_1358_);
lean_dec_ref(v_k_1357_);
lean_dec_ref(v_name_1356_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2(lean_object* v_name_1361_, lean_object* v_k_1362_){
_start:
{
lean_object* v_val_1365_; lean_object* v___x_1367_; 
v___x_1367_ = l_Lasm_KV_FastlyKV_delete(v_name_1361_, v_k_1362_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v_a_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1375_; 
v_a_1368_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1370_ = v___x_1367_;
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_a_1368_);
lean_dec(v___x_1367_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; 
if (v_isShared_1371_ == 0)
{
lean_ctor_set_tag(v___x_1370_, 1);
v___x_1373_ = v___x_1370_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_a_1368_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
v_val_1365_ = v___x_1373_;
goto v___jp_1364_;
}
}
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1383_; 
v_a_1376_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1378_ = v___x_1367_;
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1367_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
lean_ctor_set_tag(v___x_1378_, 0);
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
v_val_1365_ = v___x_1381_;
goto v___jp_1364_;
}
}
}
v___jp_1364_:
{
lean_object* v___x_1366_; 
v___x_1366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1366_, 0, v_val_1365_);
return v___x_1366_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly___lam__2___boxed(lean_object* v_name_1384_, lean_object* v_k_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Lasm_KV_fastly___lam__2(v_name_1384_, v_k_1385_);
lean_dec_ref(v_k_1385_);
lean_dec_ref(v_name_1384_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_fastly(lean_object* v_name_1389_){
_start:
{
lean_object* v___f_1390_; lean_object* v___f_1391_; lean_object* v___f_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
lean_inc_ref_n(v_name_1389_, 2);
v___f_1390_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1390_, 0, v_name_1389_);
v___f_1391_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1391_, 0, v_name_1389_);
v___f_1392_ = lean_alloc_closure((void*)(l_Lasm_KV_fastly___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1392_, 0, v_name_1389_);
v___x_1393_ = ((lean_object*)(l_Lasm_KV_fastly___closed__0));
v___x_1394_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1393_);
lean_ctor_set(v___x_1394_, 1, v___f_1390_);
lean_ctor_set(v___x_1394_, 2, v___f_1391_);
lean_ctor_set(v___x_1394_, 3, v___f_1392_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0(uint8_t v_a_1395_, uint8_t v_a_1396_, lean_object* v_____do__lift_1397_){
_start:
{
if (lean_obj_tag(v_____do__lift_1397_) == 0)
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = lean_box(v_a_1395_);
v___x_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
return v___x_1400_;
}
else
{
lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1408_; 
v_isSharedCheck_1408_ = !lean_is_exclusive(v_____do__lift_1397_);
if (v_isSharedCheck_1408_ == 0)
{
lean_object* v_unused_1409_; 
v_unused_1409_ = lean_ctor_get(v_____do__lift_1397_, 0);
lean_dec(v_unused_1409_);
v___x_1402_ = v_____do__lift_1397_;
v_isShared_1403_ = v_isSharedCheck_1408_;
goto v_resetjp_1401_;
}
else
{
lean_dec(v_____do__lift_1397_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1408_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1404_; lean_object* v___x_1406_; 
v___x_1404_ = lean_box(v_a_1396_);
if (v_isShared_1403_ == 0)
{
lean_ctor_set_tag(v___x_1402_, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1404_);
v___x_1406_ = v___x_1402_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v___x_1404_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__0___boxed(lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_____do__lift_1412_, lean_object* v___y_1413_){
_start:
{
uint8_t v_a_3297__boxed_1414_; uint8_t v_a_3298__boxed_1415_; lean_object* v_res_1416_; 
v_a_3297__boxed_1414_ = lean_unbox(v_a_1410_);
v_a_3298__boxed_1415_ = lean_unbox(v_a_1411_);
v_res_1416_ = l_Lasm_KV_open___lam__0(v_a_3297__boxed_1414_, v_a_3298__boxed_1415_, v_____do__lift_1412_);
return v_res_1416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1(lean_object* v_a_1417_, lean_object* v_k_1418_, lean_object* v___x_1419_, lean_object* v_x_1420_){
_start:
{
if (lean_obj_tag(v_x_1420_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1430_; 
lean_dec_ref(v___x_1419_);
lean_dec_ref(v_k_1418_);
lean_dec_ref(v_a_1417_);
v_a_1422_ = lean_ctor_get(v_x_1420_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v_x_1420_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1424_ = v_x_1420_;
v_isShared_1425_ = v_isSharedCheck_1430_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v_x_1420_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1430_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
return v___x_1428_;
}
}
}
else
{
lean_object* v_a_1431_; uint8_t v___x_1432_; 
v_a_1431_ = lean_ctor_get(v_x_1420_, 0);
lean_inc(v_a_1431_);
lean_dec_ref_known(v_x_1420_, 1);
v___x_1432_ = lean_unbox(v_a_1431_);
lean_dec(v_a_1431_);
if (v___x_1432_ == 0)
{
lean_object* v_get_1433_; lean_object* v___x_1434_; 
lean_dec_ref(v___x_1419_);
v_get_1433_ = lean_ctor_get(v_a_1417_, 1);
lean_inc_ref(v_get_1433_);
lean_dec_ref(v_a_1417_);
v___x_1434_ = lean_apply_2(v_get_1433_, v_k_1418_, lean_box(0));
return v___x_1434_;
}
else
{
lean_object* v_get_1435_; lean_object* v___x_1436_; 
lean_dec_ref(v_a_1417_);
v_get_1435_ = lean_ctor_get(v___x_1419_, 1);
lean_inc_ref(v_get_1435_);
lean_dec_ref(v___x_1419_);
v___x_1436_ = lean_apply_2(v_get_1435_, v_k_1418_, lean_box(0));
return v___x_1436_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__1___boxed(lean_object* v_a_1437_, lean_object* v_k_1438_, lean_object* v___x_1439_, lean_object* v_x_1440_, lean_object* v___y_1441_){
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = l_Lasm_KV_open___lam__1(v_a_1437_, v_k_1438_, v___x_1439_, v_x_1440_);
return v_res_1442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2(lean_object* v_a_1443_, lean_object* v___x_1444_, uint8_t v_a_1445_, lean_object* v_name_1446_, uint8_t v_a_1447_, lean_object* v_k_1448_){
_start:
{
lean_object* v___f_1450_; lean_object* v___x_1451_; lean_object* v_val_1453_; uint8_t v_a_1457_; lean_object* v___x_1460_; lean_object* v_a_1461_; 
v___f_1450_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1450_, 0, v_a_1443_);
lean_closure_set(v___f_1450_, 1, v_k_1448_);
lean_closure_set(v___f_1450_, 2, v___x_1444_);
v___x_1451_ = lean_unsigned_to_nat(0u);
v___x_1460_ = l_Lasm_KV_binding(v_name_1446_);
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_a_1461_);
lean_dec_ref(v___x_1460_);
if (lean_obj_tag(v_a_1461_) == 0)
{
v_a_1457_ = v_a_1445_;
goto v___jp_1456_;
}
else
{
lean_dec_ref_known(v_a_1461_, 1);
v_a_1457_ = v_a_1447_;
goto v___jp_1456_;
}
v___jp_1452_:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1454_, 0, v_val_1453_);
v___x_1455_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1451_, v_a_1445_, v___x_1454_, v___f_1450_);
return v___x_1455_;
}
v___jp_1456_:
{
lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1458_ = lean_box(v_a_1457_);
v___x_1459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1458_);
v_val_1453_ = v___x_1459_;
goto v___jp_1452_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__2___boxed(lean_object* v_a_1462_, lean_object* v___x_1463_, lean_object* v_a_1464_, lean_object* v_name_1465_, lean_object* v_a_1466_, lean_object* v_k_1467_, lean_object* v___y_1468_){
_start:
{
uint8_t v_a_3372__boxed_1469_; uint8_t v_a_3373__boxed_1470_; lean_object* v_res_1471_; 
v_a_3372__boxed_1469_ = lean_unbox(v_a_1464_);
v_a_3373__boxed_1470_ = lean_unbox(v_a_1466_);
v_res_1471_ = l_Lasm_KV_open___lam__2(v_a_1462_, v___x_1463_, v_a_3372__boxed_1469_, v_name_1465_, v_a_3373__boxed_1470_, v_k_1467_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3(lean_object* v_a_1472_, lean_object* v_k_1473_, lean_object* v_v_1474_, lean_object* v___x_1475_, lean_object* v_x_1476_){
_start:
{
if (lean_obj_tag(v_x_1476_) == 0)
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1486_; 
lean_dec_ref(v___x_1475_);
lean_dec_ref(v_v_1474_);
lean_dec_ref(v_k_1473_);
lean_dec_ref(v_a_1472_);
v_a_1478_ = lean_ctor_get(v_x_1476_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v_x_1476_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1480_ = v_x_1476_;
v_isShared_1481_ = v_isSharedCheck_1486_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v_x_1476_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1486_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1484_; 
v___x_1484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1484_, 0, v___x_1483_);
return v___x_1484_;
}
}
}
else
{
lean_object* v_a_1487_; uint8_t v___x_1488_; 
v_a_1487_ = lean_ctor_get(v_x_1476_, 0);
lean_inc(v_a_1487_);
lean_dec_ref_known(v_x_1476_, 1);
v___x_1488_ = lean_unbox(v_a_1487_);
lean_dec(v_a_1487_);
if (v___x_1488_ == 0)
{
lean_object* v_put_1489_; lean_object* v___x_1490_; 
lean_dec_ref(v___x_1475_);
v_put_1489_ = lean_ctor_get(v_a_1472_, 2);
lean_inc_ref(v_put_1489_);
lean_dec_ref(v_a_1472_);
v___x_1490_ = lean_apply_3(v_put_1489_, v_k_1473_, v_v_1474_, lean_box(0));
return v___x_1490_;
}
else
{
lean_object* v_put_1491_; lean_object* v___x_1492_; 
lean_dec_ref(v_a_1472_);
v_put_1491_ = lean_ctor_get(v___x_1475_, 2);
lean_inc_ref(v_put_1491_);
lean_dec_ref(v___x_1475_);
v___x_1492_ = lean_apply_3(v_put_1491_, v_k_1473_, v_v_1474_, lean_box(0));
return v___x_1492_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__3___boxed(lean_object* v_a_1493_, lean_object* v_k_1494_, lean_object* v_v_1495_, lean_object* v___x_1496_, lean_object* v_x_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Lasm_KV_open___lam__3(v_a_1493_, v_k_1494_, v_v_1495_, v___x_1496_, v_x_1497_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4(lean_object* v_a_1500_, lean_object* v___x_1501_, uint8_t v_a_1502_, lean_object* v_name_1503_, lean_object* v___f_1504_, lean_object* v_k_1505_, lean_object* v_v_1506_){
_start:
{
lean_object* v___f_1508_; lean_object* v___x_1509_; lean_object* v_val_1511_; lean_object* v_a_1515_; lean_object* v___x_1517_; lean_object* v_a_1518_; lean_object* v___x_1519_; 
v___f_1508_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__3___boxed), 6, 4);
lean_closure_set(v___f_1508_, 0, v_a_1500_);
lean_closure_set(v___f_1508_, 1, v_k_1505_);
lean_closure_set(v___f_1508_, 2, v_v_1506_);
lean_closure_set(v___f_1508_, 3, v___x_1501_);
v___x_1509_ = lean_unsigned_to_nat(0u);
v___x_1517_ = l_Lasm_KV_binding(v_name_1503_);
v_a_1518_ = lean_ctor_get(v___x_1517_, 0);
lean_inc(v_a_1518_);
lean_dec_ref(v___x_1517_);
v___x_1519_ = lean_apply_2(v___f_1504_, v_a_1518_, lean_box(0));
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1519_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1519_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
lean_ctor_set_tag(v___x_1522_, 1);
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
v_val_1511_ = v___x_1525_;
goto v___jp_1510_;
}
}
}
else
{
lean_object* v_a_1528_; 
v_a_1528_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_a_1528_);
lean_dec_ref_known(v___x_1519_, 1);
v_a_1515_ = v_a_1528_;
goto v___jp_1514_;
}
v___jp_1510_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1512_, 0, v_val_1511_);
v___x_1513_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1509_, v_a_1502_, v___x_1512_, v___f_1508_);
return v___x_1513_;
}
v___jp_1514_:
{
lean_object* v___x_1516_; 
v___x_1516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1516_, 0, v_a_1515_);
v_val_1511_ = v___x_1516_;
goto v___jp_1510_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__4___boxed(lean_object* v_a_1529_, lean_object* v___x_1530_, lean_object* v_a_1531_, lean_object* v_name_1532_, lean_object* v___f_1533_, lean_object* v_k_1534_, lean_object* v_v_1535_, lean_object* v___y_1536_){
_start:
{
uint8_t v_a_3451__boxed_1537_; lean_object* v_res_1538_; 
v_a_3451__boxed_1537_ = lean_unbox(v_a_1531_);
v_res_1538_ = l_Lasm_KV_open___lam__4(v_a_1529_, v___x_1530_, v_a_3451__boxed_1537_, v_name_1532_, v___f_1533_, v_k_1534_, v_v_1535_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5(lean_object* v_a_1539_, lean_object* v_k_1540_, lean_object* v___x_1541_, lean_object* v_x_1542_){
_start:
{
if (lean_obj_tag(v_x_1542_) == 0)
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1552_; 
lean_dec_ref(v___x_1541_);
lean_dec_ref(v_k_1540_);
lean_dec_ref(v_a_1539_);
v_a_1544_ = lean_ctor_get(v_x_1542_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v_x_1542_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1546_ = v_x_1542_;
v_isShared_1547_ = v_isSharedCheck_1552_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v_x_1542_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1552_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1544_);
v___x_1549_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
lean_object* v___x_1550_; 
v___x_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1549_);
return v___x_1550_;
}
}
}
else
{
lean_object* v_a_1553_; uint8_t v___x_1554_; 
v_a_1553_ = lean_ctor_get(v_x_1542_, 0);
lean_inc(v_a_1553_);
lean_dec_ref_known(v_x_1542_, 1);
v___x_1554_ = lean_unbox(v_a_1553_);
lean_dec(v_a_1553_);
if (v___x_1554_ == 0)
{
lean_object* v_delete_1555_; lean_object* v___x_1556_; 
lean_dec_ref(v___x_1541_);
v_delete_1555_ = lean_ctor_get(v_a_1539_, 3);
lean_inc_ref(v_delete_1555_);
lean_dec_ref(v_a_1539_);
v___x_1556_ = lean_apply_2(v_delete_1555_, v_k_1540_, lean_box(0));
return v___x_1556_;
}
else
{
lean_object* v_delete_1557_; lean_object* v___x_1558_; 
lean_dec_ref(v_a_1539_);
v_delete_1557_ = lean_ctor_get(v___x_1541_, 3);
lean_inc_ref(v_delete_1557_);
lean_dec_ref(v___x_1541_);
v___x_1558_ = lean_apply_2(v_delete_1557_, v_k_1540_, lean_box(0));
return v___x_1558_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__5___boxed(lean_object* v_a_1559_, lean_object* v_k_1560_, lean_object* v___x_1561_, lean_object* v_x_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lasm_KV_open___lam__5(v_a_1559_, v_k_1560_, v___x_1561_, v_x_1562_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6(lean_object* v_a_1565_, lean_object* v___x_1566_, uint8_t v_a_1567_, lean_object* v_name_1568_, lean_object* v___f_1569_, lean_object* v_k_1570_){
_start:
{
lean_object* v___f_1572_; lean_object* v___x_1573_; lean_object* v_val_1575_; lean_object* v_a_1579_; lean_object* v___x_1581_; lean_object* v_a_1582_; lean_object* v___x_1583_; 
v___f_1572_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__5___boxed), 5, 3);
lean_closure_set(v___f_1572_, 0, v_a_1565_);
lean_closure_set(v___f_1572_, 1, v_k_1570_);
lean_closure_set(v___f_1572_, 2, v___x_1566_);
v___x_1573_ = lean_unsigned_to_nat(0u);
v___x_1581_ = l_Lasm_KV_binding(v_name_1568_);
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref(v___x_1581_);
v___x_1583_ = lean_apply_2(v___f_1569_, v_a_1582_, lean_box(0));
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1591_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1586_ = v___x_1583_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v___x_1583_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
lean_ctor_set_tag(v___x_1586_, 1);
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
v_val_1575_ = v___x_1589_;
goto v___jp_1574_;
}
}
}
else
{
lean_object* v_a_1592_; 
v_a_1592_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_a_1592_);
lean_dec_ref_known(v___x_1583_, 1);
v_a_1579_ = v_a_1592_;
goto v___jp_1578_;
}
v___jp_1574_:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1576_, 0, v_val_1575_);
v___x_1577_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1573_, v_a_1567_, v___x_1576_, v___f_1572_);
return v___x_1577_;
}
v___jp_1578_:
{
lean_object* v___x_1580_; 
v___x_1580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1580_, 0, v_a_1579_);
v_val_1575_ = v___x_1580_;
goto v___jp_1574_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___lam__6___boxed(lean_object* v_a_1593_, lean_object* v___x_1594_, lean_object* v_a_1595_, lean_object* v_name_1596_, lean_object* v___f_1597_, lean_object* v_k_1598_, lean_object* v___y_1599_){
_start:
{
uint8_t v_a_3547__boxed_1600_; lean_object* v_res_1601_; 
v_a_3547__boxed_1600_ = lean_unbox(v_a_1595_);
v_res_1601_ = l_Lasm_KV_open___lam__6(v_a_1593_, v___x_1594_, v_a_3547__boxed_1600_, v_name_1596_, v___f_1597_, v_k_1598_);
return v_res_1601_;
}
}
static uint32_t _init_l_Lasm_KV_open___closed__1(void){
_start:
{
lean_object* v___x_1603_; uint32_t v___x_1604_; 
v___x_1603_ = lean_box(0);
v___x_1604_ = lasm_fetch_platform(v___x_1603_);
return v___x_1604_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__2(void){
_start:
{
uint32_t v___x_1605_; uint32_t v___x_1606_; uint8_t v___x_1607_; 
v___x_1605_ = 2;
v___x_1606_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1607_ = lean_uint32_dec_eq(v___x_1606_, v___x_1605_);
return v___x_1607_;
}
}
static uint8_t _init_l_Lasm_KV_open___closed__3(void){
_start:
{
uint32_t v___x_1608_; uint32_t v___x_1609_; uint8_t v___x_1610_; 
v___x_1608_ = 0;
v___x_1609_ = lean_uint32_once(&l_Lasm_KV_open___closed__1, &l_Lasm_KV_open___closed__1_once, _init_l_Lasm_KV_open___closed__1);
v___x_1610_ = lean_uint32_dec_eq(v___x_1609_, v___x_1608_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open(lean_object* v_name_1611_){
_start:
{
uint8_t v_a_1614_; uint8_t v___x_1647_; 
v___x_1647_ = lean_uint8_once(&l_Lasm_KV_open___closed__2, &l_Lasm_KV_open___closed__2_once, _init_l_Lasm_KV_open___closed__2);
if (v___x_1647_ == 0)
{
uint8_t v___x_1648_; 
v___x_1648_ = lean_uint8_once(&l_Lasm_KV_open___closed__3, &l_Lasm_KV_open___closed__3_once, _init_l_Lasm_KV_open___closed__3);
if (v___x_1648_ == 0)
{
lean_object* v___x_1649_; 
lean_dec_ref(v_name_1611_);
v___x_1649_ = l_Lasm_KV_memory();
return v___x_1649_;
}
else
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_object* v_a_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; 
v_a_1651_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_a_1651_);
lean_dec_ref_known(v___x_1650_, 1);
v___x_1652_ = ((lean_object*)(l_Lasm_KV_deno___closed__1));
v___x_1653_ = l_Lasm_JS_Value_get___at___00__private_Lasm_Fetch_0__Lasm_Fetch_jsResponse_spec__2(v_a_1651_, v___x_1652_);
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_object* v_a_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v_a_1654_ = lean_ctor_get(v___x_1653_, 0);
lean_inc(v_a_1654_);
lean_dec_ref_known(v___x_1653_, 1);
v___x_1655_ = ((lean_object*)(l_Lasm_KV_deno___closed__2));
v___x_1656_ = l_Lasm_JS_Value_get___at___00Lasm_KV_binding_spec__0(v_a_1654_, v___x_1655_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1656_, 1);
if (lean_obj_tag(v_a_1657_) == 9)
{
lean_object* v___x_1658_; 
lean_dec_ref_known(v_a_1657_, 2);
v___x_1658_ = l_Lasm_KV_deno(v_name_1611_);
if (lean_obj_tag(v___x_1658_) == 0)
{
return v___x_1658_;
}
else
{
lean_object* v___x_1659_; 
lean_dec_ref_known(v___x_1658_, 1);
v___x_1659_ = l_Lasm_KV_memory();
return v___x_1659_;
}
}
else
{
lean_dec(v_a_1657_);
v_a_1614_ = v___x_1647_;
goto v___jp_1613_;
}
}
else
{
lean_dec_ref_known(v___x_1656_, 1);
v_a_1614_ = v___x_1647_;
goto v___jp_1613_;
}
}
else
{
lean_dec_ref_known(v___x_1653_, 1);
v_a_1614_ = v___x_1647_;
goto v___jp_1613_;
}
}
else
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
lean_dec_ref(v_name_1611_);
v_a_1660_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1650_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1650_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_a_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
}
}
else
{
lean_object* v___x_1668_; 
v___x_1668_ = lasm_fastly_kv_store_open(v_name_1611_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1676_; 
v_isSharedCheck_1676_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1676_ == 0)
{
lean_object* v_unused_1677_; 
v_unused_1677_ = lean_ctor_get(v___x_1668_, 0);
lean_dec(v_unused_1677_);
v___x_1670_ = v___x_1668_;
v_isShared_1671_ = v_isSharedCheck_1676_;
goto v_resetjp_1669_;
}
else
{
lean_dec(v___x_1668_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1676_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1672_; lean_object* v___x_1674_; 
v___x_1672_ = l_Lasm_KV_fastly(v_name_1611_);
if (v_isShared_1671_ == 0)
{
lean_ctor_set(v___x_1670_, 0, v___x_1672_);
v___x_1674_ = v___x_1670_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v___x_1672_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
else
{
lean_object* v___x_1678_; 
lean_dec_ref_known(v___x_1668_, 1);
lean_dec_ref(v_name_1611_);
v___x_1678_ = l_Lasm_KV_memory();
return v___x_1678_;
}
}
v___jp_1613_:
{
lean_object* v___x_1615_; 
v___x_1615_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_1615_) == 0)
{
lean_object* v_a_1616_; uint8_t v___x_1617_; 
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
lean_inc(v_a_1616_);
lean_dec_ref_known(v___x_1615_, 1);
v___x_1617_ = lean_unbox(v_a_1616_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; 
lean_dec(v_a_1616_);
lean_dec_ref(v_name_1611_);
v___x_1618_ = l_Lasm_KV_memory();
return v___x_1618_;
}
else
{
lean_object* v___x_1619_; lean_object* v___f_1620_; lean_object* v___x_1621_; lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1638_; 
v___x_1619_ = lean_box(v_a_1614_);
lean_inc(v_a_1616_);
v___f_1620_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1620_, 0, v___x_1619_);
lean_closure_set(v___f_1620_, 1, v_a_1616_);
v___x_1621_ = l_Lasm_KV_memory();
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1621_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1624_ = v___x_1621_;
v_isShared_1625_ = v_isSharedCheck_1638_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1621_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1638_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___f_1628_; lean_object* v___x_1629_; lean_object* v___f_1630_; lean_object* v___x_1631_; lean_object* v___f_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1636_; 
lean_inc_ref_n(v_name_1611_, 3);
v___x_1626_ = l_Lasm_KV_workers(v_name_1611_);
v___x_1627_ = lean_box(v_a_1614_);
lean_inc_ref_n(v___x_1626_, 2);
lean_inc_n(v_a_1622_, 2);
v___f_1628_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__2___boxed), 7, 5);
lean_closure_set(v___f_1628_, 0, v_a_1622_);
lean_closure_set(v___f_1628_, 1, v___x_1626_);
lean_closure_set(v___f_1628_, 2, v___x_1627_);
lean_closure_set(v___f_1628_, 3, v_name_1611_);
lean_closure_set(v___f_1628_, 4, v_a_1616_);
v___x_1629_ = lean_box(v_a_1614_);
lean_inc_ref(v___f_1620_);
v___f_1630_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__4___boxed), 8, 5);
lean_closure_set(v___f_1630_, 0, v_a_1622_);
lean_closure_set(v___f_1630_, 1, v___x_1626_);
lean_closure_set(v___f_1630_, 2, v___x_1629_);
lean_closure_set(v___f_1630_, 3, v_name_1611_);
lean_closure_set(v___f_1630_, 4, v___f_1620_);
v___x_1631_ = lean_box(v_a_1614_);
v___f_1632_ = lean_alloc_closure((void*)(l_Lasm_KV_open___lam__6___boxed), 7, 5);
lean_closure_set(v___f_1632_, 0, v_a_1622_);
lean_closure_set(v___f_1632_, 1, v___x_1626_);
lean_closure_set(v___f_1632_, 2, v___x_1631_);
lean_closure_set(v___f_1632_, 3, v_name_1611_);
lean_closure_set(v___f_1632_, 4, v___f_1620_);
v___x_1633_ = ((lean_object*)(l_Lasm_KV_open___closed__0));
v___x_1634_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1633_);
lean_ctor_set(v___x_1634_, 1, v___f_1628_);
lean_ctor_set(v___x_1634_, 2, v___f_1630_);
lean_ctor_set(v___x_1634_, 3, v___f_1632_);
if (v_isShared_1625_ == 0)
{
lean_ctor_set(v___x_1624_, 0, v___x_1634_);
v___x_1636_ = v___x_1624_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v___x_1634_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
}
else
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1646_; 
lean_dec_ref(v_name_1611_);
v_a_1639_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1641_ = v___x_1615_;
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v___x_1615_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1644_; 
if (v_isShared_1642_ == 0)
{
v___x_1644_ = v___x_1641_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_a_1639_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_KV_open___boxed(lean_object* v_name_1679_, lean_object* v_a_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l_Lasm_KV_open(v_name_1679_);
return v_res_1681_;
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
