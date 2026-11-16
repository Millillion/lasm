// Lean compiler output
// Module: Lasm.JS.Deno.Kv
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Web.Streams
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
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(uint8_t, uint64_t);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
extern lean_object* l_Lasm_JS_instFromJSData;
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListIterator___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvListIterator___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvListIterator___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvListIterator___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvListIterator = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSKvListIterator___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvListIterator___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.KvListIterator"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvListIterator___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvU64 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvU64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Deno.KvU64"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvU64___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvU64___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvU64___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSKvU64___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvU64___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvU64___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSKvU64 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvU64___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSAtomicOperation = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSAtomicOperation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Deno.AtomicOperation"};
static const lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperation___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSAtomicOperation___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSAtomicOperation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSAtomicOperation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperation___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSAtomicOperation___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperation = (const lean_object*)&l_Lasm_JS_Deno_instFromJSAtomicOperation___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKv = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lasm.JS.Deno.Kv"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKv___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKv___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSKv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKv___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKv___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSKv = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKv___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_set_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_set_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_set_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_set_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_delete_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_delete_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_delete_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_delete_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_sum_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_sum_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_sum_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_sum_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_max_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_max_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_max_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_max_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_min_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_min_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_min_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_min_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqKvMutationType_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqKvMutationType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqKvMutationType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqKvMutationType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqKvMutationType___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqKvMutationType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqKvMutationType = (const lean_object*)&l_Lasm_JS_Deno_instBEqKvMutationType___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.KvMutationType.set"};
static const lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Deno.KvMutationType.delete"};
static const lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.KvMutationType.sum"};
static const lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.KvMutationType.max"};
static const lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.KvMutationType.min"};
static const lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__9_value;
static lean_once_cell_t l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10;
static lean_once_cell_t l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprKvMutationType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprKvMutationType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprKvMutationType___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprKvMutationType = (const lean_object*)&l_Lasm_JS_Deno_instReprKvMutationType___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedKvMutationType_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedKvMutationType;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "set"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sum"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "min"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvMutationType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvMutationType = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutationType___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSKvMutationType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvMutationType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.KvMutationType"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvMutationType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_strong_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_strong_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_strong_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_strong_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_eventual_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_eventual_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_eventual_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_eventual_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqKvConsistencyLevel_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqKvConsistencyLevel_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqKvConsistencyLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqKvConsistencyLevel_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqKvConsistencyLevel___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqKvConsistencyLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqKvConsistencyLevel = (const lean_object*)&l_Lasm_JS_Deno_instBEqKvConsistencyLevel___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Deno.KvConsistencyLevel.strong"};
static const lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Deno.KvConsistencyLevel.eventual"};
static const lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprKvConsistencyLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprKvConsistencyLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel = (const lean_object*)&l_Lasm_JS_Deno_instReprKvConsistencyLevel___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strong"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "eventual"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvConsistencyLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvConsistencyLevel___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvConsistencyLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvConsistencyLevel = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvConsistencyLevel___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.KvConsistencyLevel"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSKvConsistencyLevel = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___closed__2_value;
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
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvKeyPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvKeyPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvKeyPart___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvKeyPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvKeyPart___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringKvKeyPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeStringKvKeyPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeStringKvKeyPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeStringKvKeyPart___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeStringKvKeyPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeStringKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instCoeStringKvKeyPart___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeFloatKvKeyPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatKvKeyPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatKvKeyPart___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeIntKvKeyPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeIntKvKeyPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeIntKvKeyPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeIntKvKeyPart___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeIntKvKeyPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeIntKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instCoeIntKvKeyPart___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeBoolKvKeyPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeBoolKvKeyPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instCoeBoolKvKeyPart___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvKeyPart___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvKeyPart___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvKeyPart___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvKeyPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSKvKeyPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSKvKeyPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSKvKeyPart___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvKeyPart___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvKeyPart___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Deno.KvKeyPart"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvKeyPart___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvKeyPart___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvKeyPart___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSKvKeyPart___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSKvKeyPart___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvKeyPart___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvKeyPart___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSKvKeyPart = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvKeyPart___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "versionstamp"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSKvEntry___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___closed__0;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSKvEntry___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___closed__1;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvEntry___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Deno.KvEntry"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvEntry___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSKvEntry___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntry;
static const lean_closure_object l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__1_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__2_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__3_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__4_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__5_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__1_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__7_value),((lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__2_value),((lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__3_value),((lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__4_value),((lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__5_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__8_value),((lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSAtomicCheck___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvKeyPart___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicCheck___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "expireIn"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvMutation___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvMutation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutation___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutation___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvMutation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvMutation___lam__1, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvKeyPart___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSKvMutation___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvMutation___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutation___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvMutation = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvMutation___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvMutation___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "delay"};
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "keysIfUndelivered"};
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "backoffSchedule"};
static const lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0;
static lean_once_cell_t l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1;
static lean_once_cell_t l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2;
static lean_once_cell_t l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions;
static const lean_string_object l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ok"};
static const lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__1;
static const lean_string_object l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Deno.AtomicOperationCommit"};
static const lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "consistency"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvGetOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvConsistencyLevel___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvGetOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvGetOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvGetOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvGetOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__0;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Deno.KvEntryMaybe"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvGetManyOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvGetOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvSetOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__0;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.KvCommitResult"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "prefix"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListSelector___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instToJSKvListSelector___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instToJSKvListSelector___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListSelector;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "limit"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cursor"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "reverse"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "batchSize"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvListOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvListOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvListOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvListOptions___lam__0, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvMutation___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSKvConsistencyLevel___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvEnqueueOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvEnqueueOptions;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvListenQueueHandler = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSKvListenQueueHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.KvListenQueueHandler"};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvListenQueueHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvListenQueueHandler___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSKvListenQueueHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSKvListenQueueHandler___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSKvListenQueueHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvListenQueueHandler___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSKvListenQueueHandler = (const lean_object*)&l_Lasm_JS_Deno_instFromJSKvListenQueueHandler___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Object"};
static const lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "defineProperty"};
static const lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__3_value)}};
static const lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4_value;
static lean_once_cell_t l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5;
static lean_once_cell_t l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6;
static lean_once_cell_t l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7;
static lean_once_cell_t l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8;
static lean_once_cell_t l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "raw"};
static const lean_object* l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvWatchOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__1_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvWatchOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvWatchOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvWatchOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvWatchOptions___closed__0_value;
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
static const lean_closure_object l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble = (const lean_object*)&l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble = (const lean_object*)&l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSCronScheduleExpression___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpression___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronScheduleExpression___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpression = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronScheduleExpression___closed__0_value;
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
static const lean_closure_object l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion = (const lean_object*)&l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "minute"};
static const lean_object* l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hour"};
static const lean_object* l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "dayOfMonth"};
static const lean_object* l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "month"};
static const lean_object* l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dayOfWeek"};
static const lean_object* l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronSchedule___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSCronSchedule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSCronSchedule___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSCronSchedule___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronSchedule___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSCronSchedule = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronSchedule___closed__0_value;
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
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule = (const lean_object*)&l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule = (const lean_object*)&l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSCronHandler = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCronHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Deno.CronHandler"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCronHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCronHandler___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCronHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSCronHandler___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCronHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCronHandler___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSCronHandler = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCronHandler___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_CronHandler_ofFn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___closed__0;
static lean_once_cell_t l_Lasm_JS_Deno_CronHandler_ofFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___closed__1;
static lean_once_cell_t l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Deno_CronHandler_ofFn___closed__2;
static lean_once_cell_t l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___closed__3;
static lean_once_cell_t l_Lasm_JS_Deno_CronHandler_ofFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Deno_CronHandler_ofFn___closed__4;
static lean_once_cell_t l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___closed__5;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsOptions;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsHandler = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Deno.CronWithOptionsHandler"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSKvListIterator___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCronWithOptionsHandler___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_cursor(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_cursor___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0;
static const lean_string_object l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "call"};
static const lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_KvListIterator_iterator___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Symbol"};
static const lean_object* l_Lasm_JS_Deno_KvListIterator_iterator___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_KvListIterator_iterator___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_KvListIterator_iterator___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "asyncIterator"};
static const lean_object* l_Lasm_JS_Deno_KvListIterator_iterator___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_KvListIterator_iterator___closed__1_value;
static const lean_array_object l_Lasm_JS_Deno_KvListIterator_iterator___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Deno_KvListIterator_iterator___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_KvListIterator_iterator___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_iterator(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_iterator___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__7_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__8 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Array (Lasm.JS.Deno.KvKeyPart)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "an element is not Lasm.JS.Deno.KvKeyPart"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "done"};
static const lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "next"};
static const lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_JS_Deno_KvListIterator_values___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_KvListIterator_values___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_KvListIterator_values___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_KvListIterator_values___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_KvListIterator_values___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_KvListIterator_values___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_KvU64_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Deno.KvU64.new"};
static const lean_object* l_Lasm_JS_Deno_KvU64_new___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_KvU64_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_KvU64_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Deno_KvU64_new___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_KvU64_new___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_KvU64_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Deno.KvU64"};
static const lean_object* l_Lasm_JS_Deno_KvU64_new___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_KvU64_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_KvU64_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_KvU64_new___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_KvU64_new___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_KvU64_new___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_KvU64_new___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_KvU64_new___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_new(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_new___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_value(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_value___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_AtomicOperation_check___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "check"};
static const lean_object* l_Lasm_JS_Deno_AtomicOperation_check___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_AtomicOperation_check___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_check(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_check___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_AtomicOperation_mutate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mutate"};
static const lean_object* l_Lasm_JS_Deno_AtomicOperation_mutate___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_AtomicOperation_mutate___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_mutate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_mutate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_sum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_sum___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_min(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_min___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_max(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_max___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_set(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_delete(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_delete___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_AtomicOperation_enqueue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "enqueue"};
static const lean_object* l_Lasm_JS_Deno_AtomicOperation_enqueue___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_AtomicOperation_enqueue___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_enqueue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_enqueue___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_AtomicOperation_commit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "commit"};
static const lean_object* l_Lasm_JS_Deno_AtomicOperation_commit___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_AtomicOperation_commit___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Deno_AtomicOperation_commit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_AtomicOperation_commit___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_commit(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_commit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Kv_get___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lasm_JS_Deno_Kv_get___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Kv_get___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Array (Lasm.JS.Deno.KvEntryMaybe)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "an element is not Lasm.JS.Deno.KvEntryMaybe"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Kv_getMany___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "getMany"};
static const lean_object* l_Lasm_JS_Deno_Kv_getMany___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Kv_getMany___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_getMany(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_getMany___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_set(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_delete(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_delete___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__1(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Kv_list___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "list"};
static const lean_object* l_Lasm_JS_Deno_Kv_list___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Kv_list___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_list(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_list___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_enqueue_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_enqueue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_enqueue___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Kv_listenQueue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "listenQueue"};
static const lean_object* l_Lasm_JS_Deno_Kv_listenQueue___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Kv_listenQueue___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_listenQueue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_listenQueue___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Kv_atomic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "atomic"};
static const lean_object* l_Lasm_JS_Deno_Kv_atomic___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Kv_atomic___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_atomic(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_atomic___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Kv_watch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "watch"};
static const lean_object* l_Lasm_JS_Deno_Kv_watch___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Kv_watch___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_watch(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_watch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Kv_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Lasm_JS_Deno_Kv_close___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Kv_close___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_close(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_openKv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_openKv___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_openKv___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_openKv___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_openKv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Deno.openKv"};
static const lean_object* l_Lasm_JS_Deno_openKv___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_openKv___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_openKv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Deno.openKv"};
static const lean_object* l_Lasm_JS_Deno_openKv___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_openKv___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_openKv___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_openKv___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_KvU64_new___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_openKv___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_openKv___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_openKv___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_cron___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.JS.Deno.cron"};
static const lean_object* l_Lasm_JS_Deno_cron___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_cron___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_cron___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Deno.cron"};
static const lean_object* l_Lasm_JS_Deno_cron___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_cron___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_cron___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_cron___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_KvU64_new___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_cron___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_cron___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_cron___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cron(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cron___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_cronWithOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Deno.cronWithOptions"};
static const lean_object* l_Lasm_JS_Deno_cronWithOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_cronWithOptions___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_cronWithOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_cronWithOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_KvU64_new___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_cron___closed__1_value),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_cronWithOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_cronWithOptions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cronWithOptions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cronWithOptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListIterator___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0(lean_object* v_x_9_){
_start:
{
if (lean_obj_tag(v_x_9_) == 9)
{
lean_object* v_value_10_; lean_object* v___x_11_; 
v_value_10_ = lean_ctor_get(v_x_9_, 0);
lean_inc(v_value_10_);
v___x_11_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_11_, 0, v_value_10_);
return v___x_11_;
}
else
{
lean_object* v___x_12_; 
v___x_12_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Deno_instFromJSKvListIterator___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_ctorIdx(uint8_t v_x_43_){
_start:
{
switch(v_x_43_)
{
case 0:
{
lean_object* v___x_44_; 
v___x_44_ = lean_unsigned_to_nat(0u);
return v___x_44_;
}
case 1:
{
lean_object* v___x_45_; 
v___x_45_ = lean_unsigned_to_nat(1u);
return v___x_45_;
}
case 2:
{
lean_object* v___x_46_; 
v___x_46_ = lean_unsigned_to_nat(2u);
return v___x_46_;
}
case 3:
{
lean_object* v___x_47_; 
v___x_47_ = lean_unsigned_to_nat(3u);
return v___x_47_;
}
default: 
{
lean_object* v___x_48_; 
v___x_48_ = lean_unsigned_to_nat(4u);
return v___x_48_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_ctorIdx___boxed(lean_object* v_x_49_){
_start:
{
uint8_t v_x_boxed_50_; lean_object* v_res_51_; 
v_x_boxed_50_ = lean_unbox(v_x_49_);
v_res_51_ = l_Lasm_JS_Deno_KvMutationType_ctorIdx(v_x_boxed_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_ctorElim___redArg(lean_object* v_k_52_){
_start:
{
lean_inc(v_k_52_);
return v_k_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_ctorElim___redArg___boxed(lean_object* v_k_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lasm_JS_Deno_KvMutationType_ctorElim___redArg(v_k_53_);
lean_dec(v_k_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_ctorElim(lean_object* v_motive_55_, lean_object* v_ctorIdx_56_, uint8_t v_t_57_, lean_object* v_h_58_, lean_object* v_k_59_){
_start:
{
lean_inc(v_k_59_);
return v_k_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_ctorElim___boxed(lean_object* v_motive_60_, lean_object* v_ctorIdx_61_, lean_object* v_t_62_, lean_object* v_h_63_, lean_object* v_k_64_){
_start:
{
uint8_t v_t_boxed_65_; lean_object* v_res_66_; 
v_t_boxed_65_ = lean_unbox(v_t_62_);
v_res_66_ = l_Lasm_JS_Deno_KvMutationType_ctorElim(v_motive_60_, v_ctorIdx_61_, v_t_boxed_65_, v_h_63_, v_k_64_);
lean_dec(v_k_64_);
lean_dec(v_ctorIdx_61_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_set_elim___redArg(lean_object* v_set_67_){
_start:
{
lean_inc(v_set_67_);
return v_set_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_set_elim___redArg___boxed(lean_object* v_set_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lasm_JS_Deno_KvMutationType_set_elim___redArg(v_set_68_);
lean_dec(v_set_68_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_set_elim(lean_object* v_motive_70_, uint8_t v_t_71_, lean_object* v_h_72_, lean_object* v_set_73_){
_start:
{
lean_inc(v_set_73_);
return v_set_73_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_set_elim___boxed(lean_object* v_motive_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_set_77_){
_start:
{
uint8_t v_t_boxed_78_; lean_object* v_res_79_; 
v_t_boxed_78_ = lean_unbox(v_t_75_);
v_res_79_ = l_Lasm_JS_Deno_KvMutationType_set_elim(v_motive_74_, v_t_boxed_78_, v_h_76_, v_set_77_);
lean_dec(v_set_77_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_delete_elim___redArg(lean_object* v_delete_80_){
_start:
{
lean_inc(v_delete_80_);
return v_delete_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_delete_elim___redArg___boxed(lean_object* v_delete_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lasm_JS_Deno_KvMutationType_delete_elim___redArg(v_delete_81_);
lean_dec(v_delete_81_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_delete_elim(lean_object* v_motive_83_, uint8_t v_t_84_, lean_object* v_h_85_, lean_object* v_delete_86_){
_start:
{
lean_inc(v_delete_86_);
return v_delete_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_delete_elim___boxed(lean_object* v_motive_87_, lean_object* v_t_88_, lean_object* v_h_89_, lean_object* v_delete_90_){
_start:
{
uint8_t v_t_boxed_91_; lean_object* v_res_92_; 
v_t_boxed_91_ = lean_unbox(v_t_88_);
v_res_92_ = l_Lasm_JS_Deno_KvMutationType_delete_elim(v_motive_87_, v_t_boxed_91_, v_h_89_, v_delete_90_);
lean_dec(v_delete_90_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_sum_elim___redArg(lean_object* v_sum_93_){
_start:
{
lean_inc(v_sum_93_);
return v_sum_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_sum_elim___redArg___boxed(lean_object* v_sum_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lasm_JS_Deno_KvMutationType_sum_elim___redArg(v_sum_94_);
lean_dec(v_sum_94_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_sum_elim(lean_object* v_motive_96_, uint8_t v_t_97_, lean_object* v_h_98_, lean_object* v_sum_99_){
_start:
{
lean_inc(v_sum_99_);
return v_sum_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_sum_elim___boxed(lean_object* v_motive_100_, lean_object* v_t_101_, lean_object* v_h_102_, lean_object* v_sum_103_){
_start:
{
uint8_t v_t_boxed_104_; lean_object* v_res_105_; 
v_t_boxed_104_ = lean_unbox(v_t_101_);
v_res_105_ = l_Lasm_JS_Deno_KvMutationType_sum_elim(v_motive_100_, v_t_boxed_104_, v_h_102_, v_sum_103_);
lean_dec(v_sum_103_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_max_elim___redArg(lean_object* v_max_106_){
_start:
{
lean_inc(v_max_106_);
return v_max_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_max_elim___redArg___boxed(lean_object* v_max_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lasm_JS_Deno_KvMutationType_max_elim___redArg(v_max_107_);
lean_dec(v_max_107_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_max_elim(lean_object* v_motive_109_, uint8_t v_t_110_, lean_object* v_h_111_, lean_object* v_max_112_){
_start:
{
lean_inc(v_max_112_);
return v_max_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_max_elim___boxed(lean_object* v_motive_113_, lean_object* v_t_114_, lean_object* v_h_115_, lean_object* v_max_116_){
_start:
{
uint8_t v_t_boxed_117_; lean_object* v_res_118_; 
v_t_boxed_117_ = lean_unbox(v_t_114_);
v_res_118_ = l_Lasm_JS_Deno_KvMutationType_max_elim(v_motive_113_, v_t_boxed_117_, v_h_115_, v_max_116_);
lean_dec(v_max_116_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_min_elim___redArg(lean_object* v_min_119_){
_start:
{
lean_inc(v_min_119_);
return v_min_119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_min_elim___redArg___boxed(lean_object* v_min_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lasm_JS_Deno_KvMutationType_min_elim___redArg(v_min_120_);
lean_dec(v_min_120_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_min_elim(lean_object* v_motive_122_, uint8_t v_t_123_, lean_object* v_h_124_, lean_object* v_min_125_){
_start:
{
lean_inc(v_min_125_);
return v_min_125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvMutationType_min_elim___boxed(lean_object* v_motive_126_, lean_object* v_t_127_, lean_object* v_h_128_, lean_object* v_min_129_){
_start:
{
uint8_t v_t_boxed_130_; lean_object* v_res_131_; 
v_t_boxed_130_ = lean_unbox(v_t_127_);
v_res_131_ = l_Lasm_JS_Deno_KvMutationType_min_elim(v_motive_126_, v_t_boxed_130_, v_h_128_, v_min_129_);
lean_dec(v_min_129_);
return v_res_131_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqKvMutationType_beq(uint8_t v_x_132_, uint8_t v_y_133_){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_134_ = l_Lasm_JS_Deno_KvMutationType_ctorIdx(v_x_132_);
v___x_135_ = l_Lasm_JS_Deno_KvMutationType_ctorIdx(v_y_133_);
v___x_136_ = lean_nat_dec_eq(v___x_134_, v___x_135_);
lean_dec(v___x_135_);
lean_dec(v___x_134_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqKvMutationType_beq___boxed(lean_object* v_x_137_, lean_object* v_y_138_){
_start:
{
uint8_t v_x_21__boxed_139_; uint8_t v_y_22__boxed_140_; uint8_t v_res_141_; lean_object* v_r_142_; 
v_x_21__boxed_139_ = lean_unbox(v_x_137_);
v_y_22__boxed_140_ = lean_unbox(v_y_138_);
v_res_141_ = l_Lasm_JS_Deno_instBEqKvMutationType_beq(v_x_21__boxed_139_, v_y_22__boxed_140_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_unsigned_to_nat(2u);
v___x_161_ = lean_nat_to_int(v___x_160_);
return v___x_161_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_unsigned_to_nat(1u);
v___x_163_ = lean_nat_to_int(v___x_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr(uint8_t v_x_164_, lean_object* v_prec_165_){
_start:
{
lean_object* v___y_167_; lean_object* v___y_174_; lean_object* v___y_181_; lean_object* v___y_188_; lean_object* v___y_195_; 
switch(v_x_164_)
{
case 0:
{
lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_201_ = lean_unsigned_to_nat(1024u);
v___x_202_ = lean_nat_dec_le(v___x_201_, v_prec_165_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; 
v___x_203_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10);
v___y_167_ = v___x_203_;
goto v___jp_166_;
}
else
{
lean_object* v___x_204_; 
v___x_204_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___y_167_ = v___x_204_;
goto v___jp_166_;
}
}
case 1:
{
lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_205_ = lean_unsigned_to_nat(1024u);
v___x_206_ = lean_nat_dec_le(v___x_205_, v_prec_165_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; 
v___x_207_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10);
v___y_174_ = v___x_207_;
goto v___jp_173_;
}
else
{
lean_object* v___x_208_; 
v___x_208_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___y_174_ = v___x_208_;
goto v___jp_173_;
}
}
case 2:
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = lean_unsigned_to_nat(1024u);
v___x_210_ = lean_nat_dec_le(v___x_209_, v_prec_165_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; 
v___x_211_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10);
v___y_181_ = v___x_211_;
goto v___jp_180_;
}
else
{
lean_object* v___x_212_; 
v___x_212_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___y_181_ = v___x_212_;
goto v___jp_180_;
}
}
case 3:
{
lean_object* v___x_213_; uint8_t v___x_214_; 
v___x_213_ = lean_unsigned_to_nat(1024u);
v___x_214_ = lean_nat_dec_le(v___x_213_, v_prec_165_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; 
v___x_215_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10);
v___y_188_ = v___x_215_;
goto v___jp_187_;
}
else
{
lean_object* v___x_216_; 
v___x_216_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___y_188_ = v___x_216_;
goto v___jp_187_;
}
}
default: 
{
lean_object* v___x_217_; uint8_t v___x_218_; 
v___x_217_ = lean_unsigned_to_nat(1024u);
v___x_218_ = lean_nat_dec_le(v___x_217_, v_prec_165_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; 
v___x_219_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10);
v___y_195_ = v___x_219_;
goto v___jp_194_;
}
else
{
lean_object* v___x_220_; 
v___x_220_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___y_195_ = v___x_220_;
goto v___jp_194_;
}
}
}
v___jp_166_:
{
lean_object* v___x_168_; lean_object* v___x_169_; uint8_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_168_ = ((lean_object*)(l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__1));
lean_inc(v___y_167_);
v___x_169_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_169_, 0, v___y_167_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
v___x_170_ = 0;
v___x_171_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_171_, 0, v___x_169_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*1, v___x_170_);
v___x_172_ = l_Repr_addAppParen(v___x_171_, v_prec_165_);
return v___x_172_;
}
v___jp_173_:
{
lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_175_ = ((lean_object*)(l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__3));
lean_inc(v___y_174_);
v___x_176_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_176_, 0, v___y_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = 0;
v___x_178_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set_uint8(v___x_178_, sizeof(void*)*1, v___x_177_);
v___x_179_ = l_Repr_addAppParen(v___x_178_, v_prec_165_);
return v___x_179_;
}
v___jp_180_:
{
lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_182_ = ((lean_object*)(l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__5));
lean_inc(v___y_181_);
v___x_183_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_183_, 0, v___y_181_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = 0;
v___x_185_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_185_, 0, v___x_183_);
lean_ctor_set_uint8(v___x_185_, sizeof(void*)*1, v___x_184_);
v___x_186_ = l_Repr_addAppParen(v___x_185_, v_prec_165_);
return v___x_186_;
}
v___jp_187_:
{
lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_189_ = ((lean_object*)(l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__7));
lean_inc(v___y_188_);
v___x_190_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_190_, 0, v___y_188_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = 0;
v___x_192_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set_uint8(v___x_192_, sizeof(void*)*1, v___x_191_);
v___x_193_ = l_Repr_addAppParen(v___x_192_, v_prec_165_);
return v___x_193_;
}
v___jp_194_:
{
lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_196_ = ((lean_object*)(l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__9));
lean_inc(v___y_195_);
v___x_197_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_197_, 0, v___y_195_);
lean_ctor_set(v___x_197_, 1, v___x_196_);
v___x_198_ = 0;
v___x_199_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_199_, 0, v___x_197_);
lean_ctor_set_uint8(v___x_199_, sizeof(void*)*1, v___x_198_);
v___x_200_ = l_Repr_addAppParen(v___x_199_, v_prec_165_);
return v___x_200_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvMutationType_repr___boxed(lean_object* v_x_221_, lean_object* v_prec_222_){
_start:
{
uint8_t v_x_279__boxed_223_; lean_object* v_res_224_; 
v_x_279__boxed_223_ = lean_unbox(v_x_221_);
v_res_224_ = l_Lasm_JS_Deno_instReprKvMutationType_repr(v_x_279__boxed_223_, v_prec_222_);
lean_dec(v_prec_222_);
return v_res_224_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedKvMutationType_default(void){
_start:
{
uint8_t v___x_227_; 
v___x_227_ = 0;
return v___x_227_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedKvMutationType(void){
_start:
{
uint8_t v___x_228_; 
v___x_228_ = 0;
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0(uint8_t v_x_244_){
_start:
{
switch(v_x_244_)
{
case 0:
{
lean_object* v___x_245_; 
v___x_245_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__1));
return v___x_245_;
}
case 1:
{
lean_object* v___x_246_; 
v___x_246_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__3));
return v___x_246_;
}
case 2:
{
lean_object* v___x_247_; 
v___x_247_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__5));
return v___x_247_;
}
case 3:
{
lean_object* v___x_248_; 
v___x_248_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__7));
return v___x_248_;
}
default: 
{
lean_object* v___x_249_; 
v___x_249_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__9));
return v___x_249_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___boxed(lean_object* v_x_250_){
_start:
{
uint8_t v_x_91__boxed_251_; lean_object* v_res_252_; 
v_x_91__boxed_251_ = lean_unbox(v_x_250_);
v_res_252_ = l_Lasm_JS_Deno_instToJSKvMutationType___lam__0(v_x_91__boxed_251_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0(lean_object* v_x_273_){
_start:
{
if (lean_obj_tag(v_x_273_) == 4)
{
lean_object* v_s_276_; lean_object* v___x_277_; uint8_t v___x_278_; 
v_s_276_ = lean_ctor_get(v_x_273_, 0);
v___x_277_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__0));
v___x_278_ = lean_string_dec_eq(v_s_276_, v___x_277_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__2));
v___x_280_ = lean_string_dec_eq(v_s_276_, v___x_279_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__4));
v___x_282_ = lean_string_dec_eq(v_s_276_, v___x_281_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; uint8_t v___x_284_; 
v___x_283_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__6));
v___x_284_ = lean_string_dec_eq(v_s_276_, v___x_283_);
if (v___x_284_ == 0)
{
lean_object* v___x_285_; uint8_t v___x_286_; 
v___x_285_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__8));
v___x_286_ = lean_string_dec_eq(v_s_276_, v___x_285_);
if (v___x_286_ == 0)
{
goto v___jp_274_;
}
else
{
lean_object* v___x_287_; 
v___x_287_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__2));
return v___x_287_;
}
}
else
{
lean_object* v___x_288_; 
v___x_288_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__3));
return v___x_288_;
}
}
else
{
lean_object* v___x_289_; 
v___x_289_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__4));
return v___x_289_;
}
}
else
{
lean_object* v___x_290_; 
v___x_290_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__5));
return v___x_290_;
}
}
else
{
lean_object* v___x_291_; 
v___x_291_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__6));
return v___x_291_;
}
}
else
{
goto v___jp_274_;
}
v___jp_274_:
{
lean_object* v___x_275_; 
v___x_275_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___closed__1));
return v___x_275_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0___boxed(lean_object* v_x_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lasm_JS_Deno_instFromJSKvMutationType___lam__0(v_x_292_);
lean_dec(v_x_292_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_ctorIdx(uint8_t v_x_301_){
_start:
{
if (v_x_301_ == 0)
{
lean_object* v___x_302_; 
v___x_302_ = lean_unsigned_to_nat(0u);
return v___x_302_;
}
else
{
lean_object* v___x_303_; 
v___x_303_ = lean_unsigned_to_nat(1u);
return v___x_303_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_ctorIdx___boxed(lean_object* v_x_304_){
_start:
{
uint8_t v_x_boxed_305_; lean_object* v_res_306_; 
v_x_boxed_305_ = lean_unbox(v_x_304_);
v_res_306_ = l_Lasm_JS_Deno_KvConsistencyLevel_ctorIdx(v_x_boxed_305_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_ctorElim___redArg(lean_object* v_k_307_){
_start:
{
lean_inc(v_k_307_);
return v_k_307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_ctorElim___redArg___boxed(lean_object* v_k_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lasm_JS_Deno_KvConsistencyLevel_ctorElim___redArg(v_k_308_);
lean_dec(v_k_308_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_ctorElim(lean_object* v_motive_310_, lean_object* v_ctorIdx_311_, uint8_t v_t_312_, lean_object* v_h_313_, lean_object* v_k_314_){
_start:
{
lean_inc(v_k_314_);
return v_k_314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_ctorElim___boxed(lean_object* v_motive_315_, lean_object* v_ctorIdx_316_, lean_object* v_t_317_, lean_object* v_h_318_, lean_object* v_k_319_){
_start:
{
uint8_t v_t_boxed_320_; lean_object* v_res_321_; 
v_t_boxed_320_ = lean_unbox(v_t_317_);
v_res_321_ = l_Lasm_JS_Deno_KvConsistencyLevel_ctorElim(v_motive_315_, v_ctorIdx_316_, v_t_boxed_320_, v_h_318_, v_k_319_);
lean_dec(v_k_319_);
lean_dec(v_ctorIdx_316_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_strong_elim___redArg(lean_object* v_strong_322_){
_start:
{
lean_inc(v_strong_322_);
return v_strong_322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_strong_elim___redArg___boxed(lean_object* v_strong_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lasm_JS_Deno_KvConsistencyLevel_strong_elim___redArg(v_strong_323_);
lean_dec(v_strong_323_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_strong_elim(lean_object* v_motive_325_, uint8_t v_t_326_, lean_object* v_h_327_, lean_object* v_strong_328_){
_start:
{
lean_inc(v_strong_328_);
return v_strong_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_strong_elim___boxed(lean_object* v_motive_329_, lean_object* v_t_330_, lean_object* v_h_331_, lean_object* v_strong_332_){
_start:
{
uint8_t v_t_boxed_333_; lean_object* v_res_334_; 
v_t_boxed_333_ = lean_unbox(v_t_330_);
v_res_334_ = l_Lasm_JS_Deno_KvConsistencyLevel_strong_elim(v_motive_329_, v_t_boxed_333_, v_h_331_, v_strong_332_);
lean_dec(v_strong_332_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_eventual_elim___redArg(lean_object* v_eventual_335_){
_start:
{
lean_inc(v_eventual_335_);
return v_eventual_335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_eventual_elim___redArg___boxed(lean_object* v_eventual_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lasm_JS_Deno_KvConsistencyLevel_eventual_elim___redArg(v_eventual_336_);
lean_dec(v_eventual_336_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_eventual_elim(lean_object* v_motive_338_, uint8_t v_t_339_, lean_object* v_h_340_, lean_object* v_eventual_341_){
_start:
{
lean_inc(v_eventual_341_);
return v_eventual_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvConsistencyLevel_eventual_elim___boxed(lean_object* v_motive_342_, lean_object* v_t_343_, lean_object* v_h_344_, lean_object* v_eventual_345_){
_start:
{
uint8_t v_t_boxed_346_; lean_object* v_res_347_; 
v_t_boxed_346_ = lean_unbox(v_t_343_);
v_res_347_ = l_Lasm_JS_Deno_KvConsistencyLevel_eventual_elim(v_motive_342_, v_t_boxed_346_, v_h_344_, v_eventual_345_);
lean_dec(v_eventual_345_);
return v_res_347_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqKvConsistencyLevel_beq(uint8_t v_x_348_, uint8_t v_y_349_){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; uint8_t v___x_352_; 
v___x_350_ = l_Lasm_JS_Deno_KvConsistencyLevel_ctorIdx(v_x_348_);
v___x_351_ = l_Lasm_JS_Deno_KvConsistencyLevel_ctorIdx(v_y_349_);
v___x_352_ = lean_nat_dec_eq(v___x_350_, v___x_351_);
lean_dec(v___x_351_);
lean_dec(v___x_350_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqKvConsistencyLevel_beq___boxed(lean_object* v_x_353_, lean_object* v_y_354_){
_start:
{
uint8_t v_x_21__boxed_355_; uint8_t v_y_22__boxed_356_; uint8_t v_res_357_; lean_object* v_r_358_; 
v_x_21__boxed_355_ = lean_unbox(v_x_353_);
v_y_22__boxed_356_ = lean_unbox(v_y_354_);
v_res_357_ = l_Lasm_JS_Deno_instBEqKvConsistencyLevel_beq(v_x_21__boxed_355_, v_y_22__boxed_356_);
v_r_358_ = lean_box(v_res_357_);
return v_r_358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr(uint8_t v_x_367_, lean_object* v_prec_368_){
_start:
{
lean_object* v___y_370_; lean_object* v___y_377_; 
if (v_x_367_ == 0)
{
lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_383_ = lean_unsigned_to_nat(1024u);
v___x_384_ = lean_nat_dec_le(v___x_383_, v_prec_368_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; 
v___x_385_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10);
v___y_370_ = v___x_385_;
goto v___jp_369_;
}
else
{
lean_object* v___x_386_; 
v___x_386_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___y_370_ = v___x_386_;
goto v___jp_369_;
}
}
else
{
lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_387_ = lean_unsigned_to_nat(1024u);
v___x_388_ = lean_nat_dec_le(v___x_387_, v_prec_368_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; 
v___x_389_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__10);
v___y_377_ = v___x_389_;
goto v___jp_376_;
}
else
{
lean_object* v___x_390_; 
v___x_390_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___y_377_ = v___x_390_;
goto v___jp_376_;
}
}
v___jp_369_:
{
lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_371_ = ((lean_object*)(l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__1));
lean_inc(v___y_370_);
v___x_372_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_372_, 0, v___y_370_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
v___x_373_ = 0;
v___x_374_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_374_, 0, v___x_372_);
lean_ctor_set_uint8(v___x_374_, sizeof(void*)*1, v___x_373_);
v___x_375_ = l_Repr_addAppParen(v___x_374_, v_prec_368_);
return v___x_375_;
}
v___jp_376_:
{
lean_object* v___x_378_; lean_object* v___x_379_; uint8_t v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_378_ = ((lean_object*)(l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___closed__3));
lean_inc(v___y_377_);
v___x_379_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_379_, 0, v___y_377_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
v___x_380_ = 0;
v___x_381_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_381_, 0, v___x_379_);
lean_ctor_set_uint8(v___x_381_, sizeof(void*)*1, v___x_380_);
v___x_382_ = l_Repr_addAppParen(v___x_381_, v_prec_368_);
return v___x_382_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr___boxed(lean_object* v_x_391_, lean_object* v_prec_392_){
_start:
{
uint8_t v_x_113__boxed_393_; lean_object* v_res_394_; 
v_x_113__boxed_393_ = lean_unbox(v_x_391_);
v_res_394_ = l_Lasm_JS_Deno_instReprKvConsistencyLevel_repr(v_x_113__boxed_393_, v_prec_392_);
lean_dec(v_prec_392_);
return v_res_394_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel_default(void){
_start:
{
uint8_t v___x_397_; 
v___x_397_ = 0;
return v___x_397_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel(void){
_start:
{
uint8_t v___x_398_; 
v___x_398_ = 0;
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0(uint8_t v_x_405_){
_start:
{
if (v_x_405_ == 0)
{
lean_object* v___x_406_; 
v___x_406_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__1));
return v___x_406_;
}
else
{
lean_object* v___x_407_; 
v___x_407_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__3));
return v___x_407_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___boxed(lean_object* v_x_408_){
_start:
{
uint8_t v_x_40__boxed_409_; lean_object* v_res_410_; 
v_x_40__boxed_409_ = lean_unbox(v_x_408_);
v_res_410_ = l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0(v_x_40__boxed_409_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0(lean_object* v_x_421_){
_start:
{
if (lean_obj_tag(v_x_421_) == 4)
{
lean_object* v_s_424_; lean_object* v___x_425_; uint8_t v___x_426_; 
v_s_424_ = lean_ctor_get(v_x_421_, 0);
v___x_425_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__0));
v___x_426_ = lean_string_dec_eq(v_s_424_, v___x_425_);
if (v___x_426_ == 0)
{
lean_object* v___x_427_; uint8_t v___x_428_; 
v___x_427_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__2));
v___x_428_ = lean_string_dec_eq(v_s_424_, v___x_427_);
if (v___x_428_ == 0)
{
goto v___jp_422_;
}
else
{
lean_object* v___x_429_; 
v___x_429_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___closed__1));
return v___x_429_;
}
}
else
{
lean_object* v___x_430_; 
v___x_430_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___closed__2));
return v___x_430_;
}
}
else
{
goto v___jp_422_;
}
v___jp_422_:
{
lean_object* v___x_423_; 
v___x_423_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___closed__0));
return v___x_423_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0___boxed(lean_object* v_x_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Lasm_JS_Deno_instFromJSKvConsistencyLevel___lam__0(v_x_431_);
lean_dec(v_x_431_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorIdx(lean_object* v_x_440_){
_start:
{
switch(lean_obj_tag(v_x_440_))
{
case 0:
{
lean_object* v___x_441_; 
v___x_441_ = lean_unsigned_to_nat(0u);
return v___x_441_;
}
case 1:
{
lean_object* v___x_442_; 
v___x_442_ = lean_unsigned_to_nat(1u);
return v___x_442_;
}
case 2:
{
lean_object* v___x_443_; 
v___x_443_ = lean_unsigned_to_nat(2u);
return v___x_443_;
}
case 3:
{
lean_object* v___x_444_; 
v___x_444_ = lean_unsigned_to_nat(3u);
return v___x_444_;
}
default: 
{
lean_object* v___x_445_; 
v___x_445_ = lean_unsigned_to_nat(4u);
return v___x_445_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorIdx___boxed(lean_object* v_x_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lasm_JS_Deno_KvKeyPart_ctorIdx(v_x_446_);
lean_dec_ref(v_x_446_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(lean_object* v_t_448_, lean_object* v_k_449_){
_start:
{
switch(lean_obj_tag(v_t_448_))
{
case 2:
{
double v_value_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_value_450_ = lean_ctor_get_float(v_t_448_, 0);
lean_dec_ref_known(v_t_448_, 0);
v___x_451_ = lean_box_float(v_value_450_);
v___x_452_ = lean_apply_1(v_k_449_, v___x_451_);
return v___x_452_;
}
case 3:
{
lean_object* v_value_453_; lean_object* v___x_454_; 
v_value_453_ = lean_ctor_get(v_t_448_, 0);
lean_inc(v_value_453_);
lean_dec_ref_known(v_t_448_, 1);
v___x_454_ = lean_apply_1(v_k_449_, v_value_453_);
return v___x_454_;
}
case 4:
{
uint8_t v_value_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v_value_455_ = lean_ctor_get_uint8(v_t_448_, 0);
lean_dec_ref_known(v_t_448_, 0);
v___x_456_ = lean_box(v_value_455_);
v___x_457_ = lean_apply_1(v_k_449_, v___x_456_);
return v___x_457_;
}
default: 
{
lean_object* v_value_458_; lean_object* v___x_459_; 
v_value_458_ = lean_ctor_get(v_t_448_, 0);
lean_inc_ref(v_value_458_);
lean_dec_ref(v_t_448_);
v___x_459_ = lean_apply_1(v_k_449_, v_value_458_);
return v___x_459_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorElim(lean_object* v_motive_460_, lean_object* v_ctorIdx_461_, lean_object* v_t_462_, lean_object* v_h_463_, lean_object* v_k_464_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_462_, v_k_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_ctorElim___boxed(lean_object* v_motive_466_, lean_object* v_ctorIdx_467_, lean_object* v_t_468_, lean_object* v_h_469_, lean_object* v_k_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim(v_motive_466_, v_ctorIdx_467_, v_t_468_, v_h_469_, v_k_470_);
lean_dec(v_ctorIdx_467_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_uint8Array_elim___redArg(lean_object* v_t_472_, lean_object* v_uint8Array_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_472_, v_uint8Array_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_uint8Array_elim(lean_object* v_motive_475_, lean_object* v_t_476_, lean_object* v_h_477_, lean_object* v_uint8Array_478_){
_start:
{
lean_object* v___x_479_; 
v___x_479_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_476_, v_uint8Array_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_domString_elim___redArg(lean_object* v_t_480_, lean_object* v_domString_481_){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_480_, v_domString_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_domString_elim(lean_object* v_motive_483_, lean_object* v_t_484_, lean_object* v_h_485_, lean_object* v_domString_486_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_484_, v_domString_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_double_elim___redArg(lean_object* v_t_488_, lean_object* v_double_489_){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_488_, v_double_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_double_elim(lean_object* v_motive_491_, lean_object* v_t_492_, lean_object* v_h_493_, lean_object* v_double_494_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_492_, v_double_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_bigint_elim___redArg(lean_object* v_t_496_, lean_object* v_bigint_497_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_496_, v_bigint_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_bigint_elim(lean_object* v_motive_499_, lean_object* v_t_500_, lean_object* v_h_501_, lean_object* v_bigint_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_500_, v_bigint_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_boolean_elim___redArg(lean_object* v_t_504_, lean_object* v_boolean_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_504_, v_boolean_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvKeyPart_boolean_elim(lean_object* v_motive_507_, lean_object* v_t_508_, lean_object* v_h_509_, lean_object* v_boolean_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = l_Lasm_JS_Deno_KvKeyPart_ctorElim___redArg(v_t_508_, v_boolean_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvKeyPart___lam__0(lean_object* v_x_512_){
_start:
{
switch(lean_obj_tag(v_x_512_))
{
case 0:
{
lean_object* v_value_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_520_; 
v_value_513_ = lean_ctor_get(v_x_512_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v_x_512_);
if (v_isSharedCheck_520_ == 0)
{
v___x_515_ = v_x_512_;
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_value_513_);
lean_dec(v_x_512_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_518_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set_tag(v___x_515_, 6);
v___x_518_ = v___x_515_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_value_513_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
}
case 1:
{
lean_object* v_value_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
v_value_521_ = lean_ctor_get(v_x_512_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v_x_512_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v_x_512_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_value_521_);
lean_dec(v_x_512_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set_tag(v___x_523_, 4);
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_value_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
case 2:
{
double v_value_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
v_value_529_ = lean_ctor_get_float(v_x_512_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v_x_512_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v_x_512_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_dec(v_x_512_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
lean_ctor_set_tag(v___x_531_, 3);
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_535_, 0, v_value_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
case 3:
{
lean_object* v_value_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_549_; 
v_value_537_ = lean_ctor_get(v_x_512_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v_x_512_);
if (v_isSharedCheck_549_ == 0)
{
v___x_539_ = v_x_512_;
v_isShared_540_ = v_isSharedCheck_549_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_value_537_);
lean_dec(v_x_512_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_549_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_541_; lean_object* v___x_542_; uint8_t v___x_543_; 
v___x_541_ = lean_nat_abs(v_value_537_);
v___x_542_ = lean_cstr_to_nat("9007199254740991");
v___x_543_ = lean_nat_dec_le(v___x_541_, v___x_542_);
lean_dec(v___x_541_);
if (v___x_543_ == 0)
{
lean_object* v___x_545_; 
if (v_isShared_540_ == 0)
{
lean_ctor_set_tag(v___x_539_, 5);
v___x_545_ = v___x_539_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_value_537_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
else
{
double v___x_547_; lean_object* v___x_548_; 
lean_del_object(v___x_539_);
v___x_547_ = l_Float_ofInt(v_value_537_);
lean_dec(v_value_537_);
v___x_548_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
}
}
default: 
{
uint8_t v_value_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
v_value_550_ = lean_ctor_get_uint8(v_x_512_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v_x_512_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v_x_512_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_dec(v_x_512_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
lean_ctor_set_tag(v___x_552_, 2);
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_556_, 0, v_value_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart___lam__0(lean_object* v_value_560_){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_561_, 0, v_value_560_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringKvKeyPart___lam__0(lean_object* v_value_564_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v_value_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0(double v_value_568_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = lean_alloc_ctor(2, 0, 8);
lean_ctor_set_float(v___x_569_, 0, v_value_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0___boxed(lean_object* v_value_570_){
_start:
{
double v_value_boxed_571_; lean_object* v_res_572_; 
v_value_boxed_571_ = lean_unbox_float(v_value_570_);
lean_dec_ref(v_value_570_);
v_res_572_ = l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0(v_value_boxed_571_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeIntKvKeyPart___lam__0(lean_object* v_value_575_){
_start:
{
lean_object* v___x_576_; 
v___x_576_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_576_, 0, v_value_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0(uint8_t v_value_579_){
_start:
{
lean_object* v___x_580_; 
v___x_580_ = lean_alloc_ctor(4, 0, 1);
lean_ctor_set_uint8(v___x_580_, 0, v_value_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0___boxed(lean_object* v_value_581_){
_start:
{
uint8_t v_value_boxed_582_; lean_object* v_res_583_; 
v_value_boxed_582_ = lean_unbox(v_value_581_);
v_res_583_ = l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0(v_value_boxed_582_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvKeyPart___lam__0(lean_object* v_x_588_){
_start:
{
switch(lean_obj_tag(v_x_588_))
{
case 6:
{
lean_object* v_b_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_597_; 
v_b_589_ = lean_ctor_get(v_x_588_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v_x_588_);
if (v_isSharedCheck_597_ == 0)
{
v___x_591_ = v_x_588_;
v_isShared_592_ = v_isSharedCheck_597_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_b_589_);
lean_dec(v_x_588_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_597_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
lean_ctor_set_tag(v___x_591_, 0);
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_b_589_);
v___x_594_ = v_reuseFailAlloc_596_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_595_; 
v___x_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
return v___x_595_;
}
}
}
case 4:
{
lean_object* v_s_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_606_; 
v_s_598_ = lean_ctor_get(v_x_588_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v_x_588_);
if (v_isSharedCheck_606_ == 0)
{
v___x_600_ = v_x_588_;
v_isShared_601_ = v_isSharedCheck_606_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_s_598_);
lean_dec(v_x_588_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_606_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
lean_ctor_set_tag(v___x_600_, 1);
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_s_598_);
v___x_603_ = v_reuseFailAlloc_605_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
lean_object* v___x_604_; 
v___x_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
return v___x_604_;
}
}
}
case 3:
{
double v_n_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_615_; 
v_n_607_ = lean_ctor_get_float(v_x_588_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v_x_588_);
if (v_isSharedCheck_615_ == 0)
{
v___x_609_ = v_x_588_;
v_isShared_610_ = v_isSharedCheck_615_;
goto v_resetjp_608_;
}
else
{
lean_dec(v_x_588_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_615_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
lean_ctor_set_tag(v___x_609_, 2);
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(2, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_614_, 0, v_n_607_);
v___x_612_ = v_reuseFailAlloc_614_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
lean_object* v___x_613_; 
v___x_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
return v___x_613_;
}
}
}
case 5:
{
lean_object* v_i_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_624_; 
v_i_616_ = lean_ctor_get(v_x_588_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v_x_588_);
if (v_isSharedCheck_624_ == 0)
{
v___x_618_ = v_x_588_;
v_isShared_619_ = v_isSharedCheck_624_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_i_616_);
lean_dec(v_x_588_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_624_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
lean_ctor_set_tag(v___x_618_, 3);
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_i_616_);
v___x_621_ = v_reuseFailAlloc_623_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
lean_object* v___x_622_; 
v___x_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
return v___x_622_;
}
}
}
case 2:
{
uint8_t v_b_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_633_; 
v_b_625_ = lean_ctor_get_uint8(v_x_588_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v_x_588_);
if (v_isSharedCheck_633_ == 0)
{
v___x_627_ = v_x_588_;
v_isShared_628_ = v_isSharedCheck_633_;
goto v_resetjp_626_;
}
else
{
lean_dec(v_x_588_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_633_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
lean_ctor_set_tag(v___x_627_, 4);
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(4, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_632_, 0, v_b_625_);
v___x_630_ = v_reuseFailAlloc_632_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_631_; 
v___x_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
return v___x_631_;
}
}
}
default: 
{
lean_object* v___x_634_; 
lean_dec(v_x_588_);
v___x_634_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvKeyPart___lam__0___closed__0));
return v___x_634_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0(lean_object* v___x_645_, lean_object* v___x_646_, lean_object* v___x_647_, lean_object* v_d_648_){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v___x_650_ = l_Lasm_JS_readField___redArg(v___x_645_, v_d_648_, v___x_649_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
lean_dec_ref(v___x_647_);
lean_dec_ref(v___x_646_);
v_a_651_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_658_ == 0)
{
v___x_653_ = v___x_650_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_650_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_656_; 
if (v_isShared_654_ == 0)
{
v___x_656_ = v___x_653_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_651_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
else
{
lean_object* v_a_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v_a_659_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_a_659_);
lean_dec_ref_known(v___x_650_, 1);
v___x_660_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_661_ = l_Lasm_JS_readField___redArg(v___x_646_, v_d_648_, v___x_660_);
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
lean_dec(v_a_659_);
lean_dec_ref(v___x_647_);
v_a_662_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_661_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_661_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_662_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
else
{
lean_object* v_a_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v_a_670_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_a_670_);
lean_dec_ref_known(v___x_661_, 1);
v___x_671_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
v___x_672_ = l_Lasm_JS_readField___redArg(v___x_647_, v_d_648_, v___x_671_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
lean_dec(v_a_670_);
lean_dec(v_a_659_);
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_680_ == 0)
{
v___x_675_ = v___x_672_;
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_a_673_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
else
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_689_; 
v_a_681_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_689_ == 0)
{
v___x_683_ = v___x_672_;
v_isShared_684_ = v_isSharedCheck_689_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_672_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_689_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_685_; lean_object* v___x_687_; 
v___x_685_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_685_, 0, v_a_659_);
lean_ctor_set(v___x_685_, 1, v_a_670_);
lean_ctor_set(v___x_685_, 2, v_a_681_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 0, v___x_685_);
v___x_687_ = v___x_683_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v___x_685_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___boxed(lean_object* v___x_690_, lean_object* v___x_691_, lean_object* v___x_692_, lean_object* v_d_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lasm_JS_Deno_instFromJSKvEntry___lam__0(v___x_690_, v___x_691_, v___x_692_, v_d_693_);
lean_dec(v_d_693_);
return v_res_694_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__0(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvKeyPart));
v___x_696_ = l_Lasm_JS_instFromJSArray___redArg(v___x_695_);
return v___x_696_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__1(void){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___f_700_; 
v___x_697_ = l_Lasm_JS_instFromJSString;
v___x_698_ = l_Lasm_JS_instFromJSData;
v___x_699_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvEntry___closed__0, &l_Lasm_JS_Deno_instFromJSKvEntry___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__0);
v___f_700_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___boxed), 4, 3);
lean_closure_set(v___f_700_, 0, v___x_699_);
lean_closure_set(v___f_700_, 1, v___x_698_);
lean_closure_set(v___f_700_, 2, v___x_697_);
return v___f_700_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__3(void){
_start:
{
uint8_t v___x_702_; lean_object* v___x_703_; lean_object* v___f_704_; lean_object* v___x_705_; 
v___x_702_ = 0;
v___x_703_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___closed__2));
v___f_704_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvEntry___closed__1, &l_Lasm_JS_Deno_instFromJSKvEntry___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__1);
v___x_705_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_705_, 0, v___f_704_);
lean_ctor_set(v___x_705_, 1, v___x_703_);
lean_ctor_set_uint8(v___x_705_, sizeof(void*)*2, v___x_702_);
return v___x_705_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntry(void){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvEntry___closed__3, &l_Lasm_JS_Deno_instFromJSKvEntry___closed__3_once, _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__3);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1(lean_object* v___f_726_, lean_object* v_d_727_){
_start:
{
lean_object* v_key_728_; lean_object* v_versionstamp_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_760_; 
v_key_728_ = lean_ctor_get(v_d_727_, 0);
v_versionstamp_729_ = lean_ctor_get(v_d_727_, 1);
v_isSharedCheck_760_ = !lean_is_exclusive(v_d_727_);
if (v_isSharedCheck_760_ == 0)
{
v___x_731_ = v_d_727_;
v_isShared_732_ = v_isSharedCheck_760_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_versionstamp_729_);
lean_inc(v_key_728_);
lean_dec(v_d_727_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_760_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; lean_object* v___x_734_; size_t v_sz_735_; size_t v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
v___x_733_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v___x_734_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_735_ = lean_array_size(v_key_728_);
v___x_736_ = ((size_t)0ULL);
v___x_737_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_734_, v___f_726_, v_sz_735_, v___x_736_, v_key_728_);
v___x_738_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_738_, 0, v___x_737_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 1, v___x_738_);
lean_ctor_set(v___x_731_, 0, v___x_733_);
v___x_740_ = v___x_731_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v___x_733_);
lean_ctor_set(v_reuseFailAlloc_759_, 1, v___x_738_);
v___x_740_ = v_reuseFailAlloc_759_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
lean_object* v___x_741_; lean_object* v___y_743_; 
v___x_741_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
if (lean_obj_tag(v_versionstamp_729_) == 0)
{
lean_object* v___x_750_; 
v___x_750_ = lean_box(1);
v___y_743_ = v___x_750_;
goto v___jp_742_;
}
else
{
lean_object* v_val_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
v_val_751_ = lean_ctor_get(v_versionstamp_729_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v_versionstamp_729_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v_versionstamp_729_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_val_751_);
lean_dec(v_versionstamp_729_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
lean_ctor_set_tag(v___x_753_, 4);
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_val_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
v___y_743_ = v___x_756_;
goto v___jp_742_;
}
}
}
v___jp_742_:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_741_);
lean_ctor_set(v___x_744_, 1, v___y_743_);
v___x_745_ = lean_unsigned_to_nat(2u);
v___x_746_ = lean_mk_empty_array_with_capacity(v___x_745_);
v___x_747_ = lean_array_push(v___x_746_, v___x_740_);
v___x_748_ = lean_array_push(v___x_747_, v___x_744_);
v___x_749_ = l_Lasm_JS_Web_Support_fields(v___x_748_);
lean_dec_ref(v___x_748_);
return v___x_749_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvMutation___lam__1(lean_object* v___f_766_, lean_object* v___f_767_, lean_object* v_d_768_){
_start:
{
lean_object* v_key_769_; uint8_t v_type_770_; lean_object* v_value_771_; lean_object* v_expireIn_772_; lean_object* v___x_773_; lean_object* v___x_774_; size_t v_sz_775_; size_t v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___y_782_; 
v_key_769_ = lean_ctor_get(v_d_768_, 0);
lean_inc_ref(v_key_769_);
v_type_770_ = lean_ctor_get_uint8(v_d_768_, sizeof(void*)*3);
v_value_771_ = lean_ctor_get(v_d_768_, 1);
lean_inc(v_value_771_);
v_expireIn_772_ = lean_ctor_get(v_d_768_, 2);
lean_inc(v_expireIn_772_);
lean_dec_ref(v_d_768_);
v___x_773_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v___x_774_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_775_ = lean_array_size(v_key_769_);
v___x_776_ = ((size_t)0ULL);
v___x_777_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_774_, v___f_766_, v_sz_775_, v___x_776_, v_key_769_);
v___x_778_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_778_, 0, v___x_777_);
v___x_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_773_);
lean_ctor_set(v___x_779_, 1, v___x_778_);
v___x_780_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__0));
switch(v_type_770_)
{
case 0:
{
lean_object* v___x_796_; 
v___x_796_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__1));
v___y_782_ = v___x_796_;
goto v___jp_781_;
}
case 1:
{
lean_object* v___x_797_; 
v___x_797_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__3));
v___y_782_ = v___x_797_;
goto v___jp_781_;
}
case 2:
{
lean_object* v___x_798_; 
v___x_798_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__5));
v___y_782_ = v___x_798_;
goto v___jp_781_;
}
case 3:
{
lean_object* v___x_799_; 
v___x_799_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__7));
v___y_782_ = v___x_799_;
goto v___jp_781_;
}
default: 
{
lean_object* v___x_800_; 
v___x_800_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__9));
v___y_782_ = v___x_800_;
goto v___jp_781_;
}
}
v___jp_781_:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
lean_inc(v___y_782_);
v___x_783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_780_);
lean_ctor_set(v___x_783_, 1, v___y_782_);
v___x_784_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
lean_ctor_set(v___x_785_, 1, v_value_771_);
v___x_786_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_787_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_767_, v_expireIn_772_);
v___x_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_786_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
v___x_789_ = lean_unsigned_to_nat(4u);
v___x_790_ = lean_mk_empty_array_with_capacity(v___x_789_);
v___x_791_ = lean_array_push(v___x_790_, v___x_779_);
v___x_792_ = lean_array_push(v___x_791_, v___x_783_);
v___x_793_ = lean_array_push(v___x_792_, v___x_785_);
v___x_794_ = lean_array_push(v___x_793_, v___x_788_);
v___x_795_ = l_Lasm_JS_Web_Support_fields(v___x_794_);
lean_dec_ref(v___x_794_);
return v___x_795_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___lam__0(lean_object* v___f_806_, lean_object* v_d_807_){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_808_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_809_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_806_, v_d_807_);
v___x_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_808_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
v___x_811_ = lean_unsigned_to_nat(1u);
v___x_812_ = lean_mk_empty_array_with_capacity(v___x_811_);
v___x_813_ = lean_array_push(v___x_812_, v___x_810_);
v___x_814_ = l_Lasm_JS_Web_Support_fields(v___x_813_);
lean_dec_ref(v___x_813_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0(lean_object* v___f_821_, lean_object* v___x_822_, lean_object* v___x_823_, lean_object* v_d_824_){
_start:
{
lean_object* v_delay_825_; lean_object* v_keysIfUndelivered_826_; lean_object* v_backoffSchedule_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v_delay_825_ = lean_ctor_get(v_d_824_, 0);
lean_inc(v_delay_825_);
v_keysIfUndelivered_826_ = lean_ctor_get(v_d_824_, 1);
lean_inc(v_keysIfUndelivered_826_);
v_backoffSchedule_827_ = lean_ctor_get(v_d_824_, 2);
lean_inc(v_backoffSchedule_827_);
lean_dec_ref(v_d_824_);
v___x_828_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0));
v___x_829_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_821_, v_delay_825_);
v___x_830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_830_, 0, v___x_828_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
v___x_831_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1));
v___x_832_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_822_, v_keysIfUndelivered_826_);
v___x_833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_833_, 0, v___x_831_);
lean_ctor_set(v___x_833_, 1, v___x_832_);
v___x_834_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_835_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_823_, v_backoffSchedule_827_);
v___x_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_834_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v___x_837_ = lean_unsigned_to_nat(3u);
v___x_838_ = lean_mk_empty_array_with_capacity(v___x_837_);
v___x_839_ = lean_array_push(v___x_838_, v___x_830_);
v___x_840_ = lean_array_push(v___x_839_, v___x_833_);
v___x_841_ = lean_array_push(v___x_840_, v___x_836_);
v___x_842_ = l_Lasm_JS_Web_Support_fields(v___x_841_);
lean_dec_ref(v___x_841_);
return v___x_842_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0(void){
_start:
{
lean_object* v___f_843_; lean_object* v___x_844_; 
v___f_843_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvKeyPart___closed__0));
v___x_844_ = l_Lasm_JS_instToJSArray___redArg(v___f_843_);
return v___x_844_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1(void){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0);
v___x_846_ = l_Lasm_JS_instToJSArray___redArg(v___x_845_);
return v___x_846_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2(void){
_start:
{
lean_object* v___f_847_; lean_object* v___x_848_; 
v___f_847_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___closed__0));
v___x_848_ = l_Lasm_JS_instToJSArray___redArg(v___f_847_);
return v___x_848_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__3(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___f_851_; lean_object* v___f_852_; 
v___x_849_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2);
v___x_850_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1);
v___f_851_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___closed__0));
v___f_852_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0), 4, 3);
lean_closure_set(v___f_852_, 0, v___f_851_);
lean_closure_set(v___f_852_, 1, v___x_850_);
lean_closure_set(v___f_852_, 2, v___x_849_);
return v___f_852_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions(void){
_start:
{
lean_object* v___f_853_; 
v___f_853_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__3, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__3_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__3);
return v___f_853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0(lean_object* v___x_855_, lean_object* v___x_856_, lean_object* v_d_857_){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_858_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0));
v___x_859_ = l_Lasm_JS_readField___redArg(v___x_855_, v_d_857_, v___x_858_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_867_; 
lean_dec_ref(v___x_856_);
v_a_860_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_867_ == 0)
{
v___x_862_ = v___x_859_;
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_859_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
if (v_isShared_863_ == 0)
{
v___x_865_ = v___x_862_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_a_860_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
else
{
lean_object* v_a_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v_a_868_ = lean_ctor_get(v___x_859_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_859_, 1);
v___x_869_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
v___x_870_ = l_Lasm_JS_readField___redArg(v___x_856_, v_d_857_, v___x_869_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
lean_dec(v_a_868_);
v_a_871_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_870_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_870_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
else
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_888_; 
v_a_879_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_888_ == 0)
{
v___x_881_ = v___x_870_;
v_isShared_882_ = v_isSharedCheck_888_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_870_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_888_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_883_; uint8_t v___x_884_; lean_object* v___x_886_; 
v___x_883_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_883_, 0, v_a_879_);
v___x_884_ = lean_unbox(v_a_868_);
lean_dec(v_a_868_);
lean_ctor_set_uint8(v___x_883_, sizeof(void*)*1, v___x_884_);
if (v_isShared_882_ == 0)
{
lean_ctor_set(v___x_881_, 0, v___x_883_);
v___x_886_ = v___x_881_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_883_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___boxed(lean_object* v___x_889_, lean_object* v___x_890_, lean_object* v_d_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0(v___x_889_, v___x_890_, v_d_891_);
lean_dec(v_d_891_);
return v_res_892_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0(void){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_893_ = l_Lasm_JS_instFromJSString;
v___x_894_ = l_Lasm_JS_instFromJSOption___redArg(v___x_893_);
return v___x_894_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__1(void){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___f_897_; 
v___x_895_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0, &l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0);
v___x_896_ = l_Lasm_JS_instFromJSBool;
v___f_897_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___boxed), 3, 2);
lean_closure_set(v___f_897_, 0, v___x_896_);
lean_closure_set(v___f_897_, 1, v___x_895_);
return v___f_897_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__3(void){
_start:
{
uint8_t v___x_899_; lean_object* v___x_900_; lean_object* v___f_901_; lean_object* v___x_902_; 
v___x_899_ = 0;
v___x_900_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__2));
v___f_901_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__1, &l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__1);
v___x_902_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_902_, 0, v___f_901_);
lean_ctor_set(v___x_902_, 1, v___x_900_);
lean_ctor_set_uint8(v___x_902_, sizeof(void*)*2, v___x_899_);
return v___x_902_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit(void){
_start:
{
lean_object* v___x_903_; 
v___x_903_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__3, &l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__3_once, _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__3);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0(lean_object* v___f_905_, lean_object* v_d_906_){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_907_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_908_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_905_, v_d_906_);
v___x_909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_907_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
v___x_910_ = lean_unsigned_to_nat(1u);
v___x_911_ = lean_mk_empty_array_with_capacity(v___x_910_);
v___x_912_ = lean_array_push(v___x_911_, v___x_909_);
v___x_913_ = l_Lasm_JS_Web_Support_fields(v___x_912_);
lean_dec_ref(v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0(lean_object* v___x_917_, lean_object* v___x_918_, lean_object* v___x_919_, lean_object* v_d_920_){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_921_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v___x_922_ = l_Lasm_JS_readField___redArg(v___x_917_, v_d_920_, v___x_921_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
lean_dec_ref(v___x_919_);
lean_dec_ref(v___x_918_);
v_a_923_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_922_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
else
{
lean_object* v_a_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v_a_931_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_931_);
lean_dec_ref_known(v___x_922_, 1);
v___x_932_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_933_ = l_Lasm_JS_readField___redArg(v___x_918_, v_d_920_, v___x_932_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec(v_a_931_);
lean_dec_ref(v___x_919_);
v_a_934_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_933_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_933_);
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
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v_a_942_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_942_);
lean_dec_ref_known(v___x_933_, 1);
v___x_943_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
v___x_944_ = l_Lasm_JS_readField___redArg(v___x_919_, v_d_920_, v___x_943_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec(v_a_942_);
lean_dec(v_a_931_);
v_a_945_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_944_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_944_);
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
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_961_; 
v_a_953_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_961_ == 0)
{
v___x_955_ = v___x_944_;
v_isShared_956_ = v_isSharedCheck_961_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_944_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_961_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_957_; lean_object* v___x_959_; 
v___x_957_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_957_, 0, v_a_931_);
lean_ctor_set(v___x_957_, 1, v_a_942_);
lean_ctor_set(v___x_957_, 2, v_a_953_);
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 0, v___x_957_);
v___x_959_ = v___x_955_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_957_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0___boxed(lean_object* v___x_962_, lean_object* v___x_963_, lean_object* v___x_964_, lean_object* v_d_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0(v___x_962_, v___x_963_, v___x_964_, v_d_965_);
lean_dec(v_d_965_);
return v_res_966_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__0(void){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___f_970_; 
v___x_967_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0, &l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0);
v___x_968_ = l_Lasm_JS_instFromJSData;
v___x_969_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvEntry___closed__0, &l_Lasm_JS_Deno_instFromJSKvEntry___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__0);
v___f_970_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0___boxed), 4, 3);
lean_closure_set(v___f_970_, 0, v___x_969_);
lean_closure_set(v___f_970_, 1, v___x_968_);
lean_closure_set(v___f_970_, 2, v___x_967_);
return v___f_970_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__2(void){
_start:
{
uint8_t v___x_972_; lean_object* v___x_973_; lean_object* v___f_974_; lean_object* v___x_975_; 
v___x_972_ = 0;
v___x_973_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__1));
v___f_974_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__0, &l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__0);
v___x_975_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_975_, 0, v___f_974_);
lean_ctor_set(v___x_975_, 1, v___x_973_);
lean_ctor_set_uint8(v___x_975_, sizeof(void*)*2, v___x_972_);
return v___x_975_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe(void){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__2, &l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__2);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0(lean_object* v___x_979_, lean_object* v___x_980_, lean_object* v_d_981_){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_982_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0));
v___x_983_ = l_Lasm_JS_readField___redArg(v___x_979_, v_d_981_, v___x_982_);
if (lean_obj_tag(v___x_983_) == 0)
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
lean_dec_ref(v___x_980_);
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
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_984_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
else
{
lean_object* v_a_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v_a_992_ = lean_ctor_get(v___x_983_, 0);
lean_inc(v_a_992_);
lean_dec_ref_known(v___x_983_, 1);
v___x_993_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
v___x_994_ = l_Lasm_JS_readField___redArg(v___x_980_, v_d_981_, v___x_993_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
lean_dec(v_a_992_);
v_a_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1012_; 
v_a_1003_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_1005_ = v___x_994_;
v_isShared_1006_ = v_isSharedCheck_1012_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_994_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1012_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1007_; uint8_t v___x_1008_; lean_object* v___x_1010_; 
v___x_1007_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1007_, 0, v_a_1003_);
v___x_1008_ = lean_unbox(v_a_992_);
lean_dec(v_a_992_);
lean_ctor_set_uint8(v___x_1007_, sizeof(void*)*1, v___x_1008_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1007_);
v___x_1010_ = v___x_1005_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v___x_1007_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0___boxed(lean_object* v___x_1013_, lean_object* v___x_1014_, lean_object* v_d_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0(v___x_1013_, v___x_1014_, v_d_1015_);
lean_dec(v_d_1015_);
return v_res_1016_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__0(void){
_start:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___f_1019_; 
v___x_1017_ = l_Lasm_JS_instFromJSString;
v___x_1018_ = l_Lasm_JS_instFromJSBool;
v___f_1019_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1019_, 0, v___x_1018_);
lean_closure_set(v___f_1019_, 1, v___x_1017_);
return v___f_1019_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__2(void){
_start:
{
uint8_t v___x_1021_; lean_object* v___x_1022_; lean_object* v___f_1023_; lean_object* v___x_1024_; 
v___x_1021_ = 0;
v___x_1022_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__1));
v___f_1023_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__0, &l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__0);
v___x_1024_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1024_, 0, v___f_1023_);
lean_ctor_set(v___x_1024_, 1, v___x_1022_);
lean_ctor_set_uint8(v___x_1024_, sizeof(void*)*2, v___x_1021_);
return v___x_1024_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvCommitResult(void){
_start:
{
lean_object* v___x_1025_; 
v___x_1025_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__2, &l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__2);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListSelector___lam__0(lean_object* v___x_1029_, lean_object* v_d_1030_){
_start:
{
lean_object* v_prefix_1031_; lean_object* v_start_1032_; lean_object* v_end_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v_prefix_1031_ = lean_ctor_get(v_d_1030_, 0);
lean_inc(v_prefix_1031_);
v_start_1032_ = lean_ctor_get(v_d_1030_, 1);
lean_inc(v_start_1032_);
v_end_1033_ = lean_ctor_get(v_d_1030_, 2);
lean_inc(v_end_1033_);
lean_dec_ref(v_d_1030_);
v___x_1034_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__0));
lean_inc_ref_n(v___x_1029_, 2);
v___x_1035_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1029_, v_prefix_1031_);
v___x_1036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1034_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
v___x_1037_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__1));
v___x_1038_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1029_, v_start_1032_);
v___x_1039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1037_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__2));
v___x_1041_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1029_, v_end_1033_);
v___x_1042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1040_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = lean_unsigned_to_nat(3u);
v___x_1044_ = lean_mk_empty_array_with_capacity(v___x_1043_);
v___x_1045_ = lean_array_push(v___x_1044_, v___x_1036_);
v___x_1046_ = lean_array_push(v___x_1045_, v___x_1039_);
v___x_1047_ = lean_array_push(v___x_1046_, v___x_1042_);
v___x_1048_ = l_Lasm_JS_Web_Support_fields(v___x_1047_);
lean_dec_ref(v___x_1047_);
return v___x_1048_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvListSelector___closed__0(void){
_start:
{
lean_object* v___x_1049_; lean_object* v___f_1050_; 
v___x_1049_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0);
v___f_1050_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0), 2, 1);
lean_closure_set(v___f_1050_, 0, v___x_1049_);
return v___f_1050_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvListSelector(void){
_start:
{
lean_object* v___f_1051_; 
v___f_1051_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSKvListSelector___closed__0, &l_Lasm_JS_Deno_instToJSKvListSelector___closed__0_once, _init_l_Lasm_JS_Deno_instToJSKvListSelector___closed__0);
return v___f_1051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___lam__0(lean_object* v___f_1056_, lean_object* v___f_1057_, lean_object* v___f_1058_, lean_object* v___f_1059_, lean_object* v_d_1060_){
_start:
{
lean_object* v_limit_1061_; lean_object* v_cursor_1062_; lean_object* v_reverse_1063_; lean_object* v_consistency_1064_; lean_object* v_batchSize_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v_limit_1061_ = lean_ctor_get(v_d_1060_, 0);
lean_inc(v_limit_1061_);
v_cursor_1062_ = lean_ctor_get(v_d_1060_, 1);
lean_inc(v_cursor_1062_);
v_reverse_1063_ = lean_ctor_get(v_d_1060_, 2);
lean_inc(v_reverse_1063_);
v_consistency_1064_ = lean_ctor_get(v_d_1060_, 3);
lean_inc(v_consistency_1064_);
v_batchSize_1065_ = lean_ctor_get(v_d_1060_, 4);
lean_inc(v_batchSize_1065_);
lean_dec_ref(v_d_1060_);
v___x_1066_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__0));
lean_inc_ref(v___f_1056_);
v___x_1067_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1056_, v_limit_1061_);
v___x_1068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1066_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__1));
v___x_1070_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1057_, v_cursor_1062_);
v___x_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1069_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__2));
v___x_1073_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1058_, v_reverse_1063_);
v___x_1074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1072_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___x_1075_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_1076_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1059_, v_consistency_1064_);
v___x_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1075_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
v___x_1078_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__3));
v___x_1079_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1056_, v_batchSize_1065_);
v___x_1080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1078_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = lean_unsigned_to_nat(5u);
v___x_1082_ = lean_mk_empty_array_with_capacity(v___x_1081_);
v___x_1083_ = lean_array_push(v___x_1082_, v___x_1068_);
v___x_1084_ = lean_array_push(v___x_1083_, v___x_1071_);
v___x_1085_ = lean_array_push(v___x_1084_, v___x_1074_);
v___x_1086_ = lean_array_push(v___x_1085_, v___x_1077_);
v___x_1087_ = lean_array_push(v___x_1086_, v___x_1080_);
v___x_1088_ = l_Lasm_JS_Web_Support_fields(v___x_1087_);
lean_dec_ref(v___x_1087_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvEnqueueOptions___lam__0(lean_object* v___f_1097_, lean_object* v___x_1098_, lean_object* v___x_1099_, lean_object* v_d_1100_){
_start:
{
lean_object* v_delay_1101_; lean_object* v_keysIfUndelivered_1102_; lean_object* v_backoffSchedule_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v_delay_1101_ = lean_ctor_get(v_d_1100_, 0);
lean_inc(v_delay_1101_);
v_keysIfUndelivered_1102_ = lean_ctor_get(v_d_1100_, 1);
lean_inc(v_keysIfUndelivered_1102_);
v_backoffSchedule_1103_ = lean_ctor_get(v_d_1100_, 2);
lean_inc(v_backoffSchedule_1103_);
lean_dec_ref(v_d_1100_);
v___x_1104_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0));
v___x_1105_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1097_, v_delay_1101_);
v___x_1106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1104_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1));
v___x_1108_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1098_, v_keysIfUndelivered_1102_);
v___x_1109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1107_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_1111_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1099_, v_backoffSchedule_1103_);
v___x_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1110_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
v___x_1113_ = lean_unsigned_to_nat(3u);
v___x_1114_ = lean_mk_empty_array_with_capacity(v___x_1113_);
v___x_1115_ = lean_array_push(v___x_1114_, v___x_1106_);
v___x_1116_ = lean_array_push(v___x_1115_, v___x_1109_);
v___x_1117_ = lean_array_push(v___x_1116_, v___x_1112_);
v___x_1118_ = l_Lasm_JS_Web_Support_fields(v___x_1117_);
lean_dec_ref(v___x_1117_);
return v___x_1118_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___f_1121_; lean_object* v___f_1122_; 
v___x_1119_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2);
v___x_1120_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1);
v___f_1121_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___closed__0));
v___f_1122_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvEnqueueOptions___lam__0), 4, 3);
lean_closure_set(v___f_1122_, 0, v___f_1121_);
lean_closure_set(v___f_1122_, 1, v___x_1120_);
lean_closure_set(v___f_1122_, 2, v___x_1119_);
return v___f_1122_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvEnqueueOptions(void){
_start:
{
lean_object* v___f_1123_; 
v___f_1123_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0, &l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0_once, _init_l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0);
return v___f_1123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0(lean_object* v_x_1135_){
_start:
{
if (lean_obj_tag(v_x_1135_) == 0)
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1145_; 
v_a_1137_ = lean_ctor_get(v_x_1135_, 0);
v_isSharedCheck_1145_ = !lean_is_exclusive(v_x_1135_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1139_ = v_x_1135_;
v_isShared_1140_ = v_isSharedCheck_1145_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v_x_1135_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1145_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_a_1137_);
v___x_1142_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
return v___x_1143_;
}
}
}
else
{
lean_object* v___x_1146_; 
lean_dec_ref_known(v_x_1135_, 1);
v___x_1146_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___closed__1));
return v___x_1146_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___boxed(lean_object* v_x_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0(v_x_1147_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1(lean_object* v_f_1150_, lean_object* v___f_1151_, lean_object* v_x_1152_){
_start:
{
if (lean_obj_tag(v_x_1152_) == 0)
{
lean_object* v___x_1154_; 
lean_dec_ref(v___f_1151_);
lean_dec_ref(v_f_1150_);
v___x_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1154_, 0, v_x_1152_);
return v___x_1154_;
}
else
{
lean_object* v_a_1155_; lean_object* v___x_1156_; uint8_t v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v_a_1155_ = lean_ctor_get(v_x_1152_, 0);
lean_inc(v_a_1155_);
lean_dec_ref_known(v_x_1152_, 1);
v___x_1156_ = lean_unsigned_to_nat(0u);
v___x_1157_ = 0;
v___x_1158_ = lean_apply_2(v_f_1150_, v_a_1155_, lean_box(0));
v___x_1159_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1156_, v___x_1157_, v___x_1158_, v___f_1151_);
return v___x_1159_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1___boxed(lean_object* v_f_1160_, lean_object* v___f_1161_, lean_object* v_x_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1(v_f_1160_, v___f_1161_, v_x_1162_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2(lean_object* v___f_1165_, lean_object* v_args_1166_){
_start:
{
lean_object* v___x_1168_; uint8_t v___x_1169_; lean_object* v_val_1171_; lean_object* v___x_1174_; lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1182_; 
v___x_1168_ = lean_unsigned_to_nat(0u);
v___x_1169_ = 0;
v___x_1174_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1166_, v___x_1168_);
v_a_1175_ = lean_ctor_get(v___x_1174_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1174_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1177_ = v___x_1174_;
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1174_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
v___jp_1170_:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1172_, 0, v_val_1171_);
v___x_1173_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1168_, v___x_1169_, v___x_1172_, v___f_1165_);
return v___x_1173_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
lean_ctor_set_tag(v___x_1177_, 1);
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
v_val_1171_ = v___x_1180_;
goto v___jp_1170_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2___boxed(lean_object* v___f_1183_, lean_object* v_args_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2(v___f_1183_, v_args_1184_);
lean_dec_ref(v_args_1184_);
return v_res_1186_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___x_1194_ = lean_nat_abs(v___x_1193_);
return v___x_1194_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6(void){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; uint8_t v___x_1197_; 
v___x_1195_ = lean_cstr_to_nat("9007199254740991");
v___x_1196_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5);
v___x_1197_ = lean_nat_dec_le(v___x_1196_, v___x_1195_);
return v___x_1197_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7(void){
_start:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1198_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___x_1199_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
return v___x_1199_;
}
}
static double _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8(void){
_start:
{
lean_object* v___x_1200_; double v___x_1201_; 
v___x_1200_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___x_1201_ = l_Float_ofInt(v___x_1200_);
return v___x_1201_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9(void){
_start:
{
double v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = lean_float_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8);
v___x_1203_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1203_, 0, v___x_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn(lean_object* v_f_1204_){
_start:
{
lean_object* v___f_1206_; lean_object* v___f_1207_; lean_object* v___f_1208_; lean_object* v___x_1209_; 
v___f_1206_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__0));
v___f_1207_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1207_, 0, v_f_1204_);
lean_closure_set(v___f_1207_, 1, v___f_1206_);
v___f_1208_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1208_, 0, v___f_1207_);
v___x_1209_ = l_Lasm_JS_Function_ofFn(v___f_1208_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1211_; 
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_a_1210_);
lean_dec_ref_known(v___x_1209_, 1);
v___x_1211_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_object* v_a_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_a_1212_);
lean_dec_ref_known(v___x_1211_, 1);
v___x_1213_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1214_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1212_, v___x_1213_);
if (lean_obj_tag(v___x_1214_) == 0)
{
lean_object* v_a_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___y_1222_; uint8_t v___x_1249_; 
v_a_1215_ = lean_ctor_get(v___x_1214_, 0);
lean_inc(v_a_1215_);
lean_dec_ref_known(v___x_1214_, 1);
v___x_1216_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1217_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1210_);
v___x_1218_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1218_, 0, v_a_1210_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
v___x_1219_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1220_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_1249_ = lean_uint8_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6);
if (v___x_1249_ == 0)
{
lean_object* v___x_1250_; 
v___x_1250_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7);
v___y_1222_ = v___x_1250_;
goto v___jp_1221_;
}
else
{
lean_object* v___x_1251_; 
v___x_1251_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9);
v___y_1222_ = v___x_1251_;
goto v___jp_1221_;
}
v___jp_1221_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
lean_inc(v___y_1222_);
v___x_1223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1220_);
lean_ctor_set(v___x_1223_, 1, v___y_1222_);
v___x_1224_ = lean_box(0);
v___x_1225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1223_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
v___x_1226_ = l_Lasm_JS_obj(v___x_1225_);
v___x_1227_ = lean_unsigned_to_nat(3u);
v___x_1228_ = lean_mk_empty_array_with_capacity(v___x_1227_);
v___x_1229_ = lean_array_push(v___x_1228_, v___x_1218_);
v___x_1230_ = lean_array_push(v___x_1229_, v___x_1219_);
v___x_1231_ = lean_array_push(v___x_1230_, v___x_1226_);
v___x_1232_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1215_, v___x_1216_, v___x_1231_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1239_ == 0)
{
lean_object* v_unused_1240_; 
v_unused_1240_ = lean_ctor_get(v___x_1232_, 0);
lean_dec(v_unused_1240_);
v___x_1234_ = v___x_1232_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_dec(v___x_1232_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 0, v_a_1210_);
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1210_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1248_; 
lean_dec(v_a_1210_);
v_a_1241_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1243_ = v___x_1232_;
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1232_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1246_; 
if (v_isShared_1244_ == 0)
{
v___x_1246_ = v___x_1243_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_a_1241_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
}
else
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1259_; 
lean_dec(v_a_1210_);
v_a_1252_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1254_ = v___x_1214_;
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___x_1214_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
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
return v___x_1257_;
}
}
}
}
else
{
lean_object* v_a_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1267_; 
lean_dec(v_a_1210_);
v_a_1260_ = lean_ctor_get(v___x_1211_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1262_ = v___x_1211_;
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_a_1260_);
lean_dec(v___x_1211_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1265_; 
if (v_isShared_1263_ == 0)
{
v___x_1265_ = v___x_1262_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_a_1260_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
}
else
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
v_a_1268_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1209_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1209_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1268_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___boxed(lean_object* v_f_1276_, lean_object* v_a_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn(v_f_1276_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0(lean_object* v_f_1279_, lean_object* v_args_1280_){
_start:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v_a_1284_; lean_object* v___x_1285_; 
v___x_1282_ = lean_unsigned_to_nat(0u);
v___x_1283_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1280_, v___x_1282_);
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
lean_inc(v_a_1284_);
lean_dec_ref(v___x_1283_);
v___x_1285_ = lean_apply_2(v_f_1279_, v_a_1284_, lean_box(0));
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1293_; 
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1293_ == 0)
{
lean_object* v_unused_1294_; 
v_unused_1294_ = lean_ctor_get(v___x_1285_, 0);
lean_dec(v_unused_1294_);
v___x_1287_ = v___x_1285_;
v_isShared_1288_ = v_isSharedCheck_1293_;
goto v_resetjp_1286_;
}
else
{
lean_dec(v___x_1285_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1293_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1289_; lean_object* v___x_1291_; 
v___x_1289_ = lean_box(0);
if (v_isShared_1288_ == 0)
{
lean_ctor_set(v___x_1287_, 0, v___x_1289_);
v___x_1291_ = v___x_1287_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v___x_1289_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
v_a_1295_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1285_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1285_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_1303_, lean_object* v_args_1304_, lean_object* v___y_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0(v_f_1303_, v_args_1304_);
lean_dec_ref(v_args_1304_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn(lean_object* v_f_1307_){
_start:
{
lean_object* v___f_1309_; lean_object* v___x_1310_; 
v___f_1309_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1309_, 0, v_f_1307_);
v___x_1310_ = l_Lasm_JS_Function_ofSyncFn(v___f_1309_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1312_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1310_, 1);
v___x_1312_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1312_) == 0)
{
lean_object* v_a_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v_a_1313_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_a_1313_);
lean_dec_ref_known(v___x_1312_, 1);
v___x_1314_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1315_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1313_, v___x_1314_);
if (lean_obj_tag(v___x_1315_) == 0)
{
lean_object* v_a_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___y_1323_; uint8_t v___x_1350_; 
v_a_1316_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_a_1316_);
lean_dec_ref_known(v___x_1315_, 1);
v___x_1317_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1318_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1311_);
v___x_1319_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1319_, 0, v_a_1311_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1321_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_1350_ = lean_uint8_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; 
v___x_1351_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7);
v___y_1323_ = v___x_1351_;
goto v___jp_1322_;
}
else
{
lean_object* v___x_1352_; 
v___x_1352_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9);
v___y_1323_ = v___x_1352_;
goto v___jp_1322_;
}
v___jp_1322_:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
lean_inc(v___y_1323_);
v___x_1324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1321_);
lean_ctor_set(v___x_1324_, 1, v___y_1323_);
v___x_1325_ = lean_box(0);
v___x_1326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = l_Lasm_JS_obj(v___x_1326_);
v___x_1328_ = lean_unsigned_to_nat(3u);
v___x_1329_ = lean_mk_empty_array_with_capacity(v___x_1328_);
v___x_1330_ = lean_array_push(v___x_1329_, v___x_1319_);
v___x_1331_ = lean_array_push(v___x_1330_, v___x_1320_);
v___x_1332_ = lean_array_push(v___x_1331_, v___x_1327_);
v___x_1333_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1316_, v___x_1317_, v___x_1332_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1340_ == 0)
{
lean_object* v_unused_1341_; 
v_unused_1341_ = lean_ctor_get(v___x_1333_, 0);
lean_dec(v_unused_1341_);
v___x_1335_ = v___x_1333_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_dec(v___x_1333_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 0, v_a_1311_);
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1311_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
else
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1349_; 
lean_dec(v_a_1311_);
v_a_1342_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1344_ = v___x_1333_;
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1333_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1345_ == 0)
{
v___x_1347_ = v___x_1344_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1342_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
}
}
else
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1360_; 
lean_dec(v_a_1311_);
v_a_1353_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1355_ = v___x_1315_;
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1315_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1358_; 
if (v_isShared_1356_ == 0)
{
v___x_1358_ = v___x_1355_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_a_1353_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
}
}
}
}
else
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
lean_dec(v_a_1311_);
v_a_1361_ = lean_ctor_get(v___x_1312_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1312_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1312_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1312_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1366_; 
if (v_isShared_1364_ == 0)
{
v___x_1366_ = v___x_1363_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1361_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
}
}
}
}
else
{
lean_object* v_a_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1376_; 
v_a_1369_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1376_ == 0)
{
v___x_1371_ = v___x_1310_;
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_a_1369_);
lean_dec(v___x_1310_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1374_; 
if (v_isShared_1372_ == 0)
{
v___x_1374_ = v___x_1371_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v_a_1369_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___boxed(lean_object* v_f_1377_, lean_object* v_a_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn(v_f_1377_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0(lean_object* v___f_1381_, lean_object* v_d_1382_){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1383_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0___closed__0));
v___x_1384_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1381_, v_d_1382_);
v___x_1385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1383_);
lean_ctor_set(v___x_1385_, 1, v___x_1384_);
v___x_1386_ = lean_unsigned_to_nat(1u);
v___x_1387_ = lean_mk_empty_array_with_capacity(v___x_1386_);
v___x_1388_ = lean_array_push(v___x_1387_, v___x_1385_);
v___x_1389_ = l_Lasm_JS_Web_Support_fields(v___x_1388_);
lean_dec_ref(v___x_1388_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx(lean_object* v_x_1393_){
_start:
{
if (lean_obj_tag(v_x_1393_) == 0)
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_unsigned_to_nat(0u);
return v___x_1394_;
}
else
{
lean_object* v___x_1395_; 
v___x_1395_ = lean_unsigned_to_nat(1u);
return v___x_1395_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx___boxed(lean_object* v_x_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx(v_x_1396_);
lean_dec_ref(v_x_1396_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(lean_object* v_t_1398_, lean_object* v_k_1399_){
_start:
{
if (lean_obj_tag(v_t_1398_) == 0)
{
double v_value_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v_value_1400_ = lean_ctor_get_float(v_t_1398_, 0);
lean_dec_ref_known(v_t_1398_, 0);
v___x_1401_ = lean_box_float(v_value_1400_);
v___x_1402_ = lean_apply_1(v_k_1399_, v___x_1401_);
return v___x_1402_;
}
else
{
lean_object* v_value_1403_; lean_object* v___x_1404_; 
v_value_1403_ = lean_ctor_get(v_t_1398_, 0);
lean_inc_ref(v_value_1403_);
lean_dec_ref_known(v_t_1398_, 1);
v___x_1404_ = lean_apply_1(v_k_1399_, v_value_1403_);
return v___x_1404_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim(lean_object* v_motive_1405_, lean_object* v_ctorIdx_1406_, lean_object* v_t_1407_, lean_object* v_h_1408_, lean_object* v_k_1409_){
_start:
{
lean_object* v___x_1410_; 
v___x_1410_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1407_, v_k_1409_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___boxed(lean_object* v_motive_1411_, lean_object* v_ctorIdx_1412_, lean_object* v_t_1413_, lean_object* v_h_1414_, lean_object* v_k_1415_){
_start:
{
lean_object* v_res_1416_; 
v_res_1416_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim(v_motive_1411_, v_ctorIdx_1412_, v_t_1413_, v_h_1414_, v_k_1415_);
lean_dec(v_ctorIdx_1412_);
return v_res_1416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_double_elim___redArg(lean_object* v_t_1417_, lean_object* v_double_1418_){
_start:
{
lean_object* v___x_1419_; 
v___x_1419_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1417_, v_double_1418_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_double_elim(lean_object* v_motive_1420_, lean_object* v_t_1421_, lean_object* v_h_1422_, lean_object* v_double_1423_){
_start:
{
lean_object* v___x_1424_; 
v___x_1424_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1421_, v_double_1423_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_sequence_elim___redArg(lean_object* v_t_1425_, lean_object* v_sequence_1426_){
_start:
{
lean_object* v___x_1427_; 
v___x_1427_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1425_, v_sequence_1426_);
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_sequence_elim(lean_object* v_motive_1428_, lean_object* v_t_1429_, lean_object* v_h_1430_, lean_object* v_sequence_1431_){
_start:
{
lean_object* v___x_1432_; 
v___x_1432_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1429_, v_sequence_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0(double v_x_1433_){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1434_, 0, v_x_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0___boxed(lean_object* v_x_1435_){
_start:
{
double v_x_85__boxed_1436_; lean_object* v_res_1437_; 
v_x_85__boxed_1436_ = lean_unbox_float(v_x_1435_);
lean_dec_ref(v_x_1435_);
v_res_1437_ = l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0(v_x_85__boxed_1436_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__1(lean_object* v___f_1438_, lean_object* v_x_1439_){
_start:
{
if (lean_obj_tag(v_x_1439_) == 0)
{
double v_value_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1447_; 
lean_dec_ref(v___f_1438_);
v_value_1440_ = lean_ctor_get_float(v_x_1439_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v_x_1439_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1442_ = v_x_1439_;
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
else
{
lean_dec(v_x_1439_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1445_; 
if (v_isShared_1443_ == 0)
{
lean_ctor_set_tag(v___x_1442_, 3);
v___x_1445_ = v___x_1442_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1446_, 0, v_value_1440_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
else
{
lean_object* v_value_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1459_; 
v_value_1448_ = lean_ctor_get(v_x_1439_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v_x_1439_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1450_ = v_x_1439_;
v_isShared_1451_ = v_isSharedCheck_1459_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_value_1448_);
lean_dec(v_x_1439_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1459_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1452_; size_t v_sz_1453_; size_t v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1457_; 
v___x_1452_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_1453_ = lean_array_size(v_value_1448_);
v___x_1454_ = ((size_t)0ULL);
v___x_1455_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1452_, v___f_1438_, v_sz_1453_, v___x_1454_, v_value_1448_);
if (v_isShared_1451_ == 0)
{
lean_ctor_set_tag(v___x_1450_, 7);
lean_ctor_set(v___x_1450_, 0, v___x_1455_);
v___x_1457_ = v___x_1450_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v___x_1455_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0(double v_value_1464_){
_start:
{
lean_object* v___x_1465_; 
v___x_1465_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_1465_, 0, v_value_1464_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0___boxed(lean_object* v_value_1466_){
_start:
{
double v_value_boxed_1467_; lean_object* v_res_1468_; 
v_value_boxed_1467_ = lean_unbox_float(v_value_1466_);
lean_dec_ref(v_value_1466_);
v_res_1468_ = l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0(v_value_boxed_1467_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble___lam__0(lean_object* v_value_1471_){
_start:
{
lean_object* v___x_1472_; 
v___x_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1472_, 0, v_value_1471_);
return v___x_1472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1(lean_object* v___f_1476_, lean_object* v_d_1477_){
_start:
{
lean_object* v___x_1478_; lean_object* v___y_1480_; 
v___x_1478_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1___closed__0));
if (lean_obj_tag(v_d_1477_) == 0)
{
double v_value_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
lean_dec_ref(v___f_1476_);
v_value_1486_ = lean_ctor_get_float(v_d_1477_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v_d_1477_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v_d_1477_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_dec(v_d_1477_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
lean_ctor_set_tag(v___x_1488_, 3);
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1492_, 0, v_value_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
v___y_1480_ = v___x_1491_;
goto v___jp_1479_;
}
}
}
else
{
lean_object* v_value_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1505_; 
v_value_1494_ = lean_ctor_get(v_d_1477_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v_d_1477_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1496_ = v_d_1477_;
v_isShared_1497_ = v_isSharedCheck_1505_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_value_1494_);
lean_dec(v_d_1477_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1505_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1498_; size_t v_sz_1499_; size_t v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1503_; 
v___x_1498_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_1499_ = lean_array_size(v_value_1494_);
v___x_1500_ = ((size_t)0ULL);
v___x_1501_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1498_, v___f_1476_, v_sz_1499_, v___x_1500_, v_value_1494_);
if (v_isShared_1497_ == 0)
{
lean_ctor_set_tag(v___x_1496_, 7);
lean_ctor_set(v___x_1496_, 0, v___x_1501_);
v___x_1503_ = v___x_1496_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v___x_1501_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
v___y_1480_ = v___x_1503_;
goto v___jp_1479_;
}
}
}
v___jp_1479_:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1478_);
lean_ctor_set(v___x_1481_, 1, v___y_1480_);
v___x_1482_ = lean_unsigned_to_nat(1u);
v___x_1483_ = lean_mk_empty_array_with_capacity(v___x_1482_);
v___x_1484_ = lean_array_push(v___x_1483_, v___x_1481_);
v___x_1485_ = l_Lasm_JS_Web_Support_fields(v___x_1484_);
lean_dec_ref(v___x_1484_);
return v___x_1485_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx(lean_object* v_x_1509_){
_start:
{
if (lean_obj_tag(v_x_1509_) == 0)
{
lean_object* v___x_1510_; 
v___x_1510_ = lean_unsigned_to_nat(0u);
return v___x_1510_;
}
else
{
lean_object* v___x_1511_; 
v___x_1511_ = lean_unsigned_to_nat(1u);
return v___x_1511_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx___boxed(lean_object* v_x_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx(v_x_1512_);
lean_dec_ref(v_x_1512_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(lean_object* v_t_1514_, lean_object* v_k_1515_){
_start:
{
if (lean_obj_tag(v_t_1514_) == 0)
{
double v_value_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
v_value_1516_ = lean_ctor_get_float(v_t_1514_, 0);
lean_dec_ref_known(v_t_1514_, 0);
v___x_1517_ = lean_box_float(v_value_1516_);
v___x_1518_ = lean_apply_1(v_k_1515_, v___x_1517_);
return v___x_1518_;
}
else
{
lean_object* v_value_1519_; lean_object* v___x_1520_; 
v_value_1519_ = lean_ctor_get(v_t_1514_, 0);
lean_inc_ref(v_value_1519_);
lean_dec_ref_known(v_t_1514_, 1);
v___x_1520_ = lean_apply_1(v_k_1515_, v_value_1519_);
return v___x_1520_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim(lean_object* v_motive_1521_, lean_object* v_ctorIdx_1522_, lean_object* v_t_1523_, lean_object* v_h_1524_, lean_object* v_k_1525_){
_start:
{
lean_object* v___x_1526_; 
v___x_1526_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1523_, v_k_1525_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___boxed(lean_object* v_motive_1527_, lean_object* v_ctorIdx_1528_, lean_object* v_t_1529_, lean_object* v_h_1530_, lean_object* v_k_1531_){
_start:
{
lean_object* v_res_1532_; 
v_res_1532_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim(v_motive_1527_, v_ctorIdx_1528_, v_t_1529_, v_h_1530_, v_k_1531_);
lean_dec(v_ctorIdx_1528_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_double_elim___redArg(lean_object* v_t_1533_, lean_object* v_double_1534_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1533_, v_double_1534_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_double_elim(lean_object* v_motive_1536_, lean_object* v_t_1537_, lean_object* v_h_1538_, lean_object* v_double_1539_){
_start:
{
lean_object* v___x_1540_; 
v___x_1540_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1537_, v_double_1539_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_cronScheduleExpression_elim___redArg(lean_object* v_t_1541_, lean_object* v_cronScheduleExpression_1542_){
_start:
{
lean_object* v___x_1543_; 
v___x_1543_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1541_, v_cronScheduleExpression_1542_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_cronScheduleExpression_elim(lean_object* v_motive_1544_, lean_object* v_t_1545_, lean_object* v_h_1546_, lean_object* v_cronScheduleExpression_1547_){
_start:
{
lean_object* v___x_1548_; 
v___x_1548_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1545_, v_cronScheduleExpression_1547_);
return v___x_1548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion___lam__1(lean_object* v___f_1549_, lean_object* v_x_1550_){
_start:
{
if (lean_obj_tag(v_x_1550_) == 0)
{
double v_value_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1558_; 
lean_dec_ref(v___f_1549_);
v_value_1551_ = lean_ctor_get_float(v_x_1550_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v_x_1550_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1553_ = v_x_1550_;
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
else
{
lean_dec(v_x_1550_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1556_; 
if (v_isShared_1554_ == 0)
{
lean_ctor_set_tag(v___x_1553_, 3);
v___x_1556_ = v___x_1553_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1557_, 0, v_value_1551_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
else
{
lean_object* v_value_1559_; lean_object* v___x_1560_; lean_object* v___y_1562_; 
v_value_1559_ = lean_ctor_get(v_x_1550_, 0);
lean_inc_ref(v_value_1559_);
lean_dec_ref_known(v_x_1550_, 1);
v___x_1560_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1___closed__0));
if (lean_obj_tag(v_value_1559_) == 0)
{
double v_value_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
lean_dec_ref(v___f_1549_);
v_value_1568_ = lean_ctor_get_float(v_value_1559_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v_value_1559_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v_value_1559_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_dec(v_value_1559_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
lean_ctor_set_tag(v___x_1570_, 3);
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1574_, 0, v_value_1568_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
v___y_1562_ = v___x_1573_;
goto v___jp_1561_;
}
}
}
else
{
lean_object* v_value_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1587_; 
v_value_1576_ = lean_ctor_get(v_value_1559_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v_value_1559_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1578_ = v_value_1559_;
v_isShared_1579_ = v_isSharedCheck_1587_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_value_1576_);
lean_dec(v_value_1559_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1587_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1580_; size_t v_sz_1581_; size_t v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1585_; 
v___x_1580_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_1581_ = lean_array_size(v_value_1576_);
v___x_1582_ = ((size_t)0ULL);
v___x_1583_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1580_, v___f_1549_, v_sz_1581_, v___x_1582_, v_value_1576_);
if (v_isShared_1579_ == 0)
{
lean_ctor_set_tag(v___x_1578_, 7);
lean_ctor_set(v___x_1578_, 0, v___x_1583_);
v___x_1585_ = v___x_1578_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v___x_1583_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
v___y_1562_ = v___x_1585_;
goto v___jp_1561_;
}
}
}
v___jp_1561_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1560_);
lean_ctor_set(v___x_1563_, 1, v___y_1562_);
v___x_1564_ = lean_unsigned_to_nat(1u);
v___x_1565_ = lean_mk_empty_array_with_capacity(v___x_1564_);
v___x_1566_ = lean_array_push(v___x_1565_, v___x_1563_);
v___x_1567_ = l_Lasm_JS_Web_Support_fields(v___x_1566_);
lean_dec_ref(v___x_1566_);
return v___x_1567_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0(double v_value_1591_){
_start:
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_1592_, 0, v_value_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0___boxed(lean_object* v_value_1593_){
_start:
{
double v_value_boxed_1594_; lean_object* v_res_1595_; 
v_value_boxed_1594_ = lean_unbox_float(v_value_1593_);
lean_dec_ref(v_value_1593_);
v_res_1595_ = l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0(v_value_boxed_1594_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion___lam__0(lean_object* v_value_1598_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1599_, 0, v_value_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronSchedule___lam__0(lean_object* v___x_1607_, lean_object* v_d_1608_){
_start:
{
lean_object* v_minute_1609_; lean_object* v_hour_1610_; lean_object* v_dayOfMonth_1611_; lean_object* v_month_1612_; lean_object* v_dayOfWeek_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v_minute_1609_ = lean_ctor_get(v_d_1608_, 0);
lean_inc(v_minute_1609_);
v_hour_1610_ = lean_ctor_get(v_d_1608_, 1);
lean_inc(v_hour_1610_);
v_dayOfMonth_1611_ = lean_ctor_get(v_d_1608_, 2);
lean_inc(v_dayOfMonth_1611_);
v_month_1612_ = lean_ctor_get(v_d_1608_, 3);
lean_inc(v_month_1612_);
v_dayOfWeek_1613_ = lean_ctor_get(v_d_1608_, 4);
lean_inc(v_dayOfWeek_1613_);
lean_dec_ref(v_d_1608_);
v___x_1614_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0));
lean_inc_ref_n(v___x_1607_, 4);
v___x_1615_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1607_, v_minute_1609_);
v___x_1616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1614_);
lean_ctor_set(v___x_1616_, 1, v___x_1615_);
v___x_1617_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1));
v___x_1618_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1607_, v_hour_1610_);
v___x_1619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1617_);
lean_ctor_set(v___x_1619_, 1, v___x_1618_);
v___x_1620_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2));
v___x_1621_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1607_, v_dayOfMonth_1611_);
v___x_1622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1620_);
lean_ctor_set(v___x_1622_, 1, v___x_1621_);
v___x_1623_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3));
v___x_1624_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1607_, v_month_1612_);
v___x_1625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1623_);
lean_ctor_set(v___x_1625_, 1, v___x_1624_);
v___x_1626_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4));
v___x_1627_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1607_, v_dayOfWeek_1613_);
v___x_1628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1626_);
lean_ctor_set(v___x_1628_, 1, v___x_1627_);
v___x_1629_ = lean_unsigned_to_nat(5u);
v___x_1630_ = lean_mk_empty_array_with_capacity(v___x_1629_);
v___x_1631_ = lean_array_push(v___x_1630_, v___x_1616_);
v___x_1632_ = lean_array_push(v___x_1631_, v___x_1619_);
v___x_1633_ = lean_array_push(v___x_1632_, v___x_1622_);
v___x_1634_ = lean_array_push(v___x_1633_, v___x_1625_);
v___x_1635_ = lean_array_push(v___x_1634_, v___x_1628_);
v___x_1636_ = l_Lasm_JS_Web_Support_fields(v___x_1635_);
lean_dec_ref(v___x_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx(lean_object* v_x_1640_){
_start:
{
if (lean_obj_tag(v_x_1640_) == 0)
{
lean_object* v___x_1641_; 
v___x_1641_ = lean_unsigned_to_nat(0u);
return v___x_1641_;
}
else
{
lean_object* v___x_1642_; 
v___x_1642_ = lean_unsigned_to_nat(1u);
return v___x_1642_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx___boxed(lean_object* v_x_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx(v_x_1643_);
lean_dec_ref(v_x_1643_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(lean_object* v_t_1645_, lean_object* v_k_1646_){
_start:
{
lean_object* v_value_1647_; lean_object* v___x_1648_; 
v_value_1647_ = lean_ctor_get(v_t_1645_, 0);
lean_inc_ref(v_value_1647_);
lean_dec_ref(v_t_1645_);
v___x_1648_ = lean_apply_1(v_k_1646_, v_value_1647_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim(lean_object* v_motive_1649_, lean_object* v_ctorIdx_1650_, lean_object* v_t_1651_, lean_object* v_h_1652_, lean_object* v_k_1653_){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1651_, v_k_1653_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___boxed(lean_object* v_motive_1655_, lean_object* v_ctorIdx_1656_, lean_object* v_t_1657_, lean_object* v_h_1658_, lean_object* v_k_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim(v_motive_1655_, v_ctorIdx_1656_, v_t_1657_, v_h_1658_, v_k_1659_);
lean_dec(v_ctorIdx_1656_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_domString_elim___redArg(lean_object* v_t_1661_, lean_object* v_domString_1662_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1661_, v_domString_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_domString_elim(lean_object* v_motive_1664_, lean_object* v_t_1665_, lean_object* v_h_1666_, lean_object* v_domString_1667_){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1665_, v_domString_1667_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_cronSchedule_elim___redArg(lean_object* v_t_1669_, lean_object* v_cronSchedule_1670_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1669_, v_cronSchedule_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_cronSchedule_elim(lean_object* v_motive_1672_, lean_object* v_t_1673_, lean_object* v_h_1674_, lean_object* v_cronSchedule_1675_){
_start:
{
lean_object* v___x_1676_; 
v___x_1676_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1673_, v_cronSchedule_1675_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule___lam__0(lean_object* v_x_1677_){
_start:
{
if (lean_obj_tag(v_x_1677_) == 0)
{
lean_object* v_value_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1685_; 
v_value_1678_ = lean_ctor_get(v_x_1677_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v_x_1677_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1680_ = v_x_1677_;
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_value_1678_);
lean_dec(v_x_1677_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1683_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set_tag(v___x_1680_, 4);
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_value_1678_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
}
else
{
lean_object* v_value_1686_; lean_object* v_minute_1687_; lean_object* v_hour_1688_; lean_object* v_dayOfMonth_1689_; lean_object* v_month_1690_; lean_object* v_dayOfWeek_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
v_value_1686_ = lean_ctor_get(v_x_1677_, 0);
lean_inc_ref(v_value_1686_);
lean_dec_ref_known(v_x_1677_, 1);
v_minute_1687_ = lean_ctor_get(v_value_1686_, 0);
lean_inc(v_minute_1687_);
v_hour_1688_ = lean_ctor_get(v_value_1686_, 1);
lean_inc(v_hour_1688_);
v_dayOfMonth_1689_ = lean_ctor_get(v_value_1686_, 2);
lean_inc(v_dayOfMonth_1689_);
v_month_1690_ = lean_ctor_get(v_value_1686_, 3);
lean_inc(v_month_1690_);
v_dayOfWeek_1691_ = lean_ctor_get(v_value_1686_, 4);
lean_inc(v_dayOfWeek_1691_);
lean_dec_ref(v_value_1686_);
v___x_1692_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion));
v___x_1693_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0));
v___x_1694_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1692_, v_minute_1687_);
v___x_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1693_);
lean_ctor_set(v___x_1695_, 1, v___x_1694_);
v___x_1696_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1));
v___x_1697_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1692_, v_hour_1688_);
v___x_1698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1696_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v___x_1699_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2));
v___x_1700_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1692_, v_dayOfMonth_1689_);
v___x_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1699_);
lean_ctor_set(v___x_1701_, 1, v___x_1700_);
v___x_1702_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3));
v___x_1703_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1692_, v_month_1690_);
v___x_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1702_);
lean_ctor_set(v___x_1704_, 1, v___x_1703_);
v___x_1705_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4));
v___x_1706_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1692_, v_dayOfWeek_1691_);
v___x_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1705_);
lean_ctor_set(v___x_1707_, 1, v___x_1706_);
v___x_1708_ = lean_unsigned_to_nat(5u);
v___x_1709_ = lean_mk_empty_array_with_capacity(v___x_1708_);
v___x_1710_ = lean_array_push(v___x_1709_, v___x_1695_);
v___x_1711_ = lean_array_push(v___x_1710_, v___x_1698_);
v___x_1712_ = lean_array_push(v___x_1711_, v___x_1701_);
v___x_1713_ = lean_array_push(v___x_1712_, v___x_1704_);
v___x_1714_ = lean_array_push(v___x_1713_, v___x_1707_);
v___x_1715_ = l_Lasm_JS_Web_Support_fields(v___x_1714_);
lean_dec_ref(v___x_1714_);
return v___x_1715_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule___lam__0(lean_object* v_value_1718_){
_start:
{
lean_object* v___x_1719_; 
v___x_1719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1719_, 0, v_value_1718_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule___lam__0(lean_object* v_value_1722_){
_start:
{
lean_object* v___x_1723_; 
v___x_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1723_, 0, v_value_1722_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___lam__1(lean_object* v_f_1733_, lean_object* v___f_1734_, lean_object* v_x_1735_){
_start:
{
lean_object* v___x_1737_; uint8_t v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1737_ = lean_unsigned_to_nat(0u);
v___x_1738_ = 0;
v___x_1739_ = lean_apply_1(v_f_1733_, lean_box(0));
v___x_1740_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1737_, v___x_1738_, v___x_1739_, v___f_1734_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed(lean_object* v_f_1741_, lean_object* v___f_1742_, lean_object* v_x_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l_Lasm_JS_Deno_CronHandler_ofFn___lam__1(v_f_1741_, v___f_1742_, v_x_1743_);
lean_dec_ref(v_x_1743_);
return v_res_1745_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__0(void){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1746_ = lean_unsigned_to_nat(0u);
v___x_1747_ = lean_nat_to_int(v___x_1746_);
return v___x_1747_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__1(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__0, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__0);
v___x_1749_ = lean_nat_abs(v___x_1748_);
return v___x_1749_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2(void){
_start:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; uint8_t v___x_1752_; 
v___x_1750_ = lean_cstr_to_nat("9007199254740991");
v___x_1751_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__1, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__1);
v___x_1752_ = lean_nat_dec_le(v___x_1751_, v___x_1750_);
return v___x_1752_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3(void){
_start:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1753_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__0, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__0);
v___x_1754_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
return v___x_1754_;
}
}
static double _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__4(void){
_start:
{
lean_object* v___x_1755_; double v___x_1756_; 
v___x_1755_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__0, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__0);
v___x_1756_ = l_Float_ofInt(v___x_1755_);
return v___x_1756_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5(void){
_start:
{
double v___x_1757_; lean_object* v___x_1758_; 
v___x_1757_ = lean_float_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__4, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__4);
v___x_1758_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1758_, 0, v___x_1757_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn(lean_object* v_f_1759_){
_start:
{
lean_object* v___f_1761_; lean_object* v___f_1762_; lean_object* v___x_1763_; 
v___f_1761_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__0));
v___f_1762_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1762_, 0, v_f_1759_);
lean_closure_set(v___f_1762_, 1, v___f_1761_);
v___x_1763_ = l_Lasm_JS_Function_ofFn(v___f_1762_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; lean_object* v___x_1765_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_a_1764_);
lean_dec_ref_known(v___x_1763_, 1);
v___x_1765_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1765_) == 0)
{
lean_object* v_a_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v_a_1766_ = lean_ctor_get(v___x_1765_, 0);
lean_inc(v_a_1766_);
lean_dec_ref_known(v___x_1765_, 1);
v___x_1767_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1768_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1766_, v___x_1767_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___y_1776_; uint8_t v___x_1803_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1768_, 1);
v___x_1770_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1771_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1764_);
v___x_1772_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1772_, 0, v_a_1764_);
lean_ctor_set(v___x_1772_, 1, v___x_1771_);
v___x_1773_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1774_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_1803_ = lean_uint8_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__2, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2);
if (v___x_1803_ == 0)
{
lean_object* v___x_1804_; 
v___x_1804_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__3, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3);
v___y_1776_ = v___x_1804_;
goto v___jp_1775_;
}
else
{
lean_object* v___x_1805_; 
v___x_1805_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__5, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5);
v___y_1776_ = v___x_1805_;
goto v___jp_1775_;
}
v___jp_1775_:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
lean_inc(v___y_1776_);
v___x_1777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1774_);
lean_ctor_set(v___x_1777_, 1, v___y_1776_);
v___x_1778_ = lean_box(0);
v___x_1779_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1779_, 0, v___x_1777_);
lean_ctor_set(v___x_1779_, 1, v___x_1778_);
v___x_1780_ = l_Lasm_JS_obj(v___x_1779_);
v___x_1781_ = lean_unsigned_to_nat(3u);
v___x_1782_ = lean_mk_empty_array_with_capacity(v___x_1781_);
v___x_1783_ = lean_array_push(v___x_1782_, v___x_1772_);
v___x_1784_ = lean_array_push(v___x_1783_, v___x_1773_);
v___x_1785_ = lean_array_push(v___x_1784_, v___x_1780_);
v___x_1786_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1769_, v___x_1770_, v___x_1785_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1793_; 
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1793_ == 0)
{
lean_object* v_unused_1794_; 
v_unused_1794_ = lean_ctor_get(v___x_1786_, 0);
lean_dec(v_unused_1794_);
v___x_1788_ = v___x_1786_;
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
else
{
lean_dec(v___x_1786_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1793_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___x_1791_; 
if (v_isShared_1789_ == 0)
{
lean_ctor_set(v___x_1788_, 0, v_a_1764_);
v___x_1791_ = v___x_1788_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_a_1764_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
else
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1802_; 
lean_dec(v_a_1764_);
v_a_1795_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1797_ = v___x_1786_;
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1786_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1795_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
}
else
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
lean_dec(v_a_1764_);
v_a_1806_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v___x_1768_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v___x_1768_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
else
{
lean_object* v_a_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1821_; 
lean_dec(v_a_1764_);
v_a_1814_ = lean_ctor_get(v___x_1765_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v___x_1765_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1816_ = v___x_1765_;
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_a_1814_);
lean_dec(v___x_1765_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1821_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v___x_1819_; 
if (v_isShared_1817_ == 0)
{
v___x_1819_ = v___x_1816_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_a_1814_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
}
else
{
lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1829_; 
v_a_1822_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1824_ = v___x_1763_;
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_dec(v___x_1763_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1827_; 
if (v_isShared_1825_ == 0)
{
v___x_1827_ = v___x_1824_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v_a_1822_);
v___x_1827_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
return v___x_1827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___boxed(lean_object* v_f_1830_, lean_object* v_a_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l_Lasm_JS_Deno_CronHandler_ofFn(v_f_1830_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0(lean_object* v_f_1833_, lean_object* v_x_1834_){
_start:
{
lean_object* v___x_1836_; 
v___x_1836_ = lean_apply_1(v_f_1833_, lean_box(0));
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1844_; 
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1844_ == 0)
{
lean_object* v_unused_1845_; 
v_unused_1845_ = lean_ctor_get(v___x_1836_, 0);
lean_dec(v_unused_1845_);
v___x_1838_ = v___x_1836_;
v_isShared_1839_ = v_isSharedCheck_1844_;
goto v_resetjp_1837_;
}
else
{
lean_dec(v___x_1836_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1844_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v___x_1840_; lean_object* v___x_1842_; 
v___x_1840_ = lean_box(0);
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 0, v___x_1840_);
v___x_1842_ = v___x_1838_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v___x_1840_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
v_a_1846_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___x_1836_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1836_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_1854_, lean_object* v_x_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0(v_f_1854_, v_x_1855_);
lean_dec_ref(v_x_1855_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn(lean_object* v_f_1858_){
_start:
{
lean_object* v___f_1860_; lean_object* v___x_1861_; 
v___f_1860_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1860_, 0, v_f_1858_);
v___x_1861_ = l_Lasm_JS_Function_ofSyncFn(v___f_1860_);
if (lean_obj_tag(v___x_1861_) == 0)
{
lean_object* v_a_1862_; lean_object* v___x_1863_; 
v_a_1862_ = lean_ctor_get(v___x_1861_, 0);
lean_inc(v_a_1862_);
lean_dec_ref_known(v___x_1861_, 1);
v___x_1863_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
lean_inc(v_a_1864_);
lean_dec_ref_known(v___x_1863_, 1);
v___x_1865_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1866_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1864_, v___x_1865_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v_a_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___y_1874_; uint8_t v___x_1901_; 
v_a_1867_ = lean_ctor_get(v___x_1866_, 0);
lean_inc(v_a_1867_);
lean_dec_ref_known(v___x_1866_, 1);
v___x_1868_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1869_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1862_);
v___x_1870_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1870_, 0, v_a_1862_);
lean_ctor_set(v___x_1870_, 1, v___x_1869_);
v___x_1871_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1872_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_1901_ = lean_uint8_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__2, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2);
if (v___x_1901_ == 0)
{
lean_object* v___x_1902_; 
v___x_1902_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__3, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3);
v___y_1874_ = v___x_1902_;
goto v___jp_1873_;
}
else
{
lean_object* v___x_1903_; 
v___x_1903_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__5, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5);
v___y_1874_ = v___x_1903_;
goto v___jp_1873_;
}
v___jp_1873_:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
lean_inc(v___y_1874_);
v___x_1875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1872_);
lean_ctor_set(v___x_1875_, 1, v___y_1874_);
v___x_1876_ = lean_box(0);
v___x_1877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1877_, 0, v___x_1875_);
lean_ctor_set(v___x_1877_, 1, v___x_1876_);
v___x_1878_ = l_Lasm_JS_obj(v___x_1877_);
v___x_1879_ = lean_unsigned_to_nat(3u);
v___x_1880_ = lean_mk_empty_array_with_capacity(v___x_1879_);
v___x_1881_ = lean_array_push(v___x_1880_, v___x_1870_);
v___x_1882_ = lean_array_push(v___x_1881_, v___x_1871_);
v___x_1883_ = lean_array_push(v___x_1882_, v___x_1878_);
v___x_1884_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1867_, v___x_1868_, v___x_1883_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1891_ == 0)
{
lean_object* v_unused_1892_; 
v_unused_1892_ = lean_ctor_get(v___x_1884_, 0);
lean_dec(v_unused_1892_);
v___x_1886_ = v___x_1884_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_dec(v___x_1884_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
lean_ctor_set(v___x_1886_, 0, v_a_1862_);
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1862_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
else
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
lean_dec(v_a_1862_);
v_a_1893_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v___x_1884_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1884_);
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
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1911_; 
lean_dec(v_a_1862_);
v_a_1904_ = lean_ctor_get(v___x_1866_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1906_ = v___x_1866_;
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v___x_1866_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1907_ == 0)
{
v___x_1909_ = v___x_1906_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_a_1904_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
}
else
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1919_; 
lean_dec(v_a_1862_);
v_a_1912_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1914_ = v___x_1863_;
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1863_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1917_; 
if (v_isShared_1915_ == 0)
{
v___x_1917_ = v___x_1914_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1912_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
v_a_1920_ = lean_ctor_get(v___x_1861_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1861_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1861_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1861_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___boxed(lean_object* v_f_1928_, lean_object* v_a_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l_Lasm_JS_Deno_CronHandler_ofSyncFn(v_f_1928_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0(lean_object* v___x_1932_, lean_object* v___f_1933_, lean_object* v_d_1934_){
_start:
{
lean_object* v_backoffSchedule_1935_; lean_object* v_signal_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1953_; 
v_backoffSchedule_1935_ = lean_ctor_get(v_d_1934_, 0);
v_signal_1936_ = lean_ctor_get(v_d_1934_, 1);
v_isSharedCheck_1953_ = !lean_is_exclusive(v_d_1934_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1938_ = v_d_1934_;
v_isShared_1939_ = v_isSharedCheck_1953_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_signal_1936_);
lean_inc(v_backoffSchedule_1935_);
lean_dec(v_d_1934_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1953_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1943_; 
v___x_1940_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_1941_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1932_, v_backoffSchedule_1935_);
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 1, v___x_1941_);
lean_ctor_set(v___x_1938_, 0, v___x_1940_);
v___x_1943_ = v___x_1938_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1940_);
lean_ctor_set(v_reuseFailAlloc_1952_, 1, v___x_1941_);
v___x_1943_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1944_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0___closed__0));
v___x_1945_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1933_, v_signal_1936_);
v___x_1946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1946_, 0, v___x_1944_);
lean_ctor_set(v___x_1946_, 1, v___x_1945_);
v___x_1947_ = lean_unsigned_to_nat(2u);
v___x_1948_ = lean_mk_empty_array_with_capacity(v___x_1947_);
v___x_1949_ = lean_array_push(v___x_1948_, v___x_1943_);
v___x_1950_ = lean_array_push(v___x_1949_, v___x_1946_);
v___x_1951_ = l_Lasm_JS_Web_Support_fields(v___x_1950_);
lean_dec_ref(v___x_1950_);
return v___x_1951_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1(void){
_start:
{
lean_object* v___f_1955_; lean_object* v___x_1956_; lean_object* v___f_1957_; 
v___f_1955_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__0));
v___x_1956_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2);
v___f_1957_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0), 3, 2);
lean_closure_set(v___f_1957_, 0, v___x_1956_);
lean_closure_set(v___f_1957_, 1, v___f_1955_);
return v___f_1957_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCronWithOptionsOptions(void){
_start:
{
lean_object* v___f_1958_; 
v___f_1958_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1, &l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1_once, _init_l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1);
return v___f_1958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn(lean_object* v_f_1966_){
_start:
{
lean_object* v___f_1968_; lean_object* v___f_1969_; lean_object* v___x_1970_; 
v___f_1968_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__0));
v___f_1969_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1969_, 0, v_f_1966_);
lean_closure_set(v___f_1969_, 1, v___f_1968_);
v___x_1970_ = l_Lasm_JS_Function_ofFn(v___f_1969_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; lean_object* v___x_1972_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_a_1971_);
lean_dec_ref_known(v___x_1970_, 1);
v___x_1972_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1972_) == 0)
{
lean_object* v_a_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v_a_1973_ = lean_ctor_get(v___x_1972_, 0);
lean_inc(v_a_1973_);
lean_dec_ref_known(v___x_1972_, 1);
v___x_1974_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1975_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1973_, v___x_1974_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v_a_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___y_1983_; uint8_t v___x_2010_; 
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
lean_inc(v_a_1976_);
lean_dec_ref_known(v___x_1975_, 1);
v___x_1977_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1978_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1971_);
v___x_1979_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1979_, 0, v_a_1971_);
lean_ctor_set(v___x_1979_, 1, v___x_1978_);
v___x_1980_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1981_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_2010_ = lean_uint8_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__2, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2);
if (v___x_2010_ == 0)
{
lean_object* v___x_2011_; 
v___x_2011_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__3, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3);
v___y_1983_ = v___x_2011_;
goto v___jp_1982_;
}
else
{
lean_object* v___x_2012_; 
v___x_2012_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__5, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5);
v___y_1983_ = v___x_2012_;
goto v___jp_1982_;
}
v___jp_1982_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
lean_inc(v___y_1983_);
v___x_1984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1981_);
lean_ctor_set(v___x_1984_, 1, v___y_1983_);
v___x_1985_ = lean_box(0);
v___x_1986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1986_, 0, v___x_1984_);
lean_ctor_set(v___x_1986_, 1, v___x_1985_);
v___x_1987_ = l_Lasm_JS_obj(v___x_1986_);
v___x_1988_ = lean_unsigned_to_nat(3u);
v___x_1989_ = lean_mk_empty_array_with_capacity(v___x_1988_);
v___x_1990_ = lean_array_push(v___x_1989_, v___x_1979_);
v___x_1991_ = lean_array_push(v___x_1990_, v___x_1980_);
v___x_1992_ = lean_array_push(v___x_1991_, v___x_1987_);
v___x_1993_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1976_, v___x_1977_, v___x_1992_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2000_; 
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2000_ == 0)
{
lean_object* v_unused_2001_; 
v_unused_2001_ = lean_ctor_get(v___x_1993_, 0);
lean_dec(v_unused_2001_);
v___x_1995_ = v___x_1993_;
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
else
{
lean_dec(v___x_1993_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1998_; 
if (v_isShared_1996_ == 0)
{
lean_ctor_set(v___x_1995_, 0, v_a_1971_);
v___x_1998_ = v___x_1995_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v_a_1971_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2009_; 
lean_dec(v_a_1971_);
v_a_2002_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2004_ = v___x_1993_;
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_1993_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2007_; 
if (v_isShared_2005_ == 0)
{
v___x_2007_ = v___x_2004_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_a_2002_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
}
}
else
{
lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
lean_dec(v_a_1971_);
v_a_2013_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2015_ = v___x_1975_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_dec(v___x_1975_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2013_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
}
else
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_dec(v_a_1971_);
v_a_2021_ = lean_ctor_get(v___x_1972_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_1972_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_1972_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2021_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
else
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2036_; 
v_a_2029_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2031_ = v___x_1970_;
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_1970_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2034_; 
if (v_isShared_2032_ == 0)
{
v___x_2034_ = v___x_2031_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_a_2029_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn___boxed(lean_object* v_f_2037_, lean_object* v_a_2038_){
_start:
{
lean_object* v_res_2039_; 
v_res_2039_ = l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn(v_f_2037_);
return v_res_2039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn(lean_object* v_f_2040_){
_start:
{
lean_object* v___f_2042_; lean_object* v___x_2043_; 
v___f_2042_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2042_, 0, v_f_2040_);
v___x_2043_ = l_Lasm_JS_Function_ofSyncFn(v___f_2042_);
if (lean_obj_tag(v___x_2043_) == 0)
{
lean_object* v_a_2044_; lean_object* v___x_2045_; 
v_a_2044_ = lean_ctor_get(v___x_2043_, 0);
lean_inc(v_a_2044_);
lean_dec_ref_known(v___x_2043_, 1);
v___x_2045_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2045_) == 0)
{
lean_object* v_a_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v_a_2046_ = lean_ctor_get(v___x_2045_, 0);
lean_inc(v_a_2046_);
lean_dec_ref_known(v___x_2045_, 1);
v___x_2047_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_2048_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2046_, v___x_2047_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_object* v_a_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___y_2056_; uint8_t v___x_2083_; 
v_a_2049_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_a_2049_);
lean_dec_ref_known(v___x_2048_, 1);
v___x_2050_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_2051_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_2044_);
v___x_2052_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2052_, 0, v_a_2044_);
lean_ctor_set(v___x_2052_, 1, v___x_2051_);
v___x_2053_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_2054_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_2083_ = lean_uint8_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__2, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2);
if (v___x_2083_ == 0)
{
lean_object* v___x_2084_; 
v___x_2084_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__3, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3);
v___y_2056_ = v___x_2084_;
goto v___jp_2055_;
}
else
{
lean_object* v___x_2085_; 
v___x_2085_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__5, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5);
v___y_2056_ = v___x_2085_;
goto v___jp_2055_;
}
v___jp_2055_:
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
lean_inc(v___y_2056_);
v___x_2057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2054_);
lean_ctor_set(v___x_2057_, 1, v___y_2056_);
v___x_2058_ = lean_box(0);
v___x_2059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2057_);
lean_ctor_set(v___x_2059_, 1, v___x_2058_);
v___x_2060_ = l_Lasm_JS_obj(v___x_2059_);
v___x_2061_ = lean_unsigned_to_nat(3u);
v___x_2062_ = lean_mk_empty_array_with_capacity(v___x_2061_);
v___x_2063_ = lean_array_push(v___x_2062_, v___x_2052_);
v___x_2064_ = lean_array_push(v___x_2063_, v___x_2053_);
v___x_2065_ = lean_array_push(v___x_2064_, v___x_2060_);
v___x_2066_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2049_, v___x_2050_, v___x_2065_);
if (lean_obj_tag(v___x_2066_) == 0)
{
lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2073_ == 0)
{
lean_object* v_unused_2074_; 
v_unused_2074_ = lean_ctor_get(v___x_2066_, 0);
lean_dec(v_unused_2074_);
v___x_2068_ = v___x_2066_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_dec(v___x_2066_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
lean_ctor_set(v___x_2068_, 0, v_a_2044_);
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2044_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
else
{
lean_object* v_a_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2082_; 
lean_dec(v_a_2044_);
v_a_2075_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2077_ = v___x_2066_;
v_isShared_2078_ = v_isSharedCheck_2082_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_a_2075_);
lean_dec(v___x_2066_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2082_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2080_; 
if (v_isShared_2078_ == 0)
{
v___x_2080_ = v___x_2077_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_a_2075_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
lean_dec(v_a_2044_);
v_a_2086_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_2048_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2048_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
else
{
lean_object* v_a_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2101_; 
lean_dec(v_a_2044_);
v_a_2094_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2101_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2101_ == 0)
{
v___x_2096_ = v___x_2045_;
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_a_2094_);
lean_dec(v___x_2045_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2099_; 
if (v_isShared_2097_ == 0)
{
v___x_2099_ = v___x_2096_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_a_2094_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
}
}
else
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2109_; 
v_a_2102_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2104_ = v___x_2043_;
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2043_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2107_; 
if (v_isShared_2105_ == 0)
{
v___x_2107_ = v___x_2104_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v_a_2102_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn___boxed(lean_object* v_f_2110_, lean_object* v_a_2111_){
_start:
{
lean_object* v_res_2112_; 
v_res_2112_ = l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn(v_f_2110_);
return v_res_2112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_cursor(lean_object* v_self_2113_){
_start:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2115_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__1));
v___x_2116_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2113_, v___x_2115_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_cursor___boxed(lean_object* v_self_2117_, lean_object* v_a_2118_){
_start:
{
lean_object* v_res_2119_; 
v_res_2119_ = l_Lasm_JS_Deno_KvListIterator_cursor(v_self_2117_);
return v_res_2119_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2120_; uint8_t v___x_2121_; uint64_t v___x_2122_; 
v___x_2120_ = 0ULL;
v___x_2121_ = 0;
v___x_2122_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_2121_, v___x_2120_);
return v___x_2122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(lean_object* v_f_2124_, lean_object* v_args_2125_, lean_object* v_this_2126_){
_start:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; uint64_t v___x_2130_; lean_object* v___x_2131_; 
v___x_2128_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2129_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2129_, 0, v_f_2124_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
v___x_2130_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0);
v___x_2131_ = l_Lasm_JS_Value_invokeRaw(v___x_2129_, v_this_2126_, v_args_2125_, v___x_2130_);
if (lean_obj_tag(v___x_2131_) == 0)
{
lean_object* v_a_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v_a_2132_ = lean_ctor_get(v___x_2131_, 0);
lean_inc(v_a_2132_);
lean_dec_ref_known(v___x_2131_, 1);
v___x_2133_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__1));
v___x_2134_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2133_, v_a_2132_);
lean_dec(v_a_2132_);
return v___x_2134_;
}
else
{
lean_object* v_a_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2142_; 
v_a_2135_ = lean_ctor_get(v___x_2131_, 0);
v_isSharedCheck_2142_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2142_ == 0)
{
v___x_2137_ = v___x_2131_;
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_a_2135_);
lean_dec(v___x_2131_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2142_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v___x_2140_; 
if (v_isShared_2138_ == 0)
{
v___x_2140_ = v___x_2137_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v_a_2135_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
return v___x_2140_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___boxed(lean_object* v_f_2143_, lean_object* v_args_2144_, lean_object* v_this_2145_, lean_object* v_a_2146_){
_start:
{
lean_object* v_res_2147_; 
v_res_2147_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(v_f_2143_, v_args_2144_, v_this_2145_);
return v_res_2147_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0(void){
_start:
{
uint8_t v___x_2148_; uint64_t v___x_2149_; 
v___x_2148_ = 1;
v___x_2149_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2148_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(lean_object* v_o_2151_, lean_object* v_key_2152_){
_start:
{
lean_object* v___x_2154_; lean_object* v_k_2155_; lean_object* v___x_2156_; 
v___x_2154_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v_k_2155_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_k_2155_, 0, v_key_2152_);
lean_ctor_set(v_k_2155_, 1, v___x_2154_);
v___x_2156_ = l_Lasm_JS_Wire_encodeIO(v_k_2155_);
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v_a_2157_; uint32_t v___x_2158_; uint32_t v___x_2159_; uint64_t v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v_a_2157_ = lean_ctor_get(v___x_2156_, 0);
lean_inc(v_a_2157_);
lean_dec_ref_known(v___x_2156_, 1);
v___x_2158_ = 203;
v___x_2159_ = lasm_js_value_handle(v_o_2151_);
v___x_2160_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0);
v___x_2161_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2161_, 0, v_o_2151_);
lean_ctor_set(v___x_2161_, 1, v___x_2154_);
v___x_2162_ = lean_unsigned_to_nat(2u);
v___x_2163_ = lean_mk_empty_array_with_capacity(v___x_2162_);
lean_inc_ref(v_k_2155_);
v___x_2164_ = lean_array_push(v___x_2163_, v_k_2155_);
v___x_2165_ = lean_array_push(v___x_2164_, v___x_2161_);
v___x_2166_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2165_);
v___x_2167_ = lasm_js_call(v___x_2158_, v___x_2159_, v___x_2160_, v_a_2157_, v___x_2166_);
lean_dec_ref_known(v___x_2166_, 1);
lean_dec(v_a_2157_);
if (lean_obj_tag(v___x_2167_) == 0)
{
lean_object* v_a_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v_a_2168_ = lean_ctor_get(v___x_2167_, 0);
lean_inc(v_a_2168_);
lean_dec_ref_known(v___x_2167_, 1);
v___x_2169_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__1));
v___x_2170_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2155_);
v___x_2171_ = lean_string_append(v___x_2169_, v___x_2170_);
lean_dec_ref(v___x_2170_);
v___x_2172_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2171_, v_a_2168_);
lean_dec(v_a_2168_);
lean_dec_ref(v___x_2171_);
return v___x_2172_;
}
else
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
lean_dec_ref_known(v_k_2155_, 2);
v_a_2173_ = lean_ctor_get(v___x_2167_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2167_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2167_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2178_; 
if (v_isShared_2176_ == 0)
{
v___x_2178_ = v___x_2175_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2173_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
else
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2188_; 
lean_dec_ref_known(v_k_2155_, 2);
lean_dec(v_o_2151_);
v_a_2181_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2183_ = v___x_2156_;
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v___x_2156_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_a_2181_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___boxed(lean_object* v_o_2189_, lean_object* v_key_2190_, lean_object* v_a_2191_){
_start:
{
lean_object* v_res_2192_; 
v_res_2192_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(v_o_2189_, v_key_2190_);
return v_res_2192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_iterator(lean_object* v_self_2197_){
_start:
{
lean_object* v___x_2199_; 
v___x_2199_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2199_) == 0)
{
lean_object* v_a_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v_a_2200_ = lean_ctor_get(v___x_2199_, 0);
lean_inc(v_a_2200_);
lean_dec_ref_known(v___x_2199_, 1);
v___x_2201_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__0));
v___x_2202_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2200_, v___x_2201_);
if (lean_obj_tag(v___x_2202_) == 0)
{
lean_object* v_a_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v_a_2203_ = lean_ctor_get(v___x_2202_, 0);
lean_inc(v_a_2203_);
lean_dec_ref_known(v___x_2202_, 1);
v___x_2204_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__1));
v___x_2205_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2203_, v___x_2204_);
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v_a_2206_; lean_object* v___x_2207_; 
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
lean_inc(v_a_2206_);
lean_dec_ref_known(v___x_2205_, 1);
lean_inc(v_self_2197_);
v___x_2207_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(v_self_2197_, v_a_2206_);
if (lean_obj_tag(v___x_2207_) == 0)
{
lean_object* v_a_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v_a_2208_ = lean_ctor_get(v___x_2207_, 0);
lean_inc(v_a_2208_);
lean_dec_ref_known(v___x_2207_, 1);
v___x_2209_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v___x_2210_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2211_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2211_, 0, v_self_2197_);
lean_ctor_set(v___x_2211_, 1, v___x_2210_);
v___x_2212_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(v_a_2208_, v___x_2209_, v___x_2211_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v_a_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2220_; 
v_a_2213_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2215_ = v___x_2212_;
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_a_2213_);
lean_dec(v___x_2212_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2218_; 
if (v_isShared_2216_ == 0)
{
v___x_2218_ = v___x_2215_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_a_2213_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
else
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2228_; 
v_a_2221_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2223_ = v___x_2212_;
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v___x_2212_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2226_; 
if (v_isShared_2224_ == 0)
{
v___x_2226_ = v___x_2223_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_a_2221_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
else
{
lean_object* v_a_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2236_; 
lean_dec(v_self_2197_);
v_a_2229_ = lean_ctor_get(v___x_2207_, 0);
v_isSharedCheck_2236_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2231_ = v___x_2207_;
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_a_2229_);
lean_dec(v___x_2207_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2234_; 
if (v_isShared_2232_ == 0)
{
v___x_2234_ = v___x_2231_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v_a_2229_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
}
else
{
lean_object* v_a_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2244_; 
lean_dec(v_self_2197_);
v_a_2237_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2239_ = v___x_2205_;
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_a_2237_);
lean_dec(v___x_2205_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v___x_2242_; 
if (v_isShared_2240_ == 0)
{
v___x_2242_ = v___x_2239_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_a_2237_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
return v___x_2242_;
}
}
}
}
else
{
lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2252_; 
lean_dec(v_self_2197_);
v_a_2245_ = lean_ctor_get(v___x_2202_, 0);
v_isSharedCheck_2252_ = !lean_is_exclusive(v___x_2202_);
if (v_isSharedCheck_2252_ == 0)
{
v___x_2247_ = v___x_2202_;
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v___x_2202_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2250_; 
if (v_isShared_2248_ == 0)
{
v___x_2250_ = v___x_2247_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_a_2245_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
return v___x_2250_;
}
}
}
}
else
{
lean_object* v_a_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2260_; 
lean_dec(v_self_2197_);
v_a_2253_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2260_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2260_ == 0)
{
v___x_2255_ = v___x_2199_;
v_isShared_2256_ = v_isSharedCheck_2260_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_a_2253_);
lean_dec(v___x_2199_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2260_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v___x_2258_; 
if (v_isShared_2256_ == 0)
{
v___x_2258_ = v___x_2255_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v_a_2253_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_iterator___boxed(lean_object* v_self_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Lasm_JS_Deno_KvListIterator_iterator(v_self_2261_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0(lean_object* v_x_2264_){
_start:
{
if (lean_obj_tag(v_x_2264_) == 0)
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2274_; 
v_a_2266_ = lean_ctor_get(v_x_2264_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v_x_2264_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2268_ = v_x_2264_;
v_isShared_2269_ = v_isSharedCheck_2274_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v_x_2264_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2274_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2271_; 
if (v_isShared_2269_ == 0)
{
v___x_2271_ = v___x_2268_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2266_);
v___x_2271_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
lean_object* v___x_2272_; 
v___x_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2271_);
return v___x_2272_;
}
}
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2284_; 
v_a_2275_ = lean_ctor_get(v_x_2264_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v_x_2264_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2277_ = v_x_2264_;
v_isShared_2278_ = v_isSharedCheck_2284_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v_x_2264_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2284_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2279_; lean_object* v___x_2281_; 
v___x_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2279_, 0, v_a_2275_);
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 0, v___x_2279_);
v___x_2281_ = v___x_2277_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v___x_2279_);
v___x_2281_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
lean_object* v___x_2282_; 
v___x_2282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2281_);
return v___x_2282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0___boxed(lean_object* v_x_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0(v_x_2285_);
return v_res_2287_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4(void){
_start:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2292_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2293_ = lean_string_utf8_byte_size(v___x_2292_);
return v___x_2293_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5(void){
_start:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; uint8_t v___x_2296_; 
v___x_2294_ = lean_unsigned_to_nat(0u);
v___x_2295_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4);
v___x_2296_ = lean_nat_dec_eq(v___x_2295_, v___x_2294_);
return v___x_2296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(lean_object* v_d_2301_, lean_object* v_key_2302_){
_start:
{
if (lean_obj_tag(v_d_2301_) == 8)
{
lean_object* v___x_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2334_; 
v___x_2303_ = l_Lasm_JS_Data_field(v_d_2301_, v_key_2302_);
v_isSharedCheck_2334_ = !lean_is_exclusive(v_d_2301_);
if (v_isSharedCheck_2334_ == 0)
{
lean_object* v_unused_2335_; 
v_unused_2335_ = lean_ctor_get(v_d_2301_, 0);
lean_dec(v_unused_2335_);
v___x_2305_ = v_d_2301_;
v_isShared_2306_ = v_isSharedCheck_2334_;
goto v_resetjp_2304_;
}
else
{
lean_dec(v_d_2301_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2334_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
if (lean_obj_tag(v___x_2303_) == 4)
{
lean_object* v_s_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2314_; 
lean_del_object(v___x_2305_);
v_s_2307_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2309_ = v___x_2303_;
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_s_2307_);
lean_dec(v___x_2303_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
if (v_isShared_2310_ == 0)
{
lean_ctor_set_tag(v___x_2309_, 1);
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_s_2307_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
else
{
lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; uint8_t v___x_2325_; 
v___x_2315_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_2316_ = lean_string_append(v___x_2315_, v_key_2302_);
v___x_2317_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_2318_ = lean_string_append(v___x_2316_, v___x_2317_);
v___x_2319_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__2));
v___x_2320_ = lean_string_append(v___x_2318_, v___x_2319_);
v___x_2321_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
v___x_2322_ = lean_string_append(v___x_2320_, v___x_2321_);
v___x_2323_ = l_Lasm_JS_Data_describe(v___x_2303_);
v___x_2324_ = lean_string_append(v___x_2322_, v___x_2323_);
lean_dec_ref(v___x_2323_);
v___x_2325_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5);
if (v___x_2325_ == 0)
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2329_; 
v___x_2326_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6));
v___x_2327_ = lean_string_append(v___x_2324_, v___x_2326_);
if (v_isShared_2306_ == 0)
{
lean_ctor_set_tag(v___x_2305_, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2327_);
v___x_2329_ = v___x_2305_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v___x_2327_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
else
{
lean_object* v___x_2332_; 
if (v_isShared_2306_ == 0)
{
lean_ctor_set_tag(v___x_2305_, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2324_);
v___x_2332_ = v___x_2305_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v___x_2324_);
v___x_2332_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
return v___x_2332_;
}
}
}
}
}
else
{
lean_object* v___x_2336_; 
lean_dec(v_d_2301_);
v___x_2336_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__8));
return v___x_2336_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_d_2337_, lean_object* v_key_2338_){
_start:
{
lean_object* v_res_2339_; 
v_res_2339_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_2337_, v_key_2338_);
lean_dec_ref(v_key_2338_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5(size_t v_sz_2342_, size_t v_i_2343_, lean_object* v_bs_2344_){
_start:
{
uint8_t v___x_2345_; 
v___x_2345_ = lean_usize_dec_lt(v_i_2343_, v_sz_2342_);
if (v___x_2345_ == 0)
{
lean_object* v___x_2346_; 
v___x_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2346_, 0, v_bs_2344_);
return v___x_2346_;
}
else
{
lean_object* v_v_2347_; lean_object* v___x_2348_; lean_object* v_bs_x27_2349_; lean_object* v_a_2351_; 
v_v_2347_ = lean_array_uget(v_bs_2344_, v_i_2343_);
v___x_2348_ = lean_unsigned_to_nat(0u);
v_bs_x27_2349_ = lean_array_uset(v_bs_2344_, v_i_2343_, v___x_2348_);
switch(lean_obj_tag(v_v_2347_))
{
case 6:
{
lean_object* v_b_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2363_; 
v_b_2356_ = lean_ctor_get(v_v_2347_, 0);
v_isSharedCheck_2363_ = !lean_is_exclusive(v_v_2347_);
if (v_isSharedCheck_2363_ == 0)
{
v___x_2358_ = v_v_2347_;
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_b_2356_);
lean_dec(v_v_2347_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2363_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2361_; 
if (v_isShared_2359_ == 0)
{
lean_ctor_set_tag(v___x_2358_, 0);
v___x_2361_ = v___x_2358_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v_b_2356_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
v_a_2351_ = v___x_2361_;
goto v___jp_2350_;
}
}
}
case 4:
{
lean_object* v_s_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2371_; 
v_s_2364_ = lean_ctor_get(v_v_2347_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v_v_2347_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2366_ = v_v_2347_;
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_s_2364_);
lean_dec(v_v_2347_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2371_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2369_; 
if (v_isShared_2367_ == 0)
{
lean_ctor_set_tag(v___x_2366_, 1);
v___x_2369_ = v___x_2366_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v_s_2364_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
v_a_2351_ = v___x_2369_;
goto v___jp_2350_;
}
}
}
case 3:
{
double v_n_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2379_; 
v_n_2372_ = lean_ctor_get_float(v_v_2347_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v_v_2347_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2374_ = v_v_2347_;
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
else
{
lean_dec(v_v_2347_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2377_; 
if (v_isShared_2375_ == 0)
{
lean_ctor_set_tag(v___x_2374_, 2);
v___x_2377_ = v___x_2374_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(2, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2378_, 0, v_n_2372_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
v_a_2351_ = v___x_2377_;
goto v___jp_2350_;
}
}
}
case 5:
{
lean_object* v_i_2380_; lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2387_; 
v_i_2380_ = lean_ctor_get(v_v_2347_, 0);
v_isSharedCheck_2387_ = !lean_is_exclusive(v_v_2347_);
if (v_isSharedCheck_2387_ == 0)
{
v___x_2382_ = v_v_2347_;
v_isShared_2383_ = v_isSharedCheck_2387_;
goto v_resetjp_2381_;
}
else
{
lean_inc(v_i_2380_);
lean_dec(v_v_2347_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2387_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
lean_object* v___x_2385_; 
if (v_isShared_2383_ == 0)
{
lean_ctor_set_tag(v___x_2382_, 3);
v___x_2385_ = v___x_2382_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v_i_2380_);
v___x_2385_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
v_a_2351_ = v___x_2385_;
goto v___jp_2350_;
}
}
}
case 2:
{
uint8_t v_b_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2395_; 
v_b_2388_ = lean_ctor_get_uint8(v_v_2347_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v_v_2347_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2390_ = v_v_2347_;
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
else
{
lean_dec(v_v_2347_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2393_; 
if (v_isShared_2391_ == 0)
{
lean_ctor_set_tag(v___x_2390_, 4);
v___x_2393_ = v___x_2390_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(4, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_2394_, 0, v_b_2388_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
v_a_2351_ = v___x_2393_;
goto v___jp_2350_;
}
}
}
default: 
{
lean_object* v___x_2396_; 
lean_dec_ref(v_bs_x27_2349_);
lean_dec(v_v_2347_);
v___x_2396_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5___closed__0));
return v___x_2396_;
}
}
v___jp_2350_:
{
size_t v___x_2352_; size_t v___x_2353_; lean_object* v___x_2354_; 
v___x_2352_ = ((size_t)1ULL);
v___x_2353_ = lean_usize_add(v_i_2343_, v___x_2352_);
v___x_2354_ = lean_array_uset(v_bs_x27_2349_, v_i_2343_, v_a_2351_);
v_i_2343_ = v___x_2353_;
v_bs_2344_ = v___x_2354_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object* v_sz_2397_, lean_object* v_i_2398_, lean_object* v_bs_2399_){
_start:
{
size_t v_sz_boxed_2400_; size_t v_i_boxed_2401_; lean_object* v_res_2402_; 
v_sz_boxed_2400_ = lean_unbox_usize(v_sz_2397_);
lean_dec(v_sz_2397_);
v_i_boxed_2401_ = lean_unbox_usize(v_i_2398_);
lean_dec(v_i_2398_);
v_res_2402_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5(v_sz_boxed_2400_, v_i_boxed_2401_, v_bs_2399_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_2410_, lean_object* v_key_2411_){
_start:
{
if (lean_obj_tag(v_d_2410_) == 8)
{
lean_object* v___x_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2456_; 
v___x_2412_ = l_Lasm_JS_Data_field(v_d_2410_, v_key_2411_);
v_isSharedCheck_2456_ = !lean_is_exclusive(v_d_2410_);
if (v_isSharedCheck_2456_ == 0)
{
lean_object* v_unused_2457_; 
v_unused_2457_ = lean_ctor_get(v_d_2410_, 0);
lean_dec(v_unused_2457_);
v___x_2414_ = v_d_2410_;
v_isShared_2415_ = v_isSharedCheck_2456_;
goto v_resetjp_2413_;
}
else
{
lean_dec(v_d_2410_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2456_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v_a_2417_; 
if (lean_obj_tag(v___x_2412_) == 7)
{
lean_object* v_items_2442_; size_t v_sz_2443_; size_t v___x_2444_; lean_object* v___x_2445_; 
v_items_2442_ = lean_ctor_get(v___x_2412_, 0);
lean_inc_ref(v_items_2442_);
v_sz_2443_ = lean_array_size(v_items_2442_);
v___x_2444_ = ((size_t)0ULL);
v___x_2445_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5(v_sz_2443_, v___x_2444_, v_items_2442_);
if (lean_obj_tag(v___x_2445_) == 0)
{
lean_object* v_a_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; uint8_t v___x_2450_; 
v_a_2446_ = lean_ctor_get(v___x_2445_, 0);
lean_inc(v_a_2446_);
lean_dec_ref_known(v___x_2445_, 1);
v___x_2447_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3));
v___x_2448_ = lean_string_utf8_byte_size(v_a_2446_);
v___x_2449_ = lean_unsigned_to_nat(0u);
v___x_2450_ = lean_nat_dec_eq(v___x_2448_, v___x_2449_);
if (v___x_2450_ == 0)
{
lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2451_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_2452_ = lean_string_append(v___x_2451_, v_a_2446_);
lean_dec(v_a_2446_);
v___x_2453_ = lean_string_append(v___x_2447_, v___x_2452_);
lean_dec_ref(v___x_2452_);
v_a_2417_ = v___x_2453_;
goto v___jp_2416_;
}
else
{
lean_dec(v_a_2446_);
v_a_2417_ = v___x_2447_;
goto v___jp_2416_;
}
}
else
{
if (lean_obj_tag(v___x_2445_) == 0)
{
lean_object* v_a_2454_; 
v_a_2454_ = lean_ctor_get(v___x_2445_, 0);
lean_inc(v_a_2454_);
lean_dec_ref_known(v___x_2445_, 1);
v_a_2417_ = v_a_2454_;
goto v___jp_2416_;
}
else
{
lean_dec_ref_known(v___x_2412_, 1);
lean_del_object(v___x_2414_);
return v___x_2445_;
}
}
}
else
{
lean_object* v___x_2455_; 
v___x_2455_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v_a_2417_ = v___x_2455_;
goto v___jp_2416_;
}
v___jp_2416_:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; uint8_t v___x_2430_; 
v___x_2418_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_2419_ = lean_string_append(v___x_2418_, v_key_2411_);
v___x_2420_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_2421_ = lean_string_append(v___x_2419_, v___x_2420_);
v___x_2422_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0));
v___x_2423_ = lean_string_append(v___x_2421_, v___x_2422_);
v___x_2424_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
v___x_2425_ = lean_string_append(v___x_2423_, v___x_2424_);
v___x_2426_ = l_Lasm_JS_Data_describe(v___x_2412_);
v___x_2427_ = lean_string_append(v___x_2425_, v___x_2426_);
lean_dec_ref(v___x_2426_);
v___x_2428_ = lean_string_utf8_byte_size(v_a_2417_);
v___x_2429_ = lean_unsigned_to_nat(0u);
v___x_2430_ = lean_nat_dec_eq(v___x_2428_, v___x_2429_);
if (v___x_2430_ == 0)
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2437_; 
v___x_2431_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_2432_ = lean_string_append(v___x_2431_, v_a_2417_);
lean_dec_ref(v_a_2417_);
v___x_2433_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_2434_ = lean_string_append(v___x_2432_, v___x_2433_);
v___x_2435_ = lean_string_append(v___x_2427_, v___x_2434_);
lean_dec_ref(v___x_2434_);
if (v_isShared_2415_ == 0)
{
lean_ctor_set_tag(v___x_2414_, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2435_);
v___x_2437_ = v___x_2414_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v___x_2435_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
else
{
lean_object* v___x_2440_; 
lean_dec_ref(v_a_2417_);
if (v_isShared_2415_ == 0)
{
lean_ctor_set_tag(v___x_2414_, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2427_);
v___x_2440_ = v___x_2414_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v___x_2427_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
}
}
}
else
{
lean_object* v___x_2458_; 
lean_dec(v_d_2410_);
v___x_2458_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__5));
return v___x_2458_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_2459_, lean_object* v_key_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_2459_, v_key_2460_);
lean_dec_ref(v_key_2460_);
return v_res_2461_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6(void){
_start:
{
lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2468_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__5));
v___x_2469_ = lean_unsigned_to_nat(46u);
v___x_2470_ = lean_unsigned_to_nat(193u);
v___x_2471_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__4));
v___x_2472_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__3));
v___x_2473_ = l_mkPanicMessageWithDecl(v___x_2472_, v___x_2471_, v___x_2470_, v___x_2469_, v___x_2468_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_2475_, lean_object* v_d_2476_){
_start:
{
lean_object* v___y_2479_; lean_object* v___y_2480_; lean_object* v___y_2485_; lean_object* v_received_2486_; lean_object* v___y_2505_; lean_object* v_a_2508_; lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2532_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
lean_inc(v_d_2476_);
v___x_2533_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_2476_, v___x_2532_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_a_2534_);
lean_dec_ref_known(v___x_2533_, 1);
v_a_2508_ = v_a_2534_;
goto v___jp_2507_;
}
else
{
lean_object* v_a_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v_a_2535_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_a_2535_);
lean_dec_ref_known(v___x_2533_, 1);
v___x_2536_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
lean_inc(v_d_2476_);
v___x_2537_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_2476_, v___x_2536_);
if (lean_obj_tag(v___x_2537_) == 0)
{
lean_object* v_a_2538_; 
lean_dec(v_a_2535_);
v_a_2538_ = lean_ctor_get(v___x_2537_, 0);
lean_inc(v_a_2538_);
lean_dec_ref_known(v___x_2537_, 1);
v_a_2508_ = v_a_2538_;
goto v___jp_2507_;
}
else
{
lean_object* v_a_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
v_a_2539_ = lean_ctor_get(v___x_2537_, 0);
lean_inc(v_a_2539_);
lean_dec_ref_known(v___x_2537_, 1);
v___x_2540_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_d_2476_);
v___x_2541_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_2476_, v___x_2540_);
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v_a_2542_; 
lean_dec(v_a_2539_);
lean_dec(v_a_2535_);
v_a_2542_ = lean_ctor_get(v___x_2541_, 0);
lean_inc(v_a_2542_);
lean_dec_ref_known(v___x_2541_, 1);
v_a_2508_ = v_a_2542_;
goto v___jp_2507_;
}
else
{
lean_object* v_a_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2551_; 
lean_dec(v_d_2476_);
v_a_2543_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2551_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2551_ == 0)
{
v___x_2545_ = v___x_2541_;
v_isShared_2546_ = v_isSharedCheck_2551_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_a_2543_);
lean_dec(v___x_2541_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2551_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2547_; lean_object* v___x_2549_; 
v___x_2547_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2547_, 0, v_a_2535_);
lean_ctor_set(v___x_2547_, 1, v_a_2539_);
lean_ctor_set(v___x_2547_, 2, v_a_2543_);
if (v_isShared_2546_ == 0)
{
lean_ctor_set_tag(v___x_2545_, 0);
lean_ctor_set(v___x_2545_, 0, v___x_2547_);
v___x_2549_ = v___x_2545_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v___x_2547_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
}
}
}
v___jp_2478_:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2481_ = lean_string_append(v___y_2479_, v___y_2480_);
lean_dec_ref(v___y_2480_);
v___x_2482_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2481_);
v___x_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2482_);
return v___x_2483_;
}
v___jp_2484_:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; uint8_t v___x_2498_; 
v___x_2487_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_2488_ = lean_string_append(v___x_2487_, v_context_2475_);
v___x_2489_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_2490_ = lean_string_append(v___x_2488_, v___x_2489_);
v___x_2491_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___closed__2));
v___x_2492_ = lean_string_append(v___x_2490_, v___x_2491_);
v___x_2493_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_2494_ = lean_string_append(v___x_2492_, v___x_2493_);
v___x_2495_ = lean_string_append(v___x_2494_, v_received_2486_);
lean_dec_ref(v_received_2486_);
v___x_2496_ = lean_string_utf8_byte_size(v___y_2485_);
v___x_2497_ = lean_unsigned_to_nat(0u);
v___x_2498_ = lean_nat_dec_eq(v___x_2496_, v___x_2497_);
if (v___x_2498_ == 0)
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2499_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_2500_ = lean_string_append(v___x_2499_, v___y_2485_);
lean_dec_ref(v___y_2485_);
v___x_2501_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_2502_ = lean_string_append(v___x_2500_, v___x_2501_);
v___y_2479_ = v___x_2495_;
v___y_2480_ = v___x_2502_;
goto v___jp_2478_;
}
else
{
lean_object* v___x_2503_; 
lean_dec_ref(v___y_2485_);
v___x_2503_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_2479_ = v___x_2495_;
v___y_2480_ = v___x_2503_;
goto v___jp_2478_;
}
}
v___jp_2504_:
{
lean_object* v___x_2506_; 
v___x_2506_ = l_Lasm_JS_Data_describe(v_d_2476_);
v___y_2485_ = v___y_2505_;
v_received_2486_ = v___x_2506_;
goto v___jp_2484_;
}
v___jp_2507_:
{
if (lean_obj_tag(v_d_2476_) == 9)
{
lean_object* v_value_2509_; lean_object* v_description_2510_; lean_object* v___x_2511_; uint8_t v___x_2512_; 
v_value_2509_ = lean_ctor_get(v_d_2476_, 0);
v_description_2510_ = lean_ctor_get(v_d_2476_, 1);
v___x_2511_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2512_ = lean_string_dec_eq(v_description_2510_, v___x_2511_);
if (v___x_2512_ == 0)
{
v___y_2505_ = v_a_2508_;
goto v___jp_2504_;
}
else
{
lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2529_; 
lean_inc(v_value_2509_);
v_isSharedCheck_2529_ = !lean_is_exclusive(v_d_2476_);
if (v_isSharedCheck_2529_ == 0)
{
lean_object* v_unused_2530_; lean_object* v_unused_2531_; 
v_unused_2530_ = lean_ctor_get(v_d_2476_, 1);
lean_dec(v_unused_2530_);
v_unused_2531_ = lean_ctor_get(v_d_2476_, 0);
lean_dec(v_unused_2531_);
v___x_2514_ = v_d_2476_;
v_isShared_2515_ = v_isSharedCheck_2529_;
goto v_resetjp_2513_;
}
else
{
lean_dec(v_d_2476_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2529_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
uint32_t v___x_2516_; uint64_t v___x_2517_; lean_object* v___x_2519_; 
v___x_2516_ = 206;
v___x_2517_ = 0ULL;
lean_inc(v_value_2509_);
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 1, v___x_2511_);
v___x_2519_ = v___x_2514_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_value_2509_);
lean_ctor_set(v_reuseFailAlloc_2528_, 1, v___x_2511_);
v___x_2519_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
uint32_t v___x_2520_; lean_object* v___x_2521_; 
v___x_2520_ = lasm_js_value_handle(v_value_2509_);
lean_dec(v_value_2509_);
v___x_2521_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2516_, v___x_2517_, v___x_2519_, v___x_2520_);
lean_dec_ref(v___x_2519_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; uint8_t v___x_2523_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc(v_a_2522_);
lean_dec_ref_known(v___x_2521_, 1);
v___x_2523_ = lean_string_validate_utf8(v_a_2522_);
if (v___x_2523_ == 0)
{
lean_object* v___x_2524_; lean_object* v___x_2525_; 
lean_dec(v_a_2522_);
v___x_2524_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_2525_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2524_);
v___y_2485_ = v_a_2508_;
v_received_2486_ = v___x_2525_;
goto v___jp_2484_;
}
else
{
lean_object* v___x_2526_; 
v___x_2526_ = lean_string_from_utf8_unchecked(v_a_2522_);
v___y_2485_ = v_a_2508_;
v_received_2486_ = v___x_2526_;
goto v___jp_2484_;
}
}
else
{
lean_object* v___x_2527_; 
lean_dec_ref_known(v___x_2521_, 1);
v___x_2527_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_2485_ = v_a_2508_;
v_received_2486_ = v___x_2527_;
goto v___jp_2484_;
}
}
}
}
}
else
{
v___y_2505_ = v_a_2508_;
goto v___jp_2504_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2552_, lean_object* v_d_2553_, lean_object* v_a_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(v_context_2552_, v_d_2553_);
lean_dec_ref(v_context_2552_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(lean_object* v_context_2556_, lean_object* v_bytes_2557_){
_start:
{
lean_object* v___x_2559_; 
v___x_2559_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2557_);
if (lean_obj_tag(v___x_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v___x_2561_; 
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
lean_inc(v_a_2560_);
lean_dec_ref_known(v___x_2559_, 1);
v___x_2561_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(v_context_2556_, v_a_2560_);
return v___x_2561_;
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
v_a_2562_ = lean_ctor_get(v___x_2559_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2559_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2559_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_2570_, lean_object* v_bytes_2571_, lean_object* v_a_2572_){
_start:
{
lean_object* v_res_2573_; 
v_res_2573_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(v_context_2570_, v_bytes_2571_);
lean_dec_ref(v_bytes_2571_);
lean_dec_ref(v_context_2570_);
return v_res_2573_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0(void){
_start:
{
uint8_t v___x_2574_; uint64_t v___x_2575_; 
v___x_2574_ = 0;
v___x_2575_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(lean_object* v_o_2576_, lean_object* v_key_2577_){
_start:
{
lean_object* v_k_2579_; lean_object* v___x_2580_; 
v_k_2579_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2579_, 0, v_key_2577_);
v___x_2580_ = l_Lasm_JS_Wire_encodeIO(v_k_2579_);
if (lean_obj_tag(v___x_2580_) == 0)
{
lean_object* v_a_2581_; uint32_t v___x_2582_; uint32_t v___x_2583_; uint64_t v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v_a_2581_ = lean_ctor_get(v___x_2580_, 0);
lean_inc(v_a_2581_);
lean_dec_ref_known(v___x_2580_, 1);
v___x_2582_ = 203;
v___x_2583_ = lasm_js_value_handle(v_o_2576_);
v___x_2584_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
v___x_2585_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2586_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2586_, 0, v_o_2576_);
lean_ctor_set(v___x_2586_, 1, v___x_2585_);
v___x_2587_ = lean_unsigned_to_nat(2u);
v___x_2588_ = lean_mk_empty_array_with_capacity(v___x_2587_);
lean_inc_ref(v_k_2579_);
v___x_2589_ = lean_array_push(v___x_2588_, v_k_2579_);
v___x_2590_ = lean_array_push(v___x_2589_, v___x_2586_);
v___x_2591_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2590_);
v___x_2592_ = lasm_js_call(v___x_2582_, v___x_2583_, v___x_2584_, v_a_2581_, v___x_2591_);
lean_dec_ref_known(v___x_2591_, 1);
lean_dec(v_a_2581_);
if (lean_obj_tag(v___x_2592_) == 0)
{
lean_object* v_a_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v_a_2593_ = lean_ctor_get(v___x_2592_, 0);
lean_inc(v_a_2593_);
lean_dec_ref_known(v___x_2592_, 1);
v___x_2594_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__1));
v___x_2595_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2579_);
v___x_2596_ = lean_string_append(v___x_2594_, v___x_2595_);
lean_dec_ref(v___x_2595_);
v___x_2597_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(v___x_2596_, v_a_2593_);
lean_dec(v_a_2593_);
lean_dec_ref(v___x_2596_);
return v___x_2597_;
}
else
{
lean_object* v_a_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2605_; 
lean_dec_ref_known(v_k_2579_, 1);
v_a_2598_ = lean_ctor_get(v___x_2592_, 0);
v_isSharedCheck_2605_ = !lean_is_exclusive(v___x_2592_);
if (v_isSharedCheck_2605_ == 0)
{
v___x_2600_ = v___x_2592_;
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_a_2598_);
lean_dec(v___x_2592_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v___x_2603_; 
if (v_isShared_2601_ == 0)
{
v___x_2603_ = v___x_2600_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_a_2598_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
}
}
else
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2613_; 
lean_dec_ref_known(v_k_2579_, 1);
lean_dec(v_o_2576_);
v_a_2606_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2608_ = v___x_2580_;
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v___x_2580_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2611_; 
if (v_isShared_2609_ == 0)
{
v___x_2611_ = v___x_2608_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_a_2606_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___boxed(lean_object* v_o_2614_, lean_object* v_key_2615_, lean_object* v_a_2616_){
_start:
{
lean_object* v_res_2617_; 
v_res_2617_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(v_o_2614_, v_key_2615_);
return v_res_2617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1(lean_object* v___f_2622_, lean_object* v_a_2623_, lean_object* v_x_2624_){
_start:
{
if (lean_obj_tag(v_x_2624_) == 0)
{
lean_object* v_a_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2634_; 
lean_dec(v_a_2623_);
lean_dec_ref(v___f_2622_);
v_a_2626_ = lean_ctor_get(v_x_2624_, 0);
v_isSharedCheck_2634_ = !lean_is_exclusive(v_x_2624_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2628_ = v_x_2624_;
v_isShared_2629_ = v_isSharedCheck_2634_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_a_2626_);
lean_dec(v_x_2624_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2634_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2631_; 
if (v_isShared_2629_ == 0)
{
v___x_2631_ = v___x_2628_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v_a_2626_);
v___x_2631_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
lean_object* v___x_2632_; 
v___x_2632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2631_);
return v___x_2632_;
}
}
}
else
{
lean_object* v_a_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2657_; 
v_a_2635_ = lean_ctor_get(v_x_2624_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v_x_2624_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2637_ = v_x_2624_;
v_isShared_2638_ = v_isSharedCheck_2657_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_a_2635_);
lean_dec(v_x_2624_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2657_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
uint8_t v___x_2639_; 
v___x_2639_ = lean_unbox(v_a_2635_);
if (v___x_2639_ == 0)
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v_val_2643_; lean_object* v___x_2647_; 
v___x_2640_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_2641_ = lean_unsigned_to_nat(0u);
v___x_2647_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(v_a_2623_, v___x_2640_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v_a_2648_; lean_object* v___x_2650_; 
v_a_2648_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_a_2648_);
lean_dec_ref_known(v___x_2647_, 1);
if (v_isShared_2638_ == 0)
{
lean_ctor_set(v___x_2637_, 0, v_a_2648_);
v___x_2650_ = v___x_2637_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_a_2648_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
v_val_2643_ = v___x_2650_;
goto v___jp_2642_;
}
}
else
{
lean_object* v_a_2652_; lean_object* v___x_2654_; 
v_a_2652_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_a_2652_);
lean_dec_ref_known(v___x_2647_, 1);
if (v_isShared_2638_ == 0)
{
lean_ctor_set_tag(v___x_2637_, 0);
lean_ctor_set(v___x_2637_, 0, v_a_2652_);
v___x_2654_ = v___x_2637_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v_a_2652_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
v_val_2643_ = v___x_2654_;
goto v___jp_2642_;
}
}
v___jp_2642_:
{
lean_object* v___x_2644_; uint8_t v___x_2645_; lean_object* v___x_2646_; 
v___x_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2644_, 0, v_val_2643_);
v___x_2645_ = lean_unbox(v_a_2635_);
lean_dec(v_a_2635_);
v___x_2646_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2641_, v___x_2645_, v___x_2644_, v___f_2622_);
return v___x_2646_;
}
}
else
{
lean_object* v___x_2656_; 
lean_del_object(v___x_2637_);
lean_dec(v_a_2635_);
lean_dec(v_a_2623_);
lean_dec_ref(v___f_2622_);
v___x_2656_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___closed__1));
return v___x_2656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___boxed(lean_object* v___f_2658_, lean_object* v_a_2659_, lean_object* v_x_2660_, lean_object* v___y_2661_){
_start:
{
lean_object* v_res_2662_; 
v_res_2662_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1(v___f_2658_, v_a_2659_, v_x_2660_);
return v_res_2662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2(lean_object* v___f_2664_, lean_object* v_x_2665_){
_start:
{
if (lean_obj_tag(v_x_2665_) == 0)
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2675_; 
lean_dec_ref(v___f_2664_);
v_a_2667_ = lean_ctor_get(v_x_2665_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v_x_2665_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2669_ = v_x_2665_;
v_isShared_2670_ = v_isSharedCheck_2675_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v_x_2665_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2675_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_a_2667_);
v___x_2672_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
lean_object* v___x_2673_; 
v___x_2673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2672_);
return v___x_2673_;
}
}
}
else
{
lean_object* v_a_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2697_; 
v_a_2676_ = lean_ctor_get(v_x_2665_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v_x_2665_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2678_ = v_x_2665_;
v_isShared_2679_ = v_isSharedCheck_2697_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_a_2676_);
lean_dec(v_x_2665_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2697_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
lean_object* v___f_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; uint8_t v___x_2683_; lean_object* v_val_2685_; lean_object* v___x_2688_; 
lean_inc(v_a_2676_);
v___f_2680_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2680_, 0, v___f_2664_);
lean_closure_set(v___f_2680_, 1, v_a_2676_);
v___x_2681_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___closed__0));
v___x_2682_ = lean_unsigned_to_nat(0u);
v___x_2683_ = 0;
v___x_2688_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_2676_, v___x_2681_);
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_object* v_a_2689_; lean_object* v___x_2691_; 
v_a_2689_ = lean_ctor_get(v___x_2688_, 0);
lean_inc(v_a_2689_);
lean_dec_ref_known(v___x_2688_, 1);
if (v_isShared_2679_ == 0)
{
lean_ctor_set(v___x_2678_, 0, v_a_2689_);
v___x_2691_ = v___x_2678_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2689_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
v_val_2685_ = v___x_2691_;
goto v___jp_2684_;
}
}
else
{
lean_object* v_a_2693_; lean_object* v___x_2695_; 
v_a_2693_ = lean_ctor_get(v___x_2688_, 0);
lean_inc(v_a_2693_);
lean_dec_ref_known(v___x_2688_, 1);
if (v_isShared_2679_ == 0)
{
lean_ctor_set_tag(v___x_2678_, 0);
lean_ctor_set(v___x_2678_, 0, v_a_2693_);
v___x_2695_ = v___x_2678_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_a_2693_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
v_val_2685_ = v___x_2695_;
goto v___jp_2684_;
}
}
v___jp_2684_:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; 
v___x_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2686_, 0, v_val_2685_);
v___x_2687_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2682_, v___x_2683_, v___x_2686_, v___f_2680_);
return v___x_2687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___boxed(lean_object* v___f_2698_, lean_object* v_x_2699_, lean_object* v___y_2700_){
_start:
{
lean_object* v_res_2701_; 
v_res_2701_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2(v___f_2698_, v_x_2699_);
return v_res_2701_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8(lean_object* v___f_2702_, lean_object* v_x_2703_){
_start:
{
if (lean_obj_tag(v_x_2703_) == 0)
{
lean_object* v_a_2705_; lean_object* v___x_2707_; uint8_t v_isShared_2708_; uint8_t v_isSharedCheck_2713_; 
lean_dec_ref(v___f_2702_);
v_a_2705_ = lean_ctor_get(v_x_2703_, 0);
v_isSharedCheck_2713_ = !lean_is_exclusive(v_x_2703_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2707_ = v_x_2703_;
v_isShared_2708_ = v_isSharedCheck_2713_;
goto v_resetjp_2706_;
}
else
{
lean_inc(v_a_2705_);
lean_dec(v_x_2703_);
v___x_2707_ = lean_box(0);
v_isShared_2708_ = v_isSharedCheck_2713_;
goto v_resetjp_2706_;
}
v_resetjp_2706_:
{
lean_object* v___x_2710_; 
if (v_isShared_2708_ == 0)
{
v___x_2710_ = v___x_2707_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v_a_2705_);
v___x_2710_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
lean_object* v___x_2711_; 
v___x_2711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2710_);
return v___x_2711_;
}
}
}
else
{
lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2725_; 
v_isSharedCheck_2725_ = !lean_is_exclusive(v_x_2703_);
if (v_isSharedCheck_2725_ == 0)
{
lean_object* v_unused_2726_; 
v_unused_2726_ = lean_ctor_get(v_x_2703_, 0);
lean_dec(v_unused_2726_);
v___x_2715_ = v_x_2703_;
v_isShared_2716_ = v_isSharedCheck_2725_;
goto v_resetjp_2714_;
}
else
{
lean_dec(v_x_2703_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2725_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2717_; uint8_t v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2721_; 
v___x_2717_ = lean_unsigned_to_nat(0u);
v___x_2718_ = 0;
v___x_2719_ = lean_io_promise_new();
if (v_isShared_2716_ == 0)
{
lean_ctor_set(v___x_2715_, 0, v___x_2719_);
v___x_2721_ = v___x_2715_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v___x_2719_);
v___x_2721_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2721_);
v___x_2723_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2717_, v___x_2718_, v___x_2722_, v___f_2702_);
return v___x_2723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8___boxed(lean_object* v___f_2727_, lean_object* v_x_2728_, lean_object* v___y_2729_){
_start:
{
lean_object* v_res_2730_; 
v_res_2730_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8(v___f_2727_, v_x_2728_);
return v_res_2730_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1(lean_object* v___f_2731_, lean_object* v_bytes_2732_){
_start:
{
lean_object* v___x_2734_; uint8_t v___x_2735_; lean_object* v_val_2737_; lean_object* v___x_2740_; 
v___x_2734_ = lean_unsigned_to_nat(0u);
v___x_2735_ = 0;
v___x_2740_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2732_);
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_object* v_a_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2748_; 
v_a_2741_ = lean_ctor_get(v___x_2740_, 0);
v_isSharedCheck_2748_ = !lean_is_exclusive(v___x_2740_);
if (v_isSharedCheck_2748_ == 0)
{
v___x_2743_ = v___x_2740_;
v_isShared_2744_ = v_isSharedCheck_2748_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_a_2741_);
lean_dec(v___x_2740_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2748_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v___x_2746_; 
if (v_isShared_2744_ == 0)
{
lean_ctor_set_tag(v___x_2743_, 1);
v___x_2746_ = v___x_2743_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v_a_2741_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
v_val_2737_ = v___x_2746_;
goto v___jp_2736_;
}
}
}
else
{
lean_object* v_a_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2756_; 
v_a_2749_ = lean_ctor_get(v___x_2740_, 0);
v_isSharedCheck_2756_ = !lean_is_exclusive(v___x_2740_);
if (v_isSharedCheck_2756_ == 0)
{
v___x_2751_ = v___x_2740_;
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_a_2749_);
lean_dec(v___x_2740_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v___x_2754_; 
if (v_isShared_2752_ == 0)
{
lean_ctor_set_tag(v___x_2751_, 0);
v___x_2754_ = v___x_2751_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v_a_2749_);
v___x_2754_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
v_val_2737_ = v___x_2754_;
goto v___jp_2736_;
}
}
}
v___jp_2736_:
{
lean_object* v___x_2738_; lean_object* v___x_2739_; 
v___x_2738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2738_, 0, v_val_2737_);
v___x_2739_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2734_, v___x_2735_, v___x_2738_, v___f_2731_);
return v___x_2739_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1___boxed(lean_object* v___f_2757_, lean_object* v_bytes_2758_, lean_object* v___y_2759_){
_start:
{
lean_object* v_res_2760_; 
v_res_2760_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1(v___f_2757_, v_bytes_2758_);
lean_dec_ref(v_bytes_2758_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7(lean_object* v___f_2761_, lean_object* v_a_2762_, uint32_t v_op_2763_, uint64_t v_flags_2764_, lean_object* v_payload_2765_, lean_object* v_x_2766_){
_start:
{
if (lean_obj_tag(v_x_2766_) == 0)
{
lean_object* v___x_2768_; 
lean_dec_ref(v___f_2761_);
v___x_2768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2768_, 0, v_x_2766_);
return v___x_2768_;
}
else
{
lean_object* v_a_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2789_; 
v_a_2769_ = lean_ctor_get(v_x_2766_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v_x_2766_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2771_ = v_x_2766_;
v_isShared_2772_ = v_isSharedCheck_2789_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_a_2769_);
lean_dec(v_x_2766_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2789_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
uint32_t v___x_2773_; lean_object* v___x_2774_; uint8_t v___x_2775_; lean_object* v_val_2777_; lean_object* v___x_2780_; 
v___x_2773_ = 0;
v___x_2774_ = lean_unsigned_to_nat(0u);
v___x_2775_ = 0;
v___x_2780_ = lasm_js_call_into(v_a_2762_, v_op_2763_, v___x_2773_, v_flags_2764_, v_a_2769_, v_payload_2765_);
lean_dec(v_a_2769_);
if (lean_obj_tag(v___x_2780_) == 0)
{
lean_object* v_a_2781_; lean_object* v___x_2783_; 
v_a_2781_ = lean_ctor_get(v___x_2780_, 0);
lean_inc(v_a_2781_);
lean_dec_ref_known(v___x_2780_, 1);
if (v_isShared_2772_ == 0)
{
lean_ctor_set(v___x_2771_, 0, v_a_2781_);
v___x_2783_ = v___x_2771_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v_a_2781_);
v___x_2783_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
v_val_2777_ = v___x_2783_;
goto v___jp_2776_;
}
}
else
{
lean_object* v_a_2785_; lean_object* v___x_2787_; 
v_a_2785_ = lean_ctor_get(v___x_2780_, 0);
lean_inc(v_a_2785_);
lean_dec_ref_known(v___x_2780_, 1);
if (v_isShared_2772_ == 0)
{
lean_ctor_set_tag(v___x_2771_, 0);
lean_ctor_set(v___x_2771_, 0, v_a_2785_);
v___x_2787_ = v___x_2771_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2785_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
v_val_2777_ = v___x_2787_;
goto v___jp_2776_;
}
}
v___jp_2776_:
{
lean_object* v___x_2778_; lean_object* v___x_2779_; 
v___x_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2778_, 0, v_val_2777_);
v___x_2779_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2774_, v___x_2775_, v___x_2778_, v___f_2761_);
return v___x_2779_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed(lean_object* v___f_2790_, lean_object* v_a_2791_, lean_object* v_op_2792_, lean_object* v_flags_2793_, lean_object* v_payload_2794_, lean_object* v_x_2795_, lean_object* v___y_2796_){
_start:
{
uint32_t v_op_boxed_2797_; uint64_t v_flags_boxed_2798_; lean_object* v_res_2799_; 
v_op_boxed_2797_ = lean_unbox_uint32(v_op_2792_);
lean_dec(v_op_2792_);
v_flags_boxed_2798_ = lean_unbox_uint64(v_flags_2793_);
lean_dec_ref(v_flags_2793_);
v_res_2799_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7(v___f_2790_, v_a_2791_, v_op_boxed_2797_, v_flags_boxed_2798_, v_payload_2794_, v_x_2795_);
lean_dec(v_payload_2794_);
lean_dec(v_a_2791_);
return v_res_2799_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5(lean_object* v___x_2800_, uint8_t v___x_2801_, lean_object* v___f_2802_, lean_object* v_a_2803_, uint32_t v_op_2804_, uint64_t v_flags_2805_, lean_object* v_payload_2806_, lean_object* v_x_2807_){
_start:
{
lean_object* v_val_2810_; 
if (lean_obj_tag(v_x_2807_) == 0)
{
lean_object* v___x_2813_; 
lean_dec_ref(v___f_2802_);
lean_dec(v___x_2800_);
v___x_2813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2813_, 0, v_x_2807_);
return v___x_2813_;
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2828_; 
v_a_2814_ = lean_ctor_get(v_x_2807_, 0);
v_isSharedCheck_2828_ = !lean_is_exclusive(v_x_2807_);
if (v_isSharedCheck_2828_ == 0)
{
v___x_2816_ = v_x_2807_;
v_isShared_2817_ = v_isSharedCheck_2828_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_a_2814_);
lean_dec(v_x_2807_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2828_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
uint32_t v___x_2818_; lean_object* v___x_2819_; 
v___x_2818_ = 0;
v___x_2819_ = lasm_js_call_into(v_a_2803_, v_op_2804_, v___x_2818_, v_flags_2805_, v_a_2814_, v_payload_2806_);
lean_dec(v_a_2814_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_object* v_a_2820_; lean_object* v___x_2822_; 
v_a_2820_ = lean_ctor_get(v___x_2819_, 0);
lean_inc(v_a_2820_);
lean_dec_ref_known(v___x_2819_, 1);
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 0, v_a_2820_);
v___x_2822_ = v___x_2816_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_a_2820_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
v_val_2810_ = v___x_2822_;
goto v___jp_2809_;
}
}
else
{
lean_object* v_a_2824_; lean_object* v___x_2826_; 
v_a_2824_ = lean_ctor_get(v___x_2819_, 0);
lean_inc(v_a_2824_);
lean_dec_ref_known(v___x_2819_, 1);
if (v_isShared_2817_ == 0)
{
lean_ctor_set_tag(v___x_2816_, 0);
lean_ctor_set(v___x_2816_, 0, v_a_2824_);
v___x_2826_ = v___x_2816_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v_a_2824_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
v_val_2810_ = v___x_2826_;
goto v___jp_2809_;
}
}
}
}
v___jp_2809_:
{
lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2811_, 0, v_val_2810_);
v___x_2812_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2800_, v___x_2801_, v___x_2811_, v___f_2802_);
return v___x_2812_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed(lean_object* v___x_2829_, lean_object* v___x_2830_, lean_object* v___f_2831_, lean_object* v_a_2832_, lean_object* v_op_2833_, lean_object* v_flags_2834_, lean_object* v_payload_2835_, lean_object* v_x_2836_, lean_object* v___y_2837_){
_start:
{
uint8_t v___x_3461__boxed_2838_; uint32_t v_op_boxed_2839_; uint64_t v_flags_boxed_2840_; lean_object* v_res_2841_; 
v___x_3461__boxed_2838_ = lean_unbox(v___x_2830_);
v_op_boxed_2839_ = lean_unbox_uint32(v_op_2833_);
lean_dec(v_op_2833_);
v_flags_boxed_2840_ = lean_unbox_uint64(v_flags_2834_);
lean_dec_ref(v_flags_2834_);
v_res_2841_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5(v___x_2829_, v___x_3461__boxed_2838_, v___f_2831_, v_a_2832_, v_op_boxed_2839_, v_flags_boxed_2840_, v_payload_2835_, v_x_2836_);
lean_dec(v_payload_2835_);
lean_dec(v_a_2832_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3(lean_object* v_a_2842_, lean_object* v_x_2843_){
_start:
{
if (lean_obj_tag(v_x_2843_) == 0)
{
lean_object* v_a_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2853_; 
v_a_2845_ = lean_ctor_get(v_x_2843_, 0);
v_isSharedCheck_2853_ = !lean_is_exclusive(v_x_2843_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2847_ = v_x_2843_;
v_isShared_2848_ = v_isSharedCheck_2853_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_a_2845_);
lean_dec(v_x_2843_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2853_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v_a_2845_);
v___x_2850_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
lean_object* v___x_2851_; 
v___x_2851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2850_);
return v___x_2851_;
}
}
}
else
{
lean_object* v___x_2854_; 
lean_dec_ref_known(v_x_2843_, 1);
v___x_2854_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2842_);
return v___x_2854_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed(lean_object* v_a_2855_, lean_object* v_x_2856_, lean_object* v___y_2857_){
_start:
{
lean_object* v_res_2858_; 
v_res_2858_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3(v_a_2855_, v_x_2856_);
lean_dec(v_a_2855_);
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6(lean_object* v_failurePrefix_2859_, uint32_t v_op_2860_, uint64_t v_flags_2861_, lean_object* v_payload_2862_, lean_object* v___f_2863_, lean_object* v___f_2864_, lean_object* v___f_2865_, lean_object* v_x_2866_){
_start:
{
if (lean_obj_tag(v_x_2866_) == 0)
{
lean_object* v_a_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2876_; 
lean_dec_ref(v___f_2865_);
lean_dec_ref(v___f_2864_);
lean_dec_ref(v___f_2863_);
lean_dec(v_payload_2862_);
v_a_2868_ = lean_ctor_get(v_x_2866_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v_x_2866_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2870_ = v_x_2866_;
v_isShared_2871_ = v_isSharedCheck_2876_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_a_2868_);
lean_dec(v_x_2866_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2876_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v___x_2873_; 
if (v_isShared_2871_ == 0)
{
v___x_2873_ = v___x_2870_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2868_);
v___x_2873_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
lean_object* v___x_2874_; 
v___x_2874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2873_);
return v___x_2874_;
}
}
}
else
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2923_; 
v_a_2877_ = lean_ctor_get(v_x_2866_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v_x_2866_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2879_ = v_x_2866_;
v_isShared_2880_ = v_isSharedCheck_2923_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v_x_2866_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2923_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; uint8_t v___x_2883_; 
v___x_2881_ = lean_string_utf8_byte_size(v_failurePrefix_2859_);
v___x_2882_ = lean_unsigned_to_nat(0u);
v___x_2883_ = lean_nat_dec_eq(v___x_2881_, v___x_2882_);
if (v___x_2883_ == 0)
{
lean_object* v___f_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___f_2888_; lean_object* v_val_2890_; lean_object* v___x_2895_; 
lean_dec_ref(v___f_2865_);
lean_inc(v_a_2877_);
v___f_2884_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2884_, 0, v_a_2877_);
v___x_2885_ = lean_box(v___x_2883_);
v___x_2886_ = lean_box_uint32(v_op_2860_);
v___x_2887_ = lean_box_uint64(v_flags_2861_);
lean_inc(v_payload_2862_);
v___f_2888_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2888_, 0, v___x_2882_);
lean_closure_set(v___f_2888_, 1, v___x_2885_);
lean_closure_set(v___f_2888_, 2, v___f_2884_);
lean_closure_set(v___f_2888_, 3, v_a_2877_);
lean_closure_set(v___f_2888_, 4, v___x_2886_);
lean_closure_set(v___f_2888_, 5, v___x_2887_);
lean_closure_set(v___f_2888_, 6, v_payload_2862_);
v___x_2895_ = l_Lasm_JS_Wire_encodeIO(v_payload_2862_);
lean_dec(v_payload_2862_);
if (lean_obj_tag(v___x_2895_) == 0)
{
lean_object* v_a_2896_; lean_object* v___x_2898_; 
v_a_2896_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_a_2896_);
lean_dec_ref_known(v___x_2895_, 1);
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 0, v_a_2896_);
v___x_2898_ = v___x_2879_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_a_2896_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
v_val_2890_ = v___x_2898_;
goto v___jp_2889_;
}
}
else
{
lean_object* v_a_2900_; lean_object* v___x_2902_; 
v_a_2900_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_a_2900_);
lean_dec_ref_known(v___x_2895_, 1);
if (v_isShared_2880_ == 0)
{
lean_ctor_set_tag(v___x_2879_, 0);
lean_ctor_set(v___x_2879_, 0, v_a_2900_);
v___x_2902_ = v___x_2879_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2900_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
v_val_2890_ = v___x_2902_;
goto v___jp_2889_;
}
}
v___jp_2889_:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2891_, 0, v_val_2890_);
v___x_2892_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2882_, v___x_2883_, v___x_2891_, v___f_2888_);
v___x_2893_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2882_, v___x_2883_, v___x_2892_, v___f_2863_);
v___x_2894_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2882_, v___x_2883_, v___x_2893_, v___f_2864_);
return v___x_2894_;
}
}
else
{
lean_object* v___f_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___f_2907_; uint8_t v___x_2908_; lean_object* v_val_2910_; lean_object* v___x_2914_; 
lean_dec_ref(v___f_2864_);
lean_dec_ref(v___f_2863_);
lean_inc(v_a_2877_);
v___f_2904_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2904_, 0, v_a_2877_);
v___x_2905_ = lean_box_uint32(v_op_2860_);
v___x_2906_ = lean_box_uint64(v_flags_2861_);
lean_inc(v_payload_2862_);
v___f_2907_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2907_, 0, v___f_2904_);
lean_closure_set(v___f_2907_, 1, v_a_2877_);
lean_closure_set(v___f_2907_, 2, v___x_2905_);
lean_closure_set(v___f_2907_, 3, v___x_2906_);
lean_closure_set(v___f_2907_, 4, v_payload_2862_);
v___x_2908_ = 0;
v___x_2914_ = l_Lasm_JS_Wire_encodeIO(v_payload_2862_);
lean_dec(v_payload_2862_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_object* v_a_2915_; lean_object* v___x_2917_; 
v_a_2915_ = lean_ctor_get(v___x_2914_, 0);
lean_inc(v_a_2915_);
lean_dec_ref_known(v___x_2914_, 1);
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 0, v_a_2915_);
v___x_2917_ = v___x_2879_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2915_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
v_val_2910_ = v___x_2917_;
goto v___jp_2909_;
}
}
else
{
lean_object* v_a_2919_; lean_object* v___x_2921_; 
v_a_2919_ = lean_ctor_get(v___x_2914_, 0);
lean_inc(v_a_2919_);
lean_dec_ref_known(v___x_2914_, 1);
if (v_isShared_2880_ == 0)
{
lean_ctor_set_tag(v___x_2879_, 0);
lean_ctor_set(v___x_2879_, 0, v_a_2919_);
v___x_2921_ = v___x_2879_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_a_2919_);
v___x_2921_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
v_val_2910_ = v___x_2921_;
goto v___jp_2909_;
}
}
v___jp_2909_:
{
lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2911_, 0, v_val_2910_);
v___x_2912_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2882_, v___x_2908_, v___x_2911_, v___f_2907_);
v___x_2913_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2882_, v___x_2908_, v___x_2912_, v___f_2865_);
return v___x_2913_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6___boxed(lean_object* v_failurePrefix_2924_, lean_object* v_op_2925_, lean_object* v_flags_2926_, lean_object* v_payload_2927_, lean_object* v___f_2928_, lean_object* v___f_2929_, lean_object* v___f_2930_, lean_object* v_x_2931_, lean_object* v___y_2932_){
_start:
{
uint32_t v_op_boxed_2933_; uint64_t v_flags_boxed_2934_; lean_object* v_res_2935_; 
v_op_boxed_2933_ = lean_unbox_uint32(v_op_2925_);
lean_dec(v_op_2925_);
v_flags_boxed_2934_ = lean_unbox_uint64(v_flags_2926_);
lean_dec_ref(v_flags_2926_);
v_res_2935_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6(v_failurePrefix_2924_, v_op_boxed_2933_, v_flags_boxed_2934_, v_payload_2927_, v___f_2928_, v___f_2929_, v___f_2930_, v_x_2931_);
lean_dec_ref(v_failurePrefix_2924_);
return v_res_2935_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4(lean_object* v_failurePrefix_2936_, lean_object* v_x_2937_){
_start:
{
if (lean_obj_tag(v_x_2937_) == 0)
{
lean_object* v_a_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2950_; 
v_a_2939_ = lean_ctor_get(v_x_2937_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v_x_2937_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2941_ = v_x_2937_;
v_isShared_2942_ = v_isSharedCheck_2950_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_a_2939_);
lean_dec(v_x_2937_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2950_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2947_; 
v___x_2943_ = lean_io_error_to_string(v_a_2939_);
v___x_2944_ = lean_string_append(v_failurePrefix_2936_, v___x_2943_);
lean_dec_ref(v___x_2943_);
v___x_2945_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2944_);
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 0, v___x_2945_);
v___x_2947_ = v___x_2941_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v___x_2945_);
v___x_2947_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
lean_object* v___x_2948_; 
v___x_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2947_);
return v___x_2948_;
}
}
}
else
{
lean_object* v___x_2951_; 
lean_dec_ref(v_failurePrefix_2936_);
v___x_2951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2951_, 0, v_x_2937_);
return v___x_2951_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed(lean_object* v_failurePrefix_2952_, lean_object* v_x_2953_, lean_object* v___y_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4(v_failurePrefix_2952_, v_x_2953_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2(lean_object* v___f_2956_, lean_object* v_x_2957_){
_start:
{
if (lean_obj_tag(v_x_2957_) == 0)
{
lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2967_; 
lean_dec_ref(v___f_2956_);
v_a_2959_ = lean_ctor_get(v_x_2957_, 0);
v_isSharedCheck_2967_ = !lean_is_exclusive(v_x_2957_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2961_ = v_x_2957_;
v_isShared_2962_ = v_isSharedCheck_2967_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_dec(v_x_2957_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2967_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2964_; 
if (v_isShared_2962_ == 0)
{
v___x_2964_ = v___x_2961_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_a_2959_);
v___x_2964_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
lean_object* v___x_2965_; 
v___x_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
return v___x_2965_;
}
}
}
else
{
lean_object* v_a_2968_; lean_object* v___x_2969_; 
v_a_2968_ = lean_ctor_get(v_x_2957_, 0);
lean_inc(v_a_2968_);
lean_dec_ref_known(v_x_2957_, 1);
v___x_2969_ = lean_apply_2(v___f_2956_, v_a_2968_, lean_box(0));
return v___x_2969_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2___boxed(lean_object* v___f_2970_, lean_object* v_x_2971_, lean_object* v___y_2972_){
_start:
{
lean_object* v_res_2973_; 
v_res_2973_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2(v___f_2970_, v_x_2971_);
return v_res_2973_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0(lean_object* v_context_2974_, lean_object* v_x_2975_){
_start:
{
lean_object* v_val_2978_; 
if (lean_obj_tag(v_x_2975_) == 0)
{
lean_object* v_a_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_2988_; 
v_a_2980_ = lean_ctor_get(v_x_2975_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v_x_2975_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2982_ = v_x_2975_;
v_isShared_2983_ = v_isSharedCheck_2988_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_a_2980_);
lean_dec(v_x_2975_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_2988_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
lean_object* v___x_2985_; 
if (v_isShared_2983_ == 0)
{
v___x_2985_ = v___x_2982_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2980_);
v___x_2985_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
lean_object* v___x_2986_; 
v___x_2986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2985_);
return v___x_2986_;
}
}
}
else
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_3002_; 
v_a_2989_ = lean_ctor_get(v_x_2975_, 0);
v_isSharedCheck_3002_ = !lean_is_exclusive(v_x_2975_);
if (v_isSharedCheck_3002_ == 0)
{
v___x_2991_ = v_x_2975_;
v_isShared_2992_ = v_isSharedCheck_3002_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v_x_2975_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_3002_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2993_; 
v___x_2993_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_2974_, v_a_2989_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v_a_2994_; lean_object* v___x_2996_; 
v_a_2994_ = lean_ctor_get(v___x_2993_, 0);
lean_inc(v_a_2994_);
lean_dec_ref_known(v___x_2993_, 1);
if (v_isShared_2992_ == 0)
{
lean_ctor_set(v___x_2991_, 0, v_a_2994_);
v___x_2996_ = v___x_2991_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v_a_2994_);
v___x_2996_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
v_val_2978_ = v___x_2996_;
goto v___jp_2977_;
}
}
else
{
lean_object* v_a_2998_; lean_object* v___x_3000_; 
v_a_2998_ = lean_ctor_get(v___x_2993_, 0);
lean_inc(v_a_2998_);
lean_dec_ref_known(v___x_2993_, 1);
if (v_isShared_2992_ == 0)
{
lean_ctor_set_tag(v___x_2991_, 0);
lean_ctor_set(v___x_2991_, 0, v_a_2998_);
v___x_3000_ = v___x_2991_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v_a_2998_);
v___x_3000_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
v_val_2978_ = v___x_3000_;
goto v___jp_2977_;
}
}
}
}
v___jp_2977_:
{
lean_object* v___x_2979_; 
v___x_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2979_, 0, v_val_2978_);
return v___x_2979_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0___boxed(lean_object* v_context_3003_, lean_object* v_x_3004_, lean_object* v___y_3005_){
_start:
{
lean_object* v_res_3006_; 
v_res_3006_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0(v_context_3003_, v_x_3004_);
lean_dec_ref(v_context_3003_);
return v_res_3006_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(lean_object* v_context_3007_, uint32_t v_op_3008_, uint64_t v_flags_3009_, lean_object* v_payload_3010_, lean_object* v_failurePrefix_3011_){
_start:
{
lean_object* v___f_3013_; lean_object* v___f_3014_; lean_object* v___f_3015_; lean_object* v___f_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___f_3019_; lean_object* v___f_3020_; lean_object* v___x_3021_; uint8_t v___x_3022_; lean_object* v_val_3024_; lean_object* v___x_3027_; 
v___f_3013_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3013_, 0, v_context_3007_);
v___f_3014_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3014_, 0, v___f_3013_);
v___f_3015_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3015_, 0, v___f_3014_);
lean_inc_ref(v_failurePrefix_3011_);
v___f_3016_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3016_, 0, v_failurePrefix_3011_);
v___x_3017_ = lean_box_uint32(v_op_3008_);
v___x_3018_ = lean_box_uint64(v_flags_3009_);
lean_inc_ref(v___f_3015_);
v___f_3019_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3019_, 0, v_failurePrefix_3011_);
lean_closure_set(v___f_3019_, 1, v___x_3017_);
lean_closure_set(v___f_3019_, 2, v___x_3018_);
lean_closure_set(v___f_3019_, 3, v_payload_3010_);
lean_closure_set(v___f_3019_, 4, v___f_3016_);
lean_closure_set(v___f_3019_, 5, v___f_3015_);
lean_closure_set(v___f_3019_, 6, v___f_3015_);
v___f_3020_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3020_, 0, v___f_3019_);
v___x_3021_ = lean_unsigned_to_nat(0u);
v___x_3022_ = 0;
v___x_3027_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3027_) == 0)
{
lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3035_; 
v_a_3028_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3030_ = v___x_3027_;
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v___x_3027_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3033_; 
if (v_isShared_3031_ == 0)
{
lean_ctor_set_tag(v___x_3030_, 1);
v___x_3033_ = v___x_3030_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_a_3028_);
v___x_3033_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
v_val_3024_ = v___x_3033_;
goto v___jp_3023_;
}
}
}
else
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3043_; 
v_a_3036_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3038_ = v___x_3027_;
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___x_3027_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3041_; 
if (v_isShared_3039_ == 0)
{
lean_ctor_set_tag(v___x_3038_, 0);
v___x_3041_ = v___x_3038_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_a_3036_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
v_val_3024_ = v___x_3041_;
goto v___jp_3023_;
}
}
}
v___jp_3023_:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3025_, 0, v_val_3024_);
v___x_3026_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3021_, v___x_3022_, v___x_3025_, v___f_3020_);
return v___x_3026_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___boxed(lean_object* v_context_3044_, lean_object* v_op_3045_, lean_object* v_flags_3046_, lean_object* v_payload_3047_, lean_object* v_failurePrefix_3048_, lean_object* v_a_3049_){
_start:
{
uint32_t v_op_boxed_3050_; uint64_t v_flags_boxed_3051_; lean_object* v_res_3052_; 
v_op_boxed_3050_ = lean_unbox_uint32(v_op_3045_);
lean_dec(v_op_3045_);
v_flags_boxed_3051_ = lean_unbox_uint64(v_flags_3046_);
lean_dec_ref(v_flags_3046_);
v_res_3052_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(v_context_3044_, v_op_boxed_3050_, v_flags_boxed_3051_, v_payload_3047_, v_failurePrefix_3048_);
return v_res_3052_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1(void){
_start:
{
uint64_t v___x_3054_; uint8_t v___x_3055_; uint64_t v___x_3056_; 
v___x_3054_ = 8ULL;
v___x_3055_ = 0;
v___x_3056_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_3055_, v___x_3054_);
return v___x_3056_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(lean_object* v_o_3057_, lean_object* v_name_3058_, lean_object* v_args_3059_){
_start:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; uint32_t v___x_3066_; uint64_t v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3061_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_3062_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3062_, 0, v_o_3057_);
lean_ctor_set(v___x_3062_, 1, v___x_3061_);
lean_inc_ref(v_name_3058_);
v___x_3063_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3063_, 0, v_name_3058_);
v___x_3064_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_3065_ = lean_string_append(v___x_3064_, v_name_3058_);
lean_dec_ref(v_name_3058_);
v___x_3066_ = 205;
v___x_3067_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1);
v___x_3068_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3068_, 0, v_args_3059_);
v___x_3069_ = lean_unsigned_to_nat(3u);
v___x_3070_ = lean_mk_empty_array_with_capacity(v___x_3069_);
v___x_3071_ = lean_array_push(v___x_3070_, v___x_3062_);
v___x_3072_ = lean_array_push(v___x_3071_, v___x_3063_);
v___x_3073_ = lean_array_push(v___x_3072_, v___x_3068_);
v___x_3074_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3073_);
v___x_3075_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(v___x_3065_, v___x_3066_, v___x_3067_, v___x_3074_, v___x_3061_);
return v___x_3075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___boxed(lean_object* v_o_3076_, lean_object* v_name_3077_, lean_object* v_args_3078_, lean_object* v___y_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(v_o_3076_, v_name_3077_, v_args_3078_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next(lean_object* v_it_3085_){
_start:
{
lean_object* v___f_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; uint8_t v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___f_3087_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__1));
v___x_3088_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__2));
v___x_3089_ = lean_unsigned_to_nat(0u);
v___x_3090_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v___x_3091_ = 0;
v___x_3092_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(v_it_3085_, v___x_3088_, v___x_3090_);
v___x_3093_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3089_, v___x_3091_, v___x_3092_, v___f_3087_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___boxed(lean_object* v_it_3094_, lean_object* v_a_3095_){
_start:
{
lean_object* v_res_3096_; 
v_res_3096_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next(v_it_3094_);
return v_res_3096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0(lean_object* v_acc_3097_, lean_object* v_it_3098_, lean_object* v_x_3099_){
_start:
{
if (lean_obj_tag(v_x_3099_) == 0)
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3109_; 
lean_dec(v_it_3098_);
lean_dec_ref(v_acc_3097_);
v_a_3101_ = lean_ctor_get(v_x_3099_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v_x_3099_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3103_ = v_x_3099_;
v_isShared_3104_ = v_isSharedCheck_3109_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v_x_3099_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3109_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3106_; 
if (v_isShared_3104_ == 0)
{
v___x_3106_ = v___x_3103_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_a_3101_);
v___x_3106_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
lean_object* v___x_3107_; 
v___x_3107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3106_);
return v___x_3107_;
}
}
}
else
{
lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3121_; 
v_a_3110_ = lean_ctor_get(v_x_3099_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v_x_3099_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3112_ = v_x_3099_;
v_isShared_3113_ = v_isSharedCheck_3121_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_dec(v_x_3099_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3121_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
if (lean_obj_tag(v_a_3110_) == 0)
{
lean_object* v___x_3115_; 
lean_dec(v_it_3098_);
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 0, v_acc_3097_);
v___x_3115_ = v___x_3112_;
goto v_reusejp_3114_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v_acc_3097_);
v___x_3115_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3114_;
}
v_reusejp_3114_:
{
lean_object* v___x_3116_; 
v___x_3116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3115_);
return v___x_3116_;
}
}
else
{
lean_object* v_val_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
lean_del_object(v___x_3112_);
v_val_3118_ = lean_ctor_get(v_a_3110_, 0);
lean_inc(v_val_3118_);
lean_dec_ref_known(v_a_3110_, 1);
v___x_3119_ = lean_array_push(v_acc_3097_, v_val_3118_);
v___x_3120_ = l_Lasm_JS_Deno_KvListIterator_values_loop(v_it_3098_, v___x_3119_);
return v___x_3120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0___boxed(lean_object* v_acc_3122_, lean_object* v_it_3123_, lean_object* v_x_3124_, lean_object* v___y_3125_){
_start:
{
lean_object* v_res_3126_; 
v_res_3126_ = l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0(v_acc_3122_, v_it_3123_, v_x_3124_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop(lean_object* v_it_3127_, lean_object* v_acc_3128_){
_start:
{
lean_object* v___f_3130_; lean_object* v___x_3131_; uint8_t v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; 
lean_inc(v_it_3127_);
v___f_3130_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3130_, 0, v_acc_3128_);
lean_closure_set(v___f_3130_, 1, v_it_3127_);
v___x_3131_ = lean_unsigned_to_nat(0u);
v___x_3132_ = 0;
v___x_3133_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next(v_it_3127_);
v___x_3134_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3131_, v___x_3132_, v___x_3133_, v___f_3130_);
return v___x_3134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___boxed(lean_object* v_it_3135_, lean_object* v_acc_3136_, lean_object* v_a_3137_){
_start:
{
lean_object* v_res_3138_; 
v_res_3138_ = l_Lasm_JS_Deno_KvListIterator_values_loop(v_it_3135_, v_acc_3136_);
return v_res_3138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0(lean_object* v_x_3141_){
_start:
{
if (lean_obj_tag(v_x_3141_) == 0)
{
lean_object* v_a_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3151_; 
v_a_3143_ = lean_ctor_get(v_x_3141_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v_x_3141_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3145_ = v_x_3141_;
v_isShared_3146_ = v_isSharedCheck_3151_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_a_3143_);
lean_dec(v_x_3141_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3151_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3148_; 
if (v_isShared_3146_ == 0)
{
v___x_3148_ = v___x_3145_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3143_);
v___x_3148_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
lean_object* v___x_3149_; 
v___x_3149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3148_);
return v___x_3149_;
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
v_a_3152_ = lean_ctor_get(v_x_3141_, 0);
lean_inc(v_a_3152_);
lean_dec_ref_known(v_x_3141_, 1);
v___x_3153_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_values___lam__0___closed__0));
v___x_3154_ = l_Lasm_JS_Deno_KvListIterator_values_loop(v_a_3152_, v___x_3153_);
return v___x_3154_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0___boxed(lean_object* v_x_3155_, lean_object* v___y_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = l_Lasm_JS_Deno_KvListIterator_values___lam__0(v_x_3155_);
return v_res_3157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values(lean_object* v_self_3159_){
_start:
{
lean_object* v___f_3161_; lean_object* v___x_3162_; uint8_t v___x_3163_; lean_object* v_val_3165_; lean_object* v___x_3168_; 
v___f_3161_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_values___closed__0));
v___x_3162_ = lean_unsigned_to_nat(0u);
v___x_3163_ = 0;
v___x_3168_ = l_Lasm_JS_Deno_KvListIterator_iterator(v_self_3159_);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3176_; 
v_a_3169_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3171_ = v___x_3168_;
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3168_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3174_; 
if (v_isShared_3172_ == 0)
{
lean_ctor_set_tag(v___x_3171_, 1);
v___x_3174_ = v___x_3171_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v_a_3169_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
v_val_3165_ = v___x_3174_;
goto v___jp_3164_;
}
}
}
else
{
lean_object* v_a_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3184_; 
v_a_3177_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3179_ = v___x_3168_;
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_a_3177_);
lean_dec(v___x_3168_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v___x_3182_; 
if (v_isShared_3180_ == 0)
{
lean_ctor_set_tag(v___x_3179_, 0);
v___x_3182_ = v___x_3179_;
goto v_reusejp_3181_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_a_3177_);
v___x_3182_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3181_;
}
v_reusejp_3181_:
{
v_val_3165_ = v___x_3182_;
goto v___jp_3164_;
}
}
}
v___jp_3164_:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3166_, 0, v_val_3165_);
v___x_3167_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3162_, v___x_3163_, v___x_3166_, v___f_3161_);
return v___x_3167_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___boxed(lean_object* v_self_3185_, lean_object* v_a_3186_){
_start:
{
lean_object* v_res_3187_; 
v_res_3187_ = l_Lasm_JS_Deno_KvListIterator_values(v_self_3185_);
return v_res_3187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0(lean_object* v_context_3188_, lean_object* v_d_3189_){
_start:
{
lean_object* v___y_3192_; lean_object* v___y_3193_; 
if (lean_obj_tag(v_d_3189_) == 9)
{
lean_object* v_value_3197_; lean_object* v___x_3198_; 
v_value_3197_ = lean_ctor_get(v_d_3189_, 0);
lean_inc(v_value_3197_);
lean_dec_ref_known(v_d_3189_, 2);
v___x_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3198_, 0, v_value_3197_);
return v___x_3198_;
}
else
{
lean_object* v___x_3199_; lean_object* v_received_3201_; 
v___x_3199_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
if (lean_obj_tag(v_d_3189_) == 9)
{
lean_object* v_value_3215_; lean_object* v_description_3216_; uint8_t v___x_3217_; 
v_value_3215_ = lean_ctor_get(v_d_3189_, 0);
v_description_3216_ = lean_ctor_get(v_d_3189_, 1);
v___x_3217_ = lean_string_dec_eq(v_description_3216_, v___x_3199_);
if (v___x_3217_ == 0)
{
goto v___jp_3213_;
}
else
{
uint32_t v___x_3218_; uint64_t v___x_3219_; lean_object* v___x_3220_; uint32_t v___x_3221_; lean_object* v___x_3222_; 
lean_inc_n(v_value_3215_, 2);
lean_dec_ref_known(v_d_3189_, 2);
v___x_3218_ = 206;
v___x_3219_ = 0ULL;
v___x_3220_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3220_, 0, v_value_3215_);
lean_ctor_set(v___x_3220_, 1, v___x_3199_);
v___x_3221_ = lasm_js_value_handle(v_value_3215_);
lean_dec(v_value_3215_);
v___x_3222_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3218_, v___x_3219_, v___x_3220_, v___x_3221_);
lean_dec_ref_known(v___x_3220_, 2);
if (lean_obj_tag(v___x_3222_) == 0)
{
lean_object* v_a_3223_; uint8_t v___x_3224_; 
v_a_3223_ = lean_ctor_get(v___x_3222_, 0);
lean_inc(v_a_3223_);
lean_dec_ref_known(v___x_3222_, 1);
v___x_3224_ = lean_string_validate_utf8(v_a_3223_);
if (v___x_3224_ == 0)
{
lean_object* v___x_3225_; lean_object* v___x_3226_; 
lean_dec(v_a_3223_);
v___x_3225_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_3226_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3225_);
v_received_3201_ = v___x_3226_;
goto v___jp_3200_;
}
else
{
lean_object* v___x_3227_; 
v___x_3227_ = lean_string_from_utf8_unchecked(v_a_3223_);
v_received_3201_ = v___x_3227_;
goto v___jp_3200_;
}
}
else
{
lean_object* v___x_3228_; 
lean_dec_ref_known(v___x_3222_, 1);
v___x_3228_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v_received_3201_ = v___x_3228_;
goto v___jp_3200_;
}
}
}
else
{
goto v___jp_3213_;
}
v___jp_3200_:
{
lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; uint8_t v___x_3211_; 
v___x_3202_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_3203_ = lean_string_append(v___x_3202_, v_context_3188_);
v___x_3204_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_3205_ = lean_string_append(v___x_3203_, v___x_3204_);
v___x_3206_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvU64___closed__0));
v___x_3207_ = lean_string_append(v___x_3205_, v___x_3206_);
v___x_3208_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_3209_ = lean_string_append(v___x_3207_, v___x_3208_);
v___x_3210_ = lean_string_append(v___x_3209_, v_received_3201_);
lean_dec_ref(v_received_3201_);
v___x_3211_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5);
if (v___x_3211_ == 0)
{
lean_object* v___x_3212_; 
v___x_3212_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6));
v___y_3192_ = v___x_3210_;
v___y_3193_ = v___x_3212_;
goto v___jp_3191_;
}
else
{
v___y_3192_ = v___x_3210_;
v___y_3193_ = v___x_3199_;
goto v___jp_3191_;
}
}
v___jp_3213_:
{
lean_object* v___x_3214_; 
v___x_3214_ = l_Lasm_JS_Data_describe(v_d_3189_);
v_received_3201_ = v___x_3214_;
goto v___jp_3200_;
}
}
v___jp_3191_:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3194_ = lean_string_append(v___y_3192_, v___y_3193_);
v___x_3195_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3195_, 0, v___x_3194_);
v___x_3196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3195_);
return v___x_3196_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0___boxed(lean_object* v_context_3229_, lean_object* v_d_3230_, lean_object* v_a_3231_){
_start:
{
lean_object* v_res_3232_; 
v_res_3232_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0(v_context_3229_, v_d_3230_);
lean_dec_ref(v_context_3229_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0(lean_object* v_b_3233_, lean_object* v_args_3234_, uint8_t v_await_3235_){
_start:
{
uint64_t v___y_3238_; uint64_t v___y_3239_; uint64_t v___x_3282_; uint64_t v___y_3284_; 
v___x_3282_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_3235_ == 0)
{
uint64_t v___x_3289_; 
v___x_3289_ = 0ULL;
v___y_3284_ = v___x_3289_;
goto v___jp_3283_;
}
else
{
uint64_t v___x_3290_; 
v___x_3290_ = 2ULL;
v___y_3284_ = v___x_3290_;
goto v___jp_3283_;
}
v___jp_3237_:
{
uint64_t v_flags_3240_; uint32_t v___x_3241_; lean_object* v___x_3242_; uint32_t v___x_3243_; lean_object* v___x_3244_; 
v_flags_3240_ = lean_uint64_lor(v___y_3238_, v___y_3239_);
v___x_3241_ = 214;
v___x_3242_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3233_, v_args_3234_);
v___x_3243_ = 0;
v___x_3244_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3241_, v_flags_3240_, v___x_3242_, v___x_3243_);
lean_dec(v___x_3242_);
if (lean_obj_tag(v___x_3244_) == 0)
{
if (lean_obj_tag(v___x_3244_) == 0)
{
lean_object* v_a_3245_; lean_object* v___x_3246_; 
v_a_3245_ = lean_ctor_get(v___x_3244_, 0);
lean_inc(v_a_3245_);
lean_dec_ref_known(v___x_3244_, 1);
v___x_3246_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3245_);
lean_dec(v_a_3245_);
if (lean_obj_tag(v___x_3246_) == 0)
{
lean_object* v_a_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; 
v_a_3247_ = lean_ctor_get(v___x_3246_, 0);
lean_inc(v_a_3247_);
lean_dec_ref_known(v___x_3246_, 1);
v___x_3248_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3233_);
v___x_3249_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0(v___x_3248_, v_a_3247_);
lean_dec_ref(v___x_3248_);
return v___x_3249_;
}
else
{
lean_object* v_a_3250_; lean_object* v___x_3252_; uint8_t v_isShared_3253_; uint8_t v_isSharedCheck_3257_; 
v_a_3250_ = lean_ctor_get(v___x_3246_, 0);
v_isSharedCheck_3257_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3252_ = v___x_3246_;
v_isShared_3253_ = v_isSharedCheck_3257_;
goto v_resetjp_3251_;
}
else
{
lean_inc(v_a_3250_);
lean_dec(v___x_3246_);
v___x_3252_ = lean_box(0);
v_isShared_3253_ = v_isSharedCheck_3257_;
goto v_resetjp_3251_;
}
v_resetjp_3251_:
{
lean_object* v___x_3255_; 
if (v_isShared_3253_ == 0)
{
v___x_3255_ = v___x_3252_;
goto v_reusejp_3254_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v_a_3250_);
v___x_3255_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3254_;
}
v_reusejp_3254_:
{
return v___x_3255_;
}
}
}
}
else
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3265_; 
v_a_3258_ = lean_ctor_get(v___x_3244_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v___x_3244_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3260_ = v___x_3244_;
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___x_3244_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v___x_3263_; 
if (v_isShared_3261_ == 0)
{
lean_ctor_set_tag(v___x_3260_, 1);
v___x_3263_ = v___x_3260_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v_a_3258_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
}
}
}
}
else
{
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3281_; 
v_a_3266_ = lean_ctor_get(v___x_3244_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3244_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3268_ = v___x_3244_;
v_isShared_3269_ = v_isSharedCheck_3281_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v___x_3244_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3281_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3279_; 
v___x_3270_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_3271_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3233_);
v___x_3272_ = lean_string_append(v___x_3270_, v___x_3271_);
lean_dec_ref(v___x_3271_);
v___x_3273_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_3274_ = lean_string_append(v___x_3272_, v___x_3273_);
v___x_3275_ = lean_io_error_to_string(v_a_3266_);
v___x_3276_ = lean_string_append(v___x_3274_, v___x_3275_);
lean_dec_ref(v___x_3275_);
v___x_3277_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3277_, 0, v___x_3276_);
if (v_isShared_3269_ == 0)
{
lean_ctor_set(v___x_3268_, 0, v___x_3277_);
v___x_3279_ = v___x_3268_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v___x_3277_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
}
v___jp_3283_:
{
uint8_t v_construct_3285_; uint64_t v___x_3286_; 
v_construct_3285_ = lean_ctor_get_uint8(v_b_3233_, sizeof(void*)*4);
v___x_3286_ = lean_uint64_lor(v___x_3282_, v___y_3284_);
if (v_construct_3285_ == 0)
{
uint64_t v___x_3287_; 
v___x_3287_ = 0ULL;
v___y_3238_ = v___x_3286_;
v___y_3239_ = v___x_3287_;
goto v___jp_3237_;
}
else
{
uint64_t v___x_3288_; 
v___x_3288_ = 4ULL;
v___y_3238_ = v___x_3286_;
v___y_3239_ = v___x_3288_;
goto v___jp_3237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0___boxed(lean_object* v_b_3291_, lean_object* v_args_3292_, lean_object* v_await_3293_, lean_object* v_a_3294_){
_start:
{
uint8_t v_await_boxed_3295_; lean_object* v_res_3296_; 
v_await_boxed_3295_ = lean_unbox(v_await_3293_);
v_res_3296_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0(v_b_3291_, v_args_3292_, v_await_boxed_3295_);
lean_dec_ref(v_b_3291_);
return v_res_3296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_new(lean_object* v_value_3306_){
_start:
{
lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___y_3311_; lean_object* v___x_3317_; lean_object* v___x_3318_; uint8_t v___x_3319_; 
v___x_3308_ = lean_unsigned_to_nat(1u);
v___x_3309_ = ((lean_object*)(l_Lasm_JS_Deno_KvU64_new___closed__3));
v___x_3317_ = lean_nat_abs(v_value_3306_);
v___x_3318_ = lean_cstr_to_nat("9007199254740991");
v___x_3319_ = lean_nat_dec_le(v___x_3317_, v___x_3318_);
lean_dec(v___x_3317_);
if (v___x_3319_ == 0)
{
lean_object* v___x_3320_; 
v___x_3320_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3320_, 0, v_value_3306_);
v___y_3311_ = v___x_3320_;
goto v___jp_3310_;
}
else
{
double v___x_3321_; lean_object* v___x_3322_; 
v___x_3321_ = l_Float_ofInt(v_value_3306_);
lean_dec(v_value_3306_);
v___x_3322_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3322_, 0, v___x_3321_);
v___y_3311_ = v___x_3322_;
goto v___jp_3310_;
}
v___jp_3310_:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; uint8_t v___x_3315_; lean_object* v___x_3316_; 
v___x_3312_ = lean_mk_empty_array_with_capacity(v___x_3308_);
v___x_3313_ = lean_array_push(v___x_3312_, v___y_3311_);
v___x_3314_ = l_Lasm_JS_Web_Support_args(v___x_3313_);
v___x_3315_ = 0;
v___x_3316_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0(v___x_3309_, v___x_3314_, v___x_3315_);
return v___x_3316_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_new___boxed(lean_object* v_value_3323_, lean_object* v_a_3324_){
_start:
{
lean_object* v_res_3325_; 
v_res_3325_ = l_Lasm_JS_Deno_KvU64_new(v_value_3323_);
return v_res_3325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1(lean_object* v_context_3328_, lean_object* v_d_3329_){
_start:
{
lean_object* v___y_3332_; lean_object* v___y_3333_; lean_object* v___y_3338_; lean_object* v_received_3339_; lean_object* v___y_3358_; lean_object* v_a_3361_; 
switch(lean_obj_tag(v_d_3329_))
{
case 3:
{
double v_n_3385_; lean_object* v___x_3386_; 
v_n_3385_ = lean_ctor_get_float(v_d_3329_, 0);
v___x_3386_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_3385_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v___x_3387_; 
v___x_3387_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___closed__1));
v_a_3361_ = v___x_3387_;
goto v___jp_3360_;
}
else
{
lean_object* v_val_3388_; lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3395_; 
lean_dec_ref_known(v_d_3329_, 0);
v_val_3388_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3395_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3395_ == 0)
{
v___x_3390_ = v___x_3386_;
v_isShared_3391_ = v_isSharedCheck_3395_;
goto v_resetjp_3389_;
}
else
{
lean_inc(v_val_3388_);
lean_dec(v___x_3386_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3395_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
lean_object* v___x_3393_; 
if (v_isShared_3391_ == 0)
{
lean_ctor_set_tag(v___x_3390_, 0);
v___x_3393_ = v___x_3390_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v_val_3388_);
v___x_3393_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
return v___x_3393_;
}
}
}
}
case 5:
{
lean_object* v_i_3396_; lean_object* v___x_3397_; 
v_i_3396_ = lean_ctor_get(v_d_3329_, 0);
lean_inc(v_i_3396_);
lean_dec_ref_known(v_d_3329_, 1);
v___x_3397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3397_, 0, v_i_3396_);
return v___x_3397_;
}
default: 
{
lean_object* v___x_3398_; 
v___x_3398_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v_a_3361_ = v___x_3398_;
goto v___jp_3360_;
}
}
v___jp_3331_:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3334_ = lean_string_append(v___y_3332_, v___y_3333_);
lean_dec_ref(v___y_3333_);
v___x_3335_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3335_, 0, v___x_3334_);
v___x_3336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
return v___x_3336_;
}
v___jp_3337_:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; uint8_t v___x_3351_; 
v___x_3340_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_3341_ = lean_string_append(v___x_3340_, v_context_3328_);
v___x_3342_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_3343_ = lean_string_append(v___x_3341_, v___x_3342_);
v___x_3344_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___closed__0));
v___x_3345_ = lean_string_append(v___x_3343_, v___x_3344_);
v___x_3346_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_3347_ = lean_string_append(v___x_3345_, v___x_3346_);
v___x_3348_ = lean_string_append(v___x_3347_, v_received_3339_);
lean_dec_ref(v_received_3339_);
v___x_3349_ = lean_string_utf8_byte_size(v___y_3338_);
v___x_3350_ = lean_unsigned_to_nat(0u);
v___x_3351_ = lean_nat_dec_eq(v___x_3349_, v___x_3350_);
if (v___x_3351_ == 0)
{
lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; 
v___x_3352_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_3353_ = lean_string_append(v___x_3352_, v___y_3338_);
v___x_3354_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_3355_ = lean_string_append(v___x_3353_, v___x_3354_);
v___y_3332_ = v___x_3348_;
v___y_3333_ = v___x_3355_;
goto v___jp_3331_;
}
else
{
lean_object* v___x_3356_; 
v___x_3356_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_3332_ = v___x_3348_;
v___y_3333_ = v___x_3356_;
goto v___jp_3331_;
}
}
v___jp_3357_:
{
lean_object* v___x_3359_; 
v___x_3359_ = l_Lasm_JS_Data_describe(v_d_3329_);
v___y_3338_ = v___y_3358_;
v_received_3339_ = v___x_3359_;
goto v___jp_3337_;
}
v___jp_3360_:
{
if (lean_obj_tag(v_d_3329_) == 9)
{
lean_object* v_value_3362_; lean_object* v_description_3363_; lean_object* v___x_3364_; uint8_t v___x_3365_; 
v_value_3362_ = lean_ctor_get(v_d_3329_, 0);
v_description_3363_ = lean_ctor_get(v_d_3329_, 1);
v___x_3364_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_3365_ = lean_string_dec_eq(v_description_3363_, v___x_3364_);
if (v___x_3365_ == 0)
{
v___y_3358_ = v_a_3361_;
goto v___jp_3357_;
}
else
{
lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3382_; 
lean_inc(v_value_3362_);
v_isSharedCheck_3382_ = !lean_is_exclusive(v_d_3329_);
if (v_isSharedCheck_3382_ == 0)
{
lean_object* v_unused_3383_; lean_object* v_unused_3384_; 
v_unused_3383_ = lean_ctor_get(v_d_3329_, 1);
lean_dec(v_unused_3383_);
v_unused_3384_ = lean_ctor_get(v_d_3329_, 0);
lean_dec(v_unused_3384_);
v___x_3367_ = v_d_3329_;
v_isShared_3368_ = v_isSharedCheck_3382_;
goto v_resetjp_3366_;
}
else
{
lean_dec(v_d_3329_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3382_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
uint32_t v___x_3369_; uint64_t v___x_3370_; lean_object* v___x_3372_; 
v___x_3369_ = 206;
v___x_3370_ = 0ULL;
lean_inc(v_value_3362_);
if (v_isShared_3368_ == 0)
{
lean_ctor_set(v___x_3367_, 1, v___x_3364_);
v___x_3372_ = v___x_3367_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v_value_3362_);
lean_ctor_set(v_reuseFailAlloc_3381_, 1, v___x_3364_);
v___x_3372_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
uint32_t v___x_3373_; lean_object* v___x_3374_; 
v___x_3373_ = lasm_js_value_handle(v_value_3362_);
lean_dec(v_value_3362_);
v___x_3374_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3369_, v___x_3370_, v___x_3372_, v___x_3373_);
lean_dec_ref(v___x_3372_);
if (lean_obj_tag(v___x_3374_) == 0)
{
lean_object* v_a_3375_; uint8_t v___x_3376_; 
v_a_3375_ = lean_ctor_get(v___x_3374_, 0);
lean_inc(v_a_3375_);
lean_dec_ref_known(v___x_3374_, 1);
v___x_3376_ = lean_string_validate_utf8(v_a_3375_);
if (v___x_3376_ == 0)
{
lean_object* v___x_3377_; lean_object* v___x_3378_; 
lean_dec(v_a_3375_);
v___x_3377_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_3378_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3377_);
v___y_3338_ = v_a_3361_;
v_received_3339_ = v___x_3378_;
goto v___jp_3337_;
}
else
{
lean_object* v___x_3379_; 
v___x_3379_ = lean_string_from_utf8_unchecked(v_a_3375_);
v___y_3338_ = v_a_3361_;
v_received_3339_ = v___x_3379_;
goto v___jp_3337_;
}
}
else
{
lean_object* v___x_3380_; 
lean_dec_ref_known(v___x_3374_, 1);
v___x_3380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_3338_ = v_a_3361_;
v_received_3339_ = v___x_3380_;
goto v___jp_3337_;
}
}
}
}
}
else
{
v___y_3358_ = v_a_3361_;
goto v___jp_3357_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3399_, lean_object* v_d_3400_, lean_object* v_a_3401_){
_start:
{
lean_object* v_res_3402_; 
v_res_3402_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1(v_context_3399_, v_d_3400_);
lean_dec_ref(v_context_3399_);
return v_res_3402_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0(lean_object* v_context_3403_, lean_object* v_bytes_3404_){
_start:
{
lean_object* v___x_3406_; 
v___x_3406_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3404_);
if (lean_obj_tag(v___x_3406_) == 0)
{
lean_object* v_a_3407_; lean_object* v___x_3408_; 
v_a_3407_ = lean_ctor_get(v___x_3406_, 0);
lean_inc(v_a_3407_);
lean_dec_ref_known(v___x_3406_, 1);
v___x_3408_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1(v_context_3403_, v_a_3407_);
return v___x_3408_;
}
else
{
lean_object* v_a_3409_; lean_object* v___x_3411_; uint8_t v_isShared_3412_; uint8_t v_isSharedCheck_3416_; 
v_a_3409_ = lean_ctor_get(v___x_3406_, 0);
v_isSharedCheck_3416_ = !lean_is_exclusive(v___x_3406_);
if (v_isSharedCheck_3416_ == 0)
{
v___x_3411_ = v___x_3406_;
v_isShared_3412_ = v_isSharedCheck_3416_;
goto v_resetjp_3410_;
}
else
{
lean_inc(v_a_3409_);
lean_dec(v___x_3406_);
v___x_3411_ = lean_box(0);
v_isShared_3412_ = v_isSharedCheck_3416_;
goto v_resetjp_3410_;
}
v_resetjp_3410_:
{
lean_object* v___x_3414_; 
if (v_isShared_3412_ == 0)
{
v___x_3414_ = v___x_3411_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v_a_3409_);
v___x_3414_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
return v___x_3414_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0___boxed(lean_object* v_context_3417_, lean_object* v_bytes_3418_, lean_object* v_a_3419_){
_start:
{
lean_object* v_res_3420_; 
v_res_3420_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0(v_context_3417_, v_bytes_3418_);
lean_dec_ref(v_bytes_3418_);
lean_dec_ref(v_context_3417_);
return v_res_3420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0(lean_object* v_o_3421_, lean_object* v_key_3422_){
_start:
{
lean_object* v_k_3424_; lean_object* v___x_3425_; 
v_k_3424_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3424_, 0, v_key_3422_);
v___x_3425_ = l_Lasm_JS_Wire_encodeIO(v_k_3424_);
if (lean_obj_tag(v___x_3425_) == 0)
{
lean_object* v_a_3426_; uint32_t v___x_3427_; uint32_t v___x_3428_; uint64_t v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; 
v_a_3426_ = lean_ctor_get(v___x_3425_, 0);
lean_inc(v_a_3426_);
lean_dec_ref_known(v___x_3425_, 1);
v___x_3427_ = 203;
v___x_3428_ = lasm_js_value_handle(v_o_3421_);
v___x_3429_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
v___x_3430_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_3431_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3431_, 0, v_o_3421_);
lean_ctor_set(v___x_3431_, 1, v___x_3430_);
v___x_3432_ = lean_unsigned_to_nat(2u);
v___x_3433_ = lean_mk_empty_array_with_capacity(v___x_3432_);
lean_inc_ref(v_k_3424_);
v___x_3434_ = lean_array_push(v___x_3433_, v_k_3424_);
v___x_3435_ = lean_array_push(v___x_3434_, v___x_3431_);
v___x_3436_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3436_, 0, v___x_3435_);
v___x_3437_ = lasm_js_call(v___x_3427_, v___x_3428_, v___x_3429_, v_a_3426_, v___x_3436_);
lean_dec_ref_known(v___x_3436_, 1);
lean_dec(v_a_3426_);
if (lean_obj_tag(v___x_3437_) == 0)
{
lean_object* v_a_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
v_a_3438_ = lean_ctor_get(v___x_3437_, 0);
lean_inc(v_a_3438_);
lean_dec_ref_known(v___x_3437_, 1);
v___x_3439_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__1));
v___x_3440_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3424_);
v___x_3441_ = lean_string_append(v___x_3439_, v___x_3440_);
lean_dec_ref(v___x_3440_);
v___x_3442_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0(v___x_3441_, v_a_3438_);
lean_dec(v_a_3438_);
lean_dec_ref(v___x_3441_);
return v___x_3442_;
}
else
{
lean_object* v_a_3443_; lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3450_; 
lean_dec_ref_known(v_k_3424_, 1);
v_a_3443_ = lean_ctor_get(v___x_3437_, 0);
v_isSharedCheck_3450_ = !lean_is_exclusive(v___x_3437_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3445_ = v___x_3437_;
v_isShared_3446_ = v_isSharedCheck_3450_;
goto v_resetjp_3444_;
}
else
{
lean_inc(v_a_3443_);
lean_dec(v___x_3437_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3450_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v___x_3448_; 
if (v_isShared_3446_ == 0)
{
v___x_3448_ = v___x_3445_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v_a_3443_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
return v___x_3448_;
}
}
}
}
else
{
lean_object* v_a_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3458_; 
lean_dec_ref_known(v_k_3424_, 1);
lean_dec(v_o_3421_);
v_a_3451_ = lean_ctor_get(v___x_3425_, 0);
v_isSharedCheck_3458_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3458_ == 0)
{
v___x_3453_ = v___x_3425_;
v_isShared_3454_ = v_isSharedCheck_3458_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_a_3451_);
lean_dec(v___x_3425_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3458_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v___x_3456_; 
if (v_isShared_3454_ == 0)
{
v___x_3456_ = v___x_3453_;
goto v_reusejp_3455_;
}
else
{
lean_object* v_reuseFailAlloc_3457_; 
v_reuseFailAlloc_3457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3457_, 0, v_a_3451_);
v___x_3456_ = v_reuseFailAlloc_3457_;
goto v_reusejp_3455_;
}
v_reusejp_3455_:
{
return v___x_3456_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0___boxed(lean_object* v_o_3459_, lean_object* v_key_3460_, lean_object* v_a_3461_){
_start:
{
lean_object* v_res_3462_; 
v_res_3462_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0(v_o_3459_, v_key_3460_);
return v_res_3462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_value(lean_object* v_self_3463_){
_start:
{
lean_object* v___x_3465_; lean_object* v___x_3466_; 
v___x_3465_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_3466_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0(v_self_3463_, v___x_3465_);
return v___x_3466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_value___boxed(lean_object* v_self_3467_, lean_object* v_a_3468_){
_start:
{
lean_object* v_res_3469_; 
v_res_3469_ = l_Lasm_JS_Deno_KvU64_value(v_self_3467_);
return v_res_3469_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(size_t v_sz_3470_, size_t v_i_3471_, lean_object* v_bs_3472_){
_start:
{
uint8_t v___x_3473_; 
v___x_3473_ = lean_usize_dec_lt(v_i_3471_, v_sz_3470_);
if (v___x_3473_ == 0)
{
return v_bs_3472_;
}
else
{
lean_object* v_v_3474_; lean_object* v___x_3475_; lean_object* v_bs_x27_3476_; lean_object* v___y_3478_; 
v_v_3474_ = lean_array_uget(v_bs_3472_, v_i_3471_);
v___x_3475_ = lean_unsigned_to_nat(0u);
v_bs_x27_3476_ = lean_array_uset(v_bs_3472_, v_i_3471_, v___x_3475_);
switch(lean_obj_tag(v_v_3474_))
{
case 0:
{
lean_object* v_value_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3490_; 
v_value_3483_ = lean_ctor_get(v_v_3474_, 0);
v_isSharedCheck_3490_ = !lean_is_exclusive(v_v_3474_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3485_ = v_v_3474_;
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_value_3483_);
lean_dec(v_v_3474_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3488_; 
if (v_isShared_3486_ == 0)
{
lean_ctor_set_tag(v___x_3485_, 6);
v___x_3488_ = v___x_3485_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v_value_3483_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
v___y_3478_ = v___x_3488_;
goto v___jp_3477_;
}
}
}
case 1:
{
lean_object* v_value_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3498_; 
v_value_3491_ = lean_ctor_get(v_v_3474_, 0);
v_isSharedCheck_3498_ = !lean_is_exclusive(v_v_3474_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3493_ = v_v_3474_;
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_value_3491_);
lean_dec(v_v_3474_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___x_3496_; 
if (v_isShared_3494_ == 0)
{
lean_ctor_set_tag(v___x_3493_, 4);
v___x_3496_ = v___x_3493_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_value_3491_);
v___x_3496_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
v___y_3478_ = v___x_3496_;
goto v___jp_3477_;
}
}
}
case 2:
{
double v_value_3499_; lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3506_; 
v_value_3499_ = lean_ctor_get_float(v_v_3474_, 0);
v_isSharedCheck_3506_ = !lean_is_exclusive(v_v_3474_);
if (v_isSharedCheck_3506_ == 0)
{
v___x_3501_ = v_v_3474_;
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
else
{
lean_dec(v_v_3474_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
lean_object* v___x_3504_; 
if (v_isShared_3502_ == 0)
{
lean_ctor_set_tag(v___x_3501_, 3);
v___x_3504_ = v___x_3501_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_3505_, 0, v_value_3499_);
v___x_3504_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
v___y_3478_ = v___x_3504_;
goto v___jp_3477_;
}
}
}
case 3:
{
lean_object* v_value_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3519_; 
v_value_3507_ = lean_ctor_get(v_v_3474_, 0);
v_isSharedCheck_3519_ = !lean_is_exclusive(v_v_3474_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3509_ = v_v_3474_;
v_isShared_3510_ = v_isSharedCheck_3519_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_value_3507_);
lean_dec(v_v_3474_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3519_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v___x_3511_; lean_object* v___x_3512_; uint8_t v___x_3513_; 
v___x_3511_ = lean_nat_abs(v_value_3507_);
v___x_3512_ = lean_cstr_to_nat("9007199254740991");
v___x_3513_ = lean_nat_dec_le(v___x_3511_, v___x_3512_);
lean_dec(v___x_3511_);
if (v___x_3513_ == 0)
{
lean_object* v___x_3515_; 
if (v_isShared_3510_ == 0)
{
lean_ctor_set_tag(v___x_3509_, 5);
v___x_3515_ = v___x_3509_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v_value_3507_);
v___x_3515_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
v___y_3478_ = v___x_3515_;
goto v___jp_3477_;
}
}
else
{
double v___x_3517_; lean_object* v___x_3518_; 
lean_del_object(v___x_3509_);
v___x_3517_ = l_Float_ofInt(v_value_3507_);
lean_dec(v_value_3507_);
v___x_3518_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3518_, 0, v___x_3517_);
v___y_3478_ = v___x_3518_;
goto v___jp_3477_;
}
}
}
default: 
{
uint8_t v_value_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3527_; 
v_value_3520_ = lean_ctor_get_uint8(v_v_3474_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v_v_3474_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3522_ = v_v_3474_;
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
else
{
lean_dec(v_v_3474_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3525_; 
if (v_isShared_3523_ == 0)
{
lean_ctor_set_tag(v___x_3522_, 2);
v___x_3525_ = v___x_3522_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_3526_, 0, v_value_3520_);
v___x_3525_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
v___y_3478_ = v___x_3525_;
goto v___jp_3477_;
}
}
}
}
v___jp_3477_:
{
size_t v___x_3479_; size_t v___x_3480_; lean_object* v___x_3481_; 
v___x_3479_ = ((size_t)1ULL);
v___x_3480_ = lean_usize_add(v_i_3471_, v___x_3479_);
v___x_3481_ = lean_array_uset(v_bs_x27_3476_, v_i_3471_, v___y_3478_);
v_i_3471_ = v___x_3480_;
v_bs_3472_ = v___x_3481_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0___boxed(lean_object* v_sz_3528_, lean_object* v_i_3529_, lean_object* v_bs_3530_){
_start:
{
size_t v_sz_boxed_3531_; size_t v_i_boxed_3532_; lean_object* v_res_3533_; 
v_sz_boxed_3531_ = lean_unbox_usize(v_sz_3528_);
lean_dec(v_sz_3528_);
v_i_boxed_3532_ = lean_unbox_usize(v_i_3529_);
lean_dec(v_i_3529_);
v_res_3533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_boxed_3531_, v_i_boxed_3532_, v_bs_3530_);
return v_res_3533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1(size_t v_sz_3534_, size_t v_i_3535_, lean_object* v_bs_3536_){
_start:
{
uint8_t v___x_3537_; 
v___x_3537_ = lean_usize_dec_lt(v_i_3535_, v_sz_3534_);
if (v___x_3537_ == 0)
{
return v_bs_3536_;
}
else
{
lean_object* v_v_3538_; lean_object* v_key_3539_; lean_object* v_versionstamp_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3576_; 
v_v_3538_ = lean_array_uget(v_bs_3536_, v_i_3535_);
v_key_3539_ = lean_ctor_get(v_v_3538_, 0);
v_versionstamp_3540_ = lean_ctor_get(v_v_3538_, 1);
v_isSharedCheck_3576_ = !lean_is_exclusive(v_v_3538_);
if (v_isSharedCheck_3576_ == 0)
{
v___x_3542_ = v_v_3538_;
v_isShared_3543_ = v_isSharedCheck_3576_;
goto v_resetjp_3541_;
}
else
{
lean_inc(v_versionstamp_3540_);
lean_inc(v_key_3539_);
lean_dec(v_v_3538_);
v___x_3542_ = lean_box(0);
v_isShared_3543_ = v_isSharedCheck_3576_;
goto v_resetjp_3541_;
}
v_resetjp_3541_:
{
lean_object* v___x_3544_; lean_object* v_bs_x27_3545_; lean_object* v___x_3546_; size_t v_sz_3547_; size_t v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3552_; 
v___x_3544_ = lean_unsigned_to_nat(0u);
v_bs_x27_3545_ = lean_array_uset(v_bs_3536_, v_i_3535_, v___x_3544_);
v___x_3546_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v_sz_3547_ = lean_array_size(v_key_3539_);
v___x_3548_ = ((size_t)0ULL);
v___x_3549_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3547_, v___x_3548_, v_key_3539_);
v___x_3550_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3549_);
if (v_isShared_3543_ == 0)
{
lean_ctor_set(v___x_3542_, 1, v___x_3550_);
lean_ctor_set(v___x_3542_, 0, v___x_3546_);
v___x_3552_ = v___x_3542_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v___x_3546_);
lean_ctor_set(v_reuseFailAlloc_3575_, 1, v___x_3550_);
v___x_3552_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
lean_object* v___x_3553_; lean_object* v___y_3555_; 
v___x_3553_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
if (lean_obj_tag(v_versionstamp_3540_) == 0)
{
lean_object* v___x_3566_; 
v___x_3566_ = lean_box(1);
v___y_3555_ = v___x_3566_;
goto v___jp_3554_;
}
else
{
lean_object* v_val_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3574_; 
v_val_3567_ = lean_ctor_get(v_versionstamp_3540_, 0);
v_isSharedCheck_3574_ = !lean_is_exclusive(v_versionstamp_3540_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3569_ = v_versionstamp_3540_;
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_val_3567_);
lean_dec(v_versionstamp_3540_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3572_; 
if (v_isShared_3570_ == 0)
{
lean_ctor_set_tag(v___x_3569_, 4);
v___x_3572_ = v___x_3569_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_val_3567_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
v___y_3555_ = v___x_3572_;
goto v___jp_3554_;
}
}
}
v___jp_3554_:
{
lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; size_t v___x_3562_; size_t v___x_3563_; lean_object* v___x_3564_; 
v___x_3556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3556_, 0, v___x_3553_);
lean_ctor_set(v___x_3556_, 1, v___y_3555_);
v___x_3557_ = lean_unsigned_to_nat(2u);
v___x_3558_ = lean_mk_empty_array_with_capacity(v___x_3557_);
v___x_3559_ = lean_array_push(v___x_3558_, v___x_3552_);
v___x_3560_ = lean_array_push(v___x_3559_, v___x_3556_);
v___x_3561_ = l_Lasm_JS_Web_Support_fields(v___x_3560_);
lean_dec_ref(v___x_3560_);
v___x_3562_ = ((size_t)1ULL);
v___x_3563_ = lean_usize_add(v_i_3535_, v___x_3562_);
v___x_3564_ = lean_array_uset(v_bs_x27_3545_, v_i_3535_, v___x_3561_);
v_i_3535_ = v___x_3563_;
v_bs_3536_ = v___x_3564_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1___boxed(lean_object* v_sz_3577_, lean_object* v_i_3578_, lean_object* v_bs_3579_){
_start:
{
size_t v_sz_boxed_3580_; size_t v_i_boxed_3581_; lean_object* v_res_3582_; 
v_sz_boxed_3580_ = lean_unbox_usize(v_sz_3577_);
lean_dec(v_sz_3577_);
v_i_boxed_3581_ = lean_unbox_usize(v_i_3578_);
lean_dec(v_i_3578_);
v_res_3582_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1(v_sz_boxed_3580_, v_i_boxed_3581_, v_bs_3579_);
return v_res_3582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_check(lean_object* v_self_3584_, lean_object* v_checks_3585_){
_start:
{
lean_object* v___x_3587_; lean_object* v___x_3588_; size_t v_sz_3589_; size_t v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3587_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_check___closed__0));
v___x_3588_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v_sz_3589_ = lean_array_size(v_checks_3585_);
v___x_3590_ = ((size_t)0ULL);
v___x_3591_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1(v_sz_3589_, v___x_3590_, v_checks_3585_);
v___x_3592_ = l_Lasm_JS_Web_Support_argsWith(v___x_3588_, v___x_3591_);
lean_dec_ref(v___x_3591_);
v___x_3593_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3584_, v___x_3587_, v___x_3592_);
if (lean_obj_tag(v___x_3593_) == 0)
{
lean_object* v_a_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3601_; 
v_a_3594_ = lean_ctor_get(v___x_3593_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3593_);
if (v_isSharedCheck_3601_ == 0)
{
v___x_3596_ = v___x_3593_;
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_a_3594_);
lean_dec(v___x_3593_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v___x_3599_; 
if (v_isShared_3597_ == 0)
{
v___x_3599_ = v___x_3596_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v_a_3594_);
v___x_3599_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
return v___x_3599_;
}
}
}
else
{
lean_object* v_a_3602_; lean_object* v___x_3604_; uint8_t v_isShared_3605_; uint8_t v_isSharedCheck_3609_; 
v_a_3602_ = lean_ctor_get(v___x_3593_, 0);
v_isSharedCheck_3609_ = !lean_is_exclusive(v___x_3593_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3604_ = v___x_3593_;
v_isShared_3605_ = v_isSharedCheck_3609_;
goto v_resetjp_3603_;
}
else
{
lean_inc(v_a_3602_);
lean_dec(v___x_3593_);
v___x_3604_ = lean_box(0);
v_isShared_3605_ = v_isSharedCheck_3609_;
goto v_resetjp_3603_;
}
v_resetjp_3603_:
{
lean_object* v___x_3607_; 
if (v_isShared_3605_ == 0)
{
v___x_3607_ = v___x_3604_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_a_3602_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
return v___x_3607_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_check___boxed(lean_object* v_self_3610_, lean_object* v_checks_3611_, lean_object* v_a_3612_){
_start:
{
lean_object* v_res_3613_; 
v_res_3613_ = l_Lasm_JS_Deno_AtomicOperation_check(v_self_3610_, v_checks_3611_);
return v_res_3613_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0(size_t v_sz_3614_, size_t v_i_3615_, lean_object* v_bs_3616_){
_start:
{
uint8_t v___x_3617_; 
v___x_3617_ = lean_usize_dec_lt(v_i_3615_, v_sz_3614_);
if (v___x_3617_ == 0)
{
return v_bs_3616_;
}
else
{
lean_object* v_v_3618_; lean_object* v_key_3619_; uint8_t v_type_3620_; lean_object* v_value_3621_; lean_object* v_expireIn_3622_; lean_object* v___x_3623_; lean_object* v_bs_x27_3624_; lean_object* v___x_3625_; size_t v_sz_3626_; size_t v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___y_3633_; 
v_v_3618_ = lean_array_uget_borrowed(v_bs_3616_, v_i_3615_);
v_key_3619_ = lean_ctor_get(v_v_3618_, 0);
lean_inc_ref(v_key_3619_);
v_type_3620_ = lean_ctor_get_uint8(v_v_3618_, sizeof(void*)*3);
v_value_3621_ = lean_ctor_get(v_v_3618_, 1);
lean_inc(v_value_3621_);
v_expireIn_3622_ = lean_ctor_get(v_v_3618_, 2);
lean_inc(v_expireIn_3622_);
v___x_3623_ = lean_unsigned_to_nat(0u);
v_bs_x27_3624_ = lean_array_uset(v_bs_3616_, v_i_3615_, v___x_3623_);
v___x_3625_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v_sz_3626_ = lean_array_size(v_key_3619_);
v___x_3627_ = ((size_t)0ULL);
v___x_3628_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3626_, v___x_3627_, v_key_3619_);
v___x_3629_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3629_, 0, v___x_3628_);
v___x_3630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3630_, 0, v___x_3625_);
lean_ctor_set(v___x_3630_, 1, v___x_3629_);
v___x_3631_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__0));
switch(v_type_3620_)
{
case 0:
{
lean_object* v___x_3651_; 
v___x_3651_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__1));
v___y_3633_ = v___x_3651_;
goto v___jp_3632_;
}
case 1:
{
lean_object* v___x_3652_; 
v___x_3652_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__3));
v___y_3633_ = v___x_3652_;
goto v___jp_3632_;
}
case 2:
{
lean_object* v___x_3653_; 
v___x_3653_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__5));
v___y_3633_ = v___x_3653_;
goto v___jp_3632_;
}
case 3:
{
lean_object* v___x_3654_; 
v___x_3654_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__7));
v___y_3633_ = v___x_3654_;
goto v___jp_3632_;
}
default: 
{
lean_object* v___x_3655_; 
v___x_3655_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__9));
v___y_3633_ = v___x_3655_;
goto v___jp_3632_;
}
}
v___jp_3632_:
{
lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; size_t v___x_3647_; size_t v___x_3648_; lean_object* v___x_3649_; 
lean_inc(v___y_3633_);
v___x_3634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3634_, 0, v___x_3631_);
lean_ctor_set(v___x_3634_, 1, v___y_3633_);
v___x_3635_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_3636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3635_);
lean_ctor_set(v___x_3636_, 1, v_value_3621_);
v___x_3637_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_3638_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_expireIn_3622_);
lean_dec(v_expireIn_3622_);
v___x_3639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3639_, 0, v___x_3637_);
lean_ctor_set(v___x_3639_, 1, v___x_3638_);
v___x_3640_ = lean_unsigned_to_nat(4u);
v___x_3641_ = lean_mk_empty_array_with_capacity(v___x_3640_);
v___x_3642_ = lean_array_push(v___x_3641_, v___x_3630_);
v___x_3643_ = lean_array_push(v___x_3642_, v___x_3634_);
v___x_3644_ = lean_array_push(v___x_3643_, v___x_3636_);
v___x_3645_ = lean_array_push(v___x_3644_, v___x_3639_);
v___x_3646_ = l_Lasm_JS_Web_Support_fields(v___x_3645_);
lean_dec_ref(v___x_3645_);
v___x_3647_ = ((size_t)1ULL);
v___x_3648_ = lean_usize_add(v_i_3615_, v___x_3647_);
v___x_3649_ = lean_array_uset(v_bs_x27_3624_, v_i_3615_, v___x_3646_);
v_i_3615_ = v___x_3648_;
v_bs_3616_ = v___x_3649_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0___boxed(lean_object* v_sz_3656_, lean_object* v_i_3657_, lean_object* v_bs_3658_){
_start:
{
size_t v_sz_boxed_3659_; size_t v_i_boxed_3660_; lean_object* v_res_3661_; 
v_sz_boxed_3659_ = lean_unbox_usize(v_sz_3656_);
lean_dec(v_sz_3656_);
v_i_boxed_3660_ = lean_unbox_usize(v_i_3657_);
lean_dec(v_i_3657_);
v_res_3661_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0(v_sz_boxed_3659_, v_i_boxed_3660_, v_bs_3658_);
return v_res_3661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_mutate(lean_object* v_self_3663_, lean_object* v_mutations_3664_){
_start:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; size_t v_sz_3668_; size_t v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3666_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_mutate___closed__0));
v___x_3667_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v_sz_3668_ = lean_array_size(v_mutations_3664_);
v___x_3669_ = ((size_t)0ULL);
v___x_3670_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0(v_sz_3668_, v___x_3669_, v_mutations_3664_);
v___x_3671_ = l_Lasm_JS_Web_Support_argsWith(v___x_3667_, v___x_3670_);
lean_dec_ref(v___x_3670_);
v___x_3672_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3663_, v___x_3666_, v___x_3671_);
if (lean_obj_tag(v___x_3672_) == 0)
{
lean_object* v_a_3673_; lean_object* v___x_3675_; uint8_t v_isShared_3676_; uint8_t v_isSharedCheck_3680_; 
v_a_3673_ = lean_ctor_get(v___x_3672_, 0);
v_isSharedCheck_3680_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3675_ = v___x_3672_;
v_isShared_3676_ = v_isSharedCheck_3680_;
goto v_resetjp_3674_;
}
else
{
lean_inc(v_a_3673_);
lean_dec(v___x_3672_);
v___x_3675_ = lean_box(0);
v_isShared_3676_ = v_isSharedCheck_3680_;
goto v_resetjp_3674_;
}
v_resetjp_3674_:
{
lean_object* v___x_3678_; 
if (v_isShared_3676_ == 0)
{
v___x_3678_ = v___x_3675_;
goto v_reusejp_3677_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v_a_3673_);
v___x_3678_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3677_;
}
v_reusejp_3677_:
{
return v___x_3678_;
}
}
}
else
{
lean_object* v_a_3681_; lean_object* v___x_3683_; uint8_t v_isShared_3684_; uint8_t v_isSharedCheck_3688_; 
v_a_3681_ = lean_ctor_get(v___x_3672_, 0);
v_isSharedCheck_3688_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3683_ = v___x_3672_;
v_isShared_3684_ = v_isSharedCheck_3688_;
goto v_resetjp_3682_;
}
else
{
lean_inc(v_a_3681_);
lean_dec(v___x_3672_);
v___x_3683_ = lean_box(0);
v_isShared_3684_ = v_isSharedCheck_3688_;
goto v_resetjp_3682_;
}
v_resetjp_3682_:
{
lean_object* v___x_3686_; 
if (v_isShared_3684_ == 0)
{
v___x_3686_ = v___x_3683_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v_a_3681_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_mutate___boxed(lean_object* v_self_3689_, lean_object* v_mutations_3690_, lean_object* v_a_3691_){
_start:
{
lean_object* v_res_3692_; 
v_res_3692_ = l_Lasm_JS_Deno_AtomicOperation_mutate(v_self_3689_, v_mutations_3690_);
return v_res_3692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_sum(lean_object* v_self_3693_, lean_object* v_key_3694_, lean_object* v_n_3695_){
_start:
{
lean_object* v___x_3697_; size_t v_sz_3698_; size_t v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___y_3703_; lean_object* v___x_3726_; lean_object* v___x_3727_; uint8_t v___x_3728_; 
v___x_3697_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__4));
v_sz_3698_ = lean_array_size(v_key_3694_);
v___x_3699_ = ((size_t)0ULL);
v___x_3700_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3698_, v___x_3699_, v_key_3694_);
v___x_3701_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3701_, 0, v___x_3700_);
v___x_3726_ = lean_nat_abs(v_n_3695_);
v___x_3727_ = lean_cstr_to_nat("9007199254740991");
v___x_3728_ = lean_nat_dec_le(v___x_3726_, v___x_3727_);
lean_dec(v___x_3726_);
if (v___x_3728_ == 0)
{
lean_object* v___x_3729_; 
v___x_3729_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3729_, 0, v_n_3695_);
v___y_3703_ = v___x_3729_;
goto v___jp_3702_;
}
else
{
double v___x_3730_; lean_object* v___x_3731_; 
v___x_3730_ = l_Float_ofInt(v_n_3695_);
lean_dec(v_n_3695_);
v___x_3731_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3731_, 0, v___x_3730_);
v___y_3703_ = v___x_3731_;
goto v___jp_3702_;
}
v___jp_3702_:
{
lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; 
v___x_3704_ = lean_unsigned_to_nat(2u);
v___x_3705_ = lean_mk_empty_array_with_capacity(v___x_3704_);
v___x_3706_ = lean_array_push(v___x_3705_, v___x_3701_);
v___x_3707_ = lean_array_push(v___x_3706_, v___y_3703_);
v___x_3708_ = l_Lasm_JS_Web_Support_args(v___x_3707_);
v___x_3709_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3693_, v___x_3697_, v___x_3708_);
if (lean_obj_tag(v___x_3709_) == 0)
{
lean_object* v_a_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3717_; 
v_a_3710_ = lean_ctor_get(v___x_3709_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3709_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3712_ = v___x_3709_;
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_a_3710_);
lean_dec(v___x_3709_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3710_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
else
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3725_; 
v_a_3718_ = lean_ctor_get(v___x_3709_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3709_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3720_ = v___x_3709_;
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___x_3709_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3723_; 
if (v_isShared_3721_ == 0)
{
v___x_3723_ = v___x_3720_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_sum___boxed(lean_object* v_self_3732_, lean_object* v_key_3733_, lean_object* v_n_3734_, lean_object* v_a_3735_){
_start:
{
lean_object* v_res_3736_; 
v_res_3736_ = l_Lasm_JS_Deno_AtomicOperation_sum(v_self_3732_, v_key_3733_, v_n_3734_);
return v_res_3736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_min(lean_object* v_self_3737_, lean_object* v_key_3738_, lean_object* v_n_3739_){
_start:
{
lean_object* v___x_3741_; size_t v_sz_3742_; size_t v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___y_3747_; lean_object* v___x_3770_; lean_object* v___x_3771_; uint8_t v___x_3772_; 
v___x_3741_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__8));
v_sz_3742_ = lean_array_size(v_key_3738_);
v___x_3743_ = ((size_t)0ULL);
v___x_3744_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3742_, v___x_3743_, v_key_3738_);
v___x_3745_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3744_);
v___x_3770_ = lean_nat_abs(v_n_3739_);
v___x_3771_ = lean_cstr_to_nat("9007199254740991");
v___x_3772_ = lean_nat_dec_le(v___x_3770_, v___x_3771_);
lean_dec(v___x_3770_);
if (v___x_3772_ == 0)
{
lean_object* v___x_3773_; 
v___x_3773_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3773_, 0, v_n_3739_);
v___y_3747_ = v___x_3773_;
goto v___jp_3746_;
}
else
{
double v___x_3774_; lean_object* v___x_3775_; 
v___x_3774_ = l_Float_ofInt(v_n_3739_);
lean_dec(v_n_3739_);
v___x_3775_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3775_, 0, v___x_3774_);
v___y_3747_ = v___x_3775_;
goto v___jp_3746_;
}
v___jp_3746_:
{
lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3748_ = lean_unsigned_to_nat(2u);
v___x_3749_ = lean_mk_empty_array_with_capacity(v___x_3748_);
v___x_3750_ = lean_array_push(v___x_3749_, v___x_3745_);
v___x_3751_ = lean_array_push(v___x_3750_, v___y_3747_);
v___x_3752_ = l_Lasm_JS_Web_Support_args(v___x_3751_);
v___x_3753_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3737_, v___x_3741_, v___x_3752_);
if (lean_obj_tag(v___x_3753_) == 0)
{
lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3761_; 
v_a_3754_ = lean_ctor_get(v___x_3753_, 0);
v_isSharedCheck_3761_ = !lean_is_exclusive(v___x_3753_);
if (v_isSharedCheck_3761_ == 0)
{
v___x_3756_ = v___x_3753_;
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v___x_3753_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v___x_3759_; 
if (v_isShared_3757_ == 0)
{
v___x_3759_ = v___x_3756_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v_a_3754_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
return v___x_3759_;
}
}
}
else
{
lean_object* v_a_3762_; lean_object* v___x_3764_; uint8_t v_isShared_3765_; uint8_t v_isSharedCheck_3769_; 
v_a_3762_ = lean_ctor_get(v___x_3753_, 0);
v_isSharedCheck_3769_ = !lean_is_exclusive(v___x_3753_);
if (v_isSharedCheck_3769_ == 0)
{
v___x_3764_ = v___x_3753_;
v_isShared_3765_ = v_isSharedCheck_3769_;
goto v_resetjp_3763_;
}
else
{
lean_inc(v_a_3762_);
lean_dec(v___x_3753_);
v___x_3764_ = lean_box(0);
v_isShared_3765_ = v_isSharedCheck_3769_;
goto v_resetjp_3763_;
}
v_resetjp_3763_:
{
lean_object* v___x_3767_; 
if (v_isShared_3765_ == 0)
{
v___x_3767_ = v___x_3764_;
goto v_reusejp_3766_;
}
else
{
lean_object* v_reuseFailAlloc_3768_; 
v_reuseFailAlloc_3768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3768_, 0, v_a_3762_);
v___x_3767_ = v_reuseFailAlloc_3768_;
goto v_reusejp_3766_;
}
v_reusejp_3766_:
{
return v___x_3767_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_min___boxed(lean_object* v_self_3776_, lean_object* v_key_3777_, lean_object* v_n_3778_, lean_object* v_a_3779_){
_start:
{
lean_object* v_res_3780_; 
v_res_3780_ = l_Lasm_JS_Deno_AtomicOperation_min(v_self_3776_, v_key_3777_, v_n_3778_);
return v_res_3780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_max(lean_object* v_self_3781_, lean_object* v_key_3782_, lean_object* v_n_3783_){
_start:
{
lean_object* v___x_3785_; size_t v_sz_3786_; size_t v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___y_3791_; lean_object* v___x_3814_; lean_object* v___x_3815_; uint8_t v___x_3816_; 
v___x_3785_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__6));
v_sz_3786_ = lean_array_size(v_key_3782_);
v___x_3787_ = ((size_t)0ULL);
v___x_3788_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3786_, v___x_3787_, v_key_3782_);
v___x_3789_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3789_, 0, v___x_3788_);
v___x_3814_ = lean_nat_abs(v_n_3783_);
v___x_3815_ = lean_cstr_to_nat("9007199254740991");
v___x_3816_ = lean_nat_dec_le(v___x_3814_, v___x_3815_);
lean_dec(v___x_3814_);
if (v___x_3816_ == 0)
{
lean_object* v___x_3817_; 
v___x_3817_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3817_, 0, v_n_3783_);
v___y_3791_ = v___x_3817_;
goto v___jp_3790_;
}
else
{
double v___x_3818_; lean_object* v___x_3819_; 
v___x_3818_ = l_Float_ofInt(v_n_3783_);
lean_dec(v_n_3783_);
v___x_3819_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3819_, 0, v___x_3818_);
v___y_3791_ = v___x_3819_;
goto v___jp_3790_;
}
v___jp_3790_:
{
lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; 
v___x_3792_ = lean_unsigned_to_nat(2u);
v___x_3793_ = lean_mk_empty_array_with_capacity(v___x_3792_);
v___x_3794_ = lean_array_push(v___x_3793_, v___x_3789_);
v___x_3795_ = lean_array_push(v___x_3794_, v___y_3791_);
v___x_3796_ = l_Lasm_JS_Web_Support_args(v___x_3795_);
v___x_3797_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3781_, v___x_3785_, v___x_3796_);
if (lean_obj_tag(v___x_3797_) == 0)
{
lean_object* v_a_3798_; lean_object* v___x_3800_; uint8_t v_isShared_3801_; uint8_t v_isSharedCheck_3805_; 
v_a_3798_ = lean_ctor_get(v___x_3797_, 0);
v_isSharedCheck_3805_ = !lean_is_exclusive(v___x_3797_);
if (v_isSharedCheck_3805_ == 0)
{
v___x_3800_ = v___x_3797_;
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
else
{
lean_inc(v_a_3798_);
lean_dec(v___x_3797_);
v___x_3800_ = lean_box(0);
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
v_resetjp_3799_:
{
lean_object* v___x_3803_; 
if (v_isShared_3801_ == 0)
{
v___x_3803_ = v___x_3800_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v_a_3798_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
return v___x_3803_;
}
}
}
else
{
lean_object* v_a_3806_; lean_object* v___x_3808_; uint8_t v_isShared_3809_; uint8_t v_isSharedCheck_3813_; 
v_a_3806_ = lean_ctor_get(v___x_3797_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v___x_3797_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3808_ = v___x_3797_;
v_isShared_3809_ = v_isSharedCheck_3813_;
goto v_resetjp_3807_;
}
else
{
lean_inc(v_a_3806_);
lean_dec(v___x_3797_);
v___x_3808_ = lean_box(0);
v_isShared_3809_ = v_isSharedCheck_3813_;
goto v_resetjp_3807_;
}
v_resetjp_3807_:
{
lean_object* v___x_3811_; 
if (v_isShared_3809_ == 0)
{
v___x_3811_ = v___x_3808_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v_a_3806_);
v___x_3811_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
return v___x_3811_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_max___boxed(lean_object* v_self_3820_, lean_object* v_key_3821_, lean_object* v_n_3822_, lean_object* v_a_3823_){
_start:
{
lean_object* v_res_3824_; 
v_res_3824_ = l_Lasm_JS_Deno_AtomicOperation_max(v_self_3820_, v_key_3821_, v_n_3822_);
return v_res_3824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0(lean_object* v_x_3825_){
_start:
{
if (lean_obj_tag(v_x_3825_) == 0)
{
lean_object* v___x_3826_; 
v___x_3826_ = lean_box(0);
return v___x_3826_;
}
else
{
lean_object* v_val_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; 
v_val_3827_ = lean_ctor_get(v_x_3825_, 0);
v___x_3828_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_3829_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_val_3827_);
v___x_3830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3830_, 0, v___x_3828_);
lean_ctor_set(v___x_3830_, 1, v___x_3829_);
v___x_3831_ = lean_unsigned_to_nat(1u);
v___x_3832_ = lean_mk_empty_array_with_capacity(v___x_3831_);
v___x_3833_ = lean_array_push(v___x_3832_, v___x_3830_);
v___x_3834_ = l_Lasm_JS_Web_Support_fields(v___x_3833_);
lean_dec_ref(v___x_3833_);
return v___x_3834_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0___boxed(lean_object* v_x_3835_){
_start:
{
lean_object* v_res_3836_; 
v_res_3836_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0(v_x_3835_);
lean_dec(v_x_3835_);
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_set(lean_object* v_self_3837_, lean_object* v_key_3838_, lean_object* v_value_3839_, lean_object* v_options_3840_){
_start:
{
lean_object* v___x_3842_; size_t v_sz_3843_; size_t v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; 
v___x_3842_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__0));
v_sz_3843_ = lean_array_size(v_key_3838_);
v___x_3844_ = ((size_t)0ULL);
v___x_3845_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3843_, v___x_3844_, v_key_3838_);
v___x_3846_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3845_);
v___x_3847_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0(v_options_3840_);
v___x_3848_ = lean_unsigned_to_nat(3u);
v___x_3849_ = lean_mk_empty_array_with_capacity(v___x_3848_);
v___x_3850_ = lean_array_push(v___x_3849_, v___x_3846_);
v___x_3851_ = lean_array_push(v___x_3850_, v_value_3839_);
v___x_3852_ = lean_array_push(v___x_3851_, v___x_3847_);
v___x_3853_ = l_Lasm_JS_Web_Support_args(v___x_3852_);
v___x_3854_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3837_, v___x_3842_, v___x_3853_);
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_object* v_a_3855_; lean_object* v___x_3857_; uint8_t v_isShared_3858_; uint8_t v_isSharedCheck_3862_; 
v_a_3855_ = lean_ctor_get(v___x_3854_, 0);
v_isSharedCheck_3862_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3862_ == 0)
{
v___x_3857_ = v___x_3854_;
v_isShared_3858_ = v_isSharedCheck_3862_;
goto v_resetjp_3856_;
}
else
{
lean_inc(v_a_3855_);
lean_dec(v___x_3854_);
v___x_3857_ = lean_box(0);
v_isShared_3858_ = v_isSharedCheck_3862_;
goto v_resetjp_3856_;
}
v_resetjp_3856_:
{
lean_object* v___x_3860_; 
if (v_isShared_3858_ == 0)
{
v___x_3860_ = v___x_3857_;
goto v_reusejp_3859_;
}
else
{
lean_object* v_reuseFailAlloc_3861_; 
v_reuseFailAlloc_3861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3861_, 0, v_a_3855_);
v___x_3860_ = v_reuseFailAlloc_3861_;
goto v_reusejp_3859_;
}
v_reusejp_3859_:
{
return v___x_3860_;
}
}
}
else
{
lean_object* v_a_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3870_; 
v_a_3863_ = lean_ctor_get(v___x_3854_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3865_ = v___x_3854_;
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_a_3863_);
lean_dec(v___x_3854_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3868_; 
if (v_isShared_3866_ == 0)
{
v___x_3868_ = v___x_3865_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_a_3863_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_set___boxed(lean_object* v_self_3871_, lean_object* v_key_3872_, lean_object* v_value_3873_, lean_object* v_options_3874_, lean_object* v_a_3875_){
_start:
{
lean_object* v_res_3876_; 
v_res_3876_ = l_Lasm_JS_Deno_AtomicOperation_set(v_self_3871_, v_key_3872_, v_value_3873_, v_options_3874_);
lean_dec(v_options_3874_);
return v_res_3876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_delete(lean_object* v_self_3877_, lean_object* v_key_3878_){
_start:
{
lean_object* v___x_3880_; size_t v_sz_3881_; size_t v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3880_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__2));
v_sz_3881_ = lean_array_size(v_key_3878_);
v___x_3882_ = ((size_t)0ULL);
v___x_3883_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3881_, v___x_3882_, v_key_3878_);
v___x_3884_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3884_, 0, v___x_3883_);
v___x_3885_ = lean_unsigned_to_nat(1u);
v___x_3886_ = lean_mk_empty_array_with_capacity(v___x_3885_);
v___x_3887_ = lean_array_push(v___x_3886_, v___x_3884_);
v___x_3888_ = l_Lasm_JS_Web_Support_args(v___x_3887_);
v___x_3889_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3877_, v___x_3880_, v___x_3888_);
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3890_; lean_object* v___x_3892_; uint8_t v_isShared_3893_; uint8_t v_isSharedCheck_3897_; 
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3897_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3892_ = v___x_3889_;
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
else
{
lean_inc(v_a_3890_);
lean_dec(v___x_3889_);
v___x_3892_ = lean_box(0);
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
v_resetjp_3891_:
{
lean_object* v___x_3895_; 
if (v_isShared_3893_ == 0)
{
v___x_3895_ = v___x_3892_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_a_3890_);
v___x_3895_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
return v___x_3895_;
}
}
}
else
{
lean_object* v_a_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3905_; 
v_a_3898_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3900_ = v___x_3889_;
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_a_3898_);
lean_dec(v___x_3889_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_a_3898_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
return v___x_3903_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_delete___boxed(lean_object* v_self_3906_, lean_object* v_key_3907_, lean_object* v_a_3908_){
_start:
{
lean_object* v_res_3909_; 
v_res_3909_ = l_Lasm_JS_Deno_AtomicOperation_delete(v_self_3906_, v_key_3907_);
return v_res_3909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(size_t v_sz_3910_, size_t v_i_3911_, lean_object* v_bs_3912_){
_start:
{
uint8_t v___x_3913_; 
v___x_3913_ = lean_usize_dec_lt(v_i_3911_, v_sz_3910_);
if (v___x_3913_ == 0)
{
return v_bs_3912_;
}
else
{
lean_object* v_v_3914_; lean_object* v___x_3915_; lean_object* v_bs_x27_3916_; lean_object* v___x_3917_; double v___x_3918_; size_t v___x_3919_; size_t v___x_3920_; lean_object* v___x_3921_; 
v_v_3914_ = lean_array_uget(v_bs_3912_, v_i_3911_);
v___x_3915_ = lean_unsigned_to_nat(0u);
v_bs_x27_3916_ = lean_array_uset(v_bs_3912_, v_i_3911_, v___x_3915_);
v___x_3917_ = lean_alloc_ctor(3, 0, 8);
v___x_3918_ = lean_unbox_float(v_v_3914_);
lean_dec(v_v_3914_);
lean_ctor_set_float(v___x_3917_, 0, v___x_3918_);
v___x_3919_ = ((size_t)1ULL);
v___x_3920_ = lean_usize_add(v_i_3911_, v___x_3919_);
v___x_3921_ = lean_array_uset(v_bs_x27_3916_, v_i_3911_, v___x_3917_);
v_i_3911_ = v___x_3920_;
v_bs_3912_ = v___x_3921_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3___boxed(lean_object* v_sz_3923_, lean_object* v_i_3924_, lean_object* v_bs_3925_){
_start:
{
size_t v_sz_boxed_3926_; size_t v_i_boxed_3927_; lean_object* v_res_3928_; 
v_sz_boxed_3926_ = lean_unbox_usize(v_sz_3923_);
lean_dec(v_sz_3923_);
v_i_boxed_3927_ = lean_unbox_usize(v_i_3924_);
lean_dec(v_i_3924_);
v_res_3928_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(v_sz_boxed_3926_, v_i_boxed_3927_, v_bs_3925_);
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(lean_object* v_x_3929_){
_start:
{
if (lean_obj_tag(v_x_3929_) == 0)
{
lean_object* v___x_3930_; 
v___x_3930_ = lean_box(0);
return v___x_3930_;
}
else
{
lean_object* v_val_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3941_; 
v_val_3931_ = lean_ctor_get(v_x_3929_, 0);
v_isSharedCheck_3941_ = !lean_is_exclusive(v_x_3929_);
if (v_isSharedCheck_3941_ == 0)
{
v___x_3933_ = v_x_3929_;
v_isShared_3934_ = v_isSharedCheck_3941_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_val_3931_);
lean_dec(v_x_3929_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3941_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
size_t v_sz_3935_; size_t v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3939_; 
v_sz_3935_ = lean_array_size(v_val_3931_);
v___x_3936_ = ((size_t)0ULL);
v___x_3937_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(v_sz_3935_, v___x_3936_, v_val_3931_);
if (v_isShared_3934_ == 0)
{
lean_ctor_set_tag(v___x_3933_, 7);
lean_ctor_set(v___x_3933_, 0, v___x_3937_);
v___x_3939_ = v___x_3933_;
goto v_reusejp_3938_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v___x_3937_);
v___x_3939_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3938_;
}
v_reusejp_3938_:
{
return v___x_3939_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(size_t v_sz_3942_, size_t v_i_3943_, lean_object* v_bs_3944_){
_start:
{
uint8_t v___x_3945_; 
v___x_3945_ = lean_usize_dec_lt(v_i_3943_, v_sz_3942_);
if (v___x_3945_ == 0)
{
return v_bs_3944_;
}
else
{
lean_object* v_v_3946_; lean_object* v___x_3947_; lean_object* v_bs_x27_3948_; size_t v_sz_3949_; size_t v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; size_t v___x_3953_; size_t v___x_3954_; lean_object* v___x_3955_; 
v_v_3946_ = lean_array_uget(v_bs_3944_, v_i_3943_);
v___x_3947_ = lean_unsigned_to_nat(0u);
v_bs_x27_3948_ = lean_array_uset(v_bs_3944_, v_i_3943_, v___x_3947_);
v_sz_3949_ = lean_array_size(v_v_3946_);
v___x_3950_ = ((size_t)0ULL);
v___x_3951_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3949_, v___x_3950_, v_v_3946_);
v___x_3952_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3951_);
v___x_3953_ = ((size_t)1ULL);
v___x_3954_ = lean_usize_add(v_i_3943_, v___x_3953_);
v___x_3955_ = lean_array_uset(v_bs_x27_3948_, v_i_3943_, v___x_3952_);
v_i_3943_ = v___x_3954_;
v_bs_3944_ = v___x_3955_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3957_, lean_object* v_i_3958_, lean_object* v_bs_3959_){
_start:
{
size_t v_sz_boxed_3960_; size_t v_i_boxed_3961_; lean_object* v_res_3962_; 
v_sz_boxed_3960_ = lean_unbox_usize(v_sz_3957_);
lean_dec(v_sz_3957_);
v_i_boxed_3961_ = lean_unbox_usize(v_i_3958_);
lean_dec(v_i_3958_);
v_res_3962_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(v_sz_boxed_3960_, v_i_boxed_3961_, v_bs_3959_);
return v_res_3962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0(lean_object* v_x_3963_){
_start:
{
if (lean_obj_tag(v_x_3963_) == 0)
{
lean_object* v___x_3964_; 
v___x_3964_ = lean_box(0);
return v___x_3964_;
}
else
{
lean_object* v_val_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3975_; 
v_val_3965_ = lean_ctor_get(v_x_3963_, 0);
v_isSharedCheck_3975_ = !lean_is_exclusive(v_x_3963_);
if (v_isSharedCheck_3975_ == 0)
{
v___x_3967_ = v_x_3963_;
v_isShared_3968_ = v_isSharedCheck_3975_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_val_3965_);
lean_dec(v_x_3963_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3975_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
size_t v_sz_3969_; size_t v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3973_; 
v_sz_3969_ = lean_array_size(v_val_3965_);
v___x_3970_ = ((size_t)0ULL);
v___x_3971_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(v_sz_3969_, v___x_3970_, v_val_3965_);
if (v_isShared_3968_ == 0)
{
lean_ctor_set_tag(v___x_3967_, 7);
lean_ctor_set(v___x_3967_, 0, v___x_3971_);
v___x_3973_ = v___x_3967_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v___x_3971_);
v___x_3973_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
return v___x_3973_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0(lean_object* v_x_3976_){
_start:
{
if (lean_obj_tag(v_x_3976_) == 0)
{
lean_object* v___x_3977_; 
v___x_3977_ = lean_box(0);
return v___x_3977_;
}
else
{
lean_object* v_val_3978_; lean_object* v_delay_3979_; lean_object* v_keysIfUndelivered_3980_; lean_object* v_backoffSchedule_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; 
v_val_3978_ = lean_ctor_get(v_x_3976_, 0);
lean_inc(v_val_3978_);
lean_dec_ref_known(v_x_3976_, 1);
v_delay_3979_ = lean_ctor_get(v_val_3978_, 0);
lean_inc(v_delay_3979_);
v_keysIfUndelivered_3980_ = lean_ctor_get(v_val_3978_, 1);
lean_inc(v_keysIfUndelivered_3980_);
v_backoffSchedule_3981_ = lean_ctor_get(v_val_3978_, 2);
lean_inc(v_backoffSchedule_3981_);
lean_dec(v_val_3978_);
v___x_3982_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0));
v___x_3983_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_delay_3979_);
lean_dec(v_delay_3979_);
v___x_3984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3984_, 0, v___x_3982_);
lean_ctor_set(v___x_3984_, 1, v___x_3983_);
v___x_3985_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1));
v___x_3986_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0(v_keysIfUndelivered_3980_);
v___x_3987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3987_, 0, v___x_3985_);
lean_ctor_set(v___x_3987_, 1, v___x_3986_);
v___x_3988_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_3989_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(v_backoffSchedule_3981_);
v___x_3990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3988_);
lean_ctor_set(v___x_3990_, 1, v___x_3989_);
v___x_3991_ = lean_unsigned_to_nat(3u);
v___x_3992_ = lean_mk_empty_array_with_capacity(v___x_3991_);
v___x_3993_ = lean_array_push(v___x_3992_, v___x_3984_);
v___x_3994_ = lean_array_push(v___x_3993_, v___x_3987_);
v___x_3995_ = lean_array_push(v___x_3994_, v___x_3990_);
v___x_3996_ = l_Lasm_JS_Web_Support_fields(v___x_3995_);
lean_dec_ref(v___x_3995_);
return v___x_3996_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_enqueue(lean_object* v_self_3998_, lean_object* v_value_3999_, lean_object* v_options_4000_){
_start:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; 
v___x_4002_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_enqueue___closed__0));
v___x_4003_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0(v_options_4000_);
v___x_4004_ = lean_unsigned_to_nat(2u);
v___x_4005_ = lean_mk_empty_array_with_capacity(v___x_4004_);
v___x_4006_ = lean_array_push(v___x_4005_, v_value_3999_);
v___x_4007_ = lean_array_push(v___x_4006_, v___x_4003_);
v___x_4008_ = l_Lasm_JS_Web_Support_args(v___x_4007_);
v___x_4009_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3998_, v___x_4002_, v___x_4008_);
if (lean_obj_tag(v___x_4009_) == 0)
{
lean_object* v_a_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4017_; 
v_a_4010_ = lean_ctor_get(v___x_4009_, 0);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_4009_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4012_ = v___x_4009_;
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_a_4010_);
lean_dec(v___x_4009_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4015_; 
if (v_isShared_4013_ == 0)
{
v___x_4015_ = v___x_4012_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_a_4010_);
v___x_4015_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
return v___x_4015_;
}
}
}
else
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
v_a_4018_ = lean_ctor_get(v___x_4009_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_4009_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_4009_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_4009_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4021_ == 0)
{
v___x_4023_ = v___x_4020_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_a_4018_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_enqueue___boxed(lean_object* v_self_4026_, lean_object* v_value_4027_, lean_object* v_options_4028_, lean_object* v_a_4029_){
_start:
{
lean_object* v_res_4030_; 
v_res_4030_ = l_Lasm_JS_Deno_AtomicOperation_enqueue(v_self_4026_, v_value_4027_, v_options_4028_);
return v_res_4030_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0(uint8_t v_await_4031_, uint64_t v_extra_4032_){
_start:
{
uint64_t v___x_4033_; uint64_t v___y_4035_; 
v___x_4033_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_4031_ == 0)
{
uint64_t v___x_4038_; 
v___x_4038_ = 0ULL;
v___y_4035_ = v___x_4038_;
goto v___jp_4034_;
}
else
{
uint64_t v___x_4039_; 
v___x_4039_ = 2ULL;
v___y_4035_ = v___x_4039_;
goto v___jp_4034_;
}
v___jp_4034_:
{
uint64_t v___x_4036_; uint64_t v___x_4037_; 
v___x_4036_ = lean_uint64_lor(v___x_4033_, v___y_4035_);
v___x_4037_ = lean_uint64_lor(v___x_4036_, v_extra_4032_);
return v___x_4037_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0___boxed(lean_object* v_await_4040_, lean_object* v_extra_4041_){
_start:
{
uint8_t v_await_boxed_4042_; uint64_t v_extra_boxed_4043_; uint64_t v_res_4044_; lean_object* v_r_4045_; 
v_await_boxed_4042_ = lean_unbox(v_await_4040_);
v_extra_boxed_4043_ = lean_unbox_uint64(v_extra_4041_);
lean_dec_ref(v_extra_4041_);
v_res_4044_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0(v_await_boxed_4042_, v_extra_boxed_4043_);
v_r_4045_ = lean_box_uint64(v_res_4044_);
return v_r_4045_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2(lean_object* v___f_4046_, lean_object* v_x_4047_){
_start:
{
if (lean_obj_tag(v_x_4047_) == 0)
{
lean_object* v_a_4049_; lean_object* v___x_4051_; uint8_t v_isShared_4052_; uint8_t v_isSharedCheck_4057_; 
lean_dec_ref(v___f_4046_);
v_a_4049_ = lean_ctor_get(v_x_4047_, 0);
v_isSharedCheck_4057_ = !lean_is_exclusive(v_x_4047_);
if (v_isSharedCheck_4057_ == 0)
{
v___x_4051_ = v_x_4047_;
v_isShared_4052_ = v_isSharedCheck_4057_;
goto v_resetjp_4050_;
}
else
{
lean_inc(v_a_4049_);
lean_dec(v_x_4047_);
v___x_4051_ = lean_box(0);
v_isShared_4052_ = v_isSharedCheck_4057_;
goto v_resetjp_4050_;
}
v_resetjp_4050_:
{
lean_object* v___x_4054_; 
if (v_isShared_4052_ == 0)
{
v___x_4054_ = v___x_4051_;
goto v_reusejp_4053_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v_a_4049_);
v___x_4054_ = v_reuseFailAlloc_4056_;
goto v_reusejp_4053_;
}
v_reusejp_4053_:
{
lean_object* v___x_4055_; 
v___x_4055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4055_, 0, v___x_4054_);
return v___x_4055_;
}
}
}
else
{
lean_object* v_a_4058_; lean_object* v___x_4059_; 
v_a_4058_ = lean_ctor_get(v_x_4047_, 0);
lean_inc(v_a_4058_);
lean_dec_ref_known(v_x_4047_, 1);
v___x_4059_ = lean_apply_2(v___f_4046_, v_a_4058_, lean_box(0));
return v___x_4059_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2___boxed(lean_object* v___f_4060_, lean_object* v_x_4061_, lean_object* v___y_4062_){
_start:
{
lean_object* v_res_4063_; 
v_res_4063_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2(v___f_4060_, v_x_4061_);
return v_res_4063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_4069_, lean_object* v_key_4070_){
_start:
{
if (lean_obj_tag(v_d_4069_) == 8)
{
lean_object* v___x_4073_; lean_object* v___x_4075_; uint8_t v_isShared_4076_; uint8_t v_isSharedCheck_4101_; 
v___x_4073_ = l_Lasm_JS_Data_field(v_d_4069_, v_key_4070_);
v_isSharedCheck_4101_ = !lean_is_exclusive(v_d_4069_);
if (v_isSharedCheck_4101_ == 0)
{
lean_object* v_unused_4102_; 
v_unused_4102_ = lean_ctor_get(v_d_4069_, 0);
lean_dec(v_unused_4102_);
v___x_4075_ = v_d_4069_;
v_isShared_4076_ = v_isSharedCheck_4101_;
goto v_resetjp_4074_;
}
else
{
lean_dec(v_d_4069_);
v___x_4075_ = lean_box(0);
v_isShared_4076_ = v_isSharedCheck_4101_;
goto v_resetjp_4074_;
}
v_resetjp_4074_:
{
switch(lean_obj_tag(v___x_4073_))
{
case 1:
{
lean_del_object(v___x_4075_);
goto v___jp_4071_;
}
case 0:
{
lean_del_object(v___x_4075_);
goto v___jp_4071_;
}
default: 
{
if (lean_obj_tag(v___x_4073_) == 4)
{
lean_object* v_s_4077_; lean_object* v___x_4079_; 
v_s_4077_ = lean_ctor_get(v___x_4073_, 0);
lean_inc_ref(v_s_4077_);
lean_dec_ref_known(v___x_4073_, 1);
if (v_isShared_4076_ == 0)
{
lean_ctor_set_tag(v___x_4075_, 1);
lean_ctor_set(v___x_4075_, 0, v_s_4077_);
v___x_4079_ = v___x_4075_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v_s_4077_);
v___x_4079_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
lean_object* v___x_4080_; 
v___x_4080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4080_, 0, v___x_4079_);
return v___x_4080_;
}
}
else
{
lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; uint8_t v___x_4092_; 
v___x_4082_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_4083_ = lean_string_append(v___x_4082_, v_key_4070_);
v___x_4084_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_4085_ = lean_string_append(v___x_4083_, v___x_4084_);
v___x_4086_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_4087_ = lean_string_append(v___x_4085_, v___x_4086_);
v___x_4088_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
v___x_4089_ = lean_string_append(v___x_4087_, v___x_4088_);
v___x_4090_ = l_Lasm_JS_Data_describe(v___x_4073_);
v___x_4091_ = lean_string_append(v___x_4089_, v___x_4090_);
lean_dec_ref(v___x_4090_);
v___x_4092_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5);
if (v___x_4092_ == 0)
{
lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4096_; 
v___x_4093_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6));
v___x_4094_ = lean_string_append(v___x_4091_, v___x_4093_);
if (v_isShared_4076_ == 0)
{
lean_ctor_set_tag(v___x_4075_, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4094_);
v___x_4096_ = v___x_4075_;
goto v_reusejp_4095_;
}
else
{
lean_object* v_reuseFailAlloc_4097_; 
v_reuseFailAlloc_4097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4097_, 0, v___x_4094_);
v___x_4096_ = v_reuseFailAlloc_4097_;
goto v_reusejp_4095_;
}
v_reusejp_4095_:
{
return v___x_4096_;
}
}
else
{
lean_object* v___x_4099_; 
if (v_isShared_4076_ == 0)
{
lean_ctor_set_tag(v___x_4075_, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4091_);
v___x_4099_ = v___x_4075_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v___x_4091_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4103_; 
lean_dec(v_d_4069_);
v___x_4103_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__2));
return v___x_4103_;
}
v___jp_4071_:
{
lean_object* v___x_4072_; 
v___x_4072_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__0));
return v___x_4072_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_4104_, lean_object* v_key_4105_){
_start:
{
lean_object* v_res_4106_; 
v_res_4106_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(v_d_4104_, v_key_4105_);
lean_dec_ref(v_key_4105_);
return v_res_4106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_4110_, lean_object* v_key_4111_){
_start:
{
if (lean_obj_tag(v_d_4110_) == 8)
{
lean_object* v___x_4112_; lean_object* v___x_4114_; uint8_t v_isShared_4115_; uint8_t v_isSharedCheck_4140_; 
v___x_4112_ = l_Lasm_JS_Data_field(v_d_4110_, v_key_4111_);
v_isSharedCheck_4140_ = !lean_is_exclusive(v_d_4110_);
if (v_isSharedCheck_4140_ == 0)
{
lean_object* v_unused_4141_; 
v_unused_4141_ = lean_ctor_get(v_d_4110_, 0);
lean_dec(v_unused_4141_);
v___x_4114_ = v_d_4110_;
v_isShared_4115_ = v_isSharedCheck_4140_;
goto v_resetjp_4113_;
}
else
{
lean_dec(v_d_4110_);
v___x_4114_ = lean_box(0);
v_isShared_4115_ = v_isSharedCheck_4140_;
goto v_resetjp_4113_;
}
v_resetjp_4113_:
{
if (lean_obj_tag(v___x_4112_) == 2)
{
uint8_t v_b_4116_; lean_object* v___x_4117_; lean_object* v___x_4119_; 
v_b_4116_ = lean_ctor_get_uint8(v___x_4112_, 0);
lean_dec_ref_known(v___x_4112_, 0);
v___x_4117_ = lean_box(v_b_4116_);
if (v_isShared_4115_ == 0)
{
lean_ctor_set_tag(v___x_4114_, 1);
lean_ctor_set(v___x_4114_, 0, v___x_4117_);
v___x_4119_ = v___x_4114_;
goto v_reusejp_4118_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v___x_4117_);
v___x_4119_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4118_;
}
v_reusejp_4118_:
{
return v___x_4119_;
}
}
else
{
lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; uint8_t v___x_4131_; 
v___x_4121_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_4122_ = lean_string_append(v___x_4121_, v_key_4111_);
v___x_4123_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_4124_ = lean_string_append(v___x_4122_, v___x_4123_);
v___x_4125_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_4126_ = lean_string_append(v___x_4124_, v___x_4125_);
v___x_4127_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
v___x_4128_ = lean_string_append(v___x_4126_, v___x_4127_);
v___x_4129_ = l_Lasm_JS_Data_describe(v___x_4112_);
v___x_4130_ = lean_string_append(v___x_4128_, v___x_4129_);
lean_dec_ref(v___x_4129_);
v___x_4131_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5);
if (v___x_4131_ == 0)
{
lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4135_; 
v___x_4132_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6));
v___x_4133_ = lean_string_append(v___x_4130_, v___x_4132_);
if (v_isShared_4115_ == 0)
{
lean_ctor_set_tag(v___x_4114_, 0);
lean_ctor_set(v___x_4114_, 0, v___x_4133_);
v___x_4135_ = v___x_4114_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v___x_4133_);
v___x_4135_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
return v___x_4135_;
}
}
else
{
lean_object* v___x_4138_; 
if (v_isShared_4115_ == 0)
{
lean_ctor_set_tag(v___x_4114_, 0);
lean_ctor_set(v___x_4114_, 0, v___x_4130_);
v___x_4138_ = v___x_4114_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v___x_4130_);
v___x_4138_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
return v___x_4138_;
}
}
}
}
}
else
{
lean_object* v___x_4142_; 
lean_dec(v_d_4110_);
v___x_4142_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___closed__1));
return v___x_4142_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_4143_, lean_object* v_key_4144_){
_start:
{
lean_object* v_res_4145_; 
v_res_4145_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(v_d_4143_, v_key_4144_);
lean_dec_ref(v_key_4144_);
return v_res_4145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2(lean_object* v_context_4146_, lean_object* v_d_4147_){
_start:
{
lean_object* v___y_4150_; lean_object* v___y_4151_; lean_object* v___y_4156_; lean_object* v_received_4157_; lean_object* v___y_4176_; lean_object* v_a_4179_; lean_object* v___x_4203_; lean_object* v___x_4204_; 
v___x_4203_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0));
lean_inc(v_d_4147_);
v___x_4204_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(v_d_4147_, v___x_4203_);
if (lean_obj_tag(v___x_4204_) == 0)
{
lean_object* v_a_4205_; 
v_a_4205_ = lean_ctor_get(v___x_4204_, 0);
lean_inc(v_a_4205_);
lean_dec_ref_known(v___x_4204_, 1);
v_a_4179_ = v_a_4205_;
goto v___jp_4178_;
}
else
{
lean_object* v_a_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; 
v_a_4206_ = lean_ctor_get(v___x_4204_, 0);
lean_inc(v_a_4206_);
lean_dec_ref_known(v___x_4204_, 1);
v___x_4207_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_d_4147_);
v___x_4208_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(v_d_4147_, v___x_4207_);
if (lean_obj_tag(v___x_4208_) == 0)
{
lean_object* v_a_4209_; 
lean_dec(v_a_4206_);
v_a_4209_ = lean_ctor_get(v___x_4208_, 0);
lean_inc(v_a_4209_);
lean_dec_ref_known(v___x_4208_, 1);
v_a_4179_ = v_a_4209_;
goto v___jp_4178_;
}
else
{
lean_object* v_a_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4219_; 
lean_dec(v_d_4147_);
v_a_4210_ = lean_ctor_get(v___x_4208_, 0);
v_isSharedCheck_4219_ = !lean_is_exclusive(v___x_4208_);
if (v_isSharedCheck_4219_ == 0)
{
v___x_4212_ = v___x_4208_;
v_isShared_4213_ = v_isSharedCheck_4219_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_a_4210_);
lean_dec(v___x_4208_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4219_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4214_; uint8_t v___x_4215_; lean_object* v___x_4217_; 
v___x_4214_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4214_, 0, v_a_4210_);
v___x_4215_ = lean_unbox(v_a_4206_);
lean_dec(v_a_4206_);
lean_ctor_set_uint8(v___x_4214_, sizeof(void*)*1, v___x_4215_);
if (v_isShared_4213_ == 0)
{
lean_ctor_set_tag(v___x_4212_, 0);
lean_ctor_set(v___x_4212_, 0, v___x_4214_);
v___x_4217_ = v___x_4212_;
goto v_reusejp_4216_;
}
else
{
lean_object* v_reuseFailAlloc_4218_; 
v_reuseFailAlloc_4218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4218_, 0, v___x_4214_);
v___x_4217_ = v_reuseFailAlloc_4218_;
goto v_reusejp_4216_;
}
v_reusejp_4216_:
{
return v___x_4217_;
}
}
}
}
v___jp_4149_:
{
lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; 
v___x_4152_ = lean_string_append(v___y_4150_, v___y_4151_);
lean_dec_ref(v___y_4151_);
v___x_4153_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4153_, 0, v___x_4152_);
v___x_4154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4154_, 0, v___x_4153_);
return v___x_4154_;
}
v___jp_4155_:
{
lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; uint8_t v___x_4169_; 
v___x_4158_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_4159_ = lean_string_append(v___x_4158_, v_context_4146_);
v___x_4160_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_4161_ = lean_string_append(v___x_4159_, v___x_4160_);
v___x_4162_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__2));
v___x_4163_ = lean_string_append(v___x_4161_, v___x_4162_);
v___x_4164_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_4165_ = lean_string_append(v___x_4163_, v___x_4164_);
v___x_4166_ = lean_string_append(v___x_4165_, v_received_4157_);
lean_dec_ref(v_received_4157_);
v___x_4167_ = lean_string_utf8_byte_size(v___y_4156_);
v___x_4168_ = lean_unsigned_to_nat(0u);
v___x_4169_ = lean_nat_dec_eq(v___x_4167_, v___x_4168_);
if (v___x_4169_ == 0)
{
lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
v___x_4170_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_4171_ = lean_string_append(v___x_4170_, v___y_4156_);
lean_dec_ref(v___y_4156_);
v___x_4172_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4173_ = lean_string_append(v___x_4171_, v___x_4172_);
v___y_4150_ = v___x_4166_;
v___y_4151_ = v___x_4173_;
goto v___jp_4149_;
}
else
{
lean_object* v___x_4174_; 
lean_dec_ref(v___y_4156_);
v___x_4174_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_4150_ = v___x_4166_;
v___y_4151_ = v___x_4174_;
goto v___jp_4149_;
}
}
v___jp_4175_:
{
lean_object* v___x_4177_; 
v___x_4177_ = l_Lasm_JS_Data_describe(v_d_4147_);
v___y_4156_ = v___y_4176_;
v_received_4157_ = v___x_4177_;
goto v___jp_4155_;
}
v___jp_4178_:
{
if (lean_obj_tag(v_d_4147_) == 9)
{
lean_object* v_value_4180_; lean_object* v_description_4181_; lean_object* v___x_4182_; uint8_t v___x_4183_; 
v_value_4180_ = lean_ctor_get(v_d_4147_, 0);
v_description_4181_ = lean_ctor_get(v_d_4147_, 1);
v___x_4182_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4183_ = lean_string_dec_eq(v_description_4181_, v___x_4182_);
if (v___x_4183_ == 0)
{
v___y_4176_ = v_a_4179_;
goto v___jp_4175_;
}
else
{
lean_object* v___x_4185_; uint8_t v_isShared_4186_; uint8_t v_isSharedCheck_4200_; 
lean_inc(v_value_4180_);
v_isSharedCheck_4200_ = !lean_is_exclusive(v_d_4147_);
if (v_isSharedCheck_4200_ == 0)
{
lean_object* v_unused_4201_; lean_object* v_unused_4202_; 
v_unused_4201_ = lean_ctor_get(v_d_4147_, 1);
lean_dec(v_unused_4201_);
v_unused_4202_ = lean_ctor_get(v_d_4147_, 0);
lean_dec(v_unused_4202_);
v___x_4185_ = v_d_4147_;
v_isShared_4186_ = v_isSharedCheck_4200_;
goto v_resetjp_4184_;
}
else
{
lean_dec(v_d_4147_);
v___x_4185_ = lean_box(0);
v_isShared_4186_ = v_isSharedCheck_4200_;
goto v_resetjp_4184_;
}
v_resetjp_4184_:
{
uint32_t v___x_4187_; uint64_t v___x_4188_; lean_object* v___x_4190_; 
v___x_4187_ = 206;
v___x_4188_ = 0ULL;
lean_inc(v_value_4180_);
if (v_isShared_4186_ == 0)
{
lean_ctor_set(v___x_4185_, 1, v___x_4182_);
v___x_4190_ = v___x_4185_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v_value_4180_);
lean_ctor_set(v_reuseFailAlloc_4199_, 1, v___x_4182_);
v___x_4190_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
uint32_t v___x_4191_; lean_object* v___x_4192_; 
v___x_4191_ = lasm_js_value_handle(v_value_4180_);
lean_dec(v_value_4180_);
v___x_4192_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4187_, v___x_4188_, v___x_4190_, v___x_4191_);
lean_dec_ref(v___x_4190_);
if (lean_obj_tag(v___x_4192_) == 0)
{
lean_object* v_a_4193_; uint8_t v___x_4194_; 
v_a_4193_ = lean_ctor_get(v___x_4192_, 0);
lean_inc(v_a_4193_);
lean_dec_ref_known(v___x_4192_, 1);
v___x_4194_ = lean_string_validate_utf8(v_a_4193_);
if (v___x_4194_ == 0)
{
lean_object* v___x_4195_; lean_object* v___x_4196_; 
lean_dec(v_a_4193_);
v___x_4195_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_4196_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4195_);
v___y_4156_ = v_a_4179_;
v_received_4157_ = v___x_4196_;
goto v___jp_4155_;
}
else
{
lean_object* v___x_4197_; 
v___x_4197_ = lean_string_from_utf8_unchecked(v_a_4193_);
v___y_4156_ = v_a_4179_;
v_received_4157_ = v___x_4197_;
goto v___jp_4155_;
}
}
else
{
lean_object* v___x_4198_; 
lean_dec_ref_known(v___x_4192_, 1);
v___x_4198_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_4156_ = v_a_4179_;
v_received_4157_ = v___x_4198_;
goto v___jp_4155_;
}
}
}
}
}
else
{
v___y_4176_ = v_a_4179_;
goto v___jp_4175_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2___boxed(lean_object* v_context_4220_, lean_object* v_d_4221_, lean_object* v_a_4222_){
_start:
{
lean_object* v_res_4223_; 
v_res_4223_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2(v_context_4220_, v_d_4221_);
lean_dec_ref(v_context_4220_);
return v_res_4223_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0(lean_object* v_context_4224_, lean_object* v_x_4225_){
_start:
{
lean_object* v_val_4228_; 
if (lean_obj_tag(v_x_4225_) == 0)
{
lean_object* v_a_4230_; lean_object* v___x_4232_; uint8_t v_isShared_4233_; uint8_t v_isSharedCheck_4238_; 
v_a_4230_ = lean_ctor_get(v_x_4225_, 0);
v_isSharedCheck_4238_ = !lean_is_exclusive(v_x_4225_);
if (v_isSharedCheck_4238_ == 0)
{
v___x_4232_ = v_x_4225_;
v_isShared_4233_ = v_isSharedCheck_4238_;
goto v_resetjp_4231_;
}
else
{
lean_inc(v_a_4230_);
lean_dec(v_x_4225_);
v___x_4232_ = lean_box(0);
v_isShared_4233_ = v_isSharedCheck_4238_;
goto v_resetjp_4231_;
}
v_resetjp_4231_:
{
lean_object* v___x_4235_; 
if (v_isShared_4233_ == 0)
{
v___x_4235_ = v___x_4232_;
goto v_reusejp_4234_;
}
else
{
lean_object* v_reuseFailAlloc_4237_; 
v_reuseFailAlloc_4237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4237_, 0, v_a_4230_);
v___x_4235_ = v_reuseFailAlloc_4237_;
goto v_reusejp_4234_;
}
v_reusejp_4234_:
{
lean_object* v___x_4236_; 
v___x_4236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4235_);
return v___x_4236_;
}
}
}
else
{
lean_object* v_a_4239_; lean_object* v___x_4241_; uint8_t v_isShared_4242_; uint8_t v_isSharedCheck_4252_; 
v_a_4239_ = lean_ctor_get(v_x_4225_, 0);
v_isSharedCheck_4252_ = !lean_is_exclusive(v_x_4225_);
if (v_isSharedCheck_4252_ == 0)
{
v___x_4241_ = v_x_4225_;
v_isShared_4242_ = v_isSharedCheck_4252_;
goto v_resetjp_4240_;
}
else
{
lean_inc(v_a_4239_);
lean_dec(v_x_4225_);
v___x_4241_ = lean_box(0);
v_isShared_4242_ = v_isSharedCheck_4252_;
goto v_resetjp_4240_;
}
v_resetjp_4240_:
{
lean_object* v___x_4243_; 
v___x_4243_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2(v_context_4224_, v_a_4239_);
if (lean_obj_tag(v___x_4243_) == 0)
{
lean_object* v_a_4244_; lean_object* v___x_4246_; 
v_a_4244_ = lean_ctor_get(v___x_4243_, 0);
lean_inc(v_a_4244_);
lean_dec_ref_known(v___x_4243_, 1);
if (v_isShared_4242_ == 0)
{
lean_ctor_set(v___x_4241_, 0, v_a_4244_);
v___x_4246_ = v___x_4241_;
goto v_reusejp_4245_;
}
else
{
lean_object* v_reuseFailAlloc_4247_; 
v_reuseFailAlloc_4247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4247_, 0, v_a_4244_);
v___x_4246_ = v_reuseFailAlloc_4247_;
goto v_reusejp_4245_;
}
v_reusejp_4245_:
{
v_val_4228_ = v___x_4246_;
goto v___jp_4227_;
}
}
else
{
lean_object* v_a_4248_; lean_object* v___x_4250_; 
v_a_4248_ = lean_ctor_get(v___x_4243_, 0);
lean_inc(v_a_4248_);
lean_dec_ref_known(v___x_4243_, 1);
if (v_isShared_4242_ == 0)
{
lean_ctor_set_tag(v___x_4241_, 0);
lean_ctor_set(v___x_4241_, 0, v_a_4248_);
v___x_4250_ = v___x_4241_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v_a_4248_);
v___x_4250_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
v_val_4228_ = v___x_4250_;
goto v___jp_4227_;
}
}
}
}
v___jp_4227_:
{
lean_object* v___x_4229_; 
v___x_4229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4229_, 0, v_val_4228_);
return v___x_4229_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0___boxed(lean_object* v_context_4253_, lean_object* v_x_4254_, lean_object* v___y_4255_){
_start:
{
lean_object* v_res_4256_; 
v_res_4256_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0(v_context_4253_, v_x_4254_);
lean_dec_ref(v_context_4253_);
return v_res_4256_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1(lean_object* v___f_4257_, lean_object* v_bytes_4258_){
_start:
{
lean_object* v___x_4260_; uint8_t v___x_4261_; lean_object* v_val_4263_; lean_object* v___x_4266_; 
v___x_4260_ = lean_unsigned_to_nat(0u);
v___x_4261_ = 0;
v___x_4266_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4258_);
if (lean_obj_tag(v___x_4266_) == 0)
{
lean_object* v_a_4267_; lean_object* v___x_4269_; uint8_t v_isShared_4270_; uint8_t v_isSharedCheck_4274_; 
v_a_4267_ = lean_ctor_get(v___x_4266_, 0);
v_isSharedCheck_4274_ = !lean_is_exclusive(v___x_4266_);
if (v_isSharedCheck_4274_ == 0)
{
v___x_4269_ = v___x_4266_;
v_isShared_4270_ = v_isSharedCheck_4274_;
goto v_resetjp_4268_;
}
else
{
lean_inc(v_a_4267_);
lean_dec(v___x_4266_);
v___x_4269_ = lean_box(0);
v_isShared_4270_ = v_isSharedCheck_4274_;
goto v_resetjp_4268_;
}
v_resetjp_4268_:
{
lean_object* v___x_4272_; 
if (v_isShared_4270_ == 0)
{
lean_ctor_set_tag(v___x_4269_, 1);
v___x_4272_ = v___x_4269_;
goto v_reusejp_4271_;
}
else
{
lean_object* v_reuseFailAlloc_4273_; 
v_reuseFailAlloc_4273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4273_, 0, v_a_4267_);
v___x_4272_ = v_reuseFailAlloc_4273_;
goto v_reusejp_4271_;
}
v_reusejp_4271_:
{
v_val_4263_ = v___x_4272_;
goto v___jp_4262_;
}
}
}
else
{
lean_object* v_a_4275_; lean_object* v___x_4277_; uint8_t v_isShared_4278_; uint8_t v_isSharedCheck_4282_; 
v_a_4275_ = lean_ctor_get(v___x_4266_, 0);
v_isSharedCheck_4282_ = !lean_is_exclusive(v___x_4266_);
if (v_isSharedCheck_4282_ == 0)
{
v___x_4277_ = v___x_4266_;
v_isShared_4278_ = v_isSharedCheck_4282_;
goto v_resetjp_4276_;
}
else
{
lean_inc(v_a_4275_);
lean_dec(v___x_4266_);
v___x_4277_ = lean_box(0);
v_isShared_4278_ = v_isSharedCheck_4282_;
goto v_resetjp_4276_;
}
v_resetjp_4276_:
{
lean_object* v___x_4280_; 
if (v_isShared_4278_ == 0)
{
lean_ctor_set_tag(v___x_4277_, 0);
v___x_4280_ = v___x_4277_;
goto v_reusejp_4279_;
}
else
{
lean_object* v_reuseFailAlloc_4281_; 
v_reuseFailAlloc_4281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4281_, 0, v_a_4275_);
v___x_4280_ = v_reuseFailAlloc_4281_;
goto v_reusejp_4279_;
}
v_reusejp_4279_:
{
v_val_4263_ = v___x_4280_;
goto v___jp_4262_;
}
}
}
v___jp_4262_:
{
lean_object* v___x_4264_; lean_object* v___x_4265_; 
v___x_4264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4264_, 0, v_val_4263_);
v___x_4265_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4260_, v___x_4261_, v___x_4264_, v___f_4257_);
return v___x_4265_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1___boxed(lean_object* v___f_4283_, lean_object* v_bytes_4284_, lean_object* v___y_4285_){
_start:
{
lean_object* v_res_4286_; 
v_res_4286_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1(v___f_4283_, v_bytes_4284_);
lean_dec_ref(v_bytes_4284_);
return v_res_4286_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3(lean_object* v___f_4287_, lean_object* v_x_4288_){
_start:
{
if (lean_obj_tag(v_x_4288_) == 0)
{
lean_object* v_a_4290_; lean_object* v___x_4292_; uint8_t v_isShared_4293_; uint8_t v_isSharedCheck_4298_; 
lean_dec_ref(v___f_4287_);
v_a_4290_ = lean_ctor_get(v_x_4288_, 0);
v_isSharedCheck_4298_ = !lean_is_exclusive(v_x_4288_);
if (v_isSharedCheck_4298_ == 0)
{
v___x_4292_ = v_x_4288_;
v_isShared_4293_ = v_isSharedCheck_4298_;
goto v_resetjp_4291_;
}
else
{
lean_inc(v_a_4290_);
lean_dec(v_x_4288_);
v___x_4292_ = lean_box(0);
v_isShared_4293_ = v_isSharedCheck_4298_;
goto v_resetjp_4291_;
}
v_resetjp_4291_:
{
lean_object* v___x_4295_; 
if (v_isShared_4293_ == 0)
{
v___x_4295_ = v___x_4292_;
goto v_reusejp_4294_;
}
else
{
lean_object* v_reuseFailAlloc_4297_; 
v_reuseFailAlloc_4297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4297_, 0, v_a_4290_);
v___x_4295_ = v_reuseFailAlloc_4297_;
goto v_reusejp_4294_;
}
v_reusejp_4294_:
{
lean_object* v___x_4296_; 
v___x_4296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4296_, 0, v___x_4295_);
return v___x_4296_;
}
}
}
else
{
lean_object* v___x_4300_; uint8_t v_isShared_4301_; uint8_t v_isSharedCheck_4310_; 
v_isSharedCheck_4310_ = !lean_is_exclusive(v_x_4288_);
if (v_isSharedCheck_4310_ == 0)
{
lean_object* v_unused_4311_; 
v_unused_4311_ = lean_ctor_get(v_x_4288_, 0);
lean_dec(v_unused_4311_);
v___x_4300_ = v_x_4288_;
v_isShared_4301_ = v_isSharedCheck_4310_;
goto v_resetjp_4299_;
}
else
{
lean_dec(v_x_4288_);
v___x_4300_ = lean_box(0);
v_isShared_4301_ = v_isSharedCheck_4310_;
goto v_resetjp_4299_;
}
v_resetjp_4299_:
{
lean_object* v___x_4302_; uint8_t v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4306_; 
v___x_4302_ = lean_unsigned_to_nat(0u);
v___x_4303_ = 0;
v___x_4304_ = lean_io_promise_new();
if (v_isShared_4301_ == 0)
{
lean_ctor_set(v___x_4300_, 0, v___x_4304_);
v___x_4306_ = v___x_4300_;
goto v_reusejp_4305_;
}
else
{
lean_object* v_reuseFailAlloc_4309_; 
v_reuseFailAlloc_4309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4309_, 0, v___x_4304_);
v___x_4306_ = v_reuseFailAlloc_4309_;
goto v_reusejp_4305_;
}
v_reusejp_4305_:
{
lean_object* v___x_4307_; lean_object* v___x_4308_; 
v___x_4307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4307_, 0, v___x_4306_);
v___x_4308_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4302_, v___x_4303_, v___x_4307_, v___f_4287_);
return v___x_4308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3___boxed(lean_object* v___f_4312_, lean_object* v_x_4313_, lean_object* v___y_4314_){
_start:
{
lean_object* v_res_4315_; 
v_res_4315_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3(v___f_4312_, v_x_4313_);
return v_res_4315_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_4316_, uint32_t v_op_4317_, uint64_t v_flags_4318_, lean_object* v_payload_4319_, lean_object* v___f_4320_, lean_object* v___f_4321_, lean_object* v___f_4322_, lean_object* v_x_4323_){
_start:
{
if (lean_obj_tag(v_x_4323_) == 0)
{
lean_object* v_a_4325_; lean_object* v___x_4327_; uint8_t v_isShared_4328_; uint8_t v_isSharedCheck_4333_; 
lean_dec_ref(v___f_4322_);
lean_dec_ref(v___f_4321_);
lean_dec_ref(v___f_4320_);
lean_dec(v_payload_4319_);
v_a_4325_ = lean_ctor_get(v_x_4323_, 0);
v_isSharedCheck_4333_ = !lean_is_exclusive(v_x_4323_);
if (v_isSharedCheck_4333_ == 0)
{
v___x_4327_ = v_x_4323_;
v_isShared_4328_ = v_isSharedCheck_4333_;
goto v_resetjp_4326_;
}
else
{
lean_inc(v_a_4325_);
lean_dec(v_x_4323_);
v___x_4327_ = lean_box(0);
v_isShared_4328_ = v_isSharedCheck_4333_;
goto v_resetjp_4326_;
}
v_resetjp_4326_:
{
lean_object* v___x_4330_; 
if (v_isShared_4328_ == 0)
{
v___x_4330_ = v___x_4327_;
goto v_reusejp_4329_;
}
else
{
lean_object* v_reuseFailAlloc_4332_; 
v_reuseFailAlloc_4332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4332_, 0, v_a_4325_);
v___x_4330_ = v_reuseFailAlloc_4332_;
goto v_reusejp_4329_;
}
v_reusejp_4329_:
{
lean_object* v___x_4331_; 
v___x_4331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4331_, 0, v___x_4330_);
return v___x_4331_;
}
}
}
else
{
lean_object* v_a_4334_; lean_object* v___x_4336_; uint8_t v_isShared_4337_; uint8_t v_isSharedCheck_4380_; 
v_a_4334_ = lean_ctor_get(v_x_4323_, 0);
v_isSharedCheck_4380_ = !lean_is_exclusive(v_x_4323_);
if (v_isSharedCheck_4380_ == 0)
{
v___x_4336_ = v_x_4323_;
v_isShared_4337_ = v_isSharedCheck_4380_;
goto v_resetjp_4335_;
}
else
{
lean_inc(v_a_4334_);
lean_dec(v_x_4323_);
v___x_4336_ = lean_box(0);
v_isShared_4337_ = v_isSharedCheck_4380_;
goto v_resetjp_4335_;
}
v_resetjp_4335_:
{
lean_object* v___x_4338_; lean_object* v___x_4339_; uint8_t v___x_4340_; 
v___x_4338_ = lean_string_utf8_byte_size(v_failurePrefix_4316_);
v___x_4339_ = lean_unsigned_to_nat(0u);
v___x_4340_ = lean_nat_dec_eq(v___x_4338_, v___x_4339_);
if (v___x_4340_ == 0)
{
lean_object* v___f_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___f_4345_; lean_object* v_val_4347_; lean_object* v___x_4352_; 
lean_dec_ref(v___f_4322_);
lean_inc(v_a_4334_);
v___f_4341_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4341_, 0, v_a_4334_);
v___x_4342_ = lean_box(v___x_4340_);
v___x_4343_ = lean_box_uint32(v_op_4317_);
v___x_4344_ = lean_box_uint64(v_flags_4318_);
lean_inc(v_payload_4319_);
v___f_4345_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4345_, 0, v___x_4339_);
lean_closure_set(v___f_4345_, 1, v___x_4342_);
lean_closure_set(v___f_4345_, 2, v___f_4341_);
lean_closure_set(v___f_4345_, 3, v_a_4334_);
lean_closure_set(v___f_4345_, 4, v___x_4343_);
lean_closure_set(v___f_4345_, 5, v___x_4344_);
lean_closure_set(v___f_4345_, 6, v_payload_4319_);
v___x_4352_ = l_Lasm_JS_Wire_encodeIO(v_payload_4319_);
lean_dec(v_payload_4319_);
if (lean_obj_tag(v___x_4352_) == 0)
{
lean_object* v_a_4353_; lean_object* v___x_4355_; 
v_a_4353_ = lean_ctor_get(v___x_4352_, 0);
lean_inc(v_a_4353_);
lean_dec_ref_known(v___x_4352_, 1);
if (v_isShared_4337_ == 0)
{
lean_ctor_set(v___x_4336_, 0, v_a_4353_);
v___x_4355_ = v___x_4336_;
goto v_reusejp_4354_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v_a_4353_);
v___x_4355_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4354_;
}
v_reusejp_4354_:
{
v_val_4347_ = v___x_4355_;
goto v___jp_4346_;
}
}
else
{
lean_object* v_a_4357_; lean_object* v___x_4359_; 
v_a_4357_ = lean_ctor_get(v___x_4352_, 0);
lean_inc(v_a_4357_);
lean_dec_ref_known(v___x_4352_, 1);
if (v_isShared_4337_ == 0)
{
lean_ctor_set_tag(v___x_4336_, 0);
lean_ctor_set(v___x_4336_, 0, v_a_4357_);
v___x_4359_ = v___x_4336_;
goto v_reusejp_4358_;
}
else
{
lean_object* v_reuseFailAlloc_4360_; 
v_reuseFailAlloc_4360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4360_, 0, v_a_4357_);
v___x_4359_ = v_reuseFailAlloc_4360_;
goto v_reusejp_4358_;
}
v_reusejp_4358_:
{
v_val_4347_ = v___x_4359_;
goto v___jp_4346_;
}
}
v___jp_4346_:
{
lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; 
v___x_4348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4348_, 0, v_val_4347_);
v___x_4349_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4339_, v___x_4340_, v___x_4348_, v___f_4345_);
v___x_4350_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4339_, v___x_4340_, v___x_4349_, v___f_4320_);
v___x_4351_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4339_, v___x_4340_, v___x_4350_, v___f_4321_);
return v___x_4351_;
}
}
else
{
lean_object* v___f_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___f_4364_; uint8_t v___x_4365_; lean_object* v_val_4367_; lean_object* v___x_4371_; 
lean_dec_ref(v___f_4321_);
lean_dec_ref(v___f_4320_);
lean_inc(v_a_4334_);
v___f_4361_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4361_, 0, v_a_4334_);
v___x_4362_ = lean_box_uint32(v_op_4317_);
v___x_4363_ = lean_box_uint64(v_flags_4318_);
lean_inc(v_payload_4319_);
v___f_4364_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4364_, 0, v___f_4361_);
lean_closure_set(v___f_4364_, 1, v_a_4334_);
lean_closure_set(v___f_4364_, 2, v___x_4362_);
lean_closure_set(v___f_4364_, 3, v___x_4363_);
lean_closure_set(v___f_4364_, 4, v_payload_4319_);
v___x_4365_ = 0;
v___x_4371_ = l_Lasm_JS_Wire_encodeIO(v_payload_4319_);
lean_dec(v_payload_4319_);
if (lean_obj_tag(v___x_4371_) == 0)
{
lean_object* v_a_4372_; lean_object* v___x_4374_; 
v_a_4372_ = lean_ctor_get(v___x_4371_, 0);
lean_inc(v_a_4372_);
lean_dec_ref_known(v___x_4371_, 1);
if (v_isShared_4337_ == 0)
{
lean_ctor_set(v___x_4336_, 0, v_a_4372_);
v___x_4374_ = v___x_4336_;
goto v_reusejp_4373_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v_a_4372_);
v___x_4374_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4373_;
}
v_reusejp_4373_:
{
v_val_4367_ = v___x_4374_;
goto v___jp_4366_;
}
}
else
{
lean_object* v_a_4376_; lean_object* v___x_4378_; 
v_a_4376_ = lean_ctor_get(v___x_4371_, 0);
lean_inc(v_a_4376_);
lean_dec_ref_known(v___x_4371_, 1);
if (v_isShared_4337_ == 0)
{
lean_ctor_set_tag(v___x_4336_, 0);
lean_ctor_set(v___x_4336_, 0, v_a_4376_);
v___x_4378_ = v___x_4336_;
goto v_reusejp_4377_;
}
else
{
lean_object* v_reuseFailAlloc_4379_; 
v_reuseFailAlloc_4379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4379_, 0, v_a_4376_);
v___x_4378_ = v_reuseFailAlloc_4379_;
goto v_reusejp_4377_;
}
v_reusejp_4377_:
{
v_val_4367_ = v___x_4378_;
goto v___jp_4366_;
}
}
v___jp_4366_:
{
lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; 
v___x_4368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4368_, 0, v_val_4367_);
v___x_4369_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4339_, v___x_4365_, v___x_4368_, v___f_4364_);
v___x_4370_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4339_, v___x_4365_, v___x_4369_, v___f_4322_);
return v___x_4370_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_4381_, lean_object* v_op_4382_, lean_object* v_flags_4383_, lean_object* v_payload_4384_, lean_object* v___f_4385_, lean_object* v___f_4386_, lean_object* v___f_4387_, lean_object* v_x_4388_, lean_object* v___y_4389_){
_start:
{
uint32_t v_op_boxed_4390_; uint64_t v_flags_boxed_4391_; lean_object* v_res_4392_; 
v_op_boxed_4390_ = lean_unbox_uint32(v_op_4382_);
lean_dec(v_op_4382_);
v_flags_boxed_4391_ = lean_unbox_uint64(v_flags_4383_);
lean_dec_ref(v_flags_4383_);
v_res_4392_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9(v_failurePrefix_4381_, v_op_boxed_4390_, v_flags_boxed_4391_, v_payload_4384_, v___f_4385_, v___f_4386_, v___f_4387_, v_x_4388_);
lean_dec_ref(v_failurePrefix_4381_);
return v_res_4392_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1(lean_object* v_context_4393_, uint32_t v_op_4394_, uint64_t v_flags_4395_, lean_object* v_payload_4396_, lean_object* v_failurePrefix_4397_){
_start:
{
lean_object* v___f_4399_; lean_object* v___f_4400_; lean_object* v___f_4401_; lean_object* v___f_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___f_4405_; lean_object* v___f_4406_; lean_object* v___x_4407_; uint8_t v___x_4408_; lean_object* v_val_4410_; lean_object* v___x_4413_; 
v___f_4399_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4399_, 0, v_context_4393_);
v___f_4400_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4400_, 0, v___f_4399_);
v___f_4401_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4401_, 0, v___f_4400_);
lean_inc_ref(v_failurePrefix_4397_);
v___f_4402_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4402_, 0, v_failurePrefix_4397_);
v___x_4403_ = lean_box_uint32(v_op_4394_);
v___x_4404_ = lean_box_uint64(v_flags_4395_);
lean_inc_ref(v___f_4401_);
v___f_4405_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4405_, 0, v_failurePrefix_4397_);
lean_closure_set(v___f_4405_, 1, v___x_4403_);
lean_closure_set(v___f_4405_, 2, v___x_4404_);
lean_closure_set(v___f_4405_, 3, v_payload_4396_);
lean_closure_set(v___f_4405_, 4, v___f_4402_);
lean_closure_set(v___f_4405_, 5, v___f_4401_);
lean_closure_set(v___f_4405_, 6, v___f_4401_);
v___f_4406_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4406_, 0, v___f_4405_);
v___x_4407_ = lean_unsigned_to_nat(0u);
v___x_4408_ = 0;
v___x_4413_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4413_) == 0)
{
lean_object* v_a_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4421_; 
v_a_4414_ = lean_ctor_get(v___x_4413_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v___x_4413_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4416_ = v___x_4413_;
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_a_4414_);
lean_dec(v___x_4413_);
v___x_4416_ = lean_box(0);
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
v_resetjp_4415_:
{
lean_object* v___x_4419_; 
if (v_isShared_4417_ == 0)
{
lean_ctor_set_tag(v___x_4416_, 1);
v___x_4419_ = v___x_4416_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v_a_4414_);
v___x_4419_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
v_val_4410_ = v___x_4419_;
goto v___jp_4409_;
}
}
}
else
{
lean_object* v_a_4422_; lean_object* v___x_4424_; uint8_t v_isShared_4425_; uint8_t v_isSharedCheck_4429_; 
v_a_4422_ = lean_ctor_get(v___x_4413_, 0);
v_isSharedCheck_4429_ = !lean_is_exclusive(v___x_4413_);
if (v_isSharedCheck_4429_ == 0)
{
v___x_4424_ = v___x_4413_;
v_isShared_4425_ = v_isSharedCheck_4429_;
goto v_resetjp_4423_;
}
else
{
lean_inc(v_a_4422_);
lean_dec(v___x_4413_);
v___x_4424_ = lean_box(0);
v_isShared_4425_ = v_isSharedCheck_4429_;
goto v_resetjp_4423_;
}
v_resetjp_4423_:
{
lean_object* v___x_4427_; 
if (v_isShared_4425_ == 0)
{
lean_ctor_set_tag(v___x_4424_, 0);
v___x_4427_ = v___x_4424_;
goto v_reusejp_4426_;
}
else
{
lean_object* v_reuseFailAlloc_4428_; 
v_reuseFailAlloc_4428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4428_, 0, v_a_4422_);
v___x_4427_ = v_reuseFailAlloc_4428_;
goto v_reusejp_4426_;
}
v_reusejp_4426_:
{
v_val_4410_ = v___x_4427_;
goto v___jp_4409_;
}
}
}
v___jp_4409_:
{
lean_object* v___x_4411_; lean_object* v___x_4412_; 
v___x_4411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4411_, 0, v_val_4410_);
v___x_4412_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4407_, v___x_4408_, v___x_4411_, v___f_4406_);
return v___x_4412_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___boxed(lean_object* v_context_4430_, lean_object* v_op_4431_, lean_object* v_flags_4432_, lean_object* v_payload_4433_, lean_object* v_failurePrefix_4434_, lean_object* v_a_4435_){
_start:
{
uint32_t v_op_boxed_4436_; uint64_t v_flags_boxed_4437_; lean_object* v_res_4438_; 
v_op_boxed_4436_ = lean_unbox_uint32(v_op_4431_);
lean_dec(v_op_4431_);
v_flags_boxed_4437_ = lean_unbox_uint64(v_flags_4432_);
lean_dec_ref(v_flags_4432_);
v_res_4438_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1(v_context_4430_, v_op_boxed_4436_, v_flags_boxed_4437_, v_payload_4433_, v_failurePrefix_4434_);
return v_res_4438_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4439_; uint8_t v___x_4440_; uint64_t v___x_4441_; 
v___x_4439_ = 8ULL;
v___x_4440_ = 0;
v___x_4441_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0(v___x_4440_, v___x_4439_);
return v___x_4441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0(lean_object* v_o_4442_, lean_object* v_name_4443_, lean_object* v_args_4444_){
_start:
{
lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; uint32_t v___x_4451_; uint64_t v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; 
v___x_4446_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4447_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4447_, 0, v_o_4442_);
lean_ctor_set(v___x_4447_, 1, v___x_4446_);
lean_inc_ref(v_name_4443_);
v___x_4448_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4448_, 0, v_name_4443_);
v___x_4449_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_4450_ = lean_string_append(v___x_4449_, v_name_4443_);
lean_dec_ref(v_name_4443_);
v___x_4451_ = 205;
v___x_4452_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0);
v___x_4453_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4453_, 0, v_args_4444_);
v___x_4454_ = lean_unsigned_to_nat(3u);
v___x_4455_ = lean_mk_empty_array_with_capacity(v___x_4454_);
v___x_4456_ = lean_array_push(v___x_4455_, v___x_4447_);
v___x_4457_ = lean_array_push(v___x_4456_, v___x_4448_);
v___x_4458_ = lean_array_push(v___x_4457_, v___x_4453_);
v___x_4459_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4459_, 0, v___x_4458_);
v___x_4460_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1(v___x_4450_, v___x_4451_, v___x_4452_, v___x_4459_, v___x_4446_);
return v___x_4460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___boxed(lean_object* v_o_4461_, lean_object* v_name_4462_, lean_object* v_args_4463_, lean_object* v___y_4464_){
_start:
{
lean_object* v_res_4465_; 
v_res_4465_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0(v_o_4461_, v_name_4462_, v_args_4463_);
return v_res_4465_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_AtomicOperation_commit___closed__1(void){
_start:
{
lean_object* v___x_4467_; lean_object* v___x_4468_; 
v___x_4467_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v___x_4468_ = l_Lasm_JS_Web_Support_args(v___x_4467_);
return v___x_4468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_commit(lean_object* v_self_4469_){
_start:
{
lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
v___x_4471_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_commit___closed__0));
v___x_4472_ = lean_obj_once(&l_Lasm_JS_Deno_AtomicOperation_commit___closed__1, &l_Lasm_JS_Deno_AtomicOperation_commit___closed__1_once, _init_l_Lasm_JS_Deno_AtomicOperation_commit___closed__1);
v___x_4473_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0(v_self_4469_, v___x_4471_, v___x_4472_);
return v___x_4473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_commit___boxed(lean_object* v_self_4474_, lean_object* v_a_4475_){
_start:
{
lean_object* v_res_4476_; 
v_res_4476_ = l_Lasm_JS_Deno_AtomicOperation_commit(v_self_4474_);
return v_res_4476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4(lean_object* v_context_4477_, lean_object* v_d_4478_){
_start:
{
lean_object* v___y_4481_; lean_object* v___y_4482_; lean_object* v___y_4487_; lean_object* v_received_4488_; lean_object* v___y_4507_; lean_object* v_a_4510_; lean_object* v___x_4534_; lean_object* v___x_4535_; 
v___x_4534_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
lean_inc(v_d_4478_);
v___x_4535_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_4478_, v___x_4534_);
if (lean_obj_tag(v___x_4535_) == 0)
{
lean_object* v_a_4536_; 
v_a_4536_ = lean_ctor_get(v___x_4535_, 0);
lean_inc(v_a_4536_);
lean_dec_ref_known(v___x_4535_, 1);
v_a_4510_ = v_a_4536_;
goto v___jp_4509_;
}
else
{
lean_object* v_a_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; 
v_a_4537_ = lean_ctor_get(v___x_4535_, 0);
lean_inc(v_a_4537_);
lean_dec_ref_known(v___x_4535_, 1);
v___x_4538_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
lean_inc(v_d_4478_);
v___x_4539_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_4478_, v___x_4538_);
if (lean_obj_tag(v___x_4539_) == 0)
{
lean_object* v_a_4540_; 
lean_dec(v_a_4537_);
v_a_4540_ = lean_ctor_get(v___x_4539_, 0);
lean_inc(v_a_4540_);
lean_dec_ref_known(v___x_4539_, 1);
v_a_4510_ = v_a_4540_;
goto v___jp_4509_;
}
else
{
lean_object* v_a_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; 
v_a_4541_ = lean_ctor_get(v___x_4539_, 0);
lean_inc(v_a_4541_);
lean_dec_ref_known(v___x_4539_, 1);
v___x_4542_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_d_4478_);
v___x_4543_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(v_d_4478_, v___x_4542_);
if (lean_obj_tag(v___x_4543_) == 0)
{
lean_object* v_a_4544_; 
lean_dec(v_a_4541_);
lean_dec(v_a_4537_);
v_a_4544_ = lean_ctor_get(v___x_4543_, 0);
lean_inc(v_a_4544_);
lean_dec_ref_known(v___x_4543_, 1);
v_a_4510_ = v_a_4544_;
goto v___jp_4509_;
}
else
{
lean_object* v_a_4545_; lean_object* v___x_4547_; uint8_t v_isShared_4548_; uint8_t v_isSharedCheck_4553_; 
lean_dec(v_d_4478_);
v_a_4545_ = lean_ctor_get(v___x_4543_, 0);
v_isSharedCheck_4553_ = !lean_is_exclusive(v___x_4543_);
if (v_isSharedCheck_4553_ == 0)
{
v___x_4547_ = v___x_4543_;
v_isShared_4548_ = v_isSharedCheck_4553_;
goto v_resetjp_4546_;
}
else
{
lean_inc(v_a_4545_);
lean_dec(v___x_4543_);
v___x_4547_ = lean_box(0);
v_isShared_4548_ = v_isSharedCheck_4553_;
goto v_resetjp_4546_;
}
v_resetjp_4546_:
{
lean_object* v___x_4549_; lean_object* v___x_4551_; 
v___x_4549_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4549_, 0, v_a_4537_);
lean_ctor_set(v___x_4549_, 1, v_a_4541_);
lean_ctor_set(v___x_4549_, 2, v_a_4545_);
if (v_isShared_4548_ == 0)
{
lean_ctor_set_tag(v___x_4547_, 0);
lean_ctor_set(v___x_4547_, 0, v___x_4549_);
v___x_4551_ = v___x_4547_;
goto v_reusejp_4550_;
}
else
{
lean_object* v_reuseFailAlloc_4552_; 
v_reuseFailAlloc_4552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4552_, 0, v___x_4549_);
v___x_4551_ = v_reuseFailAlloc_4552_;
goto v_reusejp_4550_;
}
v_reusejp_4550_:
{
return v___x_4551_;
}
}
}
}
}
v___jp_4480_:
{
lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; 
v___x_4483_ = lean_string_append(v___y_4481_, v___y_4482_);
lean_dec_ref(v___y_4482_);
v___x_4484_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4484_, 0, v___x_4483_);
v___x_4485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4485_, 0, v___x_4484_);
return v___x_4485_;
}
v___jp_4486_:
{
lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; uint8_t v___x_4500_; 
v___x_4489_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_4490_ = lean_string_append(v___x_4489_, v_context_4477_);
v___x_4491_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_4492_ = lean_string_append(v___x_4490_, v___x_4491_);
v___x_4493_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__1));
v___x_4494_ = lean_string_append(v___x_4492_, v___x_4493_);
v___x_4495_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_4496_ = lean_string_append(v___x_4494_, v___x_4495_);
v___x_4497_ = lean_string_append(v___x_4496_, v_received_4488_);
lean_dec_ref(v_received_4488_);
v___x_4498_ = lean_string_utf8_byte_size(v___y_4487_);
v___x_4499_ = lean_unsigned_to_nat(0u);
v___x_4500_ = lean_nat_dec_eq(v___x_4498_, v___x_4499_);
if (v___x_4500_ == 0)
{
lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; 
v___x_4501_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_4502_ = lean_string_append(v___x_4501_, v___y_4487_);
lean_dec_ref(v___y_4487_);
v___x_4503_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4504_ = lean_string_append(v___x_4502_, v___x_4503_);
v___y_4481_ = v___x_4497_;
v___y_4482_ = v___x_4504_;
goto v___jp_4480_;
}
else
{
lean_object* v___x_4505_; 
lean_dec_ref(v___y_4487_);
v___x_4505_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_4481_ = v___x_4497_;
v___y_4482_ = v___x_4505_;
goto v___jp_4480_;
}
}
v___jp_4506_:
{
lean_object* v___x_4508_; 
v___x_4508_ = l_Lasm_JS_Data_describe(v_d_4478_);
v___y_4487_ = v___y_4507_;
v_received_4488_ = v___x_4508_;
goto v___jp_4486_;
}
v___jp_4509_:
{
if (lean_obj_tag(v_d_4478_) == 9)
{
lean_object* v_value_4511_; lean_object* v_description_4512_; lean_object* v___x_4513_; uint8_t v___x_4514_; 
v_value_4511_ = lean_ctor_get(v_d_4478_, 0);
v_description_4512_ = lean_ctor_get(v_d_4478_, 1);
v___x_4513_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4514_ = lean_string_dec_eq(v_description_4512_, v___x_4513_);
if (v___x_4514_ == 0)
{
v___y_4507_ = v_a_4510_;
goto v___jp_4506_;
}
else
{
lean_object* v___x_4516_; uint8_t v_isShared_4517_; uint8_t v_isSharedCheck_4531_; 
lean_inc(v_value_4511_);
v_isSharedCheck_4531_ = !lean_is_exclusive(v_d_4478_);
if (v_isSharedCheck_4531_ == 0)
{
lean_object* v_unused_4532_; lean_object* v_unused_4533_; 
v_unused_4532_ = lean_ctor_get(v_d_4478_, 1);
lean_dec(v_unused_4532_);
v_unused_4533_ = lean_ctor_get(v_d_4478_, 0);
lean_dec(v_unused_4533_);
v___x_4516_ = v_d_4478_;
v_isShared_4517_ = v_isSharedCheck_4531_;
goto v_resetjp_4515_;
}
else
{
lean_dec(v_d_4478_);
v___x_4516_ = lean_box(0);
v_isShared_4517_ = v_isSharedCheck_4531_;
goto v_resetjp_4515_;
}
v_resetjp_4515_:
{
uint32_t v___x_4518_; uint64_t v___x_4519_; lean_object* v___x_4521_; 
v___x_4518_ = 206;
v___x_4519_ = 0ULL;
lean_inc(v_value_4511_);
if (v_isShared_4517_ == 0)
{
lean_ctor_set(v___x_4516_, 1, v___x_4513_);
v___x_4521_ = v___x_4516_;
goto v_reusejp_4520_;
}
else
{
lean_object* v_reuseFailAlloc_4530_; 
v_reuseFailAlloc_4530_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4530_, 0, v_value_4511_);
lean_ctor_set(v_reuseFailAlloc_4530_, 1, v___x_4513_);
v___x_4521_ = v_reuseFailAlloc_4530_;
goto v_reusejp_4520_;
}
v_reusejp_4520_:
{
uint32_t v___x_4522_; lean_object* v___x_4523_; 
v___x_4522_ = lasm_js_value_handle(v_value_4511_);
lean_dec(v_value_4511_);
v___x_4523_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4518_, v___x_4519_, v___x_4521_, v___x_4522_);
lean_dec_ref(v___x_4521_);
if (lean_obj_tag(v___x_4523_) == 0)
{
lean_object* v_a_4524_; uint8_t v___x_4525_; 
v_a_4524_ = lean_ctor_get(v___x_4523_, 0);
lean_inc(v_a_4524_);
lean_dec_ref_known(v___x_4523_, 1);
v___x_4525_ = lean_string_validate_utf8(v_a_4524_);
if (v___x_4525_ == 0)
{
lean_object* v___x_4526_; lean_object* v___x_4527_; 
lean_dec(v_a_4524_);
v___x_4526_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_4527_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4526_);
v___y_4487_ = v_a_4510_;
v_received_4488_ = v___x_4527_;
goto v___jp_4486_;
}
else
{
lean_object* v___x_4528_; 
v___x_4528_ = lean_string_from_utf8_unchecked(v_a_4524_);
v___y_4487_ = v_a_4510_;
v_received_4488_ = v___x_4528_;
goto v___jp_4486_;
}
}
else
{
lean_object* v___x_4529_; 
lean_dec_ref_known(v___x_4523_, 1);
v___x_4529_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_4487_ = v_a_4510_;
v_received_4488_ = v___x_4529_;
goto v___jp_4486_;
}
}
}
}
}
else
{
v___y_4507_ = v_a_4510_;
goto v___jp_4506_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4___boxed(lean_object* v_context_4554_, lean_object* v_d_4555_, lean_object* v_a_4556_){
_start:
{
lean_object* v_res_4557_; 
v_res_4557_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4(v_context_4554_, v_d_4555_);
lean_dec_ref(v_context_4554_);
return v_res_4557_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0(lean_object* v_context_4558_, lean_object* v_x_4559_){
_start:
{
lean_object* v_val_4562_; 
if (lean_obj_tag(v_x_4559_) == 0)
{
lean_object* v_a_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4572_; 
v_a_4564_ = lean_ctor_get(v_x_4559_, 0);
v_isSharedCheck_4572_ = !lean_is_exclusive(v_x_4559_);
if (v_isSharedCheck_4572_ == 0)
{
v___x_4566_ = v_x_4559_;
v_isShared_4567_ = v_isSharedCheck_4572_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_a_4564_);
lean_dec(v_x_4559_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4572_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v___x_4569_; 
if (v_isShared_4567_ == 0)
{
v___x_4569_ = v___x_4566_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4571_; 
v_reuseFailAlloc_4571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4571_, 0, v_a_4564_);
v___x_4569_ = v_reuseFailAlloc_4571_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
lean_object* v___x_4570_; 
v___x_4570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4570_, 0, v___x_4569_);
return v___x_4570_;
}
}
}
else
{
lean_object* v_a_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4586_; 
v_a_4573_ = lean_ctor_get(v_x_4559_, 0);
v_isSharedCheck_4586_ = !lean_is_exclusive(v_x_4559_);
if (v_isSharedCheck_4586_ == 0)
{
v___x_4575_ = v_x_4559_;
v_isShared_4576_ = v_isSharedCheck_4586_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_a_4573_);
lean_dec(v_x_4559_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4586_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
lean_object* v___x_4577_; 
v___x_4577_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4(v_context_4558_, v_a_4573_);
if (lean_obj_tag(v___x_4577_) == 0)
{
lean_object* v_a_4578_; lean_object* v___x_4580_; 
v_a_4578_ = lean_ctor_get(v___x_4577_, 0);
lean_inc(v_a_4578_);
lean_dec_ref_known(v___x_4577_, 1);
if (v_isShared_4576_ == 0)
{
lean_ctor_set(v___x_4575_, 0, v_a_4578_);
v___x_4580_ = v___x_4575_;
goto v_reusejp_4579_;
}
else
{
lean_object* v_reuseFailAlloc_4581_; 
v_reuseFailAlloc_4581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4581_, 0, v_a_4578_);
v___x_4580_ = v_reuseFailAlloc_4581_;
goto v_reusejp_4579_;
}
v_reusejp_4579_:
{
v_val_4562_ = v___x_4580_;
goto v___jp_4561_;
}
}
else
{
lean_object* v_a_4582_; lean_object* v___x_4584_; 
v_a_4582_ = lean_ctor_get(v___x_4577_, 0);
lean_inc(v_a_4582_);
lean_dec_ref_known(v___x_4577_, 1);
if (v_isShared_4576_ == 0)
{
lean_ctor_set_tag(v___x_4575_, 0);
lean_ctor_set(v___x_4575_, 0, v_a_4582_);
v___x_4584_ = v___x_4575_;
goto v_reusejp_4583_;
}
else
{
lean_object* v_reuseFailAlloc_4585_; 
v_reuseFailAlloc_4585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4585_, 0, v_a_4582_);
v___x_4584_ = v_reuseFailAlloc_4585_;
goto v_reusejp_4583_;
}
v_reusejp_4583_:
{
v_val_4562_ = v___x_4584_;
goto v___jp_4561_;
}
}
}
}
v___jp_4561_:
{
lean_object* v___x_4563_; 
v___x_4563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4563_, 0, v_val_4562_);
return v___x_4563_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0___boxed(lean_object* v_context_4587_, lean_object* v_x_4588_, lean_object* v___y_4589_){
_start:
{
lean_object* v_res_4590_; 
v_res_4590_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0(v_context_4587_, v_x_4588_);
lean_dec_ref(v_context_4587_);
return v_res_4590_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3(lean_object* v___f_4591_, lean_object* v_x_4592_){
_start:
{
if (lean_obj_tag(v_x_4592_) == 0)
{
lean_object* v_a_4594_; lean_object* v___x_4596_; uint8_t v_isShared_4597_; uint8_t v_isSharedCheck_4602_; 
lean_dec_ref(v___f_4591_);
v_a_4594_ = lean_ctor_get(v_x_4592_, 0);
v_isSharedCheck_4602_ = !lean_is_exclusive(v_x_4592_);
if (v_isSharedCheck_4602_ == 0)
{
v___x_4596_ = v_x_4592_;
v_isShared_4597_ = v_isSharedCheck_4602_;
goto v_resetjp_4595_;
}
else
{
lean_inc(v_a_4594_);
lean_dec(v_x_4592_);
v___x_4596_ = lean_box(0);
v_isShared_4597_ = v_isSharedCheck_4602_;
goto v_resetjp_4595_;
}
v_resetjp_4595_:
{
lean_object* v___x_4599_; 
if (v_isShared_4597_ == 0)
{
v___x_4599_ = v___x_4596_;
goto v_reusejp_4598_;
}
else
{
lean_object* v_reuseFailAlloc_4601_; 
v_reuseFailAlloc_4601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4601_, 0, v_a_4594_);
v___x_4599_ = v_reuseFailAlloc_4601_;
goto v_reusejp_4598_;
}
v_reusejp_4598_:
{
lean_object* v___x_4600_; 
v___x_4600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4600_, 0, v___x_4599_);
return v___x_4600_;
}
}
}
else
{
lean_object* v___x_4604_; uint8_t v_isShared_4605_; uint8_t v_isSharedCheck_4614_; 
v_isSharedCheck_4614_ = !lean_is_exclusive(v_x_4592_);
if (v_isSharedCheck_4614_ == 0)
{
lean_object* v_unused_4615_; 
v_unused_4615_ = lean_ctor_get(v_x_4592_, 0);
lean_dec(v_unused_4615_);
v___x_4604_ = v_x_4592_;
v_isShared_4605_ = v_isSharedCheck_4614_;
goto v_resetjp_4603_;
}
else
{
lean_dec(v_x_4592_);
v___x_4604_ = lean_box(0);
v_isShared_4605_ = v_isSharedCheck_4614_;
goto v_resetjp_4603_;
}
v_resetjp_4603_:
{
lean_object* v___x_4606_; uint8_t v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4610_; 
v___x_4606_ = lean_unsigned_to_nat(0u);
v___x_4607_ = 0;
v___x_4608_ = lean_io_promise_new();
if (v_isShared_4605_ == 0)
{
lean_ctor_set(v___x_4604_, 0, v___x_4608_);
v___x_4610_ = v___x_4604_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4613_; 
v_reuseFailAlloc_4613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4613_, 0, v___x_4608_);
v___x_4610_ = v_reuseFailAlloc_4613_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
lean_object* v___x_4611_; lean_object* v___x_4612_; 
v___x_4611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4611_, 0, v___x_4610_);
v___x_4612_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4606_, v___x_4607_, v___x_4611_, v___f_4591_);
return v___x_4612_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3___boxed(lean_object* v___f_4616_, lean_object* v_x_4617_, lean_object* v___y_4618_){
_start:
{
lean_object* v_res_4619_; 
v_res_4619_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3(v___f_4616_, v_x_4617_);
return v_res_4619_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2(lean_object* v___f_4620_, lean_object* v_x_4621_){
_start:
{
if (lean_obj_tag(v_x_4621_) == 0)
{
lean_object* v_a_4623_; lean_object* v___x_4625_; uint8_t v_isShared_4626_; uint8_t v_isSharedCheck_4631_; 
lean_dec_ref(v___f_4620_);
v_a_4623_ = lean_ctor_get(v_x_4621_, 0);
v_isSharedCheck_4631_ = !lean_is_exclusive(v_x_4621_);
if (v_isSharedCheck_4631_ == 0)
{
v___x_4625_ = v_x_4621_;
v_isShared_4626_ = v_isSharedCheck_4631_;
goto v_resetjp_4624_;
}
else
{
lean_inc(v_a_4623_);
lean_dec(v_x_4621_);
v___x_4625_ = lean_box(0);
v_isShared_4626_ = v_isSharedCheck_4631_;
goto v_resetjp_4624_;
}
v_resetjp_4624_:
{
lean_object* v___x_4628_; 
if (v_isShared_4626_ == 0)
{
v___x_4628_ = v___x_4625_;
goto v_reusejp_4627_;
}
else
{
lean_object* v_reuseFailAlloc_4630_; 
v_reuseFailAlloc_4630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4630_, 0, v_a_4623_);
v___x_4628_ = v_reuseFailAlloc_4630_;
goto v_reusejp_4627_;
}
v_reusejp_4627_:
{
lean_object* v___x_4629_; 
v___x_4629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4629_, 0, v___x_4628_);
return v___x_4629_;
}
}
}
else
{
lean_object* v_a_4632_; lean_object* v___x_4633_; 
v_a_4632_ = lean_ctor_get(v_x_4621_, 0);
lean_inc(v_a_4632_);
lean_dec_ref_known(v_x_4621_, 1);
v___x_4633_ = lean_apply_2(v___f_4620_, v_a_4632_, lean_box(0));
return v___x_4633_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2___boxed(lean_object* v___f_4634_, lean_object* v_x_4635_, lean_object* v___y_4636_){
_start:
{
lean_object* v_res_4637_; 
v_res_4637_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2(v___f_4634_, v_x_4635_);
return v_res_4637_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1(lean_object* v___f_4638_, lean_object* v_bytes_4639_){
_start:
{
lean_object* v___x_4641_; uint8_t v___x_4642_; lean_object* v_val_4644_; lean_object* v___x_4647_; 
v___x_4641_ = lean_unsigned_to_nat(0u);
v___x_4642_ = 0;
v___x_4647_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4639_);
if (lean_obj_tag(v___x_4647_) == 0)
{
lean_object* v_a_4648_; lean_object* v___x_4650_; uint8_t v_isShared_4651_; uint8_t v_isSharedCheck_4655_; 
v_a_4648_ = lean_ctor_get(v___x_4647_, 0);
v_isSharedCheck_4655_ = !lean_is_exclusive(v___x_4647_);
if (v_isSharedCheck_4655_ == 0)
{
v___x_4650_ = v___x_4647_;
v_isShared_4651_ = v_isSharedCheck_4655_;
goto v_resetjp_4649_;
}
else
{
lean_inc(v_a_4648_);
lean_dec(v___x_4647_);
v___x_4650_ = lean_box(0);
v_isShared_4651_ = v_isSharedCheck_4655_;
goto v_resetjp_4649_;
}
v_resetjp_4649_:
{
lean_object* v___x_4653_; 
if (v_isShared_4651_ == 0)
{
lean_ctor_set_tag(v___x_4650_, 1);
v___x_4653_ = v___x_4650_;
goto v_reusejp_4652_;
}
else
{
lean_object* v_reuseFailAlloc_4654_; 
v_reuseFailAlloc_4654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4654_, 0, v_a_4648_);
v___x_4653_ = v_reuseFailAlloc_4654_;
goto v_reusejp_4652_;
}
v_reusejp_4652_:
{
v_val_4644_ = v___x_4653_;
goto v___jp_4643_;
}
}
}
else
{
lean_object* v_a_4656_; lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4663_; 
v_a_4656_ = lean_ctor_get(v___x_4647_, 0);
v_isSharedCheck_4663_ = !lean_is_exclusive(v___x_4647_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4658_ = v___x_4647_;
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
else
{
lean_inc(v_a_4656_);
lean_dec(v___x_4647_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v___x_4661_; 
if (v_isShared_4659_ == 0)
{
lean_ctor_set_tag(v___x_4658_, 0);
v___x_4661_ = v___x_4658_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v_a_4656_);
v___x_4661_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
v_val_4644_ = v___x_4661_;
goto v___jp_4643_;
}
}
}
v___jp_4643_:
{
lean_object* v___x_4645_; lean_object* v___x_4646_; 
v___x_4645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4645_, 0, v_val_4644_);
v___x_4646_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4641_, v___x_4642_, v___x_4645_, v___f_4638_);
return v___x_4646_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1___boxed(lean_object* v___f_4664_, lean_object* v_bytes_4665_, lean_object* v___y_4666_){
_start:
{
lean_object* v_res_4667_; 
v_res_4667_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1(v___f_4664_, v_bytes_4665_);
lean_dec_ref(v_bytes_4665_);
return v_res_4667_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9(lean_object* v_failurePrefix_4668_, uint32_t v_op_4669_, uint64_t v_flags_4670_, lean_object* v_payload_4671_, lean_object* v___f_4672_, lean_object* v___f_4673_, lean_object* v___f_4674_, lean_object* v_x_4675_){
_start:
{
if (lean_obj_tag(v_x_4675_) == 0)
{
lean_object* v_a_4677_; lean_object* v___x_4679_; uint8_t v_isShared_4680_; uint8_t v_isSharedCheck_4685_; 
lean_dec_ref(v___f_4674_);
lean_dec_ref(v___f_4673_);
lean_dec_ref(v___f_4672_);
lean_dec(v_payload_4671_);
v_a_4677_ = lean_ctor_get(v_x_4675_, 0);
v_isSharedCheck_4685_ = !lean_is_exclusive(v_x_4675_);
if (v_isSharedCheck_4685_ == 0)
{
v___x_4679_ = v_x_4675_;
v_isShared_4680_ = v_isSharedCheck_4685_;
goto v_resetjp_4678_;
}
else
{
lean_inc(v_a_4677_);
lean_dec(v_x_4675_);
v___x_4679_ = lean_box(0);
v_isShared_4680_ = v_isSharedCheck_4685_;
goto v_resetjp_4678_;
}
v_resetjp_4678_:
{
lean_object* v___x_4682_; 
if (v_isShared_4680_ == 0)
{
v___x_4682_ = v___x_4679_;
goto v_reusejp_4681_;
}
else
{
lean_object* v_reuseFailAlloc_4684_; 
v_reuseFailAlloc_4684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4684_, 0, v_a_4677_);
v___x_4682_ = v_reuseFailAlloc_4684_;
goto v_reusejp_4681_;
}
v_reusejp_4681_:
{
lean_object* v___x_4683_; 
v___x_4683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4683_, 0, v___x_4682_);
return v___x_4683_;
}
}
}
else
{
lean_object* v_a_4686_; lean_object* v___x_4688_; uint8_t v_isShared_4689_; uint8_t v_isSharedCheck_4732_; 
v_a_4686_ = lean_ctor_get(v_x_4675_, 0);
v_isSharedCheck_4732_ = !lean_is_exclusive(v_x_4675_);
if (v_isSharedCheck_4732_ == 0)
{
v___x_4688_ = v_x_4675_;
v_isShared_4689_ = v_isSharedCheck_4732_;
goto v_resetjp_4687_;
}
else
{
lean_inc(v_a_4686_);
lean_dec(v_x_4675_);
v___x_4688_ = lean_box(0);
v_isShared_4689_ = v_isSharedCheck_4732_;
goto v_resetjp_4687_;
}
v_resetjp_4687_:
{
lean_object* v___x_4690_; lean_object* v___x_4691_; uint8_t v___x_4692_; 
v___x_4690_ = lean_string_utf8_byte_size(v_failurePrefix_4668_);
v___x_4691_ = lean_unsigned_to_nat(0u);
v___x_4692_ = lean_nat_dec_eq(v___x_4690_, v___x_4691_);
if (v___x_4692_ == 0)
{
lean_object* v___f_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___f_4697_; lean_object* v_val_4699_; lean_object* v___x_4704_; 
lean_dec_ref(v___f_4674_);
lean_inc(v_a_4686_);
v___f_4693_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4693_, 0, v_a_4686_);
v___x_4694_ = lean_box(v___x_4692_);
v___x_4695_ = lean_box_uint32(v_op_4669_);
v___x_4696_ = lean_box_uint64(v_flags_4670_);
lean_inc(v_payload_4671_);
v___f_4697_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4697_, 0, v___x_4691_);
lean_closure_set(v___f_4697_, 1, v___x_4694_);
lean_closure_set(v___f_4697_, 2, v___f_4693_);
lean_closure_set(v___f_4697_, 3, v_a_4686_);
lean_closure_set(v___f_4697_, 4, v___x_4695_);
lean_closure_set(v___f_4697_, 5, v___x_4696_);
lean_closure_set(v___f_4697_, 6, v_payload_4671_);
v___x_4704_ = l_Lasm_JS_Wire_encodeIO(v_payload_4671_);
lean_dec(v_payload_4671_);
if (lean_obj_tag(v___x_4704_) == 0)
{
lean_object* v_a_4705_; lean_object* v___x_4707_; 
v_a_4705_ = lean_ctor_get(v___x_4704_, 0);
lean_inc(v_a_4705_);
lean_dec_ref_known(v___x_4704_, 1);
if (v_isShared_4689_ == 0)
{
lean_ctor_set(v___x_4688_, 0, v_a_4705_);
v___x_4707_ = v___x_4688_;
goto v_reusejp_4706_;
}
else
{
lean_object* v_reuseFailAlloc_4708_; 
v_reuseFailAlloc_4708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4708_, 0, v_a_4705_);
v___x_4707_ = v_reuseFailAlloc_4708_;
goto v_reusejp_4706_;
}
v_reusejp_4706_:
{
v_val_4699_ = v___x_4707_;
goto v___jp_4698_;
}
}
else
{
lean_object* v_a_4709_; lean_object* v___x_4711_; 
v_a_4709_ = lean_ctor_get(v___x_4704_, 0);
lean_inc(v_a_4709_);
lean_dec_ref_known(v___x_4704_, 1);
if (v_isShared_4689_ == 0)
{
lean_ctor_set_tag(v___x_4688_, 0);
lean_ctor_set(v___x_4688_, 0, v_a_4709_);
v___x_4711_ = v___x_4688_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v_a_4709_);
v___x_4711_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
v_val_4699_ = v___x_4711_;
goto v___jp_4698_;
}
}
v___jp_4698_:
{
lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; 
v___x_4700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4700_, 0, v_val_4699_);
v___x_4701_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4691_, v___x_4692_, v___x_4700_, v___f_4697_);
v___x_4702_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4691_, v___x_4692_, v___x_4701_, v___f_4672_);
v___x_4703_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4691_, v___x_4692_, v___x_4702_, v___f_4673_);
return v___x_4703_;
}
}
else
{
lean_object* v___f_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___f_4716_; uint8_t v___x_4717_; lean_object* v_val_4719_; lean_object* v___x_4723_; 
lean_dec_ref(v___f_4673_);
lean_dec_ref(v___f_4672_);
lean_inc(v_a_4686_);
v___f_4713_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4713_, 0, v_a_4686_);
v___x_4714_ = lean_box_uint32(v_op_4669_);
v___x_4715_ = lean_box_uint64(v_flags_4670_);
lean_inc(v_payload_4671_);
v___f_4716_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4716_, 0, v___f_4713_);
lean_closure_set(v___f_4716_, 1, v_a_4686_);
lean_closure_set(v___f_4716_, 2, v___x_4714_);
lean_closure_set(v___f_4716_, 3, v___x_4715_);
lean_closure_set(v___f_4716_, 4, v_payload_4671_);
v___x_4717_ = 0;
v___x_4723_ = l_Lasm_JS_Wire_encodeIO(v_payload_4671_);
lean_dec(v_payload_4671_);
if (lean_obj_tag(v___x_4723_) == 0)
{
lean_object* v_a_4724_; lean_object* v___x_4726_; 
v_a_4724_ = lean_ctor_get(v___x_4723_, 0);
lean_inc(v_a_4724_);
lean_dec_ref_known(v___x_4723_, 1);
if (v_isShared_4689_ == 0)
{
lean_ctor_set(v___x_4688_, 0, v_a_4724_);
v___x_4726_ = v___x_4688_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v_a_4724_);
v___x_4726_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
v_val_4719_ = v___x_4726_;
goto v___jp_4718_;
}
}
else
{
lean_object* v_a_4728_; lean_object* v___x_4730_; 
v_a_4728_ = lean_ctor_get(v___x_4723_, 0);
lean_inc(v_a_4728_);
lean_dec_ref_known(v___x_4723_, 1);
if (v_isShared_4689_ == 0)
{
lean_ctor_set_tag(v___x_4688_, 0);
lean_ctor_set(v___x_4688_, 0, v_a_4728_);
v___x_4730_ = v___x_4688_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4731_; 
v_reuseFailAlloc_4731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4731_, 0, v_a_4728_);
v___x_4730_ = v_reuseFailAlloc_4731_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
v_val_4719_ = v___x_4730_;
goto v___jp_4718_;
}
}
v___jp_4718_:
{
lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; 
v___x_4720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4720_, 0, v_val_4719_);
v___x_4721_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4691_, v___x_4717_, v___x_4720_, v___f_4716_);
v___x_4722_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4691_, v___x_4717_, v___x_4721_, v___f_4674_);
return v___x_4722_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9___boxed(lean_object* v_failurePrefix_4733_, lean_object* v_op_4734_, lean_object* v_flags_4735_, lean_object* v_payload_4736_, lean_object* v___f_4737_, lean_object* v___f_4738_, lean_object* v___f_4739_, lean_object* v_x_4740_, lean_object* v___y_4741_){
_start:
{
uint32_t v_op_boxed_4742_; uint64_t v_flags_boxed_4743_; lean_object* v_res_4744_; 
v_op_boxed_4742_ = lean_unbox_uint32(v_op_4734_);
lean_dec(v_op_4734_);
v_flags_boxed_4743_ = lean_unbox_uint64(v_flags_4735_);
lean_dec_ref(v_flags_4735_);
v_res_4744_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9(v_failurePrefix_4733_, v_op_boxed_4742_, v_flags_boxed_4743_, v_payload_4736_, v___f_4737_, v___f_4738_, v___f_4739_, v_x_4740_);
lean_dec_ref(v_failurePrefix_4733_);
return v_res_4744_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3(lean_object* v_context_4745_, uint32_t v_op_4746_, uint64_t v_flags_4747_, lean_object* v_payload_4748_, lean_object* v_failurePrefix_4749_){
_start:
{
lean_object* v___f_4751_; lean_object* v___f_4752_; lean_object* v___f_4753_; lean_object* v___f_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___f_4757_; lean_object* v___f_4758_; lean_object* v___x_4759_; uint8_t v___x_4760_; lean_object* v_val_4762_; lean_object* v___x_4765_; 
v___f_4751_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4751_, 0, v_context_4745_);
v___f_4752_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4752_, 0, v___f_4751_);
v___f_4753_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4753_, 0, v___f_4752_);
lean_inc_ref(v_failurePrefix_4749_);
v___f_4754_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4754_, 0, v_failurePrefix_4749_);
v___x_4755_ = lean_box_uint32(v_op_4746_);
v___x_4756_ = lean_box_uint64(v_flags_4747_);
lean_inc_ref(v___f_4753_);
v___f_4757_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4757_, 0, v_failurePrefix_4749_);
lean_closure_set(v___f_4757_, 1, v___x_4755_);
lean_closure_set(v___f_4757_, 2, v___x_4756_);
lean_closure_set(v___f_4757_, 3, v_payload_4748_);
lean_closure_set(v___f_4757_, 4, v___f_4754_);
lean_closure_set(v___f_4757_, 5, v___f_4753_);
lean_closure_set(v___f_4757_, 6, v___f_4753_);
v___f_4758_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4758_, 0, v___f_4757_);
v___x_4759_ = lean_unsigned_to_nat(0u);
v___x_4760_ = 0;
v___x_4765_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4765_) == 0)
{
lean_object* v_a_4766_; lean_object* v___x_4768_; uint8_t v_isShared_4769_; uint8_t v_isSharedCheck_4773_; 
v_a_4766_ = lean_ctor_get(v___x_4765_, 0);
v_isSharedCheck_4773_ = !lean_is_exclusive(v___x_4765_);
if (v_isSharedCheck_4773_ == 0)
{
v___x_4768_ = v___x_4765_;
v_isShared_4769_ = v_isSharedCheck_4773_;
goto v_resetjp_4767_;
}
else
{
lean_inc(v_a_4766_);
lean_dec(v___x_4765_);
v___x_4768_ = lean_box(0);
v_isShared_4769_ = v_isSharedCheck_4773_;
goto v_resetjp_4767_;
}
v_resetjp_4767_:
{
lean_object* v___x_4771_; 
if (v_isShared_4769_ == 0)
{
lean_ctor_set_tag(v___x_4768_, 1);
v___x_4771_ = v___x_4768_;
goto v_reusejp_4770_;
}
else
{
lean_object* v_reuseFailAlloc_4772_; 
v_reuseFailAlloc_4772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4772_, 0, v_a_4766_);
v___x_4771_ = v_reuseFailAlloc_4772_;
goto v_reusejp_4770_;
}
v_reusejp_4770_:
{
v_val_4762_ = v___x_4771_;
goto v___jp_4761_;
}
}
}
else
{
lean_object* v_a_4774_; lean_object* v___x_4776_; uint8_t v_isShared_4777_; uint8_t v_isSharedCheck_4781_; 
v_a_4774_ = lean_ctor_get(v___x_4765_, 0);
v_isSharedCheck_4781_ = !lean_is_exclusive(v___x_4765_);
if (v_isSharedCheck_4781_ == 0)
{
v___x_4776_ = v___x_4765_;
v_isShared_4777_ = v_isSharedCheck_4781_;
goto v_resetjp_4775_;
}
else
{
lean_inc(v_a_4774_);
lean_dec(v___x_4765_);
v___x_4776_ = lean_box(0);
v_isShared_4777_ = v_isSharedCheck_4781_;
goto v_resetjp_4775_;
}
v_resetjp_4775_:
{
lean_object* v___x_4779_; 
if (v_isShared_4777_ == 0)
{
lean_ctor_set_tag(v___x_4776_, 0);
v___x_4779_ = v___x_4776_;
goto v_reusejp_4778_;
}
else
{
lean_object* v_reuseFailAlloc_4780_; 
v_reuseFailAlloc_4780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4780_, 0, v_a_4774_);
v___x_4779_ = v_reuseFailAlloc_4780_;
goto v_reusejp_4778_;
}
v_reusejp_4778_:
{
v_val_4762_ = v___x_4779_;
goto v___jp_4761_;
}
}
}
v___jp_4761_:
{
lean_object* v___x_4763_; lean_object* v___x_4764_; 
v___x_4763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4763_, 0, v_val_4762_);
v___x_4764_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4759_, v___x_4760_, v___x_4763_, v___f_4758_);
return v___x_4764_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___boxed(lean_object* v_context_4782_, lean_object* v_op_4783_, lean_object* v_flags_4784_, lean_object* v_payload_4785_, lean_object* v_failurePrefix_4786_, lean_object* v_a_4787_){
_start:
{
uint32_t v_op_boxed_4788_; uint64_t v_flags_boxed_4789_; lean_object* v_res_4790_; 
v_op_boxed_4788_ = lean_unbox_uint32(v_op_4783_);
lean_dec(v_op_4783_);
v_flags_boxed_4789_ = lean_unbox_uint64(v_flags_4784_);
lean_dec_ref(v_flags_4784_);
v_res_4790_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3(v_context_4782_, v_op_boxed_4788_, v_flags_boxed_4789_, v_payload_4785_, v_failurePrefix_4786_);
return v_res_4790_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2(uint8_t v_await_4791_, uint64_t v_extra_4792_){
_start:
{
uint64_t v___x_4793_; uint64_t v___y_4795_; 
v___x_4793_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_4791_ == 0)
{
uint64_t v___x_4798_; 
v___x_4798_ = 0ULL;
v___y_4795_ = v___x_4798_;
goto v___jp_4794_;
}
else
{
uint64_t v___x_4799_; 
v___x_4799_ = 2ULL;
v___y_4795_ = v___x_4799_;
goto v___jp_4794_;
}
v___jp_4794_:
{
uint64_t v___x_4796_; uint64_t v___x_4797_; 
v___x_4796_ = lean_uint64_lor(v___x_4793_, v___y_4795_);
v___x_4797_ = lean_uint64_lor(v___x_4796_, v_extra_4792_);
return v___x_4797_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2___boxed(lean_object* v_await_4800_, lean_object* v_extra_4801_){
_start:
{
uint8_t v_await_boxed_4802_; uint64_t v_extra_boxed_4803_; uint64_t v_res_4804_; lean_object* v_r_4805_; 
v_await_boxed_4802_ = lean_unbox(v_await_4800_);
v_extra_boxed_4803_ = lean_unbox_uint64(v_extra_4801_);
lean_dec_ref(v_extra_4801_);
v_res_4804_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2(v_await_boxed_4802_, v_extra_boxed_4803_);
v_r_4805_ = lean_box_uint64(v_res_4804_);
return v_r_4805_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0(void){
_start:
{
uint64_t v___x_4806_; uint8_t v___x_4807_; uint64_t v___x_4808_; 
v___x_4806_ = 8ULL;
v___x_4807_ = 0;
v___x_4808_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2(v___x_4807_, v___x_4806_);
return v___x_4808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1(lean_object* v_o_4809_, lean_object* v_name_4810_, lean_object* v_args_4811_){
_start:
{
lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; uint32_t v___x_4818_; uint64_t v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; 
v___x_4813_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4814_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4814_, 0, v_o_4809_);
lean_ctor_set(v___x_4814_, 1, v___x_4813_);
lean_inc_ref(v_name_4810_);
v___x_4815_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4815_, 0, v_name_4810_);
v___x_4816_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_4817_ = lean_string_append(v___x_4816_, v_name_4810_);
lean_dec_ref(v_name_4810_);
v___x_4818_ = 205;
v___x_4819_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0);
v___x_4820_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4820_, 0, v_args_4811_);
v___x_4821_ = lean_unsigned_to_nat(3u);
v___x_4822_ = lean_mk_empty_array_with_capacity(v___x_4821_);
v___x_4823_ = lean_array_push(v___x_4822_, v___x_4814_);
v___x_4824_ = lean_array_push(v___x_4823_, v___x_4815_);
v___x_4825_ = lean_array_push(v___x_4824_, v___x_4820_);
v___x_4826_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4826_, 0, v___x_4825_);
v___x_4827_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3(v___x_4817_, v___x_4818_, v___x_4819_, v___x_4826_, v___x_4813_);
return v___x_4827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___boxed(lean_object* v_o_4828_, lean_object* v_name_4829_, lean_object* v_args_4830_, lean_object* v___y_4831_){
_start:
{
lean_object* v_res_4832_; 
v_res_4832_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1(v_o_4828_, v_name_4829_, v_args_4830_);
return v_res_4832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(lean_object* v_x_4833_){
_start:
{
if (lean_obj_tag(v_x_4833_) == 0)
{
lean_object* v___x_4834_; 
v___x_4834_ = lean_box(0);
return v___x_4834_;
}
else
{
lean_object* v_val_4835_; uint8_t v___x_4836_; 
v_val_4835_ = lean_ctor_get(v_x_4833_, 0);
v___x_4836_ = lean_unbox(v_val_4835_);
if (v___x_4836_ == 0)
{
lean_object* v___x_4837_; 
v___x_4837_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__1));
return v___x_4837_;
}
else
{
lean_object* v___x_4838_; 
v___x_4838_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__3));
return v___x_4838_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0___boxed(lean_object* v_x_4839_){
_start:
{
lean_object* v_res_4840_; 
v_res_4840_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(v_x_4839_);
lean_dec(v_x_4839_);
return v_res_4840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0(lean_object* v_x_4841_){
_start:
{
if (lean_obj_tag(v_x_4841_) == 0)
{
lean_object* v___x_4842_; 
v___x_4842_ = lean_box(0);
return v___x_4842_;
}
else
{
lean_object* v_val_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; 
v_val_4843_ = lean_ctor_get(v_x_4841_, 0);
v___x_4844_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_4845_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(v_val_4843_);
v___x_4846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4846_, 0, v___x_4844_);
lean_ctor_set(v___x_4846_, 1, v___x_4845_);
v___x_4847_ = lean_unsigned_to_nat(1u);
v___x_4848_ = lean_mk_empty_array_with_capacity(v___x_4847_);
v___x_4849_ = lean_array_push(v___x_4848_, v___x_4846_);
v___x_4850_ = l_Lasm_JS_Web_Support_fields(v___x_4849_);
lean_dec_ref(v___x_4849_);
return v___x_4850_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0___boxed(lean_object* v_x_4851_){
_start:
{
lean_object* v_res_4852_; 
v_res_4852_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0(v_x_4851_);
lean_dec(v_x_4851_);
return v_res_4852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_get(lean_object* v_self_4854_, lean_object* v_key_4855_, lean_object* v_options_4856_){
_start:
{
lean_object* v___x_4858_; size_t v_sz_4859_; size_t v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; 
v___x_4858_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_get___closed__0));
v_sz_4859_ = lean_array_size(v_key_4855_);
v___x_4860_ = ((size_t)0ULL);
v___x_4861_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_4859_, v___x_4860_, v_key_4855_);
v___x_4862_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4862_, 0, v___x_4861_);
v___x_4863_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0(v_options_4856_);
v___x_4864_ = lean_unsigned_to_nat(2u);
v___x_4865_ = lean_mk_empty_array_with_capacity(v___x_4864_);
v___x_4866_ = lean_array_push(v___x_4865_, v___x_4862_);
v___x_4867_ = lean_array_push(v___x_4866_, v___x_4863_);
v___x_4868_ = l_Lasm_JS_Web_Support_args(v___x_4867_);
v___x_4869_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1(v_self_4854_, v___x_4858_, v___x_4868_);
return v___x_4869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_get___boxed(lean_object* v_self_4870_, lean_object* v_key_4871_, lean_object* v_options_4872_, lean_object* v_a_4873_){
_start:
{
lean_object* v_res_4874_; 
v_res_4874_ = l_Lasm_JS_Deno_Kv_get(v_self_4870_, v_key_4871_, v_options_4872_);
lean_dec(v_options_4872_);
return v_res_4874_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1(uint8_t v_await_4875_, uint64_t v_extra_4876_){
_start:
{
uint64_t v___x_4877_; uint64_t v___y_4879_; 
v___x_4877_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_4875_ == 0)
{
uint64_t v___x_4882_; 
v___x_4882_ = 0ULL;
v___y_4879_ = v___x_4882_;
goto v___jp_4878_;
}
else
{
uint64_t v___x_4883_; 
v___x_4883_ = 2ULL;
v___y_4879_ = v___x_4883_;
goto v___jp_4878_;
}
v___jp_4878_:
{
uint64_t v___x_4880_; uint64_t v___x_4881_; 
v___x_4880_ = lean_uint64_lor(v___x_4877_, v___y_4879_);
v___x_4881_ = lean_uint64_lor(v___x_4880_, v_extra_4876_);
return v___x_4881_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1___boxed(lean_object* v_await_4884_, lean_object* v_extra_4885_){
_start:
{
uint8_t v_await_boxed_4886_; uint64_t v_extra_boxed_4887_; uint64_t v_res_4888_; lean_object* v_r_4889_; 
v_await_boxed_4886_ = lean_unbox(v_await_4884_);
v_extra_boxed_4887_ = lean_unbox_uint64(v_extra_4885_);
lean_dec_ref(v_extra_4885_);
v_res_4888_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1(v_await_boxed_4886_, v_extra_boxed_4887_);
v_r_4889_ = lean_box_uint64(v_res_4888_);
return v_r_4889_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1(lean_object* v___f_4890_, lean_object* v_bytes_4891_){
_start:
{
lean_object* v___x_4893_; uint8_t v___x_4894_; lean_object* v_val_4896_; lean_object* v___x_4899_; 
v___x_4893_ = lean_unsigned_to_nat(0u);
v___x_4894_ = 0;
v___x_4899_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4891_);
if (lean_obj_tag(v___x_4899_) == 0)
{
lean_object* v_a_4900_; lean_object* v___x_4902_; uint8_t v_isShared_4903_; uint8_t v_isSharedCheck_4907_; 
v_a_4900_ = lean_ctor_get(v___x_4899_, 0);
v_isSharedCheck_4907_ = !lean_is_exclusive(v___x_4899_);
if (v_isSharedCheck_4907_ == 0)
{
v___x_4902_ = v___x_4899_;
v_isShared_4903_ = v_isSharedCheck_4907_;
goto v_resetjp_4901_;
}
else
{
lean_inc(v_a_4900_);
lean_dec(v___x_4899_);
v___x_4902_ = lean_box(0);
v_isShared_4903_ = v_isSharedCheck_4907_;
goto v_resetjp_4901_;
}
v_resetjp_4901_:
{
lean_object* v___x_4905_; 
if (v_isShared_4903_ == 0)
{
lean_ctor_set_tag(v___x_4902_, 1);
v___x_4905_ = v___x_4902_;
goto v_reusejp_4904_;
}
else
{
lean_object* v_reuseFailAlloc_4906_; 
v_reuseFailAlloc_4906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4906_, 0, v_a_4900_);
v___x_4905_ = v_reuseFailAlloc_4906_;
goto v_reusejp_4904_;
}
v_reusejp_4904_:
{
v_val_4896_ = v___x_4905_;
goto v___jp_4895_;
}
}
}
else
{
lean_object* v_a_4908_; lean_object* v___x_4910_; uint8_t v_isShared_4911_; uint8_t v_isSharedCheck_4915_; 
v_a_4908_ = lean_ctor_get(v___x_4899_, 0);
v_isSharedCheck_4915_ = !lean_is_exclusive(v___x_4899_);
if (v_isSharedCheck_4915_ == 0)
{
v___x_4910_ = v___x_4899_;
v_isShared_4911_ = v_isSharedCheck_4915_;
goto v_resetjp_4909_;
}
else
{
lean_inc(v_a_4908_);
lean_dec(v___x_4899_);
v___x_4910_ = lean_box(0);
v_isShared_4911_ = v_isSharedCheck_4915_;
goto v_resetjp_4909_;
}
v_resetjp_4909_:
{
lean_object* v___x_4913_; 
if (v_isShared_4911_ == 0)
{
lean_ctor_set_tag(v___x_4910_, 0);
v___x_4913_ = v___x_4910_;
goto v_reusejp_4912_;
}
else
{
lean_object* v_reuseFailAlloc_4914_; 
v_reuseFailAlloc_4914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4914_, 0, v_a_4908_);
v___x_4913_ = v_reuseFailAlloc_4914_;
goto v_reusejp_4912_;
}
v_reusejp_4912_:
{
v_val_4896_ = v___x_4913_;
goto v___jp_4895_;
}
}
}
v___jp_4895_:
{
lean_object* v___x_4897_; lean_object* v___x_4898_; 
v___x_4897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4897_, 0, v_val_4896_);
v___x_4898_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4893_, v___x_4894_, v___x_4897_, v___f_4890_);
return v___x_4898_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1___boxed(lean_object* v___f_4916_, lean_object* v_bytes_4917_, lean_object* v___y_4918_){
_start:
{
lean_object* v_res_4919_; 
v_res_4919_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1(v___f_4916_, v_bytes_4917_);
lean_dec_ref(v_bytes_4917_);
return v_res_4919_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_4920_, uint32_t v_op_4921_, uint64_t v_flags_4922_, lean_object* v_payload_4923_, lean_object* v___f_4924_, lean_object* v___f_4925_, lean_object* v___f_4926_, lean_object* v_x_4927_){
_start:
{
if (lean_obj_tag(v_x_4927_) == 0)
{
lean_object* v_a_4929_; lean_object* v___x_4931_; uint8_t v_isShared_4932_; uint8_t v_isSharedCheck_4937_; 
lean_dec_ref(v___f_4926_);
lean_dec_ref(v___f_4925_);
lean_dec_ref(v___f_4924_);
lean_dec(v_payload_4923_);
v_a_4929_ = lean_ctor_get(v_x_4927_, 0);
v_isSharedCheck_4937_ = !lean_is_exclusive(v_x_4927_);
if (v_isSharedCheck_4937_ == 0)
{
v___x_4931_ = v_x_4927_;
v_isShared_4932_ = v_isSharedCheck_4937_;
goto v_resetjp_4930_;
}
else
{
lean_inc(v_a_4929_);
lean_dec(v_x_4927_);
v___x_4931_ = lean_box(0);
v_isShared_4932_ = v_isSharedCheck_4937_;
goto v_resetjp_4930_;
}
v_resetjp_4930_:
{
lean_object* v___x_4934_; 
if (v_isShared_4932_ == 0)
{
v___x_4934_ = v___x_4931_;
goto v_reusejp_4933_;
}
else
{
lean_object* v_reuseFailAlloc_4936_; 
v_reuseFailAlloc_4936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4936_, 0, v_a_4929_);
v___x_4934_ = v_reuseFailAlloc_4936_;
goto v_reusejp_4933_;
}
v_reusejp_4933_:
{
lean_object* v___x_4935_; 
v___x_4935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4935_, 0, v___x_4934_);
return v___x_4935_;
}
}
}
else
{
lean_object* v_a_4938_; lean_object* v___x_4940_; uint8_t v_isShared_4941_; uint8_t v_isSharedCheck_4984_; 
v_a_4938_ = lean_ctor_get(v_x_4927_, 0);
v_isSharedCheck_4984_ = !lean_is_exclusive(v_x_4927_);
if (v_isSharedCheck_4984_ == 0)
{
v___x_4940_ = v_x_4927_;
v_isShared_4941_ = v_isSharedCheck_4984_;
goto v_resetjp_4939_;
}
else
{
lean_inc(v_a_4938_);
lean_dec(v_x_4927_);
v___x_4940_ = lean_box(0);
v_isShared_4941_ = v_isSharedCheck_4984_;
goto v_resetjp_4939_;
}
v_resetjp_4939_:
{
lean_object* v___x_4942_; lean_object* v___x_4943_; uint8_t v___x_4944_; 
v___x_4942_ = lean_string_utf8_byte_size(v_failurePrefix_4920_);
v___x_4943_ = lean_unsigned_to_nat(0u);
v___x_4944_ = lean_nat_dec_eq(v___x_4942_, v___x_4943_);
if (v___x_4944_ == 0)
{
lean_object* v___f_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___f_4949_; lean_object* v_val_4951_; lean_object* v___x_4956_; 
lean_dec_ref(v___f_4926_);
lean_inc(v_a_4938_);
v___f_4945_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4945_, 0, v_a_4938_);
v___x_4946_ = lean_box(v___x_4944_);
v___x_4947_ = lean_box_uint32(v_op_4921_);
v___x_4948_ = lean_box_uint64(v_flags_4922_);
lean_inc(v_payload_4923_);
v___f_4949_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4949_, 0, v___x_4943_);
lean_closure_set(v___f_4949_, 1, v___x_4946_);
lean_closure_set(v___f_4949_, 2, v___f_4945_);
lean_closure_set(v___f_4949_, 3, v_a_4938_);
lean_closure_set(v___f_4949_, 4, v___x_4947_);
lean_closure_set(v___f_4949_, 5, v___x_4948_);
lean_closure_set(v___f_4949_, 6, v_payload_4923_);
v___x_4956_ = l_Lasm_JS_Wire_encodeIO(v_payload_4923_);
lean_dec(v_payload_4923_);
if (lean_obj_tag(v___x_4956_) == 0)
{
lean_object* v_a_4957_; lean_object* v___x_4959_; 
v_a_4957_ = lean_ctor_get(v___x_4956_, 0);
lean_inc(v_a_4957_);
lean_dec_ref_known(v___x_4956_, 1);
if (v_isShared_4941_ == 0)
{
lean_ctor_set(v___x_4940_, 0, v_a_4957_);
v___x_4959_ = v___x_4940_;
goto v_reusejp_4958_;
}
else
{
lean_object* v_reuseFailAlloc_4960_; 
v_reuseFailAlloc_4960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4960_, 0, v_a_4957_);
v___x_4959_ = v_reuseFailAlloc_4960_;
goto v_reusejp_4958_;
}
v_reusejp_4958_:
{
v_val_4951_ = v___x_4959_;
goto v___jp_4950_;
}
}
else
{
lean_object* v_a_4961_; lean_object* v___x_4963_; 
v_a_4961_ = lean_ctor_get(v___x_4956_, 0);
lean_inc(v_a_4961_);
lean_dec_ref_known(v___x_4956_, 1);
if (v_isShared_4941_ == 0)
{
lean_ctor_set_tag(v___x_4940_, 0);
lean_ctor_set(v___x_4940_, 0, v_a_4961_);
v___x_4963_ = v___x_4940_;
goto v_reusejp_4962_;
}
else
{
lean_object* v_reuseFailAlloc_4964_; 
v_reuseFailAlloc_4964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4964_, 0, v_a_4961_);
v___x_4963_ = v_reuseFailAlloc_4964_;
goto v_reusejp_4962_;
}
v_reusejp_4962_:
{
v_val_4951_ = v___x_4963_;
goto v___jp_4950_;
}
}
v___jp_4950_:
{
lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; 
v___x_4952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4952_, 0, v_val_4951_);
v___x_4953_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4943_, v___x_4944_, v___x_4952_, v___f_4949_);
v___x_4954_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4943_, v___x_4944_, v___x_4953_, v___f_4924_);
v___x_4955_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4943_, v___x_4944_, v___x_4954_, v___f_4925_);
return v___x_4955_;
}
}
else
{
lean_object* v___f_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___f_4968_; uint8_t v___x_4969_; lean_object* v_val_4971_; lean_object* v___x_4975_; 
lean_dec_ref(v___f_4925_);
lean_dec_ref(v___f_4924_);
lean_inc(v_a_4938_);
v___f_4965_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4965_, 0, v_a_4938_);
v___x_4966_ = lean_box_uint32(v_op_4921_);
v___x_4967_ = lean_box_uint64(v_flags_4922_);
lean_inc(v_payload_4923_);
v___f_4968_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4968_, 0, v___f_4965_);
lean_closure_set(v___f_4968_, 1, v_a_4938_);
lean_closure_set(v___f_4968_, 2, v___x_4966_);
lean_closure_set(v___f_4968_, 3, v___x_4967_);
lean_closure_set(v___f_4968_, 4, v_payload_4923_);
v___x_4969_ = 0;
v___x_4975_ = l_Lasm_JS_Wire_encodeIO(v_payload_4923_);
lean_dec(v_payload_4923_);
if (lean_obj_tag(v___x_4975_) == 0)
{
lean_object* v_a_4976_; lean_object* v___x_4978_; 
v_a_4976_ = lean_ctor_get(v___x_4975_, 0);
lean_inc(v_a_4976_);
lean_dec_ref_known(v___x_4975_, 1);
if (v_isShared_4941_ == 0)
{
lean_ctor_set(v___x_4940_, 0, v_a_4976_);
v___x_4978_ = v___x_4940_;
goto v_reusejp_4977_;
}
else
{
lean_object* v_reuseFailAlloc_4979_; 
v_reuseFailAlloc_4979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4979_, 0, v_a_4976_);
v___x_4978_ = v_reuseFailAlloc_4979_;
goto v_reusejp_4977_;
}
v_reusejp_4977_:
{
v_val_4971_ = v___x_4978_;
goto v___jp_4970_;
}
}
else
{
lean_object* v_a_4980_; lean_object* v___x_4982_; 
v_a_4980_ = lean_ctor_get(v___x_4975_, 0);
lean_inc(v_a_4980_);
lean_dec_ref_known(v___x_4975_, 1);
if (v_isShared_4941_ == 0)
{
lean_ctor_set_tag(v___x_4940_, 0);
lean_ctor_set(v___x_4940_, 0, v_a_4980_);
v___x_4982_ = v___x_4940_;
goto v_reusejp_4981_;
}
else
{
lean_object* v_reuseFailAlloc_4983_; 
v_reuseFailAlloc_4983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4983_, 0, v_a_4980_);
v___x_4982_ = v_reuseFailAlloc_4983_;
goto v_reusejp_4981_;
}
v_reusejp_4981_:
{
v_val_4971_ = v___x_4982_;
goto v___jp_4970_;
}
}
v___jp_4970_:
{
lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; 
v___x_4972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4972_, 0, v_val_4971_);
v___x_4973_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4943_, v___x_4969_, v___x_4972_, v___f_4968_);
v___x_4974_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4943_, v___x_4969_, v___x_4973_, v___f_4926_);
return v___x_4974_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_4985_, lean_object* v_op_4986_, lean_object* v_flags_4987_, lean_object* v_payload_4988_, lean_object* v___f_4989_, lean_object* v___f_4990_, lean_object* v___f_4991_, lean_object* v_x_4992_, lean_object* v___y_4993_){
_start:
{
uint32_t v_op_boxed_4994_; uint64_t v_flags_boxed_4995_; lean_object* v_res_4996_; 
v_op_boxed_4994_ = lean_unbox_uint32(v_op_4986_);
lean_dec(v_op_4986_);
v_flags_boxed_4995_ = lean_unbox_uint64(v_flags_4987_);
lean_dec_ref(v_flags_4987_);
v_res_4996_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9(v_failurePrefix_4985_, v_op_boxed_4994_, v_flags_boxed_4995_, v_payload_4988_, v___f_4989_, v___f_4990_, v___f_4991_, v_x_4992_);
lean_dec_ref(v_failurePrefix_4985_);
return v_res_4996_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4(size_t v_sz_4997_, size_t v_i_4998_, lean_object* v_bs_4999_){
_start:
{
uint8_t v___x_5000_; 
v___x_5000_ = lean_usize_dec_lt(v_i_4998_, v_sz_4997_);
if (v___x_5000_ == 0)
{
lean_object* v___x_5001_; 
v___x_5001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5001_, 0, v_bs_4999_);
return v___x_5001_;
}
else
{
lean_object* v_v_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; 
v_v_5002_ = lean_array_uget_borrowed(v_bs_4999_, v_i_4998_);
v___x_5003_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
lean_inc(v_v_5002_);
v___x_5004_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_v_5002_, v___x_5003_);
if (lean_obj_tag(v___x_5004_) == 0)
{
lean_object* v_a_5005_; lean_object* v___x_5007_; uint8_t v_isShared_5008_; uint8_t v_isSharedCheck_5012_; 
lean_dec_ref(v_bs_4999_);
v_a_5005_ = lean_ctor_get(v___x_5004_, 0);
v_isSharedCheck_5012_ = !lean_is_exclusive(v___x_5004_);
if (v_isSharedCheck_5012_ == 0)
{
v___x_5007_ = v___x_5004_;
v_isShared_5008_ = v_isSharedCheck_5012_;
goto v_resetjp_5006_;
}
else
{
lean_inc(v_a_5005_);
lean_dec(v___x_5004_);
v___x_5007_ = lean_box(0);
v_isShared_5008_ = v_isSharedCheck_5012_;
goto v_resetjp_5006_;
}
v_resetjp_5006_:
{
lean_object* v___x_5010_; 
if (v_isShared_5008_ == 0)
{
v___x_5010_ = v___x_5007_;
goto v_reusejp_5009_;
}
else
{
lean_object* v_reuseFailAlloc_5011_; 
v_reuseFailAlloc_5011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5011_, 0, v_a_5005_);
v___x_5010_ = v_reuseFailAlloc_5011_;
goto v_reusejp_5009_;
}
v_reusejp_5009_:
{
return v___x_5010_;
}
}
}
else
{
lean_object* v_a_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; 
v_a_5013_ = lean_ctor_get(v___x_5004_, 0);
lean_inc(v_a_5013_);
lean_dec_ref_known(v___x_5004_, 1);
v___x_5014_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
lean_inc(v_v_5002_);
v___x_5015_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_v_5002_, v___x_5014_);
if (lean_obj_tag(v___x_5015_) == 0)
{
lean_object* v_a_5016_; lean_object* v___x_5018_; uint8_t v_isShared_5019_; uint8_t v_isSharedCheck_5023_; 
lean_dec(v_a_5013_);
lean_dec_ref(v_bs_4999_);
v_a_5016_ = lean_ctor_get(v___x_5015_, 0);
v_isSharedCheck_5023_ = !lean_is_exclusive(v___x_5015_);
if (v_isSharedCheck_5023_ == 0)
{
v___x_5018_ = v___x_5015_;
v_isShared_5019_ = v_isSharedCheck_5023_;
goto v_resetjp_5017_;
}
else
{
lean_inc(v_a_5016_);
lean_dec(v___x_5015_);
v___x_5018_ = lean_box(0);
v_isShared_5019_ = v_isSharedCheck_5023_;
goto v_resetjp_5017_;
}
v_resetjp_5017_:
{
lean_object* v___x_5021_; 
if (v_isShared_5019_ == 0)
{
v___x_5021_ = v___x_5018_;
goto v_reusejp_5020_;
}
else
{
lean_object* v_reuseFailAlloc_5022_; 
v_reuseFailAlloc_5022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5022_, 0, v_a_5016_);
v___x_5021_ = v_reuseFailAlloc_5022_;
goto v_reusejp_5020_;
}
v_reusejp_5020_:
{
return v___x_5021_;
}
}
}
else
{
lean_object* v_a_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; 
v_a_5024_ = lean_ctor_get(v___x_5015_, 0);
lean_inc(v_a_5024_);
lean_dec_ref_known(v___x_5015_, 1);
v___x_5025_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_v_5002_);
v___x_5026_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(v_v_5002_, v___x_5025_);
if (lean_obj_tag(v___x_5026_) == 0)
{
lean_object* v_a_5027_; lean_object* v___x_5029_; uint8_t v_isShared_5030_; uint8_t v_isSharedCheck_5034_; 
lean_dec(v_a_5024_);
lean_dec(v_a_5013_);
lean_dec_ref(v_bs_4999_);
v_a_5027_ = lean_ctor_get(v___x_5026_, 0);
v_isSharedCheck_5034_ = !lean_is_exclusive(v___x_5026_);
if (v_isSharedCheck_5034_ == 0)
{
v___x_5029_ = v___x_5026_;
v_isShared_5030_ = v_isSharedCheck_5034_;
goto v_resetjp_5028_;
}
else
{
lean_inc(v_a_5027_);
lean_dec(v___x_5026_);
v___x_5029_ = lean_box(0);
v_isShared_5030_ = v_isSharedCheck_5034_;
goto v_resetjp_5028_;
}
v_resetjp_5028_:
{
lean_object* v___x_5032_; 
if (v_isShared_5030_ == 0)
{
v___x_5032_ = v___x_5029_;
goto v_reusejp_5031_;
}
else
{
lean_object* v_reuseFailAlloc_5033_; 
v_reuseFailAlloc_5033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5033_, 0, v_a_5027_);
v___x_5032_ = v_reuseFailAlloc_5033_;
goto v_reusejp_5031_;
}
v_reusejp_5031_:
{
return v___x_5032_;
}
}
}
else
{
lean_object* v_a_5035_; lean_object* v___x_5036_; lean_object* v_bs_x27_5037_; lean_object* v___x_5038_; size_t v___x_5039_; size_t v___x_5040_; lean_object* v___x_5041_; 
v_a_5035_ = lean_ctor_get(v___x_5026_, 0);
lean_inc(v_a_5035_);
lean_dec_ref_known(v___x_5026_, 1);
v___x_5036_ = lean_unsigned_to_nat(0u);
v_bs_x27_5037_ = lean_array_uset(v_bs_4999_, v_i_4998_, v___x_5036_);
v___x_5038_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5038_, 0, v_a_5013_);
lean_ctor_set(v___x_5038_, 1, v_a_5024_);
lean_ctor_set(v___x_5038_, 2, v_a_5035_);
v___x_5039_ = ((size_t)1ULL);
v___x_5040_ = lean_usize_add(v_i_4998_, v___x_5039_);
v___x_5041_ = lean_array_uset(v_bs_x27_5037_, v_i_4998_, v___x_5038_);
v_i_4998_ = v___x_5040_;
v_bs_4999_ = v___x_5041_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_sz_5043_, lean_object* v_i_5044_, lean_object* v_bs_5045_){
_start:
{
size_t v_sz_boxed_5046_; size_t v_i_boxed_5047_; lean_object* v_res_5048_; 
v_sz_boxed_5046_ = lean_unbox_usize(v_sz_5043_);
lean_dec(v_sz_5043_);
v_i_boxed_5047_ = lean_unbox_usize(v_i_5044_);
lean_dec(v_i_5044_);
v_res_5048_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4(v_sz_boxed_5046_, v_i_boxed_5047_, v_bs_5045_);
return v_res_5048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3(lean_object* v_context_5051_, lean_object* v_d_5052_){
_start:
{
lean_object* v___y_5055_; lean_object* v___y_5056_; lean_object* v___y_5061_; lean_object* v_received_5062_; lean_object* v___y_5081_; lean_object* v_a_5084_; 
if (lean_obj_tag(v_d_5052_) == 7)
{
lean_object* v_items_5108_; size_t v_sz_5109_; size_t v___x_5110_; lean_object* v___x_5111_; 
v_items_5108_ = lean_ctor_get(v_d_5052_, 0);
v_sz_5109_ = lean_array_size(v_items_5108_);
v___x_5110_ = ((size_t)0ULL);
lean_inc_ref(v_items_5108_);
v___x_5111_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4(v_sz_5109_, v___x_5110_, v_items_5108_);
if (lean_obj_tag(v___x_5111_) == 0)
{
lean_object* v_a_5112_; lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; uint8_t v___x_5116_; 
v_a_5112_ = lean_ctor_get(v___x_5111_, 0);
lean_inc(v_a_5112_);
lean_dec_ref_known(v___x_5111_, 1);
v___x_5113_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___closed__1));
v___x_5114_ = lean_string_utf8_byte_size(v_a_5112_);
v___x_5115_ = lean_unsigned_to_nat(0u);
v___x_5116_ = lean_nat_dec_eq(v___x_5114_, v___x_5115_);
if (v___x_5116_ == 0)
{
lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; 
v___x_5117_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_5118_ = lean_string_append(v___x_5117_, v_a_5112_);
lean_dec(v_a_5112_);
v___x_5119_ = lean_string_append(v___x_5113_, v___x_5118_);
lean_dec_ref(v___x_5118_);
v_a_5084_ = v___x_5119_;
goto v___jp_5083_;
}
else
{
lean_dec(v_a_5112_);
v_a_5084_ = v___x_5113_;
goto v___jp_5083_;
}
}
else
{
if (lean_obj_tag(v___x_5111_) == 0)
{
lean_object* v_a_5120_; 
v_a_5120_ = lean_ctor_get(v___x_5111_, 0);
lean_inc(v_a_5120_);
lean_dec_ref_known(v___x_5111_, 1);
v_a_5084_ = v_a_5120_;
goto v___jp_5083_;
}
else
{
lean_object* v_a_5121_; lean_object* v___x_5123_; uint8_t v_isShared_5124_; uint8_t v_isSharedCheck_5128_; 
lean_dec_ref_known(v_d_5052_, 1);
v_a_5121_ = lean_ctor_get(v___x_5111_, 0);
v_isSharedCheck_5128_ = !lean_is_exclusive(v___x_5111_);
if (v_isSharedCheck_5128_ == 0)
{
v___x_5123_ = v___x_5111_;
v_isShared_5124_ = v_isSharedCheck_5128_;
goto v_resetjp_5122_;
}
else
{
lean_inc(v_a_5121_);
lean_dec(v___x_5111_);
v___x_5123_ = lean_box(0);
v_isShared_5124_ = v_isSharedCheck_5128_;
goto v_resetjp_5122_;
}
v_resetjp_5122_:
{
lean_object* v___x_5126_; 
if (v_isShared_5124_ == 0)
{
lean_ctor_set_tag(v___x_5123_, 0);
v___x_5126_ = v___x_5123_;
goto v_reusejp_5125_;
}
else
{
lean_object* v_reuseFailAlloc_5127_; 
v_reuseFailAlloc_5127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5127_, 0, v_a_5121_);
v___x_5126_ = v_reuseFailAlloc_5127_;
goto v_reusejp_5125_;
}
v_reusejp_5125_:
{
return v___x_5126_;
}
}
}
}
}
else
{
lean_object* v___x_5129_; 
v___x_5129_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v_a_5084_ = v___x_5129_;
goto v___jp_5083_;
}
v___jp_5054_:
{
lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; 
v___x_5057_ = lean_string_append(v___y_5055_, v___y_5056_);
lean_dec_ref(v___y_5056_);
v___x_5058_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5058_, 0, v___x_5057_);
v___x_5059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5059_, 0, v___x_5058_);
return v___x_5059_;
}
v___jp_5060_:
{
lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v___x_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; uint8_t v___x_5074_; 
v___x_5063_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_5064_ = lean_string_append(v___x_5063_, v_context_5051_);
v___x_5065_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_5066_ = lean_string_append(v___x_5064_, v___x_5065_);
v___x_5067_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___closed__0));
v___x_5068_ = lean_string_append(v___x_5066_, v___x_5067_);
v___x_5069_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_5070_ = lean_string_append(v___x_5068_, v___x_5069_);
v___x_5071_ = lean_string_append(v___x_5070_, v_received_5062_);
lean_dec_ref(v_received_5062_);
v___x_5072_ = lean_string_utf8_byte_size(v___y_5061_);
v___x_5073_ = lean_unsigned_to_nat(0u);
v___x_5074_ = lean_nat_dec_eq(v___x_5072_, v___x_5073_);
if (v___x_5074_ == 0)
{
lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; 
v___x_5075_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_5076_ = lean_string_append(v___x_5075_, v___y_5061_);
lean_dec_ref(v___y_5061_);
v___x_5077_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5078_ = lean_string_append(v___x_5076_, v___x_5077_);
v___y_5055_ = v___x_5071_;
v___y_5056_ = v___x_5078_;
goto v___jp_5054_;
}
else
{
lean_object* v___x_5079_; 
lean_dec_ref(v___y_5061_);
v___x_5079_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_5055_ = v___x_5071_;
v___y_5056_ = v___x_5079_;
goto v___jp_5054_;
}
}
v___jp_5080_:
{
lean_object* v___x_5082_; 
v___x_5082_ = l_Lasm_JS_Data_describe(v_d_5052_);
v___y_5061_ = v___y_5081_;
v_received_5062_ = v___x_5082_;
goto v___jp_5060_;
}
v___jp_5083_:
{
if (lean_obj_tag(v_d_5052_) == 9)
{
lean_object* v_value_5085_; lean_object* v_description_5086_; lean_object* v___x_5087_; uint8_t v___x_5088_; 
v_value_5085_ = lean_ctor_get(v_d_5052_, 0);
v_description_5086_ = lean_ctor_get(v_d_5052_, 1);
v___x_5087_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5088_ = lean_string_dec_eq(v_description_5086_, v___x_5087_);
if (v___x_5088_ == 0)
{
v___y_5081_ = v_a_5084_;
goto v___jp_5080_;
}
else
{
lean_object* v___x_5090_; uint8_t v_isShared_5091_; uint8_t v_isSharedCheck_5105_; 
lean_inc(v_value_5085_);
v_isSharedCheck_5105_ = !lean_is_exclusive(v_d_5052_);
if (v_isSharedCheck_5105_ == 0)
{
lean_object* v_unused_5106_; lean_object* v_unused_5107_; 
v_unused_5106_ = lean_ctor_get(v_d_5052_, 1);
lean_dec(v_unused_5106_);
v_unused_5107_ = lean_ctor_get(v_d_5052_, 0);
lean_dec(v_unused_5107_);
v___x_5090_ = v_d_5052_;
v_isShared_5091_ = v_isSharedCheck_5105_;
goto v_resetjp_5089_;
}
else
{
lean_dec(v_d_5052_);
v___x_5090_ = lean_box(0);
v_isShared_5091_ = v_isSharedCheck_5105_;
goto v_resetjp_5089_;
}
v_resetjp_5089_:
{
uint32_t v___x_5092_; uint64_t v___x_5093_; lean_object* v___x_5095_; 
v___x_5092_ = 206;
v___x_5093_ = 0ULL;
lean_inc(v_value_5085_);
if (v_isShared_5091_ == 0)
{
lean_ctor_set(v___x_5090_, 1, v___x_5087_);
v___x_5095_ = v___x_5090_;
goto v_reusejp_5094_;
}
else
{
lean_object* v_reuseFailAlloc_5104_; 
v_reuseFailAlloc_5104_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5104_, 0, v_value_5085_);
lean_ctor_set(v_reuseFailAlloc_5104_, 1, v___x_5087_);
v___x_5095_ = v_reuseFailAlloc_5104_;
goto v_reusejp_5094_;
}
v_reusejp_5094_:
{
uint32_t v___x_5096_; lean_object* v___x_5097_; 
v___x_5096_ = lasm_js_value_handle(v_value_5085_);
lean_dec(v_value_5085_);
v___x_5097_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5092_, v___x_5093_, v___x_5095_, v___x_5096_);
lean_dec_ref(v___x_5095_);
if (lean_obj_tag(v___x_5097_) == 0)
{
lean_object* v_a_5098_; uint8_t v___x_5099_; 
v_a_5098_ = lean_ctor_get(v___x_5097_, 0);
lean_inc(v_a_5098_);
lean_dec_ref_known(v___x_5097_, 1);
v___x_5099_ = lean_string_validate_utf8(v_a_5098_);
if (v___x_5099_ == 0)
{
lean_object* v___x_5100_; lean_object* v___x_5101_; 
lean_dec(v_a_5098_);
v___x_5100_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_5101_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5100_);
v___y_5061_ = v_a_5084_;
v_received_5062_ = v___x_5101_;
goto v___jp_5060_;
}
else
{
lean_object* v___x_5102_; 
v___x_5102_ = lean_string_from_utf8_unchecked(v_a_5098_);
v___y_5061_ = v_a_5084_;
v_received_5062_ = v___x_5102_;
goto v___jp_5060_;
}
}
else
{
lean_object* v___x_5103_; 
lean_dec_ref_known(v___x_5097_, 1);
v___x_5103_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_5061_ = v_a_5084_;
v_received_5062_ = v___x_5103_;
goto v___jp_5060_;
}
}
}
}
}
else
{
v___y_5081_ = v_a_5084_;
goto v___jp_5080_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___boxed(lean_object* v_context_5130_, lean_object* v_d_5131_, lean_object* v_a_5132_){
_start:
{
lean_object* v_res_5133_; 
v_res_5133_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3(v_context_5130_, v_d_5131_);
lean_dec_ref(v_context_5130_);
return v_res_5133_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0(lean_object* v_context_5134_, lean_object* v_x_5135_){
_start:
{
lean_object* v_val_5138_; 
if (lean_obj_tag(v_x_5135_) == 0)
{
lean_object* v_a_5140_; lean_object* v___x_5142_; uint8_t v_isShared_5143_; uint8_t v_isSharedCheck_5148_; 
v_a_5140_ = lean_ctor_get(v_x_5135_, 0);
v_isSharedCheck_5148_ = !lean_is_exclusive(v_x_5135_);
if (v_isSharedCheck_5148_ == 0)
{
v___x_5142_ = v_x_5135_;
v_isShared_5143_ = v_isSharedCheck_5148_;
goto v_resetjp_5141_;
}
else
{
lean_inc(v_a_5140_);
lean_dec(v_x_5135_);
v___x_5142_ = lean_box(0);
v_isShared_5143_ = v_isSharedCheck_5148_;
goto v_resetjp_5141_;
}
v_resetjp_5141_:
{
lean_object* v___x_5145_; 
if (v_isShared_5143_ == 0)
{
v___x_5145_ = v___x_5142_;
goto v_reusejp_5144_;
}
else
{
lean_object* v_reuseFailAlloc_5147_; 
v_reuseFailAlloc_5147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5147_, 0, v_a_5140_);
v___x_5145_ = v_reuseFailAlloc_5147_;
goto v_reusejp_5144_;
}
v_reusejp_5144_:
{
lean_object* v___x_5146_; 
v___x_5146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5146_, 0, v___x_5145_);
return v___x_5146_;
}
}
}
else
{
lean_object* v_a_5149_; lean_object* v___x_5151_; uint8_t v_isShared_5152_; uint8_t v_isSharedCheck_5162_; 
v_a_5149_ = lean_ctor_get(v_x_5135_, 0);
v_isSharedCheck_5162_ = !lean_is_exclusive(v_x_5135_);
if (v_isSharedCheck_5162_ == 0)
{
v___x_5151_ = v_x_5135_;
v_isShared_5152_ = v_isSharedCheck_5162_;
goto v_resetjp_5150_;
}
else
{
lean_inc(v_a_5149_);
lean_dec(v_x_5135_);
v___x_5151_ = lean_box(0);
v_isShared_5152_ = v_isSharedCheck_5162_;
goto v_resetjp_5150_;
}
v_resetjp_5150_:
{
lean_object* v___x_5153_; 
v___x_5153_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3(v_context_5134_, v_a_5149_);
if (lean_obj_tag(v___x_5153_) == 0)
{
lean_object* v_a_5154_; lean_object* v___x_5156_; 
v_a_5154_ = lean_ctor_get(v___x_5153_, 0);
lean_inc(v_a_5154_);
lean_dec_ref_known(v___x_5153_, 1);
if (v_isShared_5152_ == 0)
{
lean_ctor_set(v___x_5151_, 0, v_a_5154_);
v___x_5156_ = v___x_5151_;
goto v_reusejp_5155_;
}
else
{
lean_object* v_reuseFailAlloc_5157_; 
v_reuseFailAlloc_5157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5157_, 0, v_a_5154_);
v___x_5156_ = v_reuseFailAlloc_5157_;
goto v_reusejp_5155_;
}
v_reusejp_5155_:
{
v_val_5138_ = v___x_5156_;
goto v___jp_5137_;
}
}
else
{
lean_object* v_a_5158_; lean_object* v___x_5160_; 
v_a_5158_ = lean_ctor_get(v___x_5153_, 0);
lean_inc(v_a_5158_);
lean_dec_ref_known(v___x_5153_, 1);
if (v_isShared_5152_ == 0)
{
lean_ctor_set_tag(v___x_5151_, 0);
lean_ctor_set(v___x_5151_, 0, v_a_5158_);
v___x_5160_ = v___x_5151_;
goto v_reusejp_5159_;
}
else
{
lean_object* v_reuseFailAlloc_5161_; 
v_reuseFailAlloc_5161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5161_, 0, v_a_5158_);
v___x_5160_ = v_reuseFailAlloc_5161_;
goto v_reusejp_5159_;
}
v_reusejp_5159_:
{
v_val_5138_ = v___x_5160_;
goto v___jp_5137_;
}
}
}
}
v___jp_5137_:
{
lean_object* v___x_5139_; 
v___x_5139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5139_, 0, v_val_5138_);
return v___x_5139_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0___boxed(lean_object* v_context_5163_, lean_object* v_x_5164_, lean_object* v___y_5165_){
_start:
{
lean_object* v_res_5166_; 
v_res_5166_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0(v_context_5163_, v_x_5164_);
lean_dec_ref(v_context_5163_);
return v_res_5166_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3(lean_object* v___f_5167_, lean_object* v_x_5168_){
_start:
{
if (lean_obj_tag(v_x_5168_) == 0)
{
lean_object* v_a_5170_; lean_object* v___x_5172_; uint8_t v_isShared_5173_; uint8_t v_isSharedCheck_5178_; 
lean_dec_ref(v___f_5167_);
v_a_5170_ = lean_ctor_get(v_x_5168_, 0);
v_isSharedCheck_5178_ = !lean_is_exclusive(v_x_5168_);
if (v_isSharedCheck_5178_ == 0)
{
v___x_5172_ = v_x_5168_;
v_isShared_5173_ = v_isSharedCheck_5178_;
goto v_resetjp_5171_;
}
else
{
lean_inc(v_a_5170_);
lean_dec(v_x_5168_);
v___x_5172_ = lean_box(0);
v_isShared_5173_ = v_isSharedCheck_5178_;
goto v_resetjp_5171_;
}
v_resetjp_5171_:
{
lean_object* v___x_5175_; 
if (v_isShared_5173_ == 0)
{
v___x_5175_ = v___x_5172_;
goto v_reusejp_5174_;
}
else
{
lean_object* v_reuseFailAlloc_5177_; 
v_reuseFailAlloc_5177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5177_, 0, v_a_5170_);
v___x_5175_ = v_reuseFailAlloc_5177_;
goto v_reusejp_5174_;
}
v_reusejp_5174_:
{
lean_object* v___x_5176_; 
v___x_5176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5176_, 0, v___x_5175_);
return v___x_5176_;
}
}
}
else
{
lean_object* v___x_5180_; uint8_t v_isShared_5181_; uint8_t v_isSharedCheck_5190_; 
v_isSharedCheck_5190_ = !lean_is_exclusive(v_x_5168_);
if (v_isSharedCheck_5190_ == 0)
{
lean_object* v_unused_5191_; 
v_unused_5191_ = lean_ctor_get(v_x_5168_, 0);
lean_dec(v_unused_5191_);
v___x_5180_ = v_x_5168_;
v_isShared_5181_ = v_isSharedCheck_5190_;
goto v_resetjp_5179_;
}
else
{
lean_dec(v_x_5168_);
v___x_5180_ = lean_box(0);
v_isShared_5181_ = v_isSharedCheck_5190_;
goto v_resetjp_5179_;
}
v_resetjp_5179_:
{
lean_object* v___x_5182_; uint8_t v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5186_; 
v___x_5182_ = lean_unsigned_to_nat(0u);
v___x_5183_ = 0;
v___x_5184_ = lean_io_promise_new();
if (v_isShared_5181_ == 0)
{
lean_ctor_set(v___x_5180_, 0, v___x_5184_);
v___x_5186_ = v___x_5180_;
goto v_reusejp_5185_;
}
else
{
lean_object* v_reuseFailAlloc_5189_; 
v_reuseFailAlloc_5189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5189_, 0, v___x_5184_);
v___x_5186_ = v_reuseFailAlloc_5189_;
goto v_reusejp_5185_;
}
v_reusejp_5185_:
{
lean_object* v___x_5187_; lean_object* v___x_5188_; 
v___x_5187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5187_, 0, v___x_5186_);
v___x_5188_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5182_, v___x_5183_, v___x_5187_, v___f_5167_);
return v___x_5188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3___boxed(lean_object* v___f_5192_, lean_object* v_x_5193_, lean_object* v___y_5194_){
_start:
{
lean_object* v_res_5195_; 
v_res_5195_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3(v___f_5192_, v_x_5193_);
return v_res_5195_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2(lean_object* v___f_5196_, lean_object* v_x_5197_){
_start:
{
if (lean_obj_tag(v_x_5197_) == 0)
{
lean_object* v_a_5199_; lean_object* v___x_5201_; uint8_t v_isShared_5202_; uint8_t v_isSharedCheck_5207_; 
lean_dec_ref(v___f_5196_);
v_a_5199_ = lean_ctor_get(v_x_5197_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v_x_5197_);
if (v_isSharedCheck_5207_ == 0)
{
v___x_5201_ = v_x_5197_;
v_isShared_5202_ = v_isSharedCheck_5207_;
goto v_resetjp_5200_;
}
else
{
lean_inc(v_a_5199_);
lean_dec(v_x_5197_);
v___x_5201_ = lean_box(0);
v_isShared_5202_ = v_isSharedCheck_5207_;
goto v_resetjp_5200_;
}
v_resetjp_5200_:
{
lean_object* v___x_5204_; 
if (v_isShared_5202_ == 0)
{
v___x_5204_ = v___x_5201_;
goto v_reusejp_5203_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v_a_5199_);
v___x_5204_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5203_;
}
v_reusejp_5203_:
{
lean_object* v___x_5205_; 
v___x_5205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5205_, 0, v___x_5204_);
return v___x_5205_;
}
}
}
else
{
lean_object* v_a_5208_; lean_object* v___x_5209_; 
v_a_5208_ = lean_ctor_get(v_x_5197_, 0);
lean_inc(v_a_5208_);
lean_dec_ref_known(v_x_5197_, 1);
v___x_5209_ = lean_apply_2(v___f_5196_, v_a_5208_, lean_box(0));
return v___x_5209_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2___boxed(lean_object* v___f_5210_, lean_object* v_x_5211_, lean_object* v___y_5212_){
_start:
{
lean_object* v_res_5213_; 
v_res_5213_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2(v___f_5210_, v_x_5211_);
return v_res_5213_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2(lean_object* v_context_5214_, uint32_t v_op_5215_, uint64_t v_flags_5216_, lean_object* v_payload_5217_, lean_object* v_failurePrefix_5218_){
_start:
{
lean_object* v___f_5220_; lean_object* v___f_5221_; lean_object* v___f_5222_; lean_object* v___f_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___f_5226_; lean_object* v___f_5227_; lean_object* v___x_5228_; uint8_t v___x_5229_; lean_object* v_val_5231_; lean_object* v___x_5234_; 
v___f_5220_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5220_, 0, v_context_5214_);
v___f_5221_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5221_, 0, v___f_5220_);
v___f_5222_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5222_, 0, v___f_5221_);
lean_inc_ref(v_failurePrefix_5218_);
v___f_5223_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5223_, 0, v_failurePrefix_5218_);
v___x_5224_ = lean_box_uint32(v_op_5215_);
v___x_5225_ = lean_box_uint64(v_flags_5216_);
lean_inc_ref(v___f_5222_);
v___f_5226_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_5226_, 0, v_failurePrefix_5218_);
lean_closure_set(v___f_5226_, 1, v___x_5224_);
lean_closure_set(v___f_5226_, 2, v___x_5225_);
lean_closure_set(v___f_5226_, 3, v_payload_5217_);
lean_closure_set(v___f_5226_, 4, v___f_5223_);
lean_closure_set(v___f_5226_, 5, v___f_5222_);
lean_closure_set(v___f_5226_, 6, v___f_5222_);
v___f_5227_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5227_, 0, v___f_5226_);
v___x_5228_ = lean_unsigned_to_nat(0u);
v___x_5229_ = 0;
v___x_5234_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5234_) == 0)
{
lean_object* v_a_5235_; lean_object* v___x_5237_; uint8_t v_isShared_5238_; uint8_t v_isSharedCheck_5242_; 
v_a_5235_ = lean_ctor_get(v___x_5234_, 0);
v_isSharedCheck_5242_ = !lean_is_exclusive(v___x_5234_);
if (v_isSharedCheck_5242_ == 0)
{
v___x_5237_ = v___x_5234_;
v_isShared_5238_ = v_isSharedCheck_5242_;
goto v_resetjp_5236_;
}
else
{
lean_inc(v_a_5235_);
lean_dec(v___x_5234_);
v___x_5237_ = lean_box(0);
v_isShared_5238_ = v_isSharedCheck_5242_;
goto v_resetjp_5236_;
}
v_resetjp_5236_:
{
lean_object* v___x_5240_; 
if (v_isShared_5238_ == 0)
{
lean_ctor_set_tag(v___x_5237_, 1);
v___x_5240_ = v___x_5237_;
goto v_reusejp_5239_;
}
else
{
lean_object* v_reuseFailAlloc_5241_; 
v_reuseFailAlloc_5241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5241_, 0, v_a_5235_);
v___x_5240_ = v_reuseFailAlloc_5241_;
goto v_reusejp_5239_;
}
v_reusejp_5239_:
{
v_val_5231_ = v___x_5240_;
goto v___jp_5230_;
}
}
}
else
{
lean_object* v_a_5243_; lean_object* v___x_5245_; uint8_t v_isShared_5246_; uint8_t v_isSharedCheck_5250_; 
v_a_5243_ = lean_ctor_get(v___x_5234_, 0);
v_isSharedCheck_5250_ = !lean_is_exclusive(v___x_5234_);
if (v_isSharedCheck_5250_ == 0)
{
v___x_5245_ = v___x_5234_;
v_isShared_5246_ = v_isSharedCheck_5250_;
goto v_resetjp_5244_;
}
else
{
lean_inc(v_a_5243_);
lean_dec(v___x_5234_);
v___x_5245_ = lean_box(0);
v_isShared_5246_ = v_isSharedCheck_5250_;
goto v_resetjp_5244_;
}
v_resetjp_5244_:
{
lean_object* v___x_5248_; 
if (v_isShared_5246_ == 0)
{
lean_ctor_set_tag(v___x_5245_, 0);
v___x_5248_ = v___x_5245_;
goto v_reusejp_5247_;
}
else
{
lean_object* v_reuseFailAlloc_5249_; 
v_reuseFailAlloc_5249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5249_, 0, v_a_5243_);
v___x_5248_ = v_reuseFailAlloc_5249_;
goto v_reusejp_5247_;
}
v_reusejp_5247_:
{
v_val_5231_ = v___x_5248_;
goto v___jp_5230_;
}
}
}
v___jp_5230_:
{
lean_object* v___x_5232_; lean_object* v___x_5233_; 
v___x_5232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5232_, 0, v_val_5231_);
v___x_5233_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5228_, v___x_5229_, v___x_5232_, v___f_5227_);
return v___x_5233_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___boxed(lean_object* v_context_5251_, lean_object* v_op_5252_, lean_object* v_flags_5253_, lean_object* v_payload_5254_, lean_object* v_failurePrefix_5255_, lean_object* v_a_5256_){
_start:
{
uint32_t v_op_boxed_5257_; uint64_t v_flags_boxed_5258_; lean_object* v_res_5259_; 
v_op_boxed_5257_ = lean_unbox_uint32(v_op_5252_);
lean_dec(v_op_5252_);
v_flags_boxed_5258_ = lean_unbox_uint64(v_flags_5253_);
lean_dec_ref(v_flags_5253_);
v_res_5259_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2(v_context_5251_, v_op_boxed_5257_, v_flags_boxed_5258_, v_payload_5254_, v_failurePrefix_5255_);
return v_res_5259_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0(void){
_start:
{
uint64_t v___x_5260_; uint8_t v___x_5261_; uint64_t v___x_5262_; 
v___x_5260_ = 8ULL;
v___x_5261_ = 0;
v___x_5262_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1(v___x_5261_, v___x_5260_);
return v___x_5262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1(lean_object* v_o_5263_, lean_object* v_name_5264_, lean_object* v_args_5265_){
_start:
{
lean_object* v___x_5267_; lean_object* v___x_5268_; lean_object* v___x_5269_; lean_object* v___x_5270_; lean_object* v___x_5271_; uint32_t v___x_5272_; uint64_t v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; 
v___x_5267_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5268_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5268_, 0, v_o_5263_);
lean_ctor_set(v___x_5268_, 1, v___x_5267_);
lean_inc_ref(v_name_5264_);
v___x_5269_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5269_, 0, v_name_5264_);
v___x_5270_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_5271_ = lean_string_append(v___x_5270_, v_name_5264_);
lean_dec_ref(v_name_5264_);
v___x_5272_ = 205;
v___x_5273_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0);
v___x_5274_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5274_, 0, v_args_5265_);
v___x_5275_ = lean_unsigned_to_nat(3u);
v___x_5276_ = lean_mk_empty_array_with_capacity(v___x_5275_);
v___x_5277_ = lean_array_push(v___x_5276_, v___x_5268_);
v___x_5278_ = lean_array_push(v___x_5277_, v___x_5269_);
v___x_5279_ = lean_array_push(v___x_5278_, v___x_5274_);
v___x_5280_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5280_, 0, v___x_5279_);
v___x_5281_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2(v___x_5271_, v___x_5272_, v___x_5273_, v___x_5280_, v___x_5267_);
return v___x_5281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___boxed(lean_object* v_o_5282_, lean_object* v_name_5283_, lean_object* v_args_5284_, lean_object* v___y_5285_){
_start:
{
lean_object* v_res_5286_; 
v_res_5286_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1(v_o_5282_, v_name_5283_, v_args_5284_);
return v_res_5286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0(lean_object* v_x_5287_){
_start:
{
if (lean_obj_tag(v_x_5287_) == 0)
{
lean_object* v___x_5288_; 
v___x_5288_ = lean_box(0);
return v___x_5288_;
}
else
{
lean_object* v_val_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; 
v_val_5289_ = lean_ctor_get(v_x_5287_, 0);
v___x_5290_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_5291_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(v_val_5289_);
v___x_5292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5292_, 0, v___x_5290_);
lean_ctor_set(v___x_5292_, 1, v___x_5291_);
v___x_5293_ = lean_unsigned_to_nat(1u);
v___x_5294_ = lean_mk_empty_array_with_capacity(v___x_5293_);
v___x_5295_ = lean_array_push(v___x_5294_, v___x_5292_);
v___x_5296_ = l_Lasm_JS_Web_Support_fields(v___x_5295_);
lean_dec_ref(v___x_5295_);
return v___x_5296_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0___boxed(lean_object* v_x_5297_){
_start:
{
lean_object* v_res_5298_; 
v_res_5298_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0(v_x_5297_);
lean_dec(v_x_5297_);
return v_res_5298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_getMany(lean_object* v_self_5300_, lean_object* v_keys_5301_, lean_object* v_options_5302_){
_start:
{
lean_object* v___x_5304_; size_t v_sz_5305_; size_t v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; 
v___x_5304_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_getMany___closed__0));
v_sz_5305_ = lean_array_size(v_keys_5301_);
v___x_5306_ = ((size_t)0ULL);
v___x_5307_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(v_sz_5305_, v___x_5306_, v_keys_5301_);
v___x_5308_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5308_, 0, v___x_5307_);
v___x_5309_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0(v_options_5302_);
v___x_5310_ = lean_unsigned_to_nat(2u);
v___x_5311_ = lean_mk_empty_array_with_capacity(v___x_5310_);
v___x_5312_ = lean_array_push(v___x_5311_, v___x_5308_);
v___x_5313_ = lean_array_push(v___x_5312_, v___x_5309_);
v___x_5314_ = l_Lasm_JS_Web_Support_args(v___x_5313_);
v___x_5315_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1(v_self_5300_, v___x_5304_, v___x_5314_);
return v___x_5315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_getMany___boxed(lean_object* v_self_5316_, lean_object* v_keys_5317_, lean_object* v_options_5318_, lean_object* v_a_5319_){
_start:
{
lean_object* v_res_5320_; 
v_res_5320_ = l_Lasm_JS_Deno_Kv_getMany(v_self_5316_, v_keys_5317_, v_options_5318_);
lean_dec(v_options_5318_);
return v_res_5320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0(lean_object* v_x_5321_){
_start:
{
if (lean_obj_tag(v_x_5321_) == 0)
{
lean_object* v___x_5322_; 
v___x_5322_ = lean_box(0);
return v___x_5322_;
}
else
{
lean_object* v_val_5323_; lean_object* v___x_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; lean_object* v___x_5330_; 
v_val_5323_ = lean_ctor_get(v_x_5321_, 0);
v___x_5324_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_5325_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_val_5323_);
v___x_5326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5326_, 0, v___x_5324_);
lean_ctor_set(v___x_5326_, 1, v___x_5325_);
v___x_5327_ = lean_unsigned_to_nat(1u);
v___x_5328_ = lean_mk_empty_array_with_capacity(v___x_5327_);
v___x_5329_ = lean_array_push(v___x_5328_, v___x_5326_);
v___x_5330_ = l_Lasm_JS_Web_Support_fields(v___x_5329_);
lean_dec_ref(v___x_5329_);
return v___x_5330_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0___boxed(lean_object* v_x_5331_){
_start:
{
lean_object* v_res_5332_; 
v_res_5332_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0(v_x_5331_);
lean_dec(v_x_5331_);
return v_res_5332_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1(lean_object* v___f_5333_, lean_object* v_bytes_5334_){
_start:
{
lean_object* v___x_5336_; uint8_t v___x_5337_; lean_object* v_val_5339_; lean_object* v___x_5342_; 
v___x_5336_ = lean_unsigned_to_nat(0u);
v___x_5337_ = 0;
v___x_5342_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5334_);
if (lean_obj_tag(v___x_5342_) == 0)
{
lean_object* v_a_5343_; lean_object* v___x_5345_; uint8_t v_isShared_5346_; uint8_t v_isSharedCheck_5350_; 
v_a_5343_ = lean_ctor_get(v___x_5342_, 0);
v_isSharedCheck_5350_ = !lean_is_exclusive(v___x_5342_);
if (v_isSharedCheck_5350_ == 0)
{
v___x_5345_ = v___x_5342_;
v_isShared_5346_ = v_isSharedCheck_5350_;
goto v_resetjp_5344_;
}
else
{
lean_inc(v_a_5343_);
lean_dec(v___x_5342_);
v___x_5345_ = lean_box(0);
v_isShared_5346_ = v_isSharedCheck_5350_;
goto v_resetjp_5344_;
}
v_resetjp_5344_:
{
lean_object* v___x_5348_; 
if (v_isShared_5346_ == 0)
{
lean_ctor_set_tag(v___x_5345_, 1);
v___x_5348_ = v___x_5345_;
goto v_reusejp_5347_;
}
else
{
lean_object* v_reuseFailAlloc_5349_; 
v_reuseFailAlloc_5349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5349_, 0, v_a_5343_);
v___x_5348_ = v_reuseFailAlloc_5349_;
goto v_reusejp_5347_;
}
v_reusejp_5347_:
{
v_val_5339_ = v___x_5348_;
goto v___jp_5338_;
}
}
}
else
{
lean_object* v_a_5351_; lean_object* v___x_5353_; uint8_t v_isShared_5354_; uint8_t v_isSharedCheck_5358_; 
v_a_5351_ = lean_ctor_get(v___x_5342_, 0);
v_isSharedCheck_5358_ = !lean_is_exclusive(v___x_5342_);
if (v_isSharedCheck_5358_ == 0)
{
v___x_5353_ = v___x_5342_;
v_isShared_5354_ = v_isSharedCheck_5358_;
goto v_resetjp_5352_;
}
else
{
lean_inc(v_a_5351_);
lean_dec(v___x_5342_);
v___x_5353_ = lean_box(0);
v_isShared_5354_ = v_isSharedCheck_5358_;
goto v_resetjp_5352_;
}
v_resetjp_5352_:
{
lean_object* v___x_5356_; 
if (v_isShared_5354_ == 0)
{
lean_ctor_set_tag(v___x_5353_, 0);
v___x_5356_ = v___x_5353_;
goto v_reusejp_5355_;
}
else
{
lean_object* v_reuseFailAlloc_5357_; 
v_reuseFailAlloc_5357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5357_, 0, v_a_5351_);
v___x_5356_ = v_reuseFailAlloc_5357_;
goto v_reusejp_5355_;
}
v_reusejp_5355_:
{
v_val_5339_ = v___x_5356_;
goto v___jp_5338_;
}
}
}
v___jp_5338_:
{
lean_object* v___x_5340_; lean_object* v___x_5341_; 
v___x_5340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5340_, 0, v_val_5339_);
v___x_5341_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5336_, v___x_5337_, v___x_5340_, v___f_5333_);
return v___x_5341_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1___boxed(lean_object* v___f_5359_, lean_object* v_bytes_5360_, lean_object* v___y_5361_){
_start:
{
lean_object* v_res_5362_; 
v_res_5362_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1(v___f_5359_, v_bytes_5360_);
lean_dec_ref(v_bytes_5360_);
return v_res_5362_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2(lean_object* v___f_5363_, lean_object* v_x_5364_){
_start:
{
if (lean_obj_tag(v_x_5364_) == 0)
{
lean_object* v_a_5366_; lean_object* v___x_5368_; uint8_t v_isShared_5369_; uint8_t v_isSharedCheck_5374_; 
lean_dec_ref(v___f_5363_);
v_a_5366_ = lean_ctor_get(v_x_5364_, 0);
v_isSharedCheck_5374_ = !lean_is_exclusive(v_x_5364_);
if (v_isSharedCheck_5374_ == 0)
{
v___x_5368_ = v_x_5364_;
v_isShared_5369_ = v_isSharedCheck_5374_;
goto v_resetjp_5367_;
}
else
{
lean_inc(v_a_5366_);
lean_dec(v_x_5364_);
v___x_5368_ = lean_box(0);
v_isShared_5369_ = v_isSharedCheck_5374_;
goto v_resetjp_5367_;
}
v_resetjp_5367_:
{
lean_object* v___x_5371_; 
if (v_isShared_5369_ == 0)
{
v___x_5371_ = v___x_5368_;
goto v_reusejp_5370_;
}
else
{
lean_object* v_reuseFailAlloc_5373_; 
v_reuseFailAlloc_5373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5373_, 0, v_a_5366_);
v___x_5371_ = v_reuseFailAlloc_5373_;
goto v_reusejp_5370_;
}
v_reusejp_5370_:
{
lean_object* v___x_5372_; 
v___x_5372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5372_, 0, v___x_5371_);
return v___x_5372_;
}
}
}
else
{
lean_object* v_a_5375_; lean_object* v___x_5376_; 
v_a_5375_ = lean_ctor_get(v_x_5364_, 0);
lean_inc(v_a_5375_);
lean_dec_ref_known(v_x_5364_, 1);
v___x_5376_ = lean_apply_2(v___f_5363_, v_a_5375_, lean_box(0));
return v___x_5376_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2___boxed(lean_object* v___f_5377_, lean_object* v_x_5378_, lean_object* v___y_5379_){
_start:
{
lean_object* v_res_5380_; 
v_res_5380_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2(v___f_5377_, v_x_5378_);
return v_res_5380_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3(lean_object* v___f_5381_, lean_object* v_x_5382_){
_start:
{
if (lean_obj_tag(v_x_5382_) == 0)
{
lean_object* v_a_5384_; lean_object* v___x_5386_; uint8_t v_isShared_5387_; uint8_t v_isSharedCheck_5392_; 
lean_dec_ref(v___f_5381_);
v_a_5384_ = lean_ctor_get(v_x_5382_, 0);
v_isSharedCheck_5392_ = !lean_is_exclusive(v_x_5382_);
if (v_isSharedCheck_5392_ == 0)
{
v___x_5386_ = v_x_5382_;
v_isShared_5387_ = v_isSharedCheck_5392_;
goto v_resetjp_5385_;
}
else
{
lean_inc(v_a_5384_);
lean_dec(v_x_5382_);
v___x_5386_ = lean_box(0);
v_isShared_5387_ = v_isSharedCheck_5392_;
goto v_resetjp_5385_;
}
v_resetjp_5385_:
{
lean_object* v___x_5389_; 
if (v_isShared_5387_ == 0)
{
v___x_5389_ = v___x_5386_;
goto v_reusejp_5388_;
}
else
{
lean_object* v_reuseFailAlloc_5391_; 
v_reuseFailAlloc_5391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5391_, 0, v_a_5384_);
v___x_5389_ = v_reuseFailAlloc_5391_;
goto v_reusejp_5388_;
}
v_reusejp_5388_:
{
lean_object* v___x_5390_; 
v___x_5390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5390_, 0, v___x_5389_);
return v___x_5390_;
}
}
}
else
{
lean_object* v___x_5394_; uint8_t v_isShared_5395_; uint8_t v_isSharedCheck_5404_; 
v_isSharedCheck_5404_ = !lean_is_exclusive(v_x_5382_);
if (v_isSharedCheck_5404_ == 0)
{
lean_object* v_unused_5405_; 
v_unused_5405_ = lean_ctor_get(v_x_5382_, 0);
lean_dec(v_unused_5405_);
v___x_5394_ = v_x_5382_;
v_isShared_5395_ = v_isSharedCheck_5404_;
goto v_resetjp_5393_;
}
else
{
lean_dec(v_x_5382_);
v___x_5394_ = lean_box(0);
v_isShared_5395_ = v_isSharedCheck_5404_;
goto v_resetjp_5393_;
}
v_resetjp_5393_:
{
lean_object* v___x_5396_; uint8_t v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5400_; 
v___x_5396_ = lean_unsigned_to_nat(0u);
v___x_5397_ = 0;
v___x_5398_ = lean_io_promise_new();
if (v_isShared_5395_ == 0)
{
lean_ctor_set(v___x_5394_, 0, v___x_5398_);
v___x_5400_ = v___x_5394_;
goto v_reusejp_5399_;
}
else
{
lean_object* v_reuseFailAlloc_5403_; 
v_reuseFailAlloc_5403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5403_, 0, v___x_5398_);
v___x_5400_ = v_reuseFailAlloc_5403_;
goto v_reusejp_5399_;
}
v_reusejp_5399_:
{
lean_object* v___x_5401_; lean_object* v___x_5402_; 
v___x_5401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5401_, 0, v___x_5400_);
v___x_5402_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5396_, v___x_5397_, v___x_5401_, v___f_5381_);
return v___x_5402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3___boxed(lean_object* v___f_5406_, lean_object* v_x_5407_, lean_object* v___y_5408_){
_start:
{
lean_object* v_res_5409_; 
v_res_5409_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3(v___f_5406_, v_x_5407_);
return v_res_5409_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_5410_, uint32_t v_op_5411_, uint64_t v_flags_5412_, lean_object* v_payload_5413_, lean_object* v___f_5414_, lean_object* v___f_5415_, lean_object* v___f_5416_, lean_object* v_x_5417_){
_start:
{
if (lean_obj_tag(v_x_5417_) == 0)
{
lean_object* v_a_5419_; lean_object* v___x_5421_; uint8_t v_isShared_5422_; uint8_t v_isSharedCheck_5427_; 
lean_dec_ref(v___f_5416_);
lean_dec_ref(v___f_5415_);
lean_dec_ref(v___f_5414_);
lean_dec(v_payload_5413_);
v_a_5419_ = lean_ctor_get(v_x_5417_, 0);
v_isSharedCheck_5427_ = !lean_is_exclusive(v_x_5417_);
if (v_isSharedCheck_5427_ == 0)
{
v___x_5421_ = v_x_5417_;
v_isShared_5422_ = v_isSharedCheck_5427_;
goto v_resetjp_5420_;
}
else
{
lean_inc(v_a_5419_);
lean_dec(v_x_5417_);
v___x_5421_ = lean_box(0);
v_isShared_5422_ = v_isSharedCheck_5427_;
goto v_resetjp_5420_;
}
v_resetjp_5420_:
{
lean_object* v___x_5424_; 
if (v_isShared_5422_ == 0)
{
v___x_5424_ = v___x_5421_;
goto v_reusejp_5423_;
}
else
{
lean_object* v_reuseFailAlloc_5426_; 
v_reuseFailAlloc_5426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5426_, 0, v_a_5419_);
v___x_5424_ = v_reuseFailAlloc_5426_;
goto v_reusejp_5423_;
}
v_reusejp_5423_:
{
lean_object* v___x_5425_; 
v___x_5425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5425_, 0, v___x_5424_);
return v___x_5425_;
}
}
}
else
{
lean_object* v_a_5428_; lean_object* v___x_5430_; uint8_t v_isShared_5431_; uint8_t v_isSharedCheck_5474_; 
v_a_5428_ = lean_ctor_get(v_x_5417_, 0);
v_isSharedCheck_5474_ = !lean_is_exclusive(v_x_5417_);
if (v_isSharedCheck_5474_ == 0)
{
v___x_5430_ = v_x_5417_;
v_isShared_5431_ = v_isSharedCheck_5474_;
goto v_resetjp_5429_;
}
else
{
lean_inc(v_a_5428_);
lean_dec(v_x_5417_);
v___x_5430_ = lean_box(0);
v_isShared_5431_ = v_isSharedCheck_5474_;
goto v_resetjp_5429_;
}
v_resetjp_5429_:
{
lean_object* v___x_5432_; lean_object* v___x_5433_; uint8_t v___x_5434_; 
v___x_5432_ = lean_string_utf8_byte_size(v_failurePrefix_5410_);
v___x_5433_ = lean_unsigned_to_nat(0u);
v___x_5434_ = lean_nat_dec_eq(v___x_5432_, v___x_5433_);
if (v___x_5434_ == 0)
{
lean_object* v___f_5435_; lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; lean_object* v___f_5439_; lean_object* v_val_5441_; lean_object* v___x_5446_; 
lean_dec_ref(v___f_5416_);
lean_inc(v_a_5428_);
v___f_5435_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5435_, 0, v_a_5428_);
v___x_5436_ = lean_box(v___x_5434_);
v___x_5437_ = lean_box_uint32(v_op_5411_);
v___x_5438_ = lean_box_uint64(v_flags_5412_);
lean_inc(v_payload_5413_);
v___f_5439_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_5439_, 0, v___x_5433_);
lean_closure_set(v___f_5439_, 1, v___x_5436_);
lean_closure_set(v___f_5439_, 2, v___f_5435_);
lean_closure_set(v___f_5439_, 3, v_a_5428_);
lean_closure_set(v___f_5439_, 4, v___x_5437_);
lean_closure_set(v___f_5439_, 5, v___x_5438_);
lean_closure_set(v___f_5439_, 6, v_payload_5413_);
v___x_5446_ = l_Lasm_JS_Wire_encodeIO(v_payload_5413_);
lean_dec(v_payload_5413_);
if (lean_obj_tag(v___x_5446_) == 0)
{
lean_object* v_a_5447_; lean_object* v___x_5449_; 
v_a_5447_ = lean_ctor_get(v___x_5446_, 0);
lean_inc(v_a_5447_);
lean_dec_ref_known(v___x_5446_, 1);
if (v_isShared_5431_ == 0)
{
lean_ctor_set(v___x_5430_, 0, v_a_5447_);
v___x_5449_ = v___x_5430_;
goto v_reusejp_5448_;
}
else
{
lean_object* v_reuseFailAlloc_5450_; 
v_reuseFailAlloc_5450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5450_, 0, v_a_5447_);
v___x_5449_ = v_reuseFailAlloc_5450_;
goto v_reusejp_5448_;
}
v_reusejp_5448_:
{
v_val_5441_ = v___x_5449_;
goto v___jp_5440_;
}
}
else
{
lean_object* v_a_5451_; lean_object* v___x_5453_; 
v_a_5451_ = lean_ctor_get(v___x_5446_, 0);
lean_inc(v_a_5451_);
lean_dec_ref_known(v___x_5446_, 1);
if (v_isShared_5431_ == 0)
{
lean_ctor_set_tag(v___x_5430_, 0);
lean_ctor_set(v___x_5430_, 0, v_a_5451_);
v___x_5453_ = v___x_5430_;
goto v_reusejp_5452_;
}
else
{
lean_object* v_reuseFailAlloc_5454_; 
v_reuseFailAlloc_5454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5454_, 0, v_a_5451_);
v___x_5453_ = v_reuseFailAlloc_5454_;
goto v_reusejp_5452_;
}
v_reusejp_5452_:
{
v_val_5441_ = v___x_5453_;
goto v___jp_5440_;
}
}
v___jp_5440_:
{
lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; 
v___x_5442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5442_, 0, v_val_5441_);
v___x_5443_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5433_, v___x_5434_, v___x_5442_, v___f_5439_);
v___x_5444_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5433_, v___x_5434_, v___x_5443_, v___f_5414_);
v___x_5445_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5433_, v___x_5434_, v___x_5444_, v___f_5415_);
return v___x_5445_;
}
}
else
{
lean_object* v___f_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; lean_object* v___f_5458_; uint8_t v___x_5459_; lean_object* v_val_5461_; lean_object* v___x_5465_; 
lean_dec_ref(v___f_5415_);
lean_dec_ref(v___f_5414_);
lean_inc(v_a_5428_);
v___f_5455_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5455_, 0, v_a_5428_);
v___x_5456_ = lean_box_uint32(v_op_5411_);
v___x_5457_ = lean_box_uint64(v_flags_5412_);
lean_inc(v_payload_5413_);
v___f_5458_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_5458_, 0, v___f_5455_);
lean_closure_set(v___f_5458_, 1, v_a_5428_);
lean_closure_set(v___f_5458_, 2, v___x_5456_);
lean_closure_set(v___f_5458_, 3, v___x_5457_);
lean_closure_set(v___f_5458_, 4, v_payload_5413_);
v___x_5459_ = 0;
v___x_5465_ = l_Lasm_JS_Wire_encodeIO(v_payload_5413_);
lean_dec(v_payload_5413_);
if (lean_obj_tag(v___x_5465_) == 0)
{
lean_object* v_a_5466_; lean_object* v___x_5468_; 
v_a_5466_ = lean_ctor_get(v___x_5465_, 0);
lean_inc(v_a_5466_);
lean_dec_ref_known(v___x_5465_, 1);
if (v_isShared_5431_ == 0)
{
lean_ctor_set(v___x_5430_, 0, v_a_5466_);
v___x_5468_ = v___x_5430_;
goto v_reusejp_5467_;
}
else
{
lean_object* v_reuseFailAlloc_5469_; 
v_reuseFailAlloc_5469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5469_, 0, v_a_5466_);
v___x_5468_ = v_reuseFailAlloc_5469_;
goto v_reusejp_5467_;
}
v_reusejp_5467_:
{
v_val_5461_ = v___x_5468_;
goto v___jp_5460_;
}
}
else
{
lean_object* v_a_5470_; lean_object* v___x_5472_; 
v_a_5470_ = lean_ctor_get(v___x_5465_, 0);
lean_inc(v_a_5470_);
lean_dec_ref_known(v___x_5465_, 1);
if (v_isShared_5431_ == 0)
{
lean_ctor_set_tag(v___x_5430_, 0);
lean_ctor_set(v___x_5430_, 0, v_a_5470_);
v___x_5472_ = v___x_5430_;
goto v_reusejp_5471_;
}
else
{
lean_object* v_reuseFailAlloc_5473_; 
v_reuseFailAlloc_5473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5473_, 0, v_a_5470_);
v___x_5472_ = v_reuseFailAlloc_5473_;
goto v_reusejp_5471_;
}
v_reusejp_5471_:
{
v_val_5461_ = v___x_5472_;
goto v___jp_5460_;
}
}
v___jp_5460_:
{
lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; 
v___x_5462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5462_, 0, v_val_5461_);
v___x_5463_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5433_, v___x_5459_, v___x_5462_, v___f_5458_);
v___x_5464_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5433_, v___x_5459_, v___x_5463_, v___f_5416_);
return v___x_5464_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_5475_, lean_object* v_op_5476_, lean_object* v_flags_5477_, lean_object* v_payload_5478_, lean_object* v___f_5479_, lean_object* v___f_5480_, lean_object* v___f_5481_, lean_object* v_x_5482_, lean_object* v___y_5483_){
_start:
{
uint32_t v_op_boxed_5484_; uint64_t v_flags_boxed_5485_; lean_object* v_res_5486_; 
v_op_boxed_5484_ = lean_unbox_uint32(v_op_5476_);
lean_dec(v_op_5476_);
v_flags_boxed_5485_ = lean_unbox_uint64(v_flags_5477_);
lean_dec_ref(v_flags_5477_);
v_res_5486_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9(v_failurePrefix_5475_, v_op_boxed_5484_, v_flags_boxed_5485_, v_payload_5478_, v___f_5479_, v___f_5480_, v___f_5481_, v_x_5482_);
lean_dec_ref(v_failurePrefix_5475_);
return v_res_5486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3(lean_object* v_context_5487_, lean_object* v_d_5488_){
_start:
{
lean_object* v___y_5491_; lean_object* v___y_5492_; lean_object* v___y_5497_; lean_object* v_received_5498_; lean_object* v___y_5517_; lean_object* v_a_5520_; lean_object* v___x_5544_; lean_object* v___x_5545_; 
v___x_5544_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0));
lean_inc(v_d_5488_);
v___x_5545_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(v_d_5488_, v___x_5544_);
if (lean_obj_tag(v___x_5545_) == 0)
{
lean_object* v_a_5546_; 
v_a_5546_ = lean_ctor_get(v___x_5545_, 0);
lean_inc(v_a_5546_);
lean_dec_ref_known(v___x_5545_, 1);
v_a_5520_ = v_a_5546_;
goto v___jp_5519_;
}
else
{
lean_object* v_a_5547_; lean_object* v___x_5548_; lean_object* v___x_5549_; 
v_a_5547_ = lean_ctor_get(v___x_5545_, 0);
lean_inc(v_a_5547_);
lean_dec_ref_known(v___x_5545_, 1);
v___x_5548_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_d_5488_);
v___x_5549_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_5488_, v___x_5548_);
if (lean_obj_tag(v___x_5549_) == 0)
{
lean_object* v_a_5550_; 
lean_dec(v_a_5547_);
v_a_5550_ = lean_ctor_get(v___x_5549_, 0);
lean_inc(v_a_5550_);
lean_dec_ref_known(v___x_5549_, 1);
v_a_5520_ = v_a_5550_;
goto v___jp_5519_;
}
else
{
lean_object* v_a_5551_; lean_object* v___x_5553_; uint8_t v_isShared_5554_; uint8_t v_isSharedCheck_5560_; 
lean_dec(v_d_5488_);
v_a_5551_ = lean_ctor_get(v___x_5549_, 0);
v_isSharedCheck_5560_ = !lean_is_exclusive(v___x_5549_);
if (v_isSharedCheck_5560_ == 0)
{
v___x_5553_ = v___x_5549_;
v_isShared_5554_ = v_isSharedCheck_5560_;
goto v_resetjp_5552_;
}
else
{
lean_inc(v_a_5551_);
lean_dec(v___x_5549_);
v___x_5553_ = lean_box(0);
v_isShared_5554_ = v_isSharedCheck_5560_;
goto v_resetjp_5552_;
}
v_resetjp_5552_:
{
lean_object* v___x_5555_; uint8_t v___x_5556_; lean_object* v___x_5558_; 
v___x_5555_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5555_, 0, v_a_5551_);
v___x_5556_ = lean_unbox(v_a_5547_);
lean_dec(v_a_5547_);
lean_ctor_set_uint8(v___x_5555_, sizeof(void*)*1, v___x_5556_);
if (v_isShared_5554_ == 0)
{
lean_ctor_set_tag(v___x_5553_, 0);
lean_ctor_set(v___x_5553_, 0, v___x_5555_);
v___x_5558_ = v___x_5553_;
goto v_reusejp_5557_;
}
else
{
lean_object* v_reuseFailAlloc_5559_; 
v_reuseFailAlloc_5559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5559_, 0, v___x_5555_);
v___x_5558_ = v_reuseFailAlloc_5559_;
goto v_reusejp_5557_;
}
v_reusejp_5557_:
{
return v___x_5558_;
}
}
}
}
v___jp_5490_:
{
lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; 
v___x_5493_ = lean_string_append(v___y_5491_, v___y_5492_);
lean_dec_ref(v___y_5492_);
v___x_5494_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5494_, 0, v___x_5493_);
v___x_5495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5495_, 0, v___x_5494_);
return v___x_5495_;
}
v___jp_5496_:
{
lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; uint8_t v___x_5510_; 
v___x_5499_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_5500_ = lean_string_append(v___x_5499_, v_context_5487_);
v___x_5501_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_5502_ = lean_string_append(v___x_5500_, v___x_5501_);
v___x_5503_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__1));
v___x_5504_ = lean_string_append(v___x_5502_, v___x_5503_);
v___x_5505_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_5506_ = lean_string_append(v___x_5504_, v___x_5505_);
v___x_5507_ = lean_string_append(v___x_5506_, v_received_5498_);
lean_dec_ref(v_received_5498_);
v___x_5508_ = lean_string_utf8_byte_size(v___y_5497_);
v___x_5509_ = lean_unsigned_to_nat(0u);
v___x_5510_ = lean_nat_dec_eq(v___x_5508_, v___x_5509_);
if (v___x_5510_ == 0)
{
lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; 
v___x_5511_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_5512_ = lean_string_append(v___x_5511_, v___y_5497_);
lean_dec_ref(v___y_5497_);
v___x_5513_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5514_ = lean_string_append(v___x_5512_, v___x_5513_);
v___y_5491_ = v___x_5507_;
v___y_5492_ = v___x_5514_;
goto v___jp_5490_;
}
else
{
lean_object* v___x_5515_; 
lean_dec_ref(v___y_5497_);
v___x_5515_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_5491_ = v___x_5507_;
v___y_5492_ = v___x_5515_;
goto v___jp_5490_;
}
}
v___jp_5516_:
{
lean_object* v___x_5518_; 
v___x_5518_ = l_Lasm_JS_Data_describe(v_d_5488_);
v___y_5497_ = v___y_5517_;
v_received_5498_ = v___x_5518_;
goto v___jp_5496_;
}
v___jp_5519_:
{
if (lean_obj_tag(v_d_5488_) == 9)
{
lean_object* v_value_5521_; lean_object* v_description_5522_; lean_object* v___x_5523_; uint8_t v___x_5524_; 
v_value_5521_ = lean_ctor_get(v_d_5488_, 0);
v_description_5522_ = lean_ctor_get(v_d_5488_, 1);
v___x_5523_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5524_ = lean_string_dec_eq(v_description_5522_, v___x_5523_);
if (v___x_5524_ == 0)
{
v___y_5517_ = v_a_5520_;
goto v___jp_5516_;
}
else
{
lean_object* v___x_5526_; uint8_t v_isShared_5527_; uint8_t v_isSharedCheck_5541_; 
lean_inc(v_value_5521_);
v_isSharedCheck_5541_ = !lean_is_exclusive(v_d_5488_);
if (v_isSharedCheck_5541_ == 0)
{
lean_object* v_unused_5542_; lean_object* v_unused_5543_; 
v_unused_5542_ = lean_ctor_get(v_d_5488_, 1);
lean_dec(v_unused_5542_);
v_unused_5543_ = lean_ctor_get(v_d_5488_, 0);
lean_dec(v_unused_5543_);
v___x_5526_ = v_d_5488_;
v_isShared_5527_ = v_isSharedCheck_5541_;
goto v_resetjp_5525_;
}
else
{
lean_dec(v_d_5488_);
v___x_5526_ = lean_box(0);
v_isShared_5527_ = v_isSharedCheck_5541_;
goto v_resetjp_5525_;
}
v_resetjp_5525_:
{
uint32_t v___x_5528_; uint64_t v___x_5529_; lean_object* v___x_5531_; 
v___x_5528_ = 206;
v___x_5529_ = 0ULL;
lean_inc(v_value_5521_);
if (v_isShared_5527_ == 0)
{
lean_ctor_set(v___x_5526_, 1, v___x_5523_);
v___x_5531_ = v___x_5526_;
goto v_reusejp_5530_;
}
else
{
lean_object* v_reuseFailAlloc_5540_; 
v_reuseFailAlloc_5540_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5540_, 0, v_value_5521_);
lean_ctor_set(v_reuseFailAlloc_5540_, 1, v___x_5523_);
v___x_5531_ = v_reuseFailAlloc_5540_;
goto v_reusejp_5530_;
}
v_reusejp_5530_:
{
uint32_t v___x_5532_; lean_object* v___x_5533_; 
v___x_5532_ = lasm_js_value_handle(v_value_5521_);
lean_dec(v_value_5521_);
v___x_5533_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5528_, v___x_5529_, v___x_5531_, v___x_5532_);
lean_dec_ref(v___x_5531_);
if (lean_obj_tag(v___x_5533_) == 0)
{
lean_object* v_a_5534_; uint8_t v___x_5535_; 
v_a_5534_ = lean_ctor_get(v___x_5533_, 0);
lean_inc(v_a_5534_);
lean_dec_ref_known(v___x_5533_, 1);
v___x_5535_ = lean_string_validate_utf8(v_a_5534_);
if (v___x_5535_ == 0)
{
lean_object* v___x_5536_; lean_object* v___x_5537_; 
lean_dec(v_a_5534_);
v___x_5536_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_5537_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5536_);
v___y_5497_ = v_a_5520_;
v_received_5498_ = v___x_5537_;
goto v___jp_5496_;
}
else
{
lean_object* v___x_5538_; 
v___x_5538_ = lean_string_from_utf8_unchecked(v_a_5534_);
v___y_5497_ = v_a_5520_;
v_received_5498_ = v___x_5538_;
goto v___jp_5496_;
}
}
else
{
lean_object* v___x_5539_; 
lean_dec_ref_known(v___x_5533_, 1);
v___x_5539_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_5497_ = v_a_5520_;
v_received_5498_ = v___x_5539_;
goto v___jp_5496_;
}
}
}
}
}
else
{
v___y_5517_ = v_a_5520_;
goto v___jp_5516_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3___boxed(lean_object* v_context_5561_, lean_object* v_d_5562_, lean_object* v_a_5563_){
_start:
{
lean_object* v_res_5564_; 
v_res_5564_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3(v_context_5561_, v_d_5562_);
lean_dec_ref(v_context_5561_);
return v_res_5564_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0(lean_object* v_context_5565_, lean_object* v_x_5566_){
_start:
{
lean_object* v_val_5569_; 
if (lean_obj_tag(v_x_5566_) == 0)
{
lean_object* v_a_5571_; lean_object* v___x_5573_; uint8_t v_isShared_5574_; uint8_t v_isSharedCheck_5579_; 
v_a_5571_ = lean_ctor_get(v_x_5566_, 0);
v_isSharedCheck_5579_ = !lean_is_exclusive(v_x_5566_);
if (v_isSharedCheck_5579_ == 0)
{
v___x_5573_ = v_x_5566_;
v_isShared_5574_ = v_isSharedCheck_5579_;
goto v_resetjp_5572_;
}
else
{
lean_inc(v_a_5571_);
lean_dec(v_x_5566_);
v___x_5573_ = lean_box(0);
v_isShared_5574_ = v_isSharedCheck_5579_;
goto v_resetjp_5572_;
}
v_resetjp_5572_:
{
lean_object* v___x_5576_; 
if (v_isShared_5574_ == 0)
{
v___x_5576_ = v___x_5573_;
goto v_reusejp_5575_;
}
else
{
lean_object* v_reuseFailAlloc_5578_; 
v_reuseFailAlloc_5578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5578_, 0, v_a_5571_);
v___x_5576_ = v_reuseFailAlloc_5578_;
goto v_reusejp_5575_;
}
v_reusejp_5575_:
{
lean_object* v___x_5577_; 
v___x_5577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5577_, 0, v___x_5576_);
return v___x_5577_;
}
}
}
else
{
lean_object* v_a_5580_; lean_object* v___x_5582_; uint8_t v_isShared_5583_; uint8_t v_isSharedCheck_5593_; 
v_a_5580_ = lean_ctor_get(v_x_5566_, 0);
v_isSharedCheck_5593_ = !lean_is_exclusive(v_x_5566_);
if (v_isSharedCheck_5593_ == 0)
{
v___x_5582_ = v_x_5566_;
v_isShared_5583_ = v_isSharedCheck_5593_;
goto v_resetjp_5581_;
}
else
{
lean_inc(v_a_5580_);
lean_dec(v_x_5566_);
v___x_5582_ = lean_box(0);
v_isShared_5583_ = v_isSharedCheck_5593_;
goto v_resetjp_5581_;
}
v_resetjp_5581_:
{
lean_object* v___x_5584_; 
v___x_5584_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3(v_context_5565_, v_a_5580_);
if (lean_obj_tag(v___x_5584_) == 0)
{
lean_object* v_a_5585_; lean_object* v___x_5587_; 
v_a_5585_ = lean_ctor_get(v___x_5584_, 0);
lean_inc(v_a_5585_);
lean_dec_ref_known(v___x_5584_, 1);
if (v_isShared_5583_ == 0)
{
lean_ctor_set(v___x_5582_, 0, v_a_5585_);
v___x_5587_ = v___x_5582_;
goto v_reusejp_5586_;
}
else
{
lean_object* v_reuseFailAlloc_5588_; 
v_reuseFailAlloc_5588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5588_, 0, v_a_5585_);
v___x_5587_ = v_reuseFailAlloc_5588_;
goto v_reusejp_5586_;
}
v_reusejp_5586_:
{
v_val_5569_ = v___x_5587_;
goto v___jp_5568_;
}
}
else
{
lean_object* v_a_5589_; lean_object* v___x_5591_; 
v_a_5589_ = lean_ctor_get(v___x_5584_, 0);
lean_inc(v_a_5589_);
lean_dec_ref_known(v___x_5584_, 1);
if (v_isShared_5583_ == 0)
{
lean_ctor_set_tag(v___x_5582_, 0);
lean_ctor_set(v___x_5582_, 0, v_a_5589_);
v___x_5591_ = v___x_5582_;
goto v_reusejp_5590_;
}
else
{
lean_object* v_reuseFailAlloc_5592_; 
v_reuseFailAlloc_5592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5592_, 0, v_a_5589_);
v___x_5591_ = v_reuseFailAlloc_5592_;
goto v_reusejp_5590_;
}
v_reusejp_5590_:
{
v_val_5569_ = v___x_5591_;
goto v___jp_5568_;
}
}
}
}
v___jp_5568_:
{
lean_object* v___x_5570_; 
v___x_5570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5570_, 0, v_val_5569_);
return v___x_5570_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0___boxed(lean_object* v_context_5594_, lean_object* v_x_5595_, lean_object* v___y_5596_){
_start:
{
lean_object* v_res_5597_; 
v_res_5597_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0(v_context_5594_, v_x_5595_);
lean_dec_ref(v_context_5594_);
return v_res_5597_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2(lean_object* v_context_5598_, uint32_t v_op_5599_, uint64_t v_flags_5600_, lean_object* v_payload_5601_, lean_object* v_failurePrefix_5602_){
_start:
{
lean_object* v___f_5604_; lean_object* v___f_5605_; lean_object* v___f_5606_; lean_object* v___f_5607_; lean_object* v___x_5608_; lean_object* v___x_5609_; lean_object* v___f_5610_; lean_object* v___f_5611_; lean_object* v___x_5612_; uint8_t v___x_5613_; lean_object* v_val_5615_; lean_object* v___x_5618_; 
v___f_5604_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5604_, 0, v_context_5598_);
v___f_5605_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5605_, 0, v___f_5604_);
v___f_5606_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5606_, 0, v___f_5605_);
lean_inc_ref(v_failurePrefix_5602_);
v___f_5607_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5607_, 0, v_failurePrefix_5602_);
v___x_5608_ = lean_box_uint32(v_op_5599_);
v___x_5609_ = lean_box_uint64(v_flags_5600_);
lean_inc_ref(v___f_5606_);
v___f_5610_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_5610_, 0, v_failurePrefix_5602_);
lean_closure_set(v___f_5610_, 1, v___x_5608_);
lean_closure_set(v___f_5610_, 2, v___x_5609_);
lean_closure_set(v___f_5610_, 3, v_payload_5601_);
lean_closure_set(v___f_5610_, 4, v___f_5607_);
lean_closure_set(v___f_5610_, 5, v___f_5606_);
lean_closure_set(v___f_5610_, 6, v___f_5606_);
v___f_5611_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5611_, 0, v___f_5610_);
v___x_5612_ = lean_unsigned_to_nat(0u);
v___x_5613_ = 0;
v___x_5618_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5618_) == 0)
{
lean_object* v_a_5619_; lean_object* v___x_5621_; uint8_t v_isShared_5622_; uint8_t v_isSharedCheck_5626_; 
v_a_5619_ = lean_ctor_get(v___x_5618_, 0);
v_isSharedCheck_5626_ = !lean_is_exclusive(v___x_5618_);
if (v_isSharedCheck_5626_ == 0)
{
v___x_5621_ = v___x_5618_;
v_isShared_5622_ = v_isSharedCheck_5626_;
goto v_resetjp_5620_;
}
else
{
lean_inc(v_a_5619_);
lean_dec(v___x_5618_);
v___x_5621_ = lean_box(0);
v_isShared_5622_ = v_isSharedCheck_5626_;
goto v_resetjp_5620_;
}
v_resetjp_5620_:
{
lean_object* v___x_5624_; 
if (v_isShared_5622_ == 0)
{
lean_ctor_set_tag(v___x_5621_, 1);
v___x_5624_ = v___x_5621_;
goto v_reusejp_5623_;
}
else
{
lean_object* v_reuseFailAlloc_5625_; 
v_reuseFailAlloc_5625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5625_, 0, v_a_5619_);
v___x_5624_ = v_reuseFailAlloc_5625_;
goto v_reusejp_5623_;
}
v_reusejp_5623_:
{
v_val_5615_ = v___x_5624_;
goto v___jp_5614_;
}
}
}
else
{
lean_object* v_a_5627_; lean_object* v___x_5629_; uint8_t v_isShared_5630_; uint8_t v_isSharedCheck_5634_; 
v_a_5627_ = lean_ctor_get(v___x_5618_, 0);
v_isSharedCheck_5634_ = !lean_is_exclusive(v___x_5618_);
if (v_isSharedCheck_5634_ == 0)
{
v___x_5629_ = v___x_5618_;
v_isShared_5630_ = v_isSharedCheck_5634_;
goto v_resetjp_5628_;
}
else
{
lean_inc(v_a_5627_);
lean_dec(v___x_5618_);
v___x_5629_ = lean_box(0);
v_isShared_5630_ = v_isSharedCheck_5634_;
goto v_resetjp_5628_;
}
v_resetjp_5628_:
{
lean_object* v___x_5632_; 
if (v_isShared_5630_ == 0)
{
lean_ctor_set_tag(v___x_5629_, 0);
v___x_5632_ = v___x_5629_;
goto v_reusejp_5631_;
}
else
{
lean_object* v_reuseFailAlloc_5633_; 
v_reuseFailAlloc_5633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5633_, 0, v_a_5627_);
v___x_5632_ = v_reuseFailAlloc_5633_;
goto v_reusejp_5631_;
}
v_reusejp_5631_:
{
v_val_5615_ = v___x_5632_;
goto v___jp_5614_;
}
}
}
v___jp_5614_:
{
lean_object* v___x_5616_; lean_object* v___x_5617_; 
v___x_5616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5616_, 0, v_val_5615_);
v___x_5617_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5612_, v___x_5613_, v___x_5616_, v___f_5611_);
return v___x_5617_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___boxed(lean_object* v_context_5635_, lean_object* v_op_5636_, lean_object* v_flags_5637_, lean_object* v_payload_5638_, lean_object* v_failurePrefix_5639_, lean_object* v_a_5640_){
_start:
{
uint32_t v_op_boxed_5641_; uint64_t v_flags_boxed_5642_; lean_object* v_res_5643_; 
v_op_boxed_5641_ = lean_unbox_uint32(v_op_5636_);
lean_dec(v_op_5636_);
v_flags_boxed_5642_ = lean_unbox_uint64(v_flags_5637_);
lean_dec_ref(v_flags_5637_);
v_res_5643_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2(v_context_5635_, v_op_boxed_5641_, v_flags_boxed_5642_, v_payload_5638_, v_failurePrefix_5639_);
return v_res_5643_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1(uint8_t v_await_5644_, uint64_t v_extra_5645_){
_start:
{
uint64_t v___x_5646_; uint64_t v___y_5648_; 
v___x_5646_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_5644_ == 0)
{
uint64_t v___x_5651_; 
v___x_5651_ = 0ULL;
v___y_5648_ = v___x_5651_;
goto v___jp_5647_;
}
else
{
uint64_t v___x_5652_; 
v___x_5652_ = 2ULL;
v___y_5648_ = v___x_5652_;
goto v___jp_5647_;
}
v___jp_5647_:
{
uint64_t v___x_5649_; uint64_t v___x_5650_; 
v___x_5649_ = lean_uint64_lor(v___x_5646_, v___y_5648_);
v___x_5650_ = lean_uint64_lor(v___x_5649_, v_extra_5645_);
return v___x_5650_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1___boxed(lean_object* v_await_5653_, lean_object* v_extra_5654_){
_start:
{
uint8_t v_await_boxed_5655_; uint64_t v_extra_boxed_5656_; uint64_t v_res_5657_; lean_object* v_r_5658_; 
v_await_boxed_5655_ = lean_unbox(v_await_5653_);
v_extra_boxed_5656_ = lean_unbox_uint64(v_extra_5654_);
lean_dec_ref(v_extra_5654_);
v_res_5657_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1(v_await_boxed_5655_, v_extra_boxed_5656_);
v_r_5658_ = lean_box_uint64(v_res_5657_);
return v_r_5658_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0(void){
_start:
{
uint64_t v___x_5659_; uint8_t v___x_5660_; uint64_t v___x_5661_; 
v___x_5659_ = 8ULL;
v___x_5660_ = 0;
v___x_5661_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1(v___x_5660_, v___x_5659_);
return v___x_5661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(lean_object* v_o_5662_, lean_object* v_name_5663_, lean_object* v_args_5664_){
_start:
{
lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; uint32_t v___x_5671_; uint64_t v___x_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5677_; lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; 
v___x_5666_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5667_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5667_, 0, v_o_5662_);
lean_ctor_set(v___x_5667_, 1, v___x_5666_);
lean_inc_ref(v_name_5663_);
v___x_5668_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5668_, 0, v_name_5663_);
v___x_5669_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_5670_ = lean_string_append(v___x_5669_, v_name_5663_);
lean_dec_ref(v_name_5663_);
v___x_5671_ = 205;
v___x_5672_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0);
v___x_5673_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5673_, 0, v_args_5664_);
v___x_5674_ = lean_unsigned_to_nat(3u);
v___x_5675_ = lean_mk_empty_array_with_capacity(v___x_5674_);
v___x_5676_ = lean_array_push(v___x_5675_, v___x_5667_);
v___x_5677_ = lean_array_push(v___x_5676_, v___x_5668_);
v___x_5678_ = lean_array_push(v___x_5677_, v___x_5673_);
v___x_5679_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5679_, 0, v___x_5678_);
v___x_5680_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2(v___x_5670_, v___x_5671_, v___x_5672_, v___x_5679_, v___x_5666_);
return v___x_5680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___boxed(lean_object* v_o_5681_, lean_object* v_name_5682_, lean_object* v_args_5683_, lean_object* v___y_5684_){
_start:
{
lean_object* v_res_5685_; 
v_res_5685_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(v_o_5681_, v_name_5682_, v_args_5683_);
return v_res_5685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_set(lean_object* v_self_5686_, lean_object* v_key_5687_, lean_object* v_value_5688_, lean_object* v_options_5689_){
_start:
{
lean_object* v___x_5691_; size_t v_sz_5692_; size_t v___x_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; lean_object* v___x_5697_; lean_object* v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; 
v___x_5691_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__0));
v_sz_5692_ = lean_array_size(v_key_5687_);
v___x_5693_ = ((size_t)0ULL);
v___x_5694_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_5692_, v___x_5693_, v_key_5687_);
v___x_5695_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5695_, 0, v___x_5694_);
v___x_5696_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0(v_options_5689_);
v___x_5697_ = lean_unsigned_to_nat(3u);
v___x_5698_ = lean_mk_empty_array_with_capacity(v___x_5697_);
v___x_5699_ = lean_array_push(v___x_5698_, v___x_5695_);
v___x_5700_ = lean_array_push(v___x_5699_, v_value_5688_);
v___x_5701_ = lean_array_push(v___x_5700_, v___x_5696_);
v___x_5702_ = l_Lasm_JS_Web_Support_args(v___x_5701_);
v___x_5703_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(v_self_5686_, v___x_5691_, v___x_5702_);
return v___x_5703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_set___boxed(lean_object* v_self_5704_, lean_object* v_key_5705_, lean_object* v_value_5706_, lean_object* v_options_5707_, lean_object* v_a_5708_){
_start:
{
lean_object* v_res_5709_; 
v_res_5709_ = l_Lasm_JS_Deno_Kv_set(v_self_5704_, v_key_5705_, v_value_5706_, v_options_5707_);
lean_dec(v_options_5707_);
return v_res_5709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_delete(lean_object* v_self_5710_, lean_object* v_key_5711_){
_start:
{
lean_object* v___x_5713_; size_t v_sz_5714_; size_t v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; 
v___x_5713_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__2));
v_sz_5714_ = lean_array_size(v_key_5711_);
v___x_5715_ = ((size_t)0ULL);
v___x_5716_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_5714_, v___x_5715_, v_key_5711_);
v___x_5717_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5717_, 0, v___x_5716_);
v___x_5718_ = lean_unsigned_to_nat(1u);
v___x_5719_ = lean_mk_empty_array_with_capacity(v___x_5718_);
v___x_5720_ = lean_array_push(v___x_5719_, v___x_5717_);
v___x_5721_ = l_Lasm_JS_Web_Support_args(v___x_5720_);
v___x_5722_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5710_, v___x_5713_, v___x_5721_);
return v___x_5722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_delete___boxed(lean_object* v_self_5723_, lean_object* v_key_5724_, lean_object* v_a_5725_){
_start:
{
lean_object* v_res_5726_; 
v_res_5726_ = l_Lasm_JS_Deno_Kv_delete(v_self_5723_, v_key_5724_);
return v_res_5726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(lean_object* v_x_5727_){
_start:
{
if (lean_obj_tag(v_x_5727_) == 0)
{
lean_object* v___x_5728_; 
v___x_5728_ = lean_box(0);
return v___x_5728_;
}
else
{
lean_object* v_val_5729_; lean_object* v___x_5731_; uint8_t v_isShared_5732_; uint8_t v_isSharedCheck_5739_; 
v_val_5729_ = lean_ctor_get(v_x_5727_, 0);
v_isSharedCheck_5739_ = !lean_is_exclusive(v_x_5727_);
if (v_isSharedCheck_5739_ == 0)
{
v___x_5731_ = v_x_5727_;
v_isShared_5732_ = v_isSharedCheck_5739_;
goto v_resetjp_5730_;
}
else
{
lean_inc(v_val_5729_);
lean_dec(v_x_5727_);
v___x_5731_ = lean_box(0);
v_isShared_5732_ = v_isSharedCheck_5739_;
goto v_resetjp_5730_;
}
v_resetjp_5730_:
{
size_t v_sz_5733_; size_t v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5737_; 
v_sz_5733_ = lean_array_size(v_val_5729_);
v___x_5734_ = ((size_t)0ULL);
v___x_5735_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_5733_, v___x_5734_, v_val_5729_);
if (v_isShared_5732_ == 0)
{
lean_ctor_set_tag(v___x_5731_, 7);
lean_ctor_set(v___x_5731_, 0, v___x_5735_);
v___x_5737_ = v___x_5731_;
goto v_reusejp_5736_;
}
else
{
lean_object* v_reuseFailAlloc_5738_; 
v_reuseFailAlloc_5738_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5738_, 0, v___x_5735_);
v___x_5737_ = v_reuseFailAlloc_5738_;
goto v_reusejp_5736_;
}
v_reusejp_5736_:
{
return v___x_5737_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__1(lean_object* v_x_5740_){
_start:
{
if (lean_obj_tag(v_x_5740_) == 0)
{
lean_object* v___x_5741_; 
v___x_5741_ = lean_box(0);
return v___x_5741_;
}
else
{
lean_object* v_val_5742_; lean_object* v_limit_5743_; lean_object* v_cursor_5744_; lean_object* v_reverse_5745_; lean_object* v_consistency_5746_; lean_object* v_batchSize_5747_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; lean_object* v___x_5764_; lean_object* v___x_5765_; lean_object* v___x_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; lean_object* v___x_5769_; lean_object* v___x_5770_; 
v_val_5742_ = lean_ctor_get(v_x_5740_, 0);
lean_inc(v_val_5742_);
lean_dec_ref_known(v_x_5740_, 1);
v_limit_5743_ = lean_ctor_get(v_val_5742_, 0);
lean_inc(v_limit_5743_);
v_cursor_5744_ = lean_ctor_get(v_val_5742_, 1);
lean_inc(v_cursor_5744_);
v_reverse_5745_ = lean_ctor_get(v_val_5742_, 2);
lean_inc(v_reverse_5745_);
v_consistency_5746_ = lean_ctor_get(v_val_5742_, 3);
lean_inc(v_consistency_5746_);
v_batchSize_5747_ = lean_ctor_get(v_val_5742_, 4);
lean_inc(v_batchSize_5747_);
lean_dec(v_val_5742_);
v___x_5748_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__0));
v___x_5749_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_limit_5743_);
lean_dec(v_limit_5743_);
v___x_5750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5750_, 0, v___x_5748_);
lean_ctor_set(v___x_5750_, 1, v___x_5749_);
v___x_5751_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__1));
v___x_5752_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_cursor_5744_);
v___x_5753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5753_, 0, v___x_5751_);
lean_ctor_set(v___x_5753_, 1, v___x_5752_);
v___x_5754_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__2));
v___x_5755_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reverse_5745_);
lean_dec(v_reverse_5745_);
v___x_5756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5756_, 0, v___x_5754_);
lean_ctor_set(v___x_5756_, 1, v___x_5755_);
v___x_5757_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_5758_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(v_consistency_5746_);
lean_dec(v_consistency_5746_);
v___x_5759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5759_, 0, v___x_5757_);
lean_ctor_set(v___x_5759_, 1, v___x_5758_);
v___x_5760_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__3));
v___x_5761_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_batchSize_5747_);
lean_dec(v_batchSize_5747_);
v___x_5762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5762_, 0, v___x_5760_);
lean_ctor_set(v___x_5762_, 1, v___x_5761_);
v___x_5763_ = lean_unsigned_to_nat(5u);
v___x_5764_ = lean_mk_empty_array_with_capacity(v___x_5763_);
v___x_5765_ = lean_array_push(v___x_5764_, v___x_5750_);
v___x_5766_ = lean_array_push(v___x_5765_, v___x_5753_);
v___x_5767_ = lean_array_push(v___x_5766_, v___x_5756_);
v___x_5768_ = lean_array_push(v___x_5767_, v___x_5759_);
v___x_5769_ = lean_array_push(v___x_5768_, v___x_5762_);
v___x_5770_ = l_Lasm_JS_Web_Support_fields(v___x_5769_);
lean_dec_ref(v___x_5769_);
return v___x_5770_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_list(lean_object* v_self_5772_, lean_object* v_selector_5773_, lean_object* v_options_5774_){
_start:
{
lean_object* v_prefix_5776_; lean_object* v_start_5777_; lean_object* v_end_5778_; lean_object* v___x_5779_; lean_object* v___x_5780_; lean_object* v___x_5781_; lean_object* v___x_5782_; lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; lean_object* v___x_5787_; lean_object* v___x_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; lean_object* v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; 
v_prefix_5776_ = lean_ctor_get(v_selector_5773_, 0);
lean_inc(v_prefix_5776_);
v_start_5777_ = lean_ctor_get(v_selector_5773_, 1);
lean_inc(v_start_5777_);
v_end_5778_ = lean_ctor_get(v_selector_5773_, 2);
lean_inc(v_end_5778_);
lean_dec_ref(v_selector_5773_);
v___x_5779_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_list___closed__0));
v___x_5780_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__0));
v___x_5781_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(v_prefix_5776_);
v___x_5782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5782_, 0, v___x_5780_);
lean_ctor_set(v___x_5782_, 1, v___x_5781_);
v___x_5783_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__1));
v___x_5784_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(v_start_5777_);
v___x_5785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5785_, 0, v___x_5783_);
lean_ctor_set(v___x_5785_, 1, v___x_5784_);
v___x_5786_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__2));
v___x_5787_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(v_end_5778_);
v___x_5788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5788_, 0, v___x_5786_);
lean_ctor_set(v___x_5788_, 1, v___x_5787_);
v___x_5789_ = lean_unsigned_to_nat(3u);
v___x_5790_ = lean_mk_empty_array_with_capacity(v___x_5789_);
v___x_5791_ = lean_array_push(v___x_5790_, v___x_5782_);
v___x_5792_ = lean_array_push(v___x_5791_, v___x_5785_);
v___x_5793_ = lean_array_push(v___x_5792_, v___x_5788_);
v___x_5794_ = l_Lasm_JS_Web_Support_fields(v___x_5793_);
lean_dec_ref(v___x_5793_);
v___x_5795_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__1(v_options_5774_);
v___x_5796_ = lean_unsigned_to_nat(2u);
v___x_5797_ = lean_mk_empty_array_with_capacity(v___x_5796_);
v___x_5798_ = lean_array_push(v___x_5797_, v___x_5794_);
v___x_5799_ = lean_array_push(v___x_5798_, v___x_5795_);
v___x_5800_ = l_Lasm_JS_Web_Support_args(v___x_5799_);
v___x_5801_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_5772_, v___x_5779_, v___x_5800_);
if (lean_obj_tag(v___x_5801_) == 0)
{
lean_object* v_a_5802_; lean_object* v___x_5804_; uint8_t v_isShared_5805_; uint8_t v_isSharedCheck_5809_; 
v_a_5802_ = lean_ctor_get(v___x_5801_, 0);
v_isSharedCheck_5809_ = !lean_is_exclusive(v___x_5801_);
if (v_isSharedCheck_5809_ == 0)
{
v___x_5804_ = v___x_5801_;
v_isShared_5805_ = v_isSharedCheck_5809_;
goto v_resetjp_5803_;
}
else
{
lean_inc(v_a_5802_);
lean_dec(v___x_5801_);
v___x_5804_ = lean_box(0);
v_isShared_5805_ = v_isSharedCheck_5809_;
goto v_resetjp_5803_;
}
v_resetjp_5803_:
{
lean_object* v___x_5807_; 
if (v_isShared_5805_ == 0)
{
v___x_5807_ = v___x_5804_;
goto v_reusejp_5806_;
}
else
{
lean_object* v_reuseFailAlloc_5808_; 
v_reuseFailAlloc_5808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5808_, 0, v_a_5802_);
v___x_5807_ = v_reuseFailAlloc_5808_;
goto v_reusejp_5806_;
}
v_reusejp_5806_:
{
return v___x_5807_;
}
}
}
else
{
lean_object* v_a_5810_; lean_object* v___x_5812_; uint8_t v_isShared_5813_; uint8_t v_isSharedCheck_5817_; 
v_a_5810_ = lean_ctor_get(v___x_5801_, 0);
v_isSharedCheck_5817_ = !lean_is_exclusive(v___x_5801_);
if (v_isSharedCheck_5817_ == 0)
{
v___x_5812_ = v___x_5801_;
v_isShared_5813_ = v_isSharedCheck_5817_;
goto v_resetjp_5811_;
}
else
{
lean_inc(v_a_5810_);
lean_dec(v___x_5801_);
v___x_5812_ = lean_box(0);
v_isShared_5813_ = v_isSharedCheck_5817_;
goto v_resetjp_5811_;
}
v_resetjp_5811_:
{
lean_object* v___x_5815_; 
if (v_isShared_5813_ == 0)
{
v___x_5815_ = v___x_5812_;
goto v_reusejp_5814_;
}
else
{
lean_object* v_reuseFailAlloc_5816_; 
v_reuseFailAlloc_5816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5816_, 0, v_a_5810_);
v___x_5815_ = v_reuseFailAlloc_5816_;
goto v_reusejp_5814_;
}
v_reusejp_5814_:
{
return v___x_5815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_list___boxed(lean_object* v_self_5818_, lean_object* v_selector_5819_, lean_object* v_options_5820_, lean_object* v_a_5821_){
_start:
{
lean_object* v_res_5822_; 
v_res_5822_ = l_Lasm_JS_Deno_Kv_list(v_self_5818_, v_selector_5819_, v_options_5820_);
return v_res_5822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_enqueue_spec__0(lean_object* v_x_5823_){
_start:
{
if (lean_obj_tag(v_x_5823_) == 0)
{
lean_object* v___x_5824_; 
v___x_5824_ = lean_box(0);
return v___x_5824_;
}
else
{
lean_object* v_val_5825_; lean_object* v_delay_5826_; lean_object* v_keysIfUndelivered_5827_; lean_object* v_backoffSchedule_5828_; lean_object* v___x_5829_; lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; lean_object* v___x_5837_; lean_object* v___x_5838_; lean_object* v___x_5839_; lean_object* v___x_5840_; lean_object* v___x_5841_; lean_object* v___x_5842_; lean_object* v___x_5843_; 
v_val_5825_ = lean_ctor_get(v_x_5823_, 0);
lean_inc(v_val_5825_);
lean_dec_ref_known(v_x_5823_, 1);
v_delay_5826_ = lean_ctor_get(v_val_5825_, 0);
lean_inc(v_delay_5826_);
v_keysIfUndelivered_5827_ = lean_ctor_get(v_val_5825_, 1);
lean_inc(v_keysIfUndelivered_5827_);
v_backoffSchedule_5828_ = lean_ctor_get(v_val_5825_, 2);
lean_inc(v_backoffSchedule_5828_);
lean_dec(v_val_5825_);
v___x_5829_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0));
v___x_5830_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_delay_5826_);
lean_dec(v_delay_5826_);
v___x_5831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5831_, 0, v___x_5829_);
lean_ctor_set(v___x_5831_, 1, v___x_5830_);
v___x_5832_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1));
v___x_5833_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0(v_keysIfUndelivered_5827_);
v___x_5834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5834_, 0, v___x_5832_);
lean_ctor_set(v___x_5834_, 1, v___x_5833_);
v___x_5835_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_5836_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(v_backoffSchedule_5828_);
v___x_5837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5837_, 0, v___x_5835_);
lean_ctor_set(v___x_5837_, 1, v___x_5836_);
v___x_5838_ = lean_unsigned_to_nat(3u);
v___x_5839_ = lean_mk_empty_array_with_capacity(v___x_5838_);
v___x_5840_ = lean_array_push(v___x_5839_, v___x_5831_);
v___x_5841_ = lean_array_push(v___x_5840_, v___x_5834_);
v___x_5842_ = lean_array_push(v___x_5841_, v___x_5837_);
v___x_5843_ = l_Lasm_JS_Web_Support_fields(v___x_5842_);
lean_dec_ref(v___x_5842_);
return v___x_5843_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_enqueue(lean_object* v_self_5844_, lean_object* v_value_5845_, lean_object* v_options_5846_){
_start:
{
lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; lean_object* v___x_5854_; lean_object* v___x_5855_; 
v___x_5848_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_enqueue___closed__0));
v___x_5849_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_enqueue_spec__0(v_options_5846_);
v___x_5850_ = lean_unsigned_to_nat(2u);
v___x_5851_ = lean_mk_empty_array_with_capacity(v___x_5850_);
v___x_5852_ = lean_array_push(v___x_5851_, v_value_5845_);
v___x_5853_ = lean_array_push(v___x_5852_, v___x_5849_);
v___x_5854_ = l_Lasm_JS_Web_Support_args(v___x_5853_);
v___x_5855_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(v_self_5844_, v___x_5848_, v___x_5854_);
return v___x_5855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_enqueue___boxed(lean_object* v_self_5856_, lean_object* v_value_5857_, lean_object* v_options_5858_, lean_object* v_a_5859_){
_start:
{
lean_object* v_res_5860_; 
v_res_5860_ = l_Lasm_JS_Deno_Kv_enqueue(v_self_5856_, v_value_5857_, v_options_5858_);
return v_res_5860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_listenQueue(lean_object* v_self_5862_, lean_object* v_handler_5863_){
_start:
{
lean_object* v___x_5865_; lean_object* v___x_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; lean_object* v___x_5869_; lean_object* v___x_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; 
v___x_5865_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_listenQueue___closed__0));
v___x_5866_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5867_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5867_, 0, v_handler_5863_);
lean_ctor_set(v___x_5867_, 1, v___x_5866_);
v___x_5868_ = lean_unsigned_to_nat(1u);
v___x_5869_ = lean_mk_empty_array_with_capacity(v___x_5868_);
v___x_5870_ = lean_array_push(v___x_5869_, v___x_5867_);
v___x_5871_ = l_Lasm_JS_Web_Support_args(v___x_5870_);
v___x_5872_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5862_, v___x_5865_, v___x_5871_);
return v___x_5872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_listenQueue___boxed(lean_object* v_self_5873_, lean_object* v_handler_5874_, lean_object* v_a_5875_){
_start:
{
lean_object* v_res_5876_; 
v_res_5876_ = l_Lasm_JS_Deno_Kv_listenQueue(v_self_5873_, v_handler_5874_);
return v_res_5876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_atomic(lean_object* v_self_5878_){
_start:
{
lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; 
v___x_5880_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_atomic___closed__0));
v___x_5881_ = lean_obj_once(&l_Lasm_JS_Deno_AtomicOperation_commit___closed__1, &l_Lasm_JS_Deno_AtomicOperation_commit___closed__1_once, _init_l_Lasm_JS_Deno_AtomicOperation_commit___closed__1);
v___x_5882_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_5878_, v___x_5880_, v___x_5881_);
if (lean_obj_tag(v___x_5882_) == 0)
{
lean_object* v_a_5883_; lean_object* v___x_5885_; uint8_t v_isShared_5886_; uint8_t v_isSharedCheck_5890_; 
v_a_5883_ = lean_ctor_get(v___x_5882_, 0);
v_isSharedCheck_5890_ = !lean_is_exclusive(v___x_5882_);
if (v_isSharedCheck_5890_ == 0)
{
v___x_5885_ = v___x_5882_;
v_isShared_5886_ = v_isSharedCheck_5890_;
goto v_resetjp_5884_;
}
else
{
lean_inc(v_a_5883_);
lean_dec(v___x_5882_);
v___x_5885_ = lean_box(0);
v_isShared_5886_ = v_isSharedCheck_5890_;
goto v_resetjp_5884_;
}
v_resetjp_5884_:
{
lean_object* v___x_5888_; 
if (v_isShared_5886_ == 0)
{
v___x_5888_ = v___x_5885_;
goto v_reusejp_5887_;
}
else
{
lean_object* v_reuseFailAlloc_5889_; 
v_reuseFailAlloc_5889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5889_, 0, v_a_5883_);
v___x_5888_ = v_reuseFailAlloc_5889_;
goto v_reusejp_5887_;
}
v_reusejp_5887_:
{
return v___x_5888_;
}
}
}
else
{
lean_object* v_a_5891_; lean_object* v___x_5893_; uint8_t v_isShared_5894_; uint8_t v_isSharedCheck_5898_; 
v_a_5891_ = lean_ctor_get(v___x_5882_, 0);
v_isSharedCheck_5898_ = !lean_is_exclusive(v___x_5882_);
if (v_isSharedCheck_5898_ == 0)
{
v___x_5893_ = v___x_5882_;
v_isShared_5894_ = v_isSharedCheck_5898_;
goto v_resetjp_5892_;
}
else
{
lean_inc(v_a_5891_);
lean_dec(v___x_5882_);
v___x_5893_ = lean_box(0);
v_isShared_5894_ = v_isSharedCheck_5898_;
goto v_resetjp_5892_;
}
v_resetjp_5892_:
{
lean_object* v___x_5896_; 
if (v_isShared_5894_ == 0)
{
v___x_5896_ = v___x_5893_;
goto v_reusejp_5895_;
}
else
{
lean_object* v_reuseFailAlloc_5897_; 
v_reuseFailAlloc_5897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5897_, 0, v_a_5891_);
v___x_5896_ = v_reuseFailAlloc_5897_;
goto v_reusejp_5895_;
}
v_reusejp_5895_:
{
return v___x_5896_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_atomic___boxed(lean_object* v_self_5899_, lean_object* v_a_5900_){
_start:
{
lean_object* v_res_5901_; 
v_res_5901_ = l_Lasm_JS_Deno_Kv_atomic(v_self_5899_);
return v_res_5901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0(lean_object* v_x_5902_){
_start:
{
if (lean_obj_tag(v_x_5902_) == 0)
{
lean_object* v___x_5903_; 
v___x_5903_ = lean_box(0);
return v___x_5903_;
}
else
{
lean_object* v_val_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; 
v_val_5904_ = lean_ctor_get(v_x_5902_, 0);
v___x_5905_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0___closed__0));
v___x_5906_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_5904_);
v___x_5907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5907_, 0, v___x_5905_);
lean_ctor_set(v___x_5907_, 1, v___x_5906_);
v___x_5908_ = lean_unsigned_to_nat(1u);
v___x_5909_ = lean_mk_empty_array_with_capacity(v___x_5908_);
v___x_5910_ = lean_array_push(v___x_5909_, v___x_5907_);
v___x_5911_ = l_Lasm_JS_Web_Support_fields(v___x_5910_);
lean_dec_ref(v___x_5910_);
return v___x_5911_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0___boxed(lean_object* v_x_5912_){
_start:
{
lean_object* v_res_5913_; 
v_res_5913_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0(v_x_5912_);
lean_dec(v_x_5912_);
return v_res_5913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_watch(lean_object* v_self_5915_, lean_object* v_keys_5916_, lean_object* v_options_5917_){
_start:
{
lean_object* v___x_5919_; size_t v_sz_5920_; size_t v___x_5921_; lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; 
v___x_5919_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_watch___closed__0));
v_sz_5920_ = lean_array_size(v_keys_5916_);
v___x_5921_ = ((size_t)0ULL);
v___x_5922_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(v_sz_5920_, v___x_5921_, v_keys_5916_);
v___x_5923_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5923_, 0, v___x_5922_);
v___x_5924_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0(v_options_5917_);
v___x_5925_ = lean_unsigned_to_nat(2u);
v___x_5926_ = lean_mk_empty_array_with_capacity(v___x_5925_);
v___x_5927_ = lean_array_push(v___x_5926_, v___x_5923_);
v___x_5928_ = lean_array_push(v___x_5927_, v___x_5924_);
v___x_5929_ = l_Lasm_JS_Web_Support_args(v___x_5928_);
v___x_5930_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_5915_, v___x_5919_, v___x_5929_);
if (lean_obj_tag(v___x_5930_) == 0)
{
lean_object* v_a_5931_; lean_object* v___x_5933_; uint8_t v_isShared_5934_; uint8_t v_isSharedCheck_5938_; 
v_a_5931_ = lean_ctor_get(v___x_5930_, 0);
v_isSharedCheck_5938_ = !lean_is_exclusive(v___x_5930_);
if (v_isSharedCheck_5938_ == 0)
{
v___x_5933_ = v___x_5930_;
v_isShared_5934_ = v_isSharedCheck_5938_;
goto v_resetjp_5932_;
}
else
{
lean_inc(v_a_5931_);
lean_dec(v___x_5930_);
v___x_5933_ = lean_box(0);
v_isShared_5934_ = v_isSharedCheck_5938_;
goto v_resetjp_5932_;
}
v_resetjp_5932_:
{
lean_object* v___x_5936_; 
if (v_isShared_5934_ == 0)
{
v___x_5936_ = v___x_5933_;
goto v_reusejp_5935_;
}
else
{
lean_object* v_reuseFailAlloc_5937_; 
v_reuseFailAlloc_5937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5937_, 0, v_a_5931_);
v___x_5936_ = v_reuseFailAlloc_5937_;
goto v_reusejp_5935_;
}
v_reusejp_5935_:
{
return v___x_5936_;
}
}
}
else
{
lean_object* v_a_5939_; lean_object* v___x_5941_; uint8_t v_isShared_5942_; uint8_t v_isSharedCheck_5946_; 
v_a_5939_ = lean_ctor_get(v___x_5930_, 0);
v_isSharedCheck_5946_ = !lean_is_exclusive(v___x_5930_);
if (v_isSharedCheck_5946_ == 0)
{
v___x_5941_ = v___x_5930_;
v_isShared_5942_ = v_isSharedCheck_5946_;
goto v_resetjp_5940_;
}
else
{
lean_inc(v_a_5939_);
lean_dec(v___x_5930_);
v___x_5941_ = lean_box(0);
v_isShared_5942_ = v_isSharedCheck_5946_;
goto v_resetjp_5940_;
}
v_resetjp_5940_:
{
lean_object* v___x_5944_; 
if (v_isShared_5942_ == 0)
{
v___x_5944_ = v___x_5941_;
goto v_reusejp_5943_;
}
else
{
lean_object* v_reuseFailAlloc_5945_; 
v_reuseFailAlloc_5945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5945_, 0, v_a_5939_);
v___x_5944_ = v_reuseFailAlloc_5945_;
goto v_reusejp_5943_;
}
v_reusejp_5943_:
{
return v___x_5944_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_watch___boxed(lean_object* v_self_5947_, lean_object* v_keys_5948_, lean_object* v_options_5949_, lean_object* v_a_5950_){
_start:
{
lean_object* v_res_5951_; 
v_res_5951_ = l_Lasm_JS_Deno_Kv_watch(v_self_5947_, v_keys_5948_, v_options_5949_);
lean_dec(v_options_5949_);
return v_res_5951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_close(lean_object* v_self_5953_){
_start:
{
lean_object* v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; 
v___x_5955_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_close___closed__0));
v___x_5956_ = lean_obj_once(&l_Lasm_JS_Deno_AtomicOperation_commit___closed__1, &l_Lasm_JS_Deno_AtomicOperation_commit___closed__1_once, _init_l_Lasm_JS_Deno_AtomicOperation_commit___closed__1);
v___x_5957_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5953_, v___x_5955_, v___x_5956_);
return v___x_5957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_close___boxed(lean_object* v_self_5958_, lean_object* v_a_5959_){
_start:
{
lean_object* v_res_5960_; 
v_res_5960_ = l_Lasm_JS_Deno_Kv_close(v_self_5958_);
return v_res_5960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv___lam__0(lean_object* v_x_5961_){
_start:
{
if (lean_obj_tag(v_x_5961_) == 0)
{
lean_object* v_a_5963_; lean_object* v___x_5965_; uint8_t v_isShared_5966_; uint8_t v_isSharedCheck_5971_; 
v_a_5963_ = lean_ctor_get(v_x_5961_, 0);
v_isSharedCheck_5971_ = !lean_is_exclusive(v_x_5961_);
if (v_isSharedCheck_5971_ == 0)
{
v___x_5965_ = v_x_5961_;
v_isShared_5966_ = v_isSharedCheck_5971_;
goto v_resetjp_5964_;
}
else
{
lean_inc(v_a_5963_);
lean_dec(v_x_5961_);
v___x_5965_ = lean_box(0);
v_isShared_5966_ = v_isSharedCheck_5971_;
goto v_resetjp_5964_;
}
v_resetjp_5964_:
{
lean_object* v___x_5968_; 
if (v_isShared_5966_ == 0)
{
v___x_5968_ = v___x_5965_;
goto v_reusejp_5967_;
}
else
{
lean_object* v_reuseFailAlloc_5970_; 
v_reuseFailAlloc_5970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5970_, 0, v_a_5963_);
v___x_5968_ = v_reuseFailAlloc_5970_;
goto v_reusejp_5967_;
}
v_reusejp_5967_:
{
lean_object* v___x_5969_; 
v___x_5969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5969_, 0, v___x_5968_);
return v___x_5969_;
}
}
}
else
{
lean_object* v_a_5972_; lean_object* v___x_5974_; uint8_t v_isShared_5975_; uint8_t v_isSharedCheck_5980_; 
v_a_5972_ = lean_ctor_get(v_x_5961_, 0);
v_isSharedCheck_5980_ = !lean_is_exclusive(v_x_5961_);
if (v_isSharedCheck_5980_ == 0)
{
v___x_5974_ = v_x_5961_;
v_isShared_5975_ = v_isSharedCheck_5980_;
goto v_resetjp_5973_;
}
else
{
lean_inc(v_a_5972_);
lean_dec(v_x_5961_);
v___x_5974_ = lean_box(0);
v_isShared_5975_ = v_isSharedCheck_5980_;
goto v_resetjp_5973_;
}
v_resetjp_5973_:
{
lean_object* v___x_5977_; 
if (v_isShared_5975_ == 0)
{
v___x_5977_ = v___x_5974_;
goto v_reusejp_5976_;
}
else
{
lean_object* v_reuseFailAlloc_5979_; 
v_reuseFailAlloc_5979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5979_, 0, v_a_5972_);
v___x_5977_ = v_reuseFailAlloc_5979_;
goto v_reusejp_5976_;
}
v_reusejp_5976_:
{
lean_object* v___x_5978_; 
v___x_5978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5978_, 0, v___x_5977_);
return v___x_5978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv___lam__0___boxed(lean_object* v_x_5981_, lean_object* v___y_5982_){
_start:
{
lean_object* v_res_5983_; 
v_res_5983_ = l_Lasm_JS_Deno_openKv___lam__0(v_x_5981_);
return v_res_5983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0(lean_object* v_b_5984_, lean_object* v_args_5985_){
_start:
{
uint8_t v_construct_5987_; lean_object* v___x_5988_; uint32_t v___x_5989_; uint64_t v___x_5990_; uint64_t v___y_5992_; 
v_construct_5987_ = lean_ctor_get_uint8(v_b_5984_, sizeof(void*)*4);
v___x_5988_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5984_);
v___x_5989_ = 214;
v___x_5990_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0);
if (v_construct_5987_ == 0)
{
uint64_t v___x_6000_; 
v___x_6000_ = 0ULL;
v___y_5992_ = v___x_6000_;
goto v___jp_5991_;
}
else
{
uint64_t v___x_6001_; 
v___x_6001_ = 4ULL;
v___y_5992_ = v___x_6001_;
goto v___jp_5991_;
}
v___jp_5991_:
{
uint64_t v___x_5993_; lean_object* v___x_5994_; lean_object* v___x_5995_; lean_object* v___x_5996_; lean_object* v___x_5997_; lean_object* v___x_5998_; lean_object* v___x_5999_; 
v___x_5993_ = lean_uint64_lor(v___x_5990_, v___y_5992_);
v___x_5994_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5984_, v_args_5985_);
v___x_5995_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_5996_ = lean_string_append(v___x_5995_, v___x_5988_);
v___x_5997_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_5998_ = lean_string_append(v___x_5996_, v___x_5997_);
v___x_5999_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(v___x_5988_, v___x_5989_, v___x_5993_, v___x_5994_, v___x_5998_);
return v___x_5999_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0___boxed(lean_object* v_b_6002_, lean_object* v_args_6003_, lean_object* v_a_6004_){
_start:
{
lean_object* v_res_6005_; 
v_res_6005_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0(v_b_6002_, v_args_6003_);
lean_dec_ref(v_b_6002_);
return v_res_6005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv(lean_object* v_path_6015_){
_start:
{
lean_object* v___f_6017_; uint8_t v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; 
v___f_6017_ = ((lean_object*)(l_Lasm_JS_Deno_openKv___closed__0));
v___x_6018_ = 0;
v___x_6019_ = lean_unsigned_to_nat(1u);
v___x_6020_ = ((lean_object*)(l_Lasm_JS_Deno_openKv___closed__3));
v___x_6021_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_path_6015_);
v___x_6022_ = lean_mk_empty_array_with_capacity(v___x_6019_);
v___x_6023_ = lean_array_push(v___x_6022_, v___x_6021_);
v___x_6024_ = l_Lasm_JS_Web_Support_args(v___x_6023_);
v___x_6025_ = lean_unsigned_to_nat(0u);
v___x_6026_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0(v___x_6020_, v___x_6024_);
v___x_6027_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6025_, v___x_6018_, v___x_6026_, v___f_6017_);
return v___x_6027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv___boxed(lean_object* v_path_6028_, lean_object* v_a_6029_){
_start:
{
lean_object* v_res_6030_; 
v_res_6030_ = l_Lasm_JS_Deno_openKv(v_path_6028_);
return v_res_6030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(lean_object* v_b_6031_, lean_object* v_args_6032_){
_start:
{
uint8_t v_construct_6034_; lean_object* v___x_6035_; uint32_t v___x_6036_; uint64_t v___x_6037_; uint64_t v___y_6039_; 
v_construct_6034_ = lean_ctor_get_uint8(v_b_6031_, sizeof(void*)*4);
v___x_6035_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_6031_);
v___x_6036_ = 214;
v___x_6037_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_construct_6034_ == 0)
{
uint64_t v___x_6047_; 
v___x_6047_ = 0ULL;
v___y_6039_ = v___x_6047_;
goto v___jp_6038_;
}
else
{
uint64_t v___x_6048_; 
v___x_6048_ = 4ULL;
v___y_6039_ = v___x_6048_;
goto v___jp_6038_;
}
v___jp_6038_:
{
uint64_t v___x_6040_; lean_object* v___x_6041_; lean_object* v___x_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; 
v___x_6040_ = lean_uint64_lor(v___x_6037_, v___y_6039_);
v___x_6041_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_6031_, v_args_6032_);
v___x_6042_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_6043_ = lean_string_append(v___x_6042_, v___x_6035_);
lean_dec_ref(v___x_6035_);
v___x_6044_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_6045_ = lean_string_append(v___x_6043_, v___x_6044_);
v___x_6046_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_6036_, v___x_6040_, v___x_6041_, v___x_6045_);
return v___x_6046_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0___boxed(lean_object* v_b_6049_, lean_object* v_args_6050_, lean_object* v_a_6051_){
_start:
{
lean_object* v_res_6052_; 
v_res_6052_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(v_b_6049_, v_args_6050_);
lean_dec_ref(v_b_6049_);
return v_res_6052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(lean_object* v_x_6053_){
_start:
{
if (lean_obj_tag(v_x_6053_) == 0)
{
lean_object* v___x_6054_; 
v___x_6054_ = lean_box(0);
return v___x_6054_;
}
else
{
lean_object* v_val_6055_; 
v_val_6055_ = lean_ctor_get(v_x_6053_, 0);
lean_inc(v_val_6055_);
lean_dec_ref_known(v_x_6053_, 1);
if (lean_obj_tag(v_val_6055_) == 0)
{
double v_value_6056_; lean_object* v___x_6058_; uint8_t v_isShared_6059_; uint8_t v_isSharedCheck_6063_; 
v_value_6056_ = lean_ctor_get_float(v_val_6055_, 0);
v_isSharedCheck_6063_ = !lean_is_exclusive(v_val_6055_);
if (v_isSharedCheck_6063_ == 0)
{
v___x_6058_ = v_val_6055_;
v_isShared_6059_ = v_isSharedCheck_6063_;
goto v_resetjp_6057_;
}
else
{
lean_dec(v_val_6055_);
v___x_6058_ = lean_box(0);
v_isShared_6059_ = v_isSharedCheck_6063_;
goto v_resetjp_6057_;
}
v_resetjp_6057_:
{
lean_object* v___x_6061_; 
if (v_isShared_6059_ == 0)
{
lean_ctor_set_tag(v___x_6058_, 3);
v___x_6061_ = v___x_6058_;
goto v_reusejp_6060_;
}
else
{
lean_object* v_reuseFailAlloc_6062_; 
v_reuseFailAlloc_6062_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6062_, 0, v_value_6056_);
v___x_6061_ = v_reuseFailAlloc_6062_;
goto v_reusejp_6060_;
}
v_reusejp_6060_:
{
return v___x_6061_;
}
}
}
else
{
lean_object* v_value_6064_; lean_object* v___x_6065_; lean_object* v___y_6067_; 
v_value_6064_ = lean_ctor_get(v_val_6055_, 0);
lean_inc_ref(v_value_6064_);
lean_dec_ref_known(v_val_6055_, 1);
v___x_6065_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1___closed__0));
if (lean_obj_tag(v_value_6064_) == 0)
{
double v_value_6073_; lean_object* v___x_6075_; uint8_t v_isShared_6076_; uint8_t v_isSharedCheck_6080_; 
v_value_6073_ = lean_ctor_get_float(v_value_6064_, 0);
v_isSharedCheck_6080_ = !lean_is_exclusive(v_value_6064_);
if (v_isSharedCheck_6080_ == 0)
{
v___x_6075_ = v_value_6064_;
v_isShared_6076_ = v_isSharedCheck_6080_;
goto v_resetjp_6074_;
}
else
{
lean_dec(v_value_6064_);
v___x_6075_ = lean_box(0);
v_isShared_6076_ = v_isSharedCheck_6080_;
goto v_resetjp_6074_;
}
v_resetjp_6074_:
{
lean_object* v___x_6078_; 
if (v_isShared_6076_ == 0)
{
lean_ctor_set_tag(v___x_6075_, 3);
v___x_6078_ = v___x_6075_;
goto v_reusejp_6077_;
}
else
{
lean_object* v_reuseFailAlloc_6079_; 
v_reuseFailAlloc_6079_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6079_, 0, v_value_6073_);
v___x_6078_ = v_reuseFailAlloc_6079_;
goto v_reusejp_6077_;
}
v_reusejp_6077_:
{
v___y_6067_ = v___x_6078_;
goto v___jp_6066_;
}
}
}
else
{
lean_object* v_value_6081_; lean_object* v___x_6083_; uint8_t v_isShared_6084_; uint8_t v_isSharedCheck_6091_; 
v_value_6081_ = lean_ctor_get(v_value_6064_, 0);
v_isSharedCheck_6091_ = !lean_is_exclusive(v_value_6064_);
if (v_isSharedCheck_6091_ == 0)
{
v___x_6083_ = v_value_6064_;
v_isShared_6084_ = v_isSharedCheck_6091_;
goto v_resetjp_6082_;
}
else
{
lean_inc(v_value_6081_);
lean_dec(v_value_6064_);
v___x_6083_ = lean_box(0);
v_isShared_6084_ = v_isSharedCheck_6091_;
goto v_resetjp_6082_;
}
v_resetjp_6082_:
{
size_t v_sz_6085_; size_t v___x_6086_; lean_object* v___x_6087_; lean_object* v___x_6089_; 
v_sz_6085_ = lean_array_size(v_value_6081_);
v___x_6086_ = ((size_t)0ULL);
v___x_6087_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(v_sz_6085_, v___x_6086_, v_value_6081_);
if (v_isShared_6084_ == 0)
{
lean_ctor_set_tag(v___x_6083_, 7);
lean_ctor_set(v___x_6083_, 0, v___x_6087_);
v___x_6089_ = v___x_6083_;
goto v_reusejp_6088_;
}
else
{
lean_object* v_reuseFailAlloc_6090_; 
v_reuseFailAlloc_6090_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6090_, 0, v___x_6087_);
v___x_6089_ = v_reuseFailAlloc_6090_;
goto v_reusejp_6088_;
}
v_reusejp_6088_:
{
v___y_6067_ = v___x_6089_;
goto v___jp_6066_;
}
}
}
v___jp_6066_:
{
lean_object* v___x_6068_; lean_object* v___x_6069_; lean_object* v___x_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; 
v___x_6068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6068_, 0, v___x_6065_);
lean_ctor_set(v___x_6068_, 1, v___y_6067_);
v___x_6069_ = lean_unsigned_to_nat(1u);
v___x_6070_ = lean_mk_empty_array_with_capacity(v___x_6069_);
v___x_6071_ = lean_array_push(v___x_6070_, v___x_6068_);
v___x_6072_ = l_Lasm_JS_Web_Support_fields(v___x_6071_);
lean_dec_ref(v___x_6071_);
return v___x_6072_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cron(lean_object* v_name_6100_, lean_object* v_schedule_6101_, lean_object* v_handler_6102_){
_start:
{
lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___y_6108_; 
v___x_6104_ = lean_unsigned_to_nat(3u);
v___x_6105_ = ((lean_object*)(l_Lasm_JS_Deno_cron___closed__2));
v___x_6106_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6106_, 0, v_name_6100_);
if (lean_obj_tag(v_schedule_6101_) == 0)
{
lean_object* v_value_6117_; lean_object* v___x_6119_; uint8_t v_isShared_6120_; uint8_t v_isSharedCheck_6124_; 
v_value_6117_ = lean_ctor_get(v_schedule_6101_, 0);
v_isSharedCheck_6124_ = !lean_is_exclusive(v_schedule_6101_);
if (v_isSharedCheck_6124_ == 0)
{
v___x_6119_ = v_schedule_6101_;
v_isShared_6120_ = v_isSharedCheck_6124_;
goto v_resetjp_6118_;
}
else
{
lean_inc(v_value_6117_);
lean_dec(v_schedule_6101_);
v___x_6119_ = lean_box(0);
v_isShared_6120_ = v_isSharedCheck_6124_;
goto v_resetjp_6118_;
}
v_resetjp_6118_:
{
lean_object* v___x_6122_; 
if (v_isShared_6120_ == 0)
{
lean_ctor_set_tag(v___x_6119_, 4);
v___x_6122_ = v___x_6119_;
goto v_reusejp_6121_;
}
else
{
lean_object* v_reuseFailAlloc_6123_; 
v_reuseFailAlloc_6123_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6123_, 0, v_value_6117_);
v___x_6122_ = v_reuseFailAlloc_6123_;
goto v_reusejp_6121_;
}
v_reusejp_6121_:
{
v___y_6108_ = v___x_6122_;
goto v___jp_6107_;
}
}
}
else
{
lean_object* v_value_6125_; lean_object* v_minute_6126_; lean_object* v_hour_6127_; lean_object* v_dayOfMonth_6128_; lean_object* v_month_6129_; lean_object* v_dayOfWeek_6130_; lean_object* v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; lean_object* v___x_6135_; lean_object* v___x_6136_; lean_object* v___x_6137_; lean_object* v___x_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; lean_object* v___x_6147_; lean_object* v___x_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6153_; 
v_value_6125_ = lean_ctor_get(v_schedule_6101_, 0);
lean_inc_ref(v_value_6125_);
lean_dec_ref_known(v_schedule_6101_, 1);
v_minute_6126_ = lean_ctor_get(v_value_6125_, 0);
lean_inc(v_minute_6126_);
v_hour_6127_ = lean_ctor_get(v_value_6125_, 1);
lean_inc(v_hour_6127_);
v_dayOfMonth_6128_ = lean_ctor_get(v_value_6125_, 2);
lean_inc(v_dayOfMonth_6128_);
v_month_6129_ = lean_ctor_get(v_value_6125_, 3);
lean_inc(v_month_6129_);
v_dayOfWeek_6130_ = lean_ctor_get(v_value_6125_, 4);
lean_inc(v_dayOfWeek_6130_);
lean_dec_ref(v_value_6125_);
v___x_6131_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0));
v___x_6132_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_minute_6126_);
v___x_6133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6133_, 0, v___x_6131_);
lean_ctor_set(v___x_6133_, 1, v___x_6132_);
v___x_6134_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1));
v___x_6135_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_hour_6127_);
v___x_6136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6136_, 0, v___x_6134_);
lean_ctor_set(v___x_6136_, 1, v___x_6135_);
v___x_6137_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2));
v___x_6138_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_dayOfMonth_6128_);
v___x_6139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6139_, 0, v___x_6137_);
lean_ctor_set(v___x_6139_, 1, v___x_6138_);
v___x_6140_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3));
v___x_6141_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_month_6129_);
v___x_6142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6142_, 0, v___x_6140_);
lean_ctor_set(v___x_6142_, 1, v___x_6141_);
v___x_6143_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4));
v___x_6144_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_dayOfWeek_6130_);
v___x_6145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6145_, 0, v___x_6143_);
lean_ctor_set(v___x_6145_, 1, v___x_6144_);
v___x_6146_ = lean_unsigned_to_nat(5u);
v___x_6147_ = lean_mk_empty_array_with_capacity(v___x_6146_);
v___x_6148_ = lean_array_push(v___x_6147_, v___x_6133_);
v___x_6149_ = lean_array_push(v___x_6148_, v___x_6136_);
v___x_6150_ = lean_array_push(v___x_6149_, v___x_6139_);
v___x_6151_ = lean_array_push(v___x_6150_, v___x_6142_);
v___x_6152_ = lean_array_push(v___x_6151_, v___x_6145_);
v___x_6153_ = l_Lasm_JS_Web_Support_fields(v___x_6152_);
lean_dec_ref(v___x_6152_);
v___y_6108_ = v___x_6153_;
goto v___jp_6107_;
}
v___jp_6107_:
{
lean_object* v___x_6109_; lean_object* v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; 
v___x_6109_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_6110_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6110_, 0, v_handler_6102_);
lean_ctor_set(v___x_6110_, 1, v___x_6109_);
v___x_6111_ = lean_mk_empty_array_with_capacity(v___x_6104_);
v___x_6112_ = lean_array_push(v___x_6111_, v___x_6106_);
v___x_6113_ = lean_array_push(v___x_6112_, v___y_6108_);
v___x_6114_ = lean_array_push(v___x_6113_, v___x_6110_);
v___x_6115_ = l_Lasm_JS_Web_Support_args(v___x_6114_);
v___x_6116_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(v___x_6105_, v___x_6115_);
return v___x_6116_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cron___boxed(lean_object* v_name_6154_, lean_object* v_schedule_6155_, lean_object* v_handler_6156_, lean_object* v_a_6157_){
_start:
{
lean_object* v_res_6158_; 
v_res_6158_ = l_Lasm_JS_Deno_cron(v_name_6154_, v_schedule_6155_, v_handler_6156_);
return v_res_6158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cronWithOptions(lean_object* v_name_6166_, lean_object* v_schedule_6167_, lean_object* v_options_6168_, lean_object* v_handler_6169_){
_start:
{
lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___y_6175_; 
v___x_6171_ = lean_unsigned_to_nat(4u);
v___x_6172_ = ((lean_object*)(l_Lasm_JS_Deno_cronWithOptions___closed__1));
v___x_6173_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6173_, 0, v_name_6166_);
if (lean_obj_tag(v_schedule_6167_) == 0)
{
lean_object* v_value_6204_; lean_object* v___x_6206_; uint8_t v_isShared_6207_; uint8_t v_isSharedCheck_6211_; 
v_value_6204_ = lean_ctor_get(v_schedule_6167_, 0);
v_isSharedCheck_6211_ = !lean_is_exclusive(v_schedule_6167_);
if (v_isSharedCheck_6211_ == 0)
{
v___x_6206_ = v_schedule_6167_;
v_isShared_6207_ = v_isSharedCheck_6211_;
goto v_resetjp_6205_;
}
else
{
lean_inc(v_value_6204_);
lean_dec(v_schedule_6167_);
v___x_6206_ = lean_box(0);
v_isShared_6207_ = v_isSharedCheck_6211_;
goto v_resetjp_6205_;
}
v_resetjp_6205_:
{
lean_object* v___x_6209_; 
if (v_isShared_6207_ == 0)
{
lean_ctor_set_tag(v___x_6206_, 4);
v___x_6209_ = v___x_6206_;
goto v_reusejp_6208_;
}
else
{
lean_object* v_reuseFailAlloc_6210_; 
v_reuseFailAlloc_6210_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6210_, 0, v_value_6204_);
v___x_6209_ = v_reuseFailAlloc_6210_;
goto v_reusejp_6208_;
}
v_reusejp_6208_:
{
v___y_6175_ = v___x_6209_;
goto v___jp_6174_;
}
}
}
else
{
lean_object* v_value_6212_; lean_object* v_minute_6213_; lean_object* v_hour_6214_; lean_object* v_dayOfMonth_6215_; lean_object* v_month_6216_; lean_object* v_dayOfWeek_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; lean_object* v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; lean_object* v___x_6223_; lean_object* v___x_6224_; lean_object* v___x_6225_; lean_object* v___x_6226_; lean_object* v___x_6227_; lean_object* v___x_6228_; lean_object* v___x_6229_; lean_object* v___x_6230_; lean_object* v___x_6231_; lean_object* v___x_6232_; lean_object* v___x_6233_; lean_object* v___x_6234_; lean_object* v___x_6235_; lean_object* v___x_6236_; lean_object* v___x_6237_; lean_object* v___x_6238_; lean_object* v___x_6239_; lean_object* v___x_6240_; 
v_value_6212_ = lean_ctor_get(v_schedule_6167_, 0);
lean_inc_ref(v_value_6212_);
lean_dec_ref_known(v_schedule_6167_, 1);
v_minute_6213_ = lean_ctor_get(v_value_6212_, 0);
lean_inc(v_minute_6213_);
v_hour_6214_ = lean_ctor_get(v_value_6212_, 1);
lean_inc(v_hour_6214_);
v_dayOfMonth_6215_ = lean_ctor_get(v_value_6212_, 2);
lean_inc(v_dayOfMonth_6215_);
v_month_6216_ = lean_ctor_get(v_value_6212_, 3);
lean_inc(v_month_6216_);
v_dayOfWeek_6217_ = lean_ctor_get(v_value_6212_, 4);
lean_inc(v_dayOfWeek_6217_);
lean_dec_ref(v_value_6212_);
v___x_6218_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0));
v___x_6219_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_minute_6213_);
v___x_6220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6220_, 0, v___x_6218_);
lean_ctor_set(v___x_6220_, 1, v___x_6219_);
v___x_6221_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1));
v___x_6222_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_hour_6214_);
v___x_6223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6223_, 0, v___x_6221_);
lean_ctor_set(v___x_6223_, 1, v___x_6222_);
v___x_6224_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2));
v___x_6225_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_dayOfMonth_6215_);
v___x_6226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6226_, 0, v___x_6224_);
lean_ctor_set(v___x_6226_, 1, v___x_6225_);
v___x_6227_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3));
v___x_6228_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_month_6216_);
v___x_6229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6229_, 0, v___x_6227_);
lean_ctor_set(v___x_6229_, 1, v___x_6228_);
v___x_6230_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4));
v___x_6231_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_dayOfWeek_6217_);
v___x_6232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6232_, 0, v___x_6230_);
lean_ctor_set(v___x_6232_, 1, v___x_6231_);
v___x_6233_ = lean_unsigned_to_nat(5u);
v___x_6234_ = lean_mk_empty_array_with_capacity(v___x_6233_);
v___x_6235_ = lean_array_push(v___x_6234_, v___x_6220_);
v___x_6236_ = lean_array_push(v___x_6235_, v___x_6223_);
v___x_6237_ = lean_array_push(v___x_6236_, v___x_6226_);
v___x_6238_ = lean_array_push(v___x_6237_, v___x_6229_);
v___x_6239_ = lean_array_push(v___x_6238_, v___x_6232_);
v___x_6240_ = l_Lasm_JS_Web_Support_fields(v___x_6239_);
lean_dec_ref(v___x_6239_);
v___y_6175_ = v___x_6240_;
goto v___jp_6174_;
}
v___jp_6174_:
{
lean_object* v_backoffSchedule_6176_; lean_object* v_signal_6177_; lean_object* v___x_6179_; uint8_t v_isShared_6180_; uint8_t v_isSharedCheck_6203_; 
v_backoffSchedule_6176_ = lean_ctor_get(v_options_6168_, 0);
v_signal_6177_ = lean_ctor_get(v_options_6168_, 1);
v_isSharedCheck_6203_ = !lean_is_exclusive(v_options_6168_);
if (v_isSharedCheck_6203_ == 0)
{
v___x_6179_ = v_options_6168_;
v_isShared_6180_ = v_isSharedCheck_6203_;
goto v_resetjp_6178_;
}
else
{
lean_inc(v_signal_6177_);
lean_inc(v_backoffSchedule_6176_);
lean_dec(v_options_6168_);
v___x_6179_ = lean_box(0);
v_isShared_6180_ = v_isSharedCheck_6203_;
goto v_resetjp_6178_;
}
v_resetjp_6178_:
{
lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6184_; 
v___x_6181_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_6182_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(v_backoffSchedule_6176_);
if (v_isShared_6180_ == 0)
{
lean_ctor_set(v___x_6179_, 1, v___x_6182_);
lean_ctor_set(v___x_6179_, 0, v___x_6181_);
v___x_6184_ = v___x_6179_;
goto v_reusejp_6183_;
}
else
{
lean_object* v_reuseFailAlloc_6202_; 
v_reuseFailAlloc_6202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6202_, 0, v___x_6181_);
lean_ctor_set(v_reuseFailAlloc_6202_, 1, v___x_6182_);
v___x_6184_ = v_reuseFailAlloc_6202_;
goto v_reusejp_6183_;
}
v_reusejp_6183_:
{
lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; lean_object* v___x_6195_; lean_object* v___x_6196_; lean_object* v___x_6197_; lean_object* v___x_6198_; lean_object* v___x_6199_; lean_object* v___x_6200_; lean_object* v___x_6201_; 
v___x_6185_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0___closed__0));
v___x_6186_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_6177_);
lean_dec(v_signal_6177_);
v___x_6187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6187_, 0, v___x_6185_);
lean_ctor_set(v___x_6187_, 1, v___x_6186_);
v___x_6188_ = lean_unsigned_to_nat(2u);
v___x_6189_ = lean_mk_empty_array_with_capacity(v___x_6188_);
v___x_6190_ = lean_array_push(v___x_6189_, v___x_6184_);
v___x_6191_ = lean_array_push(v___x_6190_, v___x_6187_);
v___x_6192_ = l_Lasm_JS_Web_Support_fields(v___x_6191_);
lean_dec_ref(v___x_6191_);
v___x_6193_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_6194_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6194_, 0, v_handler_6169_);
lean_ctor_set(v___x_6194_, 1, v___x_6193_);
v___x_6195_ = lean_mk_empty_array_with_capacity(v___x_6171_);
v___x_6196_ = lean_array_push(v___x_6195_, v___x_6173_);
v___x_6197_ = lean_array_push(v___x_6196_, v___y_6175_);
v___x_6198_ = lean_array_push(v___x_6197_, v___x_6192_);
v___x_6199_ = lean_array_push(v___x_6198_, v___x_6194_);
v___x_6200_ = l_Lasm_JS_Web_Support_args(v___x_6199_);
v___x_6201_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(v___x_6172_, v___x_6200_);
return v___x_6201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cronWithOptions___boxed(lean_object* v_name_6241_, lean_object* v_schedule_6242_, lean_object* v_options_6243_, lean_object* v_handler_6244_, lean_object* v_a_6245_){
_start:
{
lean_object* v_res_6246_; 
v_res_6246_ = l_Lasm_JS_Deno_cronWithOptions(v_name_6241_, v_schedule_6242_, v_options_6243_, v_handler_6244_);
return v_res_6246_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
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
res = initialize_Lasm_JS_Web_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Deno_instInhabitedKvMutationType_default = _init_l_Lasm_JS_Deno_instInhabitedKvMutationType_default();
l_Lasm_JS_Deno_instInhabitedKvMutationType = _init_l_Lasm_JS_Deno_instInhabitedKvMutationType();
l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel_default = _init_l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel_default();
l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel = _init_l_Lasm_JS_Deno_instInhabitedKvConsistencyLevel();
l_Lasm_JS_Deno_instFromJSKvEntry = _init_l_Lasm_JS_Deno_instFromJSKvEntry();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKvEntry);
l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions = _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions);
l_Lasm_JS_Deno_instFromJSAtomicOperationCommit = _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit);
l_Lasm_JS_Deno_instFromJSKvEntryMaybe = _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKvEntryMaybe);
l_Lasm_JS_Deno_instFromJSKvCommitResult = _init_l_Lasm_JS_Deno_instFromJSKvCommitResult();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSKvCommitResult);
l_Lasm_JS_Deno_instToJSKvListSelector = _init_l_Lasm_JS_Deno_instToJSKvListSelector();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSKvListSelector);
l_Lasm_JS_Deno_instToJSKvEnqueueOptions = _init_l_Lasm_JS_Deno_instToJSKvEnqueueOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSKvEnqueueOptions);
l_Lasm_JS_Deno_instToJSCronWithOptionsOptions = _init_l_Lasm_JS_Deno_instToJSCronWithOptionsOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
