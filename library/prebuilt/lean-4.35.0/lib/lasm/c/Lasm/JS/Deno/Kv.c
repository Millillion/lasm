// Lean compiler output
// Module: Lasm.JS.Deno.Kv
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.Streams
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
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Internal_isInstance_spec__0_spec__1(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSData;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSAbortController___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListIterator___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvListIterator_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvListIterator___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvListIterator = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator;
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvU64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvListIterator___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvU64 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvU64_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvU64;
static const lean_closure_object l_Lasm_JS_Deno_instToJSAtomicOperation_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvListIterator___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSAtomicOperation = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicOperation_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperation;
static const lean_closure_object l_Lasm_JS_Deno_instToJSKv_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvListIterator___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKv = (const lean_object*)&l_Lasm_JS_Deno_instToJSKv_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKv;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqKvMutationType_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqKvMutationType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqKvMutationType_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqKvMutationType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqKvMutationType = (const lean_object*)&l_Lasm_JS_Deno_instBEqKvMutationType_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprKvMutationType_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprKvMutationType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprKvMutationType = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_value;
static const lean_string_object l_Lasm_JS_Deno_instInhabitedKvMutationType_default_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instInhabitedKvMutationType_default = (const lean_object*)&l_Lasm_JS_Deno_instInhabitedKvMutationType_default_value;
static const lean_string_object l_Lasm_JS_Deno_instInhabitedKvMutationType_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instInhabitedKvMutationType = (const lean_object*)&l_Lasm_JS_Deno_instInhabitedKvMutationType_value;
static const lean_string_object l_Lasm_JS_Deno_KvMutationType_set_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "set"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_KvMutationType_set = (const lean_object*)&l_Lasm_JS_Deno_KvMutationType_set_value;
static const lean_string_object l_Lasm_JS_Deno_KvMutationType_delete_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_KvMutationType_delete = (const lean_object*)&l_Lasm_JS_Deno_KvMutationType_delete_value;
static const lean_string_object l_Lasm_JS_Deno_KvMutationType_sum_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sum"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_KvMutationType_sum = (const lean_object*)&l_Lasm_JS_Deno_KvMutationType_sum_value;
static const lean_string_object l_Lasm_JS_Deno_KvMutationType_max_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_KvMutationType_max = (const lean_object*)&l_Lasm_JS_Deno_KvMutationType_max_value;
static const lean_string_object l_Lasm_JS_Deno_KvMutationType_min_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "min"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_KvMutationType_min = (const lean_object*)&l_Lasm_JS_Deno_KvMutationType_min_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvMutationType_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvMutationType___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqKvConsistencyLevel_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqKvConsistencyLevel_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqKvConsistencyLevel_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqKvConsistencyLevel_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqKvConsistencyLevel = (const lean_object*)&l_Lasm_JS_Deno_instBEqKvConsistencyLevel_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprKvConsistencyLevel_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel = (const lean_object*)&l_Lasm_JS_Deno_instReprKvConsistencyLevel_value;
static const lean_string_object l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel_default_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel_default = (const lean_object*)&l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel_default_value;
static const lean_string_object l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel = (const lean_object*)&l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel_value;
static const lean_string_object l_Lasm_JS_Deno_KvConsistencyLevel_strong_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strong"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_strong = (const lean_object*)&l_Lasm_JS_Deno_KvConsistencyLevel_strong_value;
static const lean_string_object l_Lasm_JS_Deno_KvConsistencyLevel_eventual_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "eventual"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_eventual = (const lean_object*)&l_Lasm_JS_Deno_KvConsistencyLevel_eventual_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvConsistencyLevel_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvMutationType___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvConsistencyLevel = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvConsistencyLevel_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvConsistencyLevel;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_bigint_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_bigint_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_boolean_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_boolean_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvKeyPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvKeyPart_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvKeyPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvKeyPart_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringKvKeyPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeStringKvKeyPart_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeStringKvKeyPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeStringKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instCoeStringKvKeyPart_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeFloatKvKeyPart_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatKvKeyPart_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeIntKvKeyPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeIntKvKeyPart_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeIntKvKeyPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeIntKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instCoeIntKvKeyPart_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeBoolKvKeyPart_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instCoeBoolKvKeyPart_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvKeyPart___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvKeyPart;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntry;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvMutation___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvMutation;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvGetOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvGetManyOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvSetOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListSelector___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListSelector;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvEnqueueOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvEnqueueOptions;
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvListenQueueHandler_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvListIterator___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvListenQueueHandler = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListenQueueHandler_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvListenQueueHandler;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1_spec__2(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvWatchOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble = (const lean_object*)&l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpression;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_cronScheduleExpression_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_cronScheduleExpression_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion = (const lean_object*)&l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronSchedule___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronSchedule;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_cronSchedule_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_cronSchedule_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule = (const lean_object*)&l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule = (const lean_object*)&l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSCronHandler_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvListIterator___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSCronHandler = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronHandler_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCronHandler;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsOptions;
static const lean_closure_object l_Lasm_JS_Deno_instToJSCronWithOptionsHandler_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvListIterator___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsHandler = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronWithOptionsHandler_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_iterator(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_iterator___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListIterator___lam__0(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_mk_string_unchecked("", 0, 0);
v___x_3_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3_, 0, v_x_1_);
lean_ctor_set(v___x_3_, 1, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0(lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_5_) == 9)
{
lean_object* v_value_6_; lean_object* v___x_7_; 
v_value_6_ = lean_ctor_get(v_x_5_, 0);
lean_inc(v_value_6_);
v___x_7_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7_, 0, v_value_6_);
return v___x_7_;
}
else
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_mk_string_unchecked("", 0, 0);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvListIterator(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Deno.KvListIterator", 27, 27);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvU64(void){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; 
v___f_17_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___boxed), 1, 0);
v___x_18_ = lean_mk_string_unchecked("Lasm.JS.Deno.KvU64", 18, 18);
v___x_19_ = 0;
v___x_20_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_20_, 0, v___f_17_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSAtomicOperation(void){
_start:
{
lean_object* v___f_22_; lean_object* v___x_23_; uint8_t v___x_24_; lean_object* v___x_25_; 
v___f_22_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___boxed), 1, 0);
v___x_23_ = lean_mk_string_unchecked("Lasm.JS.Deno.AtomicOperation", 28, 28);
v___x_24_ = 0;
v___x_25_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_25_, 0, v___f_22_);
lean_ctor_set(v___x_25_, 1, v___x_23_);
lean_ctor_set_uint8(v___x_25_, sizeof(void*)*2, v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKv(void){
_start:
{
lean_object* v___f_27_; lean_object* v___x_28_; uint8_t v___x_29_; lean_object* v___x_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___boxed), 1, 0);
v___x_28_ = lean_mk_string_unchecked("Lasm.JS.Deno.Kv", 15, 15);
v___x_29_ = 0;
v___x_30_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_30_, 0, v___f_27_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
lean_ctor_set_uint8(v___x_30_, sizeof(void*)*2, v___x_29_);
return v___x_30_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqKvMutationType_beq(lean_object* v_x_31_, lean_object* v_x_32_){
_start:
{
uint8_t v___x_33_; 
v___x_33_ = lean_string_dec_eq(v_x_31_, v_x_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqKvMutationType_beq___boxed(lean_object* v_x_34_, lean_object* v_x_35_){
_start:
{
uint8_t v_res_36_; lean_object* v_r_37_; 
v_res_36_ = l_Lasm_JS_Deno_instBEqKvMutationType_beq(v_x_34_, v_x_35_);
lean_dec_ref(v_x_35_);
lean_dec_ref(v_x_34_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___redArg(lean_object* v_x_39_){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; uint8_t v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_40_ = lean_mk_string_unchecked("{ ", 2, 2);
v___x_41_ = lean_box(0);
v___x_42_ = lean_mk_string_unchecked("val", 3, 3);
v___x_43_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
v___x_44_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_41_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
v___x_45_ = lean_mk_string_unchecked(" := ", 4, 4);
v___x_46_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
v___x_47_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_47_, 0, v___x_44_);
lean_ctor_set(v___x_47_, 1, v___x_46_);
v___x_48_ = lean_unsigned_to_nat(7u);
v___x_49_ = lean_nat_to_int(v___x_48_);
v___x_50_ = l_String_quote(v_x_39_);
v___x_51_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
v___x_52_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_49_);
lean_ctor_set(v___x_52_, 1, v___x_51_);
v___x_53_ = 0;
v___x_54_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_54_, 0, v___x_52_);
lean_ctor_set_uint8(v___x_54_, sizeof(void*)*1, v___x_53_);
v___x_55_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_47_);
lean_ctor_set(v___x_55_, 1, v___x_54_);
v___x_56_ = lean_mk_string_unchecked(" }", 2, 2);
v___x_57_ = lean_string_length(v___x_40_);
v___x_58_ = lean_nat_to_int(v___x_57_);
v___x_59_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_40_);
v___x_60_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
lean_ctor_set(v___x_60_, 1, v___x_55_);
v___x_61_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_56_);
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_58_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
v___x_64_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set_uint8(v___x_64_, sizeof(void*)*1, v___x_53_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr(lean_object* v_x_65_, lean_object* v_prec_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lasm_JS_Deno_instReprKvMutationType_repr___redArg(v_x_65_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___boxed(lean_object* v_x_68_, lean_object* v_prec_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lasm_JS_Deno_instReprKvMutationType_repr(v_x_68_, v_prec_69_);
lean_dec(v_prec_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0(lean_object* v_x_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_80_, 0, v_x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0(lean_object* v_x_82_){
_start:
{
if (lean_obj_tag(v_x_82_) == 4)
{
lean_object* v_s_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_90_; 
v_s_83_ = lean_ctor_get(v_x_82_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v_x_82_);
if (v_isSharedCheck_90_ == 0)
{
v___x_85_ = v_x_82_;
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_s_83_);
lean_dec(v_x_82_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_88_; 
if (v_isShared_86_ == 0)
{
lean_ctor_set_tag(v___x_85_, 1);
v___x_88_ = v___x_85_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_s_83_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
else
{
lean_object* v___x_91_; lean_object* v___x_92_; 
lean_dec(v_x_82_);
v___x_91_ = lean_mk_string_unchecked("not a string", 12, 12);
v___x_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
return v___x_92_;
}
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvMutationType(void){
_start:
{
lean_object* v___f_93_; lean_object* v___x_94_; uint8_t v___x_95_; lean_object* v___x_96_; 
v___f_93_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0), 1, 0);
v___x_94_ = lean_mk_string_unchecked("Lasm.JS.Deno.KvMutationType", 27, 27);
v___x_95_ = 0;
v___x_96_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_96_, 0, v___f_93_);
lean_ctor_set(v___x_96_, 1, v___x_94_);
lean_ctor_set_uint8(v___x_96_, sizeof(void*)*2, v___x_95_);
return v___x_96_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqKvConsistencyLevel_beq(lean_object* v_x_97_, lean_object* v_x_98_){
_start:
{
uint8_t v___x_99_; 
v___x_99_ = lean_string_dec_eq(v_x_97_, v_x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqKvConsistencyLevel_beq___boxed(lean_object* v_x_100_, lean_object* v_x_101_){
_start:
{
uint8_t v_res_102_; lean_object* v_r_103_; 
v_res_102_ = l_Lasm_JS_Deno_instBEqKvConsistencyLevel_beq(v_x_100_, v_x_101_);
lean_dec_ref(v_x_101_);
lean_dec_ref(v_x_100_);
v_r_103_ = lean_box(v_res_102_);
return v_r_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___redArg(lean_object* v_x_105_){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_106_ = lean_mk_string_unchecked("{ ", 2, 2);
v___x_107_ = lean_box(0);
v___x_108_ = lean_mk_string_unchecked("val", 3, 3);
v___x_109_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
v___x_110_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_107_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = lean_mk_string_unchecked(" := ", 4, 4);
v___x_112_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
v___x_113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_110_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = lean_unsigned_to_nat(7u);
v___x_115_ = lean_nat_to_int(v___x_114_);
v___x_116_ = l_String_quote(v_x_105_);
v___x_117_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
v___x_118_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_115_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = 0;
v___x_120_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_120_, 0, v___x_118_);
lean_ctor_set_uint8(v___x_120_, sizeof(void*)*1, v___x_119_);
v___x_121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_113_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = lean_mk_string_unchecked(" }", 2, 2);
v___x_123_ = lean_string_length(v___x_106_);
v___x_124_ = lean_nat_to_int(v___x_123_);
v___x_125_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_125_, 0, v___x_106_);
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_121_);
v___x_127_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_122_);
v___x_128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_126_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v___x_129_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_124_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set_uint8(v___x_130_, sizeof(void*)*1, v___x_119_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr(lean_object* v_x_131_, lean_object* v_prec_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___redArg(v_x_131_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___boxed(lean_object* v_x_134_, lean_object* v_prec_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr(v_x_134_, v_prec_135_);
lean_dec(v_prec_135_);
return v_res_136_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvConsistencyLevel(void){
_start:
{
lean_object* v___f_143_; lean_object* v___x_144_; uint8_t v___x_145_; lean_object* v___x_146_; 
v___f_143_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0), 1, 0);
v___x_144_ = lean_mk_string_unchecked("Lasm.JS.Deno.KvConsistencyLevel", 31, 31);
v___x_145_ = 0;
v___x_146_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_146_, 0, v___f_143_);
lean_ctor_set(v___x_146_, 1, v___x_144_);
lean_ctor_set_uint8(v___x_146_, sizeof(void*)*2, v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorIdx(lean_object* v_x_147_){
_start:
{
switch(lean_obj_tag(v_x_147_))
{
case 0:
{
lean_object* v___x_148_; 
v___x_148_ = lean_unsigned_to_nat(0u);
return v___x_148_;
}
case 1:
{
lean_object* v___x_149_; 
v___x_149_ = lean_unsigned_to_nat(1u);
return v___x_149_;
}
case 2:
{
lean_object* v___x_150_; 
v___x_150_ = lean_unsigned_to_nat(2u);
return v___x_150_;
}
case 3:
{
lean_object* v___x_151_; 
v___x_151_ = lean_unsigned_to_nat(3u);
return v___x_151_;
}
default: 
{
lean_object* v___x_152_; 
v___x_152_ = lean_unsigned_to_nat(4u);
return v___x_152_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorIdx___boxed(lean_object* v_x_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Lasm_JS_Deno_KvKeyPart_ctorIdx(v_x_153_);
lean_dec_ref(v_x_153_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(lean_object* v_t_155_, lean_object* v_k_156_){
_start:
{
switch(lean_obj_tag(v_t_155_))
{
case 2:
{
double v_value_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v_value_157_ = lean_ctor_get_float(v_t_155_, 0);
lean_dec_ref_known(v_t_155_, 0);
v___x_158_ = lean_box_float(v_value_157_);
v___x_159_ = lean_apply_1(v_k_156_, v___x_158_);
return v___x_159_;
}
case 3:
{
lean_object* v_value_160_; lean_object* v___x_161_; 
v_value_160_ = lean_ctor_get(v_t_155_, 0);
lean_inc(v_value_160_);
lean_dec_ref_known(v_t_155_, 1);
v___x_161_ = lean_apply_1(v_k_156_, v_value_160_);
return v___x_161_;
}
case 4:
{
uint8_t v_value_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v_value_162_ = lean_ctor_get_uint8(v_t_155_, 0);
lean_dec_ref_known(v_t_155_, 0);
v___x_163_ = lean_box(v_value_162_);
v___x_164_ = lean_apply_1(v_k_156_, v___x_163_);
return v___x_164_;
}
default: 
{
lean_object* v_value_165_; lean_object* v___x_166_; 
v_value_165_ = lean_ctor_get(v_t_155_, 0);
lean_inc_ref(v_value_165_);
lean_dec_ref(v_t_155_);
v___x_166_ = lean_apply_1(v_k_156_, v_value_165_);
return v___x_166_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorElim(lean_object* v_motive_167_, lean_object* v_ctorIdx_168_, lean_object* v_t_169_, lean_object* v_h_170_, lean_object* v_k_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_169_, v_k_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorElim___boxed(lean_object* v_motive_173_, lean_object* v_ctorIdx_174_, lean_object* v_t_175_, lean_object* v_h_176_, lean_object* v_k_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim(v_motive_173_, v_ctorIdx_174_, v_t_175_, v_h_176_, v_k_177_);
lean_dec(v_ctorIdx_174_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_uint8Array_elim___redArg(lean_object* v_t_179_, lean_object* v_uint8Array_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_179_, v_uint8Array_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_uint8Array_elim(lean_object* v_motive_182_, lean_object* v_t_183_, lean_object* v_h_184_, lean_object* v_uint8Array_185_){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_183_, v_uint8Array_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_domString_elim___redArg(lean_object* v_t_187_, lean_object* v_domString_188_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_187_, v_domString_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_domString_elim(lean_object* v_motive_190_, lean_object* v_t_191_, lean_object* v_h_192_, lean_object* v_domString_193_){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_191_, v_domString_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_double_elim___redArg(lean_object* v_t_195_, lean_object* v_double_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_195_, v_double_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_double_elim(lean_object* v_motive_198_, lean_object* v_t_199_, lean_object* v_h_200_, lean_object* v_double_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_199_, v_double_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_bigint_elim___redArg(lean_object* v_t_203_, lean_object* v_bigint_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_203_, v_bigint_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_bigint_elim(lean_object* v_motive_206_, lean_object* v_t_207_, lean_object* v_h_208_, lean_object* v_bigint_209_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_207_, v_bigint_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_boolean_elim___redArg(lean_object* v_t_211_, lean_object* v_boolean_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_211_, v_boolean_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_boolean_elim(lean_object* v_motive_214_, lean_object* v_t_215_, lean_object* v_h_216_, lean_object* v_boolean_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_215_, v_boolean_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvKeyPart___lam__0(lean_object* v_x_219_){
_start:
{
switch(lean_obj_tag(v_x_219_))
{
case 0:
{
lean_object* v_value_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_227_; 
v_value_220_ = lean_ctor_get(v_x_219_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v_x_219_);
if (v_isSharedCheck_227_ == 0)
{
v___x_222_ = v_x_219_;
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_value_220_);
lean_dec(v_x_219_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_225_; 
if (v_isShared_223_ == 0)
{
lean_ctor_set_tag(v___x_222_, 6);
v___x_225_ = v___x_222_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_value_220_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
case 1:
{
lean_object* v_value_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_235_; 
v_value_228_ = lean_ctor_get(v_x_219_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v_x_219_);
if (v_isSharedCheck_235_ == 0)
{
v___x_230_ = v_x_219_;
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_value_228_);
lean_dec(v_x_219_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_233_; 
if (v_isShared_231_ == 0)
{
lean_ctor_set_tag(v___x_230_, 4);
v___x_233_ = v___x_230_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_value_228_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
case 2:
{
double v_value_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_243_; 
v_value_236_ = lean_ctor_get_float(v_x_219_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v_x_219_);
if (v_isSharedCheck_243_ == 0)
{
v___x_238_ = v_x_219_;
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
else
{
lean_dec(v_x_219_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
lean_ctor_set_tag(v___x_238_, 3);
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_242_, 0, v_value_236_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
case 3:
{
lean_object* v_value_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_251_; 
v_value_244_ = lean_ctor_get(v_x_219_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v_x_219_);
if (v_isSharedCheck_251_ == 0)
{
v___x_246_ = v_x_219_;
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_value_244_);
lean_dec(v_x_219_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_249_; 
if (v_isShared_247_ == 0)
{
lean_ctor_set_tag(v___x_246_, 5);
v___x_249_ = v___x_246_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_value_244_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
default: 
{
uint8_t v_value_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_259_; 
v_value_252_ = lean_ctor_get_uint8(v_x_219_, 0);
v_isSharedCheck_259_ = !lean_is_exclusive(v_x_219_);
if (v_isSharedCheck_259_ == 0)
{
v___x_254_ = v_x_219_;
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
else
{
lean_dec(v_x_219_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_259_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_257_; 
if (v_isShared_255_ == 0)
{
lean_ctor_set_tag(v___x_254_, 2);
v___x_257_ = v___x_254_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_258_, 0, v_value_252_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart___lam__0(lean_object* v_value_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v_value_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringKvKeyPart___lam__0(lean_object* v_value_264_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_265_, 0, v_value_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0(double v_value_267_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = lean_alloc_ctor(2, 0, 8);
lean_ctor_set_float(v___x_268_, 0, v_value_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0___boxed(lean_object* v_value_269_){
_start:
{
double v_value_boxed_270_; lean_object* v_res_271_; 
v_value_boxed_270_ = lean_unbox_float(v_value_269_);
lean_dec_ref(v_value_269_);
v_res_271_ = l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0(v_value_boxed_270_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeIntKvKeyPart___lam__0(lean_object* v_value_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_274_, 0, v_value_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0(uint8_t v_value_276_){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = lean_alloc_ctor(4, 0, 1);
lean_ctor_set_uint8(v___x_277_, 0, v_value_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0___boxed(lean_object* v_value_278_){
_start:
{
uint8_t v_value_boxed_279_; lean_object* v_res_280_; 
v_value_boxed_279_ = lean_unbox(v_value_278_);
v_res_280_ = l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0(v_value_boxed_279_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvKeyPart___lam__0(lean_object* v_x_282_){
_start:
{
switch(lean_obj_tag(v_x_282_))
{
case 6:
{
lean_object* v_b_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_291_; 
v_b_283_ = lean_ctor_get(v_x_282_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v_x_282_);
if (v_isSharedCheck_291_ == 0)
{
v___x_285_ = v_x_282_;
v_isShared_286_ = v_isSharedCheck_291_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_b_283_);
lean_dec(v_x_282_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_291_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_288_; 
if (v_isShared_286_ == 0)
{
lean_ctor_set_tag(v___x_285_, 0);
v___x_288_ = v___x_285_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_b_283_);
v___x_288_ = v_reuseFailAlloc_290_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
lean_object* v___x_289_; 
v___x_289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
return v___x_289_;
}
}
}
case 4:
{
lean_object* v_s_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_300_; 
v_s_292_ = lean_ctor_get(v_x_282_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v_x_282_);
if (v_isSharedCheck_300_ == 0)
{
v___x_294_ = v_x_282_;
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_s_292_);
lean_dec(v_x_282_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
if (v_isShared_295_ == 0)
{
lean_ctor_set_tag(v___x_294_, 1);
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_s_292_);
v___x_297_ = v_reuseFailAlloc_299_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_298_; 
v___x_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
}
case 3:
{
double v_n_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_309_; 
v_n_301_ = lean_ctor_get_float(v_x_282_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v_x_282_);
if (v_isSharedCheck_309_ == 0)
{
v___x_303_ = v_x_282_;
v_isShared_304_ = v_isSharedCheck_309_;
goto v_resetjp_302_;
}
else
{
lean_dec(v_x_282_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_309_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
lean_ctor_set_tag(v___x_303_, 2);
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(2, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_308_, 0, v_n_301_);
v___x_306_ = v_reuseFailAlloc_308_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
lean_object* v___x_307_; 
v___x_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
return v___x_307_;
}
}
}
case 5:
{
lean_object* v_i_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_318_; 
v_i_310_ = lean_ctor_get(v_x_282_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v_x_282_);
if (v_isSharedCheck_318_ == 0)
{
v___x_312_ = v_x_282_;
v_isShared_313_ = v_isSharedCheck_318_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_i_310_);
lean_dec(v_x_282_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_318_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set_tag(v___x_312_, 3);
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_i_310_);
v___x_315_ = v_reuseFailAlloc_317_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
lean_object* v___x_316_; 
v___x_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
return v___x_316_;
}
}
}
case 2:
{
uint8_t v_b_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_327_; 
v_b_319_ = lean_ctor_get_uint8(v_x_282_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v_x_282_);
if (v_isSharedCheck_327_ == 0)
{
v___x_321_ = v_x_282_;
v_isShared_322_ = v_isSharedCheck_327_;
goto v_resetjp_320_;
}
else
{
lean_dec(v_x_282_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_327_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
lean_ctor_set_tag(v___x_321_, 4);
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(4, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_326_, 0, v_b_319_);
v___x_324_ = v_reuseFailAlloc_326_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
lean_object* v___x_325_; 
v___x_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
return v___x_325_;
}
}
}
default: 
{
lean_object* v___x_328_; lean_object* v___x_329_; 
lean_dec(v_x_282_);
v___x_328_ = lean_mk_string_unchecked("", 0, 0);
v___x_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_329_, 0, v___x_328_);
return v___x_329_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvKeyPart(void){
_start:
{
lean_object* v___f_330_; lean_object* v___x_331_; uint8_t v___x_332_; lean_object* v___x_333_; 
v___f_330_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvKeyPart___lam__0), 1, 0);
v___x_331_ = lean_mk_string_unchecked("Lasm.JS.Deno.KvKeyPart", 22, 22);
v___x_332_ = 0;
v___x_333_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_333_, 0, v___f_330_);
lean_ctor_set(v___x_333_, 1, v___x_331_);
lean_ctor_set_uint8(v___x_333_, sizeof(void*)*2, v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0(lean_object* v___x_334_, lean_object* v___x_335_, lean_object* v___x_336_, lean_object* v_d_337_){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_338_ = lean_mk_string_unchecked("key", 3, 3);
v___x_339_ = l_Lasm_JS_readField___redArg(v___x_334_, v_d_337_, v___x_338_);
lean_dec_ref(v___x_338_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_347_; 
lean_dec_ref(v___x_336_);
lean_dec_ref(v___x_335_);
v_a_340_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_347_ == 0)
{
v___x_342_ = v___x_339_;
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_339_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_a_340_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_a_348_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_a_348_);
lean_dec_ref_known(v___x_339_, 1);
v___x_349_ = lean_mk_string_unchecked("value", 5, 5);
v___x_350_ = l_Lasm_JS_readField___redArg(v___x_335_, v_d_337_, v___x_349_);
lean_dec_ref(v___x_349_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_358_; 
lean_dec(v_a_348_);
lean_dec_ref(v___x_336_);
v_a_351_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_358_ == 0)
{
v___x_353_ = v___x_350_;
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v___x_350_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_a_351_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
else
{
lean_object* v_a_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v_a_359_ = lean_ctor_get(v___x_350_, 0);
lean_inc(v_a_359_);
lean_dec_ref_known(v___x_350_, 1);
v___x_360_ = lean_mk_string_unchecked("versionstamp", 12, 12);
v___x_361_ = l_Lasm_JS_readField___redArg(v___x_336_, v_d_337_, v___x_360_);
lean_dec_ref(v___x_360_);
if (lean_obj_tag(v___x_361_) == 0)
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_dec(v_a_359_);
lean_dec(v_a_348_);
v_a_362_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_361_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_361_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
else
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_378_; 
v_a_370_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_378_ == 0)
{
v___x_372_ = v___x_361_;
v_isShared_373_ = v_isSharedCheck_378_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_361_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_378_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_374_; lean_object* v___x_376_; 
v___x_374_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_374_, 0, v_a_348_);
lean_ctor_set(v___x_374_, 1, v_a_359_);
lean_ctor_set(v___x_374_, 2, v_a_370_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_374_);
v___x_376_ = v___x_372_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_374_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___boxed(lean_object* v___x_379_, lean_object* v___x_380_, lean_object* v___x_381_, lean_object* v_d_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lasm_JS_Deno_instFromJSKvEntry___lam__0(v___x_379_, v___x_380_, v___x_381_, v_d_382_);
lean_dec(v_d_382_);
return v_res_383_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntry(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___f_388_; lean_object* v___x_389_; uint8_t v___x_390_; lean_object* v___x_391_; 
v___x_384_ = l_Lasm_JS_Deno_instFromJSKvKeyPart;
v___x_385_ = l_Lasm_JS_instFromJSArray___redArg(v___x_384_);
v___x_386_ = l_Lasm_JS_instFromJSData;
v___x_387_ = l_Lasm_JS_instFromJSString;
v___f_388_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___boxed), 4, 3);
lean_closure_set(v___f_388_, 0, v___x_385_);
lean_closure_set(v___f_388_, 1, v___x_386_);
lean_closure_set(v___f_388_, 2, v___x_387_);
v___x_389_ = lean_mk_string_unchecked("Lasm.JS.Deno.KvEntry", 20, 20);
v___x_390_ = 0;
v___x_391_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_391_, 0, v___f_388_);
lean_ctor_set(v___x_391_, 1, v___x_389_);
lean_ctor_set_uint8(v___x_391_, sizeof(void*)*2, v___x_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1(lean_object* v___f_392_, lean_object* v_d_393_){
_start:
{
lean_object* v_key_394_; lean_object* v_versionstamp_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_435_; 
v_key_394_ = lean_ctor_get(v_d_393_, 0);
v_versionstamp_395_ = lean_ctor_get(v_d_393_, 1);
v_isSharedCheck_435_ = !lean_is_exclusive(v_d_393_);
if (v_isSharedCheck_435_ == 0)
{
v___x_397_ = v_d_393_;
v_isShared_398_ = v_isSharedCheck_435_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_versionstamp_395_);
lean_inc(v_key_394_);
lean_dec(v_d_393_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_435_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_399_; lean_object* v___f_400_; lean_object* v___f_401_; lean_object* v___f_402_; lean_object* v___f_403_; lean_object* v___f_404_; lean_object* v___f_405_; lean_object* v___f_406_; lean_object* v___x_408_; 
v___x_399_ = lean_mk_string_unchecked("key", 3, 3);
v___f_400_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_401_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_402_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_403_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_404_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_405_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_406_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 1, v___f_401_);
lean_ctor_set(v___x_397_, 0, v___f_400_);
v___x_408_ = v___x_397_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___f_400_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v___f_401_);
v___x_408_ = v_reuseFailAlloc_434_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
lean_object* v___x_409_; lean_object* v___x_410_; size_t v_sz_411_; size_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___y_418_; 
v___x_409_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
lean_ctor_set(v___x_409_, 1, v___f_402_);
lean_ctor_set(v___x_409_, 2, v___f_403_);
lean_ctor_set(v___x_409_, 3, v___f_404_);
lean_ctor_set(v___x_409_, 4, v___f_405_);
v___x_410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_410_, 0, v___x_409_);
lean_ctor_set(v___x_410_, 1, v___f_406_);
v_sz_411_ = lean_array_size(v_key_394_);
v___x_412_ = ((size_t)0ULL);
v___x_413_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_410_, v___f_392_, v_sz_411_, v___x_412_, v_key_394_);
v___x_414_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
v___x_415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_399_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
v___x_416_ = lean_mk_string_unchecked("versionstamp", 12, 12);
if (lean_obj_tag(v_versionstamp_395_) == 0)
{
lean_object* v___x_425_; 
v___x_425_ = lean_box(1);
v___y_418_ = v___x_425_;
goto v___jp_417_;
}
else
{
lean_object* v_val_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_433_; 
v_val_426_ = lean_ctor_get(v_versionstamp_395_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v_versionstamp_395_);
if (v_isSharedCheck_433_ == 0)
{
v___x_428_ = v_versionstamp_395_;
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_val_426_);
lean_dec(v_versionstamp_395_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_431_; 
if (v_isShared_429_ == 0)
{
lean_ctor_set_tag(v___x_428_, 4);
v___x_431_ = v___x_428_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_val_426_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
v___y_418_ = v___x_431_;
goto v___jp_417_;
}
}
}
v___jp_417_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_419_, 0, v___x_416_);
lean_ctor_set(v___x_419_, 1, v___y_418_);
v___x_420_ = lean_unsigned_to_nat(2u);
v___x_421_ = lean_mk_empty_array_with_capacity(v___x_420_);
v___x_422_ = lean_array_push(v___x_421_, v___x_415_);
v___x_423_ = lean_array_push(v___x_422_, v___x_419_);
v___x_424_ = l_Lasm_JS_Web_Internal_fields(v___x_423_);
lean_dec_ref(v___x_423_);
return v___x_424_;
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicCheck(void){
_start:
{
lean_object* v___f_436_; lean_object* v___f_437_; 
v___f_436_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvKeyPart___lam__0), 1, 0);
v___f_437_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1), 2, 1);
lean_closure_set(v___f_437_, 0, v___f_436_);
return v___f_437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvMutation___lam__1(lean_object* v___f_438_, lean_object* v___f_439_, lean_object* v_d_440_){
_start:
{
lean_object* v_key_441_; lean_object* v_type_442_; lean_object* v_value_443_; lean_object* v_expireIn_444_; lean_object* v___x_445_; lean_object* v___f_446_; lean_object* v___f_447_; lean_object* v___f_448_; lean_object* v___f_449_; lean_object* v___f_450_; lean_object* v___f_451_; lean_object* v___f_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; size_t v_sz_456_; size_t v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v_key_441_ = lean_ctor_get(v_d_440_, 0);
lean_inc_ref(v_key_441_);
v_type_442_ = lean_ctor_get(v_d_440_, 1);
lean_inc_ref(v_type_442_);
v_value_443_ = lean_ctor_get(v_d_440_, 2);
lean_inc(v_value_443_);
v_expireIn_444_ = lean_ctor_get(v_d_440_, 3);
lean_inc(v_expireIn_444_);
lean_dec_ref(v_d_440_);
v___x_445_ = lean_mk_string_unchecked("key", 3, 3);
v___f_446_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_447_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_448_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_449_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_450_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_451_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_452_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_453_, 0, v___f_446_);
lean_ctor_set(v___x_453_, 1, v___f_447_);
v___x_454_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
lean_ctor_set(v___x_454_, 1, v___f_448_);
lean_ctor_set(v___x_454_, 2, v___f_449_);
lean_ctor_set(v___x_454_, 3, v___f_450_);
lean_ctor_set(v___x_454_, 4, v___f_451_);
v___x_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___f_452_);
v_sz_456_ = lean_array_size(v_key_441_);
v___x_457_ = ((size_t)0ULL);
v___x_458_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_455_, v___f_438_, v_sz_456_, v___x_457_, v_key_441_);
v___x_459_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
v___x_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_460_, 0, v___x_445_);
lean_ctor_set(v___x_460_, 1, v___x_459_);
v___x_461_ = lean_mk_string_unchecked("type", 4, 4);
v___x_462_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_462_, 0, v_type_442_);
v___x_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_461_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = lean_mk_string_unchecked("value", 5, 5);
v___x_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
lean_ctor_set(v___x_465_, 1, v_value_443_);
v___x_466_ = lean_mk_string_unchecked("expireIn", 8, 8);
v___x_467_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_439_, v_expireIn_444_);
v___x_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_466_);
lean_ctor_set(v___x_468_, 1, v___x_467_);
v___x_469_ = lean_unsigned_to_nat(4u);
v___x_470_ = lean_mk_empty_array_with_capacity(v___x_469_);
v___x_471_ = lean_array_push(v___x_470_, v___x_460_);
v___x_472_ = lean_array_push(v___x_471_, v___x_463_);
v___x_473_ = lean_array_push(v___x_472_, v___x_465_);
v___x_474_ = lean_array_push(v___x_473_, v___x_468_);
v___x_475_ = l_Lasm_JS_Web_Internal_fields(v___x_474_);
lean_dec_ref(v___x_474_);
return v___x_475_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvMutation(void){
_start:
{
lean_object* v___f_476_; lean_object* v___f_477_; lean_object* v___f_478_; 
v___f_476_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvKeyPart___lam__0), 1, 0);
v___f_477_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_478_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1), 3, 2);
lean_closure_set(v___f_478_, 0, v___f_476_);
lean_closure_set(v___f_478_, 1, v___f_477_);
return v___f_478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___lam__0(lean_object* v___f_479_, lean_object* v_d_480_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_481_ = lean_mk_string_unchecked("expireIn", 8, 8);
v___x_482_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_479_, v_d_480_);
v___x_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_481_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
v___x_484_ = lean_unsigned_to_nat(1u);
v___x_485_ = lean_mk_empty_array_with_capacity(v___x_484_);
v___x_486_ = lean_array_push(v___x_485_, v___x_483_);
v___x_487_ = l_Lasm_JS_Web_Internal_fields(v___x_486_);
lean_dec_ref(v___x_486_);
return v___x_487_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions(void){
_start:
{
lean_object* v___f_488_; lean_object* v___f_489_; 
v___f_488_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_489_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___lam__0), 2, 1);
lean_closure_set(v___f_489_, 0, v___f_488_);
return v___f_489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0(lean_object* v___f_490_, lean_object* v___x_491_, lean_object* v___x_492_, lean_object* v_d_493_){
_start:
{
lean_object* v_delay_494_; lean_object* v_keysIfUndelivered_495_; lean_object* v_backoffSchedule_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v_delay_494_ = lean_ctor_get(v_d_493_, 0);
lean_inc(v_delay_494_);
v_keysIfUndelivered_495_ = lean_ctor_get(v_d_493_, 1);
lean_inc(v_keysIfUndelivered_495_);
v_backoffSchedule_496_ = lean_ctor_get(v_d_493_, 2);
lean_inc(v_backoffSchedule_496_);
lean_dec_ref(v_d_493_);
v___x_497_ = lean_mk_string_unchecked("delay", 5, 5);
v___x_498_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_490_, v_delay_494_);
v___x_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_497_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
v___x_500_ = lean_mk_string_unchecked("keysIfUndelivered", 17, 17);
v___x_501_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_491_, v_keysIfUndelivered_495_);
v___x_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_500_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
v___x_503_ = lean_mk_string_unchecked("backoffSchedule", 15, 15);
v___x_504_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_492_, v_backoffSchedule_496_);
v___x_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_503_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
v___x_506_ = lean_unsigned_to_nat(3u);
v___x_507_ = lean_mk_empty_array_with_capacity(v___x_506_);
v___x_508_ = lean_array_push(v___x_507_, v___x_499_);
v___x_509_ = lean_array_push(v___x_508_, v___x_502_);
v___x_510_ = lean_array_push(v___x_509_, v___x_505_);
v___x_511_ = l_Lasm_JS_Web_Internal_fields(v___x_510_);
lean_dec_ref(v___x_510_);
return v___x_511_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions(void){
_start:
{
lean_object* v___f_512_; lean_object* v___f_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___f_517_; 
v___f_512_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_513_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvKeyPart___lam__0), 1, 0);
v___x_514_ = l_Lasm_JS_instToJSArray___redArg(v___f_513_);
v___x_515_ = l_Lasm_JS_instToJSArray___redArg(v___x_514_);
lean_inc_ref(v___f_512_);
v___x_516_ = l_Lasm_JS_instToJSArray___redArg(v___f_512_);
v___f_517_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0), 4, 3);
lean_closure_set(v___f_517_, 0, v___f_512_);
lean_closure_set(v___f_517_, 1, v___x_515_);
lean_closure_set(v___f_517_, 2, v___x_516_);
return v___f_517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0(lean_object* v___x_518_, lean_object* v___x_519_, lean_object* v_d_520_){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = lean_mk_string_unchecked("ok", 2, 2);
v___x_522_ = l_Lasm_JS_readField___redArg(v___x_518_, v_d_520_, v___x_521_);
lean_dec_ref(v___x_521_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec_ref(v___x_519_);
v_a_523_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_522_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_522_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
else
{
lean_object* v_a_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v_a_531_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_a_531_);
lean_dec_ref_known(v___x_522_, 1);
v___x_532_ = lean_mk_string_unchecked("versionstamp", 12, 12);
v___x_533_ = l_Lasm_JS_readField___redArg(v___x_519_, v_d_520_, v___x_532_);
lean_dec_ref(v___x_532_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
lean_dec(v_a_531_);
v_a_534_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_533_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_533_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_551_; 
v_a_542_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_551_ == 0)
{
v___x_544_ = v___x_533_;
v_isShared_545_ = v_isSharedCheck_551_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_533_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_551_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_546_; uint8_t v___x_547_; lean_object* v___x_549_; 
v___x_546_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_546_, 0, v_a_542_);
v___x_547_ = lean_unbox(v_a_531_);
lean_dec(v_a_531_);
lean_ctor_set_uint8(v___x_546_, sizeof(void*)*1, v___x_547_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 0, v___x_546_);
v___x_549_ = v___x_544_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_546_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___boxed(lean_object* v___x_552_, lean_object* v___x_553_, lean_object* v_d_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0(v___x_552_, v___x_553_, v_d_554_);
lean_dec(v_d_554_);
return v_res_555_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___f_559_; lean_object* v___x_560_; uint8_t v___x_561_; lean_object* v___x_562_; 
v___x_556_ = l_Lasm_JS_instFromJSBool;
v___x_557_ = l_Lasm_JS_instFromJSString;
v___x_558_ = l_Lasm_JS_instFromJSOption___redArg(v___x_557_);
v___f_559_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___boxed), 3, 2);
lean_closure_set(v___f_559_, 0, v___x_556_);
lean_closure_set(v___f_559_, 1, v___x_558_);
v___x_560_ = lean_mk_string_unchecked("Lasm.JS.Deno.AtomicOperationCommit", 34, 34);
v___x_561_ = 0;
v___x_562_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_562_, 0, v___f_559_);
lean_ctor_set(v___x_562_, 1, v___x_560_);
lean_ctor_set_uint8(v___x_562_, sizeof(void*)*2, v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0(lean_object* v___f_563_, lean_object* v_d_564_){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_565_ = lean_mk_string_unchecked("consistency", 11, 11);
v___x_566_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_563_, v_d_564_);
v___x_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_565_);
lean_ctor_set(v___x_567_, 1, v___x_566_);
v___x_568_ = lean_unsigned_to_nat(1u);
v___x_569_ = lean_mk_empty_array_with_capacity(v___x_568_);
v___x_570_ = lean_array_push(v___x_569_, v___x_567_);
v___x_571_ = l_Lasm_JS_Web_Internal_fields(v___x_570_);
lean_dec_ref(v___x_570_);
return v___x_571_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvGetOptions(void){
_start:
{
lean_object* v___f_572_; lean_object* v___f_573_; 
v___f_572_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0), 1, 0);
v___f_573_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0), 2, 1);
lean_closure_set(v___f_573_, 0, v___f_572_);
return v___f_573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0(lean_object* v___x_574_, lean_object* v___x_575_, lean_object* v___x_576_, lean_object* v_d_577_){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_578_ = lean_mk_string_unchecked("key", 3, 3);
v___x_579_ = l_Lasm_JS_readField___redArg(v___x_574_, v_d_577_, v___x_578_);
lean_dec_ref(v___x_578_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_587_; 
lean_dec_ref(v___x_576_);
lean_dec_ref(v___x_575_);
v_a_580_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_587_ == 0)
{
v___x_582_ = v___x_579_;
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_579_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_587_;
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
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_a_580_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
else
{
lean_object* v_a_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v_a_588_ = lean_ctor_get(v___x_579_, 0);
lean_inc(v_a_588_);
lean_dec_ref_known(v___x_579_, 1);
v___x_589_ = lean_mk_string_unchecked("value", 5, 5);
v___x_590_ = l_Lasm_JS_readField___redArg(v___x_575_, v_d_577_, v___x_589_);
lean_dec_ref(v___x_589_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
lean_dec(v_a_588_);
lean_dec_ref(v___x_576_);
v_a_591_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v___x_590_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_590_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
else
{
lean_object* v_a_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v_a_599_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_599_);
lean_dec_ref_known(v___x_590_, 1);
v___x_600_ = lean_mk_string_unchecked("versionstamp", 12, 12);
v___x_601_ = l_Lasm_JS_readField___redArg(v___x_576_, v_d_577_, v___x_600_);
lean_dec_ref(v___x_600_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
lean_dec(v_a_599_);
lean_dec(v_a_588_);
v_a_602_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_601_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_601_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_a_602_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_618_; 
v_a_610_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_618_ == 0)
{
v___x_612_ = v___x_601_;
v_isShared_613_ = v_isSharedCheck_618_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_601_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_618_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_614_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_614_, 0, v_a_588_);
lean_ctor_set(v___x_614_, 1, v_a_599_);
lean_ctor_set(v___x_614_, 2, v_a_610_);
if (v_isShared_613_ == 0)
{
lean_ctor_set(v___x_612_, 0, v___x_614_);
v___x_616_ = v___x_612_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v___x_614_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0___boxed(lean_object* v___x_619_, lean_object* v___x_620_, lean_object* v___x_621_, lean_object* v_d_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0(v___x_619_, v___x_620_, v___x_621_, v_d_622_);
lean_dec(v_d_622_);
return v_res_623_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___f_629_; lean_object* v___x_630_; uint8_t v___x_631_; lean_object* v___x_632_; 
v___x_624_ = l_Lasm_JS_Deno_instFromJSKvKeyPart;
v___x_625_ = l_Lasm_JS_instFromJSArray___redArg(v___x_624_);
v___x_626_ = l_Lasm_JS_instFromJSData;
v___x_627_ = l_Lasm_JS_instFromJSString;
v___x_628_ = l_Lasm_JS_instFromJSOption___redArg(v___x_627_);
v___f_629_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0___boxed), 4, 3);
lean_closure_set(v___f_629_, 0, v___x_625_);
lean_closure_set(v___f_629_, 1, v___x_626_);
lean_closure_set(v___f_629_, 2, v___x_628_);
v___x_630_ = lean_mk_string_unchecked("Lasm.JS.Deno.KvEntryMaybe", 25, 25);
v___x_631_ = 0;
v___x_632_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_632_, 0, v___f_629_);
lean_ctor_set(v___x_632_, 1, v___x_630_);
lean_ctor_set_uint8(v___x_632_, sizeof(void*)*2, v___x_631_);
return v___x_632_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvGetManyOptions(void){
_start:
{
lean_object* v___f_633_; lean_object* v___f_634_; 
v___f_633_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0), 1, 0);
v___f_634_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0), 2, 1);
lean_closure_set(v___f_634_, 0, v___f_633_);
return v___f_634_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvSetOptions(void){
_start:
{
lean_object* v___f_635_; lean_object* v___f_636_; 
v___f_635_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_636_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___lam__0), 2, 1);
lean_closure_set(v___f_636_, 0, v___f_635_);
return v___f_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0(lean_object* v___x_637_, lean_object* v___x_638_, lean_object* v_d_639_){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = lean_mk_string_unchecked("ok", 2, 2);
v___x_641_ = l_Lasm_JS_readField___redArg(v___x_637_, v_d_639_, v___x_640_);
lean_dec_ref(v___x_640_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
lean_dec_ref(v___x_638_);
v_a_642_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_641_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_641_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
else
{
lean_object* v_a_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v_a_650_ = lean_ctor_get(v___x_641_, 0);
lean_inc(v_a_650_);
lean_dec_ref_known(v___x_641_, 1);
v___x_651_ = lean_mk_string_unchecked("versionstamp", 12, 12);
v___x_652_ = l_Lasm_JS_readField___redArg(v___x_638_, v_d_639_, v___x_651_);
lean_dec_ref(v___x_651_);
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
lean_dec(v_a_650_);
v_a_653_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_660_ == 0)
{
v___x_655_ = v___x_652_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_652_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_653_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
else
{
lean_object* v_a_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_670_; 
v_a_661_ = lean_ctor_get(v___x_652_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_670_ == 0)
{
v___x_663_ = v___x_652_;
v_isShared_664_ = v_isSharedCheck_670_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_a_661_);
lean_dec(v___x_652_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_670_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; uint8_t v___x_666_; lean_object* v___x_668_; 
v___x_665_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_665_, 0, v_a_661_);
v___x_666_ = lean_unbox(v_a_650_);
lean_dec(v_a_650_);
lean_ctor_set_uint8(v___x_665_, sizeof(void*)*1, v___x_666_);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 0, v___x_665_);
v___x_668_ = v___x_663_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v___x_665_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0___boxed(lean_object* v___x_671_, lean_object* v___x_672_, lean_object* v_d_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0(v___x_671_, v___x_672_, v_d_673_);
lean_dec(v_d_673_);
return v_res_674_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvCommitResult(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___f_677_; lean_object* v___x_678_; uint8_t v___x_679_; lean_object* v___x_680_; 
v___x_675_ = l_Lasm_JS_instFromJSBool;
v___x_676_ = l_Lasm_JS_instFromJSString;
v___f_677_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_677_, 0, v___x_675_);
lean_closure_set(v___f_677_, 1, v___x_676_);
v___x_678_ = lean_mk_string_unchecked("Lasm.JS.Deno.KvCommitResult", 27, 27);
v___x_679_ = 0;
v___x_680_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_680_, 0, v___f_677_);
lean_ctor_set(v___x_680_, 1, v___x_678_);
lean_ctor_set_uint8(v___x_680_, sizeof(void*)*2, v___x_679_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListSelector___lam__0(lean_object* v___x_681_, lean_object* v_d_682_){
_start:
{
lean_object* v_prefix_683_; lean_object* v_start_684_; lean_object* v_end_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v_prefix_683_ = lean_ctor_get(v_d_682_, 0);
lean_inc(v_prefix_683_);
v_start_684_ = lean_ctor_get(v_d_682_, 1);
lean_inc(v_start_684_);
v_end_685_ = lean_ctor_get(v_d_682_, 2);
lean_inc(v_end_685_);
lean_dec_ref(v_d_682_);
v___x_686_ = lean_mk_string_unchecked("prefix", 6, 6);
lean_inc_ref_n(v___x_681_, 2);
v___x_687_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_681_, v_prefix_683_);
v___x_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_688_, 0, v___x_686_);
lean_ctor_set(v___x_688_, 1, v___x_687_);
v___x_689_ = lean_mk_string_unchecked("start", 5, 5);
v___x_690_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_681_, v_start_684_);
v___x_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_689_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
v___x_692_ = lean_mk_string_unchecked("end", 3, 3);
v___x_693_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_681_, v_end_685_);
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_692_);
lean_ctor_set(v___x_694_, 1, v___x_693_);
v___x_695_ = lean_unsigned_to_nat(3u);
v___x_696_ = lean_mk_empty_array_with_capacity(v___x_695_);
v___x_697_ = lean_array_push(v___x_696_, v___x_688_);
v___x_698_ = lean_array_push(v___x_697_, v___x_691_);
v___x_699_ = lean_array_push(v___x_698_, v___x_694_);
v___x_700_ = l_Lasm_JS_Web_Internal_fields(v___x_699_);
lean_dec_ref(v___x_699_);
return v___x_700_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvListSelector(void){
_start:
{
lean_object* v___f_701_; lean_object* v___x_702_; lean_object* v___f_703_; 
v___f_701_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvKeyPart___lam__0), 1, 0);
v___x_702_ = l_Lasm_JS_instToJSArray___redArg(v___f_701_);
v___f_703_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0), 2, 1);
lean_closure_set(v___f_703_, 0, v___x_702_);
return v___f_703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___lam__0(lean_object* v___f_704_, lean_object* v___f_705_, lean_object* v___f_706_, lean_object* v___f_707_, lean_object* v___f_708_, lean_object* v_d_709_){
_start:
{
lean_object* v_limit_710_; lean_object* v_cursor_711_; lean_object* v_reverse_712_; lean_object* v_consistency_713_; lean_object* v_batchSize_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v_limit_710_ = lean_ctor_get(v_d_709_, 0);
lean_inc(v_limit_710_);
v_cursor_711_ = lean_ctor_get(v_d_709_, 1);
lean_inc(v_cursor_711_);
v_reverse_712_ = lean_ctor_get(v_d_709_, 2);
lean_inc(v_reverse_712_);
v_consistency_713_ = lean_ctor_get(v_d_709_, 3);
lean_inc(v_consistency_713_);
v_batchSize_714_ = lean_ctor_get(v_d_709_, 4);
lean_inc(v_batchSize_714_);
lean_dec_ref(v_d_709_);
v___x_715_ = lean_mk_string_unchecked("limit", 5, 5);
v___x_716_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_704_, v_limit_710_);
v___x_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_715_);
lean_ctor_set(v___x_717_, 1, v___x_716_);
v___x_718_ = lean_mk_string_unchecked("cursor", 6, 6);
v___x_719_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_705_, v_cursor_711_);
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v___x_721_ = lean_mk_string_unchecked("reverse", 7, 7);
v___x_722_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_706_, v_reverse_712_);
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_721_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = lean_mk_string_unchecked("consistency", 11, 11);
v___x_725_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_707_, v_consistency_713_);
v___x_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_724_);
lean_ctor_set(v___x_726_, 1, v___x_725_);
v___x_727_ = lean_mk_string_unchecked("batchSize", 9, 9);
v___x_728_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_708_, v_batchSize_714_);
v___x_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_729_, 0, v___x_727_);
lean_ctor_set(v___x_729_, 1, v___x_728_);
v___x_730_ = lean_unsigned_to_nat(5u);
v___x_731_ = lean_mk_empty_array_with_capacity(v___x_730_);
v___x_732_ = lean_array_push(v___x_731_, v___x_717_);
v___x_733_ = lean_array_push(v___x_732_, v___x_720_);
v___x_734_ = lean_array_push(v___x_733_, v___x_723_);
v___x_735_ = lean_array_push(v___x_734_, v___x_726_);
v___x_736_ = lean_array_push(v___x_735_, v___x_729_);
v___x_737_ = l_Lasm_JS_Web_Internal_fields(v___x_736_);
lean_dec_ref(v___x_736_);
return v___x_737_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvListOptions(void){
_start:
{
lean_object* v___f_738_; lean_object* v___f_739_; lean_object* v___f_740_; lean_object* v___f_741_; lean_object* v___f_742_; lean_object* v___f_743_; 
v___f_738_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_739_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_740_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_741_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0), 1, 0);
v___f_742_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_743_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0), 6, 5);
lean_closure_set(v___f_743_, 0, v___f_738_);
lean_closure_set(v___f_743_, 1, v___f_739_);
lean_closure_set(v___f_743_, 2, v___f_740_);
lean_closure_set(v___f_743_, 3, v___f_741_);
lean_closure_set(v___f_743_, 4, v___f_742_);
return v___f_743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvEnqueueOptions___lam__0(lean_object* v___f_744_, lean_object* v___x_745_, lean_object* v___x_746_, lean_object* v_d_747_){
_start:
{
lean_object* v_delay_748_; lean_object* v_keysIfUndelivered_749_; lean_object* v_backoffSchedule_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v_delay_748_ = lean_ctor_get(v_d_747_, 0);
lean_inc(v_delay_748_);
v_keysIfUndelivered_749_ = lean_ctor_get(v_d_747_, 1);
lean_inc(v_keysIfUndelivered_749_);
v_backoffSchedule_750_ = lean_ctor_get(v_d_747_, 2);
lean_inc(v_backoffSchedule_750_);
lean_dec_ref(v_d_747_);
v___x_751_ = lean_mk_string_unchecked("delay", 5, 5);
v___x_752_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_744_, v_delay_748_);
v___x_753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_753_, 0, v___x_751_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
v___x_754_ = lean_mk_string_unchecked("keysIfUndelivered", 17, 17);
v___x_755_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_745_, v_keysIfUndelivered_749_);
v___x_756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_756_, 0, v___x_754_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = lean_mk_string_unchecked("backoffSchedule", 15, 15);
v___x_758_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_746_, v_backoffSchedule_750_);
v___x_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_759_, 0, v___x_757_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
v___x_760_ = lean_unsigned_to_nat(3u);
v___x_761_ = lean_mk_empty_array_with_capacity(v___x_760_);
v___x_762_ = lean_array_push(v___x_761_, v___x_753_);
v___x_763_ = lean_array_push(v___x_762_, v___x_756_);
v___x_764_ = lean_array_push(v___x_763_, v___x_759_);
v___x_765_ = l_Lasm_JS_Web_Internal_fields(v___x_764_);
lean_dec_ref(v___x_764_);
return v___x_765_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvEnqueueOptions(void){
_start:
{
lean_object* v___f_766_; lean_object* v___f_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___f_771_; 
v___f_766_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_767_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvKeyPart___lam__0), 1, 0);
v___x_768_ = l_Lasm_JS_instToJSArray___redArg(v___f_767_);
v___x_769_ = l_Lasm_JS_instToJSArray___redArg(v___x_768_);
lean_inc_ref(v___f_766_);
v___x_770_ = l_Lasm_JS_instToJSArray___redArg(v___f_766_);
v___f_771_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvEnqueueOptions___lam__0), 4, 3);
lean_closure_set(v___f_771_, 0, v___f_766_);
lean_closure_set(v___f_771_, 1, v___x_769_);
lean_closure_set(v___f_771_, 2, v___x_770_);
return v___f_771_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvListenQueueHandler(void){
_start:
{
lean_object* v___f_773_; lean_object* v___x_774_; uint8_t v___x_775_; lean_object* v___x_776_; 
v___f_773_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___boxed), 1, 0);
v___x_774_ = lean_mk_string_unchecked("Lasm.JS.Deno.KvListenQueueHandler", 33, 33);
v___x_775_ = 0;
v___x_776_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_776_, 0, v___f_773_);
lean_ctor_set(v___x_776_, 1, v___x_774_);
lean_ctor_set_uint8(v___x_776_, sizeof(void*)*2, v___x_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0(lean_object* v_x_777_){
_start:
{
if (lean_obj_tag(v_x_777_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_787_; 
v_a_779_ = lean_ctor_get(v_x_777_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v_x_777_);
if (v_isSharedCheck_787_ == 0)
{
v___x_781_ = v_x_777_;
v_isShared_782_ = v_isSharedCheck_787_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v_x_777_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_787_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_786_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
lean_object* v___x_785_; 
v___x_785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
return v___x_785_;
}
}
}
else
{
lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_796_; 
v_isSharedCheck_796_ = !lean_is_exclusive(v_x_777_);
if (v_isSharedCheck_796_ == 0)
{
lean_object* v_unused_797_; 
v_unused_797_ = lean_ctor_get(v_x_777_, 0);
lean_dec(v_unused_797_);
v___x_789_ = v_x_777_;
v_isShared_790_ = v_isSharedCheck_796_;
goto v_resetjp_788_;
}
else
{
lean_dec(v_x_777_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_796_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_791_; lean_object* v___x_793_; 
v___x_791_ = lean_box(0);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v___x_791_);
v___x_793_ = v___x_789_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_791_);
v___x_793_ = v_reuseFailAlloc_795_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v___x_794_; 
v___x_794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_794_, 0, v___x_793_);
return v___x_794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___boxed(lean_object* v_x_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0(v_x_798_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1(lean_object* v_f_801_, lean_object* v___f_802_, lean_object* v_x_803_){
_start:
{
if (lean_obj_tag(v_x_803_) == 0)
{
lean_object* v___x_805_; 
lean_dec_ref(v___f_802_);
lean_dec_ref(v_f_801_);
v___x_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_805_, 0, v_x_803_);
return v___x_805_;
}
else
{
lean_object* v_a_806_; lean_object* v___x_807_; uint8_t v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_a_806_ = lean_ctor_get(v_x_803_, 0);
lean_inc(v_a_806_);
lean_dec_ref_known(v_x_803_, 1);
v___x_807_ = lean_unsigned_to_nat(0u);
v___x_808_ = 0;
v___x_809_ = lean_apply_2(v_f_801_, v_a_806_, lean_box(0));
v___x_810_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_807_, v___x_808_, v___x_809_, v___f_802_);
return v___x_810_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1___boxed(lean_object* v_f_811_, lean_object* v___f_812_, lean_object* v_x_813_, lean_object* v___y_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1(v_f_811_, v___f_812_, v_x_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0(lean_object* v_args_816_, lean_object* v_i_817_){
_start:
{
lean_object* v___x_819_; uint8_t v___x_820_; 
v___x_819_ = lean_array_get_size(v_args_816_);
v___x_820_ = lean_nat_dec_lt(v_i_817_, v___x_819_);
if (v___x_820_ == 0)
{
lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_821_ = lean_box(0);
v___x_822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
return v___x_822_;
}
else
{
lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_823_ = lean_array_fget_borrowed(v_args_816_, v_i_817_);
lean_inc(v___x_823_);
v___x_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
return v___x_824_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0___boxed(lean_object* v_args_825_, lean_object* v_i_826_, lean_object* v_a_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0(v_args_825_, v_i_826_);
lean_dec(v_i_826_);
lean_dec_ref(v_args_825_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2(lean_object* v___f_829_, lean_object* v_args_830_){
_start:
{
lean_object* v___x_832_; uint8_t v___x_833_; lean_object* v_val_835_; lean_object* v___x_838_; lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
v___x_832_ = lean_unsigned_to_nat(0u);
v___x_833_ = 0;
v___x_838_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0(v_args_830_, v___x_832_);
v_a_839_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_838_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_838_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v___jp_834_:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_836_, 0, v_val_835_);
v___x_837_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_832_, v___x_833_, v___x_836_, v___f_829_);
return v___x_837_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
lean_ctor_set_tag(v___x_841_, 1);
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
v_val_835_ = v___x_844_;
goto v___jp_834_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2___boxed(lean_object* v___f_847_, lean_object* v_args_848_, lean_object* v___y_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2(v___f_847_, v_args_848_);
lean_dec_ref(v_args_848_);
return v_res_850_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1_spec__2(uint8_t v_await_851_, uint64_t v_extra_852_){
_start:
{
uint8_t v___x_853_; uint64_t v___x_854_; uint64_t v___y_856_; 
v___x_853_ = 1;
v___x_854_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_853_);
if (v_await_851_ == 0)
{
uint64_t v___x_859_; 
v___x_859_ = 0ULL;
v___y_856_ = v___x_859_;
goto v___jp_855_;
}
else
{
uint64_t v___x_860_; 
v___x_860_ = 2ULL;
v___y_856_ = v___x_860_;
goto v___jp_855_;
}
v___jp_855_:
{
uint64_t v___x_857_; uint64_t v___x_858_; 
v___x_857_ = lean_uint64_lor(v___x_854_, v___y_856_);
v___x_858_ = lean_uint64_lor(v___x_857_, v_extra_852_);
return v___x_858_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1_spec__2___boxed(lean_object* v_await_861_, lean_object* v_extra_862_){
_start:
{
uint8_t v_await_boxed_863_; uint64_t v_extra_boxed_864_; uint64_t v_res_865_; lean_object* v_r_866_; 
v_await_boxed_863_ = lean_unbox(v_await_861_);
v_extra_boxed_864_ = lean_unbox_uint64(v_extra_862_);
lean_dec_ref(v_extra_862_);
v_res_865_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1_spec__2(v_await_boxed_863_, v_extra_boxed_864_);
v_r_866_ = lean_box_uint64(v_res_865_);
return v_r_866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1(lean_object* v_o_867_, lean_object* v_name_868_, lean_object* v_args_869_){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; uint8_t v___x_874_; uint64_t v___x_875_; uint64_t v___x_876_; lean_object* v___x_877_; 
v___x_871_ = lean_mk_string_unchecked("", 0, 0);
v___x_872_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_872_, 0, v_o_867_);
lean_ctor_set(v___x_872_, 1, v___x_871_);
lean_inc_ref(v_name_868_);
v___x_873_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_873_, 0, v_name_868_);
v___x_874_ = 0;
v___x_875_ = 8ULL;
v___x_876_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1_spec__2(v___x_874_, v___x_875_);
v___x_877_ = l_Lasm_JS_Value_invokeRaw(v___x_872_, v___x_873_, v_args_869_, v___x_876_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_877_, 1);
v___x_879_ = lean_mk_string_unchecked("method ", 7, 7);
v___x_880_ = lean_string_append(v___x_879_, v_name_868_);
lean_dec_ref(v_name_868_);
v___x_881_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_880_, v_a_878_);
lean_dec(v_a_878_);
lean_dec_ref(v___x_880_);
return v___x_881_;
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_dec_ref(v_name_868_);
v_a_882_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_877_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_877_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1___boxed(lean_object* v_o_890_, lean_object* v_name_891_, lean_object* v_args_892_, lean_object* v_a_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1(v_o_890_, v_name_891_, v_args_892_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn(lean_object* v_f_895_){
_start:
{
lean_object* v___f_897_; lean_object* v___f_898_; lean_object* v___f_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___f_897_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___boxed), 2, 0);
v___f_898_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_898_, 0, v_f_895_);
lean_closure_set(v___f_898_, 1, v___f_897_);
v___f_899_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_899_, 0, v___f_898_);
v___x_900_ = lean_unsigned_to_nat(0u);
v___x_901_ = l_Lasm_JS_Function_ofFn(v___f_899_, v___x_900_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; lean_object* v___x_903_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_901_, 1);
v___x_903_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_903_) == 0)
{
lean_object* v_a_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v_a_904_ = lean_ctor_get(v___x_903_, 0);
lean_inc(v_a_904_);
lean_dec_ref_known(v___x_903_, 1);
v___x_905_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_906_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_904_, v___x_905_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___y_915_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_a_907_);
lean_dec_ref_known(v___x_906_, 1);
v___x_908_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_909_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_902_);
v___x_910_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_910_, 0, v_a_902_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v___x_911_ = lean_mk_string_unchecked("length", 6, 6);
v___x_912_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
v___x_913_ = lean_mk_string_unchecked("value", 5, 5);
v___x_942_ = lean_unsigned_to_nat(1u);
v___x_943_ = lean_nat_to_int(v___x_942_);
v___x_944_ = lean_nat_abs(v___x_943_);
v___x_945_ = lean_cstr_to_nat("9007199254740991");
v___x_946_ = lean_nat_dec_le(v___x_944_, v___x_945_);
lean_dec(v___x_944_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
v___x_947_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_947_, 0, v___x_943_);
v___y_915_ = v___x_947_;
goto v___jp_914_;
}
else
{
double v___x_948_; lean_object* v___x_949_; 
v___x_948_ = l_Float_ofInt(v___x_943_);
lean_dec(v___x_943_);
v___x_949_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_949_, 0, v___x_948_);
v___y_915_ = v___x_949_;
goto v___jp_914_;
}
v___jp_914_:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_913_);
lean_ctor_set(v___x_916_, 1, v___y_915_);
v___x_917_ = lean_box(0);
v___x_918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = l_Lasm_JS_obj(v___x_918_);
v___x_920_ = lean_unsigned_to_nat(3u);
v___x_921_ = lean_mk_empty_array_with_capacity(v___x_920_);
v___x_922_ = lean_array_push(v___x_921_, v___x_910_);
v___x_923_ = lean_array_push(v___x_922_, v___x_912_);
v___x_924_ = lean_array_push(v___x_923_, v___x_919_);
v___x_925_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1(v_a_907_, v___x_908_, v___x_924_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_932_ == 0)
{
lean_object* v_unused_933_; 
v_unused_933_ = lean_ctor_get(v___x_925_, 0);
lean_dec(v_unused_933_);
v___x_927_ = v___x_925_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_dec(v___x_925_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
lean_ctor_set(v___x_927_, 0, v_a_902_);
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_902_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec(v_a_902_);
v_a_934_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_925_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_925_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
lean_dec(v_a_902_);
v_a_950_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_906_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_906_);
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
lean_dec(v_a_902_);
v_a_958_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_903_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_903_);
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
v_a_966_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_901_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_901_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___boxed(lean_object* v_f_974_, lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn(v_f_974_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0_spec__0___redArg(lean_object* v_d_977_){
_start:
{
lean_object* v___x_979_; 
v___x_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_979_, 0, v_d_977_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0_spec__0___redArg___boxed(lean_object* v_d_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0_spec__0___redArg(v_d_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0_spec__0(lean_object* v_context_983_, lean_object* v_d_984_){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v_d_984_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0_spec__0___boxed(lean_object* v_context_987_, lean_object* v_d_988_, lean_object* v_a_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0_spec__0(v_context_987_, v_d_988_);
lean_dec_ref(v_context_987_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0(lean_object* v_f_991_, lean_object* v_args_992_){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v_a_996_; lean_object* v___x_997_; 
v___x_994_ = lean_unsigned_to_nat(0u);
v___x_995_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__0(v_args_992_, v___x_994_);
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_a_996_);
lean_dec_ref(v___x_995_);
v___x_997_ = lean_apply_2(v_f_991_, v_a_996_, lean_box(0));
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1005_; 
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1005_ == 0)
{
lean_object* v_unused_1006_; 
v_unused_1006_ = lean_ctor_get(v___x_997_, 0);
lean_dec(v_unused_1006_);
v___x_999_ = v___x_997_;
v_isShared_1000_ = v_isSharedCheck_1005_;
goto v_resetjp_998_;
}
else
{
lean_dec(v___x_997_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1005_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1001_; lean_object* v___x_1003_; 
v___x_1001_ = lean_box(0);
if (v_isShared_1000_ == 0)
{
lean_ctor_set(v___x_999_, 0, v___x_1001_);
v___x_1003_ = v___x_999_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
else
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
v_a_1007_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_997_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_997_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_1015_, lean_object* v_args_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0(v_f_1015_, v_args_1016_);
lean_dec_ref(v_args_1016_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn(lean_object* v_f_1019_){
_start:
{
lean_object* v___f_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___f_1021_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1021_, 0, v_f_1019_);
v___x_1022_ = lean_unsigned_to_nat(0u);
v___x_1023_ = l_Lasm_JS_Function_ofSyncFn(v___f_1021_, v___x_1022_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1025_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_a_1024_);
lean_dec_ref_known(v___x_1023_, 1);
v___x_1025_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
lean_inc(v_a_1026_);
lean_dec_ref_known(v___x_1025_, 1);
v___x_1027_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1028_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_1026_, v___x_1027_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v_a_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___y_1037_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; uint8_t v___x_1068_; 
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
lean_inc(v_a_1029_);
lean_dec_ref_known(v___x_1028_, 1);
v___x_1030_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1031_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1024_);
v___x_1032_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1032_, 0, v_a_1024_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
v___x_1033_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1034_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
v___x_1035_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1064_ = lean_unsigned_to_nat(1u);
v___x_1065_ = lean_nat_to_int(v___x_1064_);
v___x_1066_ = lean_nat_abs(v___x_1065_);
v___x_1067_ = lean_cstr_to_nat("9007199254740991");
v___x_1068_ = lean_nat_dec_le(v___x_1066_, v___x_1067_);
lean_dec(v___x_1066_);
if (v___x_1068_ == 0)
{
lean_object* v___x_1069_; 
v___x_1069_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1065_);
v___y_1037_ = v___x_1069_;
goto v___jp_1036_;
}
else
{
double v___x_1070_; lean_object* v___x_1071_; 
v___x_1070_ = l_Float_ofInt(v___x_1065_);
lean_dec(v___x_1065_);
v___x_1071_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1071_, 0, v___x_1070_);
v___y_1037_ = v___x_1071_;
goto v___jp_1036_;
}
v___jp_1036_:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1035_);
lean_ctor_set(v___x_1038_, 1, v___y_1037_);
v___x_1039_ = lean_box(0);
v___x_1040_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1038_);
lean_ctor_set(v___x_1040_, 1, v___x_1039_);
v___x_1041_ = l_Lasm_JS_obj(v___x_1040_);
v___x_1042_ = lean_unsigned_to_nat(3u);
v___x_1043_ = lean_mk_empty_array_with_capacity(v___x_1042_);
v___x_1044_ = lean_array_push(v___x_1043_, v___x_1032_);
v___x_1045_ = lean_array_push(v___x_1044_, v___x_1034_);
v___x_1046_ = lean_array_push(v___x_1045_, v___x_1041_);
v___x_1047_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1(v_a_1029_, v___x_1030_, v___x_1046_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1054_; 
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1054_ == 0)
{
lean_object* v_unused_1055_; 
v_unused_1055_ = lean_ctor_get(v___x_1047_, 0);
lean_dec(v_unused_1055_);
v___x_1049_ = v___x_1047_;
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
else
{
lean_dec(v___x_1047_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 0, v_a_1024_);
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1024_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
lean_dec(v_a_1024_);
v_a_1056_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_1047_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1047_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
lean_dec(v_a_1024_);
v_a_1072_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1028_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1028_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
lean_dec(v_a_1024_);
v_a_1080_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1025_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1025_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
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
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1095_; 
v_a_1088_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1090_ = v___x_1023_;
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1023_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1093_; 
if (v_isShared_1091_ == 0)
{
v___x_1093_ = v___x_1090_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_a_1088_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___boxed(lean_object* v_f_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn(v_f_1096_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0(lean_object* v___f_1099_, lean_object* v_d_1100_){
_start:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1101_ = lean_mk_string_unchecked("raw", 3, 3);
v___x_1102_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1099_, v_d_1100_);
v___x_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1101_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
v___x_1104_ = lean_unsigned_to_nat(1u);
v___x_1105_ = lean_mk_empty_array_with_capacity(v___x_1104_);
v___x_1106_ = lean_array_push(v___x_1105_, v___x_1103_);
v___x_1107_ = l_Lasm_JS_Web_Internal_fields(v___x_1106_);
lean_dec_ref(v___x_1106_);
return v___x_1107_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvWatchOptions(void){
_start:
{
lean_object* v___f_1108_; lean_object* v___f_1109_; 
v___f_1108_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1109_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0), 2, 1);
lean_closure_set(v___f_1109_, 0, v___f_1108_);
return v___f_1109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx(lean_object* v_x_1110_){
_start:
{
if (lean_obj_tag(v_x_1110_) == 0)
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_unsigned_to_nat(0u);
return v___x_1111_;
}
else
{
lean_object* v___x_1112_; 
v___x_1112_ = lean_unsigned_to_nat(1u);
return v___x_1112_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx___boxed(lean_object* v_x_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx(v_x_1113_);
lean_dec_ref(v_x_1113_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(lean_object* v_t_1115_, lean_object* v_k_1116_){
_start:
{
if (lean_obj_tag(v_t_1115_) == 0)
{
double v_value_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v_value_1117_ = lean_ctor_get_float(v_t_1115_, 0);
lean_dec_ref_known(v_t_1115_, 0);
v___x_1118_ = lean_box_float(v_value_1117_);
v___x_1119_ = lean_apply_1(v_k_1116_, v___x_1118_);
return v___x_1119_;
}
else
{
lean_object* v_value_1120_; lean_object* v___x_1121_; 
v_value_1120_ = lean_ctor_get(v_t_1115_, 0);
lean_inc_ref(v_value_1120_);
lean_dec_ref_known(v_t_1115_, 1);
v___x_1121_ = lean_apply_1(v_k_1116_, v_value_1120_);
return v___x_1121_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim(lean_object* v_motive_1122_, lean_object* v_ctorIdx_1123_, lean_object* v_t_1124_, lean_object* v_h_1125_, lean_object* v_k_1126_){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1124_, v_k_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___boxed(lean_object* v_motive_1128_, lean_object* v_ctorIdx_1129_, lean_object* v_t_1130_, lean_object* v_h_1131_, lean_object* v_k_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim(v_motive_1128_, v_ctorIdx_1129_, v_t_1130_, v_h_1131_, v_k_1132_);
lean_dec(v_ctorIdx_1129_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_double_elim___redArg(lean_object* v_t_1134_, lean_object* v_double_1135_){
_start:
{
lean_object* v___x_1136_; 
v___x_1136_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1134_, v_double_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_double_elim(lean_object* v_motive_1137_, lean_object* v_t_1138_, lean_object* v_h_1139_, lean_object* v_double_1140_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1138_, v_double_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_sequence_elim___redArg(lean_object* v_t_1142_, lean_object* v_sequence_1143_){
_start:
{
lean_object* v___x_1144_; 
v___x_1144_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1142_, v_sequence_1143_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_sequence_elim(lean_object* v_motive_1145_, lean_object* v_t_1146_, lean_object* v_h_1147_, lean_object* v_sequence_1148_){
_start:
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1146_, v_sequence_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0(double v_x_1150_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1151_, 0, v_x_1150_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0___boxed(lean_object* v_x_1152_){
_start:
{
double v_x_85__boxed_1153_; lean_object* v_res_1154_; 
v_x_85__boxed_1153_ = lean_unbox_float(v_x_1152_);
lean_dec_ref(v_x_1152_);
v_res_1154_ = l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0(v_x_85__boxed_1153_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__1(lean_object* v___f_1155_, lean_object* v_x_1156_){
_start:
{
if (lean_obj_tag(v_x_1156_) == 0)
{
double v_value_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
lean_dec_ref(v___f_1155_);
v_value_1157_ = lean_ctor_get_float(v_x_1156_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v_x_1156_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1159_ = v_x_1156_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_dec(v_x_1156_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set_tag(v___x_1159_, 3);
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1163_, 0, v_value_1157_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
else
{
lean_object* v_value_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1185_; 
v_value_1165_ = lean_ctor_get(v_x_1156_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v_x_1156_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1167_ = v_x_1156_;
v_isShared_1168_ = v_isSharedCheck_1185_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_value_1165_);
lean_dec(v_x_1156_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1185_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___f_1169_; lean_object* v___f_1170_; lean_object* v___f_1171_; lean_object* v___f_1172_; lean_object* v___f_1173_; lean_object* v___f_1174_; lean_object* v___f_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; size_t v_sz_1179_; size_t v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___f_1169_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_1170_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_1171_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_1172_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_1173_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_1174_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_1175_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___f_1169_);
lean_ctor_set(v___x_1176_, 1, v___f_1170_);
v___x_1177_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
lean_ctor_set(v___x_1177_, 1, v___f_1171_);
lean_ctor_set(v___x_1177_, 2, v___f_1172_);
lean_ctor_set(v___x_1177_, 3, v___f_1173_);
lean_ctor_set(v___x_1177_, 4, v___f_1174_);
v___x_1178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
lean_ctor_set(v___x_1178_, 1, v___f_1175_);
v_sz_1179_ = lean_array_size(v_value_1165_);
v___x_1180_ = ((size_t)0ULL);
v___x_1181_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1178_, v___f_1155_, v_sz_1179_, v___x_1180_, v_value_1165_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set_tag(v___x_1167_, 7);
lean_ctor_set(v___x_1167_, 0, v___x_1181_);
v___x_1183_ = v___x_1167_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v___x_1181_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble(void){
_start:
{
lean_object* v___f_1186_; lean_object* v___f_1187_; 
v___f_1186_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0___boxed), 1, 0);
v___f_1187_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__1), 2, 1);
lean_closure_set(v___f_1187_, 0, v___f_1186_);
return v___f_1187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0(double v_value_1188_){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_1189_, 0, v_value_1188_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0___boxed(lean_object* v_value_1190_){
_start:
{
double v_value_boxed_1191_; lean_object* v_res_1192_; 
v_value_boxed_1191_ = lean_unbox_float(v_value_1190_);
lean_dec_ref(v_value_1190_);
v_res_1192_ = l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0(v_value_boxed_1191_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble___lam__0(lean_object* v_value_1194_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1195_, 0, v_value_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1(lean_object* v___f_1197_, lean_object* v_d_1198_){
_start:
{
lean_object* v___x_1199_; lean_object* v___y_1201_; 
v___x_1199_ = lean_mk_string_unchecked("exact", 5, 5);
if (lean_obj_tag(v_d_1198_) == 0)
{
double v_value_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1214_; 
lean_dec_ref(v___f_1197_);
v_value_1207_ = lean_ctor_get_float(v_d_1198_, 0);
v_isSharedCheck_1214_ = !lean_is_exclusive(v_d_1198_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1209_ = v_d_1198_;
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
else
{
lean_dec(v_d_1198_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1212_; 
if (v_isShared_1210_ == 0)
{
lean_ctor_set_tag(v___x_1209_, 3);
v___x_1212_ = v___x_1209_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1213_, 0, v_value_1207_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
v___y_1201_ = v___x_1212_;
goto v___jp_1200_;
}
}
}
else
{
lean_object* v_value_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1235_; 
v_value_1215_ = lean_ctor_get(v_d_1198_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v_d_1198_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1217_ = v_d_1198_;
v_isShared_1218_ = v_isSharedCheck_1235_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_value_1215_);
lean_dec(v_d_1198_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1235_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___f_1219_; lean_object* v___f_1220_; lean_object* v___f_1221_; lean_object* v___f_1222_; lean_object* v___f_1223_; lean_object* v___f_1224_; lean_object* v___f_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; size_t v_sz_1229_; size_t v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1233_; 
v___f_1219_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_1220_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_1221_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_1222_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_1223_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_1224_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_1225_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1226_, 0, v___f_1219_);
lean_ctor_set(v___x_1226_, 1, v___f_1220_);
v___x_1227_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1226_);
lean_ctor_set(v___x_1227_, 1, v___f_1221_);
lean_ctor_set(v___x_1227_, 2, v___f_1222_);
lean_ctor_set(v___x_1227_, 3, v___f_1223_);
lean_ctor_set(v___x_1227_, 4, v___f_1224_);
v___x_1228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
lean_ctor_set(v___x_1228_, 1, v___f_1225_);
v_sz_1229_ = lean_array_size(v_value_1215_);
v___x_1230_ = ((size_t)0ULL);
v___x_1231_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1228_, v___f_1197_, v_sz_1229_, v___x_1230_, v_value_1215_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set_tag(v___x_1217_, 7);
lean_ctor_set(v___x_1217_, 0, v___x_1231_);
v___x_1233_ = v___x_1217_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___x_1231_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
v___y_1201_ = v___x_1233_;
goto v___jp_1200_;
}
}
}
v___jp_1200_:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1199_);
lean_ctor_set(v___x_1202_, 1, v___y_1201_);
v___x_1203_ = lean_unsigned_to_nat(1u);
v___x_1204_ = lean_mk_empty_array_with_capacity(v___x_1203_);
v___x_1205_ = lean_array_push(v___x_1204_, v___x_1202_);
v___x_1206_ = l_Lasm_JS_Web_Internal_fields(v___x_1205_);
lean_dec_ref(v___x_1205_);
return v___x_1206_;
}
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCronScheduleExpression(void){
_start:
{
lean_object* v___f_1236_; lean_object* v___f_1237_; 
v___f_1236_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0___boxed), 1, 0);
v___f_1237_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1), 2, 1);
lean_closure_set(v___f_1237_, 0, v___f_1236_);
return v___f_1237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx(lean_object* v_x_1238_){
_start:
{
if (lean_obj_tag(v_x_1238_) == 0)
{
lean_object* v___x_1239_; 
v___x_1239_ = lean_unsigned_to_nat(0u);
return v___x_1239_;
}
else
{
lean_object* v___x_1240_; 
v___x_1240_ = lean_unsigned_to_nat(1u);
return v___x_1240_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx___boxed(lean_object* v_x_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx(v_x_1241_);
lean_dec_ref(v_x_1241_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(lean_object* v_t_1243_, lean_object* v_k_1244_){
_start:
{
if (lean_obj_tag(v_t_1243_) == 0)
{
double v_value_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v_value_1245_ = lean_ctor_get_float(v_t_1243_, 0);
lean_dec_ref_known(v_t_1243_, 0);
v___x_1246_ = lean_box_float(v_value_1245_);
v___x_1247_ = lean_apply_1(v_k_1244_, v___x_1246_);
return v___x_1247_;
}
else
{
lean_object* v_value_1248_; lean_object* v___x_1249_; 
v_value_1248_ = lean_ctor_get(v_t_1243_, 0);
lean_inc_ref(v_value_1248_);
lean_dec_ref_known(v_t_1243_, 1);
v___x_1249_ = lean_apply_1(v_k_1244_, v_value_1248_);
return v___x_1249_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim(lean_object* v_motive_1250_, lean_object* v_ctorIdx_1251_, lean_object* v_t_1252_, lean_object* v_h_1253_, lean_object* v_k_1254_){
_start:
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1252_, v_k_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___boxed(lean_object* v_motive_1256_, lean_object* v_ctorIdx_1257_, lean_object* v_t_1258_, lean_object* v_h_1259_, lean_object* v_k_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim(v_motive_1256_, v_ctorIdx_1257_, v_t_1258_, v_h_1259_, v_k_1260_);
lean_dec(v_ctorIdx_1257_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_double_elim___redArg(lean_object* v_t_1262_, lean_object* v_double_1263_){
_start:
{
lean_object* v___x_1264_; 
v___x_1264_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1262_, v_double_1263_);
return v___x_1264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_double_elim(lean_object* v_motive_1265_, lean_object* v_t_1266_, lean_object* v_h_1267_, lean_object* v_double_1268_){
_start:
{
lean_object* v___x_1269_; 
v___x_1269_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1266_, v_double_1268_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_cronScheduleExpression_elim___redArg(lean_object* v_t_1270_, lean_object* v_cronScheduleExpression_1271_){
_start:
{
lean_object* v___x_1272_; 
v___x_1272_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1270_, v_cronScheduleExpression_1271_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_cronScheduleExpression_elim(lean_object* v_motive_1273_, lean_object* v_t_1274_, lean_object* v_h_1275_, lean_object* v_cronScheduleExpression_1276_){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1274_, v_cronScheduleExpression_1276_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion___lam__1(lean_object* v___f_1278_, lean_object* v_x_1279_){
_start:
{
if (lean_obj_tag(v_x_1279_) == 0)
{
double v_value_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1287_; 
lean_dec_ref(v___f_1278_);
v_value_1280_ = lean_ctor_get_float(v_x_1279_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v_x_1279_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1282_ = v_x_1279_;
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
else
{
lean_dec(v_x_1279_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1285_; 
if (v_isShared_1283_ == 0)
{
lean_ctor_set_tag(v___x_1282_, 3);
v___x_1285_ = v___x_1282_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1286_, 0, v_value_1280_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
else
{
lean_object* v_value_1288_; lean_object* v___x_1289_; lean_object* v___y_1291_; 
v_value_1288_ = lean_ctor_get(v_x_1279_, 0);
lean_inc_ref(v_value_1288_);
lean_dec_ref_known(v_x_1279_, 1);
v___x_1289_ = lean_mk_string_unchecked("exact", 5, 5);
if (lean_obj_tag(v_value_1288_) == 0)
{
double v_value_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1304_; 
lean_dec_ref(v___f_1278_);
v_value_1297_ = lean_ctor_get_float(v_value_1288_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v_value_1288_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1299_ = v_value_1288_;
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
else
{
lean_dec(v_value_1288_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
lean_ctor_set_tag(v___x_1299_, 3);
v___x_1302_ = v___x_1299_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1303_, 0, v_value_1297_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
v___y_1291_ = v___x_1302_;
goto v___jp_1290_;
}
}
}
else
{
lean_object* v_value_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1325_; 
v_value_1305_ = lean_ctor_get(v_value_1288_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v_value_1288_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1307_ = v_value_1288_;
v_isShared_1308_ = v_isSharedCheck_1325_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_value_1305_);
lean_dec(v_value_1288_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1325_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___f_1309_; lean_object* v___f_1310_; lean_object* v___f_1311_; lean_object* v___f_1312_; lean_object* v___f_1313_; lean_object* v___f_1314_; lean_object* v___f_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; size_t v_sz_1319_; size_t v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1323_; 
v___f_1309_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_1310_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_1311_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_1312_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_1313_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_1314_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_1315_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___f_1309_);
lean_ctor_set(v___x_1316_, 1, v___f_1310_);
v___x_1317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
lean_ctor_set(v___x_1317_, 1, v___f_1311_);
lean_ctor_set(v___x_1317_, 2, v___f_1312_);
lean_ctor_set(v___x_1317_, 3, v___f_1313_);
lean_ctor_set(v___x_1317_, 4, v___f_1314_);
v___x_1318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
lean_ctor_set(v___x_1318_, 1, v___f_1315_);
v_sz_1319_ = lean_array_size(v_value_1305_);
v___x_1320_ = ((size_t)0ULL);
v___x_1321_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1318_, v___f_1278_, v_sz_1319_, v___x_1320_, v_value_1305_);
if (v_isShared_1308_ == 0)
{
lean_ctor_set_tag(v___x_1307_, 7);
lean_ctor_set(v___x_1307_, 0, v___x_1321_);
v___x_1323_ = v___x_1307_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___x_1321_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
v___y_1291_ = v___x_1323_;
goto v___jp_1290_;
}
}
}
v___jp_1290_:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1289_);
lean_ctor_set(v___x_1292_, 1, v___y_1291_);
v___x_1293_ = lean_unsigned_to_nat(1u);
v___x_1294_ = lean_mk_empty_array_with_capacity(v___x_1293_);
v___x_1295_ = lean_array_push(v___x_1294_, v___x_1292_);
v___x_1296_ = l_Lasm_JS_Web_Internal_fields(v___x_1295_);
lean_dec_ref(v___x_1295_);
return v___x_1296_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion(void){
_start:
{
lean_object* v___f_1326_; lean_object* v___f_1327_; 
v___f_1326_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0___boxed), 1, 0);
v___f_1327_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion___lam__1), 2, 1);
lean_closure_set(v___f_1327_, 0, v___f_1326_);
return v___f_1327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0(double v_value_1328_){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_1329_, 0, v_value_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0___boxed(lean_object* v_value_1330_){
_start:
{
double v_value_boxed_1331_; lean_object* v_res_1332_; 
v_value_boxed_1331_ = lean_unbox_float(v_value_1330_);
lean_dec_ref(v_value_1330_);
v_res_1332_ = l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0(v_value_boxed_1331_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion___lam__0(lean_object* v_value_1334_){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1335_, 0, v_value_1334_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronSchedule___lam__0(lean_object* v___x_1337_, lean_object* v_d_1338_){
_start:
{
lean_object* v_minute_1339_; lean_object* v_hour_1340_; lean_object* v_dayOfMonth_1341_; lean_object* v_month_1342_; lean_object* v_dayOfWeek_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
v_minute_1339_ = lean_ctor_get(v_d_1338_, 0);
lean_inc(v_minute_1339_);
v_hour_1340_ = lean_ctor_get(v_d_1338_, 1);
lean_inc(v_hour_1340_);
v_dayOfMonth_1341_ = lean_ctor_get(v_d_1338_, 2);
lean_inc(v_dayOfMonth_1341_);
v_month_1342_ = lean_ctor_get(v_d_1338_, 3);
lean_inc(v_month_1342_);
v_dayOfWeek_1343_ = lean_ctor_get(v_d_1338_, 4);
lean_inc(v_dayOfWeek_1343_);
lean_dec_ref(v_d_1338_);
v___x_1344_ = lean_mk_string_unchecked("minute", 6, 6);
lean_inc_ref_n(v___x_1337_, 4);
v___x_1345_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1337_, v_minute_1339_);
v___x_1346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1344_);
lean_ctor_set(v___x_1346_, 1, v___x_1345_);
v___x_1347_ = lean_mk_string_unchecked("hour", 4, 4);
v___x_1348_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1337_, v_hour_1340_);
v___x_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = lean_mk_string_unchecked("dayOfMonth", 10, 10);
v___x_1351_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1337_, v_dayOfMonth_1341_);
v___x_1352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1350_);
lean_ctor_set(v___x_1352_, 1, v___x_1351_);
v___x_1353_ = lean_mk_string_unchecked("month", 5, 5);
v___x_1354_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1337_, v_month_1342_);
v___x_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1353_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
v___x_1356_ = lean_mk_string_unchecked("dayOfWeek", 9, 9);
v___x_1357_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1337_, v_dayOfWeek_1343_);
v___x_1358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1356_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = lean_unsigned_to_nat(5u);
v___x_1360_ = lean_mk_empty_array_with_capacity(v___x_1359_);
v___x_1361_ = lean_array_push(v___x_1360_, v___x_1346_);
v___x_1362_ = lean_array_push(v___x_1361_, v___x_1349_);
v___x_1363_ = lean_array_push(v___x_1362_, v___x_1352_);
v___x_1364_ = lean_array_push(v___x_1363_, v___x_1355_);
v___x_1365_ = lean_array_push(v___x_1364_, v___x_1358_);
v___x_1366_ = l_Lasm_JS_Web_Internal_fields(v___x_1365_);
lean_dec_ref(v___x_1365_);
return v___x_1366_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCronSchedule(void){
_start:
{
lean_object* v___x_1367_; lean_object* v___f_1368_; 
v___x_1367_ = l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion;
v___f_1368_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0), 2, 1);
lean_closure_set(v___f_1368_, 0, v___x_1367_);
return v___f_1368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx(lean_object* v_x_1369_){
_start:
{
if (lean_obj_tag(v_x_1369_) == 0)
{
lean_object* v___x_1370_; 
v___x_1370_ = lean_unsigned_to_nat(0u);
return v___x_1370_;
}
else
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_unsigned_to_nat(1u);
return v___x_1371_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx___boxed(lean_object* v_x_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx(v_x_1372_);
lean_dec_ref(v_x_1372_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(lean_object* v_t_1374_, lean_object* v_k_1375_){
_start:
{
lean_object* v_value_1376_; lean_object* v___x_1377_; 
v_value_1376_ = lean_ctor_get(v_t_1374_, 0);
lean_inc_ref(v_value_1376_);
lean_dec_ref(v_t_1374_);
v___x_1377_ = lean_apply_1(v_k_1375_, v_value_1376_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim(lean_object* v_motive_1378_, lean_object* v_ctorIdx_1379_, lean_object* v_t_1380_, lean_object* v_h_1381_, lean_object* v_k_1382_){
_start:
{
lean_object* v___x_1383_; 
v___x_1383_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1380_, v_k_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___boxed(lean_object* v_motive_1384_, lean_object* v_ctorIdx_1385_, lean_object* v_t_1386_, lean_object* v_h_1387_, lean_object* v_k_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim(v_motive_1384_, v_ctorIdx_1385_, v_t_1386_, v_h_1387_, v_k_1388_);
lean_dec(v_ctorIdx_1385_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_domString_elim___redArg(lean_object* v_t_1390_, lean_object* v_domString_1391_){
_start:
{
lean_object* v___x_1392_; 
v___x_1392_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1390_, v_domString_1391_);
return v___x_1392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_domString_elim(lean_object* v_motive_1393_, lean_object* v_t_1394_, lean_object* v_h_1395_, lean_object* v_domString_1396_){
_start:
{
lean_object* v___x_1397_; 
v___x_1397_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1394_, v_domString_1396_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_cronSchedule_elim___redArg(lean_object* v_t_1398_, lean_object* v_cronSchedule_1399_){
_start:
{
lean_object* v___x_1400_; 
v___x_1400_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1398_, v_cronSchedule_1399_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_cronSchedule_elim(lean_object* v_motive_1401_, lean_object* v_t_1402_, lean_object* v_h_1403_, lean_object* v_cronSchedule_1404_){
_start:
{
lean_object* v___x_1405_; 
v___x_1405_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1402_, v_cronSchedule_1404_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule___lam__0(lean_object* v_x_1406_){
_start:
{
if (lean_obj_tag(v_x_1406_) == 0)
{
lean_object* v_value_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1414_; 
v_value_1407_ = lean_ctor_get(v_x_1406_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v_x_1406_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1409_ = v_x_1406_;
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_value_1407_);
lean_dec(v_x_1406_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1412_; 
if (v_isShared_1410_ == 0)
{
lean_ctor_set_tag(v___x_1409_, 4);
v___x_1412_ = v___x_1409_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_value_1407_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
else
{
lean_object* v_value_1415_; lean_object* v_minute_1416_; lean_object* v_hour_1417_; lean_object* v_dayOfMonth_1418_; lean_object* v_month_1419_; lean_object* v_dayOfWeek_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v_value_1415_ = lean_ctor_get(v_x_1406_, 0);
lean_inc_ref(v_value_1415_);
lean_dec_ref_known(v_x_1406_, 1);
v_minute_1416_ = lean_ctor_get(v_value_1415_, 0);
lean_inc(v_minute_1416_);
v_hour_1417_ = lean_ctor_get(v_value_1415_, 1);
lean_inc(v_hour_1417_);
v_dayOfMonth_1418_ = lean_ctor_get(v_value_1415_, 2);
lean_inc(v_dayOfMonth_1418_);
v_month_1419_ = lean_ctor_get(v_value_1415_, 3);
lean_inc(v_month_1419_);
v_dayOfWeek_1420_ = lean_ctor_get(v_value_1415_, 4);
lean_inc(v_dayOfWeek_1420_);
lean_dec_ref(v_value_1415_);
v___x_1421_ = l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion;
v___x_1422_ = lean_mk_string_unchecked("minute", 6, 6);
v___x_1423_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1421_, v_minute_1416_);
v___x_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1422_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
v___x_1425_ = lean_mk_string_unchecked("hour", 4, 4);
v___x_1426_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1421_, v_hour_1417_);
v___x_1427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1425_);
lean_ctor_set(v___x_1427_, 1, v___x_1426_);
v___x_1428_ = lean_mk_string_unchecked("dayOfMonth", 10, 10);
v___x_1429_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1421_, v_dayOfMonth_1418_);
v___x_1430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1428_);
lean_ctor_set(v___x_1430_, 1, v___x_1429_);
v___x_1431_ = lean_mk_string_unchecked("month", 5, 5);
v___x_1432_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1421_, v_month_1419_);
v___x_1433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1431_);
lean_ctor_set(v___x_1433_, 1, v___x_1432_);
v___x_1434_ = lean_mk_string_unchecked("dayOfWeek", 9, 9);
v___x_1435_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1421_, v_dayOfWeek_1420_);
v___x_1436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1434_);
lean_ctor_set(v___x_1436_, 1, v___x_1435_);
v___x_1437_ = lean_unsigned_to_nat(5u);
v___x_1438_ = lean_mk_empty_array_with_capacity(v___x_1437_);
v___x_1439_ = lean_array_push(v___x_1438_, v___x_1424_);
v___x_1440_ = lean_array_push(v___x_1439_, v___x_1427_);
v___x_1441_ = lean_array_push(v___x_1440_, v___x_1430_);
v___x_1442_ = lean_array_push(v___x_1441_, v___x_1433_);
v___x_1443_ = lean_array_push(v___x_1442_, v___x_1436_);
v___x_1444_ = l_Lasm_JS_Web_Internal_fields(v___x_1443_);
lean_dec_ref(v___x_1443_);
return v___x_1444_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule___lam__0(lean_object* v_value_1446_){
_start:
{
lean_object* v___x_1447_; 
v___x_1447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1447_, 0, v_value_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule___lam__0(lean_object* v_value_1449_){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1450_, 0, v_value_1449_);
return v___x_1450_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSCronHandler(void){
_start:
{
lean_object* v___f_1453_; lean_object* v___x_1454_; uint8_t v___x_1455_; lean_object* v___x_1456_; 
v___f_1453_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___boxed), 1, 0);
v___x_1454_ = lean_mk_string_unchecked("Lasm.JS.Deno.CronHandler", 24, 24);
v___x_1455_ = 0;
v___x_1456_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1456_, 0, v___f_1453_);
lean_ctor_set(v___x_1456_, 1, v___x_1454_);
lean_ctor_set_uint8(v___x_1456_, sizeof(void*)*2, v___x_1455_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___lam__1(lean_object* v_f_1457_, lean_object* v___f_1458_, lean_object* v_x_1459_){
_start:
{
lean_object* v___x_1461_; uint8_t v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1461_ = lean_unsigned_to_nat(0u);
v___x_1462_ = 0;
v___x_1463_ = lean_apply_1(v_f_1457_, lean_box(0));
v___x_1464_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1461_, v___x_1462_, v___x_1463_, v___f_1458_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed(lean_object* v_f_1465_, lean_object* v___f_1466_, lean_object* v_x_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_Lasm_JS_Deno_CronHandler_ofFn___lam__1(v_f_1465_, v___f_1466_, v_x_1467_);
lean_dec_ref(v_x_1467_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn(lean_object* v_f_1470_){
_start:
{
lean_object* v___f_1472_; lean_object* v___f_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___f_1472_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___boxed), 2, 0);
v___f_1473_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1473_, 0, v_f_1470_);
lean_closure_set(v___f_1473_, 1, v___f_1472_);
v___x_1474_ = lean_unsigned_to_nat(0u);
v___x_1475_ = l_Lasm_JS_Function_ofFn(v___f_1473_, v___x_1474_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v___x_1477_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_a_1476_);
lean_dec_ref_known(v___x_1475_, 1);
v___x_1477_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_object* v_a_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
lean_inc(v_a_1478_);
lean_dec_ref_known(v___x_1477_, 1);
v___x_1479_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1480_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_1478_, v___x_1479_);
if (lean_obj_tag(v___x_1480_) == 0)
{
lean_object* v_a_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___y_1489_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; uint8_t v___x_1519_; 
v_a_1481_ = lean_ctor_get(v___x_1480_, 0);
lean_inc(v_a_1481_);
lean_dec_ref_known(v___x_1480_, 1);
v___x_1482_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1483_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1476_);
v___x_1484_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1484_, 0, v_a_1476_);
lean_ctor_set(v___x_1484_, 1, v___x_1483_);
v___x_1485_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1486_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1485_);
v___x_1487_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1516_ = lean_nat_to_int(v___x_1474_);
v___x_1517_ = lean_nat_abs(v___x_1516_);
v___x_1518_ = lean_cstr_to_nat("9007199254740991");
v___x_1519_ = lean_nat_dec_le(v___x_1517_, v___x_1518_);
lean_dec(v___x_1517_);
if (v___x_1519_ == 0)
{
lean_object* v___x_1520_; 
v___x_1520_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1516_);
v___y_1489_ = v___x_1520_;
goto v___jp_1488_;
}
else
{
double v___x_1521_; lean_object* v___x_1522_; 
v___x_1521_ = l_Float_ofInt(v___x_1516_);
lean_dec(v___x_1516_);
v___x_1522_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1522_, 0, v___x_1521_);
v___y_1489_ = v___x_1522_;
goto v___jp_1488_;
}
v___jp_1488_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1487_);
lean_ctor_set(v___x_1490_, 1, v___y_1489_);
v___x_1491_ = lean_box(0);
v___x_1492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1490_);
lean_ctor_set(v___x_1492_, 1, v___x_1491_);
v___x_1493_ = l_Lasm_JS_obj(v___x_1492_);
v___x_1494_ = lean_unsigned_to_nat(3u);
v___x_1495_ = lean_mk_empty_array_with_capacity(v___x_1494_);
v___x_1496_ = lean_array_push(v___x_1495_, v___x_1484_);
v___x_1497_ = lean_array_push(v___x_1496_, v___x_1486_);
v___x_1498_ = lean_array_push(v___x_1497_, v___x_1493_);
v___x_1499_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1(v_a_1481_, v___x_1482_, v___x_1498_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1506_ == 0)
{
lean_object* v_unused_1507_; 
v_unused_1507_ = lean_ctor_get(v___x_1499_, 0);
lean_dec(v_unused_1507_);
v___x_1501_ = v___x_1499_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_dec(v___x_1499_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
lean_ctor_set(v___x_1501_, 0, v_a_1476_);
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1476_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
else
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1515_; 
lean_dec(v_a_1476_);
v_a_1508_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1510_ = v___x_1499_;
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1499_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1513_; 
if (v_isShared_1511_ == 0)
{
v___x_1513_ = v___x_1510_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_a_1508_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
}
else
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
lean_dec(v_a_1476_);
v_a_1523_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1525_ = v___x_1480_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1480_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
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
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
else
{
lean_object* v_a_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1538_; 
lean_dec(v_a_1476_);
v_a_1531_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1538_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1533_ = v___x_1477_;
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_a_1531_);
lean_dec(v___x_1477_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1536_; 
if (v_isShared_1534_ == 0)
{
v___x_1536_ = v___x_1533_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v_a_1531_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
}
}
else
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1546_; 
v_a_1539_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1541_ = v___x_1475_;
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1475_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1544_; 
if (v_isShared_1542_ == 0)
{
v___x_1544_ = v___x_1541_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_a_1539_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___boxed(lean_object* v_f_1547_, lean_object* v_a_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_Lasm_JS_Deno_CronHandler_ofFn(v_f_1547_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0(lean_object* v_f_1550_, lean_object* v_x_1551_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = lean_apply_1(v_f_1550_, lean_box(0));
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1561_; 
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1561_ == 0)
{
lean_object* v_unused_1562_; 
v_unused_1562_ = lean_ctor_get(v___x_1553_, 0);
lean_dec(v_unused_1562_);
v___x_1555_ = v___x_1553_;
v_isShared_1556_ = v_isSharedCheck_1561_;
goto v_resetjp_1554_;
}
else
{
lean_dec(v___x_1553_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1561_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1557_; lean_object* v___x_1559_; 
v___x_1557_ = lean_box(0);
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 0, v___x_1557_);
v___x_1559_ = v___x_1555_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v___x_1557_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
else
{
lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
v_a_1563_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1565_ = v___x_1553_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v___x_1553_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
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
return v___x_1568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_1571_, lean_object* v_x_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0(v_f_1571_, v_x_1572_);
lean_dec_ref(v_x_1572_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn(lean_object* v_f_1575_){
_start:
{
lean_object* v___f_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___f_1577_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1577_, 0, v_f_1575_);
v___x_1578_ = lean_unsigned_to_nat(0u);
v___x_1579_ = l_Lasm_JS_Function_ofSyncFn(v___f_1577_, v___x_1578_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v_a_1580_; lean_object* v___x_1581_; 
v_a_1580_ = lean_ctor_get(v___x_1579_, 0);
lean_inc(v_a_1580_);
lean_dec_ref_known(v___x_1579_, 1);
v___x_1581_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref_known(v___x_1581_, 1);
v___x_1583_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1584_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_1582_, v___x_1583_);
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v_a_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___y_1593_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; uint8_t v___x_1623_; 
v_a_1585_ = lean_ctor_get(v___x_1584_, 0);
lean_inc(v_a_1585_);
lean_dec_ref_known(v___x_1584_, 1);
v___x_1586_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1587_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1580_);
v___x_1588_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1588_, 0, v_a_1580_);
lean_ctor_set(v___x_1588_, 1, v___x_1587_);
v___x_1589_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1590_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1589_);
v___x_1591_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1620_ = lean_nat_to_int(v___x_1578_);
v___x_1621_ = lean_nat_abs(v___x_1620_);
v___x_1622_ = lean_cstr_to_nat("9007199254740991");
v___x_1623_ = lean_nat_dec_le(v___x_1621_, v___x_1622_);
lean_dec(v___x_1621_);
if (v___x_1623_ == 0)
{
lean_object* v___x_1624_; 
v___x_1624_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1620_);
v___y_1593_ = v___x_1624_;
goto v___jp_1592_;
}
else
{
double v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = l_Float_ofInt(v___x_1620_);
lean_dec(v___x_1620_);
v___x_1626_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1626_, 0, v___x_1625_);
v___y_1593_ = v___x_1626_;
goto v___jp_1592_;
}
v___jp_1592_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v___x_1594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1591_);
lean_ctor_set(v___x_1594_, 1, v___y_1593_);
v___x_1595_ = lean_box(0);
v___x_1596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1594_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = l_Lasm_JS_obj(v___x_1596_);
v___x_1598_ = lean_unsigned_to_nat(3u);
v___x_1599_ = lean_mk_empty_array_with_capacity(v___x_1598_);
v___x_1600_ = lean_array_push(v___x_1599_, v___x_1588_);
v___x_1601_ = lean_array_push(v___x_1600_, v___x_1590_);
v___x_1602_ = lean_array_push(v___x_1601_, v___x_1597_);
v___x_1603_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1(v_a_1585_, v___x_1586_, v___x_1602_);
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1610_; 
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1610_ == 0)
{
lean_object* v_unused_1611_; 
v_unused_1611_ = lean_ctor_get(v___x_1603_, 0);
lean_dec(v_unused_1611_);
v___x_1605_ = v___x_1603_;
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
else
{
lean_dec(v___x_1603_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1608_; 
if (v_isShared_1606_ == 0)
{
lean_ctor_set(v___x_1605_, 0, v_a_1580_);
v___x_1608_ = v___x_1605_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1580_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
else
{
lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1619_; 
lean_dec(v_a_1580_);
v_a_1612_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1614_ = v___x_1603_;
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v___x_1603_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1617_; 
if (v_isShared_1615_ == 0)
{
v___x_1617_ = v___x_1614_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1612_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_dec(v_a_1580_);
v_a_1627_ = lean_ctor_get(v___x_1584_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1584_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1584_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1584_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
else
{
lean_object* v_a_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1642_; 
lean_dec(v_a_1580_);
v_a_1635_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1642_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1637_ = v___x_1581_;
v_isShared_1638_ = v_isSharedCheck_1642_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_a_1635_);
lean_dec(v___x_1581_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1642_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___x_1640_; 
if (v_isShared_1638_ == 0)
{
v___x_1640_ = v___x_1637_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v_a_1635_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
}
else
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1650_; 
v_a_1643_ = lean_ctor_get(v___x_1579_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1645_ = v___x_1579_;
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1579_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1648_; 
if (v_isShared_1646_ == 0)
{
v___x_1648_ = v___x_1645_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_a_1643_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___boxed(lean_object* v_f_1651_, lean_object* v_a_1652_){
_start:
{
lean_object* v_res_1653_; 
v_res_1653_ = l_Lasm_JS_Deno_CronHandler_ofSyncFn(v_f_1651_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0(lean_object* v___x_1654_, lean_object* v___f_1655_, lean_object* v_d_1656_){
_start:
{
lean_object* v_backoffSchedule_1657_; lean_object* v_signal_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1675_; 
v_backoffSchedule_1657_ = lean_ctor_get(v_d_1656_, 0);
v_signal_1658_ = lean_ctor_get(v_d_1656_, 1);
v_isSharedCheck_1675_ = !lean_is_exclusive(v_d_1656_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1660_ = v_d_1656_;
v_isShared_1661_ = v_isSharedCheck_1675_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_signal_1658_);
lean_inc(v_backoffSchedule_1657_);
lean_dec(v_d_1656_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1675_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1665_; 
v___x_1662_ = lean_mk_string_unchecked("backoffSchedule", 15, 15);
v___x_1663_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_1654_, v_backoffSchedule_1657_);
if (v_isShared_1661_ == 0)
{
lean_ctor_set(v___x_1660_, 1, v___x_1663_);
lean_ctor_set(v___x_1660_, 0, v___x_1662_);
v___x_1665_ = v___x_1660_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v___x_1662_);
lean_ctor_set(v_reuseFailAlloc_1674_, 1, v___x_1663_);
v___x_1665_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1666_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1667_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1655_, v_signal_1658_);
v___x_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1666_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
v___x_1669_ = lean_unsigned_to_nat(2u);
v___x_1670_ = lean_mk_empty_array_with_capacity(v___x_1669_);
v___x_1671_ = lean_array_push(v___x_1670_, v___x_1665_);
v___x_1672_ = lean_array_push(v___x_1671_, v___x_1668_);
v___x_1673_ = l_Lasm_JS_Web_Internal_fields(v___x_1672_);
lean_dec_ref(v___x_1672_);
return v___x_1673_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCronWithOptionsOptions(void){
_start:
{
lean_object* v___f_1676_; lean_object* v___x_1677_; lean_object* v___f_1678_; lean_object* v___f_1679_; 
v___f_1676_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___x_1677_ = l_Lasm_JS_instToJSArray___redArg(v___f_1676_);
v___f_1678_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1679_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0), 3, 2);
lean_closure_set(v___f_1679_, 0, v___x_1677_);
lean_closure_set(v___f_1679_, 1, v___f_1678_);
return v___f_1679_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler(void){
_start:
{
lean_object* v___f_1681_; lean_object* v___x_1682_; uint8_t v___x_1683_; lean_object* v___x_1684_; 
v___f_1681_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___boxed), 1, 0);
v___x_1682_ = lean_mk_string_unchecked("Lasm.JS.Deno.CronWithOptionsHandler", 35, 35);
v___x_1683_ = 0;
v___x_1684_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1684_, 0, v___f_1681_);
lean_ctor_set(v___x_1684_, 1, v___x_1682_);
lean_ctor_set_uint8(v___x_1684_, sizeof(void*)*2, v___x_1683_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn(lean_object* v_f_1685_){
_start:
{
lean_object* v___f_1687_; lean_object* v___f_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___f_1687_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___boxed), 2, 0);
v___f_1688_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1688_, 0, v_f_1685_);
lean_closure_set(v___f_1688_, 1, v___f_1687_);
v___x_1689_ = lean_unsigned_to_nat(0u);
v___x_1690_ = l_Lasm_JS_Function_ofFn(v___f_1688_, v___x_1689_);
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1692_; 
v_a_1691_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v___x_1690_, 1);
v___x_1692_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
lean_inc(v_a_1693_);
lean_dec_ref_known(v___x_1692_, 1);
v___x_1694_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1695_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_1693_, v___x_1694_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___y_1704_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1696_);
lean_dec_ref_known(v___x_1695_, 1);
v___x_1697_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1698_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1691_);
v___x_1699_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1699_, 0, v_a_1691_);
lean_ctor_set(v___x_1699_, 1, v___x_1698_);
v___x_1700_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1701_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1700_);
v___x_1702_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1731_ = lean_nat_to_int(v___x_1689_);
v___x_1732_ = lean_nat_abs(v___x_1731_);
v___x_1733_ = lean_cstr_to_nat("9007199254740991");
v___x_1734_ = lean_nat_dec_le(v___x_1732_, v___x_1733_);
lean_dec(v___x_1732_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1735_; 
v___x_1735_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1731_);
v___y_1704_ = v___x_1735_;
goto v___jp_1703_;
}
else
{
double v___x_1736_; lean_object* v___x_1737_; 
v___x_1736_ = l_Float_ofInt(v___x_1731_);
lean_dec(v___x_1731_);
v___x_1737_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1737_, 0, v___x_1736_);
v___y_1704_ = v___x_1737_;
goto v___jp_1703_;
}
v___jp_1703_:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1702_);
lean_ctor_set(v___x_1705_, 1, v___y_1704_);
v___x_1706_ = lean_box(0);
v___x_1707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1705_);
lean_ctor_set(v___x_1707_, 1, v___x_1706_);
v___x_1708_ = l_Lasm_JS_obj(v___x_1707_);
v___x_1709_ = lean_unsigned_to_nat(3u);
v___x_1710_ = lean_mk_empty_array_with_capacity(v___x_1709_);
v___x_1711_ = lean_array_push(v___x_1710_, v___x_1699_);
v___x_1712_ = lean_array_push(v___x_1711_, v___x_1701_);
v___x_1713_ = lean_array_push(v___x_1712_, v___x_1708_);
v___x_1714_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1(v_a_1696_, v___x_1697_, v___x_1713_);
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1721_; 
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1721_ == 0)
{
lean_object* v_unused_1722_; 
v_unused_1722_ = lean_ctor_get(v___x_1714_, 0);
lean_dec(v_unused_1722_);
v___x_1716_ = v___x_1714_;
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
else
{
lean_dec(v___x_1714_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1719_; 
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 0, v_a_1691_);
v___x_1719_ = v___x_1716_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_a_1691_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
else
{
lean_object* v_a_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1730_; 
lean_dec(v_a_1691_);
v_a_1723_ = lean_ctor_get(v___x_1714_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1725_ = v___x_1714_;
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_a_1723_);
lean_dec(v___x_1714_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1726_ == 0)
{
v___x_1728_ = v___x_1725_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_a_1723_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
}
}
}
else
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1745_; 
lean_dec(v_a_1691_);
v_a_1738_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1740_ = v___x_1695_;
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1695_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1741_ == 0)
{
v___x_1743_ = v___x_1740_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1738_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
lean_dec(v_a_1691_);
v_a_1746_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1692_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1692_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
else
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1761_; 
v_a_1754_ = lean_ctor_get(v___x_1690_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1690_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1690_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_a_1754_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn___boxed(lean_object* v_f_1762_, lean_object* v_a_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn(v_f_1762_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn(lean_object* v_f_1765_){
_start:
{
lean_object* v___f_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___f_1767_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1767_, 0, v_f_1765_);
v___x_1768_ = lean_unsigned_to_nat(0u);
v___x_1769_ = l_Lasm_JS_Function_ofSyncFn(v___f_1767_, v___x_1768_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1771_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_a_1770_);
lean_dec_ref_known(v___x_1769_, 1);
v___x_1771_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
lean_dec_ref_known(v___x_1771_, 1);
v___x_1773_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1774_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_1772_, v___x_1773_);
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v_a_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___y_1783_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; uint8_t v___x_1813_; 
v_a_1775_ = lean_ctor_get(v___x_1774_, 0);
lean_inc(v_a_1775_);
lean_dec_ref_known(v___x_1774_, 1);
v___x_1776_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1777_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1770_);
v___x_1778_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1778_, 0, v_a_1770_);
lean_ctor_set(v___x_1778_, 1, v___x_1777_);
v___x_1779_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1780_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1779_);
v___x_1781_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1810_ = lean_nat_to_int(v___x_1768_);
v___x_1811_ = lean_nat_abs(v___x_1810_);
v___x_1812_ = lean_cstr_to_nat("9007199254740991");
v___x_1813_ = lean_nat_dec_le(v___x_1811_, v___x_1812_);
lean_dec(v___x_1811_);
if (v___x_1813_ == 0)
{
lean_object* v___x_1814_; 
v___x_1814_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1810_);
v___y_1783_ = v___x_1814_;
goto v___jp_1782_;
}
else
{
double v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = l_Float_ofInt(v___x_1810_);
lean_dec(v___x_1810_);
v___x_1816_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1816_, 0, v___x_1815_);
v___y_1783_ = v___x_1816_;
goto v___jp_1782_;
}
v___jp_1782_:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1784_, 0, v___x_1781_);
lean_ctor_set(v___x_1784_, 1, v___y_1783_);
v___x_1785_ = lean_box(0);
v___x_1786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1784_);
lean_ctor_set(v___x_1786_, 1, v___x_1785_);
v___x_1787_ = l_Lasm_JS_obj(v___x_1786_);
v___x_1788_ = lean_unsigned_to_nat(3u);
v___x_1789_ = lean_mk_empty_array_with_capacity(v___x_1788_);
v___x_1790_ = lean_array_push(v___x_1789_, v___x_1778_);
v___x_1791_ = lean_array_push(v___x_1790_, v___x_1780_);
v___x_1792_ = lean_array_push(v___x_1791_, v___x_1787_);
v___x_1793_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1(v_a_1775_, v___x_1776_, v___x_1792_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1800_ == 0)
{
lean_object* v_unused_1801_; 
v_unused_1801_ = lean_ctor_get(v___x_1793_, 0);
lean_dec(v_unused_1801_);
v___x_1795_ = v___x_1793_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_dec(v___x_1793_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
lean_ctor_set(v___x_1795_, 0, v_a_1770_);
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1770_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
else
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1809_; 
lean_dec(v_a_1770_);
v_a_1802_ = lean_ctor_get(v___x_1793_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1804_ = v___x_1793_;
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1793_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
}
}
else
{
lean_object* v_a_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1824_; 
lean_dec(v_a_1770_);
v_a_1817_ = lean_ctor_get(v___x_1774_, 0);
v_isSharedCheck_1824_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1819_ = v___x_1774_;
v_isShared_1820_ = v_isSharedCheck_1824_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_a_1817_);
lean_dec(v___x_1774_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1824_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v___x_1822_; 
if (v_isShared_1820_ == 0)
{
v___x_1822_ = v___x_1819_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v_a_1817_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
}
}
}
}
else
{
lean_object* v_a_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1832_; 
lean_dec(v_a_1770_);
v_a_1825_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1832_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1832_ == 0)
{
v___x_1827_ = v___x_1771_;
v_isShared_1828_ = v_isSharedCheck_1832_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_a_1825_);
lean_dec(v___x_1771_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1832_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
lean_object* v___x_1830_; 
if (v_isShared_1828_ == 0)
{
v___x_1830_ = v___x_1827_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_a_1825_);
v___x_1830_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
return v___x_1830_;
}
}
}
}
else
{
lean_object* v_a_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1840_; 
v_a_1833_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1835_ = v___x_1769_;
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_a_1833_);
lean_dec(v___x_1769_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1838_; 
if (v_isShared_1836_ == 0)
{
v___x_1838_ = v___x_1835_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1833_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn___boxed(lean_object* v_f_1841_, lean_object* v_a_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn(v_f_1841_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(lean_object* v_f_1844_, lean_object* v_args_1845_, lean_object* v_this_1846_){
_start:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; uint8_t v___x_1850_; uint64_t v___x_1851_; uint64_t v___x_1852_; lean_object* v___x_1853_; 
v___x_1848_ = lean_mk_string_unchecked("", 0, 0);
v___x_1849_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1849_, 0, v_f_1844_);
lean_ctor_set(v___x_1849_, 1, v___x_1848_);
v___x_1850_ = 0;
v___x_1851_ = 0ULL;
v___x_1852_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1_spec__2(v___x_1850_, v___x_1851_);
v___x_1853_ = l_Lasm_JS_Value_invokeRaw(v___x_1849_, v_this_1846_, v_args_1845_, v___x_1852_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_a_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v_a_1854_ = lean_ctor_get(v___x_1853_, 0);
lean_inc(v_a_1854_);
lean_dec_ref_known(v___x_1853_, 1);
v___x_1855_ = lean_mk_string_unchecked("call", 4, 4);
v___x_1856_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1855_, v_a_1854_);
lean_dec(v_a_1854_);
lean_dec_ref(v___x_1855_);
return v___x_1856_;
}
else
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1864_; 
v_a_1857_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1859_ = v___x_1853_;
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1853_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1857_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___boxed(lean_object* v_f_1865_, lean_object* v_args_1866_, lean_object* v_this_1867_, lean_object* v_a_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(v_f_1865_, v_args_1866_, v_this_1867_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(lean_object* v_o_1870_, lean_object* v_key_1871_){
_start:
{
lean_object* v___x_1873_; lean_object* v_k_1874_; lean_object* v___x_1875_; 
v___x_1873_ = lean_mk_string_unchecked("", 0, 0);
lean_inc_ref(v___x_1873_);
v_k_1874_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_k_1874_, 0, v_key_1871_);
lean_ctor_set(v_k_1874_, 1, v___x_1873_);
v___x_1875_ = l_Lasm_JS_Wire_encodeIO(v_k_1874_);
if (lean_obj_tag(v___x_1875_) == 0)
{
lean_object* v_a_1876_; uint32_t v___x_1877_; uint32_t v___x_1878_; uint8_t v___x_1879_; uint64_t v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
v_a_1876_ = lean_ctor_get(v___x_1875_, 0);
lean_inc(v_a_1876_);
lean_dec_ref_known(v___x_1875_, 1);
v___x_1877_ = 203;
v___x_1878_ = lasm_js_value_handle(v_o_1870_);
v___x_1879_ = 1;
v___x_1880_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1879_);
v___x_1881_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1881_, 0, v_o_1870_);
lean_ctor_set(v___x_1881_, 1, v___x_1873_);
v___x_1882_ = lean_unsigned_to_nat(2u);
v___x_1883_ = lean_mk_empty_array_with_capacity(v___x_1882_);
lean_inc_ref(v_k_1874_);
v___x_1884_ = lean_array_push(v___x_1883_, v_k_1874_);
v___x_1885_ = lean_array_push(v___x_1884_, v___x_1881_);
v___x_1886_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1885_);
v___x_1887_ = lasm_js_call(v___x_1877_, v___x_1878_, v___x_1880_, v_a_1876_, v___x_1886_);
lean_dec_ref_known(v___x_1886_, 1);
lean_dec(v_a_1876_);
if (lean_obj_tag(v___x_1887_) == 0)
{
lean_object* v_a_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; 
v_a_1888_ = lean_ctor_get(v___x_1887_, 0);
lean_inc(v_a_1888_);
lean_dec_ref_known(v___x_1887_, 1);
v___x_1889_ = lean_mk_string_unchecked("get ", 4, 4);
v___x_1890_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1874_);
v___x_1891_ = lean_string_append(v___x_1889_, v___x_1890_);
lean_dec_ref(v___x_1890_);
v___x_1892_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_1891_, v_a_1888_);
lean_dec(v_a_1888_);
lean_dec_ref(v___x_1891_);
return v___x_1892_;
}
else
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
lean_dec_ref_known(v_k_1874_, 2);
v_a_1893_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v___x_1887_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1887_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_a_1893_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
lean_dec_ref_known(v_k_1874_, 2);
lean_dec_ref(v___x_1873_);
lean_dec(v_o_1870_);
v_a_1901_ = lean_ctor_get(v___x_1875_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1875_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1875_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1875_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___boxed(lean_object* v_o_1909_, lean_object* v_key_1910_, lean_object* v_a_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(v_o_1909_, v_key_1910_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_iterator(lean_object* v_self_1913_){
_start:
{
lean_object* v___x_1915_; 
v___x_1915_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1916_);
lean_dec_ref_known(v___x_1915_, 1);
v___x_1917_ = lean_mk_string_unchecked("Symbol", 6, 6);
v___x_1918_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_1916_, v___x_1917_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_object* v_a_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v_a_1919_ = lean_ctor_get(v___x_1918_, 0);
lean_inc(v_a_1919_);
lean_dec_ref_known(v___x_1918_, 1);
v___x_1920_ = lean_mk_string_unchecked("asyncIterator", 13, 13);
v___x_1921_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_1919_, v___x_1920_);
if (lean_obj_tag(v___x_1921_) == 0)
{
lean_object* v_a_1922_; lean_object* v___x_1923_; 
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
lean_inc(v_a_1922_);
lean_dec_ref_known(v___x_1921_, 1);
lean_inc(v_self_1913_);
v___x_1923_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(v_self_1913_, v_a_1922_);
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_object* v_a_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
lean_inc(v_a_1924_);
lean_dec_ref_known(v___x_1923_, 1);
v___x_1925_ = lean_unsigned_to_nat(0u);
v___x_1926_ = lean_mk_empty_array_with_capacity(v___x_1925_);
v___x_1927_ = lean_mk_string_unchecked("", 0, 0);
v___x_1928_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1928_, 0, v_self_1913_);
lean_ctor_set(v___x_1928_, 1, v___x_1927_);
v___x_1929_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(v_a_1924_, v___x_1926_, v___x_1928_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1929_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1929_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_a_1930_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
else
{
lean_object* v_a_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1945_; 
v_a_1938_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1940_ = v___x_1929_;
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_a_1938_);
lean_dec(v___x_1929_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1943_; 
if (v_isShared_1941_ == 0)
{
v___x_1943_ = v___x_1940_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1938_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
}
else
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1953_; 
lean_dec(v_self_1913_);
v_a_1946_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1948_ = v___x_1923_;
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v___x_1923_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1951_; 
if (v_isShared_1949_ == 0)
{
v___x_1951_ = v___x_1948_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1946_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec(v_self_1913_);
v_a_1954_ = lean_ctor_get(v___x_1921_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1921_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1921_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
else
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1969_; 
lean_dec(v_self_1913_);
v_a_1962_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1964_ = v___x_1918_;
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1918_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1967_; 
if (v_isShared_1965_ == 0)
{
v___x_1967_ = v___x_1964_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_a_1962_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
}
else
{
lean_object* v_a_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1977_; 
lean_dec(v_self_1913_);
v_a_1970_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1972_ = v___x_1915_;
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_a_1970_);
lean_dec(v___x_1915_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1977_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___x_1975_; 
if (v_isShared_1973_ == 0)
{
v___x_1975_ = v___x_1972_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_a_1970_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
return v___x_1975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_iterator___boxed(lean_object* v_self_1978_, lean_object* v_a_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Lasm_JS_Deno_KvListIterator_iterator(v_self_1978_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0(lean_object* v_x_1981_){
_start:
{
if (lean_obj_tag(v_x_1981_) == 0)
{
lean_object* v_a_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1991_; 
v_a_1983_ = lean_ctor_get(v_x_1981_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v_x_1981_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1985_ = v_x_1981_;
v_isShared_1986_ = v_isSharedCheck_1991_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_a_1983_);
lean_dec(v_x_1981_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1991_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1988_; 
if (v_isShared_1986_ == 0)
{
v___x_1988_ = v___x_1985_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_a_1983_);
v___x_1988_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
lean_object* v___x_1989_; 
v___x_1989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1989_, 0, v___x_1988_);
return v___x_1989_;
}
}
}
else
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2001_; 
v_a_1992_ = lean_ctor_get(v_x_1981_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v_x_1981_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1994_ = v_x_1981_;
v_isShared_1995_ = v_isSharedCheck_2001_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v_x_1981_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2001_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1996_; lean_object* v___x_1998_; 
v___x_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1996_, 0, v_a_1992_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v___x_1996_);
v___x_1998_ = v___x_1994_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1996_);
v___x_1998_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
lean_object* v___x_1999_; 
v___x_1999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1999_, 0, v___x_1998_);
return v___x_1999_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0___boxed(lean_object* v_x_2002_, lean_object* v___y_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0(v_x_2002_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__5(lean_object* v_d_2005_, lean_object* v_key_2006_){
_start:
{
if (lean_obj_tag(v_d_2005_) == 8)
{
lean_object* v___x_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2014_; 
v___x_2007_ = l_Lasm_JS_Data_field(v_d_2005_, v_key_2006_);
v_isSharedCheck_2014_ = !lean_is_exclusive(v_d_2005_);
if (v_isSharedCheck_2014_ == 0)
{
lean_object* v_unused_2015_; 
v_unused_2015_ = lean_ctor_get(v_d_2005_, 0);
lean_dec(v_unused_2015_);
v___x_2009_ = v_d_2005_;
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
else
{
lean_dec(v_d_2005_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2010_ == 0)
{
lean_ctor_set_tag(v___x_2009_, 1);
lean_ctor_set(v___x_2009_, 0, v___x_2007_);
v___x_2012_ = v___x_2009_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2007_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
else
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
lean_dec(v_d_2005_);
v___x_2016_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2016_);
return v___x_2017_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_d_2018_, lean_object* v_key_2019_){
_start:
{
lean_object* v_res_2020_; 
v_res_2020_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__5(v_d_2018_, v_key_2019_);
lean_dec_ref(v_key_2019_);
return v_res_2020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__6(lean_object* v_d_2021_, lean_object* v_key_2022_){
_start:
{
if (lean_obj_tag(v_d_2021_) == 8)
{
lean_object* v___x_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2057_; 
v___x_2023_ = l_Lasm_JS_Data_field(v_d_2021_, v_key_2022_);
v_isSharedCheck_2057_ = !lean_is_exclusive(v_d_2021_);
if (v_isSharedCheck_2057_ == 0)
{
lean_object* v_unused_2058_; 
v_unused_2058_ = lean_ctor_get(v_d_2021_, 0);
lean_dec(v_unused_2058_);
v___x_2025_ = v_d_2021_;
v_isShared_2026_ = v_isSharedCheck_2057_;
goto v_resetjp_2024_;
}
else
{
lean_dec(v_d_2021_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2057_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
if (lean_obj_tag(v___x_2023_) == 4)
{
lean_object* v_s_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2034_; 
lean_del_object(v___x_2025_);
v_s_2027_ = lean_ctor_get(v___x_2023_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___x_2023_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2029_ = v___x_2023_;
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_s_2027_);
lean_dec(v___x_2023_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2032_; 
if (v_isShared_2030_ == 0)
{
lean_ctor_set_tag(v___x_2029_, 1);
v___x_2032_ = v___x_2029_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_s_2027_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
return v___x_2032_;
}
}
}
else
{
lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; uint8_t v___x_2048_; 
v___x_2035_ = lean_mk_string_unchecked("", 0, 0);
v___x_2036_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_2037_ = lean_string_append(v___x_2036_, v_key_2022_);
v___x_2038_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_2039_ = lean_string_append(v___x_2037_, v___x_2038_);
lean_dec_ref(v___x_2038_);
v___x_2040_ = lean_mk_string_unchecked("String", 6, 6);
v___x_2041_ = lean_string_append(v___x_2039_, v___x_2040_);
lean_dec_ref(v___x_2040_);
v___x_2042_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_2043_ = lean_string_append(v___x_2041_, v___x_2042_);
lean_dec_ref(v___x_2042_);
v___x_2044_ = l_Lasm_JS_Data_describe(v___x_2023_);
v___x_2045_ = lean_string_append(v___x_2043_, v___x_2044_);
lean_dec_ref(v___x_2044_);
v___x_2046_ = lean_string_utf8_byte_size(v___x_2035_);
lean_dec_ref(v___x_2035_);
v___x_2047_ = lean_unsigned_to_nat(0u);
v___x_2048_ = lean_nat_dec_eq(v___x_2046_, v___x_2047_);
if (v___x_2048_ == 0)
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2052_; 
v___x_2049_ = lean_mk_string_unchecked(" ()", 3, 3);
v___x_2050_ = lean_string_append(v___x_2045_, v___x_2049_);
lean_dec_ref(v___x_2049_);
if (v_isShared_2026_ == 0)
{
lean_ctor_set_tag(v___x_2025_, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2050_);
v___x_2052_ = v___x_2025_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v___x_2050_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
else
{
lean_object* v___x_2055_; 
if (v_isShared_2026_ == 0)
{
lean_ctor_set_tag(v___x_2025_, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2045_);
v___x_2055_ = v___x_2025_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v___x_2045_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
}
}
else
{
lean_object* v___x_2059_; lean_object* v___x_2060_; 
lean_dec(v_d_2021_);
v___x_2059_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2059_);
return v___x_2060_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__6___boxed(lean_object* v_d_2061_, lean_object* v_key_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__6(v_d_2061_, v_key_2062_);
lean_dec_ref(v_key_2062_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4_spec__6(size_t v_sz_2064_, size_t v_i_2065_, lean_object* v_bs_2066_){
_start:
{
uint8_t v___x_2067_; 
v___x_2067_ = lean_usize_dec_lt(v_i_2065_, v_sz_2064_);
if (v___x_2067_ == 0)
{
lean_object* v___x_2068_; 
v___x_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2068_, 0, v_bs_2066_);
return v___x_2068_;
}
else
{
lean_object* v_v_2069_; lean_object* v___x_2070_; lean_object* v_bs_x27_2071_; lean_object* v_a_2073_; 
v_v_2069_ = lean_array_uget(v_bs_2066_, v_i_2065_);
v___x_2070_ = lean_unsigned_to_nat(0u);
v_bs_x27_2071_ = lean_array_uset(v_bs_2066_, v_i_2065_, v___x_2070_);
switch(lean_obj_tag(v_v_2069_))
{
case 6:
{
lean_object* v_b_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
v_b_2078_ = lean_ctor_get(v_v_2069_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v_v_2069_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2080_ = v_v_2069_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_b_2078_);
lean_dec(v_v_2069_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
lean_ctor_set_tag(v___x_2080_, 0);
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_b_2078_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
v_a_2073_ = v___x_2083_;
goto v___jp_2072_;
}
}
}
case 4:
{
lean_object* v_s_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
v_s_2086_ = lean_ctor_get(v_v_2069_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v_v_2069_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v_v_2069_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_s_2086_);
lean_dec(v_v_2069_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
lean_ctor_set_tag(v___x_2088_, 1);
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_s_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
v_a_2073_ = v___x_2091_;
goto v___jp_2072_;
}
}
}
case 3:
{
double v_n_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2101_; 
v_n_2094_ = lean_ctor_get_float(v_v_2069_, 0);
v_isSharedCheck_2101_ = !lean_is_exclusive(v_v_2069_);
if (v_isSharedCheck_2101_ == 0)
{
v___x_2096_ = v_v_2069_;
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
else
{
lean_dec(v_v_2069_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2099_; 
if (v_isShared_2097_ == 0)
{
lean_ctor_set_tag(v___x_2096_, 2);
v___x_2099_ = v___x_2096_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(2, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2100_, 0, v_n_2094_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
v_a_2073_ = v___x_2099_;
goto v___jp_2072_;
}
}
}
case 5:
{
lean_object* v_i_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2109_; 
v_i_2102_ = lean_ctor_get(v_v_2069_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v_v_2069_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2104_ = v_v_2069_;
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_i_2102_);
lean_dec(v_v_2069_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2107_; 
if (v_isShared_2105_ == 0)
{
lean_ctor_set_tag(v___x_2104_, 3);
v___x_2107_ = v___x_2104_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v_i_2102_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
v_a_2073_ = v___x_2107_;
goto v___jp_2072_;
}
}
}
case 2:
{
uint8_t v_b_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2117_; 
v_b_2110_ = lean_ctor_get_uint8(v_v_2069_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v_v_2069_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2112_ = v_v_2069_;
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
else
{
lean_dec(v_v_2069_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2115_; 
if (v_isShared_2113_ == 0)
{
lean_ctor_set_tag(v___x_2112_, 4);
v___x_2115_ = v___x_2112_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(4, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_2116_, 0, v_b_2110_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
v_a_2073_ = v___x_2115_;
goto v___jp_2072_;
}
}
}
default: 
{
lean_object* v___x_2118_; lean_object* v___x_2119_; 
lean_dec_ref(v_bs_x27_2071_);
lean_dec(v_v_2069_);
v___x_2118_ = lean_mk_string_unchecked("", 0, 0);
v___x_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
return v___x_2119_;
}
}
v___jp_2072_:
{
size_t v___x_2074_; size_t v___x_2075_; lean_object* v___x_2076_; 
v___x_2074_ = ((size_t)1ULL);
v___x_2075_ = lean_usize_add(v_i_2065_, v___x_2074_);
v___x_2076_ = lean_array_uset(v_bs_x27_2071_, v_i_2065_, v_a_2073_);
v_i_2065_ = v___x_2075_;
v_bs_2066_ = v___x_2076_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_sz_2120_, lean_object* v_i_2121_, lean_object* v_bs_2122_){
_start:
{
size_t v_sz_boxed_2123_; size_t v_i_boxed_2124_; lean_object* v_res_2125_; 
v_sz_boxed_2123_ = lean_unbox_usize(v_sz_2120_);
lean_dec(v_sz_2120_);
v_i_boxed_2124_ = lean_unbox_usize(v_i_2121_);
lean_dec(v_i_2121_);
v_res_2125_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4_spec__6(v_sz_boxed_2123_, v_i_boxed_2124_, v_bs_2122_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(lean_object* v_d_2126_, lean_object* v_key_2127_){
_start:
{
if (lean_obj_tag(v_d_2126_) == 8)
{
lean_object* v___x_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2172_; 
v___x_2128_ = l_Lasm_JS_Data_field(v_d_2126_, v_key_2127_);
v_isSharedCheck_2172_ = !lean_is_exclusive(v_d_2126_);
if (v_isSharedCheck_2172_ == 0)
{
lean_object* v_unused_2173_; 
v_unused_2173_ = lean_ctor_get(v_d_2126_, 0);
lean_dec(v_unused_2173_);
v___x_2130_ = v_d_2126_;
v_isShared_2131_ = v_isSharedCheck_2172_;
goto v_resetjp_2129_;
}
else
{
lean_dec(v_d_2126_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2172_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v_a_2133_; 
if (lean_obj_tag(v___x_2128_) == 7)
{
lean_object* v_items_2158_; size_t v_sz_2159_; size_t v___x_2160_; lean_object* v___x_2161_; 
v_items_2158_ = lean_ctor_get(v___x_2128_, 0);
lean_inc_ref(v_items_2158_);
v_sz_2159_ = lean_array_size(v_items_2158_);
v___x_2160_ = ((size_t)0ULL);
v___x_2161_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4_spec__6(v_sz_2159_, v___x_2160_, v_items_2158_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; uint8_t v___x_2166_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_a_2162_);
lean_dec_ref_known(v___x_2161_, 1);
v___x_2163_ = lean_mk_string_unchecked("an element is not Lasm.JS.Deno.KvKeyPart", 40, 40);
v___x_2164_ = lean_string_utf8_byte_size(v_a_2162_);
v___x_2165_ = lean_unsigned_to_nat(0u);
v___x_2166_ = lean_nat_dec_eq(v___x_2164_, v___x_2165_);
if (v___x_2166_ == 0)
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2167_ = lean_mk_string_unchecked(": ", 2, 2);
v___x_2168_ = lean_string_append(v___x_2167_, v_a_2162_);
lean_dec(v_a_2162_);
v___x_2169_ = lean_string_append(v___x_2163_, v___x_2168_);
lean_dec_ref(v___x_2168_);
v_a_2133_ = v___x_2169_;
goto v___jp_2132_;
}
else
{
lean_dec(v_a_2162_);
v_a_2133_ = v___x_2163_;
goto v___jp_2132_;
}
}
else
{
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2170_; 
v_a_2170_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_a_2170_);
lean_dec_ref_known(v___x_2161_, 1);
v_a_2133_ = v_a_2170_;
goto v___jp_2132_;
}
else
{
lean_dec_ref_known(v___x_2128_, 1);
lean_del_object(v___x_2130_);
return v___x_2161_;
}
}
}
else
{
lean_object* v___x_2171_; 
v___x_2171_ = lean_mk_string_unchecked("", 0, 0);
v_a_2133_ = v___x_2171_;
goto v___jp_2132_;
}
v___jp_2132_:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; uint8_t v___x_2146_; 
v___x_2134_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_2135_ = lean_string_append(v___x_2134_, v_key_2127_);
v___x_2136_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_2137_ = lean_string_append(v___x_2135_, v___x_2136_);
lean_dec_ref(v___x_2136_);
v___x_2138_ = lean_mk_string_unchecked("Array (Lasm.JS.Deno.KvKeyPart)", 30, 30);
v___x_2139_ = lean_string_append(v___x_2137_, v___x_2138_);
lean_dec_ref(v___x_2138_);
v___x_2140_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_2141_ = lean_string_append(v___x_2139_, v___x_2140_);
lean_dec_ref(v___x_2140_);
v___x_2142_ = l_Lasm_JS_Data_describe(v___x_2128_);
v___x_2143_ = lean_string_append(v___x_2141_, v___x_2142_);
lean_dec_ref(v___x_2142_);
v___x_2144_ = lean_string_utf8_byte_size(v_a_2133_);
v___x_2145_ = lean_unsigned_to_nat(0u);
v___x_2146_ = lean_nat_dec_eq(v___x_2144_, v___x_2145_);
if (v___x_2146_ == 0)
{
lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2153_; 
v___x_2147_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_2148_ = lean_string_append(v___x_2147_, v_a_2133_);
lean_dec_ref(v_a_2133_);
v___x_2149_ = lean_mk_string_unchecked(")", 1, 1);
v___x_2150_ = lean_string_append(v___x_2148_, v___x_2149_);
lean_dec_ref(v___x_2149_);
v___x_2151_ = lean_string_append(v___x_2143_, v___x_2150_);
lean_dec_ref(v___x_2150_);
if (v_isShared_2131_ == 0)
{
lean_ctor_set_tag(v___x_2130_, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2151_);
v___x_2153_ = v___x_2130_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v___x_2151_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
return v___x_2153_;
}
}
else
{
lean_object* v___x_2156_; 
lean_dec_ref(v_a_2133_);
if (v_isShared_2131_ == 0)
{
lean_ctor_set_tag(v___x_2130_, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2143_);
v___x_2156_ = v___x_2130_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v___x_2143_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
}
else
{
lean_object* v___x_2174_; lean_object* v___x_2175_; 
lean_dec(v_d_2126_);
v___x_2174_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_2175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2174_);
return v___x_2175_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_d_2176_, lean_object* v_key_2177_){
_start:
{
lean_object* v_res_2178_; 
v_res_2178_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_2176_, v_key_2177_);
lean_dec_ref(v_key_2177_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_2179_, lean_object* v_d_2180_){
_start:
{
lean_object* v___y_2183_; lean_object* v___y_2184_; lean_object* v___y_2189_; lean_object* v_received_2190_; lean_object* v___y_2209_; lean_object* v_a_2212_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2241_ = lean_mk_string_unchecked("key", 3, 3);
lean_inc(v_d_2180_);
v___x_2242_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_2180_, v___x_2241_);
lean_dec_ref(v___x_2241_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v_a_2243_; 
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
lean_inc(v_a_2243_);
lean_dec_ref_known(v___x_2242_, 1);
v_a_2212_ = v_a_2243_;
goto v___jp_2211_;
}
else
{
lean_object* v_a_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v_a_2244_ = lean_ctor_get(v___x_2242_, 0);
lean_inc(v_a_2244_);
lean_dec_ref_known(v___x_2242_, 1);
v___x_2245_ = lean_mk_string_unchecked("value", 5, 5);
lean_inc(v_d_2180_);
v___x_2246_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__5(v_d_2180_, v___x_2245_);
lean_dec_ref(v___x_2245_);
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v_a_2247_; 
lean_dec(v_a_2244_);
v_a_2247_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_a_2247_);
lean_dec_ref_known(v___x_2246_, 1);
v_a_2212_ = v_a_2247_;
goto v___jp_2211_;
}
else
{
lean_object* v_a_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v_a_2248_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_a_2248_);
lean_dec_ref_known(v___x_2246_, 1);
v___x_2249_ = lean_mk_string_unchecked("versionstamp", 12, 12);
lean_inc(v_d_2180_);
v___x_2250_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__6(v_d_2180_, v___x_2249_);
lean_dec_ref(v___x_2249_);
if (lean_obj_tag(v___x_2250_) == 0)
{
lean_object* v_a_2251_; 
lean_dec(v_a_2248_);
lean_dec(v_a_2244_);
v_a_2251_ = lean_ctor_get(v___x_2250_, 0);
lean_inc(v_a_2251_);
lean_dec_ref_known(v___x_2250_, 1);
v_a_2212_ = v_a_2251_;
goto v___jp_2211_;
}
else
{
lean_object* v_a_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2260_; 
lean_dec(v_d_2180_);
v_a_2252_ = lean_ctor_get(v___x_2250_, 0);
v_isSharedCheck_2260_ = !lean_is_exclusive(v___x_2250_);
if (v_isSharedCheck_2260_ == 0)
{
v___x_2254_ = v___x_2250_;
v_isShared_2255_ = v_isSharedCheck_2260_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_a_2252_);
lean_dec(v___x_2250_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2260_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v___x_2256_; lean_object* v___x_2258_; 
v___x_2256_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2256_, 0, v_a_2244_);
lean_ctor_set(v___x_2256_, 1, v_a_2248_);
lean_ctor_set(v___x_2256_, 2, v_a_2252_);
if (v_isShared_2255_ == 0)
{
lean_ctor_set_tag(v___x_2254_, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2256_);
v___x_2258_ = v___x_2254_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v___x_2256_);
v___x_2258_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
return v___x_2258_;
}
}
}
}
}
v___jp_2182_:
{
lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2185_ = lean_string_append(v___y_2183_, v___y_2184_);
lean_dec_ref(v___y_2184_);
v___x_2186_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2185_);
v___x_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2186_);
return v___x_2187_;
}
v___jp_2188_:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; uint8_t v___x_2202_; 
v___x_2191_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_2192_ = lean_string_append(v___x_2191_, v_context_2179_);
v___x_2193_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_2194_ = lean_string_append(v___x_2192_, v___x_2193_);
lean_dec_ref(v___x_2193_);
v___x_2195_ = lean_mk_string_unchecked("Lasm.JS.Deno.KvEntry", 20, 20);
v___x_2196_ = lean_string_append(v___x_2194_, v___x_2195_);
lean_dec_ref(v___x_2195_);
v___x_2197_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_2198_ = lean_string_append(v___x_2196_, v___x_2197_);
lean_dec_ref(v___x_2197_);
v___x_2199_ = lean_string_append(v___x_2198_, v_received_2190_);
lean_dec_ref(v_received_2190_);
v___x_2200_ = lean_string_utf8_byte_size(v___y_2189_);
v___x_2201_ = lean_unsigned_to_nat(0u);
v___x_2202_ = lean_nat_dec_eq(v___x_2200_, v___x_2201_);
if (v___x_2202_ == 0)
{
lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; 
v___x_2203_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_2204_ = lean_string_append(v___x_2203_, v___y_2189_);
lean_dec_ref(v___y_2189_);
v___x_2205_ = lean_mk_string_unchecked(")", 1, 1);
v___x_2206_ = lean_string_append(v___x_2204_, v___x_2205_);
lean_dec_ref(v___x_2205_);
v___y_2183_ = v___x_2199_;
v___y_2184_ = v___x_2206_;
goto v___jp_2182_;
}
else
{
lean_object* v___x_2207_; 
lean_dec_ref(v___y_2189_);
v___x_2207_ = lean_mk_string_unchecked("", 0, 0);
v___y_2183_ = v___x_2199_;
v___y_2184_ = v___x_2207_;
goto v___jp_2182_;
}
}
v___jp_2208_:
{
lean_object* v___x_2210_; 
v___x_2210_ = l_Lasm_JS_Data_describe(v_d_2180_);
v___y_2189_ = v___y_2209_;
v_received_2190_ = v___x_2210_;
goto v___jp_2188_;
}
v___jp_2211_:
{
if (lean_obj_tag(v_d_2180_) == 9)
{
lean_object* v_value_2213_; lean_object* v_description_2214_; lean_object* v___x_2215_; uint8_t v___x_2216_; 
v_value_2213_ = lean_ctor_get(v_d_2180_, 0);
v_description_2214_ = lean_ctor_get(v_d_2180_, 1);
v___x_2215_ = lean_mk_string_unchecked("", 0, 0);
v___x_2216_ = lean_string_dec_eq(v_description_2214_, v___x_2215_);
if (v___x_2216_ == 0)
{
lean_dec_ref(v___x_2215_);
v___y_2209_ = v_a_2212_;
goto v___jp_2208_;
}
else
{
lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2238_; 
lean_inc(v_value_2213_);
v_isSharedCheck_2238_ = !lean_is_exclusive(v_d_2180_);
if (v_isSharedCheck_2238_ == 0)
{
lean_object* v_unused_2239_; lean_object* v_unused_2240_; 
v_unused_2239_ = lean_ctor_get(v_d_2180_, 1);
lean_dec(v_unused_2239_);
v_unused_2240_ = lean_ctor_get(v_d_2180_, 0);
lean_dec(v_unused_2240_);
v___x_2218_ = v_d_2180_;
v_isShared_2219_ = v_isSharedCheck_2238_;
goto v_resetjp_2217_;
}
else
{
lean_dec(v_d_2180_);
v___x_2218_ = lean_box(0);
v_isShared_2219_ = v_isSharedCheck_2238_;
goto v_resetjp_2217_;
}
v_resetjp_2217_:
{
uint32_t v___x_2220_; uint64_t v___x_2221_; lean_object* v___x_2223_; 
v___x_2220_ = 206;
v___x_2221_ = 0ULL;
lean_inc(v_value_2213_);
if (v_isShared_2219_ == 0)
{
lean_ctor_set(v___x_2218_, 1, v___x_2215_);
v___x_2223_ = v___x_2218_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_value_2213_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v___x_2215_);
v___x_2223_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
uint32_t v___x_2224_; lean_object* v___x_2225_; 
v___x_2224_ = lasm_js_value_handle(v_value_2213_);
lean_dec(v_value_2213_);
v___x_2225_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2220_, v___x_2221_, v___x_2223_, v___x_2224_);
lean_dec_ref(v___x_2223_);
if (lean_obj_tag(v___x_2225_) == 0)
{
lean_object* v_a_2226_; uint8_t v___x_2227_; 
v_a_2226_ = lean_ctor_get(v___x_2225_, 0);
lean_inc(v_a_2226_);
lean_dec_ref_known(v___x_2225_, 1);
v___x_2227_ = lean_string_validate_utf8(v_a_2226_);
if (v___x_2227_ == 0)
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
lean_dec(v_a_2226_);
v___x_2228_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_2229_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_2230_ = lean_unsigned_to_nat(193u);
v___x_2231_ = lean_unsigned_to_nat(46u);
v___x_2232_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_2233_ = l_mkPanicMessageWithDecl(v___x_2228_, v___x_2229_, v___x_2230_, v___x_2231_, v___x_2232_);
lean_dec_ref(v___x_2232_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v___x_2228_);
v___x_2234_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2233_);
v___y_2189_ = v_a_2212_;
v_received_2190_ = v___x_2234_;
goto v___jp_2188_;
}
else
{
lean_object* v___x_2235_; 
v___x_2235_ = lean_string_from_utf8_unchecked(v_a_2226_);
v___y_2189_ = v_a_2212_;
v_received_2190_ = v___x_2235_;
goto v___jp_2188_;
}
}
else
{
lean_object* v___x_2236_; 
lean_dec_ref_known(v___x_2225_, 1);
v___x_2236_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v___y_2189_ = v_a_2212_;
v_received_2190_ = v___x_2236_;
goto v___jp_2188_;
}
}
}
}
}
else
{
v___y_2209_ = v_a_2212_;
goto v___jp_2208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2261_, lean_object* v_d_2262_, lean_object* v_a_2263_){
_start:
{
lean_object* v_res_2264_; 
v_res_2264_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(v_context_2261_, v_d_2262_);
lean_dec_ref(v_context_2261_);
return v_res_2264_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(lean_object* v_context_2265_, lean_object* v_bytes_2266_){
_start:
{
lean_object* v___x_2268_; 
v___x_2268_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2266_);
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v_a_2269_; lean_object* v___x_2270_; 
v_a_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc(v_a_2269_);
lean_dec_ref_known(v___x_2268_, 1);
v___x_2270_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(v_context_2265_, v_a_2269_);
return v___x_2270_;
}
else
{
lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2278_; 
v_a_2271_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2273_ = v___x_2268_;
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_dec(v___x_2268_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
v___x_2276_ = v___x_2273_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_a_2271_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
return v___x_2276_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_2279_, lean_object* v_bytes_2280_, lean_object* v_a_2281_){
_start:
{
lean_object* v_res_2282_; 
v_res_2282_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(v_context_2279_, v_bytes_2280_);
lean_dec_ref(v_bytes_2280_);
lean_dec_ref(v_context_2279_);
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(lean_object* v_o_2283_, lean_object* v_key_2284_){
_start:
{
lean_object* v_k_2286_; lean_object* v___x_2287_; 
v_k_2286_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2286_, 0, v_key_2284_);
v___x_2287_ = l_Lasm_JS_Wire_encodeIO(v_k_2286_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v_a_2288_; uint32_t v___x_2289_; uint32_t v___x_2290_; uint8_t v___x_2291_; uint64_t v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc(v_a_2288_);
lean_dec_ref_known(v___x_2287_, 1);
v___x_2289_ = 203;
v___x_2290_ = lasm_js_value_handle(v_o_2283_);
v___x_2291_ = 0;
v___x_2292_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2291_);
v___x_2293_ = lean_mk_string_unchecked("", 0, 0);
v___x_2294_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2294_, 0, v_o_2283_);
lean_ctor_set(v___x_2294_, 1, v___x_2293_);
v___x_2295_ = lean_unsigned_to_nat(2u);
v___x_2296_ = lean_mk_empty_array_with_capacity(v___x_2295_);
lean_inc_ref(v_k_2286_);
v___x_2297_ = lean_array_push(v___x_2296_, v_k_2286_);
v___x_2298_ = lean_array_push(v___x_2297_, v___x_2294_);
v___x_2299_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
v___x_2300_ = lasm_js_call(v___x_2289_, v___x_2290_, v___x_2292_, v_a_2288_, v___x_2299_);
lean_dec_ref_known(v___x_2299_, 1);
lean_dec(v_a_2288_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_object* v_a_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
lean_inc(v_a_2301_);
lean_dec_ref_known(v___x_2300_, 1);
v___x_2302_ = lean_mk_string_unchecked("get ", 4, 4);
v___x_2303_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2286_);
v___x_2304_ = lean_string_append(v___x_2302_, v___x_2303_);
lean_dec_ref(v___x_2303_);
v___x_2305_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(v___x_2304_, v_a_2301_);
lean_dec(v_a_2301_);
lean_dec_ref(v___x_2304_);
return v___x_2305_;
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2313_; 
lean_dec_ref_known(v_k_2286_, 1);
v_a_2306_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2308_ = v___x_2300_;
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2300_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2311_; 
if (v_isShared_2309_ == 0)
{
v___x_2311_ = v___x_2308_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_a_2306_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
}
else
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2321_; 
lean_dec_ref_known(v_k_2286_, 1);
lean_dec(v_o_2283_);
v_a_2314_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2316_ = v___x_2287_;
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2287_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2317_ == 0)
{
v___x_2319_ = v___x_2316_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_a_2314_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___boxed(lean_object* v_o_2322_, lean_object* v_key_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(v_o_2322_, v_key_2323_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1(lean_object* v___f_2326_, lean_object* v_a_2327_, lean_object* v_x_2328_){
_start:
{
if (lean_obj_tag(v_x_2328_) == 0)
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2338_; 
lean_dec(v_a_2327_);
lean_dec_ref(v___f_2326_);
v_a_2330_ = lean_ctor_get(v_x_2328_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v_x_2328_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2332_ = v_x_2328_;
v_isShared_2333_ = v_isSharedCheck_2338_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v_x_2328_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2338_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
lean_object* v___x_2336_; 
v___x_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2335_);
return v___x_2336_;
}
}
}
else
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2365_; 
v_a_2339_ = lean_ctor_get(v_x_2328_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v_x_2328_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2341_ = v_x_2328_;
v_isShared_2342_ = v_isSharedCheck_2365_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v_x_2328_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2365_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
uint8_t v___x_2343_; 
v___x_2343_ = lean_unbox(v_a_2339_);
if (v___x_2343_ == 0)
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v_val_2347_; lean_object* v___x_2351_; 
v___x_2344_ = lean_mk_string_unchecked("value", 5, 5);
v___x_2345_ = lean_unsigned_to_nat(0u);
v___x_2351_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(v_a_2327_, v___x_2344_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2354_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2352_);
lean_dec_ref_known(v___x_2351_, 1);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 0, v_a_2352_);
v___x_2354_ = v___x_2341_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_a_2352_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
v_val_2347_ = v___x_2354_;
goto v___jp_2346_;
}
}
else
{
lean_object* v_a_2356_; lean_object* v___x_2358_; 
v_a_2356_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2356_);
lean_dec_ref_known(v___x_2351_, 1);
if (v_isShared_2342_ == 0)
{
lean_ctor_set_tag(v___x_2341_, 0);
lean_ctor_set(v___x_2341_, 0, v_a_2356_);
v___x_2358_ = v___x_2341_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_a_2356_);
v___x_2358_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
v_val_2347_ = v___x_2358_;
goto v___jp_2346_;
}
}
v___jp_2346_:
{
lean_object* v___x_2348_; uint8_t v___x_2349_; lean_object* v___x_2350_; 
v___x_2348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2348_, 0, v_val_2347_);
v___x_2349_ = lean_unbox(v_a_2339_);
lean_dec(v_a_2339_);
v___x_2350_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2345_, v___x_2349_, v___x_2348_, v___f_2326_);
return v___x_2350_;
}
}
else
{
lean_object* v___x_2360_; lean_object* v___x_2362_; 
lean_dec(v_a_2339_);
lean_dec(v_a_2327_);
lean_dec_ref(v___f_2326_);
v___x_2360_ = lean_box(0);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 0, v___x_2360_);
v___x_2362_ = v___x_2341_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v___x_2360_);
v___x_2362_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
lean_object* v___x_2363_; 
v___x_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
return v___x_2363_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___boxed(lean_object* v___f_2366_, lean_object* v_a_2367_, lean_object* v_x_2368_, lean_object* v___y_2369_){
_start:
{
lean_object* v_res_2370_; 
v_res_2370_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1(v___f_2366_, v_a_2367_, v_x_2368_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(lean_object* v_o_2371_, lean_object* v_key_2372_){
_start:
{
lean_object* v_k_2374_; lean_object* v___x_2375_; 
v_k_2374_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2374_, 0, v_key_2372_);
v___x_2375_ = l_Lasm_JS_Wire_encodeIO(v_k_2374_);
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2376_; uint32_t v___x_2377_; uint32_t v___x_2378_; uint8_t v___x_2379_; uint64_t v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; 
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
lean_inc(v_a_2376_);
lean_dec_ref_known(v___x_2375_, 1);
v___x_2377_ = 203;
v___x_2378_ = lasm_js_value_handle(v_o_2371_);
v___x_2379_ = 0;
v___x_2380_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2379_);
v___x_2381_ = lean_mk_string_unchecked("", 0, 0);
v___x_2382_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2382_, 0, v_o_2371_);
lean_ctor_set(v___x_2382_, 1, v___x_2381_);
v___x_2383_ = lean_unsigned_to_nat(2u);
v___x_2384_ = lean_mk_empty_array_with_capacity(v___x_2383_);
lean_inc_ref(v_k_2374_);
v___x_2385_ = lean_array_push(v___x_2384_, v_k_2374_);
v___x_2386_ = lean_array_push(v___x_2385_, v___x_2382_);
v___x_2387_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2386_);
v___x_2388_ = lasm_js_call(v___x_2377_, v___x_2378_, v___x_2380_, v_a_2376_, v___x_2387_);
lean_dec_ref_known(v___x_2387_, 1);
lean_dec(v_a_2376_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v_a_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; 
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_a_2389_);
lean_dec_ref_known(v___x_2388_, 1);
v___x_2390_ = lean_mk_string_unchecked("get ", 4, 4);
v___x_2391_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2374_);
v___x_2392_ = lean_string_append(v___x_2390_, v___x_2391_);
lean_dec_ref(v___x_2391_);
v___x_2393_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Internal_isInstance_spec__0_spec__1(v___x_2392_, v_a_2389_);
lean_dec(v_a_2389_);
lean_dec_ref(v___x_2392_);
return v___x_2393_;
}
else
{
lean_object* v_a_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2401_; 
lean_dec_ref_known(v_k_2374_, 1);
v_a_2394_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2396_ = v___x_2388_;
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_a_2394_);
lean_dec(v___x_2388_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2399_; 
if (v_isShared_2397_ == 0)
{
v___x_2399_ = v___x_2396_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v_a_2394_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
}
else
{
lean_object* v_a_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2409_; 
lean_dec_ref_known(v_k_2374_, 1);
lean_dec(v_o_2371_);
v_a_2402_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2404_ = v___x_2375_;
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_a_2402_);
lean_dec(v___x_2375_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2407_; 
if (v_isShared_2405_ == 0)
{
v___x_2407_ = v___x_2404_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_a_2402_);
v___x_2407_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
return v___x_2407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___boxed(lean_object* v_o_2410_, lean_object* v_key_2411_, lean_object* v_a_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(v_o_2410_, v_key_2411_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2(lean_object* v___f_2414_, lean_object* v_x_2415_){
_start:
{
if (lean_obj_tag(v_x_2415_) == 0)
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2425_; 
lean_dec_ref(v___f_2414_);
v_a_2417_ = lean_ctor_get(v_x_2415_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v_x_2415_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2419_ = v_x_2415_;
v_isShared_2420_ = v_isSharedCheck_2425_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v_x_2415_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2425_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2422_; 
if (v_isShared_2420_ == 0)
{
v___x_2422_ = v___x_2419_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2417_);
v___x_2422_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
lean_object* v___x_2423_; 
v___x_2423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2422_);
return v___x_2423_;
}
}
}
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2447_; 
v_a_2426_ = lean_ctor_get(v_x_2415_, 0);
v_isSharedCheck_2447_ = !lean_is_exclusive(v_x_2415_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2428_ = v_x_2415_;
v_isShared_2429_ = v_isSharedCheck_2447_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v_x_2415_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2447_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___f_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; uint8_t v___x_2433_; lean_object* v_val_2435_; lean_object* v___x_2438_; 
lean_inc(v_a_2426_);
v___f_2430_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2430_, 0, v___f_2414_);
lean_closure_set(v___f_2430_, 1, v_a_2426_);
v___x_2431_ = lean_mk_string_unchecked("done", 4, 4);
v___x_2432_ = lean_unsigned_to_nat(0u);
v___x_2433_ = 0;
v___x_2438_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(v_a_2426_, v___x_2431_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_object* v_a_2439_; lean_object* v___x_2441_; 
v_a_2439_ = lean_ctor_get(v___x_2438_, 0);
lean_inc(v_a_2439_);
lean_dec_ref_known(v___x_2438_, 1);
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 0, v_a_2439_);
v___x_2441_ = v___x_2428_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v_a_2439_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
v_val_2435_ = v___x_2441_;
goto v___jp_2434_;
}
}
else
{
lean_object* v_a_2443_; lean_object* v___x_2445_; 
v_a_2443_ = lean_ctor_get(v___x_2438_, 0);
lean_inc(v_a_2443_);
lean_dec_ref_known(v___x_2438_, 1);
if (v_isShared_2429_ == 0)
{
lean_ctor_set_tag(v___x_2428_, 0);
lean_ctor_set(v___x_2428_, 0, v_a_2443_);
v___x_2445_ = v___x_2428_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v_a_2443_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
v_val_2435_ = v___x_2445_;
goto v___jp_2434_;
}
}
v___jp_2434_:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2436_, 0, v_val_2435_);
v___x_2437_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2432_, v___x_2433_, v___x_2436_, v___f_2430_);
return v___x_2437_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___boxed(lean_object* v___f_2448_, lean_object* v_x_2449_, lean_object* v___y_2450_){
_start:
{
lean_object* v_res_2451_; 
v_res_2451_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2(v___f_2448_, v_x_2449_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__4(lean_object* v_failurePrefix_2452_, lean_object* v_x_2453_){
_start:
{
if (lean_obj_tag(v_x_2453_) == 0)
{
lean_object* v_a_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2466_; 
v_a_2455_ = lean_ctor_get(v_x_2453_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v_x_2453_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2457_ = v_x_2453_;
v_isShared_2458_ = v_isSharedCheck_2466_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_a_2455_);
lean_dec(v_x_2453_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2466_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2463_; 
v___x_2459_ = lean_io_error_to_string(v_a_2455_);
v___x_2460_ = lean_string_append(v_failurePrefix_2452_, v___x_2459_);
lean_dec_ref(v___x_2459_);
v___x_2461_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2461_, 0, v___x_2460_);
if (v_isShared_2458_ == 0)
{
lean_ctor_set(v___x_2457_, 0, v___x_2461_);
v___x_2463_ = v___x_2457_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v___x_2461_);
v___x_2463_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
lean_object* v___x_2464_; 
v___x_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2463_);
return v___x_2464_;
}
}
}
else
{
lean_object* v___x_2467_; 
lean_dec_ref(v_failurePrefix_2452_);
v___x_2467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2467_, 0, v_x_2453_);
return v___x_2467_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__4___boxed(lean_object* v_failurePrefix_2468_, lean_object* v_x_2469_, lean_object* v___y_2470_){
_start:
{
lean_object* v_res_2471_; 
v_res_2471_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__4(v_failurePrefix_2468_, v_x_2469_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__0(lean_object* v_context_2472_, lean_object* v_x_2473_){
_start:
{
lean_object* v_val_2476_; 
if (lean_obj_tag(v_x_2473_) == 0)
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2486_; 
v_a_2478_ = lean_ctor_get(v_x_2473_, 0);
v_isSharedCheck_2486_ = !lean_is_exclusive(v_x_2473_);
if (v_isSharedCheck_2486_ == 0)
{
v___x_2480_ = v_x_2473_;
v_isShared_2481_ = v_isSharedCheck_2486_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v_x_2473_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2486_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2483_; 
if (v_isShared_2481_ == 0)
{
v___x_2483_ = v___x_2480_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v_a_2478_);
v___x_2483_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
lean_object* v___x_2484_; 
v___x_2484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2483_);
return v___x_2484_;
}
}
}
else
{
lean_object* v_a_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2500_; 
v_a_2487_ = lean_ctor_get(v_x_2473_, 0);
v_isSharedCheck_2500_ = !lean_is_exclusive(v_x_2473_);
if (v_isSharedCheck_2500_ == 0)
{
v___x_2489_ = v_x_2473_;
v_isShared_2490_ = v_isSharedCheck_2500_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_a_2487_);
lean_dec(v_x_2473_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2500_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2491_; 
v___x_2491_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_2472_, v_a_2487_);
if (lean_obj_tag(v___x_2491_) == 0)
{
lean_object* v_a_2492_; lean_object* v___x_2494_; 
v_a_2492_ = lean_ctor_get(v___x_2491_, 0);
lean_inc(v_a_2492_);
lean_dec_ref_known(v___x_2491_, 1);
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 0, v_a_2492_);
v___x_2494_ = v___x_2489_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v_a_2492_);
v___x_2494_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
v_val_2476_ = v___x_2494_;
goto v___jp_2475_;
}
}
else
{
lean_object* v_a_2496_; lean_object* v___x_2498_; 
v_a_2496_ = lean_ctor_get(v___x_2491_, 0);
lean_inc(v_a_2496_);
lean_dec_ref_known(v___x_2491_, 1);
if (v_isShared_2490_ == 0)
{
lean_ctor_set_tag(v___x_2489_, 0);
lean_ctor_set(v___x_2489_, 0, v_a_2496_);
v___x_2498_ = v___x_2489_;
goto v_reusejp_2497_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v_a_2496_);
v___x_2498_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2497_;
}
v_reusejp_2497_:
{
v_val_2476_ = v___x_2498_;
goto v___jp_2475_;
}
}
}
}
v___jp_2475_:
{
lean_object* v___x_2477_; 
v___x_2477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2477_, 0, v_val_2476_);
return v___x_2477_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__0___boxed(lean_object* v_context_2501_, lean_object* v_x_2502_, lean_object* v___y_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__0(v_context_2501_, v_x_2502_);
lean_dec_ref(v_context_2501_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__8(lean_object* v___f_2505_, lean_object* v_x_2506_){
_start:
{
if (lean_obj_tag(v_x_2506_) == 0)
{
lean_object* v_a_2508_; lean_object* v___x_2510_; uint8_t v_isShared_2511_; uint8_t v_isSharedCheck_2516_; 
lean_dec_ref(v___f_2505_);
v_a_2508_ = lean_ctor_get(v_x_2506_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v_x_2506_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2510_ = v_x_2506_;
v_isShared_2511_ = v_isSharedCheck_2516_;
goto v_resetjp_2509_;
}
else
{
lean_inc(v_a_2508_);
lean_dec(v_x_2506_);
v___x_2510_ = lean_box(0);
v_isShared_2511_ = v_isSharedCheck_2516_;
goto v_resetjp_2509_;
}
v_resetjp_2509_:
{
lean_object* v___x_2513_; 
if (v_isShared_2511_ == 0)
{
v___x_2513_ = v___x_2510_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_a_2508_);
v___x_2513_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
lean_object* v___x_2514_; 
v___x_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2514_, 0, v___x_2513_);
return v___x_2514_;
}
}
}
else
{
lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2528_; 
v_isSharedCheck_2528_ = !lean_is_exclusive(v_x_2506_);
if (v_isSharedCheck_2528_ == 0)
{
lean_object* v_unused_2529_; 
v_unused_2529_ = lean_ctor_get(v_x_2506_, 0);
lean_dec(v_unused_2529_);
v___x_2518_ = v_x_2506_;
v_isShared_2519_ = v_isSharedCheck_2528_;
goto v_resetjp_2517_;
}
else
{
lean_dec(v_x_2506_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2528_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2520_; uint8_t v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2524_; 
v___x_2520_ = lean_unsigned_to_nat(0u);
v___x_2521_ = 0;
v___x_2522_ = lean_io_promise_new();
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 0, v___x_2522_);
v___x_2524_ = v___x_2518_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v___x_2522_);
v___x_2524_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2524_);
v___x_2526_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2520_, v___x_2521_, v___x_2525_, v___f_2505_);
return v___x_2526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__8___boxed(lean_object* v___f_2530_, lean_object* v_x_2531_, lean_object* v___y_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__8(v___f_2530_, v_x_2531_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__7(lean_object* v___f_2534_, lean_object* v_a_2535_, uint32_t v_op_2536_, uint64_t v_flags_2537_, lean_object* v_payload_2538_, lean_object* v_x_2539_){
_start:
{
if (lean_obj_tag(v_x_2539_) == 0)
{
lean_object* v___x_2541_; 
lean_dec_ref(v___f_2534_);
v___x_2541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2541_, 0, v_x_2539_);
return v___x_2541_;
}
else
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2562_; 
v_a_2542_ = lean_ctor_get(v_x_2539_, 0);
v_isSharedCheck_2562_ = !lean_is_exclusive(v_x_2539_);
if (v_isSharedCheck_2562_ == 0)
{
v___x_2544_ = v_x_2539_;
v_isShared_2545_ = v_isSharedCheck_2562_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v_x_2539_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2562_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
uint32_t v___x_2546_; lean_object* v___x_2547_; uint8_t v___x_2548_; lean_object* v_val_2550_; lean_object* v___x_2553_; 
v___x_2546_ = 0;
v___x_2547_ = lean_unsigned_to_nat(0u);
v___x_2548_ = 0;
v___x_2553_ = lasm_js_call_into(v_a_2535_, v_op_2536_, v___x_2546_, v_flags_2537_, v_a_2542_, v_payload_2538_);
lean_dec(v_a_2542_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_a_2554_; lean_object* v___x_2556_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2554_);
lean_dec_ref_known(v___x_2553_, 1);
if (v_isShared_2545_ == 0)
{
lean_ctor_set(v___x_2544_, 0, v_a_2554_);
v___x_2556_ = v___x_2544_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_a_2554_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
v_val_2550_ = v___x_2556_;
goto v___jp_2549_;
}
}
else
{
lean_object* v_a_2558_; lean_object* v___x_2560_; 
v_a_2558_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2558_);
lean_dec_ref_known(v___x_2553_, 1);
if (v_isShared_2545_ == 0)
{
lean_ctor_set_tag(v___x_2544_, 0);
lean_ctor_set(v___x_2544_, 0, v_a_2558_);
v___x_2560_ = v___x_2544_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v_a_2558_);
v___x_2560_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
v_val_2550_ = v___x_2560_;
goto v___jp_2549_;
}
}
v___jp_2549_:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2551_, 0, v_val_2550_);
v___x_2552_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2547_, v___x_2548_, v___x_2551_, v___f_2534_);
return v___x_2552_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__7___boxed(lean_object* v___f_2563_, lean_object* v_a_2564_, lean_object* v_op_2565_, lean_object* v_flags_2566_, lean_object* v_payload_2567_, lean_object* v_x_2568_, lean_object* v___y_2569_){
_start:
{
uint32_t v_op_boxed_2570_; uint64_t v_flags_boxed_2571_; lean_object* v_res_2572_; 
v_op_boxed_2570_ = lean_unbox_uint32(v_op_2565_);
lean_dec(v_op_2565_);
v_flags_boxed_2571_ = lean_unbox_uint64(v_flags_2566_);
lean_dec_ref(v_flags_2566_);
v_res_2572_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__7(v___f_2563_, v_a_2564_, v_op_boxed_2570_, v_flags_boxed_2571_, v_payload_2567_, v_x_2568_);
lean_dec(v_payload_2567_);
lean_dec(v_a_2564_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__5(lean_object* v___x_2573_, uint8_t v___x_2574_, lean_object* v___f_2575_, lean_object* v_a_2576_, uint32_t v_op_2577_, uint64_t v_flags_2578_, lean_object* v_payload_2579_, lean_object* v_x_2580_){
_start:
{
lean_object* v_val_2583_; 
if (lean_obj_tag(v_x_2580_) == 0)
{
lean_object* v___x_2586_; 
lean_dec_ref(v___f_2575_);
lean_dec(v___x_2573_);
v___x_2586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2586_, 0, v_x_2580_);
return v___x_2586_;
}
else
{
lean_object* v_a_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2601_; 
v_a_2587_ = lean_ctor_get(v_x_2580_, 0);
v_isSharedCheck_2601_ = !lean_is_exclusive(v_x_2580_);
if (v_isSharedCheck_2601_ == 0)
{
v___x_2589_ = v_x_2580_;
v_isShared_2590_ = v_isSharedCheck_2601_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_a_2587_);
lean_dec(v_x_2580_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2601_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
uint32_t v___x_2591_; lean_object* v___x_2592_; 
v___x_2591_ = 0;
v___x_2592_ = lasm_js_call_into(v_a_2576_, v_op_2577_, v___x_2591_, v_flags_2578_, v_a_2587_, v_payload_2579_);
lean_dec(v_a_2587_);
if (lean_obj_tag(v___x_2592_) == 0)
{
lean_object* v_a_2593_; lean_object* v___x_2595_; 
v_a_2593_ = lean_ctor_get(v___x_2592_, 0);
lean_inc(v_a_2593_);
lean_dec_ref_known(v___x_2592_, 1);
if (v_isShared_2590_ == 0)
{
lean_ctor_set(v___x_2589_, 0, v_a_2593_);
v___x_2595_ = v___x_2589_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v_a_2593_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
v_val_2583_ = v___x_2595_;
goto v___jp_2582_;
}
}
else
{
lean_object* v_a_2597_; lean_object* v___x_2599_; 
v_a_2597_ = lean_ctor_get(v___x_2592_, 0);
lean_inc(v_a_2597_);
lean_dec_ref_known(v___x_2592_, 1);
if (v_isShared_2590_ == 0)
{
lean_ctor_set_tag(v___x_2589_, 0);
lean_ctor_set(v___x_2589_, 0, v_a_2597_);
v___x_2599_ = v___x_2589_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_a_2597_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
v_val_2583_ = v___x_2599_;
goto v___jp_2582_;
}
}
}
}
v___jp_2582_:
{
lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2584_, 0, v_val_2583_);
v___x_2585_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2573_, v___x_2574_, v___x_2584_, v___f_2575_);
return v___x_2585_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__5___boxed(lean_object* v___x_2602_, lean_object* v___x_2603_, lean_object* v___f_2604_, lean_object* v_a_2605_, lean_object* v_op_2606_, lean_object* v_flags_2607_, lean_object* v_payload_2608_, lean_object* v_x_2609_, lean_object* v___y_2610_){
_start:
{
uint8_t v___x_3626__boxed_2611_; uint32_t v_op_boxed_2612_; uint64_t v_flags_boxed_2613_; lean_object* v_res_2614_; 
v___x_3626__boxed_2611_ = lean_unbox(v___x_2603_);
v_op_boxed_2612_ = lean_unbox_uint32(v_op_2606_);
lean_dec(v_op_2606_);
v_flags_boxed_2613_ = lean_unbox_uint64(v_flags_2607_);
lean_dec_ref(v_flags_2607_);
v_res_2614_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__5(v___x_2602_, v___x_3626__boxed_2611_, v___f_2604_, v_a_2605_, v_op_boxed_2612_, v_flags_boxed_2613_, v_payload_2608_, v_x_2609_);
lean_dec(v_payload_2608_);
lean_dec(v_a_2605_);
return v_res_2614_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__3(lean_object* v_a_2615_, lean_object* v_x_2616_){
_start:
{
if (lean_obj_tag(v_x_2616_) == 0)
{
lean_object* v_a_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2626_; 
v_a_2618_ = lean_ctor_get(v_x_2616_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v_x_2616_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2620_ = v_x_2616_;
v_isShared_2621_ = v_isSharedCheck_2626_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_a_2618_);
lean_dec(v_x_2616_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2626_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v___x_2623_; 
if (v_isShared_2621_ == 0)
{
v___x_2623_ = v___x_2620_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2618_);
v___x_2623_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
lean_object* v___x_2624_; 
v___x_2624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2624_, 0, v___x_2623_);
return v___x_2624_;
}
}
}
else
{
lean_object* v___x_2627_; 
lean_dec_ref_known(v_x_2616_, 1);
v___x_2627_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2615_);
return v___x_2627_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__3___boxed(lean_object* v_a_2628_, lean_object* v_x_2629_, lean_object* v___y_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__3(v_a_2628_, v_x_2629_);
lean_dec(v_a_2628_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__6(lean_object* v_failurePrefix_2632_, uint32_t v_op_2633_, uint64_t v_flags_2634_, lean_object* v_payload_2635_, lean_object* v___f_2636_, lean_object* v___f_2637_, lean_object* v___f_2638_, lean_object* v_x_2639_){
_start:
{
if (lean_obj_tag(v_x_2639_) == 0)
{
lean_object* v_a_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2649_; 
lean_dec_ref(v___f_2638_);
lean_dec_ref(v___f_2637_);
lean_dec_ref(v___f_2636_);
lean_dec(v_payload_2635_);
v_a_2641_ = lean_ctor_get(v_x_2639_, 0);
v_isSharedCheck_2649_ = !lean_is_exclusive(v_x_2639_);
if (v_isSharedCheck_2649_ == 0)
{
v___x_2643_ = v_x_2639_;
v_isShared_2644_ = v_isSharedCheck_2649_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_a_2641_);
lean_dec(v_x_2639_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2649_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2646_; 
if (v_isShared_2644_ == 0)
{
v___x_2646_ = v___x_2643_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_a_2641_);
v___x_2646_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
lean_object* v___x_2647_; 
v___x_2647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2647_, 0, v___x_2646_);
return v___x_2647_;
}
}
}
else
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2696_; 
v_a_2650_ = lean_ctor_get(v_x_2639_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v_x_2639_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2652_ = v_x_2639_;
v_isShared_2653_ = v_isSharedCheck_2696_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v_x_2639_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2696_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; uint8_t v___x_2656_; 
v___x_2654_ = lean_string_utf8_byte_size(v_failurePrefix_2632_);
v___x_2655_ = lean_unsigned_to_nat(0u);
v___x_2656_ = lean_nat_dec_eq(v___x_2654_, v___x_2655_);
if (v___x_2656_ == 0)
{
lean_object* v___f_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___f_2661_; lean_object* v_val_2663_; lean_object* v___x_2668_; 
lean_dec_ref(v___f_2638_);
lean_inc(v_a_2650_);
v___f_2657_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2657_, 0, v_a_2650_);
v___x_2658_ = lean_box(v___x_2656_);
v___x_2659_ = lean_box_uint32(v_op_2633_);
v___x_2660_ = lean_box_uint64(v_flags_2634_);
lean_inc(v_payload_2635_);
v___f_2661_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2661_, 0, v___x_2655_);
lean_closure_set(v___f_2661_, 1, v___x_2658_);
lean_closure_set(v___f_2661_, 2, v___f_2657_);
lean_closure_set(v___f_2661_, 3, v_a_2650_);
lean_closure_set(v___f_2661_, 4, v___x_2659_);
lean_closure_set(v___f_2661_, 5, v___x_2660_);
lean_closure_set(v___f_2661_, 6, v_payload_2635_);
v___x_2668_ = l_Lasm_JS_Wire_encodeIO(v_payload_2635_);
lean_dec(v_payload_2635_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_object* v_a_2669_; lean_object* v___x_2671_; 
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
lean_inc(v_a_2669_);
lean_dec_ref_known(v___x_2668_, 1);
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 0, v_a_2669_);
v___x_2671_ = v___x_2652_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_a_2669_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
v_val_2663_ = v___x_2671_;
goto v___jp_2662_;
}
}
else
{
lean_object* v_a_2673_; lean_object* v___x_2675_; 
v_a_2673_ = lean_ctor_get(v___x_2668_, 0);
lean_inc(v_a_2673_);
lean_dec_ref_known(v___x_2668_, 1);
if (v_isShared_2653_ == 0)
{
lean_ctor_set_tag(v___x_2652_, 0);
lean_ctor_set(v___x_2652_, 0, v_a_2673_);
v___x_2675_ = v___x_2652_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_a_2673_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
v_val_2663_ = v___x_2675_;
goto v___jp_2662_;
}
}
v___jp_2662_:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; 
v___x_2664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2664_, 0, v_val_2663_);
v___x_2665_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2655_, v___x_2656_, v___x_2664_, v___f_2661_);
v___x_2666_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2655_, v___x_2656_, v___x_2665_, v___f_2636_);
v___x_2667_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2655_, v___x_2656_, v___x_2666_, v___f_2637_);
return v___x_2667_;
}
}
else
{
lean_object* v___f_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___f_2680_; uint8_t v___x_2681_; lean_object* v_val_2683_; lean_object* v___x_2687_; 
lean_dec_ref(v___f_2637_);
lean_dec_ref(v___f_2636_);
lean_inc(v_a_2650_);
v___f_2677_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2677_, 0, v_a_2650_);
v___x_2678_ = lean_box_uint32(v_op_2633_);
v___x_2679_ = lean_box_uint64(v_flags_2634_);
lean_inc(v_payload_2635_);
v___f_2680_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2680_, 0, v___f_2677_);
lean_closure_set(v___f_2680_, 1, v_a_2650_);
lean_closure_set(v___f_2680_, 2, v___x_2678_);
lean_closure_set(v___f_2680_, 3, v___x_2679_);
lean_closure_set(v___f_2680_, 4, v_payload_2635_);
v___x_2681_ = 0;
v___x_2687_ = l_Lasm_JS_Wire_encodeIO(v_payload_2635_);
lean_dec(v_payload_2635_);
if (lean_obj_tag(v___x_2687_) == 0)
{
lean_object* v_a_2688_; lean_object* v___x_2690_; 
v_a_2688_ = lean_ctor_get(v___x_2687_, 0);
lean_inc(v_a_2688_);
lean_dec_ref_known(v___x_2687_, 1);
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 0, v_a_2688_);
v___x_2690_ = v___x_2652_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v_a_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
v_val_2683_ = v___x_2690_;
goto v___jp_2682_;
}
}
else
{
lean_object* v_a_2692_; lean_object* v___x_2694_; 
v_a_2692_ = lean_ctor_get(v___x_2687_, 0);
lean_inc(v_a_2692_);
lean_dec_ref_known(v___x_2687_, 1);
if (v_isShared_2653_ == 0)
{
lean_ctor_set_tag(v___x_2652_, 0);
lean_ctor_set(v___x_2652_, 0, v_a_2692_);
v___x_2694_ = v___x_2652_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_a_2692_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
v_val_2683_ = v___x_2694_;
goto v___jp_2682_;
}
}
v___jp_2682_:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; 
v___x_2684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2684_, 0, v_val_2683_);
v___x_2685_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2655_, v___x_2681_, v___x_2684_, v___f_2680_);
v___x_2686_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2655_, v___x_2681_, v___x_2685_, v___f_2638_);
return v___x_2686_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__6___boxed(lean_object* v_failurePrefix_2697_, lean_object* v_op_2698_, lean_object* v_flags_2699_, lean_object* v_payload_2700_, lean_object* v___f_2701_, lean_object* v___f_2702_, lean_object* v___f_2703_, lean_object* v_x_2704_, lean_object* v___y_2705_){
_start:
{
uint32_t v_op_boxed_2706_; uint64_t v_flags_boxed_2707_; lean_object* v_res_2708_; 
v_op_boxed_2706_ = lean_unbox_uint32(v_op_2698_);
lean_dec(v_op_2698_);
v_flags_boxed_2707_ = lean_unbox_uint64(v_flags_2699_);
lean_dec_ref(v_flags_2699_);
v_res_2708_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__6(v_failurePrefix_2697_, v_op_boxed_2706_, v_flags_boxed_2707_, v_payload_2700_, v___f_2701_, v___f_2702_, v___f_2703_, v_x_2704_);
lean_dec_ref(v_failurePrefix_2697_);
return v_res_2708_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__1(lean_object* v___f_2709_, lean_object* v_bytes_2710_){
_start:
{
lean_object* v___x_2712_; uint8_t v___x_2713_; lean_object* v_val_2715_; lean_object* v___x_2718_; 
v___x_2712_ = lean_unsigned_to_nat(0u);
v___x_2713_ = 0;
v___x_2718_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2710_);
if (lean_obj_tag(v___x_2718_) == 0)
{
lean_object* v_a_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2726_; 
v_a_2719_ = lean_ctor_get(v___x_2718_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2718_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2721_ = v___x_2718_;
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_a_2719_);
lean_dec(v___x_2718_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2726_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
lean_object* v___x_2724_; 
if (v_isShared_2722_ == 0)
{
lean_ctor_set_tag(v___x_2721_, 1);
v___x_2724_ = v___x_2721_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_a_2719_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
v_val_2715_ = v___x_2724_;
goto v___jp_2714_;
}
}
}
else
{
lean_object* v_a_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2734_; 
v_a_2727_ = lean_ctor_get(v___x_2718_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2718_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2729_ = v___x_2718_;
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_a_2727_);
lean_dec(v___x_2718_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v___x_2732_; 
if (v_isShared_2730_ == 0)
{
lean_ctor_set_tag(v___x_2729_, 0);
v___x_2732_ = v___x_2729_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v_a_2727_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
v_val_2715_ = v___x_2732_;
goto v___jp_2714_;
}
}
}
v___jp_2714_:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; 
v___x_2716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2716_, 0, v_val_2715_);
v___x_2717_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2712_, v___x_2713_, v___x_2716_, v___f_2709_);
return v___x_2717_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__1___boxed(lean_object* v___f_2735_, lean_object* v_bytes_2736_, lean_object* v___y_2737_){
_start:
{
lean_object* v_res_2738_; 
v_res_2738_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__1(v___f_2735_, v_bytes_2736_);
lean_dec_ref(v_bytes_2736_);
return v_res_2738_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__2(lean_object* v___f_2739_, lean_object* v_x_2740_){
_start:
{
if (lean_obj_tag(v_x_2740_) == 0)
{
lean_object* v_a_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2750_; 
lean_dec_ref(v___f_2739_);
v_a_2742_ = lean_ctor_get(v_x_2740_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v_x_2740_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2744_ = v_x_2740_;
v_isShared_2745_ = v_isSharedCheck_2750_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_a_2742_);
lean_dec(v_x_2740_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2750_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2747_; 
if (v_isShared_2745_ == 0)
{
v___x_2747_ = v___x_2744_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v_a_2742_);
v___x_2747_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
lean_object* v___x_2748_; 
v___x_2748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2747_);
return v___x_2748_;
}
}
}
else
{
lean_object* v_a_2751_; lean_object* v___x_2752_; 
v_a_2751_ = lean_ctor_get(v_x_2740_, 0);
lean_inc(v_a_2751_);
lean_dec_ref_known(v_x_2740_, 1);
v___x_2752_ = lean_apply_2(v___f_2739_, v_a_2751_, lean_box(0));
return v___x_2752_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__2___boxed(lean_object* v___f_2753_, lean_object* v_x_2754_, lean_object* v___y_2755_){
_start:
{
lean_object* v_res_2756_; 
v_res_2756_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__2(v___f_2753_, v_x_2754_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3(lean_object* v_context_2757_, uint32_t v_op_2758_, uint64_t v_flags_2759_, lean_object* v_payload_2760_, lean_object* v_failurePrefix_2761_){
_start:
{
lean_object* v___f_2763_; lean_object* v___f_2764_; lean_object* v___f_2765_; lean_object* v___f_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___f_2769_; lean_object* v___f_2770_; lean_object* v___x_2771_; uint8_t v___x_2772_; lean_object* v_val_2774_; lean_object* v___x_2777_; 
v___f_2763_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2763_, 0, v_context_2757_);
v___f_2764_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2764_, 0, v___f_2763_);
v___f_2765_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2765_, 0, v___f_2764_);
lean_inc_ref(v_failurePrefix_2761_);
v___f_2766_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2766_, 0, v_failurePrefix_2761_);
v___x_2767_ = lean_box_uint32(v_op_2758_);
v___x_2768_ = lean_box_uint64(v_flags_2759_);
lean_inc_ref(v___f_2765_);
v___f_2769_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2769_, 0, v_failurePrefix_2761_);
lean_closure_set(v___f_2769_, 1, v___x_2767_);
lean_closure_set(v___f_2769_, 2, v___x_2768_);
lean_closure_set(v___f_2769_, 3, v_payload_2760_);
lean_closure_set(v___f_2769_, 4, v___f_2766_);
lean_closure_set(v___f_2769_, 5, v___f_2765_);
lean_closure_set(v___f_2769_, 6, v___f_2765_);
v___f_2770_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2770_, 0, v___f_2769_);
v___x_2771_ = lean_unsigned_to_nat(0u);
v___x_2772_ = 0;
v___x_2777_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2777_) == 0)
{
lean_object* v_a_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2785_; 
v_a_2778_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2785_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2785_ == 0)
{
v___x_2780_ = v___x_2777_;
v_isShared_2781_ = v_isSharedCheck_2785_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_a_2778_);
lean_dec(v___x_2777_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2785_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2783_; 
if (v_isShared_2781_ == 0)
{
lean_ctor_set_tag(v___x_2780_, 1);
v___x_2783_ = v___x_2780_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v_a_2778_);
v___x_2783_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
v_val_2774_ = v___x_2783_;
goto v___jp_2773_;
}
}
}
else
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2793_; 
v_a_2786_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2788_ = v___x_2777_;
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v___x_2777_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2791_; 
if (v_isShared_2789_ == 0)
{
lean_ctor_set_tag(v___x_2788_, 0);
v___x_2791_ = v___x_2788_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_a_2786_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
v_val_2774_ = v___x_2791_;
goto v___jp_2773_;
}
}
}
v___jp_2773_:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2775_, 0, v_val_2774_);
v___x_2776_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2771_, v___x_2772_, v___x_2775_, v___f_2770_);
return v___x_2776_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3___boxed(lean_object* v_context_2794_, lean_object* v_op_2795_, lean_object* v_flags_2796_, lean_object* v_payload_2797_, lean_object* v_failurePrefix_2798_, lean_object* v_a_2799_){
_start:
{
uint32_t v_op_boxed_2800_; uint64_t v_flags_boxed_2801_; lean_object* v_res_2802_; 
v_op_boxed_2800_ = lean_unbox_uint32(v_op_2795_);
lean_dec(v_op_2795_);
v_flags_boxed_2801_ = lean_unbox_uint64(v_flags_2796_);
lean_dec_ref(v_flags_2796_);
v_res_2802_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3(v_context_2794_, v_op_boxed_2800_, v_flags_boxed_2801_, v_payload_2797_, v_failurePrefix_2798_);
return v_res_2802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2(lean_object* v_o_2803_, lean_object* v_name_2804_, lean_object* v_args_2805_){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; uint64_t v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; uint32_t v___x_2813_; uint8_t v___x_2814_; uint64_t v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; 
v___x_2807_ = lean_mk_string_unchecked("", 0, 0);
lean_inc_ref(v___x_2807_);
v___x_2808_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2808_, 0, v_o_2803_);
lean_ctor_set(v___x_2808_, 1, v___x_2807_);
lean_inc_ref(v_name_2804_);
v___x_2809_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2809_, 0, v_name_2804_);
v___x_2810_ = 8ULL;
v___x_2811_ = lean_mk_string_unchecked("method ", 7, 7);
v___x_2812_ = lean_string_append(v___x_2811_, v_name_2804_);
lean_dec_ref(v_name_2804_);
v___x_2813_ = 205;
v___x_2814_ = 0;
v___x_2815_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_KvListenQueueHandler_ofFn_spec__1_spec__2(v___x_2814_, v___x_2810_);
v___x_2816_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2816_, 0, v_args_2805_);
v___x_2817_ = lean_unsigned_to_nat(3u);
v___x_2818_ = lean_mk_empty_array_with_capacity(v___x_2817_);
v___x_2819_ = lean_array_push(v___x_2818_, v___x_2808_);
v___x_2820_ = lean_array_push(v___x_2819_, v___x_2809_);
v___x_2821_ = lean_array_push(v___x_2820_, v___x_2816_);
v___x_2822_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2821_);
v___x_2823_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2_spec__3(v___x_2812_, v___x_2813_, v___x_2815_, v___x_2822_, v___x_2807_);
return v___x_2823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2___boxed(lean_object* v_o_2824_, lean_object* v_name_2825_, lean_object* v_args_2826_, lean_object* v___y_2827_){
_start:
{
lean_object* v_res_2828_; 
v_res_2828_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2(v_o_2824_, v_name_2825_, v_args_2826_);
return v_res_2828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next(lean_object* v_it_2829_){
_start:
{
lean_object* v___f_2831_; lean_object* v___f_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; uint8_t v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___f_2831_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0___boxed), 2, 0);
v___f_2832_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2832_, 0, v___f_2831_);
v___x_2833_ = lean_mk_string_unchecked("next", 4, 4);
v___x_2834_ = lean_unsigned_to_nat(0u);
v___x_2835_ = lean_mk_empty_array_with_capacity(v___x_2834_);
v___x_2836_ = 0;
v___x_2837_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__2(v_it_2829_, v___x_2833_, v___x_2835_);
v___x_2838_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2834_, v___x_2836_, v___x_2837_, v___f_2832_);
return v___x_2838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___boxed(lean_object* v_it_2839_, lean_object* v_a_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next(v_it_2839_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0(lean_object* v_acc_2842_, lean_object* v_it_2843_, lean_object* v_x_2844_){
_start:
{
if (lean_obj_tag(v_x_2844_) == 0)
{
lean_object* v_a_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2854_; 
lean_dec(v_it_2843_);
lean_dec_ref(v_acc_2842_);
v_a_2846_ = lean_ctor_get(v_x_2844_, 0);
v_isSharedCheck_2854_ = !lean_is_exclusive(v_x_2844_);
if (v_isSharedCheck_2854_ == 0)
{
v___x_2848_ = v_x_2844_;
v_isShared_2849_ = v_isSharedCheck_2854_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_a_2846_);
lean_dec(v_x_2844_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2854_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v___x_2851_; 
if (v_isShared_2849_ == 0)
{
v___x_2851_ = v___x_2848_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2853_; 
v_reuseFailAlloc_2853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2853_, 0, v_a_2846_);
v___x_2851_ = v_reuseFailAlloc_2853_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
lean_object* v___x_2852_; 
v___x_2852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2851_);
return v___x_2852_;
}
}
}
else
{
lean_object* v_a_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2866_; 
v_a_2855_ = lean_ctor_get(v_x_2844_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v_x_2844_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2857_ = v_x_2844_;
v_isShared_2858_ = v_isSharedCheck_2866_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_a_2855_);
lean_dec(v_x_2844_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2866_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
if (lean_obj_tag(v_a_2855_) == 0)
{
lean_object* v___x_2860_; 
lean_dec(v_it_2843_);
if (v_isShared_2858_ == 0)
{
lean_ctor_set(v___x_2857_, 0, v_acc_2842_);
v___x_2860_ = v___x_2857_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_acc_2842_);
v___x_2860_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
lean_object* v___x_2861_; 
v___x_2861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2860_);
return v___x_2861_;
}
}
else
{
lean_object* v_val_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; 
lean_del_object(v___x_2857_);
v_val_2863_ = lean_ctor_get(v_a_2855_, 0);
lean_inc(v_val_2863_);
lean_dec_ref_known(v_a_2855_, 1);
v___x_2864_ = lean_array_push(v_acc_2842_, v_val_2863_);
v___x_2865_ = l_Lasm_JS_Deno_KvListIterator_values_loop(v_it_2843_, v___x_2864_);
return v___x_2865_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0___boxed(lean_object* v_acc_2867_, lean_object* v_it_2868_, lean_object* v_x_2869_, lean_object* v___y_2870_){
_start:
{
lean_object* v_res_2871_; 
v_res_2871_ = l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0(v_acc_2867_, v_it_2868_, v_x_2869_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop(lean_object* v_it_2872_, lean_object* v_acc_2873_){
_start:
{
lean_object* v___f_2875_; lean_object* v___x_2876_; uint8_t v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
lean_inc(v_it_2872_);
v___f_2875_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_2875_, 0, v_acc_2873_);
lean_closure_set(v___f_2875_, 1, v_it_2872_);
v___x_2876_ = lean_unsigned_to_nat(0u);
v___x_2877_ = 0;
v___x_2878_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next(v_it_2872_);
v___x_2879_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2876_, v___x_2877_, v___x_2878_, v___f_2875_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___boxed(lean_object* v_it_2880_, lean_object* v_acc_2881_, lean_object* v_a_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_Lasm_JS_Deno_KvListIterator_values_loop(v_it_2880_, v_acc_2881_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0(lean_object* v_x_2884_){
_start:
{
if (lean_obj_tag(v_x_2884_) == 0)
{
lean_object* v_a_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2894_; 
v_a_2886_ = lean_ctor_get(v_x_2884_, 0);
v_isSharedCheck_2894_ = !lean_is_exclusive(v_x_2884_);
if (v_isSharedCheck_2894_ == 0)
{
v___x_2888_ = v_x_2884_;
v_isShared_2889_ = v_isSharedCheck_2894_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_a_2886_);
lean_dec(v_x_2884_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2894_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2891_; 
if (v_isShared_2889_ == 0)
{
v___x_2891_ = v___x_2888_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v_a_2886_);
v___x_2891_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
lean_object* v___x_2892_; 
v___x_2892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2891_);
return v___x_2892_;
}
}
}
else
{
lean_object* v_a_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; 
v_a_2895_ = lean_ctor_get(v_x_2884_, 0);
lean_inc(v_a_2895_);
lean_dec_ref_known(v_x_2884_, 1);
v___x_2896_ = lean_unsigned_to_nat(0u);
v___x_2897_ = lean_mk_empty_array_with_capacity(v___x_2896_);
v___x_2898_ = l_Lasm_JS_Deno_KvListIterator_values_loop(v_a_2895_, v___x_2897_);
return v___x_2898_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0___boxed(lean_object* v_x_2899_, lean_object* v___y_2900_){
_start:
{
lean_object* v_res_2901_; 
v_res_2901_ = l_Lasm_JS_Deno_KvListIterator_values___lam__0(v_x_2899_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values(lean_object* v_self_2902_){
_start:
{
lean_object* v___f_2904_; lean_object* v___x_2905_; uint8_t v___x_2906_; lean_object* v_val_2908_; lean_object* v___x_2911_; 
v___f_2904_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListIterator_values___lam__0___boxed), 2, 0);
v___x_2905_ = lean_unsigned_to_nat(0u);
v___x_2906_ = 0;
v___x_2911_ = l_Lasm_JS_Deno_KvListIterator_iterator(v_self_2902_);
if (lean_obj_tag(v___x_2911_) == 0)
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
v_a_2912_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2911_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2911_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
lean_ctor_set_tag(v___x_2914_, 1);
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
v_val_2908_ = v___x_2917_;
goto v___jp_2907_;
}
}
}
else
{
lean_object* v_a_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2927_; 
v_a_2920_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2927_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2922_ = v___x_2911_;
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_a_2920_);
lean_dec(v___x_2911_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2925_; 
if (v_isShared_2923_ == 0)
{
lean_ctor_set_tag(v___x_2922_, 0);
v___x_2925_ = v___x_2922_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_a_2920_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
v_val_2908_ = v___x_2925_;
goto v___jp_2907_;
}
}
}
v___jp_2907_:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; 
v___x_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2909_, 0, v_val_2908_);
v___x_2910_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2905_, v___x_2906_, v___x_2909_, v___f_2904_);
return v___x_2910_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___boxed(lean_object* v_self_2928_, lean_object* v_a_2929_){
_start:
{
lean_object* v_res_2930_; 
v_res_2930_ = l_Lasm_JS_Deno_KvListIterator_values(v_self_2928_);
return v_res_2930_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Streams(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Deno_Kv(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Deno_instFromJSKvListIterator = _init_l_Lasm_JS_Deno_instFromJSKvListIterator();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKvListIterator);
l_Lasm_JS_Deno_instFromJSKvU64 = _init_l_Lasm_JS_Deno_instFromJSKvU64();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKvU64);
l_Lasm_JS_Deno_instFromJSAtomicOperation = _init_l_Lasm_JS_Deno_instFromJSAtomicOperation();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSAtomicOperation);
l_Lasm_JS_Deno_instFromJSKv = _init_l_Lasm_JS_Deno_instFromJSKv();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKv);
l_Lasm_JS_Deno_instFromJSKvMutationType = _init_l_Lasm_JS_Deno_instFromJSKvMutationType();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKvMutationType);
l_Lasm_JS_Deno_instFromJSKvConsistencyLevel = _init_l_Lasm_JS_Deno_instFromJSKvConsistencyLevel();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKvConsistencyLevel);
l_Lasm_JS_Deno_instFromJSKvKeyPart = _init_l_Lasm_JS_Deno_instFromJSKvKeyPart();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKvKeyPart);
l_Lasm_JS_Deno_instFromJSKvEntry = _init_l_Lasm_JS_Deno_instFromJSKvEntry();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKvEntry);
l_Lasm_JS_Deno_instToJSAtomicCheck = _init_l_Lasm_JS_Deno_instToJSAtomicCheck();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSAtomicCheck);
l_Lasm_JS_Deno_instToJSKvMutation = _init_l_Lasm_JS_Deno_instToJSKvMutation();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSKvMutation);
l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions = _init_l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions);
l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions = _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions);
l_Lasm_JS_Deno_instFromJSAtomicOperationCommit = _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit);
l_Lasm_JS_Deno_instToJSKvGetOptions = _init_l_Lasm_JS_Deno_instToJSKvGetOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSKvGetOptions);
l_Lasm_JS_Deno_instFromJSKvEntryMaybe = _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKvEntryMaybe);
l_Lasm_JS_Deno_instToJSKvGetManyOptions = _init_l_Lasm_JS_Deno_instToJSKvGetManyOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSKvGetManyOptions);
l_Lasm_JS_Deno_instToJSKvSetOptions = _init_l_Lasm_JS_Deno_instToJSKvSetOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSKvSetOptions);
l_Lasm_JS_Deno_instFromJSKvCommitResult = _init_l_Lasm_JS_Deno_instFromJSKvCommitResult();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKvCommitResult);
l_Lasm_JS_Deno_instToJSKvListSelector = _init_l_Lasm_JS_Deno_instToJSKvListSelector();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSKvListSelector);
l_Lasm_JS_Deno_instToJSKvListOptions = _init_l_Lasm_JS_Deno_instToJSKvListOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSKvListOptions);
l_Lasm_JS_Deno_instToJSKvEnqueueOptions = _init_l_Lasm_JS_Deno_instToJSKvEnqueueOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSKvEnqueueOptions);
l_Lasm_JS_Deno_instFromJSKvListenQueueHandler = _init_l_Lasm_JS_Deno_instFromJSKvListenQueueHandler();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKvListenQueueHandler);
l_Lasm_JS_Deno_instToJSKvWatchOptions = _init_l_Lasm_JS_Deno_instToJSKvWatchOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSKvWatchOptions);
l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble = _init_l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble);
l_Lasm_JS_Deno_instToJSCronScheduleExpression = _init_l_Lasm_JS_Deno_instToJSCronScheduleExpression();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSCronScheduleExpression);
l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion = _init_l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion);
l_Lasm_JS_Deno_instToJSCronSchedule = _init_l_Lasm_JS_Deno_instToJSCronSchedule();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSCronSchedule);
l_Lasm_JS_Deno_instFromJSCronHandler = _init_l_Lasm_JS_Deno_instFromJSCronHandler();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSCronHandler);
l_Lasm_JS_Deno_instToJSCronWithOptionsOptions = _init_l_Lasm_JS_Deno_instToJSCronWithOptionsOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions);
l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler = _init_l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
