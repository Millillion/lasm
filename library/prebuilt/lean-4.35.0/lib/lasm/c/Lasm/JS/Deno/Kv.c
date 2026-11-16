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
double l_Float_ofInt(lean_object*);
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* lean_nat_abs(lean_object*);
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
lean_object* v_value_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
v_value_537_ = lean_ctor_get(v_x_512_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v_x_512_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v_x_512_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_value_537_);
lean_dec(v_x_512_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
lean_ctor_set_tag(v___x_539_, 5);
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_value_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
default: 
{
uint8_t v_value_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_552_; 
v_value_545_ = lean_ctor_get_uint8(v_x_512_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v_x_512_);
if (v_isSharedCheck_552_ == 0)
{
v___x_547_ = v_x_512_;
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
else
{
lean_dec(v_x_512_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_550_; 
if (v_isShared_548_ == 0)
{
lean_ctor_set_tag(v___x_547_, 2);
v___x_550_ = v___x_547_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_551_, 0, v_value_545_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeByteArrayKvKeyPart___lam__0(lean_object* v_value_555_){
_start:
{
lean_object* v___x_556_; 
v___x_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_556_, 0, v_value_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringKvKeyPart___lam__0(lean_object* v_value_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_560_, 0, v_value_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0(double v_value_563_){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = lean_alloc_ctor(2, 0, 8);
lean_ctor_set_float(v___x_564_, 0, v_value_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0___boxed(lean_object* v_value_565_){
_start:
{
double v_value_boxed_566_; lean_object* v_res_567_; 
v_value_boxed_566_ = lean_unbox_float(v_value_565_);
lean_dec_ref(v_value_565_);
v_res_567_ = l_Lasm_JS_Deno_instCoeFloatKvKeyPart___lam__0(v_value_boxed_566_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeIntKvKeyPart___lam__0(lean_object* v_value_570_){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_571_, 0, v_value_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0(uint8_t v_value_574_){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = lean_alloc_ctor(4, 0, 1);
lean_ctor_set_uint8(v___x_575_, 0, v_value_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0___boxed(lean_object* v_value_576_){
_start:
{
uint8_t v_value_boxed_577_; lean_object* v_res_578_; 
v_value_boxed_577_ = lean_unbox(v_value_576_);
v_res_578_ = l_Lasm_JS_Deno_instCoeBoolKvKeyPart___lam__0(v_value_boxed_577_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvKeyPart___lam__0(lean_object* v_x_583_){
_start:
{
switch(lean_obj_tag(v_x_583_))
{
case 6:
{
lean_object* v_b_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_592_; 
v_b_584_ = lean_ctor_get(v_x_583_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v_x_583_);
if (v_isSharedCheck_592_ == 0)
{
v___x_586_ = v_x_583_;
v_isShared_587_ = v_isSharedCheck_592_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_b_584_);
lean_dec(v_x_583_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_592_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
lean_ctor_set_tag(v___x_586_, 0);
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_b_584_);
v___x_589_ = v_reuseFailAlloc_591_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
lean_object* v___x_590_; 
v___x_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
return v___x_590_;
}
}
}
case 4:
{
lean_object* v_s_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_601_; 
v_s_593_ = lean_ctor_get(v_x_583_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v_x_583_);
if (v_isSharedCheck_601_ == 0)
{
v___x_595_ = v_x_583_;
v_isShared_596_ = v_isSharedCheck_601_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_s_593_);
lean_dec(v_x_583_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_601_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_598_; 
if (v_isShared_596_ == 0)
{
lean_ctor_set_tag(v___x_595_, 1);
v___x_598_ = v___x_595_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_s_593_);
v___x_598_ = v_reuseFailAlloc_600_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
lean_object* v___x_599_; 
v___x_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_599_, 0, v___x_598_);
return v___x_599_;
}
}
}
case 3:
{
double v_n_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_610_; 
v_n_602_ = lean_ctor_get_float(v_x_583_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v_x_583_);
if (v_isSharedCheck_610_ == 0)
{
v___x_604_ = v_x_583_;
v_isShared_605_ = v_isSharedCheck_610_;
goto v_resetjp_603_;
}
else
{
lean_dec(v_x_583_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_610_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
lean_ctor_set_tag(v___x_604_, 2);
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(2, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_609_, 0, v_n_602_);
v___x_607_ = v_reuseFailAlloc_609_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
lean_object* v___x_608_; 
v___x_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
return v___x_608_;
}
}
}
case 5:
{
lean_object* v_i_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_619_; 
v_i_611_ = lean_ctor_get(v_x_583_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v_x_583_);
if (v_isSharedCheck_619_ == 0)
{
v___x_613_ = v_x_583_;
v_isShared_614_ = v_isSharedCheck_619_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_i_611_);
lean_dec(v_x_583_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_619_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set_tag(v___x_613_, 3);
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_i_611_);
v___x_616_ = v_reuseFailAlloc_618_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_617_; 
v___x_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
return v___x_617_;
}
}
}
case 2:
{
uint8_t v_b_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_628_; 
v_b_620_ = lean_ctor_get_uint8(v_x_583_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v_x_583_);
if (v_isSharedCheck_628_ == 0)
{
v___x_622_ = v_x_583_;
v_isShared_623_ = v_isSharedCheck_628_;
goto v_resetjp_621_;
}
else
{
lean_dec(v_x_583_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_628_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_625_; 
if (v_isShared_623_ == 0)
{
lean_ctor_set_tag(v___x_622_, 4);
v___x_625_ = v___x_622_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(4, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_627_, 0, v_b_620_);
v___x_625_ = v_reuseFailAlloc_627_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
lean_object* v___x_626_; 
v___x_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
return v___x_626_;
}
}
}
default: 
{
lean_object* v___x_629_; 
lean_dec(v_x_583_);
v___x_629_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvKeyPart___lam__0___closed__0));
return v___x_629_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0(lean_object* v___x_640_, lean_object* v___x_641_, lean_object* v___x_642_, lean_object* v_d_643_){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v___x_645_ = l_Lasm_JS_readField___redArg(v___x_640_, v_d_643_, v___x_644_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
lean_dec_ref(v___x_642_);
lean_dec_ref(v___x_641_);
v_a_646_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_645_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_645_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v_a_654_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_a_654_);
lean_dec_ref_known(v___x_645_, 1);
v___x_655_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_656_ = l_Lasm_JS_readField___redArg(v___x_641_, v_d_643_, v___x_655_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
lean_dec(v_a_654_);
lean_dec_ref(v___x_642_);
v_a_657_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_656_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_656_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v_a_665_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v___x_656_, 1);
v___x_666_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
v___x_667_ = l_Lasm_JS_readField___redArg(v___x_642_, v_d_643_, v___x_666_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
lean_dec(v_a_665_);
lean_dec(v_a_654_);
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
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
else
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_684_; 
v_a_676_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_684_ == 0)
{
v___x_678_ = v___x_667_;
v_isShared_679_ = v_isSharedCheck_684_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v___x_667_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_684_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_680_; lean_object* v___x_682_; 
v___x_680_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_680_, 0, v_a_654_);
lean_ctor_set(v___x_680_, 1, v_a_665_);
lean_ctor_set(v___x_680_, 2, v_a_676_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v___x_680_);
v___x_682_ = v___x_678_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_680_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___boxed(lean_object* v___x_685_, lean_object* v___x_686_, lean_object* v___x_687_, lean_object* v_d_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lasm_JS_Deno_instFromJSKvEntry___lam__0(v___x_685_, v___x_686_, v___x_687_, v_d_688_);
lean_dec(v_d_688_);
return v_res_689_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__0(void){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvKeyPart));
v___x_691_ = l_Lasm_JS_instFromJSArray___redArg(v___x_690_);
return v___x_691_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__1(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___f_695_; 
v___x_692_ = l_Lasm_JS_instFromJSString;
v___x_693_ = l_Lasm_JS_instFromJSData;
v___x_694_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvEntry___closed__0, &l_Lasm_JS_Deno_instFromJSKvEntry___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__0);
v___f_695_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___boxed), 4, 3);
lean_closure_set(v___f_695_, 0, v___x_694_);
lean_closure_set(v___f_695_, 1, v___x_693_);
lean_closure_set(v___f_695_, 2, v___x_692_);
return v___f_695_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__3(void){
_start:
{
uint8_t v___x_697_; lean_object* v___x_698_; lean_object* v___f_699_; lean_object* v___x_700_; 
v___x_697_ = 0;
v___x_698_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___closed__2));
v___f_699_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvEntry___closed__1, &l_Lasm_JS_Deno_instFromJSKvEntry___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__1);
v___x_700_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_700_, 0, v___f_699_);
lean_ctor_set(v___x_700_, 1, v___x_698_);
lean_ctor_set_uint8(v___x_700_, sizeof(void*)*2, v___x_697_);
return v___x_700_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntry(void){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvEntry___closed__3, &l_Lasm_JS_Deno_instFromJSKvEntry___closed__3_once, _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__3);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1(lean_object* v___f_721_, lean_object* v_d_722_){
_start:
{
lean_object* v_key_723_; lean_object* v_versionstamp_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_755_; 
v_key_723_ = lean_ctor_get(v_d_722_, 0);
v_versionstamp_724_ = lean_ctor_get(v_d_722_, 1);
v_isSharedCheck_755_ = !lean_is_exclusive(v_d_722_);
if (v_isSharedCheck_755_ == 0)
{
v___x_726_ = v_d_722_;
v_isShared_727_ = v_isSharedCheck_755_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_versionstamp_724_);
lean_inc(v_key_723_);
lean_dec(v_d_722_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_755_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_728_; lean_object* v___x_729_; size_t v_sz_730_; size_t v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_735_; 
v___x_728_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v___x_729_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_730_ = lean_array_size(v_key_723_);
v___x_731_ = ((size_t)0ULL);
v___x_732_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_729_, v___f_721_, v_sz_730_, v___x_731_, v_key_723_);
v___x_733_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_733_, 0, v___x_732_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 1, v___x_733_);
lean_ctor_set(v___x_726_, 0, v___x_728_);
v___x_735_ = v___x_726_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_728_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v___x_733_);
v___x_735_ = v_reuseFailAlloc_754_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
lean_object* v___x_736_; lean_object* v___y_738_; 
v___x_736_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
if (lean_obj_tag(v_versionstamp_724_) == 0)
{
lean_object* v___x_745_; 
v___x_745_ = lean_box(1);
v___y_738_ = v___x_745_;
goto v___jp_737_;
}
else
{
lean_object* v_val_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_753_; 
v_val_746_ = lean_ctor_get(v_versionstamp_724_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v_versionstamp_724_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v_versionstamp_724_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_val_746_);
lean_dec(v_versionstamp_724_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
lean_ctor_set_tag(v___x_748_, 4);
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_val_746_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
v___y_738_ = v___x_751_;
goto v___jp_737_;
}
}
}
v___jp_737_:
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_736_);
lean_ctor_set(v___x_739_, 1, v___y_738_);
v___x_740_ = lean_unsigned_to_nat(2u);
v___x_741_ = lean_mk_empty_array_with_capacity(v___x_740_);
v___x_742_ = lean_array_push(v___x_741_, v___x_735_);
v___x_743_ = lean_array_push(v___x_742_, v___x_739_);
v___x_744_ = l_Lasm_JS_Web_Support_fields(v___x_743_);
lean_dec_ref(v___x_743_);
return v___x_744_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvMutation___lam__1(lean_object* v___f_761_, lean_object* v___f_762_, lean_object* v_d_763_){
_start:
{
lean_object* v_key_764_; uint8_t v_type_765_; lean_object* v_value_766_; lean_object* v_expireIn_767_; lean_object* v___x_768_; lean_object* v___x_769_; size_t v_sz_770_; size_t v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___y_777_; 
v_key_764_ = lean_ctor_get(v_d_763_, 0);
lean_inc_ref(v_key_764_);
v_type_765_ = lean_ctor_get_uint8(v_d_763_, sizeof(void*)*3);
v_value_766_ = lean_ctor_get(v_d_763_, 1);
lean_inc(v_value_766_);
v_expireIn_767_ = lean_ctor_get(v_d_763_, 2);
lean_inc(v_expireIn_767_);
lean_dec_ref(v_d_763_);
v___x_768_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v___x_769_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_770_ = lean_array_size(v_key_764_);
v___x_771_ = ((size_t)0ULL);
v___x_772_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_769_, v___f_761_, v_sz_770_, v___x_771_, v_key_764_);
v___x_773_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
v___x_774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_774_, 0, v___x_768_);
lean_ctor_set(v___x_774_, 1, v___x_773_);
v___x_775_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__0));
switch(v_type_765_)
{
case 0:
{
lean_object* v___x_791_; 
v___x_791_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__1));
v___y_777_ = v___x_791_;
goto v___jp_776_;
}
case 1:
{
lean_object* v___x_792_; 
v___x_792_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__3));
v___y_777_ = v___x_792_;
goto v___jp_776_;
}
case 2:
{
lean_object* v___x_793_; 
v___x_793_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__5));
v___y_777_ = v___x_793_;
goto v___jp_776_;
}
case 3:
{
lean_object* v___x_794_; 
v___x_794_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__7));
v___y_777_ = v___x_794_;
goto v___jp_776_;
}
default: 
{
lean_object* v___x_795_; 
v___x_795_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__9));
v___y_777_ = v___x_795_;
goto v___jp_776_;
}
}
v___jp_776_:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
lean_inc(v___y_777_);
v___x_778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_778_, 0, v___x_775_);
lean_ctor_set(v___x_778_, 1, v___y_777_);
v___x_779_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
lean_ctor_set(v___x_780_, 1, v_value_766_);
v___x_781_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_782_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_762_, v_expireIn_767_);
v___x_783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_781_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = lean_unsigned_to_nat(4u);
v___x_785_ = lean_mk_empty_array_with_capacity(v___x_784_);
v___x_786_ = lean_array_push(v___x_785_, v___x_774_);
v___x_787_ = lean_array_push(v___x_786_, v___x_778_);
v___x_788_ = lean_array_push(v___x_787_, v___x_780_);
v___x_789_ = lean_array_push(v___x_788_, v___x_783_);
v___x_790_ = l_Lasm_JS_Web_Support_fields(v___x_789_);
lean_dec_ref(v___x_789_);
return v___x_790_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationSetOptions___lam__0(lean_object* v___f_801_, lean_object* v_d_802_){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_803_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_804_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_801_, v_d_802_);
v___x_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_803_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
v___x_806_ = lean_unsigned_to_nat(1u);
v___x_807_ = lean_mk_empty_array_with_capacity(v___x_806_);
v___x_808_ = lean_array_push(v___x_807_, v___x_805_);
v___x_809_ = l_Lasm_JS_Web_Support_fields(v___x_808_);
lean_dec_ref(v___x_808_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0(lean_object* v___f_816_, lean_object* v___x_817_, lean_object* v___x_818_, lean_object* v_d_819_){
_start:
{
lean_object* v_delay_820_; lean_object* v_keysIfUndelivered_821_; lean_object* v_backoffSchedule_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v_delay_820_ = lean_ctor_get(v_d_819_, 0);
lean_inc(v_delay_820_);
v_keysIfUndelivered_821_ = lean_ctor_get(v_d_819_, 1);
lean_inc(v_keysIfUndelivered_821_);
v_backoffSchedule_822_ = lean_ctor_get(v_d_819_, 2);
lean_inc(v_backoffSchedule_822_);
lean_dec_ref(v_d_819_);
v___x_823_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0));
v___x_824_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_816_, v_delay_820_);
v___x_825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_823_);
lean_ctor_set(v___x_825_, 1, v___x_824_);
v___x_826_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1));
v___x_827_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_817_, v_keysIfUndelivered_821_);
v___x_828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_826_);
lean_ctor_set(v___x_828_, 1, v___x_827_);
v___x_829_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_830_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_818_, v_backoffSchedule_822_);
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_829_);
lean_ctor_set(v___x_831_, 1, v___x_830_);
v___x_832_ = lean_unsigned_to_nat(3u);
v___x_833_ = lean_mk_empty_array_with_capacity(v___x_832_);
v___x_834_ = lean_array_push(v___x_833_, v___x_825_);
v___x_835_ = lean_array_push(v___x_834_, v___x_828_);
v___x_836_ = lean_array_push(v___x_835_, v___x_831_);
v___x_837_ = l_Lasm_JS_Web_Support_fields(v___x_836_);
lean_dec_ref(v___x_836_);
return v___x_837_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0(void){
_start:
{
lean_object* v___f_838_; lean_object* v___x_839_; 
v___f_838_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvKeyPart___closed__0));
v___x_839_ = l_Lasm_JS_instToJSArray___redArg(v___f_838_);
return v___x_839_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0);
v___x_841_ = l_Lasm_JS_instToJSArray___redArg(v___x_840_);
return v___x_841_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2(void){
_start:
{
lean_object* v___f_842_; lean_object* v___x_843_; 
v___f_842_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___closed__0));
v___x_843_ = l_Lasm_JS_instToJSArray___redArg(v___f_842_);
return v___x_843_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__3(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___f_846_; lean_object* v___f_847_; 
v___x_844_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2);
v___x_845_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1);
v___f_846_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___closed__0));
v___f_847_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0), 4, 3);
lean_closure_set(v___f_847_, 0, v___f_846_);
lean_closure_set(v___f_847_, 1, v___x_845_);
lean_closure_set(v___f_847_, 2, v___x_844_);
return v___f_847_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions(void){
_start:
{
lean_object* v___f_848_; 
v___f_848_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__3, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__3_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__3);
return v___f_848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0(lean_object* v___x_850_, lean_object* v___x_851_, lean_object* v_d_852_){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0));
v___x_854_ = l_Lasm_JS_readField___redArg(v___x_850_, v_d_852_, v___x_853_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
lean_dec_ref(v___x_851_);
v_a_855_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_854_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_854_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
else
{
lean_object* v_a_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v_a_863_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_a_863_);
lean_dec_ref_known(v___x_854_, 1);
v___x_864_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
v___x_865_ = l_Lasm_JS_readField___redArg(v___x_851_, v_d_852_, v___x_864_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_873_; 
lean_dec(v_a_863_);
v_a_866_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_873_ == 0)
{
v___x_868_ = v___x_865_;
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_865_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_871_; 
if (v_isShared_869_ == 0)
{
v___x_871_ = v___x_868_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_a_866_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
else
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_883_; 
v_a_874_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_883_ == 0)
{
v___x_876_ = v___x_865_;
v_isShared_877_ = v_isSharedCheck_883_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_865_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_883_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; uint8_t v___x_879_; lean_object* v___x_881_; 
v___x_878_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_878_, 0, v_a_874_);
v___x_879_ = lean_unbox(v_a_863_);
lean_dec(v_a_863_);
lean_ctor_set_uint8(v___x_878_, sizeof(void*)*1, v___x_879_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v___x_878_);
v___x_881_ = v___x_876_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_878_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___boxed(lean_object* v___x_884_, lean_object* v___x_885_, lean_object* v_d_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0(v___x_884_, v___x_885_, v_d_886_);
lean_dec(v_d_886_);
return v_res_887_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0(void){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_888_ = l_Lasm_JS_instFromJSString;
v___x_889_ = l_Lasm_JS_instFromJSOption___redArg(v___x_888_);
return v___x_889_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__1(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___f_892_; 
v___x_890_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0, &l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0);
v___x_891_ = l_Lasm_JS_instFromJSBool;
v___f_892_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___boxed), 3, 2);
lean_closure_set(v___f_892_, 0, v___x_891_);
lean_closure_set(v___f_892_, 1, v___x_890_);
return v___f_892_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__3(void){
_start:
{
uint8_t v___x_894_; lean_object* v___x_895_; lean_object* v___f_896_; lean_object* v___x_897_; 
v___x_894_ = 0;
v___x_895_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__2));
v___f_896_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__1, &l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__1);
v___x_897_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_897_, 0, v___f_896_);
lean_ctor_set(v___x_897_, 1, v___x_895_);
lean_ctor_set_uint8(v___x_897_, sizeof(void*)*2, v___x_894_);
return v___x_897_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit(void){
_start:
{
lean_object* v___x_898_; 
v___x_898_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__3, &l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__3_once, _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__3);
return v___x_898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0(lean_object* v___f_900_, lean_object* v_d_901_){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_902_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_903_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_900_, v_d_901_);
v___x_904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_902_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = lean_unsigned_to_nat(1u);
v___x_906_ = lean_mk_empty_array_with_capacity(v___x_905_);
v___x_907_ = lean_array_push(v___x_906_, v___x_904_);
v___x_908_ = l_Lasm_JS_Web_Support_fields(v___x_907_);
lean_dec_ref(v___x_907_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0(lean_object* v___x_912_, lean_object* v___x_913_, lean_object* v___x_914_, lean_object* v_d_915_){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_916_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v___x_917_ = l_Lasm_JS_readField___redArg(v___x_912_, v_d_915_, v___x_916_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec_ref(v___x_914_);
lean_dec_ref(v___x_913_);
v_a_918_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_917_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_917_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v_a_926_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_926_);
lean_dec_ref_known(v___x_917_, 1);
v___x_927_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_928_ = l_Lasm_JS_readField___redArg(v___x_913_, v_d_915_, v___x_927_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_936_; 
lean_dec(v_a_926_);
lean_dec_ref(v___x_914_);
v_a_929_ = lean_ctor_get(v___x_928_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___x_928_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___x_928_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_934_; 
if (v_isShared_932_ == 0)
{
v___x_934_ = v___x_931_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_a_929_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v_a_937_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_937_);
lean_dec_ref_known(v___x_928_, 1);
v___x_938_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
v___x_939_ = l_Lasm_JS_readField___redArg(v___x_914_, v_d_915_, v___x_938_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
lean_dec(v_a_937_);
lean_dec(v_a_926_);
v_a_940_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_939_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_939_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_956_; 
v_a_948_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_956_ == 0)
{
v___x_950_ = v___x_939_;
v_isShared_951_ = v_isSharedCheck_956_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_939_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_956_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_952_; lean_object* v___x_954_; 
v___x_952_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_952_, 0, v_a_926_);
lean_ctor_set(v___x_952_, 1, v_a_937_);
lean_ctor_set(v___x_952_, 2, v_a_948_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 0, v___x_952_);
v___x_954_ = v___x_950_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_952_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0___boxed(lean_object* v___x_957_, lean_object* v___x_958_, lean_object* v___x_959_, lean_object* v_d_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0(v___x_957_, v___x_958_, v___x_959_, v_d_960_);
lean_dec(v_d_960_);
return v_res_961_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__0(void){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___f_965_; 
v___x_962_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0, &l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__0);
v___x_963_ = l_Lasm_JS_instFromJSData;
v___x_964_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvEntry___closed__0, &l_Lasm_JS_Deno_instFromJSKvEntry___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSKvEntry___closed__0);
v___f_965_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvEntryMaybe___lam__0___boxed), 4, 3);
lean_closure_set(v___f_965_, 0, v___x_964_);
lean_closure_set(v___f_965_, 1, v___x_963_);
lean_closure_set(v___f_965_, 2, v___x_962_);
return v___f_965_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__2(void){
_start:
{
uint8_t v___x_967_; lean_object* v___x_968_; lean_object* v___f_969_; lean_object* v___x_970_; 
v___x_967_ = 0;
v___x_968_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__1));
v___f_969_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__0, &l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__0);
v___x_970_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_970_, 0, v___f_969_);
lean_ctor_set(v___x_970_, 1, v___x_968_);
lean_ctor_set_uint8(v___x_970_, sizeof(void*)*2, v___x_967_);
return v___x_970_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe(void){
_start:
{
lean_object* v___x_971_; 
v___x_971_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__2, &l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__2);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0(lean_object* v___x_974_, lean_object* v___x_975_, lean_object* v_d_976_){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0));
v___x_978_ = l_Lasm_JS_readField___redArg(v___x_974_, v_d_976_, v___x_977_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
lean_dec_ref(v___x_975_);
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
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
else
{
lean_object* v_a_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v_a_987_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_a_987_);
lean_dec_ref_known(v___x_978_, 1);
v___x_988_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
v___x_989_ = l_Lasm_JS_readField___redArg(v___x_975_, v_d_976_, v___x_988_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
lean_dec(v_a_987_);
v_a_990_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_989_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_989_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_990_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
else
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1007_; 
v_a_998_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1000_ = v___x_989_;
v_isShared_1001_ = v_isSharedCheck_1007_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_989_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1007_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1002_; uint8_t v___x_1003_; lean_object* v___x_1005_; 
v___x_1002_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1002_, 0, v_a_998_);
v___x_1003_ = lean_unbox(v_a_987_);
lean_dec(v_a_987_);
lean_ctor_set_uint8(v___x_1002_, sizeof(void*)*1, v___x_1003_);
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 0, v___x_1002_);
v___x_1005_ = v___x_1000_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_1002_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0___boxed(lean_object* v___x_1008_, lean_object* v___x_1009_, lean_object* v_d_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0(v___x_1008_, v___x_1009_, v_d_1010_);
lean_dec(v_d_1010_);
return v_res_1011_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__0(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___f_1014_; 
v___x_1012_ = l_Lasm_JS_instFromJSString;
v___x_1013_ = l_Lasm_JS_instFromJSBool;
v___f_1014_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSKvCommitResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1014_, 0, v___x_1013_);
lean_closure_set(v___f_1014_, 1, v___x_1012_);
return v___f_1014_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__2(void){
_start:
{
uint8_t v___x_1016_; lean_object* v___x_1017_; lean_object* v___f_1018_; lean_object* v___x_1019_; 
v___x_1016_ = 0;
v___x_1017_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__1));
v___f_1018_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__0, &l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__0);
v___x_1019_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1019_, 0, v___f_1018_);
lean_ctor_set(v___x_1019_, 1, v___x_1017_);
lean_ctor_set_uint8(v___x_1019_, sizeof(void*)*2, v___x_1016_);
return v___x_1019_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSKvCommitResult(void){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__2, &l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__2);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListSelector___lam__0(lean_object* v___x_1024_, lean_object* v_d_1025_){
_start:
{
lean_object* v_prefix_1026_; lean_object* v_start_1027_; lean_object* v_end_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v_prefix_1026_ = lean_ctor_get(v_d_1025_, 0);
lean_inc(v_prefix_1026_);
v_start_1027_ = lean_ctor_get(v_d_1025_, 1);
lean_inc(v_start_1027_);
v_end_1028_ = lean_ctor_get(v_d_1025_, 2);
lean_inc(v_end_1028_);
lean_dec_ref(v_d_1025_);
v___x_1029_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__0));
lean_inc_ref_n(v___x_1024_, 2);
v___x_1030_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1024_, v_prefix_1026_);
v___x_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1029_);
lean_ctor_set(v___x_1031_, 1, v___x_1030_);
v___x_1032_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__1));
v___x_1033_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1024_, v_start_1027_);
v___x_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1032_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
v___x_1035_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__2));
v___x_1036_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1024_, v_end_1028_);
v___x_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1035_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = lean_unsigned_to_nat(3u);
v___x_1039_ = lean_mk_empty_array_with_capacity(v___x_1038_);
v___x_1040_ = lean_array_push(v___x_1039_, v___x_1031_);
v___x_1041_ = lean_array_push(v___x_1040_, v___x_1034_);
v___x_1042_ = lean_array_push(v___x_1041_, v___x_1037_);
v___x_1043_ = l_Lasm_JS_Web_Support_fields(v___x_1042_);
lean_dec_ref(v___x_1042_);
return v___x_1043_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvListSelector___closed__0(void){
_start:
{
lean_object* v___x_1044_; lean_object* v___f_1045_; 
v___x_1044_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__0);
v___f_1045_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0), 2, 1);
lean_closure_set(v___f_1045_, 0, v___x_1044_);
return v___f_1045_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvListSelector(void){
_start:
{
lean_object* v___f_1046_; 
v___f_1046_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSKvListSelector___closed__0, &l_Lasm_JS_Deno_instToJSKvListSelector___closed__0_once, _init_l_Lasm_JS_Deno_instToJSKvListSelector___closed__0);
return v___f_1046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___lam__0(lean_object* v___f_1051_, lean_object* v___f_1052_, lean_object* v___f_1053_, lean_object* v___f_1054_, lean_object* v_d_1055_){
_start:
{
lean_object* v_limit_1056_; lean_object* v_cursor_1057_; lean_object* v_reverse_1058_; lean_object* v_consistency_1059_; lean_object* v_batchSize_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_limit_1056_ = lean_ctor_get(v_d_1055_, 0);
lean_inc(v_limit_1056_);
v_cursor_1057_ = lean_ctor_get(v_d_1055_, 1);
lean_inc(v_cursor_1057_);
v_reverse_1058_ = lean_ctor_get(v_d_1055_, 2);
lean_inc(v_reverse_1058_);
v_consistency_1059_ = lean_ctor_get(v_d_1055_, 3);
lean_inc(v_consistency_1059_);
v_batchSize_1060_ = lean_ctor_get(v_d_1055_, 4);
lean_inc(v_batchSize_1060_);
lean_dec_ref(v_d_1055_);
v___x_1061_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__0));
lean_inc_ref(v___f_1051_);
v___x_1062_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1051_, v_limit_1056_);
v___x_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1061_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v___x_1064_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__1));
v___x_1065_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1052_, v_cursor_1057_);
v___x_1066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1064_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
v___x_1067_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__2));
v___x_1068_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1053_, v_reverse_1058_);
v___x_1069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1067_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_1071_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1054_, v_consistency_1059_);
v___x_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1070_);
lean_ctor_set(v___x_1072_, 1, v___x_1071_);
v___x_1073_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__3));
v___x_1074_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1051_, v_batchSize_1060_);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1073_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = lean_unsigned_to_nat(5u);
v___x_1077_ = lean_mk_empty_array_with_capacity(v___x_1076_);
v___x_1078_ = lean_array_push(v___x_1077_, v___x_1063_);
v___x_1079_ = lean_array_push(v___x_1078_, v___x_1066_);
v___x_1080_ = lean_array_push(v___x_1079_, v___x_1069_);
v___x_1081_ = lean_array_push(v___x_1080_, v___x_1072_);
v___x_1082_ = lean_array_push(v___x_1081_, v___x_1075_);
v___x_1083_ = l_Lasm_JS_Web_Support_fields(v___x_1082_);
lean_dec_ref(v___x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvEnqueueOptions___lam__0(lean_object* v___f_1092_, lean_object* v___x_1093_, lean_object* v___x_1094_, lean_object* v_d_1095_){
_start:
{
lean_object* v_delay_1096_; lean_object* v_keysIfUndelivered_1097_; lean_object* v_backoffSchedule_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v_delay_1096_ = lean_ctor_get(v_d_1095_, 0);
lean_inc(v_delay_1096_);
v_keysIfUndelivered_1097_ = lean_ctor_get(v_d_1095_, 1);
lean_inc(v_keysIfUndelivered_1097_);
v_backoffSchedule_1098_ = lean_ctor_get(v_d_1095_, 2);
lean_inc(v_backoffSchedule_1098_);
lean_dec_ref(v_d_1095_);
v___x_1099_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0));
v___x_1100_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1092_, v_delay_1096_);
v___x_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1099_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1));
v___x_1103_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1093_, v_keysIfUndelivered_1097_);
v___x_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1102_);
lean_ctor_set(v___x_1104_, 1, v___x_1103_);
v___x_1105_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_1106_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1094_, v_backoffSchedule_1098_);
v___x_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1105_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = lean_unsigned_to_nat(3u);
v___x_1109_ = lean_mk_empty_array_with_capacity(v___x_1108_);
v___x_1110_ = lean_array_push(v___x_1109_, v___x_1101_);
v___x_1111_ = lean_array_push(v___x_1110_, v___x_1104_);
v___x_1112_ = lean_array_push(v___x_1111_, v___x_1107_);
v___x_1113_ = l_Lasm_JS_Web_Support_fields(v___x_1112_);
lean_dec_ref(v___x_1112_);
return v___x_1113_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___f_1116_; lean_object* v___f_1117_; 
v___x_1114_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2);
v___x_1115_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1);
v___f_1116_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___closed__0));
v___f_1117_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvEnqueueOptions___lam__0), 4, 3);
lean_closure_set(v___f_1117_, 0, v___f_1116_);
lean_closure_set(v___f_1117_, 1, v___x_1115_);
lean_closure_set(v___f_1117_, 2, v___x_1114_);
return v___f_1117_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvEnqueueOptions(void){
_start:
{
lean_object* v___f_1118_; 
v___f_1118_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0, &l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0_once, _init_l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0);
return v___f_1118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0(lean_object* v_x_1130_){
_start:
{
if (lean_obj_tag(v_x_1130_) == 0)
{
lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1140_; 
v_a_1132_ = lean_ctor_get(v_x_1130_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v_x_1130_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1134_ = v_x_1130_;
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v_x_1130_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1137_; 
if (v_isShared_1135_ == 0)
{
v___x_1137_ = v___x_1134_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_a_1132_);
v___x_1137_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
lean_object* v___x_1138_; 
v___x_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
return v___x_1138_;
}
}
}
else
{
lean_object* v___x_1141_; 
lean_dec_ref_known(v_x_1130_, 1);
v___x_1141_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___closed__1));
return v___x_1141_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___boxed(lean_object* v_x_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0(v_x_1142_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1(lean_object* v_f_1145_, lean_object* v___f_1146_, lean_object* v_x_1147_){
_start:
{
if (lean_obj_tag(v_x_1147_) == 0)
{
lean_object* v___x_1149_; 
lean_dec_ref(v___f_1146_);
lean_dec_ref(v_f_1145_);
v___x_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1149_, 0, v_x_1147_);
return v___x_1149_;
}
else
{
lean_object* v_a_1150_; lean_object* v___x_1151_; uint8_t v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v_a_1150_ = lean_ctor_get(v_x_1147_, 0);
lean_inc(v_a_1150_);
lean_dec_ref_known(v_x_1147_, 1);
v___x_1151_ = lean_unsigned_to_nat(0u);
v___x_1152_ = 0;
v___x_1153_ = lean_apply_2(v_f_1145_, v_a_1150_, lean_box(0));
v___x_1154_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1151_, v___x_1152_, v___x_1153_, v___f_1146_);
return v___x_1154_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1___boxed(lean_object* v_f_1155_, lean_object* v___f_1156_, lean_object* v_x_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1(v_f_1155_, v___f_1156_, v_x_1157_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2(lean_object* v___f_1160_, lean_object* v_args_1161_){
_start:
{
lean_object* v___x_1163_; uint8_t v___x_1164_; lean_object* v_val_1166_; lean_object* v___x_1169_; lean_object* v_a_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1177_; 
v___x_1163_ = lean_unsigned_to_nat(0u);
v___x_1164_ = 0;
v___x_1169_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1161_, v___x_1163_);
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1172_ = v___x_1169_;
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_a_1170_);
lean_dec(v___x_1169_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
v___jp_1165_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1167_, 0, v_val_1166_);
v___x_1168_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1163_, v___x_1164_, v___x_1167_, v___f_1160_);
return v___x_1168_;
}
v_resetjp_1171_:
{
lean_object* v___x_1175_; 
if (v_isShared_1173_ == 0)
{
lean_ctor_set_tag(v___x_1172_, 1);
v___x_1175_ = v___x_1172_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_a_1170_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
v_val_1166_ = v___x_1175_;
goto v___jp_1165_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2___boxed(lean_object* v___f_1178_, lean_object* v_args_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2(v___f_1178_, v_args_1179_);
lean_dec_ref(v_args_1179_);
return v_res_1181_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5(void){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___x_1189_ = lean_nat_abs(v___x_1188_);
return v___x_1189_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6(void){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; uint8_t v___x_1192_; 
v___x_1190_ = lean_cstr_to_nat("9007199254740991");
v___x_1191_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5);
v___x_1192_ = lean_nat_dec_le(v___x_1191_, v___x_1190_);
return v___x_1192_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___x_1194_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1193_);
return v___x_1194_;
}
}
static double _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8(void){
_start:
{
lean_object* v___x_1195_; double v___x_1196_; 
v___x_1195_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___x_1196_ = l_Float_ofInt(v___x_1195_);
return v___x_1196_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9(void){
_start:
{
double v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = lean_float_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8);
v___x_1198_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1198_, 0, v___x_1197_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn(lean_object* v_f_1199_){
_start:
{
lean_object* v___f_1201_; lean_object* v___f_1202_; lean_object* v___f_1203_; lean_object* v___x_1204_; 
v___f_1201_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__0));
v___f_1202_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1202_, 0, v_f_1199_);
lean_closure_set(v___f_1202_, 1, v___f_1201_);
v___f_1203_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1203_, 0, v___f_1202_);
v___x_1204_ = l_Lasm_JS_Function_ofFn(v___f_1203_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1206_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1204_, 1);
v___x_1206_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_object* v_a_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v_a_1207_ = lean_ctor_get(v___x_1206_, 0);
lean_inc(v_a_1207_);
lean_dec_ref_known(v___x_1206_, 1);
v___x_1208_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1209_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1207_, v___x_1208_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___y_1217_; uint8_t v___x_1244_; 
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_a_1210_);
lean_dec_ref_known(v___x_1209_, 1);
v___x_1211_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1212_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1205_);
v___x_1213_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1213_, 0, v_a_1205_);
lean_ctor_set(v___x_1213_, 1, v___x_1212_);
v___x_1214_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1215_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_1244_ = lean_uint8_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; 
v___x_1245_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7);
v___y_1217_ = v___x_1245_;
goto v___jp_1216_;
}
else
{
lean_object* v___x_1246_; 
v___x_1246_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9);
v___y_1217_ = v___x_1246_;
goto v___jp_1216_;
}
v___jp_1216_:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
lean_inc(v___y_1217_);
v___x_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1215_);
lean_ctor_set(v___x_1218_, 1, v___y_1217_);
v___x_1219_ = lean_box(0);
v___x_1220_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1218_);
lean_ctor_set(v___x_1220_, 1, v___x_1219_);
v___x_1221_ = l_Lasm_JS_obj(v___x_1220_);
v___x_1222_ = lean_unsigned_to_nat(3u);
v___x_1223_ = lean_mk_empty_array_with_capacity(v___x_1222_);
v___x_1224_ = lean_array_push(v___x_1223_, v___x_1213_);
v___x_1225_ = lean_array_push(v___x_1224_, v___x_1214_);
v___x_1226_ = lean_array_push(v___x_1225_, v___x_1221_);
v___x_1227_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1210_, v___x_1211_, v___x_1226_);
if (lean_obj_tag(v___x_1227_) == 0)
{
lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1234_; 
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1234_ == 0)
{
lean_object* v_unused_1235_; 
v_unused_1235_ = lean_ctor_get(v___x_1227_, 0);
lean_dec(v_unused_1235_);
v___x_1229_ = v___x_1227_;
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
else
{
lean_dec(v___x_1227_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1232_; 
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 0, v_a_1205_);
v___x_1232_ = v___x_1229_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1205_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
else
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1243_; 
lean_dec(v_a_1205_);
v_a_1236_ = lean_ctor_get(v___x_1227_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1238_ = v___x_1227_;
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v___x_1227_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1241_; 
if (v_isShared_1239_ == 0)
{
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
return v___x_1241_;
}
}
}
}
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_dec(v_a_1205_);
v_a_1247_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1209_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1209_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
else
{
lean_object* v_a_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1262_; 
lean_dec(v_a_1205_);
v_a_1255_ = lean_ctor_get(v___x_1206_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1257_ = v___x_1206_;
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_a_1255_);
lean_dec(v___x_1206_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1260_; 
if (v_isShared_1258_ == 0)
{
v___x_1260_ = v___x_1257_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_a_1255_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
}
else
{
lean_object* v_a_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1270_; 
v_a_1263_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1265_ = v___x_1204_;
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_a_1263_);
lean_dec(v___x_1204_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_a_1263_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___boxed(lean_object* v_f_1271_, lean_object* v_a_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn(v_f_1271_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0(lean_object* v_f_1274_, lean_object* v_args_1275_){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v_a_1279_; lean_object* v___x_1280_; 
v___x_1277_ = lean_unsigned_to_nat(0u);
v___x_1278_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1275_, v___x_1277_);
v_a_1279_ = lean_ctor_get(v___x_1278_, 0);
lean_inc(v_a_1279_);
lean_dec_ref(v___x_1278_);
v___x_1280_ = lean_apply_2(v_f_1274_, v_a_1279_, lean_box(0));
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1288_; 
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1288_ == 0)
{
lean_object* v_unused_1289_; 
v_unused_1289_ = lean_ctor_get(v___x_1280_, 0);
lean_dec(v_unused_1289_);
v___x_1282_ = v___x_1280_;
v_isShared_1283_ = v_isSharedCheck_1288_;
goto v_resetjp_1281_;
}
else
{
lean_dec(v___x_1280_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1288_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1284_; lean_object* v___x_1286_; 
v___x_1284_ = lean_box(0);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 0, v___x_1284_);
v___x_1286_ = v___x_1282_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___x_1284_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
else
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1297_; 
v_a_1290_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1292_ = v___x_1280_;
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1280_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_1298_, lean_object* v_args_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0(v_f_1298_, v_args_1299_);
lean_dec_ref(v_args_1299_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn(lean_object* v_f_1302_){
_start:
{
lean_object* v___f_1304_; lean_object* v___x_1305_; 
v___f_1304_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1304_, 0, v_f_1302_);
v___x_1305_ = l_Lasm_JS_Function_ofSyncFn(v___f_1304_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1307_; 
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
lean_inc(v_a_1306_);
lean_dec_ref_known(v___x_1305_, 1);
v___x_1307_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v_a_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v_a_1308_ = lean_ctor_get(v___x_1307_, 0);
lean_inc(v_a_1308_);
lean_dec_ref_known(v___x_1307_, 1);
v___x_1309_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1310_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1308_, v___x_1309_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___y_1318_; uint8_t v___x_1345_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1310_, 1);
v___x_1312_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1313_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1306_);
v___x_1314_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1314_, 0, v_a_1306_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1316_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_1345_ = lean_uint8_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6);
if (v___x_1345_ == 0)
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7);
v___y_1318_ = v___x_1346_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1347_; 
v___x_1347_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9);
v___y_1318_ = v___x_1347_;
goto v___jp_1317_;
}
v___jp_1317_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
lean_inc(v___y_1318_);
v___x_1319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1316_);
lean_ctor_set(v___x_1319_, 1, v___y_1318_);
v___x_1320_ = lean_box(0);
v___x_1321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1319_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
v___x_1322_ = l_Lasm_JS_obj(v___x_1321_);
v___x_1323_ = lean_unsigned_to_nat(3u);
v___x_1324_ = lean_mk_empty_array_with_capacity(v___x_1323_);
v___x_1325_ = lean_array_push(v___x_1324_, v___x_1314_);
v___x_1326_ = lean_array_push(v___x_1325_, v___x_1315_);
v___x_1327_ = lean_array_push(v___x_1326_, v___x_1322_);
v___x_1328_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1311_, v___x_1312_, v___x_1327_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1335_; 
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1335_ == 0)
{
lean_object* v_unused_1336_; 
v_unused_1336_ = lean_ctor_get(v___x_1328_, 0);
lean_dec(v_unused_1336_);
v___x_1330_ = v___x_1328_;
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
else
{
lean_dec(v___x_1328_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 0, v_a_1306_);
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1306_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1344_; 
lean_dec(v_a_1306_);
v_a_1337_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1339_ = v___x_1328_;
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1328_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1342_; 
if (v_isShared_1340_ == 0)
{
v___x_1342_ = v___x_1339_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_a_1337_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_dec(v_a_1306_);
v_a_1348_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1310_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1310_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec(v_a_1306_);
v_a_1356_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1307_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1307_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
else
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1371_; 
v_a_1364_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1366_ = v___x_1305_;
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1305_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; 
if (v_isShared_1367_ == 0)
{
v___x_1369_ = v___x_1366_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_a_1364_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___boxed(lean_object* v_f_1372_, lean_object* v_a_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn(v_f_1372_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0(lean_object* v___f_1376_, lean_object* v_d_1377_){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1378_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0___closed__0));
v___x_1379_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1376_, v_d_1377_);
v___x_1380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1378_);
lean_ctor_set(v___x_1380_, 1, v___x_1379_);
v___x_1381_ = lean_unsigned_to_nat(1u);
v___x_1382_ = lean_mk_empty_array_with_capacity(v___x_1381_);
v___x_1383_ = lean_array_push(v___x_1382_, v___x_1380_);
v___x_1384_ = l_Lasm_JS_Web_Support_fields(v___x_1383_);
lean_dec_ref(v___x_1383_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx(lean_object* v_x_1388_){
_start:
{
if (lean_obj_tag(v_x_1388_) == 0)
{
lean_object* v___x_1389_; 
v___x_1389_ = lean_unsigned_to_nat(0u);
return v___x_1389_;
}
else
{
lean_object* v___x_1390_; 
v___x_1390_ = lean_unsigned_to_nat(1u);
return v___x_1390_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx___boxed(lean_object* v_x_1391_){
_start:
{
lean_object* v_res_1392_; 
v_res_1392_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx(v_x_1391_);
lean_dec_ref(v_x_1391_);
return v_res_1392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(lean_object* v_t_1393_, lean_object* v_k_1394_){
_start:
{
if (lean_obj_tag(v_t_1393_) == 0)
{
double v_value_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v_value_1395_ = lean_ctor_get_float(v_t_1393_, 0);
lean_dec_ref_known(v_t_1393_, 0);
v___x_1396_ = lean_box_float(v_value_1395_);
v___x_1397_ = lean_apply_1(v_k_1394_, v___x_1396_);
return v___x_1397_;
}
else
{
lean_object* v_value_1398_; lean_object* v___x_1399_; 
v_value_1398_ = lean_ctor_get(v_t_1393_, 0);
lean_inc_ref(v_value_1398_);
lean_dec_ref_known(v_t_1393_, 1);
v___x_1399_ = lean_apply_1(v_k_1394_, v_value_1398_);
return v___x_1399_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim(lean_object* v_motive_1400_, lean_object* v_ctorIdx_1401_, lean_object* v_t_1402_, lean_object* v_h_1403_, lean_object* v_k_1404_){
_start:
{
lean_object* v___x_1405_; 
v___x_1405_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1402_, v_k_1404_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___boxed(lean_object* v_motive_1406_, lean_object* v_ctorIdx_1407_, lean_object* v_t_1408_, lean_object* v_h_1409_, lean_object* v_k_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim(v_motive_1406_, v_ctorIdx_1407_, v_t_1408_, v_h_1409_, v_k_1410_);
lean_dec(v_ctorIdx_1407_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_double_elim___redArg(lean_object* v_t_1412_, lean_object* v_double_1413_){
_start:
{
lean_object* v___x_1414_; 
v___x_1414_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1412_, v_double_1413_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_double_elim(lean_object* v_motive_1415_, lean_object* v_t_1416_, lean_object* v_h_1417_, lean_object* v_double_1418_){
_start:
{
lean_object* v___x_1419_; 
v___x_1419_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1416_, v_double_1418_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_sequence_elim___redArg(lean_object* v_t_1420_, lean_object* v_sequence_1421_){
_start:
{
lean_object* v___x_1422_; 
v___x_1422_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1420_, v_sequence_1421_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_sequence_elim(lean_object* v_motive_1423_, lean_object* v_t_1424_, lean_object* v_h_1425_, lean_object* v_sequence_1426_){
_start:
{
lean_object* v___x_1427_; 
v___x_1427_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1424_, v_sequence_1426_);
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0(double v_x_1428_){
_start:
{
lean_object* v___x_1429_; 
v___x_1429_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1429_, 0, v_x_1428_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0___boxed(lean_object* v_x_1430_){
_start:
{
double v_x_85__boxed_1431_; lean_object* v_res_1432_; 
v_x_85__boxed_1431_ = lean_unbox_float(v_x_1430_);
lean_dec_ref(v_x_1430_);
v_res_1432_ = l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0(v_x_85__boxed_1431_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__1(lean_object* v___f_1433_, lean_object* v_x_1434_){
_start:
{
if (lean_obj_tag(v_x_1434_) == 0)
{
double v_value_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
lean_dec_ref(v___f_1433_);
v_value_1435_ = lean_ctor_get_float(v_x_1434_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v_x_1434_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v_x_1434_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_dec(v_x_1434_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
lean_ctor_set_tag(v___x_1437_, 3);
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1441_, 0, v_value_1435_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
else
{
lean_object* v_value_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1454_; 
v_value_1443_ = lean_ctor_get(v_x_1434_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_x_1434_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1445_ = v_x_1434_;
v_isShared_1446_ = v_isSharedCheck_1454_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_value_1443_);
lean_dec(v_x_1434_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1454_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1447_; size_t v_sz_1448_; size_t v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1452_; 
v___x_1447_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_1448_ = lean_array_size(v_value_1443_);
v___x_1449_ = ((size_t)0ULL);
v___x_1450_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1447_, v___f_1433_, v_sz_1448_, v___x_1449_, v_value_1443_);
if (v_isShared_1446_ == 0)
{
lean_ctor_set_tag(v___x_1445_, 7);
lean_ctor_set(v___x_1445_, 0, v___x_1450_);
v___x_1452_ = v___x_1445_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1450_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0(double v_value_1459_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_1460_, 0, v_value_1459_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0___boxed(lean_object* v_value_1461_){
_start:
{
double v_value_boxed_1462_; lean_object* v_res_1463_; 
v_value_boxed_1462_ = lean_unbox_float(v_value_1461_);
lean_dec_ref(v_value_1461_);
v_res_1463_ = l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0(v_value_boxed_1462_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble___lam__0(lean_object* v_value_1466_){
_start:
{
lean_object* v___x_1467_; 
v___x_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1467_, 0, v_value_1466_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1(lean_object* v___f_1471_, lean_object* v_d_1472_){
_start:
{
lean_object* v___x_1473_; lean_object* v___y_1475_; 
v___x_1473_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1___closed__0));
if (lean_obj_tag(v_d_1472_) == 0)
{
double v_value_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1488_; 
lean_dec_ref(v___f_1471_);
v_value_1481_ = lean_ctor_get_float(v_d_1472_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v_d_1472_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1483_ = v_d_1472_;
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
else
{
lean_dec(v_d_1472_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1486_; 
if (v_isShared_1484_ == 0)
{
lean_ctor_set_tag(v___x_1483_, 3);
v___x_1486_ = v___x_1483_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1487_, 0, v_value_1481_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
v___y_1475_ = v___x_1486_;
goto v___jp_1474_;
}
}
}
else
{
lean_object* v_value_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1500_; 
v_value_1489_ = lean_ctor_get(v_d_1472_, 0);
v_isSharedCheck_1500_ = !lean_is_exclusive(v_d_1472_);
if (v_isSharedCheck_1500_ == 0)
{
v___x_1491_ = v_d_1472_;
v_isShared_1492_ = v_isSharedCheck_1500_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_value_1489_);
lean_dec(v_d_1472_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1500_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1493_; size_t v_sz_1494_; size_t v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1498_; 
v___x_1493_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_1494_ = lean_array_size(v_value_1489_);
v___x_1495_ = ((size_t)0ULL);
v___x_1496_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1493_, v___f_1471_, v_sz_1494_, v___x_1495_, v_value_1489_);
if (v_isShared_1492_ == 0)
{
lean_ctor_set_tag(v___x_1491_, 7);
lean_ctor_set(v___x_1491_, 0, v___x_1496_);
v___x_1498_ = v___x_1491_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v___x_1496_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
v___y_1475_ = v___x_1498_;
goto v___jp_1474_;
}
}
}
v___jp_1474_:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1473_);
lean_ctor_set(v___x_1476_, 1, v___y_1475_);
v___x_1477_ = lean_unsigned_to_nat(1u);
v___x_1478_ = lean_mk_empty_array_with_capacity(v___x_1477_);
v___x_1479_ = lean_array_push(v___x_1478_, v___x_1476_);
v___x_1480_ = l_Lasm_JS_Web_Support_fields(v___x_1479_);
lean_dec_ref(v___x_1479_);
return v___x_1480_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx(lean_object* v_x_1504_){
_start:
{
if (lean_obj_tag(v_x_1504_) == 0)
{
lean_object* v___x_1505_; 
v___x_1505_ = lean_unsigned_to_nat(0u);
return v___x_1505_;
}
else
{
lean_object* v___x_1506_; 
v___x_1506_ = lean_unsigned_to_nat(1u);
return v___x_1506_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx___boxed(lean_object* v_x_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx(v_x_1507_);
lean_dec_ref(v_x_1507_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(lean_object* v_t_1509_, lean_object* v_k_1510_){
_start:
{
if (lean_obj_tag(v_t_1509_) == 0)
{
double v_value_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
v_value_1511_ = lean_ctor_get_float(v_t_1509_, 0);
lean_dec_ref_known(v_t_1509_, 0);
v___x_1512_ = lean_box_float(v_value_1511_);
v___x_1513_ = lean_apply_1(v_k_1510_, v___x_1512_);
return v___x_1513_;
}
else
{
lean_object* v_value_1514_; lean_object* v___x_1515_; 
v_value_1514_ = lean_ctor_get(v_t_1509_, 0);
lean_inc_ref(v_value_1514_);
lean_dec_ref_known(v_t_1509_, 1);
v___x_1515_ = lean_apply_1(v_k_1510_, v_value_1514_);
return v___x_1515_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim(lean_object* v_motive_1516_, lean_object* v_ctorIdx_1517_, lean_object* v_t_1518_, lean_object* v_h_1519_, lean_object* v_k_1520_){
_start:
{
lean_object* v___x_1521_; 
v___x_1521_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1518_, v_k_1520_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___boxed(lean_object* v_motive_1522_, lean_object* v_ctorIdx_1523_, lean_object* v_t_1524_, lean_object* v_h_1525_, lean_object* v_k_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim(v_motive_1522_, v_ctorIdx_1523_, v_t_1524_, v_h_1525_, v_k_1526_);
lean_dec(v_ctorIdx_1523_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_double_elim___redArg(lean_object* v_t_1528_, lean_object* v_double_1529_){
_start:
{
lean_object* v___x_1530_; 
v___x_1530_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1528_, v_double_1529_);
return v___x_1530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_double_elim(lean_object* v_motive_1531_, lean_object* v_t_1532_, lean_object* v_h_1533_, lean_object* v_double_1534_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1532_, v_double_1534_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_cronScheduleExpression_elim___redArg(lean_object* v_t_1536_, lean_object* v_cronScheduleExpression_1537_){
_start:
{
lean_object* v___x_1538_; 
v___x_1538_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1536_, v_cronScheduleExpression_1537_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_cronScheduleExpression_elim(lean_object* v_motive_1539_, lean_object* v_t_1540_, lean_object* v_h_1541_, lean_object* v_cronScheduleExpression_1542_){
_start:
{
lean_object* v___x_1543_; 
v___x_1543_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1540_, v_cronScheduleExpression_1542_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion___lam__1(lean_object* v___f_1544_, lean_object* v_x_1545_){
_start:
{
if (lean_obj_tag(v_x_1545_) == 0)
{
double v_value_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_dec_ref(v___f_1544_);
v_value_1546_ = lean_ctor_get_float(v_x_1545_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v_x_1545_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v_x_1545_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_dec(v_x_1545_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
lean_ctor_set_tag(v___x_1548_, 3);
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1552_, 0, v_value_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
else
{
lean_object* v_value_1554_; lean_object* v___x_1555_; lean_object* v___y_1557_; 
v_value_1554_ = lean_ctor_get(v_x_1545_, 0);
lean_inc_ref(v_value_1554_);
lean_dec_ref_known(v_x_1545_, 1);
v___x_1555_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1___closed__0));
if (lean_obj_tag(v_value_1554_) == 0)
{
double v_value_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
lean_dec_ref(v___f_1544_);
v_value_1563_ = lean_ctor_get_float(v_value_1554_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v_value_1554_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1565_ = v_value_1554_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_dec(v_value_1554_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
lean_ctor_set_tag(v___x_1565_, 3);
v___x_1568_ = v___x_1565_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1569_, 0, v_value_1563_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
v___y_1557_ = v___x_1568_;
goto v___jp_1556_;
}
}
}
else
{
lean_object* v_value_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1582_; 
v_value_1571_ = lean_ctor_get(v_value_1554_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v_value_1554_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1573_ = v_value_1554_;
v_isShared_1574_ = v_isSharedCheck_1582_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_value_1571_);
lean_dec(v_value_1554_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1582_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1575_; size_t v_sz_1576_; size_t v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1580_; 
v___x_1575_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_1576_ = lean_array_size(v_value_1571_);
v___x_1577_ = ((size_t)0ULL);
v___x_1578_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1575_, v___f_1544_, v_sz_1576_, v___x_1577_, v_value_1571_);
if (v_isShared_1574_ == 0)
{
lean_ctor_set_tag(v___x_1573_, 7);
lean_ctor_set(v___x_1573_, 0, v___x_1578_);
v___x_1580_ = v___x_1573_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v___x_1578_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
v___y_1557_ = v___x_1580_;
goto v___jp_1556_;
}
}
}
v___jp_1556_:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1555_);
lean_ctor_set(v___x_1558_, 1, v___y_1557_);
v___x_1559_ = lean_unsigned_to_nat(1u);
v___x_1560_ = lean_mk_empty_array_with_capacity(v___x_1559_);
v___x_1561_ = lean_array_push(v___x_1560_, v___x_1558_);
v___x_1562_ = l_Lasm_JS_Web_Support_fields(v___x_1561_);
lean_dec_ref(v___x_1561_);
return v___x_1562_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0(double v_value_1586_){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_1587_, 0, v_value_1586_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0___boxed(lean_object* v_value_1588_){
_start:
{
double v_value_boxed_1589_; lean_object* v_res_1590_; 
v_value_boxed_1589_ = lean_unbox_float(v_value_1588_);
lean_dec_ref(v_value_1588_);
v_res_1590_ = l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0(v_value_boxed_1589_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion___lam__0(lean_object* v_value_1593_){
_start:
{
lean_object* v___x_1594_; 
v___x_1594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1594_, 0, v_value_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronSchedule___lam__0(lean_object* v___x_1602_, lean_object* v_d_1603_){
_start:
{
lean_object* v_minute_1604_; lean_object* v_hour_1605_; lean_object* v_dayOfMonth_1606_; lean_object* v_month_1607_; lean_object* v_dayOfWeek_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v_minute_1604_ = lean_ctor_get(v_d_1603_, 0);
lean_inc(v_minute_1604_);
v_hour_1605_ = lean_ctor_get(v_d_1603_, 1);
lean_inc(v_hour_1605_);
v_dayOfMonth_1606_ = lean_ctor_get(v_d_1603_, 2);
lean_inc(v_dayOfMonth_1606_);
v_month_1607_ = lean_ctor_get(v_d_1603_, 3);
lean_inc(v_month_1607_);
v_dayOfWeek_1608_ = lean_ctor_get(v_d_1603_, 4);
lean_inc(v_dayOfWeek_1608_);
lean_dec_ref(v_d_1603_);
v___x_1609_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0));
lean_inc_ref_n(v___x_1602_, 4);
v___x_1610_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1602_, v_minute_1604_);
v___x_1611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1609_);
lean_ctor_set(v___x_1611_, 1, v___x_1610_);
v___x_1612_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1));
v___x_1613_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1602_, v_hour_1605_);
v___x_1614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1612_);
lean_ctor_set(v___x_1614_, 1, v___x_1613_);
v___x_1615_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2));
v___x_1616_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1602_, v_dayOfMonth_1606_);
v___x_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1615_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
v___x_1618_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3));
v___x_1619_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1602_, v_month_1607_);
v___x_1620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1618_);
lean_ctor_set(v___x_1620_, 1, v___x_1619_);
v___x_1621_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4));
v___x_1622_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1602_, v_dayOfWeek_1608_);
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = lean_unsigned_to_nat(5u);
v___x_1625_ = lean_mk_empty_array_with_capacity(v___x_1624_);
v___x_1626_ = lean_array_push(v___x_1625_, v___x_1611_);
v___x_1627_ = lean_array_push(v___x_1626_, v___x_1614_);
v___x_1628_ = lean_array_push(v___x_1627_, v___x_1617_);
v___x_1629_ = lean_array_push(v___x_1628_, v___x_1620_);
v___x_1630_ = lean_array_push(v___x_1629_, v___x_1623_);
v___x_1631_ = l_Lasm_JS_Web_Support_fields(v___x_1630_);
lean_dec_ref(v___x_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx(lean_object* v_x_1635_){
_start:
{
if (lean_obj_tag(v_x_1635_) == 0)
{
lean_object* v___x_1636_; 
v___x_1636_ = lean_unsigned_to_nat(0u);
return v___x_1636_;
}
else
{
lean_object* v___x_1637_; 
v___x_1637_ = lean_unsigned_to_nat(1u);
return v___x_1637_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx___boxed(lean_object* v_x_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx(v_x_1638_);
lean_dec_ref(v_x_1638_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(lean_object* v_t_1640_, lean_object* v_k_1641_){
_start:
{
lean_object* v_value_1642_; lean_object* v___x_1643_; 
v_value_1642_ = lean_ctor_get(v_t_1640_, 0);
lean_inc_ref(v_value_1642_);
lean_dec_ref(v_t_1640_);
v___x_1643_ = lean_apply_1(v_k_1641_, v_value_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim(lean_object* v_motive_1644_, lean_object* v_ctorIdx_1645_, lean_object* v_t_1646_, lean_object* v_h_1647_, lean_object* v_k_1648_){
_start:
{
lean_object* v___x_1649_; 
v___x_1649_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1646_, v_k_1648_);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___boxed(lean_object* v_motive_1650_, lean_object* v_ctorIdx_1651_, lean_object* v_t_1652_, lean_object* v_h_1653_, lean_object* v_k_1654_){
_start:
{
lean_object* v_res_1655_; 
v_res_1655_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim(v_motive_1650_, v_ctorIdx_1651_, v_t_1652_, v_h_1653_, v_k_1654_);
lean_dec(v_ctorIdx_1651_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_domString_elim___redArg(lean_object* v_t_1656_, lean_object* v_domString_1657_){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1656_, v_domString_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_domString_elim(lean_object* v_motive_1659_, lean_object* v_t_1660_, lean_object* v_h_1661_, lean_object* v_domString_1662_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1660_, v_domString_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_cronSchedule_elim___redArg(lean_object* v_t_1664_, lean_object* v_cronSchedule_1665_){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1664_, v_cronSchedule_1665_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_cronSchedule_elim(lean_object* v_motive_1667_, lean_object* v_t_1668_, lean_object* v_h_1669_, lean_object* v_cronSchedule_1670_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1668_, v_cronSchedule_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule___lam__0(lean_object* v_x_1672_){
_start:
{
if (lean_obj_tag(v_x_1672_) == 0)
{
lean_object* v_value_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
v_value_1673_ = lean_ctor_get(v_x_1672_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v_x_1672_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v_x_1672_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_value_1673_);
lean_dec(v_x_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
lean_ctor_set_tag(v___x_1675_, 4);
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_value_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
else
{
lean_object* v_value_1681_; lean_object* v_minute_1682_; lean_object* v_hour_1683_; lean_object* v_dayOfMonth_1684_; lean_object* v_month_1685_; lean_object* v_dayOfWeek_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v_value_1681_ = lean_ctor_get(v_x_1672_, 0);
lean_inc_ref(v_value_1681_);
lean_dec_ref_known(v_x_1672_, 1);
v_minute_1682_ = lean_ctor_get(v_value_1681_, 0);
lean_inc(v_minute_1682_);
v_hour_1683_ = lean_ctor_get(v_value_1681_, 1);
lean_inc(v_hour_1683_);
v_dayOfMonth_1684_ = lean_ctor_get(v_value_1681_, 2);
lean_inc(v_dayOfMonth_1684_);
v_month_1685_ = lean_ctor_get(v_value_1681_, 3);
lean_inc(v_month_1685_);
v_dayOfWeek_1686_ = lean_ctor_get(v_value_1681_, 4);
lean_inc(v_dayOfWeek_1686_);
lean_dec_ref(v_value_1681_);
v___x_1687_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion));
v___x_1688_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0));
v___x_1689_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1687_, v_minute_1682_);
v___x_1690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1688_);
lean_ctor_set(v___x_1690_, 1, v___x_1689_);
v___x_1691_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1));
v___x_1692_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1687_, v_hour_1683_);
v___x_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1691_);
lean_ctor_set(v___x_1693_, 1, v___x_1692_);
v___x_1694_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2));
v___x_1695_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1687_, v_dayOfMonth_1684_);
v___x_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1694_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3));
v___x_1698_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1687_, v_month_1685_);
v___x_1699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1697_);
lean_ctor_set(v___x_1699_, 1, v___x_1698_);
v___x_1700_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4));
v___x_1701_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1687_, v_dayOfWeek_1686_);
v___x_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1700_);
lean_ctor_set(v___x_1702_, 1, v___x_1701_);
v___x_1703_ = lean_unsigned_to_nat(5u);
v___x_1704_ = lean_mk_empty_array_with_capacity(v___x_1703_);
v___x_1705_ = lean_array_push(v___x_1704_, v___x_1690_);
v___x_1706_ = lean_array_push(v___x_1705_, v___x_1693_);
v___x_1707_ = lean_array_push(v___x_1706_, v___x_1696_);
v___x_1708_ = lean_array_push(v___x_1707_, v___x_1699_);
v___x_1709_ = lean_array_push(v___x_1708_, v___x_1702_);
v___x_1710_ = l_Lasm_JS_Web_Support_fields(v___x_1709_);
lean_dec_ref(v___x_1709_);
return v___x_1710_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule___lam__0(lean_object* v_value_1713_){
_start:
{
lean_object* v___x_1714_; 
v___x_1714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1714_, 0, v_value_1713_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule___lam__0(lean_object* v_value_1717_){
_start:
{
lean_object* v___x_1718_; 
v___x_1718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1718_, 0, v_value_1717_);
return v___x_1718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___lam__1(lean_object* v_f_1728_, lean_object* v___f_1729_, lean_object* v_x_1730_){
_start:
{
lean_object* v___x_1732_; uint8_t v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1732_ = lean_unsigned_to_nat(0u);
v___x_1733_ = 0;
v___x_1734_ = lean_apply_1(v_f_1728_, lean_box(0));
v___x_1735_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1732_, v___x_1733_, v___x_1734_, v___f_1729_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed(lean_object* v_f_1736_, lean_object* v___f_1737_, lean_object* v_x_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Lasm_JS_Deno_CronHandler_ofFn___lam__1(v_f_1736_, v___f_1737_, v_x_1738_);
lean_dec_ref(v_x_1738_);
return v_res_1740_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__0(void){
_start:
{
lean_object* v___x_1741_; lean_object* v___x_1742_; 
v___x_1741_ = lean_unsigned_to_nat(0u);
v___x_1742_ = lean_nat_to_int(v___x_1741_);
return v___x_1742_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__1(void){
_start:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1743_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__0, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__0);
v___x_1744_ = lean_nat_abs(v___x_1743_);
return v___x_1744_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2(void){
_start:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; uint8_t v___x_1747_; 
v___x_1745_ = lean_cstr_to_nat("9007199254740991");
v___x_1746_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__1, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__1);
v___x_1747_ = lean_nat_dec_le(v___x_1746_, v___x_1745_);
return v___x_1747_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__0, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__0);
v___x_1749_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1749_, 0, v___x_1748_);
return v___x_1749_;
}
}
static double _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__4(void){
_start:
{
lean_object* v___x_1750_; double v___x_1751_; 
v___x_1750_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__0, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__0);
v___x_1751_ = l_Float_ofInt(v___x_1750_);
return v___x_1751_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5(void){
_start:
{
double v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = lean_float_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__4, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__4);
v___x_1753_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1753_, 0, v___x_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn(lean_object* v_f_1754_){
_start:
{
lean_object* v___f_1756_; lean_object* v___f_1757_; lean_object* v___x_1758_; 
v___f_1756_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__0));
v___f_1757_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1757_, 0, v_f_1754_);
lean_closure_set(v___f_1757_, 1, v___f_1756_);
v___x_1758_ = l_Lasm_JS_Function_ofFn(v___f_1757_);
if (lean_obj_tag(v___x_1758_) == 0)
{
lean_object* v_a_1759_; lean_object* v___x_1760_; 
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
lean_inc(v_a_1759_);
lean_dec_ref_known(v___x_1758_, 1);
v___x_1760_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
lean_inc(v_a_1761_);
lean_dec_ref_known(v___x_1760_, 1);
v___x_1762_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1763_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1761_, v___x_1762_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___y_1771_; uint8_t v___x_1798_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_a_1764_);
lean_dec_ref_known(v___x_1763_, 1);
v___x_1765_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1766_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1759_);
v___x_1767_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1767_, 0, v_a_1759_);
lean_ctor_set(v___x_1767_, 1, v___x_1766_);
v___x_1768_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_1798_ = lean_uint8_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__2, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2);
if (v___x_1798_ == 0)
{
lean_object* v___x_1799_; 
v___x_1799_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__3, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3);
v___y_1771_ = v___x_1799_;
goto v___jp_1770_;
}
else
{
lean_object* v___x_1800_; 
v___x_1800_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__5, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5);
v___y_1771_ = v___x_1800_;
goto v___jp_1770_;
}
v___jp_1770_:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
lean_inc(v___y_1771_);
v___x_1772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1769_);
lean_ctor_set(v___x_1772_, 1, v___y_1771_);
v___x_1773_ = lean_box(0);
v___x_1774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1772_);
lean_ctor_set(v___x_1774_, 1, v___x_1773_);
v___x_1775_ = l_Lasm_JS_obj(v___x_1774_);
v___x_1776_ = lean_unsigned_to_nat(3u);
v___x_1777_ = lean_mk_empty_array_with_capacity(v___x_1776_);
v___x_1778_ = lean_array_push(v___x_1777_, v___x_1767_);
v___x_1779_ = lean_array_push(v___x_1778_, v___x_1768_);
v___x_1780_ = lean_array_push(v___x_1779_, v___x_1775_);
v___x_1781_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1764_, v___x_1765_, v___x_1780_);
if (lean_obj_tag(v___x_1781_) == 0)
{
lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1788_ == 0)
{
lean_object* v_unused_1789_; 
v_unused_1789_ = lean_ctor_get(v___x_1781_, 0);
lean_dec(v_unused_1789_);
v___x_1783_ = v___x_1781_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_dec(v___x_1781_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
lean_ctor_set(v___x_1783_, 0, v_a_1759_);
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_a_1759_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
else
{
lean_object* v_a_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
lean_dec(v_a_1759_);
v_a_1790_ = lean_ctor_get(v___x_1781_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1792_ = v___x_1781_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_a_1790_);
lean_dec(v___x_1781_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1790_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
}
else
{
lean_object* v_a_1801_; lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1808_; 
lean_dec(v_a_1759_);
v_a_1801_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1808_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1808_ == 0)
{
v___x_1803_ = v___x_1763_;
v_isShared_1804_ = v_isSharedCheck_1808_;
goto v_resetjp_1802_;
}
else
{
lean_inc(v_a_1801_);
lean_dec(v___x_1763_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1808_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v___x_1806_; 
if (v_isShared_1804_ == 0)
{
v___x_1806_ = v___x_1803_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v_a_1801_);
v___x_1806_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
return v___x_1806_;
}
}
}
}
else
{
lean_object* v_a_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1816_; 
lean_dec(v_a_1759_);
v_a_1809_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1816_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1811_ = v___x_1760_;
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_a_1809_);
lean_dec(v___x_1760_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v___x_1814_; 
if (v_isShared_1812_ == 0)
{
v___x_1814_ = v___x_1811_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v_a_1809_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
return v___x_1814_;
}
}
}
}
else
{
lean_object* v_a_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1824_; 
v_a_1817_ = lean_ctor_get(v___x_1758_, 0);
v_isSharedCheck_1824_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1819_ = v___x_1758_;
v_isShared_1820_ = v_isSharedCheck_1824_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_a_1817_);
lean_dec(v___x_1758_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___boxed(lean_object* v_f_1825_, lean_object* v_a_1826_){
_start:
{
lean_object* v_res_1827_; 
v_res_1827_ = l_Lasm_JS_Deno_CronHandler_ofFn(v_f_1825_);
return v_res_1827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0(lean_object* v_f_1828_, lean_object* v_x_1829_){
_start:
{
lean_object* v___x_1831_; 
v___x_1831_ = lean_apply_1(v_f_1828_, lean_box(0));
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1839_; 
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1839_ == 0)
{
lean_object* v_unused_1840_; 
v_unused_1840_ = lean_ctor_get(v___x_1831_, 0);
lean_dec(v_unused_1840_);
v___x_1833_ = v___x_1831_;
v_isShared_1834_ = v_isSharedCheck_1839_;
goto v_resetjp_1832_;
}
else
{
lean_dec(v___x_1831_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1839_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1835_; lean_object* v___x_1837_; 
v___x_1835_ = lean_box(0);
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 0, v___x_1835_);
v___x_1837_ = v___x_1833_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v___x_1835_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
else
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
v_a_1841_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1831_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1831_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_1849_, lean_object* v_x_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0(v_f_1849_, v_x_1850_);
lean_dec_ref(v_x_1850_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn(lean_object* v_f_1853_){
_start:
{
lean_object* v___f_1855_; lean_object* v___x_1856_; 
v___f_1855_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1855_, 0, v_f_1853_);
v___x_1856_ = l_Lasm_JS_Function_ofSyncFn(v___f_1855_);
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v_a_1857_; lean_object* v___x_1858_; 
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
lean_inc(v_a_1857_);
lean_dec_ref_known(v___x_1856_, 1);
v___x_1858_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_object* v_a_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
v_a_1859_ = lean_ctor_get(v___x_1858_, 0);
lean_inc(v_a_1859_);
lean_dec_ref_known(v___x_1858_, 1);
v___x_1860_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1861_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1859_, v___x_1860_);
if (lean_obj_tag(v___x_1861_) == 0)
{
lean_object* v_a_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___y_1869_; uint8_t v___x_1896_; 
v_a_1862_ = lean_ctor_get(v___x_1861_, 0);
lean_inc(v_a_1862_);
lean_dec_ref_known(v___x_1861_, 1);
v___x_1863_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1864_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1857_);
v___x_1865_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1865_, 0, v_a_1857_);
lean_ctor_set(v___x_1865_, 1, v___x_1864_);
v___x_1866_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1867_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_1896_ = lean_uint8_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__2, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2);
if (v___x_1896_ == 0)
{
lean_object* v___x_1897_; 
v___x_1897_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__3, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3);
v___y_1869_ = v___x_1897_;
goto v___jp_1868_;
}
else
{
lean_object* v___x_1898_; 
v___x_1898_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__5, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5);
v___y_1869_ = v___x_1898_;
goto v___jp_1868_;
}
v___jp_1868_:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
lean_inc(v___y_1869_);
v___x_1870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1867_);
lean_ctor_set(v___x_1870_, 1, v___y_1869_);
v___x_1871_ = lean_box(0);
v___x_1872_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1870_);
lean_ctor_set(v___x_1872_, 1, v___x_1871_);
v___x_1873_ = l_Lasm_JS_obj(v___x_1872_);
v___x_1874_ = lean_unsigned_to_nat(3u);
v___x_1875_ = lean_mk_empty_array_with_capacity(v___x_1874_);
v___x_1876_ = lean_array_push(v___x_1875_, v___x_1865_);
v___x_1877_ = lean_array_push(v___x_1876_, v___x_1866_);
v___x_1878_ = lean_array_push(v___x_1877_, v___x_1873_);
v___x_1879_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1862_, v___x_1863_, v___x_1878_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1886_; 
v_isSharedCheck_1886_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1886_ == 0)
{
lean_object* v_unused_1887_; 
v_unused_1887_ = lean_ctor_get(v___x_1879_, 0);
lean_dec(v_unused_1887_);
v___x_1881_ = v___x_1879_;
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
else
{
lean_dec(v___x_1879_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1884_; 
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 0, v_a_1857_);
v___x_1884_ = v___x_1881_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_a_1857_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
}
else
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1895_; 
lean_dec(v_a_1857_);
v_a_1888_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1890_ = v___x_1879_;
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v___x_1879_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1893_; 
if (v_isShared_1891_ == 0)
{
v___x_1893_ = v___x_1890_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_a_1888_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
}
}
}
else
{
lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1906_; 
lean_dec(v_a_1857_);
v_a_1899_ = lean_ctor_get(v___x_1861_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1861_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1901_ = v___x_1861_;
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_dec(v___x_1861_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1904_; 
if (v_isShared_1902_ == 0)
{
v___x_1904_ = v___x_1901_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_a_1899_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
lean_dec(v_a_1857_);
v_a_1907_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1858_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1858_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
v_a_1915_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v___x_1856_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1856_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_a_1915_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___boxed(lean_object* v_f_1923_, lean_object* v_a_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l_Lasm_JS_Deno_CronHandler_ofSyncFn(v_f_1923_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0(lean_object* v___x_1927_, lean_object* v___f_1928_, lean_object* v_d_1929_){
_start:
{
lean_object* v_backoffSchedule_1930_; lean_object* v_signal_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1948_; 
v_backoffSchedule_1930_ = lean_ctor_get(v_d_1929_, 0);
v_signal_1931_ = lean_ctor_get(v_d_1929_, 1);
v_isSharedCheck_1948_ = !lean_is_exclusive(v_d_1929_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1933_ = v_d_1929_;
v_isShared_1934_ = v_isSharedCheck_1948_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_signal_1931_);
lean_inc(v_backoffSchedule_1930_);
lean_dec(v_d_1929_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1948_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1938_; 
v___x_1935_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_1936_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1927_, v_backoffSchedule_1930_);
if (v_isShared_1934_ == 0)
{
lean_ctor_set(v___x_1933_, 1, v___x_1936_);
lean_ctor_set(v___x_1933_, 0, v___x_1935_);
v___x_1938_ = v___x_1933_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v___x_1935_);
lean_ctor_set(v_reuseFailAlloc_1947_, 1, v___x_1936_);
v___x_1938_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1939_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0___closed__0));
v___x_1940_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1928_, v_signal_1931_);
v___x_1941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1939_);
lean_ctor_set(v___x_1941_, 1, v___x_1940_);
v___x_1942_ = lean_unsigned_to_nat(2u);
v___x_1943_ = lean_mk_empty_array_with_capacity(v___x_1942_);
v___x_1944_ = lean_array_push(v___x_1943_, v___x_1938_);
v___x_1945_ = lean_array_push(v___x_1944_, v___x_1941_);
v___x_1946_ = l_Lasm_JS_Web_Support_fields(v___x_1945_);
lean_dec_ref(v___x_1945_);
return v___x_1946_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1(void){
_start:
{
lean_object* v___f_1950_; lean_object* v___x_1951_; lean_object* v___f_1952_; 
v___f_1950_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__0));
v___x_1951_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2);
v___f_1952_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0), 3, 2);
lean_closure_set(v___f_1952_, 0, v___x_1951_);
lean_closure_set(v___f_1952_, 1, v___f_1950_);
return v___f_1952_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCronWithOptionsOptions(void){
_start:
{
lean_object* v___f_1953_; 
v___f_1953_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1, &l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1_once, _init_l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1);
return v___f_1953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn(lean_object* v_f_1961_){
_start:
{
lean_object* v___f_1963_; lean_object* v___f_1964_; lean_object* v___x_1965_; 
v___f_1963_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__0));
v___f_1964_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1964_, 0, v_f_1961_);
lean_closure_set(v___f_1964_, 1, v___f_1963_);
v___x_1965_ = l_Lasm_JS_Function_ofFn(v___f_1964_);
if (lean_obj_tag(v___x_1965_) == 0)
{
lean_object* v_a_1966_; lean_object* v___x_1967_; 
v_a_1966_ = lean_ctor_get(v___x_1965_, 0);
lean_inc(v_a_1966_);
lean_dec_ref_known(v___x_1965_, 1);
v___x_1967_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_object* v_a_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
v_a_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc(v_a_1968_);
lean_dec_ref_known(v___x_1967_, 1);
v___x_1969_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1970_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1968_, v___x_1969_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___y_1978_; uint8_t v___x_2005_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_a_1971_);
lean_dec_ref_known(v___x_1970_, 1);
v___x_1972_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1973_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1966_);
v___x_1974_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1974_, 0, v_a_1966_);
lean_ctor_set(v___x_1974_, 1, v___x_1973_);
v___x_1975_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1976_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_2005_ = lean_uint8_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__2, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2);
if (v___x_2005_ == 0)
{
lean_object* v___x_2006_; 
v___x_2006_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__3, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3);
v___y_1978_ = v___x_2006_;
goto v___jp_1977_;
}
else
{
lean_object* v___x_2007_; 
v___x_2007_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__5, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5);
v___y_1978_ = v___x_2007_;
goto v___jp_1977_;
}
v___jp_1977_:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
lean_inc(v___y_1978_);
v___x_1979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1976_);
lean_ctor_set(v___x_1979_, 1, v___y_1978_);
v___x_1980_ = lean_box(0);
v___x_1981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1979_);
lean_ctor_set(v___x_1981_, 1, v___x_1980_);
v___x_1982_ = l_Lasm_JS_obj(v___x_1981_);
v___x_1983_ = lean_unsigned_to_nat(3u);
v___x_1984_ = lean_mk_empty_array_with_capacity(v___x_1983_);
v___x_1985_ = lean_array_push(v___x_1984_, v___x_1974_);
v___x_1986_ = lean_array_push(v___x_1985_, v___x_1975_);
v___x_1987_ = lean_array_push(v___x_1986_, v___x_1982_);
v___x_1988_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1971_, v___x_1972_, v___x_1987_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_1995_; 
v_isSharedCheck_1995_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_1995_ == 0)
{
lean_object* v_unused_1996_; 
v_unused_1996_ = lean_ctor_get(v___x_1988_, 0);
lean_dec(v_unused_1996_);
v___x_1990_ = v___x_1988_;
v_isShared_1991_ = v_isSharedCheck_1995_;
goto v_resetjp_1989_;
}
else
{
lean_dec(v___x_1988_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_1995_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v___x_1993_; 
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 0, v_a_1966_);
v___x_1993_ = v___x_1990_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_a_1966_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
}
else
{
lean_object* v_a_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2004_; 
lean_dec(v_a_1966_);
v_a_1997_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1999_ = v___x_1988_;
v_isShared_2000_ = v_isSharedCheck_2004_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_a_1997_);
lean_dec(v___x_1988_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2004_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___x_2002_; 
if (v_isShared_2000_ == 0)
{
v___x_2002_ = v___x_1999_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v_a_1997_);
v___x_2002_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
return v___x_2002_;
}
}
}
}
}
else
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
lean_dec(v_a_1966_);
v_a_2008_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v___x_1970_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_1970_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_2008_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
else
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2023_; 
lean_dec(v_a_1966_);
v_a_2016_ = lean_ctor_get(v___x_1967_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_1967_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2018_ = v___x_1967_;
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_1967_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2019_ == 0)
{
v___x_2021_ = v___x_2018_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_a_2016_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
}
else
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2031_; 
v_a_2024_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2026_ = v___x_1965_;
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v___x_1965_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2029_; 
if (v_isShared_2027_ == 0)
{
v___x_2029_ = v___x_2026_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_a_2024_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn___boxed(lean_object* v_f_2032_, lean_object* v_a_2033_){
_start:
{
lean_object* v_res_2034_; 
v_res_2034_ = l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn(v_f_2032_);
return v_res_2034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn(lean_object* v_f_2035_){
_start:
{
lean_object* v___f_2037_; lean_object* v___x_2038_; 
v___f_2037_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2037_, 0, v_f_2035_);
v___x_2038_ = l_Lasm_JS_Function_ofSyncFn(v___f_2037_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v_a_2039_; lean_object* v___x_2040_; 
v_a_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_a_2039_);
lean_dec_ref_known(v___x_2038_, 1);
v___x_2040_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2040_) == 0)
{
lean_object* v_a_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; 
v_a_2041_ = lean_ctor_get(v___x_2040_, 0);
lean_inc(v_a_2041_);
lean_dec_ref_known(v___x_2040_, 1);
v___x_2042_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_2043_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2041_, v___x_2042_);
if (lean_obj_tag(v___x_2043_) == 0)
{
lean_object* v_a_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___y_2051_; uint8_t v___x_2078_; 
v_a_2044_ = lean_ctor_get(v___x_2043_, 0);
lean_inc(v_a_2044_);
lean_dec_ref_known(v___x_2043_, 1);
v___x_2045_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_2046_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_2039_);
v___x_2047_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2047_, 0, v_a_2039_);
lean_ctor_set(v___x_2047_, 1, v___x_2046_);
v___x_2048_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_2049_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_2078_ = lean_uint8_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__2, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2);
if (v___x_2078_ == 0)
{
lean_object* v___x_2079_; 
v___x_2079_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__3, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3);
v___y_2051_ = v___x_2079_;
goto v___jp_2050_;
}
else
{
lean_object* v___x_2080_; 
v___x_2080_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__5, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5);
v___y_2051_ = v___x_2080_;
goto v___jp_2050_;
}
v___jp_2050_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; 
lean_inc(v___y_2051_);
v___x_2052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2049_);
lean_ctor_set(v___x_2052_, 1, v___y_2051_);
v___x_2053_ = lean_box(0);
v___x_2054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2052_);
lean_ctor_set(v___x_2054_, 1, v___x_2053_);
v___x_2055_ = l_Lasm_JS_obj(v___x_2054_);
v___x_2056_ = lean_unsigned_to_nat(3u);
v___x_2057_ = lean_mk_empty_array_with_capacity(v___x_2056_);
v___x_2058_ = lean_array_push(v___x_2057_, v___x_2047_);
v___x_2059_ = lean_array_push(v___x_2058_, v___x_2048_);
v___x_2060_ = lean_array_push(v___x_2059_, v___x_2055_);
v___x_2061_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2044_, v___x_2045_, v___x_2060_);
if (lean_obj_tag(v___x_2061_) == 0)
{
lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2068_ == 0)
{
lean_object* v_unused_2069_; 
v_unused_2069_ = lean_ctor_get(v___x_2061_, 0);
lean_dec(v_unused_2069_);
v___x_2063_ = v___x_2061_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_dec(v___x_2061_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v_a_2039_);
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2039_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
else
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
lean_dec(v_a_2039_);
v_a_2070_ = lean_ctor_get(v___x_2061_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v___x_2061_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_2061_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_a_2070_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
lean_dec(v_a_2039_);
v_a_2081_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___x_2043_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_2043_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
}
else
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
lean_dec(v_a_2039_);
v_a_2089_ = lean_ctor_get(v___x_2040_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2040_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2091_ = v___x_2040_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2040_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2094_; 
if (v_isShared_2092_ == 0)
{
v___x_2094_ = v___x_2091_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_a_2089_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
else
{
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2104_; 
v_a_2097_ = lean_ctor_get(v___x_2038_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2099_ = v___x_2038_;
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2038_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
if (v_isShared_2100_ == 0)
{
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_a_2097_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn___boxed(lean_object* v_f_2105_, lean_object* v_a_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn(v_f_2105_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_cursor(lean_object* v_self_2108_){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__1));
v___x_2111_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2108_, v___x_2110_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_cursor___boxed(lean_object* v_self_2112_, lean_object* v_a_2113_){
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l_Lasm_JS_Deno_KvListIterator_cursor(v_self_2112_);
return v_res_2114_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2115_; uint8_t v___x_2116_; uint64_t v___x_2117_; 
v___x_2115_ = 0ULL;
v___x_2116_ = 0;
v___x_2117_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_2116_, v___x_2115_);
return v___x_2117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(lean_object* v_f_2119_, lean_object* v_args_2120_, lean_object* v_this_2121_){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; uint64_t v___x_2125_; lean_object* v___x_2126_; 
v___x_2123_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2124_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2124_, 0, v_f_2119_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0);
v___x_2126_ = l_Lasm_JS_Value_invokeRaw(v___x_2124_, v_this_2121_, v_args_2120_, v___x_2125_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_a_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
lean_inc(v_a_2127_);
lean_dec_ref_known(v___x_2126_, 1);
v___x_2128_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__1));
v___x_2129_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2128_, v_a_2127_);
lean_dec(v_a_2127_);
return v___x_2129_;
}
else
{
lean_object* v_a_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2137_; 
v_a_2130_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2132_ = v___x_2126_;
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_a_2130_);
lean_dec(v___x_2126_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2135_; 
if (v_isShared_2133_ == 0)
{
v___x_2135_ = v___x_2132_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_a_2130_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___boxed(lean_object* v_f_2138_, lean_object* v_args_2139_, lean_object* v_this_2140_, lean_object* v_a_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(v_f_2138_, v_args_2139_, v_this_2140_);
return v_res_2142_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0(void){
_start:
{
uint8_t v___x_2143_; uint64_t v___x_2144_; 
v___x_2143_ = 1;
v___x_2144_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2143_);
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(lean_object* v_o_2146_, lean_object* v_key_2147_){
_start:
{
lean_object* v___x_2149_; lean_object* v_k_2150_; lean_object* v___x_2151_; 
v___x_2149_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v_k_2150_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_k_2150_, 0, v_key_2147_);
lean_ctor_set(v_k_2150_, 1, v___x_2149_);
v___x_2151_ = l_Lasm_JS_Wire_encodeIO(v_k_2150_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_a_2152_; uint32_t v___x_2153_; uint32_t v___x_2154_; uint64_t v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; 
v_a_2152_ = lean_ctor_get(v___x_2151_, 0);
lean_inc(v_a_2152_);
lean_dec_ref_known(v___x_2151_, 1);
v___x_2153_ = 203;
v___x_2154_ = lasm_js_value_handle(v_o_2146_);
v___x_2155_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0);
v___x_2156_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2156_, 0, v_o_2146_);
lean_ctor_set(v___x_2156_, 1, v___x_2149_);
v___x_2157_ = lean_unsigned_to_nat(2u);
v___x_2158_ = lean_mk_empty_array_with_capacity(v___x_2157_);
lean_inc_ref(v_k_2150_);
v___x_2159_ = lean_array_push(v___x_2158_, v_k_2150_);
v___x_2160_ = lean_array_push(v___x_2159_, v___x_2156_);
v___x_2161_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2160_);
v___x_2162_ = lasm_js_call(v___x_2153_, v___x_2154_, v___x_2155_, v_a_2152_, v___x_2161_);
lean_dec_ref_known(v___x_2161_, 1);
lean_dec(v_a_2152_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v_a_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
lean_inc(v_a_2163_);
lean_dec_ref_known(v___x_2162_, 1);
v___x_2164_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__1));
v___x_2165_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2150_);
v___x_2166_ = lean_string_append(v___x_2164_, v___x_2165_);
lean_dec_ref(v___x_2165_);
v___x_2167_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2166_, v_a_2163_);
lean_dec(v_a_2163_);
lean_dec_ref(v___x_2166_);
return v___x_2167_;
}
else
{
lean_object* v_a_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2175_; 
lean_dec_ref_known(v_k_2150_, 2);
v_a_2168_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2170_ = v___x_2162_;
v_isShared_2171_ = v_isSharedCheck_2175_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_a_2168_);
lean_dec(v___x_2162_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2175_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v___x_2173_; 
if (v_isShared_2171_ == 0)
{
v___x_2173_ = v___x_2170_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_a_2168_);
v___x_2173_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
return v___x_2173_;
}
}
}
}
else
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
lean_dec_ref_known(v_k_2150_, 2);
lean_dec(v_o_2146_);
v_a_2176_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2151_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2151_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___boxed(lean_object* v_o_2184_, lean_object* v_key_2185_, lean_object* v_a_2186_){
_start:
{
lean_object* v_res_2187_; 
v_res_2187_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(v_o_2184_, v_key_2185_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_iterator(lean_object* v_self_2192_){
_start:
{
lean_object* v___x_2194_; 
v___x_2194_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v_a_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v_a_2195_ = lean_ctor_get(v___x_2194_, 0);
lean_inc(v_a_2195_);
lean_dec_ref_known(v___x_2194_, 1);
v___x_2196_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__0));
v___x_2197_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2195_, v___x_2196_);
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2198_);
lean_dec_ref_known(v___x_2197_, 1);
v___x_2199_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__1));
v___x_2200_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2198_, v___x_2199_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2202_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2201_);
lean_dec_ref_known(v___x_2200_, 1);
lean_inc(v_self_2192_);
v___x_2202_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(v_self_2192_, v_a_2201_);
if (lean_obj_tag(v___x_2202_) == 0)
{
lean_object* v_a_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v_a_2203_ = lean_ctor_get(v___x_2202_, 0);
lean_inc(v_a_2203_);
lean_dec_ref_known(v___x_2202_, 1);
v___x_2204_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v___x_2205_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2206_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2206_, 0, v_self_2192_);
lean_ctor_set(v___x_2206_, 1, v___x_2205_);
v___x_2207_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(v_a_2203_, v___x_2204_, v___x_2206_);
if (lean_obj_tag(v___x_2207_) == 0)
{
lean_object* v_a_2208_; lean_object* v___x_2210_; uint8_t v_isShared_2211_; uint8_t v_isSharedCheck_2215_; 
v_a_2208_ = lean_ctor_get(v___x_2207_, 0);
v_isSharedCheck_2215_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_2210_ = v___x_2207_;
v_isShared_2211_ = v_isSharedCheck_2215_;
goto v_resetjp_2209_;
}
else
{
lean_inc(v_a_2208_);
lean_dec(v___x_2207_);
v___x_2210_ = lean_box(0);
v_isShared_2211_ = v_isSharedCheck_2215_;
goto v_resetjp_2209_;
}
v_resetjp_2209_:
{
lean_object* v___x_2213_; 
if (v_isShared_2211_ == 0)
{
v___x_2213_ = v___x_2210_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v_a_2208_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
return v___x_2213_;
}
}
}
else
{
lean_object* v_a_2216_; lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2223_; 
v_a_2216_ = lean_ctor_get(v___x_2207_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2218_ = v___x_2207_;
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
else
{
lean_inc(v_a_2216_);
lean_dec(v___x_2207_);
v___x_2218_ = lean_box(0);
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
v_resetjp_2217_:
{
lean_object* v___x_2221_; 
if (v_isShared_2219_ == 0)
{
v___x_2221_ = v___x_2218_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_a_2216_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
}
else
{
lean_object* v_a_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2231_; 
lean_dec(v_self_2192_);
v_a_2224_ = lean_ctor_get(v___x_2202_, 0);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___x_2202_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2226_ = v___x_2202_;
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_a_2224_);
lean_dec(v___x_2202_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_a_2224_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
}
else
{
lean_object* v_a_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2239_; 
lean_dec(v_self_2192_);
v_a_2232_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2239_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2234_ = v___x_2200_;
v_isShared_2235_ = v_isSharedCheck_2239_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_a_2232_);
lean_dec(v___x_2200_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2239_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2237_; 
if (v_isShared_2235_ == 0)
{
v___x_2237_ = v___x_2234_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v_a_2232_);
v___x_2237_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
return v___x_2237_;
}
}
}
}
else
{
lean_object* v_a_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2247_; 
lean_dec(v_self_2192_);
v_a_2240_ = lean_ctor_get(v___x_2197_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2197_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2242_ = v___x_2197_;
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_a_2240_);
lean_dec(v___x_2197_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2245_; 
if (v_isShared_2243_ == 0)
{
v___x_2245_ = v___x_2242_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2240_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
else
{
lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2255_; 
lean_dec(v_self_2192_);
v_a_2248_ = lean_ctor_get(v___x_2194_, 0);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2250_ = v___x_2194_;
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v___x_2194_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2255_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2253_; 
if (v_isShared_2251_ == 0)
{
v___x_2253_ = v___x_2250_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v_a_2248_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
return v___x_2253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_iterator___boxed(lean_object* v_self_2256_, lean_object* v_a_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Lasm_JS_Deno_KvListIterator_iterator(v_self_2256_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0(lean_object* v_x_2259_){
_start:
{
if (lean_obj_tag(v_x_2259_) == 0)
{
lean_object* v_a_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2269_; 
v_a_2261_ = lean_ctor_get(v_x_2259_, 0);
v_isSharedCheck_2269_ = !lean_is_exclusive(v_x_2259_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2263_ = v_x_2259_;
v_isShared_2264_ = v_isSharedCheck_2269_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_a_2261_);
lean_dec(v_x_2259_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2269_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___x_2266_; 
if (v_isShared_2264_ == 0)
{
v___x_2266_ = v___x_2263_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v_a_2261_);
v___x_2266_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
lean_object* v___x_2267_; 
v___x_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2266_);
return v___x_2267_;
}
}
}
else
{
lean_object* v_a_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2279_; 
v_a_2270_ = lean_ctor_get(v_x_2259_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v_x_2259_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2272_ = v_x_2259_;
v_isShared_2273_ = v_isSharedCheck_2279_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_a_2270_);
lean_dec(v_x_2259_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2279_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
lean_object* v___x_2274_; lean_object* v___x_2276_; 
v___x_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2274_, 0, v_a_2270_);
if (v_isShared_2273_ == 0)
{
lean_ctor_set(v___x_2272_, 0, v___x_2274_);
v___x_2276_ = v___x_2272_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v___x_2274_);
v___x_2276_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
lean_object* v___x_2277_; 
v___x_2277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2276_);
return v___x_2277_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0___boxed(lean_object* v_x_2280_, lean_object* v___y_2281_){
_start:
{
lean_object* v_res_2282_; 
v_res_2282_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0(v_x_2280_);
return v_res_2282_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4(void){
_start:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2287_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2288_ = lean_string_utf8_byte_size(v___x_2287_);
return v___x_2288_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5(void){
_start:
{
lean_object* v___x_2289_; lean_object* v___x_2290_; uint8_t v___x_2291_; 
v___x_2289_ = lean_unsigned_to_nat(0u);
v___x_2290_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4);
v___x_2291_ = lean_nat_dec_eq(v___x_2290_, v___x_2289_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(lean_object* v_d_2296_, lean_object* v_key_2297_){
_start:
{
if (lean_obj_tag(v_d_2296_) == 8)
{
lean_object* v___x_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2329_; 
v___x_2298_ = l_Lasm_JS_Data_field(v_d_2296_, v_key_2297_);
v_isSharedCheck_2329_ = !lean_is_exclusive(v_d_2296_);
if (v_isSharedCheck_2329_ == 0)
{
lean_object* v_unused_2330_; 
v_unused_2330_ = lean_ctor_get(v_d_2296_, 0);
lean_dec(v_unused_2330_);
v___x_2300_ = v_d_2296_;
v_isShared_2301_ = v_isSharedCheck_2329_;
goto v_resetjp_2299_;
}
else
{
lean_dec(v_d_2296_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2329_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
if (lean_obj_tag(v___x_2298_) == 4)
{
lean_object* v_s_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_del_object(v___x_2300_);
v_s_2302_ = lean_ctor_get(v___x_2298_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2298_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2298_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_s_2302_);
lean_dec(v___x_2298_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
lean_ctor_set_tag(v___x_2304_, 1);
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_s_2302_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
else
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; uint8_t v___x_2320_; 
v___x_2310_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_2311_ = lean_string_append(v___x_2310_, v_key_2297_);
v___x_2312_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_2313_ = lean_string_append(v___x_2311_, v___x_2312_);
v___x_2314_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__2));
v___x_2315_ = lean_string_append(v___x_2313_, v___x_2314_);
v___x_2316_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
v___x_2317_ = lean_string_append(v___x_2315_, v___x_2316_);
v___x_2318_ = l_Lasm_JS_Data_describe(v___x_2298_);
v___x_2319_ = lean_string_append(v___x_2317_, v___x_2318_);
lean_dec_ref(v___x_2318_);
v___x_2320_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5);
if (v___x_2320_ == 0)
{
lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2324_; 
v___x_2321_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6));
v___x_2322_ = lean_string_append(v___x_2319_, v___x_2321_);
if (v_isShared_2301_ == 0)
{
lean_ctor_set_tag(v___x_2300_, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2322_);
v___x_2324_ = v___x_2300_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v___x_2322_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
else
{
lean_object* v___x_2327_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set_tag(v___x_2300_, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2319_);
v___x_2327_ = v___x_2300_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v___x_2319_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
}
else
{
lean_object* v___x_2331_; 
lean_dec(v_d_2296_);
v___x_2331_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__8));
return v___x_2331_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_d_2332_, lean_object* v_key_2333_){
_start:
{
lean_object* v_res_2334_; 
v_res_2334_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_2332_, v_key_2333_);
lean_dec_ref(v_key_2333_);
return v_res_2334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5(size_t v_sz_2337_, size_t v_i_2338_, lean_object* v_bs_2339_){
_start:
{
uint8_t v___x_2340_; 
v___x_2340_ = lean_usize_dec_lt(v_i_2338_, v_sz_2337_);
if (v___x_2340_ == 0)
{
lean_object* v___x_2341_; 
v___x_2341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2341_, 0, v_bs_2339_);
return v___x_2341_;
}
else
{
lean_object* v_v_2342_; lean_object* v___x_2343_; lean_object* v_bs_x27_2344_; lean_object* v_a_2346_; 
v_v_2342_ = lean_array_uget(v_bs_2339_, v_i_2338_);
v___x_2343_ = lean_unsigned_to_nat(0u);
v_bs_x27_2344_ = lean_array_uset(v_bs_2339_, v_i_2338_, v___x_2343_);
switch(lean_obj_tag(v_v_2342_))
{
case 6:
{
lean_object* v_b_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2358_; 
v_b_2351_ = lean_ctor_get(v_v_2342_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v_v_2342_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2353_ = v_v_2342_;
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_b_2351_);
lean_dec(v_v_2342_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2356_; 
if (v_isShared_2354_ == 0)
{
lean_ctor_set_tag(v___x_2353_, 0);
v___x_2356_ = v___x_2353_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_b_2351_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
v_a_2346_ = v___x_2356_;
goto v___jp_2345_;
}
}
}
case 4:
{
lean_object* v_s_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2366_; 
v_s_2359_ = lean_ctor_get(v_v_2342_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v_v_2342_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2361_ = v_v_2342_;
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_s_2359_);
lean_dec(v_v_2342_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2364_; 
if (v_isShared_2362_ == 0)
{
lean_ctor_set_tag(v___x_2361_, 1);
v___x_2364_ = v___x_2361_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v_s_2359_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
v_a_2346_ = v___x_2364_;
goto v___jp_2345_;
}
}
}
case 3:
{
double v_n_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2374_; 
v_n_2367_ = lean_ctor_get_float(v_v_2342_, 0);
v_isSharedCheck_2374_ = !lean_is_exclusive(v_v_2342_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2369_ = v_v_2342_;
v_isShared_2370_ = v_isSharedCheck_2374_;
goto v_resetjp_2368_;
}
else
{
lean_dec(v_v_2342_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2374_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
lean_object* v___x_2372_; 
if (v_isShared_2370_ == 0)
{
lean_ctor_set_tag(v___x_2369_, 2);
v___x_2372_ = v___x_2369_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(2, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2373_, 0, v_n_2367_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
v_a_2346_ = v___x_2372_;
goto v___jp_2345_;
}
}
}
case 5:
{
lean_object* v_i_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2382_; 
v_i_2375_ = lean_ctor_get(v_v_2342_, 0);
v_isSharedCheck_2382_ = !lean_is_exclusive(v_v_2342_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2377_ = v_v_2342_;
v_isShared_2378_ = v_isSharedCheck_2382_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_i_2375_);
lean_dec(v_v_2342_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2382_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
lean_object* v___x_2380_; 
if (v_isShared_2378_ == 0)
{
lean_ctor_set_tag(v___x_2377_, 3);
v___x_2380_ = v___x_2377_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v_i_2375_);
v___x_2380_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
v_a_2346_ = v___x_2380_;
goto v___jp_2345_;
}
}
}
case 2:
{
uint8_t v_b_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2390_; 
v_b_2383_ = lean_ctor_get_uint8(v_v_2342_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v_v_2342_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2385_ = v_v_2342_;
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
else
{
lean_dec(v_v_2342_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
lean_ctor_set_tag(v___x_2385_, 4);
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(4, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_2389_, 0, v_b_2383_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
v_a_2346_ = v___x_2388_;
goto v___jp_2345_;
}
}
}
default: 
{
lean_object* v___x_2391_; 
lean_dec_ref(v_bs_x27_2344_);
lean_dec(v_v_2342_);
v___x_2391_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5___closed__0));
return v___x_2391_;
}
}
v___jp_2345_:
{
size_t v___x_2347_; size_t v___x_2348_; lean_object* v___x_2349_; 
v___x_2347_ = ((size_t)1ULL);
v___x_2348_ = lean_usize_add(v_i_2338_, v___x_2347_);
v___x_2349_ = lean_array_uset(v_bs_x27_2344_, v_i_2338_, v_a_2346_);
v_i_2338_ = v___x_2348_;
v_bs_2339_ = v___x_2349_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object* v_sz_2392_, lean_object* v_i_2393_, lean_object* v_bs_2394_){
_start:
{
size_t v_sz_boxed_2395_; size_t v_i_boxed_2396_; lean_object* v_res_2397_; 
v_sz_boxed_2395_ = lean_unbox_usize(v_sz_2392_);
lean_dec(v_sz_2392_);
v_i_boxed_2396_ = lean_unbox_usize(v_i_2393_);
lean_dec(v_i_2393_);
v_res_2397_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5(v_sz_boxed_2395_, v_i_boxed_2396_, v_bs_2394_);
return v_res_2397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_2405_, lean_object* v_key_2406_){
_start:
{
if (lean_obj_tag(v_d_2405_) == 8)
{
lean_object* v___x_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2451_; 
v___x_2407_ = l_Lasm_JS_Data_field(v_d_2405_, v_key_2406_);
v_isSharedCheck_2451_ = !lean_is_exclusive(v_d_2405_);
if (v_isSharedCheck_2451_ == 0)
{
lean_object* v_unused_2452_; 
v_unused_2452_ = lean_ctor_get(v_d_2405_, 0);
lean_dec(v_unused_2452_);
v___x_2409_ = v_d_2405_;
v_isShared_2410_ = v_isSharedCheck_2451_;
goto v_resetjp_2408_;
}
else
{
lean_dec(v_d_2405_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2451_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v_a_2412_; 
if (lean_obj_tag(v___x_2407_) == 7)
{
lean_object* v_items_2437_; size_t v_sz_2438_; size_t v___x_2439_; lean_object* v___x_2440_; 
v_items_2437_ = lean_ctor_get(v___x_2407_, 0);
lean_inc_ref(v_items_2437_);
v_sz_2438_ = lean_array_size(v_items_2437_);
v___x_2439_ = ((size_t)0ULL);
v___x_2440_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5(v_sz_2438_, v___x_2439_, v_items_2437_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_object* v_a_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; uint8_t v___x_2445_; 
v_a_2441_ = lean_ctor_get(v___x_2440_, 0);
lean_inc(v_a_2441_);
lean_dec_ref_known(v___x_2440_, 1);
v___x_2442_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3));
v___x_2443_ = lean_string_utf8_byte_size(v_a_2441_);
v___x_2444_ = lean_unsigned_to_nat(0u);
v___x_2445_ = lean_nat_dec_eq(v___x_2443_, v___x_2444_);
if (v___x_2445_ == 0)
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2446_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_2447_ = lean_string_append(v___x_2446_, v_a_2441_);
lean_dec(v_a_2441_);
v___x_2448_ = lean_string_append(v___x_2442_, v___x_2447_);
lean_dec_ref(v___x_2447_);
v_a_2412_ = v___x_2448_;
goto v___jp_2411_;
}
else
{
lean_dec(v_a_2441_);
v_a_2412_ = v___x_2442_;
goto v___jp_2411_;
}
}
else
{
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_object* v_a_2449_; 
v_a_2449_ = lean_ctor_get(v___x_2440_, 0);
lean_inc(v_a_2449_);
lean_dec_ref_known(v___x_2440_, 1);
v_a_2412_ = v_a_2449_;
goto v___jp_2411_;
}
else
{
lean_dec_ref_known(v___x_2407_, 1);
lean_del_object(v___x_2409_);
return v___x_2440_;
}
}
}
else
{
lean_object* v___x_2450_; 
v___x_2450_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v_a_2412_ = v___x_2450_;
goto v___jp_2411_;
}
v___jp_2411_:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; uint8_t v___x_2425_; 
v___x_2413_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_2414_ = lean_string_append(v___x_2413_, v_key_2406_);
v___x_2415_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_2416_ = lean_string_append(v___x_2414_, v___x_2415_);
v___x_2417_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0));
v___x_2418_ = lean_string_append(v___x_2416_, v___x_2417_);
v___x_2419_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
v___x_2420_ = lean_string_append(v___x_2418_, v___x_2419_);
v___x_2421_ = l_Lasm_JS_Data_describe(v___x_2407_);
v___x_2422_ = lean_string_append(v___x_2420_, v___x_2421_);
lean_dec_ref(v___x_2421_);
v___x_2423_ = lean_string_utf8_byte_size(v_a_2412_);
v___x_2424_ = lean_unsigned_to_nat(0u);
v___x_2425_ = lean_nat_dec_eq(v___x_2423_, v___x_2424_);
if (v___x_2425_ == 0)
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2432_; 
v___x_2426_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_2427_ = lean_string_append(v___x_2426_, v_a_2412_);
lean_dec_ref(v_a_2412_);
v___x_2428_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_2429_ = lean_string_append(v___x_2427_, v___x_2428_);
v___x_2430_ = lean_string_append(v___x_2422_, v___x_2429_);
lean_dec_ref(v___x_2429_);
if (v_isShared_2410_ == 0)
{
lean_ctor_set_tag(v___x_2409_, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2430_);
v___x_2432_ = v___x_2409_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v___x_2430_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
else
{
lean_object* v___x_2435_; 
lean_dec_ref(v_a_2412_);
if (v_isShared_2410_ == 0)
{
lean_ctor_set_tag(v___x_2409_, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2422_);
v___x_2435_ = v___x_2409_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v___x_2422_);
v___x_2435_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
return v___x_2435_;
}
}
}
}
}
else
{
lean_object* v___x_2453_; 
lean_dec(v_d_2405_);
v___x_2453_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__5));
return v___x_2453_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_2454_, lean_object* v_key_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_2454_, v_key_2455_);
lean_dec_ref(v_key_2455_);
return v_res_2456_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6(void){
_start:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2463_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__5));
v___x_2464_ = lean_unsigned_to_nat(46u);
v___x_2465_ = lean_unsigned_to_nat(193u);
v___x_2466_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__4));
v___x_2467_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__3));
v___x_2468_ = l_mkPanicMessageWithDecl(v___x_2467_, v___x_2466_, v___x_2465_, v___x_2464_, v___x_2463_);
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_2470_, lean_object* v_d_2471_){
_start:
{
lean_object* v___y_2474_; lean_object* v___y_2475_; lean_object* v___y_2480_; lean_object* v_received_2481_; lean_object* v___y_2500_; lean_object* v_a_2503_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2527_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
lean_inc(v_d_2471_);
v___x_2528_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_2471_, v___x_2527_);
if (lean_obj_tag(v___x_2528_) == 0)
{
lean_object* v_a_2529_; 
v_a_2529_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2529_);
lean_dec_ref_known(v___x_2528_, 1);
v_a_2503_ = v_a_2529_;
goto v___jp_2502_;
}
else
{
lean_object* v_a_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
v_a_2530_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2530_);
lean_dec_ref_known(v___x_2528_, 1);
v___x_2531_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
lean_inc(v_d_2471_);
v___x_2532_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_2471_, v___x_2531_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; 
lean_dec(v_a_2530_);
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2532_, 1);
v_a_2503_ = v_a_2533_;
goto v___jp_2502_;
}
else
{
lean_object* v_a_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
v_a_2534_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2534_);
lean_dec_ref_known(v___x_2532_, 1);
v___x_2535_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_d_2471_);
v___x_2536_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_2471_, v___x_2535_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v_a_2537_; 
lean_dec(v_a_2534_);
lean_dec(v_a_2530_);
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2537_);
lean_dec_ref_known(v___x_2536_, 1);
v_a_2503_ = v_a_2537_;
goto v___jp_2502_;
}
else
{
lean_object* v_a_2538_; lean_object* v___x_2540_; uint8_t v_isShared_2541_; uint8_t v_isSharedCheck_2546_; 
lean_dec(v_d_2471_);
v_a_2538_ = lean_ctor_get(v___x_2536_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2536_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2540_ = v___x_2536_;
v_isShared_2541_ = v_isSharedCheck_2546_;
goto v_resetjp_2539_;
}
else
{
lean_inc(v_a_2538_);
lean_dec(v___x_2536_);
v___x_2540_ = lean_box(0);
v_isShared_2541_ = v_isSharedCheck_2546_;
goto v_resetjp_2539_;
}
v_resetjp_2539_:
{
lean_object* v___x_2542_; lean_object* v___x_2544_; 
v___x_2542_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2542_, 0, v_a_2530_);
lean_ctor_set(v___x_2542_, 1, v_a_2534_);
lean_ctor_set(v___x_2542_, 2, v_a_2538_);
if (v_isShared_2541_ == 0)
{
lean_ctor_set_tag(v___x_2540_, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2542_);
v___x_2544_ = v___x_2540_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v___x_2542_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
}
}
}
v___jp_2473_:
{
lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v___x_2476_ = lean_string_append(v___y_2474_, v___y_2475_);
lean_dec_ref(v___y_2475_);
v___x_2477_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2476_);
v___x_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2477_);
return v___x_2478_;
}
v___jp_2479_:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; uint8_t v___x_2493_; 
v___x_2482_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_2483_ = lean_string_append(v___x_2482_, v_context_2470_);
v___x_2484_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_2485_ = lean_string_append(v___x_2483_, v___x_2484_);
v___x_2486_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___closed__2));
v___x_2487_ = lean_string_append(v___x_2485_, v___x_2486_);
v___x_2488_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_2489_ = lean_string_append(v___x_2487_, v___x_2488_);
v___x_2490_ = lean_string_append(v___x_2489_, v_received_2481_);
lean_dec_ref(v_received_2481_);
v___x_2491_ = lean_string_utf8_byte_size(v___y_2480_);
v___x_2492_ = lean_unsigned_to_nat(0u);
v___x_2493_ = lean_nat_dec_eq(v___x_2491_, v___x_2492_);
if (v___x_2493_ == 0)
{
lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2494_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_2495_ = lean_string_append(v___x_2494_, v___y_2480_);
lean_dec_ref(v___y_2480_);
v___x_2496_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_2497_ = lean_string_append(v___x_2495_, v___x_2496_);
v___y_2474_ = v___x_2490_;
v___y_2475_ = v___x_2497_;
goto v___jp_2473_;
}
else
{
lean_object* v___x_2498_; 
lean_dec_ref(v___y_2480_);
v___x_2498_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_2474_ = v___x_2490_;
v___y_2475_ = v___x_2498_;
goto v___jp_2473_;
}
}
v___jp_2499_:
{
lean_object* v___x_2501_; 
v___x_2501_ = l_Lasm_JS_Data_describe(v_d_2471_);
v___y_2480_ = v___y_2500_;
v_received_2481_ = v___x_2501_;
goto v___jp_2479_;
}
v___jp_2502_:
{
if (lean_obj_tag(v_d_2471_) == 9)
{
lean_object* v_value_2504_; lean_object* v_description_2505_; lean_object* v___x_2506_; uint8_t v___x_2507_; 
v_value_2504_ = lean_ctor_get(v_d_2471_, 0);
v_description_2505_ = lean_ctor_get(v_d_2471_, 1);
v___x_2506_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2507_ = lean_string_dec_eq(v_description_2505_, v___x_2506_);
if (v___x_2507_ == 0)
{
v___y_2500_ = v_a_2503_;
goto v___jp_2499_;
}
else
{
lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2524_; 
lean_inc(v_value_2504_);
v_isSharedCheck_2524_ = !lean_is_exclusive(v_d_2471_);
if (v_isSharedCheck_2524_ == 0)
{
lean_object* v_unused_2525_; lean_object* v_unused_2526_; 
v_unused_2525_ = lean_ctor_get(v_d_2471_, 1);
lean_dec(v_unused_2525_);
v_unused_2526_ = lean_ctor_get(v_d_2471_, 0);
lean_dec(v_unused_2526_);
v___x_2509_ = v_d_2471_;
v_isShared_2510_ = v_isSharedCheck_2524_;
goto v_resetjp_2508_;
}
else
{
lean_dec(v_d_2471_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2524_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
uint32_t v___x_2511_; uint64_t v___x_2512_; lean_object* v___x_2514_; 
v___x_2511_ = 206;
v___x_2512_ = 0ULL;
lean_inc(v_value_2504_);
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 1, v___x_2506_);
v___x_2514_ = v___x_2509_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v_value_2504_);
lean_ctor_set(v_reuseFailAlloc_2523_, 1, v___x_2506_);
v___x_2514_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
uint32_t v___x_2515_; lean_object* v___x_2516_; 
v___x_2515_ = lasm_js_value_handle(v_value_2504_);
lean_dec(v_value_2504_);
v___x_2516_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2511_, v___x_2512_, v___x_2514_, v___x_2515_);
lean_dec_ref(v___x_2514_);
if (lean_obj_tag(v___x_2516_) == 0)
{
lean_object* v_a_2517_; uint8_t v___x_2518_; 
v_a_2517_ = lean_ctor_get(v___x_2516_, 0);
lean_inc(v_a_2517_);
lean_dec_ref_known(v___x_2516_, 1);
v___x_2518_ = lean_string_validate_utf8(v_a_2517_);
if (v___x_2518_ == 0)
{
lean_object* v___x_2519_; lean_object* v___x_2520_; 
lean_dec(v_a_2517_);
v___x_2519_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_2520_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2519_);
v___y_2480_ = v_a_2503_;
v_received_2481_ = v___x_2520_;
goto v___jp_2479_;
}
else
{
lean_object* v___x_2521_; 
v___x_2521_ = lean_string_from_utf8_unchecked(v_a_2517_);
v___y_2480_ = v_a_2503_;
v_received_2481_ = v___x_2521_;
goto v___jp_2479_;
}
}
else
{
lean_object* v___x_2522_; 
lean_dec_ref_known(v___x_2516_, 1);
v___x_2522_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_2480_ = v_a_2503_;
v_received_2481_ = v___x_2522_;
goto v___jp_2479_;
}
}
}
}
}
else
{
v___y_2500_ = v_a_2503_;
goto v___jp_2499_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2547_, lean_object* v_d_2548_, lean_object* v_a_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(v_context_2547_, v_d_2548_);
lean_dec_ref(v_context_2547_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(lean_object* v_context_2551_, lean_object* v_bytes_2552_){
_start:
{
lean_object* v___x_2554_; 
v___x_2554_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2552_);
if (lean_obj_tag(v___x_2554_) == 0)
{
lean_object* v_a_2555_; lean_object* v___x_2556_; 
v_a_2555_ = lean_ctor_get(v___x_2554_, 0);
lean_inc(v_a_2555_);
lean_dec_ref_known(v___x_2554_, 1);
v___x_2556_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(v_context_2551_, v_a_2555_);
return v___x_2556_;
}
else
{
lean_object* v_a_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2564_; 
v_a_2557_ = lean_ctor_get(v___x_2554_, 0);
v_isSharedCheck_2564_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2559_ = v___x_2554_;
v_isShared_2560_ = v_isSharedCheck_2564_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_a_2557_);
lean_dec(v___x_2554_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2564_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
lean_object* v___x_2562_; 
if (v_isShared_2560_ == 0)
{
v___x_2562_ = v___x_2559_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v_a_2557_);
v___x_2562_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
return v___x_2562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_2565_, lean_object* v_bytes_2566_, lean_object* v_a_2567_){
_start:
{
lean_object* v_res_2568_; 
v_res_2568_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(v_context_2565_, v_bytes_2566_);
lean_dec_ref(v_bytes_2566_);
lean_dec_ref(v_context_2565_);
return v_res_2568_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0(void){
_start:
{
uint8_t v___x_2569_; uint64_t v___x_2570_; 
v___x_2569_ = 0;
v___x_2570_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2569_);
return v___x_2570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(lean_object* v_o_2571_, lean_object* v_key_2572_){
_start:
{
lean_object* v_k_2574_; lean_object* v___x_2575_; 
v_k_2574_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2574_, 0, v_key_2572_);
v___x_2575_ = l_Lasm_JS_Wire_encodeIO(v_k_2574_);
if (lean_obj_tag(v___x_2575_) == 0)
{
lean_object* v_a_2576_; uint32_t v___x_2577_; uint32_t v___x_2578_; uint64_t v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; 
v_a_2576_ = lean_ctor_get(v___x_2575_, 0);
lean_inc(v_a_2576_);
lean_dec_ref_known(v___x_2575_, 1);
v___x_2577_ = 203;
v___x_2578_ = lasm_js_value_handle(v_o_2571_);
v___x_2579_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
v___x_2580_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2581_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2581_, 0, v_o_2571_);
lean_ctor_set(v___x_2581_, 1, v___x_2580_);
v___x_2582_ = lean_unsigned_to_nat(2u);
v___x_2583_ = lean_mk_empty_array_with_capacity(v___x_2582_);
lean_inc_ref(v_k_2574_);
v___x_2584_ = lean_array_push(v___x_2583_, v_k_2574_);
v___x_2585_ = lean_array_push(v___x_2584_, v___x_2581_);
v___x_2586_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2586_, 0, v___x_2585_);
v___x_2587_ = lasm_js_call(v___x_2577_, v___x_2578_, v___x_2579_, v_a_2576_, v___x_2586_);
lean_dec_ref_known(v___x_2586_, 1);
lean_dec(v_a_2576_);
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v_a_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v_a_2588_ = lean_ctor_get(v___x_2587_, 0);
lean_inc(v_a_2588_);
lean_dec_ref_known(v___x_2587_, 1);
v___x_2589_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__1));
v___x_2590_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2574_);
v___x_2591_ = lean_string_append(v___x_2589_, v___x_2590_);
lean_dec_ref(v___x_2590_);
v___x_2592_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(v___x_2591_, v_a_2588_);
lean_dec(v_a_2588_);
lean_dec_ref(v___x_2591_);
return v___x_2592_;
}
else
{
lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2600_; 
lean_dec_ref_known(v_k_2574_, 1);
v_a_2593_ = lean_ctor_get(v___x_2587_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2595_ = v___x_2587_;
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_dec(v___x_2587_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_a_2593_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
}
else
{
lean_object* v_a_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2608_; 
lean_dec_ref_known(v_k_2574_, 1);
lean_dec(v_o_2571_);
v_a_2601_ = lean_ctor_get(v___x_2575_, 0);
v_isSharedCheck_2608_ = !lean_is_exclusive(v___x_2575_);
if (v_isSharedCheck_2608_ == 0)
{
v___x_2603_ = v___x_2575_;
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_a_2601_);
lean_dec(v___x_2575_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2606_; 
if (v_isShared_2604_ == 0)
{
v___x_2606_ = v___x_2603_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_a_2601_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___boxed(lean_object* v_o_2609_, lean_object* v_key_2610_, lean_object* v_a_2611_){
_start:
{
lean_object* v_res_2612_; 
v_res_2612_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(v_o_2609_, v_key_2610_);
return v_res_2612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1(lean_object* v___f_2617_, lean_object* v_a_2618_, lean_object* v_x_2619_){
_start:
{
if (lean_obj_tag(v_x_2619_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2629_; 
lean_dec(v_a_2618_);
lean_dec_ref(v___f_2617_);
v_a_2621_ = lean_ctor_get(v_x_2619_, 0);
v_isSharedCheck_2629_ = !lean_is_exclusive(v_x_2619_);
if (v_isSharedCheck_2629_ == 0)
{
v___x_2623_ = v_x_2619_;
v_isShared_2624_ = v_isSharedCheck_2629_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v_x_2619_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2629_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2626_; 
if (v_isShared_2624_ == 0)
{
v___x_2626_ = v___x_2623_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v_a_2621_);
v___x_2626_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
lean_object* v___x_2627_; 
v___x_2627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2626_);
return v___x_2627_;
}
}
}
else
{
lean_object* v_a_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2652_; 
v_a_2630_ = lean_ctor_get(v_x_2619_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v_x_2619_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2632_ = v_x_2619_;
v_isShared_2633_ = v_isSharedCheck_2652_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_a_2630_);
lean_dec(v_x_2619_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2652_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
uint8_t v___x_2634_; 
v___x_2634_ = lean_unbox(v_a_2630_);
if (v___x_2634_ == 0)
{
lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v_val_2638_; lean_object* v___x_2642_; 
v___x_2635_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_2636_ = lean_unsigned_to_nat(0u);
v___x_2642_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(v_a_2618_, v___x_2635_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_object* v_a_2643_; lean_object* v___x_2645_; 
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
lean_inc(v_a_2643_);
lean_dec_ref_known(v___x_2642_, 1);
if (v_isShared_2633_ == 0)
{
lean_ctor_set(v___x_2632_, 0, v_a_2643_);
v___x_2645_ = v___x_2632_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_a_2643_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
v_val_2638_ = v___x_2645_;
goto v___jp_2637_;
}
}
else
{
lean_object* v_a_2647_; lean_object* v___x_2649_; 
v_a_2647_ = lean_ctor_get(v___x_2642_, 0);
lean_inc(v_a_2647_);
lean_dec_ref_known(v___x_2642_, 1);
if (v_isShared_2633_ == 0)
{
lean_ctor_set_tag(v___x_2632_, 0);
lean_ctor_set(v___x_2632_, 0, v_a_2647_);
v___x_2649_ = v___x_2632_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_a_2647_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
v_val_2638_ = v___x_2649_;
goto v___jp_2637_;
}
}
v___jp_2637_:
{
lean_object* v___x_2639_; uint8_t v___x_2640_; lean_object* v___x_2641_; 
v___x_2639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2639_, 0, v_val_2638_);
v___x_2640_ = lean_unbox(v_a_2630_);
lean_dec(v_a_2630_);
v___x_2641_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2636_, v___x_2640_, v___x_2639_, v___f_2617_);
return v___x_2641_;
}
}
else
{
lean_object* v___x_2651_; 
lean_del_object(v___x_2632_);
lean_dec(v_a_2630_);
lean_dec(v_a_2618_);
lean_dec_ref(v___f_2617_);
v___x_2651_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___closed__1));
return v___x_2651_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___boxed(lean_object* v___f_2653_, lean_object* v_a_2654_, lean_object* v_x_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1(v___f_2653_, v_a_2654_, v_x_2655_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2(lean_object* v___f_2659_, lean_object* v_x_2660_){
_start:
{
if (lean_obj_tag(v_x_2660_) == 0)
{
lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2670_; 
lean_dec_ref(v___f_2659_);
v_a_2662_ = lean_ctor_get(v_x_2660_, 0);
v_isSharedCheck_2670_ = !lean_is_exclusive(v_x_2660_);
if (v_isSharedCheck_2670_ == 0)
{
v___x_2664_ = v_x_2660_;
v_isShared_2665_ = v_isSharedCheck_2670_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v_x_2660_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2670_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2667_; 
if (v_isShared_2665_ == 0)
{
v___x_2667_ = v___x_2664_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v_a_2662_);
v___x_2667_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
lean_object* v___x_2668_; 
v___x_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2667_);
return v___x_2668_;
}
}
}
else
{
lean_object* v_a_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2692_; 
v_a_2671_ = lean_ctor_get(v_x_2660_, 0);
v_isSharedCheck_2692_ = !lean_is_exclusive(v_x_2660_);
if (v_isSharedCheck_2692_ == 0)
{
v___x_2673_ = v_x_2660_;
v_isShared_2674_ = v_isSharedCheck_2692_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_a_2671_);
lean_dec(v_x_2660_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2692_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___f_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; uint8_t v___x_2678_; lean_object* v_val_2680_; lean_object* v___x_2683_; 
lean_inc(v_a_2671_);
v___f_2675_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2675_, 0, v___f_2659_);
lean_closure_set(v___f_2675_, 1, v_a_2671_);
v___x_2676_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___closed__0));
v___x_2677_ = lean_unsigned_to_nat(0u);
v___x_2678_ = 0;
v___x_2683_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_2671_, v___x_2676_);
if (lean_obj_tag(v___x_2683_) == 0)
{
lean_object* v_a_2684_; lean_object* v___x_2686_; 
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
lean_inc(v_a_2684_);
lean_dec_ref_known(v___x_2683_, 1);
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 0, v_a_2684_);
v___x_2686_ = v___x_2673_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_a_2684_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
v_val_2680_ = v___x_2686_;
goto v___jp_2679_;
}
}
else
{
lean_object* v_a_2688_; lean_object* v___x_2690_; 
v_a_2688_ = lean_ctor_get(v___x_2683_, 0);
lean_inc(v_a_2688_);
lean_dec_ref_known(v___x_2683_, 1);
if (v_isShared_2674_ == 0)
{
lean_ctor_set_tag(v___x_2673_, 0);
lean_ctor_set(v___x_2673_, 0, v_a_2688_);
v___x_2690_ = v___x_2673_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v_a_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
v_val_2680_ = v___x_2690_;
goto v___jp_2679_;
}
}
v___jp_2679_:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2681_, 0, v_val_2680_);
v___x_2682_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2677_, v___x_2678_, v___x_2681_, v___f_2675_);
return v___x_2682_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___boxed(lean_object* v___f_2693_, lean_object* v_x_2694_, lean_object* v___y_2695_){
_start:
{
lean_object* v_res_2696_; 
v_res_2696_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2(v___f_2693_, v_x_2694_);
return v_res_2696_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8(lean_object* v___f_2697_, lean_object* v_x_2698_){
_start:
{
if (lean_obj_tag(v_x_2698_) == 0)
{
lean_object* v_a_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2708_; 
lean_dec_ref(v___f_2697_);
v_a_2700_ = lean_ctor_get(v_x_2698_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v_x_2698_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2702_ = v_x_2698_;
v_isShared_2703_ = v_isSharedCheck_2708_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_a_2700_);
lean_dec(v_x_2698_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2708_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v___x_2705_; 
if (v_isShared_2703_ == 0)
{
v___x_2705_ = v___x_2702_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v_a_2700_);
v___x_2705_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
lean_object* v___x_2706_; 
v___x_2706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2705_);
return v___x_2706_;
}
}
}
else
{
lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2720_; 
v_isSharedCheck_2720_ = !lean_is_exclusive(v_x_2698_);
if (v_isSharedCheck_2720_ == 0)
{
lean_object* v_unused_2721_; 
v_unused_2721_ = lean_ctor_get(v_x_2698_, 0);
lean_dec(v_unused_2721_);
v___x_2710_ = v_x_2698_;
v_isShared_2711_ = v_isSharedCheck_2720_;
goto v_resetjp_2709_;
}
else
{
lean_dec(v_x_2698_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2720_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2712_; uint8_t v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2716_; 
v___x_2712_ = lean_unsigned_to_nat(0u);
v___x_2713_ = 0;
v___x_2714_ = lean_io_promise_new();
if (v_isShared_2711_ == 0)
{
lean_ctor_set(v___x_2710_, 0, v___x_2714_);
v___x_2716_ = v___x_2710_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v___x_2714_);
v___x_2716_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2716_);
v___x_2718_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2712_, v___x_2713_, v___x_2717_, v___f_2697_);
return v___x_2718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8___boxed(lean_object* v___f_2722_, lean_object* v_x_2723_, lean_object* v___y_2724_){
_start:
{
lean_object* v_res_2725_; 
v_res_2725_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8(v___f_2722_, v_x_2723_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1(lean_object* v___f_2726_, lean_object* v_bytes_2727_){
_start:
{
lean_object* v___x_2729_; uint8_t v___x_2730_; lean_object* v_val_2732_; lean_object* v___x_2735_; 
v___x_2729_ = lean_unsigned_to_nat(0u);
v___x_2730_ = 0;
v___x_2735_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2727_);
if (lean_obj_tag(v___x_2735_) == 0)
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2743_; 
v_a_2736_ = lean_ctor_get(v___x_2735_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2735_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2738_ = v___x_2735_;
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v___x_2735_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2741_; 
if (v_isShared_2739_ == 0)
{
lean_ctor_set_tag(v___x_2738_, 1);
v___x_2741_ = v___x_2738_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2736_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
v_val_2732_ = v___x_2741_;
goto v___jp_2731_;
}
}
}
else
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2751_; 
v_a_2744_ = lean_ctor_get(v___x_2735_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2735_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2746_ = v___x_2735_;
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2735_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
if (v_isShared_2747_ == 0)
{
lean_ctor_set_tag(v___x_2746_, 0);
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
v_val_2732_ = v___x_2749_;
goto v___jp_2731_;
}
}
}
v___jp_2731_:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2733_, 0, v_val_2732_);
v___x_2734_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2729_, v___x_2730_, v___x_2733_, v___f_2726_);
return v___x_2734_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1___boxed(lean_object* v___f_2752_, lean_object* v_bytes_2753_, lean_object* v___y_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1(v___f_2752_, v_bytes_2753_);
lean_dec_ref(v_bytes_2753_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7(lean_object* v___f_2756_, lean_object* v_a_2757_, uint32_t v_op_2758_, uint64_t v_flags_2759_, lean_object* v_payload_2760_, lean_object* v_x_2761_){
_start:
{
if (lean_obj_tag(v_x_2761_) == 0)
{
lean_object* v___x_2763_; 
lean_dec_ref(v___f_2756_);
v___x_2763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2763_, 0, v_x_2761_);
return v___x_2763_;
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2784_; 
v_a_2764_ = lean_ctor_get(v_x_2761_, 0);
v_isSharedCheck_2784_ = !lean_is_exclusive(v_x_2761_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2766_ = v_x_2761_;
v_isShared_2767_ = v_isSharedCheck_2784_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v_x_2761_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2784_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
uint32_t v___x_2768_; lean_object* v___x_2769_; uint8_t v___x_2770_; lean_object* v_val_2772_; lean_object* v___x_2775_; 
v___x_2768_ = 0;
v___x_2769_ = lean_unsigned_to_nat(0u);
v___x_2770_ = 0;
v___x_2775_ = lasm_js_call_into(v_a_2757_, v_op_2758_, v___x_2768_, v_flags_2759_, v_a_2764_, v_payload_2760_);
lean_dec(v_a_2764_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v_a_2776_; lean_object* v___x_2778_; 
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
lean_inc(v_a_2776_);
lean_dec_ref_known(v___x_2775_, 1);
if (v_isShared_2767_ == 0)
{
lean_ctor_set(v___x_2766_, 0, v_a_2776_);
v___x_2778_ = v___x_2766_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_a_2776_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
v_val_2772_ = v___x_2778_;
goto v___jp_2771_;
}
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; 
v_a_2780_ = lean_ctor_get(v___x_2775_, 0);
lean_inc(v_a_2780_);
lean_dec_ref_known(v___x_2775_, 1);
if (v_isShared_2767_ == 0)
{
lean_ctor_set_tag(v___x_2766_, 0);
lean_ctor_set(v___x_2766_, 0, v_a_2780_);
v___x_2782_ = v___x_2766_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_a_2780_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
v_val_2772_ = v___x_2782_;
goto v___jp_2771_;
}
}
v___jp_2771_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2773_, 0, v_val_2772_);
v___x_2774_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2769_, v___x_2770_, v___x_2773_, v___f_2756_);
return v___x_2774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed(lean_object* v___f_2785_, lean_object* v_a_2786_, lean_object* v_op_2787_, lean_object* v_flags_2788_, lean_object* v_payload_2789_, lean_object* v_x_2790_, lean_object* v___y_2791_){
_start:
{
uint32_t v_op_boxed_2792_; uint64_t v_flags_boxed_2793_; lean_object* v_res_2794_; 
v_op_boxed_2792_ = lean_unbox_uint32(v_op_2787_);
lean_dec(v_op_2787_);
v_flags_boxed_2793_ = lean_unbox_uint64(v_flags_2788_);
lean_dec_ref(v_flags_2788_);
v_res_2794_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7(v___f_2785_, v_a_2786_, v_op_boxed_2792_, v_flags_boxed_2793_, v_payload_2789_, v_x_2790_);
lean_dec(v_payload_2789_);
lean_dec(v_a_2786_);
return v_res_2794_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5(lean_object* v___x_2795_, uint8_t v___x_2796_, lean_object* v___f_2797_, lean_object* v_a_2798_, uint32_t v_op_2799_, uint64_t v_flags_2800_, lean_object* v_payload_2801_, lean_object* v_x_2802_){
_start:
{
lean_object* v_val_2805_; 
if (lean_obj_tag(v_x_2802_) == 0)
{
lean_object* v___x_2808_; 
lean_dec_ref(v___f_2797_);
lean_dec(v___x_2795_);
v___x_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2808_, 0, v_x_2802_);
return v___x_2808_;
}
else
{
lean_object* v_a_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2823_; 
v_a_2809_ = lean_ctor_get(v_x_2802_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2811_ = v_x_2802_;
v_isShared_2812_ = v_isSharedCheck_2823_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_a_2809_);
lean_dec(v_x_2802_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2823_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
uint32_t v___x_2813_; lean_object* v___x_2814_; 
v___x_2813_ = 0;
v___x_2814_ = lasm_js_call_into(v_a_2798_, v_op_2799_, v___x_2813_, v_flags_2800_, v_a_2809_, v_payload_2801_);
lean_dec(v_a_2809_);
if (lean_obj_tag(v___x_2814_) == 0)
{
lean_object* v_a_2815_; lean_object* v___x_2817_; 
v_a_2815_ = lean_ctor_get(v___x_2814_, 0);
lean_inc(v_a_2815_);
lean_dec_ref_known(v___x_2814_, 1);
if (v_isShared_2812_ == 0)
{
lean_ctor_set(v___x_2811_, 0, v_a_2815_);
v___x_2817_ = v___x_2811_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_a_2815_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
v_val_2805_ = v___x_2817_;
goto v___jp_2804_;
}
}
else
{
lean_object* v_a_2819_; lean_object* v___x_2821_; 
v_a_2819_ = lean_ctor_get(v___x_2814_, 0);
lean_inc(v_a_2819_);
lean_dec_ref_known(v___x_2814_, 1);
if (v_isShared_2812_ == 0)
{
lean_ctor_set_tag(v___x_2811_, 0);
lean_ctor_set(v___x_2811_, 0, v_a_2819_);
v___x_2821_ = v___x_2811_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_a_2819_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
v_val_2805_ = v___x_2821_;
goto v___jp_2804_;
}
}
}
}
v___jp_2804_:
{
lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2806_, 0, v_val_2805_);
v___x_2807_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2795_, v___x_2796_, v___x_2806_, v___f_2797_);
return v___x_2807_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed(lean_object* v___x_2824_, lean_object* v___x_2825_, lean_object* v___f_2826_, lean_object* v_a_2827_, lean_object* v_op_2828_, lean_object* v_flags_2829_, lean_object* v_payload_2830_, lean_object* v_x_2831_, lean_object* v___y_2832_){
_start:
{
uint8_t v___x_3461__boxed_2833_; uint32_t v_op_boxed_2834_; uint64_t v_flags_boxed_2835_; lean_object* v_res_2836_; 
v___x_3461__boxed_2833_ = lean_unbox(v___x_2825_);
v_op_boxed_2834_ = lean_unbox_uint32(v_op_2828_);
lean_dec(v_op_2828_);
v_flags_boxed_2835_ = lean_unbox_uint64(v_flags_2829_);
lean_dec_ref(v_flags_2829_);
v_res_2836_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5(v___x_2824_, v___x_3461__boxed_2833_, v___f_2826_, v_a_2827_, v_op_boxed_2834_, v_flags_boxed_2835_, v_payload_2830_, v_x_2831_);
lean_dec(v_payload_2830_);
lean_dec(v_a_2827_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3(lean_object* v_a_2837_, lean_object* v_x_2838_){
_start:
{
if (lean_obj_tag(v_x_2838_) == 0)
{
lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2848_; 
v_a_2840_ = lean_ctor_get(v_x_2838_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v_x_2838_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2842_ = v_x_2838_;
v_isShared_2843_ = v_isSharedCheck_2848_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v_x_2838_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2848_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2845_; 
if (v_isShared_2843_ == 0)
{
v___x_2845_ = v___x_2842_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v_a_2840_);
v___x_2845_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
lean_object* v___x_2846_; 
v___x_2846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2845_);
return v___x_2846_;
}
}
}
else
{
lean_object* v___x_2849_; 
lean_dec_ref_known(v_x_2838_, 1);
v___x_2849_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2837_);
return v___x_2849_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed(lean_object* v_a_2850_, lean_object* v_x_2851_, lean_object* v___y_2852_){
_start:
{
lean_object* v_res_2853_; 
v_res_2853_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3(v_a_2850_, v_x_2851_);
lean_dec(v_a_2850_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6(lean_object* v_failurePrefix_2854_, uint32_t v_op_2855_, uint64_t v_flags_2856_, lean_object* v_payload_2857_, lean_object* v___f_2858_, lean_object* v___f_2859_, lean_object* v___f_2860_, lean_object* v_x_2861_){
_start:
{
if (lean_obj_tag(v_x_2861_) == 0)
{
lean_object* v_a_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2871_; 
lean_dec_ref(v___f_2860_);
lean_dec_ref(v___f_2859_);
lean_dec_ref(v___f_2858_);
lean_dec(v_payload_2857_);
v_a_2863_ = lean_ctor_get(v_x_2861_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v_x_2861_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2865_ = v_x_2861_;
v_isShared_2866_ = v_isSharedCheck_2871_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_a_2863_);
lean_dec(v_x_2861_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2871_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2868_; 
if (v_isShared_2866_ == 0)
{
v___x_2868_ = v___x_2865_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v_a_2863_);
v___x_2868_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
lean_object* v___x_2869_; 
v___x_2869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2869_, 0, v___x_2868_);
return v___x_2869_;
}
}
}
else
{
lean_object* v_a_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2918_; 
v_a_2872_ = lean_ctor_get(v_x_2861_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v_x_2861_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2874_ = v_x_2861_;
v_isShared_2875_ = v_isSharedCheck_2918_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_a_2872_);
lean_dec(v_x_2861_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2918_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2876_; lean_object* v___x_2877_; uint8_t v___x_2878_; 
v___x_2876_ = lean_string_utf8_byte_size(v_failurePrefix_2854_);
v___x_2877_ = lean_unsigned_to_nat(0u);
v___x_2878_ = lean_nat_dec_eq(v___x_2876_, v___x_2877_);
if (v___x_2878_ == 0)
{
lean_object* v___f_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___f_2883_; lean_object* v_val_2885_; lean_object* v___x_2890_; 
lean_dec_ref(v___f_2860_);
lean_inc(v_a_2872_);
v___f_2879_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2879_, 0, v_a_2872_);
v___x_2880_ = lean_box(v___x_2878_);
v___x_2881_ = lean_box_uint32(v_op_2855_);
v___x_2882_ = lean_box_uint64(v_flags_2856_);
lean_inc(v_payload_2857_);
v___f_2883_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2883_, 0, v___x_2877_);
lean_closure_set(v___f_2883_, 1, v___x_2880_);
lean_closure_set(v___f_2883_, 2, v___f_2879_);
lean_closure_set(v___f_2883_, 3, v_a_2872_);
lean_closure_set(v___f_2883_, 4, v___x_2881_);
lean_closure_set(v___f_2883_, 5, v___x_2882_);
lean_closure_set(v___f_2883_, 6, v_payload_2857_);
v___x_2890_ = l_Lasm_JS_Wire_encodeIO(v_payload_2857_);
lean_dec(v_payload_2857_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_object* v_a_2891_; lean_object* v___x_2893_; 
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
lean_inc(v_a_2891_);
lean_dec_ref_known(v___x_2890_, 1);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 0, v_a_2891_);
v___x_2893_ = v___x_2874_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v_a_2891_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
v_val_2885_ = v___x_2893_;
goto v___jp_2884_;
}
}
else
{
lean_object* v_a_2895_; lean_object* v___x_2897_; 
v_a_2895_ = lean_ctor_get(v___x_2890_, 0);
lean_inc(v_a_2895_);
lean_dec_ref_known(v___x_2890_, 1);
if (v_isShared_2875_ == 0)
{
lean_ctor_set_tag(v___x_2874_, 0);
lean_ctor_set(v___x_2874_, 0, v_a_2895_);
v___x_2897_ = v___x_2874_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_a_2895_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
v_val_2885_ = v___x_2897_;
goto v___jp_2884_;
}
}
v___jp_2884_:
{
lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; 
v___x_2886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2886_, 0, v_val_2885_);
v___x_2887_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2877_, v___x_2878_, v___x_2886_, v___f_2883_);
v___x_2888_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2877_, v___x_2878_, v___x_2887_, v___f_2858_);
v___x_2889_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2877_, v___x_2878_, v___x_2888_, v___f_2859_);
return v___x_2889_;
}
}
else
{
lean_object* v___f_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___f_2902_; uint8_t v___x_2903_; lean_object* v_val_2905_; lean_object* v___x_2909_; 
lean_dec_ref(v___f_2859_);
lean_dec_ref(v___f_2858_);
lean_inc(v_a_2872_);
v___f_2899_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2899_, 0, v_a_2872_);
v___x_2900_ = lean_box_uint32(v_op_2855_);
v___x_2901_ = lean_box_uint64(v_flags_2856_);
lean_inc(v_payload_2857_);
v___f_2902_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2902_, 0, v___f_2899_);
lean_closure_set(v___f_2902_, 1, v_a_2872_);
lean_closure_set(v___f_2902_, 2, v___x_2900_);
lean_closure_set(v___f_2902_, 3, v___x_2901_);
lean_closure_set(v___f_2902_, 4, v_payload_2857_);
v___x_2903_ = 0;
v___x_2909_ = l_Lasm_JS_Wire_encodeIO(v_payload_2857_);
lean_dec(v_payload_2857_);
if (lean_obj_tag(v___x_2909_) == 0)
{
lean_object* v_a_2910_; lean_object* v___x_2912_; 
v_a_2910_ = lean_ctor_get(v___x_2909_, 0);
lean_inc(v_a_2910_);
lean_dec_ref_known(v___x_2909_, 1);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 0, v_a_2910_);
v___x_2912_ = v___x_2874_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v_a_2910_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
v_val_2905_ = v___x_2912_;
goto v___jp_2904_;
}
}
else
{
lean_object* v_a_2914_; lean_object* v___x_2916_; 
v_a_2914_ = lean_ctor_get(v___x_2909_, 0);
lean_inc(v_a_2914_);
lean_dec_ref_known(v___x_2909_, 1);
if (v_isShared_2875_ == 0)
{
lean_ctor_set_tag(v___x_2874_, 0);
lean_ctor_set(v___x_2874_, 0, v_a_2914_);
v___x_2916_ = v___x_2874_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_a_2914_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
v_val_2905_ = v___x_2916_;
goto v___jp_2904_;
}
}
v___jp_2904_:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2906_, 0, v_val_2905_);
v___x_2907_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2877_, v___x_2903_, v___x_2906_, v___f_2902_);
v___x_2908_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2877_, v___x_2903_, v___x_2907_, v___f_2860_);
return v___x_2908_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6___boxed(lean_object* v_failurePrefix_2919_, lean_object* v_op_2920_, lean_object* v_flags_2921_, lean_object* v_payload_2922_, lean_object* v___f_2923_, lean_object* v___f_2924_, lean_object* v___f_2925_, lean_object* v_x_2926_, lean_object* v___y_2927_){
_start:
{
uint32_t v_op_boxed_2928_; uint64_t v_flags_boxed_2929_; lean_object* v_res_2930_; 
v_op_boxed_2928_ = lean_unbox_uint32(v_op_2920_);
lean_dec(v_op_2920_);
v_flags_boxed_2929_ = lean_unbox_uint64(v_flags_2921_);
lean_dec_ref(v_flags_2921_);
v_res_2930_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6(v_failurePrefix_2919_, v_op_boxed_2928_, v_flags_boxed_2929_, v_payload_2922_, v___f_2923_, v___f_2924_, v___f_2925_, v_x_2926_);
lean_dec_ref(v_failurePrefix_2919_);
return v_res_2930_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4(lean_object* v_failurePrefix_2931_, lean_object* v_x_2932_){
_start:
{
if (lean_obj_tag(v_x_2932_) == 0)
{
lean_object* v_a_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2945_; 
v_a_2934_ = lean_ctor_get(v_x_2932_, 0);
v_isSharedCheck_2945_ = !lean_is_exclusive(v_x_2932_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2936_ = v_x_2932_;
v_isShared_2937_ = v_isSharedCheck_2945_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_a_2934_);
lean_dec(v_x_2932_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2945_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2942_; 
v___x_2938_ = lean_io_error_to_string(v_a_2934_);
v___x_2939_ = lean_string_append(v_failurePrefix_2931_, v___x_2938_);
lean_dec_ref(v___x_2938_);
v___x_2940_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2940_, 0, v___x_2939_);
if (v_isShared_2937_ == 0)
{
lean_ctor_set(v___x_2936_, 0, v___x_2940_);
v___x_2942_ = v___x_2936_;
goto v_reusejp_2941_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v___x_2940_);
v___x_2942_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2941_;
}
v_reusejp_2941_:
{
lean_object* v___x_2943_; 
v___x_2943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2942_);
return v___x_2943_;
}
}
}
else
{
lean_object* v___x_2946_; 
lean_dec_ref(v_failurePrefix_2931_);
v___x_2946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2946_, 0, v_x_2932_);
return v___x_2946_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed(lean_object* v_failurePrefix_2947_, lean_object* v_x_2948_, lean_object* v___y_2949_){
_start:
{
lean_object* v_res_2950_; 
v_res_2950_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4(v_failurePrefix_2947_, v_x_2948_);
return v_res_2950_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2(lean_object* v___f_2951_, lean_object* v_x_2952_){
_start:
{
if (lean_obj_tag(v_x_2952_) == 0)
{
lean_object* v_a_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2962_; 
lean_dec_ref(v___f_2951_);
v_a_2954_ = lean_ctor_get(v_x_2952_, 0);
v_isSharedCheck_2962_ = !lean_is_exclusive(v_x_2952_);
if (v_isSharedCheck_2962_ == 0)
{
v___x_2956_ = v_x_2952_;
v_isShared_2957_ = v_isSharedCheck_2962_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_a_2954_);
lean_dec(v_x_2952_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2962_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___x_2959_; 
if (v_isShared_2957_ == 0)
{
v___x_2959_ = v___x_2956_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v_a_2954_);
v___x_2959_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
lean_object* v___x_2960_; 
v___x_2960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2960_, 0, v___x_2959_);
return v___x_2960_;
}
}
}
else
{
lean_object* v_a_2963_; lean_object* v___x_2964_; 
v_a_2963_ = lean_ctor_get(v_x_2952_, 0);
lean_inc(v_a_2963_);
lean_dec_ref_known(v_x_2952_, 1);
v___x_2964_ = lean_apply_2(v___f_2951_, v_a_2963_, lean_box(0));
return v___x_2964_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2___boxed(lean_object* v___f_2965_, lean_object* v_x_2966_, lean_object* v___y_2967_){
_start:
{
lean_object* v_res_2968_; 
v_res_2968_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2(v___f_2965_, v_x_2966_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0(lean_object* v_context_2969_, lean_object* v_x_2970_){
_start:
{
lean_object* v_val_2973_; 
if (lean_obj_tag(v_x_2970_) == 0)
{
lean_object* v_a_2975_; lean_object* v___x_2977_; uint8_t v_isShared_2978_; uint8_t v_isSharedCheck_2983_; 
v_a_2975_ = lean_ctor_get(v_x_2970_, 0);
v_isSharedCheck_2983_ = !lean_is_exclusive(v_x_2970_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2977_ = v_x_2970_;
v_isShared_2978_ = v_isSharedCheck_2983_;
goto v_resetjp_2976_;
}
else
{
lean_inc(v_a_2975_);
lean_dec(v_x_2970_);
v___x_2977_ = lean_box(0);
v_isShared_2978_ = v_isSharedCheck_2983_;
goto v_resetjp_2976_;
}
v_resetjp_2976_:
{
lean_object* v___x_2980_; 
if (v_isShared_2978_ == 0)
{
v___x_2980_ = v___x_2977_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v_a_2975_);
v___x_2980_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
lean_object* v___x_2981_; 
v___x_2981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2980_);
return v___x_2981_;
}
}
}
else
{
lean_object* v_a_2984_; lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_2997_; 
v_a_2984_ = lean_ctor_get(v_x_2970_, 0);
v_isSharedCheck_2997_ = !lean_is_exclusive(v_x_2970_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2986_ = v_x_2970_;
v_isShared_2987_ = v_isSharedCheck_2997_;
goto v_resetjp_2985_;
}
else
{
lean_inc(v_a_2984_);
lean_dec(v_x_2970_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_2997_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v___x_2988_; 
v___x_2988_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_2969_, v_a_2984_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2991_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
lean_inc(v_a_2989_);
lean_dec_ref_known(v___x_2988_, 1);
if (v_isShared_2987_ == 0)
{
lean_ctor_set(v___x_2986_, 0, v_a_2989_);
v___x_2991_ = v___x_2986_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_a_2989_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
v_val_2973_ = v___x_2991_;
goto v___jp_2972_;
}
}
else
{
lean_object* v_a_2993_; lean_object* v___x_2995_; 
v_a_2993_ = lean_ctor_get(v___x_2988_, 0);
lean_inc(v_a_2993_);
lean_dec_ref_known(v___x_2988_, 1);
if (v_isShared_2987_ == 0)
{
lean_ctor_set_tag(v___x_2986_, 0);
lean_ctor_set(v___x_2986_, 0, v_a_2993_);
v___x_2995_ = v___x_2986_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v_a_2993_);
v___x_2995_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
v_val_2973_ = v___x_2995_;
goto v___jp_2972_;
}
}
}
}
v___jp_2972_:
{
lean_object* v___x_2974_; 
v___x_2974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2974_, 0, v_val_2973_);
return v___x_2974_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0___boxed(lean_object* v_context_2998_, lean_object* v_x_2999_, lean_object* v___y_3000_){
_start:
{
lean_object* v_res_3001_; 
v_res_3001_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0(v_context_2998_, v_x_2999_);
lean_dec_ref(v_context_2998_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(lean_object* v_context_3002_, uint32_t v_op_3003_, uint64_t v_flags_3004_, lean_object* v_payload_3005_, lean_object* v_failurePrefix_3006_){
_start:
{
lean_object* v___f_3008_; lean_object* v___f_3009_; lean_object* v___f_3010_; lean_object* v___f_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___f_3014_; lean_object* v___f_3015_; lean_object* v___x_3016_; uint8_t v___x_3017_; lean_object* v_val_3019_; lean_object* v___x_3022_; 
v___f_3008_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3008_, 0, v_context_3002_);
v___f_3009_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3009_, 0, v___f_3008_);
v___f_3010_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3010_, 0, v___f_3009_);
lean_inc_ref(v_failurePrefix_3006_);
v___f_3011_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3011_, 0, v_failurePrefix_3006_);
v___x_3012_ = lean_box_uint32(v_op_3003_);
v___x_3013_ = lean_box_uint64(v_flags_3004_);
lean_inc_ref(v___f_3010_);
v___f_3014_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3014_, 0, v_failurePrefix_3006_);
lean_closure_set(v___f_3014_, 1, v___x_3012_);
lean_closure_set(v___f_3014_, 2, v___x_3013_);
lean_closure_set(v___f_3014_, 3, v_payload_3005_);
lean_closure_set(v___f_3014_, 4, v___f_3011_);
lean_closure_set(v___f_3014_, 5, v___f_3010_);
lean_closure_set(v___f_3014_, 6, v___f_3010_);
v___f_3015_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3015_, 0, v___f_3014_);
v___x_3016_ = lean_unsigned_to_nat(0u);
v___x_3017_ = 0;
v___x_3022_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v_a_3023_; lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3030_; 
v_a_3023_ = lean_ctor_get(v___x_3022_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_3025_ = v___x_3022_;
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
else
{
lean_inc(v_a_3023_);
lean_dec(v___x_3022_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
lean_object* v___x_3028_; 
if (v_isShared_3026_ == 0)
{
lean_ctor_set_tag(v___x_3025_, 1);
v___x_3028_ = v___x_3025_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v_a_3023_);
v___x_3028_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
v_val_3019_ = v___x_3028_;
goto v___jp_3018_;
}
}
}
else
{
lean_object* v_a_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3038_; 
v_a_3031_ = lean_ctor_get(v___x_3022_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3033_ = v___x_3022_;
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_a_3031_);
lean_dec(v___x_3022_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3036_; 
if (v_isShared_3034_ == 0)
{
lean_ctor_set_tag(v___x_3033_, 0);
v___x_3036_ = v___x_3033_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_a_3031_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
v_val_3019_ = v___x_3036_;
goto v___jp_3018_;
}
}
}
v___jp_3018_:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; 
v___x_3020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3020_, 0, v_val_3019_);
v___x_3021_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3016_, v___x_3017_, v___x_3020_, v___f_3015_);
return v___x_3021_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___boxed(lean_object* v_context_3039_, lean_object* v_op_3040_, lean_object* v_flags_3041_, lean_object* v_payload_3042_, lean_object* v_failurePrefix_3043_, lean_object* v_a_3044_){
_start:
{
uint32_t v_op_boxed_3045_; uint64_t v_flags_boxed_3046_; lean_object* v_res_3047_; 
v_op_boxed_3045_ = lean_unbox_uint32(v_op_3040_);
lean_dec(v_op_3040_);
v_flags_boxed_3046_ = lean_unbox_uint64(v_flags_3041_);
lean_dec_ref(v_flags_3041_);
v_res_3047_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(v_context_3039_, v_op_boxed_3045_, v_flags_boxed_3046_, v_payload_3042_, v_failurePrefix_3043_);
return v_res_3047_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1(void){
_start:
{
uint64_t v___x_3049_; uint8_t v___x_3050_; uint64_t v___x_3051_; 
v___x_3049_ = 8ULL;
v___x_3050_ = 0;
v___x_3051_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_3050_, v___x_3049_);
return v___x_3051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(lean_object* v_o_3052_, lean_object* v_name_3053_, lean_object* v_args_3054_){
_start:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; uint32_t v___x_3061_; uint64_t v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3056_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_3057_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3057_, 0, v_o_3052_);
lean_ctor_set(v___x_3057_, 1, v___x_3056_);
lean_inc_ref(v_name_3053_);
v___x_3058_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3058_, 0, v_name_3053_);
v___x_3059_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_3060_ = lean_string_append(v___x_3059_, v_name_3053_);
lean_dec_ref(v_name_3053_);
v___x_3061_ = 205;
v___x_3062_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1);
v___x_3063_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3063_, 0, v_args_3054_);
v___x_3064_ = lean_unsigned_to_nat(3u);
v___x_3065_ = lean_mk_empty_array_with_capacity(v___x_3064_);
v___x_3066_ = lean_array_push(v___x_3065_, v___x_3057_);
v___x_3067_ = lean_array_push(v___x_3066_, v___x_3058_);
v___x_3068_ = lean_array_push(v___x_3067_, v___x_3063_);
v___x_3069_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3069_, 0, v___x_3068_);
v___x_3070_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(v___x_3060_, v___x_3061_, v___x_3062_, v___x_3069_, v___x_3056_);
return v___x_3070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___boxed(lean_object* v_o_3071_, lean_object* v_name_3072_, lean_object* v_args_3073_, lean_object* v___y_3074_){
_start:
{
lean_object* v_res_3075_; 
v_res_3075_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(v_o_3071_, v_name_3072_, v_args_3073_);
return v_res_3075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next(lean_object* v_it_3080_){
_start:
{
lean_object* v___f_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; uint8_t v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
v___f_3082_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__1));
v___x_3083_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__2));
v___x_3084_ = lean_unsigned_to_nat(0u);
v___x_3085_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v___x_3086_ = 0;
v___x_3087_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(v_it_3080_, v___x_3083_, v___x_3085_);
v___x_3088_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3084_, v___x_3086_, v___x_3087_, v___f_3082_);
return v___x_3088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___boxed(lean_object* v_it_3089_, lean_object* v_a_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next(v_it_3089_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0(lean_object* v_acc_3092_, lean_object* v_it_3093_, lean_object* v_x_3094_){
_start:
{
if (lean_obj_tag(v_x_3094_) == 0)
{
lean_object* v_a_3096_; lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3104_; 
lean_dec(v_it_3093_);
lean_dec_ref(v_acc_3092_);
v_a_3096_ = lean_ctor_get(v_x_3094_, 0);
v_isSharedCheck_3104_ = !lean_is_exclusive(v_x_3094_);
if (v_isSharedCheck_3104_ == 0)
{
v___x_3098_ = v_x_3094_;
v_isShared_3099_ = v_isSharedCheck_3104_;
goto v_resetjp_3097_;
}
else
{
lean_inc(v_a_3096_);
lean_dec(v_x_3094_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3104_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v___x_3101_; 
if (v_isShared_3099_ == 0)
{
v___x_3101_ = v___x_3098_;
goto v_reusejp_3100_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v_a_3096_);
v___x_3101_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3100_;
}
v_reusejp_3100_:
{
lean_object* v___x_3102_; 
v___x_3102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3101_);
return v___x_3102_;
}
}
}
else
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3116_; 
v_a_3105_ = lean_ctor_get(v_x_3094_, 0);
v_isSharedCheck_3116_ = !lean_is_exclusive(v_x_3094_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3107_ = v_x_3094_;
v_isShared_3108_ = v_isSharedCheck_3116_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v_x_3094_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3116_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
if (lean_obj_tag(v_a_3105_) == 0)
{
lean_object* v___x_3110_; 
lean_dec(v_it_3093_);
if (v_isShared_3108_ == 0)
{
lean_ctor_set(v___x_3107_, 0, v_acc_3092_);
v___x_3110_ = v___x_3107_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v_acc_3092_);
v___x_3110_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
lean_object* v___x_3111_; 
v___x_3111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3110_);
return v___x_3111_;
}
}
else
{
lean_object* v_val_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
lean_del_object(v___x_3107_);
v_val_3113_ = lean_ctor_get(v_a_3105_, 0);
lean_inc(v_val_3113_);
lean_dec_ref_known(v_a_3105_, 1);
v___x_3114_ = lean_array_push(v_acc_3092_, v_val_3113_);
v___x_3115_ = l_Lasm_JS_Deno_KvListIterator_values_loop(v_it_3093_, v___x_3114_);
return v___x_3115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0___boxed(lean_object* v_acc_3117_, lean_object* v_it_3118_, lean_object* v_x_3119_, lean_object* v___y_3120_){
_start:
{
lean_object* v_res_3121_; 
v_res_3121_ = l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0(v_acc_3117_, v_it_3118_, v_x_3119_);
return v_res_3121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop(lean_object* v_it_3122_, lean_object* v_acc_3123_){
_start:
{
lean_object* v___f_3125_; lean_object* v___x_3126_; uint8_t v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; 
lean_inc(v_it_3122_);
v___f_3125_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3125_, 0, v_acc_3123_);
lean_closure_set(v___f_3125_, 1, v_it_3122_);
v___x_3126_ = lean_unsigned_to_nat(0u);
v___x_3127_ = 0;
v___x_3128_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next(v_it_3122_);
v___x_3129_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3126_, v___x_3127_, v___x_3128_, v___f_3125_);
return v___x_3129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___boxed(lean_object* v_it_3130_, lean_object* v_acc_3131_, lean_object* v_a_3132_){
_start:
{
lean_object* v_res_3133_; 
v_res_3133_ = l_Lasm_JS_Deno_KvListIterator_values_loop(v_it_3130_, v_acc_3131_);
return v_res_3133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0(lean_object* v_x_3136_){
_start:
{
if (lean_obj_tag(v_x_3136_) == 0)
{
lean_object* v_a_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3146_; 
v_a_3138_ = lean_ctor_get(v_x_3136_, 0);
v_isSharedCheck_3146_ = !lean_is_exclusive(v_x_3136_);
if (v_isSharedCheck_3146_ == 0)
{
v___x_3140_ = v_x_3136_;
v_isShared_3141_ = v_isSharedCheck_3146_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_a_3138_);
lean_dec(v_x_3136_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3146_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
lean_object* v___x_3143_; 
if (v_isShared_3141_ == 0)
{
v___x_3143_ = v___x_3140_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3145_, 0, v_a_3138_);
v___x_3143_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
lean_object* v___x_3144_; 
v___x_3144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
return v___x_3144_;
}
}
}
else
{
lean_object* v_a_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v_a_3147_ = lean_ctor_get(v_x_3136_, 0);
lean_inc(v_a_3147_);
lean_dec_ref_known(v_x_3136_, 1);
v___x_3148_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_values___lam__0___closed__0));
v___x_3149_ = l_Lasm_JS_Deno_KvListIterator_values_loop(v_a_3147_, v___x_3148_);
return v___x_3149_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0___boxed(lean_object* v_x_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v_res_3152_; 
v_res_3152_ = l_Lasm_JS_Deno_KvListIterator_values___lam__0(v_x_3150_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values(lean_object* v_self_3154_){
_start:
{
lean_object* v___f_3156_; lean_object* v___x_3157_; uint8_t v___x_3158_; lean_object* v_val_3160_; lean_object* v___x_3163_; 
v___f_3156_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_values___closed__0));
v___x_3157_ = lean_unsigned_to_nat(0u);
v___x_3158_ = 0;
v___x_3163_ = l_Lasm_JS_Deno_KvListIterator_iterator(v_self_3154_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_object* v_a_3164_; lean_object* v___x_3166_; uint8_t v_isShared_3167_; uint8_t v_isSharedCheck_3171_; 
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
v_isSharedCheck_3171_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3171_ == 0)
{
v___x_3166_ = v___x_3163_;
v_isShared_3167_ = v_isSharedCheck_3171_;
goto v_resetjp_3165_;
}
else
{
lean_inc(v_a_3164_);
lean_dec(v___x_3163_);
v___x_3166_ = lean_box(0);
v_isShared_3167_ = v_isSharedCheck_3171_;
goto v_resetjp_3165_;
}
v_resetjp_3165_:
{
lean_object* v___x_3169_; 
if (v_isShared_3167_ == 0)
{
lean_ctor_set_tag(v___x_3166_, 1);
v___x_3169_ = v___x_3166_;
goto v_reusejp_3168_;
}
else
{
lean_object* v_reuseFailAlloc_3170_; 
v_reuseFailAlloc_3170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3170_, 0, v_a_3164_);
v___x_3169_ = v_reuseFailAlloc_3170_;
goto v_reusejp_3168_;
}
v_reusejp_3168_:
{
v_val_3160_ = v___x_3169_;
goto v___jp_3159_;
}
}
}
else
{
lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3179_; 
v_a_3172_ = lean_ctor_get(v___x_3163_, 0);
v_isSharedCheck_3179_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3179_ == 0)
{
v___x_3174_ = v___x_3163_;
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v___x_3163_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v___x_3177_; 
if (v_isShared_3175_ == 0)
{
lean_ctor_set_tag(v___x_3174_, 0);
v___x_3177_ = v___x_3174_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v_a_3172_);
v___x_3177_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
v_val_3160_ = v___x_3177_;
goto v___jp_3159_;
}
}
}
v___jp_3159_:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3161_, 0, v_val_3160_);
v___x_3162_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3157_, v___x_3158_, v___x_3161_, v___f_3156_);
return v___x_3162_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___boxed(lean_object* v_self_3180_, lean_object* v_a_3181_){
_start:
{
lean_object* v_res_3182_; 
v_res_3182_ = l_Lasm_JS_Deno_KvListIterator_values(v_self_3180_);
return v_res_3182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0(lean_object* v_context_3183_, lean_object* v_d_3184_){
_start:
{
lean_object* v___y_3187_; lean_object* v___y_3188_; 
if (lean_obj_tag(v_d_3184_) == 9)
{
lean_object* v_value_3192_; lean_object* v___x_3193_; 
v_value_3192_ = lean_ctor_get(v_d_3184_, 0);
lean_inc(v_value_3192_);
lean_dec_ref_known(v_d_3184_, 2);
v___x_3193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3193_, 0, v_value_3192_);
return v___x_3193_;
}
else
{
lean_object* v___x_3194_; lean_object* v_received_3196_; 
v___x_3194_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
if (lean_obj_tag(v_d_3184_) == 9)
{
lean_object* v_value_3210_; lean_object* v_description_3211_; uint8_t v___x_3212_; 
v_value_3210_ = lean_ctor_get(v_d_3184_, 0);
v_description_3211_ = lean_ctor_get(v_d_3184_, 1);
v___x_3212_ = lean_string_dec_eq(v_description_3211_, v___x_3194_);
if (v___x_3212_ == 0)
{
goto v___jp_3208_;
}
else
{
uint32_t v___x_3213_; uint64_t v___x_3214_; lean_object* v___x_3215_; uint32_t v___x_3216_; lean_object* v___x_3217_; 
lean_inc_n(v_value_3210_, 2);
lean_dec_ref_known(v_d_3184_, 2);
v___x_3213_ = 206;
v___x_3214_ = 0ULL;
v___x_3215_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3215_, 0, v_value_3210_);
lean_ctor_set(v___x_3215_, 1, v___x_3194_);
v___x_3216_ = lasm_js_value_handle(v_value_3210_);
lean_dec(v_value_3210_);
v___x_3217_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3213_, v___x_3214_, v___x_3215_, v___x_3216_);
lean_dec_ref_known(v___x_3215_, 2);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; uint8_t v___x_3219_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3218_);
lean_dec_ref_known(v___x_3217_, 1);
v___x_3219_ = lean_string_validate_utf8(v_a_3218_);
if (v___x_3219_ == 0)
{
lean_object* v___x_3220_; lean_object* v___x_3221_; 
lean_dec(v_a_3218_);
v___x_3220_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_3221_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3220_);
v_received_3196_ = v___x_3221_;
goto v___jp_3195_;
}
else
{
lean_object* v___x_3222_; 
v___x_3222_ = lean_string_from_utf8_unchecked(v_a_3218_);
v_received_3196_ = v___x_3222_;
goto v___jp_3195_;
}
}
else
{
lean_object* v___x_3223_; 
lean_dec_ref_known(v___x_3217_, 1);
v___x_3223_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v_received_3196_ = v___x_3223_;
goto v___jp_3195_;
}
}
}
else
{
goto v___jp_3208_;
}
v___jp_3195_:
{
lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; uint8_t v___x_3206_; 
v___x_3197_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_3198_ = lean_string_append(v___x_3197_, v_context_3183_);
v___x_3199_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_3200_ = lean_string_append(v___x_3198_, v___x_3199_);
v___x_3201_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvU64___closed__0));
v___x_3202_ = lean_string_append(v___x_3200_, v___x_3201_);
v___x_3203_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_3204_ = lean_string_append(v___x_3202_, v___x_3203_);
v___x_3205_ = lean_string_append(v___x_3204_, v_received_3196_);
lean_dec_ref(v_received_3196_);
v___x_3206_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5);
if (v___x_3206_ == 0)
{
lean_object* v___x_3207_; 
v___x_3207_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6));
v___y_3187_ = v___x_3205_;
v___y_3188_ = v___x_3207_;
goto v___jp_3186_;
}
else
{
v___y_3187_ = v___x_3205_;
v___y_3188_ = v___x_3194_;
goto v___jp_3186_;
}
}
v___jp_3208_:
{
lean_object* v___x_3209_; 
v___x_3209_ = l_Lasm_JS_Data_describe(v_d_3184_);
v_received_3196_ = v___x_3209_;
goto v___jp_3195_;
}
}
v___jp_3186_:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3189_ = lean_string_append(v___y_3187_, v___y_3188_);
v___x_3190_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3190_, 0, v___x_3189_);
v___x_3191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3190_);
return v___x_3191_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0___boxed(lean_object* v_context_3224_, lean_object* v_d_3225_, lean_object* v_a_3226_){
_start:
{
lean_object* v_res_3227_; 
v_res_3227_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0(v_context_3224_, v_d_3225_);
lean_dec_ref(v_context_3224_);
return v_res_3227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0(lean_object* v_b_3228_, lean_object* v_args_3229_, uint8_t v_await_3230_){
_start:
{
uint64_t v___y_3233_; uint64_t v___y_3234_; uint64_t v___x_3277_; uint64_t v___y_3279_; 
v___x_3277_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_3230_ == 0)
{
uint64_t v___x_3284_; 
v___x_3284_ = 0ULL;
v___y_3279_ = v___x_3284_;
goto v___jp_3278_;
}
else
{
uint64_t v___x_3285_; 
v___x_3285_ = 2ULL;
v___y_3279_ = v___x_3285_;
goto v___jp_3278_;
}
v___jp_3232_:
{
uint64_t v_flags_3235_; uint32_t v___x_3236_; lean_object* v___x_3237_; uint32_t v___x_3238_; lean_object* v___x_3239_; 
v_flags_3235_ = lean_uint64_lor(v___y_3233_, v___y_3234_);
v___x_3236_ = 214;
v___x_3237_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3228_, v_args_3229_);
v___x_3238_ = 0;
v___x_3239_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3236_, v_flags_3235_, v___x_3237_, v___x_3238_);
lean_dec(v___x_3237_);
if (lean_obj_tag(v___x_3239_) == 0)
{
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_a_3240_; lean_object* v___x_3241_; 
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3240_);
lean_dec_ref_known(v___x_3239_, 1);
v___x_3241_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3240_);
lean_dec(v_a_3240_);
if (lean_obj_tag(v___x_3241_) == 0)
{
lean_object* v_a_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; 
v_a_3242_ = lean_ctor_get(v___x_3241_, 0);
lean_inc(v_a_3242_);
lean_dec_ref_known(v___x_3241_, 1);
v___x_3243_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3228_);
v___x_3244_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0(v___x_3243_, v_a_3242_);
lean_dec_ref(v___x_3243_);
return v___x_3244_;
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3252_; 
v_a_3245_ = lean_ctor_get(v___x_3241_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3241_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3247_ = v___x_3241_;
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3241_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
}
else
{
lean_object* v_a_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3260_; 
v_a_3253_ = lean_ctor_get(v___x_3239_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3255_ = v___x_3239_;
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_a_3253_);
lean_dec(v___x_3239_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3258_; 
if (v_isShared_3256_ == 0)
{
lean_ctor_set_tag(v___x_3255_, 1);
v___x_3258_ = v___x_3255_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_a_3253_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
}
}
}
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3276_; 
v_a_3261_ = lean_ctor_get(v___x_3239_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3263_ = v___x_3239_;
v_isShared_3264_ = v_isSharedCheck_3276_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3239_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3276_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3274_; 
v___x_3265_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_3266_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3228_);
v___x_3267_ = lean_string_append(v___x_3265_, v___x_3266_);
lean_dec_ref(v___x_3266_);
v___x_3268_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_3269_ = lean_string_append(v___x_3267_, v___x_3268_);
v___x_3270_ = lean_io_error_to_string(v_a_3261_);
v___x_3271_ = lean_string_append(v___x_3269_, v___x_3270_);
lean_dec_ref(v___x_3270_);
v___x_3272_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3271_);
if (v_isShared_3264_ == 0)
{
lean_ctor_set(v___x_3263_, 0, v___x_3272_);
v___x_3274_ = v___x_3263_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v___x_3272_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
}
v___jp_3278_:
{
uint8_t v_construct_3280_; uint64_t v___x_3281_; 
v_construct_3280_ = lean_ctor_get_uint8(v_b_3228_, sizeof(void*)*4);
v___x_3281_ = lean_uint64_lor(v___x_3277_, v___y_3279_);
if (v_construct_3280_ == 0)
{
uint64_t v___x_3282_; 
v___x_3282_ = 0ULL;
v___y_3233_ = v___x_3281_;
v___y_3234_ = v___x_3282_;
goto v___jp_3232_;
}
else
{
uint64_t v___x_3283_; 
v___x_3283_ = 4ULL;
v___y_3233_ = v___x_3281_;
v___y_3234_ = v___x_3283_;
goto v___jp_3232_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0___boxed(lean_object* v_b_3286_, lean_object* v_args_3287_, lean_object* v_await_3288_, lean_object* v_a_3289_){
_start:
{
uint8_t v_await_boxed_3290_; lean_object* v_res_3291_; 
v_await_boxed_3290_ = lean_unbox(v_await_3288_);
v_res_3291_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0(v_b_3286_, v_args_3287_, v_await_boxed_3290_);
lean_dec_ref(v_b_3286_);
return v_res_3291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_new(lean_object* v_value_3301_){
_start:
{
lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; uint8_t v___x_3309_; lean_object* v___x_3310_; 
v___x_3303_ = lean_unsigned_to_nat(1u);
v___x_3304_ = ((lean_object*)(l_Lasm_JS_Deno_KvU64_new___closed__3));
v___x_3305_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3305_, 0, v_value_3301_);
v___x_3306_ = lean_mk_empty_array_with_capacity(v___x_3303_);
v___x_3307_ = lean_array_push(v___x_3306_, v___x_3305_);
v___x_3308_ = l_Lasm_JS_Web_Support_args(v___x_3307_);
v___x_3309_ = 0;
v___x_3310_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0(v___x_3304_, v___x_3308_, v___x_3309_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_new___boxed(lean_object* v_value_3311_, lean_object* v_a_3312_){
_start:
{
lean_object* v_res_3313_; 
v_res_3313_ = l_Lasm_JS_Deno_KvU64_new(v_value_3311_);
return v_res_3313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1(lean_object* v_context_3316_, lean_object* v_d_3317_){
_start:
{
lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3326_; lean_object* v_received_3327_; lean_object* v___y_3346_; lean_object* v_a_3349_; 
switch(lean_obj_tag(v_d_3317_))
{
case 3:
{
double v_n_3373_; lean_object* v___x_3374_; 
v_n_3373_ = lean_ctor_get_float(v_d_3317_, 0);
v___x_3374_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_3373_);
if (lean_obj_tag(v___x_3374_) == 0)
{
lean_object* v___x_3375_; 
v___x_3375_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___closed__1));
v_a_3349_ = v___x_3375_;
goto v___jp_3348_;
}
else
{
lean_object* v_val_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3383_; 
lean_dec_ref_known(v_d_3317_, 0);
v_val_3376_ = lean_ctor_get(v___x_3374_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3374_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3378_ = v___x_3374_;
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_val_3376_);
lean_dec(v___x_3374_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3381_; 
if (v_isShared_3379_ == 0)
{
lean_ctor_set_tag(v___x_3378_, 0);
v___x_3381_ = v___x_3378_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_val_3376_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
}
case 5:
{
lean_object* v_i_3384_; lean_object* v___x_3385_; 
v_i_3384_ = lean_ctor_get(v_d_3317_, 0);
lean_inc(v_i_3384_);
lean_dec_ref_known(v_d_3317_, 1);
v___x_3385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3385_, 0, v_i_3384_);
return v___x_3385_;
}
default: 
{
lean_object* v___x_3386_; 
v___x_3386_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v_a_3349_ = v___x_3386_;
goto v___jp_3348_;
}
}
v___jp_3319_:
{
lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; 
v___x_3322_ = lean_string_append(v___y_3320_, v___y_3321_);
lean_dec_ref(v___y_3321_);
v___x_3323_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3322_);
v___x_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3323_);
return v___x_3324_;
}
v___jp_3325_:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; uint8_t v___x_3339_; 
v___x_3328_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_3329_ = lean_string_append(v___x_3328_, v_context_3316_);
v___x_3330_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_3331_ = lean_string_append(v___x_3329_, v___x_3330_);
v___x_3332_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___closed__0));
v___x_3333_ = lean_string_append(v___x_3331_, v___x_3332_);
v___x_3334_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_3335_ = lean_string_append(v___x_3333_, v___x_3334_);
v___x_3336_ = lean_string_append(v___x_3335_, v_received_3327_);
lean_dec_ref(v_received_3327_);
v___x_3337_ = lean_string_utf8_byte_size(v___y_3326_);
v___x_3338_ = lean_unsigned_to_nat(0u);
v___x_3339_ = lean_nat_dec_eq(v___x_3337_, v___x_3338_);
if (v___x_3339_ == 0)
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3340_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_3341_ = lean_string_append(v___x_3340_, v___y_3326_);
v___x_3342_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_3343_ = lean_string_append(v___x_3341_, v___x_3342_);
v___y_3320_ = v___x_3336_;
v___y_3321_ = v___x_3343_;
goto v___jp_3319_;
}
else
{
lean_object* v___x_3344_; 
v___x_3344_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_3320_ = v___x_3336_;
v___y_3321_ = v___x_3344_;
goto v___jp_3319_;
}
}
v___jp_3345_:
{
lean_object* v___x_3347_; 
v___x_3347_ = l_Lasm_JS_Data_describe(v_d_3317_);
v___y_3326_ = v___y_3346_;
v_received_3327_ = v___x_3347_;
goto v___jp_3325_;
}
v___jp_3348_:
{
if (lean_obj_tag(v_d_3317_) == 9)
{
lean_object* v_value_3350_; lean_object* v_description_3351_; lean_object* v___x_3352_; uint8_t v___x_3353_; 
v_value_3350_ = lean_ctor_get(v_d_3317_, 0);
v_description_3351_ = lean_ctor_get(v_d_3317_, 1);
v___x_3352_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_3353_ = lean_string_dec_eq(v_description_3351_, v___x_3352_);
if (v___x_3353_ == 0)
{
v___y_3346_ = v_a_3349_;
goto v___jp_3345_;
}
else
{
lean_object* v___x_3355_; uint8_t v_isShared_3356_; uint8_t v_isSharedCheck_3370_; 
lean_inc(v_value_3350_);
v_isSharedCheck_3370_ = !lean_is_exclusive(v_d_3317_);
if (v_isSharedCheck_3370_ == 0)
{
lean_object* v_unused_3371_; lean_object* v_unused_3372_; 
v_unused_3371_ = lean_ctor_get(v_d_3317_, 1);
lean_dec(v_unused_3371_);
v_unused_3372_ = lean_ctor_get(v_d_3317_, 0);
lean_dec(v_unused_3372_);
v___x_3355_ = v_d_3317_;
v_isShared_3356_ = v_isSharedCheck_3370_;
goto v_resetjp_3354_;
}
else
{
lean_dec(v_d_3317_);
v___x_3355_ = lean_box(0);
v_isShared_3356_ = v_isSharedCheck_3370_;
goto v_resetjp_3354_;
}
v_resetjp_3354_:
{
uint32_t v___x_3357_; uint64_t v___x_3358_; lean_object* v___x_3360_; 
v___x_3357_ = 206;
v___x_3358_ = 0ULL;
lean_inc(v_value_3350_);
if (v_isShared_3356_ == 0)
{
lean_ctor_set(v___x_3355_, 1, v___x_3352_);
v___x_3360_ = v___x_3355_;
goto v_reusejp_3359_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v_value_3350_);
lean_ctor_set(v_reuseFailAlloc_3369_, 1, v___x_3352_);
v___x_3360_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3359_;
}
v_reusejp_3359_:
{
uint32_t v___x_3361_; lean_object* v___x_3362_; 
v___x_3361_ = lasm_js_value_handle(v_value_3350_);
lean_dec(v_value_3350_);
v___x_3362_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3357_, v___x_3358_, v___x_3360_, v___x_3361_);
lean_dec_ref(v___x_3360_);
if (lean_obj_tag(v___x_3362_) == 0)
{
lean_object* v_a_3363_; uint8_t v___x_3364_; 
v_a_3363_ = lean_ctor_get(v___x_3362_, 0);
lean_inc(v_a_3363_);
lean_dec_ref_known(v___x_3362_, 1);
v___x_3364_ = lean_string_validate_utf8(v_a_3363_);
if (v___x_3364_ == 0)
{
lean_object* v___x_3365_; lean_object* v___x_3366_; 
lean_dec(v_a_3363_);
v___x_3365_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_3366_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3365_);
v___y_3326_ = v_a_3349_;
v_received_3327_ = v___x_3366_;
goto v___jp_3325_;
}
else
{
lean_object* v___x_3367_; 
v___x_3367_ = lean_string_from_utf8_unchecked(v_a_3363_);
v___y_3326_ = v_a_3349_;
v_received_3327_ = v___x_3367_;
goto v___jp_3325_;
}
}
else
{
lean_object* v___x_3368_; 
lean_dec_ref_known(v___x_3362_, 1);
v___x_3368_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_3326_ = v_a_3349_;
v_received_3327_ = v___x_3368_;
goto v___jp_3325_;
}
}
}
}
}
else
{
v___y_3346_ = v_a_3349_;
goto v___jp_3345_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3387_, lean_object* v_d_3388_, lean_object* v_a_3389_){
_start:
{
lean_object* v_res_3390_; 
v_res_3390_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1(v_context_3387_, v_d_3388_);
lean_dec_ref(v_context_3387_);
return v_res_3390_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0(lean_object* v_context_3391_, lean_object* v_bytes_3392_){
_start:
{
lean_object* v___x_3394_; 
v___x_3394_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3392_);
if (lean_obj_tag(v___x_3394_) == 0)
{
lean_object* v_a_3395_; lean_object* v___x_3396_; 
v_a_3395_ = lean_ctor_get(v___x_3394_, 0);
lean_inc(v_a_3395_);
lean_dec_ref_known(v___x_3394_, 1);
v___x_3396_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1(v_context_3391_, v_a_3395_);
return v___x_3396_;
}
else
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3404_; 
v_a_3397_ = lean_ctor_get(v___x_3394_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v___x_3394_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3399_ = v___x_3394_;
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3394_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3402_; 
if (v_isShared_3400_ == 0)
{
v___x_3402_ = v___x_3399_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3397_);
v___x_3402_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
return v___x_3402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0___boxed(lean_object* v_context_3405_, lean_object* v_bytes_3406_, lean_object* v_a_3407_){
_start:
{
lean_object* v_res_3408_; 
v_res_3408_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0(v_context_3405_, v_bytes_3406_);
lean_dec_ref(v_bytes_3406_);
lean_dec_ref(v_context_3405_);
return v_res_3408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0(lean_object* v_o_3409_, lean_object* v_key_3410_){
_start:
{
lean_object* v_k_3412_; lean_object* v___x_3413_; 
v_k_3412_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3412_, 0, v_key_3410_);
v___x_3413_ = l_Lasm_JS_Wire_encodeIO(v_k_3412_);
if (lean_obj_tag(v___x_3413_) == 0)
{
lean_object* v_a_3414_; uint32_t v___x_3415_; uint32_t v___x_3416_; uint64_t v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; 
v_a_3414_ = lean_ctor_get(v___x_3413_, 0);
lean_inc(v_a_3414_);
lean_dec_ref_known(v___x_3413_, 1);
v___x_3415_ = 203;
v___x_3416_ = lasm_js_value_handle(v_o_3409_);
v___x_3417_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
v___x_3418_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_3419_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3419_, 0, v_o_3409_);
lean_ctor_set(v___x_3419_, 1, v___x_3418_);
v___x_3420_ = lean_unsigned_to_nat(2u);
v___x_3421_ = lean_mk_empty_array_with_capacity(v___x_3420_);
lean_inc_ref(v_k_3412_);
v___x_3422_ = lean_array_push(v___x_3421_, v_k_3412_);
v___x_3423_ = lean_array_push(v___x_3422_, v___x_3419_);
v___x_3424_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3424_, 0, v___x_3423_);
v___x_3425_ = lasm_js_call(v___x_3415_, v___x_3416_, v___x_3417_, v_a_3414_, v___x_3424_);
lean_dec_ref_known(v___x_3424_, 1);
lean_dec(v_a_3414_);
if (lean_obj_tag(v___x_3425_) == 0)
{
lean_object* v_a_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v_a_3426_ = lean_ctor_get(v___x_3425_, 0);
lean_inc(v_a_3426_);
lean_dec_ref_known(v___x_3425_, 1);
v___x_3427_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__1));
v___x_3428_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3412_);
v___x_3429_ = lean_string_append(v___x_3427_, v___x_3428_);
lean_dec_ref(v___x_3428_);
v___x_3430_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0(v___x_3429_, v_a_3426_);
lean_dec(v_a_3426_);
lean_dec_ref(v___x_3429_);
return v___x_3430_;
}
else
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3438_; 
lean_dec_ref_known(v_k_3412_, 1);
v_a_3431_ = lean_ctor_get(v___x_3425_, 0);
v_isSharedCheck_3438_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3438_ == 0)
{
v___x_3433_ = v___x_3425_;
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v___x_3425_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3436_; 
if (v_isShared_3434_ == 0)
{
v___x_3436_ = v___x_3433_;
goto v_reusejp_3435_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v_a_3431_);
v___x_3436_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
return v___x_3436_;
}
}
}
}
else
{
lean_object* v_a_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3446_; 
lean_dec_ref_known(v_k_3412_, 1);
lean_dec(v_o_3409_);
v_a_3439_ = lean_ctor_get(v___x_3413_, 0);
v_isSharedCheck_3446_ = !lean_is_exclusive(v___x_3413_);
if (v_isSharedCheck_3446_ == 0)
{
v___x_3441_ = v___x_3413_;
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_a_3439_);
lean_dec(v___x_3413_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3444_; 
if (v_isShared_3442_ == 0)
{
v___x_3444_ = v___x_3441_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v_a_3439_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
return v___x_3444_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0___boxed(lean_object* v_o_3447_, lean_object* v_key_3448_, lean_object* v_a_3449_){
_start:
{
lean_object* v_res_3450_; 
v_res_3450_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0(v_o_3447_, v_key_3448_);
return v_res_3450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_value(lean_object* v_self_3451_){
_start:
{
lean_object* v___x_3453_; lean_object* v___x_3454_; 
v___x_3453_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_3454_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0(v_self_3451_, v___x_3453_);
return v___x_3454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_value___boxed(lean_object* v_self_3455_, lean_object* v_a_3456_){
_start:
{
lean_object* v_res_3457_; 
v_res_3457_ = l_Lasm_JS_Deno_KvU64_value(v_self_3455_);
return v_res_3457_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(size_t v_sz_3458_, size_t v_i_3459_, lean_object* v_bs_3460_){
_start:
{
uint8_t v___x_3461_; 
v___x_3461_ = lean_usize_dec_lt(v_i_3459_, v_sz_3458_);
if (v___x_3461_ == 0)
{
return v_bs_3460_;
}
else
{
lean_object* v_v_3462_; lean_object* v___x_3463_; lean_object* v_bs_x27_3464_; lean_object* v___y_3466_; 
v_v_3462_ = lean_array_uget(v_bs_3460_, v_i_3459_);
v___x_3463_ = lean_unsigned_to_nat(0u);
v_bs_x27_3464_ = lean_array_uset(v_bs_3460_, v_i_3459_, v___x_3463_);
switch(lean_obj_tag(v_v_3462_))
{
case 0:
{
lean_object* v_value_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3478_; 
v_value_3471_ = lean_ctor_get(v_v_3462_, 0);
v_isSharedCheck_3478_ = !lean_is_exclusive(v_v_3462_);
if (v_isSharedCheck_3478_ == 0)
{
v___x_3473_ = v_v_3462_;
v_isShared_3474_ = v_isSharedCheck_3478_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_value_3471_);
lean_dec(v_v_3462_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3478_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v___x_3476_; 
if (v_isShared_3474_ == 0)
{
lean_ctor_set_tag(v___x_3473_, 6);
v___x_3476_ = v___x_3473_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v_value_3471_);
v___x_3476_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
v___y_3466_ = v___x_3476_;
goto v___jp_3465_;
}
}
}
case 1:
{
lean_object* v_value_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3486_; 
v_value_3479_ = lean_ctor_get(v_v_3462_, 0);
v_isSharedCheck_3486_ = !lean_is_exclusive(v_v_3462_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3481_ = v_v_3462_;
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_value_3479_);
lean_dec(v_v_3462_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___x_3484_; 
if (v_isShared_3482_ == 0)
{
lean_ctor_set_tag(v___x_3481_, 4);
v___x_3484_ = v___x_3481_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v_value_3479_);
v___x_3484_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
v___y_3466_ = v___x_3484_;
goto v___jp_3465_;
}
}
}
case 2:
{
double v_value_3487_; lean_object* v___x_3489_; uint8_t v_isShared_3490_; uint8_t v_isSharedCheck_3494_; 
v_value_3487_ = lean_ctor_get_float(v_v_3462_, 0);
v_isSharedCheck_3494_ = !lean_is_exclusive(v_v_3462_);
if (v_isSharedCheck_3494_ == 0)
{
v___x_3489_ = v_v_3462_;
v_isShared_3490_ = v_isSharedCheck_3494_;
goto v_resetjp_3488_;
}
else
{
lean_dec(v_v_3462_);
v___x_3489_ = lean_box(0);
v_isShared_3490_ = v_isSharedCheck_3494_;
goto v_resetjp_3488_;
}
v_resetjp_3488_:
{
lean_object* v___x_3492_; 
if (v_isShared_3490_ == 0)
{
lean_ctor_set_tag(v___x_3489_, 3);
v___x_3492_ = v___x_3489_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_3493_, 0, v_value_3487_);
v___x_3492_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
v___y_3466_ = v___x_3492_;
goto v___jp_3465_;
}
}
}
case 3:
{
lean_object* v_value_3495_; lean_object* v___x_3497_; uint8_t v_isShared_3498_; uint8_t v_isSharedCheck_3502_; 
v_value_3495_ = lean_ctor_get(v_v_3462_, 0);
v_isSharedCheck_3502_ = !lean_is_exclusive(v_v_3462_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3497_ = v_v_3462_;
v_isShared_3498_ = v_isSharedCheck_3502_;
goto v_resetjp_3496_;
}
else
{
lean_inc(v_value_3495_);
lean_dec(v_v_3462_);
v___x_3497_ = lean_box(0);
v_isShared_3498_ = v_isSharedCheck_3502_;
goto v_resetjp_3496_;
}
v_resetjp_3496_:
{
lean_object* v___x_3500_; 
if (v_isShared_3498_ == 0)
{
lean_ctor_set_tag(v___x_3497_, 5);
v___x_3500_ = v___x_3497_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v_value_3495_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
v___y_3466_ = v___x_3500_;
goto v___jp_3465_;
}
}
}
default: 
{
uint8_t v_value_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3510_; 
v_value_3503_ = lean_ctor_get_uint8(v_v_3462_, 0);
v_isSharedCheck_3510_ = !lean_is_exclusive(v_v_3462_);
if (v_isSharedCheck_3510_ == 0)
{
v___x_3505_ = v_v_3462_;
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
else
{
lean_dec(v_v_3462_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3508_; 
if (v_isShared_3506_ == 0)
{
lean_ctor_set_tag(v___x_3505_, 2);
v___x_3508_ = v___x_3505_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_3509_, 0, v_value_3503_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
v___y_3466_ = v___x_3508_;
goto v___jp_3465_;
}
}
}
}
v___jp_3465_:
{
size_t v___x_3467_; size_t v___x_3468_; lean_object* v___x_3469_; 
v___x_3467_ = ((size_t)1ULL);
v___x_3468_ = lean_usize_add(v_i_3459_, v___x_3467_);
v___x_3469_ = lean_array_uset(v_bs_x27_3464_, v_i_3459_, v___y_3466_);
v_i_3459_ = v___x_3468_;
v_bs_3460_ = v___x_3469_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0___boxed(lean_object* v_sz_3511_, lean_object* v_i_3512_, lean_object* v_bs_3513_){
_start:
{
size_t v_sz_boxed_3514_; size_t v_i_boxed_3515_; lean_object* v_res_3516_; 
v_sz_boxed_3514_ = lean_unbox_usize(v_sz_3511_);
lean_dec(v_sz_3511_);
v_i_boxed_3515_ = lean_unbox_usize(v_i_3512_);
lean_dec(v_i_3512_);
v_res_3516_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_boxed_3514_, v_i_boxed_3515_, v_bs_3513_);
return v_res_3516_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1(size_t v_sz_3517_, size_t v_i_3518_, lean_object* v_bs_3519_){
_start:
{
uint8_t v___x_3520_; 
v___x_3520_ = lean_usize_dec_lt(v_i_3518_, v_sz_3517_);
if (v___x_3520_ == 0)
{
return v_bs_3519_;
}
else
{
lean_object* v_v_3521_; lean_object* v_key_3522_; lean_object* v_versionstamp_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3559_; 
v_v_3521_ = lean_array_uget(v_bs_3519_, v_i_3518_);
v_key_3522_ = lean_ctor_get(v_v_3521_, 0);
v_versionstamp_3523_ = lean_ctor_get(v_v_3521_, 1);
v_isSharedCheck_3559_ = !lean_is_exclusive(v_v_3521_);
if (v_isSharedCheck_3559_ == 0)
{
v___x_3525_ = v_v_3521_;
v_isShared_3526_ = v_isSharedCheck_3559_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_versionstamp_3523_);
lean_inc(v_key_3522_);
lean_dec(v_v_3521_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3559_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
lean_object* v___x_3527_; lean_object* v_bs_x27_3528_; lean_object* v___x_3529_; size_t v_sz_3530_; size_t v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3535_; 
v___x_3527_ = lean_unsigned_to_nat(0u);
v_bs_x27_3528_ = lean_array_uset(v_bs_3519_, v_i_3518_, v___x_3527_);
v___x_3529_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v_sz_3530_ = lean_array_size(v_key_3522_);
v___x_3531_ = ((size_t)0ULL);
v___x_3532_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3530_, v___x_3531_, v_key_3522_);
v___x_3533_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3532_);
if (v_isShared_3526_ == 0)
{
lean_ctor_set(v___x_3525_, 1, v___x_3533_);
lean_ctor_set(v___x_3525_, 0, v___x_3529_);
v___x_3535_ = v___x_3525_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v___x_3529_);
lean_ctor_set(v_reuseFailAlloc_3558_, 1, v___x_3533_);
v___x_3535_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
lean_object* v___x_3536_; lean_object* v___y_3538_; 
v___x_3536_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
if (lean_obj_tag(v_versionstamp_3523_) == 0)
{
lean_object* v___x_3549_; 
v___x_3549_ = lean_box(1);
v___y_3538_ = v___x_3549_;
goto v___jp_3537_;
}
else
{
lean_object* v_val_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3557_; 
v_val_3550_ = lean_ctor_get(v_versionstamp_3523_, 0);
v_isSharedCheck_3557_ = !lean_is_exclusive(v_versionstamp_3523_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3552_ = v_versionstamp_3523_;
v_isShared_3553_ = v_isSharedCheck_3557_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_val_3550_);
lean_dec(v_versionstamp_3523_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3557_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___x_3555_; 
if (v_isShared_3553_ == 0)
{
lean_ctor_set_tag(v___x_3552_, 4);
v___x_3555_ = v___x_3552_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v_val_3550_);
v___x_3555_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
v___y_3538_ = v___x_3555_;
goto v___jp_3537_;
}
}
}
v___jp_3537_:
{
lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; size_t v___x_3545_; size_t v___x_3546_; lean_object* v___x_3547_; 
v___x_3539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3536_);
lean_ctor_set(v___x_3539_, 1, v___y_3538_);
v___x_3540_ = lean_unsigned_to_nat(2u);
v___x_3541_ = lean_mk_empty_array_with_capacity(v___x_3540_);
v___x_3542_ = lean_array_push(v___x_3541_, v___x_3535_);
v___x_3543_ = lean_array_push(v___x_3542_, v___x_3539_);
v___x_3544_ = l_Lasm_JS_Web_Support_fields(v___x_3543_);
lean_dec_ref(v___x_3543_);
v___x_3545_ = ((size_t)1ULL);
v___x_3546_ = lean_usize_add(v_i_3518_, v___x_3545_);
v___x_3547_ = lean_array_uset(v_bs_x27_3528_, v_i_3518_, v___x_3544_);
v_i_3518_ = v___x_3546_;
v_bs_3519_ = v___x_3547_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1___boxed(lean_object* v_sz_3560_, lean_object* v_i_3561_, lean_object* v_bs_3562_){
_start:
{
size_t v_sz_boxed_3563_; size_t v_i_boxed_3564_; lean_object* v_res_3565_; 
v_sz_boxed_3563_ = lean_unbox_usize(v_sz_3560_);
lean_dec(v_sz_3560_);
v_i_boxed_3564_ = lean_unbox_usize(v_i_3561_);
lean_dec(v_i_3561_);
v_res_3565_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1(v_sz_boxed_3563_, v_i_boxed_3564_, v_bs_3562_);
return v_res_3565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_check(lean_object* v_self_3567_, lean_object* v_checks_3568_){
_start:
{
lean_object* v___x_3570_; lean_object* v___x_3571_; size_t v_sz_3572_; size_t v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3570_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_check___closed__0));
v___x_3571_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v_sz_3572_ = lean_array_size(v_checks_3568_);
v___x_3573_ = ((size_t)0ULL);
v___x_3574_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1(v_sz_3572_, v___x_3573_, v_checks_3568_);
v___x_3575_ = l_Lasm_JS_Web_Support_argsWith(v___x_3571_, v___x_3574_);
lean_dec_ref(v___x_3574_);
v___x_3576_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3567_, v___x_3570_, v___x_3575_);
if (lean_obj_tag(v___x_3576_) == 0)
{
lean_object* v_a_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3584_; 
v_a_3577_ = lean_ctor_get(v___x_3576_, 0);
v_isSharedCheck_3584_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3579_ = v___x_3576_;
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_a_3577_);
lean_dec(v___x_3576_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3582_; 
if (v_isShared_3580_ == 0)
{
v___x_3582_ = v___x_3579_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v_a_3577_);
v___x_3582_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
return v___x_3582_;
}
}
}
else
{
lean_object* v_a_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3592_; 
v_a_3585_ = lean_ctor_get(v___x_3576_, 0);
v_isSharedCheck_3592_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3592_ == 0)
{
v___x_3587_ = v___x_3576_;
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_a_3585_);
lean_dec(v___x_3576_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3592_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3590_; 
if (v_isShared_3588_ == 0)
{
v___x_3590_ = v___x_3587_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v_a_3585_);
v___x_3590_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
return v___x_3590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_check___boxed(lean_object* v_self_3593_, lean_object* v_checks_3594_, lean_object* v_a_3595_){
_start:
{
lean_object* v_res_3596_; 
v_res_3596_ = l_Lasm_JS_Deno_AtomicOperation_check(v_self_3593_, v_checks_3594_);
return v_res_3596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0(size_t v_sz_3597_, size_t v_i_3598_, lean_object* v_bs_3599_){
_start:
{
uint8_t v___x_3600_; 
v___x_3600_ = lean_usize_dec_lt(v_i_3598_, v_sz_3597_);
if (v___x_3600_ == 0)
{
return v_bs_3599_;
}
else
{
lean_object* v_v_3601_; lean_object* v_key_3602_; uint8_t v_type_3603_; lean_object* v_value_3604_; lean_object* v_expireIn_3605_; lean_object* v___x_3606_; lean_object* v_bs_x27_3607_; lean_object* v___x_3608_; size_t v_sz_3609_; size_t v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___y_3616_; 
v_v_3601_ = lean_array_uget_borrowed(v_bs_3599_, v_i_3598_);
v_key_3602_ = lean_ctor_get(v_v_3601_, 0);
lean_inc_ref(v_key_3602_);
v_type_3603_ = lean_ctor_get_uint8(v_v_3601_, sizeof(void*)*3);
v_value_3604_ = lean_ctor_get(v_v_3601_, 1);
lean_inc(v_value_3604_);
v_expireIn_3605_ = lean_ctor_get(v_v_3601_, 2);
lean_inc(v_expireIn_3605_);
v___x_3606_ = lean_unsigned_to_nat(0u);
v_bs_x27_3607_ = lean_array_uset(v_bs_3599_, v_i_3598_, v___x_3606_);
v___x_3608_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v_sz_3609_ = lean_array_size(v_key_3602_);
v___x_3610_ = ((size_t)0ULL);
v___x_3611_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3609_, v___x_3610_, v_key_3602_);
v___x_3612_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3612_, 0, v___x_3611_);
v___x_3613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3613_, 0, v___x_3608_);
lean_ctor_set(v___x_3613_, 1, v___x_3612_);
v___x_3614_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__0));
switch(v_type_3603_)
{
case 0:
{
lean_object* v___x_3634_; 
v___x_3634_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__1));
v___y_3616_ = v___x_3634_;
goto v___jp_3615_;
}
case 1:
{
lean_object* v___x_3635_; 
v___x_3635_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__3));
v___y_3616_ = v___x_3635_;
goto v___jp_3615_;
}
case 2:
{
lean_object* v___x_3636_; 
v___x_3636_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__5));
v___y_3616_ = v___x_3636_;
goto v___jp_3615_;
}
case 3:
{
lean_object* v___x_3637_; 
v___x_3637_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__7));
v___y_3616_ = v___x_3637_;
goto v___jp_3615_;
}
default: 
{
lean_object* v___x_3638_; 
v___x_3638_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__9));
v___y_3616_ = v___x_3638_;
goto v___jp_3615_;
}
}
v___jp_3615_:
{
lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; size_t v___x_3630_; size_t v___x_3631_; lean_object* v___x_3632_; 
lean_inc(v___y_3616_);
v___x_3617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3617_, 0, v___x_3614_);
lean_ctor_set(v___x_3617_, 1, v___y_3616_);
v___x_3618_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_3619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3618_);
lean_ctor_set(v___x_3619_, 1, v_value_3604_);
v___x_3620_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_3621_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_expireIn_3605_);
lean_dec(v_expireIn_3605_);
v___x_3622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3622_, 0, v___x_3620_);
lean_ctor_set(v___x_3622_, 1, v___x_3621_);
v___x_3623_ = lean_unsigned_to_nat(4u);
v___x_3624_ = lean_mk_empty_array_with_capacity(v___x_3623_);
v___x_3625_ = lean_array_push(v___x_3624_, v___x_3613_);
v___x_3626_ = lean_array_push(v___x_3625_, v___x_3617_);
v___x_3627_ = lean_array_push(v___x_3626_, v___x_3619_);
v___x_3628_ = lean_array_push(v___x_3627_, v___x_3622_);
v___x_3629_ = l_Lasm_JS_Web_Support_fields(v___x_3628_);
lean_dec_ref(v___x_3628_);
v___x_3630_ = ((size_t)1ULL);
v___x_3631_ = lean_usize_add(v_i_3598_, v___x_3630_);
v___x_3632_ = lean_array_uset(v_bs_x27_3607_, v_i_3598_, v___x_3629_);
v_i_3598_ = v___x_3631_;
v_bs_3599_ = v___x_3632_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0___boxed(lean_object* v_sz_3639_, lean_object* v_i_3640_, lean_object* v_bs_3641_){
_start:
{
size_t v_sz_boxed_3642_; size_t v_i_boxed_3643_; lean_object* v_res_3644_; 
v_sz_boxed_3642_ = lean_unbox_usize(v_sz_3639_);
lean_dec(v_sz_3639_);
v_i_boxed_3643_ = lean_unbox_usize(v_i_3640_);
lean_dec(v_i_3640_);
v_res_3644_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0(v_sz_boxed_3642_, v_i_boxed_3643_, v_bs_3641_);
return v_res_3644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_mutate(lean_object* v_self_3646_, lean_object* v_mutations_3647_){
_start:
{
lean_object* v___x_3649_; lean_object* v___x_3650_; size_t v_sz_3651_; size_t v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; 
v___x_3649_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_mutate___closed__0));
v___x_3650_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v_sz_3651_ = lean_array_size(v_mutations_3647_);
v___x_3652_ = ((size_t)0ULL);
v___x_3653_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0(v_sz_3651_, v___x_3652_, v_mutations_3647_);
v___x_3654_ = l_Lasm_JS_Web_Support_argsWith(v___x_3650_, v___x_3653_);
lean_dec_ref(v___x_3653_);
v___x_3655_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3646_, v___x_3649_, v___x_3654_);
if (lean_obj_tag(v___x_3655_) == 0)
{
lean_object* v_a_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3663_; 
v_a_3656_ = lean_ctor_get(v___x_3655_, 0);
v_isSharedCheck_3663_ = !lean_is_exclusive(v___x_3655_);
if (v_isSharedCheck_3663_ == 0)
{
v___x_3658_ = v___x_3655_;
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_a_3656_);
lean_dec(v___x_3655_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3661_; 
if (v_isShared_3659_ == 0)
{
v___x_3661_ = v___x_3658_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v_a_3656_);
v___x_3661_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
return v___x_3661_;
}
}
}
else
{
lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3671_; 
v_a_3664_ = lean_ctor_get(v___x_3655_, 0);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3655_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3666_ = v___x_3655_;
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3655_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3669_; 
if (v_isShared_3667_ == 0)
{
v___x_3669_ = v___x_3666_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v_a_3664_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_mutate___boxed(lean_object* v_self_3672_, lean_object* v_mutations_3673_, lean_object* v_a_3674_){
_start:
{
lean_object* v_res_3675_; 
v_res_3675_ = l_Lasm_JS_Deno_AtomicOperation_mutate(v_self_3672_, v_mutations_3673_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_sum(lean_object* v_self_3676_, lean_object* v_key_3677_, lean_object* v_n_3678_){
_start:
{
lean_object* v___x_3680_; size_t v_sz_3681_; size_t v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; 
v___x_3680_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__4));
v_sz_3681_ = lean_array_size(v_key_3677_);
v___x_3682_ = ((size_t)0ULL);
v___x_3683_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3681_, v___x_3682_, v_key_3677_);
v___x_3684_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3684_, 0, v___x_3683_);
v___x_3685_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3685_, 0, v_n_3678_);
v___x_3686_ = lean_unsigned_to_nat(2u);
v___x_3687_ = lean_mk_empty_array_with_capacity(v___x_3686_);
v___x_3688_ = lean_array_push(v___x_3687_, v___x_3684_);
v___x_3689_ = lean_array_push(v___x_3688_, v___x_3685_);
v___x_3690_ = l_Lasm_JS_Web_Support_args(v___x_3689_);
v___x_3691_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3676_, v___x_3680_, v___x_3690_);
if (lean_obj_tag(v___x_3691_) == 0)
{
lean_object* v_a_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3699_; 
v_a_3692_ = lean_ctor_get(v___x_3691_, 0);
v_isSharedCheck_3699_ = !lean_is_exclusive(v___x_3691_);
if (v_isSharedCheck_3699_ == 0)
{
v___x_3694_ = v___x_3691_;
v_isShared_3695_ = v_isSharedCheck_3699_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_a_3692_);
lean_dec(v___x_3691_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3699_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v___x_3697_; 
if (v_isShared_3695_ == 0)
{
v___x_3697_ = v___x_3694_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v_a_3692_);
v___x_3697_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
return v___x_3697_;
}
}
}
else
{
lean_object* v_a_3700_; lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3707_; 
v_a_3700_ = lean_ctor_get(v___x_3691_, 0);
v_isSharedCheck_3707_ = !lean_is_exclusive(v___x_3691_);
if (v_isSharedCheck_3707_ == 0)
{
v___x_3702_ = v___x_3691_;
v_isShared_3703_ = v_isSharedCheck_3707_;
goto v_resetjp_3701_;
}
else
{
lean_inc(v_a_3700_);
lean_dec(v___x_3691_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3707_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
lean_object* v___x_3705_; 
if (v_isShared_3703_ == 0)
{
v___x_3705_ = v___x_3702_;
goto v_reusejp_3704_;
}
else
{
lean_object* v_reuseFailAlloc_3706_; 
v_reuseFailAlloc_3706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3706_, 0, v_a_3700_);
v___x_3705_ = v_reuseFailAlloc_3706_;
goto v_reusejp_3704_;
}
v_reusejp_3704_:
{
return v___x_3705_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_sum___boxed(lean_object* v_self_3708_, lean_object* v_key_3709_, lean_object* v_n_3710_, lean_object* v_a_3711_){
_start:
{
lean_object* v_res_3712_; 
v_res_3712_ = l_Lasm_JS_Deno_AtomicOperation_sum(v_self_3708_, v_key_3709_, v_n_3710_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_min(lean_object* v_self_3713_, lean_object* v_key_3714_, lean_object* v_n_3715_){
_start:
{
lean_object* v___x_3717_; size_t v_sz_3718_; size_t v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; 
v___x_3717_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__8));
v_sz_3718_ = lean_array_size(v_key_3714_);
v___x_3719_ = ((size_t)0ULL);
v___x_3720_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3718_, v___x_3719_, v_key_3714_);
v___x_3721_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3721_, 0, v___x_3720_);
v___x_3722_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3722_, 0, v_n_3715_);
v___x_3723_ = lean_unsigned_to_nat(2u);
v___x_3724_ = lean_mk_empty_array_with_capacity(v___x_3723_);
v___x_3725_ = lean_array_push(v___x_3724_, v___x_3721_);
v___x_3726_ = lean_array_push(v___x_3725_, v___x_3722_);
v___x_3727_ = l_Lasm_JS_Web_Support_args(v___x_3726_);
v___x_3728_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3713_, v___x_3717_, v___x_3727_);
if (lean_obj_tag(v___x_3728_) == 0)
{
lean_object* v_a_3729_; lean_object* v___x_3731_; uint8_t v_isShared_3732_; uint8_t v_isSharedCheck_3736_; 
v_a_3729_ = lean_ctor_get(v___x_3728_, 0);
v_isSharedCheck_3736_ = !lean_is_exclusive(v___x_3728_);
if (v_isSharedCheck_3736_ == 0)
{
v___x_3731_ = v___x_3728_;
v_isShared_3732_ = v_isSharedCheck_3736_;
goto v_resetjp_3730_;
}
else
{
lean_inc(v_a_3729_);
lean_dec(v___x_3728_);
v___x_3731_ = lean_box(0);
v_isShared_3732_ = v_isSharedCheck_3736_;
goto v_resetjp_3730_;
}
v_resetjp_3730_:
{
lean_object* v___x_3734_; 
if (v_isShared_3732_ == 0)
{
v___x_3734_ = v___x_3731_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v_a_3729_);
v___x_3734_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
return v___x_3734_;
}
}
}
else
{
lean_object* v_a_3737_; lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3744_; 
v_a_3737_ = lean_ctor_get(v___x_3728_, 0);
v_isSharedCheck_3744_ = !lean_is_exclusive(v___x_3728_);
if (v_isSharedCheck_3744_ == 0)
{
v___x_3739_ = v___x_3728_;
v_isShared_3740_ = v_isSharedCheck_3744_;
goto v_resetjp_3738_;
}
else
{
lean_inc(v_a_3737_);
lean_dec(v___x_3728_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3744_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
lean_object* v___x_3742_; 
if (v_isShared_3740_ == 0)
{
v___x_3742_ = v___x_3739_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v_a_3737_);
v___x_3742_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
return v___x_3742_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_min___boxed(lean_object* v_self_3745_, lean_object* v_key_3746_, lean_object* v_n_3747_, lean_object* v_a_3748_){
_start:
{
lean_object* v_res_3749_; 
v_res_3749_ = l_Lasm_JS_Deno_AtomicOperation_min(v_self_3745_, v_key_3746_, v_n_3747_);
return v_res_3749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_max(lean_object* v_self_3750_, lean_object* v_key_3751_, lean_object* v_n_3752_){
_start:
{
lean_object* v___x_3754_; size_t v_sz_3755_; size_t v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3754_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__6));
v_sz_3755_ = lean_array_size(v_key_3751_);
v___x_3756_ = ((size_t)0ULL);
v___x_3757_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3755_, v___x_3756_, v_key_3751_);
v___x_3758_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3757_);
v___x_3759_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3759_, 0, v_n_3752_);
v___x_3760_ = lean_unsigned_to_nat(2u);
v___x_3761_ = lean_mk_empty_array_with_capacity(v___x_3760_);
v___x_3762_ = lean_array_push(v___x_3761_, v___x_3758_);
v___x_3763_ = lean_array_push(v___x_3762_, v___x_3759_);
v___x_3764_ = l_Lasm_JS_Web_Support_args(v___x_3763_);
v___x_3765_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3750_, v___x_3754_, v___x_3764_);
if (lean_obj_tag(v___x_3765_) == 0)
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3773_; 
v_a_3766_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3768_ = v___x_3765_;
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3765_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3771_; 
if (v_isShared_3769_ == 0)
{
v___x_3771_ = v___x_3768_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v_a_3766_);
v___x_3771_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
return v___x_3771_;
}
}
}
else
{
lean_object* v_a_3774_; lean_object* v___x_3776_; uint8_t v_isShared_3777_; uint8_t v_isSharedCheck_3781_; 
v_a_3774_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3781_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3781_ == 0)
{
v___x_3776_ = v___x_3765_;
v_isShared_3777_ = v_isSharedCheck_3781_;
goto v_resetjp_3775_;
}
else
{
lean_inc(v_a_3774_);
lean_dec(v___x_3765_);
v___x_3776_ = lean_box(0);
v_isShared_3777_ = v_isSharedCheck_3781_;
goto v_resetjp_3775_;
}
v_resetjp_3775_:
{
lean_object* v___x_3779_; 
if (v_isShared_3777_ == 0)
{
v___x_3779_ = v___x_3776_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v_a_3774_);
v___x_3779_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
return v___x_3779_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_max___boxed(lean_object* v_self_3782_, lean_object* v_key_3783_, lean_object* v_n_3784_, lean_object* v_a_3785_){
_start:
{
lean_object* v_res_3786_; 
v_res_3786_ = l_Lasm_JS_Deno_AtomicOperation_max(v_self_3782_, v_key_3783_, v_n_3784_);
return v_res_3786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0(lean_object* v_x_3787_){
_start:
{
if (lean_obj_tag(v_x_3787_) == 0)
{
lean_object* v___x_3788_; 
v___x_3788_ = lean_box(0);
return v___x_3788_;
}
else
{
lean_object* v_val_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; 
v_val_3789_ = lean_ctor_get(v_x_3787_, 0);
v___x_3790_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_3791_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_val_3789_);
v___x_3792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3792_, 0, v___x_3790_);
lean_ctor_set(v___x_3792_, 1, v___x_3791_);
v___x_3793_ = lean_unsigned_to_nat(1u);
v___x_3794_ = lean_mk_empty_array_with_capacity(v___x_3793_);
v___x_3795_ = lean_array_push(v___x_3794_, v___x_3792_);
v___x_3796_ = l_Lasm_JS_Web_Support_fields(v___x_3795_);
lean_dec_ref(v___x_3795_);
return v___x_3796_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0___boxed(lean_object* v_x_3797_){
_start:
{
lean_object* v_res_3798_; 
v_res_3798_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0(v_x_3797_);
lean_dec(v_x_3797_);
return v_res_3798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_set(lean_object* v_self_3799_, lean_object* v_key_3800_, lean_object* v_value_3801_, lean_object* v_options_3802_){
_start:
{
lean_object* v___x_3804_; size_t v_sz_3805_; size_t v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; 
v___x_3804_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__0));
v_sz_3805_ = lean_array_size(v_key_3800_);
v___x_3806_ = ((size_t)0ULL);
v___x_3807_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3805_, v___x_3806_, v_key_3800_);
v___x_3808_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3807_);
v___x_3809_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0(v_options_3802_);
v___x_3810_ = lean_unsigned_to_nat(3u);
v___x_3811_ = lean_mk_empty_array_with_capacity(v___x_3810_);
v___x_3812_ = lean_array_push(v___x_3811_, v___x_3808_);
v___x_3813_ = lean_array_push(v___x_3812_, v_value_3801_);
v___x_3814_ = lean_array_push(v___x_3813_, v___x_3809_);
v___x_3815_ = l_Lasm_JS_Web_Support_args(v___x_3814_);
v___x_3816_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3799_, v___x_3804_, v___x_3815_);
if (lean_obj_tag(v___x_3816_) == 0)
{
lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3824_; 
v_a_3817_ = lean_ctor_get(v___x_3816_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3816_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3819_ = v___x_3816_;
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_dec(v___x_3816_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3817_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
else
{
lean_object* v_a_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3832_; 
v_a_3825_ = lean_ctor_get(v___x_3816_, 0);
v_isSharedCheck_3832_ = !lean_is_exclusive(v___x_3816_);
if (v_isSharedCheck_3832_ == 0)
{
v___x_3827_ = v___x_3816_;
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_a_3825_);
lean_dec(v___x_3816_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3830_; 
if (v_isShared_3828_ == 0)
{
v___x_3830_ = v___x_3827_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v_a_3825_);
v___x_3830_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
return v___x_3830_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_set___boxed(lean_object* v_self_3833_, lean_object* v_key_3834_, lean_object* v_value_3835_, lean_object* v_options_3836_, lean_object* v_a_3837_){
_start:
{
lean_object* v_res_3838_; 
v_res_3838_ = l_Lasm_JS_Deno_AtomicOperation_set(v_self_3833_, v_key_3834_, v_value_3835_, v_options_3836_);
lean_dec(v_options_3836_);
return v_res_3838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_delete(lean_object* v_self_3839_, lean_object* v_key_3840_){
_start:
{
lean_object* v___x_3842_; size_t v_sz_3843_; size_t v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; 
v___x_3842_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__2));
v_sz_3843_ = lean_array_size(v_key_3840_);
v___x_3844_ = ((size_t)0ULL);
v___x_3845_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3843_, v___x_3844_, v_key_3840_);
v___x_3846_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3845_);
v___x_3847_ = lean_unsigned_to_nat(1u);
v___x_3848_ = lean_mk_empty_array_with_capacity(v___x_3847_);
v___x_3849_ = lean_array_push(v___x_3848_, v___x_3846_);
v___x_3850_ = l_Lasm_JS_Web_Support_args(v___x_3849_);
v___x_3851_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3839_, v___x_3842_, v___x_3850_);
if (lean_obj_tag(v___x_3851_) == 0)
{
lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
v_a_3852_ = lean_ctor_get(v___x_3851_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3851_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3854_ = v___x_3851_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v___x_3851_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3857_; 
if (v_isShared_3855_ == 0)
{
v___x_3857_ = v___x_3854_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3852_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
else
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3867_; 
v_a_3860_ = lean_ctor_get(v___x_3851_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v___x_3851_);
if (v_isSharedCheck_3867_ == 0)
{
v___x_3862_ = v___x_3851_;
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v___x_3851_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3865_; 
if (v_isShared_3863_ == 0)
{
v___x_3865_ = v___x_3862_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v_a_3860_);
v___x_3865_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
return v___x_3865_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_delete___boxed(lean_object* v_self_3868_, lean_object* v_key_3869_, lean_object* v_a_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l_Lasm_JS_Deno_AtomicOperation_delete(v_self_3868_, v_key_3869_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(size_t v_sz_3872_, size_t v_i_3873_, lean_object* v_bs_3874_){
_start:
{
uint8_t v___x_3875_; 
v___x_3875_ = lean_usize_dec_lt(v_i_3873_, v_sz_3872_);
if (v___x_3875_ == 0)
{
return v_bs_3874_;
}
else
{
lean_object* v_v_3876_; lean_object* v___x_3877_; lean_object* v_bs_x27_3878_; lean_object* v___x_3879_; double v___x_3880_; size_t v___x_3881_; size_t v___x_3882_; lean_object* v___x_3883_; 
v_v_3876_ = lean_array_uget(v_bs_3874_, v_i_3873_);
v___x_3877_ = lean_unsigned_to_nat(0u);
v_bs_x27_3878_ = lean_array_uset(v_bs_3874_, v_i_3873_, v___x_3877_);
v___x_3879_ = lean_alloc_ctor(3, 0, 8);
v___x_3880_ = lean_unbox_float(v_v_3876_);
lean_dec(v_v_3876_);
lean_ctor_set_float(v___x_3879_, 0, v___x_3880_);
v___x_3881_ = ((size_t)1ULL);
v___x_3882_ = lean_usize_add(v_i_3873_, v___x_3881_);
v___x_3883_ = lean_array_uset(v_bs_x27_3878_, v_i_3873_, v___x_3879_);
v_i_3873_ = v___x_3882_;
v_bs_3874_ = v___x_3883_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3___boxed(lean_object* v_sz_3885_, lean_object* v_i_3886_, lean_object* v_bs_3887_){
_start:
{
size_t v_sz_boxed_3888_; size_t v_i_boxed_3889_; lean_object* v_res_3890_; 
v_sz_boxed_3888_ = lean_unbox_usize(v_sz_3885_);
lean_dec(v_sz_3885_);
v_i_boxed_3889_ = lean_unbox_usize(v_i_3886_);
lean_dec(v_i_3886_);
v_res_3890_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(v_sz_boxed_3888_, v_i_boxed_3889_, v_bs_3887_);
return v_res_3890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(lean_object* v_x_3891_){
_start:
{
if (lean_obj_tag(v_x_3891_) == 0)
{
lean_object* v___x_3892_; 
v___x_3892_ = lean_box(0);
return v___x_3892_;
}
else
{
lean_object* v_val_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3903_; 
v_val_3893_ = lean_ctor_get(v_x_3891_, 0);
v_isSharedCheck_3903_ = !lean_is_exclusive(v_x_3891_);
if (v_isSharedCheck_3903_ == 0)
{
v___x_3895_ = v_x_3891_;
v_isShared_3896_ = v_isSharedCheck_3903_;
goto v_resetjp_3894_;
}
else
{
lean_inc(v_val_3893_);
lean_dec(v_x_3891_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3903_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
size_t v_sz_3897_; size_t v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3901_; 
v_sz_3897_ = lean_array_size(v_val_3893_);
v___x_3898_ = ((size_t)0ULL);
v___x_3899_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(v_sz_3897_, v___x_3898_, v_val_3893_);
if (v_isShared_3896_ == 0)
{
lean_ctor_set_tag(v___x_3895_, 7);
lean_ctor_set(v___x_3895_, 0, v___x_3899_);
v___x_3901_ = v___x_3895_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v___x_3899_);
v___x_3901_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
return v___x_3901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(size_t v_sz_3904_, size_t v_i_3905_, lean_object* v_bs_3906_){
_start:
{
uint8_t v___x_3907_; 
v___x_3907_ = lean_usize_dec_lt(v_i_3905_, v_sz_3904_);
if (v___x_3907_ == 0)
{
return v_bs_3906_;
}
else
{
lean_object* v_v_3908_; lean_object* v___x_3909_; lean_object* v_bs_x27_3910_; size_t v_sz_3911_; size_t v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; size_t v___x_3915_; size_t v___x_3916_; lean_object* v___x_3917_; 
v_v_3908_ = lean_array_uget(v_bs_3906_, v_i_3905_);
v___x_3909_ = lean_unsigned_to_nat(0u);
v_bs_x27_3910_ = lean_array_uset(v_bs_3906_, v_i_3905_, v___x_3909_);
v_sz_3911_ = lean_array_size(v_v_3908_);
v___x_3912_ = ((size_t)0ULL);
v___x_3913_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3911_, v___x_3912_, v_v_3908_);
v___x_3914_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3914_, 0, v___x_3913_);
v___x_3915_ = ((size_t)1ULL);
v___x_3916_ = lean_usize_add(v_i_3905_, v___x_3915_);
v___x_3917_ = lean_array_uset(v_bs_x27_3910_, v_i_3905_, v___x_3914_);
v_i_3905_ = v___x_3916_;
v_bs_3906_ = v___x_3917_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3919_, lean_object* v_i_3920_, lean_object* v_bs_3921_){
_start:
{
size_t v_sz_boxed_3922_; size_t v_i_boxed_3923_; lean_object* v_res_3924_; 
v_sz_boxed_3922_ = lean_unbox_usize(v_sz_3919_);
lean_dec(v_sz_3919_);
v_i_boxed_3923_ = lean_unbox_usize(v_i_3920_);
lean_dec(v_i_3920_);
v_res_3924_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(v_sz_boxed_3922_, v_i_boxed_3923_, v_bs_3921_);
return v_res_3924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0(lean_object* v_x_3925_){
_start:
{
if (lean_obj_tag(v_x_3925_) == 0)
{
lean_object* v___x_3926_; 
v___x_3926_ = lean_box(0);
return v___x_3926_;
}
else
{
lean_object* v_val_3927_; lean_object* v___x_3929_; uint8_t v_isShared_3930_; uint8_t v_isSharedCheck_3937_; 
v_val_3927_ = lean_ctor_get(v_x_3925_, 0);
v_isSharedCheck_3937_ = !lean_is_exclusive(v_x_3925_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3929_ = v_x_3925_;
v_isShared_3930_ = v_isSharedCheck_3937_;
goto v_resetjp_3928_;
}
else
{
lean_inc(v_val_3927_);
lean_dec(v_x_3925_);
v___x_3929_ = lean_box(0);
v_isShared_3930_ = v_isSharedCheck_3937_;
goto v_resetjp_3928_;
}
v_resetjp_3928_:
{
size_t v_sz_3931_; size_t v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3935_; 
v_sz_3931_ = lean_array_size(v_val_3927_);
v___x_3932_ = ((size_t)0ULL);
v___x_3933_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(v_sz_3931_, v___x_3932_, v_val_3927_);
if (v_isShared_3930_ == 0)
{
lean_ctor_set_tag(v___x_3929_, 7);
lean_ctor_set(v___x_3929_, 0, v___x_3933_);
v___x_3935_ = v___x_3929_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v___x_3933_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
return v___x_3935_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0(lean_object* v_x_3938_){
_start:
{
if (lean_obj_tag(v_x_3938_) == 0)
{
lean_object* v___x_3939_; 
v___x_3939_ = lean_box(0);
return v___x_3939_;
}
else
{
lean_object* v_val_3940_; lean_object* v_delay_3941_; lean_object* v_keysIfUndelivered_3942_; lean_object* v_backoffSchedule_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; 
v_val_3940_ = lean_ctor_get(v_x_3938_, 0);
lean_inc(v_val_3940_);
lean_dec_ref_known(v_x_3938_, 1);
v_delay_3941_ = lean_ctor_get(v_val_3940_, 0);
lean_inc(v_delay_3941_);
v_keysIfUndelivered_3942_ = lean_ctor_get(v_val_3940_, 1);
lean_inc(v_keysIfUndelivered_3942_);
v_backoffSchedule_3943_ = lean_ctor_get(v_val_3940_, 2);
lean_inc(v_backoffSchedule_3943_);
lean_dec(v_val_3940_);
v___x_3944_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0));
v___x_3945_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_delay_3941_);
lean_dec(v_delay_3941_);
v___x_3946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3946_, 0, v___x_3944_);
lean_ctor_set(v___x_3946_, 1, v___x_3945_);
v___x_3947_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1));
v___x_3948_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0(v_keysIfUndelivered_3942_);
v___x_3949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3947_);
lean_ctor_set(v___x_3949_, 1, v___x_3948_);
v___x_3950_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_3951_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(v_backoffSchedule_3943_);
v___x_3952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3950_);
lean_ctor_set(v___x_3952_, 1, v___x_3951_);
v___x_3953_ = lean_unsigned_to_nat(3u);
v___x_3954_ = lean_mk_empty_array_with_capacity(v___x_3953_);
v___x_3955_ = lean_array_push(v___x_3954_, v___x_3946_);
v___x_3956_ = lean_array_push(v___x_3955_, v___x_3949_);
v___x_3957_ = lean_array_push(v___x_3956_, v___x_3952_);
v___x_3958_ = l_Lasm_JS_Web_Support_fields(v___x_3957_);
lean_dec_ref(v___x_3957_);
return v___x_3958_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_enqueue(lean_object* v_self_3960_, lean_object* v_value_3961_, lean_object* v_options_3962_){
_start:
{
lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3964_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_enqueue___closed__0));
v___x_3965_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0(v_options_3962_);
v___x_3966_ = lean_unsigned_to_nat(2u);
v___x_3967_ = lean_mk_empty_array_with_capacity(v___x_3966_);
v___x_3968_ = lean_array_push(v___x_3967_, v_value_3961_);
v___x_3969_ = lean_array_push(v___x_3968_, v___x_3965_);
v___x_3970_ = l_Lasm_JS_Web_Support_args(v___x_3969_);
v___x_3971_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3960_, v___x_3964_, v___x_3970_);
if (lean_obj_tag(v___x_3971_) == 0)
{
lean_object* v_a_3972_; lean_object* v___x_3974_; uint8_t v_isShared_3975_; uint8_t v_isSharedCheck_3979_; 
v_a_3972_ = lean_ctor_get(v___x_3971_, 0);
v_isSharedCheck_3979_ = !lean_is_exclusive(v___x_3971_);
if (v_isSharedCheck_3979_ == 0)
{
v___x_3974_ = v___x_3971_;
v_isShared_3975_ = v_isSharedCheck_3979_;
goto v_resetjp_3973_;
}
else
{
lean_inc(v_a_3972_);
lean_dec(v___x_3971_);
v___x_3974_ = lean_box(0);
v_isShared_3975_ = v_isSharedCheck_3979_;
goto v_resetjp_3973_;
}
v_resetjp_3973_:
{
lean_object* v___x_3977_; 
if (v_isShared_3975_ == 0)
{
v___x_3977_ = v___x_3974_;
goto v_reusejp_3976_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v_a_3972_);
v___x_3977_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3976_;
}
v_reusejp_3976_:
{
return v___x_3977_;
}
}
}
else
{
lean_object* v_a_3980_; lean_object* v___x_3982_; uint8_t v_isShared_3983_; uint8_t v_isSharedCheck_3987_; 
v_a_3980_ = lean_ctor_get(v___x_3971_, 0);
v_isSharedCheck_3987_ = !lean_is_exclusive(v___x_3971_);
if (v_isSharedCheck_3987_ == 0)
{
v___x_3982_ = v___x_3971_;
v_isShared_3983_ = v_isSharedCheck_3987_;
goto v_resetjp_3981_;
}
else
{
lean_inc(v_a_3980_);
lean_dec(v___x_3971_);
v___x_3982_ = lean_box(0);
v_isShared_3983_ = v_isSharedCheck_3987_;
goto v_resetjp_3981_;
}
v_resetjp_3981_:
{
lean_object* v___x_3985_; 
if (v_isShared_3983_ == 0)
{
v___x_3985_ = v___x_3982_;
goto v_reusejp_3984_;
}
else
{
lean_object* v_reuseFailAlloc_3986_; 
v_reuseFailAlloc_3986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3986_, 0, v_a_3980_);
v___x_3985_ = v_reuseFailAlloc_3986_;
goto v_reusejp_3984_;
}
v_reusejp_3984_:
{
return v___x_3985_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_enqueue___boxed(lean_object* v_self_3988_, lean_object* v_value_3989_, lean_object* v_options_3990_, lean_object* v_a_3991_){
_start:
{
lean_object* v_res_3992_; 
v_res_3992_ = l_Lasm_JS_Deno_AtomicOperation_enqueue(v_self_3988_, v_value_3989_, v_options_3990_);
return v_res_3992_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0(uint8_t v_await_3993_, uint64_t v_extra_3994_){
_start:
{
uint64_t v___x_3995_; uint64_t v___y_3997_; 
v___x_3995_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_3993_ == 0)
{
uint64_t v___x_4000_; 
v___x_4000_ = 0ULL;
v___y_3997_ = v___x_4000_;
goto v___jp_3996_;
}
else
{
uint64_t v___x_4001_; 
v___x_4001_ = 2ULL;
v___y_3997_ = v___x_4001_;
goto v___jp_3996_;
}
v___jp_3996_:
{
uint64_t v___x_3998_; uint64_t v___x_3999_; 
v___x_3998_ = lean_uint64_lor(v___x_3995_, v___y_3997_);
v___x_3999_ = lean_uint64_lor(v___x_3998_, v_extra_3994_);
return v___x_3999_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0___boxed(lean_object* v_await_4002_, lean_object* v_extra_4003_){
_start:
{
uint8_t v_await_boxed_4004_; uint64_t v_extra_boxed_4005_; uint64_t v_res_4006_; lean_object* v_r_4007_; 
v_await_boxed_4004_ = lean_unbox(v_await_4002_);
v_extra_boxed_4005_ = lean_unbox_uint64(v_extra_4003_);
lean_dec_ref(v_extra_4003_);
v_res_4006_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0(v_await_boxed_4004_, v_extra_boxed_4005_);
v_r_4007_ = lean_box_uint64(v_res_4006_);
return v_r_4007_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2(lean_object* v___f_4008_, lean_object* v_x_4009_){
_start:
{
if (lean_obj_tag(v_x_4009_) == 0)
{
lean_object* v_a_4011_; lean_object* v___x_4013_; uint8_t v_isShared_4014_; uint8_t v_isSharedCheck_4019_; 
lean_dec_ref(v___f_4008_);
v_a_4011_ = lean_ctor_get(v_x_4009_, 0);
v_isSharedCheck_4019_ = !lean_is_exclusive(v_x_4009_);
if (v_isSharedCheck_4019_ == 0)
{
v___x_4013_ = v_x_4009_;
v_isShared_4014_ = v_isSharedCheck_4019_;
goto v_resetjp_4012_;
}
else
{
lean_inc(v_a_4011_);
lean_dec(v_x_4009_);
v___x_4013_ = lean_box(0);
v_isShared_4014_ = v_isSharedCheck_4019_;
goto v_resetjp_4012_;
}
v_resetjp_4012_:
{
lean_object* v___x_4016_; 
if (v_isShared_4014_ == 0)
{
v___x_4016_ = v___x_4013_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v_a_4011_);
v___x_4016_ = v_reuseFailAlloc_4018_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
lean_object* v___x_4017_; 
v___x_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4017_, 0, v___x_4016_);
return v___x_4017_;
}
}
}
else
{
lean_object* v_a_4020_; lean_object* v___x_4021_; 
v_a_4020_ = lean_ctor_get(v_x_4009_, 0);
lean_inc(v_a_4020_);
lean_dec_ref_known(v_x_4009_, 1);
v___x_4021_ = lean_apply_2(v___f_4008_, v_a_4020_, lean_box(0));
return v___x_4021_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2___boxed(lean_object* v___f_4022_, lean_object* v_x_4023_, lean_object* v___y_4024_){
_start:
{
lean_object* v_res_4025_; 
v_res_4025_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2(v___f_4022_, v_x_4023_);
return v_res_4025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_4031_, lean_object* v_key_4032_){
_start:
{
if (lean_obj_tag(v_d_4031_) == 8)
{
lean_object* v___x_4035_; lean_object* v___x_4037_; uint8_t v_isShared_4038_; uint8_t v_isSharedCheck_4063_; 
v___x_4035_ = l_Lasm_JS_Data_field(v_d_4031_, v_key_4032_);
v_isSharedCheck_4063_ = !lean_is_exclusive(v_d_4031_);
if (v_isSharedCheck_4063_ == 0)
{
lean_object* v_unused_4064_; 
v_unused_4064_ = lean_ctor_get(v_d_4031_, 0);
lean_dec(v_unused_4064_);
v___x_4037_ = v_d_4031_;
v_isShared_4038_ = v_isSharedCheck_4063_;
goto v_resetjp_4036_;
}
else
{
lean_dec(v_d_4031_);
v___x_4037_ = lean_box(0);
v_isShared_4038_ = v_isSharedCheck_4063_;
goto v_resetjp_4036_;
}
v_resetjp_4036_:
{
switch(lean_obj_tag(v___x_4035_))
{
case 1:
{
lean_del_object(v___x_4037_);
goto v___jp_4033_;
}
case 0:
{
lean_del_object(v___x_4037_);
goto v___jp_4033_;
}
default: 
{
if (lean_obj_tag(v___x_4035_) == 4)
{
lean_object* v_s_4039_; lean_object* v___x_4041_; 
v_s_4039_ = lean_ctor_get(v___x_4035_, 0);
lean_inc_ref(v_s_4039_);
lean_dec_ref_known(v___x_4035_, 1);
if (v_isShared_4038_ == 0)
{
lean_ctor_set_tag(v___x_4037_, 1);
lean_ctor_set(v___x_4037_, 0, v_s_4039_);
v___x_4041_ = v___x_4037_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4043_; 
v_reuseFailAlloc_4043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4043_, 0, v_s_4039_);
v___x_4041_ = v_reuseFailAlloc_4043_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
lean_object* v___x_4042_; 
v___x_4042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4042_, 0, v___x_4041_);
return v___x_4042_;
}
}
else
{
lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; uint8_t v___x_4054_; 
v___x_4044_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_4045_ = lean_string_append(v___x_4044_, v_key_4032_);
v___x_4046_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_4047_ = lean_string_append(v___x_4045_, v___x_4046_);
v___x_4048_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_4049_ = lean_string_append(v___x_4047_, v___x_4048_);
v___x_4050_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
v___x_4051_ = lean_string_append(v___x_4049_, v___x_4050_);
v___x_4052_ = l_Lasm_JS_Data_describe(v___x_4035_);
v___x_4053_ = lean_string_append(v___x_4051_, v___x_4052_);
lean_dec_ref(v___x_4052_);
v___x_4054_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5);
if (v___x_4054_ == 0)
{
lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4058_; 
v___x_4055_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6));
v___x_4056_ = lean_string_append(v___x_4053_, v___x_4055_);
if (v_isShared_4038_ == 0)
{
lean_ctor_set_tag(v___x_4037_, 0);
lean_ctor_set(v___x_4037_, 0, v___x_4056_);
v___x_4058_ = v___x_4037_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v___x_4056_);
v___x_4058_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
return v___x_4058_;
}
}
else
{
lean_object* v___x_4061_; 
if (v_isShared_4038_ == 0)
{
lean_ctor_set_tag(v___x_4037_, 0);
lean_ctor_set(v___x_4037_, 0, v___x_4053_);
v___x_4061_ = v___x_4037_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v___x_4053_);
v___x_4061_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
return v___x_4061_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4065_; 
lean_dec(v_d_4031_);
v___x_4065_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__2));
return v___x_4065_;
}
v___jp_4033_:
{
lean_object* v___x_4034_; 
v___x_4034_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__0));
return v___x_4034_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_4066_, lean_object* v_key_4067_){
_start:
{
lean_object* v_res_4068_; 
v_res_4068_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(v_d_4066_, v_key_4067_);
lean_dec_ref(v_key_4067_);
return v_res_4068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_4072_, lean_object* v_key_4073_){
_start:
{
if (lean_obj_tag(v_d_4072_) == 8)
{
lean_object* v___x_4074_; lean_object* v___x_4076_; uint8_t v_isShared_4077_; uint8_t v_isSharedCheck_4102_; 
v___x_4074_ = l_Lasm_JS_Data_field(v_d_4072_, v_key_4073_);
v_isSharedCheck_4102_ = !lean_is_exclusive(v_d_4072_);
if (v_isSharedCheck_4102_ == 0)
{
lean_object* v_unused_4103_; 
v_unused_4103_ = lean_ctor_get(v_d_4072_, 0);
lean_dec(v_unused_4103_);
v___x_4076_ = v_d_4072_;
v_isShared_4077_ = v_isSharedCheck_4102_;
goto v_resetjp_4075_;
}
else
{
lean_dec(v_d_4072_);
v___x_4076_ = lean_box(0);
v_isShared_4077_ = v_isSharedCheck_4102_;
goto v_resetjp_4075_;
}
v_resetjp_4075_:
{
if (lean_obj_tag(v___x_4074_) == 2)
{
uint8_t v_b_4078_; lean_object* v___x_4079_; lean_object* v___x_4081_; 
v_b_4078_ = lean_ctor_get_uint8(v___x_4074_, 0);
lean_dec_ref_known(v___x_4074_, 0);
v___x_4079_ = lean_box(v_b_4078_);
if (v_isShared_4077_ == 0)
{
lean_ctor_set_tag(v___x_4076_, 1);
lean_ctor_set(v___x_4076_, 0, v___x_4079_);
v___x_4081_ = v___x_4076_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4082_; 
v_reuseFailAlloc_4082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4082_, 0, v___x_4079_);
v___x_4081_ = v_reuseFailAlloc_4082_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
return v___x_4081_;
}
}
else
{
lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; uint8_t v___x_4093_; 
v___x_4083_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_4084_ = lean_string_append(v___x_4083_, v_key_4073_);
v___x_4085_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_4086_ = lean_string_append(v___x_4084_, v___x_4085_);
v___x_4087_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_4088_ = lean_string_append(v___x_4086_, v___x_4087_);
v___x_4089_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
v___x_4090_ = lean_string_append(v___x_4088_, v___x_4089_);
v___x_4091_ = l_Lasm_JS_Data_describe(v___x_4074_);
v___x_4092_ = lean_string_append(v___x_4090_, v___x_4091_);
lean_dec_ref(v___x_4091_);
v___x_4093_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5);
if (v___x_4093_ == 0)
{
lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4097_; 
v___x_4094_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6));
v___x_4095_ = lean_string_append(v___x_4092_, v___x_4094_);
if (v_isShared_4077_ == 0)
{
lean_ctor_set_tag(v___x_4076_, 0);
lean_ctor_set(v___x_4076_, 0, v___x_4095_);
v___x_4097_ = v___x_4076_;
goto v_reusejp_4096_;
}
else
{
lean_object* v_reuseFailAlloc_4098_; 
v_reuseFailAlloc_4098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4098_, 0, v___x_4095_);
v___x_4097_ = v_reuseFailAlloc_4098_;
goto v_reusejp_4096_;
}
v_reusejp_4096_:
{
return v___x_4097_;
}
}
else
{
lean_object* v___x_4100_; 
if (v_isShared_4077_ == 0)
{
lean_ctor_set_tag(v___x_4076_, 0);
lean_ctor_set(v___x_4076_, 0, v___x_4092_);
v___x_4100_ = v___x_4076_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v___x_4092_);
v___x_4100_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
return v___x_4100_;
}
}
}
}
}
else
{
lean_object* v___x_4104_; 
lean_dec(v_d_4072_);
v___x_4104_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___closed__1));
return v___x_4104_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_4105_, lean_object* v_key_4106_){
_start:
{
lean_object* v_res_4107_; 
v_res_4107_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(v_d_4105_, v_key_4106_);
lean_dec_ref(v_key_4106_);
return v_res_4107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2(lean_object* v_context_4108_, lean_object* v_d_4109_){
_start:
{
lean_object* v___y_4112_; lean_object* v___y_4113_; lean_object* v___y_4118_; lean_object* v_received_4119_; lean_object* v___y_4138_; lean_object* v_a_4141_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
v___x_4165_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0));
lean_inc(v_d_4109_);
v___x_4166_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(v_d_4109_, v___x_4165_);
if (lean_obj_tag(v___x_4166_) == 0)
{
lean_object* v_a_4167_; 
v_a_4167_ = lean_ctor_get(v___x_4166_, 0);
lean_inc(v_a_4167_);
lean_dec_ref_known(v___x_4166_, 1);
v_a_4141_ = v_a_4167_;
goto v___jp_4140_;
}
else
{
lean_object* v_a_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; 
v_a_4168_ = lean_ctor_get(v___x_4166_, 0);
lean_inc(v_a_4168_);
lean_dec_ref_known(v___x_4166_, 1);
v___x_4169_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_d_4109_);
v___x_4170_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(v_d_4109_, v___x_4169_);
if (lean_obj_tag(v___x_4170_) == 0)
{
lean_object* v_a_4171_; 
lean_dec(v_a_4168_);
v_a_4171_ = lean_ctor_get(v___x_4170_, 0);
lean_inc(v_a_4171_);
lean_dec_ref_known(v___x_4170_, 1);
v_a_4141_ = v_a_4171_;
goto v___jp_4140_;
}
else
{
lean_object* v_a_4172_; lean_object* v___x_4174_; uint8_t v_isShared_4175_; uint8_t v_isSharedCheck_4181_; 
lean_dec(v_d_4109_);
v_a_4172_ = lean_ctor_get(v___x_4170_, 0);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4170_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4174_ = v___x_4170_;
v_isShared_4175_ = v_isSharedCheck_4181_;
goto v_resetjp_4173_;
}
else
{
lean_inc(v_a_4172_);
lean_dec(v___x_4170_);
v___x_4174_ = lean_box(0);
v_isShared_4175_ = v_isSharedCheck_4181_;
goto v_resetjp_4173_;
}
v_resetjp_4173_:
{
lean_object* v___x_4176_; uint8_t v___x_4177_; lean_object* v___x_4179_; 
v___x_4176_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4176_, 0, v_a_4172_);
v___x_4177_ = lean_unbox(v_a_4168_);
lean_dec(v_a_4168_);
lean_ctor_set_uint8(v___x_4176_, sizeof(void*)*1, v___x_4177_);
if (v_isShared_4175_ == 0)
{
lean_ctor_set_tag(v___x_4174_, 0);
lean_ctor_set(v___x_4174_, 0, v___x_4176_);
v___x_4179_ = v___x_4174_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v___x_4176_);
v___x_4179_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
return v___x_4179_;
}
}
}
}
v___jp_4111_:
{
lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; 
v___x_4114_ = lean_string_append(v___y_4112_, v___y_4113_);
lean_dec_ref(v___y_4113_);
v___x_4115_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4114_);
v___x_4116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4115_);
return v___x_4116_;
}
v___jp_4117_:
{
lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; uint8_t v___x_4131_; 
v___x_4120_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_4121_ = lean_string_append(v___x_4120_, v_context_4108_);
v___x_4122_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_4123_ = lean_string_append(v___x_4121_, v___x_4122_);
v___x_4124_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__2));
v___x_4125_ = lean_string_append(v___x_4123_, v___x_4124_);
v___x_4126_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_4127_ = lean_string_append(v___x_4125_, v___x_4126_);
v___x_4128_ = lean_string_append(v___x_4127_, v_received_4119_);
lean_dec_ref(v_received_4119_);
v___x_4129_ = lean_string_utf8_byte_size(v___y_4118_);
v___x_4130_ = lean_unsigned_to_nat(0u);
v___x_4131_ = lean_nat_dec_eq(v___x_4129_, v___x_4130_);
if (v___x_4131_ == 0)
{
lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; 
v___x_4132_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_4133_ = lean_string_append(v___x_4132_, v___y_4118_);
lean_dec_ref(v___y_4118_);
v___x_4134_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4135_ = lean_string_append(v___x_4133_, v___x_4134_);
v___y_4112_ = v___x_4128_;
v___y_4113_ = v___x_4135_;
goto v___jp_4111_;
}
else
{
lean_object* v___x_4136_; 
lean_dec_ref(v___y_4118_);
v___x_4136_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_4112_ = v___x_4128_;
v___y_4113_ = v___x_4136_;
goto v___jp_4111_;
}
}
v___jp_4137_:
{
lean_object* v___x_4139_; 
v___x_4139_ = l_Lasm_JS_Data_describe(v_d_4109_);
v___y_4118_ = v___y_4138_;
v_received_4119_ = v___x_4139_;
goto v___jp_4117_;
}
v___jp_4140_:
{
if (lean_obj_tag(v_d_4109_) == 9)
{
lean_object* v_value_4142_; lean_object* v_description_4143_; lean_object* v___x_4144_; uint8_t v___x_4145_; 
v_value_4142_ = lean_ctor_get(v_d_4109_, 0);
v_description_4143_ = lean_ctor_get(v_d_4109_, 1);
v___x_4144_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4145_ = lean_string_dec_eq(v_description_4143_, v___x_4144_);
if (v___x_4145_ == 0)
{
v___y_4138_ = v_a_4141_;
goto v___jp_4137_;
}
else
{
lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4162_; 
lean_inc(v_value_4142_);
v_isSharedCheck_4162_ = !lean_is_exclusive(v_d_4109_);
if (v_isSharedCheck_4162_ == 0)
{
lean_object* v_unused_4163_; lean_object* v_unused_4164_; 
v_unused_4163_ = lean_ctor_get(v_d_4109_, 1);
lean_dec(v_unused_4163_);
v_unused_4164_ = lean_ctor_get(v_d_4109_, 0);
lean_dec(v_unused_4164_);
v___x_4147_ = v_d_4109_;
v_isShared_4148_ = v_isSharedCheck_4162_;
goto v_resetjp_4146_;
}
else
{
lean_dec(v_d_4109_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4162_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
uint32_t v___x_4149_; uint64_t v___x_4150_; lean_object* v___x_4152_; 
v___x_4149_ = 206;
v___x_4150_ = 0ULL;
lean_inc(v_value_4142_);
if (v_isShared_4148_ == 0)
{
lean_ctor_set(v___x_4147_, 1, v___x_4144_);
v___x_4152_ = v___x_4147_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4161_; 
v_reuseFailAlloc_4161_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4161_, 0, v_value_4142_);
lean_ctor_set(v_reuseFailAlloc_4161_, 1, v___x_4144_);
v___x_4152_ = v_reuseFailAlloc_4161_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
uint32_t v___x_4153_; lean_object* v___x_4154_; 
v___x_4153_ = lasm_js_value_handle(v_value_4142_);
lean_dec(v_value_4142_);
v___x_4154_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4149_, v___x_4150_, v___x_4152_, v___x_4153_);
lean_dec_ref(v___x_4152_);
if (lean_obj_tag(v___x_4154_) == 0)
{
lean_object* v_a_4155_; uint8_t v___x_4156_; 
v_a_4155_ = lean_ctor_get(v___x_4154_, 0);
lean_inc(v_a_4155_);
lean_dec_ref_known(v___x_4154_, 1);
v___x_4156_ = lean_string_validate_utf8(v_a_4155_);
if (v___x_4156_ == 0)
{
lean_object* v___x_4157_; lean_object* v___x_4158_; 
lean_dec(v_a_4155_);
v___x_4157_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_4158_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4157_);
v___y_4118_ = v_a_4141_;
v_received_4119_ = v___x_4158_;
goto v___jp_4117_;
}
else
{
lean_object* v___x_4159_; 
v___x_4159_ = lean_string_from_utf8_unchecked(v_a_4155_);
v___y_4118_ = v_a_4141_;
v_received_4119_ = v___x_4159_;
goto v___jp_4117_;
}
}
else
{
lean_object* v___x_4160_; 
lean_dec_ref_known(v___x_4154_, 1);
v___x_4160_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_4118_ = v_a_4141_;
v_received_4119_ = v___x_4160_;
goto v___jp_4117_;
}
}
}
}
}
else
{
v___y_4138_ = v_a_4141_;
goto v___jp_4137_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2___boxed(lean_object* v_context_4182_, lean_object* v_d_4183_, lean_object* v_a_4184_){
_start:
{
lean_object* v_res_4185_; 
v_res_4185_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2(v_context_4182_, v_d_4183_);
lean_dec_ref(v_context_4182_);
return v_res_4185_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0(lean_object* v_context_4186_, lean_object* v_x_4187_){
_start:
{
lean_object* v_val_4190_; 
if (lean_obj_tag(v_x_4187_) == 0)
{
lean_object* v_a_4192_; lean_object* v___x_4194_; uint8_t v_isShared_4195_; uint8_t v_isSharedCheck_4200_; 
v_a_4192_ = lean_ctor_get(v_x_4187_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v_x_4187_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4194_ = v_x_4187_;
v_isShared_4195_ = v_isSharedCheck_4200_;
goto v_resetjp_4193_;
}
else
{
lean_inc(v_a_4192_);
lean_dec(v_x_4187_);
v___x_4194_ = lean_box(0);
v_isShared_4195_ = v_isSharedCheck_4200_;
goto v_resetjp_4193_;
}
v_resetjp_4193_:
{
lean_object* v___x_4197_; 
if (v_isShared_4195_ == 0)
{
v___x_4197_ = v___x_4194_;
goto v_reusejp_4196_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v_a_4192_);
v___x_4197_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4196_;
}
v_reusejp_4196_:
{
lean_object* v___x_4198_; 
v___x_4198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4198_, 0, v___x_4197_);
return v___x_4198_;
}
}
}
else
{
lean_object* v_a_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4214_; 
v_a_4201_ = lean_ctor_get(v_x_4187_, 0);
v_isSharedCheck_4214_ = !lean_is_exclusive(v_x_4187_);
if (v_isSharedCheck_4214_ == 0)
{
v___x_4203_ = v_x_4187_;
v_isShared_4204_ = v_isSharedCheck_4214_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_a_4201_);
lean_dec(v_x_4187_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4214_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
lean_object* v___x_4205_; 
v___x_4205_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2(v_context_4186_, v_a_4201_);
if (lean_obj_tag(v___x_4205_) == 0)
{
lean_object* v_a_4206_; lean_object* v___x_4208_; 
v_a_4206_ = lean_ctor_get(v___x_4205_, 0);
lean_inc(v_a_4206_);
lean_dec_ref_known(v___x_4205_, 1);
if (v_isShared_4204_ == 0)
{
lean_ctor_set(v___x_4203_, 0, v_a_4206_);
v___x_4208_ = v___x_4203_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v_a_4206_);
v___x_4208_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
v_val_4190_ = v___x_4208_;
goto v___jp_4189_;
}
}
else
{
lean_object* v_a_4210_; lean_object* v___x_4212_; 
v_a_4210_ = lean_ctor_get(v___x_4205_, 0);
lean_inc(v_a_4210_);
lean_dec_ref_known(v___x_4205_, 1);
if (v_isShared_4204_ == 0)
{
lean_ctor_set_tag(v___x_4203_, 0);
lean_ctor_set(v___x_4203_, 0, v_a_4210_);
v___x_4212_ = v___x_4203_;
goto v_reusejp_4211_;
}
else
{
lean_object* v_reuseFailAlloc_4213_; 
v_reuseFailAlloc_4213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4213_, 0, v_a_4210_);
v___x_4212_ = v_reuseFailAlloc_4213_;
goto v_reusejp_4211_;
}
v_reusejp_4211_:
{
v_val_4190_ = v___x_4212_;
goto v___jp_4189_;
}
}
}
}
v___jp_4189_:
{
lean_object* v___x_4191_; 
v___x_4191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4191_, 0, v_val_4190_);
return v___x_4191_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0___boxed(lean_object* v_context_4215_, lean_object* v_x_4216_, lean_object* v___y_4217_){
_start:
{
lean_object* v_res_4218_; 
v_res_4218_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0(v_context_4215_, v_x_4216_);
lean_dec_ref(v_context_4215_);
return v_res_4218_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1(lean_object* v___f_4219_, lean_object* v_bytes_4220_){
_start:
{
lean_object* v___x_4222_; uint8_t v___x_4223_; lean_object* v_val_4225_; lean_object* v___x_4228_; 
v___x_4222_ = lean_unsigned_to_nat(0u);
v___x_4223_ = 0;
v___x_4228_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4220_);
if (lean_obj_tag(v___x_4228_) == 0)
{
lean_object* v_a_4229_; lean_object* v___x_4231_; uint8_t v_isShared_4232_; uint8_t v_isSharedCheck_4236_; 
v_a_4229_ = lean_ctor_get(v___x_4228_, 0);
v_isSharedCheck_4236_ = !lean_is_exclusive(v___x_4228_);
if (v_isSharedCheck_4236_ == 0)
{
v___x_4231_ = v___x_4228_;
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
else
{
lean_inc(v_a_4229_);
lean_dec(v___x_4228_);
v___x_4231_ = lean_box(0);
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
v_resetjp_4230_:
{
lean_object* v___x_4234_; 
if (v_isShared_4232_ == 0)
{
lean_ctor_set_tag(v___x_4231_, 1);
v___x_4234_ = v___x_4231_;
goto v_reusejp_4233_;
}
else
{
lean_object* v_reuseFailAlloc_4235_; 
v_reuseFailAlloc_4235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4235_, 0, v_a_4229_);
v___x_4234_ = v_reuseFailAlloc_4235_;
goto v_reusejp_4233_;
}
v_reusejp_4233_:
{
v_val_4225_ = v___x_4234_;
goto v___jp_4224_;
}
}
}
else
{
lean_object* v_a_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4244_; 
v_a_4237_ = lean_ctor_get(v___x_4228_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v___x_4228_);
if (v_isSharedCheck_4244_ == 0)
{
v___x_4239_ = v___x_4228_;
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_a_4237_);
lean_dec(v___x_4228_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
lean_object* v___x_4242_; 
if (v_isShared_4240_ == 0)
{
lean_ctor_set_tag(v___x_4239_, 0);
v___x_4242_ = v___x_4239_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v_a_4237_);
v___x_4242_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
v_val_4225_ = v___x_4242_;
goto v___jp_4224_;
}
}
}
v___jp_4224_:
{
lean_object* v___x_4226_; lean_object* v___x_4227_; 
v___x_4226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4226_, 0, v_val_4225_);
v___x_4227_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4222_, v___x_4223_, v___x_4226_, v___f_4219_);
return v___x_4227_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1___boxed(lean_object* v___f_4245_, lean_object* v_bytes_4246_, lean_object* v___y_4247_){
_start:
{
lean_object* v_res_4248_; 
v_res_4248_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1(v___f_4245_, v_bytes_4246_);
lean_dec_ref(v_bytes_4246_);
return v_res_4248_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3(lean_object* v___f_4249_, lean_object* v_x_4250_){
_start:
{
if (lean_obj_tag(v_x_4250_) == 0)
{
lean_object* v_a_4252_; lean_object* v___x_4254_; uint8_t v_isShared_4255_; uint8_t v_isSharedCheck_4260_; 
lean_dec_ref(v___f_4249_);
v_a_4252_ = lean_ctor_get(v_x_4250_, 0);
v_isSharedCheck_4260_ = !lean_is_exclusive(v_x_4250_);
if (v_isSharedCheck_4260_ == 0)
{
v___x_4254_ = v_x_4250_;
v_isShared_4255_ = v_isSharedCheck_4260_;
goto v_resetjp_4253_;
}
else
{
lean_inc(v_a_4252_);
lean_dec(v_x_4250_);
v___x_4254_ = lean_box(0);
v_isShared_4255_ = v_isSharedCheck_4260_;
goto v_resetjp_4253_;
}
v_resetjp_4253_:
{
lean_object* v___x_4257_; 
if (v_isShared_4255_ == 0)
{
v___x_4257_ = v___x_4254_;
goto v_reusejp_4256_;
}
else
{
lean_object* v_reuseFailAlloc_4259_; 
v_reuseFailAlloc_4259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4259_, 0, v_a_4252_);
v___x_4257_ = v_reuseFailAlloc_4259_;
goto v_reusejp_4256_;
}
v_reusejp_4256_:
{
lean_object* v___x_4258_; 
v___x_4258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4258_, 0, v___x_4257_);
return v___x_4258_;
}
}
}
else
{
lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4272_; 
v_isSharedCheck_4272_ = !lean_is_exclusive(v_x_4250_);
if (v_isSharedCheck_4272_ == 0)
{
lean_object* v_unused_4273_; 
v_unused_4273_ = lean_ctor_get(v_x_4250_, 0);
lean_dec(v_unused_4273_);
v___x_4262_ = v_x_4250_;
v_isShared_4263_ = v_isSharedCheck_4272_;
goto v_resetjp_4261_;
}
else
{
lean_dec(v_x_4250_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4272_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v___x_4264_; uint8_t v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4268_; 
v___x_4264_ = lean_unsigned_to_nat(0u);
v___x_4265_ = 0;
v___x_4266_ = lean_io_promise_new();
if (v_isShared_4263_ == 0)
{
lean_ctor_set(v___x_4262_, 0, v___x_4266_);
v___x_4268_ = v___x_4262_;
goto v_reusejp_4267_;
}
else
{
lean_object* v_reuseFailAlloc_4271_; 
v_reuseFailAlloc_4271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4271_, 0, v___x_4266_);
v___x_4268_ = v_reuseFailAlloc_4271_;
goto v_reusejp_4267_;
}
v_reusejp_4267_:
{
lean_object* v___x_4269_; lean_object* v___x_4270_; 
v___x_4269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4269_, 0, v___x_4268_);
v___x_4270_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4264_, v___x_4265_, v___x_4269_, v___f_4249_);
return v___x_4270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3___boxed(lean_object* v___f_4274_, lean_object* v_x_4275_, lean_object* v___y_4276_){
_start:
{
lean_object* v_res_4277_; 
v_res_4277_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3(v___f_4274_, v_x_4275_);
return v_res_4277_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_4278_, uint32_t v_op_4279_, uint64_t v_flags_4280_, lean_object* v_payload_4281_, lean_object* v___f_4282_, lean_object* v___f_4283_, lean_object* v___f_4284_, lean_object* v_x_4285_){
_start:
{
if (lean_obj_tag(v_x_4285_) == 0)
{
lean_object* v_a_4287_; lean_object* v___x_4289_; uint8_t v_isShared_4290_; uint8_t v_isSharedCheck_4295_; 
lean_dec_ref(v___f_4284_);
lean_dec_ref(v___f_4283_);
lean_dec_ref(v___f_4282_);
lean_dec(v_payload_4281_);
v_a_4287_ = lean_ctor_get(v_x_4285_, 0);
v_isSharedCheck_4295_ = !lean_is_exclusive(v_x_4285_);
if (v_isSharedCheck_4295_ == 0)
{
v___x_4289_ = v_x_4285_;
v_isShared_4290_ = v_isSharedCheck_4295_;
goto v_resetjp_4288_;
}
else
{
lean_inc(v_a_4287_);
lean_dec(v_x_4285_);
v___x_4289_ = lean_box(0);
v_isShared_4290_ = v_isSharedCheck_4295_;
goto v_resetjp_4288_;
}
v_resetjp_4288_:
{
lean_object* v___x_4292_; 
if (v_isShared_4290_ == 0)
{
v___x_4292_ = v___x_4289_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v_a_4287_);
v___x_4292_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4291_;
}
v_reusejp_4291_:
{
lean_object* v___x_4293_; 
v___x_4293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4293_, 0, v___x_4292_);
return v___x_4293_;
}
}
}
else
{
lean_object* v_a_4296_; lean_object* v___x_4298_; uint8_t v_isShared_4299_; uint8_t v_isSharedCheck_4342_; 
v_a_4296_ = lean_ctor_get(v_x_4285_, 0);
v_isSharedCheck_4342_ = !lean_is_exclusive(v_x_4285_);
if (v_isSharedCheck_4342_ == 0)
{
v___x_4298_ = v_x_4285_;
v_isShared_4299_ = v_isSharedCheck_4342_;
goto v_resetjp_4297_;
}
else
{
lean_inc(v_a_4296_);
lean_dec(v_x_4285_);
v___x_4298_ = lean_box(0);
v_isShared_4299_ = v_isSharedCheck_4342_;
goto v_resetjp_4297_;
}
v_resetjp_4297_:
{
lean_object* v___x_4300_; lean_object* v___x_4301_; uint8_t v___x_4302_; 
v___x_4300_ = lean_string_utf8_byte_size(v_failurePrefix_4278_);
v___x_4301_ = lean_unsigned_to_nat(0u);
v___x_4302_ = lean_nat_dec_eq(v___x_4300_, v___x_4301_);
if (v___x_4302_ == 0)
{
lean_object* v___f_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___f_4307_; lean_object* v_val_4309_; lean_object* v___x_4314_; 
lean_dec_ref(v___f_4284_);
lean_inc(v_a_4296_);
v___f_4303_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4303_, 0, v_a_4296_);
v___x_4304_ = lean_box(v___x_4302_);
v___x_4305_ = lean_box_uint32(v_op_4279_);
v___x_4306_ = lean_box_uint64(v_flags_4280_);
lean_inc(v_payload_4281_);
v___f_4307_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4307_, 0, v___x_4301_);
lean_closure_set(v___f_4307_, 1, v___x_4304_);
lean_closure_set(v___f_4307_, 2, v___f_4303_);
lean_closure_set(v___f_4307_, 3, v_a_4296_);
lean_closure_set(v___f_4307_, 4, v___x_4305_);
lean_closure_set(v___f_4307_, 5, v___x_4306_);
lean_closure_set(v___f_4307_, 6, v_payload_4281_);
v___x_4314_ = l_Lasm_JS_Wire_encodeIO(v_payload_4281_);
lean_dec(v_payload_4281_);
if (lean_obj_tag(v___x_4314_) == 0)
{
lean_object* v_a_4315_; lean_object* v___x_4317_; 
v_a_4315_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_a_4315_);
lean_dec_ref_known(v___x_4314_, 1);
if (v_isShared_4299_ == 0)
{
lean_ctor_set(v___x_4298_, 0, v_a_4315_);
v___x_4317_ = v___x_4298_;
goto v_reusejp_4316_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_a_4315_);
v___x_4317_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4316_;
}
v_reusejp_4316_:
{
v_val_4309_ = v___x_4317_;
goto v___jp_4308_;
}
}
else
{
lean_object* v_a_4319_; lean_object* v___x_4321_; 
v_a_4319_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_a_4319_);
lean_dec_ref_known(v___x_4314_, 1);
if (v_isShared_4299_ == 0)
{
lean_ctor_set_tag(v___x_4298_, 0);
lean_ctor_set(v___x_4298_, 0, v_a_4319_);
v___x_4321_ = v___x_4298_;
goto v_reusejp_4320_;
}
else
{
lean_object* v_reuseFailAlloc_4322_; 
v_reuseFailAlloc_4322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4322_, 0, v_a_4319_);
v___x_4321_ = v_reuseFailAlloc_4322_;
goto v_reusejp_4320_;
}
v_reusejp_4320_:
{
v_val_4309_ = v___x_4321_;
goto v___jp_4308_;
}
}
v___jp_4308_:
{
lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; 
v___x_4310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4310_, 0, v_val_4309_);
v___x_4311_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4301_, v___x_4302_, v___x_4310_, v___f_4307_);
v___x_4312_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4301_, v___x_4302_, v___x_4311_, v___f_4282_);
v___x_4313_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4301_, v___x_4302_, v___x_4312_, v___f_4283_);
return v___x_4313_;
}
}
else
{
lean_object* v___f_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___f_4326_; uint8_t v___x_4327_; lean_object* v_val_4329_; lean_object* v___x_4333_; 
lean_dec_ref(v___f_4283_);
lean_dec_ref(v___f_4282_);
lean_inc(v_a_4296_);
v___f_4323_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4323_, 0, v_a_4296_);
v___x_4324_ = lean_box_uint32(v_op_4279_);
v___x_4325_ = lean_box_uint64(v_flags_4280_);
lean_inc(v_payload_4281_);
v___f_4326_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4326_, 0, v___f_4323_);
lean_closure_set(v___f_4326_, 1, v_a_4296_);
lean_closure_set(v___f_4326_, 2, v___x_4324_);
lean_closure_set(v___f_4326_, 3, v___x_4325_);
lean_closure_set(v___f_4326_, 4, v_payload_4281_);
v___x_4327_ = 0;
v___x_4333_ = l_Lasm_JS_Wire_encodeIO(v_payload_4281_);
lean_dec(v_payload_4281_);
if (lean_obj_tag(v___x_4333_) == 0)
{
lean_object* v_a_4334_; lean_object* v___x_4336_; 
v_a_4334_ = lean_ctor_get(v___x_4333_, 0);
lean_inc(v_a_4334_);
lean_dec_ref_known(v___x_4333_, 1);
if (v_isShared_4299_ == 0)
{
lean_ctor_set(v___x_4298_, 0, v_a_4334_);
v___x_4336_ = v___x_4298_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v_a_4334_);
v___x_4336_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
v_val_4329_ = v___x_4336_;
goto v___jp_4328_;
}
}
else
{
lean_object* v_a_4338_; lean_object* v___x_4340_; 
v_a_4338_ = lean_ctor_get(v___x_4333_, 0);
lean_inc(v_a_4338_);
lean_dec_ref_known(v___x_4333_, 1);
if (v_isShared_4299_ == 0)
{
lean_ctor_set_tag(v___x_4298_, 0);
lean_ctor_set(v___x_4298_, 0, v_a_4338_);
v___x_4340_ = v___x_4298_;
goto v_reusejp_4339_;
}
else
{
lean_object* v_reuseFailAlloc_4341_; 
v_reuseFailAlloc_4341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4341_, 0, v_a_4338_);
v___x_4340_ = v_reuseFailAlloc_4341_;
goto v_reusejp_4339_;
}
v_reusejp_4339_:
{
v_val_4329_ = v___x_4340_;
goto v___jp_4328_;
}
}
v___jp_4328_:
{
lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; 
v___x_4330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4330_, 0, v_val_4329_);
v___x_4331_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4301_, v___x_4327_, v___x_4330_, v___f_4326_);
v___x_4332_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4301_, v___x_4327_, v___x_4331_, v___f_4284_);
return v___x_4332_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_4343_, lean_object* v_op_4344_, lean_object* v_flags_4345_, lean_object* v_payload_4346_, lean_object* v___f_4347_, lean_object* v___f_4348_, lean_object* v___f_4349_, lean_object* v_x_4350_, lean_object* v___y_4351_){
_start:
{
uint32_t v_op_boxed_4352_; uint64_t v_flags_boxed_4353_; lean_object* v_res_4354_; 
v_op_boxed_4352_ = lean_unbox_uint32(v_op_4344_);
lean_dec(v_op_4344_);
v_flags_boxed_4353_ = lean_unbox_uint64(v_flags_4345_);
lean_dec_ref(v_flags_4345_);
v_res_4354_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9(v_failurePrefix_4343_, v_op_boxed_4352_, v_flags_boxed_4353_, v_payload_4346_, v___f_4347_, v___f_4348_, v___f_4349_, v_x_4350_);
lean_dec_ref(v_failurePrefix_4343_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1(lean_object* v_context_4355_, uint32_t v_op_4356_, uint64_t v_flags_4357_, lean_object* v_payload_4358_, lean_object* v_failurePrefix_4359_){
_start:
{
lean_object* v___f_4361_; lean_object* v___f_4362_; lean_object* v___f_4363_; lean_object* v___f_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___f_4367_; lean_object* v___f_4368_; lean_object* v___x_4369_; uint8_t v___x_4370_; lean_object* v_val_4372_; lean_object* v___x_4375_; 
v___f_4361_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4361_, 0, v_context_4355_);
v___f_4362_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4362_, 0, v___f_4361_);
v___f_4363_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4363_, 0, v___f_4362_);
lean_inc_ref(v_failurePrefix_4359_);
v___f_4364_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4364_, 0, v_failurePrefix_4359_);
v___x_4365_ = lean_box_uint32(v_op_4356_);
v___x_4366_ = lean_box_uint64(v_flags_4357_);
lean_inc_ref(v___f_4363_);
v___f_4367_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4367_, 0, v_failurePrefix_4359_);
lean_closure_set(v___f_4367_, 1, v___x_4365_);
lean_closure_set(v___f_4367_, 2, v___x_4366_);
lean_closure_set(v___f_4367_, 3, v_payload_4358_);
lean_closure_set(v___f_4367_, 4, v___f_4364_);
lean_closure_set(v___f_4367_, 5, v___f_4363_);
lean_closure_set(v___f_4367_, 6, v___f_4363_);
v___f_4368_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4368_, 0, v___f_4367_);
v___x_4369_ = lean_unsigned_to_nat(0u);
v___x_4370_ = 0;
v___x_4375_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4375_) == 0)
{
lean_object* v_a_4376_; lean_object* v___x_4378_; uint8_t v_isShared_4379_; uint8_t v_isSharedCheck_4383_; 
v_a_4376_ = lean_ctor_get(v___x_4375_, 0);
v_isSharedCheck_4383_ = !lean_is_exclusive(v___x_4375_);
if (v_isSharedCheck_4383_ == 0)
{
v___x_4378_ = v___x_4375_;
v_isShared_4379_ = v_isSharedCheck_4383_;
goto v_resetjp_4377_;
}
else
{
lean_inc(v_a_4376_);
lean_dec(v___x_4375_);
v___x_4378_ = lean_box(0);
v_isShared_4379_ = v_isSharedCheck_4383_;
goto v_resetjp_4377_;
}
v_resetjp_4377_:
{
lean_object* v___x_4381_; 
if (v_isShared_4379_ == 0)
{
lean_ctor_set_tag(v___x_4378_, 1);
v___x_4381_ = v___x_4378_;
goto v_reusejp_4380_;
}
else
{
lean_object* v_reuseFailAlloc_4382_; 
v_reuseFailAlloc_4382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4382_, 0, v_a_4376_);
v___x_4381_ = v_reuseFailAlloc_4382_;
goto v_reusejp_4380_;
}
v_reusejp_4380_:
{
v_val_4372_ = v___x_4381_;
goto v___jp_4371_;
}
}
}
else
{
lean_object* v_a_4384_; lean_object* v___x_4386_; uint8_t v_isShared_4387_; uint8_t v_isSharedCheck_4391_; 
v_a_4384_ = lean_ctor_get(v___x_4375_, 0);
v_isSharedCheck_4391_ = !lean_is_exclusive(v___x_4375_);
if (v_isSharedCheck_4391_ == 0)
{
v___x_4386_ = v___x_4375_;
v_isShared_4387_ = v_isSharedCheck_4391_;
goto v_resetjp_4385_;
}
else
{
lean_inc(v_a_4384_);
lean_dec(v___x_4375_);
v___x_4386_ = lean_box(0);
v_isShared_4387_ = v_isSharedCheck_4391_;
goto v_resetjp_4385_;
}
v_resetjp_4385_:
{
lean_object* v___x_4389_; 
if (v_isShared_4387_ == 0)
{
lean_ctor_set_tag(v___x_4386_, 0);
v___x_4389_ = v___x_4386_;
goto v_reusejp_4388_;
}
else
{
lean_object* v_reuseFailAlloc_4390_; 
v_reuseFailAlloc_4390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4390_, 0, v_a_4384_);
v___x_4389_ = v_reuseFailAlloc_4390_;
goto v_reusejp_4388_;
}
v_reusejp_4388_:
{
v_val_4372_ = v___x_4389_;
goto v___jp_4371_;
}
}
}
v___jp_4371_:
{
lean_object* v___x_4373_; lean_object* v___x_4374_; 
v___x_4373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4373_, 0, v_val_4372_);
v___x_4374_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4369_, v___x_4370_, v___x_4373_, v___f_4368_);
return v___x_4374_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___boxed(lean_object* v_context_4392_, lean_object* v_op_4393_, lean_object* v_flags_4394_, lean_object* v_payload_4395_, lean_object* v_failurePrefix_4396_, lean_object* v_a_4397_){
_start:
{
uint32_t v_op_boxed_4398_; uint64_t v_flags_boxed_4399_; lean_object* v_res_4400_; 
v_op_boxed_4398_ = lean_unbox_uint32(v_op_4393_);
lean_dec(v_op_4393_);
v_flags_boxed_4399_ = lean_unbox_uint64(v_flags_4394_);
lean_dec_ref(v_flags_4394_);
v_res_4400_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1(v_context_4392_, v_op_boxed_4398_, v_flags_boxed_4399_, v_payload_4395_, v_failurePrefix_4396_);
return v_res_4400_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4401_; uint8_t v___x_4402_; uint64_t v___x_4403_; 
v___x_4401_ = 8ULL;
v___x_4402_ = 0;
v___x_4403_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0(v___x_4402_, v___x_4401_);
return v___x_4403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0(lean_object* v_o_4404_, lean_object* v_name_4405_, lean_object* v_args_4406_){
_start:
{
lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; uint32_t v___x_4413_; uint64_t v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; 
v___x_4408_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4409_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4409_, 0, v_o_4404_);
lean_ctor_set(v___x_4409_, 1, v___x_4408_);
lean_inc_ref(v_name_4405_);
v___x_4410_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4410_, 0, v_name_4405_);
v___x_4411_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_4412_ = lean_string_append(v___x_4411_, v_name_4405_);
lean_dec_ref(v_name_4405_);
v___x_4413_ = 205;
v___x_4414_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0);
v___x_4415_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4415_, 0, v_args_4406_);
v___x_4416_ = lean_unsigned_to_nat(3u);
v___x_4417_ = lean_mk_empty_array_with_capacity(v___x_4416_);
v___x_4418_ = lean_array_push(v___x_4417_, v___x_4409_);
v___x_4419_ = lean_array_push(v___x_4418_, v___x_4410_);
v___x_4420_ = lean_array_push(v___x_4419_, v___x_4415_);
v___x_4421_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4421_, 0, v___x_4420_);
v___x_4422_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1(v___x_4412_, v___x_4413_, v___x_4414_, v___x_4421_, v___x_4408_);
return v___x_4422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___boxed(lean_object* v_o_4423_, lean_object* v_name_4424_, lean_object* v_args_4425_, lean_object* v___y_4426_){
_start:
{
lean_object* v_res_4427_; 
v_res_4427_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0(v_o_4423_, v_name_4424_, v_args_4425_);
return v_res_4427_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_AtomicOperation_commit___closed__1(void){
_start:
{
lean_object* v___x_4429_; lean_object* v___x_4430_; 
v___x_4429_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v___x_4430_ = l_Lasm_JS_Web_Support_args(v___x_4429_);
return v___x_4430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_commit(lean_object* v_self_4431_){
_start:
{
lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; 
v___x_4433_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_commit___closed__0));
v___x_4434_ = lean_obj_once(&l_Lasm_JS_Deno_AtomicOperation_commit___closed__1, &l_Lasm_JS_Deno_AtomicOperation_commit___closed__1_once, _init_l_Lasm_JS_Deno_AtomicOperation_commit___closed__1);
v___x_4435_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0(v_self_4431_, v___x_4433_, v___x_4434_);
return v___x_4435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_commit___boxed(lean_object* v_self_4436_, lean_object* v_a_4437_){
_start:
{
lean_object* v_res_4438_; 
v_res_4438_ = l_Lasm_JS_Deno_AtomicOperation_commit(v_self_4436_);
return v_res_4438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4(lean_object* v_context_4439_, lean_object* v_d_4440_){
_start:
{
lean_object* v___y_4443_; lean_object* v___y_4444_; lean_object* v___y_4449_; lean_object* v_received_4450_; lean_object* v___y_4469_; lean_object* v_a_4472_; lean_object* v___x_4496_; lean_object* v___x_4497_; 
v___x_4496_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
lean_inc(v_d_4440_);
v___x_4497_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_4440_, v___x_4496_);
if (lean_obj_tag(v___x_4497_) == 0)
{
lean_object* v_a_4498_; 
v_a_4498_ = lean_ctor_get(v___x_4497_, 0);
lean_inc(v_a_4498_);
lean_dec_ref_known(v___x_4497_, 1);
v_a_4472_ = v_a_4498_;
goto v___jp_4471_;
}
else
{
lean_object* v_a_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; 
v_a_4499_ = lean_ctor_get(v___x_4497_, 0);
lean_inc(v_a_4499_);
lean_dec_ref_known(v___x_4497_, 1);
v___x_4500_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
lean_inc(v_d_4440_);
v___x_4501_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_4440_, v___x_4500_);
if (lean_obj_tag(v___x_4501_) == 0)
{
lean_object* v_a_4502_; 
lean_dec(v_a_4499_);
v_a_4502_ = lean_ctor_get(v___x_4501_, 0);
lean_inc(v_a_4502_);
lean_dec_ref_known(v___x_4501_, 1);
v_a_4472_ = v_a_4502_;
goto v___jp_4471_;
}
else
{
lean_object* v_a_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; 
v_a_4503_ = lean_ctor_get(v___x_4501_, 0);
lean_inc(v_a_4503_);
lean_dec_ref_known(v___x_4501_, 1);
v___x_4504_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_d_4440_);
v___x_4505_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(v_d_4440_, v___x_4504_);
if (lean_obj_tag(v___x_4505_) == 0)
{
lean_object* v_a_4506_; 
lean_dec(v_a_4503_);
lean_dec(v_a_4499_);
v_a_4506_ = lean_ctor_get(v___x_4505_, 0);
lean_inc(v_a_4506_);
lean_dec_ref_known(v___x_4505_, 1);
v_a_4472_ = v_a_4506_;
goto v___jp_4471_;
}
else
{
lean_object* v_a_4507_; lean_object* v___x_4509_; uint8_t v_isShared_4510_; uint8_t v_isSharedCheck_4515_; 
lean_dec(v_d_4440_);
v_a_4507_ = lean_ctor_get(v___x_4505_, 0);
v_isSharedCheck_4515_ = !lean_is_exclusive(v___x_4505_);
if (v_isSharedCheck_4515_ == 0)
{
v___x_4509_ = v___x_4505_;
v_isShared_4510_ = v_isSharedCheck_4515_;
goto v_resetjp_4508_;
}
else
{
lean_inc(v_a_4507_);
lean_dec(v___x_4505_);
v___x_4509_ = lean_box(0);
v_isShared_4510_ = v_isSharedCheck_4515_;
goto v_resetjp_4508_;
}
v_resetjp_4508_:
{
lean_object* v___x_4511_; lean_object* v___x_4513_; 
v___x_4511_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4511_, 0, v_a_4499_);
lean_ctor_set(v___x_4511_, 1, v_a_4503_);
lean_ctor_set(v___x_4511_, 2, v_a_4507_);
if (v_isShared_4510_ == 0)
{
lean_ctor_set_tag(v___x_4509_, 0);
lean_ctor_set(v___x_4509_, 0, v___x_4511_);
v___x_4513_ = v___x_4509_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4514_; 
v_reuseFailAlloc_4514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4514_, 0, v___x_4511_);
v___x_4513_ = v_reuseFailAlloc_4514_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
return v___x_4513_;
}
}
}
}
}
v___jp_4442_:
{
lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; 
v___x_4445_ = lean_string_append(v___y_4443_, v___y_4444_);
lean_dec_ref(v___y_4444_);
v___x_4446_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4446_, 0, v___x_4445_);
v___x_4447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4447_, 0, v___x_4446_);
return v___x_4447_;
}
v___jp_4448_:
{
lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; uint8_t v___x_4462_; 
v___x_4451_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_4452_ = lean_string_append(v___x_4451_, v_context_4439_);
v___x_4453_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_4454_ = lean_string_append(v___x_4452_, v___x_4453_);
v___x_4455_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__1));
v___x_4456_ = lean_string_append(v___x_4454_, v___x_4455_);
v___x_4457_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_4458_ = lean_string_append(v___x_4456_, v___x_4457_);
v___x_4459_ = lean_string_append(v___x_4458_, v_received_4450_);
lean_dec_ref(v_received_4450_);
v___x_4460_ = lean_string_utf8_byte_size(v___y_4449_);
v___x_4461_ = lean_unsigned_to_nat(0u);
v___x_4462_ = lean_nat_dec_eq(v___x_4460_, v___x_4461_);
if (v___x_4462_ == 0)
{
lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; 
v___x_4463_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_4464_ = lean_string_append(v___x_4463_, v___y_4449_);
lean_dec_ref(v___y_4449_);
v___x_4465_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4466_ = lean_string_append(v___x_4464_, v___x_4465_);
v___y_4443_ = v___x_4459_;
v___y_4444_ = v___x_4466_;
goto v___jp_4442_;
}
else
{
lean_object* v___x_4467_; 
lean_dec_ref(v___y_4449_);
v___x_4467_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_4443_ = v___x_4459_;
v___y_4444_ = v___x_4467_;
goto v___jp_4442_;
}
}
v___jp_4468_:
{
lean_object* v___x_4470_; 
v___x_4470_ = l_Lasm_JS_Data_describe(v_d_4440_);
v___y_4449_ = v___y_4469_;
v_received_4450_ = v___x_4470_;
goto v___jp_4448_;
}
v___jp_4471_:
{
if (lean_obj_tag(v_d_4440_) == 9)
{
lean_object* v_value_4473_; lean_object* v_description_4474_; lean_object* v___x_4475_; uint8_t v___x_4476_; 
v_value_4473_ = lean_ctor_get(v_d_4440_, 0);
v_description_4474_ = lean_ctor_get(v_d_4440_, 1);
v___x_4475_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4476_ = lean_string_dec_eq(v_description_4474_, v___x_4475_);
if (v___x_4476_ == 0)
{
v___y_4469_ = v_a_4472_;
goto v___jp_4468_;
}
else
{
lean_object* v___x_4478_; uint8_t v_isShared_4479_; uint8_t v_isSharedCheck_4493_; 
lean_inc(v_value_4473_);
v_isSharedCheck_4493_ = !lean_is_exclusive(v_d_4440_);
if (v_isSharedCheck_4493_ == 0)
{
lean_object* v_unused_4494_; lean_object* v_unused_4495_; 
v_unused_4494_ = lean_ctor_get(v_d_4440_, 1);
lean_dec(v_unused_4494_);
v_unused_4495_ = lean_ctor_get(v_d_4440_, 0);
lean_dec(v_unused_4495_);
v___x_4478_ = v_d_4440_;
v_isShared_4479_ = v_isSharedCheck_4493_;
goto v_resetjp_4477_;
}
else
{
lean_dec(v_d_4440_);
v___x_4478_ = lean_box(0);
v_isShared_4479_ = v_isSharedCheck_4493_;
goto v_resetjp_4477_;
}
v_resetjp_4477_:
{
uint32_t v___x_4480_; uint64_t v___x_4481_; lean_object* v___x_4483_; 
v___x_4480_ = 206;
v___x_4481_ = 0ULL;
lean_inc(v_value_4473_);
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 1, v___x_4475_);
v___x_4483_ = v___x_4478_;
goto v_reusejp_4482_;
}
else
{
lean_object* v_reuseFailAlloc_4492_; 
v_reuseFailAlloc_4492_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4492_, 0, v_value_4473_);
lean_ctor_set(v_reuseFailAlloc_4492_, 1, v___x_4475_);
v___x_4483_ = v_reuseFailAlloc_4492_;
goto v_reusejp_4482_;
}
v_reusejp_4482_:
{
uint32_t v___x_4484_; lean_object* v___x_4485_; 
v___x_4484_ = lasm_js_value_handle(v_value_4473_);
lean_dec(v_value_4473_);
v___x_4485_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4480_, v___x_4481_, v___x_4483_, v___x_4484_);
lean_dec_ref(v___x_4483_);
if (lean_obj_tag(v___x_4485_) == 0)
{
lean_object* v_a_4486_; uint8_t v___x_4487_; 
v_a_4486_ = lean_ctor_get(v___x_4485_, 0);
lean_inc(v_a_4486_);
lean_dec_ref_known(v___x_4485_, 1);
v___x_4487_ = lean_string_validate_utf8(v_a_4486_);
if (v___x_4487_ == 0)
{
lean_object* v___x_4488_; lean_object* v___x_4489_; 
lean_dec(v_a_4486_);
v___x_4488_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_4489_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4488_);
v___y_4449_ = v_a_4472_;
v_received_4450_ = v___x_4489_;
goto v___jp_4448_;
}
else
{
lean_object* v___x_4490_; 
v___x_4490_ = lean_string_from_utf8_unchecked(v_a_4486_);
v___y_4449_ = v_a_4472_;
v_received_4450_ = v___x_4490_;
goto v___jp_4448_;
}
}
else
{
lean_object* v___x_4491_; 
lean_dec_ref_known(v___x_4485_, 1);
v___x_4491_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_4449_ = v_a_4472_;
v_received_4450_ = v___x_4491_;
goto v___jp_4448_;
}
}
}
}
}
else
{
v___y_4469_ = v_a_4472_;
goto v___jp_4468_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4___boxed(lean_object* v_context_4516_, lean_object* v_d_4517_, lean_object* v_a_4518_){
_start:
{
lean_object* v_res_4519_; 
v_res_4519_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4(v_context_4516_, v_d_4517_);
lean_dec_ref(v_context_4516_);
return v_res_4519_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0(lean_object* v_context_4520_, lean_object* v_x_4521_){
_start:
{
lean_object* v_val_4524_; 
if (lean_obj_tag(v_x_4521_) == 0)
{
lean_object* v_a_4526_; lean_object* v___x_4528_; uint8_t v_isShared_4529_; uint8_t v_isSharedCheck_4534_; 
v_a_4526_ = lean_ctor_get(v_x_4521_, 0);
v_isSharedCheck_4534_ = !lean_is_exclusive(v_x_4521_);
if (v_isSharedCheck_4534_ == 0)
{
v___x_4528_ = v_x_4521_;
v_isShared_4529_ = v_isSharedCheck_4534_;
goto v_resetjp_4527_;
}
else
{
lean_inc(v_a_4526_);
lean_dec(v_x_4521_);
v___x_4528_ = lean_box(0);
v_isShared_4529_ = v_isSharedCheck_4534_;
goto v_resetjp_4527_;
}
v_resetjp_4527_:
{
lean_object* v___x_4531_; 
if (v_isShared_4529_ == 0)
{
v___x_4531_ = v___x_4528_;
goto v_reusejp_4530_;
}
else
{
lean_object* v_reuseFailAlloc_4533_; 
v_reuseFailAlloc_4533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4533_, 0, v_a_4526_);
v___x_4531_ = v_reuseFailAlloc_4533_;
goto v_reusejp_4530_;
}
v_reusejp_4530_:
{
lean_object* v___x_4532_; 
v___x_4532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4532_, 0, v___x_4531_);
return v___x_4532_;
}
}
}
else
{
lean_object* v_a_4535_; lean_object* v___x_4537_; uint8_t v_isShared_4538_; uint8_t v_isSharedCheck_4548_; 
v_a_4535_ = lean_ctor_get(v_x_4521_, 0);
v_isSharedCheck_4548_ = !lean_is_exclusive(v_x_4521_);
if (v_isSharedCheck_4548_ == 0)
{
v___x_4537_ = v_x_4521_;
v_isShared_4538_ = v_isSharedCheck_4548_;
goto v_resetjp_4536_;
}
else
{
lean_inc(v_a_4535_);
lean_dec(v_x_4521_);
v___x_4537_ = lean_box(0);
v_isShared_4538_ = v_isSharedCheck_4548_;
goto v_resetjp_4536_;
}
v_resetjp_4536_:
{
lean_object* v___x_4539_; 
v___x_4539_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4(v_context_4520_, v_a_4535_);
if (lean_obj_tag(v___x_4539_) == 0)
{
lean_object* v_a_4540_; lean_object* v___x_4542_; 
v_a_4540_ = lean_ctor_get(v___x_4539_, 0);
lean_inc(v_a_4540_);
lean_dec_ref_known(v___x_4539_, 1);
if (v_isShared_4538_ == 0)
{
lean_ctor_set(v___x_4537_, 0, v_a_4540_);
v___x_4542_ = v___x_4537_;
goto v_reusejp_4541_;
}
else
{
lean_object* v_reuseFailAlloc_4543_; 
v_reuseFailAlloc_4543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4543_, 0, v_a_4540_);
v___x_4542_ = v_reuseFailAlloc_4543_;
goto v_reusejp_4541_;
}
v_reusejp_4541_:
{
v_val_4524_ = v___x_4542_;
goto v___jp_4523_;
}
}
else
{
lean_object* v_a_4544_; lean_object* v___x_4546_; 
v_a_4544_ = lean_ctor_get(v___x_4539_, 0);
lean_inc(v_a_4544_);
lean_dec_ref_known(v___x_4539_, 1);
if (v_isShared_4538_ == 0)
{
lean_ctor_set_tag(v___x_4537_, 0);
lean_ctor_set(v___x_4537_, 0, v_a_4544_);
v___x_4546_ = v___x_4537_;
goto v_reusejp_4545_;
}
else
{
lean_object* v_reuseFailAlloc_4547_; 
v_reuseFailAlloc_4547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4547_, 0, v_a_4544_);
v___x_4546_ = v_reuseFailAlloc_4547_;
goto v_reusejp_4545_;
}
v_reusejp_4545_:
{
v_val_4524_ = v___x_4546_;
goto v___jp_4523_;
}
}
}
}
v___jp_4523_:
{
lean_object* v___x_4525_; 
v___x_4525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4525_, 0, v_val_4524_);
return v___x_4525_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0___boxed(lean_object* v_context_4549_, lean_object* v_x_4550_, lean_object* v___y_4551_){
_start:
{
lean_object* v_res_4552_; 
v_res_4552_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0(v_context_4549_, v_x_4550_);
lean_dec_ref(v_context_4549_);
return v_res_4552_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3(lean_object* v___f_4553_, lean_object* v_x_4554_){
_start:
{
if (lean_obj_tag(v_x_4554_) == 0)
{
lean_object* v_a_4556_; lean_object* v___x_4558_; uint8_t v_isShared_4559_; uint8_t v_isSharedCheck_4564_; 
lean_dec_ref(v___f_4553_);
v_a_4556_ = lean_ctor_get(v_x_4554_, 0);
v_isSharedCheck_4564_ = !lean_is_exclusive(v_x_4554_);
if (v_isSharedCheck_4564_ == 0)
{
v___x_4558_ = v_x_4554_;
v_isShared_4559_ = v_isSharedCheck_4564_;
goto v_resetjp_4557_;
}
else
{
lean_inc(v_a_4556_);
lean_dec(v_x_4554_);
v___x_4558_ = lean_box(0);
v_isShared_4559_ = v_isSharedCheck_4564_;
goto v_resetjp_4557_;
}
v_resetjp_4557_:
{
lean_object* v___x_4561_; 
if (v_isShared_4559_ == 0)
{
v___x_4561_ = v___x_4558_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4563_; 
v_reuseFailAlloc_4563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4563_, 0, v_a_4556_);
v___x_4561_ = v_reuseFailAlloc_4563_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
lean_object* v___x_4562_; 
v___x_4562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4562_, 0, v___x_4561_);
return v___x_4562_;
}
}
}
else
{
lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4576_; 
v_isSharedCheck_4576_ = !lean_is_exclusive(v_x_4554_);
if (v_isSharedCheck_4576_ == 0)
{
lean_object* v_unused_4577_; 
v_unused_4577_ = lean_ctor_get(v_x_4554_, 0);
lean_dec(v_unused_4577_);
v___x_4566_ = v_x_4554_;
v_isShared_4567_ = v_isSharedCheck_4576_;
goto v_resetjp_4565_;
}
else
{
lean_dec(v_x_4554_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4576_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v___x_4568_; uint8_t v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4572_; 
v___x_4568_ = lean_unsigned_to_nat(0u);
v___x_4569_ = 0;
v___x_4570_ = lean_io_promise_new();
if (v_isShared_4567_ == 0)
{
lean_ctor_set(v___x_4566_, 0, v___x_4570_);
v___x_4572_ = v___x_4566_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v___x_4570_);
v___x_4572_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
lean_object* v___x_4573_; lean_object* v___x_4574_; 
v___x_4573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4573_, 0, v___x_4572_);
v___x_4574_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4568_, v___x_4569_, v___x_4573_, v___f_4553_);
return v___x_4574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3___boxed(lean_object* v___f_4578_, lean_object* v_x_4579_, lean_object* v___y_4580_){
_start:
{
lean_object* v_res_4581_; 
v_res_4581_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3(v___f_4578_, v_x_4579_);
return v_res_4581_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2(lean_object* v___f_4582_, lean_object* v_x_4583_){
_start:
{
if (lean_obj_tag(v_x_4583_) == 0)
{
lean_object* v_a_4585_; lean_object* v___x_4587_; uint8_t v_isShared_4588_; uint8_t v_isSharedCheck_4593_; 
lean_dec_ref(v___f_4582_);
v_a_4585_ = lean_ctor_get(v_x_4583_, 0);
v_isSharedCheck_4593_ = !lean_is_exclusive(v_x_4583_);
if (v_isSharedCheck_4593_ == 0)
{
v___x_4587_ = v_x_4583_;
v_isShared_4588_ = v_isSharedCheck_4593_;
goto v_resetjp_4586_;
}
else
{
lean_inc(v_a_4585_);
lean_dec(v_x_4583_);
v___x_4587_ = lean_box(0);
v_isShared_4588_ = v_isSharedCheck_4593_;
goto v_resetjp_4586_;
}
v_resetjp_4586_:
{
lean_object* v___x_4590_; 
if (v_isShared_4588_ == 0)
{
v___x_4590_ = v___x_4587_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4592_; 
v_reuseFailAlloc_4592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4592_, 0, v_a_4585_);
v___x_4590_ = v_reuseFailAlloc_4592_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
lean_object* v___x_4591_; 
v___x_4591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4591_, 0, v___x_4590_);
return v___x_4591_;
}
}
}
else
{
lean_object* v_a_4594_; lean_object* v___x_4595_; 
v_a_4594_ = lean_ctor_get(v_x_4583_, 0);
lean_inc(v_a_4594_);
lean_dec_ref_known(v_x_4583_, 1);
v___x_4595_ = lean_apply_2(v___f_4582_, v_a_4594_, lean_box(0));
return v___x_4595_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2___boxed(lean_object* v___f_4596_, lean_object* v_x_4597_, lean_object* v___y_4598_){
_start:
{
lean_object* v_res_4599_; 
v_res_4599_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2(v___f_4596_, v_x_4597_);
return v_res_4599_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1(lean_object* v___f_4600_, lean_object* v_bytes_4601_){
_start:
{
lean_object* v___x_4603_; uint8_t v___x_4604_; lean_object* v_val_4606_; lean_object* v___x_4609_; 
v___x_4603_ = lean_unsigned_to_nat(0u);
v___x_4604_ = 0;
v___x_4609_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4601_);
if (lean_obj_tag(v___x_4609_) == 0)
{
lean_object* v_a_4610_; lean_object* v___x_4612_; uint8_t v_isShared_4613_; uint8_t v_isSharedCheck_4617_; 
v_a_4610_ = lean_ctor_get(v___x_4609_, 0);
v_isSharedCheck_4617_ = !lean_is_exclusive(v___x_4609_);
if (v_isSharedCheck_4617_ == 0)
{
v___x_4612_ = v___x_4609_;
v_isShared_4613_ = v_isSharedCheck_4617_;
goto v_resetjp_4611_;
}
else
{
lean_inc(v_a_4610_);
lean_dec(v___x_4609_);
v___x_4612_ = lean_box(0);
v_isShared_4613_ = v_isSharedCheck_4617_;
goto v_resetjp_4611_;
}
v_resetjp_4611_:
{
lean_object* v___x_4615_; 
if (v_isShared_4613_ == 0)
{
lean_ctor_set_tag(v___x_4612_, 1);
v___x_4615_ = v___x_4612_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v_a_4610_);
v___x_4615_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4614_;
}
v_reusejp_4614_:
{
v_val_4606_ = v___x_4615_;
goto v___jp_4605_;
}
}
}
else
{
lean_object* v_a_4618_; lean_object* v___x_4620_; uint8_t v_isShared_4621_; uint8_t v_isSharedCheck_4625_; 
v_a_4618_ = lean_ctor_get(v___x_4609_, 0);
v_isSharedCheck_4625_ = !lean_is_exclusive(v___x_4609_);
if (v_isSharedCheck_4625_ == 0)
{
v___x_4620_ = v___x_4609_;
v_isShared_4621_ = v_isSharedCheck_4625_;
goto v_resetjp_4619_;
}
else
{
lean_inc(v_a_4618_);
lean_dec(v___x_4609_);
v___x_4620_ = lean_box(0);
v_isShared_4621_ = v_isSharedCheck_4625_;
goto v_resetjp_4619_;
}
v_resetjp_4619_:
{
lean_object* v___x_4623_; 
if (v_isShared_4621_ == 0)
{
lean_ctor_set_tag(v___x_4620_, 0);
v___x_4623_ = v___x_4620_;
goto v_reusejp_4622_;
}
else
{
lean_object* v_reuseFailAlloc_4624_; 
v_reuseFailAlloc_4624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4624_, 0, v_a_4618_);
v___x_4623_ = v_reuseFailAlloc_4624_;
goto v_reusejp_4622_;
}
v_reusejp_4622_:
{
v_val_4606_ = v___x_4623_;
goto v___jp_4605_;
}
}
}
v___jp_4605_:
{
lean_object* v___x_4607_; lean_object* v___x_4608_; 
v___x_4607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4607_, 0, v_val_4606_);
v___x_4608_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4603_, v___x_4604_, v___x_4607_, v___f_4600_);
return v___x_4608_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1___boxed(lean_object* v___f_4626_, lean_object* v_bytes_4627_, lean_object* v___y_4628_){
_start:
{
lean_object* v_res_4629_; 
v_res_4629_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1(v___f_4626_, v_bytes_4627_);
lean_dec_ref(v_bytes_4627_);
return v_res_4629_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9(lean_object* v_failurePrefix_4630_, uint32_t v_op_4631_, uint64_t v_flags_4632_, lean_object* v_payload_4633_, lean_object* v___f_4634_, lean_object* v___f_4635_, lean_object* v___f_4636_, lean_object* v_x_4637_){
_start:
{
if (lean_obj_tag(v_x_4637_) == 0)
{
lean_object* v_a_4639_; lean_object* v___x_4641_; uint8_t v_isShared_4642_; uint8_t v_isSharedCheck_4647_; 
lean_dec_ref(v___f_4636_);
lean_dec_ref(v___f_4635_);
lean_dec_ref(v___f_4634_);
lean_dec(v_payload_4633_);
v_a_4639_ = lean_ctor_get(v_x_4637_, 0);
v_isSharedCheck_4647_ = !lean_is_exclusive(v_x_4637_);
if (v_isSharedCheck_4647_ == 0)
{
v___x_4641_ = v_x_4637_;
v_isShared_4642_ = v_isSharedCheck_4647_;
goto v_resetjp_4640_;
}
else
{
lean_inc(v_a_4639_);
lean_dec(v_x_4637_);
v___x_4641_ = lean_box(0);
v_isShared_4642_ = v_isSharedCheck_4647_;
goto v_resetjp_4640_;
}
v_resetjp_4640_:
{
lean_object* v___x_4644_; 
if (v_isShared_4642_ == 0)
{
v___x_4644_ = v___x_4641_;
goto v_reusejp_4643_;
}
else
{
lean_object* v_reuseFailAlloc_4646_; 
v_reuseFailAlloc_4646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4646_, 0, v_a_4639_);
v___x_4644_ = v_reuseFailAlloc_4646_;
goto v_reusejp_4643_;
}
v_reusejp_4643_:
{
lean_object* v___x_4645_; 
v___x_4645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4645_, 0, v___x_4644_);
return v___x_4645_;
}
}
}
else
{
lean_object* v_a_4648_; lean_object* v___x_4650_; uint8_t v_isShared_4651_; uint8_t v_isSharedCheck_4694_; 
v_a_4648_ = lean_ctor_get(v_x_4637_, 0);
v_isSharedCheck_4694_ = !lean_is_exclusive(v_x_4637_);
if (v_isSharedCheck_4694_ == 0)
{
v___x_4650_ = v_x_4637_;
v_isShared_4651_ = v_isSharedCheck_4694_;
goto v_resetjp_4649_;
}
else
{
lean_inc(v_a_4648_);
lean_dec(v_x_4637_);
v___x_4650_ = lean_box(0);
v_isShared_4651_ = v_isSharedCheck_4694_;
goto v_resetjp_4649_;
}
v_resetjp_4649_:
{
lean_object* v___x_4652_; lean_object* v___x_4653_; uint8_t v___x_4654_; 
v___x_4652_ = lean_string_utf8_byte_size(v_failurePrefix_4630_);
v___x_4653_ = lean_unsigned_to_nat(0u);
v___x_4654_ = lean_nat_dec_eq(v___x_4652_, v___x_4653_);
if (v___x_4654_ == 0)
{
lean_object* v___f_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___f_4659_; lean_object* v_val_4661_; lean_object* v___x_4666_; 
lean_dec_ref(v___f_4636_);
lean_inc(v_a_4648_);
v___f_4655_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4655_, 0, v_a_4648_);
v___x_4656_ = lean_box(v___x_4654_);
v___x_4657_ = lean_box_uint32(v_op_4631_);
v___x_4658_ = lean_box_uint64(v_flags_4632_);
lean_inc(v_payload_4633_);
v___f_4659_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4659_, 0, v___x_4653_);
lean_closure_set(v___f_4659_, 1, v___x_4656_);
lean_closure_set(v___f_4659_, 2, v___f_4655_);
lean_closure_set(v___f_4659_, 3, v_a_4648_);
lean_closure_set(v___f_4659_, 4, v___x_4657_);
lean_closure_set(v___f_4659_, 5, v___x_4658_);
lean_closure_set(v___f_4659_, 6, v_payload_4633_);
v___x_4666_ = l_Lasm_JS_Wire_encodeIO(v_payload_4633_);
lean_dec(v_payload_4633_);
if (lean_obj_tag(v___x_4666_) == 0)
{
lean_object* v_a_4667_; lean_object* v___x_4669_; 
v_a_4667_ = lean_ctor_get(v___x_4666_, 0);
lean_inc(v_a_4667_);
lean_dec_ref_known(v___x_4666_, 1);
if (v_isShared_4651_ == 0)
{
lean_ctor_set(v___x_4650_, 0, v_a_4667_);
v___x_4669_ = v___x_4650_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v_a_4667_);
v___x_4669_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
v_val_4661_ = v___x_4669_;
goto v___jp_4660_;
}
}
else
{
lean_object* v_a_4671_; lean_object* v___x_4673_; 
v_a_4671_ = lean_ctor_get(v___x_4666_, 0);
lean_inc(v_a_4671_);
lean_dec_ref_known(v___x_4666_, 1);
if (v_isShared_4651_ == 0)
{
lean_ctor_set_tag(v___x_4650_, 0);
lean_ctor_set(v___x_4650_, 0, v_a_4671_);
v___x_4673_ = v___x_4650_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4674_; 
v_reuseFailAlloc_4674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4674_, 0, v_a_4671_);
v___x_4673_ = v_reuseFailAlloc_4674_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
v_val_4661_ = v___x_4673_;
goto v___jp_4660_;
}
}
v___jp_4660_:
{
lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; 
v___x_4662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4662_, 0, v_val_4661_);
v___x_4663_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4653_, v___x_4654_, v___x_4662_, v___f_4659_);
v___x_4664_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4653_, v___x_4654_, v___x_4663_, v___f_4634_);
v___x_4665_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4653_, v___x_4654_, v___x_4664_, v___f_4635_);
return v___x_4665_;
}
}
else
{
lean_object* v___f_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___f_4678_; uint8_t v___x_4679_; lean_object* v_val_4681_; lean_object* v___x_4685_; 
lean_dec_ref(v___f_4635_);
lean_dec_ref(v___f_4634_);
lean_inc(v_a_4648_);
v___f_4675_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4675_, 0, v_a_4648_);
v___x_4676_ = lean_box_uint32(v_op_4631_);
v___x_4677_ = lean_box_uint64(v_flags_4632_);
lean_inc(v_payload_4633_);
v___f_4678_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4678_, 0, v___f_4675_);
lean_closure_set(v___f_4678_, 1, v_a_4648_);
lean_closure_set(v___f_4678_, 2, v___x_4676_);
lean_closure_set(v___f_4678_, 3, v___x_4677_);
lean_closure_set(v___f_4678_, 4, v_payload_4633_);
v___x_4679_ = 0;
v___x_4685_ = l_Lasm_JS_Wire_encodeIO(v_payload_4633_);
lean_dec(v_payload_4633_);
if (lean_obj_tag(v___x_4685_) == 0)
{
lean_object* v_a_4686_; lean_object* v___x_4688_; 
v_a_4686_ = lean_ctor_get(v___x_4685_, 0);
lean_inc(v_a_4686_);
lean_dec_ref_known(v___x_4685_, 1);
if (v_isShared_4651_ == 0)
{
lean_ctor_set(v___x_4650_, 0, v_a_4686_);
v___x_4688_ = v___x_4650_;
goto v_reusejp_4687_;
}
else
{
lean_object* v_reuseFailAlloc_4689_; 
v_reuseFailAlloc_4689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4689_, 0, v_a_4686_);
v___x_4688_ = v_reuseFailAlloc_4689_;
goto v_reusejp_4687_;
}
v_reusejp_4687_:
{
v_val_4681_ = v___x_4688_;
goto v___jp_4680_;
}
}
else
{
lean_object* v_a_4690_; lean_object* v___x_4692_; 
v_a_4690_ = lean_ctor_get(v___x_4685_, 0);
lean_inc(v_a_4690_);
lean_dec_ref_known(v___x_4685_, 1);
if (v_isShared_4651_ == 0)
{
lean_ctor_set_tag(v___x_4650_, 0);
lean_ctor_set(v___x_4650_, 0, v_a_4690_);
v___x_4692_ = v___x_4650_;
goto v_reusejp_4691_;
}
else
{
lean_object* v_reuseFailAlloc_4693_; 
v_reuseFailAlloc_4693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4693_, 0, v_a_4690_);
v___x_4692_ = v_reuseFailAlloc_4693_;
goto v_reusejp_4691_;
}
v_reusejp_4691_:
{
v_val_4681_ = v___x_4692_;
goto v___jp_4680_;
}
}
v___jp_4680_:
{
lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; 
v___x_4682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4682_, 0, v_val_4681_);
v___x_4683_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4653_, v___x_4679_, v___x_4682_, v___f_4678_);
v___x_4684_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4653_, v___x_4679_, v___x_4683_, v___f_4636_);
return v___x_4684_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9___boxed(lean_object* v_failurePrefix_4695_, lean_object* v_op_4696_, lean_object* v_flags_4697_, lean_object* v_payload_4698_, lean_object* v___f_4699_, lean_object* v___f_4700_, lean_object* v___f_4701_, lean_object* v_x_4702_, lean_object* v___y_4703_){
_start:
{
uint32_t v_op_boxed_4704_; uint64_t v_flags_boxed_4705_; lean_object* v_res_4706_; 
v_op_boxed_4704_ = lean_unbox_uint32(v_op_4696_);
lean_dec(v_op_4696_);
v_flags_boxed_4705_ = lean_unbox_uint64(v_flags_4697_);
lean_dec_ref(v_flags_4697_);
v_res_4706_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9(v_failurePrefix_4695_, v_op_boxed_4704_, v_flags_boxed_4705_, v_payload_4698_, v___f_4699_, v___f_4700_, v___f_4701_, v_x_4702_);
lean_dec_ref(v_failurePrefix_4695_);
return v_res_4706_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3(lean_object* v_context_4707_, uint32_t v_op_4708_, uint64_t v_flags_4709_, lean_object* v_payload_4710_, lean_object* v_failurePrefix_4711_){
_start:
{
lean_object* v___f_4713_; lean_object* v___f_4714_; lean_object* v___f_4715_; lean_object* v___f_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___f_4719_; lean_object* v___f_4720_; lean_object* v___x_4721_; uint8_t v___x_4722_; lean_object* v_val_4724_; lean_object* v___x_4727_; 
v___f_4713_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4713_, 0, v_context_4707_);
v___f_4714_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4714_, 0, v___f_4713_);
v___f_4715_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4715_, 0, v___f_4714_);
lean_inc_ref(v_failurePrefix_4711_);
v___f_4716_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4716_, 0, v_failurePrefix_4711_);
v___x_4717_ = lean_box_uint32(v_op_4708_);
v___x_4718_ = lean_box_uint64(v_flags_4709_);
lean_inc_ref(v___f_4715_);
v___f_4719_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4719_, 0, v_failurePrefix_4711_);
lean_closure_set(v___f_4719_, 1, v___x_4717_);
lean_closure_set(v___f_4719_, 2, v___x_4718_);
lean_closure_set(v___f_4719_, 3, v_payload_4710_);
lean_closure_set(v___f_4719_, 4, v___f_4716_);
lean_closure_set(v___f_4719_, 5, v___f_4715_);
lean_closure_set(v___f_4719_, 6, v___f_4715_);
v___f_4720_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4720_, 0, v___f_4719_);
v___x_4721_ = lean_unsigned_to_nat(0u);
v___x_4722_ = 0;
v___x_4727_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4727_) == 0)
{
lean_object* v_a_4728_; lean_object* v___x_4730_; uint8_t v_isShared_4731_; uint8_t v_isSharedCheck_4735_; 
v_a_4728_ = lean_ctor_get(v___x_4727_, 0);
v_isSharedCheck_4735_ = !lean_is_exclusive(v___x_4727_);
if (v_isSharedCheck_4735_ == 0)
{
v___x_4730_ = v___x_4727_;
v_isShared_4731_ = v_isSharedCheck_4735_;
goto v_resetjp_4729_;
}
else
{
lean_inc(v_a_4728_);
lean_dec(v___x_4727_);
v___x_4730_ = lean_box(0);
v_isShared_4731_ = v_isSharedCheck_4735_;
goto v_resetjp_4729_;
}
v_resetjp_4729_:
{
lean_object* v___x_4733_; 
if (v_isShared_4731_ == 0)
{
lean_ctor_set_tag(v___x_4730_, 1);
v___x_4733_ = v___x_4730_;
goto v_reusejp_4732_;
}
else
{
lean_object* v_reuseFailAlloc_4734_; 
v_reuseFailAlloc_4734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4734_, 0, v_a_4728_);
v___x_4733_ = v_reuseFailAlloc_4734_;
goto v_reusejp_4732_;
}
v_reusejp_4732_:
{
v_val_4724_ = v___x_4733_;
goto v___jp_4723_;
}
}
}
else
{
lean_object* v_a_4736_; lean_object* v___x_4738_; uint8_t v_isShared_4739_; uint8_t v_isSharedCheck_4743_; 
v_a_4736_ = lean_ctor_get(v___x_4727_, 0);
v_isSharedCheck_4743_ = !lean_is_exclusive(v___x_4727_);
if (v_isSharedCheck_4743_ == 0)
{
v___x_4738_ = v___x_4727_;
v_isShared_4739_ = v_isSharedCheck_4743_;
goto v_resetjp_4737_;
}
else
{
lean_inc(v_a_4736_);
lean_dec(v___x_4727_);
v___x_4738_ = lean_box(0);
v_isShared_4739_ = v_isSharedCheck_4743_;
goto v_resetjp_4737_;
}
v_resetjp_4737_:
{
lean_object* v___x_4741_; 
if (v_isShared_4739_ == 0)
{
lean_ctor_set_tag(v___x_4738_, 0);
v___x_4741_ = v___x_4738_;
goto v_reusejp_4740_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v_a_4736_);
v___x_4741_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4740_;
}
v_reusejp_4740_:
{
v_val_4724_ = v___x_4741_;
goto v___jp_4723_;
}
}
}
v___jp_4723_:
{
lean_object* v___x_4725_; lean_object* v___x_4726_; 
v___x_4725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4725_, 0, v_val_4724_);
v___x_4726_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4721_, v___x_4722_, v___x_4725_, v___f_4720_);
return v___x_4726_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___boxed(lean_object* v_context_4744_, lean_object* v_op_4745_, lean_object* v_flags_4746_, lean_object* v_payload_4747_, lean_object* v_failurePrefix_4748_, lean_object* v_a_4749_){
_start:
{
uint32_t v_op_boxed_4750_; uint64_t v_flags_boxed_4751_; lean_object* v_res_4752_; 
v_op_boxed_4750_ = lean_unbox_uint32(v_op_4745_);
lean_dec(v_op_4745_);
v_flags_boxed_4751_ = lean_unbox_uint64(v_flags_4746_);
lean_dec_ref(v_flags_4746_);
v_res_4752_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3(v_context_4744_, v_op_boxed_4750_, v_flags_boxed_4751_, v_payload_4747_, v_failurePrefix_4748_);
return v_res_4752_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2(uint8_t v_await_4753_, uint64_t v_extra_4754_){
_start:
{
uint64_t v___x_4755_; uint64_t v___y_4757_; 
v___x_4755_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_4753_ == 0)
{
uint64_t v___x_4760_; 
v___x_4760_ = 0ULL;
v___y_4757_ = v___x_4760_;
goto v___jp_4756_;
}
else
{
uint64_t v___x_4761_; 
v___x_4761_ = 2ULL;
v___y_4757_ = v___x_4761_;
goto v___jp_4756_;
}
v___jp_4756_:
{
uint64_t v___x_4758_; uint64_t v___x_4759_; 
v___x_4758_ = lean_uint64_lor(v___x_4755_, v___y_4757_);
v___x_4759_ = lean_uint64_lor(v___x_4758_, v_extra_4754_);
return v___x_4759_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2___boxed(lean_object* v_await_4762_, lean_object* v_extra_4763_){
_start:
{
uint8_t v_await_boxed_4764_; uint64_t v_extra_boxed_4765_; uint64_t v_res_4766_; lean_object* v_r_4767_; 
v_await_boxed_4764_ = lean_unbox(v_await_4762_);
v_extra_boxed_4765_ = lean_unbox_uint64(v_extra_4763_);
lean_dec_ref(v_extra_4763_);
v_res_4766_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2(v_await_boxed_4764_, v_extra_boxed_4765_);
v_r_4767_ = lean_box_uint64(v_res_4766_);
return v_r_4767_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0(void){
_start:
{
uint64_t v___x_4768_; uint8_t v___x_4769_; uint64_t v___x_4770_; 
v___x_4768_ = 8ULL;
v___x_4769_ = 0;
v___x_4770_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2(v___x_4769_, v___x_4768_);
return v___x_4770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1(lean_object* v_o_4771_, lean_object* v_name_4772_, lean_object* v_args_4773_){
_start:
{
lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; uint32_t v___x_4780_; uint64_t v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; 
v___x_4775_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4776_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4776_, 0, v_o_4771_);
lean_ctor_set(v___x_4776_, 1, v___x_4775_);
lean_inc_ref(v_name_4772_);
v___x_4777_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4777_, 0, v_name_4772_);
v___x_4778_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_4779_ = lean_string_append(v___x_4778_, v_name_4772_);
lean_dec_ref(v_name_4772_);
v___x_4780_ = 205;
v___x_4781_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0);
v___x_4782_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4782_, 0, v_args_4773_);
v___x_4783_ = lean_unsigned_to_nat(3u);
v___x_4784_ = lean_mk_empty_array_with_capacity(v___x_4783_);
v___x_4785_ = lean_array_push(v___x_4784_, v___x_4776_);
v___x_4786_ = lean_array_push(v___x_4785_, v___x_4777_);
v___x_4787_ = lean_array_push(v___x_4786_, v___x_4782_);
v___x_4788_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4788_, 0, v___x_4787_);
v___x_4789_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3(v___x_4779_, v___x_4780_, v___x_4781_, v___x_4788_, v___x_4775_);
return v___x_4789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___boxed(lean_object* v_o_4790_, lean_object* v_name_4791_, lean_object* v_args_4792_, lean_object* v___y_4793_){
_start:
{
lean_object* v_res_4794_; 
v_res_4794_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1(v_o_4790_, v_name_4791_, v_args_4792_);
return v_res_4794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(lean_object* v_x_4795_){
_start:
{
if (lean_obj_tag(v_x_4795_) == 0)
{
lean_object* v___x_4796_; 
v___x_4796_ = lean_box(0);
return v___x_4796_;
}
else
{
lean_object* v_val_4797_; uint8_t v___x_4798_; 
v_val_4797_ = lean_ctor_get(v_x_4795_, 0);
v___x_4798_ = lean_unbox(v_val_4797_);
if (v___x_4798_ == 0)
{
lean_object* v___x_4799_; 
v___x_4799_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__1));
return v___x_4799_;
}
else
{
lean_object* v___x_4800_; 
v___x_4800_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__3));
return v___x_4800_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0___boxed(lean_object* v_x_4801_){
_start:
{
lean_object* v_res_4802_; 
v_res_4802_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(v_x_4801_);
lean_dec(v_x_4801_);
return v_res_4802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0(lean_object* v_x_4803_){
_start:
{
if (lean_obj_tag(v_x_4803_) == 0)
{
lean_object* v___x_4804_; 
v___x_4804_ = lean_box(0);
return v___x_4804_;
}
else
{
lean_object* v_val_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; 
v_val_4805_ = lean_ctor_get(v_x_4803_, 0);
v___x_4806_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_4807_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(v_val_4805_);
v___x_4808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4808_, 0, v___x_4806_);
lean_ctor_set(v___x_4808_, 1, v___x_4807_);
v___x_4809_ = lean_unsigned_to_nat(1u);
v___x_4810_ = lean_mk_empty_array_with_capacity(v___x_4809_);
v___x_4811_ = lean_array_push(v___x_4810_, v___x_4808_);
v___x_4812_ = l_Lasm_JS_Web_Support_fields(v___x_4811_);
lean_dec_ref(v___x_4811_);
return v___x_4812_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0___boxed(lean_object* v_x_4813_){
_start:
{
lean_object* v_res_4814_; 
v_res_4814_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0(v_x_4813_);
lean_dec(v_x_4813_);
return v_res_4814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_get(lean_object* v_self_4816_, lean_object* v_key_4817_, lean_object* v_options_4818_){
_start:
{
lean_object* v___x_4820_; size_t v_sz_4821_; size_t v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; 
v___x_4820_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_get___closed__0));
v_sz_4821_ = lean_array_size(v_key_4817_);
v___x_4822_ = ((size_t)0ULL);
v___x_4823_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_4821_, v___x_4822_, v_key_4817_);
v___x_4824_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4824_, 0, v___x_4823_);
v___x_4825_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0(v_options_4818_);
v___x_4826_ = lean_unsigned_to_nat(2u);
v___x_4827_ = lean_mk_empty_array_with_capacity(v___x_4826_);
v___x_4828_ = lean_array_push(v___x_4827_, v___x_4824_);
v___x_4829_ = lean_array_push(v___x_4828_, v___x_4825_);
v___x_4830_ = l_Lasm_JS_Web_Support_args(v___x_4829_);
v___x_4831_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1(v_self_4816_, v___x_4820_, v___x_4830_);
return v___x_4831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_get___boxed(lean_object* v_self_4832_, lean_object* v_key_4833_, lean_object* v_options_4834_, lean_object* v_a_4835_){
_start:
{
lean_object* v_res_4836_; 
v_res_4836_ = l_Lasm_JS_Deno_Kv_get(v_self_4832_, v_key_4833_, v_options_4834_);
lean_dec(v_options_4834_);
return v_res_4836_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1(uint8_t v_await_4837_, uint64_t v_extra_4838_){
_start:
{
uint64_t v___x_4839_; uint64_t v___y_4841_; 
v___x_4839_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_4837_ == 0)
{
uint64_t v___x_4844_; 
v___x_4844_ = 0ULL;
v___y_4841_ = v___x_4844_;
goto v___jp_4840_;
}
else
{
uint64_t v___x_4845_; 
v___x_4845_ = 2ULL;
v___y_4841_ = v___x_4845_;
goto v___jp_4840_;
}
v___jp_4840_:
{
uint64_t v___x_4842_; uint64_t v___x_4843_; 
v___x_4842_ = lean_uint64_lor(v___x_4839_, v___y_4841_);
v___x_4843_ = lean_uint64_lor(v___x_4842_, v_extra_4838_);
return v___x_4843_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1___boxed(lean_object* v_await_4846_, lean_object* v_extra_4847_){
_start:
{
uint8_t v_await_boxed_4848_; uint64_t v_extra_boxed_4849_; uint64_t v_res_4850_; lean_object* v_r_4851_; 
v_await_boxed_4848_ = lean_unbox(v_await_4846_);
v_extra_boxed_4849_ = lean_unbox_uint64(v_extra_4847_);
lean_dec_ref(v_extra_4847_);
v_res_4850_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1(v_await_boxed_4848_, v_extra_boxed_4849_);
v_r_4851_ = lean_box_uint64(v_res_4850_);
return v_r_4851_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1(lean_object* v___f_4852_, lean_object* v_bytes_4853_){
_start:
{
lean_object* v___x_4855_; uint8_t v___x_4856_; lean_object* v_val_4858_; lean_object* v___x_4861_; 
v___x_4855_ = lean_unsigned_to_nat(0u);
v___x_4856_ = 0;
v___x_4861_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4853_);
if (lean_obj_tag(v___x_4861_) == 0)
{
lean_object* v_a_4862_; lean_object* v___x_4864_; uint8_t v_isShared_4865_; uint8_t v_isSharedCheck_4869_; 
v_a_4862_ = lean_ctor_get(v___x_4861_, 0);
v_isSharedCheck_4869_ = !lean_is_exclusive(v___x_4861_);
if (v_isSharedCheck_4869_ == 0)
{
v___x_4864_ = v___x_4861_;
v_isShared_4865_ = v_isSharedCheck_4869_;
goto v_resetjp_4863_;
}
else
{
lean_inc(v_a_4862_);
lean_dec(v___x_4861_);
v___x_4864_ = lean_box(0);
v_isShared_4865_ = v_isSharedCheck_4869_;
goto v_resetjp_4863_;
}
v_resetjp_4863_:
{
lean_object* v___x_4867_; 
if (v_isShared_4865_ == 0)
{
lean_ctor_set_tag(v___x_4864_, 1);
v___x_4867_ = v___x_4864_;
goto v_reusejp_4866_;
}
else
{
lean_object* v_reuseFailAlloc_4868_; 
v_reuseFailAlloc_4868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4868_, 0, v_a_4862_);
v___x_4867_ = v_reuseFailAlloc_4868_;
goto v_reusejp_4866_;
}
v_reusejp_4866_:
{
v_val_4858_ = v___x_4867_;
goto v___jp_4857_;
}
}
}
else
{
lean_object* v_a_4870_; lean_object* v___x_4872_; uint8_t v_isShared_4873_; uint8_t v_isSharedCheck_4877_; 
v_a_4870_ = lean_ctor_get(v___x_4861_, 0);
v_isSharedCheck_4877_ = !lean_is_exclusive(v___x_4861_);
if (v_isSharedCheck_4877_ == 0)
{
v___x_4872_ = v___x_4861_;
v_isShared_4873_ = v_isSharedCheck_4877_;
goto v_resetjp_4871_;
}
else
{
lean_inc(v_a_4870_);
lean_dec(v___x_4861_);
v___x_4872_ = lean_box(0);
v_isShared_4873_ = v_isSharedCheck_4877_;
goto v_resetjp_4871_;
}
v_resetjp_4871_:
{
lean_object* v___x_4875_; 
if (v_isShared_4873_ == 0)
{
lean_ctor_set_tag(v___x_4872_, 0);
v___x_4875_ = v___x_4872_;
goto v_reusejp_4874_;
}
else
{
lean_object* v_reuseFailAlloc_4876_; 
v_reuseFailAlloc_4876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4876_, 0, v_a_4870_);
v___x_4875_ = v_reuseFailAlloc_4876_;
goto v_reusejp_4874_;
}
v_reusejp_4874_:
{
v_val_4858_ = v___x_4875_;
goto v___jp_4857_;
}
}
}
v___jp_4857_:
{
lean_object* v___x_4859_; lean_object* v___x_4860_; 
v___x_4859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4859_, 0, v_val_4858_);
v___x_4860_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4855_, v___x_4856_, v___x_4859_, v___f_4852_);
return v___x_4860_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1___boxed(lean_object* v___f_4878_, lean_object* v_bytes_4879_, lean_object* v___y_4880_){
_start:
{
lean_object* v_res_4881_; 
v_res_4881_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1(v___f_4878_, v_bytes_4879_);
lean_dec_ref(v_bytes_4879_);
return v_res_4881_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_4882_, uint32_t v_op_4883_, uint64_t v_flags_4884_, lean_object* v_payload_4885_, lean_object* v___f_4886_, lean_object* v___f_4887_, lean_object* v___f_4888_, lean_object* v_x_4889_){
_start:
{
if (lean_obj_tag(v_x_4889_) == 0)
{
lean_object* v_a_4891_; lean_object* v___x_4893_; uint8_t v_isShared_4894_; uint8_t v_isSharedCheck_4899_; 
lean_dec_ref(v___f_4888_);
lean_dec_ref(v___f_4887_);
lean_dec_ref(v___f_4886_);
lean_dec(v_payload_4885_);
v_a_4891_ = lean_ctor_get(v_x_4889_, 0);
v_isSharedCheck_4899_ = !lean_is_exclusive(v_x_4889_);
if (v_isSharedCheck_4899_ == 0)
{
v___x_4893_ = v_x_4889_;
v_isShared_4894_ = v_isSharedCheck_4899_;
goto v_resetjp_4892_;
}
else
{
lean_inc(v_a_4891_);
lean_dec(v_x_4889_);
v___x_4893_ = lean_box(0);
v_isShared_4894_ = v_isSharedCheck_4899_;
goto v_resetjp_4892_;
}
v_resetjp_4892_:
{
lean_object* v___x_4896_; 
if (v_isShared_4894_ == 0)
{
v___x_4896_ = v___x_4893_;
goto v_reusejp_4895_;
}
else
{
lean_object* v_reuseFailAlloc_4898_; 
v_reuseFailAlloc_4898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4898_, 0, v_a_4891_);
v___x_4896_ = v_reuseFailAlloc_4898_;
goto v_reusejp_4895_;
}
v_reusejp_4895_:
{
lean_object* v___x_4897_; 
v___x_4897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4897_, 0, v___x_4896_);
return v___x_4897_;
}
}
}
else
{
lean_object* v_a_4900_; lean_object* v___x_4902_; uint8_t v_isShared_4903_; uint8_t v_isSharedCheck_4946_; 
v_a_4900_ = lean_ctor_get(v_x_4889_, 0);
v_isSharedCheck_4946_ = !lean_is_exclusive(v_x_4889_);
if (v_isSharedCheck_4946_ == 0)
{
v___x_4902_ = v_x_4889_;
v_isShared_4903_ = v_isSharedCheck_4946_;
goto v_resetjp_4901_;
}
else
{
lean_inc(v_a_4900_);
lean_dec(v_x_4889_);
v___x_4902_ = lean_box(0);
v_isShared_4903_ = v_isSharedCheck_4946_;
goto v_resetjp_4901_;
}
v_resetjp_4901_:
{
lean_object* v___x_4904_; lean_object* v___x_4905_; uint8_t v___x_4906_; 
v___x_4904_ = lean_string_utf8_byte_size(v_failurePrefix_4882_);
v___x_4905_ = lean_unsigned_to_nat(0u);
v___x_4906_ = lean_nat_dec_eq(v___x_4904_, v___x_4905_);
if (v___x_4906_ == 0)
{
lean_object* v___f_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___f_4911_; lean_object* v_val_4913_; lean_object* v___x_4918_; 
lean_dec_ref(v___f_4888_);
lean_inc(v_a_4900_);
v___f_4907_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4907_, 0, v_a_4900_);
v___x_4908_ = lean_box(v___x_4906_);
v___x_4909_ = lean_box_uint32(v_op_4883_);
v___x_4910_ = lean_box_uint64(v_flags_4884_);
lean_inc(v_payload_4885_);
v___f_4911_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4911_, 0, v___x_4905_);
lean_closure_set(v___f_4911_, 1, v___x_4908_);
lean_closure_set(v___f_4911_, 2, v___f_4907_);
lean_closure_set(v___f_4911_, 3, v_a_4900_);
lean_closure_set(v___f_4911_, 4, v___x_4909_);
lean_closure_set(v___f_4911_, 5, v___x_4910_);
lean_closure_set(v___f_4911_, 6, v_payload_4885_);
v___x_4918_ = l_Lasm_JS_Wire_encodeIO(v_payload_4885_);
lean_dec(v_payload_4885_);
if (lean_obj_tag(v___x_4918_) == 0)
{
lean_object* v_a_4919_; lean_object* v___x_4921_; 
v_a_4919_ = lean_ctor_get(v___x_4918_, 0);
lean_inc(v_a_4919_);
lean_dec_ref_known(v___x_4918_, 1);
if (v_isShared_4903_ == 0)
{
lean_ctor_set(v___x_4902_, 0, v_a_4919_);
v___x_4921_ = v___x_4902_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4922_; 
v_reuseFailAlloc_4922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4922_, 0, v_a_4919_);
v___x_4921_ = v_reuseFailAlloc_4922_;
goto v_reusejp_4920_;
}
v_reusejp_4920_:
{
v_val_4913_ = v___x_4921_;
goto v___jp_4912_;
}
}
else
{
lean_object* v_a_4923_; lean_object* v___x_4925_; 
v_a_4923_ = lean_ctor_get(v___x_4918_, 0);
lean_inc(v_a_4923_);
lean_dec_ref_known(v___x_4918_, 1);
if (v_isShared_4903_ == 0)
{
lean_ctor_set_tag(v___x_4902_, 0);
lean_ctor_set(v___x_4902_, 0, v_a_4923_);
v___x_4925_ = v___x_4902_;
goto v_reusejp_4924_;
}
else
{
lean_object* v_reuseFailAlloc_4926_; 
v_reuseFailAlloc_4926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4926_, 0, v_a_4923_);
v___x_4925_ = v_reuseFailAlloc_4926_;
goto v_reusejp_4924_;
}
v_reusejp_4924_:
{
v_val_4913_ = v___x_4925_;
goto v___jp_4912_;
}
}
v___jp_4912_:
{
lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; 
v___x_4914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4914_, 0, v_val_4913_);
v___x_4915_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4905_, v___x_4906_, v___x_4914_, v___f_4911_);
v___x_4916_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4905_, v___x_4906_, v___x_4915_, v___f_4886_);
v___x_4917_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4905_, v___x_4906_, v___x_4916_, v___f_4887_);
return v___x_4917_;
}
}
else
{
lean_object* v___f_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___f_4930_; uint8_t v___x_4931_; lean_object* v_val_4933_; lean_object* v___x_4937_; 
lean_dec_ref(v___f_4887_);
lean_dec_ref(v___f_4886_);
lean_inc(v_a_4900_);
v___f_4927_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4927_, 0, v_a_4900_);
v___x_4928_ = lean_box_uint32(v_op_4883_);
v___x_4929_ = lean_box_uint64(v_flags_4884_);
lean_inc(v_payload_4885_);
v___f_4930_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4930_, 0, v___f_4927_);
lean_closure_set(v___f_4930_, 1, v_a_4900_);
lean_closure_set(v___f_4930_, 2, v___x_4928_);
lean_closure_set(v___f_4930_, 3, v___x_4929_);
lean_closure_set(v___f_4930_, 4, v_payload_4885_);
v___x_4931_ = 0;
v___x_4937_ = l_Lasm_JS_Wire_encodeIO(v_payload_4885_);
lean_dec(v_payload_4885_);
if (lean_obj_tag(v___x_4937_) == 0)
{
lean_object* v_a_4938_; lean_object* v___x_4940_; 
v_a_4938_ = lean_ctor_get(v___x_4937_, 0);
lean_inc(v_a_4938_);
lean_dec_ref_known(v___x_4937_, 1);
if (v_isShared_4903_ == 0)
{
lean_ctor_set(v___x_4902_, 0, v_a_4938_);
v___x_4940_ = v___x_4902_;
goto v_reusejp_4939_;
}
else
{
lean_object* v_reuseFailAlloc_4941_; 
v_reuseFailAlloc_4941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4941_, 0, v_a_4938_);
v___x_4940_ = v_reuseFailAlloc_4941_;
goto v_reusejp_4939_;
}
v_reusejp_4939_:
{
v_val_4933_ = v___x_4940_;
goto v___jp_4932_;
}
}
else
{
lean_object* v_a_4942_; lean_object* v___x_4944_; 
v_a_4942_ = lean_ctor_get(v___x_4937_, 0);
lean_inc(v_a_4942_);
lean_dec_ref_known(v___x_4937_, 1);
if (v_isShared_4903_ == 0)
{
lean_ctor_set_tag(v___x_4902_, 0);
lean_ctor_set(v___x_4902_, 0, v_a_4942_);
v___x_4944_ = v___x_4902_;
goto v_reusejp_4943_;
}
else
{
lean_object* v_reuseFailAlloc_4945_; 
v_reuseFailAlloc_4945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4945_, 0, v_a_4942_);
v___x_4944_ = v_reuseFailAlloc_4945_;
goto v_reusejp_4943_;
}
v_reusejp_4943_:
{
v_val_4933_ = v___x_4944_;
goto v___jp_4932_;
}
}
v___jp_4932_:
{
lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; 
v___x_4934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4934_, 0, v_val_4933_);
v___x_4935_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4905_, v___x_4931_, v___x_4934_, v___f_4930_);
v___x_4936_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4905_, v___x_4931_, v___x_4935_, v___f_4888_);
return v___x_4936_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_4947_, lean_object* v_op_4948_, lean_object* v_flags_4949_, lean_object* v_payload_4950_, lean_object* v___f_4951_, lean_object* v___f_4952_, lean_object* v___f_4953_, lean_object* v_x_4954_, lean_object* v___y_4955_){
_start:
{
uint32_t v_op_boxed_4956_; uint64_t v_flags_boxed_4957_; lean_object* v_res_4958_; 
v_op_boxed_4956_ = lean_unbox_uint32(v_op_4948_);
lean_dec(v_op_4948_);
v_flags_boxed_4957_ = lean_unbox_uint64(v_flags_4949_);
lean_dec_ref(v_flags_4949_);
v_res_4958_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9(v_failurePrefix_4947_, v_op_boxed_4956_, v_flags_boxed_4957_, v_payload_4950_, v___f_4951_, v___f_4952_, v___f_4953_, v_x_4954_);
lean_dec_ref(v_failurePrefix_4947_);
return v_res_4958_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4(size_t v_sz_4959_, size_t v_i_4960_, lean_object* v_bs_4961_){
_start:
{
uint8_t v___x_4962_; 
v___x_4962_ = lean_usize_dec_lt(v_i_4960_, v_sz_4959_);
if (v___x_4962_ == 0)
{
lean_object* v___x_4963_; 
v___x_4963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4963_, 0, v_bs_4961_);
return v___x_4963_;
}
else
{
lean_object* v_v_4964_; lean_object* v___x_4965_; lean_object* v___x_4966_; 
v_v_4964_ = lean_array_uget_borrowed(v_bs_4961_, v_i_4960_);
v___x_4965_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
lean_inc(v_v_4964_);
v___x_4966_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_v_4964_, v___x_4965_);
if (lean_obj_tag(v___x_4966_) == 0)
{
lean_object* v_a_4967_; lean_object* v___x_4969_; uint8_t v_isShared_4970_; uint8_t v_isSharedCheck_4974_; 
lean_dec_ref(v_bs_4961_);
v_a_4967_ = lean_ctor_get(v___x_4966_, 0);
v_isSharedCheck_4974_ = !lean_is_exclusive(v___x_4966_);
if (v_isSharedCheck_4974_ == 0)
{
v___x_4969_ = v___x_4966_;
v_isShared_4970_ = v_isSharedCheck_4974_;
goto v_resetjp_4968_;
}
else
{
lean_inc(v_a_4967_);
lean_dec(v___x_4966_);
v___x_4969_ = lean_box(0);
v_isShared_4970_ = v_isSharedCheck_4974_;
goto v_resetjp_4968_;
}
v_resetjp_4968_:
{
lean_object* v___x_4972_; 
if (v_isShared_4970_ == 0)
{
v___x_4972_ = v___x_4969_;
goto v_reusejp_4971_;
}
else
{
lean_object* v_reuseFailAlloc_4973_; 
v_reuseFailAlloc_4973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4973_, 0, v_a_4967_);
v___x_4972_ = v_reuseFailAlloc_4973_;
goto v_reusejp_4971_;
}
v_reusejp_4971_:
{
return v___x_4972_;
}
}
}
else
{
lean_object* v_a_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; 
v_a_4975_ = lean_ctor_get(v___x_4966_, 0);
lean_inc(v_a_4975_);
lean_dec_ref_known(v___x_4966_, 1);
v___x_4976_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
lean_inc(v_v_4964_);
v___x_4977_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_v_4964_, v___x_4976_);
if (lean_obj_tag(v___x_4977_) == 0)
{
lean_object* v_a_4978_; lean_object* v___x_4980_; uint8_t v_isShared_4981_; uint8_t v_isSharedCheck_4985_; 
lean_dec(v_a_4975_);
lean_dec_ref(v_bs_4961_);
v_a_4978_ = lean_ctor_get(v___x_4977_, 0);
v_isSharedCheck_4985_ = !lean_is_exclusive(v___x_4977_);
if (v_isSharedCheck_4985_ == 0)
{
v___x_4980_ = v___x_4977_;
v_isShared_4981_ = v_isSharedCheck_4985_;
goto v_resetjp_4979_;
}
else
{
lean_inc(v_a_4978_);
lean_dec(v___x_4977_);
v___x_4980_ = lean_box(0);
v_isShared_4981_ = v_isSharedCheck_4985_;
goto v_resetjp_4979_;
}
v_resetjp_4979_:
{
lean_object* v___x_4983_; 
if (v_isShared_4981_ == 0)
{
v___x_4983_ = v___x_4980_;
goto v_reusejp_4982_;
}
else
{
lean_object* v_reuseFailAlloc_4984_; 
v_reuseFailAlloc_4984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4984_, 0, v_a_4978_);
v___x_4983_ = v_reuseFailAlloc_4984_;
goto v_reusejp_4982_;
}
v_reusejp_4982_:
{
return v___x_4983_;
}
}
}
else
{
lean_object* v_a_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; 
v_a_4986_ = lean_ctor_get(v___x_4977_, 0);
lean_inc(v_a_4986_);
lean_dec_ref_known(v___x_4977_, 1);
v___x_4987_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_v_4964_);
v___x_4988_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(v_v_4964_, v___x_4987_);
if (lean_obj_tag(v___x_4988_) == 0)
{
lean_object* v_a_4989_; lean_object* v___x_4991_; uint8_t v_isShared_4992_; uint8_t v_isSharedCheck_4996_; 
lean_dec(v_a_4986_);
lean_dec(v_a_4975_);
lean_dec_ref(v_bs_4961_);
v_a_4989_ = lean_ctor_get(v___x_4988_, 0);
v_isSharedCheck_4996_ = !lean_is_exclusive(v___x_4988_);
if (v_isSharedCheck_4996_ == 0)
{
v___x_4991_ = v___x_4988_;
v_isShared_4992_ = v_isSharedCheck_4996_;
goto v_resetjp_4990_;
}
else
{
lean_inc(v_a_4989_);
lean_dec(v___x_4988_);
v___x_4991_ = lean_box(0);
v_isShared_4992_ = v_isSharedCheck_4996_;
goto v_resetjp_4990_;
}
v_resetjp_4990_:
{
lean_object* v___x_4994_; 
if (v_isShared_4992_ == 0)
{
v___x_4994_ = v___x_4991_;
goto v_reusejp_4993_;
}
else
{
lean_object* v_reuseFailAlloc_4995_; 
v_reuseFailAlloc_4995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4995_, 0, v_a_4989_);
v___x_4994_ = v_reuseFailAlloc_4995_;
goto v_reusejp_4993_;
}
v_reusejp_4993_:
{
return v___x_4994_;
}
}
}
else
{
lean_object* v_a_4997_; lean_object* v___x_4998_; lean_object* v_bs_x27_4999_; lean_object* v___x_5000_; size_t v___x_5001_; size_t v___x_5002_; lean_object* v___x_5003_; 
v_a_4997_ = lean_ctor_get(v___x_4988_, 0);
lean_inc(v_a_4997_);
lean_dec_ref_known(v___x_4988_, 1);
v___x_4998_ = lean_unsigned_to_nat(0u);
v_bs_x27_4999_ = lean_array_uset(v_bs_4961_, v_i_4960_, v___x_4998_);
v___x_5000_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5000_, 0, v_a_4975_);
lean_ctor_set(v___x_5000_, 1, v_a_4986_);
lean_ctor_set(v___x_5000_, 2, v_a_4997_);
v___x_5001_ = ((size_t)1ULL);
v___x_5002_ = lean_usize_add(v_i_4960_, v___x_5001_);
v___x_5003_ = lean_array_uset(v_bs_x27_4999_, v_i_4960_, v___x_5000_);
v_i_4960_ = v___x_5002_;
v_bs_4961_ = v___x_5003_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_sz_5005_, lean_object* v_i_5006_, lean_object* v_bs_5007_){
_start:
{
size_t v_sz_boxed_5008_; size_t v_i_boxed_5009_; lean_object* v_res_5010_; 
v_sz_boxed_5008_ = lean_unbox_usize(v_sz_5005_);
lean_dec(v_sz_5005_);
v_i_boxed_5009_ = lean_unbox_usize(v_i_5006_);
lean_dec(v_i_5006_);
v_res_5010_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4(v_sz_boxed_5008_, v_i_boxed_5009_, v_bs_5007_);
return v_res_5010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3(lean_object* v_context_5013_, lean_object* v_d_5014_){
_start:
{
lean_object* v___y_5017_; lean_object* v___y_5018_; lean_object* v___y_5023_; lean_object* v_received_5024_; lean_object* v___y_5043_; lean_object* v_a_5046_; 
if (lean_obj_tag(v_d_5014_) == 7)
{
lean_object* v_items_5070_; size_t v_sz_5071_; size_t v___x_5072_; lean_object* v___x_5073_; 
v_items_5070_ = lean_ctor_get(v_d_5014_, 0);
v_sz_5071_ = lean_array_size(v_items_5070_);
v___x_5072_ = ((size_t)0ULL);
lean_inc_ref(v_items_5070_);
v___x_5073_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4(v_sz_5071_, v___x_5072_, v_items_5070_);
if (lean_obj_tag(v___x_5073_) == 0)
{
lean_object* v_a_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; uint8_t v___x_5078_; 
v_a_5074_ = lean_ctor_get(v___x_5073_, 0);
lean_inc(v_a_5074_);
lean_dec_ref_known(v___x_5073_, 1);
v___x_5075_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___closed__1));
v___x_5076_ = lean_string_utf8_byte_size(v_a_5074_);
v___x_5077_ = lean_unsigned_to_nat(0u);
v___x_5078_ = lean_nat_dec_eq(v___x_5076_, v___x_5077_);
if (v___x_5078_ == 0)
{
lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; 
v___x_5079_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_5080_ = lean_string_append(v___x_5079_, v_a_5074_);
lean_dec(v_a_5074_);
v___x_5081_ = lean_string_append(v___x_5075_, v___x_5080_);
lean_dec_ref(v___x_5080_);
v_a_5046_ = v___x_5081_;
goto v___jp_5045_;
}
else
{
lean_dec(v_a_5074_);
v_a_5046_ = v___x_5075_;
goto v___jp_5045_;
}
}
else
{
if (lean_obj_tag(v___x_5073_) == 0)
{
lean_object* v_a_5082_; 
v_a_5082_ = lean_ctor_get(v___x_5073_, 0);
lean_inc(v_a_5082_);
lean_dec_ref_known(v___x_5073_, 1);
v_a_5046_ = v_a_5082_;
goto v___jp_5045_;
}
else
{
lean_object* v_a_5083_; lean_object* v___x_5085_; uint8_t v_isShared_5086_; uint8_t v_isSharedCheck_5090_; 
lean_dec_ref_known(v_d_5014_, 1);
v_a_5083_ = lean_ctor_get(v___x_5073_, 0);
v_isSharedCheck_5090_ = !lean_is_exclusive(v___x_5073_);
if (v_isSharedCheck_5090_ == 0)
{
v___x_5085_ = v___x_5073_;
v_isShared_5086_ = v_isSharedCheck_5090_;
goto v_resetjp_5084_;
}
else
{
lean_inc(v_a_5083_);
lean_dec(v___x_5073_);
v___x_5085_ = lean_box(0);
v_isShared_5086_ = v_isSharedCheck_5090_;
goto v_resetjp_5084_;
}
v_resetjp_5084_:
{
lean_object* v___x_5088_; 
if (v_isShared_5086_ == 0)
{
lean_ctor_set_tag(v___x_5085_, 0);
v___x_5088_ = v___x_5085_;
goto v_reusejp_5087_;
}
else
{
lean_object* v_reuseFailAlloc_5089_; 
v_reuseFailAlloc_5089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5089_, 0, v_a_5083_);
v___x_5088_ = v_reuseFailAlloc_5089_;
goto v_reusejp_5087_;
}
v_reusejp_5087_:
{
return v___x_5088_;
}
}
}
}
}
else
{
lean_object* v___x_5091_; 
v___x_5091_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v_a_5046_ = v___x_5091_;
goto v___jp_5045_;
}
v___jp_5016_:
{
lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; 
v___x_5019_ = lean_string_append(v___y_5017_, v___y_5018_);
lean_dec_ref(v___y_5018_);
v___x_5020_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5020_, 0, v___x_5019_);
v___x_5021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5021_, 0, v___x_5020_);
return v___x_5021_;
}
v___jp_5022_:
{
lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; uint8_t v___x_5036_; 
v___x_5025_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_5026_ = lean_string_append(v___x_5025_, v_context_5013_);
v___x_5027_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_5028_ = lean_string_append(v___x_5026_, v___x_5027_);
v___x_5029_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___closed__0));
v___x_5030_ = lean_string_append(v___x_5028_, v___x_5029_);
v___x_5031_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_5032_ = lean_string_append(v___x_5030_, v___x_5031_);
v___x_5033_ = lean_string_append(v___x_5032_, v_received_5024_);
lean_dec_ref(v_received_5024_);
v___x_5034_ = lean_string_utf8_byte_size(v___y_5023_);
v___x_5035_ = lean_unsigned_to_nat(0u);
v___x_5036_ = lean_nat_dec_eq(v___x_5034_, v___x_5035_);
if (v___x_5036_ == 0)
{
lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; 
v___x_5037_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_5038_ = lean_string_append(v___x_5037_, v___y_5023_);
lean_dec_ref(v___y_5023_);
v___x_5039_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5040_ = lean_string_append(v___x_5038_, v___x_5039_);
v___y_5017_ = v___x_5033_;
v___y_5018_ = v___x_5040_;
goto v___jp_5016_;
}
else
{
lean_object* v___x_5041_; 
lean_dec_ref(v___y_5023_);
v___x_5041_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_5017_ = v___x_5033_;
v___y_5018_ = v___x_5041_;
goto v___jp_5016_;
}
}
v___jp_5042_:
{
lean_object* v___x_5044_; 
v___x_5044_ = l_Lasm_JS_Data_describe(v_d_5014_);
v___y_5023_ = v___y_5043_;
v_received_5024_ = v___x_5044_;
goto v___jp_5022_;
}
v___jp_5045_:
{
if (lean_obj_tag(v_d_5014_) == 9)
{
lean_object* v_value_5047_; lean_object* v_description_5048_; lean_object* v___x_5049_; uint8_t v___x_5050_; 
v_value_5047_ = lean_ctor_get(v_d_5014_, 0);
v_description_5048_ = lean_ctor_get(v_d_5014_, 1);
v___x_5049_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5050_ = lean_string_dec_eq(v_description_5048_, v___x_5049_);
if (v___x_5050_ == 0)
{
v___y_5043_ = v_a_5046_;
goto v___jp_5042_;
}
else
{
lean_object* v___x_5052_; uint8_t v_isShared_5053_; uint8_t v_isSharedCheck_5067_; 
lean_inc(v_value_5047_);
v_isSharedCheck_5067_ = !lean_is_exclusive(v_d_5014_);
if (v_isSharedCheck_5067_ == 0)
{
lean_object* v_unused_5068_; lean_object* v_unused_5069_; 
v_unused_5068_ = lean_ctor_get(v_d_5014_, 1);
lean_dec(v_unused_5068_);
v_unused_5069_ = lean_ctor_get(v_d_5014_, 0);
lean_dec(v_unused_5069_);
v___x_5052_ = v_d_5014_;
v_isShared_5053_ = v_isSharedCheck_5067_;
goto v_resetjp_5051_;
}
else
{
lean_dec(v_d_5014_);
v___x_5052_ = lean_box(0);
v_isShared_5053_ = v_isSharedCheck_5067_;
goto v_resetjp_5051_;
}
v_resetjp_5051_:
{
uint32_t v___x_5054_; uint64_t v___x_5055_; lean_object* v___x_5057_; 
v___x_5054_ = 206;
v___x_5055_ = 0ULL;
lean_inc(v_value_5047_);
if (v_isShared_5053_ == 0)
{
lean_ctor_set(v___x_5052_, 1, v___x_5049_);
v___x_5057_ = v___x_5052_;
goto v_reusejp_5056_;
}
else
{
lean_object* v_reuseFailAlloc_5066_; 
v_reuseFailAlloc_5066_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5066_, 0, v_value_5047_);
lean_ctor_set(v_reuseFailAlloc_5066_, 1, v___x_5049_);
v___x_5057_ = v_reuseFailAlloc_5066_;
goto v_reusejp_5056_;
}
v_reusejp_5056_:
{
uint32_t v___x_5058_; lean_object* v___x_5059_; 
v___x_5058_ = lasm_js_value_handle(v_value_5047_);
lean_dec(v_value_5047_);
v___x_5059_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5054_, v___x_5055_, v___x_5057_, v___x_5058_);
lean_dec_ref(v___x_5057_);
if (lean_obj_tag(v___x_5059_) == 0)
{
lean_object* v_a_5060_; uint8_t v___x_5061_; 
v_a_5060_ = lean_ctor_get(v___x_5059_, 0);
lean_inc(v_a_5060_);
lean_dec_ref_known(v___x_5059_, 1);
v___x_5061_ = lean_string_validate_utf8(v_a_5060_);
if (v___x_5061_ == 0)
{
lean_object* v___x_5062_; lean_object* v___x_5063_; 
lean_dec(v_a_5060_);
v___x_5062_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_5063_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5062_);
v___y_5023_ = v_a_5046_;
v_received_5024_ = v___x_5063_;
goto v___jp_5022_;
}
else
{
lean_object* v___x_5064_; 
v___x_5064_ = lean_string_from_utf8_unchecked(v_a_5060_);
v___y_5023_ = v_a_5046_;
v_received_5024_ = v___x_5064_;
goto v___jp_5022_;
}
}
else
{
lean_object* v___x_5065_; 
lean_dec_ref_known(v___x_5059_, 1);
v___x_5065_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_5023_ = v_a_5046_;
v_received_5024_ = v___x_5065_;
goto v___jp_5022_;
}
}
}
}
}
else
{
v___y_5043_ = v_a_5046_;
goto v___jp_5042_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___boxed(lean_object* v_context_5092_, lean_object* v_d_5093_, lean_object* v_a_5094_){
_start:
{
lean_object* v_res_5095_; 
v_res_5095_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3(v_context_5092_, v_d_5093_);
lean_dec_ref(v_context_5092_);
return v_res_5095_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0(lean_object* v_context_5096_, lean_object* v_x_5097_){
_start:
{
lean_object* v_val_5100_; 
if (lean_obj_tag(v_x_5097_) == 0)
{
lean_object* v_a_5102_; lean_object* v___x_5104_; uint8_t v_isShared_5105_; uint8_t v_isSharedCheck_5110_; 
v_a_5102_ = lean_ctor_get(v_x_5097_, 0);
v_isSharedCheck_5110_ = !lean_is_exclusive(v_x_5097_);
if (v_isSharedCheck_5110_ == 0)
{
v___x_5104_ = v_x_5097_;
v_isShared_5105_ = v_isSharedCheck_5110_;
goto v_resetjp_5103_;
}
else
{
lean_inc(v_a_5102_);
lean_dec(v_x_5097_);
v___x_5104_ = lean_box(0);
v_isShared_5105_ = v_isSharedCheck_5110_;
goto v_resetjp_5103_;
}
v_resetjp_5103_:
{
lean_object* v___x_5107_; 
if (v_isShared_5105_ == 0)
{
v___x_5107_ = v___x_5104_;
goto v_reusejp_5106_;
}
else
{
lean_object* v_reuseFailAlloc_5109_; 
v_reuseFailAlloc_5109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5109_, 0, v_a_5102_);
v___x_5107_ = v_reuseFailAlloc_5109_;
goto v_reusejp_5106_;
}
v_reusejp_5106_:
{
lean_object* v___x_5108_; 
v___x_5108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5108_, 0, v___x_5107_);
return v___x_5108_;
}
}
}
else
{
lean_object* v_a_5111_; lean_object* v___x_5113_; uint8_t v_isShared_5114_; uint8_t v_isSharedCheck_5124_; 
v_a_5111_ = lean_ctor_get(v_x_5097_, 0);
v_isSharedCheck_5124_ = !lean_is_exclusive(v_x_5097_);
if (v_isSharedCheck_5124_ == 0)
{
v___x_5113_ = v_x_5097_;
v_isShared_5114_ = v_isSharedCheck_5124_;
goto v_resetjp_5112_;
}
else
{
lean_inc(v_a_5111_);
lean_dec(v_x_5097_);
v___x_5113_ = lean_box(0);
v_isShared_5114_ = v_isSharedCheck_5124_;
goto v_resetjp_5112_;
}
v_resetjp_5112_:
{
lean_object* v___x_5115_; 
v___x_5115_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3(v_context_5096_, v_a_5111_);
if (lean_obj_tag(v___x_5115_) == 0)
{
lean_object* v_a_5116_; lean_object* v___x_5118_; 
v_a_5116_ = lean_ctor_get(v___x_5115_, 0);
lean_inc(v_a_5116_);
lean_dec_ref_known(v___x_5115_, 1);
if (v_isShared_5114_ == 0)
{
lean_ctor_set(v___x_5113_, 0, v_a_5116_);
v___x_5118_ = v___x_5113_;
goto v_reusejp_5117_;
}
else
{
lean_object* v_reuseFailAlloc_5119_; 
v_reuseFailAlloc_5119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5119_, 0, v_a_5116_);
v___x_5118_ = v_reuseFailAlloc_5119_;
goto v_reusejp_5117_;
}
v_reusejp_5117_:
{
v_val_5100_ = v___x_5118_;
goto v___jp_5099_;
}
}
else
{
lean_object* v_a_5120_; lean_object* v___x_5122_; 
v_a_5120_ = lean_ctor_get(v___x_5115_, 0);
lean_inc(v_a_5120_);
lean_dec_ref_known(v___x_5115_, 1);
if (v_isShared_5114_ == 0)
{
lean_ctor_set_tag(v___x_5113_, 0);
lean_ctor_set(v___x_5113_, 0, v_a_5120_);
v___x_5122_ = v___x_5113_;
goto v_reusejp_5121_;
}
else
{
lean_object* v_reuseFailAlloc_5123_; 
v_reuseFailAlloc_5123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5123_, 0, v_a_5120_);
v___x_5122_ = v_reuseFailAlloc_5123_;
goto v_reusejp_5121_;
}
v_reusejp_5121_:
{
v_val_5100_ = v___x_5122_;
goto v___jp_5099_;
}
}
}
}
v___jp_5099_:
{
lean_object* v___x_5101_; 
v___x_5101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5101_, 0, v_val_5100_);
return v___x_5101_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0___boxed(lean_object* v_context_5125_, lean_object* v_x_5126_, lean_object* v___y_5127_){
_start:
{
lean_object* v_res_5128_; 
v_res_5128_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0(v_context_5125_, v_x_5126_);
lean_dec_ref(v_context_5125_);
return v_res_5128_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3(lean_object* v___f_5129_, lean_object* v_x_5130_){
_start:
{
if (lean_obj_tag(v_x_5130_) == 0)
{
lean_object* v_a_5132_; lean_object* v___x_5134_; uint8_t v_isShared_5135_; uint8_t v_isSharedCheck_5140_; 
lean_dec_ref(v___f_5129_);
v_a_5132_ = lean_ctor_get(v_x_5130_, 0);
v_isSharedCheck_5140_ = !lean_is_exclusive(v_x_5130_);
if (v_isSharedCheck_5140_ == 0)
{
v___x_5134_ = v_x_5130_;
v_isShared_5135_ = v_isSharedCheck_5140_;
goto v_resetjp_5133_;
}
else
{
lean_inc(v_a_5132_);
lean_dec(v_x_5130_);
v___x_5134_ = lean_box(0);
v_isShared_5135_ = v_isSharedCheck_5140_;
goto v_resetjp_5133_;
}
v_resetjp_5133_:
{
lean_object* v___x_5137_; 
if (v_isShared_5135_ == 0)
{
v___x_5137_ = v___x_5134_;
goto v_reusejp_5136_;
}
else
{
lean_object* v_reuseFailAlloc_5139_; 
v_reuseFailAlloc_5139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5139_, 0, v_a_5132_);
v___x_5137_ = v_reuseFailAlloc_5139_;
goto v_reusejp_5136_;
}
v_reusejp_5136_:
{
lean_object* v___x_5138_; 
v___x_5138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5138_, 0, v___x_5137_);
return v___x_5138_;
}
}
}
else
{
lean_object* v___x_5142_; uint8_t v_isShared_5143_; uint8_t v_isSharedCheck_5152_; 
v_isSharedCheck_5152_ = !lean_is_exclusive(v_x_5130_);
if (v_isSharedCheck_5152_ == 0)
{
lean_object* v_unused_5153_; 
v_unused_5153_ = lean_ctor_get(v_x_5130_, 0);
lean_dec(v_unused_5153_);
v___x_5142_ = v_x_5130_;
v_isShared_5143_ = v_isSharedCheck_5152_;
goto v_resetjp_5141_;
}
else
{
lean_dec(v_x_5130_);
v___x_5142_ = lean_box(0);
v_isShared_5143_ = v_isSharedCheck_5152_;
goto v_resetjp_5141_;
}
v_resetjp_5141_:
{
lean_object* v___x_5144_; uint8_t v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5148_; 
v___x_5144_ = lean_unsigned_to_nat(0u);
v___x_5145_ = 0;
v___x_5146_ = lean_io_promise_new();
if (v_isShared_5143_ == 0)
{
lean_ctor_set(v___x_5142_, 0, v___x_5146_);
v___x_5148_ = v___x_5142_;
goto v_reusejp_5147_;
}
else
{
lean_object* v_reuseFailAlloc_5151_; 
v_reuseFailAlloc_5151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5151_, 0, v___x_5146_);
v___x_5148_ = v_reuseFailAlloc_5151_;
goto v_reusejp_5147_;
}
v_reusejp_5147_:
{
lean_object* v___x_5149_; lean_object* v___x_5150_; 
v___x_5149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5149_, 0, v___x_5148_);
v___x_5150_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5144_, v___x_5145_, v___x_5149_, v___f_5129_);
return v___x_5150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3___boxed(lean_object* v___f_5154_, lean_object* v_x_5155_, lean_object* v___y_5156_){
_start:
{
lean_object* v_res_5157_; 
v_res_5157_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3(v___f_5154_, v_x_5155_);
return v_res_5157_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2(lean_object* v___f_5158_, lean_object* v_x_5159_){
_start:
{
if (lean_obj_tag(v_x_5159_) == 0)
{
lean_object* v_a_5161_; lean_object* v___x_5163_; uint8_t v_isShared_5164_; uint8_t v_isSharedCheck_5169_; 
lean_dec_ref(v___f_5158_);
v_a_5161_ = lean_ctor_get(v_x_5159_, 0);
v_isSharedCheck_5169_ = !lean_is_exclusive(v_x_5159_);
if (v_isSharedCheck_5169_ == 0)
{
v___x_5163_ = v_x_5159_;
v_isShared_5164_ = v_isSharedCheck_5169_;
goto v_resetjp_5162_;
}
else
{
lean_inc(v_a_5161_);
lean_dec(v_x_5159_);
v___x_5163_ = lean_box(0);
v_isShared_5164_ = v_isSharedCheck_5169_;
goto v_resetjp_5162_;
}
v_resetjp_5162_:
{
lean_object* v___x_5166_; 
if (v_isShared_5164_ == 0)
{
v___x_5166_ = v___x_5163_;
goto v_reusejp_5165_;
}
else
{
lean_object* v_reuseFailAlloc_5168_; 
v_reuseFailAlloc_5168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5168_, 0, v_a_5161_);
v___x_5166_ = v_reuseFailAlloc_5168_;
goto v_reusejp_5165_;
}
v_reusejp_5165_:
{
lean_object* v___x_5167_; 
v___x_5167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5167_, 0, v___x_5166_);
return v___x_5167_;
}
}
}
else
{
lean_object* v_a_5170_; lean_object* v___x_5171_; 
v_a_5170_ = lean_ctor_get(v_x_5159_, 0);
lean_inc(v_a_5170_);
lean_dec_ref_known(v_x_5159_, 1);
v___x_5171_ = lean_apply_2(v___f_5158_, v_a_5170_, lean_box(0));
return v___x_5171_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2___boxed(lean_object* v___f_5172_, lean_object* v_x_5173_, lean_object* v___y_5174_){
_start:
{
lean_object* v_res_5175_; 
v_res_5175_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2(v___f_5172_, v_x_5173_);
return v_res_5175_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2(lean_object* v_context_5176_, uint32_t v_op_5177_, uint64_t v_flags_5178_, lean_object* v_payload_5179_, lean_object* v_failurePrefix_5180_){
_start:
{
lean_object* v___f_5182_; lean_object* v___f_5183_; lean_object* v___f_5184_; lean_object* v___f_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___f_5188_; lean_object* v___f_5189_; lean_object* v___x_5190_; uint8_t v___x_5191_; lean_object* v_val_5193_; lean_object* v___x_5196_; 
v___f_5182_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5182_, 0, v_context_5176_);
v___f_5183_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5183_, 0, v___f_5182_);
v___f_5184_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5184_, 0, v___f_5183_);
lean_inc_ref(v_failurePrefix_5180_);
v___f_5185_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5185_, 0, v_failurePrefix_5180_);
v___x_5186_ = lean_box_uint32(v_op_5177_);
v___x_5187_ = lean_box_uint64(v_flags_5178_);
lean_inc_ref(v___f_5184_);
v___f_5188_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_5188_, 0, v_failurePrefix_5180_);
lean_closure_set(v___f_5188_, 1, v___x_5186_);
lean_closure_set(v___f_5188_, 2, v___x_5187_);
lean_closure_set(v___f_5188_, 3, v_payload_5179_);
lean_closure_set(v___f_5188_, 4, v___f_5185_);
lean_closure_set(v___f_5188_, 5, v___f_5184_);
lean_closure_set(v___f_5188_, 6, v___f_5184_);
v___f_5189_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5189_, 0, v___f_5188_);
v___x_5190_ = lean_unsigned_to_nat(0u);
v___x_5191_ = 0;
v___x_5196_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5196_) == 0)
{
lean_object* v_a_5197_; lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5204_; 
v_a_5197_ = lean_ctor_get(v___x_5196_, 0);
v_isSharedCheck_5204_ = !lean_is_exclusive(v___x_5196_);
if (v_isSharedCheck_5204_ == 0)
{
v___x_5199_ = v___x_5196_;
v_isShared_5200_ = v_isSharedCheck_5204_;
goto v_resetjp_5198_;
}
else
{
lean_inc(v_a_5197_);
lean_dec(v___x_5196_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5204_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
lean_object* v___x_5202_; 
if (v_isShared_5200_ == 0)
{
lean_ctor_set_tag(v___x_5199_, 1);
v___x_5202_ = v___x_5199_;
goto v_reusejp_5201_;
}
else
{
lean_object* v_reuseFailAlloc_5203_; 
v_reuseFailAlloc_5203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5203_, 0, v_a_5197_);
v___x_5202_ = v_reuseFailAlloc_5203_;
goto v_reusejp_5201_;
}
v_reusejp_5201_:
{
v_val_5193_ = v___x_5202_;
goto v___jp_5192_;
}
}
}
else
{
lean_object* v_a_5205_; lean_object* v___x_5207_; uint8_t v_isShared_5208_; uint8_t v_isSharedCheck_5212_; 
v_a_5205_ = lean_ctor_get(v___x_5196_, 0);
v_isSharedCheck_5212_ = !lean_is_exclusive(v___x_5196_);
if (v_isSharedCheck_5212_ == 0)
{
v___x_5207_ = v___x_5196_;
v_isShared_5208_ = v_isSharedCheck_5212_;
goto v_resetjp_5206_;
}
else
{
lean_inc(v_a_5205_);
lean_dec(v___x_5196_);
v___x_5207_ = lean_box(0);
v_isShared_5208_ = v_isSharedCheck_5212_;
goto v_resetjp_5206_;
}
v_resetjp_5206_:
{
lean_object* v___x_5210_; 
if (v_isShared_5208_ == 0)
{
lean_ctor_set_tag(v___x_5207_, 0);
v___x_5210_ = v___x_5207_;
goto v_reusejp_5209_;
}
else
{
lean_object* v_reuseFailAlloc_5211_; 
v_reuseFailAlloc_5211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5211_, 0, v_a_5205_);
v___x_5210_ = v_reuseFailAlloc_5211_;
goto v_reusejp_5209_;
}
v_reusejp_5209_:
{
v_val_5193_ = v___x_5210_;
goto v___jp_5192_;
}
}
}
v___jp_5192_:
{
lean_object* v___x_5194_; lean_object* v___x_5195_; 
v___x_5194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5194_, 0, v_val_5193_);
v___x_5195_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5190_, v___x_5191_, v___x_5194_, v___f_5189_);
return v___x_5195_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___boxed(lean_object* v_context_5213_, lean_object* v_op_5214_, lean_object* v_flags_5215_, lean_object* v_payload_5216_, lean_object* v_failurePrefix_5217_, lean_object* v_a_5218_){
_start:
{
uint32_t v_op_boxed_5219_; uint64_t v_flags_boxed_5220_; lean_object* v_res_5221_; 
v_op_boxed_5219_ = lean_unbox_uint32(v_op_5214_);
lean_dec(v_op_5214_);
v_flags_boxed_5220_ = lean_unbox_uint64(v_flags_5215_);
lean_dec_ref(v_flags_5215_);
v_res_5221_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2(v_context_5213_, v_op_boxed_5219_, v_flags_boxed_5220_, v_payload_5216_, v_failurePrefix_5217_);
return v_res_5221_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0(void){
_start:
{
uint64_t v___x_5222_; uint8_t v___x_5223_; uint64_t v___x_5224_; 
v___x_5222_ = 8ULL;
v___x_5223_ = 0;
v___x_5224_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1(v___x_5223_, v___x_5222_);
return v___x_5224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1(lean_object* v_o_5225_, lean_object* v_name_5226_, lean_object* v_args_5227_){
_start:
{
lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; uint32_t v___x_5234_; uint64_t v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; lean_object* v___x_5238_; lean_object* v___x_5239_; lean_object* v___x_5240_; lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; 
v___x_5229_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5230_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5230_, 0, v_o_5225_);
lean_ctor_set(v___x_5230_, 1, v___x_5229_);
lean_inc_ref(v_name_5226_);
v___x_5231_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5231_, 0, v_name_5226_);
v___x_5232_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_5233_ = lean_string_append(v___x_5232_, v_name_5226_);
lean_dec_ref(v_name_5226_);
v___x_5234_ = 205;
v___x_5235_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0);
v___x_5236_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5236_, 0, v_args_5227_);
v___x_5237_ = lean_unsigned_to_nat(3u);
v___x_5238_ = lean_mk_empty_array_with_capacity(v___x_5237_);
v___x_5239_ = lean_array_push(v___x_5238_, v___x_5230_);
v___x_5240_ = lean_array_push(v___x_5239_, v___x_5231_);
v___x_5241_ = lean_array_push(v___x_5240_, v___x_5236_);
v___x_5242_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5242_, 0, v___x_5241_);
v___x_5243_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2(v___x_5233_, v___x_5234_, v___x_5235_, v___x_5242_, v___x_5229_);
return v___x_5243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___boxed(lean_object* v_o_5244_, lean_object* v_name_5245_, lean_object* v_args_5246_, lean_object* v___y_5247_){
_start:
{
lean_object* v_res_5248_; 
v_res_5248_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1(v_o_5244_, v_name_5245_, v_args_5246_);
return v_res_5248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0(lean_object* v_x_5249_){
_start:
{
if (lean_obj_tag(v_x_5249_) == 0)
{
lean_object* v___x_5250_; 
v___x_5250_ = lean_box(0);
return v___x_5250_;
}
else
{
lean_object* v_val_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; lean_object* v___x_5258_; 
v_val_5251_ = lean_ctor_get(v_x_5249_, 0);
v___x_5252_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_5253_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(v_val_5251_);
v___x_5254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5254_, 0, v___x_5252_);
lean_ctor_set(v___x_5254_, 1, v___x_5253_);
v___x_5255_ = lean_unsigned_to_nat(1u);
v___x_5256_ = lean_mk_empty_array_with_capacity(v___x_5255_);
v___x_5257_ = lean_array_push(v___x_5256_, v___x_5254_);
v___x_5258_ = l_Lasm_JS_Web_Support_fields(v___x_5257_);
lean_dec_ref(v___x_5257_);
return v___x_5258_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0___boxed(lean_object* v_x_5259_){
_start:
{
lean_object* v_res_5260_; 
v_res_5260_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0(v_x_5259_);
lean_dec(v_x_5259_);
return v_res_5260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_getMany(lean_object* v_self_5262_, lean_object* v_keys_5263_, lean_object* v_options_5264_){
_start:
{
lean_object* v___x_5266_; size_t v_sz_5267_; size_t v___x_5268_; lean_object* v___x_5269_; lean_object* v___x_5270_; lean_object* v___x_5271_; lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; 
v___x_5266_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_getMany___closed__0));
v_sz_5267_ = lean_array_size(v_keys_5263_);
v___x_5268_ = ((size_t)0ULL);
v___x_5269_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(v_sz_5267_, v___x_5268_, v_keys_5263_);
v___x_5270_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5270_, 0, v___x_5269_);
v___x_5271_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0(v_options_5264_);
v___x_5272_ = lean_unsigned_to_nat(2u);
v___x_5273_ = lean_mk_empty_array_with_capacity(v___x_5272_);
v___x_5274_ = lean_array_push(v___x_5273_, v___x_5270_);
v___x_5275_ = lean_array_push(v___x_5274_, v___x_5271_);
v___x_5276_ = l_Lasm_JS_Web_Support_args(v___x_5275_);
v___x_5277_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1(v_self_5262_, v___x_5266_, v___x_5276_);
return v___x_5277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_getMany___boxed(lean_object* v_self_5278_, lean_object* v_keys_5279_, lean_object* v_options_5280_, lean_object* v_a_5281_){
_start:
{
lean_object* v_res_5282_; 
v_res_5282_ = l_Lasm_JS_Deno_Kv_getMany(v_self_5278_, v_keys_5279_, v_options_5280_);
lean_dec(v_options_5280_);
return v_res_5282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0(lean_object* v_x_5283_){
_start:
{
if (lean_obj_tag(v_x_5283_) == 0)
{
lean_object* v___x_5284_; 
v___x_5284_ = lean_box(0);
return v___x_5284_;
}
else
{
lean_object* v_val_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; 
v_val_5285_ = lean_ctor_get(v_x_5283_, 0);
v___x_5286_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_5287_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_val_5285_);
v___x_5288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5288_, 0, v___x_5286_);
lean_ctor_set(v___x_5288_, 1, v___x_5287_);
v___x_5289_ = lean_unsigned_to_nat(1u);
v___x_5290_ = lean_mk_empty_array_with_capacity(v___x_5289_);
v___x_5291_ = lean_array_push(v___x_5290_, v___x_5288_);
v___x_5292_ = l_Lasm_JS_Web_Support_fields(v___x_5291_);
lean_dec_ref(v___x_5291_);
return v___x_5292_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0___boxed(lean_object* v_x_5293_){
_start:
{
lean_object* v_res_5294_; 
v_res_5294_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0(v_x_5293_);
lean_dec(v_x_5293_);
return v_res_5294_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1(lean_object* v___f_5295_, lean_object* v_bytes_5296_){
_start:
{
lean_object* v___x_5298_; uint8_t v___x_5299_; lean_object* v_val_5301_; lean_object* v___x_5304_; 
v___x_5298_ = lean_unsigned_to_nat(0u);
v___x_5299_ = 0;
v___x_5304_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5296_);
if (lean_obj_tag(v___x_5304_) == 0)
{
lean_object* v_a_5305_; lean_object* v___x_5307_; uint8_t v_isShared_5308_; uint8_t v_isSharedCheck_5312_; 
v_a_5305_ = lean_ctor_get(v___x_5304_, 0);
v_isSharedCheck_5312_ = !lean_is_exclusive(v___x_5304_);
if (v_isSharedCheck_5312_ == 0)
{
v___x_5307_ = v___x_5304_;
v_isShared_5308_ = v_isSharedCheck_5312_;
goto v_resetjp_5306_;
}
else
{
lean_inc(v_a_5305_);
lean_dec(v___x_5304_);
v___x_5307_ = lean_box(0);
v_isShared_5308_ = v_isSharedCheck_5312_;
goto v_resetjp_5306_;
}
v_resetjp_5306_:
{
lean_object* v___x_5310_; 
if (v_isShared_5308_ == 0)
{
lean_ctor_set_tag(v___x_5307_, 1);
v___x_5310_ = v___x_5307_;
goto v_reusejp_5309_;
}
else
{
lean_object* v_reuseFailAlloc_5311_; 
v_reuseFailAlloc_5311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5311_, 0, v_a_5305_);
v___x_5310_ = v_reuseFailAlloc_5311_;
goto v_reusejp_5309_;
}
v_reusejp_5309_:
{
v_val_5301_ = v___x_5310_;
goto v___jp_5300_;
}
}
}
else
{
lean_object* v_a_5313_; lean_object* v___x_5315_; uint8_t v_isShared_5316_; uint8_t v_isSharedCheck_5320_; 
v_a_5313_ = lean_ctor_get(v___x_5304_, 0);
v_isSharedCheck_5320_ = !lean_is_exclusive(v___x_5304_);
if (v_isSharedCheck_5320_ == 0)
{
v___x_5315_ = v___x_5304_;
v_isShared_5316_ = v_isSharedCheck_5320_;
goto v_resetjp_5314_;
}
else
{
lean_inc(v_a_5313_);
lean_dec(v___x_5304_);
v___x_5315_ = lean_box(0);
v_isShared_5316_ = v_isSharedCheck_5320_;
goto v_resetjp_5314_;
}
v_resetjp_5314_:
{
lean_object* v___x_5318_; 
if (v_isShared_5316_ == 0)
{
lean_ctor_set_tag(v___x_5315_, 0);
v___x_5318_ = v___x_5315_;
goto v_reusejp_5317_;
}
else
{
lean_object* v_reuseFailAlloc_5319_; 
v_reuseFailAlloc_5319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5319_, 0, v_a_5313_);
v___x_5318_ = v_reuseFailAlloc_5319_;
goto v_reusejp_5317_;
}
v_reusejp_5317_:
{
v_val_5301_ = v___x_5318_;
goto v___jp_5300_;
}
}
}
v___jp_5300_:
{
lean_object* v___x_5302_; lean_object* v___x_5303_; 
v___x_5302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5302_, 0, v_val_5301_);
v___x_5303_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5298_, v___x_5299_, v___x_5302_, v___f_5295_);
return v___x_5303_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1___boxed(lean_object* v___f_5321_, lean_object* v_bytes_5322_, lean_object* v___y_5323_){
_start:
{
lean_object* v_res_5324_; 
v_res_5324_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1(v___f_5321_, v_bytes_5322_);
lean_dec_ref(v_bytes_5322_);
return v_res_5324_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2(lean_object* v___f_5325_, lean_object* v_x_5326_){
_start:
{
if (lean_obj_tag(v_x_5326_) == 0)
{
lean_object* v_a_5328_; lean_object* v___x_5330_; uint8_t v_isShared_5331_; uint8_t v_isSharedCheck_5336_; 
lean_dec_ref(v___f_5325_);
v_a_5328_ = lean_ctor_get(v_x_5326_, 0);
v_isSharedCheck_5336_ = !lean_is_exclusive(v_x_5326_);
if (v_isSharedCheck_5336_ == 0)
{
v___x_5330_ = v_x_5326_;
v_isShared_5331_ = v_isSharedCheck_5336_;
goto v_resetjp_5329_;
}
else
{
lean_inc(v_a_5328_);
lean_dec(v_x_5326_);
v___x_5330_ = lean_box(0);
v_isShared_5331_ = v_isSharedCheck_5336_;
goto v_resetjp_5329_;
}
v_resetjp_5329_:
{
lean_object* v___x_5333_; 
if (v_isShared_5331_ == 0)
{
v___x_5333_ = v___x_5330_;
goto v_reusejp_5332_;
}
else
{
lean_object* v_reuseFailAlloc_5335_; 
v_reuseFailAlloc_5335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5335_, 0, v_a_5328_);
v___x_5333_ = v_reuseFailAlloc_5335_;
goto v_reusejp_5332_;
}
v_reusejp_5332_:
{
lean_object* v___x_5334_; 
v___x_5334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5334_, 0, v___x_5333_);
return v___x_5334_;
}
}
}
else
{
lean_object* v_a_5337_; lean_object* v___x_5338_; 
v_a_5337_ = lean_ctor_get(v_x_5326_, 0);
lean_inc(v_a_5337_);
lean_dec_ref_known(v_x_5326_, 1);
v___x_5338_ = lean_apply_2(v___f_5325_, v_a_5337_, lean_box(0));
return v___x_5338_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2___boxed(lean_object* v___f_5339_, lean_object* v_x_5340_, lean_object* v___y_5341_){
_start:
{
lean_object* v_res_5342_; 
v_res_5342_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2(v___f_5339_, v_x_5340_);
return v_res_5342_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3(lean_object* v___f_5343_, lean_object* v_x_5344_){
_start:
{
if (lean_obj_tag(v_x_5344_) == 0)
{
lean_object* v_a_5346_; lean_object* v___x_5348_; uint8_t v_isShared_5349_; uint8_t v_isSharedCheck_5354_; 
lean_dec_ref(v___f_5343_);
v_a_5346_ = lean_ctor_get(v_x_5344_, 0);
v_isSharedCheck_5354_ = !lean_is_exclusive(v_x_5344_);
if (v_isSharedCheck_5354_ == 0)
{
v___x_5348_ = v_x_5344_;
v_isShared_5349_ = v_isSharedCheck_5354_;
goto v_resetjp_5347_;
}
else
{
lean_inc(v_a_5346_);
lean_dec(v_x_5344_);
v___x_5348_ = lean_box(0);
v_isShared_5349_ = v_isSharedCheck_5354_;
goto v_resetjp_5347_;
}
v_resetjp_5347_:
{
lean_object* v___x_5351_; 
if (v_isShared_5349_ == 0)
{
v___x_5351_ = v___x_5348_;
goto v_reusejp_5350_;
}
else
{
lean_object* v_reuseFailAlloc_5353_; 
v_reuseFailAlloc_5353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5353_, 0, v_a_5346_);
v___x_5351_ = v_reuseFailAlloc_5353_;
goto v_reusejp_5350_;
}
v_reusejp_5350_:
{
lean_object* v___x_5352_; 
v___x_5352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5352_, 0, v___x_5351_);
return v___x_5352_;
}
}
}
else
{
lean_object* v___x_5356_; uint8_t v_isShared_5357_; uint8_t v_isSharedCheck_5366_; 
v_isSharedCheck_5366_ = !lean_is_exclusive(v_x_5344_);
if (v_isSharedCheck_5366_ == 0)
{
lean_object* v_unused_5367_; 
v_unused_5367_ = lean_ctor_get(v_x_5344_, 0);
lean_dec(v_unused_5367_);
v___x_5356_ = v_x_5344_;
v_isShared_5357_ = v_isSharedCheck_5366_;
goto v_resetjp_5355_;
}
else
{
lean_dec(v_x_5344_);
v___x_5356_ = lean_box(0);
v_isShared_5357_ = v_isSharedCheck_5366_;
goto v_resetjp_5355_;
}
v_resetjp_5355_:
{
lean_object* v___x_5358_; uint8_t v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5362_; 
v___x_5358_ = lean_unsigned_to_nat(0u);
v___x_5359_ = 0;
v___x_5360_ = lean_io_promise_new();
if (v_isShared_5357_ == 0)
{
lean_ctor_set(v___x_5356_, 0, v___x_5360_);
v___x_5362_ = v___x_5356_;
goto v_reusejp_5361_;
}
else
{
lean_object* v_reuseFailAlloc_5365_; 
v_reuseFailAlloc_5365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5365_, 0, v___x_5360_);
v___x_5362_ = v_reuseFailAlloc_5365_;
goto v_reusejp_5361_;
}
v_reusejp_5361_:
{
lean_object* v___x_5363_; lean_object* v___x_5364_; 
v___x_5363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5363_, 0, v___x_5362_);
v___x_5364_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5358_, v___x_5359_, v___x_5363_, v___f_5343_);
return v___x_5364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3___boxed(lean_object* v___f_5368_, lean_object* v_x_5369_, lean_object* v___y_5370_){
_start:
{
lean_object* v_res_5371_; 
v_res_5371_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3(v___f_5368_, v_x_5369_);
return v_res_5371_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_5372_, uint32_t v_op_5373_, uint64_t v_flags_5374_, lean_object* v_payload_5375_, lean_object* v___f_5376_, lean_object* v___f_5377_, lean_object* v___f_5378_, lean_object* v_x_5379_){
_start:
{
if (lean_obj_tag(v_x_5379_) == 0)
{
lean_object* v_a_5381_; lean_object* v___x_5383_; uint8_t v_isShared_5384_; uint8_t v_isSharedCheck_5389_; 
lean_dec_ref(v___f_5378_);
lean_dec_ref(v___f_5377_);
lean_dec_ref(v___f_5376_);
lean_dec(v_payload_5375_);
v_a_5381_ = lean_ctor_get(v_x_5379_, 0);
v_isSharedCheck_5389_ = !lean_is_exclusive(v_x_5379_);
if (v_isSharedCheck_5389_ == 0)
{
v___x_5383_ = v_x_5379_;
v_isShared_5384_ = v_isSharedCheck_5389_;
goto v_resetjp_5382_;
}
else
{
lean_inc(v_a_5381_);
lean_dec(v_x_5379_);
v___x_5383_ = lean_box(0);
v_isShared_5384_ = v_isSharedCheck_5389_;
goto v_resetjp_5382_;
}
v_resetjp_5382_:
{
lean_object* v___x_5386_; 
if (v_isShared_5384_ == 0)
{
v___x_5386_ = v___x_5383_;
goto v_reusejp_5385_;
}
else
{
lean_object* v_reuseFailAlloc_5388_; 
v_reuseFailAlloc_5388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5388_, 0, v_a_5381_);
v___x_5386_ = v_reuseFailAlloc_5388_;
goto v_reusejp_5385_;
}
v_reusejp_5385_:
{
lean_object* v___x_5387_; 
v___x_5387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5387_, 0, v___x_5386_);
return v___x_5387_;
}
}
}
else
{
lean_object* v_a_5390_; lean_object* v___x_5392_; uint8_t v_isShared_5393_; uint8_t v_isSharedCheck_5436_; 
v_a_5390_ = lean_ctor_get(v_x_5379_, 0);
v_isSharedCheck_5436_ = !lean_is_exclusive(v_x_5379_);
if (v_isSharedCheck_5436_ == 0)
{
v___x_5392_ = v_x_5379_;
v_isShared_5393_ = v_isSharedCheck_5436_;
goto v_resetjp_5391_;
}
else
{
lean_inc(v_a_5390_);
lean_dec(v_x_5379_);
v___x_5392_ = lean_box(0);
v_isShared_5393_ = v_isSharedCheck_5436_;
goto v_resetjp_5391_;
}
v_resetjp_5391_:
{
lean_object* v___x_5394_; lean_object* v___x_5395_; uint8_t v___x_5396_; 
v___x_5394_ = lean_string_utf8_byte_size(v_failurePrefix_5372_);
v___x_5395_ = lean_unsigned_to_nat(0u);
v___x_5396_ = lean_nat_dec_eq(v___x_5394_, v___x_5395_);
if (v___x_5396_ == 0)
{
lean_object* v___f_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; lean_object* v___f_5401_; lean_object* v_val_5403_; lean_object* v___x_5408_; 
lean_dec_ref(v___f_5378_);
lean_inc(v_a_5390_);
v___f_5397_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5397_, 0, v_a_5390_);
v___x_5398_ = lean_box(v___x_5396_);
v___x_5399_ = lean_box_uint32(v_op_5373_);
v___x_5400_ = lean_box_uint64(v_flags_5374_);
lean_inc(v_payload_5375_);
v___f_5401_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_5401_, 0, v___x_5395_);
lean_closure_set(v___f_5401_, 1, v___x_5398_);
lean_closure_set(v___f_5401_, 2, v___f_5397_);
lean_closure_set(v___f_5401_, 3, v_a_5390_);
lean_closure_set(v___f_5401_, 4, v___x_5399_);
lean_closure_set(v___f_5401_, 5, v___x_5400_);
lean_closure_set(v___f_5401_, 6, v_payload_5375_);
v___x_5408_ = l_Lasm_JS_Wire_encodeIO(v_payload_5375_);
lean_dec(v_payload_5375_);
if (lean_obj_tag(v___x_5408_) == 0)
{
lean_object* v_a_5409_; lean_object* v___x_5411_; 
v_a_5409_ = lean_ctor_get(v___x_5408_, 0);
lean_inc(v_a_5409_);
lean_dec_ref_known(v___x_5408_, 1);
if (v_isShared_5393_ == 0)
{
lean_ctor_set(v___x_5392_, 0, v_a_5409_);
v___x_5411_ = v___x_5392_;
goto v_reusejp_5410_;
}
else
{
lean_object* v_reuseFailAlloc_5412_; 
v_reuseFailAlloc_5412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5412_, 0, v_a_5409_);
v___x_5411_ = v_reuseFailAlloc_5412_;
goto v_reusejp_5410_;
}
v_reusejp_5410_:
{
v_val_5403_ = v___x_5411_;
goto v___jp_5402_;
}
}
else
{
lean_object* v_a_5413_; lean_object* v___x_5415_; 
v_a_5413_ = lean_ctor_get(v___x_5408_, 0);
lean_inc(v_a_5413_);
lean_dec_ref_known(v___x_5408_, 1);
if (v_isShared_5393_ == 0)
{
lean_ctor_set_tag(v___x_5392_, 0);
lean_ctor_set(v___x_5392_, 0, v_a_5413_);
v___x_5415_ = v___x_5392_;
goto v_reusejp_5414_;
}
else
{
lean_object* v_reuseFailAlloc_5416_; 
v_reuseFailAlloc_5416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5416_, 0, v_a_5413_);
v___x_5415_ = v_reuseFailAlloc_5416_;
goto v_reusejp_5414_;
}
v_reusejp_5414_:
{
v_val_5403_ = v___x_5415_;
goto v___jp_5402_;
}
}
v___jp_5402_:
{
lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; 
v___x_5404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5404_, 0, v_val_5403_);
v___x_5405_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5395_, v___x_5396_, v___x_5404_, v___f_5401_);
v___x_5406_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5395_, v___x_5396_, v___x_5405_, v___f_5376_);
v___x_5407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5395_, v___x_5396_, v___x_5406_, v___f_5377_);
return v___x_5407_;
}
}
else
{
lean_object* v___f_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___f_5420_; uint8_t v___x_5421_; lean_object* v_val_5423_; lean_object* v___x_5427_; 
lean_dec_ref(v___f_5377_);
lean_dec_ref(v___f_5376_);
lean_inc(v_a_5390_);
v___f_5417_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5417_, 0, v_a_5390_);
v___x_5418_ = lean_box_uint32(v_op_5373_);
v___x_5419_ = lean_box_uint64(v_flags_5374_);
lean_inc(v_payload_5375_);
v___f_5420_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_5420_, 0, v___f_5417_);
lean_closure_set(v___f_5420_, 1, v_a_5390_);
lean_closure_set(v___f_5420_, 2, v___x_5418_);
lean_closure_set(v___f_5420_, 3, v___x_5419_);
lean_closure_set(v___f_5420_, 4, v_payload_5375_);
v___x_5421_ = 0;
v___x_5427_ = l_Lasm_JS_Wire_encodeIO(v_payload_5375_);
lean_dec(v_payload_5375_);
if (lean_obj_tag(v___x_5427_) == 0)
{
lean_object* v_a_5428_; lean_object* v___x_5430_; 
v_a_5428_ = lean_ctor_get(v___x_5427_, 0);
lean_inc(v_a_5428_);
lean_dec_ref_known(v___x_5427_, 1);
if (v_isShared_5393_ == 0)
{
lean_ctor_set(v___x_5392_, 0, v_a_5428_);
v___x_5430_ = v___x_5392_;
goto v_reusejp_5429_;
}
else
{
lean_object* v_reuseFailAlloc_5431_; 
v_reuseFailAlloc_5431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5431_, 0, v_a_5428_);
v___x_5430_ = v_reuseFailAlloc_5431_;
goto v_reusejp_5429_;
}
v_reusejp_5429_:
{
v_val_5423_ = v___x_5430_;
goto v___jp_5422_;
}
}
else
{
lean_object* v_a_5432_; lean_object* v___x_5434_; 
v_a_5432_ = lean_ctor_get(v___x_5427_, 0);
lean_inc(v_a_5432_);
lean_dec_ref_known(v___x_5427_, 1);
if (v_isShared_5393_ == 0)
{
lean_ctor_set_tag(v___x_5392_, 0);
lean_ctor_set(v___x_5392_, 0, v_a_5432_);
v___x_5434_ = v___x_5392_;
goto v_reusejp_5433_;
}
else
{
lean_object* v_reuseFailAlloc_5435_; 
v_reuseFailAlloc_5435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5435_, 0, v_a_5432_);
v___x_5434_ = v_reuseFailAlloc_5435_;
goto v_reusejp_5433_;
}
v_reusejp_5433_:
{
v_val_5423_ = v___x_5434_;
goto v___jp_5422_;
}
}
v___jp_5422_:
{
lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; 
v___x_5424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5424_, 0, v_val_5423_);
v___x_5425_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5395_, v___x_5421_, v___x_5424_, v___f_5420_);
v___x_5426_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5395_, v___x_5421_, v___x_5425_, v___f_5378_);
return v___x_5426_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_5437_, lean_object* v_op_5438_, lean_object* v_flags_5439_, lean_object* v_payload_5440_, lean_object* v___f_5441_, lean_object* v___f_5442_, lean_object* v___f_5443_, lean_object* v_x_5444_, lean_object* v___y_5445_){
_start:
{
uint32_t v_op_boxed_5446_; uint64_t v_flags_boxed_5447_; lean_object* v_res_5448_; 
v_op_boxed_5446_ = lean_unbox_uint32(v_op_5438_);
lean_dec(v_op_5438_);
v_flags_boxed_5447_ = lean_unbox_uint64(v_flags_5439_);
lean_dec_ref(v_flags_5439_);
v_res_5448_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9(v_failurePrefix_5437_, v_op_boxed_5446_, v_flags_boxed_5447_, v_payload_5440_, v___f_5441_, v___f_5442_, v___f_5443_, v_x_5444_);
lean_dec_ref(v_failurePrefix_5437_);
return v_res_5448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3(lean_object* v_context_5449_, lean_object* v_d_5450_){
_start:
{
lean_object* v___y_5453_; lean_object* v___y_5454_; lean_object* v___y_5459_; lean_object* v_received_5460_; lean_object* v___y_5479_; lean_object* v_a_5482_; lean_object* v___x_5506_; lean_object* v___x_5507_; 
v___x_5506_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0));
lean_inc(v_d_5450_);
v___x_5507_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(v_d_5450_, v___x_5506_);
if (lean_obj_tag(v___x_5507_) == 0)
{
lean_object* v_a_5508_; 
v_a_5508_ = lean_ctor_get(v___x_5507_, 0);
lean_inc(v_a_5508_);
lean_dec_ref_known(v___x_5507_, 1);
v_a_5482_ = v_a_5508_;
goto v___jp_5481_;
}
else
{
lean_object* v_a_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; 
v_a_5509_ = lean_ctor_get(v___x_5507_, 0);
lean_inc(v_a_5509_);
lean_dec_ref_known(v___x_5507_, 1);
v___x_5510_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_d_5450_);
v___x_5511_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_5450_, v___x_5510_);
if (lean_obj_tag(v___x_5511_) == 0)
{
lean_object* v_a_5512_; 
lean_dec(v_a_5509_);
v_a_5512_ = lean_ctor_get(v___x_5511_, 0);
lean_inc(v_a_5512_);
lean_dec_ref_known(v___x_5511_, 1);
v_a_5482_ = v_a_5512_;
goto v___jp_5481_;
}
else
{
lean_object* v_a_5513_; lean_object* v___x_5515_; uint8_t v_isShared_5516_; uint8_t v_isSharedCheck_5522_; 
lean_dec(v_d_5450_);
v_a_5513_ = lean_ctor_get(v___x_5511_, 0);
v_isSharedCheck_5522_ = !lean_is_exclusive(v___x_5511_);
if (v_isSharedCheck_5522_ == 0)
{
v___x_5515_ = v___x_5511_;
v_isShared_5516_ = v_isSharedCheck_5522_;
goto v_resetjp_5514_;
}
else
{
lean_inc(v_a_5513_);
lean_dec(v___x_5511_);
v___x_5515_ = lean_box(0);
v_isShared_5516_ = v_isSharedCheck_5522_;
goto v_resetjp_5514_;
}
v_resetjp_5514_:
{
lean_object* v___x_5517_; uint8_t v___x_5518_; lean_object* v___x_5520_; 
v___x_5517_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5517_, 0, v_a_5513_);
v___x_5518_ = lean_unbox(v_a_5509_);
lean_dec(v_a_5509_);
lean_ctor_set_uint8(v___x_5517_, sizeof(void*)*1, v___x_5518_);
if (v_isShared_5516_ == 0)
{
lean_ctor_set_tag(v___x_5515_, 0);
lean_ctor_set(v___x_5515_, 0, v___x_5517_);
v___x_5520_ = v___x_5515_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v___x_5517_);
v___x_5520_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
return v___x_5520_;
}
}
}
}
v___jp_5452_:
{
lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; 
v___x_5455_ = lean_string_append(v___y_5453_, v___y_5454_);
lean_dec_ref(v___y_5454_);
v___x_5456_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5456_, 0, v___x_5455_);
v___x_5457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5457_, 0, v___x_5456_);
return v___x_5457_;
}
v___jp_5458_:
{
lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; uint8_t v___x_5472_; 
v___x_5461_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_5462_ = lean_string_append(v___x_5461_, v_context_5449_);
v___x_5463_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_5464_ = lean_string_append(v___x_5462_, v___x_5463_);
v___x_5465_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__1));
v___x_5466_ = lean_string_append(v___x_5464_, v___x_5465_);
v___x_5467_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_5468_ = lean_string_append(v___x_5466_, v___x_5467_);
v___x_5469_ = lean_string_append(v___x_5468_, v_received_5460_);
lean_dec_ref(v_received_5460_);
v___x_5470_ = lean_string_utf8_byte_size(v___y_5459_);
v___x_5471_ = lean_unsigned_to_nat(0u);
v___x_5472_ = lean_nat_dec_eq(v___x_5470_, v___x_5471_);
if (v___x_5472_ == 0)
{
lean_object* v___x_5473_; lean_object* v___x_5474_; lean_object* v___x_5475_; lean_object* v___x_5476_; 
v___x_5473_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_5474_ = lean_string_append(v___x_5473_, v___y_5459_);
lean_dec_ref(v___y_5459_);
v___x_5475_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5476_ = lean_string_append(v___x_5474_, v___x_5475_);
v___y_5453_ = v___x_5469_;
v___y_5454_ = v___x_5476_;
goto v___jp_5452_;
}
else
{
lean_object* v___x_5477_; 
lean_dec_ref(v___y_5459_);
v___x_5477_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_5453_ = v___x_5469_;
v___y_5454_ = v___x_5477_;
goto v___jp_5452_;
}
}
v___jp_5478_:
{
lean_object* v___x_5480_; 
v___x_5480_ = l_Lasm_JS_Data_describe(v_d_5450_);
v___y_5459_ = v___y_5479_;
v_received_5460_ = v___x_5480_;
goto v___jp_5458_;
}
v___jp_5481_:
{
if (lean_obj_tag(v_d_5450_) == 9)
{
lean_object* v_value_5483_; lean_object* v_description_5484_; lean_object* v___x_5485_; uint8_t v___x_5486_; 
v_value_5483_ = lean_ctor_get(v_d_5450_, 0);
v_description_5484_ = lean_ctor_get(v_d_5450_, 1);
v___x_5485_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5486_ = lean_string_dec_eq(v_description_5484_, v___x_5485_);
if (v___x_5486_ == 0)
{
v___y_5479_ = v_a_5482_;
goto v___jp_5478_;
}
else
{
lean_object* v___x_5488_; uint8_t v_isShared_5489_; uint8_t v_isSharedCheck_5503_; 
lean_inc(v_value_5483_);
v_isSharedCheck_5503_ = !lean_is_exclusive(v_d_5450_);
if (v_isSharedCheck_5503_ == 0)
{
lean_object* v_unused_5504_; lean_object* v_unused_5505_; 
v_unused_5504_ = lean_ctor_get(v_d_5450_, 1);
lean_dec(v_unused_5504_);
v_unused_5505_ = lean_ctor_get(v_d_5450_, 0);
lean_dec(v_unused_5505_);
v___x_5488_ = v_d_5450_;
v_isShared_5489_ = v_isSharedCheck_5503_;
goto v_resetjp_5487_;
}
else
{
lean_dec(v_d_5450_);
v___x_5488_ = lean_box(0);
v_isShared_5489_ = v_isSharedCheck_5503_;
goto v_resetjp_5487_;
}
v_resetjp_5487_:
{
uint32_t v___x_5490_; uint64_t v___x_5491_; lean_object* v___x_5493_; 
v___x_5490_ = 206;
v___x_5491_ = 0ULL;
lean_inc(v_value_5483_);
if (v_isShared_5489_ == 0)
{
lean_ctor_set(v___x_5488_, 1, v___x_5485_);
v___x_5493_ = v___x_5488_;
goto v_reusejp_5492_;
}
else
{
lean_object* v_reuseFailAlloc_5502_; 
v_reuseFailAlloc_5502_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5502_, 0, v_value_5483_);
lean_ctor_set(v_reuseFailAlloc_5502_, 1, v___x_5485_);
v___x_5493_ = v_reuseFailAlloc_5502_;
goto v_reusejp_5492_;
}
v_reusejp_5492_:
{
uint32_t v___x_5494_; lean_object* v___x_5495_; 
v___x_5494_ = lasm_js_value_handle(v_value_5483_);
lean_dec(v_value_5483_);
v___x_5495_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5490_, v___x_5491_, v___x_5493_, v___x_5494_);
lean_dec_ref(v___x_5493_);
if (lean_obj_tag(v___x_5495_) == 0)
{
lean_object* v_a_5496_; uint8_t v___x_5497_; 
v_a_5496_ = lean_ctor_get(v___x_5495_, 0);
lean_inc(v_a_5496_);
lean_dec_ref_known(v___x_5495_, 1);
v___x_5497_ = lean_string_validate_utf8(v_a_5496_);
if (v___x_5497_ == 0)
{
lean_object* v___x_5498_; lean_object* v___x_5499_; 
lean_dec(v_a_5496_);
v___x_5498_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_5499_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5498_);
v___y_5459_ = v_a_5482_;
v_received_5460_ = v___x_5499_;
goto v___jp_5458_;
}
else
{
lean_object* v___x_5500_; 
v___x_5500_ = lean_string_from_utf8_unchecked(v_a_5496_);
v___y_5459_ = v_a_5482_;
v_received_5460_ = v___x_5500_;
goto v___jp_5458_;
}
}
else
{
lean_object* v___x_5501_; 
lean_dec_ref_known(v___x_5495_, 1);
v___x_5501_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_5459_ = v_a_5482_;
v_received_5460_ = v___x_5501_;
goto v___jp_5458_;
}
}
}
}
}
else
{
v___y_5479_ = v_a_5482_;
goto v___jp_5478_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3___boxed(lean_object* v_context_5523_, lean_object* v_d_5524_, lean_object* v_a_5525_){
_start:
{
lean_object* v_res_5526_; 
v_res_5526_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3(v_context_5523_, v_d_5524_);
lean_dec_ref(v_context_5523_);
return v_res_5526_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0(lean_object* v_context_5527_, lean_object* v_x_5528_){
_start:
{
lean_object* v_val_5531_; 
if (lean_obj_tag(v_x_5528_) == 0)
{
lean_object* v_a_5533_; lean_object* v___x_5535_; uint8_t v_isShared_5536_; uint8_t v_isSharedCheck_5541_; 
v_a_5533_ = lean_ctor_get(v_x_5528_, 0);
v_isSharedCheck_5541_ = !lean_is_exclusive(v_x_5528_);
if (v_isSharedCheck_5541_ == 0)
{
v___x_5535_ = v_x_5528_;
v_isShared_5536_ = v_isSharedCheck_5541_;
goto v_resetjp_5534_;
}
else
{
lean_inc(v_a_5533_);
lean_dec(v_x_5528_);
v___x_5535_ = lean_box(0);
v_isShared_5536_ = v_isSharedCheck_5541_;
goto v_resetjp_5534_;
}
v_resetjp_5534_:
{
lean_object* v___x_5538_; 
if (v_isShared_5536_ == 0)
{
v___x_5538_ = v___x_5535_;
goto v_reusejp_5537_;
}
else
{
lean_object* v_reuseFailAlloc_5540_; 
v_reuseFailAlloc_5540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5540_, 0, v_a_5533_);
v___x_5538_ = v_reuseFailAlloc_5540_;
goto v_reusejp_5537_;
}
v_reusejp_5537_:
{
lean_object* v___x_5539_; 
v___x_5539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5539_, 0, v___x_5538_);
return v___x_5539_;
}
}
}
else
{
lean_object* v_a_5542_; lean_object* v___x_5544_; uint8_t v_isShared_5545_; uint8_t v_isSharedCheck_5555_; 
v_a_5542_ = lean_ctor_get(v_x_5528_, 0);
v_isSharedCheck_5555_ = !lean_is_exclusive(v_x_5528_);
if (v_isSharedCheck_5555_ == 0)
{
v___x_5544_ = v_x_5528_;
v_isShared_5545_ = v_isSharedCheck_5555_;
goto v_resetjp_5543_;
}
else
{
lean_inc(v_a_5542_);
lean_dec(v_x_5528_);
v___x_5544_ = lean_box(0);
v_isShared_5545_ = v_isSharedCheck_5555_;
goto v_resetjp_5543_;
}
v_resetjp_5543_:
{
lean_object* v___x_5546_; 
v___x_5546_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3(v_context_5527_, v_a_5542_);
if (lean_obj_tag(v___x_5546_) == 0)
{
lean_object* v_a_5547_; lean_object* v___x_5549_; 
v_a_5547_ = lean_ctor_get(v___x_5546_, 0);
lean_inc(v_a_5547_);
lean_dec_ref_known(v___x_5546_, 1);
if (v_isShared_5545_ == 0)
{
lean_ctor_set(v___x_5544_, 0, v_a_5547_);
v___x_5549_ = v___x_5544_;
goto v_reusejp_5548_;
}
else
{
lean_object* v_reuseFailAlloc_5550_; 
v_reuseFailAlloc_5550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5550_, 0, v_a_5547_);
v___x_5549_ = v_reuseFailAlloc_5550_;
goto v_reusejp_5548_;
}
v_reusejp_5548_:
{
v_val_5531_ = v___x_5549_;
goto v___jp_5530_;
}
}
else
{
lean_object* v_a_5551_; lean_object* v___x_5553_; 
v_a_5551_ = lean_ctor_get(v___x_5546_, 0);
lean_inc(v_a_5551_);
lean_dec_ref_known(v___x_5546_, 1);
if (v_isShared_5545_ == 0)
{
lean_ctor_set_tag(v___x_5544_, 0);
lean_ctor_set(v___x_5544_, 0, v_a_5551_);
v___x_5553_ = v___x_5544_;
goto v_reusejp_5552_;
}
else
{
lean_object* v_reuseFailAlloc_5554_; 
v_reuseFailAlloc_5554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5554_, 0, v_a_5551_);
v___x_5553_ = v_reuseFailAlloc_5554_;
goto v_reusejp_5552_;
}
v_reusejp_5552_:
{
v_val_5531_ = v___x_5553_;
goto v___jp_5530_;
}
}
}
}
v___jp_5530_:
{
lean_object* v___x_5532_; 
v___x_5532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5532_, 0, v_val_5531_);
return v___x_5532_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0___boxed(lean_object* v_context_5556_, lean_object* v_x_5557_, lean_object* v___y_5558_){
_start:
{
lean_object* v_res_5559_; 
v_res_5559_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0(v_context_5556_, v_x_5557_);
lean_dec_ref(v_context_5556_);
return v_res_5559_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2(lean_object* v_context_5560_, uint32_t v_op_5561_, uint64_t v_flags_5562_, lean_object* v_payload_5563_, lean_object* v_failurePrefix_5564_){
_start:
{
lean_object* v___f_5566_; lean_object* v___f_5567_; lean_object* v___f_5568_; lean_object* v___f_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___f_5572_; lean_object* v___f_5573_; lean_object* v___x_5574_; uint8_t v___x_5575_; lean_object* v_val_5577_; lean_object* v___x_5580_; 
v___f_5566_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5566_, 0, v_context_5560_);
v___f_5567_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5567_, 0, v___f_5566_);
v___f_5568_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5568_, 0, v___f_5567_);
lean_inc_ref(v_failurePrefix_5564_);
v___f_5569_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5569_, 0, v_failurePrefix_5564_);
v___x_5570_ = lean_box_uint32(v_op_5561_);
v___x_5571_ = lean_box_uint64(v_flags_5562_);
lean_inc_ref(v___f_5568_);
v___f_5572_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_5572_, 0, v_failurePrefix_5564_);
lean_closure_set(v___f_5572_, 1, v___x_5570_);
lean_closure_set(v___f_5572_, 2, v___x_5571_);
lean_closure_set(v___f_5572_, 3, v_payload_5563_);
lean_closure_set(v___f_5572_, 4, v___f_5569_);
lean_closure_set(v___f_5572_, 5, v___f_5568_);
lean_closure_set(v___f_5572_, 6, v___f_5568_);
v___f_5573_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5573_, 0, v___f_5572_);
v___x_5574_ = lean_unsigned_to_nat(0u);
v___x_5575_ = 0;
v___x_5580_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5580_) == 0)
{
lean_object* v_a_5581_; lean_object* v___x_5583_; uint8_t v_isShared_5584_; uint8_t v_isSharedCheck_5588_; 
v_a_5581_ = lean_ctor_get(v___x_5580_, 0);
v_isSharedCheck_5588_ = !lean_is_exclusive(v___x_5580_);
if (v_isSharedCheck_5588_ == 0)
{
v___x_5583_ = v___x_5580_;
v_isShared_5584_ = v_isSharedCheck_5588_;
goto v_resetjp_5582_;
}
else
{
lean_inc(v_a_5581_);
lean_dec(v___x_5580_);
v___x_5583_ = lean_box(0);
v_isShared_5584_ = v_isSharedCheck_5588_;
goto v_resetjp_5582_;
}
v_resetjp_5582_:
{
lean_object* v___x_5586_; 
if (v_isShared_5584_ == 0)
{
lean_ctor_set_tag(v___x_5583_, 1);
v___x_5586_ = v___x_5583_;
goto v_reusejp_5585_;
}
else
{
lean_object* v_reuseFailAlloc_5587_; 
v_reuseFailAlloc_5587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5587_, 0, v_a_5581_);
v___x_5586_ = v_reuseFailAlloc_5587_;
goto v_reusejp_5585_;
}
v_reusejp_5585_:
{
v_val_5577_ = v___x_5586_;
goto v___jp_5576_;
}
}
}
else
{
lean_object* v_a_5589_; lean_object* v___x_5591_; uint8_t v_isShared_5592_; uint8_t v_isSharedCheck_5596_; 
v_a_5589_ = lean_ctor_get(v___x_5580_, 0);
v_isSharedCheck_5596_ = !lean_is_exclusive(v___x_5580_);
if (v_isSharedCheck_5596_ == 0)
{
v___x_5591_ = v___x_5580_;
v_isShared_5592_ = v_isSharedCheck_5596_;
goto v_resetjp_5590_;
}
else
{
lean_inc(v_a_5589_);
lean_dec(v___x_5580_);
v___x_5591_ = lean_box(0);
v_isShared_5592_ = v_isSharedCheck_5596_;
goto v_resetjp_5590_;
}
v_resetjp_5590_:
{
lean_object* v___x_5594_; 
if (v_isShared_5592_ == 0)
{
lean_ctor_set_tag(v___x_5591_, 0);
v___x_5594_ = v___x_5591_;
goto v_reusejp_5593_;
}
else
{
lean_object* v_reuseFailAlloc_5595_; 
v_reuseFailAlloc_5595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5595_, 0, v_a_5589_);
v___x_5594_ = v_reuseFailAlloc_5595_;
goto v_reusejp_5593_;
}
v_reusejp_5593_:
{
v_val_5577_ = v___x_5594_;
goto v___jp_5576_;
}
}
}
v___jp_5576_:
{
lean_object* v___x_5578_; lean_object* v___x_5579_; 
v___x_5578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5578_, 0, v_val_5577_);
v___x_5579_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5574_, v___x_5575_, v___x_5578_, v___f_5573_);
return v___x_5579_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___boxed(lean_object* v_context_5597_, lean_object* v_op_5598_, lean_object* v_flags_5599_, lean_object* v_payload_5600_, lean_object* v_failurePrefix_5601_, lean_object* v_a_5602_){
_start:
{
uint32_t v_op_boxed_5603_; uint64_t v_flags_boxed_5604_; lean_object* v_res_5605_; 
v_op_boxed_5603_ = lean_unbox_uint32(v_op_5598_);
lean_dec(v_op_5598_);
v_flags_boxed_5604_ = lean_unbox_uint64(v_flags_5599_);
lean_dec_ref(v_flags_5599_);
v_res_5605_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2(v_context_5597_, v_op_boxed_5603_, v_flags_boxed_5604_, v_payload_5600_, v_failurePrefix_5601_);
return v_res_5605_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1(uint8_t v_await_5606_, uint64_t v_extra_5607_){
_start:
{
uint64_t v___x_5608_; uint64_t v___y_5610_; 
v___x_5608_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_5606_ == 0)
{
uint64_t v___x_5613_; 
v___x_5613_ = 0ULL;
v___y_5610_ = v___x_5613_;
goto v___jp_5609_;
}
else
{
uint64_t v___x_5614_; 
v___x_5614_ = 2ULL;
v___y_5610_ = v___x_5614_;
goto v___jp_5609_;
}
v___jp_5609_:
{
uint64_t v___x_5611_; uint64_t v___x_5612_; 
v___x_5611_ = lean_uint64_lor(v___x_5608_, v___y_5610_);
v___x_5612_ = lean_uint64_lor(v___x_5611_, v_extra_5607_);
return v___x_5612_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1___boxed(lean_object* v_await_5615_, lean_object* v_extra_5616_){
_start:
{
uint8_t v_await_boxed_5617_; uint64_t v_extra_boxed_5618_; uint64_t v_res_5619_; lean_object* v_r_5620_; 
v_await_boxed_5617_ = lean_unbox(v_await_5615_);
v_extra_boxed_5618_ = lean_unbox_uint64(v_extra_5616_);
lean_dec_ref(v_extra_5616_);
v_res_5619_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1(v_await_boxed_5617_, v_extra_boxed_5618_);
v_r_5620_ = lean_box_uint64(v_res_5619_);
return v_r_5620_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0(void){
_start:
{
uint64_t v___x_5621_; uint8_t v___x_5622_; uint64_t v___x_5623_; 
v___x_5621_ = 8ULL;
v___x_5622_ = 0;
v___x_5623_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1(v___x_5622_, v___x_5621_);
return v___x_5623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(lean_object* v_o_5624_, lean_object* v_name_5625_, lean_object* v_args_5626_){
_start:
{
lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; lean_object* v___x_5632_; uint32_t v___x_5633_; uint64_t v___x_5634_; lean_object* v___x_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; 
v___x_5628_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5629_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5629_, 0, v_o_5624_);
lean_ctor_set(v___x_5629_, 1, v___x_5628_);
lean_inc_ref(v_name_5625_);
v___x_5630_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5630_, 0, v_name_5625_);
v___x_5631_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_5632_ = lean_string_append(v___x_5631_, v_name_5625_);
lean_dec_ref(v_name_5625_);
v___x_5633_ = 205;
v___x_5634_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0);
v___x_5635_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5635_, 0, v_args_5626_);
v___x_5636_ = lean_unsigned_to_nat(3u);
v___x_5637_ = lean_mk_empty_array_with_capacity(v___x_5636_);
v___x_5638_ = lean_array_push(v___x_5637_, v___x_5629_);
v___x_5639_ = lean_array_push(v___x_5638_, v___x_5630_);
v___x_5640_ = lean_array_push(v___x_5639_, v___x_5635_);
v___x_5641_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5641_, 0, v___x_5640_);
v___x_5642_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2(v___x_5632_, v___x_5633_, v___x_5634_, v___x_5641_, v___x_5628_);
return v___x_5642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___boxed(lean_object* v_o_5643_, lean_object* v_name_5644_, lean_object* v_args_5645_, lean_object* v___y_5646_){
_start:
{
lean_object* v_res_5647_; 
v_res_5647_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(v_o_5643_, v_name_5644_, v_args_5645_);
return v_res_5647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_set(lean_object* v_self_5648_, lean_object* v_key_5649_, lean_object* v_value_5650_, lean_object* v_options_5651_){
_start:
{
lean_object* v___x_5653_; size_t v_sz_5654_; size_t v___x_5655_; lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; lean_object* v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; 
v___x_5653_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__0));
v_sz_5654_ = lean_array_size(v_key_5649_);
v___x_5655_ = ((size_t)0ULL);
v___x_5656_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_5654_, v___x_5655_, v_key_5649_);
v___x_5657_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5657_, 0, v___x_5656_);
v___x_5658_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0(v_options_5651_);
v___x_5659_ = lean_unsigned_to_nat(3u);
v___x_5660_ = lean_mk_empty_array_with_capacity(v___x_5659_);
v___x_5661_ = lean_array_push(v___x_5660_, v___x_5657_);
v___x_5662_ = lean_array_push(v___x_5661_, v_value_5650_);
v___x_5663_ = lean_array_push(v___x_5662_, v___x_5658_);
v___x_5664_ = l_Lasm_JS_Web_Support_args(v___x_5663_);
v___x_5665_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(v_self_5648_, v___x_5653_, v___x_5664_);
return v___x_5665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_set___boxed(lean_object* v_self_5666_, lean_object* v_key_5667_, lean_object* v_value_5668_, lean_object* v_options_5669_, lean_object* v_a_5670_){
_start:
{
lean_object* v_res_5671_; 
v_res_5671_ = l_Lasm_JS_Deno_Kv_set(v_self_5666_, v_key_5667_, v_value_5668_, v_options_5669_);
lean_dec(v_options_5669_);
return v_res_5671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_delete(lean_object* v_self_5672_, lean_object* v_key_5673_){
_start:
{
lean_object* v___x_5675_; size_t v_sz_5676_; size_t v___x_5677_; lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; 
v___x_5675_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__2));
v_sz_5676_ = lean_array_size(v_key_5673_);
v___x_5677_ = ((size_t)0ULL);
v___x_5678_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_5676_, v___x_5677_, v_key_5673_);
v___x_5679_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5679_, 0, v___x_5678_);
v___x_5680_ = lean_unsigned_to_nat(1u);
v___x_5681_ = lean_mk_empty_array_with_capacity(v___x_5680_);
v___x_5682_ = lean_array_push(v___x_5681_, v___x_5679_);
v___x_5683_ = l_Lasm_JS_Web_Support_args(v___x_5682_);
v___x_5684_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5672_, v___x_5675_, v___x_5683_);
return v___x_5684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_delete___boxed(lean_object* v_self_5685_, lean_object* v_key_5686_, lean_object* v_a_5687_){
_start:
{
lean_object* v_res_5688_; 
v_res_5688_ = l_Lasm_JS_Deno_Kv_delete(v_self_5685_, v_key_5686_);
return v_res_5688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(lean_object* v_x_5689_){
_start:
{
if (lean_obj_tag(v_x_5689_) == 0)
{
lean_object* v___x_5690_; 
v___x_5690_ = lean_box(0);
return v___x_5690_;
}
else
{
lean_object* v_val_5691_; lean_object* v___x_5693_; uint8_t v_isShared_5694_; uint8_t v_isSharedCheck_5701_; 
v_val_5691_ = lean_ctor_get(v_x_5689_, 0);
v_isSharedCheck_5701_ = !lean_is_exclusive(v_x_5689_);
if (v_isSharedCheck_5701_ == 0)
{
v___x_5693_ = v_x_5689_;
v_isShared_5694_ = v_isSharedCheck_5701_;
goto v_resetjp_5692_;
}
else
{
lean_inc(v_val_5691_);
lean_dec(v_x_5689_);
v___x_5693_ = lean_box(0);
v_isShared_5694_ = v_isSharedCheck_5701_;
goto v_resetjp_5692_;
}
v_resetjp_5692_:
{
size_t v_sz_5695_; size_t v___x_5696_; lean_object* v___x_5697_; lean_object* v___x_5699_; 
v_sz_5695_ = lean_array_size(v_val_5691_);
v___x_5696_ = ((size_t)0ULL);
v___x_5697_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_5695_, v___x_5696_, v_val_5691_);
if (v_isShared_5694_ == 0)
{
lean_ctor_set_tag(v___x_5693_, 7);
lean_ctor_set(v___x_5693_, 0, v___x_5697_);
v___x_5699_ = v___x_5693_;
goto v_reusejp_5698_;
}
else
{
lean_object* v_reuseFailAlloc_5700_; 
v_reuseFailAlloc_5700_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5700_, 0, v___x_5697_);
v___x_5699_ = v_reuseFailAlloc_5700_;
goto v_reusejp_5698_;
}
v_reusejp_5698_:
{
return v___x_5699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__1(lean_object* v_x_5702_){
_start:
{
if (lean_obj_tag(v_x_5702_) == 0)
{
lean_object* v___x_5703_; 
v___x_5703_ = lean_box(0);
return v___x_5703_;
}
else
{
lean_object* v_val_5704_; lean_object* v_limit_5705_; lean_object* v_cursor_5706_; lean_object* v_reverse_5707_; lean_object* v_consistency_5708_; lean_object* v_batchSize_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; 
v_val_5704_ = lean_ctor_get(v_x_5702_, 0);
lean_inc(v_val_5704_);
lean_dec_ref_known(v_x_5702_, 1);
v_limit_5705_ = lean_ctor_get(v_val_5704_, 0);
lean_inc(v_limit_5705_);
v_cursor_5706_ = lean_ctor_get(v_val_5704_, 1);
lean_inc(v_cursor_5706_);
v_reverse_5707_ = lean_ctor_get(v_val_5704_, 2);
lean_inc(v_reverse_5707_);
v_consistency_5708_ = lean_ctor_get(v_val_5704_, 3);
lean_inc(v_consistency_5708_);
v_batchSize_5709_ = lean_ctor_get(v_val_5704_, 4);
lean_inc(v_batchSize_5709_);
lean_dec(v_val_5704_);
v___x_5710_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__0));
v___x_5711_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_limit_5705_);
lean_dec(v_limit_5705_);
v___x_5712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5712_, 0, v___x_5710_);
lean_ctor_set(v___x_5712_, 1, v___x_5711_);
v___x_5713_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__1));
v___x_5714_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_cursor_5706_);
v___x_5715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5715_, 0, v___x_5713_);
lean_ctor_set(v___x_5715_, 1, v___x_5714_);
v___x_5716_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__2));
v___x_5717_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reverse_5707_);
lean_dec(v_reverse_5707_);
v___x_5718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5718_, 0, v___x_5716_);
lean_ctor_set(v___x_5718_, 1, v___x_5717_);
v___x_5719_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_5720_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(v_consistency_5708_);
lean_dec(v_consistency_5708_);
v___x_5721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5721_, 0, v___x_5719_);
lean_ctor_set(v___x_5721_, 1, v___x_5720_);
v___x_5722_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__3));
v___x_5723_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_batchSize_5709_);
lean_dec(v_batchSize_5709_);
v___x_5724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5724_, 0, v___x_5722_);
lean_ctor_set(v___x_5724_, 1, v___x_5723_);
v___x_5725_ = lean_unsigned_to_nat(5u);
v___x_5726_ = lean_mk_empty_array_with_capacity(v___x_5725_);
v___x_5727_ = lean_array_push(v___x_5726_, v___x_5712_);
v___x_5728_ = lean_array_push(v___x_5727_, v___x_5715_);
v___x_5729_ = lean_array_push(v___x_5728_, v___x_5718_);
v___x_5730_ = lean_array_push(v___x_5729_, v___x_5721_);
v___x_5731_ = lean_array_push(v___x_5730_, v___x_5724_);
v___x_5732_ = l_Lasm_JS_Web_Support_fields(v___x_5731_);
lean_dec_ref(v___x_5731_);
return v___x_5732_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_list(lean_object* v_self_5734_, lean_object* v_selector_5735_, lean_object* v_options_5736_){
_start:
{
lean_object* v_prefix_5738_; lean_object* v_start_5739_; lean_object* v_end_5740_; lean_object* v___x_5741_; lean_object* v___x_5742_; lean_object* v___x_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; 
v_prefix_5738_ = lean_ctor_get(v_selector_5735_, 0);
lean_inc(v_prefix_5738_);
v_start_5739_ = lean_ctor_get(v_selector_5735_, 1);
lean_inc(v_start_5739_);
v_end_5740_ = lean_ctor_get(v_selector_5735_, 2);
lean_inc(v_end_5740_);
lean_dec_ref(v_selector_5735_);
v___x_5741_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_list___closed__0));
v___x_5742_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__0));
v___x_5743_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(v_prefix_5738_);
v___x_5744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5744_, 0, v___x_5742_);
lean_ctor_set(v___x_5744_, 1, v___x_5743_);
v___x_5745_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__1));
v___x_5746_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(v_start_5739_);
v___x_5747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5747_, 0, v___x_5745_);
lean_ctor_set(v___x_5747_, 1, v___x_5746_);
v___x_5748_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__2));
v___x_5749_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(v_end_5740_);
v___x_5750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5750_, 0, v___x_5748_);
lean_ctor_set(v___x_5750_, 1, v___x_5749_);
v___x_5751_ = lean_unsigned_to_nat(3u);
v___x_5752_ = lean_mk_empty_array_with_capacity(v___x_5751_);
v___x_5753_ = lean_array_push(v___x_5752_, v___x_5744_);
v___x_5754_ = lean_array_push(v___x_5753_, v___x_5747_);
v___x_5755_ = lean_array_push(v___x_5754_, v___x_5750_);
v___x_5756_ = l_Lasm_JS_Web_Support_fields(v___x_5755_);
lean_dec_ref(v___x_5755_);
v___x_5757_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__1(v_options_5736_);
v___x_5758_ = lean_unsigned_to_nat(2u);
v___x_5759_ = lean_mk_empty_array_with_capacity(v___x_5758_);
v___x_5760_ = lean_array_push(v___x_5759_, v___x_5756_);
v___x_5761_ = lean_array_push(v___x_5760_, v___x_5757_);
v___x_5762_ = l_Lasm_JS_Web_Support_args(v___x_5761_);
v___x_5763_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_5734_, v___x_5741_, v___x_5762_);
if (lean_obj_tag(v___x_5763_) == 0)
{
lean_object* v_a_5764_; lean_object* v___x_5766_; uint8_t v_isShared_5767_; uint8_t v_isSharedCheck_5771_; 
v_a_5764_ = lean_ctor_get(v___x_5763_, 0);
v_isSharedCheck_5771_ = !lean_is_exclusive(v___x_5763_);
if (v_isSharedCheck_5771_ == 0)
{
v___x_5766_ = v___x_5763_;
v_isShared_5767_ = v_isSharedCheck_5771_;
goto v_resetjp_5765_;
}
else
{
lean_inc(v_a_5764_);
lean_dec(v___x_5763_);
v___x_5766_ = lean_box(0);
v_isShared_5767_ = v_isSharedCheck_5771_;
goto v_resetjp_5765_;
}
v_resetjp_5765_:
{
lean_object* v___x_5769_; 
if (v_isShared_5767_ == 0)
{
v___x_5769_ = v___x_5766_;
goto v_reusejp_5768_;
}
else
{
lean_object* v_reuseFailAlloc_5770_; 
v_reuseFailAlloc_5770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5770_, 0, v_a_5764_);
v___x_5769_ = v_reuseFailAlloc_5770_;
goto v_reusejp_5768_;
}
v_reusejp_5768_:
{
return v___x_5769_;
}
}
}
else
{
lean_object* v_a_5772_; lean_object* v___x_5774_; uint8_t v_isShared_5775_; uint8_t v_isSharedCheck_5779_; 
v_a_5772_ = lean_ctor_get(v___x_5763_, 0);
v_isSharedCheck_5779_ = !lean_is_exclusive(v___x_5763_);
if (v_isSharedCheck_5779_ == 0)
{
v___x_5774_ = v___x_5763_;
v_isShared_5775_ = v_isSharedCheck_5779_;
goto v_resetjp_5773_;
}
else
{
lean_inc(v_a_5772_);
lean_dec(v___x_5763_);
v___x_5774_ = lean_box(0);
v_isShared_5775_ = v_isSharedCheck_5779_;
goto v_resetjp_5773_;
}
v_resetjp_5773_:
{
lean_object* v___x_5777_; 
if (v_isShared_5775_ == 0)
{
v___x_5777_ = v___x_5774_;
goto v_reusejp_5776_;
}
else
{
lean_object* v_reuseFailAlloc_5778_; 
v_reuseFailAlloc_5778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5778_, 0, v_a_5772_);
v___x_5777_ = v_reuseFailAlloc_5778_;
goto v_reusejp_5776_;
}
v_reusejp_5776_:
{
return v___x_5777_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_list___boxed(lean_object* v_self_5780_, lean_object* v_selector_5781_, lean_object* v_options_5782_, lean_object* v_a_5783_){
_start:
{
lean_object* v_res_5784_; 
v_res_5784_ = l_Lasm_JS_Deno_Kv_list(v_self_5780_, v_selector_5781_, v_options_5782_);
return v_res_5784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_enqueue_spec__0(lean_object* v_x_5785_){
_start:
{
if (lean_obj_tag(v_x_5785_) == 0)
{
lean_object* v___x_5786_; 
v___x_5786_ = lean_box(0);
return v___x_5786_;
}
else
{
lean_object* v_val_5787_; lean_object* v_delay_5788_; lean_object* v_keysIfUndelivered_5789_; lean_object* v_backoffSchedule_5790_; lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; lean_object* v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v___x_5804_; lean_object* v___x_5805_; 
v_val_5787_ = lean_ctor_get(v_x_5785_, 0);
lean_inc(v_val_5787_);
lean_dec_ref_known(v_x_5785_, 1);
v_delay_5788_ = lean_ctor_get(v_val_5787_, 0);
lean_inc(v_delay_5788_);
v_keysIfUndelivered_5789_ = lean_ctor_get(v_val_5787_, 1);
lean_inc(v_keysIfUndelivered_5789_);
v_backoffSchedule_5790_ = lean_ctor_get(v_val_5787_, 2);
lean_inc(v_backoffSchedule_5790_);
lean_dec(v_val_5787_);
v___x_5791_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0));
v___x_5792_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_delay_5788_);
lean_dec(v_delay_5788_);
v___x_5793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5793_, 0, v___x_5791_);
lean_ctor_set(v___x_5793_, 1, v___x_5792_);
v___x_5794_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1));
v___x_5795_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0(v_keysIfUndelivered_5789_);
v___x_5796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5796_, 0, v___x_5794_);
lean_ctor_set(v___x_5796_, 1, v___x_5795_);
v___x_5797_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_5798_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(v_backoffSchedule_5790_);
v___x_5799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5799_, 0, v___x_5797_);
lean_ctor_set(v___x_5799_, 1, v___x_5798_);
v___x_5800_ = lean_unsigned_to_nat(3u);
v___x_5801_ = lean_mk_empty_array_with_capacity(v___x_5800_);
v___x_5802_ = lean_array_push(v___x_5801_, v___x_5793_);
v___x_5803_ = lean_array_push(v___x_5802_, v___x_5796_);
v___x_5804_ = lean_array_push(v___x_5803_, v___x_5799_);
v___x_5805_ = l_Lasm_JS_Web_Support_fields(v___x_5804_);
lean_dec_ref(v___x_5804_);
return v___x_5805_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_enqueue(lean_object* v_self_5806_, lean_object* v_value_5807_, lean_object* v_options_5808_){
_start:
{
lean_object* v___x_5810_; lean_object* v___x_5811_; lean_object* v___x_5812_; lean_object* v___x_5813_; lean_object* v___x_5814_; lean_object* v___x_5815_; lean_object* v___x_5816_; lean_object* v___x_5817_; 
v___x_5810_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_enqueue___closed__0));
v___x_5811_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_enqueue_spec__0(v_options_5808_);
v___x_5812_ = lean_unsigned_to_nat(2u);
v___x_5813_ = lean_mk_empty_array_with_capacity(v___x_5812_);
v___x_5814_ = lean_array_push(v___x_5813_, v_value_5807_);
v___x_5815_ = lean_array_push(v___x_5814_, v___x_5811_);
v___x_5816_ = l_Lasm_JS_Web_Support_args(v___x_5815_);
v___x_5817_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(v_self_5806_, v___x_5810_, v___x_5816_);
return v___x_5817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_enqueue___boxed(lean_object* v_self_5818_, lean_object* v_value_5819_, lean_object* v_options_5820_, lean_object* v_a_5821_){
_start:
{
lean_object* v_res_5822_; 
v_res_5822_ = l_Lasm_JS_Deno_Kv_enqueue(v_self_5818_, v_value_5819_, v_options_5820_);
return v_res_5822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_listenQueue(lean_object* v_self_5824_, lean_object* v_handler_5825_){
_start:
{
lean_object* v___x_5827_; lean_object* v___x_5828_; lean_object* v___x_5829_; lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; 
v___x_5827_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_listenQueue___closed__0));
v___x_5828_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5829_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5829_, 0, v_handler_5825_);
lean_ctor_set(v___x_5829_, 1, v___x_5828_);
v___x_5830_ = lean_unsigned_to_nat(1u);
v___x_5831_ = lean_mk_empty_array_with_capacity(v___x_5830_);
v___x_5832_ = lean_array_push(v___x_5831_, v___x_5829_);
v___x_5833_ = l_Lasm_JS_Web_Support_args(v___x_5832_);
v___x_5834_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5824_, v___x_5827_, v___x_5833_);
return v___x_5834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_listenQueue___boxed(lean_object* v_self_5835_, lean_object* v_handler_5836_, lean_object* v_a_5837_){
_start:
{
lean_object* v_res_5838_; 
v_res_5838_ = l_Lasm_JS_Deno_Kv_listenQueue(v_self_5835_, v_handler_5836_);
return v_res_5838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_atomic(lean_object* v_self_5840_){
_start:
{
lean_object* v___x_5842_; lean_object* v___x_5843_; lean_object* v___x_5844_; 
v___x_5842_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_atomic___closed__0));
v___x_5843_ = lean_obj_once(&l_Lasm_JS_Deno_AtomicOperation_commit___closed__1, &l_Lasm_JS_Deno_AtomicOperation_commit___closed__1_once, _init_l_Lasm_JS_Deno_AtomicOperation_commit___closed__1);
v___x_5844_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_5840_, v___x_5842_, v___x_5843_);
if (lean_obj_tag(v___x_5844_) == 0)
{
lean_object* v_a_5845_; lean_object* v___x_5847_; uint8_t v_isShared_5848_; uint8_t v_isSharedCheck_5852_; 
v_a_5845_ = lean_ctor_get(v___x_5844_, 0);
v_isSharedCheck_5852_ = !lean_is_exclusive(v___x_5844_);
if (v_isSharedCheck_5852_ == 0)
{
v___x_5847_ = v___x_5844_;
v_isShared_5848_ = v_isSharedCheck_5852_;
goto v_resetjp_5846_;
}
else
{
lean_inc(v_a_5845_);
lean_dec(v___x_5844_);
v___x_5847_ = lean_box(0);
v_isShared_5848_ = v_isSharedCheck_5852_;
goto v_resetjp_5846_;
}
v_resetjp_5846_:
{
lean_object* v___x_5850_; 
if (v_isShared_5848_ == 0)
{
v___x_5850_ = v___x_5847_;
goto v_reusejp_5849_;
}
else
{
lean_object* v_reuseFailAlloc_5851_; 
v_reuseFailAlloc_5851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5851_, 0, v_a_5845_);
v___x_5850_ = v_reuseFailAlloc_5851_;
goto v_reusejp_5849_;
}
v_reusejp_5849_:
{
return v___x_5850_;
}
}
}
else
{
lean_object* v_a_5853_; lean_object* v___x_5855_; uint8_t v_isShared_5856_; uint8_t v_isSharedCheck_5860_; 
v_a_5853_ = lean_ctor_get(v___x_5844_, 0);
v_isSharedCheck_5860_ = !lean_is_exclusive(v___x_5844_);
if (v_isSharedCheck_5860_ == 0)
{
v___x_5855_ = v___x_5844_;
v_isShared_5856_ = v_isSharedCheck_5860_;
goto v_resetjp_5854_;
}
else
{
lean_inc(v_a_5853_);
lean_dec(v___x_5844_);
v___x_5855_ = lean_box(0);
v_isShared_5856_ = v_isSharedCheck_5860_;
goto v_resetjp_5854_;
}
v_resetjp_5854_:
{
lean_object* v___x_5858_; 
if (v_isShared_5856_ == 0)
{
v___x_5858_ = v___x_5855_;
goto v_reusejp_5857_;
}
else
{
lean_object* v_reuseFailAlloc_5859_; 
v_reuseFailAlloc_5859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5859_, 0, v_a_5853_);
v___x_5858_ = v_reuseFailAlloc_5859_;
goto v_reusejp_5857_;
}
v_reusejp_5857_:
{
return v___x_5858_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_atomic___boxed(lean_object* v_self_5861_, lean_object* v_a_5862_){
_start:
{
lean_object* v_res_5863_; 
v_res_5863_ = l_Lasm_JS_Deno_Kv_atomic(v_self_5861_);
return v_res_5863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0(lean_object* v_x_5864_){
_start:
{
if (lean_obj_tag(v_x_5864_) == 0)
{
lean_object* v___x_5865_; 
v___x_5865_ = lean_box(0);
return v___x_5865_;
}
else
{
lean_object* v_val_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; lean_object* v___x_5869_; lean_object* v___x_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; 
v_val_5866_ = lean_ctor_get(v_x_5864_, 0);
v___x_5867_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0___closed__0));
v___x_5868_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_5866_);
v___x_5869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5869_, 0, v___x_5867_);
lean_ctor_set(v___x_5869_, 1, v___x_5868_);
v___x_5870_ = lean_unsigned_to_nat(1u);
v___x_5871_ = lean_mk_empty_array_with_capacity(v___x_5870_);
v___x_5872_ = lean_array_push(v___x_5871_, v___x_5869_);
v___x_5873_ = l_Lasm_JS_Web_Support_fields(v___x_5872_);
lean_dec_ref(v___x_5872_);
return v___x_5873_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0___boxed(lean_object* v_x_5874_){
_start:
{
lean_object* v_res_5875_; 
v_res_5875_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0(v_x_5874_);
lean_dec(v_x_5874_);
return v_res_5875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_watch(lean_object* v_self_5877_, lean_object* v_keys_5878_, lean_object* v_options_5879_){
_start:
{
lean_object* v___x_5881_; size_t v_sz_5882_; size_t v___x_5883_; lean_object* v___x_5884_; lean_object* v___x_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; lean_object* v___x_5891_; lean_object* v___x_5892_; 
v___x_5881_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_watch___closed__0));
v_sz_5882_ = lean_array_size(v_keys_5878_);
v___x_5883_ = ((size_t)0ULL);
v___x_5884_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(v_sz_5882_, v___x_5883_, v_keys_5878_);
v___x_5885_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5885_, 0, v___x_5884_);
v___x_5886_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0(v_options_5879_);
v___x_5887_ = lean_unsigned_to_nat(2u);
v___x_5888_ = lean_mk_empty_array_with_capacity(v___x_5887_);
v___x_5889_ = lean_array_push(v___x_5888_, v___x_5885_);
v___x_5890_ = lean_array_push(v___x_5889_, v___x_5886_);
v___x_5891_ = l_Lasm_JS_Web_Support_args(v___x_5890_);
v___x_5892_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_5877_, v___x_5881_, v___x_5891_);
if (lean_obj_tag(v___x_5892_) == 0)
{
lean_object* v_a_5893_; lean_object* v___x_5895_; uint8_t v_isShared_5896_; uint8_t v_isSharedCheck_5900_; 
v_a_5893_ = lean_ctor_get(v___x_5892_, 0);
v_isSharedCheck_5900_ = !lean_is_exclusive(v___x_5892_);
if (v_isSharedCheck_5900_ == 0)
{
v___x_5895_ = v___x_5892_;
v_isShared_5896_ = v_isSharedCheck_5900_;
goto v_resetjp_5894_;
}
else
{
lean_inc(v_a_5893_);
lean_dec(v___x_5892_);
v___x_5895_ = lean_box(0);
v_isShared_5896_ = v_isSharedCheck_5900_;
goto v_resetjp_5894_;
}
v_resetjp_5894_:
{
lean_object* v___x_5898_; 
if (v_isShared_5896_ == 0)
{
v___x_5898_ = v___x_5895_;
goto v_reusejp_5897_;
}
else
{
lean_object* v_reuseFailAlloc_5899_; 
v_reuseFailAlloc_5899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5899_, 0, v_a_5893_);
v___x_5898_ = v_reuseFailAlloc_5899_;
goto v_reusejp_5897_;
}
v_reusejp_5897_:
{
return v___x_5898_;
}
}
}
else
{
lean_object* v_a_5901_; lean_object* v___x_5903_; uint8_t v_isShared_5904_; uint8_t v_isSharedCheck_5908_; 
v_a_5901_ = lean_ctor_get(v___x_5892_, 0);
v_isSharedCheck_5908_ = !lean_is_exclusive(v___x_5892_);
if (v_isSharedCheck_5908_ == 0)
{
v___x_5903_ = v___x_5892_;
v_isShared_5904_ = v_isSharedCheck_5908_;
goto v_resetjp_5902_;
}
else
{
lean_inc(v_a_5901_);
lean_dec(v___x_5892_);
v___x_5903_ = lean_box(0);
v_isShared_5904_ = v_isSharedCheck_5908_;
goto v_resetjp_5902_;
}
v_resetjp_5902_:
{
lean_object* v___x_5906_; 
if (v_isShared_5904_ == 0)
{
v___x_5906_ = v___x_5903_;
goto v_reusejp_5905_;
}
else
{
lean_object* v_reuseFailAlloc_5907_; 
v_reuseFailAlloc_5907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5907_, 0, v_a_5901_);
v___x_5906_ = v_reuseFailAlloc_5907_;
goto v_reusejp_5905_;
}
v_reusejp_5905_:
{
return v___x_5906_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_watch___boxed(lean_object* v_self_5909_, lean_object* v_keys_5910_, lean_object* v_options_5911_, lean_object* v_a_5912_){
_start:
{
lean_object* v_res_5913_; 
v_res_5913_ = l_Lasm_JS_Deno_Kv_watch(v_self_5909_, v_keys_5910_, v_options_5911_);
lean_dec(v_options_5911_);
return v_res_5913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_close(lean_object* v_self_5915_){
_start:
{
lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; 
v___x_5917_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_close___closed__0));
v___x_5918_ = lean_obj_once(&l_Lasm_JS_Deno_AtomicOperation_commit___closed__1, &l_Lasm_JS_Deno_AtomicOperation_commit___closed__1_once, _init_l_Lasm_JS_Deno_AtomicOperation_commit___closed__1);
v___x_5919_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5915_, v___x_5917_, v___x_5918_);
return v___x_5919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_close___boxed(lean_object* v_self_5920_, lean_object* v_a_5921_){
_start:
{
lean_object* v_res_5922_; 
v_res_5922_ = l_Lasm_JS_Deno_Kv_close(v_self_5920_);
return v_res_5922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv___lam__0(lean_object* v_x_5923_){
_start:
{
if (lean_obj_tag(v_x_5923_) == 0)
{
lean_object* v_a_5925_; lean_object* v___x_5927_; uint8_t v_isShared_5928_; uint8_t v_isSharedCheck_5933_; 
v_a_5925_ = lean_ctor_get(v_x_5923_, 0);
v_isSharedCheck_5933_ = !lean_is_exclusive(v_x_5923_);
if (v_isSharedCheck_5933_ == 0)
{
v___x_5927_ = v_x_5923_;
v_isShared_5928_ = v_isSharedCheck_5933_;
goto v_resetjp_5926_;
}
else
{
lean_inc(v_a_5925_);
lean_dec(v_x_5923_);
v___x_5927_ = lean_box(0);
v_isShared_5928_ = v_isSharedCheck_5933_;
goto v_resetjp_5926_;
}
v_resetjp_5926_:
{
lean_object* v___x_5930_; 
if (v_isShared_5928_ == 0)
{
v___x_5930_ = v___x_5927_;
goto v_reusejp_5929_;
}
else
{
lean_object* v_reuseFailAlloc_5932_; 
v_reuseFailAlloc_5932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5932_, 0, v_a_5925_);
v___x_5930_ = v_reuseFailAlloc_5932_;
goto v_reusejp_5929_;
}
v_reusejp_5929_:
{
lean_object* v___x_5931_; 
v___x_5931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5931_, 0, v___x_5930_);
return v___x_5931_;
}
}
}
else
{
lean_object* v_a_5934_; lean_object* v___x_5936_; uint8_t v_isShared_5937_; uint8_t v_isSharedCheck_5942_; 
v_a_5934_ = lean_ctor_get(v_x_5923_, 0);
v_isSharedCheck_5942_ = !lean_is_exclusive(v_x_5923_);
if (v_isSharedCheck_5942_ == 0)
{
v___x_5936_ = v_x_5923_;
v_isShared_5937_ = v_isSharedCheck_5942_;
goto v_resetjp_5935_;
}
else
{
lean_inc(v_a_5934_);
lean_dec(v_x_5923_);
v___x_5936_ = lean_box(0);
v_isShared_5937_ = v_isSharedCheck_5942_;
goto v_resetjp_5935_;
}
v_resetjp_5935_:
{
lean_object* v___x_5939_; 
if (v_isShared_5937_ == 0)
{
v___x_5939_ = v___x_5936_;
goto v_reusejp_5938_;
}
else
{
lean_object* v_reuseFailAlloc_5941_; 
v_reuseFailAlloc_5941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5941_, 0, v_a_5934_);
v___x_5939_ = v_reuseFailAlloc_5941_;
goto v_reusejp_5938_;
}
v_reusejp_5938_:
{
lean_object* v___x_5940_; 
v___x_5940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5940_, 0, v___x_5939_);
return v___x_5940_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv___lam__0___boxed(lean_object* v_x_5943_, lean_object* v___y_5944_){
_start:
{
lean_object* v_res_5945_; 
v_res_5945_ = l_Lasm_JS_Deno_openKv___lam__0(v_x_5943_);
return v_res_5945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0(lean_object* v_b_5946_, lean_object* v_args_5947_){
_start:
{
uint8_t v_construct_5949_; lean_object* v___x_5950_; uint32_t v___x_5951_; uint64_t v___x_5952_; uint64_t v___y_5954_; 
v_construct_5949_ = lean_ctor_get_uint8(v_b_5946_, sizeof(void*)*4);
v___x_5950_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5946_);
v___x_5951_ = 214;
v___x_5952_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0);
if (v_construct_5949_ == 0)
{
uint64_t v___x_5962_; 
v___x_5962_ = 0ULL;
v___y_5954_ = v___x_5962_;
goto v___jp_5953_;
}
else
{
uint64_t v___x_5963_; 
v___x_5963_ = 4ULL;
v___y_5954_ = v___x_5963_;
goto v___jp_5953_;
}
v___jp_5953_:
{
uint64_t v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; 
v___x_5955_ = lean_uint64_lor(v___x_5952_, v___y_5954_);
v___x_5956_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5946_, v_args_5947_);
v___x_5957_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_5958_ = lean_string_append(v___x_5957_, v___x_5950_);
v___x_5959_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_5960_ = lean_string_append(v___x_5958_, v___x_5959_);
v___x_5961_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(v___x_5950_, v___x_5951_, v___x_5955_, v___x_5956_, v___x_5960_);
return v___x_5961_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0___boxed(lean_object* v_b_5964_, lean_object* v_args_5965_, lean_object* v_a_5966_){
_start:
{
lean_object* v_res_5967_; 
v_res_5967_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0(v_b_5964_, v_args_5965_);
lean_dec_ref(v_b_5964_);
return v_res_5967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv(lean_object* v_path_5977_){
_start:
{
lean_object* v___f_5979_; uint8_t v___x_5980_; lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; 
v___f_5979_ = ((lean_object*)(l_Lasm_JS_Deno_openKv___closed__0));
v___x_5980_ = 0;
v___x_5981_ = lean_unsigned_to_nat(1u);
v___x_5982_ = ((lean_object*)(l_Lasm_JS_Deno_openKv___closed__3));
v___x_5983_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_path_5977_);
v___x_5984_ = lean_mk_empty_array_with_capacity(v___x_5981_);
v___x_5985_ = lean_array_push(v___x_5984_, v___x_5983_);
v___x_5986_ = l_Lasm_JS_Web_Support_args(v___x_5985_);
v___x_5987_ = lean_unsigned_to_nat(0u);
v___x_5988_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0(v___x_5982_, v___x_5986_);
v___x_5989_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5987_, v___x_5980_, v___x_5988_, v___f_5979_);
return v___x_5989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv___boxed(lean_object* v_path_5990_, lean_object* v_a_5991_){
_start:
{
lean_object* v_res_5992_; 
v_res_5992_ = l_Lasm_JS_Deno_openKv(v_path_5990_);
return v_res_5992_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(lean_object* v_b_5993_, lean_object* v_args_5994_){
_start:
{
uint8_t v_construct_5996_; lean_object* v___x_5997_; uint32_t v___x_5998_; uint64_t v___x_5999_; uint64_t v___y_6001_; 
v_construct_5996_ = lean_ctor_get_uint8(v_b_5993_, sizeof(void*)*4);
v___x_5997_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5993_);
v___x_5998_ = 214;
v___x_5999_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_construct_5996_ == 0)
{
uint64_t v___x_6009_; 
v___x_6009_ = 0ULL;
v___y_6001_ = v___x_6009_;
goto v___jp_6000_;
}
else
{
uint64_t v___x_6010_; 
v___x_6010_ = 4ULL;
v___y_6001_ = v___x_6010_;
goto v___jp_6000_;
}
v___jp_6000_:
{
uint64_t v___x_6002_; lean_object* v___x_6003_; lean_object* v___x_6004_; lean_object* v___x_6005_; lean_object* v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; 
v___x_6002_ = lean_uint64_lor(v___x_5999_, v___y_6001_);
v___x_6003_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5993_, v_args_5994_);
v___x_6004_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_6005_ = lean_string_append(v___x_6004_, v___x_5997_);
lean_dec_ref(v___x_5997_);
v___x_6006_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_6007_ = lean_string_append(v___x_6005_, v___x_6006_);
v___x_6008_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_5998_, v___x_6002_, v___x_6003_, v___x_6007_);
return v___x_6008_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0___boxed(lean_object* v_b_6011_, lean_object* v_args_6012_, lean_object* v_a_6013_){
_start:
{
lean_object* v_res_6014_; 
v_res_6014_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(v_b_6011_, v_args_6012_);
lean_dec_ref(v_b_6011_);
return v_res_6014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(lean_object* v_x_6015_){
_start:
{
if (lean_obj_tag(v_x_6015_) == 0)
{
lean_object* v___x_6016_; 
v___x_6016_ = lean_box(0);
return v___x_6016_;
}
else
{
lean_object* v_val_6017_; 
v_val_6017_ = lean_ctor_get(v_x_6015_, 0);
lean_inc(v_val_6017_);
lean_dec_ref_known(v_x_6015_, 1);
if (lean_obj_tag(v_val_6017_) == 0)
{
double v_value_6018_; lean_object* v___x_6020_; uint8_t v_isShared_6021_; uint8_t v_isSharedCheck_6025_; 
v_value_6018_ = lean_ctor_get_float(v_val_6017_, 0);
v_isSharedCheck_6025_ = !lean_is_exclusive(v_val_6017_);
if (v_isSharedCheck_6025_ == 0)
{
v___x_6020_ = v_val_6017_;
v_isShared_6021_ = v_isSharedCheck_6025_;
goto v_resetjp_6019_;
}
else
{
lean_dec(v_val_6017_);
v___x_6020_ = lean_box(0);
v_isShared_6021_ = v_isSharedCheck_6025_;
goto v_resetjp_6019_;
}
v_resetjp_6019_:
{
lean_object* v___x_6023_; 
if (v_isShared_6021_ == 0)
{
lean_ctor_set_tag(v___x_6020_, 3);
v___x_6023_ = v___x_6020_;
goto v_reusejp_6022_;
}
else
{
lean_object* v_reuseFailAlloc_6024_; 
v_reuseFailAlloc_6024_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6024_, 0, v_value_6018_);
v___x_6023_ = v_reuseFailAlloc_6024_;
goto v_reusejp_6022_;
}
v_reusejp_6022_:
{
return v___x_6023_;
}
}
}
else
{
lean_object* v_value_6026_; lean_object* v___x_6027_; lean_object* v___y_6029_; 
v_value_6026_ = lean_ctor_get(v_val_6017_, 0);
lean_inc_ref(v_value_6026_);
lean_dec_ref_known(v_val_6017_, 1);
v___x_6027_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1___closed__0));
if (lean_obj_tag(v_value_6026_) == 0)
{
double v_value_6035_; lean_object* v___x_6037_; uint8_t v_isShared_6038_; uint8_t v_isSharedCheck_6042_; 
v_value_6035_ = lean_ctor_get_float(v_value_6026_, 0);
v_isSharedCheck_6042_ = !lean_is_exclusive(v_value_6026_);
if (v_isSharedCheck_6042_ == 0)
{
v___x_6037_ = v_value_6026_;
v_isShared_6038_ = v_isSharedCheck_6042_;
goto v_resetjp_6036_;
}
else
{
lean_dec(v_value_6026_);
v___x_6037_ = lean_box(0);
v_isShared_6038_ = v_isSharedCheck_6042_;
goto v_resetjp_6036_;
}
v_resetjp_6036_:
{
lean_object* v___x_6040_; 
if (v_isShared_6038_ == 0)
{
lean_ctor_set_tag(v___x_6037_, 3);
v___x_6040_ = v___x_6037_;
goto v_reusejp_6039_;
}
else
{
lean_object* v_reuseFailAlloc_6041_; 
v_reuseFailAlloc_6041_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6041_, 0, v_value_6035_);
v___x_6040_ = v_reuseFailAlloc_6041_;
goto v_reusejp_6039_;
}
v_reusejp_6039_:
{
v___y_6029_ = v___x_6040_;
goto v___jp_6028_;
}
}
}
else
{
lean_object* v_value_6043_; lean_object* v___x_6045_; uint8_t v_isShared_6046_; uint8_t v_isSharedCheck_6053_; 
v_value_6043_ = lean_ctor_get(v_value_6026_, 0);
v_isSharedCheck_6053_ = !lean_is_exclusive(v_value_6026_);
if (v_isSharedCheck_6053_ == 0)
{
v___x_6045_ = v_value_6026_;
v_isShared_6046_ = v_isSharedCheck_6053_;
goto v_resetjp_6044_;
}
else
{
lean_inc(v_value_6043_);
lean_dec(v_value_6026_);
v___x_6045_ = lean_box(0);
v_isShared_6046_ = v_isSharedCheck_6053_;
goto v_resetjp_6044_;
}
v_resetjp_6044_:
{
size_t v_sz_6047_; size_t v___x_6048_; lean_object* v___x_6049_; lean_object* v___x_6051_; 
v_sz_6047_ = lean_array_size(v_value_6043_);
v___x_6048_ = ((size_t)0ULL);
v___x_6049_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(v_sz_6047_, v___x_6048_, v_value_6043_);
if (v_isShared_6046_ == 0)
{
lean_ctor_set_tag(v___x_6045_, 7);
lean_ctor_set(v___x_6045_, 0, v___x_6049_);
v___x_6051_ = v___x_6045_;
goto v_reusejp_6050_;
}
else
{
lean_object* v_reuseFailAlloc_6052_; 
v_reuseFailAlloc_6052_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6052_, 0, v___x_6049_);
v___x_6051_ = v_reuseFailAlloc_6052_;
goto v_reusejp_6050_;
}
v_reusejp_6050_:
{
v___y_6029_ = v___x_6051_;
goto v___jp_6028_;
}
}
}
v___jp_6028_:
{
lean_object* v___x_6030_; lean_object* v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; lean_object* v___x_6034_; 
v___x_6030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6030_, 0, v___x_6027_);
lean_ctor_set(v___x_6030_, 1, v___y_6029_);
v___x_6031_ = lean_unsigned_to_nat(1u);
v___x_6032_ = lean_mk_empty_array_with_capacity(v___x_6031_);
v___x_6033_ = lean_array_push(v___x_6032_, v___x_6030_);
v___x_6034_ = l_Lasm_JS_Web_Support_fields(v___x_6033_);
lean_dec_ref(v___x_6033_);
return v___x_6034_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cron(lean_object* v_name_6062_, lean_object* v_schedule_6063_, lean_object* v_handler_6064_){
_start:
{
lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; lean_object* v___y_6070_; 
v___x_6066_ = lean_unsigned_to_nat(3u);
v___x_6067_ = ((lean_object*)(l_Lasm_JS_Deno_cron___closed__2));
v___x_6068_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6068_, 0, v_name_6062_);
if (lean_obj_tag(v_schedule_6063_) == 0)
{
lean_object* v_value_6079_; lean_object* v___x_6081_; uint8_t v_isShared_6082_; uint8_t v_isSharedCheck_6086_; 
v_value_6079_ = lean_ctor_get(v_schedule_6063_, 0);
v_isSharedCheck_6086_ = !lean_is_exclusive(v_schedule_6063_);
if (v_isSharedCheck_6086_ == 0)
{
v___x_6081_ = v_schedule_6063_;
v_isShared_6082_ = v_isSharedCheck_6086_;
goto v_resetjp_6080_;
}
else
{
lean_inc(v_value_6079_);
lean_dec(v_schedule_6063_);
v___x_6081_ = lean_box(0);
v_isShared_6082_ = v_isSharedCheck_6086_;
goto v_resetjp_6080_;
}
v_resetjp_6080_:
{
lean_object* v___x_6084_; 
if (v_isShared_6082_ == 0)
{
lean_ctor_set_tag(v___x_6081_, 4);
v___x_6084_ = v___x_6081_;
goto v_reusejp_6083_;
}
else
{
lean_object* v_reuseFailAlloc_6085_; 
v_reuseFailAlloc_6085_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6085_, 0, v_value_6079_);
v___x_6084_ = v_reuseFailAlloc_6085_;
goto v_reusejp_6083_;
}
v_reusejp_6083_:
{
v___y_6070_ = v___x_6084_;
goto v___jp_6069_;
}
}
}
else
{
lean_object* v_value_6087_; lean_object* v_minute_6088_; lean_object* v_hour_6089_; lean_object* v_dayOfMonth_6090_; lean_object* v_month_6091_; lean_object* v_dayOfWeek_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; lean_object* v___x_6108_; lean_object* v___x_6109_; lean_object* v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; 
v_value_6087_ = lean_ctor_get(v_schedule_6063_, 0);
lean_inc_ref(v_value_6087_);
lean_dec_ref_known(v_schedule_6063_, 1);
v_minute_6088_ = lean_ctor_get(v_value_6087_, 0);
lean_inc(v_minute_6088_);
v_hour_6089_ = lean_ctor_get(v_value_6087_, 1);
lean_inc(v_hour_6089_);
v_dayOfMonth_6090_ = lean_ctor_get(v_value_6087_, 2);
lean_inc(v_dayOfMonth_6090_);
v_month_6091_ = lean_ctor_get(v_value_6087_, 3);
lean_inc(v_month_6091_);
v_dayOfWeek_6092_ = lean_ctor_get(v_value_6087_, 4);
lean_inc(v_dayOfWeek_6092_);
lean_dec_ref(v_value_6087_);
v___x_6093_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0));
v___x_6094_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_minute_6088_);
v___x_6095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6095_, 0, v___x_6093_);
lean_ctor_set(v___x_6095_, 1, v___x_6094_);
v___x_6096_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1));
v___x_6097_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_hour_6089_);
v___x_6098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6098_, 0, v___x_6096_);
lean_ctor_set(v___x_6098_, 1, v___x_6097_);
v___x_6099_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2));
v___x_6100_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_dayOfMonth_6090_);
v___x_6101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6101_, 0, v___x_6099_);
lean_ctor_set(v___x_6101_, 1, v___x_6100_);
v___x_6102_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3));
v___x_6103_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_month_6091_);
v___x_6104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6104_, 0, v___x_6102_);
lean_ctor_set(v___x_6104_, 1, v___x_6103_);
v___x_6105_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4));
v___x_6106_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_dayOfWeek_6092_);
v___x_6107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6107_, 0, v___x_6105_);
lean_ctor_set(v___x_6107_, 1, v___x_6106_);
v___x_6108_ = lean_unsigned_to_nat(5u);
v___x_6109_ = lean_mk_empty_array_with_capacity(v___x_6108_);
v___x_6110_ = lean_array_push(v___x_6109_, v___x_6095_);
v___x_6111_ = lean_array_push(v___x_6110_, v___x_6098_);
v___x_6112_ = lean_array_push(v___x_6111_, v___x_6101_);
v___x_6113_ = lean_array_push(v___x_6112_, v___x_6104_);
v___x_6114_ = lean_array_push(v___x_6113_, v___x_6107_);
v___x_6115_ = l_Lasm_JS_Web_Support_fields(v___x_6114_);
lean_dec_ref(v___x_6114_);
v___y_6070_ = v___x_6115_;
goto v___jp_6069_;
}
v___jp_6069_:
{
lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; lean_object* v___x_6078_; 
v___x_6071_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_6072_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6072_, 0, v_handler_6064_);
lean_ctor_set(v___x_6072_, 1, v___x_6071_);
v___x_6073_ = lean_mk_empty_array_with_capacity(v___x_6066_);
v___x_6074_ = lean_array_push(v___x_6073_, v___x_6068_);
v___x_6075_ = lean_array_push(v___x_6074_, v___y_6070_);
v___x_6076_ = lean_array_push(v___x_6075_, v___x_6072_);
v___x_6077_ = l_Lasm_JS_Web_Support_args(v___x_6076_);
v___x_6078_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(v___x_6067_, v___x_6077_);
return v___x_6078_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cron___boxed(lean_object* v_name_6116_, lean_object* v_schedule_6117_, lean_object* v_handler_6118_, lean_object* v_a_6119_){
_start:
{
lean_object* v_res_6120_; 
v_res_6120_ = l_Lasm_JS_Deno_cron(v_name_6116_, v_schedule_6117_, v_handler_6118_);
return v_res_6120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cronWithOptions(lean_object* v_name_6128_, lean_object* v_schedule_6129_, lean_object* v_options_6130_, lean_object* v_handler_6131_){
_start:
{
lean_object* v___x_6133_; lean_object* v___x_6134_; lean_object* v___x_6135_; lean_object* v___y_6137_; 
v___x_6133_ = lean_unsigned_to_nat(4u);
v___x_6134_ = ((lean_object*)(l_Lasm_JS_Deno_cronWithOptions___closed__1));
v___x_6135_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6135_, 0, v_name_6128_);
if (lean_obj_tag(v_schedule_6129_) == 0)
{
lean_object* v_value_6166_; lean_object* v___x_6168_; uint8_t v_isShared_6169_; uint8_t v_isSharedCheck_6173_; 
v_value_6166_ = lean_ctor_get(v_schedule_6129_, 0);
v_isSharedCheck_6173_ = !lean_is_exclusive(v_schedule_6129_);
if (v_isSharedCheck_6173_ == 0)
{
v___x_6168_ = v_schedule_6129_;
v_isShared_6169_ = v_isSharedCheck_6173_;
goto v_resetjp_6167_;
}
else
{
lean_inc(v_value_6166_);
lean_dec(v_schedule_6129_);
v___x_6168_ = lean_box(0);
v_isShared_6169_ = v_isSharedCheck_6173_;
goto v_resetjp_6167_;
}
v_resetjp_6167_:
{
lean_object* v___x_6171_; 
if (v_isShared_6169_ == 0)
{
lean_ctor_set_tag(v___x_6168_, 4);
v___x_6171_ = v___x_6168_;
goto v_reusejp_6170_;
}
else
{
lean_object* v_reuseFailAlloc_6172_; 
v_reuseFailAlloc_6172_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6172_, 0, v_value_6166_);
v___x_6171_ = v_reuseFailAlloc_6172_;
goto v_reusejp_6170_;
}
v_reusejp_6170_:
{
v___y_6137_ = v___x_6171_;
goto v___jp_6136_;
}
}
}
else
{
lean_object* v_value_6174_; lean_object* v_minute_6175_; lean_object* v_hour_6176_; lean_object* v_dayOfMonth_6177_; lean_object* v_month_6178_; lean_object* v_dayOfWeek_6179_; lean_object* v___x_6180_; lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; lean_object* v___x_6195_; lean_object* v___x_6196_; lean_object* v___x_6197_; lean_object* v___x_6198_; lean_object* v___x_6199_; lean_object* v___x_6200_; lean_object* v___x_6201_; lean_object* v___x_6202_; 
v_value_6174_ = lean_ctor_get(v_schedule_6129_, 0);
lean_inc_ref(v_value_6174_);
lean_dec_ref_known(v_schedule_6129_, 1);
v_minute_6175_ = lean_ctor_get(v_value_6174_, 0);
lean_inc(v_minute_6175_);
v_hour_6176_ = lean_ctor_get(v_value_6174_, 1);
lean_inc(v_hour_6176_);
v_dayOfMonth_6177_ = lean_ctor_get(v_value_6174_, 2);
lean_inc(v_dayOfMonth_6177_);
v_month_6178_ = lean_ctor_get(v_value_6174_, 3);
lean_inc(v_month_6178_);
v_dayOfWeek_6179_ = lean_ctor_get(v_value_6174_, 4);
lean_inc(v_dayOfWeek_6179_);
lean_dec_ref(v_value_6174_);
v___x_6180_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0));
v___x_6181_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_minute_6175_);
v___x_6182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6182_, 0, v___x_6180_);
lean_ctor_set(v___x_6182_, 1, v___x_6181_);
v___x_6183_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1));
v___x_6184_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_hour_6176_);
v___x_6185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6185_, 0, v___x_6183_);
lean_ctor_set(v___x_6185_, 1, v___x_6184_);
v___x_6186_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2));
v___x_6187_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_dayOfMonth_6177_);
v___x_6188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6188_, 0, v___x_6186_);
lean_ctor_set(v___x_6188_, 1, v___x_6187_);
v___x_6189_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3));
v___x_6190_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_month_6178_);
v___x_6191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6191_, 0, v___x_6189_);
lean_ctor_set(v___x_6191_, 1, v___x_6190_);
v___x_6192_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4));
v___x_6193_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_dayOfWeek_6179_);
v___x_6194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6194_, 0, v___x_6192_);
lean_ctor_set(v___x_6194_, 1, v___x_6193_);
v___x_6195_ = lean_unsigned_to_nat(5u);
v___x_6196_ = lean_mk_empty_array_with_capacity(v___x_6195_);
v___x_6197_ = lean_array_push(v___x_6196_, v___x_6182_);
v___x_6198_ = lean_array_push(v___x_6197_, v___x_6185_);
v___x_6199_ = lean_array_push(v___x_6198_, v___x_6188_);
v___x_6200_ = lean_array_push(v___x_6199_, v___x_6191_);
v___x_6201_ = lean_array_push(v___x_6200_, v___x_6194_);
v___x_6202_ = l_Lasm_JS_Web_Support_fields(v___x_6201_);
lean_dec_ref(v___x_6201_);
v___y_6137_ = v___x_6202_;
goto v___jp_6136_;
}
v___jp_6136_:
{
lean_object* v_backoffSchedule_6138_; lean_object* v_signal_6139_; lean_object* v___x_6141_; uint8_t v_isShared_6142_; uint8_t v_isSharedCheck_6165_; 
v_backoffSchedule_6138_ = lean_ctor_get(v_options_6130_, 0);
v_signal_6139_ = lean_ctor_get(v_options_6130_, 1);
v_isSharedCheck_6165_ = !lean_is_exclusive(v_options_6130_);
if (v_isSharedCheck_6165_ == 0)
{
v___x_6141_ = v_options_6130_;
v_isShared_6142_ = v_isSharedCheck_6165_;
goto v_resetjp_6140_;
}
else
{
lean_inc(v_signal_6139_);
lean_inc(v_backoffSchedule_6138_);
lean_dec(v_options_6130_);
v___x_6141_ = lean_box(0);
v_isShared_6142_ = v_isSharedCheck_6165_;
goto v_resetjp_6140_;
}
v_resetjp_6140_:
{
lean_object* v___x_6143_; lean_object* v___x_6144_; lean_object* v___x_6146_; 
v___x_6143_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_6144_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(v_backoffSchedule_6138_);
if (v_isShared_6142_ == 0)
{
lean_ctor_set(v___x_6141_, 1, v___x_6144_);
lean_ctor_set(v___x_6141_, 0, v___x_6143_);
v___x_6146_ = v___x_6141_;
goto v_reusejp_6145_;
}
else
{
lean_object* v_reuseFailAlloc_6164_; 
v_reuseFailAlloc_6164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6164_, 0, v___x_6143_);
lean_ctor_set(v_reuseFailAlloc_6164_, 1, v___x_6144_);
v___x_6146_ = v_reuseFailAlloc_6164_;
goto v_reusejp_6145_;
}
v_reusejp_6145_:
{
lean_object* v___x_6147_; lean_object* v___x_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6153_; lean_object* v___x_6154_; lean_object* v___x_6155_; lean_object* v___x_6156_; lean_object* v___x_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___x_6162_; lean_object* v___x_6163_; 
v___x_6147_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0___closed__0));
v___x_6148_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_6139_);
lean_dec(v_signal_6139_);
v___x_6149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6149_, 0, v___x_6147_);
lean_ctor_set(v___x_6149_, 1, v___x_6148_);
v___x_6150_ = lean_unsigned_to_nat(2u);
v___x_6151_ = lean_mk_empty_array_with_capacity(v___x_6150_);
v___x_6152_ = lean_array_push(v___x_6151_, v___x_6146_);
v___x_6153_ = lean_array_push(v___x_6152_, v___x_6149_);
v___x_6154_ = l_Lasm_JS_Web_Support_fields(v___x_6153_);
lean_dec_ref(v___x_6153_);
v___x_6155_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_6156_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6156_, 0, v_handler_6131_);
lean_ctor_set(v___x_6156_, 1, v___x_6155_);
v___x_6157_ = lean_mk_empty_array_with_capacity(v___x_6133_);
v___x_6158_ = lean_array_push(v___x_6157_, v___x_6135_);
v___x_6159_ = lean_array_push(v___x_6158_, v___y_6137_);
v___x_6160_ = lean_array_push(v___x_6159_, v___x_6154_);
v___x_6161_ = lean_array_push(v___x_6160_, v___x_6156_);
v___x_6162_ = l_Lasm_JS_Web_Support_args(v___x_6161_);
v___x_6163_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(v___x_6134_, v___x_6162_);
return v___x_6163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cronWithOptions___boxed(lean_object* v_name_6203_, lean_object* v_schedule_6204_, lean_object* v_options_6205_, lean_object* v_handler_6206_, lean_object* v_a_6207_){
_start:
{
lean_object* v_res_6208_; 
v_res_6208_ = l_Lasm_JS_Deno_cronWithOptions(v_name_6203_, v_schedule_6204_, v_options_6205_, v_handler_6206_);
return v_res_6208_;
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
