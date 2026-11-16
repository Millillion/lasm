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
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvListOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvListOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvListOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__2_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvListOptions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvListOptions___lam__0, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__2_value),((lean_object*)&l_Lasm_JS_Deno_instToJSKvConsistencyLevel___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSKvMutation___closed__0_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__3_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSKvListOptions = (const lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__3_value;
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
static const lean_closure_object l_Lasm_JS_Deno_instToJSKvWatchOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSKvListOptions___closed__2_value)} };
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvListOptions___lam__0(lean_object* v___f_1051_, lean_object* v___f_1052_, lean_object* v___f_1053_, lean_object* v___f_1054_, lean_object* v___f_1055_, lean_object* v_d_1056_){
_start:
{
lean_object* v_limit_1057_; lean_object* v_cursor_1058_; lean_object* v_reverse_1059_; lean_object* v_consistency_1060_; lean_object* v_batchSize_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
v_limit_1057_ = lean_ctor_get(v_d_1056_, 0);
lean_inc(v_limit_1057_);
v_cursor_1058_ = lean_ctor_get(v_d_1056_, 1);
lean_inc(v_cursor_1058_);
v_reverse_1059_ = lean_ctor_get(v_d_1056_, 2);
lean_inc(v_reverse_1059_);
v_consistency_1060_ = lean_ctor_get(v_d_1056_, 3);
lean_inc(v_consistency_1060_);
v_batchSize_1061_ = lean_ctor_get(v_d_1056_, 4);
lean_inc(v_batchSize_1061_);
lean_dec_ref(v_d_1056_);
v___x_1062_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__0));
v___x_1063_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1051_, v_limit_1057_);
v___x_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1062_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
v___x_1065_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__1));
v___x_1066_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1052_, v_cursor_1058_);
v___x_1067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1065_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__2));
v___x_1069_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1053_, v_reverse_1059_);
v___x_1070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1068_);
lean_ctor_set(v___x_1070_, 1, v___x_1069_);
v___x_1071_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_1072_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1054_, v_consistency_1060_);
v___x_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1071_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__3));
v___x_1075_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1055_, v_batchSize_1061_);
v___x_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1074_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
v___x_1077_ = lean_unsigned_to_nat(5u);
v___x_1078_ = lean_mk_empty_array_with_capacity(v___x_1077_);
v___x_1079_ = lean_array_push(v___x_1078_, v___x_1064_);
v___x_1080_ = lean_array_push(v___x_1079_, v___x_1067_);
v___x_1081_ = lean_array_push(v___x_1080_, v___x_1070_);
v___x_1082_ = lean_array_push(v___x_1081_, v___x_1073_);
v___x_1083_ = lean_array_push(v___x_1082_, v___x_1076_);
v___x_1084_ = l_Lasm_JS_Web_Support_fields(v___x_1083_);
lean_dec_ref(v___x_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvEnqueueOptions___lam__0(lean_object* v___f_1095_, lean_object* v___x_1096_, lean_object* v___x_1097_, lean_object* v_d_1098_){
_start:
{
lean_object* v_delay_1099_; lean_object* v_keysIfUndelivered_1100_; lean_object* v_backoffSchedule_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v_delay_1099_ = lean_ctor_get(v_d_1098_, 0);
lean_inc(v_delay_1099_);
v_keysIfUndelivered_1100_ = lean_ctor_get(v_d_1098_, 1);
lean_inc(v_keysIfUndelivered_1100_);
v_backoffSchedule_1101_ = lean_ctor_get(v_d_1098_, 2);
lean_inc(v_backoffSchedule_1101_);
lean_dec_ref(v_d_1098_);
v___x_1102_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0));
v___x_1103_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1095_, v_delay_1099_);
v___x_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1102_);
lean_ctor_set(v___x_1104_, 1, v___x_1103_);
v___x_1105_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1));
v___x_1106_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1096_, v_keysIfUndelivered_1100_);
v___x_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1105_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_1109_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1097_, v_backoffSchedule_1101_);
v___x_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1108_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
v___x_1111_ = lean_unsigned_to_nat(3u);
v___x_1112_ = lean_mk_empty_array_with_capacity(v___x_1111_);
v___x_1113_ = lean_array_push(v___x_1112_, v___x_1104_);
v___x_1114_ = lean_array_push(v___x_1113_, v___x_1107_);
v___x_1115_ = lean_array_push(v___x_1114_, v___x_1110_);
v___x_1116_ = l_Lasm_JS_Web_Support_fields(v___x_1115_);
lean_dec_ref(v___x_1115_);
return v___x_1116_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0(void){
_start:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___f_1119_; lean_object* v___f_1120_; 
v___x_1117_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2);
v___x_1118_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__1);
v___f_1119_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___closed__0));
v___f_1120_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSKvEnqueueOptions___lam__0), 4, 3);
lean_closure_set(v___f_1120_, 0, v___f_1119_);
lean_closure_set(v___f_1120_, 1, v___x_1118_);
lean_closure_set(v___f_1120_, 2, v___x_1117_);
return v___f_1120_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSKvEnqueueOptions(void){
_start:
{
lean_object* v___f_1121_; 
v___f_1121_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0, &l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0_once, _init_l_Lasm_JS_Deno_instToJSKvEnqueueOptions___closed__0);
return v___f_1121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0(lean_object* v_x_1133_){
_start:
{
if (lean_obj_tag(v_x_1133_) == 0)
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1143_; 
v_a_1135_ = lean_ctor_get(v_x_1133_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_x_1133_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1137_ = v_x_1133_;
v_isShared_1138_ = v_isSharedCheck_1143_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v_x_1133_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1143_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
lean_object* v___x_1141_; 
v___x_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
return v___x_1141_;
}
}
}
else
{
lean_object* v___x_1144_; 
lean_dec_ref_known(v_x_1133_, 1);
v___x_1144_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___closed__1));
return v___x_1144_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0___boxed(lean_object* v_x_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__0(v_x_1145_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1(lean_object* v_f_1148_, lean_object* v___f_1149_, lean_object* v_x_1150_){
_start:
{
if (lean_obj_tag(v_x_1150_) == 0)
{
lean_object* v___x_1152_; 
lean_dec_ref(v___f_1149_);
lean_dec_ref(v_f_1148_);
v___x_1152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1152_, 0, v_x_1150_);
return v___x_1152_;
}
else
{
lean_object* v_a_1153_; lean_object* v___x_1154_; uint8_t v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v_a_1153_ = lean_ctor_get(v_x_1150_, 0);
lean_inc(v_a_1153_);
lean_dec_ref_known(v_x_1150_, 1);
v___x_1154_ = lean_unsigned_to_nat(0u);
v___x_1155_ = 0;
v___x_1156_ = lean_apply_2(v_f_1148_, v_a_1153_, lean_box(0));
v___x_1157_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1154_, v___x_1155_, v___x_1156_, v___f_1149_);
return v___x_1157_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1___boxed(lean_object* v_f_1158_, lean_object* v___f_1159_, lean_object* v_x_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1(v_f_1158_, v___f_1159_, v_x_1160_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2(lean_object* v___f_1163_, lean_object* v_args_1164_){
_start:
{
lean_object* v___x_1166_; uint8_t v___x_1167_; lean_object* v_val_1169_; lean_object* v___x_1172_; lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1180_; 
v___x_1166_ = lean_unsigned_to_nat(0u);
v___x_1167_ = 0;
v___x_1172_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1164_, v___x_1166_);
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1175_ = v___x_1172_;
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1172_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
v___jp_1168_:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1170_, 0, v_val_1169_);
v___x_1171_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1166_, v___x_1167_, v___x_1170_, v___f_1163_);
return v___x_1171_;
}
v_resetjp_1174_:
{
lean_object* v___x_1178_; 
if (v_isShared_1176_ == 0)
{
lean_ctor_set_tag(v___x_1175_, 1);
v___x_1178_ = v___x_1175_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v_a_1173_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
v_val_1169_ = v___x_1178_;
goto v___jp_1168_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2___boxed(lean_object* v___f_1181_, lean_object* v_args_1182_, lean_object* v___y_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2(v___f_1181_, v_args_1182_);
lean_dec_ref(v_args_1182_);
return v_res_1184_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5(void){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___x_1192_ = lean_nat_abs(v___x_1191_);
return v___x_1192_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6(void){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; uint8_t v___x_1195_; 
v___x_1193_ = lean_cstr_to_nat("9007199254740991");
v___x_1194_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__5);
v___x_1195_ = lean_nat_dec_le(v___x_1194_, v___x_1193_);
return v___x_1195_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___x_1197_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
return v___x_1197_;
}
}
static double _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8(void){
_start:
{
lean_object* v___x_1198_; double v___x_1199_; 
v___x_1198_ = lean_obj_once(&l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11, &l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11_once, _init_l_Lasm_JS_Deno_instReprKvMutationType_repr___closed__11);
v___x_1199_ = l_Float_ofInt(v___x_1198_);
return v___x_1199_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9(void){
_start:
{
double v___x_1200_; lean_object* v___x_1201_; 
v___x_1200_ = lean_float_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__8);
v___x_1201_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1201_, 0, v___x_1200_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn(lean_object* v_f_1202_){
_start:
{
lean_object* v___f_1204_; lean_object* v___f_1205_; lean_object* v___f_1206_; lean_object* v___x_1207_; 
v___f_1204_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__0));
v___f_1205_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1205_, 0, v_f_1202_);
lean_closure_set(v___f_1205_, 1, v___f_1204_);
v___f_1206_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1206_, 0, v___f_1205_);
v___x_1207_ = l_Lasm_JS_Function_ofFn(v___f_1206_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v_a_1208_; lean_object* v___x_1209_; 
v_a_1208_ = lean_ctor_get(v___x_1207_, 0);
lean_inc(v_a_1208_);
lean_dec_ref_known(v___x_1207_, 1);
v___x_1209_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_a_1210_);
lean_dec_ref_known(v___x_1209_, 1);
v___x_1211_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1212_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1210_, v___x_1211_);
if (lean_obj_tag(v___x_1212_) == 0)
{
lean_object* v_a_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___y_1220_; uint8_t v___x_1247_; 
v_a_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_a_1213_);
lean_dec_ref_known(v___x_1212_, 1);
v___x_1214_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1215_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1208_);
v___x_1216_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1216_, 0, v_a_1208_);
lean_ctor_set(v___x_1216_, 1, v___x_1215_);
v___x_1217_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1218_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_1247_ = lean_uint8_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6);
if (v___x_1247_ == 0)
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7);
v___y_1220_ = v___x_1248_;
goto v___jp_1219_;
}
else
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9);
v___y_1220_ = v___x_1249_;
goto v___jp_1219_;
}
v___jp_1219_:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
lean_inc(v___y_1220_);
v___x_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1218_);
lean_ctor_set(v___x_1221_, 1, v___y_1220_);
v___x_1222_ = lean_box(0);
v___x_1223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1221_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
v___x_1224_ = l_Lasm_JS_obj(v___x_1223_);
v___x_1225_ = lean_unsigned_to_nat(3u);
v___x_1226_ = lean_mk_empty_array_with_capacity(v___x_1225_);
v___x_1227_ = lean_array_push(v___x_1226_, v___x_1216_);
v___x_1228_ = lean_array_push(v___x_1227_, v___x_1217_);
v___x_1229_ = lean_array_push(v___x_1228_, v___x_1224_);
v___x_1230_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1213_, v___x_1214_, v___x_1229_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1237_; 
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1237_ == 0)
{
lean_object* v_unused_1238_; 
v_unused_1238_ = lean_ctor_get(v___x_1230_, 0);
lean_dec(v_unused_1238_);
v___x_1232_ = v___x_1230_;
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
else
{
lean_dec(v___x_1230_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1235_; 
if (v_isShared_1233_ == 0)
{
lean_ctor_set(v___x_1232_, 0, v_a_1208_);
v___x_1235_ = v___x_1232_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1208_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
else
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1246_; 
lean_dec(v_a_1208_);
v_a_1239_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1241_ = v___x_1230_;
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1230_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1244_; 
if (v_isShared_1242_ == 0)
{
v___x_1244_ = v___x_1241_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_a_1239_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
}
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
lean_dec(v_a_1208_);
v_a_1250_ = lean_ctor_get(v___x_1212_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1212_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1212_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1212_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
lean_dec(v_a_1208_);
v_a_1258_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1209_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1209_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1263_; 
if (v_isShared_1261_ == 0)
{
v___x_1263_ = v___x_1260_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_a_1258_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
}
else
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
v_a_1266_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1207_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1207_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
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
return v___x_1271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___boxed(lean_object* v_f_1274_, lean_object* v_a_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofFn(v_f_1274_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0(lean_object* v_f_1277_, lean_object* v_args_1278_){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v_a_1282_; lean_object* v___x_1283_; 
v___x_1280_ = lean_unsigned_to_nat(0u);
v___x_1281_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1278_, v___x_1280_);
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_a_1282_);
lean_dec_ref(v___x_1281_);
v___x_1283_ = lean_apply_2(v_f_1277_, v_a_1282_, lean_box(0));
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1291_; 
v_isSharedCheck_1291_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1291_ == 0)
{
lean_object* v_unused_1292_; 
v_unused_1292_ = lean_ctor_get(v___x_1283_, 0);
lean_dec(v_unused_1292_);
v___x_1285_ = v___x_1283_;
v_isShared_1286_ = v_isSharedCheck_1291_;
goto v_resetjp_1284_;
}
else
{
lean_dec(v___x_1283_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1291_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1287_; lean_object* v___x_1289_; 
v___x_1287_ = lean_box(0);
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 0, v___x_1287_);
v___x_1289_ = v___x_1285_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v___x_1287_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
return v___x_1289_;
}
}
}
else
{
lean_object* v_a_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1300_; 
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_1301_, lean_object* v_args_1302_, lean_object* v___y_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0(v_f_1301_, v_args_1302_);
lean_dec_ref(v_args_1302_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn(lean_object* v_f_1305_){
_start:
{
lean_object* v___f_1307_; lean_object* v___x_1308_; 
v___f_1307_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1307_, 0, v_f_1305_);
v___x_1308_ = l_Lasm_JS_Function_ofSyncFn(v___f_1307_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v___x_1310_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1309_);
lean_dec_ref_known(v___x_1308_, 1);
v___x_1310_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1310_, 1);
v___x_1312_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1313_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1311_, v___x_1312_);
if (lean_obj_tag(v___x_1313_) == 0)
{
lean_object* v_a_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___y_1321_; uint8_t v___x_1348_; 
v_a_1314_ = lean_ctor_get(v___x_1313_, 0);
lean_inc(v_a_1314_);
lean_dec_ref_known(v___x_1313_, 1);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1316_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1309_);
v___x_1317_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1317_, 0, v_a_1309_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1319_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_1348_ = lean_uint8_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__6);
if (v___x_1348_ == 0)
{
lean_object* v___x_1349_; 
v___x_1349_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__7);
v___y_1321_ = v___x_1349_;
goto v___jp_1320_;
}
else
{
lean_object* v___x_1350_; 
v___x_1350_ = lean_obj_once(&l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9, &l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__9);
v___y_1321_ = v___x_1350_;
goto v___jp_1320_;
}
v___jp_1320_:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
lean_inc(v___y_1321_);
v___x_1322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1319_);
lean_ctor_set(v___x_1322_, 1, v___y_1321_);
v___x_1323_ = lean_box(0);
v___x_1324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1322_);
lean_ctor_set(v___x_1324_, 1, v___x_1323_);
v___x_1325_ = l_Lasm_JS_obj(v___x_1324_);
v___x_1326_ = lean_unsigned_to_nat(3u);
v___x_1327_ = lean_mk_empty_array_with_capacity(v___x_1326_);
v___x_1328_ = lean_array_push(v___x_1327_, v___x_1317_);
v___x_1329_ = lean_array_push(v___x_1328_, v___x_1318_);
v___x_1330_ = lean_array_push(v___x_1329_, v___x_1325_);
v___x_1331_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1314_, v___x_1315_, v___x_1330_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1338_; 
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1338_ == 0)
{
lean_object* v_unused_1339_; 
v_unused_1339_ = lean_ctor_get(v___x_1331_, 0);
lean_dec(v_unused_1339_);
v___x_1333_ = v___x_1331_;
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
else
{
lean_dec(v___x_1331_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1336_; 
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v_a_1309_);
v___x_1336_ = v___x_1333_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_a_1309_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
lean_dec(v_a_1309_);
v_a_1340_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1331_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1331_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
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
return v___x_1345_;
}
}
}
}
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
lean_dec(v_a_1309_);
v_a_1351_ = lean_ctor_get(v___x_1313_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1313_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1313_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1313_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_dec(v_a_1309_);
v_a_1359_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1310_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1310_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
else
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
v_a_1367_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1308_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1308_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn___boxed(lean_object* v_f_1375_, lean_object* v_a_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l_Lasm_JS_Deno_KvListenQueueHandler_ofSyncFn(v_f_1375_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0(lean_object* v___f_1379_, lean_object* v_d_1380_){
_start:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1381_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0___closed__0));
v___x_1382_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1379_, v_d_1380_);
v___x_1383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1381_);
lean_ctor_set(v___x_1383_, 1, v___x_1382_);
v___x_1384_ = lean_unsigned_to_nat(1u);
v___x_1385_ = lean_mk_empty_array_with_capacity(v___x_1384_);
v___x_1386_ = lean_array_push(v___x_1385_, v___x_1383_);
v___x_1387_ = l_Lasm_JS_Web_Support_fields(v___x_1386_);
lean_dec_ref(v___x_1386_);
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx(lean_object* v_x_1391_){
_start:
{
if (lean_obj_tag(v_x_1391_) == 0)
{
lean_object* v___x_1392_; 
v___x_1392_ = lean_unsigned_to_nat(0u);
return v___x_1392_;
}
else
{
lean_object* v___x_1393_; 
v___x_1393_ = lean_unsigned_to_nat(1u);
return v___x_1393_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx___boxed(lean_object* v_x_1394_){
_start:
{
lean_object* v_res_1395_; 
v_res_1395_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorIdx(v_x_1394_);
lean_dec_ref(v_x_1394_);
return v_res_1395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(lean_object* v_t_1396_, lean_object* v_k_1397_){
_start:
{
if (lean_obj_tag(v_t_1396_) == 0)
{
double v_value_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v_value_1398_ = lean_ctor_get_float(v_t_1396_, 0);
lean_dec_ref_known(v_t_1396_, 0);
v___x_1399_ = lean_box_float(v_value_1398_);
v___x_1400_ = lean_apply_1(v_k_1397_, v___x_1399_);
return v___x_1400_;
}
else
{
lean_object* v_value_1401_; lean_object* v___x_1402_; 
v_value_1401_ = lean_ctor_get(v_t_1396_, 0);
lean_inc_ref(v_value_1401_);
lean_dec_ref_known(v_t_1396_, 1);
v___x_1402_ = lean_apply_1(v_k_1397_, v_value_1401_);
return v___x_1402_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim(lean_object* v_motive_1403_, lean_object* v_ctorIdx_1404_, lean_object* v_t_1405_, lean_object* v_h_1406_, lean_object* v_k_1407_){
_start:
{
lean_object* v___x_1408_; 
v___x_1408_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1405_, v_k_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___boxed(lean_object* v_motive_1409_, lean_object* v_ctorIdx_1410_, lean_object* v_t_1411_, lean_object* v_h_1412_, lean_object* v_k_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim(v_motive_1409_, v_ctorIdx_1410_, v_t_1411_, v_h_1412_, v_k_1413_);
lean_dec(v_ctorIdx_1410_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_double_elim___redArg(lean_object* v_t_1415_, lean_object* v_double_1416_){
_start:
{
lean_object* v___x_1417_; 
v___x_1417_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1415_, v_double_1416_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_double_elim(lean_object* v_motive_1418_, lean_object* v_t_1419_, lean_object* v_h_1420_, lean_object* v_double_1421_){
_start:
{
lean_object* v___x_1422_; 
v___x_1422_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1419_, v_double_1421_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_sequence_elim___redArg(lean_object* v_t_1423_, lean_object* v_sequence_1424_){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1423_, v_sequence_1424_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_sequence_elim(lean_object* v_motive_1426_, lean_object* v_t_1427_, lean_object* v_h_1428_, lean_object* v_sequence_1429_){
_start:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_Lasm_JS_Deno_DoubleOrSequenceOfDouble_ctorElim___redArg(v_t_1427_, v_sequence_1429_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0(double v_x_1431_){
_start:
{
lean_object* v___x_1432_; 
v___x_1432_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1432_, 0, v_x_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0___boxed(lean_object* v_x_1433_){
_start:
{
double v_x_85__boxed_1434_; lean_object* v_res_1435_; 
v_x_85__boxed_1434_ = lean_unbox_float(v_x_1433_);
lean_dec_ref(v_x_1433_);
v_res_1435_ = l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__0(v_x_85__boxed_1434_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrSequenceOfDouble___lam__1(lean_object* v___f_1436_, lean_object* v_x_1437_){
_start:
{
if (lean_obj_tag(v_x_1437_) == 0)
{
double v_value_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec_ref(v___f_1436_);
v_value_1438_ = lean_ctor_get_float(v_x_1437_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v_x_1437_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_dec(v_x_1437_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
lean_ctor_set_tag(v___x_1440_, 3);
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1444_, 0, v_value_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
else
{
lean_object* v_value_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1457_; 
v_value_1446_ = lean_ctor_get(v_x_1437_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_x_1437_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1448_ = v_x_1437_;
v_isShared_1449_ = v_isSharedCheck_1457_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_value_1446_);
lean_dec(v_x_1437_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1457_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1450_; size_t v_sz_1451_; size_t v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1455_; 
v___x_1450_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_1451_ = lean_array_size(v_value_1446_);
v___x_1452_ = ((size_t)0ULL);
v___x_1453_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1450_, v___f_1436_, v_sz_1451_, v___x_1452_, v_value_1446_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set_tag(v___x_1448_, 7);
lean_ctor_set(v___x_1448_, 0, v___x_1453_);
v___x_1455_ = v___x_1448_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1453_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0(double v_value_1462_){
_start:
{
lean_object* v___x_1463_; 
v___x_1463_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_1463_, 0, v_value_1462_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0___boxed(lean_object* v_value_1464_){
_start:
{
double v_value_boxed_1465_; lean_object* v_res_1466_; 
v_value_boxed_1465_ = lean_unbox_float(v_value_1464_);
lean_dec_ref(v_value_1464_);
v_res_1466_ = l_Lasm_JS_Deno_instCoeFloatDoubleOrSequenceOfDouble___lam__0(v_value_boxed_1465_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeArrayFloatDoubleOrSequenceOfDouble___lam__0(lean_object* v_value_1469_){
_start:
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1470_, 0, v_value_1469_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1(lean_object* v___f_1474_, lean_object* v_d_1475_){
_start:
{
lean_object* v___x_1476_; lean_object* v___y_1478_; 
v___x_1476_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1___closed__0));
if (lean_obj_tag(v_d_1475_) == 0)
{
double v_value_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1491_; 
lean_dec_ref(v___f_1474_);
v_value_1484_ = lean_ctor_get_float(v_d_1475_, 0);
v_isSharedCheck_1491_ = !lean_is_exclusive(v_d_1475_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1486_ = v_d_1475_;
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
else
{
lean_dec(v_d_1475_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1489_; 
if (v_isShared_1487_ == 0)
{
lean_ctor_set_tag(v___x_1486_, 3);
v___x_1489_ = v___x_1486_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1490_, 0, v_value_1484_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
v___y_1478_ = v___x_1489_;
goto v___jp_1477_;
}
}
}
else
{
lean_object* v_value_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1503_; 
v_value_1492_ = lean_ctor_get(v_d_1475_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v_d_1475_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1494_ = v_d_1475_;
v_isShared_1495_ = v_isSharedCheck_1503_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_value_1492_);
lean_dec(v_d_1475_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1503_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
lean_object* v___x_1496_; size_t v_sz_1497_; size_t v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1501_; 
v___x_1496_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_1497_ = lean_array_size(v_value_1492_);
v___x_1498_ = ((size_t)0ULL);
v___x_1499_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1496_, v___f_1474_, v_sz_1497_, v___x_1498_, v_value_1492_);
if (v_isShared_1495_ == 0)
{
lean_ctor_set_tag(v___x_1494_, 7);
lean_ctor_set(v___x_1494_, 0, v___x_1499_);
v___x_1501_ = v___x_1494_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1499_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
v___y_1478_ = v___x_1501_;
goto v___jp_1477_;
}
}
}
v___jp_1477_:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1476_);
lean_ctor_set(v___x_1479_, 1, v___y_1478_);
v___x_1480_ = lean_unsigned_to_nat(1u);
v___x_1481_ = lean_mk_empty_array_with_capacity(v___x_1480_);
v___x_1482_ = lean_array_push(v___x_1481_, v___x_1479_);
v___x_1483_ = l_Lasm_JS_Web_Support_fields(v___x_1482_);
lean_dec_ref(v___x_1482_);
return v___x_1483_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx(lean_object* v_x_1507_){
_start:
{
if (lean_obj_tag(v_x_1507_) == 0)
{
lean_object* v___x_1508_; 
v___x_1508_ = lean_unsigned_to_nat(0u);
return v___x_1508_;
}
else
{
lean_object* v___x_1509_; 
v___x_1509_ = lean_unsigned_to_nat(1u);
return v___x_1509_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx___boxed(lean_object* v_x_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorIdx(v_x_1510_);
lean_dec_ref(v_x_1510_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(lean_object* v_t_1512_, lean_object* v_k_1513_){
_start:
{
if (lean_obj_tag(v_t_1512_) == 0)
{
double v_value_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
v_value_1514_ = lean_ctor_get_float(v_t_1512_, 0);
lean_dec_ref_known(v_t_1512_, 0);
v___x_1515_ = lean_box_float(v_value_1514_);
v___x_1516_ = lean_apply_1(v_k_1513_, v___x_1515_);
return v___x_1516_;
}
else
{
lean_object* v_value_1517_; lean_object* v___x_1518_; 
v_value_1517_ = lean_ctor_get(v_t_1512_, 0);
lean_inc_ref(v_value_1517_);
lean_dec_ref_known(v_t_1512_, 1);
v___x_1518_ = lean_apply_1(v_k_1513_, v_value_1517_);
return v___x_1518_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim(lean_object* v_motive_1519_, lean_object* v_ctorIdx_1520_, lean_object* v_t_1521_, lean_object* v_h_1522_, lean_object* v_k_1523_){
_start:
{
lean_object* v___x_1524_; 
v___x_1524_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1521_, v_k_1523_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___boxed(lean_object* v_motive_1525_, lean_object* v_ctorIdx_1526_, lean_object* v_t_1527_, lean_object* v_h_1528_, lean_object* v_k_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim(v_motive_1525_, v_ctorIdx_1526_, v_t_1527_, v_h_1528_, v_k_1529_);
lean_dec(v_ctorIdx_1526_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_double_elim___redArg(lean_object* v_t_1531_, lean_object* v_double_1532_){
_start:
{
lean_object* v___x_1533_; 
v___x_1533_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1531_, v_double_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_double_elim(lean_object* v_motive_1534_, lean_object* v_t_1535_, lean_object* v_h_1536_, lean_object* v_double_1537_){
_start:
{
lean_object* v___x_1538_; 
v___x_1538_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1535_, v_double_1537_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_cronScheduleExpression_elim___redArg(lean_object* v_t_1539_, lean_object* v_cronScheduleExpression_1540_){
_start:
{
lean_object* v___x_1541_; 
v___x_1541_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1539_, v_cronScheduleExpression_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronScheduleExpressionUnion_cronScheduleExpression_elim(lean_object* v_motive_1542_, lean_object* v_t_1543_, lean_object* v_h_1544_, lean_object* v_cronScheduleExpression_1545_){
_start:
{
lean_object* v___x_1546_; 
v___x_1546_ = l_Lasm_JS_Deno_CronScheduleExpressionUnion_ctorElim___redArg(v_t_1543_, v_cronScheduleExpression_1545_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion___lam__1(lean_object* v___f_1547_, lean_object* v_x_1548_){
_start:
{
if (lean_obj_tag(v_x_1548_) == 0)
{
double v_value_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1556_; 
lean_dec_ref(v___f_1547_);
v_value_1549_ = lean_ctor_get_float(v_x_1548_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v_x_1548_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1551_ = v_x_1548_;
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
else
{
lean_dec(v_x_1548_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1554_; 
if (v_isShared_1552_ == 0)
{
lean_ctor_set_tag(v___x_1551_, 3);
v___x_1554_ = v___x_1551_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1555_, 0, v_value_1549_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
else
{
lean_object* v_value_1557_; lean_object* v___x_1558_; lean_object* v___y_1560_; 
v_value_1557_ = lean_ctor_get(v_x_1548_, 0);
lean_inc_ref(v_value_1557_);
lean_dec_ref_known(v_x_1548_, 1);
v___x_1558_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1___closed__0));
if (lean_obj_tag(v_value_1557_) == 0)
{
double v_value_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
lean_dec_ref(v___f_1547_);
v_value_1566_ = lean_ctor_get_float(v_value_1557_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v_value_1557_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v_value_1557_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_dec(v_value_1557_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
lean_ctor_set_tag(v___x_1568_, 3);
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1572_, 0, v_value_1566_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
v___y_1560_ = v___x_1571_;
goto v___jp_1559_;
}
}
}
else
{
lean_object* v_value_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1585_; 
v_value_1574_ = lean_ctor_get(v_value_1557_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v_value_1557_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1576_ = v_value_1557_;
v_isShared_1577_ = v_isSharedCheck_1585_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_value_1574_);
lean_dec(v_value_1557_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1585_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1578_; size_t v_sz_1579_; size_t v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1578_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicCheck___lam__1___closed__9));
v_sz_1579_ = lean_array_size(v_value_1574_);
v___x_1580_ = ((size_t)0ULL);
v___x_1581_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1578_, v___f_1547_, v_sz_1579_, v___x_1580_, v_value_1574_);
if (v_isShared_1577_ == 0)
{
lean_ctor_set_tag(v___x_1576_, 7);
lean_ctor_set(v___x_1576_, 0, v___x_1581_);
v___x_1583_ = v___x_1576_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
v___y_1560_ = v___x_1583_;
goto v___jp_1559_;
}
}
}
v___jp_1559_:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1558_);
lean_ctor_set(v___x_1561_, 1, v___y_1560_);
v___x_1562_ = lean_unsigned_to_nat(1u);
v___x_1563_ = lean_mk_empty_array_with_capacity(v___x_1562_);
v___x_1564_ = lean_array_push(v___x_1563_, v___x_1561_);
v___x_1565_ = l_Lasm_JS_Web_Support_fields(v___x_1564_);
lean_dec_ref(v___x_1564_);
return v___x_1565_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0(double v_value_1589_){
_start:
{
lean_object* v___x_1590_; 
v___x_1590_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_1590_, 0, v_value_1589_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0___boxed(lean_object* v_value_1591_){
_start:
{
double v_value_boxed_1592_; lean_object* v_res_1593_; 
v_value_boxed_1592_ = lean_unbox_float(v_value_1591_);
lean_dec_ref(v_value_1591_);
v_res_1593_ = l_Lasm_JS_Deno_instCoeFloatCronScheduleExpressionUnion___lam__0(v_value_boxed_1592_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeCronScheduleExpressionCronScheduleExpressionUnion___lam__0(lean_object* v_value_1596_){
_start:
{
lean_object* v___x_1597_; 
v___x_1597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1597_, 0, v_value_1596_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronSchedule___lam__0(lean_object* v___x_1605_, lean_object* v_d_1606_){
_start:
{
lean_object* v_minute_1607_; lean_object* v_hour_1608_; lean_object* v_dayOfMonth_1609_; lean_object* v_month_1610_; lean_object* v_dayOfWeek_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v_minute_1607_ = lean_ctor_get(v_d_1606_, 0);
lean_inc(v_minute_1607_);
v_hour_1608_ = lean_ctor_get(v_d_1606_, 1);
lean_inc(v_hour_1608_);
v_dayOfMonth_1609_ = lean_ctor_get(v_d_1606_, 2);
lean_inc(v_dayOfMonth_1609_);
v_month_1610_ = lean_ctor_get(v_d_1606_, 3);
lean_inc(v_month_1610_);
v_dayOfWeek_1611_ = lean_ctor_get(v_d_1606_, 4);
lean_inc(v_dayOfWeek_1611_);
lean_dec_ref(v_d_1606_);
v___x_1612_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0));
lean_inc_ref_n(v___x_1605_, 4);
v___x_1613_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1605_, v_minute_1607_);
v___x_1614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1612_);
lean_ctor_set(v___x_1614_, 1, v___x_1613_);
v___x_1615_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1));
v___x_1616_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1605_, v_hour_1608_);
v___x_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1615_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
v___x_1618_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2));
v___x_1619_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1605_, v_dayOfMonth_1609_);
v___x_1620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1618_);
lean_ctor_set(v___x_1620_, 1, v___x_1619_);
v___x_1621_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3));
v___x_1622_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1605_, v_month_1610_);
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4));
v___x_1625_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1605_, v_dayOfWeek_1611_);
v___x_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1624_);
lean_ctor_set(v___x_1626_, 1, v___x_1625_);
v___x_1627_ = lean_unsigned_to_nat(5u);
v___x_1628_ = lean_mk_empty_array_with_capacity(v___x_1627_);
v___x_1629_ = lean_array_push(v___x_1628_, v___x_1614_);
v___x_1630_ = lean_array_push(v___x_1629_, v___x_1617_);
v___x_1631_ = lean_array_push(v___x_1630_, v___x_1620_);
v___x_1632_ = lean_array_push(v___x_1631_, v___x_1623_);
v___x_1633_ = lean_array_push(v___x_1632_, v___x_1626_);
v___x_1634_ = l_Lasm_JS_Web_Support_fields(v___x_1633_);
lean_dec_ref(v___x_1633_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx(lean_object* v_x_1638_){
_start:
{
if (lean_obj_tag(v_x_1638_) == 0)
{
lean_object* v___x_1639_; 
v___x_1639_ = lean_unsigned_to_nat(0u);
return v___x_1639_;
}
else
{
lean_object* v___x_1640_; 
v___x_1640_ = lean_unsigned_to_nat(1u);
return v___x_1640_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx___boxed(lean_object* v_x_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorIdx(v_x_1641_);
lean_dec_ref(v_x_1641_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(lean_object* v_t_1643_, lean_object* v_k_1644_){
_start:
{
lean_object* v_value_1645_; lean_object* v___x_1646_; 
v_value_1645_ = lean_ctor_get(v_t_1643_, 0);
lean_inc_ref(v_value_1645_);
lean_dec_ref(v_t_1643_);
v___x_1646_ = lean_apply_1(v_k_1644_, v_value_1645_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim(lean_object* v_motive_1647_, lean_object* v_ctorIdx_1648_, lean_object* v_t_1649_, lean_object* v_h_1650_, lean_object* v_k_1651_){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1649_, v_k_1651_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___boxed(lean_object* v_motive_1653_, lean_object* v_ctorIdx_1654_, lean_object* v_t_1655_, lean_object* v_h_1656_, lean_object* v_k_1657_){
_start:
{
lean_object* v_res_1658_; 
v_res_1658_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim(v_motive_1653_, v_ctorIdx_1654_, v_t_1655_, v_h_1656_, v_k_1657_);
lean_dec(v_ctorIdx_1654_);
return v_res_1658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_domString_elim___redArg(lean_object* v_t_1659_, lean_object* v_domString_1660_){
_start:
{
lean_object* v___x_1661_; 
v___x_1661_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1659_, v_domString_1660_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_domString_elim(lean_object* v_motive_1662_, lean_object* v_t_1663_, lean_object* v_h_1664_, lean_object* v_domString_1665_){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1663_, v_domString_1665_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_cronSchedule_elim___redArg(lean_object* v_t_1667_, lean_object* v_cronSchedule_1668_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1667_, v_cronSchedule_1668_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrCronSchedule_cronSchedule_elim(lean_object* v_motive_1670_, lean_object* v_t_1671_, lean_object* v_h_1672_, lean_object* v_cronSchedule_1673_){
_start:
{
lean_object* v___x_1674_; 
v___x_1674_ = l_Lasm_JS_Deno_DOMStringOrCronSchedule_ctorElim___redArg(v_t_1671_, v_cronSchedule_1673_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrCronSchedule___lam__0(lean_object* v_x_1675_){
_start:
{
if (lean_obj_tag(v_x_1675_) == 0)
{
lean_object* v_value_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
v_value_1676_ = lean_ctor_get(v_x_1675_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v_x_1675_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1678_ = v_x_1675_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_value_1676_);
lean_dec(v_x_1675_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
lean_ctor_set_tag(v___x_1678_, 4);
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_value_1676_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
else
{
lean_object* v_value_1684_; lean_object* v_minute_1685_; lean_object* v_hour_1686_; lean_object* v_dayOfMonth_1687_; lean_object* v_month_1688_; lean_object* v_dayOfWeek_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v_value_1684_ = lean_ctor_get(v_x_1675_, 0);
lean_inc_ref(v_value_1684_);
lean_dec_ref_known(v_x_1675_, 1);
v_minute_1685_ = lean_ctor_get(v_value_1684_, 0);
lean_inc(v_minute_1685_);
v_hour_1686_ = lean_ctor_get(v_value_1684_, 1);
lean_inc(v_hour_1686_);
v_dayOfMonth_1687_ = lean_ctor_get(v_value_1684_, 2);
lean_inc(v_dayOfMonth_1687_);
v_month_1688_ = lean_ctor_get(v_value_1684_, 3);
lean_inc(v_month_1688_);
v_dayOfWeek_1689_ = lean_ctor_get(v_value_1684_, 4);
lean_inc(v_dayOfWeek_1689_);
lean_dec_ref(v_value_1684_);
v___x_1690_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronScheduleExpressionUnion));
v___x_1691_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0));
v___x_1692_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1690_, v_minute_1685_);
v___x_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1691_);
lean_ctor_set(v___x_1693_, 1, v___x_1692_);
v___x_1694_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1));
v___x_1695_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1690_, v_hour_1686_);
v___x_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1694_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2));
v___x_1698_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1690_, v_dayOfMonth_1687_);
v___x_1699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1697_);
lean_ctor_set(v___x_1699_, 1, v___x_1698_);
v___x_1700_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3));
v___x_1701_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1690_, v_month_1688_);
v___x_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1700_);
lean_ctor_set(v___x_1702_, 1, v___x_1701_);
v___x_1703_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4));
v___x_1704_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1690_, v_dayOfWeek_1689_);
v___x_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1703_);
lean_ctor_set(v___x_1705_, 1, v___x_1704_);
v___x_1706_ = lean_unsigned_to_nat(5u);
v___x_1707_ = lean_mk_empty_array_with_capacity(v___x_1706_);
v___x_1708_ = lean_array_push(v___x_1707_, v___x_1693_);
v___x_1709_ = lean_array_push(v___x_1708_, v___x_1696_);
v___x_1710_ = lean_array_push(v___x_1709_, v___x_1699_);
v___x_1711_ = lean_array_push(v___x_1710_, v___x_1702_);
v___x_1712_ = lean_array_push(v___x_1711_, v___x_1705_);
v___x_1713_ = l_Lasm_JS_Web_Support_fields(v___x_1712_);
lean_dec_ref(v___x_1712_);
return v___x_1713_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrCronSchedule___lam__0(lean_object* v_value_1716_){
_start:
{
lean_object* v___x_1717_; 
v___x_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1717_, 0, v_value_1716_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeCronScheduleDOMStringOrCronSchedule___lam__0(lean_object* v_value_1720_){
_start:
{
lean_object* v___x_1721_; 
v___x_1721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1721_, 0, v_value_1720_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___lam__1(lean_object* v_f_1731_, lean_object* v___f_1732_, lean_object* v_x_1733_){
_start:
{
lean_object* v___x_1735_; uint8_t v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1735_ = lean_unsigned_to_nat(0u);
v___x_1736_ = 0;
v___x_1737_ = lean_apply_1(v_f_1731_, lean_box(0));
v___x_1738_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1735_, v___x_1736_, v___x_1737_, v___f_1732_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed(lean_object* v_f_1739_, lean_object* v___f_1740_, lean_object* v_x_1741_, lean_object* v___y_1742_){
_start:
{
lean_object* v_res_1743_; 
v_res_1743_ = l_Lasm_JS_Deno_CronHandler_ofFn___lam__1(v_f_1739_, v___f_1740_, v_x_1741_);
lean_dec_ref(v_x_1741_);
return v_res_1743_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__0(void){
_start:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1744_ = lean_unsigned_to_nat(0u);
v___x_1745_ = lean_nat_to_int(v___x_1744_);
return v___x_1745_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__1(void){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1746_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__0, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__0);
v___x_1747_ = lean_nat_abs(v___x_1746_);
return v___x_1747_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; uint8_t v___x_1750_; 
v___x_1748_ = lean_cstr_to_nat("9007199254740991");
v___x_1749_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__1, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__1_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__1);
v___x_1750_ = lean_nat_dec_le(v___x_1749_, v___x_1748_);
return v___x_1750_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3(void){
_start:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1751_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__0, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__0);
v___x_1752_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1751_);
return v___x_1752_;
}
}
static double _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__4(void){
_start:
{
lean_object* v___x_1753_; double v___x_1754_; 
v___x_1753_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__0, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__0_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__0);
v___x_1754_ = l_Float_ofInt(v___x_1753_);
return v___x_1754_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5(void){
_start:
{
double v___x_1755_; lean_object* v___x_1756_; 
v___x_1755_ = lean_float_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__4, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__4_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__4);
v___x_1756_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1756_, 0, v___x_1755_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn(lean_object* v_f_1757_){
_start:
{
lean_object* v___f_1759_; lean_object* v___f_1760_; lean_object* v___x_1761_; 
v___f_1759_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__0));
v___f_1760_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1760_, 0, v_f_1757_);
lean_closure_set(v___f_1760_, 1, v___f_1759_);
v___x_1761_ = l_Lasm_JS_Function_ofFn(v___f_1760_);
if (lean_obj_tag(v___x_1761_) == 0)
{
lean_object* v_a_1762_; lean_object* v___x_1763_; 
v_a_1762_ = lean_ctor_get(v___x_1761_, 0);
lean_inc(v_a_1762_);
lean_dec_ref_known(v___x_1761_, 1);
v___x_1763_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc(v_a_1764_);
lean_dec_ref_known(v___x_1763_, 1);
v___x_1765_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1766_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1764_, v___x_1765_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v_a_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___y_1774_; uint8_t v___x_1801_; 
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_a_1767_);
lean_dec_ref_known(v___x_1766_, 1);
v___x_1768_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1762_);
v___x_1770_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1770_, 0, v_a_1762_);
lean_ctor_set(v___x_1770_, 1, v___x_1769_);
v___x_1771_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1772_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_1801_ = lean_uint8_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__2, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2);
if (v___x_1801_ == 0)
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__3, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3);
v___y_1774_ = v___x_1802_;
goto v___jp_1773_;
}
else
{
lean_object* v___x_1803_; 
v___x_1803_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__5, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5);
v___y_1774_ = v___x_1803_;
goto v___jp_1773_;
}
v___jp_1773_:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
lean_inc(v___y_1774_);
v___x_1775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1772_);
lean_ctor_set(v___x_1775_, 1, v___y_1774_);
v___x_1776_ = lean_box(0);
v___x_1777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1775_);
lean_ctor_set(v___x_1777_, 1, v___x_1776_);
v___x_1778_ = l_Lasm_JS_obj(v___x_1777_);
v___x_1779_ = lean_unsigned_to_nat(3u);
v___x_1780_ = lean_mk_empty_array_with_capacity(v___x_1779_);
v___x_1781_ = lean_array_push(v___x_1780_, v___x_1770_);
v___x_1782_ = lean_array_push(v___x_1781_, v___x_1771_);
v___x_1783_ = lean_array_push(v___x_1782_, v___x_1778_);
v___x_1784_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1767_, v___x_1768_, v___x_1783_);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1791_; 
v_isSharedCheck_1791_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1791_ == 0)
{
lean_object* v_unused_1792_; 
v_unused_1792_ = lean_ctor_get(v___x_1784_, 0);
lean_dec(v_unused_1792_);
v___x_1786_ = v___x_1784_;
v_isShared_1787_ = v_isSharedCheck_1791_;
goto v_resetjp_1785_;
}
else
{
lean_dec(v___x_1784_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1791_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v___x_1789_; 
if (v_isShared_1787_ == 0)
{
lean_ctor_set(v___x_1786_, 0, v_a_1762_);
v___x_1789_ = v___x_1786_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v_a_1762_);
v___x_1789_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
return v___x_1789_;
}
}
}
else
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
lean_dec(v_a_1762_);
v_a_1793_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1784_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1784_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
}
else
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
lean_dec(v_a_1762_);
v_a_1804_ = lean_ctor_get(v___x_1766_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1806_ = v___x_1766_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1766_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1807_ == 0)
{
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_a_1804_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
else
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
lean_dec(v_a_1762_);
v_a_1812_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___x_1763_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1763_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
else
{
lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1827_; 
v_a_1820_ = lean_ctor_get(v___x_1761_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1761_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1822_ = v___x_1761_;
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_dec(v___x_1761_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1825_; 
if (v_isShared_1823_ == 0)
{
v___x_1825_ = v___x_1822_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_a_1820_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofFn___boxed(lean_object* v_f_1828_, lean_object* v_a_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Lasm_JS_Deno_CronHandler_ofFn(v_f_1828_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0(lean_object* v_f_1831_, lean_object* v_x_1832_){
_start:
{
lean_object* v___x_1834_; 
v___x_1834_ = lean_apply_1(v_f_1831_, lean_box(0));
if (lean_obj_tag(v___x_1834_) == 0)
{
lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1842_; 
v_isSharedCheck_1842_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1842_ == 0)
{
lean_object* v_unused_1843_; 
v_unused_1843_ = lean_ctor_get(v___x_1834_, 0);
lean_dec(v_unused_1843_);
v___x_1836_ = v___x_1834_;
v_isShared_1837_ = v_isSharedCheck_1842_;
goto v_resetjp_1835_;
}
else
{
lean_dec(v___x_1834_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1842_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1838_; lean_object* v___x_1840_; 
v___x_1838_ = lean_box(0);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 0, v___x_1838_);
v___x_1840_ = v___x_1836_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v___x_1838_);
v___x_1840_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
return v___x_1840_;
}
}
}
else
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1851_; 
v_a_1844_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1846_ = v___x_1834_;
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v___x_1834_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1849_; 
if (v_isShared_1847_ == 0)
{
v___x_1849_ = v___x_1846_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_a_1844_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_1852_, lean_object* v_x_1853_, lean_object* v___y_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0(v_f_1852_, v_x_1853_);
lean_dec_ref(v_x_1853_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn(lean_object* v_f_1856_){
_start:
{
lean_object* v___f_1858_; lean_object* v___x_1859_; 
v___f_1858_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1858_, 0, v_f_1856_);
v___x_1859_ = l_Lasm_JS_Function_ofSyncFn(v___f_1858_);
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_object* v_a_1860_; lean_object* v___x_1861_; 
v_a_1860_ = lean_ctor_get(v___x_1859_, 0);
lean_inc(v_a_1860_);
lean_dec_ref_known(v___x_1859_, 1);
v___x_1861_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1861_) == 0)
{
lean_object* v_a_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v_a_1862_ = lean_ctor_get(v___x_1861_, 0);
lean_inc(v_a_1862_);
lean_dec_ref_known(v___x_1861_, 1);
v___x_1863_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1864_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1862_, v___x_1863_);
if (lean_obj_tag(v___x_1864_) == 0)
{
lean_object* v_a_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___y_1872_; uint8_t v___x_1899_; 
v_a_1865_ = lean_ctor_get(v___x_1864_, 0);
lean_inc(v_a_1865_);
lean_dec_ref_known(v___x_1864_, 1);
v___x_1866_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1867_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1860_);
v___x_1868_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1868_, 0, v_a_1860_);
lean_ctor_set(v___x_1868_, 1, v___x_1867_);
v___x_1869_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1870_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_1899_ = lean_uint8_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__2, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2);
if (v___x_1899_ == 0)
{
lean_object* v___x_1900_; 
v___x_1900_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__3, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3);
v___y_1872_ = v___x_1900_;
goto v___jp_1871_;
}
else
{
lean_object* v___x_1901_; 
v___x_1901_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__5, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5);
v___y_1872_ = v___x_1901_;
goto v___jp_1871_;
}
v___jp_1871_:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
lean_inc(v___y_1872_);
v___x_1873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1870_);
lean_ctor_set(v___x_1873_, 1, v___y_1872_);
v___x_1874_ = lean_box(0);
v___x_1875_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1873_);
lean_ctor_set(v___x_1875_, 1, v___x_1874_);
v___x_1876_ = l_Lasm_JS_obj(v___x_1875_);
v___x_1877_ = lean_unsigned_to_nat(3u);
v___x_1878_ = lean_mk_empty_array_with_capacity(v___x_1877_);
v___x_1879_ = lean_array_push(v___x_1878_, v___x_1868_);
v___x_1880_ = lean_array_push(v___x_1879_, v___x_1869_);
v___x_1881_ = lean_array_push(v___x_1880_, v___x_1876_);
v___x_1882_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1865_, v___x_1866_, v___x_1881_);
if (lean_obj_tag(v___x_1882_) == 0)
{
lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1889_; 
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1889_ == 0)
{
lean_object* v_unused_1890_; 
v_unused_1890_ = lean_ctor_get(v___x_1882_, 0);
lean_dec(v_unused_1890_);
v___x_1884_ = v___x_1882_;
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
else
{
lean_dec(v___x_1882_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1887_; 
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 0, v_a_1860_);
v___x_1887_ = v___x_1884_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_a_1860_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
return v___x_1887_;
}
}
}
else
{
lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1898_; 
lean_dec(v_a_1860_);
v_a_1891_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1893_ = v___x_1882_;
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1882_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1896_; 
if (v_isShared_1894_ == 0)
{
v___x_1896_ = v___x_1893_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_a_1891_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
return v___x_1896_;
}
}
}
}
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
lean_dec(v_a_1860_);
v_a_1902_ = lean_ctor_get(v___x_1864_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1864_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1864_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec(v_a_1860_);
v_a_1910_ = lean_ctor_get(v___x_1861_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1861_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1861_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1861_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
v_a_1918_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1859_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1859_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1923_; 
if (v_isShared_1921_ == 0)
{
v___x_1923_ = v___x_1920_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_a_1918_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronHandler_ofSyncFn___boxed(lean_object* v_f_1926_, lean_object* v_a_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l_Lasm_JS_Deno_CronHandler_ofSyncFn(v_f_1926_);
return v_res_1928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0(lean_object* v___x_1930_, lean_object* v___f_1931_, lean_object* v_d_1932_){
_start:
{
lean_object* v_backoffSchedule_1933_; lean_object* v_signal_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1951_; 
v_backoffSchedule_1933_ = lean_ctor_get(v_d_1932_, 0);
v_signal_1934_ = lean_ctor_get(v_d_1932_, 1);
v_isSharedCheck_1951_ = !lean_is_exclusive(v_d_1932_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1936_ = v_d_1932_;
v_isShared_1937_ = v_isSharedCheck_1951_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_signal_1934_);
lean_inc(v_backoffSchedule_1933_);
lean_dec(v_d_1932_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1951_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1941_; 
v___x_1938_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_1939_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1930_, v_backoffSchedule_1933_);
if (v_isShared_1937_ == 0)
{
lean_ctor_set(v___x_1936_, 1, v___x_1939_);
lean_ctor_set(v___x_1936_, 0, v___x_1938_);
v___x_1941_ = v___x_1936_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v___x_1938_);
lean_ctor_set(v_reuseFailAlloc_1950_, 1, v___x_1939_);
v___x_1941_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1942_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0___closed__0));
v___x_1943_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1931_, v_signal_1934_);
v___x_1944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1942_);
lean_ctor_set(v___x_1944_, 1, v___x_1943_);
v___x_1945_ = lean_unsigned_to_nat(2u);
v___x_1946_ = lean_mk_empty_array_with_capacity(v___x_1945_);
v___x_1947_ = lean_array_push(v___x_1946_, v___x_1941_);
v___x_1948_ = lean_array_push(v___x_1947_, v___x_1944_);
v___x_1949_ = l_Lasm_JS_Web_Support_fields(v___x_1948_);
lean_dec_ref(v___x_1948_);
return v___x_1949_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1(void){
_start:
{
lean_object* v___f_1953_; lean_object* v___x_1954_; lean_object* v___f_1955_; 
v___f_1953_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__0));
v___x_1954_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2, &l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2_once, _init_l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___closed__2);
v___f_1955_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0), 3, 2);
lean_closure_set(v___f_1955_, 0, v___x_1954_);
lean_closure_set(v___f_1955_, 1, v___f_1953_);
return v___f_1955_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCronWithOptionsOptions(void){
_start:
{
lean_object* v___f_1956_; 
v___f_1956_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1, &l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1_once, _init_l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___closed__1);
return v___f_1956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn(lean_object* v_f_1964_){
_start:
{
lean_object* v___f_1966_; lean_object* v___f_1967_; lean_object* v___x_1968_; 
v___f_1966_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__0));
v___f_1967_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1967_, 0, v_f_1964_);
lean_closure_set(v___f_1967_, 1, v___f_1966_);
v___x_1968_ = l_Lasm_JS_Function_ofFn(v___f_1967_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; lean_object* v___x_1970_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_a_1969_);
lean_dec_ref_known(v___x_1968_, 1);
v___x_1970_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_a_1971_);
lean_dec_ref_known(v___x_1970_, 1);
v___x_1972_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_1973_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1971_, v___x_1972_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___y_1981_; uint8_t v___x_2008_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
lean_inc(v_a_1974_);
lean_dec_ref_known(v___x_1973_, 1);
v___x_1975_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_1976_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_1969_);
v___x_1977_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1977_, 0, v_a_1969_);
lean_ctor_set(v___x_1977_, 1, v___x_1976_);
v___x_1978_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_1979_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_2008_ = lean_uint8_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__2, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2);
if (v___x_2008_ == 0)
{
lean_object* v___x_2009_; 
v___x_2009_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__3, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3);
v___y_1981_ = v___x_2009_;
goto v___jp_1980_;
}
else
{
lean_object* v___x_2010_; 
v___x_2010_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__5, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5);
v___y_1981_ = v___x_2010_;
goto v___jp_1980_;
}
v___jp_1980_:
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; 
lean_inc(v___y_1981_);
v___x_1982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1982_, 0, v___x_1979_);
lean_ctor_set(v___x_1982_, 1, v___y_1981_);
v___x_1983_ = lean_box(0);
v___x_1984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1982_);
lean_ctor_set(v___x_1984_, 1, v___x_1983_);
v___x_1985_ = l_Lasm_JS_obj(v___x_1984_);
v___x_1986_ = lean_unsigned_to_nat(3u);
v___x_1987_ = lean_mk_empty_array_with_capacity(v___x_1986_);
v___x_1988_ = lean_array_push(v___x_1987_, v___x_1977_);
v___x_1989_ = lean_array_push(v___x_1988_, v___x_1978_);
v___x_1990_ = lean_array_push(v___x_1989_, v___x_1985_);
v___x_1991_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1974_, v___x_1975_, v___x_1990_);
if (lean_obj_tag(v___x_1991_) == 0)
{
lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_1998_; 
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_1998_ == 0)
{
lean_object* v_unused_1999_; 
v_unused_1999_ = lean_ctor_get(v___x_1991_, 0);
lean_dec(v_unused_1999_);
v___x_1993_ = v___x_1991_;
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
else
{
lean_dec(v___x_1991_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1994_ == 0)
{
lean_ctor_set(v___x_1993_, 0, v_a_1969_);
v___x_1996_ = v___x_1993_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1969_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
else
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2007_; 
lean_dec(v_a_1969_);
v_a_2000_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_2002_ = v___x_1991_;
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___x_1991_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_2003_ == 0)
{
v___x_2005_ = v___x_2002_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_a_2000_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
}
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
lean_dec(v_a_1969_);
v_a_2011_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_1973_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_1973_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
else
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2026_; 
lean_dec(v_a_1969_);
v_a_2019_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2021_ = v___x_1970_;
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_1970_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2024_; 
if (v_isShared_2022_ == 0)
{
v___x_2024_ = v___x_2021_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v_a_2019_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
}
else
{
lean_object* v_a_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2034_; 
v_a_2027_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2029_ = v___x_1968_;
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_a_2027_);
lean_dec(v___x_1968_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2032_; 
if (v_isShared_2030_ == 0)
{
v___x_2032_ = v___x_2029_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_a_2027_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
return v___x_2032_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn___boxed(lean_object* v_f_2035_, lean_object* v_a_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lasm_JS_Deno_CronWithOptionsHandler_ofFn(v_f_2035_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn(lean_object* v_f_2038_){
_start:
{
lean_object* v___f_2040_; lean_object* v___x_2041_; 
v___f_2040_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_CronHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2040_, 0, v_f_2038_);
v___x_2041_ = l_Lasm_JS_Function_ofSyncFn(v___f_2040_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; lean_object* v___x_2043_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2041_, 1);
v___x_2043_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2043_) == 0)
{
lean_object* v_a_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
v_a_2044_ = lean_ctor_get(v___x_2043_, 0);
lean_inc(v_a_2044_);
lean_dec_ref_known(v___x_2043_, 1);
v___x_2045_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__1));
v___x_2046_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2044_, v___x_2045_);
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___y_2054_; uint8_t v___x_2081_; 
v_a_2047_ = lean_ctor_get(v___x_2046_, 0);
lean_inc(v_a_2047_);
lean_dec_ref_known(v___x_2046_, 1);
v___x_2048_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__2));
v___x_2049_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
lean_inc(v_a_2042_);
v___x_2050_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2050_, 0, v_a_2042_);
lean_ctor_set(v___x_2050_, 1, v___x_2049_);
v___x_2051_ = ((lean_object*)(l_Lasm_JS_Deno_KvListenQueueHandler_ofFn___closed__4));
v___x_2052_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_2081_ = lean_uint8_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__2, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__2_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__2);
if (v___x_2081_ == 0)
{
lean_object* v___x_2082_; 
v___x_2082_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__3, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__3_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__3);
v___y_2054_ = v___x_2082_;
goto v___jp_2053_;
}
else
{
lean_object* v___x_2083_; 
v___x_2083_ = lean_obj_once(&l_Lasm_JS_Deno_CronHandler_ofFn___closed__5, &l_Lasm_JS_Deno_CronHandler_ofFn___closed__5_once, _init_l_Lasm_JS_Deno_CronHandler_ofFn___closed__5);
v___y_2054_ = v___x_2083_;
goto v___jp_2053_;
}
v___jp_2053_:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
lean_inc(v___y_2054_);
v___x_2055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2052_);
lean_ctor_set(v___x_2055_, 1, v___y_2054_);
v___x_2056_ = lean_box(0);
v___x_2057_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
v___x_2058_ = l_Lasm_JS_obj(v___x_2057_);
v___x_2059_ = lean_unsigned_to_nat(3u);
v___x_2060_ = lean_mk_empty_array_with_capacity(v___x_2059_);
v___x_2061_ = lean_array_push(v___x_2060_, v___x_2050_);
v___x_2062_ = lean_array_push(v___x_2061_, v___x_2051_);
v___x_2063_ = lean_array_push(v___x_2062_, v___x_2058_);
v___x_2064_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2047_, v___x_2048_, v___x_2063_);
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2071_; 
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2071_ == 0)
{
lean_object* v_unused_2072_; 
v_unused_2072_ = lean_ctor_get(v___x_2064_, 0);
lean_dec(v_unused_2072_);
v___x_2066_ = v___x_2064_;
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
else
{
lean_dec(v___x_2064_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2069_; 
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 0, v_a_2042_);
v___x_2069_ = v___x_2066_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_a_2042_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
else
{
lean_object* v_a_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2080_; 
lean_dec(v_a_2042_);
v_a_2073_ = lean_ctor_get(v___x_2064_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2075_ = v___x_2064_;
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_a_2073_);
lean_dec(v___x_2064_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2078_; 
if (v_isShared_2076_ == 0)
{
v___x_2078_ = v___x_2075_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2073_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
}
}
else
{
lean_object* v_a_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2091_; 
lean_dec(v_a_2042_);
v_a_2084_ = lean_ctor_get(v___x_2046_, 0);
v_isSharedCheck_2091_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2091_ == 0)
{
v___x_2086_ = v___x_2046_;
v_isShared_2087_ = v_isSharedCheck_2091_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_a_2084_);
lean_dec(v___x_2046_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2091_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v___x_2089_; 
if (v_isShared_2087_ == 0)
{
v___x_2089_ = v___x_2086_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v_a_2084_);
v___x_2089_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
return v___x_2089_;
}
}
}
}
else
{
lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2099_; 
lean_dec(v_a_2042_);
v_a_2092_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2094_ = v___x_2043_;
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2043_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___x_2097_; 
if (v_isShared_2095_ == 0)
{
v___x_2097_ = v___x_2094_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_a_2092_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
}
else
{
lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2107_; 
v_a_2100_ = lean_ctor_get(v___x_2041_, 0);
v_isSharedCheck_2107_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2102_ = v___x_2041_;
v_isShared_2103_ = v_isSharedCheck_2107_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2041_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2107_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2105_; 
if (v_isShared_2103_ == 0)
{
v___x_2105_ = v___x_2102_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v_a_2100_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn___boxed(lean_object* v_f_2108_, lean_object* v_a_2109_){
_start:
{
lean_object* v_res_2110_; 
v_res_2110_ = l_Lasm_JS_Deno_CronWithOptionsHandler_ofSyncFn(v_f_2108_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_cursor(lean_object* v_self_2111_){
_start:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2113_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__1));
v___x_2114_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2111_, v___x_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_cursor___boxed(lean_object* v_self_2115_, lean_object* v_a_2116_){
_start:
{
lean_object* v_res_2117_; 
v_res_2117_ = l_Lasm_JS_Deno_KvListIterator_cursor(v_self_2115_);
return v_res_2117_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2118_; uint8_t v___x_2119_; uint64_t v___x_2120_; 
v___x_2118_ = 0ULL;
v___x_2119_ = 0;
v___x_2120_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_2119_, v___x_2118_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(lean_object* v_f_2122_, lean_object* v_args_2123_, lean_object* v_this_2124_){
_start:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; uint64_t v___x_2128_; lean_object* v___x_2129_; 
v___x_2126_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2127_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2127_, 0, v_f_2122_);
lean_ctor_set(v___x_2127_, 1, v___x_2126_);
v___x_2128_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__0);
v___x_2129_ = l_Lasm_JS_Value_invokeRaw(v___x_2127_, v_this_2124_, v_args_2123_, v___x_2128_);
if (lean_obj_tag(v___x_2129_) == 0)
{
lean_object* v_a_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
v_a_2130_ = lean_ctor_get(v___x_2129_, 0);
lean_inc(v_a_2130_);
lean_dec_ref_known(v___x_2129_, 1);
v___x_2131_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___closed__1));
v___x_2132_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2131_, v_a_2130_);
lean_dec(v_a_2130_);
return v___x_2132_;
}
else
{
lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2140_; 
v_a_2133_ = lean_ctor_get(v___x_2129_, 0);
v_isSharedCheck_2140_ = !lean_is_exclusive(v___x_2129_);
if (v_isSharedCheck_2140_ == 0)
{
v___x_2135_ = v___x_2129_;
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v___x_2129_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2138_; 
if (v_isShared_2136_ == 0)
{
v___x_2138_ = v___x_2135_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2139_; 
v_reuseFailAlloc_2139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2139_, 0, v_a_2133_);
v___x_2138_ = v_reuseFailAlloc_2139_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
return v___x_2138_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1___boxed(lean_object* v_f_2141_, lean_object* v_args_2142_, lean_object* v_this_2143_, lean_object* v_a_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(v_f_2141_, v_args_2142_, v_this_2143_);
return v_res_2145_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0(void){
_start:
{
uint8_t v___x_2146_; uint64_t v___x_2147_; 
v___x_2146_ = 1;
v___x_2147_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2146_);
return v___x_2147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(lean_object* v_o_2149_, lean_object* v_key_2150_){
_start:
{
lean_object* v___x_2152_; lean_object* v_k_2153_; lean_object* v___x_2154_; 
v___x_2152_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v_k_2153_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_k_2153_, 0, v_key_2150_);
lean_ctor_set(v_k_2153_, 1, v___x_2152_);
v___x_2154_ = l_Lasm_JS_Wire_encodeIO(v_k_2153_);
if (lean_obj_tag(v___x_2154_) == 0)
{
lean_object* v_a_2155_; uint32_t v___x_2156_; uint32_t v___x_2157_; uint64_t v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v_a_2155_ = lean_ctor_get(v___x_2154_, 0);
lean_inc(v_a_2155_);
lean_dec_ref_known(v___x_2154_, 1);
v___x_2156_ = 203;
v___x_2157_ = lasm_js_value_handle(v_o_2149_);
v___x_2158_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0);
v___x_2159_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2159_, 0, v_o_2149_);
lean_ctor_set(v___x_2159_, 1, v___x_2152_);
v___x_2160_ = lean_unsigned_to_nat(2u);
v___x_2161_ = lean_mk_empty_array_with_capacity(v___x_2160_);
lean_inc_ref(v_k_2153_);
v___x_2162_ = lean_array_push(v___x_2161_, v_k_2153_);
v___x_2163_ = lean_array_push(v___x_2162_, v___x_2159_);
v___x_2164_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2163_);
v___x_2165_ = lasm_js_call(v___x_2156_, v___x_2157_, v___x_2158_, v_a_2155_, v___x_2164_);
lean_dec_ref_known(v___x_2164_, 1);
lean_dec(v_a_2155_);
if (lean_obj_tag(v___x_2165_) == 0)
{
lean_object* v_a_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
v_a_2166_ = lean_ctor_get(v___x_2165_, 0);
lean_inc(v_a_2166_);
lean_dec_ref_known(v___x_2165_, 1);
v___x_2167_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__1));
v___x_2168_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2153_);
v___x_2169_ = lean_string_append(v___x_2167_, v___x_2168_);
lean_dec_ref(v___x_2168_);
v___x_2170_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2169_, v_a_2166_);
lean_dec(v_a_2166_);
lean_dec_ref(v___x_2169_);
return v___x_2170_;
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2178_; 
lean_dec_ref_known(v_k_2153_, 2);
v_a_2171_ = lean_ctor_get(v___x_2165_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2165_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2173_ = v___x_2165_;
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2165_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v___x_2176_; 
if (v_isShared_2174_ == 0)
{
v___x_2176_ = v___x_2173_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2171_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
else
{
lean_object* v_a_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2186_; 
lean_dec_ref_known(v_k_2153_, 2);
lean_dec(v_o_2149_);
v_a_2179_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2186_ == 0)
{
v___x_2181_ = v___x_2154_;
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_a_2179_);
lean_dec(v___x_2154_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2184_; 
if (v_isShared_2182_ == 0)
{
v___x_2184_ = v___x_2181_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_a_2179_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___boxed(lean_object* v_o_2187_, lean_object* v_key_2188_, lean_object* v_a_2189_){
_start:
{
lean_object* v_res_2190_; 
v_res_2190_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(v_o_2187_, v_key_2188_);
return v_res_2190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_iterator(lean_object* v_self_2195_){
_start:
{
lean_object* v___x_2197_; 
v___x_2197_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2198_);
lean_dec_ref_known(v___x_2197_, 1);
v___x_2199_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__0));
v___x_2200_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2198_, v___x_2199_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2201_);
lean_dec_ref_known(v___x_2200_, 1);
v___x_2202_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__1));
v___x_2203_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2201_, v___x_2202_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v_a_2204_; lean_object* v___x_2205_; 
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
lean_inc(v_a_2204_);
lean_dec_ref_known(v___x_2203_, 1);
lean_inc(v_self_2195_);
v___x_2205_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0(v_self_2195_, v_a_2204_);
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v_a_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
lean_inc(v_a_2206_);
lean_dec_ref_known(v___x_2205_, 1);
v___x_2207_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v___x_2208_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2209_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2209_, 0, v_self_2195_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2210_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__1(v_a_2206_, v___x_2207_, v___x_2209_);
if (lean_obj_tag(v___x_2210_) == 0)
{
lean_object* v_a_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2218_; 
v_a_2211_ = lean_ctor_get(v___x_2210_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2213_ = v___x_2210_;
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_a_2211_);
lean_dec(v___x_2210_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2216_; 
if (v_isShared_2214_ == 0)
{
v___x_2216_ = v___x_2213_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_a_2211_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
else
{
lean_object* v_a_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2226_; 
v_a_2219_ = lean_ctor_get(v___x_2210_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2221_ = v___x_2210_;
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_a_2219_);
lean_dec(v___x_2210_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2224_; 
if (v_isShared_2222_ == 0)
{
v___x_2224_ = v___x_2221_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_a_2219_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
else
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
lean_dec(v_self_2195_);
v_a_2227_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v___x_2205_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2205_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2232_; 
if (v_isShared_2230_ == 0)
{
v___x_2232_ = v___x_2229_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2227_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
lean_dec(v_self_2195_);
v_a_2235_ = lean_ctor_get(v___x_2203_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2203_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2203_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
else
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2250_; 
lean_dec(v_self_2195_);
v_a_2243_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2245_ = v___x_2200_;
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2200_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2248_; 
if (v_isShared_2246_ == 0)
{
v___x_2248_ = v___x_2245_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2243_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
}
else
{
lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2258_; 
lean_dec(v_self_2195_);
v_a_2251_ = lean_ctor_get(v___x_2197_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2197_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2253_ = v___x_2197_;
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_dec(v___x_2197_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2256_; 
if (v_isShared_2254_ == 0)
{
v___x_2256_ = v___x_2253_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2251_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_iterator___boxed(lean_object* v_self_2259_, lean_object* v_a_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Lasm_JS_Deno_KvListIterator_iterator(v_self_2259_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0(lean_object* v_x_2262_){
_start:
{
if (lean_obj_tag(v_x_2262_) == 0)
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2272_; 
v_a_2264_ = lean_ctor_get(v_x_2262_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v_x_2262_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2266_ = v_x_2262_;
v_isShared_2267_ = v_isSharedCheck_2272_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v_x_2262_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2272_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2269_; 
if (v_isShared_2267_ == 0)
{
v___x_2269_ = v___x_2266_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_a_2264_);
v___x_2269_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
lean_object* v___x_2270_; 
v___x_2270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
return v___x_2270_;
}
}
}
else
{
lean_object* v_a_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2282_; 
v_a_2273_ = lean_ctor_get(v_x_2262_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v_x_2262_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2275_ = v_x_2262_;
v_isShared_2276_ = v_isSharedCheck_2282_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_a_2273_);
lean_dec(v_x_2262_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2282_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2277_; lean_object* v___x_2279_; 
v___x_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2277_, 0, v_a_2273_);
if (v_isShared_2276_ == 0)
{
lean_ctor_set(v___x_2275_, 0, v___x_2277_);
v___x_2279_ = v___x_2275_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v___x_2277_);
v___x_2279_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
lean_object* v___x_2280_; 
v___x_2280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2279_);
return v___x_2280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0___boxed(lean_object* v_x_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v_res_2285_; 
v_res_2285_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__0(v_x_2283_);
return v_res_2285_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4(void){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2290_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2291_ = lean_string_utf8_byte_size(v___x_2290_);
return v___x_2291_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5(void){
_start:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; uint8_t v___x_2294_; 
v___x_2292_ = lean_unsigned_to_nat(0u);
v___x_2293_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__4);
v___x_2294_ = lean_nat_dec_eq(v___x_2293_, v___x_2292_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(lean_object* v_d_2299_, lean_object* v_key_2300_){
_start:
{
if (lean_obj_tag(v_d_2299_) == 8)
{
lean_object* v___x_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2332_; 
v___x_2301_ = l_Lasm_JS_Data_field(v_d_2299_, v_key_2300_);
v_isSharedCheck_2332_ = !lean_is_exclusive(v_d_2299_);
if (v_isSharedCheck_2332_ == 0)
{
lean_object* v_unused_2333_; 
v_unused_2333_ = lean_ctor_get(v_d_2299_, 0);
lean_dec(v_unused_2333_);
v___x_2303_ = v_d_2299_;
v_isShared_2304_ = v_isSharedCheck_2332_;
goto v_resetjp_2302_;
}
else
{
lean_dec(v_d_2299_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2332_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
if (lean_obj_tag(v___x_2301_) == 4)
{
lean_object* v_s_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2312_; 
lean_del_object(v___x_2303_);
v_s_2305_ = lean_ctor_get(v___x_2301_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2307_ = v___x_2301_;
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_s_2305_);
lean_dec(v___x_2301_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
lean_ctor_set_tag(v___x_2307_, 1);
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_s_2305_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
else
{
lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; uint8_t v___x_2323_; 
v___x_2313_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_2314_ = lean_string_append(v___x_2313_, v_key_2300_);
v___x_2315_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_2316_ = lean_string_append(v___x_2314_, v___x_2315_);
v___x_2317_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__2));
v___x_2318_ = lean_string_append(v___x_2316_, v___x_2317_);
v___x_2319_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
v___x_2320_ = lean_string_append(v___x_2318_, v___x_2319_);
v___x_2321_ = l_Lasm_JS_Data_describe(v___x_2301_);
v___x_2322_ = lean_string_append(v___x_2320_, v___x_2321_);
lean_dec_ref(v___x_2321_);
v___x_2323_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5);
if (v___x_2323_ == 0)
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2327_; 
v___x_2324_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6));
v___x_2325_ = lean_string_append(v___x_2322_, v___x_2324_);
if (v_isShared_2304_ == 0)
{
lean_ctor_set_tag(v___x_2303_, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2325_);
v___x_2327_ = v___x_2303_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v___x_2325_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
else
{
lean_object* v___x_2330_; 
if (v_isShared_2304_ == 0)
{
lean_ctor_set_tag(v___x_2303_, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2322_);
v___x_2330_ = v___x_2303_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v___x_2322_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
}
else
{
lean_object* v___x_2334_; 
lean_dec(v_d_2299_);
v___x_2334_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__8));
return v___x_2334_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_d_2335_, lean_object* v_key_2336_){
_start:
{
lean_object* v_res_2337_; 
v_res_2337_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_2335_, v_key_2336_);
lean_dec_ref(v_key_2336_);
return v_res_2337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5(size_t v_sz_2340_, size_t v_i_2341_, lean_object* v_bs_2342_){
_start:
{
uint8_t v___x_2343_; 
v___x_2343_ = lean_usize_dec_lt(v_i_2341_, v_sz_2340_);
if (v___x_2343_ == 0)
{
lean_object* v___x_2344_; 
v___x_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2344_, 0, v_bs_2342_);
return v___x_2344_;
}
else
{
lean_object* v_v_2345_; lean_object* v___x_2346_; lean_object* v_bs_x27_2347_; lean_object* v_a_2349_; 
v_v_2345_ = lean_array_uget(v_bs_2342_, v_i_2341_);
v___x_2346_ = lean_unsigned_to_nat(0u);
v_bs_x27_2347_ = lean_array_uset(v_bs_2342_, v_i_2341_, v___x_2346_);
switch(lean_obj_tag(v_v_2345_))
{
case 6:
{
lean_object* v_b_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2361_; 
v_b_2354_ = lean_ctor_get(v_v_2345_, 0);
v_isSharedCheck_2361_ = !lean_is_exclusive(v_v_2345_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2356_ = v_v_2345_;
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_b_2354_);
lean_dec(v_v_2345_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2359_; 
if (v_isShared_2357_ == 0)
{
lean_ctor_set_tag(v___x_2356_, 0);
v___x_2359_ = v___x_2356_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v_b_2354_);
v___x_2359_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
v_a_2349_ = v___x_2359_;
goto v___jp_2348_;
}
}
}
case 4:
{
lean_object* v_s_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2369_; 
v_s_2362_ = lean_ctor_get(v_v_2345_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v_v_2345_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2364_ = v_v_2345_;
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_s_2362_);
lean_dec(v_v_2345_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2367_; 
if (v_isShared_2365_ == 0)
{
lean_ctor_set_tag(v___x_2364_, 1);
v___x_2367_ = v___x_2364_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_s_2362_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
v_a_2349_ = v___x_2367_;
goto v___jp_2348_;
}
}
}
case 3:
{
double v_n_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
v_n_2370_ = lean_ctor_get_float(v_v_2345_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v_v_2345_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v_v_2345_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_dec(v_v_2345_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
lean_ctor_set_tag(v___x_2372_, 2);
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(2, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2376_, 0, v_n_2370_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
v_a_2349_ = v___x_2375_;
goto v___jp_2348_;
}
}
}
case 5:
{
lean_object* v_i_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
v_i_2378_ = lean_ctor_get(v_v_2345_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v_v_2345_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v_v_2345_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_i_2378_);
lean_dec(v_v_2345_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2383_; 
if (v_isShared_2381_ == 0)
{
lean_ctor_set_tag(v___x_2380_, 3);
v___x_2383_ = v___x_2380_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_i_2378_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
v_a_2349_ = v___x_2383_;
goto v___jp_2348_;
}
}
}
case 2:
{
uint8_t v_b_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
v_b_2386_ = lean_ctor_get_uint8(v_v_2345_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v_v_2345_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v_v_2345_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_dec(v_v_2345_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2391_; 
if (v_isShared_2389_ == 0)
{
lean_ctor_set_tag(v___x_2388_, 4);
v___x_2391_ = v___x_2388_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(4, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_2392_, 0, v_b_2386_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
v_a_2349_ = v___x_2391_;
goto v___jp_2348_;
}
}
}
default: 
{
lean_object* v___x_2394_; 
lean_dec_ref(v_bs_x27_2347_);
lean_dec(v_v_2345_);
v___x_2394_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5___closed__0));
return v___x_2394_;
}
}
v___jp_2348_:
{
size_t v___x_2350_; size_t v___x_2351_; lean_object* v___x_2352_; 
v___x_2350_ = ((size_t)1ULL);
v___x_2351_ = lean_usize_add(v_i_2341_, v___x_2350_);
v___x_2352_ = lean_array_uset(v_bs_x27_2347_, v_i_2341_, v_a_2349_);
v_i_2341_ = v___x_2351_;
v_bs_2342_ = v___x_2352_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object* v_sz_2395_, lean_object* v_i_2396_, lean_object* v_bs_2397_){
_start:
{
size_t v_sz_boxed_2398_; size_t v_i_boxed_2399_; lean_object* v_res_2400_; 
v_sz_boxed_2398_ = lean_unbox_usize(v_sz_2395_);
lean_dec(v_sz_2395_);
v_i_boxed_2399_ = lean_unbox_usize(v_i_2396_);
lean_dec(v_i_2396_);
v_res_2400_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5(v_sz_boxed_2398_, v_i_boxed_2399_, v_bs_2397_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_2408_, lean_object* v_key_2409_){
_start:
{
if (lean_obj_tag(v_d_2408_) == 8)
{
lean_object* v___x_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2454_; 
v___x_2410_ = l_Lasm_JS_Data_field(v_d_2408_, v_key_2409_);
v_isSharedCheck_2454_ = !lean_is_exclusive(v_d_2408_);
if (v_isSharedCheck_2454_ == 0)
{
lean_object* v_unused_2455_; 
v_unused_2455_ = lean_ctor_get(v_d_2408_, 0);
lean_dec(v_unused_2455_);
v___x_2412_ = v_d_2408_;
v_isShared_2413_ = v_isSharedCheck_2454_;
goto v_resetjp_2411_;
}
else
{
lean_dec(v_d_2408_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2454_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v_a_2415_; 
if (lean_obj_tag(v___x_2410_) == 7)
{
lean_object* v_items_2440_; size_t v_sz_2441_; size_t v___x_2442_; lean_object* v___x_2443_; 
v_items_2440_ = lean_ctor_get(v___x_2410_, 0);
lean_inc_ref(v_items_2440_);
v_sz_2441_ = lean_array_size(v_items_2440_);
v___x_2442_ = ((size_t)0ULL);
v___x_2443_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3_spec__5(v_sz_2441_, v___x_2442_, v_items_2440_);
if (lean_obj_tag(v___x_2443_) == 0)
{
lean_object* v_a_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; uint8_t v___x_2448_; 
v_a_2444_ = lean_ctor_get(v___x_2443_, 0);
lean_inc(v_a_2444_);
lean_dec_ref_known(v___x_2443_, 1);
v___x_2445_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__3));
v___x_2446_ = lean_string_utf8_byte_size(v_a_2444_);
v___x_2447_ = lean_unsigned_to_nat(0u);
v___x_2448_ = lean_nat_dec_eq(v___x_2446_, v___x_2447_);
if (v___x_2448_ == 0)
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2449_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_2450_ = lean_string_append(v___x_2449_, v_a_2444_);
lean_dec(v_a_2444_);
v___x_2451_ = lean_string_append(v___x_2445_, v___x_2450_);
lean_dec_ref(v___x_2450_);
v_a_2415_ = v___x_2451_;
goto v___jp_2414_;
}
else
{
lean_dec(v_a_2444_);
v_a_2415_ = v___x_2445_;
goto v___jp_2414_;
}
}
else
{
if (lean_obj_tag(v___x_2443_) == 0)
{
lean_object* v_a_2452_; 
v_a_2452_ = lean_ctor_get(v___x_2443_, 0);
lean_inc(v_a_2452_);
lean_dec_ref_known(v___x_2443_, 1);
v_a_2415_ = v_a_2452_;
goto v___jp_2414_;
}
else
{
lean_dec_ref_known(v___x_2410_, 1);
lean_del_object(v___x_2412_);
return v___x_2443_;
}
}
}
else
{
lean_object* v___x_2453_; 
v___x_2453_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v_a_2415_ = v___x_2453_;
goto v___jp_2414_;
}
v___jp_2414_:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; uint8_t v___x_2428_; 
v___x_2416_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_2417_ = lean_string_append(v___x_2416_, v_key_2409_);
v___x_2418_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_2419_ = lean_string_append(v___x_2417_, v___x_2418_);
v___x_2420_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__0));
v___x_2421_ = lean_string_append(v___x_2419_, v___x_2420_);
v___x_2422_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
v___x_2423_ = lean_string_append(v___x_2421_, v___x_2422_);
v___x_2424_ = l_Lasm_JS_Data_describe(v___x_2410_);
v___x_2425_ = lean_string_append(v___x_2423_, v___x_2424_);
lean_dec_ref(v___x_2424_);
v___x_2426_ = lean_string_utf8_byte_size(v_a_2415_);
v___x_2427_ = lean_unsigned_to_nat(0u);
v___x_2428_ = lean_nat_dec_eq(v___x_2426_, v___x_2427_);
if (v___x_2428_ == 0)
{
lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2435_; 
v___x_2429_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_2430_ = lean_string_append(v___x_2429_, v_a_2415_);
lean_dec_ref(v_a_2415_);
v___x_2431_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_2432_ = lean_string_append(v___x_2430_, v___x_2431_);
v___x_2433_ = lean_string_append(v___x_2425_, v___x_2432_);
lean_dec_ref(v___x_2432_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set_tag(v___x_2412_, 0);
lean_ctor_set(v___x_2412_, 0, v___x_2433_);
v___x_2435_ = v___x_2412_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v___x_2433_);
v___x_2435_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
return v___x_2435_;
}
}
else
{
lean_object* v___x_2438_; 
lean_dec_ref(v_a_2415_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set_tag(v___x_2412_, 0);
lean_ctor_set(v___x_2412_, 0, v___x_2425_);
v___x_2438_ = v___x_2412_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v___x_2425_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
}
}
}
else
{
lean_object* v___x_2456_; 
lean_dec(v_d_2408_);
v___x_2456_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__5));
return v___x_2456_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_2457_, lean_object* v_key_2458_){
_start:
{
lean_object* v_res_2459_; 
v_res_2459_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_2457_, v_key_2458_);
lean_dec_ref(v_key_2458_);
return v_res_2459_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6(void){
_start:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2466_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__5));
v___x_2467_ = lean_unsigned_to_nat(46u);
v___x_2468_ = lean_unsigned_to_nat(193u);
v___x_2469_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__4));
v___x_2470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__3));
v___x_2471_ = l_mkPanicMessageWithDecl(v___x_2470_, v___x_2469_, v___x_2468_, v___x_2467_, v___x_2466_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(lean_object* v_context_2473_, lean_object* v_d_2474_){
_start:
{
lean_object* v___y_2477_; lean_object* v___y_2478_; lean_object* v___y_2483_; lean_object* v_received_2484_; lean_object* v___y_2503_; lean_object* v_a_2506_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2530_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
lean_inc(v_d_2474_);
v___x_2531_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_2474_, v___x_2530_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v_a_2532_; 
v_a_2532_ = lean_ctor_get(v___x_2531_, 0);
lean_inc(v_a_2532_);
lean_dec_ref_known(v___x_2531_, 1);
v_a_2506_ = v_a_2532_;
goto v___jp_2505_;
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v_a_2533_ = lean_ctor_get(v___x_2531_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2531_, 1);
v___x_2534_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
lean_inc(v_d_2474_);
v___x_2535_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_2474_, v___x_2534_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; 
lean_dec(v_a_2533_);
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_a_2536_);
lean_dec_ref_known(v___x_2535_, 1);
v_a_2506_ = v_a_2536_;
goto v___jp_2505_;
}
else
{
lean_object* v_a_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
v_a_2537_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_a_2537_);
lean_dec_ref_known(v___x_2535_, 1);
v___x_2538_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_d_2474_);
v___x_2539_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_2474_, v___x_2538_);
if (lean_obj_tag(v___x_2539_) == 0)
{
lean_object* v_a_2540_; 
lean_dec(v_a_2537_);
lean_dec(v_a_2533_);
v_a_2540_ = lean_ctor_get(v___x_2539_, 0);
lean_inc(v_a_2540_);
lean_dec_ref_known(v___x_2539_, 1);
v_a_2506_ = v_a_2540_;
goto v___jp_2505_;
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2549_; 
lean_dec(v_d_2474_);
v_a_2541_ = lean_ctor_get(v___x_2539_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2539_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2543_ = v___x_2539_;
v_isShared_2544_ = v_isSharedCheck_2549_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2539_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2549_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2545_; lean_object* v___x_2547_; 
v___x_2545_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2545_, 0, v_a_2533_);
lean_ctor_set(v___x_2545_, 1, v_a_2537_);
lean_ctor_set(v___x_2545_, 2, v_a_2541_);
if (v_isShared_2544_ == 0)
{
lean_ctor_set_tag(v___x_2543_, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2545_);
v___x_2547_ = v___x_2543_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v___x_2545_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
}
v___jp_2476_:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2479_ = lean_string_append(v___y_2477_, v___y_2478_);
lean_dec_ref(v___y_2478_);
v___x_2480_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2479_);
v___x_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2480_);
return v___x_2481_;
}
v___jp_2482_:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; uint8_t v___x_2496_; 
v___x_2485_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_2486_ = lean_string_append(v___x_2485_, v_context_2473_);
v___x_2487_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_2488_ = lean_string_append(v___x_2486_, v___x_2487_);
v___x_2489_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___closed__2));
v___x_2490_ = lean_string_append(v___x_2488_, v___x_2489_);
v___x_2491_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_2492_ = lean_string_append(v___x_2490_, v___x_2491_);
v___x_2493_ = lean_string_append(v___x_2492_, v_received_2484_);
lean_dec_ref(v_received_2484_);
v___x_2494_ = lean_string_utf8_byte_size(v___y_2483_);
v___x_2495_ = lean_unsigned_to_nat(0u);
v___x_2496_ = lean_nat_dec_eq(v___x_2494_, v___x_2495_);
if (v___x_2496_ == 0)
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2497_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_2498_ = lean_string_append(v___x_2497_, v___y_2483_);
lean_dec_ref(v___y_2483_);
v___x_2499_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_2500_ = lean_string_append(v___x_2498_, v___x_2499_);
v___y_2477_ = v___x_2493_;
v___y_2478_ = v___x_2500_;
goto v___jp_2476_;
}
else
{
lean_object* v___x_2501_; 
lean_dec_ref(v___y_2483_);
v___x_2501_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_2477_ = v___x_2493_;
v___y_2478_ = v___x_2501_;
goto v___jp_2476_;
}
}
v___jp_2502_:
{
lean_object* v___x_2504_; 
v___x_2504_ = l_Lasm_JS_Data_describe(v_d_2474_);
v___y_2483_ = v___y_2503_;
v_received_2484_ = v___x_2504_;
goto v___jp_2482_;
}
v___jp_2505_:
{
if (lean_obj_tag(v_d_2474_) == 9)
{
lean_object* v_value_2507_; lean_object* v_description_2508_; lean_object* v___x_2509_; uint8_t v___x_2510_; 
v_value_2507_ = lean_ctor_get(v_d_2474_, 0);
v_description_2508_ = lean_ctor_get(v_d_2474_, 1);
v___x_2509_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2510_ = lean_string_dec_eq(v_description_2508_, v___x_2509_);
if (v___x_2510_ == 0)
{
v___y_2503_ = v_a_2506_;
goto v___jp_2502_;
}
else
{
lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2527_; 
lean_inc(v_value_2507_);
v_isSharedCheck_2527_ = !lean_is_exclusive(v_d_2474_);
if (v_isSharedCheck_2527_ == 0)
{
lean_object* v_unused_2528_; lean_object* v_unused_2529_; 
v_unused_2528_ = lean_ctor_get(v_d_2474_, 1);
lean_dec(v_unused_2528_);
v_unused_2529_ = lean_ctor_get(v_d_2474_, 0);
lean_dec(v_unused_2529_);
v___x_2512_ = v_d_2474_;
v_isShared_2513_ = v_isSharedCheck_2527_;
goto v_resetjp_2511_;
}
else
{
lean_dec(v_d_2474_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2527_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
uint32_t v___x_2514_; uint64_t v___x_2515_; lean_object* v___x_2517_; 
v___x_2514_ = 206;
v___x_2515_ = 0ULL;
lean_inc(v_value_2507_);
if (v_isShared_2513_ == 0)
{
lean_ctor_set(v___x_2512_, 1, v___x_2509_);
v___x_2517_ = v___x_2512_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_value_2507_);
lean_ctor_set(v_reuseFailAlloc_2526_, 1, v___x_2509_);
v___x_2517_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
uint32_t v___x_2518_; lean_object* v___x_2519_; 
v___x_2518_ = lasm_js_value_handle(v_value_2507_);
lean_dec(v_value_2507_);
v___x_2519_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2514_, v___x_2515_, v___x_2517_, v___x_2518_);
lean_dec_ref(v___x_2517_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v_a_2520_; uint8_t v___x_2521_; 
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
lean_inc(v_a_2520_);
lean_dec_ref_known(v___x_2519_, 1);
v___x_2521_ = lean_string_validate_utf8(v_a_2520_);
if (v___x_2521_ == 0)
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
lean_dec(v_a_2520_);
v___x_2522_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_2523_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2522_);
v___y_2483_ = v_a_2506_;
v_received_2484_ = v___x_2523_;
goto v___jp_2482_;
}
else
{
lean_object* v___x_2524_; 
v___x_2524_ = lean_string_from_utf8_unchecked(v_a_2520_);
v___y_2483_ = v_a_2506_;
v_received_2484_ = v___x_2524_;
goto v___jp_2482_;
}
}
else
{
lean_object* v___x_2525_; 
lean_dec_ref_known(v___x_2519_, 1);
v___x_2525_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_2483_ = v_a_2506_;
v_received_2484_ = v___x_2525_;
goto v___jp_2482_;
}
}
}
}
}
else
{
v___y_2503_ = v_a_2506_;
goto v___jp_2502_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2550_, lean_object* v_d_2551_, lean_object* v_a_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(v_context_2550_, v_d_2551_);
lean_dec_ref(v_context_2550_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(lean_object* v_context_2554_, lean_object* v_bytes_2555_){
_start:
{
lean_object* v___x_2557_; 
v___x_2557_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2555_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2559_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
lean_inc(v_a_2558_);
lean_dec_ref_known(v___x_2557_, 1);
v___x_2559_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1(v_context_2554_, v_a_2558_);
return v___x_2559_;
}
else
{
lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2567_; 
v_a_2560_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2567_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2562_ = v___x_2557_;
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v___x_2557_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2565_; 
if (v_isShared_2563_ == 0)
{
v___x_2565_ = v___x_2562_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_a_2560_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
return v___x_2565_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0___boxed(lean_object* v_context_2568_, lean_object* v_bytes_2569_, lean_object* v_a_2570_){
_start:
{
lean_object* v_res_2571_; 
v_res_2571_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(v_context_2568_, v_bytes_2569_);
lean_dec_ref(v_bytes_2569_);
lean_dec_ref(v_context_2568_);
return v_res_2571_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0(void){
_start:
{
uint8_t v___x_2572_; uint64_t v___x_2573_; 
v___x_2572_ = 0;
v___x_2573_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2572_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(lean_object* v_o_2574_, lean_object* v_key_2575_){
_start:
{
lean_object* v_k_2577_; lean_object* v___x_2578_; 
v_k_2577_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2577_, 0, v_key_2575_);
v___x_2578_ = l_Lasm_JS_Wire_encodeIO(v_k_2577_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_a_2579_; uint32_t v___x_2580_; uint32_t v___x_2581_; uint64_t v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2579_);
lean_dec_ref_known(v___x_2578_, 1);
v___x_2580_ = 203;
v___x_2581_ = lasm_js_value_handle(v_o_2574_);
v___x_2582_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
v___x_2583_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_2584_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2584_, 0, v_o_2574_);
lean_ctor_set(v___x_2584_, 1, v___x_2583_);
v___x_2585_ = lean_unsigned_to_nat(2u);
v___x_2586_ = lean_mk_empty_array_with_capacity(v___x_2585_);
lean_inc_ref(v_k_2577_);
v___x_2587_ = lean_array_push(v___x_2586_, v_k_2577_);
v___x_2588_ = lean_array_push(v___x_2587_, v___x_2584_);
v___x_2589_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2588_);
v___x_2590_ = lasm_js_call(v___x_2580_, v___x_2581_, v___x_2582_, v_a_2579_, v___x_2589_);
lean_dec_ref_known(v___x_2589_, 1);
lean_dec(v_a_2579_);
if (lean_obj_tag(v___x_2590_) == 0)
{
lean_object* v_a_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
lean_inc(v_a_2591_);
lean_dec_ref_known(v___x_2590_, 1);
v___x_2592_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__1));
v___x_2593_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2577_);
v___x_2594_ = lean_string_append(v___x_2592_, v___x_2593_);
lean_dec_ref(v___x_2593_);
v___x_2595_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0(v___x_2594_, v_a_2591_);
lean_dec(v_a_2591_);
lean_dec_ref(v___x_2594_);
return v___x_2595_;
}
else
{
lean_object* v_a_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2603_; 
lean_dec_ref_known(v_k_2577_, 1);
v_a_2596_ = lean_ctor_get(v___x_2590_, 0);
v_isSharedCheck_2603_ = !lean_is_exclusive(v___x_2590_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2598_ = v___x_2590_;
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_a_2596_);
lean_dec(v___x_2590_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2601_; 
if (v_isShared_2599_ == 0)
{
v___x_2601_ = v___x_2598_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v_a_2596_);
v___x_2601_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
return v___x_2601_;
}
}
}
}
else
{
lean_object* v_a_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2611_; 
lean_dec_ref_known(v_k_2577_, 1);
lean_dec(v_o_2574_);
v_a_2604_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2606_ = v___x_2578_;
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_a_2604_);
lean_dec(v___x_2578_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2609_; 
if (v_isShared_2607_ == 0)
{
v___x_2609_ = v___x_2606_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_a_2604_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___boxed(lean_object* v_o_2612_, lean_object* v_key_2613_, lean_object* v_a_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(v_o_2612_, v_key_2613_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1(lean_object* v___f_2620_, lean_object* v_a_2621_, lean_object* v_x_2622_){
_start:
{
if (lean_obj_tag(v_x_2622_) == 0)
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2632_; 
lean_dec(v_a_2621_);
lean_dec_ref(v___f_2620_);
v_a_2624_ = lean_ctor_get(v_x_2622_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v_x_2622_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2626_ = v_x_2622_;
v_isShared_2627_ = v_isSharedCheck_2632_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v_x_2622_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2632_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2629_; 
if (v_isShared_2627_ == 0)
{
v___x_2629_ = v___x_2626_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_a_2624_);
v___x_2629_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
lean_object* v___x_2630_; 
v___x_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2629_);
return v___x_2630_;
}
}
}
else
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2655_; 
v_a_2633_ = lean_ctor_get(v_x_2622_, 0);
v_isSharedCheck_2655_ = !lean_is_exclusive(v_x_2622_);
if (v_isSharedCheck_2655_ == 0)
{
v___x_2635_ = v_x_2622_;
v_isShared_2636_ = v_isSharedCheck_2655_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v_x_2622_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2655_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
uint8_t v___x_2637_; 
v___x_2637_ = lean_unbox(v_a_2633_);
if (v___x_2637_ == 0)
{
lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v_val_2641_; lean_object* v___x_2645_; 
v___x_2638_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_2639_ = lean_unsigned_to_nat(0u);
v___x_2645_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0(v_a_2621_, v___x_2638_);
if (lean_obj_tag(v___x_2645_) == 0)
{
lean_object* v_a_2646_; lean_object* v___x_2648_; 
v_a_2646_ = lean_ctor_get(v___x_2645_, 0);
lean_inc(v_a_2646_);
lean_dec_ref_known(v___x_2645_, 1);
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 0, v_a_2646_);
v___x_2648_ = v___x_2635_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2646_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
v_val_2641_ = v___x_2648_;
goto v___jp_2640_;
}
}
else
{
lean_object* v_a_2650_; lean_object* v___x_2652_; 
v_a_2650_ = lean_ctor_get(v___x_2645_, 0);
lean_inc(v_a_2650_);
lean_dec_ref_known(v___x_2645_, 1);
if (v_isShared_2636_ == 0)
{
lean_ctor_set_tag(v___x_2635_, 0);
lean_ctor_set(v___x_2635_, 0, v_a_2650_);
v___x_2652_ = v___x_2635_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_a_2650_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
v_val_2641_ = v___x_2652_;
goto v___jp_2640_;
}
}
v___jp_2640_:
{
lean_object* v___x_2642_; uint8_t v___x_2643_; lean_object* v___x_2644_; 
v___x_2642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2642_, 0, v_val_2641_);
v___x_2643_ = lean_unbox(v_a_2633_);
lean_dec(v_a_2633_);
v___x_2644_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2639_, v___x_2643_, v___x_2642_, v___f_2620_);
return v___x_2644_;
}
}
else
{
lean_object* v___x_2654_; 
lean_del_object(v___x_2635_);
lean_dec(v_a_2633_);
lean_dec(v_a_2621_);
lean_dec_ref(v___f_2620_);
v___x_2654_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___closed__1));
return v___x_2654_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___boxed(lean_object* v___f_2656_, lean_object* v_a_2657_, lean_object* v_x_2658_, lean_object* v___y_2659_){
_start:
{
lean_object* v_res_2660_; 
v_res_2660_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1(v___f_2656_, v_a_2657_, v_x_2658_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2(lean_object* v___f_2662_, lean_object* v_x_2663_){
_start:
{
if (lean_obj_tag(v_x_2663_) == 0)
{
lean_object* v_a_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2673_; 
lean_dec_ref(v___f_2662_);
v_a_2665_ = lean_ctor_get(v_x_2663_, 0);
v_isSharedCheck_2673_ = !lean_is_exclusive(v_x_2663_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2667_ = v_x_2663_;
v_isShared_2668_ = v_isSharedCheck_2673_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_a_2665_);
lean_dec(v_x_2663_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2673_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v___x_2670_; 
if (v_isShared_2668_ == 0)
{
v___x_2670_ = v___x_2667_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_a_2665_);
v___x_2670_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
lean_object* v___x_2671_; 
v___x_2671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2670_);
return v___x_2671_;
}
}
}
else
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2695_; 
v_a_2674_ = lean_ctor_get(v_x_2663_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v_x_2663_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2676_ = v_x_2663_;
v_isShared_2677_ = v_isSharedCheck_2695_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v_x_2663_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2695_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___f_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; lean_object* v_val_2683_; lean_object* v___x_2686_; 
lean_inc(v_a_2674_);
v___f_2678_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2678_, 0, v___f_2662_);
lean_closure_set(v___f_2678_, 1, v_a_2674_);
v___x_2679_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___closed__0));
v___x_2680_ = lean_unsigned_to_nat(0u);
v___x_2681_ = 0;
v___x_2686_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_a_2674_, v___x_2679_);
if (lean_obj_tag(v___x_2686_) == 0)
{
lean_object* v_a_2687_; lean_object* v___x_2689_; 
v_a_2687_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_a_2687_);
lean_dec_ref_known(v___x_2686_, 1);
if (v_isShared_2677_ == 0)
{
lean_ctor_set(v___x_2676_, 0, v_a_2687_);
v___x_2689_ = v___x_2676_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v_a_2687_);
v___x_2689_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
v_val_2683_ = v___x_2689_;
goto v___jp_2682_;
}
}
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; 
v_a_2691_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_a_2691_);
lean_dec_ref_known(v___x_2686_, 1);
if (v_isShared_2677_ == 0)
{
lean_ctor_set_tag(v___x_2676_, 0);
lean_ctor_set(v___x_2676_, 0, v_a_2691_);
v___x_2693_ = v___x_2676_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_a_2691_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
v_val_2683_ = v___x_2693_;
goto v___jp_2682_;
}
}
v___jp_2682_:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2684_, 0, v_val_2683_);
v___x_2685_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2680_, v___x_2681_, v___x_2684_, v___f_2678_);
return v___x_2685_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2___boxed(lean_object* v___f_2696_, lean_object* v_x_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next___lam__2(v___f_2696_, v_x_2697_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8(lean_object* v___f_2700_, lean_object* v_x_2701_){
_start:
{
if (lean_obj_tag(v_x_2701_) == 0)
{
lean_object* v_a_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2711_; 
lean_dec_ref(v___f_2700_);
v_a_2703_ = lean_ctor_get(v_x_2701_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v_x_2701_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2705_ = v_x_2701_;
v_isShared_2706_ = v_isSharedCheck_2711_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_a_2703_);
lean_dec(v_x_2701_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2711_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2708_; 
if (v_isShared_2706_ == 0)
{
v___x_2708_ = v___x_2705_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v_a_2703_);
v___x_2708_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
lean_object* v___x_2709_; 
v___x_2709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2708_);
return v___x_2709_;
}
}
}
else
{
lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2723_; 
v_isSharedCheck_2723_ = !lean_is_exclusive(v_x_2701_);
if (v_isSharedCheck_2723_ == 0)
{
lean_object* v_unused_2724_; 
v_unused_2724_ = lean_ctor_get(v_x_2701_, 0);
lean_dec(v_unused_2724_);
v___x_2713_ = v_x_2701_;
v_isShared_2714_ = v_isSharedCheck_2723_;
goto v_resetjp_2712_;
}
else
{
lean_dec(v_x_2701_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2723_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2715_; uint8_t v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2719_; 
v___x_2715_ = lean_unsigned_to_nat(0u);
v___x_2716_ = 0;
v___x_2717_ = lean_io_promise_new();
if (v_isShared_2714_ == 0)
{
lean_ctor_set(v___x_2713_, 0, v___x_2717_);
v___x_2719_ = v___x_2713_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v___x_2717_);
v___x_2719_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2719_);
v___x_2721_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2715_, v___x_2716_, v___x_2720_, v___f_2700_);
return v___x_2721_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8___boxed(lean_object* v___f_2725_, lean_object* v_x_2726_, lean_object* v___y_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8(v___f_2725_, v_x_2726_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1(lean_object* v___f_2729_, lean_object* v_bytes_2730_){
_start:
{
lean_object* v___x_2732_; uint8_t v___x_2733_; lean_object* v_val_2735_; lean_object* v___x_2738_; 
v___x_2732_ = lean_unsigned_to_nat(0u);
v___x_2733_ = 0;
v___x_2738_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2730_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2746_; 
v_a_2739_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2741_ = v___x_2738_;
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v___x_2738_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___x_2744_; 
if (v_isShared_2742_ == 0)
{
lean_ctor_set_tag(v___x_2741_, 1);
v___x_2744_ = v___x_2741_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_a_2739_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
v_val_2735_ = v___x_2744_;
goto v___jp_2734_;
}
}
}
else
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2754_; 
v_a_2747_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2749_ = v___x_2738_;
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v___x_2738_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___x_2752_; 
if (v_isShared_2750_ == 0)
{
lean_ctor_set_tag(v___x_2749_, 0);
v___x_2752_ = v___x_2749_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_a_2747_);
v___x_2752_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
v_val_2735_ = v___x_2752_;
goto v___jp_2734_;
}
}
}
v___jp_2734_:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2736_, 0, v_val_2735_);
v___x_2737_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2732_, v___x_2733_, v___x_2736_, v___f_2729_);
return v___x_2737_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1___boxed(lean_object* v___f_2755_, lean_object* v_bytes_2756_, lean_object* v___y_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1(v___f_2755_, v_bytes_2756_);
lean_dec_ref(v_bytes_2756_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7(lean_object* v___f_2759_, lean_object* v_a_2760_, uint32_t v_op_2761_, uint64_t v_flags_2762_, lean_object* v_payload_2763_, lean_object* v_x_2764_){
_start:
{
if (lean_obj_tag(v_x_2764_) == 0)
{
lean_object* v___x_2766_; 
lean_dec_ref(v___f_2759_);
v___x_2766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2766_, 0, v_x_2764_);
return v___x_2766_;
}
else
{
lean_object* v_a_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2787_; 
v_a_2767_ = lean_ctor_get(v_x_2764_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v_x_2764_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2769_ = v_x_2764_;
v_isShared_2770_ = v_isSharedCheck_2787_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_a_2767_);
lean_dec(v_x_2764_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2787_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
uint32_t v___x_2771_; lean_object* v___x_2772_; uint8_t v___x_2773_; lean_object* v_val_2775_; lean_object* v___x_2778_; 
v___x_2771_ = 0;
v___x_2772_ = lean_unsigned_to_nat(0u);
v___x_2773_ = 0;
v___x_2778_ = lasm_js_call_into(v_a_2760_, v_op_2761_, v___x_2771_, v_flags_2762_, v_a_2767_, v_payload_2763_);
lean_dec(v_a_2767_);
if (lean_obj_tag(v___x_2778_) == 0)
{
lean_object* v_a_2779_; lean_object* v___x_2781_; 
v_a_2779_ = lean_ctor_get(v___x_2778_, 0);
lean_inc(v_a_2779_);
lean_dec_ref_known(v___x_2778_, 1);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 0, v_a_2779_);
v___x_2781_ = v___x_2769_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_a_2779_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
v_val_2775_ = v___x_2781_;
goto v___jp_2774_;
}
}
else
{
lean_object* v_a_2783_; lean_object* v___x_2785_; 
v_a_2783_ = lean_ctor_get(v___x_2778_, 0);
lean_inc(v_a_2783_);
lean_dec_ref_known(v___x_2778_, 1);
if (v_isShared_2770_ == 0)
{
lean_ctor_set_tag(v___x_2769_, 0);
lean_ctor_set(v___x_2769_, 0, v_a_2783_);
v___x_2785_ = v___x_2769_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2783_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
v_val_2775_ = v___x_2785_;
goto v___jp_2774_;
}
}
v___jp_2774_:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2776_, 0, v_val_2775_);
v___x_2777_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2772_, v___x_2773_, v___x_2776_, v___f_2759_);
return v___x_2777_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed(lean_object* v___f_2788_, lean_object* v_a_2789_, lean_object* v_op_2790_, lean_object* v_flags_2791_, lean_object* v_payload_2792_, lean_object* v_x_2793_, lean_object* v___y_2794_){
_start:
{
uint32_t v_op_boxed_2795_; uint64_t v_flags_boxed_2796_; lean_object* v_res_2797_; 
v_op_boxed_2795_ = lean_unbox_uint32(v_op_2790_);
lean_dec(v_op_2790_);
v_flags_boxed_2796_ = lean_unbox_uint64(v_flags_2791_);
lean_dec_ref(v_flags_2791_);
v_res_2797_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7(v___f_2788_, v_a_2789_, v_op_boxed_2795_, v_flags_boxed_2796_, v_payload_2792_, v_x_2793_);
lean_dec(v_payload_2792_);
lean_dec(v_a_2789_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5(lean_object* v___x_2798_, uint8_t v___x_2799_, lean_object* v___f_2800_, lean_object* v_a_2801_, uint32_t v_op_2802_, uint64_t v_flags_2803_, lean_object* v_payload_2804_, lean_object* v_x_2805_){
_start:
{
lean_object* v_val_2808_; 
if (lean_obj_tag(v_x_2805_) == 0)
{
lean_object* v___x_2811_; 
lean_dec_ref(v___f_2800_);
lean_dec(v___x_2798_);
v___x_2811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2811_, 0, v_x_2805_);
return v___x_2811_;
}
else
{
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2826_; 
v_a_2812_ = lean_ctor_get(v_x_2805_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_x_2805_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2814_ = v_x_2805_;
v_isShared_2815_ = v_isSharedCheck_2826_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v_x_2805_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2826_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
uint32_t v___x_2816_; lean_object* v___x_2817_; 
v___x_2816_ = 0;
v___x_2817_ = lasm_js_call_into(v_a_2801_, v_op_2802_, v___x_2816_, v_flags_2803_, v_a_2812_, v_payload_2804_);
lean_dec(v_a_2812_);
if (lean_obj_tag(v___x_2817_) == 0)
{
lean_object* v_a_2818_; lean_object* v___x_2820_; 
v_a_2818_ = lean_ctor_get(v___x_2817_, 0);
lean_inc(v_a_2818_);
lean_dec_ref_known(v___x_2817_, 1);
if (v_isShared_2815_ == 0)
{
lean_ctor_set(v___x_2814_, 0, v_a_2818_);
v___x_2820_ = v___x_2814_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v_a_2818_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
v_val_2808_ = v___x_2820_;
goto v___jp_2807_;
}
}
else
{
lean_object* v_a_2822_; lean_object* v___x_2824_; 
v_a_2822_ = lean_ctor_get(v___x_2817_, 0);
lean_inc(v_a_2822_);
lean_dec_ref_known(v___x_2817_, 1);
if (v_isShared_2815_ == 0)
{
lean_ctor_set_tag(v___x_2814_, 0);
lean_ctor_set(v___x_2814_, 0, v_a_2822_);
v___x_2824_ = v___x_2814_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2822_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
v_val_2808_ = v___x_2824_;
goto v___jp_2807_;
}
}
}
}
v___jp_2807_:
{
lean_object* v___x_2809_; lean_object* v___x_2810_; 
v___x_2809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2809_, 0, v_val_2808_);
v___x_2810_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2798_, v___x_2799_, v___x_2809_, v___f_2800_);
return v___x_2810_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed(lean_object* v___x_2827_, lean_object* v___x_2828_, lean_object* v___f_2829_, lean_object* v_a_2830_, lean_object* v_op_2831_, lean_object* v_flags_2832_, lean_object* v_payload_2833_, lean_object* v_x_2834_, lean_object* v___y_2835_){
_start:
{
uint8_t v___x_3461__boxed_2836_; uint32_t v_op_boxed_2837_; uint64_t v_flags_boxed_2838_; lean_object* v_res_2839_; 
v___x_3461__boxed_2836_ = lean_unbox(v___x_2828_);
v_op_boxed_2837_ = lean_unbox_uint32(v_op_2831_);
lean_dec(v_op_2831_);
v_flags_boxed_2838_ = lean_unbox_uint64(v_flags_2832_);
lean_dec_ref(v_flags_2832_);
v_res_2839_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5(v___x_2827_, v___x_3461__boxed_2836_, v___f_2829_, v_a_2830_, v_op_boxed_2837_, v_flags_boxed_2838_, v_payload_2833_, v_x_2834_);
lean_dec(v_payload_2833_);
lean_dec(v_a_2830_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3(lean_object* v_a_2840_, lean_object* v_x_2841_){
_start:
{
if (lean_obj_tag(v_x_2841_) == 0)
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2851_; 
v_a_2843_ = lean_ctor_get(v_x_2841_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v_x_2841_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2845_ = v_x_2841_;
v_isShared_2846_ = v_isSharedCheck_2851_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v_x_2841_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2851_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v___x_2848_; 
if (v_isShared_2846_ == 0)
{
v___x_2848_ = v___x_2845_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_a_2843_);
v___x_2848_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
lean_object* v___x_2849_; 
v___x_2849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2848_);
return v___x_2849_;
}
}
}
else
{
lean_object* v___x_2852_; 
lean_dec_ref_known(v_x_2841_, 1);
v___x_2852_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2840_);
return v___x_2852_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed(lean_object* v_a_2853_, lean_object* v_x_2854_, lean_object* v___y_2855_){
_start:
{
lean_object* v_res_2856_; 
v_res_2856_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3(v_a_2853_, v_x_2854_);
lean_dec(v_a_2853_);
return v_res_2856_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6(lean_object* v_failurePrefix_2857_, uint32_t v_op_2858_, uint64_t v_flags_2859_, lean_object* v_payload_2860_, lean_object* v___f_2861_, lean_object* v___f_2862_, lean_object* v___f_2863_, lean_object* v_x_2864_){
_start:
{
if (lean_obj_tag(v_x_2864_) == 0)
{
lean_object* v_a_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2874_; 
lean_dec_ref(v___f_2863_);
lean_dec_ref(v___f_2862_);
lean_dec_ref(v___f_2861_);
lean_dec(v_payload_2860_);
v_a_2866_ = lean_ctor_get(v_x_2864_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v_x_2864_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2868_ = v_x_2864_;
v_isShared_2869_ = v_isSharedCheck_2874_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_a_2866_);
lean_dec(v_x_2864_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2874_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2869_ == 0)
{
v___x_2871_ = v___x_2868_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_a_2866_);
v___x_2871_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
lean_object* v___x_2872_; 
v___x_2872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2872_, 0, v___x_2871_);
return v___x_2872_;
}
}
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2921_; 
v_a_2875_ = lean_ctor_get(v_x_2864_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v_x_2864_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2877_ = v_x_2864_;
v_isShared_2878_ = v_isSharedCheck_2921_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v_x_2864_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2921_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; uint8_t v___x_2881_; 
v___x_2879_ = lean_string_utf8_byte_size(v_failurePrefix_2857_);
v___x_2880_ = lean_unsigned_to_nat(0u);
v___x_2881_ = lean_nat_dec_eq(v___x_2879_, v___x_2880_);
if (v___x_2881_ == 0)
{
lean_object* v___f_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___f_2886_; lean_object* v_val_2888_; lean_object* v___x_2893_; 
lean_dec_ref(v___f_2863_);
lean_inc(v_a_2875_);
v___f_2882_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2882_, 0, v_a_2875_);
v___x_2883_ = lean_box(v___x_2881_);
v___x_2884_ = lean_box_uint32(v_op_2858_);
v___x_2885_ = lean_box_uint64(v_flags_2859_);
lean_inc(v_payload_2860_);
v___f_2886_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2886_, 0, v___x_2880_);
lean_closure_set(v___f_2886_, 1, v___x_2883_);
lean_closure_set(v___f_2886_, 2, v___f_2882_);
lean_closure_set(v___f_2886_, 3, v_a_2875_);
lean_closure_set(v___f_2886_, 4, v___x_2884_);
lean_closure_set(v___f_2886_, 5, v___x_2885_);
lean_closure_set(v___f_2886_, 6, v_payload_2860_);
v___x_2893_ = l_Lasm_JS_Wire_encodeIO(v_payload_2860_);
lean_dec(v_payload_2860_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v_a_2894_; lean_object* v___x_2896_; 
v_a_2894_ = lean_ctor_get(v___x_2893_, 0);
lean_inc(v_a_2894_);
lean_dec_ref_known(v___x_2893_, 1);
if (v_isShared_2878_ == 0)
{
lean_ctor_set(v___x_2877_, 0, v_a_2894_);
v___x_2896_ = v___x_2877_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_a_2894_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
v_val_2888_ = v___x_2896_;
goto v___jp_2887_;
}
}
else
{
lean_object* v_a_2898_; lean_object* v___x_2900_; 
v_a_2898_ = lean_ctor_get(v___x_2893_, 0);
lean_inc(v_a_2898_);
lean_dec_ref_known(v___x_2893_, 1);
if (v_isShared_2878_ == 0)
{
lean_ctor_set_tag(v___x_2877_, 0);
lean_ctor_set(v___x_2877_, 0, v_a_2898_);
v___x_2900_ = v___x_2877_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v_a_2898_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
v_val_2888_ = v___x_2900_;
goto v___jp_2887_;
}
}
v___jp_2887_:
{
lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2889_, 0, v_val_2888_);
v___x_2890_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2880_, v___x_2881_, v___x_2889_, v___f_2886_);
v___x_2891_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2880_, v___x_2881_, v___x_2890_, v___f_2861_);
v___x_2892_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2880_, v___x_2881_, v___x_2891_, v___f_2862_);
return v___x_2892_;
}
}
else
{
lean_object* v___f_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___f_2905_; uint8_t v___x_2906_; lean_object* v_val_2908_; lean_object* v___x_2912_; 
lean_dec_ref(v___f_2862_);
lean_dec_ref(v___f_2861_);
lean_inc(v_a_2875_);
v___f_2902_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2902_, 0, v_a_2875_);
v___x_2903_ = lean_box_uint32(v_op_2858_);
v___x_2904_ = lean_box_uint64(v_flags_2859_);
lean_inc(v_payload_2860_);
v___f_2905_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2905_, 0, v___f_2902_);
lean_closure_set(v___f_2905_, 1, v_a_2875_);
lean_closure_set(v___f_2905_, 2, v___x_2903_);
lean_closure_set(v___f_2905_, 3, v___x_2904_);
lean_closure_set(v___f_2905_, 4, v_payload_2860_);
v___x_2906_ = 0;
v___x_2912_ = l_Lasm_JS_Wire_encodeIO(v_payload_2860_);
lean_dec(v_payload_2860_);
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_object* v_a_2913_; lean_object* v___x_2915_; 
v_a_2913_ = lean_ctor_get(v___x_2912_, 0);
lean_inc(v_a_2913_);
lean_dec_ref_known(v___x_2912_, 1);
if (v_isShared_2878_ == 0)
{
lean_ctor_set(v___x_2877_, 0, v_a_2913_);
v___x_2915_ = v___x_2877_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v_a_2913_);
v___x_2915_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
v_val_2908_ = v___x_2915_;
goto v___jp_2907_;
}
}
else
{
lean_object* v_a_2917_; lean_object* v___x_2919_; 
v_a_2917_ = lean_ctor_get(v___x_2912_, 0);
lean_inc(v_a_2917_);
lean_dec_ref_known(v___x_2912_, 1);
if (v_isShared_2878_ == 0)
{
lean_ctor_set_tag(v___x_2877_, 0);
lean_ctor_set(v___x_2877_, 0, v_a_2917_);
v___x_2919_ = v___x_2877_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_a_2917_);
v___x_2919_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
v_val_2908_ = v___x_2919_;
goto v___jp_2907_;
}
}
v___jp_2907_:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2909_, 0, v_val_2908_);
v___x_2910_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2880_, v___x_2906_, v___x_2909_, v___f_2905_);
v___x_2911_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2880_, v___x_2906_, v___x_2910_, v___f_2863_);
return v___x_2911_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6___boxed(lean_object* v_failurePrefix_2922_, lean_object* v_op_2923_, lean_object* v_flags_2924_, lean_object* v_payload_2925_, lean_object* v___f_2926_, lean_object* v___f_2927_, lean_object* v___f_2928_, lean_object* v_x_2929_, lean_object* v___y_2930_){
_start:
{
uint32_t v_op_boxed_2931_; uint64_t v_flags_boxed_2932_; lean_object* v_res_2933_; 
v_op_boxed_2931_ = lean_unbox_uint32(v_op_2923_);
lean_dec(v_op_2923_);
v_flags_boxed_2932_ = lean_unbox_uint64(v_flags_2924_);
lean_dec_ref(v_flags_2924_);
v_res_2933_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6(v_failurePrefix_2922_, v_op_boxed_2931_, v_flags_boxed_2932_, v_payload_2925_, v___f_2926_, v___f_2927_, v___f_2928_, v_x_2929_);
lean_dec_ref(v_failurePrefix_2922_);
return v_res_2933_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4(lean_object* v_failurePrefix_2934_, lean_object* v_x_2935_){
_start:
{
if (lean_obj_tag(v_x_2935_) == 0)
{
lean_object* v_a_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2948_; 
v_a_2937_ = lean_ctor_get(v_x_2935_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v_x_2935_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2939_ = v_x_2935_;
v_isShared_2940_ = v_isSharedCheck_2948_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_a_2937_);
lean_dec(v_x_2935_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2948_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2945_; 
v___x_2941_ = lean_io_error_to_string(v_a_2937_);
v___x_2942_ = lean_string_append(v_failurePrefix_2934_, v___x_2941_);
lean_dec_ref(v___x_2941_);
v___x_2943_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2942_);
if (v_isShared_2940_ == 0)
{
lean_ctor_set(v___x_2939_, 0, v___x_2943_);
v___x_2945_ = v___x_2939_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v___x_2943_);
v___x_2945_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
lean_object* v___x_2946_; 
v___x_2946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2945_);
return v___x_2946_;
}
}
}
else
{
lean_object* v___x_2949_; 
lean_dec_ref(v_failurePrefix_2934_);
v___x_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2949_, 0, v_x_2935_);
return v___x_2949_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed(lean_object* v_failurePrefix_2950_, lean_object* v_x_2951_, lean_object* v___y_2952_){
_start:
{
lean_object* v_res_2953_; 
v_res_2953_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4(v_failurePrefix_2950_, v_x_2951_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2(lean_object* v___f_2954_, lean_object* v_x_2955_){
_start:
{
if (lean_obj_tag(v_x_2955_) == 0)
{
lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2965_; 
lean_dec_ref(v___f_2954_);
v_a_2957_ = lean_ctor_get(v_x_2955_, 0);
v_isSharedCheck_2965_ = !lean_is_exclusive(v_x_2955_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2959_ = v_x_2955_;
v_isShared_2960_ = v_isSharedCheck_2965_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v_x_2955_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2965_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2962_; 
if (v_isShared_2960_ == 0)
{
v___x_2962_ = v___x_2959_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_a_2957_);
v___x_2962_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
lean_object* v___x_2963_; 
v___x_2963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2963_, 0, v___x_2962_);
return v___x_2963_;
}
}
}
else
{
lean_object* v_a_2966_; lean_object* v___x_2967_; 
v_a_2966_ = lean_ctor_get(v_x_2955_, 0);
lean_inc(v_a_2966_);
lean_dec_ref_known(v_x_2955_, 1);
v___x_2967_ = lean_apply_2(v___f_2954_, v_a_2966_, lean_box(0));
return v___x_2967_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2___boxed(lean_object* v___f_2968_, lean_object* v_x_2969_, lean_object* v___y_2970_){
_start:
{
lean_object* v_res_2971_; 
v_res_2971_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2(v___f_2968_, v_x_2969_);
return v_res_2971_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0(lean_object* v_context_2972_, lean_object* v_x_2973_){
_start:
{
lean_object* v_val_2976_; 
if (lean_obj_tag(v_x_2973_) == 0)
{
lean_object* v_a_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2986_; 
v_a_2978_ = lean_ctor_get(v_x_2973_, 0);
v_isSharedCheck_2986_ = !lean_is_exclusive(v_x_2973_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2980_ = v_x_2973_;
v_isShared_2981_ = v_isSharedCheck_2986_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_a_2978_);
lean_dec(v_x_2973_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2986_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2983_; 
if (v_isShared_2981_ == 0)
{
v___x_2983_ = v___x_2980_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_a_2978_);
v___x_2983_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
lean_object* v___x_2984_; 
v___x_2984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2983_);
return v___x_2984_;
}
}
}
else
{
lean_object* v_a_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_3000_; 
v_a_2987_ = lean_ctor_get(v_x_2973_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v_x_2973_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2989_ = v_x_2973_;
v_isShared_2990_ = v_isSharedCheck_3000_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_a_2987_);
lean_dec(v_x_2973_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_3000_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2991_; 
v___x_2991_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_2972_, v_a_2987_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v___x_2994_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref_known(v___x_2991_, 1);
if (v_isShared_2990_ == 0)
{
lean_ctor_set(v___x_2989_, 0, v_a_2992_);
v___x_2994_ = v___x_2989_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_a_2992_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
v_val_2976_ = v___x_2994_;
goto v___jp_2975_;
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; 
v_a_2996_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2996_);
lean_dec_ref_known(v___x_2991_, 1);
if (v_isShared_2990_ == 0)
{
lean_ctor_set_tag(v___x_2989_, 0);
lean_ctor_set(v___x_2989_, 0, v_a_2996_);
v___x_2998_ = v___x_2989_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v_a_2996_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
v_val_2976_ = v___x_2998_;
goto v___jp_2975_;
}
}
}
}
v___jp_2975_:
{
lean_object* v___x_2977_; 
v___x_2977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2977_, 0, v_val_2976_);
return v___x_2977_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0___boxed(lean_object* v_context_3001_, lean_object* v_x_3002_, lean_object* v___y_3003_){
_start:
{
lean_object* v_res_3004_; 
v_res_3004_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0(v_context_3001_, v_x_3002_);
lean_dec_ref(v_context_3001_);
return v_res_3004_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(lean_object* v_context_3005_, uint32_t v_op_3006_, uint64_t v_flags_3007_, lean_object* v_payload_3008_, lean_object* v_failurePrefix_3009_){
_start:
{
lean_object* v___f_3011_; lean_object* v___f_3012_; lean_object* v___f_3013_; lean_object* v___f_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___f_3017_; lean_object* v___f_3018_; lean_object* v___x_3019_; uint8_t v___x_3020_; lean_object* v_val_3022_; lean_object* v___x_3025_; 
v___f_3011_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3011_, 0, v_context_3005_);
v___f_3012_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3012_, 0, v___f_3011_);
v___f_3013_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3013_, 0, v___f_3012_);
lean_inc_ref(v_failurePrefix_3009_);
v___f_3014_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3014_, 0, v_failurePrefix_3009_);
v___x_3015_ = lean_box_uint32(v_op_3006_);
v___x_3016_ = lean_box_uint64(v_flags_3007_);
lean_inc_ref(v___f_3013_);
v___f_3017_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3017_, 0, v_failurePrefix_3009_);
lean_closure_set(v___f_3017_, 1, v___x_3015_);
lean_closure_set(v___f_3017_, 2, v___x_3016_);
lean_closure_set(v___f_3017_, 3, v_payload_3008_);
lean_closure_set(v___f_3017_, 4, v___f_3014_);
lean_closure_set(v___f_3017_, 5, v___f_3013_);
lean_closure_set(v___f_3017_, 6, v___f_3013_);
v___f_3018_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3018_, 0, v___f_3017_);
v___x_3019_ = lean_unsigned_to_nat(0u);
v___x_3020_ = 0;
v___x_3025_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_object* v_a_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3033_; 
v_a_3026_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3028_ = v___x_3025_;
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_a_3026_);
lean_dec(v___x_3025_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v___x_3031_; 
if (v_isShared_3029_ == 0)
{
lean_ctor_set_tag(v___x_3028_, 1);
v___x_3031_ = v___x_3028_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_a_3026_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
v_val_3022_ = v___x_3031_;
goto v___jp_3021_;
}
}
}
else
{
lean_object* v_a_3034_; lean_object* v___x_3036_; uint8_t v_isShared_3037_; uint8_t v_isSharedCheck_3041_; 
v_a_3034_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3041_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_3036_ = v___x_3025_;
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
else
{
lean_inc(v_a_3034_);
lean_dec(v___x_3025_);
v___x_3036_ = lean_box(0);
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
v_resetjp_3035_:
{
lean_object* v___x_3039_; 
if (v_isShared_3037_ == 0)
{
lean_ctor_set_tag(v___x_3036_, 0);
v___x_3039_ = v___x_3036_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v_a_3034_);
v___x_3039_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
v_val_3022_ = v___x_3039_;
goto v___jp_3021_;
}
}
}
v___jp_3021_:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3023_, 0, v_val_3022_);
v___x_3024_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3019_, v___x_3020_, v___x_3023_, v___f_3018_);
return v___x_3024_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___boxed(lean_object* v_context_3042_, lean_object* v_op_3043_, lean_object* v_flags_3044_, lean_object* v_payload_3045_, lean_object* v_failurePrefix_3046_, lean_object* v_a_3047_){
_start:
{
uint32_t v_op_boxed_3048_; uint64_t v_flags_boxed_3049_; lean_object* v_res_3050_; 
v_op_boxed_3048_ = lean_unbox_uint32(v_op_3043_);
lean_dec(v_op_3043_);
v_flags_boxed_3049_ = lean_unbox_uint64(v_flags_3044_);
lean_dec_ref(v_flags_3044_);
v_res_3050_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(v_context_3042_, v_op_boxed_3048_, v_flags_boxed_3049_, v_payload_3045_, v_failurePrefix_3046_);
return v_res_3050_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1(void){
_start:
{
uint64_t v___x_3052_; uint8_t v___x_3053_; uint64_t v___x_3054_; 
v___x_3052_ = 8ULL;
v___x_3053_ = 0;
v___x_3054_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_3053_, v___x_3052_);
return v___x_3054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(lean_object* v_o_3055_, lean_object* v_name_3056_, lean_object* v_args_3057_){
_start:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; uint32_t v___x_3064_; uint64_t v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3059_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_3060_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3060_, 0, v_o_3055_);
lean_ctor_set(v___x_3060_, 1, v___x_3059_);
lean_inc_ref(v_name_3056_);
v___x_3061_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3061_, 0, v_name_3056_);
v___x_3062_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_3063_ = lean_string_append(v___x_3062_, v_name_3056_);
lean_dec_ref(v_name_3056_);
v___x_3064_ = 205;
v___x_3065_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__1);
v___x_3066_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3066_, 0, v_args_3057_);
v___x_3067_ = lean_unsigned_to_nat(3u);
v___x_3068_ = lean_mk_empty_array_with_capacity(v___x_3067_);
v___x_3069_ = lean_array_push(v___x_3068_, v___x_3060_);
v___x_3070_ = lean_array_push(v___x_3069_, v___x_3061_);
v___x_3071_ = lean_array_push(v___x_3070_, v___x_3066_);
v___x_3072_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3072_, 0, v___x_3071_);
v___x_3073_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(v___x_3063_, v___x_3064_, v___x_3065_, v___x_3072_, v___x_3059_);
return v___x_3073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___boxed(lean_object* v_o_3074_, lean_object* v_name_3075_, lean_object* v_args_3076_, lean_object* v___y_3077_){
_start:
{
lean_object* v_res_3078_; 
v_res_3078_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(v_o_3074_, v_name_3075_, v_args_3076_);
return v_res_3078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next(lean_object* v_it_3083_){
_start:
{
lean_object* v___f_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; uint8_t v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; 
v___f_3085_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__1));
v___x_3086_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_Iterator_next___closed__2));
v___x_3087_ = lean_unsigned_to_nat(0u);
v___x_3088_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v___x_3089_ = 0;
v___x_3090_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1(v_it_3083_, v___x_3086_, v___x_3088_);
v___x_3091_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3087_, v___x_3089_, v___x_3090_, v___f_3085_);
return v___x_3091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_Iterator_next___boxed(lean_object* v_it_3092_, lean_object* v_a_3093_){
_start:
{
lean_object* v_res_3094_; 
v_res_3094_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next(v_it_3092_);
return v_res_3094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0(lean_object* v_acc_3095_, lean_object* v_it_3096_, lean_object* v_x_3097_){
_start:
{
if (lean_obj_tag(v_x_3097_) == 0)
{
lean_object* v_a_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3107_; 
lean_dec(v_it_3096_);
lean_dec_ref(v_acc_3095_);
v_a_3099_ = lean_ctor_get(v_x_3097_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v_x_3097_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3101_ = v_x_3097_;
v_isShared_3102_ = v_isSharedCheck_3107_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_a_3099_);
lean_dec(v_x_3097_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3107_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
lean_object* v___x_3104_; 
if (v_isShared_3102_ == 0)
{
v___x_3104_ = v___x_3101_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3099_);
v___x_3104_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
lean_object* v___x_3105_; 
v___x_3105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3105_, 0, v___x_3104_);
return v___x_3105_;
}
}
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3119_; 
v_a_3108_ = lean_ctor_get(v_x_3097_, 0);
v_isSharedCheck_3119_ = !lean_is_exclusive(v_x_3097_);
if (v_isSharedCheck_3119_ == 0)
{
v___x_3110_ = v_x_3097_;
v_isShared_3111_ = v_isSharedCheck_3119_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v_x_3097_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3119_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
if (lean_obj_tag(v_a_3108_) == 0)
{
lean_object* v___x_3113_; 
lean_dec(v_it_3096_);
if (v_isShared_3111_ == 0)
{
lean_ctor_set(v___x_3110_, 0, v_acc_3095_);
v___x_3113_ = v___x_3110_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v_acc_3095_);
v___x_3113_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
lean_object* v___x_3114_; 
v___x_3114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3113_);
return v___x_3114_;
}
}
else
{
lean_object* v_val_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
lean_del_object(v___x_3110_);
v_val_3116_ = lean_ctor_get(v_a_3108_, 0);
lean_inc(v_val_3116_);
lean_dec_ref_known(v_a_3108_, 1);
v___x_3117_ = lean_array_push(v_acc_3095_, v_val_3116_);
v___x_3118_ = l_Lasm_JS_Deno_KvListIterator_values_loop(v_it_3096_, v___x_3117_);
return v___x_3118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0___boxed(lean_object* v_acc_3120_, lean_object* v_it_3121_, lean_object* v_x_3122_, lean_object* v___y_3123_){
_start:
{
lean_object* v_res_3124_; 
v_res_3124_ = l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0(v_acc_3120_, v_it_3121_, v_x_3122_);
return v_res_3124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop(lean_object* v_it_3125_, lean_object* v_acc_3126_){
_start:
{
lean_object* v___f_3128_; lean_object* v___x_3129_; uint8_t v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; 
lean_inc(v_it_3125_);
v___f_3128_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_KvListIterator_values_loop___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3128_, 0, v_acc_3126_);
lean_closure_set(v___f_3128_, 1, v_it_3125_);
v___x_3129_ = lean_unsigned_to_nat(0u);
v___x_3130_ = 0;
v___x_3131_ = l_Lasm_JS_Deno_KvListIterator_Iterator_next(v_it_3125_);
v___x_3132_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3129_, v___x_3130_, v___x_3131_, v___f_3128_);
return v___x_3132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values_loop___boxed(lean_object* v_it_3133_, lean_object* v_acc_3134_, lean_object* v_a_3135_){
_start:
{
lean_object* v_res_3136_; 
v_res_3136_ = l_Lasm_JS_Deno_KvListIterator_values_loop(v_it_3133_, v_acc_3134_);
return v_res_3136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0(lean_object* v_x_3139_){
_start:
{
if (lean_obj_tag(v_x_3139_) == 0)
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3149_; 
v_a_3141_ = lean_ctor_get(v_x_3139_, 0);
v_isSharedCheck_3149_ = !lean_is_exclusive(v_x_3139_);
if (v_isSharedCheck_3149_ == 0)
{
v___x_3143_ = v_x_3139_;
v_isShared_3144_ = v_isSharedCheck_3149_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v_x_3139_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3149_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3146_; 
if (v_isShared_3144_ == 0)
{
v___x_3146_ = v___x_3143_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3148_; 
v_reuseFailAlloc_3148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3148_, 0, v_a_3141_);
v___x_3146_ = v_reuseFailAlloc_3148_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
lean_object* v___x_3147_; 
v___x_3147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3147_, 0, v___x_3146_);
return v___x_3147_;
}
}
}
else
{
lean_object* v_a_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; 
v_a_3150_ = lean_ctor_get(v_x_3139_, 0);
lean_inc(v_a_3150_);
lean_dec_ref_known(v_x_3139_, 1);
v___x_3151_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_values___lam__0___closed__0));
v___x_3152_ = l_Lasm_JS_Deno_KvListIterator_values_loop(v_a_3150_, v___x_3151_);
return v___x_3152_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___lam__0___boxed(lean_object* v_x_3153_, lean_object* v___y_3154_){
_start:
{
lean_object* v_res_3155_; 
v_res_3155_ = l_Lasm_JS_Deno_KvListIterator_values___lam__0(v_x_3153_);
return v_res_3155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values(lean_object* v_self_3157_){
_start:
{
lean_object* v___f_3159_; lean_object* v___x_3160_; uint8_t v___x_3161_; lean_object* v_val_3163_; lean_object* v___x_3166_; 
v___f_3159_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_values___closed__0));
v___x_3160_ = lean_unsigned_to_nat(0u);
v___x_3161_ = 0;
v___x_3166_ = l_Lasm_JS_Deno_KvListIterator_iterator(v_self_3157_);
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v_a_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3174_; 
v_a_3167_ = lean_ctor_get(v___x_3166_, 0);
v_isSharedCheck_3174_ = !lean_is_exclusive(v___x_3166_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3169_ = v___x_3166_;
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_a_3167_);
lean_dec(v___x_3166_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v___x_3172_; 
if (v_isShared_3170_ == 0)
{
lean_ctor_set_tag(v___x_3169_, 1);
v___x_3172_ = v___x_3169_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v_a_3167_);
v___x_3172_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
v_val_3163_ = v___x_3172_;
goto v___jp_3162_;
}
}
}
else
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3182_; 
v_a_3175_ = lean_ctor_get(v___x_3166_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3166_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3177_ = v___x_3166_;
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3166_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3180_; 
if (v_isShared_3178_ == 0)
{
lean_ctor_set_tag(v___x_3177_, 0);
v___x_3180_ = v___x_3177_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_a_3175_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
v_val_3163_ = v___x_3180_;
goto v___jp_3162_;
}
}
}
v___jp_3162_:
{
lean_object* v___x_3164_; lean_object* v___x_3165_; 
v___x_3164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3164_, 0, v_val_3163_);
v___x_3165_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3160_, v___x_3161_, v___x_3164_, v___f_3159_);
return v___x_3165_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvListIterator_values___boxed(lean_object* v_self_3183_, lean_object* v_a_3184_){
_start:
{
lean_object* v_res_3185_; 
v_res_3185_ = l_Lasm_JS_Deno_KvListIterator_values(v_self_3183_);
return v_res_3185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0(lean_object* v_context_3186_, lean_object* v_d_3187_){
_start:
{
lean_object* v___y_3190_; lean_object* v___y_3191_; 
if (lean_obj_tag(v_d_3187_) == 9)
{
lean_object* v_value_3195_; lean_object* v___x_3196_; 
v_value_3195_ = lean_ctor_get(v_d_3187_, 0);
lean_inc(v_value_3195_);
lean_dec_ref_known(v_d_3187_, 2);
v___x_3196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3196_, 0, v_value_3195_);
return v___x_3196_;
}
else
{
lean_object* v___x_3197_; lean_object* v_received_3199_; 
v___x_3197_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
if (lean_obj_tag(v_d_3187_) == 9)
{
lean_object* v_value_3213_; lean_object* v_description_3214_; uint8_t v___x_3215_; 
v_value_3213_ = lean_ctor_get(v_d_3187_, 0);
v_description_3214_ = lean_ctor_get(v_d_3187_, 1);
v___x_3215_ = lean_string_dec_eq(v_description_3214_, v___x_3197_);
if (v___x_3215_ == 0)
{
goto v___jp_3211_;
}
else
{
uint32_t v___x_3216_; uint64_t v___x_3217_; lean_object* v___x_3218_; uint32_t v___x_3219_; lean_object* v___x_3220_; 
lean_inc_n(v_value_3213_, 2);
lean_dec_ref_known(v_d_3187_, 2);
v___x_3216_ = 206;
v___x_3217_ = 0ULL;
v___x_3218_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3218_, 0, v_value_3213_);
lean_ctor_set(v___x_3218_, 1, v___x_3197_);
v___x_3219_ = lasm_js_value_handle(v_value_3213_);
lean_dec(v_value_3213_);
v___x_3220_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3216_, v___x_3217_, v___x_3218_, v___x_3219_);
lean_dec_ref_known(v___x_3218_, 2);
if (lean_obj_tag(v___x_3220_) == 0)
{
lean_object* v_a_3221_; uint8_t v___x_3222_; 
v_a_3221_ = lean_ctor_get(v___x_3220_, 0);
lean_inc(v_a_3221_);
lean_dec_ref_known(v___x_3220_, 1);
v___x_3222_ = lean_string_validate_utf8(v_a_3221_);
if (v___x_3222_ == 0)
{
lean_object* v___x_3223_; lean_object* v___x_3224_; 
lean_dec(v_a_3221_);
v___x_3223_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_3224_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3223_);
v_received_3199_ = v___x_3224_;
goto v___jp_3198_;
}
else
{
lean_object* v___x_3225_; 
v___x_3225_ = lean_string_from_utf8_unchecked(v_a_3221_);
v_received_3199_ = v___x_3225_;
goto v___jp_3198_;
}
}
else
{
lean_object* v___x_3226_; 
lean_dec_ref_known(v___x_3220_, 1);
v___x_3226_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v_received_3199_ = v___x_3226_;
goto v___jp_3198_;
}
}
}
else
{
goto v___jp_3211_;
}
v___jp_3198_:
{
lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; uint8_t v___x_3209_; 
v___x_3200_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_3201_ = lean_string_append(v___x_3200_, v_context_3186_);
v___x_3202_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_3203_ = lean_string_append(v___x_3201_, v___x_3202_);
v___x_3204_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvU64___closed__0));
v___x_3205_ = lean_string_append(v___x_3203_, v___x_3204_);
v___x_3206_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_3207_ = lean_string_append(v___x_3205_, v___x_3206_);
v___x_3208_ = lean_string_append(v___x_3207_, v_received_3199_);
lean_dec_ref(v_received_3199_);
v___x_3209_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5);
if (v___x_3209_ == 0)
{
lean_object* v___x_3210_; 
v___x_3210_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6));
v___y_3190_ = v___x_3208_;
v___y_3191_ = v___x_3210_;
goto v___jp_3189_;
}
else
{
v___y_3190_ = v___x_3208_;
v___y_3191_ = v___x_3197_;
goto v___jp_3189_;
}
}
v___jp_3211_:
{
lean_object* v___x_3212_; 
v___x_3212_ = l_Lasm_JS_Data_describe(v_d_3187_);
v_received_3199_ = v___x_3212_;
goto v___jp_3198_;
}
}
v___jp_3189_:
{
lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3192_ = lean_string_append(v___y_3190_, v___y_3191_);
v___x_3193_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3193_, 0, v___x_3192_);
v___x_3194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
return v___x_3194_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0___boxed(lean_object* v_context_3227_, lean_object* v_d_3228_, lean_object* v_a_3229_){
_start:
{
lean_object* v_res_3230_; 
v_res_3230_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0(v_context_3227_, v_d_3228_);
lean_dec_ref(v_context_3227_);
return v_res_3230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0(lean_object* v_b_3231_, lean_object* v_args_3232_, uint8_t v_await_3233_){
_start:
{
uint64_t v___y_3236_; uint64_t v___y_3237_; uint64_t v___x_3280_; uint64_t v___y_3282_; 
v___x_3280_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_3233_ == 0)
{
uint64_t v___x_3287_; 
v___x_3287_ = 0ULL;
v___y_3282_ = v___x_3287_;
goto v___jp_3281_;
}
else
{
uint64_t v___x_3288_; 
v___x_3288_ = 2ULL;
v___y_3282_ = v___x_3288_;
goto v___jp_3281_;
}
v___jp_3235_:
{
uint64_t v_flags_3238_; uint32_t v___x_3239_; lean_object* v___x_3240_; uint32_t v___x_3241_; lean_object* v___x_3242_; 
v_flags_3238_ = lean_uint64_lor(v___y_3236_, v___y_3237_);
v___x_3239_ = 214;
v___x_3240_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3231_, v_args_3232_);
v___x_3241_ = 0;
v___x_3242_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3239_, v_flags_3238_, v___x_3240_, v___x_3241_);
lean_dec(v___x_3240_);
if (lean_obj_tag(v___x_3242_) == 0)
{
if (lean_obj_tag(v___x_3242_) == 0)
{
lean_object* v_a_3243_; lean_object* v___x_3244_; 
v_a_3243_ = lean_ctor_get(v___x_3242_, 0);
lean_inc(v_a_3243_);
lean_dec_ref_known(v___x_3242_, 1);
v___x_3244_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3243_);
lean_dec(v_a_3243_);
if (lean_obj_tag(v___x_3244_) == 0)
{
lean_object* v_a_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; 
v_a_3245_ = lean_ctor_get(v___x_3244_, 0);
lean_inc(v_a_3245_);
lean_dec_ref_known(v___x_3244_, 1);
v___x_3246_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3231_);
v___x_3247_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0_spec__0(v___x_3246_, v_a_3245_);
lean_dec_ref(v___x_3246_);
return v___x_3247_;
}
else
{
lean_object* v_a_3248_; lean_object* v___x_3250_; uint8_t v_isShared_3251_; uint8_t v_isSharedCheck_3255_; 
v_a_3248_ = lean_ctor_get(v___x_3244_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v___x_3244_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3250_ = v___x_3244_;
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
else
{
lean_inc(v_a_3248_);
lean_dec(v___x_3244_);
v___x_3250_ = lean_box(0);
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
v_resetjp_3249_:
{
lean_object* v___x_3253_; 
if (v_isShared_3251_ == 0)
{
v___x_3253_ = v___x_3250_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v_a_3248_);
v___x_3253_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
return v___x_3253_;
}
}
}
}
else
{
lean_object* v_a_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3263_; 
v_a_3256_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3258_ = v___x_3242_;
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_a_3256_);
lean_dec(v___x_3242_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
lean_object* v___x_3261_; 
if (v_isShared_3259_ == 0)
{
lean_ctor_set_tag(v___x_3258_, 1);
v___x_3261_ = v___x_3258_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v_a_3256_);
v___x_3261_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
return v___x_3261_;
}
}
}
}
else
{
lean_object* v_a_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3279_; 
v_a_3264_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3266_ = v___x_3242_;
v_isShared_3267_ = v_isSharedCheck_3279_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_a_3264_);
lean_dec(v___x_3242_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3279_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3277_; 
v___x_3268_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_3269_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3231_);
v___x_3270_ = lean_string_append(v___x_3268_, v___x_3269_);
lean_dec_ref(v___x_3269_);
v___x_3271_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_3272_ = lean_string_append(v___x_3270_, v___x_3271_);
v___x_3273_ = lean_io_error_to_string(v_a_3264_);
v___x_3274_ = lean_string_append(v___x_3272_, v___x_3273_);
lean_dec_ref(v___x_3273_);
v___x_3275_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
if (v_isShared_3267_ == 0)
{
lean_ctor_set(v___x_3266_, 0, v___x_3275_);
v___x_3277_ = v___x_3266_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v___x_3275_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
return v___x_3277_;
}
}
}
}
v___jp_3281_:
{
uint8_t v_construct_3283_; uint64_t v___x_3284_; 
v_construct_3283_ = lean_ctor_get_uint8(v_b_3231_, sizeof(void*)*4);
v___x_3284_ = lean_uint64_lor(v___x_3280_, v___y_3282_);
if (v_construct_3283_ == 0)
{
uint64_t v___x_3285_; 
v___x_3285_ = 0ULL;
v___y_3236_ = v___x_3284_;
v___y_3237_ = v___x_3285_;
goto v___jp_3235_;
}
else
{
uint64_t v___x_3286_; 
v___x_3286_ = 4ULL;
v___y_3236_ = v___x_3284_;
v___y_3237_ = v___x_3286_;
goto v___jp_3235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0___boxed(lean_object* v_b_3289_, lean_object* v_args_3290_, lean_object* v_await_3291_, lean_object* v_a_3292_){
_start:
{
uint8_t v_await_boxed_3293_; lean_object* v_res_3294_; 
v_await_boxed_3293_ = lean_unbox(v_await_3291_);
v_res_3294_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0(v_b_3289_, v_args_3290_, v_await_boxed_3293_);
lean_dec_ref(v_b_3289_);
return v_res_3294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_new(lean_object* v_value_3304_){
_start:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; uint8_t v___x_3312_; lean_object* v___x_3313_; 
v___x_3306_ = lean_unsigned_to_nat(1u);
v___x_3307_ = ((lean_object*)(l_Lasm_JS_Deno_KvU64_new___closed__3));
v___x_3308_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3308_, 0, v_value_3304_);
v___x_3309_ = lean_mk_empty_array_with_capacity(v___x_3306_);
v___x_3310_ = lean_array_push(v___x_3309_, v___x_3308_);
v___x_3311_ = l_Lasm_JS_Web_Support_args(v___x_3310_);
v___x_3312_ = 0;
v___x_3313_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_KvU64_new_spec__0(v___x_3307_, v___x_3311_, v___x_3312_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_new___boxed(lean_object* v_value_3314_, lean_object* v_a_3315_){
_start:
{
lean_object* v_res_3316_; 
v_res_3316_ = l_Lasm_JS_Deno_KvU64_new(v_value_3314_);
return v_res_3316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1(lean_object* v_context_3319_, lean_object* v_d_3320_){
_start:
{
lean_object* v___y_3323_; lean_object* v___y_3324_; lean_object* v___y_3329_; lean_object* v_received_3330_; lean_object* v___y_3349_; lean_object* v_a_3352_; 
switch(lean_obj_tag(v_d_3320_))
{
case 3:
{
double v_n_3376_; lean_object* v___x_3377_; 
v_n_3376_ = lean_ctor_get_float(v_d_3320_, 0);
v___x_3377_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_3376_);
if (lean_obj_tag(v___x_3377_) == 0)
{
lean_object* v___x_3378_; 
v___x_3378_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___closed__1));
v_a_3352_ = v___x_3378_;
goto v___jp_3351_;
}
else
{
lean_object* v_val_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3386_; 
lean_dec_ref_known(v_d_3320_, 0);
v_val_3379_ = lean_ctor_get(v___x_3377_, 0);
v_isSharedCheck_3386_ = !lean_is_exclusive(v___x_3377_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3381_ = v___x_3377_;
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_val_3379_);
lean_dec(v___x_3377_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3384_; 
if (v_isShared_3382_ == 0)
{
lean_ctor_set_tag(v___x_3381_, 0);
v___x_3384_ = v___x_3381_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v_val_3379_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
return v___x_3384_;
}
}
}
}
case 5:
{
lean_object* v_i_3387_; lean_object* v___x_3388_; 
v_i_3387_ = lean_ctor_get(v_d_3320_, 0);
lean_inc(v_i_3387_);
lean_dec_ref_known(v_d_3320_, 1);
v___x_3388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3388_, 0, v_i_3387_);
return v___x_3388_;
}
default: 
{
lean_object* v___x_3389_; 
v___x_3389_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v_a_3352_ = v___x_3389_;
goto v___jp_3351_;
}
}
v___jp_3322_:
{
lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; 
v___x_3325_ = lean_string_append(v___y_3323_, v___y_3324_);
lean_dec_ref(v___y_3324_);
v___x_3326_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3325_);
v___x_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3327_, 0, v___x_3326_);
return v___x_3327_;
}
v___jp_3328_:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; uint8_t v___x_3342_; 
v___x_3331_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_3332_ = lean_string_append(v___x_3331_, v_context_3319_);
v___x_3333_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_3334_ = lean_string_append(v___x_3332_, v___x_3333_);
v___x_3335_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___closed__0));
v___x_3336_ = lean_string_append(v___x_3334_, v___x_3335_);
v___x_3337_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_3338_ = lean_string_append(v___x_3336_, v___x_3337_);
v___x_3339_ = lean_string_append(v___x_3338_, v_received_3330_);
lean_dec_ref(v_received_3330_);
v___x_3340_ = lean_string_utf8_byte_size(v___y_3329_);
v___x_3341_ = lean_unsigned_to_nat(0u);
v___x_3342_ = lean_nat_dec_eq(v___x_3340_, v___x_3341_);
if (v___x_3342_ == 0)
{
lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3343_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_3344_ = lean_string_append(v___x_3343_, v___y_3329_);
v___x_3345_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_3346_ = lean_string_append(v___x_3344_, v___x_3345_);
v___y_3323_ = v___x_3339_;
v___y_3324_ = v___x_3346_;
goto v___jp_3322_;
}
else
{
lean_object* v___x_3347_; 
v___x_3347_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_3323_ = v___x_3339_;
v___y_3324_ = v___x_3347_;
goto v___jp_3322_;
}
}
v___jp_3348_:
{
lean_object* v___x_3350_; 
v___x_3350_ = l_Lasm_JS_Data_describe(v_d_3320_);
v___y_3329_ = v___y_3349_;
v_received_3330_ = v___x_3350_;
goto v___jp_3328_;
}
v___jp_3351_:
{
if (lean_obj_tag(v_d_3320_) == 9)
{
lean_object* v_value_3353_; lean_object* v_description_3354_; lean_object* v___x_3355_; uint8_t v___x_3356_; 
v_value_3353_ = lean_ctor_get(v_d_3320_, 0);
v_description_3354_ = lean_ctor_get(v_d_3320_, 1);
v___x_3355_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_3356_ = lean_string_dec_eq(v_description_3354_, v___x_3355_);
if (v___x_3356_ == 0)
{
v___y_3349_ = v_a_3352_;
goto v___jp_3348_;
}
else
{
lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3373_; 
lean_inc(v_value_3353_);
v_isSharedCheck_3373_ = !lean_is_exclusive(v_d_3320_);
if (v_isSharedCheck_3373_ == 0)
{
lean_object* v_unused_3374_; lean_object* v_unused_3375_; 
v_unused_3374_ = lean_ctor_get(v_d_3320_, 1);
lean_dec(v_unused_3374_);
v_unused_3375_ = lean_ctor_get(v_d_3320_, 0);
lean_dec(v_unused_3375_);
v___x_3358_ = v_d_3320_;
v_isShared_3359_ = v_isSharedCheck_3373_;
goto v_resetjp_3357_;
}
else
{
lean_dec(v_d_3320_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3373_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
uint32_t v___x_3360_; uint64_t v___x_3361_; lean_object* v___x_3363_; 
v___x_3360_ = 206;
v___x_3361_ = 0ULL;
lean_inc(v_value_3353_);
if (v_isShared_3359_ == 0)
{
lean_ctor_set(v___x_3358_, 1, v___x_3355_);
v___x_3363_ = v___x_3358_;
goto v_reusejp_3362_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v_value_3353_);
lean_ctor_set(v_reuseFailAlloc_3372_, 1, v___x_3355_);
v___x_3363_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3362_;
}
v_reusejp_3362_:
{
uint32_t v___x_3364_; lean_object* v___x_3365_; 
v___x_3364_ = lasm_js_value_handle(v_value_3353_);
lean_dec(v_value_3353_);
v___x_3365_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3360_, v___x_3361_, v___x_3363_, v___x_3364_);
lean_dec_ref(v___x_3363_);
if (lean_obj_tag(v___x_3365_) == 0)
{
lean_object* v_a_3366_; uint8_t v___x_3367_; 
v_a_3366_ = lean_ctor_get(v___x_3365_, 0);
lean_inc(v_a_3366_);
lean_dec_ref_known(v___x_3365_, 1);
v___x_3367_ = lean_string_validate_utf8(v_a_3366_);
if (v___x_3367_ == 0)
{
lean_object* v___x_3368_; lean_object* v___x_3369_; 
lean_dec(v_a_3366_);
v___x_3368_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_3369_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3368_);
v___y_3329_ = v_a_3352_;
v_received_3330_ = v___x_3369_;
goto v___jp_3328_;
}
else
{
lean_object* v___x_3370_; 
v___x_3370_ = lean_string_from_utf8_unchecked(v_a_3366_);
v___y_3329_ = v_a_3352_;
v_received_3330_ = v___x_3370_;
goto v___jp_3328_;
}
}
else
{
lean_object* v___x_3371_; 
lean_dec_ref_known(v___x_3365_, 1);
v___x_3371_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_3329_ = v_a_3352_;
v_received_3330_ = v___x_3371_;
goto v___jp_3328_;
}
}
}
}
}
else
{
v___y_3349_ = v_a_3352_;
goto v___jp_3348_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3390_, lean_object* v_d_3391_, lean_object* v_a_3392_){
_start:
{
lean_object* v_res_3393_; 
v_res_3393_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1(v_context_3390_, v_d_3391_);
lean_dec_ref(v_context_3390_);
return v_res_3393_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0(lean_object* v_context_3394_, lean_object* v_bytes_3395_){
_start:
{
lean_object* v___x_3397_; 
v___x_3397_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3395_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; lean_object* v___x_3399_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3398_);
lean_dec_ref_known(v___x_3397_, 1);
v___x_3399_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0_spec__1(v_context_3394_, v_a_3398_);
return v___x_3399_;
}
else
{
lean_object* v_a_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3407_; 
v_a_3400_ = lean_ctor_get(v___x_3397_, 0);
v_isSharedCheck_3407_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3407_ == 0)
{
v___x_3402_ = v___x_3397_;
v_isShared_3403_ = v_isSharedCheck_3407_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_a_3400_);
lean_dec(v___x_3397_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3407_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
lean_object* v___x_3405_; 
if (v_isShared_3403_ == 0)
{
v___x_3405_ = v___x_3402_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3406_; 
v_reuseFailAlloc_3406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3406_, 0, v_a_3400_);
v___x_3405_ = v_reuseFailAlloc_3406_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
return v___x_3405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0___boxed(lean_object* v_context_3408_, lean_object* v_bytes_3409_, lean_object* v_a_3410_){
_start:
{
lean_object* v_res_3411_; 
v_res_3411_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0(v_context_3408_, v_bytes_3409_);
lean_dec_ref(v_bytes_3409_);
lean_dec_ref(v_context_3408_);
return v_res_3411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0(lean_object* v_o_3412_, lean_object* v_key_3413_){
_start:
{
lean_object* v_k_3415_; lean_object* v___x_3416_; 
v_k_3415_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3415_, 0, v_key_3413_);
v___x_3416_ = l_Lasm_JS_Wire_encodeIO(v_k_3415_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; uint32_t v___x_3418_; uint32_t v___x_3419_; uint64_t v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; 
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3417_);
lean_dec_ref_known(v___x_3416_, 1);
v___x_3418_ = 203;
v___x_3419_ = lasm_js_value_handle(v_o_3412_);
v___x_3420_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
v___x_3421_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_3422_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3422_, 0, v_o_3412_);
lean_ctor_set(v___x_3422_, 1, v___x_3421_);
v___x_3423_ = lean_unsigned_to_nat(2u);
v___x_3424_ = lean_mk_empty_array_with_capacity(v___x_3423_);
lean_inc_ref(v_k_3415_);
v___x_3425_ = lean_array_push(v___x_3424_, v_k_3415_);
v___x_3426_ = lean_array_push(v___x_3425_, v___x_3422_);
v___x_3427_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3427_, 0, v___x_3426_);
v___x_3428_ = lasm_js_call(v___x_3418_, v___x_3419_, v___x_3420_, v_a_3417_, v___x_3427_);
lean_dec_ref_known(v___x_3427_, 1);
lean_dec(v_a_3417_);
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_object* v_a_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v_a_3429_ = lean_ctor_get(v___x_3428_, 0);
lean_inc(v_a_3429_);
lean_dec_ref_known(v___x_3428_, 1);
v___x_3430_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__1));
v___x_3431_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3415_);
v___x_3432_ = lean_string_append(v___x_3430_, v___x_3431_);
lean_dec_ref(v___x_3431_);
v___x_3433_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0_spec__0(v___x_3432_, v_a_3429_);
lean_dec(v_a_3429_);
lean_dec_ref(v___x_3432_);
return v___x_3433_;
}
else
{
lean_object* v_a_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3441_; 
lean_dec_ref_known(v_k_3415_, 1);
v_a_3434_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3441_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3441_ == 0)
{
v___x_3436_ = v___x_3428_;
v_isShared_3437_ = v_isSharedCheck_3441_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_a_3434_);
lean_dec(v___x_3428_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3441_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v___x_3439_; 
if (v_isShared_3437_ == 0)
{
v___x_3439_ = v___x_3436_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3440_; 
v_reuseFailAlloc_3440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3440_, 0, v_a_3434_);
v___x_3439_ = v_reuseFailAlloc_3440_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
return v___x_3439_;
}
}
}
}
else
{
lean_object* v_a_3442_; lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3449_; 
lean_dec_ref_known(v_k_3415_, 1);
lean_dec(v_o_3412_);
v_a_3442_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3449_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3449_ == 0)
{
v___x_3444_ = v___x_3416_;
v_isShared_3445_ = v_isSharedCheck_3449_;
goto v_resetjp_3443_;
}
else
{
lean_inc(v_a_3442_);
lean_dec(v___x_3416_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3449_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
lean_object* v___x_3447_; 
if (v_isShared_3445_ == 0)
{
v___x_3447_ = v___x_3444_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3448_; 
v_reuseFailAlloc_3448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3448_, 0, v_a_3442_);
v___x_3447_ = v_reuseFailAlloc_3448_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
return v___x_3447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0___boxed(lean_object* v_o_3450_, lean_object* v_key_3451_, lean_object* v_a_3452_){
_start:
{
lean_object* v_res_3453_; 
v_res_3453_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0(v_o_3450_, v_key_3451_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_value(lean_object* v_self_3454_){
_start:
{
lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3456_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_3457_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvU64_value_spec__0(v_self_3454_, v___x_3456_);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_KvU64_value___boxed(lean_object* v_self_3458_, lean_object* v_a_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l_Lasm_JS_Deno_KvU64_value(v_self_3458_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(size_t v_sz_3461_, size_t v_i_3462_, lean_object* v_bs_3463_){
_start:
{
uint8_t v___x_3464_; 
v___x_3464_ = lean_usize_dec_lt(v_i_3462_, v_sz_3461_);
if (v___x_3464_ == 0)
{
return v_bs_3463_;
}
else
{
lean_object* v_v_3465_; lean_object* v___x_3466_; lean_object* v_bs_x27_3467_; lean_object* v___y_3469_; 
v_v_3465_ = lean_array_uget(v_bs_3463_, v_i_3462_);
v___x_3466_ = lean_unsigned_to_nat(0u);
v_bs_x27_3467_ = lean_array_uset(v_bs_3463_, v_i_3462_, v___x_3466_);
switch(lean_obj_tag(v_v_3465_))
{
case 0:
{
lean_object* v_value_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3481_; 
v_value_3474_ = lean_ctor_get(v_v_3465_, 0);
v_isSharedCheck_3481_ = !lean_is_exclusive(v_v_3465_);
if (v_isSharedCheck_3481_ == 0)
{
v___x_3476_ = v_v_3465_;
v_isShared_3477_ = v_isSharedCheck_3481_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_value_3474_);
lean_dec(v_v_3465_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3481_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
lean_object* v___x_3479_; 
if (v_isShared_3477_ == 0)
{
lean_ctor_set_tag(v___x_3476_, 6);
v___x_3479_ = v___x_3476_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v_value_3474_);
v___x_3479_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
v___y_3469_ = v___x_3479_;
goto v___jp_3468_;
}
}
}
case 1:
{
lean_object* v_value_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3489_; 
v_value_3482_ = lean_ctor_get(v_v_3465_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v_v_3465_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3484_ = v_v_3465_;
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_value_3482_);
lean_dec(v_v_3465_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3487_; 
if (v_isShared_3485_ == 0)
{
lean_ctor_set_tag(v___x_3484_, 4);
v___x_3487_ = v___x_3484_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_value_3482_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
v___y_3469_ = v___x_3487_;
goto v___jp_3468_;
}
}
}
case 2:
{
double v_value_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3497_; 
v_value_3490_ = lean_ctor_get_float(v_v_3465_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v_v_3465_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3492_ = v_v_3465_;
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
else
{
lean_dec(v_v_3465_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
lean_ctor_set_tag(v___x_3492_, 3);
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_3496_, 0, v_value_3490_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
v___y_3469_ = v___x_3495_;
goto v___jp_3468_;
}
}
}
case 3:
{
lean_object* v_value_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3505_; 
v_value_3498_ = lean_ctor_get(v_v_3465_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v_v_3465_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3500_ = v_v_3465_;
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_value_3498_);
lean_dec(v_v_3465_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v___x_3503_; 
if (v_isShared_3501_ == 0)
{
lean_ctor_set_tag(v___x_3500_, 5);
v___x_3503_ = v___x_3500_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v_value_3498_);
v___x_3503_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
v___y_3469_ = v___x_3503_;
goto v___jp_3468_;
}
}
}
default: 
{
uint8_t v_value_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3513_; 
v_value_3506_ = lean_ctor_get_uint8(v_v_3465_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v_v_3465_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3508_ = v_v_3465_;
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
else
{
lean_dec(v_v_3465_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
lean_ctor_set_tag(v___x_3508_, 2);
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_3512_, 0, v_value_3506_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
v___y_3469_ = v___x_3511_;
goto v___jp_3468_;
}
}
}
}
v___jp_3468_:
{
size_t v___x_3470_; size_t v___x_3471_; lean_object* v___x_3472_; 
v___x_3470_ = ((size_t)1ULL);
v___x_3471_ = lean_usize_add(v_i_3462_, v___x_3470_);
v___x_3472_ = lean_array_uset(v_bs_x27_3467_, v_i_3462_, v___y_3469_);
v_i_3462_ = v___x_3471_;
v_bs_3463_ = v___x_3472_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0___boxed(lean_object* v_sz_3514_, lean_object* v_i_3515_, lean_object* v_bs_3516_){
_start:
{
size_t v_sz_boxed_3517_; size_t v_i_boxed_3518_; lean_object* v_res_3519_; 
v_sz_boxed_3517_ = lean_unbox_usize(v_sz_3514_);
lean_dec(v_sz_3514_);
v_i_boxed_3518_ = lean_unbox_usize(v_i_3515_);
lean_dec(v_i_3515_);
v_res_3519_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_boxed_3517_, v_i_boxed_3518_, v_bs_3516_);
return v_res_3519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1(size_t v_sz_3520_, size_t v_i_3521_, lean_object* v_bs_3522_){
_start:
{
uint8_t v___x_3523_; 
v___x_3523_ = lean_usize_dec_lt(v_i_3521_, v_sz_3520_);
if (v___x_3523_ == 0)
{
return v_bs_3522_;
}
else
{
lean_object* v_v_3524_; lean_object* v_key_3525_; lean_object* v_versionstamp_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3562_; 
v_v_3524_ = lean_array_uget(v_bs_3522_, v_i_3521_);
v_key_3525_ = lean_ctor_get(v_v_3524_, 0);
v_versionstamp_3526_ = lean_ctor_get(v_v_3524_, 1);
v_isSharedCheck_3562_ = !lean_is_exclusive(v_v_3524_);
if (v_isSharedCheck_3562_ == 0)
{
v___x_3528_ = v_v_3524_;
v_isShared_3529_ = v_isSharedCheck_3562_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_versionstamp_3526_);
lean_inc(v_key_3525_);
lean_dec(v_v_3524_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3562_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v___x_3530_; lean_object* v_bs_x27_3531_; lean_object* v___x_3532_; size_t v_sz_3533_; size_t v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3538_; 
v___x_3530_ = lean_unsigned_to_nat(0u);
v_bs_x27_3531_ = lean_array_uset(v_bs_3522_, v_i_3521_, v___x_3530_);
v___x_3532_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v_sz_3533_ = lean_array_size(v_key_3525_);
v___x_3534_ = ((size_t)0ULL);
v___x_3535_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3533_, v___x_3534_, v_key_3525_);
v___x_3536_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3535_);
if (v_isShared_3529_ == 0)
{
lean_ctor_set(v___x_3528_, 1, v___x_3536_);
lean_ctor_set(v___x_3528_, 0, v___x_3532_);
v___x_3538_ = v___x_3528_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3561_; 
v_reuseFailAlloc_3561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3561_, 0, v___x_3532_);
lean_ctor_set(v_reuseFailAlloc_3561_, 1, v___x_3536_);
v___x_3538_ = v_reuseFailAlloc_3561_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
lean_object* v___x_3539_; lean_object* v___y_3541_; 
v___x_3539_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
if (lean_obj_tag(v_versionstamp_3526_) == 0)
{
lean_object* v___x_3552_; 
v___x_3552_ = lean_box(1);
v___y_3541_ = v___x_3552_;
goto v___jp_3540_;
}
else
{
lean_object* v_val_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3560_; 
v_val_3553_ = lean_ctor_get(v_versionstamp_3526_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v_versionstamp_3526_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3555_ = v_versionstamp_3526_;
v_isShared_3556_ = v_isSharedCheck_3560_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_val_3553_);
lean_dec(v_versionstamp_3526_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3560_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v___x_3558_; 
if (v_isShared_3556_ == 0)
{
lean_ctor_set_tag(v___x_3555_, 4);
v___x_3558_ = v___x_3555_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_val_3553_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
v___y_3541_ = v___x_3558_;
goto v___jp_3540_;
}
}
}
v___jp_3540_:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; size_t v___x_3548_; size_t v___x_3549_; lean_object* v___x_3550_; 
v___x_3542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3539_);
lean_ctor_set(v___x_3542_, 1, v___y_3541_);
v___x_3543_ = lean_unsigned_to_nat(2u);
v___x_3544_ = lean_mk_empty_array_with_capacity(v___x_3543_);
v___x_3545_ = lean_array_push(v___x_3544_, v___x_3538_);
v___x_3546_ = lean_array_push(v___x_3545_, v___x_3542_);
v___x_3547_ = l_Lasm_JS_Web_Support_fields(v___x_3546_);
lean_dec_ref(v___x_3546_);
v___x_3548_ = ((size_t)1ULL);
v___x_3549_ = lean_usize_add(v_i_3521_, v___x_3548_);
v___x_3550_ = lean_array_uset(v_bs_x27_3531_, v_i_3521_, v___x_3547_);
v_i_3521_ = v___x_3549_;
v_bs_3522_ = v___x_3550_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1___boxed(lean_object* v_sz_3563_, lean_object* v_i_3564_, lean_object* v_bs_3565_){
_start:
{
size_t v_sz_boxed_3566_; size_t v_i_boxed_3567_; lean_object* v_res_3568_; 
v_sz_boxed_3566_ = lean_unbox_usize(v_sz_3563_);
lean_dec(v_sz_3563_);
v_i_boxed_3567_ = lean_unbox_usize(v_i_3564_);
lean_dec(v_i_3564_);
v_res_3568_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1(v_sz_boxed_3566_, v_i_boxed_3567_, v_bs_3565_);
return v_res_3568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_check(lean_object* v_self_3570_, lean_object* v_checks_3571_){
_start:
{
lean_object* v___x_3573_; lean_object* v___x_3574_; size_t v_sz_3575_; size_t v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; 
v___x_3573_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_check___closed__0));
v___x_3574_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v_sz_3575_ = lean_array_size(v_checks_3571_);
v___x_3576_ = ((size_t)0ULL);
v___x_3577_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__1(v_sz_3575_, v___x_3576_, v_checks_3571_);
v___x_3578_ = l_Lasm_JS_Web_Support_argsWith(v___x_3574_, v___x_3577_);
lean_dec_ref(v___x_3577_);
v___x_3579_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3570_, v___x_3573_, v___x_3578_);
if (lean_obj_tag(v___x_3579_) == 0)
{
lean_object* v_a_3580_; lean_object* v___x_3582_; uint8_t v_isShared_3583_; uint8_t v_isSharedCheck_3587_; 
v_a_3580_ = lean_ctor_get(v___x_3579_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3579_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3582_ = v___x_3579_;
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
else
{
lean_inc(v_a_3580_);
lean_dec(v___x_3579_);
v___x_3582_ = lean_box(0);
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
v_resetjp_3581_:
{
lean_object* v___x_3585_; 
if (v_isShared_3583_ == 0)
{
v___x_3585_ = v___x_3582_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_a_3580_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
}
else
{
lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3595_; 
v_a_3588_ = lean_ctor_get(v___x_3579_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3579_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3590_ = v___x_3579_;
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_dec(v___x_3579_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3595_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3593_; 
if (v_isShared_3591_ == 0)
{
v___x_3593_ = v___x_3590_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v_a_3588_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_check___boxed(lean_object* v_self_3596_, lean_object* v_checks_3597_, lean_object* v_a_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l_Lasm_JS_Deno_AtomicOperation_check(v_self_3596_, v_checks_3597_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0(size_t v_sz_3600_, size_t v_i_3601_, lean_object* v_bs_3602_){
_start:
{
uint8_t v___x_3603_; 
v___x_3603_ = lean_usize_dec_lt(v_i_3601_, v_sz_3600_);
if (v___x_3603_ == 0)
{
return v_bs_3602_;
}
else
{
lean_object* v_v_3604_; lean_object* v_key_3605_; uint8_t v_type_3606_; lean_object* v_value_3607_; lean_object* v_expireIn_3608_; lean_object* v___x_3609_; lean_object* v_bs_x27_3610_; lean_object* v___x_3611_; size_t v_sz_3612_; size_t v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___y_3619_; 
v_v_3604_ = lean_array_uget_borrowed(v_bs_3602_, v_i_3601_);
v_key_3605_ = lean_ctor_get(v_v_3604_, 0);
lean_inc_ref(v_key_3605_);
v_type_3606_ = lean_ctor_get_uint8(v_v_3604_, sizeof(void*)*3);
v_value_3607_ = lean_ctor_get(v_v_3604_, 1);
lean_inc(v_value_3607_);
v_expireIn_3608_ = lean_ctor_get(v_v_3604_, 2);
lean_inc(v_expireIn_3608_);
v___x_3609_ = lean_unsigned_to_nat(0u);
v_bs_x27_3610_ = lean_array_uset(v_bs_3602_, v_i_3601_, v___x_3609_);
v___x_3611_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
v_sz_3612_ = lean_array_size(v_key_3605_);
v___x_3613_ = ((size_t)0ULL);
v___x_3614_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3612_, v___x_3613_, v_key_3605_);
v___x_3615_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3615_, 0, v___x_3614_);
v___x_3616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3616_, 0, v___x_3611_);
lean_ctor_set(v___x_3616_, 1, v___x_3615_);
v___x_3617_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__0));
switch(v_type_3606_)
{
case 0:
{
lean_object* v___x_3637_; 
v___x_3637_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__1));
v___y_3619_ = v___x_3637_;
goto v___jp_3618_;
}
case 1:
{
lean_object* v___x_3638_; 
v___x_3638_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__3));
v___y_3619_ = v___x_3638_;
goto v___jp_3618_;
}
case 2:
{
lean_object* v___x_3639_; 
v___x_3639_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__5));
v___y_3619_ = v___x_3639_;
goto v___jp_3618_;
}
case 3:
{
lean_object* v___x_3640_; 
v___x_3640_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__7));
v___y_3619_ = v___x_3640_;
goto v___jp_3618_;
}
default: 
{
lean_object* v___x_3641_; 
v___x_3641_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__9));
v___y_3619_ = v___x_3641_;
goto v___jp_3618_;
}
}
v___jp_3618_:
{
lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; size_t v___x_3633_; size_t v___x_3634_; lean_object* v___x_3635_; 
lean_inc(v___y_3619_);
v___x_3620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3620_, 0, v___x_3617_);
lean_ctor_set(v___x_3620_, 1, v___y_3619_);
v___x_3621_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
v___x_3622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3622_, 0, v___x_3621_);
lean_ctor_set(v___x_3622_, 1, v_value_3607_);
v___x_3623_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_3624_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_expireIn_3608_);
lean_dec(v_expireIn_3608_);
v___x_3625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3623_);
lean_ctor_set(v___x_3625_, 1, v___x_3624_);
v___x_3626_ = lean_unsigned_to_nat(4u);
v___x_3627_ = lean_mk_empty_array_with_capacity(v___x_3626_);
v___x_3628_ = lean_array_push(v___x_3627_, v___x_3616_);
v___x_3629_ = lean_array_push(v___x_3628_, v___x_3620_);
v___x_3630_ = lean_array_push(v___x_3629_, v___x_3622_);
v___x_3631_ = lean_array_push(v___x_3630_, v___x_3625_);
v___x_3632_ = l_Lasm_JS_Web_Support_fields(v___x_3631_);
lean_dec_ref(v___x_3631_);
v___x_3633_ = ((size_t)1ULL);
v___x_3634_ = lean_usize_add(v_i_3601_, v___x_3633_);
v___x_3635_ = lean_array_uset(v_bs_x27_3610_, v_i_3601_, v___x_3632_);
v_i_3601_ = v___x_3634_;
v_bs_3602_ = v___x_3635_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0___boxed(lean_object* v_sz_3642_, lean_object* v_i_3643_, lean_object* v_bs_3644_){
_start:
{
size_t v_sz_boxed_3645_; size_t v_i_boxed_3646_; lean_object* v_res_3647_; 
v_sz_boxed_3645_ = lean_unbox_usize(v_sz_3642_);
lean_dec(v_sz_3642_);
v_i_boxed_3646_ = lean_unbox_usize(v_i_3643_);
lean_dec(v_i_3643_);
v_res_3647_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0(v_sz_boxed_3645_, v_i_boxed_3646_, v_bs_3644_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_mutate(lean_object* v_self_3649_, lean_object* v_mutations_3650_){
_start:
{
lean_object* v___x_3652_; lean_object* v___x_3653_; size_t v_sz_3654_; size_t v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___x_3652_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_mutate___closed__0));
v___x_3653_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v_sz_3654_ = lean_array_size(v_mutations_3650_);
v___x_3655_ = ((size_t)0ULL);
v___x_3656_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_mutate_spec__0(v_sz_3654_, v___x_3655_, v_mutations_3650_);
v___x_3657_ = l_Lasm_JS_Web_Support_argsWith(v___x_3653_, v___x_3656_);
lean_dec_ref(v___x_3656_);
v___x_3658_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3649_, v___x_3652_, v___x_3657_);
if (lean_obj_tag(v___x_3658_) == 0)
{
lean_object* v_a_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3666_; 
v_a_3659_ = lean_ctor_get(v___x_3658_, 0);
v_isSharedCheck_3666_ = !lean_is_exclusive(v___x_3658_);
if (v_isSharedCheck_3666_ == 0)
{
v___x_3661_ = v___x_3658_;
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_a_3659_);
lean_dec(v___x_3658_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3664_; 
if (v_isShared_3662_ == 0)
{
v___x_3664_ = v___x_3661_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v_a_3659_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
return v___x_3664_;
}
}
}
else
{
lean_object* v_a_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3674_; 
v_a_3667_ = lean_ctor_get(v___x_3658_, 0);
v_isSharedCheck_3674_ = !lean_is_exclusive(v___x_3658_);
if (v_isSharedCheck_3674_ == 0)
{
v___x_3669_ = v___x_3658_;
v_isShared_3670_ = v_isSharedCheck_3674_;
goto v_resetjp_3668_;
}
else
{
lean_inc(v_a_3667_);
lean_dec(v___x_3658_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3674_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
lean_object* v___x_3672_; 
if (v_isShared_3670_ == 0)
{
v___x_3672_ = v___x_3669_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v_a_3667_);
v___x_3672_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
return v___x_3672_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_mutate___boxed(lean_object* v_self_3675_, lean_object* v_mutations_3676_, lean_object* v_a_3677_){
_start:
{
lean_object* v_res_3678_; 
v_res_3678_ = l_Lasm_JS_Deno_AtomicOperation_mutate(v_self_3675_, v_mutations_3676_);
return v_res_3678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_sum(lean_object* v_self_3679_, lean_object* v_key_3680_, lean_object* v_n_3681_){
_start:
{
lean_object* v___x_3683_; size_t v_sz_3684_; size_t v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; 
v___x_3683_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__4));
v_sz_3684_ = lean_array_size(v_key_3680_);
v___x_3685_ = ((size_t)0ULL);
v___x_3686_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3684_, v___x_3685_, v_key_3680_);
v___x_3687_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3686_);
v___x_3688_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3688_, 0, v_n_3681_);
v___x_3689_ = lean_unsigned_to_nat(2u);
v___x_3690_ = lean_mk_empty_array_with_capacity(v___x_3689_);
v___x_3691_ = lean_array_push(v___x_3690_, v___x_3687_);
v___x_3692_ = lean_array_push(v___x_3691_, v___x_3688_);
v___x_3693_ = l_Lasm_JS_Web_Support_args(v___x_3692_);
v___x_3694_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3679_, v___x_3683_, v___x_3693_);
if (lean_obj_tag(v___x_3694_) == 0)
{
lean_object* v_a_3695_; lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3702_; 
v_a_3695_ = lean_ctor_get(v___x_3694_, 0);
v_isSharedCheck_3702_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3702_ == 0)
{
v___x_3697_ = v___x_3694_;
v_isShared_3698_ = v_isSharedCheck_3702_;
goto v_resetjp_3696_;
}
else
{
lean_inc(v_a_3695_);
lean_dec(v___x_3694_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3702_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
lean_object* v___x_3700_; 
if (v_isShared_3698_ == 0)
{
v___x_3700_ = v___x_3697_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v_a_3695_);
v___x_3700_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
return v___x_3700_;
}
}
}
else
{
lean_object* v_a_3703_; lean_object* v___x_3705_; uint8_t v_isShared_3706_; uint8_t v_isSharedCheck_3710_; 
v_a_3703_ = lean_ctor_get(v___x_3694_, 0);
v_isSharedCheck_3710_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3710_ == 0)
{
v___x_3705_ = v___x_3694_;
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
else
{
lean_inc(v_a_3703_);
lean_dec(v___x_3694_);
v___x_3705_ = lean_box(0);
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
v_resetjp_3704_:
{
lean_object* v___x_3708_; 
if (v_isShared_3706_ == 0)
{
v___x_3708_ = v___x_3705_;
goto v_reusejp_3707_;
}
else
{
lean_object* v_reuseFailAlloc_3709_; 
v_reuseFailAlloc_3709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3709_, 0, v_a_3703_);
v___x_3708_ = v_reuseFailAlloc_3709_;
goto v_reusejp_3707_;
}
v_reusejp_3707_:
{
return v___x_3708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_sum___boxed(lean_object* v_self_3711_, lean_object* v_key_3712_, lean_object* v_n_3713_, lean_object* v_a_3714_){
_start:
{
lean_object* v_res_3715_; 
v_res_3715_ = l_Lasm_JS_Deno_AtomicOperation_sum(v_self_3711_, v_key_3712_, v_n_3713_);
return v_res_3715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_min(lean_object* v_self_3716_, lean_object* v_key_3717_, lean_object* v_n_3718_){
_start:
{
lean_object* v___x_3720_; size_t v_sz_3721_; size_t v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; 
v___x_3720_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__8));
v_sz_3721_ = lean_array_size(v_key_3717_);
v___x_3722_ = ((size_t)0ULL);
v___x_3723_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3721_, v___x_3722_, v_key_3717_);
v___x_3724_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3723_);
v___x_3725_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3725_, 0, v_n_3718_);
v___x_3726_ = lean_unsigned_to_nat(2u);
v___x_3727_ = lean_mk_empty_array_with_capacity(v___x_3726_);
v___x_3728_ = lean_array_push(v___x_3727_, v___x_3724_);
v___x_3729_ = lean_array_push(v___x_3728_, v___x_3725_);
v___x_3730_ = l_Lasm_JS_Web_Support_args(v___x_3729_);
v___x_3731_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3716_, v___x_3720_, v___x_3730_);
if (lean_obj_tag(v___x_3731_) == 0)
{
lean_object* v_a_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3739_; 
v_a_3732_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3734_ = v___x_3731_;
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_a_3732_);
lean_dec(v___x_3731_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
lean_object* v___x_3737_; 
if (v_isShared_3735_ == 0)
{
v___x_3737_ = v___x_3734_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v_a_3732_);
v___x_3737_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
return v___x_3737_;
}
}
}
else
{
lean_object* v_a_3740_; lean_object* v___x_3742_; uint8_t v_isShared_3743_; uint8_t v_isSharedCheck_3747_; 
v_a_3740_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_3747_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3747_ == 0)
{
v___x_3742_ = v___x_3731_;
v_isShared_3743_ = v_isSharedCheck_3747_;
goto v_resetjp_3741_;
}
else
{
lean_inc(v_a_3740_);
lean_dec(v___x_3731_);
v___x_3742_ = lean_box(0);
v_isShared_3743_ = v_isSharedCheck_3747_;
goto v_resetjp_3741_;
}
v_resetjp_3741_:
{
lean_object* v___x_3745_; 
if (v_isShared_3743_ == 0)
{
v___x_3745_ = v___x_3742_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3746_; 
v_reuseFailAlloc_3746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3746_, 0, v_a_3740_);
v___x_3745_ = v_reuseFailAlloc_3746_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
return v___x_3745_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_min___boxed(lean_object* v_self_3748_, lean_object* v_key_3749_, lean_object* v_n_3750_, lean_object* v_a_3751_){
_start:
{
lean_object* v_res_3752_; 
v_res_3752_ = l_Lasm_JS_Deno_AtomicOperation_min(v_self_3748_, v_key_3749_, v_n_3750_);
return v_res_3752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_max(lean_object* v_self_3753_, lean_object* v_key_3754_, lean_object* v_n_3755_){
_start:
{
lean_object* v___x_3757_; size_t v_sz_3758_; size_t v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; 
v___x_3757_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__6));
v_sz_3758_ = lean_array_size(v_key_3754_);
v___x_3759_ = ((size_t)0ULL);
v___x_3760_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3758_, v___x_3759_, v_key_3754_);
v___x_3761_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3761_, 0, v___x_3760_);
v___x_3762_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3762_, 0, v_n_3755_);
v___x_3763_ = lean_unsigned_to_nat(2u);
v___x_3764_ = lean_mk_empty_array_with_capacity(v___x_3763_);
v___x_3765_ = lean_array_push(v___x_3764_, v___x_3761_);
v___x_3766_ = lean_array_push(v___x_3765_, v___x_3762_);
v___x_3767_ = l_Lasm_JS_Web_Support_args(v___x_3766_);
v___x_3768_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3753_, v___x_3757_, v___x_3767_);
if (lean_obj_tag(v___x_3768_) == 0)
{
lean_object* v_a_3769_; lean_object* v___x_3771_; uint8_t v_isShared_3772_; uint8_t v_isSharedCheck_3776_; 
v_a_3769_ = lean_ctor_get(v___x_3768_, 0);
v_isSharedCheck_3776_ = !lean_is_exclusive(v___x_3768_);
if (v_isSharedCheck_3776_ == 0)
{
v___x_3771_ = v___x_3768_;
v_isShared_3772_ = v_isSharedCheck_3776_;
goto v_resetjp_3770_;
}
else
{
lean_inc(v_a_3769_);
lean_dec(v___x_3768_);
v___x_3771_ = lean_box(0);
v_isShared_3772_ = v_isSharedCheck_3776_;
goto v_resetjp_3770_;
}
v_resetjp_3770_:
{
lean_object* v___x_3774_; 
if (v_isShared_3772_ == 0)
{
v___x_3774_ = v___x_3771_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v_a_3769_);
v___x_3774_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
return v___x_3774_;
}
}
}
else
{
lean_object* v_a_3777_; lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3784_; 
v_a_3777_ = lean_ctor_get(v___x_3768_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v___x_3768_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3779_ = v___x_3768_;
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
else
{
lean_inc(v_a_3777_);
lean_dec(v___x_3768_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3782_; 
if (v_isShared_3780_ == 0)
{
v___x_3782_ = v___x_3779_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_a_3777_);
v___x_3782_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
return v___x_3782_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_max___boxed(lean_object* v_self_3785_, lean_object* v_key_3786_, lean_object* v_n_3787_, lean_object* v_a_3788_){
_start:
{
lean_object* v_res_3789_; 
v_res_3789_ = l_Lasm_JS_Deno_AtomicOperation_max(v_self_3785_, v_key_3786_, v_n_3787_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0(lean_object* v_x_3790_){
_start:
{
if (lean_obj_tag(v_x_3790_) == 0)
{
lean_object* v___x_3791_; 
v___x_3791_ = lean_box(0);
return v___x_3791_;
}
else
{
lean_object* v_val_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; 
v_val_3792_ = lean_ctor_get(v_x_3790_, 0);
v___x_3793_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_3794_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_val_3792_);
v___x_3795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3793_);
lean_ctor_set(v___x_3795_, 1, v___x_3794_);
v___x_3796_ = lean_unsigned_to_nat(1u);
v___x_3797_ = lean_mk_empty_array_with_capacity(v___x_3796_);
v___x_3798_ = lean_array_push(v___x_3797_, v___x_3795_);
v___x_3799_ = l_Lasm_JS_Web_Support_fields(v___x_3798_);
lean_dec_ref(v___x_3798_);
return v___x_3799_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0___boxed(lean_object* v_x_3800_){
_start:
{
lean_object* v_res_3801_; 
v_res_3801_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0(v_x_3800_);
lean_dec(v_x_3800_);
return v_res_3801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_set(lean_object* v_self_3802_, lean_object* v_key_3803_, lean_object* v_value_3804_, lean_object* v_options_3805_){
_start:
{
lean_object* v___x_3807_; size_t v_sz_3808_; size_t v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; 
v___x_3807_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__0));
v_sz_3808_ = lean_array_size(v_key_3803_);
v___x_3809_ = ((size_t)0ULL);
v___x_3810_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3808_, v___x_3809_, v_key_3803_);
v___x_3811_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3810_);
v___x_3812_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_set_spec__0(v_options_3805_);
v___x_3813_ = lean_unsigned_to_nat(3u);
v___x_3814_ = lean_mk_empty_array_with_capacity(v___x_3813_);
v___x_3815_ = lean_array_push(v___x_3814_, v___x_3811_);
v___x_3816_ = lean_array_push(v___x_3815_, v_value_3804_);
v___x_3817_ = lean_array_push(v___x_3816_, v___x_3812_);
v___x_3818_ = l_Lasm_JS_Web_Support_args(v___x_3817_);
v___x_3819_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3802_, v___x_3807_, v___x_3818_);
if (lean_obj_tag(v___x_3819_) == 0)
{
lean_object* v_a_3820_; lean_object* v___x_3822_; uint8_t v_isShared_3823_; uint8_t v_isSharedCheck_3827_; 
v_a_3820_ = lean_ctor_get(v___x_3819_, 0);
v_isSharedCheck_3827_ = !lean_is_exclusive(v___x_3819_);
if (v_isSharedCheck_3827_ == 0)
{
v___x_3822_ = v___x_3819_;
v_isShared_3823_ = v_isSharedCheck_3827_;
goto v_resetjp_3821_;
}
else
{
lean_inc(v_a_3820_);
lean_dec(v___x_3819_);
v___x_3822_ = lean_box(0);
v_isShared_3823_ = v_isSharedCheck_3827_;
goto v_resetjp_3821_;
}
v_resetjp_3821_:
{
lean_object* v___x_3825_; 
if (v_isShared_3823_ == 0)
{
v___x_3825_ = v___x_3822_;
goto v_reusejp_3824_;
}
else
{
lean_object* v_reuseFailAlloc_3826_; 
v_reuseFailAlloc_3826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3826_, 0, v_a_3820_);
v___x_3825_ = v_reuseFailAlloc_3826_;
goto v_reusejp_3824_;
}
v_reusejp_3824_:
{
return v___x_3825_;
}
}
}
else
{
lean_object* v_a_3828_; lean_object* v___x_3830_; uint8_t v_isShared_3831_; uint8_t v_isSharedCheck_3835_; 
v_a_3828_ = lean_ctor_get(v___x_3819_, 0);
v_isSharedCheck_3835_ = !lean_is_exclusive(v___x_3819_);
if (v_isSharedCheck_3835_ == 0)
{
v___x_3830_ = v___x_3819_;
v_isShared_3831_ = v_isSharedCheck_3835_;
goto v_resetjp_3829_;
}
else
{
lean_inc(v_a_3828_);
lean_dec(v___x_3819_);
v___x_3830_ = lean_box(0);
v_isShared_3831_ = v_isSharedCheck_3835_;
goto v_resetjp_3829_;
}
v_resetjp_3829_:
{
lean_object* v___x_3833_; 
if (v_isShared_3831_ == 0)
{
v___x_3833_ = v___x_3830_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v_a_3828_);
v___x_3833_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
return v___x_3833_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_set___boxed(lean_object* v_self_3836_, lean_object* v_key_3837_, lean_object* v_value_3838_, lean_object* v_options_3839_, lean_object* v_a_3840_){
_start:
{
lean_object* v_res_3841_; 
v_res_3841_ = l_Lasm_JS_Deno_AtomicOperation_set(v_self_3836_, v_key_3837_, v_value_3838_, v_options_3839_);
lean_dec(v_options_3839_);
return v_res_3841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_delete(lean_object* v_self_3842_, lean_object* v_key_3843_){
_start:
{
lean_object* v___x_3845_; size_t v_sz_3846_; size_t v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; 
v___x_3845_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__2));
v_sz_3846_ = lean_array_size(v_key_3843_);
v___x_3847_ = ((size_t)0ULL);
v___x_3848_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3846_, v___x_3847_, v_key_3843_);
v___x_3849_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3848_);
v___x_3850_ = lean_unsigned_to_nat(1u);
v___x_3851_ = lean_mk_empty_array_with_capacity(v___x_3850_);
v___x_3852_ = lean_array_push(v___x_3851_, v___x_3849_);
v___x_3853_ = l_Lasm_JS_Web_Support_args(v___x_3852_);
v___x_3854_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3842_, v___x_3845_, v___x_3853_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_delete___boxed(lean_object* v_self_3871_, lean_object* v_key_3872_, lean_object* v_a_3873_){
_start:
{
lean_object* v_res_3874_; 
v_res_3874_ = l_Lasm_JS_Deno_AtomicOperation_delete(v_self_3871_, v_key_3872_);
return v_res_3874_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(size_t v_sz_3875_, size_t v_i_3876_, lean_object* v_bs_3877_){
_start:
{
uint8_t v___x_3878_; 
v___x_3878_ = lean_usize_dec_lt(v_i_3876_, v_sz_3875_);
if (v___x_3878_ == 0)
{
return v_bs_3877_;
}
else
{
lean_object* v_v_3879_; lean_object* v___x_3880_; lean_object* v_bs_x27_3881_; lean_object* v___x_3882_; double v___x_3883_; size_t v___x_3884_; size_t v___x_3885_; lean_object* v___x_3886_; 
v_v_3879_ = lean_array_uget(v_bs_3877_, v_i_3876_);
v___x_3880_ = lean_unsigned_to_nat(0u);
v_bs_x27_3881_ = lean_array_uset(v_bs_3877_, v_i_3876_, v___x_3880_);
v___x_3882_ = lean_alloc_ctor(3, 0, 8);
v___x_3883_ = lean_unbox_float(v_v_3879_);
lean_dec(v_v_3879_);
lean_ctor_set_float(v___x_3882_, 0, v___x_3883_);
v___x_3884_ = ((size_t)1ULL);
v___x_3885_ = lean_usize_add(v_i_3876_, v___x_3884_);
v___x_3886_ = lean_array_uset(v_bs_x27_3881_, v_i_3876_, v___x_3882_);
v_i_3876_ = v___x_3885_;
v_bs_3877_ = v___x_3886_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3___boxed(lean_object* v_sz_3888_, lean_object* v_i_3889_, lean_object* v_bs_3890_){
_start:
{
size_t v_sz_boxed_3891_; size_t v_i_boxed_3892_; lean_object* v_res_3893_; 
v_sz_boxed_3891_ = lean_unbox_usize(v_sz_3888_);
lean_dec(v_sz_3888_);
v_i_boxed_3892_ = lean_unbox_usize(v_i_3889_);
lean_dec(v_i_3889_);
v_res_3893_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(v_sz_boxed_3891_, v_i_boxed_3892_, v_bs_3890_);
return v_res_3893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(lean_object* v_x_3894_){
_start:
{
if (lean_obj_tag(v_x_3894_) == 0)
{
lean_object* v___x_3895_; 
v___x_3895_ = lean_box(0);
return v___x_3895_;
}
else
{
lean_object* v_val_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3906_; 
v_val_3896_ = lean_ctor_get(v_x_3894_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v_x_3894_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3898_ = v_x_3894_;
v_isShared_3899_ = v_isSharedCheck_3906_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_val_3896_);
lean_dec(v_x_3894_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3906_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
size_t v_sz_3900_; size_t v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3904_; 
v_sz_3900_ = lean_array_size(v_val_3896_);
v___x_3901_ = ((size_t)0ULL);
v___x_3902_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(v_sz_3900_, v___x_3901_, v_val_3896_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set_tag(v___x_3898_, 7);
lean_ctor_set(v___x_3898_, 0, v___x_3902_);
v___x_3904_ = v___x_3898_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v___x_3902_);
v___x_3904_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3903_;
}
v_reusejp_3903_:
{
return v___x_3904_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(size_t v_sz_3907_, size_t v_i_3908_, lean_object* v_bs_3909_){
_start:
{
uint8_t v___x_3910_; 
v___x_3910_ = lean_usize_dec_lt(v_i_3908_, v_sz_3907_);
if (v___x_3910_ == 0)
{
return v_bs_3909_;
}
else
{
lean_object* v_v_3911_; lean_object* v___x_3912_; lean_object* v_bs_x27_3913_; size_t v_sz_3914_; size_t v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; size_t v___x_3918_; size_t v___x_3919_; lean_object* v___x_3920_; 
v_v_3911_ = lean_array_uget(v_bs_3909_, v_i_3908_);
v___x_3912_ = lean_unsigned_to_nat(0u);
v_bs_x27_3913_ = lean_array_uset(v_bs_3909_, v_i_3908_, v___x_3912_);
v_sz_3914_ = lean_array_size(v_v_3911_);
v___x_3915_ = ((size_t)0ULL);
v___x_3916_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_3914_, v___x_3915_, v_v_3911_);
v___x_3917_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3917_, 0, v___x_3916_);
v___x_3918_ = ((size_t)1ULL);
v___x_3919_ = lean_usize_add(v_i_3908_, v___x_3918_);
v___x_3920_ = lean_array_uset(v_bs_x27_3913_, v_i_3908_, v___x_3917_);
v_i_3908_ = v___x_3919_;
v_bs_3909_ = v___x_3920_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3922_, lean_object* v_i_3923_, lean_object* v_bs_3924_){
_start:
{
size_t v_sz_boxed_3925_; size_t v_i_boxed_3926_; lean_object* v_res_3927_; 
v_sz_boxed_3925_ = lean_unbox_usize(v_sz_3922_);
lean_dec(v_sz_3922_);
v_i_boxed_3926_ = lean_unbox_usize(v_i_3923_);
lean_dec(v_i_3923_);
v_res_3927_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(v_sz_boxed_3925_, v_i_boxed_3926_, v_bs_3924_);
return v_res_3927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0(lean_object* v_x_3928_){
_start:
{
if (lean_obj_tag(v_x_3928_) == 0)
{
lean_object* v___x_3929_; 
v___x_3929_ = lean_box(0);
return v___x_3929_;
}
else
{
lean_object* v_val_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3940_; 
v_val_3930_ = lean_ctor_get(v_x_3928_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v_x_3928_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3932_ = v_x_3928_;
v_isShared_3933_ = v_isSharedCheck_3940_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_val_3930_);
lean_dec(v_x_3928_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3940_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
size_t v_sz_3934_; size_t v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3938_; 
v_sz_3934_ = lean_array_size(v_val_3930_);
v___x_3935_ = ((size_t)0ULL);
v___x_3936_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(v_sz_3934_, v___x_3935_, v_val_3930_);
if (v_isShared_3933_ == 0)
{
lean_ctor_set_tag(v___x_3932_, 7);
lean_ctor_set(v___x_3932_, 0, v___x_3936_);
v___x_3938_ = v___x_3932_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v___x_3936_);
v___x_3938_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
return v___x_3938_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0(lean_object* v_x_3941_){
_start:
{
if (lean_obj_tag(v_x_3941_) == 0)
{
lean_object* v___x_3942_; 
v___x_3942_ = lean_box(0);
return v___x_3942_;
}
else
{
lean_object* v_val_3943_; lean_object* v_delay_3944_; lean_object* v_keysIfUndelivered_3945_; lean_object* v_backoffSchedule_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; 
v_val_3943_ = lean_ctor_get(v_x_3941_, 0);
lean_inc(v_val_3943_);
lean_dec_ref_known(v_x_3941_, 1);
v_delay_3944_ = lean_ctor_get(v_val_3943_, 0);
lean_inc(v_delay_3944_);
v_keysIfUndelivered_3945_ = lean_ctor_get(v_val_3943_, 1);
lean_inc(v_keysIfUndelivered_3945_);
v_backoffSchedule_3946_ = lean_ctor_get(v_val_3943_, 2);
lean_inc(v_backoffSchedule_3946_);
lean_dec(v_val_3943_);
v___x_3947_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0));
v___x_3948_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_delay_3944_);
lean_dec(v_delay_3944_);
v___x_3949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3947_);
lean_ctor_set(v___x_3949_, 1, v___x_3948_);
v___x_3950_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1));
v___x_3951_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0(v_keysIfUndelivered_3945_);
v___x_3952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3950_);
lean_ctor_set(v___x_3952_, 1, v___x_3951_);
v___x_3953_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_3954_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(v_backoffSchedule_3946_);
v___x_3955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3955_, 0, v___x_3953_);
lean_ctor_set(v___x_3955_, 1, v___x_3954_);
v___x_3956_ = lean_unsigned_to_nat(3u);
v___x_3957_ = lean_mk_empty_array_with_capacity(v___x_3956_);
v___x_3958_ = lean_array_push(v___x_3957_, v___x_3949_);
v___x_3959_ = lean_array_push(v___x_3958_, v___x_3952_);
v___x_3960_ = lean_array_push(v___x_3959_, v___x_3955_);
v___x_3961_ = l_Lasm_JS_Web_Support_fields(v___x_3960_);
lean_dec_ref(v___x_3960_);
return v___x_3961_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_enqueue(lean_object* v_self_3963_, lean_object* v_value_3964_, lean_object* v_options_3965_){
_start:
{
lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; 
v___x_3967_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_enqueue___closed__0));
v___x_3968_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0(v_options_3965_);
v___x_3969_ = lean_unsigned_to_nat(2u);
v___x_3970_ = lean_mk_empty_array_with_capacity(v___x_3969_);
v___x_3971_ = lean_array_push(v___x_3970_, v_value_3964_);
v___x_3972_ = lean_array_push(v___x_3971_, v___x_3968_);
v___x_3973_ = l_Lasm_JS_Web_Support_args(v___x_3972_);
v___x_3974_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_3963_, v___x_3967_, v___x_3973_);
if (lean_obj_tag(v___x_3974_) == 0)
{
lean_object* v_a_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_3982_; 
v_a_3975_ = lean_ctor_get(v___x_3974_, 0);
v_isSharedCheck_3982_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3982_ == 0)
{
v___x_3977_ = v___x_3974_;
v_isShared_3978_ = v_isSharedCheck_3982_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_a_3975_);
lean_dec(v___x_3974_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_3982_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
lean_object* v___x_3980_; 
if (v_isShared_3978_ == 0)
{
v___x_3980_ = v___x_3977_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3981_; 
v_reuseFailAlloc_3981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3981_, 0, v_a_3975_);
v___x_3980_ = v_reuseFailAlloc_3981_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
return v___x_3980_;
}
}
}
else
{
lean_object* v_a_3983_; lean_object* v___x_3985_; uint8_t v_isShared_3986_; uint8_t v_isSharedCheck_3990_; 
v_a_3983_ = lean_ctor_get(v___x_3974_, 0);
v_isSharedCheck_3990_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3990_ == 0)
{
v___x_3985_ = v___x_3974_;
v_isShared_3986_ = v_isSharedCheck_3990_;
goto v_resetjp_3984_;
}
else
{
lean_inc(v_a_3983_);
lean_dec(v___x_3974_);
v___x_3985_ = lean_box(0);
v_isShared_3986_ = v_isSharedCheck_3990_;
goto v_resetjp_3984_;
}
v_resetjp_3984_:
{
lean_object* v___x_3988_; 
if (v_isShared_3986_ == 0)
{
v___x_3988_ = v___x_3985_;
goto v_reusejp_3987_;
}
else
{
lean_object* v_reuseFailAlloc_3989_; 
v_reuseFailAlloc_3989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3989_, 0, v_a_3983_);
v___x_3988_ = v_reuseFailAlloc_3989_;
goto v_reusejp_3987_;
}
v_reusejp_3987_:
{
return v___x_3988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_enqueue___boxed(lean_object* v_self_3991_, lean_object* v_value_3992_, lean_object* v_options_3993_, lean_object* v_a_3994_){
_start:
{
lean_object* v_res_3995_; 
v_res_3995_ = l_Lasm_JS_Deno_AtomicOperation_enqueue(v_self_3991_, v_value_3992_, v_options_3993_);
return v_res_3995_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0(uint8_t v_await_3996_, uint64_t v_extra_3997_){
_start:
{
uint64_t v___x_3998_; uint64_t v___y_4000_; 
v___x_3998_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_3996_ == 0)
{
uint64_t v___x_4003_; 
v___x_4003_ = 0ULL;
v___y_4000_ = v___x_4003_;
goto v___jp_3999_;
}
else
{
uint64_t v___x_4004_; 
v___x_4004_ = 2ULL;
v___y_4000_ = v___x_4004_;
goto v___jp_3999_;
}
v___jp_3999_:
{
uint64_t v___x_4001_; uint64_t v___x_4002_; 
v___x_4001_ = lean_uint64_lor(v___x_3998_, v___y_4000_);
v___x_4002_ = lean_uint64_lor(v___x_4001_, v_extra_3997_);
return v___x_4002_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0___boxed(lean_object* v_await_4005_, lean_object* v_extra_4006_){
_start:
{
uint8_t v_await_boxed_4007_; uint64_t v_extra_boxed_4008_; uint64_t v_res_4009_; lean_object* v_r_4010_; 
v_await_boxed_4007_ = lean_unbox(v_await_4005_);
v_extra_boxed_4008_ = lean_unbox_uint64(v_extra_4006_);
lean_dec_ref(v_extra_4006_);
v_res_4009_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0(v_await_boxed_4007_, v_extra_boxed_4008_);
v_r_4010_ = lean_box_uint64(v_res_4009_);
return v_r_4010_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2(lean_object* v___f_4011_, lean_object* v_x_4012_){
_start:
{
if (lean_obj_tag(v_x_4012_) == 0)
{
lean_object* v_a_4014_; lean_object* v___x_4016_; uint8_t v_isShared_4017_; uint8_t v_isSharedCheck_4022_; 
lean_dec_ref(v___f_4011_);
v_a_4014_ = lean_ctor_get(v_x_4012_, 0);
v_isSharedCheck_4022_ = !lean_is_exclusive(v_x_4012_);
if (v_isSharedCheck_4022_ == 0)
{
v___x_4016_ = v_x_4012_;
v_isShared_4017_ = v_isSharedCheck_4022_;
goto v_resetjp_4015_;
}
else
{
lean_inc(v_a_4014_);
lean_dec(v_x_4012_);
v___x_4016_ = lean_box(0);
v_isShared_4017_ = v_isSharedCheck_4022_;
goto v_resetjp_4015_;
}
v_resetjp_4015_:
{
lean_object* v___x_4019_; 
if (v_isShared_4017_ == 0)
{
v___x_4019_ = v___x_4016_;
goto v_reusejp_4018_;
}
else
{
lean_object* v_reuseFailAlloc_4021_; 
v_reuseFailAlloc_4021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4021_, 0, v_a_4014_);
v___x_4019_ = v_reuseFailAlloc_4021_;
goto v_reusejp_4018_;
}
v_reusejp_4018_:
{
lean_object* v___x_4020_; 
v___x_4020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4020_, 0, v___x_4019_);
return v___x_4020_;
}
}
}
else
{
lean_object* v_a_4023_; lean_object* v___x_4024_; 
v_a_4023_ = lean_ctor_get(v_x_4012_, 0);
lean_inc(v_a_4023_);
lean_dec_ref_known(v_x_4012_, 1);
v___x_4024_ = lean_apply_2(v___f_4011_, v_a_4023_, lean_box(0));
return v___x_4024_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2___boxed(lean_object* v___f_4025_, lean_object* v_x_4026_, lean_object* v___y_4027_){
_start:
{
lean_object* v_res_4028_; 
v_res_4028_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2(v___f_4025_, v_x_4026_);
return v_res_4028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_4034_, lean_object* v_key_4035_){
_start:
{
if (lean_obj_tag(v_d_4034_) == 8)
{
lean_object* v___x_4038_; lean_object* v___x_4040_; uint8_t v_isShared_4041_; uint8_t v_isSharedCheck_4066_; 
v___x_4038_ = l_Lasm_JS_Data_field(v_d_4034_, v_key_4035_);
v_isSharedCheck_4066_ = !lean_is_exclusive(v_d_4034_);
if (v_isSharedCheck_4066_ == 0)
{
lean_object* v_unused_4067_; 
v_unused_4067_ = lean_ctor_get(v_d_4034_, 0);
lean_dec(v_unused_4067_);
v___x_4040_ = v_d_4034_;
v_isShared_4041_ = v_isSharedCheck_4066_;
goto v_resetjp_4039_;
}
else
{
lean_dec(v_d_4034_);
v___x_4040_ = lean_box(0);
v_isShared_4041_ = v_isSharedCheck_4066_;
goto v_resetjp_4039_;
}
v_resetjp_4039_:
{
switch(lean_obj_tag(v___x_4038_))
{
case 1:
{
lean_del_object(v___x_4040_);
goto v___jp_4036_;
}
case 0:
{
lean_del_object(v___x_4040_);
goto v___jp_4036_;
}
default: 
{
if (lean_obj_tag(v___x_4038_) == 4)
{
lean_object* v_s_4042_; lean_object* v___x_4044_; 
v_s_4042_ = lean_ctor_get(v___x_4038_, 0);
lean_inc_ref(v_s_4042_);
lean_dec_ref_known(v___x_4038_, 1);
if (v_isShared_4041_ == 0)
{
lean_ctor_set_tag(v___x_4040_, 1);
lean_ctor_set(v___x_4040_, 0, v_s_4042_);
v___x_4044_ = v___x_4040_;
goto v_reusejp_4043_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_s_4042_);
v___x_4044_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4043_;
}
v_reusejp_4043_:
{
lean_object* v___x_4045_; 
v___x_4045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4045_, 0, v___x_4044_);
return v___x_4045_;
}
}
else
{
lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; uint8_t v___x_4057_; 
v___x_4047_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_4048_ = lean_string_append(v___x_4047_, v_key_4035_);
v___x_4049_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_4050_ = lean_string_append(v___x_4048_, v___x_4049_);
v___x_4051_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_4052_ = lean_string_append(v___x_4050_, v___x_4051_);
v___x_4053_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
v___x_4054_ = lean_string_append(v___x_4052_, v___x_4053_);
v___x_4055_ = l_Lasm_JS_Data_describe(v___x_4038_);
v___x_4056_ = lean_string_append(v___x_4054_, v___x_4055_);
lean_dec_ref(v___x_4055_);
v___x_4057_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5);
if (v___x_4057_ == 0)
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4061_; 
v___x_4058_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6));
v___x_4059_ = lean_string_append(v___x_4056_, v___x_4058_);
if (v_isShared_4041_ == 0)
{
lean_ctor_set_tag(v___x_4040_, 0);
lean_ctor_set(v___x_4040_, 0, v___x_4059_);
v___x_4061_ = v___x_4040_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v___x_4059_);
v___x_4061_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
return v___x_4061_;
}
}
else
{
lean_object* v___x_4064_; 
if (v_isShared_4041_ == 0)
{
lean_ctor_set_tag(v___x_4040_, 0);
lean_ctor_set(v___x_4040_, 0, v___x_4056_);
v___x_4064_ = v___x_4040_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4065_; 
v_reuseFailAlloc_4065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4065_, 0, v___x_4056_);
v___x_4064_ = v_reuseFailAlloc_4065_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
return v___x_4064_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4068_; 
lean_dec(v_d_4034_);
v___x_4068_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__2));
return v___x_4068_;
}
v___jp_4036_:
{
lean_object* v___x_4037_; 
v___x_4037_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___closed__0));
return v___x_4037_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_4069_, lean_object* v_key_4070_){
_start:
{
lean_object* v_res_4071_; 
v_res_4071_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(v_d_4069_, v_key_4070_);
lean_dec_ref(v_key_4070_);
return v_res_4071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_4075_, lean_object* v_key_4076_){
_start:
{
if (lean_obj_tag(v_d_4075_) == 8)
{
lean_object* v___x_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4105_; 
v___x_4077_ = l_Lasm_JS_Data_field(v_d_4075_, v_key_4076_);
v_isSharedCheck_4105_ = !lean_is_exclusive(v_d_4075_);
if (v_isSharedCheck_4105_ == 0)
{
lean_object* v_unused_4106_; 
v_unused_4106_ = lean_ctor_get(v_d_4075_, 0);
lean_dec(v_unused_4106_);
v___x_4079_ = v_d_4075_;
v_isShared_4080_ = v_isSharedCheck_4105_;
goto v_resetjp_4078_;
}
else
{
lean_dec(v_d_4075_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4105_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
if (lean_obj_tag(v___x_4077_) == 2)
{
uint8_t v_b_4081_; lean_object* v___x_4082_; lean_object* v___x_4084_; 
v_b_4081_ = lean_ctor_get_uint8(v___x_4077_, 0);
lean_dec_ref_known(v___x_4077_, 0);
v___x_4082_ = lean_box(v_b_4081_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set_tag(v___x_4079_, 1);
lean_ctor_set(v___x_4079_, 0, v___x_4082_);
v___x_4084_ = v___x_4079_;
goto v_reusejp_4083_;
}
else
{
lean_object* v_reuseFailAlloc_4085_; 
v_reuseFailAlloc_4085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4085_, 0, v___x_4082_);
v___x_4084_ = v_reuseFailAlloc_4085_;
goto v_reusejp_4083_;
}
v_reusejp_4083_:
{
return v___x_4084_;
}
}
else
{
lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; uint8_t v___x_4096_; 
v___x_4086_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__0));
v___x_4087_ = lean_string_append(v___x_4086_, v_key_4076_);
v___x_4088_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__1));
v___x_4089_ = lean_string_append(v___x_4087_, v___x_4088_);
v___x_4090_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_4091_ = lean_string_append(v___x_4089_, v___x_4090_);
v___x_4092_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__3));
v___x_4093_ = lean_string_append(v___x_4091_, v___x_4092_);
v___x_4094_ = l_Lasm_JS_Data_describe(v___x_4077_);
v___x_4095_ = lean_string_append(v___x_4093_, v___x_4094_);
lean_dec_ref(v___x_4094_);
v___x_4096_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__5);
if (v___x_4096_ == 0)
{
lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4100_; 
v___x_4097_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4___closed__6));
v___x_4098_ = lean_string_append(v___x_4095_, v___x_4097_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set_tag(v___x_4079_, 0);
lean_ctor_set(v___x_4079_, 0, v___x_4098_);
v___x_4100_ = v___x_4079_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v___x_4098_);
v___x_4100_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
return v___x_4100_;
}
}
else
{
lean_object* v___x_4103_; 
if (v_isShared_4080_ == 0)
{
lean_ctor_set_tag(v___x_4079_, 0);
lean_ctor_set(v___x_4079_, 0, v___x_4095_);
v___x_4103_ = v___x_4079_;
goto v_reusejp_4102_;
}
else
{
lean_object* v_reuseFailAlloc_4104_; 
v_reuseFailAlloc_4104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4104_, 0, v___x_4095_);
v___x_4103_ = v_reuseFailAlloc_4104_;
goto v_reusejp_4102_;
}
v_reusejp_4102_:
{
return v___x_4103_;
}
}
}
}
}
else
{
lean_object* v___x_4107_; 
lean_dec(v_d_4075_);
v___x_4107_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___closed__1));
return v___x_4107_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_4108_, lean_object* v_key_4109_){
_start:
{
lean_object* v_res_4110_; 
v_res_4110_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(v_d_4108_, v_key_4109_);
lean_dec_ref(v_key_4109_);
return v_res_4110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2(lean_object* v_context_4111_, lean_object* v_d_4112_){
_start:
{
lean_object* v___y_4115_; lean_object* v___y_4116_; lean_object* v___y_4121_; lean_object* v_received_4122_; lean_object* v___y_4141_; lean_object* v_a_4144_; lean_object* v___x_4168_; lean_object* v___x_4169_; 
v___x_4168_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0));
lean_inc(v_d_4112_);
v___x_4169_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(v_d_4112_, v___x_4168_);
if (lean_obj_tag(v___x_4169_) == 0)
{
lean_object* v_a_4170_; 
v_a_4170_ = lean_ctor_get(v___x_4169_, 0);
lean_inc(v_a_4170_);
lean_dec_ref_known(v___x_4169_, 1);
v_a_4144_ = v_a_4170_;
goto v___jp_4143_;
}
else
{
lean_object* v_a_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
v_a_4171_ = lean_ctor_get(v___x_4169_, 0);
lean_inc(v_a_4171_);
lean_dec_ref_known(v___x_4169_, 1);
v___x_4172_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_d_4112_);
v___x_4173_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(v_d_4112_, v___x_4172_);
if (lean_obj_tag(v___x_4173_) == 0)
{
lean_object* v_a_4174_; 
lean_dec(v_a_4171_);
v_a_4174_ = lean_ctor_get(v___x_4173_, 0);
lean_inc(v_a_4174_);
lean_dec_ref_known(v___x_4173_, 1);
v_a_4144_ = v_a_4174_;
goto v___jp_4143_;
}
else
{
lean_object* v_a_4175_; lean_object* v___x_4177_; uint8_t v_isShared_4178_; uint8_t v_isSharedCheck_4184_; 
lean_dec(v_d_4112_);
v_a_4175_ = lean_ctor_get(v___x_4173_, 0);
v_isSharedCheck_4184_ = !lean_is_exclusive(v___x_4173_);
if (v_isSharedCheck_4184_ == 0)
{
v___x_4177_ = v___x_4173_;
v_isShared_4178_ = v_isSharedCheck_4184_;
goto v_resetjp_4176_;
}
else
{
lean_inc(v_a_4175_);
lean_dec(v___x_4173_);
v___x_4177_ = lean_box(0);
v_isShared_4178_ = v_isSharedCheck_4184_;
goto v_resetjp_4176_;
}
v_resetjp_4176_:
{
lean_object* v___x_4179_; uint8_t v___x_4180_; lean_object* v___x_4182_; 
v___x_4179_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4179_, 0, v_a_4175_);
v___x_4180_ = lean_unbox(v_a_4171_);
lean_dec(v_a_4171_);
lean_ctor_set_uint8(v___x_4179_, sizeof(void*)*1, v___x_4180_);
if (v_isShared_4178_ == 0)
{
lean_ctor_set_tag(v___x_4177_, 0);
lean_ctor_set(v___x_4177_, 0, v___x_4179_);
v___x_4182_ = v___x_4177_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v___x_4179_);
v___x_4182_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
return v___x_4182_;
}
}
}
}
v___jp_4114_:
{
lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; 
v___x_4117_ = lean_string_append(v___y_4115_, v___y_4116_);
lean_dec_ref(v___y_4116_);
v___x_4118_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4118_, 0, v___x_4117_);
v___x_4119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4119_, 0, v___x_4118_);
return v___x_4119_;
}
v___jp_4120_:
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; uint8_t v___x_4134_; 
v___x_4123_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_4124_ = lean_string_append(v___x_4123_, v_context_4111_);
v___x_4125_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_4126_ = lean_string_append(v___x_4124_, v___x_4125_);
v___x_4127_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___closed__2));
v___x_4128_ = lean_string_append(v___x_4126_, v___x_4127_);
v___x_4129_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_4130_ = lean_string_append(v___x_4128_, v___x_4129_);
v___x_4131_ = lean_string_append(v___x_4130_, v_received_4122_);
lean_dec_ref(v_received_4122_);
v___x_4132_ = lean_string_utf8_byte_size(v___y_4121_);
v___x_4133_ = lean_unsigned_to_nat(0u);
v___x_4134_ = lean_nat_dec_eq(v___x_4132_, v___x_4133_);
if (v___x_4134_ == 0)
{
lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; 
v___x_4135_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_4136_ = lean_string_append(v___x_4135_, v___y_4121_);
lean_dec_ref(v___y_4121_);
v___x_4137_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4138_ = lean_string_append(v___x_4136_, v___x_4137_);
v___y_4115_ = v___x_4131_;
v___y_4116_ = v___x_4138_;
goto v___jp_4114_;
}
else
{
lean_object* v___x_4139_; 
lean_dec_ref(v___y_4121_);
v___x_4139_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_4115_ = v___x_4131_;
v___y_4116_ = v___x_4139_;
goto v___jp_4114_;
}
}
v___jp_4140_:
{
lean_object* v___x_4142_; 
v___x_4142_ = l_Lasm_JS_Data_describe(v_d_4112_);
v___y_4121_ = v___y_4141_;
v_received_4122_ = v___x_4142_;
goto v___jp_4120_;
}
v___jp_4143_:
{
if (lean_obj_tag(v_d_4112_) == 9)
{
lean_object* v_value_4145_; lean_object* v_description_4146_; lean_object* v___x_4147_; uint8_t v___x_4148_; 
v_value_4145_ = lean_ctor_get(v_d_4112_, 0);
v_description_4146_ = lean_ctor_get(v_d_4112_, 1);
v___x_4147_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4148_ = lean_string_dec_eq(v_description_4146_, v___x_4147_);
if (v___x_4148_ == 0)
{
v___y_4141_ = v_a_4144_;
goto v___jp_4140_;
}
else
{
lean_object* v___x_4150_; uint8_t v_isShared_4151_; uint8_t v_isSharedCheck_4165_; 
lean_inc(v_value_4145_);
v_isSharedCheck_4165_ = !lean_is_exclusive(v_d_4112_);
if (v_isSharedCheck_4165_ == 0)
{
lean_object* v_unused_4166_; lean_object* v_unused_4167_; 
v_unused_4166_ = lean_ctor_get(v_d_4112_, 1);
lean_dec(v_unused_4166_);
v_unused_4167_ = lean_ctor_get(v_d_4112_, 0);
lean_dec(v_unused_4167_);
v___x_4150_ = v_d_4112_;
v_isShared_4151_ = v_isSharedCheck_4165_;
goto v_resetjp_4149_;
}
else
{
lean_dec(v_d_4112_);
v___x_4150_ = lean_box(0);
v_isShared_4151_ = v_isSharedCheck_4165_;
goto v_resetjp_4149_;
}
v_resetjp_4149_:
{
uint32_t v___x_4152_; uint64_t v___x_4153_; lean_object* v___x_4155_; 
v___x_4152_ = 206;
v___x_4153_ = 0ULL;
lean_inc(v_value_4145_);
if (v_isShared_4151_ == 0)
{
lean_ctor_set(v___x_4150_, 1, v___x_4147_);
v___x_4155_ = v___x_4150_;
goto v_reusejp_4154_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_value_4145_);
lean_ctor_set(v_reuseFailAlloc_4164_, 1, v___x_4147_);
v___x_4155_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4154_;
}
v_reusejp_4154_:
{
uint32_t v___x_4156_; lean_object* v___x_4157_; 
v___x_4156_ = lasm_js_value_handle(v_value_4145_);
lean_dec(v_value_4145_);
v___x_4157_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4152_, v___x_4153_, v___x_4155_, v___x_4156_);
lean_dec_ref(v___x_4155_);
if (lean_obj_tag(v___x_4157_) == 0)
{
lean_object* v_a_4158_; uint8_t v___x_4159_; 
v_a_4158_ = lean_ctor_get(v___x_4157_, 0);
lean_inc(v_a_4158_);
lean_dec_ref_known(v___x_4157_, 1);
v___x_4159_ = lean_string_validate_utf8(v_a_4158_);
if (v___x_4159_ == 0)
{
lean_object* v___x_4160_; lean_object* v___x_4161_; 
lean_dec(v_a_4158_);
v___x_4160_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_4161_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4160_);
v___y_4121_ = v_a_4144_;
v_received_4122_ = v___x_4161_;
goto v___jp_4120_;
}
else
{
lean_object* v___x_4162_; 
v___x_4162_ = lean_string_from_utf8_unchecked(v_a_4158_);
v___y_4121_ = v_a_4144_;
v_received_4122_ = v___x_4162_;
goto v___jp_4120_;
}
}
else
{
lean_object* v___x_4163_; 
lean_dec_ref_known(v___x_4157_, 1);
v___x_4163_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_4121_ = v_a_4144_;
v_received_4122_ = v___x_4163_;
goto v___jp_4120_;
}
}
}
}
}
else
{
v___y_4141_ = v_a_4144_;
goto v___jp_4140_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2___boxed(lean_object* v_context_4185_, lean_object* v_d_4186_, lean_object* v_a_4187_){
_start:
{
lean_object* v_res_4188_; 
v_res_4188_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2(v_context_4185_, v_d_4186_);
lean_dec_ref(v_context_4185_);
return v_res_4188_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0(lean_object* v_context_4189_, lean_object* v_x_4190_){
_start:
{
lean_object* v_val_4193_; 
if (lean_obj_tag(v_x_4190_) == 0)
{
lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4203_; 
v_a_4195_ = lean_ctor_get(v_x_4190_, 0);
v_isSharedCheck_4203_ = !lean_is_exclusive(v_x_4190_);
if (v_isSharedCheck_4203_ == 0)
{
v___x_4197_ = v_x_4190_;
v_isShared_4198_ = v_isSharedCheck_4203_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v_x_4190_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4203_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4200_; 
if (v_isShared_4198_ == 0)
{
v___x_4200_ = v___x_4197_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4202_; 
v_reuseFailAlloc_4202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4202_, 0, v_a_4195_);
v___x_4200_ = v_reuseFailAlloc_4202_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
lean_object* v___x_4201_; 
v___x_4201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4201_, 0, v___x_4200_);
return v___x_4201_;
}
}
}
else
{
lean_object* v_a_4204_; lean_object* v___x_4206_; uint8_t v_isShared_4207_; uint8_t v_isSharedCheck_4217_; 
v_a_4204_ = lean_ctor_get(v_x_4190_, 0);
v_isSharedCheck_4217_ = !lean_is_exclusive(v_x_4190_);
if (v_isSharedCheck_4217_ == 0)
{
v___x_4206_ = v_x_4190_;
v_isShared_4207_ = v_isSharedCheck_4217_;
goto v_resetjp_4205_;
}
else
{
lean_inc(v_a_4204_);
lean_dec(v_x_4190_);
v___x_4206_ = lean_box(0);
v_isShared_4207_ = v_isSharedCheck_4217_;
goto v_resetjp_4205_;
}
v_resetjp_4205_:
{
lean_object* v___x_4208_; 
v___x_4208_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2(v_context_4189_, v_a_4204_);
if (lean_obj_tag(v___x_4208_) == 0)
{
lean_object* v_a_4209_; lean_object* v___x_4211_; 
v_a_4209_ = lean_ctor_get(v___x_4208_, 0);
lean_inc(v_a_4209_);
lean_dec_ref_known(v___x_4208_, 1);
if (v_isShared_4207_ == 0)
{
lean_ctor_set(v___x_4206_, 0, v_a_4209_);
v___x_4211_ = v___x_4206_;
goto v_reusejp_4210_;
}
else
{
lean_object* v_reuseFailAlloc_4212_; 
v_reuseFailAlloc_4212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4212_, 0, v_a_4209_);
v___x_4211_ = v_reuseFailAlloc_4212_;
goto v_reusejp_4210_;
}
v_reusejp_4210_:
{
v_val_4193_ = v___x_4211_;
goto v___jp_4192_;
}
}
else
{
lean_object* v_a_4213_; lean_object* v___x_4215_; 
v_a_4213_ = lean_ctor_get(v___x_4208_, 0);
lean_inc(v_a_4213_);
lean_dec_ref_known(v___x_4208_, 1);
if (v_isShared_4207_ == 0)
{
lean_ctor_set_tag(v___x_4206_, 0);
lean_ctor_set(v___x_4206_, 0, v_a_4213_);
v___x_4215_ = v___x_4206_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4216_; 
v_reuseFailAlloc_4216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4216_, 0, v_a_4213_);
v___x_4215_ = v_reuseFailAlloc_4216_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
v_val_4193_ = v___x_4215_;
goto v___jp_4192_;
}
}
}
}
v___jp_4192_:
{
lean_object* v___x_4194_; 
v___x_4194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4194_, 0, v_val_4193_);
return v___x_4194_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0___boxed(lean_object* v_context_4218_, lean_object* v_x_4219_, lean_object* v___y_4220_){
_start:
{
lean_object* v_res_4221_; 
v_res_4221_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0(v_context_4218_, v_x_4219_);
lean_dec_ref(v_context_4218_);
return v_res_4221_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1(lean_object* v___f_4222_, lean_object* v_bytes_4223_){
_start:
{
lean_object* v___x_4225_; uint8_t v___x_4226_; lean_object* v_val_4228_; lean_object* v___x_4231_; 
v___x_4225_ = lean_unsigned_to_nat(0u);
v___x_4226_ = 0;
v___x_4231_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4223_);
if (lean_obj_tag(v___x_4231_) == 0)
{
lean_object* v_a_4232_; lean_object* v___x_4234_; uint8_t v_isShared_4235_; uint8_t v_isSharedCheck_4239_; 
v_a_4232_ = lean_ctor_get(v___x_4231_, 0);
v_isSharedCheck_4239_ = !lean_is_exclusive(v___x_4231_);
if (v_isSharedCheck_4239_ == 0)
{
v___x_4234_ = v___x_4231_;
v_isShared_4235_ = v_isSharedCheck_4239_;
goto v_resetjp_4233_;
}
else
{
lean_inc(v_a_4232_);
lean_dec(v___x_4231_);
v___x_4234_ = lean_box(0);
v_isShared_4235_ = v_isSharedCheck_4239_;
goto v_resetjp_4233_;
}
v_resetjp_4233_:
{
lean_object* v___x_4237_; 
if (v_isShared_4235_ == 0)
{
lean_ctor_set_tag(v___x_4234_, 1);
v___x_4237_ = v___x_4234_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4238_; 
v_reuseFailAlloc_4238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4238_, 0, v_a_4232_);
v___x_4237_ = v_reuseFailAlloc_4238_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
v_val_4228_ = v___x_4237_;
goto v___jp_4227_;
}
}
}
else
{
lean_object* v_a_4240_; lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4247_; 
v_a_4240_ = lean_ctor_get(v___x_4231_, 0);
v_isSharedCheck_4247_ = !lean_is_exclusive(v___x_4231_);
if (v_isSharedCheck_4247_ == 0)
{
v___x_4242_ = v___x_4231_;
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
else
{
lean_inc(v_a_4240_);
lean_dec(v___x_4231_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v___x_4245_; 
if (v_isShared_4243_ == 0)
{
lean_ctor_set_tag(v___x_4242_, 0);
v___x_4245_ = v___x_4242_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v_a_4240_);
v___x_4245_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
v_val_4228_ = v___x_4245_;
goto v___jp_4227_;
}
}
}
v___jp_4227_:
{
lean_object* v___x_4229_; lean_object* v___x_4230_; 
v___x_4229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4229_, 0, v_val_4228_);
v___x_4230_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4225_, v___x_4226_, v___x_4229_, v___f_4222_);
return v___x_4230_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1___boxed(lean_object* v___f_4248_, lean_object* v_bytes_4249_, lean_object* v___y_4250_){
_start:
{
lean_object* v_res_4251_; 
v_res_4251_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1(v___f_4248_, v_bytes_4249_);
lean_dec_ref(v_bytes_4249_);
return v_res_4251_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3(lean_object* v___f_4252_, lean_object* v_x_4253_){
_start:
{
if (lean_obj_tag(v_x_4253_) == 0)
{
lean_object* v_a_4255_; lean_object* v___x_4257_; uint8_t v_isShared_4258_; uint8_t v_isSharedCheck_4263_; 
lean_dec_ref(v___f_4252_);
v_a_4255_ = lean_ctor_get(v_x_4253_, 0);
v_isSharedCheck_4263_ = !lean_is_exclusive(v_x_4253_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4257_ = v_x_4253_;
v_isShared_4258_ = v_isSharedCheck_4263_;
goto v_resetjp_4256_;
}
else
{
lean_inc(v_a_4255_);
lean_dec(v_x_4253_);
v___x_4257_ = lean_box(0);
v_isShared_4258_ = v_isSharedCheck_4263_;
goto v_resetjp_4256_;
}
v_resetjp_4256_:
{
lean_object* v___x_4260_; 
if (v_isShared_4258_ == 0)
{
v___x_4260_ = v___x_4257_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v_a_4255_);
v___x_4260_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
lean_object* v___x_4261_; 
v___x_4261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4261_, 0, v___x_4260_);
return v___x_4261_;
}
}
}
else
{
lean_object* v___x_4265_; uint8_t v_isShared_4266_; uint8_t v_isSharedCheck_4275_; 
v_isSharedCheck_4275_ = !lean_is_exclusive(v_x_4253_);
if (v_isSharedCheck_4275_ == 0)
{
lean_object* v_unused_4276_; 
v_unused_4276_ = lean_ctor_get(v_x_4253_, 0);
lean_dec(v_unused_4276_);
v___x_4265_ = v_x_4253_;
v_isShared_4266_ = v_isSharedCheck_4275_;
goto v_resetjp_4264_;
}
else
{
lean_dec(v_x_4253_);
v___x_4265_ = lean_box(0);
v_isShared_4266_ = v_isSharedCheck_4275_;
goto v_resetjp_4264_;
}
v_resetjp_4264_:
{
lean_object* v___x_4267_; uint8_t v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4271_; 
v___x_4267_ = lean_unsigned_to_nat(0u);
v___x_4268_ = 0;
v___x_4269_ = lean_io_promise_new();
if (v_isShared_4266_ == 0)
{
lean_ctor_set(v___x_4265_, 0, v___x_4269_);
v___x_4271_ = v___x_4265_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4274_; 
v_reuseFailAlloc_4274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4274_, 0, v___x_4269_);
v___x_4271_ = v_reuseFailAlloc_4274_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
lean_object* v___x_4272_; lean_object* v___x_4273_; 
v___x_4272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4272_, 0, v___x_4271_);
v___x_4273_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4267_, v___x_4268_, v___x_4272_, v___f_4252_);
return v___x_4273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3___boxed(lean_object* v___f_4277_, lean_object* v_x_4278_, lean_object* v___y_4279_){
_start:
{
lean_object* v_res_4280_; 
v_res_4280_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3(v___f_4277_, v_x_4278_);
return v_res_4280_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_4281_, uint32_t v_op_4282_, uint64_t v_flags_4283_, lean_object* v_payload_4284_, lean_object* v___f_4285_, lean_object* v___f_4286_, lean_object* v___f_4287_, lean_object* v_x_4288_){
_start:
{
if (lean_obj_tag(v_x_4288_) == 0)
{
lean_object* v_a_4290_; lean_object* v___x_4292_; uint8_t v_isShared_4293_; uint8_t v_isSharedCheck_4298_; 
lean_dec_ref(v___f_4287_);
lean_dec_ref(v___f_4286_);
lean_dec_ref(v___f_4285_);
lean_dec(v_payload_4284_);
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
lean_object* v_a_4299_; lean_object* v___x_4301_; uint8_t v_isShared_4302_; uint8_t v_isSharedCheck_4345_; 
v_a_4299_ = lean_ctor_get(v_x_4288_, 0);
v_isSharedCheck_4345_ = !lean_is_exclusive(v_x_4288_);
if (v_isSharedCheck_4345_ == 0)
{
v___x_4301_ = v_x_4288_;
v_isShared_4302_ = v_isSharedCheck_4345_;
goto v_resetjp_4300_;
}
else
{
lean_inc(v_a_4299_);
lean_dec(v_x_4288_);
v___x_4301_ = lean_box(0);
v_isShared_4302_ = v_isSharedCheck_4345_;
goto v_resetjp_4300_;
}
v_resetjp_4300_:
{
lean_object* v___x_4303_; lean_object* v___x_4304_; uint8_t v___x_4305_; 
v___x_4303_ = lean_string_utf8_byte_size(v_failurePrefix_4281_);
v___x_4304_ = lean_unsigned_to_nat(0u);
v___x_4305_ = lean_nat_dec_eq(v___x_4303_, v___x_4304_);
if (v___x_4305_ == 0)
{
lean_object* v___f_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___f_4310_; lean_object* v_val_4312_; lean_object* v___x_4317_; 
lean_dec_ref(v___f_4287_);
lean_inc(v_a_4299_);
v___f_4306_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4306_, 0, v_a_4299_);
v___x_4307_ = lean_box(v___x_4305_);
v___x_4308_ = lean_box_uint32(v_op_4282_);
v___x_4309_ = lean_box_uint64(v_flags_4283_);
lean_inc(v_payload_4284_);
v___f_4310_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4310_, 0, v___x_4304_);
lean_closure_set(v___f_4310_, 1, v___x_4307_);
lean_closure_set(v___f_4310_, 2, v___f_4306_);
lean_closure_set(v___f_4310_, 3, v_a_4299_);
lean_closure_set(v___f_4310_, 4, v___x_4308_);
lean_closure_set(v___f_4310_, 5, v___x_4309_);
lean_closure_set(v___f_4310_, 6, v_payload_4284_);
v___x_4317_ = l_Lasm_JS_Wire_encodeIO(v_payload_4284_);
lean_dec(v_payload_4284_);
if (lean_obj_tag(v___x_4317_) == 0)
{
lean_object* v_a_4318_; lean_object* v___x_4320_; 
v_a_4318_ = lean_ctor_get(v___x_4317_, 0);
lean_inc(v_a_4318_);
lean_dec_ref_known(v___x_4317_, 1);
if (v_isShared_4302_ == 0)
{
lean_ctor_set(v___x_4301_, 0, v_a_4318_);
v___x_4320_ = v___x_4301_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v_a_4318_);
v___x_4320_ = v_reuseFailAlloc_4321_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
v_val_4312_ = v___x_4320_;
goto v___jp_4311_;
}
}
else
{
lean_object* v_a_4322_; lean_object* v___x_4324_; 
v_a_4322_ = lean_ctor_get(v___x_4317_, 0);
lean_inc(v_a_4322_);
lean_dec_ref_known(v___x_4317_, 1);
if (v_isShared_4302_ == 0)
{
lean_ctor_set_tag(v___x_4301_, 0);
lean_ctor_set(v___x_4301_, 0, v_a_4322_);
v___x_4324_ = v___x_4301_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v_a_4322_);
v___x_4324_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
v_val_4312_ = v___x_4324_;
goto v___jp_4311_;
}
}
v___jp_4311_:
{
lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; 
v___x_4313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4313_, 0, v_val_4312_);
v___x_4314_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4304_, v___x_4305_, v___x_4313_, v___f_4310_);
v___x_4315_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4304_, v___x_4305_, v___x_4314_, v___f_4285_);
v___x_4316_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4304_, v___x_4305_, v___x_4315_, v___f_4286_);
return v___x_4316_;
}
}
else
{
lean_object* v___f_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___f_4329_; uint8_t v___x_4330_; lean_object* v_val_4332_; lean_object* v___x_4336_; 
lean_dec_ref(v___f_4286_);
lean_dec_ref(v___f_4285_);
lean_inc(v_a_4299_);
v___f_4326_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4326_, 0, v_a_4299_);
v___x_4327_ = lean_box_uint32(v_op_4282_);
v___x_4328_ = lean_box_uint64(v_flags_4283_);
lean_inc(v_payload_4284_);
v___f_4329_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4329_, 0, v___f_4326_);
lean_closure_set(v___f_4329_, 1, v_a_4299_);
lean_closure_set(v___f_4329_, 2, v___x_4327_);
lean_closure_set(v___f_4329_, 3, v___x_4328_);
lean_closure_set(v___f_4329_, 4, v_payload_4284_);
v___x_4330_ = 0;
v___x_4336_ = l_Lasm_JS_Wire_encodeIO(v_payload_4284_);
lean_dec(v_payload_4284_);
if (lean_obj_tag(v___x_4336_) == 0)
{
lean_object* v_a_4337_; lean_object* v___x_4339_; 
v_a_4337_ = lean_ctor_get(v___x_4336_, 0);
lean_inc(v_a_4337_);
lean_dec_ref_known(v___x_4336_, 1);
if (v_isShared_4302_ == 0)
{
lean_ctor_set(v___x_4301_, 0, v_a_4337_);
v___x_4339_ = v___x_4301_;
goto v_reusejp_4338_;
}
else
{
lean_object* v_reuseFailAlloc_4340_; 
v_reuseFailAlloc_4340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4340_, 0, v_a_4337_);
v___x_4339_ = v_reuseFailAlloc_4340_;
goto v_reusejp_4338_;
}
v_reusejp_4338_:
{
v_val_4332_ = v___x_4339_;
goto v___jp_4331_;
}
}
else
{
lean_object* v_a_4341_; lean_object* v___x_4343_; 
v_a_4341_ = lean_ctor_get(v___x_4336_, 0);
lean_inc(v_a_4341_);
lean_dec_ref_known(v___x_4336_, 1);
if (v_isShared_4302_ == 0)
{
lean_ctor_set_tag(v___x_4301_, 0);
lean_ctor_set(v___x_4301_, 0, v_a_4341_);
v___x_4343_ = v___x_4301_;
goto v_reusejp_4342_;
}
else
{
lean_object* v_reuseFailAlloc_4344_; 
v_reuseFailAlloc_4344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4344_, 0, v_a_4341_);
v___x_4343_ = v_reuseFailAlloc_4344_;
goto v_reusejp_4342_;
}
v_reusejp_4342_:
{
v_val_4332_ = v___x_4343_;
goto v___jp_4331_;
}
}
v___jp_4331_:
{
lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; 
v___x_4333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4333_, 0, v_val_4332_);
v___x_4334_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4304_, v___x_4330_, v___x_4333_, v___f_4329_);
v___x_4335_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4304_, v___x_4330_, v___x_4334_, v___f_4287_);
return v___x_4335_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_4346_, lean_object* v_op_4347_, lean_object* v_flags_4348_, lean_object* v_payload_4349_, lean_object* v___f_4350_, lean_object* v___f_4351_, lean_object* v___f_4352_, lean_object* v_x_4353_, lean_object* v___y_4354_){
_start:
{
uint32_t v_op_boxed_4355_; uint64_t v_flags_boxed_4356_; lean_object* v_res_4357_; 
v_op_boxed_4355_ = lean_unbox_uint32(v_op_4347_);
lean_dec(v_op_4347_);
v_flags_boxed_4356_ = lean_unbox_uint64(v_flags_4348_);
lean_dec_ref(v_flags_4348_);
v_res_4357_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9(v_failurePrefix_4346_, v_op_boxed_4355_, v_flags_boxed_4356_, v_payload_4349_, v___f_4350_, v___f_4351_, v___f_4352_, v_x_4353_);
lean_dec_ref(v_failurePrefix_4346_);
return v_res_4357_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1(lean_object* v_context_4358_, uint32_t v_op_4359_, uint64_t v_flags_4360_, lean_object* v_payload_4361_, lean_object* v_failurePrefix_4362_){
_start:
{
lean_object* v___f_4364_; lean_object* v___f_4365_; lean_object* v___f_4366_; lean_object* v___f_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___f_4370_; lean_object* v___f_4371_; lean_object* v___x_4372_; uint8_t v___x_4373_; lean_object* v_val_4375_; lean_object* v___x_4378_; 
v___f_4364_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4364_, 0, v_context_4358_);
v___f_4365_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4365_, 0, v___f_4364_);
v___f_4366_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4366_, 0, v___f_4365_);
lean_inc_ref(v_failurePrefix_4362_);
v___f_4367_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4367_, 0, v_failurePrefix_4362_);
v___x_4368_ = lean_box_uint32(v_op_4359_);
v___x_4369_ = lean_box_uint64(v_flags_4360_);
lean_inc_ref(v___f_4366_);
v___f_4370_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4370_, 0, v_failurePrefix_4362_);
lean_closure_set(v___f_4370_, 1, v___x_4368_);
lean_closure_set(v___f_4370_, 2, v___x_4369_);
lean_closure_set(v___f_4370_, 3, v_payload_4361_);
lean_closure_set(v___f_4370_, 4, v___f_4367_);
lean_closure_set(v___f_4370_, 5, v___f_4366_);
lean_closure_set(v___f_4370_, 6, v___f_4366_);
v___f_4371_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4371_, 0, v___f_4370_);
v___x_4372_ = lean_unsigned_to_nat(0u);
v___x_4373_ = 0;
v___x_4378_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4378_) == 0)
{
lean_object* v_a_4379_; lean_object* v___x_4381_; uint8_t v_isShared_4382_; uint8_t v_isSharedCheck_4386_; 
v_a_4379_ = lean_ctor_get(v___x_4378_, 0);
v_isSharedCheck_4386_ = !lean_is_exclusive(v___x_4378_);
if (v_isSharedCheck_4386_ == 0)
{
v___x_4381_ = v___x_4378_;
v_isShared_4382_ = v_isSharedCheck_4386_;
goto v_resetjp_4380_;
}
else
{
lean_inc(v_a_4379_);
lean_dec(v___x_4378_);
v___x_4381_ = lean_box(0);
v_isShared_4382_ = v_isSharedCheck_4386_;
goto v_resetjp_4380_;
}
v_resetjp_4380_:
{
lean_object* v___x_4384_; 
if (v_isShared_4382_ == 0)
{
lean_ctor_set_tag(v___x_4381_, 1);
v___x_4384_ = v___x_4381_;
goto v_reusejp_4383_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v_a_4379_);
v___x_4384_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4383_;
}
v_reusejp_4383_:
{
v_val_4375_ = v___x_4384_;
goto v___jp_4374_;
}
}
}
else
{
lean_object* v_a_4387_; lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4394_; 
v_a_4387_ = lean_ctor_get(v___x_4378_, 0);
v_isSharedCheck_4394_ = !lean_is_exclusive(v___x_4378_);
if (v_isSharedCheck_4394_ == 0)
{
v___x_4389_ = v___x_4378_;
v_isShared_4390_ = v_isSharedCheck_4394_;
goto v_resetjp_4388_;
}
else
{
lean_inc(v_a_4387_);
lean_dec(v___x_4378_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4394_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
lean_object* v___x_4392_; 
if (v_isShared_4390_ == 0)
{
lean_ctor_set_tag(v___x_4389_, 0);
v___x_4392_ = v___x_4389_;
goto v_reusejp_4391_;
}
else
{
lean_object* v_reuseFailAlloc_4393_; 
v_reuseFailAlloc_4393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4393_, 0, v_a_4387_);
v___x_4392_ = v_reuseFailAlloc_4393_;
goto v_reusejp_4391_;
}
v_reusejp_4391_:
{
v_val_4375_ = v___x_4392_;
goto v___jp_4374_;
}
}
}
v___jp_4374_:
{
lean_object* v___x_4376_; lean_object* v___x_4377_; 
v___x_4376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4376_, 0, v_val_4375_);
v___x_4377_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4372_, v___x_4373_, v___x_4376_, v___f_4371_);
return v___x_4377_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1___boxed(lean_object* v_context_4395_, lean_object* v_op_4396_, lean_object* v_flags_4397_, lean_object* v_payload_4398_, lean_object* v_failurePrefix_4399_, lean_object* v_a_4400_){
_start:
{
uint32_t v_op_boxed_4401_; uint64_t v_flags_boxed_4402_; lean_object* v_res_4403_; 
v_op_boxed_4401_ = lean_unbox_uint32(v_op_4396_);
lean_dec(v_op_4396_);
v_flags_boxed_4402_ = lean_unbox_uint64(v_flags_4397_);
lean_dec_ref(v_flags_4397_);
v_res_4403_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1(v_context_4395_, v_op_boxed_4401_, v_flags_boxed_4402_, v_payload_4398_, v_failurePrefix_4399_);
return v_res_4403_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4404_; uint8_t v___x_4405_; uint64_t v___x_4406_; 
v___x_4404_ = 8ULL;
v___x_4405_ = 0;
v___x_4406_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__0(v___x_4405_, v___x_4404_);
return v___x_4406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0(lean_object* v_o_4407_, lean_object* v_name_4408_, lean_object* v_args_4409_){
_start:
{
lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; uint32_t v___x_4416_; uint64_t v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; 
v___x_4411_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4412_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4412_, 0, v_o_4407_);
lean_ctor_set(v___x_4412_, 1, v___x_4411_);
lean_inc_ref(v_name_4408_);
v___x_4413_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4413_, 0, v_name_4408_);
v___x_4414_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_4415_ = lean_string_append(v___x_4414_, v_name_4408_);
lean_dec_ref(v_name_4408_);
v___x_4416_ = 205;
v___x_4417_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___closed__0);
v___x_4418_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4418_, 0, v_args_4409_);
v___x_4419_ = lean_unsigned_to_nat(3u);
v___x_4420_ = lean_mk_empty_array_with_capacity(v___x_4419_);
v___x_4421_ = lean_array_push(v___x_4420_, v___x_4412_);
v___x_4422_ = lean_array_push(v___x_4421_, v___x_4413_);
v___x_4423_ = lean_array_push(v___x_4422_, v___x_4418_);
v___x_4424_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4424_, 0, v___x_4423_);
v___x_4425_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1(v___x_4415_, v___x_4416_, v___x_4417_, v___x_4424_, v___x_4411_);
return v___x_4425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0___boxed(lean_object* v_o_4426_, lean_object* v_name_4427_, lean_object* v_args_4428_, lean_object* v___y_4429_){
_start:
{
lean_object* v_res_4430_; 
v_res_4430_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0(v_o_4426_, v_name_4427_, v_args_4428_);
return v_res_4430_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_AtomicOperation_commit___closed__1(void){
_start:
{
lean_object* v___x_4432_; lean_object* v___x_4433_; 
v___x_4432_ = ((lean_object*)(l_Lasm_JS_Deno_KvListIterator_iterator___closed__2));
v___x_4433_ = l_Lasm_JS_Web_Support_args(v___x_4432_);
return v___x_4433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_commit(lean_object* v_self_4434_){
_start:
{
lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; 
v___x_4436_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_commit___closed__0));
v___x_4437_ = lean_obj_once(&l_Lasm_JS_Deno_AtomicOperation_commit___closed__1, &l_Lasm_JS_Deno_AtomicOperation_commit___closed__1_once, _init_l_Lasm_JS_Deno_AtomicOperation_commit___closed__1);
v___x_4438_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0(v_self_4434_, v___x_4436_, v___x_4437_);
return v___x_4438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AtomicOperation_commit___boxed(lean_object* v_self_4439_, lean_object* v_a_4440_){
_start:
{
lean_object* v_res_4441_; 
v_res_4441_ = l_Lasm_JS_Deno_AtomicOperation_commit(v_self_4439_);
return v_res_4441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4(lean_object* v_context_4442_, lean_object* v_d_4443_){
_start:
{
lean_object* v___y_4446_; lean_object* v___y_4447_; lean_object* v___y_4452_; lean_object* v_received_4453_; lean_object* v___y_4472_; lean_object* v_a_4475_; lean_object* v___x_4499_; lean_object* v___x_4500_; 
v___x_4499_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
lean_inc(v_d_4443_);
v___x_4500_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_d_4443_, v___x_4499_);
if (lean_obj_tag(v___x_4500_) == 0)
{
lean_object* v_a_4501_; 
v_a_4501_ = lean_ctor_get(v___x_4500_, 0);
lean_inc(v_a_4501_);
lean_dec_ref_known(v___x_4500_, 1);
v_a_4475_ = v_a_4501_;
goto v___jp_4474_;
}
else
{
lean_object* v_a_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; 
v_a_4502_ = lean_ctor_get(v___x_4500_, 0);
lean_inc(v_a_4502_);
lean_dec_ref_known(v___x_4500_, 1);
v___x_4503_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
lean_inc(v_d_4443_);
v___x_4504_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_4443_, v___x_4503_);
if (lean_obj_tag(v___x_4504_) == 0)
{
lean_object* v_a_4505_; 
lean_dec(v_a_4502_);
v_a_4505_ = lean_ctor_get(v___x_4504_, 0);
lean_inc(v_a_4505_);
lean_dec_ref_known(v___x_4504_, 1);
v_a_4475_ = v_a_4505_;
goto v___jp_4474_;
}
else
{
lean_object* v_a_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; 
v_a_4506_ = lean_ctor_get(v___x_4504_, 0);
lean_inc(v_a_4506_);
lean_dec_ref_known(v___x_4504_, 1);
v___x_4507_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_d_4443_);
v___x_4508_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(v_d_4443_, v___x_4507_);
if (lean_obj_tag(v___x_4508_) == 0)
{
lean_object* v_a_4509_; 
lean_dec(v_a_4506_);
lean_dec(v_a_4502_);
v_a_4509_ = lean_ctor_get(v___x_4508_, 0);
lean_inc(v_a_4509_);
lean_dec_ref_known(v___x_4508_, 1);
v_a_4475_ = v_a_4509_;
goto v___jp_4474_;
}
else
{
lean_object* v_a_4510_; lean_object* v___x_4512_; uint8_t v_isShared_4513_; uint8_t v_isSharedCheck_4518_; 
lean_dec(v_d_4443_);
v_a_4510_ = lean_ctor_get(v___x_4508_, 0);
v_isSharedCheck_4518_ = !lean_is_exclusive(v___x_4508_);
if (v_isSharedCheck_4518_ == 0)
{
v___x_4512_ = v___x_4508_;
v_isShared_4513_ = v_isSharedCheck_4518_;
goto v_resetjp_4511_;
}
else
{
lean_inc(v_a_4510_);
lean_dec(v___x_4508_);
v___x_4512_ = lean_box(0);
v_isShared_4513_ = v_isSharedCheck_4518_;
goto v_resetjp_4511_;
}
v_resetjp_4511_:
{
lean_object* v___x_4514_; lean_object* v___x_4516_; 
v___x_4514_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4514_, 0, v_a_4502_);
lean_ctor_set(v___x_4514_, 1, v_a_4506_);
lean_ctor_set(v___x_4514_, 2, v_a_4510_);
if (v_isShared_4513_ == 0)
{
lean_ctor_set_tag(v___x_4512_, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4514_);
v___x_4516_ = v___x_4512_;
goto v_reusejp_4515_;
}
else
{
lean_object* v_reuseFailAlloc_4517_; 
v_reuseFailAlloc_4517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4517_, 0, v___x_4514_);
v___x_4516_ = v_reuseFailAlloc_4517_;
goto v_reusejp_4515_;
}
v_reusejp_4515_:
{
return v___x_4516_;
}
}
}
}
}
v___jp_4445_:
{
lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; 
v___x_4448_ = lean_string_append(v___y_4446_, v___y_4447_);
lean_dec_ref(v___y_4447_);
v___x_4449_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4449_, 0, v___x_4448_);
v___x_4450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4450_, 0, v___x_4449_);
return v___x_4450_;
}
v___jp_4451_:
{
lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; uint8_t v___x_4465_; 
v___x_4454_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_4455_ = lean_string_append(v___x_4454_, v_context_4442_);
v___x_4456_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_4457_ = lean_string_append(v___x_4455_, v___x_4456_);
v___x_4458_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntryMaybe___closed__1));
v___x_4459_ = lean_string_append(v___x_4457_, v___x_4458_);
v___x_4460_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_4461_ = lean_string_append(v___x_4459_, v___x_4460_);
v___x_4462_ = lean_string_append(v___x_4461_, v_received_4453_);
lean_dec_ref(v_received_4453_);
v___x_4463_ = lean_string_utf8_byte_size(v___y_4452_);
v___x_4464_ = lean_unsigned_to_nat(0u);
v___x_4465_ = lean_nat_dec_eq(v___x_4463_, v___x_4464_);
if (v___x_4465_ == 0)
{
lean_object* v___x_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; 
v___x_4466_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_4467_ = lean_string_append(v___x_4466_, v___y_4452_);
lean_dec_ref(v___y_4452_);
v___x_4468_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_4469_ = lean_string_append(v___x_4467_, v___x_4468_);
v___y_4446_ = v___x_4462_;
v___y_4447_ = v___x_4469_;
goto v___jp_4445_;
}
else
{
lean_object* v___x_4470_; 
lean_dec_ref(v___y_4452_);
v___x_4470_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_4446_ = v___x_4462_;
v___y_4447_ = v___x_4470_;
goto v___jp_4445_;
}
}
v___jp_4471_:
{
lean_object* v___x_4473_; 
v___x_4473_ = l_Lasm_JS_Data_describe(v_d_4443_);
v___y_4452_ = v___y_4472_;
v_received_4453_ = v___x_4473_;
goto v___jp_4451_;
}
v___jp_4474_:
{
if (lean_obj_tag(v_d_4443_) == 9)
{
lean_object* v_value_4476_; lean_object* v_description_4477_; lean_object* v___x_4478_; uint8_t v___x_4479_; 
v_value_4476_ = lean_ctor_get(v_d_4443_, 0);
v_description_4477_ = lean_ctor_get(v_d_4443_, 1);
v___x_4478_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4479_ = lean_string_dec_eq(v_description_4477_, v___x_4478_);
if (v___x_4479_ == 0)
{
v___y_4472_ = v_a_4475_;
goto v___jp_4471_;
}
else
{
lean_object* v___x_4481_; uint8_t v_isShared_4482_; uint8_t v_isSharedCheck_4496_; 
lean_inc(v_value_4476_);
v_isSharedCheck_4496_ = !lean_is_exclusive(v_d_4443_);
if (v_isSharedCheck_4496_ == 0)
{
lean_object* v_unused_4497_; lean_object* v_unused_4498_; 
v_unused_4497_ = lean_ctor_get(v_d_4443_, 1);
lean_dec(v_unused_4497_);
v_unused_4498_ = lean_ctor_get(v_d_4443_, 0);
lean_dec(v_unused_4498_);
v___x_4481_ = v_d_4443_;
v_isShared_4482_ = v_isSharedCheck_4496_;
goto v_resetjp_4480_;
}
else
{
lean_dec(v_d_4443_);
v___x_4481_ = lean_box(0);
v_isShared_4482_ = v_isSharedCheck_4496_;
goto v_resetjp_4480_;
}
v_resetjp_4480_:
{
uint32_t v___x_4483_; uint64_t v___x_4484_; lean_object* v___x_4486_; 
v___x_4483_ = 206;
v___x_4484_ = 0ULL;
lean_inc(v_value_4476_);
if (v_isShared_4482_ == 0)
{
lean_ctor_set(v___x_4481_, 1, v___x_4478_);
v___x_4486_ = v___x_4481_;
goto v_reusejp_4485_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v_value_4476_);
lean_ctor_set(v_reuseFailAlloc_4495_, 1, v___x_4478_);
v___x_4486_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4485_;
}
v_reusejp_4485_:
{
uint32_t v___x_4487_; lean_object* v___x_4488_; 
v___x_4487_ = lasm_js_value_handle(v_value_4476_);
lean_dec(v_value_4476_);
v___x_4488_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4483_, v___x_4484_, v___x_4486_, v___x_4487_);
lean_dec_ref(v___x_4486_);
if (lean_obj_tag(v___x_4488_) == 0)
{
lean_object* v_a_4489_; uint8_t v___x_4490_; 
v_a_4489_ = lean_ctor_get(v___x_4488_, 0);
lean_inc(v_a_4489_);
lean_dec_ref_known(v___x_4488_, 1);
v___x_4490_ = lean_string_validate_utf8(v_a_4489_);
if (v___x_4490_ == 0)
{
lean_object* v___x_4491_; lean_object* v___x_4492_; 
lean_dec(v_a_4489_);
v___x_4491_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_4492_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4491_);
v___y_4452_ = v_a_4475_;
v_received_4453_ = v___x_4492_;
goto v___jp_4451_;
}
else
{
lean_object* v___x_4493_; 
v___x_4493_ = lean_string_from_utf8_unchecked(v_a_4489_);
v___y_4452_ = v_a_4475_;
v_received_4453_ = v___x_4493_;
goto v___jp_4451_;
}
}
else
{
lean_object* v___x_4494_; 
lean_dec_ref_known(v___x_4488_, 1);
v___x_4494_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_4452_ = v_a_4475_;
v_received_4453_ = v___x_4494_;
goto v___jp_4451_;
}
}
}
}
}
else
{
v___y_4472_ = v_a_4475_;
goto v___jp_4471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4___boxed(lean_object* v_context_4519_, lean_object* v_d_4520_, lean_object* v_a_4521_){
_start:
{
lean_object* v_res_4522_; 
v_res_4522_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4(v_context_4519_, v_d_4520_);
lean_dec_ref(v_context_4519_);
return v_res_4522_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0(lean_object* v_context_4523_, lean_object* v_x_4524_){
_start:
{
lean_object* v_val_4527_; 
if (lean_obj_tag(v_x_4524_) == 0)
{
lean_object* v_a_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4537_; 
v_a_4529_ = lean_ctor_get(v_x_4524_, 0);
v_isSharedCheck_4537_ = !lean_is_exclusive(v_x_4524_);
if (v_isSharedCheck_4537_ == 0)
{
v___x_4531_ = v_x_4524_;
v_isShared_4532_ = v_isSharedCheck_4537_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_a_4529_);
lean_dec(v_x_4524_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4537_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v___x_4534_; 
if (v_isShared_4532_ == 0)
{
v___x_4534_ = v___x_4531_;
goto v_reusejp_4533_;
}
else
{
lean_object* v_reuseFailAlloc_4536_; 
v_reuseFailAlloc_4536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4536_, 0, v_a_4529_);
v___x_4534_ = v_reuseFailAlloc_4536_;
goto v_reusejp_4533_;
}
v_reusejp_4533_:
{
lean_object* v___x_4535_; 
v___x_4535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4535_, 0, v___x_4534_);
return v___x_4535_;
}
}
}
else
{
lean_object* v_a_4538_; lean_object* v___x_4540_; uint8_t v_isShared_4541_; uint8_t v_isSharedCheck_4551_; 
v_a_4538_ = lean_ctor_get(v_x_4524_, 0);
v_isSharedCheck_4551_ = !lean_is_exclusive(v_x_4524_);
if (v_isSharedCheck_4551_ == 0)
{
v___x_4540_ = v_x_4524_;
v_isShared_4541_ = v_isSharedCheck_4551_;
goto v_resetjp_4539_;
}
else
{
lean_inc(v_a_4538_);
lean_dec(v_x_4524_);
v___x_4540_ = lean_box(0);
v_isShared_4541_ = v_isSharedCheck_4551_;
goto v_resetjp_4539_;
}
v_resetjp_4539_:
{
lean_object* v___x_4542_; 
v___x_4542_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3_spec__4(v_context_4523_, v_a_4538_);
if (lean_obj_tag(v___x_4542_) == 0)
{
lean_object* v_a_4543_; lean_object* v___x_4545_; 
v_a_4543_ = lean_ctor_get(v___x_4542_, 0);
lean_inc(v_a_4543_);
lean_dec_ref_known(v___x_4542_, 1);
if (v_isShared_4541_ == 0)
{
lean_ctor_set(v___x_4540_, 0, v_a_4543_);
v___x_4545_ = v___x_4540_;
goto v_reusejp_4544_;
}
else
{
lean_object* v_reuseFailAlloc_4546_; 
v_reuseFailAlloc_4546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4546_, 0, v_a_4543_);
v___x_4545_ = v_reuseFailAlloc_4546_;
goto v_reusejp_4544_;
}
v_reusejp_4544_:
{
v_val_4527_ = v___x_4545_;
goto v___jp_4526_;
}
}
else
{
lean_object* v_a_4547_; lean_object* v___x_4549_; 
v_a_4547_ = lean_ctor_get(v___x_4542_, 0);
lean_inc(v_a_4547_);
lean_dec_ref_known(v___x_4542_, 1);
if (v_isShared_4541_ == 0)
{
lean_ctor_set_tag(v___x_4540_, 0);
lean_ctor_set(v___x_4540_, 0, v_a_4547_);
v___x_4549_ = v___x_4540_;
goto v_reusejp_4548_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v_a_4547_);
v___x_4549_ = v_reuseFailAlloc_4550_;
goto v_reusejp_4548_;
}
v_reusejp_4548_:
{
v_val_4527_ = v___x_4549_;
goto v___jp_4526_;
}
}
}
}
v___jp_4526_:
{
lean_object* v___x_4528_; 
v___x_4528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4528_, 0, v_val_4527_);
return v___x_4528_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0___boxed(lean_object* v_context_4552_, lean_object* v_x_4553_, lean_object* v___y_4554_){
_start:
{
lean_object* v_res_4555_; 
v_res_4555_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0(v_context_4552_, v_x_4553_);
lean_dec_ref(v_context_4552_);
return v_res_4555_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3(lean_object* v___f_4556_, lean_object* v_x_4557_){
_start:
{
if (lean_obj_tag(v_x_4557_) == 0)
{
lean_object* v_a_4559_; lean_object* v___x_4561_; uint8_t v_isShared_4562_; uint8_t v_isSharedCheck_4567_; 
lean_dec_ref(v___f_4556_);
v_a_4559_ = lean_ctor_get(v_x_4557_, 0);
v_isSharedCheck_4567_ = !lean_is_exclusive(v_x_4557_);
if (v_isSharedCheck_4567_ == 0)
{
v___x_4561_ = v_x_4557_;
v_isShared_4562_ = v_isSharedCheck_4567_;
goto v_resetjp_4560_;
}
else
{
lean_inc(v_a_4559_);
lean_dec(v_x_4557_);
v___x_4561_ = lean_box(0);
v_isShared_4562_ = v_isSharedCheck_4567_;
goto v_resetjp_4560_;
}
v_resetjp_4560_:
{
lean_object* v___x_4564_; 
if (v_isShared_4562_ == 0)
{
v___x_4564_ = v___x_4561_;
goto v_reusejp_4563_;
}
else
{
lean_object* v_reuseFailAlloc_4566_; 
v_reuseFailAlloc_4566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4566_, 0, v_a_4559_);
v___x_4564_ = v_reuseFailAlloc_4566_;
goto v_reusejp_4563_;
}
v_reusejp_4563_:
{
lean_object* v___x_4565_; 
v___x_4565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4565_, 0, v___x_4564_);
return v___x_4565_;
}
}
}
else
{
lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4579_; 
v_isSharedCheck_4579_ = !lean_is_exclusive(v_x_4557_);
if (v_isSharedCheck_4579_ == 0)
{
lean_object* v_unused_4580_; 
v_unused_4580_ = lean_ctor_get(v_x_4557_, 0);
lean_dec(v_unused_4580_);
v___x_4569_ = v_x_4557_;
v_isShared_4570_ = v_isSharedCheck_4579_;
goto v_resetjp_4568_;
}
else
{
lean_dec(v_x_4557_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4579_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
lean_object* v___x_4571_; uint8_t v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4575_; 
v___x_4571_ = lean_unsigned_to_nat(0u);
v___x_4572_ = 0;
v___x_4573_ = lean_io_promise_new();
if (v_isShared_4570_ == 0)
{
lean_ctor_set(v___x_4569_, 0, v___x_4573_);
v___x_4575_ = v___x_4569_;
goto v_reusejp_4574_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v___x_4573_);
v___x_4575_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4574_;
}
v_reusejp_4574_:
{
lean_object* v___x_4576_; lean_object* v___x_4577_; 
v___x_4576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4576_, 0, v___x_4575_);
v___x_4577_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4571_, v___x_4572_, v___x_4576_, v___f_4556_);
return v___x_4577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3___boxed(lean_object* v___f_4581_, lean_object* v_x_4582_, lean_object* v___y_4583_){
_start:
{
lean_object* v_res_4584_; 
v_res_4584_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3(v___f_4581_, v_x_4582_);
return v_res_4584_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2(lean_object* v___f_4585_, lean_object* v_x_4586_){
_start:
{
if (lean_obj_tag(v_x_4586_) == 0)
{
lean_object* v_a_4588_; lean_object* v___x_4590_; uint8_t v_isShared_4591_; uint8_t v_isSharedCheck_4596_; 
lean_dec_ref(v___f_4585_);
v_a_4588_ = lean_ctor_get(v_x_4586_, 0);
v_isSharedCheck_4596_ = !lean_is_exclusive(v_x_4586_);
if (v_isSharedCheck_4596_ == 0)
{
v___x_4590_ = v_x_4586_;
v_isShared_4591_ = v_isSharedCheck_4596_;
goto v_resetjp_4589_;
}
else
{
lean_inc(v_a_4588_);
lean_dec(v_x_4586_);
v___x_4590_ = lean_box(0);
v_isShared_4591_ = v_isSharedCheck_4596_;
goto v_resetjp_4589_;
}
v_resetjp_4589_:
{
lean_object* v___x_4593_; 
if (v_isShared_4591_ == 0)
{
v___x_4593_ = v___x_4590_;
goto v_reusejp_4592_;
}
else
{
lean_object* v_reuseFailAlloc_4595_; 
v_reuseFailAlloc_4595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4595_, 0, v_a_4588_);
v___x_4593_ = v_reuseFailAlloc_4595_;
goto v_reusejp_4592_;
}
v_reusejp_4592_:
{
lean_object* v___x_4594_; 
v___x_4594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4594_, 0, v___x_4593_);
return v___x_4594_;
}
}
}
else
{
lean_object* v_a_4597_; lean_object* v___x_4598_; 
v_a_4597_ = lean_ctor_get(v_x_4586_, 0);
lean_inc(v_a_4597_);
lean_dec_ref_known(v_x_4586_, 1);
v___x_4598_ = lean_apply_2(v___f_4585_, v_a_4597_, lean_box(0));
return v___x_4598_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2___boxed(lean_object* v___f_4599_, lean_object* v_x_4600_, lean_object* v___y_4601_){
_start:
{
lean_object* v_res_4602_; 
v_res_4602_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2(v___f_4599_, v_x_4600_);
return v_res_4602_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1(lean_object* v___f_4603_, lean_object* v_bytes_4604_){
_start:
{
lean_object* v___x_4606_; uint8_t v___x_4607_; lean_object* v_val_4609_; lean_object* v___x_4612_; 
v___x_4606_ = lean_unsigned_to_nat(0u);
v___x_4607_ = 0;
v___x_4612_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4604_);
if (lean_obj_tag(v___x_4612_) == 0)
{
lean_object* v_a_4613_; lean_object* v___x_4615_; uint8_t v_isShared_4616_; uint8_t v_isSharedCheck_4620_; 
v_a_4613_ = lean_ctor_get(v___x_4612_, 0);
v_isSharedCheck_4620_ = !lean_is_exclusive(v___x_4612_);
if (v_isSharedCheck_4620_ == 0)
{
v___x_4615_ = v___x_4612_;
v_isShared_4616_ = v_isSharedCheck_4620_;
goto v_resetjp_4614_;
}
else
{
lean_inc(v_a_4613_);
lean_dec(v___x_4612_);
v___x_4615_ = lean_box(0);
v_isShared_4616_ = v_isSharedCheck_4620_;
goto v_resetjp_4614_;
}
v_resetjp_4614_:
{
lean_object* v___x_4618_; 
if (v_isShared_4616_ == 0)
{
lean_ctor_set_tag(v___x_4615_, 1);
v___x_4618_ = v___x_4615_;
goto v_reusejp_4617_;
}
else
{
lean_object* v_reuseFailAlloc_4619_; 
v_reuseFailAlloc_4619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4619_, 0, v_a_4613_);
v___x_4618_ = v_reuseFailAlloc_4619_;
goto v_reusejp_4617_;
}
v_reusejp_4617_:
{
v_val_4609_ = v___x_4618_;
goto v___jp_4608_;
}
}
}
else
{
lean_object* v_a_4621_; lean_object* v___x_4623_; uint8_t v_isShared_4624_; uint8_t v_isSharedCheck_4628_; 
v_a_4621_ = lean_ctor_get(v___x_4612_, 0);
v_isSharedCheck_4628_ = !lean_is_exclusive(v___x_4612_);
if (v_isSharedCheck_4628_ == 0)
{
v___x_4623_ = v___x_4612_;
v_isShared_4624_ = v_isSharedCheck_4628_;
goto v_resetjp_4622_;
}
else
{
lean_inc(v_a_4621_);
lean_dec(v___x_4612_);
v___x_4623_ = lean_box(0);
v_isShared_4624_ = v_isSharedCheck_4628_;
goto v_resetjp_4622_;
}
v_resetjp_4622_:
{
lean_object* v___x_4626_; 
if (v_isShared_4624_ == 0)
{
lean_ctor_set_tag(v___x_4623_, 0);
v___x_4626_ = v___x_4623_;
goto v_reusejp_4625_;
}
else
{
lean_object* v_reuseFailAlloc_4627_; 
v_reuseFailAlloc_4627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4627_, 0, v_a_4621_);
v___x_4626_ = v_reuseFailAlloc_4627_;
goto v_reusejp_4625_;
}
v_reusejp_4625_:
{
v_val_4609_ = v___x_4626_;
goto v___jp_4608_;
}
}
}
v___jp_4608_:
{
lean_object* v___x_4610_; lean_object* v___x_4611_; 
v___x_4610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4610_, 0, v_val_4609_);
v___x_4611_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4606_, v___x_4607_, v___x_4610_, v___f_4603_);
return v___x_4611_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1___boxed(lean_object* v___f_4629_, lean_object* v_bytes_4630_, lean_object* v___y_4631_){
_start:
{
lean_object* v_res_4632_; 
v_res_4632_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1(v___f_4629_, v_bytes_4630_);
lean_dec_ref(v_bytes_4630_);
return v_res_4632_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9(lean_object* v_failurePrefix_4633_, uint32_t v_op_4634_, uint64_t v_flags_4635_, lean_object* v_payload_4636_, lean_object* v___f_4637_, lean_object* v___f_4638_, lean_object* v___f_4639_, lean_object* v_x_4640_){
_start:
{
if (lean_obj_tag(v_x_4640_) == 0)
{
lean_object* v_a_4642_; lean_object* v___x_4644_; uint8_t v_isShared_4645_; uint8_t v_isSharedCheck_4650_; 
lean_dec_ref(v___f_4639_);
lean_dec_ref(v___f_4638_);
lean_dec_ref(v___f_4637_);
lean_dec(v_payload_4636_);
v_a_4642_ = lean_ctor_get(v_x_4640_, 0);
v_isSharedCheck_4650_ = !lean_is_exclusive(v_x_4640_);
if (v_isSharedCheck_4650_ == 0)
{
v___x_4644_ = v_x_4640_;
v_isShared_4645_ = v_isSharedCheck_4650_;
goto v_resetjp_4643_;
}
else
{
lean_inc(v_a_4642_);
lean_dec(v_x_4640_);
v___x_4644_ = lean_box(0);
v_isShared_4645_ = v_isSharedCheck_4650_;
goto v_resetjp_4643_;
}
v_resetjp_4643_:
{
lean_object* v___x_4647_; 
if (v_isShared_4645_ == 0)
{
v___x_4647_ = v___x_4644_;
goto v_reusejp_4646_;
}
else
{
lean_object* v_reuseFailAlloc_4649_; 
v_reuseFailAlloc_4649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4649_, 0, v_a_4642_);
v___x_4647_ = v_reuseFailAlloc_4649_;
goto v_reusejp_4646_;
}
v_reusejp_4646_:
{
lean_object* v___x_4648_; 
v___x_4648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4648_, 0, v___x_4647_);
return v___x_4648_;
}
}
}
else
{
lean_object* v_a_4651_; lean_object* v___x_4653_; uint8_t v_isShared_4654_; uint8_t v_isSharedCheck_4697_; 
v_a_4651_ = lean_ctor_get(v_x_4640_, 0);
v_isSharedCheck_4697_ = !lean_is_exclusive(v_x_4640_);
if (v_isSharedCheck_4697_ == 0)
{
v___x_4653_ = v_x_4640_;
v_isShared_4654_ = v_isSharedCheck_4697_;
goto v_resetjp_4652_;
}
else
{
lean_inc(v_a_4651_);
lean_dec(v_x_4640_);
v___x_4653_ = lean_box(0);
v_isShared_4654_ = v_isSharedCheck_4697_;
goto v_resetjp_4652_;
}
v_resetjp_4652_:
{
lean_object* v___x_4655_; lean_object* v___x_4656_; uint8_t v___x_4657_; 
v___x_4655_ = lean_string_utf8_byte_size(v_failurePrefix_4633_);
v___x_4656_ = lean_unsigned_to_nat(0u);
v___x_4657_ = lean_nat_dec_eq(v___x_4655_, v___x_4656_);
if (v___x_4657_ == 0)
{
lean_object* v___f_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___f_4662_; lean_object* v_val_4664_; lean_object* v___x_4669_; 
lean_dec_ref(v___f_4639_);
lean_inc(v_a_4651_);
v___f_4658_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4658_, 0, v_a_4651_);
v___x_4659_ = lean_box(v___x_4657_);
v___x_4660_ = lean_box_uint32(v_op_4634_);
v___x_4661_ = lean_box_uint64(v_flags_4635_);
lean_inc(v_payload_4636_);
v___f_4662_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4662_, 0, v___x_4656_);
lean_closure_set(v___f_4662_, 1, v___x_4659_);
lean_closure_set(v___f_4662_, 2, v___f_4658_);
lean_closure_set(v___f_4662_, 3, v_a_4651_);
lean_closure_set(v___f_4662_, 4, v___x_4660_);
lean_closure_set(v___f_4662_, 5, v___x_4661_);
lean_closure_set(v___f_4662_, 6, v_payload_4636_);
v___x_4669_ = l_Lasm_JS_Wire_encodeIO(v_payload_4636_);
lean_dec(v_payload_4636_);
if (lean_obj_tag(v___x_4669_) == 0)
{
lean_object* v_a_4670_; lean_object* v___x_4672_; 
v_a_4670_ = lean_ctor_get(v___x_4669_, 0);
lean_inc(v_a_4670_);
lean_dec_ref_known(v___x_4669_, 1);
if (v_isShared_4654_ == 0)
{
lean_ctor_set(v___x_4653_, 0, v_a_4670_);
v___x_4672_ = v___x_4653_;
goto v_reusejp_4671_;
}
else
{
lean_object* v_reuseFailAlloc_4673_; 
v_reuseFailAlloc_4673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4673_, 0, v_a_4670_);
v___x_4672_ = v_reuseFailAlloc_4673_;
goto v_reusejp_4671_;
}
v_reusejp_4671_:
{
v_val_4664_ = v___x_4672_;
goto v___jp_4663_;
}
}
else
{
lean_object* v_a_4674_; lean_object* v___x_4676_; 
v_a_4674_ = lean_ctor_get(v___x_4669_, 0);
lean_inc(v_a_4674_);
lean_dec_ref_known(v___x_4669_, 1);
if (v_isShared_4654_ == 0)
{
lean_ctor_set_tag(v___x_4653_, 0);
lean_ctor_set(v___x_4653_, 0, v_a_4674_);
v___x_4676_ = v___x_4653_;
goto v_reusejp_4675_;
}
else
{
lean_object* v_reuseFailAlloc_4677_; 
v_reuseFailAlloc_4677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4677_, 0, v_a_4674_);
v___x_4676_ = v_reuseFailAlloc_4677_;
goto v_reusejp_4675_;
}
v_reusejp_4675_:
{
v_val_4664_ = v___x_4676_;
goto v___jp_4663_;
}
}
v___jp_4663_:
{
lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; 
v___x_4665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4665_, 0, v_val_4664_);
v___x_4666_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4656_, v___x_4657_, v___x_4665_, v___f_4662_);
v___x_4667_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4656_, v___x_4657_, v___x_4666_, v___f_4637_);
v___x_4668_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4656_, v___x_4657_, v___x_4667_, v___f_4638_);
return v___x_4668_;
}
}
else
{
lean_object* v___f_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___f_4681_; uint8_t v___x_4682_; lean_object* v_val_4684_; lean_object* v___x_4688_; 
lean_dec_ref(v___f_4638_);
lean_dec_ref(v___f_4637_);
lean_inc(v_a_4651_);
v___f_4678_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4678_, 0, v_a_4651_);
v___x_4679_ = lean_box_uint32(v_op_4634_);
v___x_4680_ = lean_box_uint64(v_flags_4635_);
lean_inc(v_payload_4636_);
v___f_4681_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4681_, 0, v___f_4678_);
lean_closure_set(v___f_4681_, 1, v_a_4651_);
lean_closure_set(v___f_4681_, 2, v___x_4679_);
lean_closure_set(v___f_4681_, 3, v___x_4680_);
lean_closure_set(v___f_4681_, 4, v_payload_4636_);
v___x_4682_ = 0;
v___x_4688_ = l_Lasm_JS_Wire_encodeIO(v_payload_4636_);
lean_dec(v_payload_4636_);
if (lean_obj_tag(v___x_4688_) == 0)
{
lean_object* v_a_4689_; lean_object* v___x_4691_; 
v_a_4689_ = lean_ctor_get(v___x_4688_, 0);
lean_inc(v_a_4689_);
lean_dec_ref_known(v___x_4688_, 1);
if (v_isShared_4654_ == 0)
{
lean_ctor_set(v___x_4653_, 0, v_a_4689_);
v___x_4691_ = v___x_4653_;
goto v_reusejp_4690_;
}
else
{
lean_object* v_reuseFailAlloc_4692_; 
v_reuseFailAlloc_4692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4692_, 0, v_a_4689_);
v___x_4691_ = v_reuseFailAlloc_4692_;
goto v_reusejp_4690_;
}
v_reusejp_4690_:
{
v_val_4684_ = v___x_4691_;
goto v___jp_4683_;
}
}
else
{
lean_object* v_a_4693_; lean_object* v___x_4695_; 
v_a_4693_ = lean_ctor_get(v___x_4688_, 0);
lean_inc(v_a_4693_);
lean_dec_ref_known(v___x_4688_, 1);
if (v_isShared_4654_ == 0)
{
lean_ctor_set_tag(v___x_4653_, 0);
lean_ctor_set(v___x_4653_, 0, v_a_4693_);
v___x_4695_ = v___x_4653_;
goto v_reusejp_4694_;
}
else
{
lean_object* v_reuseFailAlloc_4696_; 
v_reuseFailAlloc_4696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4696_, 0, v_a_4693_);
v___x_4695_ = v_reuseFailAlloc_4696_;
goto v_reusejp_4694_;
}
v_reusejp_4694_:
{
v_val_4684_ = v___x_4695_;
goto v___jp_4683_;
}
}
v___jp_4683_:
{
lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; 
v___x_4685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4685_, 0, v_val_4684_);
v___x_4686_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4656_, v___x_4682_, v___x_4685_, v___f_4681_);
v___x_4687_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4656_, v___x_4682_, v___x_4686_, v___f_4639_);
return v___x_4687_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9___boxed(lean_object* v_failurePrefix_4698_, lean_object* v_op_4699_, lean_object* v_flags_4700_, lean_object* v_payload_4701_, lean_object* v___f_4702_, lean_object* v___f_4703_, lean_object* v___f_4704_, lean_object* v_x_4705_, lean_object* v___y_4706_){
_start:
{
uint32_t v_op_boxed_4707_; uint64_t v_flags_boxed_4708_; lean_object* v_res_4709_; 
v_op_boxed_4707_ = lean_unbox_uint32(v_op_4699_);
lean_dec(v_op_4699_);
v_flags_boxed_4708_ = lean_unbox_uint64(v_flags_4700_);
lean_dec_ref(v_flags_4700_);
v_res_4709_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9(v_failurePrefix_4698_, v_op_boxed_4707_, v_flags_boxed_4708_, v_payload_4701_, v___f_4702_, v___f_4703_, v___f_4704_, v_x_4705_);
lean_dec_ref(v_failurePrefix_4698_);
return v_res_4709_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3(lean_object* v_context_4710_, uint32_t v_op_4711_, uint64_t v_flags_4712_, lean_object* v_payload_4713_, lean_object* v_failurePrefix_4714_){
_start:
{
lean_object* v___f_4716_; lean_object* v___f_4717_; lean_object* v___f_4718_; lean_object* v___f_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___f_4722_; lean_object* v___f_4723_; lean_object* v___x_4724_; uint8_t v___x_4725_; lean_object* v_val_4727_; lean_object* v___x_4730_; 
v___f_4716_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4716_, 0, v_context_4710_);
v___f_4717_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4717_, 0, v___f_4716_);
v___f_4718_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4718_, 0, v___f_4717_);
lean_inc_ref(v_failurePrefix_4714_);
v___f_4719_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4719_, 0, v_failurePrefix_4714_);
v___x_4720_ = lean_box_uint32(v_op_4711_);
v___x_4721_ = lean_box_uint64(v_flags_4712_);
lean_inc_ref(v___f_4718_);
v___f_4722_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4722_, 0, v_failurePrefix_4714_);
lean_closure_set(v___f_4722_, 1, v___x_4720_);
lean_closure_set(v___f_4722_, 2, v___x_4721_);
lean_closure_set(v___f_4722_, 3, v_payload_4713_);
lean_closure_set(v___f_4722_, 4, v___f_4719_);
lean_closure_set(v___f_4722_, 5, v___f_4718_);
lean_closure_set(v___f_4722_, 6, v___f_4718_);
v___f_4723_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4723_, 0, v___f_4722_);
v___x_4724_ = lean_unsigned_to_nat(0u);
v___x_4725_ = 0;
v___x_4730_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4730_) == 0)
{
lean_object* v_a_4731_; lean_object* v___x_4733_; uint8_t v_isShared_4734_; uint8_t v_isSharedCheck_4738_; 
v_a_4731_ = lean_ctor_get(v___x_4730_, 0);
v_isSharedCheck_4738_ = !lean_is_exclusive(v___x_4730_);
if (v_isSharedCheck_4738_ == 0)
{
v___x_4733_ = v___x_4730_;
v_isShared_4734_ = v_isSharedCheck_4738_;
goto v_resetjp_4732_;
}
else
{
lean_inc(v_a_4731_);
lean_dec(v___x_4730_);
v___x_4733_ = lean_box(0);
v_isShared_4734_ = v_isSharedCheck_4738_;
goto v_resetjp_4732_;
}
v_resetjp_4732_:
{
lean_object* v___x_4736_; 
if (v_isShared_4734_ == 0)
{
lean_ctor_set_tag(v___x_4733_, 1);
v___x_4736_ = v___x_4733_;
goto v_reusejp_4735_;
}
else
{
lean_object* v_reuseFailAlloc_4737_; 
v_reuseFailAlloc_4737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4737_, 0, v_a_4731_);
v___x_4736_ = v_reuseFailAlloc_4737_;
goto v_reusejp_4735_;
}
v_reusejp_4735_:
{
v_val_4727_ = v___x_4736_;
goto v___jp_4726_;
}
}
}
else
{
lean_object* v_a_4739_; lean_object* v___x_4741_; uint8_t v_isShared_4742_; uint8_t v_isSharedCheck_4746_; 
v_a_4739_ = lean_ctor_get(v___x_4730_, 0);
v_isSharedCheck_4746_ = !lean_is_exclusive(v___x_4730_);
if (v_isSharedCheck_4746_ == 0)
{
v___x_4741_ = v___x_4730_;
v_isShared_4742_ = v_isSharedCheck_4746_;
goto v_resetjp_4740_;
}
else
{
lean_inc(v_a_4739_);
lean_dec(v___x_4730_);
v___x_4741_ = lean_box(0);
v_isShared_4742_ = v_isSharedCheck_4746_;
goto v_resetjp_4740_;
}
v_resetjp_4740_:
{
lean_object* v___x_4744_; 
if (v_isShared_4742_ == 0)
{
lean_ctor_set_tag(v___x_4741_, 0);
v___x_4744_ = v___x_4741_;
goto v_reusejp_4743_;
}
else
{
lean_object* v_reuseFailAlloc_4745_; 
v_reuseFailAlloc_4745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4745_, 0, v_a_4739_);
v___x_4744_ = v_reuseFailAlloc_4745_;
goto v_reusejp_4743_;
}
v_reusejp_4743_:
{
v_val_4727_ = v___x_4744_;
goto v___jp_4726_;
}
}
}
v___jp_4726_:
{
lean_object* v___x_4728_; lean_object* v___x_4729_; 
v___x_4728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4728_, 0, v_val_4727_);
v___x_4729_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4724_, v___x_4725_, v___x_4728_, v___f_4723_);
return v___x_4729_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3___boxed(lean_object* v_context_4747_, lean_object* v_op_4748_, lean_object* v_flags_4749_, lean_object* v_payload_4750_, lean_object* v_failurePrefix_4751_, lean_object* v_a_4752_){
_start:
{
uint32_t v_op_boxed_4753_; uint64_t v_flags_boxed_4754_; lean_object* v_res_4755_; 
v_op_boxed_4753_ = lean_unbox_uint32(v_op_4748_);
lean_dec(v_op_4748_);
v_flags_boxed_4754_ = lean_unbox_uint64(v_flags_4749_);
lean_dec_ref(v_flags_4749_);
v_res_4755_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3(v_context_4747_, v_op_boxed_4753_, v_flags_boxed_4754_, v_payload_4750_, v_failurePrefix_4751_);
return v_res_4755_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2(uint8_t v_await_4756_, uint64_t v_extra_4757_){
_start:
{
uint64_t v___x_4758_; uint64_t v___y_4760_; 
v___x_4758_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_4756_ == 0)
{
uint64_t v___x_4763_; 
v___x_4763_ = 0ULL;
v___y_4760_ = v___x_4763_;
goto v___jp_4759_;
}
else
{
uint64_t v___x_4764_; 
v___x_4764_ = 2ULL;
v___y_4760_ = v___x_4764_;
goto v___jp_4759_;
}
v___jp_4759_:
{
uint64_t v___x_4761_; uint64_t v___x_4762_; 
v___x_4761_ = lean_uint64_lor(v___x_4758_, v___y_4760_);
v___x_4762_ = lean_uint64_lor(v___x_4761_, v_extra_4757_);
return v___x_4762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2___boxed(lean_object* v_await_4765_, lean_object* v_extra_4766_){
_start:
{
uint8_t v_await_boxed_4767_; uint64_t v_extra_boxed_4768_; uint64_t v_res_4769_; lean_object* v_r_4770_; 
v_await_boxed_4767_ = lean_unbox(v_await_4765_);
v_extra_boxed_4768_ = lean_unbox_uint64(v_extra_4766_);
lean_dec_ref(v_extra_4766_);
v_res_4769_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2(v_await_boxed_4767_, v_extra_boxed_4768_);
v_r_4770_ = lean_box_uint64(v_res_4769_);
return v_r_4770_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0(void){
_start:
{
uint64_t v___x_4771_; uint8_t v___x_4772_; uint64_t v___x_4773_; 
v___x_4771_ = 8ULL;
v___x_4772_ = 0;
v___x_4773_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__2(v___x_4772_, v___x_4771_);
return v___x_4773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1(lean_object* v_o_4774_, lean_object* v_name_4775_, lean_object* v_args_4776_){
_start:
{
lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; uint32_t v___x_4783_; uint64_t v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; 
v___x_4778_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_4779_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4779_, 0, v_o_4774_);
lean_ctor_set(v___x_4779_, 1, v___x_4778_);
lean_inc_ref(v_name_4775_);
v___x_4780_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4780_, 0, v_name_4775_);
v___x_4781_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_4782_ = lean_string_append(v___x_4781_, v_name_4775_);
lean_dec_ref(v_name_4775_);
v___x_4783_ = 205;
v___x_4784_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___closed__0);
v___x_4785_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4785_, 0, v_args_4776_);
v___x_4786_ = lean_unsigned_to_nat(3u);
v___x_4787_ = lean_mk_empty_array_with_capacity(v___x_4786_);
v___x_4788_ = lean_array_push(v___x_4787_, v___x_4779_);
v___x_4789_ = lean_array_push(v___x_4788_, v___x_4780_);
v___x_4790_ = lean_array_push(v___x_4789_, v___x_4785_);
v___x_4791_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4791_, 0, v___x_4790_);
v___x_4792_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1_spec__3(v___x_4782_, v___x_4783_, v___x_4784_, v___x_4791_, v___x_4778_);
return v___x_4792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1___boxed(lean_object* v_o_4793_, lean_object* v_name_4794_, lean_object* v_args_4795_, lean_object* v___y_4796_){
_start:
{
lean_object* v_res_4797_; 
v_res_4797_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1(v_o_4793_, v_name_4794_, v_args_4795_);
return v_res_4797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(lean_object* v_x_4798_){
_start:
{
if (lean_obj_tag(v_x_4798_) == 0)
{
lean_object* v___x_4799_; 
v___x_4799_ = lean_box(0);
return v___x_4799_;
}
else
{
lean_object* v_val_4800_; uint8_t v___x_4801_; 
v_val_4800_ = lean_ctor_get(v_x_4798_, 0);
v___x_4801_ = lean_unbox(v_val_4800_);
if (v___x_4801_ == 0)
{
lean_object* v___x_4802_; 
v___x_4802_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__1));
return v___x_4802_;
}
else
{
lean_object* v___x_4803_; 
v___x_4803_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvConsistencyLevel___lam__0___closed__3));
return v___x_4803_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0___boxed(lean_object* v_x_4804_){
_start:
{
lean_object* v_res_4805_; 
v_res_4805_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(v_x_4804_);
lean_dec(v_x_4804_);
return v_res_4805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0(lean_object* v_x_4806_){
_start:
{
if (lean_obj_tag(v_x_4806_) == 0)
{
lean_object* v___x_4807_; 
v___x_4807_ = lean_box(0);
return v___x_4807_;
}
else
{
lean_object* v_val_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; 
v_val_4808_ = lean_ctor_get(v_x_4806_, 0);
v___x_4809_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_4810_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(v_val_4808_);
v___x_4811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4811_, 0, v___x_4809_);
lean_ctor_set(v___x_4811_, 1, v___x_4810_);
v___x_4812_ = lean_unsigned_to_nat(1u);
v___x_4813_ = lean_mk_empty_array_with_capacity(v___x_4812_);
v___x_4814_ = lean_array_push(v___x_4813_, v___x_4811_);
v___x_4815_ = l_Lasm_JS_Web_Support_fields(v___x_4814_);
lean_dec_ref(v___x_4814_);
return v___x_4815_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0___boxed(lean_object* v_x_4816_){
_start:
{
lean_object* v_res_4817_; 
v_res_4817_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0(v_x_4816_);
lean_dec(v_x_4816_);
return v_res_4817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_get(lean_object* v_self_4819_, lean_object* v_key_4820_, lean_object* v_options_4821_){
_start:
{
lean_object* v___x_4823_; size_t v_sz_4824_; size_t v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; 
v___x_4823_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_get___closed__0));
v_sz_4824_ = lean_array_size(v_key_4820_);
v___x_4825_ = ((size_t)0ULL);
v___x_4826_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_4824_, v___x_4825_, v_key_4820_);
v___x_4827_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4827_, 0, v___x_4826_);
v___x_4828_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0(v_options_4821_);
v___x_4829_ = lean_unsigned_to_nat(2u);
v___x_4830_ = lean_mk_empty_array_with_capacity(v___x_4829_);
v___x_4831_ = lean_array_push(v___x_4830_, v___x_4827_);
v___x_4832_ = lean_array_push(v___x_4831_, v___x_4828_);
v___x_4833_ = l_Lasm_JS_Web_Support_args(v___x_4832_);
v___x_4834_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_get_spec__1(v_self_4819_, v___x_4823_, v___x_4833_);
return v___x_4834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_get___boxed(lean_object* v_self_4835_, lean_object* v_key_4836_, lean_object* v_options_4837_, lean_object* v_a_4838_){
_start:
{
lean_object* v_res_4839_; 
v_res_4839_ = l_Lasm_JS_Deno_Kv_get(v_self_4835_, v_key_4836_, v_options_4837_);
lean_dec(v_options_4837_);
return v_res_4839_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1(uint8_t v_await_4840_, uint64_t v_extra_4841_){
_start:
{
uint64_t v___x_4842_; uint64_t v___y_4844_; 
v___x_4842_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_4840_ == 0)
{
uint64_t v___x_4847_; 
v___x_4847_ = 0ULL;
v___y_4844_ = v___x_4847_;
goto v___jp_4843_;
}
else
{
uint64_t v___x_4848_; 
v___x_4848_ = 2ULL;
v___y_4844_ = v___x_4848_;
goto v___jp_4843_;
}
v___jp_4843_:
{
uint64_t v___x_4845_; uint64_t v___x_4846_; 
v___x_4845_ = lean_uint64_lor(v___x_4842_, v___y_4844_);
v___x_4846_ = lean_uint64_lor(v___x_4845_, v_extra_4841_);
return v___x_4846_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1___boxed(lean_object* v_await_4849_, lean_object* v_extra_4850_){
_start:
{
uint8_t v_await_boxed_4851_; uint64_t v_extra_boxed_4852_; uint64_t v_res_4853_; lean_object* v_r_4854_; 
v_await_boxed_4851_ = lean_unbox(v_await_4849_);
v_extra_boxed_4852_ = lean_unbox_uint64(v_extra_4850_);
lean_dec_ref(v_extra_4850_);
v_res_4853_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1(v_await_boxed_4851_, v_extra_boxed_4852_);
v_r_4854_ = lean_box_uint64(v_res_4853_);
return v_r_4854_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1(lean_object* v___f_4855_, lean_object* v_bytes_4856_){
_start:
{
lean_object* v___x_4858_; uint8_t v___x_4859_; lean_object* v_val_4861_; lean_object* v___x_4864_; 
v___x_4858_ = lean_unsigned_to_nat(0u);
v___x_4859_ = 0;
v___x_4864_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4856_);
if (lean_obj_tag(v___x_4864_) == 0)
{
lean_object* v_a_4865_; lean_object* v___x_4867_; uint8_t v_isShared_4868_; uint8_t v_isSharedCheck_4872_; 
v_a_4865_ = lean_ctor_get(v___x_4864_, 0);
v_isSharedCheck_4872_ = !lean_is_exclusive(v___x_4864_);
if (v_isSharedCheck_4872_ == 0)
{
v___x_4867_ = v___x_4864_;
v_isShared_4868_ = v_isSharedCheck_4872_;
goto v_resetjp_4866_;
}
else
{
lean_inc(v_a_4865_);
lean_dec(v___x_4864_);
v___x_4867_ = lean_box(0);
v_isShared_4868_ = v_isSharedCheck_4872_;
goto v_resetjp_4866_;
}
v_resetjp_4866_:
{
lean_object* v___x_4870_; 
if (v_isShared_4868_ == 0)
{
lean_ctor_set_tag(v___x_4867_, 1);
v___x_4870_ = v___x_4867_;
goto v_reusejp_4869_;
}
else
{
lean_object* v_reuseFailAlloc_4871_; 
v_reuseFailAlloc_4871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4871_, 0, v_a_4865_);
v___x_4870_ = v_reuseFailAlloc_4871_;
goto v_reusejp_4869_;
}
v_reusejp_4869_:
{
v_val_4861_ = v___x_4870_;
goto v___jp_4860_;
}
}
}
else
{
lean_object* v_a_4873_; lean_object* v___x_4875_; uint8_t v_isShared_4876_; uint8_t v_isSharedCheck_4880_; 
v_a_4873_ = lean_ctor_get(v___x_4864_, 0);
v_isSharedCheck_4880_ = !lean_is_exclusive(v___x_4864_);
if (v_isSharedCheck_4880_ == 0)
{
v___x_4875_ = v___x_4864_;
v_isShared_4876_ = v_isSharedCheck_4880_;
goto v_resetjp_4874_;
}
else
{
lean_inc(v_a_4873_);
lean_dec(v___x_4864_);
v___x_4875_ = lean_box(0);
v_isShared_4876_ = v_isSharedCheck_4880_;
goto v_resetjp_4874_;
}
v_resetjp_4874_:
{
lean_object* v___x_4878_; 
if (v_isShared_4876_ == 0)
{
lean_ctor_set_tag(v___x_4875_, 0);
v___x_4878_ = v___x_4875_;
goto v_reusejp_4877_;
}
else
{
lean_object* v_reuseFailAlloc_4879_; 
v_reuseFailAlloc_4879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4879_, 0, v_a_4873_);
v___x_4878_ = v_reuseFailAlloc_4879_;
goto v_reusejp_4877_;
}
v_reusejp_4877_:
{
v_val_4861_ = v___x_4878_;
goto v___jp_4860_;
}
}
}
v___jp_4860_:
{
lean_object* v___x_4862_; lean_object* v___x_4863_; 
v___x_4862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4862_, 0, v_val_4861_);
v___x_4863_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4858_, v___x_4859_, v___x_4862_, v___f_4855_);
return v___x_4863_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1___boxed(lean_object* v___f_4881_, lean_object* v_bytes_4882_, lean_object* v___y_4883_){
_start:
{
lean_object* v_res_4884_; 
v_res_4884_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1(v___f_4881_, v_bytes_4882_);
lean_dec_ref(v_bytes_4882_);
return v_res_4884_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_4885_, uint32_t v_op_4886_, uint64_t v_flags_4887_, lean_object* v_payload_4888_, lean_object* v___f_4889_, lean_object* v___f_4890_, lean_object* v___f_4891_, lean_object* v_x_4892_){
_start:
{
if (lean_obj_tag(v_x_4892_) == 0)
{
lean_object* v_a_4894_; lean_object* v___x_4896_; uint8_t v_isShared_4897_; uint8_t v_isSharedCheck_4902_; 
lean_dec_ref(v___f_4891_);
lean_dec_ref(v___f_4890_);
lean_dec_ref(v___f_4889_);
lean_dec(v_payload_4888_);
v_a_4894_ = lean_ctor_get(v_x_4892_, 0);
v_isSharedCheck_4902_ = !lean_is_exclusive(v_x_4892_);
if (v_isSharedCheck_4902_ == 0)
{
v___x_4896_ = v_x_4892_;
v_isShared_4897_ = v_isSharedCheck_4902_;
goto v_resetjp_4895_;
}
else
{
lean_inc(v_a_4894_);
lean_dec(v_x_4892_);
v___x_4896_ = lean_box(0);
v_isShared_4897_ = v_isSharedCheck_4902_;
goto v_resetjp_4895_;
}
v_resetjp_4895_:
{
lean_object* v___x_4899_; 
if (v_isShared_4897_ == 0)
{
v___x_4899_ = v___x_4896_;
goto v_reusejp_4898_;
}
else
{
lean_object* v_reuseFailAlloc_4901_; 
v_reuseFailAlloc_4901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4901_, 0, v_a_4894_);
v___x_4899_ = v_reuseFailAlloc_4901_;
goto v_reusejp_4898_;
}
v_reusejp_4898_:
{
lean_object* v___x_4900_; 
v___x_4900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4900_, 0, v___x_4899_);
return v___x_4900_;
}
}
}
else
{
lean_object* v_a_4903_; lean_object* v___x_4905_; uint8_t v_isShared_4906_; uint8_t v_isSharedCheck_4949_; 
v_a_4903_ = lean_ctor_get(v_x_4892_, 0);
v_isSharedCheck_4949_ = !lean_is_exclusive(v_x_4892_);
if (v_isSharedCheck_4949_ == 0)
{
v___x_4905_ = v_x_4892_;
v_isShared_4906_ = v_isSharedCheck_4949_;
goto v_resetjp_4904_;
}
else
{
lean_inc(v_a_4903_);
lean_dec(v_x_4892_);
v___x_4905_ = lean_box(0);
v_isShared_4906_ = v_isSharedCheck_4949_;
goto v_resetjp_4904_;
}
v_resetjp_4904_:
{
lean_object* v___x_4907_; lean_object* v___x_4908_; uint8_t v___x_4909_; 
v___x_4907_ = lean_string_utf8_byte_size(v_failurePrefix_4885_);
v___x_4908_ = lean_unsigned_to_nat(0u);
v___x_4909_ = lean_nat_dec_eq(v___x_4907_, v___x_4908_);
if (v___x_4909_ == 0)
{
lean_object* v___f_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___f_4914_; lean_object* v_val_4916_; lean_object* v___x_4921_; 
lean_dec_ref(v___f_4891_);
lean_inc(v_a_4903_);
v___f_4910_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4910_, 0, v_a_4903_);
v___x_4911_ = lean_box(v___x_4909_);
v___x_4912_ = lean_box_uint32(v_op_4886_);
v___x_4913_ = lean_box_uint64(v_flags_4887_);
lean_inc(v_payload_4888_);
v___f_4914_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4914_, 0, v___x_4908_);
lean_closure_set(v___f_4914_, 1, v___x_4911_);
lean_closure_set(v___f_4914_, 2, v___f_4910_);
lean_closure_set(v___f_4914_, 3, v_a_4903_);
lean_closure_set(v___f_4914_, 4, v___x_4912_);
lean_closure_set(v___f_4914_, 5, v___x_4913_);
lean_closure_set(v___f_4914_, 6, v_payload_4888_);
v___x_4921_ = l_Lasm_JS_Wire_encodeIO(v_payload_4888_);
lean_dec(v_payload_4888_);
if (lean_obj_tag(v___x_4921_) == 0)
{
lean_object* v_a_4922_; lean_object* v___x_4924_; 
v_a_4922_ = lean_ctor_get(v___x_4921_, 0);
lean_inc(v_a_4922_);
lean_dec_ref_known(v___x_4921_, 1);
if (v_isShared_4906_ == 0)
{
lean_ctor_set(v___x_4905_, 0, v_a_4922_);
v___x_4924_ = v___x_4905_;
goto v_reusejp_4923_;
}
else
{
lean_object* v_reuseFailAlloc_4925_; 
v_reuseFailAlloc_4925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4925_, 0, v_a_4922_);
v___x_4924_ = v_reuseFailAlloc_4925_;
goto v_reusejp_4923_;
}
v_reusejp_4923_:
{
v_val_4916_ = v___x_4924_;
goto v___jp_4915_;
}
}
else
{
lean_object* v_a_4926_; lean_object* v___x_4928_; 
v_a_4926_ = lean_ctor_get(v___x_4921_, 0);
lean_inc(v_a_4926_);
lean_dec_ref_known(v___x_4921_, 1);
if (v_isShared_4906_ == 0)
{
lean_ctor_set_tag(v___x_4905_, 0);
lean_ctor_set(v___x_4905_, 0, v_a_4926_);
v___x_4928_ = v___x_4905_;
goto v_reusejp_4927_;
}
else
{
lean_object* v_reuseFailAlloc_4929_; 
v_reuseFailAlloc_4929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4929_, 0, v_a_4926_);
v___x_4928_ = v_reuseFailAlloc_4929_;
goto v_reusejp_4927_;
}
v_reusejp_4927_:
{
v_val_4916_ = v___x_4928_;
goto v___jp_4915_;
}
}
v___jp_4915_:
{
lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; 
v___x_4917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4917_, 0, v_val_4916_);
v___x_4918_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4908_, v___x_4909_, v___x_4917_, v___f_4914_);
v___x_4919_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4908_, v___x_4909_, v___x_4918_, v___f_4889_);
v___x_4920_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4908_, v___x_4909_, v___x_4919_, v___f_4890_);
return v___x_4920_;
}
}
else
{
lean_object* v___f_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___f_4933_; uint8_t v___x_4934_; lean_object* v_val_4936_; lean_object* v___x_4940_; 
lean_dec_ref(v___f_4890_);
lean_dec_ref(v___f_4889_);
lean_inc(v_a_4903_);
v___f_4930_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4930_, 0, v_a_4903_);
v___x_4931_ = lean_box_uint32(v_op_4886_);
v___x_4932_ = lean_box_uint64(v_flags_4887_);
lean_inc(v_payload_4888_);
v___f_4933_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4933_, 0, v___f_4930_);
lean_closure_set(v___f_4933_, 1, v_a_4903_);
lean_closure_set(v___f_4933_, 2, v___x_4931_);
lean_closure_set(v___f_4933_, 3, v___x_4932_);
lean_closure_set(v___f_4933_, 4, v_payload_4888_);
v___x_4934_ = 0;
v___x_4940_ = l_Lasm_JS_Wire_encodeIO(v_payload_4888_);
lean_dec(v_payload_4888_);
if (lean_obj_tag(v___x_4940_) == 0)
{
lean_object* v_a_4941_; lean_object* v___x_4943_; 
v_a_4941_ = lean_ctor_get(v___x_4940_, 0);
lean_inc(v_a_4941_);
lean_dec_ref_known(v___x_4940_, 1);
if (v_isShared_4906_ == 0)
{
lean_ctor_set(v___x_4905_, 0, v_a_4941_);
v___x_4943_ = v___x_4905_;
goto v_reusejp_4942_;
}
else
{
lean_object* v_reuseFailAlloc_4944_; 
v_reuseFailAlloc_4944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4944_, 0, v_a_4941_);
v___x_4943_ = v_reuseFailAlloc_4944_;
goto v_reusejp_4942_;
}
v_reusejp_4942_:
{
v_val_4936_ = v___x_4943_;
goto v___jp_4935_;
}
}
else
{
lean_object* v_a_4945_; lean_object* v___x_4947_; 
v_a_4945_ = lean_ctor_get(v___x_4940_, 0);
lean_inc(v_a_4945_);
lean_dec_ref_known(v___x_4940_, 1);
if (v_isShared_4906_ == 0)
{
lean_ctor_set_tag(v___x_4905_, 0);
lean_ctor_set(v___x_4905_, 0, v_a_4945_);
v___x_4947_ = v___x_4905_;
goto v_reusejp_4946_;
}
else
{
lean_object* v_reuseFailAlloc_4948_; 
v_reuseFailAlloc_4948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4948_, 0, v_a_4945_);
v___x_4947_ = v_reuseFailAlloc_4948_;
goto v_reusejp_4946_;
}
v_reusejp_4946_:
{
v_val_4936_ = v___x_4947_;
goto v___jp_4935_;
}
}
v___jp_4935_:
{
lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; 
v___x_4937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4937_, 0, v_val_4936_);
v___x_4938_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4908_, v___x_4934_, v___x_4937_, v___f_4933_);
v___x_4939_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4908_, v___x_4934_, v___x_4938_, v___f_4891_);
return v___x_4939_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_4950_, lean_object* v_op_4951_, lean_object* v_flags_4952_, lean_object* v_payload_4953_, lean_object* v___f_4954_, lean_object* v___f_4955_, lean_object* v___f_4956_, lean_object* v_x_4957_, lean_object* v___y_4958_){
_start:
{
uint32_t v_op_boxed_4959_; uint64_t v_flags_boxed_4960_; lean_object* v_res_4961_; 
v_op_boxed_4959_ = lean_unbox_uint32(v_op_4951_);
lean_dec(v_op_4951_);
v_flags_boxed_4960_ = lean_unbox_uint64(v_flags_4952_);
lean_dec_ref(v_flags_4952_);
v_res_4961_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9(v_failurePrefix_4950_, v_op_boxed_4959_, v_flags_boxed_4960_, v_payload_4953_, v___f_4954_, v___f_4955_, v___f_4956_, v_x_4957_);
lean_dec_ref(v_failurePrefix_4950_);
return v_res_4961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4(size_t v_sz_4962_, size_t v_i_4963_, lean_object* v_bs_4964_){
_start:
{
uint8_t v___x_4965_; 
v___x_4965_ = lean_usize_dec_lt(v_i_4963_, v_sz_4962_);
if (v___x_4965_ == 0)
{
lean_object* v___x_4966_; 
v___x_4966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4966_, 0, v_bs_4964_);
return v___x_4966_;
}
else
{
lean_object* v_v_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; 
v_v_4967_ = lean_array_uget_borrowed(v_bs_4964_, v_i_4963_);
v___x_4968_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__0));
lean_inc(v_v_4967_);
v___x_4969_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3(v_v_4967_, v___x_4968_);
if (lean_obj_tag(v___x_4969_) == 0)
{
lean_object* v_a_4970_; lean_object* v___x_4972_; uint8_t v_isShared_4973_; uint8_t v_isSharedCheck_4977_; 
lean_dec_ref(v_bs_4964_);
v_a_4970_ = lean_ctor_get(v___x_4969_, 0);
v_isSharedCheck_4977_ = !lean_is_exclusive(v___x_4969_);
if (v_isSharedCheck_4977_ == 0)
{
v___x_4972_ = v___x_4969_;
v_isShared_4973_ = v_isSharedCheck_4977_;
goto v_resetjp_4971_;
}
else
{
lean_inc(v_a_4970_);
lean_dec(v___x_4969_);
v___x_4972_ = lean_box(0);
v_isShared_4973_ = v_isSharedCheck_4977_;
goto v_resetjp_4971_;
}
v_resetjp_4971_:
{
lean_object* v___x_4975_; 
if (v_isShared_4973_ == 0)
{
v___x_4975_ = v___x_4972_;
goto v_reusejp_4974_;
}
else
{
lean_object* v_reuseFailAlloc_4976_; 
v_reuseFailAlloc_4976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4976_, 0, v_a_4970_);
v___x_4975_ = v_reuseFailAlloc_4976_;
goto v_reusejp_4974_;
}
v_reusejp_4974_:
{
return v___x_4975_;
}
}
}
else
{
lean_object* v_a_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; 
v_a_4978_ = lean_ctor_get(v___x_4969_, 0);
lean_inc(v_a_4978_);
lean_dec_ref_known(v___x_4969_, 1);
v___x_4979_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__1));
lean_inc(v_v_4967_);
v___x_4980_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_v_4967_, v___x_4979_);
if (lean_obj_tag(v___x_4980_) == 0)
{
lean_object* v_a_4981_; lean_object* v___x_4983_; uint8_t v_isShared_4984_; uint8_t v_isSharedCheck_4988_; 
lean_dec(v_a_4978_);
lean_dec_ref(v_bs_4964_);
v_a_4981_ = lean_ctor_get(v___x_4980_, 0);
v_isSharedCheck_4988_ = !lean_is_exclusive(v___x_4980_);
if (v_isSharedCheck_4988_ == 0)
{
v___x_4983_ = v___x_4980_;
v_isShared_4984_ = v_isSharedCheck_4988_;
goto v_resetjp_4982_;
}
else
{
lean_inc(v_a_4981_);
lean_dec(v___x_4980_);
v___x_4983_ = lean_box(0);
v_isShared_4984_ = v_isSharedCheck_4988_;
goto v_resetjp_4982_;
}
v_resetjp_4982_:
{
lean_object* v___x_4986_; 
if (v_isShared_4984_ == 0)
{
v___x_4986_ = v___x_4983_;
goto v_reusejp_4985_;
}
else
{
lean_object* v_reuseFailAlloc_4987_; 
v_reuseFailAlloc_4987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4987_, 0, v_a_4981_);
v___x_4986_ = v_reuseFailAlloc_4987_;
goto v_reusejp_4985_;
}
v_reusejp_4985_:
{
return v___x_4986_;
}
}
}
else
{
lean_object* v_a_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; 
v_a_4989_ = lean_ctor_get(v___x_4980_, 0);
lean_inc(v_a_4989_);
lean_dec_ref_known(v___x_4980_, 1);
v___x_4990_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_v_4967_);
v___x_4991_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__4(v_v_4967_, v___x_4990_);
if (lean_obj_tag(v___x_4991_) == 0)
{
lean_object* v_a_4992_; lean_object* v___x_4994_; uint8_t v_isShared_4995_; uint8_t v_isSharedCheck_4999_; 
lean_dec(v_a_4989_);
lean_dec(v_a_4978_);
lean_dec_ref(v_bs_4964_);
v_a_4992_ = lean_ctor_get(v___x_4991_, 0);
v_isSharedCheck_4999_ = !lean_is_exclusive(v___x_4991_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4994_ = v___x_4991_;
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
else
{
lean_inc(v_a_4992_);
lean_dec(v___x_4991_);
v___x_4994_ = lean_box(0);
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
v_resetjp_4993_:
{
lean_object* v___x_4997_; 
if (v_isShared_4995_ == 0)
{
v___x_4997_ = v___x_4994_;
goto v_reusejp_4996_;
}
else
{
lean_object* v_reuseFailAlloc_4998_; 
v_reuseFailAlloc_4998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4998_, 0, v_a_4992_);
v___x_4997_ = v_reuseFailAlloc_4998_;
goto v_reusejp_4996_;
}
v_reusejp_4996_:
{
return v___x_4997_;
}
}
}
else
{
lean_object* v_a_5000_; lean_object* v___x_5001_; lean_object* v_bs_x27_5002_; lean_object* v___x_5003_; size_t v___x_5004_; size_t v___x_5005_; lean_object* v___x_5006_; 
v_a_5000_ = lean_ctor_get(v___x_4991_, 0);
lean_inc(v_a_5000_);
lean_dec_ref_known(v___x_4991_, 1);
v___x_5001_ = lean_unsigned_to_nat(0u);
v_bs_x27_5002_ = lean_array_uset(v_bs_4964_, v_i_4963_, v___x_5001_);
v___x_5003_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5003_, 0, v_a_4978_);
lean_ctor_set(v___x_5003_, 1, v_a_4989_);
lean_ctor_set(v___x_5003_, 2, v_a_5000_);
v___x_5004_ = ((size_t)1ULL);
v___x_5005_ = lean_usize_add(v_i_4963_, v___x_5004_);
v___x_5006_ = lean_array_uset(v_bs_x27_5002_, v_i_4963_, v___x_5003_);
v_i_4963_ = v___x_5005_;
v_bs_4964_ = v___x_5006_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_sz_5008_, lean_object* v_i_5009_, lean_object* v_bs_5010_){
_start:
{
size_t v_sz_boxed_5011_; size_t v_i_boxed_5012_; lean_object* v_res_5013_; 
v_sz_boxed_5011_ = lean_unbox_usize(v_sz_5008_);
lean_dec(v_sz_5008_);
v_i_boxed_5012_ = lean_unbox_usize(v_i_5009_);
lean_dec(v_i_5009_);
v_res_5013_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4(v_sz_boxed_5011_, v_i_boxed_5012_, v_bs_5010_);
return v_res_5013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3(lean_object* v_context_5016_, lean_object* v_d_5017_){
_start:
{
lean_object* v___y_5020_; lean_object* v___y_5021_; lean_object* v___y_5026_; lean_object* v_received_5027_; lean_object* v___y_5046_; lean_object* v_a_5049_; 
if (lean_obj_tag(v_d_5017_) == 7)
{
lean_object* v_items_5073_; size_t v_sz_5074_; size_t v___x_5075_; lean_object* v___x_5076_; 
v_items_5073_ = lean_ctor_get(v_d_5017_, 0);
v_sz_5074_ = lean_array_size(v_items_5073_);
v___x_5075_ = ((size_t)0ULL);
lean_inc_ref(v_items_5073_);
v___x_5076_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3_spec__4(v_sz_5074_, v___x_5075_, v_items_5073_);
if (lean_obj_tag(v___x_5076_) == 0)
{
lean_object* v_a_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; uint8_t v___x_5081_; 
v_a_5077_ = lean_ctor_get(v___x_5076_, 0);
lean_inc(v_a_5077_);
lean_dec_ref_known(v___x_5076_, 1);
v___x_5078_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___closed__1));
v___x_5079_ = lean_string_utf8_byte_size(v_a_5077_);
v___x_5080_ = lean_unsigned_to_nat(0u);
v___x_5081_ = lean_nat_dec_eq(v___x_5079_, v___x_5080_);
if (v___x_5081_ == 0)
{
lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; 
v___x_5082_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_5083_ = lean_string_append(v___x_5082_, v_a_5077_);
lean_dec(v_a_5077_);
v___x_5084_ = lean_string_append(v___x_5078_, v___x_5083_);
lean_dec_ref(v___x_5083_);
v_a_5049_ = v___x_5084_;
goto v___jp_5048_;
}
else
{
lean_dec(v_a_5077_);
v_a_5049_ = v___x_5078_;
goto v___jp_5048_;
}
}
else
{
if (lean_obj_tag(v___x_5076_) == 0)
{
lean_object* v_a_5085_; 
v_a_5085_ = lean_ctor_get(v___x_5076_, 0);
lean_inc(v_a_5085_);
lean_dec_ref_known(v___x_5076_, 1);
v_a_5049_ = v_a_5085_;
goto v___jp_5048_;
}
else
{
lean_object* v_a_5086_; lean_object* v___x_5088_; uint8_t v_isShared_5089_; uint8_t v_isSharedCheck_5093_; 
lean_dec_ref_known(v_d_5017_, 1);
v_a_5086_ = lean_ctor_get(v___x_5076_, 0);
v_isSharedCheck_5093_ = !lean_is_exclusive(v___x_5076_);
if (v_isSharedCheck_5093_ == 0)
{
v___x_5088_ = v___x_5076_;
v_isShared_5089_ = v_isSharedCheck_5093_;
goto v_resetjp_5087_;
}
else
{
lean_inc(v_a_5086_);
lean_dec(v___x_5076_);
v___x_5088_ = lean_box(0);
v_isShared_5089_ = v_isSharedCheck_5093_;
goto v_resetjp_5087_;
}
v_resetjp_5087_:
{
lean_object* v___x_5091_; 
if (v_isShared_5089_ == 0)
{
lean_ctor_set_tag(v___x_5088_, 0);
v___x_5091_ = v___x_5088_;
goto v_reusejp_5090_;
}
else
{
lean_object* v_reuseFailAlloc_5092_; 
v_reuseFailAlloc_5092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5092_, 0, v_a_5086_);
v___x_5091_ = v_reuseFailAlloc_5092_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
return v___x_5091_;
}
}
}
}
}
else
{
lean_object* v___x_5094_; 
v___x_5094_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v_a_5049_ = v___x_5094_;
goto v___jp_5048_;
}
v___jp_5019_:
{
lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; 
v___x_5022_ = lean_string_append(v___y_5020_, v___y_5021_);
lean_dec_ref(v___y_5021_);
v___x_5023_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5023_, 0, v___x_5022_);
v___x_5024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5024_, 0, v___x_5023_);
return v___x_5024_;
}
v___jp_5025_:
{
lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; uint8_t v___x_5039_; 
v___x_5028_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_5029_ = lean_string_append(v___x_5028_, v_context_5016_);
v___x_5030_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_5031_ = lean_string_append(v___x_5029_, v___x_5030_);
v___x_5032_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___closed__0));
v___x_5033_ = lean_string_append(v___x_5031_, v___x_5032_);
v___x_5034_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_5035_ = lean_string_append(v___x_5033_, v___x_5034_);
v___x_5036_ = lean_string_append(v___x_5035_, v_received_5027_);
lean_dec_ref(v_received_5027_);
v___x_5037_ = lean_string_utf8_byte_size(v___y_5026_);
v___x_5038_ = lean_unsigned_to_nat(0u);
v___x_5039_ = lean_nat_dec_eq(v___x_5037_, v___x_5038_);
if (v___x_5039_ == 0)
{
lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; 
v___x_5040_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_5041_ = lean_string_append(v___x_5040_, v___y_5026_);
lean_dec_ref(v___y_5026_);
v___x_5042_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5043_ = lean_string_append(v___x_5041_, v___x_5042_);
v___y_5020_ = v___x_5036_;
v___y_5021_ = v___x_5043_;
goto v___jp_5019_;
}
else
{
lean_object* v___x_5044_; 
lean_dec_ref(v___y_5026_);
v___x_5044_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_5020_ = v___x_5036_;
v___y_5021_ = v___x_5044_;
goto v___jp_5019_;
}
}
v___jp_5045_:
{
lean_object* v___x_5047_; 
v___x_5047_ = l_Lasm_JS_Data_describe(v_d_5017_);
v___y_5026_ = v___y_5046_;
v_received_5027_ = v___x_5047_;
goto v___jp_5025_;
}
v___jp_5048_:
{
if (lean_obj_tag(v_d_5017_) == 9)
{
lean_object* v_value_5050_; lean_object* v_description_5051_; lean_object* v___x_5052_; uint8_t v___x_5053_; 
v_value_5050_ = lean_ctor_get(v_d_5017_, 0);
v_description_5051_ = lean_ctor_get(v_d_5017_, 1);
v___x_5052_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5053_ = lean_string_dec_eq(v_description_5051_, v___x_5052_);
if (v___x_5053_ == 0)
{
v___y_5046_ = v_a_5049_;
goto v___jp_5045_;
}
else
{
lean_object* v___x_5055_; uint8_t v_isShared_5056_; uint8_t v_isSharedCheck_5070_; 
lean_inc(v_value_5050_);
v_isSharedCheck_5070_ = !lean_is_exclusive(v_d_5017_);
if (v_isSharedCheck_5070_ == 0)
{
lean_object* v_unused_5071_; lean_object* v_unused_5072_; 
v_unused_5071_ = lean_ctor_get(v_d_5017_, 1);
lean_dec(v_unused_5071_);
v_unused_5072_ = lean_ctor_get(v_d_5017_, 0);
lean_dec(v_unused_5072_);
v___x_5055_ = v_d_5017_;
v_isShared_5056_ = v_isSharedCheck_5070_;
goto v_resetjp_5054_;
}
else
{
lean_dec(v_d_5017_);
v___x_5055_ = lean_box(0);
v_isShared_5056_ = v_isSharedCheck_5070_;
goto v_resetjp_5054_;
}
v_resetjp_5054_:
{
uint32_t v___x_5057_; uint64_t v___x_5058_; lean_object* v___x_5060_; 
v___x_5057_ = 206;
v___x_5058_ = 0ULL;
lean_inc(v_value_5050_);
if (v_isShared_5056_ == 0)
{
lean_ctor_set(v___x_5055_, 1, v___x_5052_);
v___x_5060_ = v___x_5055_;
goto v_reusejp_5059_;
}
else
{
lean_object* v_reuseFailAlloc_5069_; 
v_reuseFailAlloc_5069_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5069_, 0, v_value_5050_);
lean_ctor_set(v_reuseFailAlloc_5069_, 1, v___x_5052_);
v___x_5060_ = v_reuseFailAlloc_5069_;
goto v_reusejp_5059_;
}
v_reusejp_5059_:
{
uint32_t v___x_5061_; lean_object* v___x_5062_; 
v___x_5061_ = lasm_js_value_handle(v_value_5050_);
lean_dec(v_value_5050_);
v___x_5062_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5057_, v___x_5058_, v___x_5060_, v___x_5061_);
lean_dec_ref(v___x_5060_);
if (lean_obj_tag(v___x_5062_) == 0)
{
lean_object* v_a_5063_; uint8_t v___x_5064_; 
v_a_5063_ = lean_ctor_get(v___x_5062_, 0);
lean_inc(v_a_5063_);
lean_dec_ref_known(v___x_5062_, 1);
v___x_5064_ = lean_string_validate_utf8(v_a_5063_);
if (v___x_5064_ == 0)
{
lean_object* v___x_5065_; lean_object* v___x_5066_; 
lean_dec(v_a_5063_);
v___x_5065_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_5066_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5065_);
v___y_5026_ = v_a_5049_;
v_received_5027_ = v___x_5066_;
goto v___jp_5025_;
}
else
{
lean_object* v___x_5067_; 
v___x_5067_ = lean_string_from_utf8_unchecked(v_a_5063_);
v___y_5026_ = v_a_5049_;
v_received_5027_ = v___x_5067_;
goto v___jp_5025_;
}
}
else
{
lean_object* v___x_5068_; 
lean_dec_ref_known(v___x_5062_, 1);
v___x_5068_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_5026_ = v_a_5049_;
v_received_5027_ = v___x_5068_;
goto v___jp_5025_;
}
}
}
}
}
else
{
v___y_5046_ = v_a_5049_;
goto v___jp_5045_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3___boxed(lean_object* v_context_5095_, lean_object* v_d_5096_, lean_object* v_a_5097_){
_start:
{
lean_object* v_res_5098_; 
v_res_5098_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3(v_context_5095_, v_d_5096_);
lean_dec_ref(v_context_5095_);
return v_res_5098_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0(lean_object* v_context_5099_, lean_object* v_x_5100_){
_start:
{
lean_object* v_val_5103_; 
if (lean_obj_tag(v_x_5100_) == 0)
{
lean_object* v_a_5105_; lean_object* v___x_5107_; uint8_t v_isShared_5108_; uint8_t v_isSharedCheck_5113_; 
v_a_5105_ = lean_ctor_get(v_x_5100_, 0);
v_isSharedCheck_5113_ = !lean_is_exclusive(v_x_5100_);
if (v_isSharedCheck_5113_ == 0)
{
v___x_5107_ = v_x_5100_;
v_isShared_5108_ = v_isSharedCheck_5113_;
goto v_resetjp_5106_;
}
else
{
lean_inc(v_a_5105_);
lean_dec(v_x_5100_);
v___x_5107_ = lean_box(0);
v_isShared_5108_ = v_isSharedCheck_5113_;
goto v_resetjp_5106_;
}
v_resetjp_5106_:
{
lean_object* v___x_5110_; 
if (v_isShared_5108_ == 0)
{
v___x_5110_ = v___x_5107_;
goto v_reusejp_5109_;
}
else
{
lean_object* v_reuseFailAlloc_5112_; 
v_reuseFailAlloc_5112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5112_, 0, v_a_5105_);
v___x_5110_ = v_reuseFailAlloc_5112_;
goto v_reusejp_5109_;
}
v_reusejp_5109_:
{
lean_object* v___x_5111_; 
v___x_5111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5111_, 0, v___x_5110_);
return v___x_5111_;
}
}
}
else
{
lean_object* v_a_5114_; lean_object* v___x_5116_; uint8_t v_isShared_5117_; uint8_t v_isSharedCheck_5127_; 
v_a_5114_ = lean_ctor_get(v_x_5100_, 0);
v_isSharedCheck_5127_ = !lean_is_exclusive(v_x_5100_);
if (v_isSharedCheck_5127_ == 0)
{
v___x_5116_ = v_x_5100_;
v_isShared_5117_ = v_isSharedCheck_5127_;
goto v_resetjp_5115_;
}
else
{
lean_inc(v_a_5114_);
lean_dec(v_x_5100_);
v___x_5116_ = lean_box(0);
v_isShared_5117_ = v_isSharedCheck_5127_;
goto v_resetjp_5115_;
}
v_resetjp_5115_:
{
lean_object* v___x_5118_; 
v___x_5118_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2_spec__3(v_context_5099_, v_a_5114_);
if (lean_obj_tag(v___x_5118_) == 0)
{
lean_object* v_a_5119_; lean_object* v___x_5121_; 
v_a_5119_ = lean_ctor_get(v___x_5118_, 0);
lean_inc(v_a_5119_);
lean_dec_ref_known(v___x_5118_, 1);
if (v_isShared_5117_ == 0)
{
lean_ctor_set(v___x_5116_, 0, v_a_5119_);
v___x_5121_ = v___x_5116_;
goto v_reusejp_5120_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v_a_5119_);
v___x_5121_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5120_;
}
v_reusejp_5120_:
{
v_val_5103_ = v___x_5121_;
goto v___jp_5102_;
}
}
else
{
lean_object* v_a_5123_; lean_object* v___x_5125_; 
v_a_5123_ = lean_ctor_get(v___x_5118_, 0);
lean_inc(v_a_5123_);
lean_dec_ref_known(v___x_5118_, 1);
if (v_isShared_5117_ == 0)
{
lean_ctor_set_tag(v___x_5116_, 0);
lean_ctor_set(v___x_5116_, 0, v_a_5123_);
v___x_5125_ = v___x_5116_;
goto v_reusejp_5124_;
}
else
{
lean_object* v_reuseFailAlloc_5126_; 
v_reuseFailAlloc_5126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5126_, 0, v_a_5123_);
v___x_5125_ = v_reuseFailAlloc_5126_;
goto v_reusejp_5124_;
}
v_reusejp_5124_:
{
v_val_5103_ = v___x_5125_;
goto v___jp_5102_;
}
}
}
}
v___jp_5102_:
{
lean_object* v___x_5104_; 
v___x_5104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5104_, 0, v_val_5103_);
return v___x_5104_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0___boxed(lean_object* v_context_5128_, lean_object* v_x_5129_, lean_object* v___y_5130_){
_start:
{
lean_object* v_res_5131_; 
v_res_5131_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0(v_context_5128_, v_x_5129_);
lean_dec_ref(v_context_5128_);
return v_res_5131_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3(lean_object* v___f_5132_, lean_object* v_x_5133_){
_start:
{
if (lean_obj_tag(v_x_5133_) == 0)
{
lean_object* v_a_5135_; lean_object* v___x_5137_; uint8_t v_isShared_5138_; uint8_t v_isSharedCheck_5143_; 
lean_dec_ref(v___f_5132_);
v_a_5135_ = lean_ctor_get(v_x_5133_, 0);
v_isSharedCheck_5143_ = !lean_is_exclusive(v_x_5133_);
if (v_isSharedCheck_5143_ == 0)
{
v___x_5137_ = v_x_5133_;
v_isShared_5138_ = v_isSharedCheck_5143_;
goto v_resetjp_5136_;
}
else
{
lean_inc(v_a_5135_);
lean_dec(v_x_5133_);
v___x_5137_ = lean_box(0);
v_isShared_5138_ = v_isSharedCheck_5143_;
goto v_resetjp_5136_;
}
v_resetjp_5136_:
{
lean_object* v___x_5140_; 
if (v_isShared_5138_ == 0)
{
v___x_5140_ = v___x_5137_;
goto v_reusejp_5139_;
}
else
{
lean_object* v_reuseFailAlloc_5142_; 
v_reuseFailAlloc_5142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5142_, 0, v_a_5135_);
v___x_5140_ = v_reuseFailAlloc_5142_;
goto v_reusejp_5139_;
}
v_reusejp_5139_:
{
lean_object* v___x_5141_; 
v___x_5141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5141_, 0, v___x_5140_);
return v___x_5141_;
}
}
}
else
{
lean_object* v___x_5145_; uint8_t v_isShared_5146_; uint8_t v_isSharedCheck_5155_; 
v_isSharedCheck_5155_ = !lean_is_exclusive(v_x_5133_);
if (v_isSharedCheck_5155_ == 0)
{
lean_object* v_unused_5156_; 
v_unused_5156_ = lean_ctor_get(v_x_5133_, 0);
lean_dec(v_unused_5156_);
v___x_5145_ = v_x_5133_;
v_isShared_5146_ = v_isSharedCheck_5155_;
goto v_resetjp_5144_;
}
else
{
lean_dec(v_x_5133_);
v___x_5145_ = lean_box(0);
v_isShared_5146_ = v_isSharedCheck_5155_;
goto v_resetjp_5144_;
}
v_resetjp_5144_:
{
lean_object* v___x_5147_; uint8_t v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5151_; 
v___x_5147_ = lean_unsigned_to_nat(0u);
v___x_5148_ = 0;
v___x_5149_ = lean_io_promise_new();
if (v_isShared_5146_ == 0)
{
lean_ctor_set(v___x_5145_, 0, v___x_5149_);
v___x_5151_ = v___x_5145_;
goto v_reusejp_5150_;
}
else
{
lean_object* v_reuseFailAlloc_5154_; 
v_reuseFailAlloc_5154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5154_, 0, v___x_5149_);
v___x_5151_ = v_reuseFailAlloc_5154_;
goto v_reusejp_5150_;
}
v_reusejp_5150_:
{
lean_object* v___x_5152_; lean_object* v___x_5153_; 
v___x_5152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5152_, 0, v___x_5151_);
v___x_5153_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5147_, v___x_5148_, v___x_5152_, v___f_5132_);
return v___x_5153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3___boxed(lean_object* v___f_5157_, lean_object* v_x_5158_, lean_object* v___y_5159_){
_start:
{
lean_object* v_res_5160_; 
v_res_5160_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3(v___f_5157_, v_x_5158_);
return v_res_5160_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2(lean_object* v___f_5161_, lean_object* v_x_5162_){
_start:
{
if (lean_obj_tag(v_x_5162_) == 0)
{
lean_object* v_a_5164_; lean_object* v___x_5166_; uint8_t v_isShared_5167_; uint8_t v_isSharedCheck_5172_; 
lean_dec_ref(v___f_5161_);
v_a_5164_ = lean_ctor_get(v_x_5162_, 0);
v_isSharedCheck_5172_ = !lean_is_exclusive(v_x_5162_);
if (v_isSharedCheck_5172_ == 0)
{
v___x_5166_ = v_x_5162_;
v_isShared_5167_ = v_isSharedCheck_5172_;
goto v_resetjp_5165_;
}
else
{
lean_inc(v_a_5164_);
lean_dec(v_x_5162_);
v___x_5166_ = lean_box(0);
v_isShared_5167_ = v_isSharedCheck_5172_;
goto v_resetjp_5165_;
}
v_resetjp_5165_:
{
lean_object* v___x_5169_; 
if (v_isShared_5167_ == 0)
{
v___x_5169_ = v___x_5166_;
goto v_reusejp_5168_;
}
else
{
lean_object* v_reuseFailAlloc_5171_; 
v_reuseFailAlloc_5171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5171_, 0, v_a_5164_);
v___x_5169_ = v_reuseFailAlloc_5171_;
goto v_reusejp_5168_;
}
v_reusejp_5168_:
{
lean_object* v___x_5170_; 
v___x_5170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5170_, 0, v___x_5169_);
return v___x_5170_;
}
}
}
else
{
lean_object* v_a_5173_; lean_object* v___x_5174_; 
v_a_5173_ = lean_ctor_get(v_x_5162_, 0);
lean_inc(v_a_5173_);
lean_dec_ref_known(v_x_5162_, 1);
v___x_5174_ = lean_apply_2(v___f_5161_, v_a_5173_, lean_box(0));
return v___x_5174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2___boxed(lean_object* v___f_5175_, lean_object* v_x_5176_, lean_object* v___y_5177_){
_start:
{
lean_object* v_res_5178_; 
v_res_5178_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2(v___f_5175_, v_x_5176_);
return v_res_5178_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2(lean_object* v_context_5179_, uint32_t v_op_5180_, uint64_t v_flags_5181_, lean_object* v_payload_5182_, lean_object* v_failurePrefix_5183_){
_start:
{
lean_object* v___f_5185_; lean_object* v___f_5186_; lean_object* v___f_5187_; lean_object* v___f_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___f_5191_; lean_object* v___f_5192_; lean_object* v___x_5193_; uint8_t v___x_5194_; lean_object* v_val_5196_; lean_object* v___x_5199_; 
v___f_5185_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5185_, 0, v_context_5179_);
v___f_5186_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5186_, 0, v___f_5185_);
v___f_5187_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5187_, 0, v___f_5186_);
lean_inc_ref(v_failurePrefix_5183_);
v___f_5188_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5188_, 0, v_failurePrefix_5183_);
v___x_5189_ = lean_box_uint32(v_op_5180_);
v___x_5190_ = lean_box_uint64(v_flags_5181_);
lean_inc_ref(v___f_5187_);
v___f_5191_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_5191_, 0, v_failurePrefix_5183_);
lean_closure_set(v___f_5191_, 1, v___x_5189_);
lean_closure_set(v___f_5191_, 2, v___x_5190_);
lean_closure_set(v___f_5191_, 3, v_payload_5182_);
lean_closure_set(v___f_5191_, 4, v___f_5188_);
lean_closure_set(v___f_5191_, 5, v___f_5187_);
lean_closure_set(v___f_5191_, 6, v___f_5187_);
v___f_5192_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5192_, 0, v___f_5191_);
v___x_5193_ = lean_unsigned_to_nat(0u);
v___x_5194_ = 0;
v___x_5199_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5199_) == 0)
{
lean_object* v_a_5200_; lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5207_; 
v_a_5200_ = lean_ctor_get(v___x_5199_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v___x_5199_);
if (v_isSharedCheck_5207_ == 0)
{
v___x_5202_ = v___x_5199_;
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
else
{
lean_inc(v_a_5200_);
lean_dec(v___x_5199_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
lean_object* v___x_5205_; 
if (v_isShared_5203_ == 0)
{
lean_ctor_set_tag(v___x_5202_, 1);
v___x_5205_ = v___x_5202_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v_a_5200_);
v___x_5205_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
v_val_5196_ = v___x_5205_;
goto v___jp_5195_;
}
}
}
else
{
lean_object* v_a_5208_; lean_object* v___x_5210_; uint8_t v_isShared_5211_; uint8_t v_isSharedCheck_5215_; 
v_a_5208_ = lean_ctor_get(v___x_5199_, 0);
v_isSharedCheck_5215_ = !lean_is_exclusive(v___x_5199_);
if (v_isSharedCheck_5215_ == 0)
{
v___x_5210_ = v___x_5199_;
v_isShared_5211_ = v_isSharedCheck_5215_;
goto v_resetjp_5209_;
}
else
{
lean_inc(v_a_5208_);
lean_dec(v___x_5199_);
v___x_5210_ = lean_box(0);
v_isShared_5211_ = v_isSharedCheck_5215_;
goto v_resetjp_5209_;
}
v_resetjp_5209_:
{
lean_object* v___x_5213_; 
if (v_isShared_5211_ == 0)
{
lean_ctor_set_tag(v___x_5210_, 0);
v___x_5213_ = v___x_5210_;
goto v_reusejp_5212_;
}
else
{
lean_object* v_reuseFailAlloc_5214_; 
v_reuseFailAlloc_5214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5214_, 0, v_a_5208_);
v___x_5213_ = v_reuseFailAlloc_5214_;
goto v_reusejp_5212_;
}
v_reusejp_5212_:
{
v_val_5196_ = v___x_5213_;
goto v___jp_5195_;
}
}
}
v___jp_5195_:
{
lean_object* v___x_5197_; lean_object* v___x_5198_; 
v___x_5197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5197_, 0, v_val_5196_);
v___x_5198_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5193_, v___x_5194_, v___x_5197_, v___f_5192_);
return v___x_5198_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2___boxed(lean_object* v_context_5216_, lean_object* v_op_5217_, lean_object* v_flags_5218_, lean_object* v_payload_5219_, lean_object* v_failurePrefix_5220_, lean_object* v_a_5221_){
_start:
{
uint32_t v_op_boxed_5222_; uint64_t v_flags_boxed_5223_; lean_object* v_res_5224_; 
v_op_boxed_5222_ = lean_unbox_uint32(v_op_5217_);
lean_dec(v_op_5217_);
v_flags_boxed_5223_ = lean_unbox_uint64(v_flags_5218_);
lean_dec_ref(v_flags_5218_);
v_res_5224_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2(v_context_5216_, v_op_boxed_5222_, v_flags_boxed_5223_, v_payload_5219_, v_failurePrefix_5220_);
return v_res_5224_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0(void){
_start:
{
uint64_t v___x_5225_; uint8_t v___x_5226_; uint64_t v___x_5227_; 
v___x_5225_ = 8ULL;
v___x_5226_ = 0;
v___x_5227_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__1(v___x_5226_, v___x_5225_);
return v___x_5227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1(lean_object* v_o_5228_, lean_object* v_name_5229_, lean_object* v_args_5230_){
_start:
{
lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; uint32_t v___x_5237_; uint64_t v___x_5238_; lean_object* v___x_5239_; lean_object* v___x_5240_; lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; 
v___x_5232_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5233_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5233_, 0, v_o_5228_);
lean_ctor_set(v___x_5233_, 1, v___x_5232_);
lean_inc_ref(v_name_5229_);
v___x_5234_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5234_, 0, v_name_5229_);
v___x_5235_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_5236_ = lean_string_append(v___x_5235_, v_name_5229_);
lean_dec_ref(v_name_5229_);
v___x_5237_ = 205;
v___x_5238_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___closed__0);
v___x_5239_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5239_, 0, v_args_5230_);
v___x_5240_ = lean_unsigned_to_nat(3u);
v___x_5241_ = lean_mk_empty_array_with_capacity(v___x_5240_);
v___x_5242_ = lean_array_push(v___x_5241_, v___x_5233_);
v___x_5243_ = lean_array_push(v___x_5242_, v___x_5234_);
v___x_5244_ = lean_array_push(v___x_5243_, v___x_5239_);
v___x_5245_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5245_, 0, v___x_5244_);
v___x_5246_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1_spec__2(v___x_5236_, v___x_5237_, v___x_5238_, v___x_5245_, v___x_5232_);
return v___x_5246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1___boxed(lean_object* v_o_5247_, lean_object* v_name_5248_, lean_object* v_args_5249_, lean_object* v___y_5250_){
_start:
{
lean_object* v_res_5251_; 
v_res_5251_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1(v_o_5247_, v_name_5248_, v_args_5249_);
return v_res_5251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0(lean_object* v_x_5252_){
_start:
{
if (lean_obj_tag(v_x_5252_) == 0)
{
lean_object* v___x_5253_; 
v___x_5253_ = lean_box(0);
return v___x_5253_;
}
else
{
lean_object* v_val_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; lean_object* v___x_5258_; lean_object* v___x_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; 
v_val_5254_ = lean_ctor_get(v_x_5252_, 0);
v___x_5255_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_5256_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(v_val_5254_);
v___x_5257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5257_, 0, v___x_5255_);
lean_ctor_set(v___x_5257_, 1, v___x_5256_);
v___x_5258_ = lean_unsigned_to_nat(1u);
v___x_5259_ = lean_mk_empty_array_with_capacity(v___x_5258_);
v___x_5260_ = lean_array_push(v___x_5259_, v___x_5257_);
v___x_5261_ = l_Lasm_JS_Web_Support_fields(v___x_5260_);
lean_dec_ref(v___x_5260_);
return v___x_5261_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0___boxed(lean_object* v_x_5262_){
_start:
{
lean_object* v_res_5263_; 
v_res_5263_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0(v_x_5262_);
lean_dec(v_x_5262_);
return v_res_5263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_getMany(lean_object* v_self_5265_, lean_object* v_keys_5266_, lean_object* v_options_5267_){
_start:
{
lean_object* v___x_5269_; size_t v_sz_5270_; size_t v___x_5271_; lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; 
v___x_5269_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_getMany___closed__0));
v_sz_5270_ = lean_array_size(v_keys_5266_);
v___x_5271_ = ((size_t)0ULL);
v___x_5272_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(v_sz_5270_, v___x_5271_, v_keys_5266_);
v___x_5273_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5273_, 0, v___x_5272_);
v___x_5274_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_getMany_spec__0(v_options_5267_);
v___x_5275_ = lean_unsigned_to_nat(2u);
v___x_5276_ = lean_mk_empty_array_with_capacity(v___x_5275_);
v___x_5277_ = lean_array_push(v___x_5276_, v___x_5273_);
v___x_5278_ = lean_array_push(v___x_5277_, v___x_5274_);
v___x_5279_ = l_Lasm_JS_Web_Support_args(v___x_5278_);
v___x_5280_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_getMany_spec__1(v_self_5265_, v___x_5269_, v___x_5279_);
return v___x_5280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_getMany___boxed(lean_object* v_self_5281_, lean_object* v_keys_5282_, lean_object* v_options_5283_, lean_object* v_a_5284_){
_start:
{
lean_object* v_res_5285_; 
v_res_5285_ = l_Lasm_JS_Deno_Kv_getMany(v_self_5281_, v_keys_5282_, v_options_5283_);
lean_dec(v_options_5283_);
return v_res_5285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0(lean_object* v_x_5286_){
_start:
{
if (lean_obj_tag(v_x_5286_) == 0)
{
lean_object* v___x_5287_; 
v___x_5287_ = lean_box(0);
return v___x_5287_;
}
else
{
lean_object* v_val_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; 
v_val_5288_ = lean_ctor_get(v_x_5286_, 0);
v___x_5289_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutation___lam__1___closed__1));
v___x_5290_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_val_5288_);
v___x_5291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5291_, 0, v___x_5289_);
lean_ctor_set(v___x_5291_, 1, v___x_5290_);
v___x_5292_ = lean_unsigned_to_nat(1u);
v___x_5293_ = lean_mk_empty_array_with_capacity(v___x_5292_);
v___x_5294_ = lean_array_push(v___x_5293_, v___x_5291_);
v___x_5295_ = l_Lasm_JS_Web_Support_fields(v___x_5294_);
lean_dec_ref(v___x_5294_);
return v___x_5295_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0___boxed(lean_object* v_x_5296_){
_start:
{
lean_object* v_res_5297_; 
v_res_5297_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0(v_x_5296_);
lean_dec(v_x_5296_);
return v_res_5297_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1(lean_object* v___f_5298_, lean_object* v_bytes_5299_){
_start:
{
lean_object* v___x_5301_; uint8_t v___x_5302_; lean_object* v_val_5304_; lean_object* v___x_5307_; 
v___x_5301_ = lean_unsigned_to_nat(0u);
v___x_5302_ = 0;
v___x_5307_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5299_);
if (lean_obj_tag(v___x_5307_) == 0)
{
lean_object* v_a_5308_; lean_object* v___x_5310_; uint8_t v_isShared_5311_; uint8_t v_isSharedCheck_5315_; 
v_a_5308_ = lean_ctor_get(v___x_5307_, 0);
v_isSharedCheck_5315_ = !lean_is_exclusive(v___x_5307_);
if (v_isSharedCheck_5315_ == 0)
{
v___x_5310_ = v___x_5307_;
v_isShared_5311_ = v_isSharedCheck_5315_;
goto v_resetjp_5309_;
}
else
{
lean_inc(v_a_5308_);
lean_dec(v___x_5307_);
v___x_5310_ = lean_box(0);
v_isShared_5311_ = v_isSharedCheck_5315_;
goto v_resetjp_5309_;
}
v_resetjp_5309_:
{
lean_object* v___x_5313_; 
if (v_isShared_5311_ == 0)
{
lean_ctor_set_tag(v___x_5310_, 1);
v___x_5313_ = v___x_5310_;
goto v_reusejp_5312_;
}
else
{
lean_object* v_reuseFailAlloc_5314_; 
v_reuseFailAlloc_5314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5314_, 0, v_a_5308_);
v___x_5313_ = v_reuseFailAlloc_5314_;
goto v_reusejp_5312_;
}
v_reusejp_5312_:
{
v_val_5304_ = v___x_5313_;
goto v___jp_5303_;
}
}
}
else
{
lean_object* v_a_5316_; lean_object* v___x_5318_; uint8_t v_isShared_5319_; uint8_t v_isSharedCheck_5323_; 
v_a_5316_ = lean_ctor_get(v___x_5307_, 0);
v_isSharedCheck_5323_ = !lean_is_exclusive(v___x_5307_);
if (v_isSharedCheck_5323_ == 0)
{
v___x_5318_ = v___x_5307_;
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
else
{
lean_inc(v_a_5316_);
lean_dec(v___x_5307_);
v___x_5318_ = lean_box(0);
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
v_resetjp_5317_:
{
lean_object* v___x_5321_; 
if (v_isShared_5319_ == 0)
{
lean_ctor_set_tag(v___x_5318_, 0);
v___x_5321_ = v___x_5318_;
goto v_reusejp_5320_;
}
else
{
lean_object* v_reuseFailAlloc_5322_; 
v_reuseFailAlloc_5322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5322_, 0, v_a_5316_);
v___x_5321_ = v_reuseFailAlloc_5322_;
goto v_reusejp_5320_;
}
v_reusejp_5320_:
{
v_val_5304_ = v___x_5321_;
goto v___jp_5303_;
}
}
}
v___jp_5303_:
{
lean_object* v___x_5305_; lean_object* v___x_5306_; 
v___x_5305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5305_, 0, v_val_5304_);
v___x_5306_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5301_, v___x_5302_, v___x_5305_, v___f_5298_);
return v___x_5306_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1___boxed(lean_object* v___f_5324_, lean_object* v_bytes_5325_, lean_object* v___y_5326_){
_start:
{
lean_object* v_res_5327_; 
v_res_5327_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1(v___f_5324_, v_bytes_5325_);
lean_dec_ref(v_bytes_5325_);
return v_res_5327_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2(lean_object* v___f_5328_, lean_object* v_x_5329_){
_start:
{
if (lean_obj_tag(v_x_5329_) == 0)
{
lean_object* v_a_5331_; lean_object* v___x_5333_; uint8_t v_isShared_5334_; uint8_t v_isSharedCheck_5339_; 
lean_dec_ref(v___f_5328_);
v_a_5331_ = lean_ctor_get(v_x_5329_, 0);
v_isSharedCheck_5339_ = !lean_is_exclusive(v_x_5329_);
if (v_isSharedCheck_5339_ == 0)
{
v___x_5333_ = v_x_5329_;
v_isShared_5334_ = v_isSharedCheck_5339_;
goto v_resetjp_5332_;
}
else
{
lean_inc(v_a_5331_);
lean_dec(v_x_5329_);
v___x_5333_ = lean_box(0);
v_isShared_5334_ = v_isSharedCheck_5339_;
goto v_resetjp_5332_;
}
v_resetjp_5332_:
{
lean_object* v___x_5336_; 
if (v_isShared_5334_ == 0)
{
v___x_5336_ = v___x_5333_;
goto v_reusejp_5335_;
}
else
{
lean_object* v_reuseFailAlloc_5338_; 
v_reuseFailAlloc_5338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5338_, 0, v_a_5331_);
v___x_5336_ = v_reuseFailAlloc_5338_;
goto v_reusejp_5335_;
}
v_reusejp_5335_:
{
lean_object* v___x_5337_; 
v___x_5337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5337_, 0, v___x_5336_);
return v___x_5337_;
}
}
}
else
{
lean_object* v_a_5340_; lean_object* v___x_5341_; 
v_a_5340_ = lean_ctor_get(v_x_5329_, 0);
lean_inc(v_a_5340_);
lean_dec_ref_known(v_x_5329_, 1);
v___x_5341_ = lean_apply_2(v___f_5328_, v_a_5340_, lean_box(0));
return v___x_5341_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2___boxed(lean_object* v___f_5342_, lean_object* v_x_5343_, lean_object* v___y_5344_){
_start:
{
lean_object* v_res_5345_; 
v_res_5345_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2(v___f_5342_, v_x_5343_);
return v_res_5345_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3(lean_object* v___f_5346_, lean_object* v_x_5347_){
_start:
{
if (lean_obj_tag(v_x_5347_) == 0)
{
lean_object* v_a_5349_; lean_object* v___x_5351_; uint8_t v_isShared_5352_; uint8_t v_isSharedCheck_5357_; 
lean_dec_ref(v___f_5346_);
v_a_5349_ = lean_ctor_get(v_x_5347_, 0);
v_isSharedCheck_5357_ = !lean_is_exclusive(v_x_5347_);
if (v_isSharedCheck_5357_ == 0)
{
v___x_5351_ = v_x_5347_;
v_isShared_5352_ = v_isSharedCheck_5357_;
goto v_resetjp_5350_;
}
else
{
lean_inc(v_a_5349_);
lean_dec(v_x_5347_);
v___x_5351_ = lean_box(0);
v_isShared_5352_ = v_isSharedCheck_5357_;
goto v_resetjp_5350_;
}
v_resetjp_5350_:
{
lean_object* v___x_5354_; 
if (v_isShared_5352_ == 0)
{
v___x_5354_ = v___x_5351_;
goto v_reusejp_5353_;
}
else
{
lean_object* v_reuseFailAlloc_5356_; 
v_reuseFailAlloc_5356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5356_, 0, v_a_5349_);
v___x_5354_ = v_reuseFailAlloc_5356_;
goto v_reusejp_5353_;
}
v_reusejp_5353_:
{
lean_object* v___x_5355_; 
v___x_5355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5355_, 0, v___x_5354_);
return v___x_5355_;
}
}
}
else
{
lean_object* v___x_5359_; uint8_t v_isShared_5360_; uint8_t v_isSharedCheck_5369_; 
v_isSharedCheck_5369_ = !lean_is_exclusive(v_x_5347_);
if (v_isSharedCheck_5369_ == 0)
{
lean_object* v_unused_5370_; 
v_unused_5370_ = lean_ctor_get(v_x_5347_, 0);
lean_dec(v_unused_5370_);
v___x_5359_ = v_x_5347_;
v_isShared_5360_ = v_isSharedCheck_5369_;
goto v_resetjp_5358_;
}
else
{
lean_dec(v_x_5347_);
v___x_5359_ = lean_box(0);
v_isShared_5360_ = v_isSharedCheck_5369_;
goto v_resetjp_5358_;
}
v_resetjp_5358_:
{
lean_object* v___x_5361_; uint8_t v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5365_; 
v___x_5361_ = lean_unsigned_to_nat(0u);
v___x_5362_ = 0;
v___x_5363_ = lean_io_promise_new();
if (v_isShared_5360_ == 0)
{
lean_ctor_set(v___x_5359_, 0, v___x_5363_);
v___x_5365_ = v___x_5359_;
goto v_reusejp_5364_;
}
else
{
lean_object* v_reuseFailAlloc_5368_; 
v_reuseFailAlloc_5368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5368_, 0, v___x_5363_);
v___x_5365_ = v_reuseFailAlloc_5368_;
goto v_reusejp_5364_;
}
v_reusejp_5364_:
{
lean_object* v___x_5366_; lean_object* v___x_5367_; 
v___x_5366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5366_, 0, v___x_5365_);
v___x_5367_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5361_, v___x_5362_, v___x_5366_, v___f_5346_);
return v___x_5367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3___boxed(lean_object* v___f_5371_, lean_object* v_x_5372_, lean_object* v___y_5373_){
_start:
{
lean_object* v_res_5374_; 
v_res_5374_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3(v___f_5371_, v_x_5372_);
return v_res_5374_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_5375_, uint32_t v_op_5376_, uint64_t v_flags_5377_, lean_object* v_payload_5378_, lean_object* v___f_5379_, lean_object* v___f_5380_, lean_object* v___f_5381_, lean_object* v_x_5382_){
_start:
{
if (lean_obj_tag(v_x_5382_) == 0)
{
lean_object* v_a_5384_; lean_object* v___x_5386_; uint8_t v_isShared_5387_; uint8_t v_isSharedCheck_5392_; 
lean_dec_ref(v___f_5381_);
lean_dec_ref(v___f_5380_);
lean_dec_ref(v___f_5379_);
lean_dec(v_payload_5378_);
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
lean_object* v_a_5393_; lean_object* v___x_5395_; uint8_t v_isShared_5396_; uint8_t v_isSharedCheck_5439_; 
v_a_5393_ = lean_ctor_get(v_x_5382_, 0);
v_isSharedCheck_5439_ = !lean_is_exclusive(v_x_5382_);
if (v_isSharedCheck_5439_ == 0)
{
v___x_5395_ = v_x_5382_;
v_isShared_5396_ = v_isSharedCheck_5439_;
goto v_resetjp_5394_;
}
else
{
lean_inc(v_a_5393_);
lean_dec(v_x_5382_);
v___x_5395_ = lean_box(0);
v_isShared_5396_ = v_isSharedCheck_5439_;
goto v_resetjp_5394_;
}
v_resetjp_5394_:
{
lean_object* v___x_5397_; lean_object* v___x_5398_; uint8_t v___x_5399_; 
v___x_5397_ = lean_string_utf8_byte_size(v_failurePrefix_5375_);
v___x_5398_ = lean_unsigned_to_nat(0u);
v___x_5399_ = lean_nat_dec_eq(v___x_5397_, v___x_5398_);
if (v___x_5399_ == 0)
{
lean_object* v___f_5400_; lean_object* v___x_5401_; lean_object* v___x_5402_; lean_object* v___x_5403_; lean_object* v___f_5404_; lean_object* v_val_5406_; lean_object* v___x_5411_; 
lean_dec_ref(v___f_5381_);
lean_inc(v_a_5393_);
v___f_5400_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5400_, 0, v_a_5393_);
v___x_5401_ = lean_box(v___x_5399_);
v___x_5402_ = lean_box_uint32(v_op_5376_);
v___x_5403_ = lean_box_uint64(v_flags_5377_);
lean_inc(v_payload_5378_);
v___f_5404_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_5404_, 0, v___x_5398_);
lean_closure_set(v___f_5404_, 1, v___x_5401_);
lean_closure_set(v___f_5404_, 2, v___f_5400_);
lean_closure_set(v___f_5404_, 3, v_a_5393_);
lean_closure_set(v___f_5404_, 4, v___x_5402_);
lean_closure_set(v___f_5404_, 5, v___x_5403_);
lean_closure_set(v___f_5404_, 6, v_payload_5378_);
v___x_5411_ = l_Lasm_JS_Wire_encodeIO(v_payload_5378_);
lean_dec(v_payload_5378_);
if (lean_obj_tag(v___x_5411_) == 0)
{
lean_object* v_a_5412_; lean_object* v___x_5414_; 
v_a_5412_ = lean_ctor_get(v___x_5411_, 0);
lean_inc(v_a_5412_);
lean_dec_ref_known(v___x_5411_, 1);
if (v_isShared_5396_ == 0)
{
lean_ctor_set(v___x_5395_, 0, v_a_5412_);
v___x_5414_ = v___x_5395_;
goto v_reusejp_5413_;
}
else
{
lean_object* v_reuseFailAlloc_5415_; 
v_reuseFailAlloc_5415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5415_, 0, v_a_5412_);
v___x_5414_ = v_reuseFailAlloc_5415_;
goto v_reusejp_5413_;
}
v_reusejp_5413_:
{
v_val_5406_ = v___x_5414_;
goto v___jp_5405_;
}
}
else
{
lean_object* v_a_5416_; lean_object* v___x_5418_; 
v_a_5416_ = lean_ctor_get(v___x_5411_, 0);
lean_inc(v_a_5416_);
lean_dec_ref_known(v___x_5411_, 1);
if (v_isShared_5396_ == 0)
{
lean_ctor_set_tag(v___x_5395_, 0);
lean_ctor_set(v___x_5395_, 0, v_a_5416_);
v___x_5418_ = v___x_5395_;
goto v_reusejp_5417_;
}
else
{
lean_object* v_reuseFailAlloc_5419_; 
v_reuseFailAlloc_5419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5419_, 0, v_a_5416_);
v___x_5418_ = v_reuseFailAlloc_5419_;
goto v_reusejp_5417_;
}
v_reusejp_5417_:
{
v_val_5406_ = v___x_5418_;
goto v___jp_5405_;
}
}
v___jp_5405_:
{
lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; 
v___x_5407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5407_, 0, v_val_5406_);
v___x_5408_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5398_, v___x_5399_, v___x_5407_, v___f_5404_);
v___x_5409_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5398_, v___x_5399_, v___x_5408_, v___f_5379_);
v___x_5410_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5398_, v___x_5399_, v___x_5409_, v___f_5380_);
return v___x_5410_;
}
}
else
{
lean_object* v___f_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; lean_object* v___f_5423_; uint8_t v___x_5424_; lean_object* v_val_5426_; lean_object* v___x_5430_; 
lean_dec_ref(v___f_5380_);
lean_dec_ref(v___f_5379_);
lean_inc(v_a_5393_);
v___f_5420_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5420_, 0, v_a_5393_);
v___x_5421_ = lean_box_uint32(v_op_5376_);
v___x_5422_ = lean_box_uint64(v_flags_5377_);
lean_inc(v_payload_5378_);
v___f_5423_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_5423_, 0, v___f_5420_);
lean_closure_set(v___f_5423_, 1, v_a_5393_);
lean_closure_set(v___f_5423_, 2, v___x_5421_);
lean_closure_set(v___f_5423_, 3, v___x_5422_);
lean_closure_set(v___f_5423_, 4, v_payload_5378_);
v___x_5424_ = 0;
v___x_5430_ = l_Lasm_JS_Wire_encodeIO(v_payload_5378_);
lean_dec(v_payload_5378_);
if (lean_obj_tag(v___x_5430_) == 0)
{
lean_object* v_a_5431_; lean_object* v___x_5433_; 
v_a_5431_ = lean_ctor_get(v___x_5430_, 0);
lean_inc(v_a_5431_);
lean_dec_ref_known(v___x_5430_, 1);
if (v_isShared_5396_ == 0)
{
lean_ctor_set(v___x_5395_, 0, v_a_5431_);
v___x_5433_ = v___x_5395_;
goto v_reusejp_5432_;
}
else
{
lean_object* v_reuseFailAlloc_5434_; 
v_reuseFailAlloc_5434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5434_, 0, v_a_5431_);
v___x_5433_ = v_reuseFailAlloc_5434_;
goto v_reusejp_5432_;
}
v_reusejp_5432_:
{
v_val_5426_ = v___x_5433_;
goto v___jp_5425_;
}
}
else
{
lean_object* v_a_5435_; lean_object* v___x_5437_; 
v_a_5435_ = lean_ctor_get(v___x_5430_, 0);
lean_inc(v_a_5435_);
lean_dec_ref_known(v___x_5430_, 1);
if (v_isShared_5396_ == 0)
{
lean_ctor_set_tag(v___x_5395_, 0);
lean_ctor_set(v___x_5395_, 0, v_a_5435_);
v___x_5437_ = v___x_5395_;
goto v_reusejp_5436_;
}
else
{
lean_object* v_reuseFailAlloc_5438_; 
v_reuseFailAlloc_5438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5438_, 0, v_a_5435_);
v___x_5437_ = v_reuseFailAlloc_5438_;
goto v_reusejp_5436_;
}
v_reusejp_5436_:
{
v_val_5426_ = v___x_5437_;
goto v___jp_5425_;
}
}
v___jp_5425_:
{
lean_object* v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; 
v___x_5427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5427_, 0, v_val_5426_);
v___x_5428_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5398_, v___x_5424_, v___x_5427_, v___f_5423_);
v___x_5429_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5398_, v___x_5424_, v___x_5428_, v___f_5381_);
return v___x_5429_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_5440_, lean_object* v_op_5441_, lean_object* v_flags_5442_, lean_object* v_payload_5443_, lean_object* v___f_5444_, lean_object* v___f_5445_, lean_object* v___f_5446_, lean_object* v_x_5447_, lean_object* v___y_5448_){
_start:
{
uint32_t v_op_boxed_5449_; uint64_t v_flags_boxed_5450_; lean_object* v_res_5451_; 
v_op_boxed_5449_ = lean_unbox_uint32(v_op_5441_);
lean_dec(v_op_5441_);
v_flags_boxed_5450_ = lean_unbox_uint64(v_flags_5442_);
lean_dec_ref(v_flags_5442_);
v_res_5451_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9(v_failurePrefix_5440_, v_op_boxed_5449_, v_flags_boxed_5450_, v_payload_5443_, v___f_5444_, v___f_5445_, v___f_5446_, v_x_5447_);
lean_dec_ref(v_failurePrefix_5440_);
return v_res_5451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3(lean_object* v_context_5452_, lean_object* v_d_5453_){
_start:
{
lean_object* v___y_5456_; lean_object* v___y_5457_; lean_object* v___y_5462_; lean_object* v_received_5463_; lean_object* v___y_5482_; lean_object* v_a_5485_; lean_object* v___x_5509_; lean_object* v___x_5510_; 
v___x_5509_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSAtomicOperationCommit___lam__0___closed__0));
lean_inc(v_d_5453_);
v___x_5510_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_AtomicOperation_commit_spec__0_spec__1_spec__2_spec__3(v_d_5453_, v___x_5509_);
if (lean_obj_tag(v___x_5510_) == 0)
{
lean_object* v_a_5511_; 
v_a_5511_ = lean_ctor_get(v___x_5510_, 0);
lean_inc(v_a_5511_);
lean_dec_ref_known(v___x_5510_, 1);
v_a_5485_ = v_a_5511_;
goto v___jp_5484_;
}
else
{
lean_object* v_a_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; 
v_a_5512_ = lean_ctor_get(v___x_5510_, 0);
lean_inc(v_a_5512_);
lean_dec_ref_known(v___x_5510_, 1);
v___x_5513_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvEntry___lam__0___closed__2));
lean_inc(v_d_5453_);
v___x_5514_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__4(v_d_5453_, v___x_5513_);
if (lean_obj_tag(v___x_5514_) == 0)
{
lean_object* v_a_5515_; 
lean_dec(v_a_5512_);
v_a_5515_ = lean_ctor_get(v___x_5514_, 0);
lean_inc(v_a_5515_);
lean_dec_ref_known(v___x_5514_, 1);
v_a_5485_ = v_a_5515_;
goto v___jp_5484_;
}
else
{
lean_object* v_a_5516_; lean_object* v___x_5518_; uint8_t v_isShared_5519_; uint8_t v_isSharedCheck_5525_; 
lean_dec(v_d_5453_);
v_a_5516_ = lean_ctor_get(v___x_5514_, 0);
v_isSharedCheck_5525_ = !lean_is_exclusive(v___x_5514_);
if (v_isSharedCheck_5525_ == 0)
{
v___x_5518_ = v___x_5514_;
v_isShared_5519_ = v_isSharedCheck_5525_;
goto v_resetjp_5517_;
}
else
{
lean_inc(v_a_5516_);
lean_dec(v___x_5514_);
v___x_5518_ = lean_box(0);
v_isShared_5519_ = v_isSharedCheck_5525_;
goto v_resetjp_5517_;
}
v_resetjp_5517_:
{
lean_object* v___x_5520_; uint8_t v___x_5521_; lean_object* v___x_5523_; 
v___x_5520_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5520_, 0, v_a_5516_);
v___x_5521_ = lean_unbox(v_a_5512_);
lean_dec(v_a_5512_);
lean_ctor_set_uint8(v___x_5520_, sizeof(void*)*1, v___x_5521_);
if (v_isShared_5519_ == 0)
{
lean_ctor_set_tag(v___x_5518_, 0);
lean_ctor_set(v___x_5518_, 0, v___x_5520_);
v___x_5523_ = v___x_5518_;
goto v_reusejp_5522_;
}
else
{
lean_object* v_reuseFailAlloc_5524_; 
v_reuseFailAlloc_5524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5524_, 0, v___x_5520_);
v___x_5523_ = v_reuseFailAlloc_5524_;
goto v_reusejp_5522_;
}
v_reusejp_5522_:
{
return v___x_5523_;
}
}
}
}
v___jp_5455_:
{
lean_object* v___x_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; 
v___x_5458_ = lean_string_append(v___y_5456_, v___y_5457_);
lean_dec_ref(v___y_5457_);
v___x_5459_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5459_, 0, v___x_5458_);
v___x_5460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5460_, 0, v___x_5459_);
return v___x_5460_;
}
v___jp_5461_:
{
lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; lean_object* v___x_5473_; lean_object* v___x_5474_; uint8_t v___x_5475_; 
v___x_5464_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_5465_ = lean_string_append(v___x_5464_, v_context_5452_);
v___x_5466_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__1));
v___x_5467_ = lean_string_append(v___x_5465_, v___x_5466_);
v___x_5468_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSKvCommitResult___closed__1));
v___x_5469_ = lean_string_append(v___x_5467_, v___x_5468_);
v___x_5470_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__2));
v___x_5471_ = lean_string_append(v___x_5469_, v___x_5470_);
v___x_5472_ = lean_string_append(v___x_5471_, v_received_5463_);
lean_dec_ref(v_received_5463_);
v___x_5473_ = lean_string_utf8_byte_size(v___y_5462_);
v___x_5474_ = lean_unsigned_to_nat(0u);
v___x_5475_ = lean_nat_dec_eq(v___x_5473_, v___x_5474_);
if (v___x_5475_ == 0)
{
lean_object* v___x_5476_; lean_object* v___x_5477_; lean_object* v___x_5478_; lean_object* v___x_5479_; 
v___x_5476_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_5477_ = lean_string_append(v___x_5476_, v___y_5462_);
lean_dec_ref(v___y_5462_);
v___x_5478_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__2));
v___x_5479_ = lean_string_append(v___x_5477_, v___x_5478_);
v___y_5456_ = v___x_5472_;
v___y_5457_ = v___x_5479_;
goto v___jp_5455_;
}
else
{
lean_object* v___x_5480_; 
lean_dec_ref(v___y_5462_);
v___x_5480_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___y_5456_ = v___x_5472_;
v___y_5457_ = v___x_5480_;
goto v___jp_5455_;
}
}
v___jp_5481_:
{
lean_object* v___x_5483_; 
v___x_5483_ = l_Lasm_JS_Data_describe(v_d_5453_);
v___y_5462_ = v___y_5482_;
v_received_5463_ = v___x_5483_;
goto v___jp_5461_;
}
v___jp_5484_:
{
if (lean_obj_tag(v_d_5453_) == 9)
{
lean_object* v_value_5486_; lean_object* v_description_5487_; lean_object* v___x_5488_; uint8_t v___x_5489_; 
v_value_5486_ = lean_ctor_get(v_d_5453_, 0);
v_description_5487_ = lean_ctor_get(v_d_5453_, 1);
v___x_5488_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5489_ = lean_string_dec_eq(v_description_5487_, v___x_5488_);
if (v___x_5489_ == 0)
{
v___y_5482_ = v_a_5485_;
goto v___jp_5481_;
}
else
{
lean_object* v___x_5491_; uint8_t v_isShared_5492_; uint8_t v_isSharedCheck_5506_; 
lean_inc(v_value_5486_);
v_isSharedCheck_5506_ = !lean_is_exclusive(v_d_5453_);
if (v_isSharedCheck_5506_ == 0)
{
lean_object* v_unused_5507_; lean_object* v_unused_5508_; 
v_unused_5507_ = lean_ctor_get(v_d_5453_, 1);
lean_dec(v_unused_5507_);
v_unused_5508_ = lean_ctor_get(v_d_5453_, 0);
lean_dec(v_unused_5508_);
v___x_5491_ = v_d_5453_;
v_isShared_5492_ = v_isSharedCheck_5506_;
goto v_resetjp_5490_;
}
else
{
lean_dec(v_d_5453_);
v___x_5491_ = lean_box(0);
v_isShared_5492_ = v_isSharedCheck_5506_;
goto v_resetjp_5490_;
}
v_resetjp_5490_:
{
uint32_t v___x_5493_; uint64_t v___x_5494_; lean_object* v___x_5496_; 
v___x_5493_ = 206;
v___x_5494_ = 0ULL;
lean_inc(v_value_5486_);
if (v_isShared_5492_ == 0)
{
lean_ctor_set(v___x_5491_, 1, v___x_5488_);
v___x_5496_ = v___x_5491_;
goto v_reusejp_5495_;
}
else
{
lean_object* v_reuseFailAlloc_5505_; 
v_reuseFailAlloc_5505_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5505_, 0, v_value_5486_);
lean_ctor_set(v_reuseFailAlloc_5505_, 1, v___x_5488_);
v___x_5496_ = v_reuseFailAlloc_5505_;
goto v_reusejp_5495_;
}
v_reusejp_5495_:
{
uint32_t v___x_5497_; lean_object* v___x_5498_; 
v___x_5497_ = lasm_js_value_handle(v_value_5486_);
lean_dec(v_value_5486_);
v___x_5498_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5493_, v___x_5494_, v___x_5496_, v___x_5497_);
lean_dec_ref(v___x_5496_);
if (lean_obj_tag(v___x_5498_) == 0)
{
lean_object* v_a_5499_; uint8_t v___x_5500_; 
v_a_5499_ = lean_ctor_get(v___x_5498_, 0);
lean_inc(v_a_5499_);
lean_dec_ref_known(v___x_5498_, 1);
v___x_5500_ = lean_string_validate_utf8(v_a_5499_);
if (v___x_5500_ == 0)
{
lean_object* v___x_5501_; lean_object* v___x_5502_; 
lean_dec(v_a_5499_);
v___x_5501_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__6);
v___x_5502_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5501_);
v___y_5462_ = v_a_5485_;
v_received_5463_ = v___x_5502_;
goto v___jp_5461_;
}
else
{
lean_object* v___x_5503_; 
v___x_5503_ = lean_string_from_utf8_unchecked(v_a_5499_);
v___y_5462_ = v_a_5485_;
v_received_5463_ = v___x_5503_;
goto v___jp_5461_;
}
}
else
{
lean_object* v___x_5504_; 
lean_dec_ref_known(v___x_5498_, 1);
v___x_5504_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__7));
v___y_5462_ = v_a_5485_;
v_received_5463_ = v___x_5504_;
goto v___jp_5461_;
}
}
}
}
}
else
{
v___y_5482_ = v_a_5485_;
goto v___jp_5481_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3___boxed(lean_object* v_context_5526_, lean_object* v_d_5527_, lean_object* v_a_5528_){
_start:
{
lean_object* v_res_5529_; 
v_res_5529_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3(v_context_5526_, v_d_5527_);
lean_dec_ref(v_context_5526_);
return v_res_5529_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0(lean_object* v_context_5530_, lean_object* v_x_5531_){
_start:
{
lean_object* v_val_5534_; 
if (lean_obj_tag(v_x_5531_) == 0)
{
lean_object* v_a_5536_; lean_object* v___x_5538_; uint8_t v_isShared_5539_; uint8_t v_isSharedCheck_5544_; 
v_a_5536_ = lean_ctor_get(v_x_5531_, 0);
v_isSharedCheck_5544_ = !lean_is_exclusive(v_x_5531_);
if (v_isSharedCheck_5544_ == 0)
{
v___x_5538_ = v_x_5531_;
v_isShared_5539_ = v_isSharedCheck_5544_;
goto v_resetjp_5537_;
}
else
{
lean_inc(v_a_5536_);
lean_dec(v_x_5531_);
v___x_5538_ = lean_box(0);
v_isShared_5539_ = v_isSharedCheck_5544_;
goto v_resetjp_5537_;
}
v_resetjp_5537_:
{
lean_object* v___x_5541_; 
if (v_isShared_5539_ == 0)
{
v___x_5541_ = v___x_5538_;
goto v_reusejp_5540_;
}
else
{
lean_object* v_reuseFailAlloc_5543_; 
v_reuseFailAlloc_5543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5543_, 0, v_a_5536_);
v___x_5541_ = v_reuseFailAlloc_5543_;
goto v_reusejp_5540_;
}
v_reusejp_5540_:
{
lean_object* v___x_5542_; 
v___x_5542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5542_, 0, v___x_5541_);
return v___x_5542_;
}
}
}
else
{
lean_object* v_a_5545_; lean_object* v___x_5547_; uint8_t v_isShared_5548_; uint8_t v_isSharedCheck_5558_; 
v_a_5545_ = lean_ctor_get(v_x_5531_, 0);
v_isSharedCheck_5558_ = !lean_is_exclusive(v_x_5531_);
if (v_isSharedCheck_5558_ == 0)
{
v___x_5547_ = v_x_5531_;
v_isShared_5548_ = v_isSharedCheck_5558_;
goto v_resetjp_5546_;
}
else
{
lean_inc(v_a_5545_);
lean_dec(v_x_5531_);
v___x_5547_ = lean_box(0);
v_isShared_5548_ = v_isSharedCheck_5558_;
goto v_resetjp_5546_;
}
v_resetjp_5546_:
{
lean_object* v___x_5549_; 
v___x_5549_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2_spec__3(v_context_5530_, v_a_5545_);
if (lean_obj_tag(v___x_5549_) == 0)
{
lean_object* v_a_5550_; lean_object* v___x_5552_; 
v_a_5550_ = lean_ctor_get(v___x_5549_, 0);
lean_inc(v_a_5550_);
lean_dec_ref_known(v___x_5549_, 1);
if (v_isShared_5548_ == 0)
{
lean_ctor_set(v___x_5547_, 0, v_a_5550_);
v___x_5552_ = v___x_5547_;
goto v_reusejp_5551_;
}
else
{
lean_object* v_reuseFailAlloc_5553_; 
v_reuseFailAlloc_5553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5553_, 0, v_a_5550_);
v___x_5552_ = v_reuseFailAlloc_5553_;
goto v_reusejp_5551_;
}
v_reusejp_5551_:
{
v_val_5534_ = v___x_5552_;
goto v___jp_5533_;
}
}
else
{
lean_object* v_a_5554_; lean_object* v___x_5556_; 
v_a_5554_ = lean_ctor_get(v___x_5549_, 0);
lean_inc(v_a_5554_);
lean_dec_ref_known(v___x_5549_, 1);
if (v_isShared_5548_ == 0)
{
lean_ctor_set_tag(v___x_5547_, 0);
lean_ctor_set(v___x_5547_, 0, v_a_5554_);
v___x_5556_ = v___x_5547_;
goto v_reusejp_5555_;
}
else
{
lean_object* v_reuseFailAlloc_5557_; 
v_reuseFailAlloc_5557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5557_, 0, v_a_5554_);
v___x_5556_ = v_reuseFailAlloc_5557_;
goto v_reusejp_5555_;
}
v_reusejp_5555_:
{
v_val_5534_ = v___x_5556_;
goto v___jp_5533_;
}
}
}
}
v___jp_5533_:
{
lean_object* v___x_5535_; 
v___x_5535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5535_, 0, v_val_5534_);
return v___x_5535_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0___boxed(lean_object* v_context_5559_, lean_object* v_x_5560_, lean_object* v___y_5561_){
_start:
{
lean_object* v_res_5562_; 
v_res_5562_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0(v_context_5559_, v_x_5560_);
lean_dec_ref(v_context_5559_);
return v_res_5562_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2(lean_object* v_context_5563_, uint32_t v_op_5564_, uint64_t v_flags_5565_, lean_object* v_payload_5566_, lean_object* v_failurePrefix_5567_){
_start:
{
lean_object* v___f_5569_; lean_object* v___f_5570_; lean_object* v___f_5571_; lean_object* v___f_5572_; lean_object* v___x_5573_; lean_object* v___x_5574_; lean_object* v___f_5575_; lean_object* v___f_5576_; lean_object* v___x_5577_; uint8_t v___x_5578_; lean_object* v_val_5580_; lean_object* v___x_5583_; 
v___f_5569_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5569_, 0, v_context_5563_);
v___f_5570_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5570_, 0, v___f_5569_);
v___f_5571_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5571_, 0, v___f_5570_);
lean_inc_ref(v_failurePrefix_5567_);
v___f_5572_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_5572_, 0, v_failurePrefix_5567_);
v___x_5573_ = lean_box_uint32(v_op_5564_);
v___x_5574_ = lean_box_uint64(v_flags_5565_);
lean_inc_ref(v___f_5571_);
v___f_5575_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_5575_, 0, v_failurePrefix_5567_);
lean_closure_set(v___f_5575_, 1, v___x_5573_);
lean_closure_set(v___f_5575_, 2, v___x_5574_);
lean_closure_set(v___f_5575_, 3, v_payload_5566_);
lean_closure_set(v___f_5575_, 4, v___f_5572_);
lean_closure_set(v___f_5575_, 5, v___f_5571_);
lean_closure_set(v___f_5575_, 6, v___f_5571_);
v___f_5576_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5576_, 0, v___f_5575_);
v___x_5577_ = lean_unsigned_to_nat(0u);
v___x_5578_ = 0;
v___x_5583_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5583_) == 0)
{
lean_object* v_a_5584_; lean_object* v___x_5586_; uint8_t v_isShared_5587_; uint8_t v_isSharedCheck_5591_; 
v_a_5584_ = lean_ctor_get(v___x_5583_, 0);
v_isSharedCheck_5591_ = !lean_is_exclusive(v___x_5583_);
if (v_isSharedCheck_5591_ == 0)
{
v___x_5586_ = v___x_5583_;
v_isShared_5587_ = v_isSharedCheck_5591_;
goto v_resetjp_5585_;
}
else
{
lean_inc(v_a_5584_);
lean_dec(v___x_5583_);
v___x_5586_ = lean_box(0);
v_isShared_5587_ = v_isSharedCheck_5591_;
goto v_resetjp_5585_;
}
v_resetjp_5585_:
{
lean_object* v___x_5589_; 
if (v_isShared_5587_ == 0)
{
lean_ctor_set_tag(v___x_5586_, 1);
v___x_5589_ = v___x_5586_;
goto v_reusejp_5588_;
}
else
{
lean_object* v_reuseFailAlloc_5590_; 
v_reuseFailAlloc_5590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5590_, 0, v_a_5584_);
v___x_5589_ = v_reuseFailAlloc_5590_;
goto v_reusejp_5588_;
}
v_reusejp_5588_:
{
v_val_5580_ = v___x_5589_;
goto v___jp_5579_;
}
}
}
else
{
lean_object* v_a_5592_; lean_object* v___x_5594_; uint8_t v_isShared_5595_; uint8_t v_isSharedCheck_5599_; 
v_a_5592_ = lean_ctor_get(v___x_5583_, 0);
v_isSharedCheck_5599_ = !lean_is_exclusive(v___x_5583_);
if (v_isSharedCheck_5599_ == 0)
{
v___x_5594_ = v___x_5583_;
v_isShared_5595_ = v_isSharedCheck_5599_;
goto v_resetjp_5593_;
}
else
{
lean_inc(v_a_5592_);
lean_dec(v___x_5583_);
v___x_5594_ = lean_box(0);
v_isShared_5595_ = v_isSharedCheck_5599_;
goto v_resetjp_5593_;
}
v_resetjp_5593_:
{
lean_object* v___x_5597_; 
if (v_isShared_5595_ == 0)
{
lean_ctor_set_tag(v___x_5594_, 0);
v___x_5597_ = v___x_5594_;
goto v_reusejp_5596_;
}
else
{
lean_object* v_reuseFailAlloc_5598_; 
v_reuseFailAlloc_5598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5598_, 0, v_a_5592_);
v___x_5597_ = v_reuseFailAlloc_5598_;
goto v_reusejp_5596_;
}
v_reusejp_5596_:
{
v_val_5580_ = v___x_5597_;
goto v___jp_5579_;
}
}
}
v___jp_5579_:
{
lean_object* v___x_5581_; lean_object* v___x_5582_; 
v___x_5581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5581_, 0, v_val_5580_);
v___x_5582_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5577_, v___x_5578_, v___x_5581_, v___f_5576_);
return v___x_5582_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2___boxed(lean_object* v_context_5600_, lean_object* v_op_5601_, lean_object* v_flags_5602_, lean_object* v_payload_5603_, lean_object* v_failurePrefix_5604_, lean_object* v_a_5605_){
_start:
{
uint32_t v_op_boxed_5606_; uint64_t v_flags_boxed_5607_; lean_object* v_res_5608_; 
v_op_boxed_5606_ = lean_unbox_uint32(v_op_5601_);
lean_dec(v_op_5601_);
v_flags_boxed_5607_ = lean_unbox_uint64(v_flags_5602_);
lean_dec_ref(v_flags_5602_);
v_res_5608_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2(v_context_5600_, v_op_boxed_5606_, v_flags_boxed_5607_, v_payload_5603_, v_failurePrefix_5604_);
return v_res_5608_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1(uint8_t v_await_5609_, uint64_t v_extra_5610_){
_start:
{
uint64_t v___x_5611_; uint64_t v___y_5613_; 
v___x_5611_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_await_5609_ == 0)
{
uint64_t v___x_5616_; 
v___x_5616_ = 0ULL;
v___y_5613_ = v___x_5616_;
goto v___jp_5612_;
}
else
{
uint64_t v___x_5617_; 
v___x_5617_ = 2ULL;
v___y_5613_ = v___x_5617_;
goto v___jp_5612_;
}
v___jp_5612_:
{
uint64_t v___x_5614_; uint64_t v___x_5615_; 
v___x_5614_ = lean_uint64_lor(v___x_5611_, v___y_5613_);
v___x_5615_ = lean_uint64_lor(v___x_5614_, v_extra_5610_);
return v___x_5615_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1___boxed(lean_object* v_await_5618_, lean_object* v_extra_5619_){
_start:
{
uint8_t v_await_boxed_5620_; uint64_t v_extra_boxed_5621_; uint64_t v_res_5622_; lean_object* v_r_5623_; 
v_await_boxed_5620_ = lean_unbox(v_await_5618_);
v_extra_boxed_5621_ = lean_unbox_uint64(v_extra_5619_);
lean_dec_ref(v_extra_5619_);
v_res_5622_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1(v_await_boxed_5620_, v_extra_boxed_5621_);
v_r_5623_ = lean_box_uint64(v_res_5622_);
return v_r_5623_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0(void){
_start:
{
uint64_t v___x_5624_; uint8_t v___x_5625_; uint64_t v___x_5626_; 
v___x_5624_ = 8ULL;
v___x_5625_ = 0;
v___x_5626_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__1(v___x_5625_, v___x_5624_);
return v___x_5626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(lean_object* v_o_5627_, lean_object* v_name_5628_, lean_object* v_args_5629_){
_start:
{
lean_object* v___x_5631_; lean_object* v___x_5632_; lean_object* v___x_5633_; lean_object* v___x_5634_; lean_object* v___x_5635_; uint32_t v___x_5636_; uint64_t v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; 
v___x_5631_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5632_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5632_, 0, v_o_5627_);
lean_ctor_set(v___x_5632_, 1, v___x_5631_);
lean_inc_ref(v_name_5628_);
v___x_5633_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5633_, 0, v_name_5628_);
v___x_5634_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1___closed__0));
v___x_5635_ = lean_string_append(v___x_5634_, v_name_5628_);
lean_dec_ref(v_name_5628_);
v___x_5636_ = 205;
v___x_5637_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___closed__0);
v___x_5638_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5638_, 0, v_args_5629_);
v___x_5639_ = lean_unsigned_to_nat(3u);
v___x_5640_ = lean_mk_empty_array_with_capacity(v___x_5639_);
v___x_5641_ = lean_array_push(v___x_5640_, v___x_5632_);
v___x_5642_ = lean_array_push(v___x_5641_, v___x_5633_);
v___x_5643_ = lean_array_push(v___x_5642_, v___x_5638_);
v___x_5644_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5644_, 0, v___x_5643_);
v___x_5645_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1_spec__2(v___x_5635_, v___x_5636_, v___x_5637_, v___x_5644_, v___x_5631_);
return v___x_5645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1___boxed(lean_object* v_o_5646_, lean_object* v_name_5647_, lean_object* v_args_5648_, lean_object* v___y_5649_){
_start:
{
lean_object* v_res_5650_; 
v_res_5650_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(v_o_5646_, v_name_5647_, v_args_5648_);
return v_res_5650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_set(lean_object* v_self_5651_, lean_object* v_key_5652_, lean_object* v_value_5653_, lean_object* v_options_5654_){
_start:
{
lean_object* v___x_5656_; size_t v_sz_5657_; size_t v___x_5658_; lean_object* v___x_5659_; lean_object* v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; 
v___x_5656_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__0));
v_sz_5657_ = lean_array_size(v_key_5652_);
v___x_5658_ = ((size_t)0ULL);
v___x_5659_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_5657_, v___x_5658_, v_key_5652_);
v___x_5660_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5660_, 0, v___x_5659_);
v___x_5661_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_set_spec__0(v_options_5654_);
v___x_5662_ = lean_unsigned_to_nat(3u);
v___x_5663_ = lean_mk_empty_array_with_capacity(v___x_5662_);
v___x_5664_ = lean_array_push(v___x_5663_, v___x_5660_);
v___x_5665_ = lean_array_push(v___x_5664_, v_value_5653_);
v___x_5666_ = lean_array_push(v___x_5665_, v___x_5661_);
v___x_5667_ = l_Lasm_JS_Web_Support_args(v___x_5666_);
v___x_5668_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(v_self_5651_, v___x_5656_, v___x_5667_);
return v___x_5668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_set___boxed(lean_object* v_self_5669_, lean_object* v_key_5670_, lean_object* v_value_5671_, lean_object* v_options_5672_, lean_object* v_a_5673_){
_start:
{
lean_object* v_res_5674_; 
v_res_5674_ = l_Lasm_JS_Deno_Kv_set(v_self_5669_, v_key_5670_, v_value_5671_, v_options_5672_);
lean_dec(v_options_5672_);
return v_res_5674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_delete(lean_object* v_self_5675_, lean_object* v_key_5676_){
_start:
{
lean_object* v___x_5678_; size_t v_sz_5679_; size_t v___x_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; lean_object* v___x_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; 
v___x_5678_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvMutationType___lam__0___closed__2));
v_sz_5679_ = lean_array_size(v_key_5676_);
v___x_5680_ = ((size_t)0ULL);
v___x_5681_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_5679_, v___x_5680_, v_key_5676_);
v___x_5682_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5682_, 0, v___x_5681_);
v___x_5683_ = lean_unsigned_to_nat(1u);
v___x_5684_ = lean_mk_empty_array_with_capacity(v___x_5683_);
v___x_5685_ = lean_array_push(v___x_5684_, v___x_5682_);
v___x_5686_ = l_Lasm_JS_Web_Support_args(v___x_5685_);
v___x_5687_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5675_, v___x_5678_, v___x_5686_);
return v___x_5687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_delete___boxed(lean_object* v_self_5688_, lean_object* v_key_5689_, lean_object* v_a_5690_){
_start:
{
lean_object* v_res_5691_; 
v_res_5691_ = l_Lasm_JS_Deno_Kv_delete(v_self_5688_, v_key_5689_);
return v_res_5691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(lean_object* v_x_5692_){
_start:
{
if (lean_obj_tag(v_x_5692_) == 0)
{
lean_object* v___x_5693_; 
v___x_5693_ = lean_box(0);
return v___x_5693_;
}
else
{
lean_object* v_val_5694_; lean_object* v___x_5696_; uint8_t v_isShared_5697_; uint8_t v_isSharedCheck_5704_; 
v_val_5694_ = lean_ctor_get(v_x_5692_, 0);
v_isSharedCheck_5704_ = !lean_is_exclusive(v_x_5692_);
if (v_isSharedCheck_5704_ == 0)
{
v___x_5696_ = v_x_5692_;
v_isShared_5697_ = v_isSharedCheck_5704_;
goto v_resetjp_5695_;
}
else
{
lean_inc(v_val_5694_);
lean_dec(v_x_5692_);
v___x_5696_ = lean_box(0);
v_isShared_5697_ = v_isSharedCheck_5704_;
goto v_resetjp_5695_;
}
v_resetjp_5695_:
{
size_t v_sz_5698_; size_t v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5702_; 
v_sz_5698_ = lean_array_size(v_val_5694_);
v___x_5699_ = ((size_t)0ULL);
v___x_5700_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Deno_AtomicOperation_check_spec__0(v_sz_5698_, v___x_5699_, v_val_5694_);
if (v_isShared_5697_ == 0)
{
lean_ctor_set_tag(v___x_5696_, 7);
lean_ctor_set(v___x_5696_, 0, v___x_5700_);
v___x_5702_ = v___x_5696_;
goto v_reusejp_5701_;
}
else
{
lean_object* v_reuseFailAlloc_5703_; 
v_reuseFailAlloc_5703_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5703_, 0, v___x_5700_);
v___x_5702_ = v_reuseFailAlloc_5703_;
goto v_reusejp_5701_;
}
v_reusejp_5701_:
{
return v___x_5702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__1(lean_object* v_x_5705_){
_start:
{
if (lean_obj_tag(v_x_5705_) == 0)
{
lean_object* v___x_5706_; 
v___x_5706_ = lean_box(0);
return v___x_5706_;
}
else
{
lean_object* v_val_5707_; lean_object* v_limit_5708_; lean_object* v_cursor_5709_; lean_object* v_reverse_5710_; lean_object* v_consistency_5711_; lean_object* v_batchSize_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; 
v_val_5707_ = lean_ctor_get(v_x_5705_, 0);
lean_inc(v_val_5707_);
lean_dec_ref_known(v_x_5705_, 1);
v_limit_5708_ = lean_ctor_get(v_val_5707_, 0);
lean_inc(v_limit_5708_);
v_cursor_5709_ = lean_ctor_get(v_val_5707_, 1);
lean_inc(v_cursor_5709_);
v_reverse_5710_ = lean_ctor_get(v_val_5707_, 2);
lean_inc(v_reverse_5710_);
v_consistency_5711_ = lean_ctor_get(v_val_5707_, 3);
lean_inc(v_consistency_5711_);
v_batchSize_5712_ = lean_ctor_get(v_val_5707_, 4);
lean_inc(v_batchSize_5712_);
lean_dec(v_val_5707_);
v___x_5713_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__0));
v___x_5714_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_limit_5708_);
v___x_5715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5715_, 0, v___x_5713_);
lean_ctor_set(v___x_5715_, 1, v___x_5714_);
v___x_5716_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__1));
v___x_5717_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_cursor_5709_);
v___x_5718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5718_, 0, v___x_5716_);
lean_ctor_set(v___x_5718_, 1, v___x_5717_);
v___x_5719_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__2));
v___x_5720_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reverse_5710_);
lean_dec(v_reverse_5710_);
v___x_5721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5721_, 0, v___x_5719_);
lean_ctor_set(v___x_5721_, 1, v___x_5720_);
v___x_5722_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvGetOptions___lam__0___closed__0));
v___x_5723_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_get_spec__0_spec__0(v_consistency_5711_);
lean_dec(v_consistency_5711_);
v___x_5724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5724_, 0, v___x_5722_);
lean_ctor_set(v___x_5724_, 1, v___x_5723_);
v___x_5725_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListOptions___lam__0___closed__3));
v___x_5726_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_batchSize_5712_);
lean_dec(v_batchSize_5712_);
v___x_5727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5727_, 0, v___x_5725_);
lean_ctor_set(v___x_5727_, 1, v___x_5726_);
v___x_5728_ = lean_unsigned_to_nat(5u);
v___x_5729_ = lean_mk_empty_array_with_capacity(v___x_5728_);
v___x_5730_ = lean_array_push(v___x_5729_, v___x_5715_);
v___x_5731_ = lean_array_push(v___x_5730_, v___x_5718_);
v___x_5732_ = lean_array_push(v___x_5731_, v___x_5721_);
v___x_5733_ = lean_array_push(v___x_5732_, v___x_5724_);
v___x_5734_ = lean_array_push(v___x_5733_, v___x_5727_);
v___x_5735_ = l_Lasm_JS_Web_Support_fields(v___x_5734_);
lean_dec_ref(v___x_5734_);
return v___x_5735_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_list(lean_object* v_self_5737_, lean_object* v_selector_5738_, lean_object* v_options_5739_){
_start:
{
lean_object* v_prefix_5741_; lean_object* v_start_5742_; lean_object* v_end_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; lean_object* v___x_5764_; lean_object* v___x_5765_; lean_object* v___x_5766_; 
v_prefix_5741_ = lean_ctor_get(v_selector_5738_, 0);
lean_inc(v_prefix_5741_);
v_start_5742_ = lean_ctor_get(v_selector_5738_, 1);
lean_inc(v_start_5742_);
v_end_5743_ = lean_ctor_get(v_selector_5738_, 2);
lean_inc(v_end_5743_);
lean_dec_ref(v_selector_5738_);
v___x_5744_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_list___closed__0));
v___x_5745_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__0));
v___x_5746_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(v_prefix_5741_);
v___x_5747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5747_, 0, v___x_5745_);
lean_ctor_set(v___x_5747_, 1, v___x_5746_);
v___x_5748_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__1));
v___x_5749_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(v_start_5742_);
v___x_5750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5750_, 0, v___x_5748_);
lean_ctor_set(v___x_5750_, 1, v___x_5749_);
v___x_5751_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListSelector___lam__0___closed__2));
v___x_5752_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__0(v_end_5743_);
v___x_5753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5753_, 0, v___x_5751_);
lean_ctor_set(v___x_5753_, 1, v___x_5752_);
v___x_5754_ = lean_unsigned_to_nat(3u);
v___x_5755_ = lean_mk_empty_array_with_capacity(v___x_5754_);
v___x_5756_ = lean_array_push(v___x_5755_, v___x_5747_);
v___x_5757_ = lean_array_push(v___x_5756_, v___x_5750_);
v___x_5758_ = lean_array_push(v___x_5757_, v___x_5753_);
v___x_5759_ = l_Lasm_JS_Web_Support_fields(v___x_5758_);
lean_dec_ref(v___x_5758_);
v___x_5760_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_list_spec__1(v_options_5739_);
v___x_5761_ = lean_unsigned_to_nat(2u);
v___x_5762_ = lean_mk_empty_array_with_capacity(v___x_5761_);
v___x_5763_ = lean_array_push(v___x_5762_, v___x_5759_);
v___x_5764_ = lean_array_push(v___x_5763_, v___x_5760_);
v___x_5765_ = l_Lasm_JS_Web_Support_args(v___x_5764_);
v___x_5766_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_5737_, v___x_5744_, v___x_5765_);
if (lean_obj_tag(v___x_5766_) == 0)
{
lean_object* v_a_5767_; lean_object* v___x_5769_; uint8_t v_isShared_5770_; uint8_t v_isSharedCheck_5774_; 
v_a_5767_ = lean_ctor_get(v___x_5766_, 0);
v_isSharedCheck_5774_ = !lean_is_exclusive(v___x_5766_);
if (v_isSharedCheck_5774_ == 0)
{
v___x_5769_ = v___x_5766_;
v_isShared_5770_ = v_isSharedCheck_5774_;
goto v_resetjp_5768_;
}
else
{
lean_inc(v_a_5767_);
lean_dec(v___x_5766_);
v___x_5769_ = lean_box(0);
v_isShared_5770_ = v_isSharedCheck_5774_;
goto v_resetjp_5768_;
}
v_resetjp_5768_:
{
lean_object* v___x_5772_; 
if (v_isShared_5770_ == 0)
{
v___x_5772_ = v___x_5769_;
goto v_reusejp_5771_;
}
else
{
lean_object* v_reuseFailAlloc_5773_; 
v_reuseFailAlloc_5773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5773_, 0, v_a_5767_);
v___x_5772_ = v_reuseFailAlloc_5773_;
goto v_reusejp_5771_;
}
v_reusejp_5771_:
{
return v___x_5772_;
}
}
}
else
{
lean_object* v_a_5775_; lean_object* v___x_5777_; uint8_t v_isShared_5778_; uint8_t v_isSharedCheck_5782_; 
v_a_5775_ = lean_ctor_get(v___x_5766_, 0);
v_isSharedCheck_5782_ = !lean_is_exclusive(v___x_5766_);
if (v_isSharedCheck_5782_ == 0)
{
v___x_5777_ = v___x_5766_;
v_isShared_5778_ = v_isSharedCheck_5782_;
goto v_resetjp_5776_;
}
else
{
lean_inc(v_a_5775_);
lean_dec(v___x_5766_);
v___x_5777_ = lean_box(0);
v_isShared_5778_ = v_isSharedCheck_5782_;
goto v_resetjp_5776_;
}
v_resetjp_5776_:
{
lean_object* v___x_5780_; 
if (v_isShared_5778_ == 0)
{
v___x_5780_ = v___x_5777_;
goto v_reusejp_5779_;
}
else
{
lean_object* v_reuseFailAlloc_5781_; 
v_reuseFailAlloc_5781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5781_, 0, v_a_5775_);
v___x_5780_ = v_reuseFailAlloc_5781_;
goto v_reusejp_5779_;
}
v_reusejp_5779_:
{
return v___x_5780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_list___boxed(lean_object* v_self_5783_, lean_object* v_selector_5784_, lean_object* v_options_5785_, lean_object* v_a_5786_){
_start:
{
lean_object* v_res_5787_; 
v_res_5787_ = l_Lasm_JS_Deno_Kv_list(v_self_5783_, v_selector_5784_, v_options_5785_);
return v_res_5787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_enqueue_spec__0(lean_object* v_x_5788_){
_start:
{
if (lean_obj_tag(v_x_5788_) == 0)
{
lean_object* v___x_5789_; 
v___x_5789_ = lean_box(0);
return v___x_5789_;
}
else
{
lean_object* v_val_5790_; lean_object* v_delay_5791_; lean_object* v_keysIfUndelivered_5792_; lean_object* v_backoffSchedule_5793_; lean_object* v___x_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; lean_object* v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v___x_5804_; lean_object* v___x_5805_; lean_object* v___x_5806_; lean_object* v___x_5807_; lean_object* v___x_5808_; 
v_val_5790_ = lean_ctor_get(v_x_5788_, 0);
lean_inc(v_val_5790_);
lean_dec_ref_known(v_x_5788_, 1);
v_delay_5791_ = lean_ctor_get(v_val_5790_, 0);
lean_inc(v_delay_5791_);
v_keysIfUndelivered_5792_ = lean_ctor_get(v_val_5790_, 1);
lean_inc(v_keysIfUndelivered_5792_);
v_backoffSchedule_5793_ = lean_ctor_get(v_val_5790_, 2);
lean_inc(v_backoffSchedule_5793_);
lean_dec(v_val_5790_);
v___x_5794_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__0));
v___x_5795_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_delay_5791_);
lean_dec(v_delay_5791_);
v___x_5796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5796_, 0, v___x_5794_);
lean_ctor_set(v___x_5796_, 1, v___x_5795_);
v___x_5797_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__1));
v___x_5798_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0(v_keysIfUndelivered_5792_);
v___x_5799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5799_, 0, v___x_5797_);
lean_ctor_set(v___x_5799_, 1, v___x_5798_);
v___x_5800_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_5801_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(v_backoffSchedule_5793_);
v___x_5802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5802_, 0, v___x_5800_);
lean_ctor_set(v___x_5802_, 1, v___x_5801_);
v___x_5803_ = lean_unsigned_to_nat(3u);
v___x_5804_ = lean_mk_empty_array_with_capacity(v___x_5803_);
v___x_5805_ = lean_array_push(v___x_5804_, v___x_5796_);
v___x_5806_ = lean_array_push(v___x_5805_, v___x_5799_);
v___x_5807_ = lean_array_push(v___x_5806_, v___x_5802_);
v___x_5808_ = l_Lasm_JS_Web_Support_fields(v___x_5807_);
lean_dec_ref(v___x_5807_);
return v___x_5808_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_enqueue(lean_object* v_self_5809_, lean_object* v_value_5810_, lean_object* v_options_5811_){
_start:
{
lean_object* v___x_5813_; lean_object* v___x_5814_; lean_object* v___x_5815_; lean_object* v___x_5816_; lean_object* v___x_5817_; lean_object* v___x_5818_; lean_object* v___x_5819_; lean_object* v___x_5820_; 
v___x_5813_ = ((lean_object*)(l_Lasm_JS_Deno_AtomicOperation_enqueue___closed__0));
v___x_5814_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_enqueue_spec__0(v_options_5811_);
v___x_5815_ = lean_unsigned_to_nat(2u);
v___x_5816_ = lean_mk_empty_array_with_capacity(v___x_5815_);
v___x_5817_ = lean_array_push(v___x_5816_, v_value_5810_);
v___x_5818_ = lean_array_push(v___x_5817_, v___x_5814_);
v___x_5819_ = l_Lasm_JS_Web_Support_args(v___x_5818_);
v___x_5820_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_Kv_set_spec__1(v_self_5809_, v___x_5813_, v___x_5819_);
return v___x_5820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_enqueue___boxed(lean_object* v_self_5821_, lean_object* v_value_5822_, lean_object* v_options_5823_, lean_object* v_a_5824_){
_start:
{
lean_object* v_res_5825_; 
v_res_5825_ = l_Lasm_JS_Deno_Kv_enqueue(v_self_5821_, v_value_5822_, v_options_5823_);
return v_res_5825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_listenQueue(lean_object* v_self_5827_, lean_object* v_handler_5828_){
_start:
{
lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; lean_object* v___x_5837_; 
v___x_5830_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_listenQueue___closed__0));
v___x_5831_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_5832_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5832_, 0, v_handler_5828_);
lean_ctor_set(v___x_5832_, 1, v___x_5831_);
v___x_5833_ = lean_unsigned_to_nat(1u);
v___x_5834_ = lean_mk_empty_array_with_capacity(v___x_5833_);
v___x_5835_ = lean_array_push(v___x_5834_, v___x_5832_);
v___x_5836_ = l_Lasm_JS_Web_Support_args(v___x_5835_);
v___x_5837_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5827_, v___x_5830_, v___x_5836_);
return v___x_5837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_listenQueue___boxed(lean_object* v_self_5838_, lean_object* v_handler_5839_, lean_object* v_a_5840_){
_start:
{
lean_object* v_res_5841_; 
v_res_5841_ = l_Lasm_JS_Deno_Kv_listenQueue(v_self_5838_, v_handler_5839_);
return v_res_5841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_atomic(lean_object* v_self_5843_){
_start:
{
lean_object* v___x_5845_; lean_object* v___x_5846_; lean_object* v___x_5847_; 
v___x_5845_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_atomic___closed__0));
v___x_5846_ = lean_obj_once(&l_Lasm_JS_Deno_AtomicOperation_commit___closed__1, &l_Lasm_JS_Deno_AtomicOperation_commit___closed__1_once, _init_l_Lasm_JS_Deno_AtomicOperation_commit___closed__1);
v___x_5847_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_5843_, v___x_5845_, v___x_5846_);
if (lean_obj_tag(v___x_5847_) == 0)
{
lean_object* v_a_5848_; lean_object* v___x_5850_; uint8_t v_isShared_5851_; uint8_t v_isSharedCheck_5855_; 
v_a_5848_ = lean_ctor_get(v___x_5847_, 0);
v_isSharedCheck_5855_ = !lean_is_exclusive(v___x_5847_);
if (v_isSharedCheck_5855_ == 0)
{
v___x_5850_ = v___x_5847_;
v_isShared_5851_ = v_isSharedCheck_5855_;
goto v_resetjp_5849_;
}
else
{
lean_inc(v_a_5848_);
lean_dec(v___x_5847_);
v___x_5850_ = lean_box(0);
v_isShared_5851_ = v_isSharedCheck_5855_;
goto v_resetjp_5849_;
}
v_resetjp_5849_:
{
lean_object* v___x_5853_; 
if (v_isShared_5851_ == 0)
{
v___x_5853_ = v___x_5850_;
goto v_reusejp_5852_;
}
else
{
lean_object* v_reuseFailAlloc_5854_; 
v_reuseFailAlloc_5854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5854_, 0, v_a_5848_);
v___x_5853_ = v_reuseFailAlloc_5854_;
goto v_reusejp_5852_;
}
v_reusejp_5852_:
{
return v___x_5853_;
}
}
}
else
{
lean_object* v_a_5856_; lean_object* v___x_5858_; uint8_t v_isShared_5859_; uint8_t v_isSharedCheck_5863_; 
v_a_5856_ = lean_ctor_get(v___x_5847_, 0);
v_isSharedCheck_5863_ = !lean_is_exclusive(v___x_5847_);
if (v_isSharedCheck_5863_ == 0)
{
v___x_5858_ = v___x_5847_;
v_isShared_5859_ = v_isSharedCheck_5863_;
goto v_resetjp_5857_;
}
else
{
lean_inc(v_a_5856_);
lean_dec(v___x_5847_);
v___x_5858_ = lean_box(0);
v_isShared_5859_ = v_isSharedCheck_5863_;
goto v_resetjp_5857_;
}
v_resetjp_5857_:
{
lean_object* v___x_5861_; 
if (v_isShared_5859_ == 0)
{
v___x_5861_ = v___x_5858_;
goto v_reusejp_5860_;
}
else
{
lean_object* v_reuseFailAlloc_5862_; 
v_reuseFailAlloc_5862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5862_, 0, v_a_5856_);
v___x_5861_ = v_reuseFailAlloc_5862_;
goto v_reusejp_5860_;
}
v_reusejp_5860_:
{
return v___x_5861_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_atomic___boxed(lean_object* v_self_5864_, lean_object* v_a_5865_){
_start:
{
lean_object* v_res_5866_; 
v_res_5866_ = l_Lasm_JS_Deno_Kv_atomic(v_self_5864_);
return v_res_5866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0(lean_object* v_x_5867_){
_start:
{
if (lean_obj_tag(v_x_5867_) == 0)
{
lean_object* v___x_5868_; 
v___x_5868_ = lean_box(0);
return v___x_5868_;
}
else
{
lean_object* v_val_5869_; lean_object* v___x_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; 
v_val_5869_ = lean_ctor_get(v_x_5867_, 0);
v___x_5870_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvWatchOptions___lam__0___closed__0));
v___x_5871_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_5869_);
v___x_5872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5872_, 0, v___x_5870_);
lean_ctor_set(v___x_5872_, 1, v___x_5871_);
v___x_5873_ = lean_unsigned_to_nat(1u);
v___x_5874_ = lean_mk_empty_array_with_capacity(v___x_5873_);
v___x_5875_ = lean_array_push(v___x_5874_, v___x_5872_);
v___x_5876_ = l_Lasm_JS_Web_Support_fields(v___x_5875_);
lean_dec_ref(v___x_5875_);
return v___x_5876_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0___boxed(lean_object* v_x_5877_){
_start:
{
lean_object* v_res_5878_; 
v_res_5878_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0(v_x_5877_);
lean_dec(v_x_5877_);
return v_res_5878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_watch(lean_object* v_self_5880_, lean_object* v_keys_5881_, lean_object* v_options_5882_){
_start:
{
lean_object* v___x_5884_; size_t v_sz_5885_; size_t v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; lean_object* v___x_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; 
v___x_5884_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_watch___closed__0));
v_sz_5885_ = lean_array_size(v_keys_5881_);
v___x_5886_ = ((size_t)0ULL);
v___x_5887_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__0_spec__1(v_sz_5885_, v___x_5886_, v_keys_5881_);
v___x_5888_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5888_, 0, v___x_5887_);
v___x_5889_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_Kv_watch_spec__0(v_options_5882_);
v___x_5890_ = lean_unsigned_to_nat(2u);
v___x_5891_ = lean_mk_empty_array_with_capacity(v___x_5890_);
v___x_5892_ = lean_array_push(v___x_5891_, v___x_5888_);
v___x_5893_ = lean_array_push(v___x_5892_, v___x_5889_);
v___x_5894_ = l_Lasm_JS_Web_Support_args(v___x_5893_);
v___x_5895_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_5880_, v___x_5884_, v___x_5894_);
if (lean_obj_tag(v___x_5895_) == 0)
{
lean_object* v_a_5896_; lean_object* v___x_5898_; uint8_t v_isShared_5899_; uint8_t v_isSharedCheck_5903_; 
v_a_5896_ = lean_ctor_get(v___x_5895_, 0);
v_isSharedCheck_5903_ = !lean_is_exclusive(v___x_5895_);
if (v_isSharedCheck_5903_ == 0)
{
v___x_5898_ = v___x_5895_;
v_isShared_5899_ = v_isSharedCheck_5903_;
goto v_resetjp_5897_;
}
else
{
lean_inc(v_a_5896_);
lean_dec(v___x_5895_);
v___x_5898_ = lean_box(0);
v_isShared_5899_ = v_isSharedCheck_5903_;
goto v_resetjp_5897_;
}
v_resetjp_5897_:
{
lean_object* v___x_5901_; 
if (v_isShared_5899_ == 0)
{
v___x_5901_ = v___x_5898_;
goto v_reusejp_5900_;
}
else
{
lean_object* v_reuseFailAlloc_5902_; 
v_reuseFailAlloc_5902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5902_, 0, v_a_5896_);
v___x_5901_ = v_reuseFailAlloc_5902_;
goto v_reusejp_5900_;
}
v_reusejp_5900_:
{
return v___x_5901_;
}
}
}
else
{
lean_object* v_a_5904_; lean_object* v___x_5906_; uint8_t v_isShared_5907_; uint8_t v_isSharedCheck_5911_; 
v_a_5904_ = lean_ctor_get(v___x_5895_, 0);
v_isSharedCheck_5911_ = !lean_is_exclusive(v___x_5895_);
if (v_isSharedCheck_5911_ == 0)
{
v___x_5906_ = v___x_5895_;
v_isShared_5907_ = v_isSharedCheck_5911_;
goto v_resetjp_5905_;
}
else
{
lean_inc(v_a_5904_);
lean_dec(v___x_5895_);
v___x_5906_ = lean_box(0);
v_isShared_5907_ = v_isSharedCheck_5911_;
goto v_resetjp_5905_;
}
v_resetjp_5905_:
{
lean_object* v___x_5909_; 
if (v_isShared_5907_ == 0)
{
v___x_5909_ = v___x_5906_;
goto v_reusejp_5908_;
}
else
{
lean_object* v_reuseFailAlloc_5910_; 
v_reuseFailAlloc_5910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5910_, 0, v_a_5904_);
v___x_5909_ = v_reuseFailAlloc_5910_;
goto v_reusejp_5908_;
}
v_reusejp_5908_:
{
return v___x_5909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_watch___boxed(lean_object* v_self_5912_, lean_object* v_keys_5913_, lean_object* v_options_5914_, lean_object* v_a_5915_){
_start:
{
lean_object* v_res_5916_; 
v_res_5916_ = l_Lasm_JS_Deno_Kv_watch(v_self_5912_, v_keys_5913_, v_options_5914_);
lean_dec(v_options_5914_);
return v_res_5916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_close(lean_object* v_self_5918_){
_start:
{
lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; 
v___x_5920_ = ((lean_object*)(l_Lasm_JS_Deno_Kv_close___closed__0));
v___x_5921_ = lean_obj_once(&l_Lasm_JS_Deno_AtomicOperation_commit___closed__1, &l_Lasm_JS_Deno_AtomicOperation_commit___closed__1_once, _init_l_Lasm_JS_Deno_AtomicOperation_commit___closed__1);
v___x_5922_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5918_, v___x_5920_, v___x_5921_);
return v___x_5922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Kv_close___boxed(lean_object* v_self_5923_, lean_object* v_a_5924_){
_start:
{
lean_object* v_res_5925_; 
v_res_5925_ = l_Lasm_JS_Deno_Kv_close(v_self_5923_);
return v_res_5925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv___lam__0(lean_object* v_x_5926_){
_start:
{
if (lean_obj_tag(v_x_5926_) == 0)
{
lean_object* v_a_5928_; lean_object* v___x_5930_; uint8_t v_isShared_5931_; uint8_t v_isSharedCheck_5936_; 
v_a_5928_ = lean_ctor_get(v_x_5926_, 0);
v_isSharedCheck_5936_ = !lean_is_exclusive(v_x_5926_);
if (v_isSharedCheck_5936_ == 0)
{
v___x_5930_ = v_x_5926_;
v_isShared_5931_ = v_isSharedCheck_5936_;
goto v_resetjp_5929_;
}
else
{
lean_inc(v_a_5928_);
lean_dec(v_x_5926_);
v___x_5930_ = lean_box(0);
v_isShared_5931_ = v_isSharedCheck_5936_;
goto v_resetjp_5929_;
}
v_resetjp_5929_:
{
lean_object* v___x_5933_; 
if (v_isShared_5931_ == 0)
{
v___x_5933_ = v___x_5930_;
goto v_reusejp_5932_;
}
else
{
lean_object* v_reuseFailAlloc_5935_; 
v_reuseFailAlloc_5935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5935_, 0, v_a_5928_);
v___x_5933_ = v_reuseFailAlloc_5935_;
goto v_reusejp_5932_;
}
v_reusejp_5932_:
{
lean_object* v___x_5934_; 
v___x_5934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5934_, 0, v___x_5933_);
return v___x_5934_;
}
}
}
else
{
lean_object* v_a_5937_; lean_object* v___x_5939_; uint8_t v_isShared_5940_; uint8_t v_isSharedCheck_5945_; 
v_a_5937_ = lean_ctor_get(v_x_5926_, 0);
v_isSharedCheck_5945_ = !lean_is_exclusive(v_x_5926_);
if (v_isSharedCheck_5945_ == 0)
{
v___x_5939_ = v_x_5926_;
v_isShared_5940_ = v_isSharedCheck_5945_;
goto v_resetjp_5938_;
}
else
{
lean_inc(v_a_5937_);
lean_dec(v_x_5926_);
v___x_5939_ = lean_box(0);
v_isShared_5940_ = v_isSharedCheck_5945_;
goto v_resetjp_5938_;
}
v_resetjp_5938_:
{
lean_object* v___x_5942_; 
if (v_isShared_5940_ == 0)
{
v___x_5942_ = v___x_5939_;
goto v_reusejp_5941_;
}
else
{
lean_object* v_reuseFailAlloc_5944_; 
v_reuseFailAlloc_5944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5944_, 0, v_a_5937_);
v___x_5942_ = v_reuseFailAlloc_5944_;
goto v_reusejp_5941_;
}
v_reusejp_5941_:
{
lean_object* v___x_5943_; 
v___x_5943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5943_, 0, v___x_5942_);
return v___x_5943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv___lam__0___boxed(lean_object* v_x_5946_, lean_object* v___y_5947_){
_start:
{
lean_object* v_res_5948_; 
v_res_5948_ = l_Lasm_JS_Deno_openKv___lam__0(v_x_5946_);
return v_res_5948_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0(lean_object* v_b_5949_, lean_object* v_args_5950_){
_start:
{
uint8_t v_construct_5952_; lean_object* v___x_5953_; uint32_t v___x_5954_; uint64_t v___x_5955_; uint64_t v___y_5957_; 
v_construct_5952_ = lean_ctor_get_uint8(v_b_5949_, sizeof(void*)*4);
v___x_5953_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5949_);
v___x_5954_ = 214;
v___x_5955_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_iterator_spec__0___closed__0);
if (v_construct_5952_ == 0)
{
uint64_t v___x_5965_; 
v___x_5965_ = 0ULL;
v___y_5957_ = v___x_5965_;
goto v___jp_5956_;
}
else
{
uint64_t v___x_5966_; 
v___x_5966_ = 4ULL;
v___y_5957_ = v___x_5966_;
goto v___jp_5956_;
}
v___jp_5956_:
{
uint64_t v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; lean_object* v___x_5962_; lean_object* v___x_5963_; lean_object* v___x_5964_; 
v___x_5958_ = lean_uint64_lor(v___x_5955_, v___y_5957_);
v___x_5959_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5949_, v_args_5950_);
v___x_5960_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_5961_ = lean_string_append(v___x_5960_, v___x_5953_);
v___x_5962_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_5963_ = lean_string_append(v___x_5961_, v___x_5962_);
v___x_5964_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__1_spec__2(v___x_5953_, v___x_5954_, v___x_5958_, v___x_5959_, v___x_5963_);
return v___x_5964_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0___boxed(lean_object* v_b_5967_, lean_object* v_args_5968_, lean_object* v_a_5969_){
_start:
{
lean_object* v_res_5970_; 
v_res_5970_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0(v_b_5967_, v_args_5968_);
lean_dec_ref(v_b_5967_);
return v_res_5970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv(lean_object* v_path_5980_){
_start:
{
lean_object* v___f_5982_; uint8_t v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; lean_object* v___x_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; 
v___f_5982_ = ((lean_object*)(l_Lasm_JS_Deno_openKv___closed__0));
v___x_5983_ = 0;
v___x_5984_ = lean_unsigned_to_nat(1u);
v___x_5985_ = ((lean_object*)(l_Lasm_JS_Deno_openKv___closed__3));
v___x_5986_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_path_5980_);
v___x_5987_ = lean_mk_empty_array_with_capacity(v___x_5984_);
v___x_5988_ = lean_array_push(v___x_5987_, v___x_5986_);
v___x_5989_ = l_Lasm_JS_Web_Support_args(v___x_5988_);
v___x_5990_ = lean_unsigned_to_nat(0u);
v___x_5991_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_openKv_spec__0(v___x_5985_, v___x_5989_);
v___x_5992_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5990_, v___x_5983_, v___x_5991_, v___f_5982_);
return v___x_5992_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_openKv___boxed(lean_object* v_path_5993_, lean_object* v_a_5994_){
_start:
{
lean_object* v_res_5995_; 
v_res_5995_ = l_Lasm_JS_Deno_openKv(v_path_5993_);
return v_res_5995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(lean_object* v_b_5996_, lean_object* v_args_5997_){
_start:
{
uint8_t v_construct_5999_; lean_object* v___x_6000_; uint32_t v___x_6001_; uint64_t v___x_6002_; uint64_t v___y_6004_; 
v_construct_5999_ = lean_ctor_get_uint8(v_b_5996_, sizeof(void*)*4);
v___x_6000_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5996_);
v___x_6001_ = 214;
v___x_6002_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0___closed__0);
if (v_construct_5999_ == 0)
{
uint64_t v___x_6012_; 
v___x_6012_ = 0ULL;
v___y_6004_ = v___x_6012_;
goto v___jp_6003_;
}
else
{
uint64_t v___x_6013_; 
v___x_6013_ = 4ULL;
v___y_6004_ = v___x_6013_;
goto v___jp_6003_;
}
v___jp_6003_:
{
uint64_t v___x_6005_; lean_object* v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; 
v___x_6005_ = lean_uint64_lor(v___x_6002_, v___y_6004_);
v___x_6006_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5996_, v_args_5997_);
v___x_6007_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1___closed__0));
v___x_6008_ = lean_string_append(v___x_6007_, v___x_6000_);
lean_dec_ref(v___x_6000_);
v___x_6009_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Deno_KvListIterator_Iterator_next_spec__0_spec__0_spec__1_spec__3___closed__4));
v___x_6010_ = lean_string_append(v___x_6008_, v___x_6009_);
v___x_6011_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_6001_, v___x_6005_, v___x_6006_, v___x_6010_);
return v___x_6011_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0___boxed(lean_object* v_b_6014_, lean_object* v_args_6015_, lean_object* v_a_6016_){
_start:
{
lean_object* v_res_6017_; 
v_res_6017_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(v_b_6014_, v_args_6015_);
lean_dec_ref(v_b_6014_);
return v_res_6017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(lean_object* v_x_6018_){
_start:
{
if (lean_obj_tag(v_x_6018_) == 0)
{
lean_object* v___x_6019_; 
v___x_6019_ = lean_box(0);
return v___x_6019_;
}
else
{
lean_object* v_val_6020_; 
v_val_6020_ = lean_ctor_get(v_x_6018_, 0);
lean_inc(v_val_6020_);
lean_dec_ref_known(v_x_6018_, 1);
if (lean_obj_tag(v_val_6020_) == 0)
{
double v_value_6021_; lean_object* v___x_6023_; uint8_t v_isShared_6024_; uint8_t v_isSharedCheck_6028_; 
v_value_6021_ = lean_ctor_get_float(v_val_6020_, 0);
v_isSharedCheck_6028_ = !lean_is_exclusive(v_val_6020_);
if (v_isSharedCheck_6028_ == 0)
{
v___x_6023_ = v_val_6020_;
v_isShared_6024_ = v_isSharedCheck_6028_;
goto v_resetjp_6022_;
}
else
{
lean_dec(v_val_6020_);
v___x_6023_ = lean_box(0);
v_isShared_6024_ = v_isSharedCheck_6028_;
goto v_resetjp_6022_;
}
v_resetjp_6022_:
{
lean_object* v___x_6026_; 
if (v_isShared_6024_ == 0)
{
lean_ctor_set_tag(v___x_6023_, 3);
v___x_6026_ = v___x_6023_;
goto v_reusejp_6025_;
}
else
{
lean_object* v_reuseFailAlloc_6027_; 
v_reuseFailAlloc_6027_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6027_, 0, v_value_6021_);
v___x_6026_ = v_reuseFailAlloc_6027_;
goto v_reusejp_6025_;
}
v_reusejp_6025_:
{
return v___x_6026_;
}
}
}
else
{
lean_object* v_value_6029_; lean_object* v___x_6030_; lean_object* v___y_6032_; 
v_value_6029_ = lean_ctor_get(v_val_6020_, 0);
lean_inc_ref(v_value_6029_);
lean_dec_ref_known(v_val_6020_, 1);
v___x_6030_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronScheduleExpression___lam__1___closed__0));
if (lean_obj_tag(v_value_6029_) == 0)
{
double v_value_6038_; lean_object* v___x_6040_; uint8_t v_isShared_6041_; uint8_t v_isSharedCheck_6045_; 
v_value_6038_ = lean_ctor_get_float(v_value_6029_, 0);
v_isSharedCheck_6045_ = !lean_is_exclusive(v_value_6029_);
if (v_isSharedCheck_6045_ == 0)
{
v___x_6040_ = v_value_6029_;
v_isShared_6041_ = v_isSharedCheck_6045_;
goto v_resetjp_6039_;
}
else
{
lean_dec(v_value_6029_);
v___x_6040_ = lean_box(0);
v_isShared_6041_ = v_isSharedCheck_6045_;
goto v_resetjp_6039_;
}
v_resetjp_6039_:
{
lean_object* v___x_6043_; 
if (v_isShared_6041_ == 0)
{
lean_ctor_set_tag(v___x_6040_, 3);
v___x_6043_ = v___x_6040_;
goto v_reusejp_6042_;
}
else
{
lean_object* v_reuseFailAlloc_6044_; 
v_reuseFailAlloc_6044_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6044_, 0, v_value_6038_);
v___x_6043_ = v_reuseFailAlloc_6044_;
goto v_reusejp_6042_;
}
v_reusejp_6042_:
{
v___y_6032_ = v___x_6043_;
goto v___jp_6031_;
}
}
}
else
{
lean_object* v_value_6046_; lean_object* v___x_6048_; uint8_t v_isShared_6049_; uint8_t v_isSharedCheck_6056_; 
v_value_6046_ = lean_ctor_get(v_value_6029_, 0);
v_isSharedCheck_6056_ = !lean_is_exclusive(v_value_6029_);
if (v_isSharedCheck_6056_ == 0)
{
v___x_6048_ = v_value_6029_;
v_isShared_6049_ = v_isSharedCheck_6056_;
goto v_resetjp_6047_;
}
else
{
lean_inc(v_value_6046_);
lean_dec(v_value_6029_);
v___x_6048_ = lean_box(0);
v_isShared_6049_ = v_isSharedCheck_6056_;
goto v_resetjp_6047_;
}
v_resetjp_6047_:
{
size_t v_sz_6050_; size_t v___x_6051_; lean_object* v___x_6052_; lean_object* v___x_6054_; 
v_sz_6050_ = lean_array_size(v_value_6046_);
v___x_6051_ = ((size_t)0ULL);
v___x_6052_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1_spec__3(v_sz_6050_, v___x_6051_, v_value_6046_);
if (v_isShared_6049_ == 0)
{
lean_ctor_set_tag(v___x_6048_, 7);
lean_ctor_set(v___x_6048_, 0, v___x_6052_);
v___x_6054_ = v___x_6048_;
goto v_reusejp_6053_;
}
else
{
lean_object* v_reuseFailAlloc_6055_; 
v_reuseFailAlloc_6055_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6055_, 0, v___x_6052_);
v___x_6054_ = v_reuseFailAlloc_6055_;
goto v_reusejp_6053_;
}
v_reusejp_6053_:
{
v___y_6032_ = v___x_6054_;
goto v___jp_6031_;
}
}
}
v___jp_6031_:
{
lean_object* v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6035_; lean_object* v___x_6036_; lean_object* v___x_6037_; 
v___x_6033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6033_, 0, v___x_6030_);
lean_ctor_set(v___x_6033_, 1, v___y_6032_);
v___x_6034_ = lean_unsigned_to_nat(1u);
v___x_6035_ = lean_mk_empty_array_with_capacity(v___x_6034_);
v___x_6036_ = lean_array_push(v___x_6035_, v___x_6033_);
v___x_6037_ = l_Lasm_JS_Web_Support_fields(v___x_6036_);
lean_dec_ref(v___x_6036_);
return v___x_6037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cron(lean_object* v_name_6065_, lean_object* v_schedule_6066_, lean_object* v_handler_6067_){
_start:
{
lean_object* v___x_6069_; lean_object* v___x_6070_; lean_object* v___x_6071_; lean_object* v___y_6073_; 
v___x_6069_ = lean_unsigned_to_nat(3u);
v___x_6070_ = ((lean_object*)(l_Lasm_JS_Deno_cron___closed__2));
v___x_6071_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6071_, 0, v_name_6065_);
if (lean_obj_tag(v_schedule_6066_) == 0)
{
lean_object* v_value_6082_; lean_object* v___x_6084_; uint8_t v_isShared_6085_; uint8_t v_isSharedCheck_6089_; 
v_value_6082_ = lean_ctor_get(v_schedule_6066_, 0);
v_isSharedCheck_6089_ = !lean_is_exclusive(v_schedule_6066_);
if (v_isSharedCheck_6089_ == 0)
{
v___x_6084_ = v_schedule_6066_;
v_isShared_6085_ = v_isSharedCheck_6089_;
goto v_resetjp_6083_;
}
else
{
lean_inc(v_value_6082_);
lean_dec(v_schedule_6066_);
v___x_6084_ = lean_box(0);
v_isShared_6085_ = v_isSharedCheck_6089_;
goto v_resetjp_6083_;
}
v_resetjp_6083_:
{
lean_object* v___x_6087_; 
if (v_isShared_6085_ == 0)
{
lean_ctor_set_tag(v___x_6084_, 4);
v___x_6087_ = v___x_6084_;
goto v_reusejp_6086_;
}
else
{
lean_object* v_reuseFailAlloc_6088_; 
v_reuseFailAlloc_6088_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6088_, 0, v_value_6082_);
v___x_6087_ = v_reuseFailAlloc_6088_;
goto v_reusejp_6086_;
}
v_reusejp_6086_:
{
v___y_6073_ = v___x_6087_;
goto v___jp_6072_;
}
}
}
else
{
lean_object* v_value_6090_; lean_object* v_minute_6091_; lean_object* v_hour_6092_; lean_object* v_dayOfMonth_6093_; lean_object* v_month_6094_; lean_object* v_dayOfWeek_6095_; lean_object* v___x_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; lean_object* v___x_6108_; lean_object* v___x_6109_; lean_object* v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v___x_6118_; 
v_value_6090_ = lean_ctor_get(v_schedule_6066_, 0);
lean_inc_ref(v_value_6090_);
lean_dec_ref_known(v_schedule_6066_, 1);
v_minute_6091_ = lean_ctor_get(v_value_6090_, 0);
lean_inc(v_minute_6091_);
v_hour_6092_ = lean_ctor_get(v_value_6090_, 1);
lean_inc(v_hour_6092_);
v_dayOfMonth_6093_ = lean_ctor_get(v_value_6090_, 2);
lean_inc(v_dayOfMonth_6093_);
v_month_6094_ = lean_ctor_get(v_value_6090_, 3);
lean_inc(v_month_6094_);
v_dayOfWeek_6095_ = lean_ctor_get(v_value_6090_, 4);
lean_inc(v_dayOfWeek_6095_);
lean_dec_ref(v_value_6090_);
v___x_6096_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0));
v___x_6097_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_minute_6091_);
v___x_6098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6098_, 0, v___x_6096_);
lean_ctor_set(v___x_6098_, 1, v___x_6097_);
v___x_6099_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1));
v___x_6100_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_hour_6092_);
v___x_6101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6101_, 0, v___x_6099_);
lean_ctor_set(v___x_6101_, 1, v___x_6100_);
v___x_6102_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2));
v___x_6103_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_dayOfMonth_6093_);
v___x_6104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6104_, 0, v___x_6102_);
lean_ctor_set(v___x_6104_, 1, v___x_6103_);
v___x_6105_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3));
v___x_6106_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_month_6094_);
v___x_6107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6107_, 0, v___x_6105_);
lean_ctor_set(v___x_6107_, 1, v___x_6106_);
v___x_6108_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4));
v___x_6109_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_dayOfWeek_6095_);
v___x_6110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6110_, 0, v___x_6108_);
lean_ctor_set(v___x_6110_, 1, v___x_6109_);
v___x_6111_ = lean_unsigned_to_nat(5u);
v___x_6112_ = lean_mk_empty_array_with_capacity(v___x_6111_);
v___x_6113_ = lean_array_push(v___x_6112_, v___x_6098_);
v___x_6114_ = lean_array_push(v___x_6113_, v___x_6101_);
v___x_6115_ = lean_array_push(v___x_6114_, v___x_6104_);
v___x_6116_ = lean_array_push(v___x_6115_, v___x_6107_);
v___x_6117_ = lean_array_push(v___x_6116_, v___x_6110_);
v___x_6118_ = l_Lasm_JS_Web_Support_fields(v___x_6117_);
lean_dec_ref(v___x_6117_);
v___y_6073_ = v___x_6118_;
goto v___jp_6072_;
}
v___jp_6072_:
{
lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; lean_object* v___x_6078_; lean_object* v___x_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; 
v___x_6074_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_6075_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6075_, 0, v_handler_6067_);
lean_ctor_set(v___x_6075_, 1, v___x_6074_);
v___x_6076_ = lean_mk_empty_array_with_capacity(v___x_6069_);
v___x_6077_ = lean_array_push(v___x_6076_, v___x_6071_);
v___x_6078_ = lean_array_push(v___x_6077_, v___y_6073_);
v___x_6079_ = lean_array_push(v___x_6078_, v___x_6075_);
v___x_6080_ = l_Lasm_JS_Web_Support_args(v___x_6079_);
v___x_6081_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(v___x_6070_, v___x_6080_);
return v___x_6081_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cron___boxed(lean_object* v_name_6119_, lean_object* v_schedule_6120_, lean_object* v_handler_6121_, lean_object* v_a_6122_){
_start:
{
lean_object* v_res_6123_; 
v_res_6123_ = l_Lasm_JS_Deno_cron(v_name_6119_, v_schedule_6120_, v_handler_6121_);
return v_res_6123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cronWithOptions(lean_object* v_name_6131_, lean_object* v_schedule_6132_, lean_object* v_options_6133_, lean_object* v_handler_6134_){
_start:
{
lean_object* v___x_6136_; lean_object* v___x_6137_; lean_object* v___x_6138_; lean_object* v___y_6140_; 
v___x_6136_ = lean_unsigned_to_nat(4u);
v___x_6137_ = ((lean_object*)(l_Lasm_JS_Deno_cronWithOptions___closed__1));
v___x_6138_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6138_, 0, v_name_6131_);
if (lean_obj_tag(v_schedule_6132_) == 0)
{
lean_object* v_value_6169_; lean_object* v___x_6171_; uint8_t v_isShared_6172_; uint8_t v_isSharedCheck_6176_; 
v_value_6169_ = lean_ctor_get(v_schedule_6132_, 0);
v_isSharedCheck_6176_ = !lean_is_exclusive(v_schedule_6132_);
if (v_isSharedCheck_6176_ == 0)
{
v___x_6171_ = v_schedule_6132_;
v_isShared_6172_ = v_isSharedCheck_6176_;
goto v_resetjp_6170_;
}
else
{
lean_inc(v_value_6169_);
lean_dec(v_schedule_6132_);
v___x_6171_ = lean_box(0);
v_isShared_6172_ = v_isSharedCheck_6176_;
goto v_resetjp_6170_;
}
v_resetjp_6170_:
{
lean_object* v___x_6174_; 
if (v_isShared_6172_ == 0)
{
lean_ctor_set_tag(v___x_6171_, 4);
v___x_6174_ = v___x_6171_;
goto v_reusejp_6173_;
}
else
{
lean_object* v_reuseFailAlloc_6175_; 
v_reuseFailAlloc_6175_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6175_, 0, v_value_6169_);
v___x_6174_ = v_reuseFailAlloc_6175_;
goto v_reusejp_6173_;
}
v_reusejp_6173_:
{
v___y_6140_ = v___x_6174_;
goto v___jp_6139_;
}
}
}
else
{
lean_object* v_value_6177_; lean_object* v_minute_6178_; lean_object* v_hour_6179_; lean_object* v_dayOfMonth_6180_; lean_object* v_month_6181_; lean_object* v_dayOfWeek_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; lean_object* v___x_6195_; lean_object* v___x_6196_; lean_object* v___x_6197_; lean_object* v___x_6198_; lean_object* v___x_6199_; lean_object* v___x_6200_; lean_object* v___x_6201_; lean_object* v___x_6202_; lean_object* v___x_6203_; lean_object* v___x_6204_; lean_object* v___x_6205_; 
v_value_6177_ = lean_ctor_get(v_schedule_6132_, 0);
lean_inc_ref(v_value_6177_);
lean_dec_ref_known(v_schedule_6132_, 1);
v_minute_6178_ = lean_ctor_get(v_value_6177_, 0);
lean_inc(v_minute_6178_);
v_hour_6179_ = lean_ctor_get(v_value_6177_, 1);
lean_inc(v_hour_6179_);
v_dayOfMonth_6180_ = lean_ctor_get(v_value_6177_, 2);
lean_inc(v_dayOfMonth_6180_);
v_month_6181_ = lean_ctor_get(v_value_6177_, 3);
lean_inc(v_month_6181_);
v_dayOfWeek_6182_ = lean_ctor_get(v_value_6177_, 4);
lean_inc(v_dayOfWeek_6182_);
lean_dec_ref(v_value_6177_);
v___x_6183_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__0));
v___x_6184_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_minute_6178_);
v___x_6185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6185_, 0, v___x_6183_);
lean_ctor_set(v___x_6185_, 1, v___x_6184_);
v___x_6186_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__1));
v___x_6187_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_hour_6179_);
v___x_6188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6188_, 0, v___x_6186_);
lean_ctor_set(v___x_6188_, 1, v___x_6187_);
v___x_6189_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__2));
v___x_6190_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_dayOfMonth_6180_);
v___x_6191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6191_, 0, v___x_6189_);
lean_ctor_set(v___x_6191_, 1, v___x_6190_);
v___x_6192_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__3));
v___x_6193_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_month_6181_);
v___x_6194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6194_, 0, v___x_6192_);
lean_ctor_set(v___x_6194_, 1, v___x_6193_);
v___x_6195_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronSchedule___lam__0___closed__4));
v___x_6196_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_cron_spec__1(v_dayOfWeek_6182_);
v___x_6197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6197_, 0, v___x_6195_);
lean_ctor_set(v___x_6197_, 1, v___x_6196_);
v___x_6198_ = lean_unsigned_to_nat(5u);
v___x_6199_ = lean_mk_empty_array_with_capacity(v___x_6198_);
v___x_6200_ = lean_array_push(v___x_6199_, v___x_6185_);
v___x_6201_ = lean_array_push(v___x_6200_, v___x_6188_);
v___x_6202_ = lean_array_push(v___x_6201_, v___x_6191_);
v___x_6203_ = lean_array_push(v___x_6202_, v___x_6194_);
v___x_6204_ = lean_array_push(v___x_6203_, v___x_6197_);
v___x_6205_ = l_Lasm_JS_Web_Support_fields(v___x_6204_);
lean_dec_ref(v___x_6204_);
v___y_6140_ = v___x_6205_;
goto v___jp_6139_;
}
v___jp_6139_:
{
lean_object* v_backoffSchedule_6141_; lean_object* v_signal_6142_; lean_object* v___x_6144_; uint8_t v_isShared_6145_; uint8_t v_isSharedCheck_6168_; 
v_backoffSchedule_6141_ = lean_ctor_get(v_options_6133_, 0);
v_signal_6142_ = lean_ctor_get(v_options_6133_, 1);
v_isSharedCheck_6168_ = !lean_is_exclusive(v_options_6133_);
if (v_isSharedCheck_6168_ == 0)
{
v___x_6144_ = v_options_6133_;
v_isShared_6145_ = v_isSharedCheck_6168_;
goto v_resetjp_6143_;
}
else
{
lean_inc(v_signal_6142_);
lean_inc(v_backoffSchedule_6141_);
lean_dec(v_options_6133_);
v___x_6144_ = lean_box(0);
v_isShared_6145_ = v_isSharedCheck_6168_;
goto v_resetjp_6143_;
}
v_resetjp_6143_:
{
lean_object* v___x_6146_; lean_object* v___x_6147_; lean_object* v___x_6149_; 
v___x_6146_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSAtomicOperationEnqueueOptions___lam__0___closed__2));
v___x_6147_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_AtomicOperation_enqueue_spec__0_spec__1(v_backoffSchedule_6141_);
if (v_isShared_6145_ == 0)
{
lean_ctor_set(v___x_6144_, 1, v___x_6147_);
lean_ctor_set(v___x_6144_, 0, v___x_6146_);
v___x_6149_ = v___x_6144_;
goto v_reusejp_6148_;
}
else
{
lean_object* v_reuseFailAlloc_6167_; 
v_reuseFailAlloc_6167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6167_, 0, v___x_6146_);
lean_ctor_set(v_reuseFailAlloc_6167_, 1, v___x_6147_);
v___x_6149_ = v_reuseFailAlloc_6167_;
goto v_reusejp_6148_;
}
v_reusejp_6148_:
{
lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6153_; lean_object* v___x_6154_; lean_object* v___x_6155_; lean_object* v___x_6156_; lean_object* v___x_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___x_6162_; lean_object* v___x_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; 
v___x_6150_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCronWithOptionsOptions___lam__0___closed__0));
v___x_6151_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_6142_);
lean_dec(v_signal_6142_);
v___x_6152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6152_, 0, v___x_6150_);
lean_ctor_set(v___x_6152_, 1, v___x_6151_);
v___x_6153_ = lean_unsigned_to_nat(2u);
v___x_6154_ = lean_mk_empty_array_with_capacity(v___x_6153_);
v___x_6155_ = lean_array_push(v___x_6154_, v___x_6149_);
v___x_6156_ = lean_array_push(v___x_6155_, v___x_6152_);
v___x_6157_ = l_Lasm_JS_Web_Support_fields(v___x_6156_);
lean_dec_ref(v___x_6156_);
v___x_6158_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSKvListIterator___lam__0___closed__0));
v___x_6159_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6159_, 0, v_handler_6134_);
lean_ctor_set(v___x_6159_, 1, v___x_6158_);
v___x_6160_ = lean_mk_empty_array_with_capacity(v___x_6136_);
v___x_6161_ = lean_array_push(v___x_6160_, v___x_6138_);
v___x_6162_ = lean_array_push(v___x_6161_, v___y_6140_);
v___x_6163_ = lean_array_push(v___x_6162_, v___x_6157_);
v___x_6164_ = lean_array_push(v___x_6163_, v___x_6159_);
v___x_6165_ = l_Lasm_JS_Web_Support_args(v___x_6164_);
v___x_6166_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Deno_cron_spec__0(v___x_6137_, v___x_6165_);
return v___x_6166_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cronWithOptions___boxed(lean_object* v_name_6206_, lean_object* v_schedule_6207_, lean_object* v_options_6208_, lean_object* v_handler_6209_, lean_object* v_a_6210_){
_start:
{
lean_object* v_res_6211_; 
v_res_6211_ = l_Lasm_JS_Deno_cronWithOptions(v_name_6206_, v_schedule_6207_, v_options_6208_, v_handler_6209_);
return v_res_6211_;
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
