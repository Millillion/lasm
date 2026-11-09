// Lean compiler output
// Module: Lasm.JS.Web.File
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Streams
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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(uint8_t, uint64_t);
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
static const lean_string_object l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlob___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSBlob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSBlob___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSBlob___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSBlob___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSBlob = (const lean_object*)&l_Lasm_JS_Web_instToJSBlob___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSBlob___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSBlob___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSBlob___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSBlob___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSBlob___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSBlob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSBlob___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSBlob___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSBlob___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSBlob___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.JS.Web.Blob"};
static const lean_object* l_Lasm_JS_Web_instFromJSBlob___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSBlob___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSBlob___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSBlob___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSBlob___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSBlob___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSBlob___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSBlob = (const lean_object*)&l_Lasm_JS_Web_instFromJSBlob___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSFile = (const lean_object*)&l_Lasm_JS_Web_instToJSBlob___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.JS.Web.File"};
static const lean_object* l_Lasm_JS_Web_instFromJSFile___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSFile___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSBlob___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSFile___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSFile___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSFile___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSFile = (const lean_object*)&l_Lasm_JS_Web_instFromJSFile___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_transparent_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_transparent_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_transparent_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_transparent_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_native_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_native_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_native_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_native_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqEndingType_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqEndingType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqEndingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqEndingType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instBEqEndingType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instBEqEndingType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqEndingType = (const lean_object*)&l_Lasm_JS_Web_instBEqEndingType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprEndingType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Web.EndingType.transparent"};
static const lean_object* l_Lasm_JS_Web_instReprEndingType_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprEndingType_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprEndingType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprEndingType_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instReprEndingType_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprEndingType_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instReprEndingType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.EndingType.native"};
static const lean_object* l_Lasm_JS_Web_instReprEndingType_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instReprEndingType_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprEndingType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprEndingType_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instReprEndingType_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instReprEndingType_repr___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Web_instReprEndingType_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprEndingType_repr___closed__4;
static lean_once_cell_t l_Lasm_JS_Web_instReprEndingType_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprEndingType_repr___closed__5;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprEndingType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprEndingType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprEndingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprEndingType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprEndingType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprEndingType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprEndingType = (const lean_object*)&l_Lasm_JS_Web_instReprEndingType___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedEndingType_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instInhabitedEndingType;
static const lean_string_object l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "transparent"};
static const lean_object* l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "native"};
static const lean_object* l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEndingType___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEndingType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSEndingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEndingType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSEndingType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEndingType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEndingType = (const lean_object*)&l_Lasm_JS_Web_instToJSEndingType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEndingType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEndingType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSEndingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSEndingType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSEndingType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEndingType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSEndingType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Web.EndingType"};
static const lean_object* l_Lasm_JS_Web_instFromJSEndingType___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEndingType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSEndingType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSEndingType___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSEndingType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSEndingType___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEndingType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSEndingType = (const lean_object*)&l_Lasm_JS_Web_instFromJSEndingType___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_bufferSource_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_bufferSource_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_blob_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_blob_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_usvString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_usvString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSBlobPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSBlobPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSBlobPart___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSBlobPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSBlobPart = (const lean_object*)&l_Lasm_JS_Web_instToJSBlobPart___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "endings"};
static const lean_object* l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSBlobPropertyBag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSBlobPropertyBag___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSBlobPropertyBag___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSBlobPropertyBag___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSBlobPropertyBag___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSEndingType___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSBlobPropertyBag___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSBlobPropertyBag___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSBlobPropertyBag = (const lean_object*)&l_Lasm_JS_Web_instToJSBlobPropertyBag___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lastModified"};
static const lean_object* l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSFilePropertyBag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSInt___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSFilePropertyBag___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSFilePropertyBag___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSFilePropertyBag___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSBlobPropertyBag___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSEndingType___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSFilePropertyBag___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSFilePropertyBag___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSFilePropertyBag___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSFilePropertyBag = (const lean_object*)&l_Lasm_JS_Web_instToJSFilePropertyBag___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_Blob_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Web.Blob.new"};
static const lean_object* l_Lasm_JS_Web_Blob_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Blob_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_Blob_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_Blob_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Blob_new___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_Blob_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Blob"};
static const lean_object* l_Lasm_JS_Web_Blob_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Blob_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_Blob_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Blob_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Blob_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Blob_new___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Blob_new___closed__3 = (const lean_object*)&l_Lasm_JS_Web_Blob_new___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_new___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Blob_size___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* l_Lasm_JS_Web_Blob_size___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Blob_size___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_size(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_type(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_type___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Blob_slice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "slice"};
static const lean_object* l_Lasm_JS_Web_Blob_slice___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Blob_slice___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_slice(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_slice___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Blob_stream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stream"};
static const lean_object* l_Lasm_JS_Web_Blob_stream___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Blob_stream___closed__0_value;
static const lean_array_object l_Lasm_JS_Web_Blob_stream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_Blob_stream___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Blob_stream___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Web_Blob_stream___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_Blob_stream___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_stream(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_stream___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Blob_text___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lasm_JS_Web_Blob_text___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Blob_text___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_text(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_text___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_Blob_arrayBuffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_Blob_arrayBuffer___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Blob_arrayBuffer___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_Blob_arrayBuffer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "arrayBuffer"};
static const lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Blob_arrayBuffer___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Blob_textStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "textStream"};
static const lean_object* l_Lasm_JS_Web_Blob_textStream___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Blob_textStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_textStream(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_textStream___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Blob_bytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "bytes"};
static const lean_object* l_Lasm_JS_Web_Blob_bytes___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Blob_bytes___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_bytes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_bytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_File_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_File_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Web.File.new"};
static const lean_object* l_Lasm_JS_Web_File_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_File_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_File_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "File"};
static const lean_object* l_Lasm_JS_Web_File_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_File_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_File_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_File_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Blob_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_File_new___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_File_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_File_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_File_name___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Web_File_name___closed__0 = (const lean_object*)&l_Lasm_JS_Web_File_name___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_name(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_name___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_lastModified(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_lastModified___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlob___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSBlob___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBlob___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSBlob___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Web_instFromJSBlob___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorIdx(uint8_t v_x_29_){
_start:
{
if (v_x_29_ == 0)
{
lean_object* v___x_30_; 
v___x_30_ = lean_unsigned_to_nat(0u);
return v___x_30_;
}
else
{
lean_object* v___x_31_; 
v___x_31_ = lean_unsigned_to_nat(1u);
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorIdx___boxed(lean_object* v_x_32_){
_start:
{
uint8_t v_x_boxed_33_; lean_object* v_res_34_; 
v_x_boxed_33_ = lean_unbox(v_x_32_);
v_res_34_ = l_Lasm_JS_Web_EndingType_ctorIdx(v_x_boxed_33_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorElim___redArg(lean_object* v_k_35_){
_start:
{
lean_inc(v_k_35_);
return v_k_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorElim___redArg___boxed(lean_object* v_k_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lasm_JS_Web_EndingType_ctorElim___redArg(v_k_36_);
lean_dec(v_k_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorElim(lean_object* v_motive_38_, lean_object* v_ctorIdx_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_k_42_){
_start:
{
lean_inc(v_k_42_);
return v_k_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_ctorElim___boxed(lean_object* v_motive_43_, lean_object* v_ctorIdx_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_k_47_){
_start:
{
uint8_t v_t_boxed_48_; lean_object* v_res_49_; 
v_t_boxed_48_ = lean_unbox(v_t_45_);
v_res_49_ = l_Lasm_JS_Web_EndingType_ctorElim(v_motive_43_, v_ctorIdx_44_, v_t_boxed_48_, v_h_46_, v_k_47_);
lean_dec(v_k_47_);
lean_dec(v_ctorIdx_44_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_transparent_elim___redArg(lean_object* v_transparent_50_){
_start:
{
lean_inc(v_transparent_50_);
return v_transparent_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_transparent_elim___redArg___boxed(lean_object* v_transparent_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lasm_JS_Web_EndingType_transparent_elim___redArg(v_transparent_51_);
lean_dec(v_transparent_51_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_transparent_elim(lean_object* v_motive_53_, uint8_t v_t_54_, lean_object* v_h_55_, lean_object* v_transparent_56_){
_start:
{
lean_inc(v_transparent_56_);
return v_transparent_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_transparent_elim___boxed(lean_object* v_motive_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_transparent_60_){
_start:
{
uint8_t v_t_boxed_61_; lean_object* v_res_62_; 
v_t_boxed_61_ = lean_unbox(v_t_58_);
v_res_62_ = l_Lasm_JS_Web_EndingType_transparent_elim(v_motive_57_, v_t_boxed_61_, v_h_59_, v_transparent_60_);
lean_dec(v_transparent_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_native_elim___redArg(lean_object* v_native_63_){
_start:
{
lean_inc(v_native_63_);
return v_native_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_native_elim___redArg___boxed(lean_object* v_native_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lasm_JS_Web_EndingType_native_elim___redArg(v_native_64_);
lean_dec(v_native_64_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_native_elim(lean_object* v_motive_66_, uint8_t v_t_67_, lean_object* v_h_68_, lean_object* v_native_69_){
_start:
{
lean_inc(v_native_69_);
return v_native_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EndingType_native_elim___boxed(lean_object* v_motive_70_, lean_object* v_t_71_, lean_object* v_h_72_, lean_object* v_native_73_){
_start:
{
uint8_t v_t_boxed_74_; lean_object* v_res_75_; 
v_t_boxed_74_ = lean_unbox(v_t_71_);
v_res_75_ = l_Lasm_JS_Web_EndingType_native_elim(v_motive_70_, v_t_boxed_74_, v_h_72_, v_native_73_);
lean_dec(v_native_73_);
return v_res_75_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqEndingType_beq(uint8_t v_x_76_, uint8_t v_y_77_){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; uint8_t v___x_80_; 
v___x_78_ = l_Lasm_JS_Web_EndingType_ctorIdx(v_x_76_);
v___x_79_ = l_Lasm_JS_Web_EndingType_ctorIdx(v_y_77_);
v___x_80_ = lean_nat_dec_eq(v___x_78_, v___x_79_);
lean_dec(v___x_79_);
lean_dec(v___x_78_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqEndingType_beq___boxed(lean_object* v_x_81_, lean_object* v_y_82_){
_start:
{
uint8_t v_x_21__boxed_83_; uint8_t v_y_22__boxed_84_; uint8_t v_res_85_; lean_object* v_r_86_; 
v_x_21__boxed_83_ = lean_unbox(v_x_81_);
v_y_22__boxed_84_ = lean_unbox(v_y_82_);
v_res_85_ = l_Lasm_JS_Web_instBEqEndingType_beq(v_x_21__boxed_83_, v_y_22__boxed_84_);
v_r_86_ = lean_box(v_res_85_);
return v_r_86_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprEndingType_repr___closed__4(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_unsigned_to_nat(2u);
v___x_96_ = lean_nat_to_int(v___x_95_);
return v___x_96_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprEndingType_repr___closed__5(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = lean_unsigned_to_nat(1u);
v___x_98_ = lean_nat_to_int(v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprEndingType_repr(uint8_t v_x_99_, lean_object* v_prec_100_){
_start:
{
lean_object* v___y_102_; lean_object* v___y_109_; 
if (v_x_99_ == 0)
{
lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(1024u);
v___x_116_ = lean_nat_dec_le(v___x_115_, v_prec_100_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; 
v___x_117_ = lean_obj_once(&l_Lasm_JS_Web_instReprEndingType_repr___closed__4, &l_Lasm_JS_Web_instReprEndingType_repr___closed__4_once, _init_l_Lasm_JS_Web_instReprEndingType_repr___closed__4);
v___y_102_ = v___x_117_;
goto v___jp_101_;
}
else
{
lean_object* v___x_118_; 
v___x_118_ = lean_obj_once(&l_Lasm_JS_Web_instReprEndingType_repr___closed__5, &l_Lasm_JS_Web_instReprEndingType_repr___closed__5_once, _init_l_Lasm_JS_Web_instReprEndingType_repr___closed__5);
v___y_102_ = v___x_118_;
goto v___jp_101_;
}
}
else
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(1024u);
v___x_120_ = lean_nat_dec_le(v___x_119_, v_prec_100_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_once(&l_Lasm_JS_Web_instReprEndingType_repr___closed__4, &l_Lasm_JS_Web_instReprEndingType_repr___closed__4_once, _init_l_Lasm_JS_Web_instReprEndingType_repr___closed__4);
v___y_109_ = v___x_121_;
goto v___jp_108_;
}
else
{
lean_object* v___x_122_; 
v___x_122_ = lean_obj_once(&l_Lasm_JS_Web_instReprEndingType_repr___closed__5, &l_Lasm_JS_Web_instReprEndingType_repr___closed__5_once, _init_l_Lasm_JS_Web_instReprEndingType_repr___closed__5);
v___y_109_ = v___x_122_;
goto v___jp_108_;
}
}
v___jp_101_:
{
lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_103_ = ((lean_object*)(l_Lasm_JS_Web_instReprEndingType_repr___closed__1));
lean_inc(v___y_102_);
v___x_104_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_104_, 0, v___y_102_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = 0;
v___x_106_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_106_, 0, v___x_104_);
lean_ctor_set_uint8(v___x_106_, sizeof(void*)*1, v___x_105_);
v___x_107_ = l_Repr_addAppParen(v___x_106_, v_prec_100_);
return v___x_107_;
}
v___jp_108_:
{
lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_110_ = ((lean_object*)(l_Lasm_JS_Web_instReprEndingType_repr___closed__3));
lean_inc(v___y_109_);
v___x_111_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_111_, 0, v___y_109_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = 0;
v___x_113_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set_uint8(v___x_113_, sizeof(void*)*1, v___x_112_);
v___x_114_ = l_Repr_addAppParen(v___x_113_, v_prec_100_);
return v___x_114_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprEndingType_repr___boxed(lean_object* v_x_123_, lean_object* v_prec_124_){
_start:
{
uint8_t v_x_117__boxed_125_; lean_object* v_res_126_; 
v_x_117__boxed_125_ = lean_unbox(v_x_123_);
v_res_126_ = l_Lasm_JS_Web_instReprEndingType_repr(v_x_117__boxed_125_, v_prec_124_);
lean_dec(v_prec_124_);
return v_res_126_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedEndingType_default(void){
_start:
{
uint8_t v___x_129_; 
v___x_129_ = 0;
return v___x_129_;
}
}
static uint8_t _init_l_Lasm_JS_Web_instInhabitedEndingType(void){
_start:
{
uint8_t v___x_130_; 
v___x_130_ = 0;
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEndingType___lam__0(uint8_t v_x_137_){
_start:
{
if (v_x_137_ == 0)
{
lean_object* v___x_138_; 
v___x_138_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__1));
return v___x_138_;
}
else
{
lean_object* v___x_139_; 
v___x_139_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__3));
return v___x_139_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEndingType___lam__0___boxed(lean_object* v_x_140_){
_start:
{
uint8_t v_x_40__boxed_141_; lean_object* v_res_142_; 
v_x_40__boxed_141_ = lean_unbox(v_x_140_);
v_res_142_ = l_Lasm_JS_Web_instToJSEndingType___lam__0(v_x_40__boxed_141_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEndingType___lam__0(lean_object* v_x_154_){
_start:
{
if (lean_obj_tag(v_x_154_) == 4)
{
lean_object* v_s_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v_s_157_ = lean_ctor_get(v_x_154_, 0);
v___x_158_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__0));
v___x_159_ = lean_string_dec_eq(v_s_157_, v___x_158_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_160_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__2));
v___x_161_ = lean_string_dec_eq(v_s_157_, v___x_160_);
if (v___x_161_ == 0)
{
goto v___jp_155_;
}
else
{
lean_object* v___x_162_; 
v___x_162_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__2));
return v___x_162_;
}
}
else
{
lean_object* v___x_163_; 
v___x_163_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__3));
return v___x_163_;
}
}
else
{
goto v___jp_155_;
}
v___jp_155_:
{
lean_object* v___x_156_; 
v___x_156_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSEndingType___lam__0___closed__1));
return v___x_156_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEndingType___lam__0___boxed(lean_object* v_x_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Lasm_JS_Web_instFromJSEndingType___lam__0(v_x_164_);
lean_dec(v_x_164_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorIdx(lean_object* v_x_173_){
_start:
{
switch(lean_obj_tag(v_x_173_))
{
case 0:
{
lean_object* v___x_174_; 
v___x_174_ = lean_unsigned_to_nat(0u);
return v___x_174_;
}
case 1:
{
lean_object* v___x_175_; 
v___x_175_ = lean_unsigned_to_nat(1u);
return v___x_175_;
}
default: 
{
lean_object* v___x_176_; 
v___x_176_ = lean_unsigned_to_nat(2u);
return v___x_176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorIdx___boxed(lean_object* v_x_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lasm_JS_Web_BlobPart_ctorIdx(v_x_177_);
lean_dec_ref(v_x_177_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim___redArg(lean_object* v_t_179_, lean_object* v_k_180_){
_start:
{
if (lean_obj_tag(v_t_179_) == 1)
{
lean_object* v_value_181_; lean_object* v___x_182_; 
v_value_181_ = lean_ctor_get(v_t_179_, 0);
lean_inc(v_value_181_);
lean_dec_ref_known(v_t_179_, 1);
v___x_182_ = lean_apply_1(v_k_180_, v_value_181_);
return v___x_182_;
}
else
{
lean_object* v_value_183_; lean_object* v___x_184_; 
v_value_183_ = lean_ctor_get(v_t_179_, 0);
lean_inc_ref(v_value_183_);
lean_dec_ref(v_t_179_);
v___x_184_ = lean_apply_1(v_k_180_, v_value_183_);
return v___x_184_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim(lean_object* v_motive_185_, lean_object* v_ctorIdx_186_, lean_object* v_t_187_, lean_object* v_h_188_, lean_object* v_k_189_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_187_, v_k_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim___boxed(lean_object* v_motive_191_, lean_object* v_ctorIdx_192_, lean_object* v_t_193_, lean_object* v_h_194_, lean_object* v_k_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lasm_JS_Web_BlobPart_ctorElim(v_motive_191_, v_ctorIdx_192_, v_t_193_, v_h_194_, v_k_195_);
lean_dec(v_ctorIdx_192_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_bufferSource_elim___redArg(lean_object* v_t_197_, lean_object* v_bufferSource_198_){
_start:
{
lean_object* v___x_199_; 
v___x_199_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_197_, v_bufferSource_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_bufferSource_elim(lean_object* v_motive_200_, lean_object* v_t_201_, lean_object* v_h_202_, lean_object* v_bufferSource_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_201_, v_bufferSource_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_blob_elim___redArg(lean_object* v_t_205_, lean_object* v_blob_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_205_, v_blob_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_blob_elim(lean_object* v_motive_208_, lean_object* v_t_209_, lean_object* v_h_210_, lean_object* v_blob_211_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_209_, v_blob_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_usvString_elim___redArg(lean_object* v_t_213_, lean_object* v_usvString_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_213_, v_usvString_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_usvString_elim(lean_object* v_motive_216_, lean_object* v_t_217_, lean_object* v_h_218_, lean_object* v_usvString_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_217_, v_usvString_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobPart___lam__0(lean_object* v_x_221_){
_start:
{
switch(lean_obj_tag(v_x_221_))
{
case 0:
{
lean_object* v_value_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_229_; 
v_value_222_ = lean_ctor_get(v_x_221_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v_x_221_);
if (v_isSharedCheck_229_ == 0)
{
v___x_224_ = v_x_221_;
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_value_222_);
lean_dec(v_x_221_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_227_; 
if (v_isShared_225_ == 0)
{
lean_ctor_set_tag(v___x_224_, 6);
v___x_227_ = v___x_224_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_value_222_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
case 1:
{
lean_object* v_value_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_value_230_ = lean_ctor_get(v_x_221_, 0);
lean_inc(v_value_230_);
lean_dec_ref_known(v_x_221_, 1);
v___x_231_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_232_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_232_, 0, v_value_230_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
return v___x_232_;
}
default: 
{
lean_object* v_value_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
v_value_233_ = lean_ctor_get(v_x_221_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v_x_221_);
if (v_isSharedCheck_240_ == 0)
{
v___x_235_ = v_x_221_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_value_233_);
lean_dec(v_x_221_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
lean_ctor_set_tag(v___x_235_, 4);
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_value_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0(lean_object* v___f_245_, lean_object* v___f_246_, lean_object* v_d_247_){
_start:
{
lean_object* v_type_248_; lean_object* v_endings_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_266_; 
v_type_248_ = lean_ctor_get(v_d_247_, 0);
v_endings_249_ = lean_ctor_get(v_d_247_, 1);
v_isSharedCheck_266_ = !lean_is_exclusive(v_d_247_);
if (v_isSharedCheck_266_ == 0)
{
v___x_251_ = v_d_247_;
v_isShared_252_ = v_isSharedCheck_266_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_endings_249_);
lean_inc(v_type_248_);
lean_dec(v_d_247_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_266_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_256_; 
v___x_253_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_254_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_245_, v_type_248_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 1, v___x_254_);
lean_ctor_set(v___x_251_, 0, v___x_253_);
v___x_256_ = v___x_251_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_253_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v___x_254_);
v___x_256_ = v_reuseFailAlloc_265_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_257_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1));
v___x_258_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_246_, v_endings_249_);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_257_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
v___x_260_ = lean_unsigned_to_nat(2u);
v___x_261_ = lean_mk_empty_array_with_capacity(v___x_260_);
v___x_262_ = lean_array_push(v___x_261_, v___x_256_);
v___x_263_ = lean_array_push(v___x_262_, v___x_259_);
v___x_264_ = l_Lasm_JS_Web_Support_fields(v___x_263_);
lean_dec_ref(v___x_263_);
return v___x_264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0(lean_object* v___f_273_, lean_object* v___f_274_, lean_object* v___f_275_, lean_object* v_d_276_){
_start:
{
lean_object* v_type_277_; lean_object* v_endings_278_; lean_object* v_lastModified_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v_type_277_ = lean_ctor_get(v_d_276_, 0);
lean_inc(v_type_277_);
v_endings_278_ = lean_ctor_get(v_d_276_, 1);
lean_inc(v_endings_278_);
v_lastModified_279_ = lean_ctor_get(v_d_276_, 2);
lean_inc(v_lastModified_279_);
lean_dec_ref(v_d_276_);
v___x_280_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_281_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_273_, v_type_277_);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_280_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
v___x_283_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1));
v___x_284_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_274_, v_endings_278_);
v___x_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_283_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = ((lean_object*)(l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0));
v___x_287_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_275_, v_lastModified_279_);
v___x_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_286_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = lean_unsigned_to_nat(3u);
v___x_290_ = lean_mk_empty_array_with_capacity(v___x_289_);
v___x_291_ = lean_array_push(v___x_290_, v___x_282_);
v___x_292_ = lean_array_push(v___x_291_, v___x_285_);
v___x_293_ = lean_array_push(v___x_292_, v___x_288_);
v___x_294_ = l_Lasm_JS_Web_Support_fields(v___x_293_);
lean_dec_ref(v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(lean_object* v_x_301_){
_start:
{
if (lean_obj_tag(v_x_301_) == 0)
{
lean_object* v___x_302_; 
v___x_302_ = lean_box(0);
return v___x_302_;
}
else
{
lean_object* v_val_303_; uint8_t v___x_304_; 
v_val_303_ = lean_ctor_get(v_x_301_, 0);
v___x_304_ = lean_unbox(v_val_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; 
v___x_305_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__1));
return v___x_305_;
}
else
{
lean_object* v___x_306_; 
v___x_306_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEndingType___lam__0___closed__3));
return v___x_306_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2___boxed(lean_object* v_x_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(v_x_307_);
lean_dec(v_x_307_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1(lean_object* v_x_309_){
_start:
{
if (lean_obj_tag(v_x_309_) == 0)
{
lean_object* v___x_310_; 
v___x_310_ = lean_box(0);
return v___x_310_;
}
else
{
lean_object* v_val_311_; lean_object* v_type_312_; lean_object* v_endings_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_330_; 
v_val_311_ = lean_ctor_get(v_x_309_, 0);
lean_inc(v_val_311_);
lean_dec_ref_known(v_x_309_, 1);
v_type_312_ = lean_ctor_get(v_val_311_, 0);
v_endings_313_ = lean_ctor_get(v_val_311_, 1);
v_isSharedCheck_330_ = !lean_is_exclusive(v_val_311_);
if (v_isSharedCheck_330_ == 0)
{
v___x_315_ = v_val_311_;
v_isShared_316_ = v_isSharedCheck_330_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_endings_313_);
lean_inc(v_type_312_);
lean_dec(v_val_311_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_330_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_317_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_318_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_type_312_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 1, v___x_318_);
lean_ctor_set(v___x_315_, 0, v___x_317_);
v___x_320_ = v___x_315_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v___x_318_);
v___x_320_ = v_reuseFailAlloc_329_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_321_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1));
v___x_322_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(v_endings_313_);
lean_dec(v_endings_313_);
v___x_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_321_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = lean_unsigned_to_nat(2u);
v___x_325_ = lean_mk_empty_array_with_capacity(v___x_324_);
v___x_326_ = lean_array_push(v___x_325_, v___x_320_);
v___x_327_ = lean_array_push(v___x_326_, v___x_323_);
v___x_328_ = l_Lasm_JS_Web_Support_fields(v___x_327_);
lean_dec_ref(v___x_327_);
return v___x_328_;
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_335_ = lean_string_utf8_byte_size(v___x_334_);
return v___x_335_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_336_ = lean_unsigned_to_nat(0u);
v___x_337_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__3);
v___x_338_ = lean_nat_dec_eq(v___x_337_, v___x_336_);
return v___x_338_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_343_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__8));
v___x_344_ = lean_unsigned_to_nat(46u);
v___x_345_ = lean_unsigned_to_nat(193u);
v___x_346_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__7));
v___x_347_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__6));
v___x_348_ = l_mkPanicMessageWithDecl(v___x_347_, v___x_346_, v___x_345_, v___x_344_, v___x_343_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4(lean_object* v_context_350_, lean_object* v_d_351_){
_start:
{
lean_object* v___y_354_; lean_object* v___y_355_; 
if (lean_obj_tag(v_d_351_) == 9)
{
lean_object* v_value_359_; lean_object* v___x_360_; 
v_value_359_ = lean_ctor_get(v_d_351_, 0);
lean_inc(v_value_359_);
lean_dec_ref_known(v_d_351_, 2);
v___x_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_360_, 0, v_value_359_);
return v___x_360_;
}
else
{
lean_object* v___x_361_; lean_object* v_received_363_; 
v___x_361_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
if (lean_obj_tag(v_d_351_) == 9)
{
lean_object* v_value_377_; lean_object* v_description_378_; uint8_t v___x_379_; 
v_value_377_ = lean_ctor_get(v_d_351_, 0);
v_description_378_ = lean_ctor_get(v_d_351_, 1);
v___x_379_ = lean_string_dec_eq(v_description_378_, v___x_361_);
if (v___x_379_ == 0)
{
goto v___jp_375_;
}
else
{
uint32_t v___x_380_; uint64_t v___x_381_; lean_object* v___x_382_; uint32_t v___x_383_; lean_object* v___x_384_; 
lean_inc_n(v_value_377_, 2);
lean_dec_ref_known(v_d_351_, 2);
v___x_380_ = 206;
v___x_381_ = 0ULL;
v___x_382_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_382_, 0, v_value_377_);
lean_ctor_set(v___x_382_, 1, v___x_361_);
v___x_383_ = lasm_js_value_handle(v_value_377_);
lean_dec(v_value_377_);
v___x_384_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_380_, v___x_381_, v___x_382_, v___x_383_);
lean_dec_ref_known(v___x_382_, 2);
if (lean_obj_tag(v___x_384_) == 0)
{
lean_object* v_a_385_; uint8_t v___x_386_; 
v_a_385_ = lean_ctor_get(v___x_384_, 0);
lean_inc(v_a_385_);
lean_dec_ref_known(v___x_384_, 1);
v___x_386_ = lean_string_validate_utf8(v_a_385_);
if (v___x_386_ == 0)
{
lean_object* v___x_387_; lean_object* v___x_388_; 
lean_dec(v_a_385_);
v___x_387_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9);
v___x_388_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_387_);
v_received_363_ = v___x_388_;
goto v___jp_362_;
}
else
{
lean_object* v___x_389_; 
v___x_389_ = lean_string_from_utf8_unchecked(v_a_385_);
v_received_363_ = v___x_389_;
goto v___jp_362_;
}
}
else
{
lean_object* v___x_390_; 
lean_dec_ref_known(v___x_384_, 1);
v___x_390_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10));
v_received_363_ = v___x_390_;
goto v___jp_362_;
}
}
}
else
{
goto v___jp_375_;
}
v___jp_362_:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_364_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_365_ = lean_string_append(v___x_364_, v_context_350_);
v___x_366_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1));
v___x_367_ = lean_string_append(v___x_365_, v___x_366_);
v___x_368_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSBlob___closed__1));
v___x_369_ = lean_string_append(v___x_367_, v___x_368_);
v___x_370_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2));
v___x_371_ = lean_string_append(v___x_369_, v___x_370_);
v___x_372_ = lean_string_append(v___x_371_, v_received_363_);
lean_dec_ref(v_received_363_);
v___x_373_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; 
v___x_374_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__5));
v___y_354_ = v___x_372_;
v___y_355_ = v___x_374_;
goto v___jp_353_;
}
else
{
v___y_354_ = v___x_372_;
v___y_355_ = v___x_361_;
goto v___jp_353_;
}
}
v___jp_375_:
{
lean_object* v___x_376_; 
v___x_376_ = l_Lasm_JS_Data_describe(v_d_351_);
v_received_363_ = v___x_376_;
goto v___jp_362_;
}
}
v___jp_353_:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_356_ = lean_string_append(v___y_354_, v___y_355_);
v___x_357_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
v___x_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
return v___x_358_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___boxed(lean_object* v_context_391_, lean_object* v_d_392_, lean_object* v_a_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4(v_context_391_, v_d_392_);
lean_dec_ref(v_context_391_);
return v_res_394_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1(void){
_start:
{
uint8_t v___x_396_; uint64_t v___x_397_; 
v___x_396_ = 0;
v___x_397_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2(lean_object* v_b_398_, lean_object* v_args_399_, uint8_t v_await_400_){
_start:
{
uint64_t v___y_403_; uint64_t v___y_404_; uint64_t v___x_447_; uint64_t v___y_449_; 
v___x_447_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_400_ == 0)
{
uint64_t v___x_454_; 
v___x_454_ = 0ULL;
v___y_449_ = v___x_454_;
goto v___jp_448_;
}
else
{
uint64_t v___x_455_; 
v___x_455_ = 2ULL;
v___y_449_ = v___x_455_;
goto v___jp_448_;
}
v___jp_402_:
{
uint64_t v_flags_405_; uint32_t v___x_406_; lean_object* v___x_407_; uint32_t v___x_408_; lean_object* v___x_409_; 
v_flags_405_ = lean_uint64_lor(v___y_403_, v___y_404_);
v___x_406_ = 214;
v___x_407_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_398_, v_args_399_);
v___x_408_ = 0;
v___x_409_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_406_, v_flags_405_, v___x_407_, v___x_408_);
lean_dec(v___x_407_);
if (lean_obj_tag(v___x_409_) == 0)
{
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_411_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_410_);
lean_dec_ref_known(v___x_409_, 1);
v___x_411_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_410_);
lean_dec(v_a_410_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_a_412_);
lean_dec_ref_known(v___x_411_, 1);
v___x_413_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_398_);
v___x_414_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4(v___x_413_, v_a_412_);
lean_dec_ref(v___x_413_);
return v___x_414_;
}
else
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
v_a_415_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_422_ == 0)
{
v___x_417_ = v___x_411_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_411_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_420_; 
if (v_isShared_418_ == 0)
{
v___x_420_ = v___x_417_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_a_415_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
}
else
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_430_; 
v_a_423_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_430_ == 0)
{
v___x_425_ = v___x_409_;
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_409_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_428_; 
if (v_isShared_426_ == 0)
{
lean_ctor_set_tag(v___x_425_, 1);
v___x_428_ = v___x_425_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_a_423_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
}
else
{
lean_object* v_a_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_446_; 
v_a_431_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_446_ == 0)
{
v___x_433_ = v___x_409_;
v_isShared_434_ = v_isSharedCheck_446_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_a_431_);
lean_dec(v___x_409_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_446_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_444_; 
v___x_435_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_436_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_398_);
v___x_437_ = lean_string_append(v___x_435_, v___x_436_);
lean_dec_ref(v___x_436_);
v___x_438_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__0));
v___x_439_ = lean_string_append(v___x_437_, v___x_438_);
v___x_440_ = lean_io_error_to_string(v_a_431_);
v___x_441_ = lean_string_append(v___x_439_, v___x_440_);
lean_dec_ref(v___x_440_);
v___x_442_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 0, v___x_442_);
v___x_444_ = v___x_433_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_442_);
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
v___jp_448_:
{
uint8_t v_construct_450_; uint64_t v___x_451_; 
v_construct_450_ = lean_ctor_get_uint8(v_b_398_, sizeof(void*)*4);
v___x_451_ = lean_uint64_lor(v___x_447_, v___y_449_);
if (v_construct_450_ == 0)
{
uint64_t v___x_452_; 
v___x_452_ = 0ULL;
v___y_403_ = v___x_451_;
v___y_404_ = v___x_452_;
goto v___jp_402_;
}
else
{
uint64_t v___x_453_; 
v___x_453_ = 4ULL;
v___y_403_ = v___x_451_;
v___y_404_ = v___x_453_;
goto v___jp_402_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___boxed(lean_object* v_b_456_, lean_object* v_args_457_, lean_object* v_await_458_, lean_object* v_a_459_){
_start:
{
uint8_t v_await_boxed_460_; lean_object* v_res_461_; 
v_await_boxed_460_ = lean_unbox(v_await_458_);
v_res_461_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2(v_b_456_, v_args_457_, v_await_boxed_460_);
lean_dec_ref(v_b_456_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(size_t v_sz_462_, size_t v_i_463_, lean_object* v_bs_464_){
_start:
{
uint8_t v___x_465_; 
v___x_465_ = lean_usize_dec_lt(v_i_463_, v_sz_462_);
if (v___x_465_ == 0)
{
return v_bs_464_;
}
else
{
lean_object* v_v_466_; lean_object* v___x_467_; lean_object* v_bs_x27_468_; lean_object* v___y_470_; 
v_v_466_ = lean_array_uget(v_bs_464_, v_i_463_);
v___x_467_ = lean_unsigned_to_nat(0u);
v_bs_x27_468_ = lean_array_uset(v_bs_464_, v_i_463_, v___x_467_);
switch(lean_obj_tag(v_v_466_))
{
case 0:
{
lean_object* v_value_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
v_value_475_ = lean_ctor_get(v_v_466_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v_v_466_);
if (v_isSharedCheck_482_ == 0)
{
v___x_477_ = v_v_466_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_value_475_);
lean_dec(v_v_466_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
lean_ctor_set_tag(v___x_477_, 6);
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_value_475_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
v___y_470_ = v___x_480_;
goto v___jp_469_;
}
}
}
case 1:
{
lean_object* v_value_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v_value_483_ = lean_ctor_get(v_v_466_, 0);
lean_inc(v_value_483_);
lean_dec_ref_known(v_v_466_, 1);
v___x_484_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_485_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_485_, 0, v_value_483_);
lean_ctor_set(v___x_485_, 1, v___x_484_);
v___y_470_ = v___x_485_;
goto v___jp_469_;
}
default: 
{
lean_object* v_value_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_493_; 
v_value_486_ = lean_ctor_get(v_v_466_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v_v_466_);
if (v_isSharedCheck_493_ == 0)
{
v___x_488_ = v_v_466_;
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_value_486_);
lean_dec(v_v_466_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
if (v_isShared_489_ == 0)
{
lean_ctor_set_tag(v___x_488_, 4);
v___x_491_ = v___x_488_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_value_486_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
v___y_470_ = v___x_491_;
goto v___jp_469_;
}
}
}
}
v___jp_469_:
{
size_t v___x_471_; size_t v___x_472_; lean_object* v___x_473_; 
v___x_471_ = ((size_t)1ULL);
v___x_472_ = lean_usize_add(v_i_463_, v___x_471_);
v___x_473_ = lean_array_uset(v_bs_x27_468_, v_i_463_, v___y_470_);
v_i_463_ = v___x_472_;
v_bs_464_ = v___x_473_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0___boxed(lean_object* v_sz_494_, lean_object* v_i_495_, lean_object* v_bs_496_){
_start:
{
size_t v_sz_boxed_497_; size_t v_i_boxed_498_; lean_object* v_res_499_; 
v_sz_boxed_497_ = lean_unbox_usize(v_sz_494_);
lean_dec(v_sz_494_);
v_i_boxed_498_ = lean_unbox_usize(v_i_495_);
lean_dec(v_i_495_);
v_res_499_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(v_sz_boxed_497_, v_i_boxed_498_, v_bs_496_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0(lean_object* v_x_500_){
_start:
{
if (lean_obj_tag(v_x_500_) == 0)
{
lean_object* v___x_501_; 
v___x_501_ = lean_box(0);
return v___x_501_;
}
else
{
lean_object* v_val_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_512_; 
v_val_502_ = lean_ctor_get(v_x_500_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v_x_500_);
if (v_isSharedCheck_512_ == 0)
{
v___x_504_ = v_x_500_;
v_isShared_505_ = v_isSharedCheck_512_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_val_502_);
lean_dec(v_x_500_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_512_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
size_t v_sz_506_; size_t v___x_507_; lean_object* v___x_508_; lean_object* v___x_510_; 
v_sz_506_ = lean_array_size(v_val_502_);
v___x_507_ = ((size_t)0ULL);
v___x_508_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(v_sz_506_, v___x_507_, v_val_502_);
if (v_isShared_505_ == 0)
{
lean_ctor_set_tag(v___x_504_, 7);
lean_ctor_set(v___x_504_, 0, v___x_508_);
v___x_510_ = v___x_504_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_508_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_new(lean_object* v_blobParts_522_, lean_object* v_options_523_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; lean_object* v___x_534_; 
v___x_525_ = lean_unsigned_to_nat(2u);
v___x_526_ = ((lean_object*)(l_Lasm_JS_Web_Blob_new___closed__3));
v___x_527_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0(v_blobParts_522_);
v___x_528_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1(v_options_523_);
v___x_529_ = lean_mk_empty_array_with_capacity(v___x_525_);
v___x_530_ = lean_array_push(v___x_529_, v___x_527_);
v___x_531_ = lean_array_push(v___x_530_, v___x_528_);
v___x_532_ = l_Lasm_JS_Web_Support_args(v___x_531_);
v___x_533_ = 0;
v___x_534_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2(v___x_526_, v___x_532_, v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_new___boxed(lean_object* v_blobParts_535_, lean_object* v_options_536_, lean_object* v_a_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lasm_JS_Web_Blob_new(v_blobParts_535_, v_options_536_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_size(lean_object* v_self_540_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = ((lean_object*)(l_Lasm_JS_Web_Blob_size___closed__0));
v___x_543_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0(v_self_540_, v___x_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_size___boxed(lean_object* v_self_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lasm_JS_Web_Blob_size(v_self_544_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_type(lean_object* v_self_547_){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_550_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_547_, v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_type___boxed(lean_object* v_self_551_, lean_object* v_a_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Lasm_JS_Web_Blob_type(v_self_551_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(lean_object* v_x_554_){
_start:
{
if (lean_obj_tag(v_x_554_) == 0)
{
lean_object* v___x_555_; 
v___x_555_ = lean_box(0);
return v___x_555_;
}
else
{
lean_object* v_val_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_568_; 
v_val_556_ = lean_ctor_get(v_x_554_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v_x_554_);
if (v_isSharedCheck_568_ == 0)
{
v___x_558_ = v_x_554_;
v_isShared_559_ = v_isSharedCheck_568_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_val_556_);
lean_dec(v_x_554_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_568_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_560_; lean_object* v___x_561_; uint8_t v___x_562_; 
v___x_560_ = lean_nat_abs(v_val_556_);
v___x_561_ = lean_cstr_to_nat("9007199254740991");
v___x_562_ = lean_nat_dec_le(v___x_560_, v___x_561_);
lean_dec(v___x_560_);
if (v___x_562_ == 0)
{
lean_object* v___x_564_; 
if (v_isShared_559_ == 0)
{
lean_ctor_set_tag(v___x_558_, 5);
v___x_564_ = v___x_558_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_val_556_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
else
{
double v___x_566_; lean_object* v___x_567_; 
lean_del_object(v___x_558_);
v___x_566_ = l_Float_ofInt(v_val_556_);
lean_dec(v_val_556_);
v___x_567_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_567_, 0, v___x_566_);
return v___x_567_;
}
}
}
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1_spec__1(uint8_t v_await_569_, uint64_t v_extra_570_){
_start:
{
uint64_t v___x_571_; uint64_t v___y_573_; 
v___x_571_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_569_ == 0)
{
uint64_t v___x_576_; 
v___x_576_ = 0ULL;
v___y_573_ = v___x_576_;
goto v___jp_572_;
}
else
{
uint64_t v___x_577_; 
v___x_577_ = 2ULL;
v___y_573_ = v___x_577_;
goto v___jp_572_;
}
v___jp_572_:
{
uint64_t v___x_574_; uint64_t v___x_575_; 
v___x_574_ = lean_uint64_lor(v___x_571_, v___y_573_);
v___x_575_ = lean_uint64_lor(v___x_574_, v_extra_570_);
return v___x_575_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1_spec__1___boxed(lean_object* v_await_578_, lean_object* v_extra_579_){
_start:
{
uint8_t v_await_boxed_580_; uint64_t v_extra_boxed_581_; uint64_t v_res_582_; lean_object* v_r_583_; 
v_await_boxed_580_ = lean_unbox(v_await_578_);
v_extra_boxed_581_ = lean_unbox_uint64(v_extra_579_);
lean_dec_ref(v_extra_579_);
v_res_582_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1_spec__1(v_await_boxed_580_, v_extra_boxed_581_);
v_r_583_ = lean_box_uint64(v_res_582_);
return v_r_583_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1_spec__2(lean_object* v_context_584_, lean_object* v_bytes_585_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_585_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_589_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
lean_dec_ref_known(v___x_587_, 1);
v___x_589_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4(v_context_584_, v_a_588_);
return v___x_589_;
}
else
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
v_a_590_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_587_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_587_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1_spec__2___boxed(lean_object* v_context_598_, lean_object* v_bytes_599_, lean_object* v_a_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1_spec__2(v_context_598_, v_bytes_599_);
lean_dec_ref(v_bytes_599_);
lean_dec_ref(v_context_598_);
return v_res_601_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__0(void){
_start:
{
uint64_t v___x_602_; uint8_t v___x_603_; uint64_t v___x_604_; 
v___x_602_ = 8ULL;
v___x_603_ = 0;
v___x_604_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1_spec__1(v___x_603_, v___x_602_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1(lean_object* v_o_606_, lean_object* v_name_607_, lean_object* v_args_608_){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; uint64_t v___x_613_; lean_object* v___x_614_; 
v___x_610_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_611_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_611_, 0, v_o_606_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
lean_inc_ref(v_name_607_);
v___x_612_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_612_, 0, v_name_607_);
v___x_613_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__0);
v___x_614_ = l_Lasm_JS_Value_invokeRaw(v___x_611_, v___x_612_, v_args_608_, v___x_613_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_a_615_);
lean_dec_ref_known(v___x_614_, 1);
v___x_616_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__1));
v___x_617_ = lean_string_append(v___x_616_, v_name_607_);
lean_dec_ref(v_name_607_);
v___x_618_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1_spec__2(v___x_617_, v_a_615_);
lean_dec(v_a_615_);
lean_dec_ref(v___x_617_);
return v___x_618_;
}
else
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_626_; 
lean_dec_ref(v_name_607_);
v_a_619_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_626_ == 0)
{
v___x_621_ = v___x_614_;
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_614_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_624_; 
if (v_isShared_622_ == 0)
{
v___x_624_ = v___x_621_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_619_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___boxed(lean_object* v_o_627_, lean_object* v_name_628_, lean_object* v_args_629_, lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1(v_o_627_, v_name_628_, v_args_629_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_slice(lean_object* v_self_633_, lean_object* v_start_634_, lean_object* v_end_635_, lean_object* v_contentType_636_){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_638_ = ((lean_object*)(l_Lasm_JS_Web_Blob_slice___closed__0));
v___x_639_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_start_634_);
v___x_640_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_end_635_);
v___x_641_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_contentType_636_);
v___x_642_ = lean_unsigned_to_nat(3u);
v___x_643_ = lean_mk_empty_array_with_capacity(v___x_642_);
v___x_644_ = lean_array_push(v___x_643_, v___x_639_);
v___x_645_ = lean_array_push(v___x_644_, v___x_640_);
v___x_646_ = lean_array_push(v___x_645_, v___x_641_);
v___x_647_ = l_Lasm_JS_Web_Support_args(v___x_646_);
v___x_648_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1(v_self_633_, v___x_638_, v___x_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_slice___boxed(lean_object* v_self_649_, lean_object* v_start_650_, lean_object* v_end_651_, lean_object* v_contentType_652_, lean_object* v_a_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lasm_JS_Web_Blob_slice(v_self_649_, v_start_650_, v_end_651_, v_contentType_652_);
return v_res_654_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Blob_stream___closed__2(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_658_ = ((lean_object*)(l_Lasm_JS_Web_Blob_stream___closed__1));
v___x_659_ = l_Lasm_JS_Web_Support_args(v___x_658_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_stream(lean_object* v_self_660_){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_662_ = ((lean_object*)(l_Lasm_JS_Web_Blob_stream___closed__0));
v___x_663_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_664_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1(v_self_660_, v___x_662_, v___x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_stream___boxed(lean_object* v_self_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Lasm_JS_Web_Blob_stream(v_self_665_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3(lean_object* v_a_668_, lean_object* v_x_669_){
_start:
{
if (lean_obj_tag(v_x_669_) == 0)
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_679_; 
v_a_671_ = lean_ctor_get(v_x_669_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v_x_669_);
if (v_isSharedCheck_679_ == 0)
{
v___x_673_ = v_x_669_;
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v_x_669_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_678_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
lean_object* v___x_677_; 
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
return v___x_677_;
}
}
}
else
{
lean_object* v___x_680_; 
lean_dec_ref_known(v_x_669_, 1);
v___x_680_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_668_);
return v___x_680_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed(lean_object* v_a_681_, lean_object* v_x_682_, lean_object* v___y_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3(v_a_681_, v_x_682_);
lean_dec(v_a_681_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7(lean_object* v___f_685_, lean_object* v_a_686_, uint32_t v_op_687_, uint64_t v_flags_688_, lean_object* v_payload_689_, lean_object* v_x_690_){
_start:
{
if (lean_obj_tag(v_x_690_) == 0)
{
lean_object* v___x_692_; 
lean_dec_ref(v___f_685_);
v___x_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_692_, 0, v_x_690_);
return v___x_692_;
}
else
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_713_; 
v_a_693_ = lean_ctor_get(v_x_690_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v_x_690_);
if (v_isSharedCheck_713_ == 0)
{
v___x_695_ = v_x_690_;
v_isShared_696_ = v_isSharedCheck_713_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v_x_690_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_713_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
uint32_t v___x_697_; lean_object* v___x_698_; uint8_t v___x_699_; lean_object* v_val_701_; lean_object* v___x_704_; 
v___x_697_ = 0;
v___x_698_ = lean_unsigned_to_nat(0u);
v___x_699_ = 0;
v___x_704_ = lasm_js_call_into(v_a_686_, v_op_687_, v___x_697_, v_flags_688_, v_a_693_, v_payload_689_);
lean_dec(v_a_693_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; lean_object* v___x_707_; 
v_a_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_a_705_);
lean_dec_ref_known(v___x_704_, 1);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 0, v_a_705_);
v___x_707_ = v___x_695_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_a_705_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
v_val_701_ = v___x_707_;
goto v___jp_700_;
}
}
else
{
lean_object* v_a_709_; lean_object* v___x_711_; 
v_a_709_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_a_709_);
lean_dec_ref_known(v___x_704_, 1);
if (v_isShared_696_ == 0)
{
lean_ctor_set_tag(v___x_695_, 0);
lean_ctor_set(v___x_695_, 0, v_a_709_);
v___x_711_ = v___x_695_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v_a_709_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
v_val_701_ = v___x_711_;
goto v___jp_700_;
}
}
v___jp_700_:
{
lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_702_, 0, v_val_701_);
v___x_703_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_698_, v___x_699_, v___x_702_, v___f_685_);
return v___x_703_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed(lean_object* v___f_714_, lean_object* v_a_715_, lean_object* v_op_716_, lean_object* v_flags_717_, lean_object* v_payload_718_, lean_object* v_x_719_, lean_object* v___y_720_){
_start:
{
uint32_t v_op_boxed_721_; uint64_t v_flags_boxed_722_; lean_object* v_res_723_; 
v_op_boxed_721_ = lean_unbox_uint32(v_op_716_);
lean_dec(v_op_716_);
v_flags_boxed_722_ = lean_unbox_uint64(v_flags_717_);
lean_dec_ref(v_flags_717_);
v_res_723_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7(v___f_714_, v_a_715_, v_op_boxed_721_, v_flags_boxed_722_, v_payload_718_, v_x_719_);
lean_dec(v_payload_718_);
lean_dec(v_a_715_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5(lean_object* v___x_724_, uint8_t v___x_725_, lean_object* v___f_726_, lean_object* v_a_727_, uint32_t v_op_728_, uint64_t v_flags_729_, lean_object* v_payload_730_, lean_object* v_x_731_){
_start:
{
lean_object* v_val_734_; 
if (lean_obj_tag(v_x_731_) == 0)
{
lean_object* v___x_737_; 
lean_dec_ref(v___f_726_);
lean_dec(v___x_724_);
v___x_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_737_, 0, v_x_731_);
return v___x_737_;
}
else
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_752_; 
v_a_738_ = lean_ctor_get(v_x_731_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v_x_731_);
if (v_isSharedCheck_752_ == 0)
{
v___x_740_ = v_x_731_;
v_isShared_741_ = v_isSharedCheck_752_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v_x_731_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_752_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
uint32_t v___x_742_; lean_object* v___x_743_; 
v___x_742_ = 0;
v___x_743_ = lasm_js_call_into(v_a_727_, v_op_728_, v___x_742_, v_flags_729_, v_a_738_, v_payload_730_);
lean_dec(v_a_738_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v___x_746_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_743_, 1);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 0, v_a_744_);
v___x_746_ = v___x_740_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_a_744_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
v_val_734_ = v___x_746_;
goto v___jp_733_;
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; 
v_a_748_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_748_);
lean_dec_ref_known(v___x_743_, 1);
if (v_isShared_741_ == 0)
{
lean_ctor_set_tag(v___x_740_, 0);
lean_ctor_set(v___x_740_, 0, v_a_748_);
v___x_750_ = v___x_740_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_748_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
v_val_734_ = v___x_750_;
goto v___jp_733_;
}
}
}
}
v___jp_733_:
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_735_, 0, v_val_734_);
v___x_736_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_724_, v___x_725_, v___x_735_, v___f_726_);
return v___x_736_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed(lean_object* v___x_753_, lean_object* v___x_754_, lean_object* v___f_755_, lean_object* v_a_756_, lean_object* v_op_757_, lean_object* v_flags_758_, lean_object* v_payload_759_, lean_object* v_x_760_, lean_object* v___y_761_){
_start:
{
uint8_t v___x_827__boxed_762_; uint32_t v_op_boxed_763_; uint64_t v_flags_boxed_764_; lean_object* v_res_765_; 
v___x_827__boxed_762_ = lean_unbox(v___x_754_);
v_op_boxed_763_ = lean_unbox_uint32(v_op_757_);
lean_dec(v_op_757_);
v_flags_boxed_764_ = lean_unbox_uint64(v_flags_758_);
lean_dec_ref(v_flags_758_);
v_res_765_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5(v___x_753_, v___x_827__boxed_762_, v___f_755_, v_a_756_, v_op_boxed_763_, v_flags_boxed_764_, v_payload_759_, v_x_760_);
lean_dec(v_payload_759_);
lean_dec(v_a_756_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_766_, uint32_t v_op_767_, uint64_t v_flags_768_, lean_object* v_payload_769_, lean_object* v___f_770_, lean_object* v___f_771_, lean_object* v___f_772_, lean_object* v_x_773_){
_start:
{
if (lean_obj_tag(v_x_773_) == 0)
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_783_; 
lean_dec_ref(v___f_772_);
lean_dec_ref(v___f_771_);
lean_dec_ref(v___f_770_);
lean_dec(v_payload_769_);
v_a_775_ = lean_ctor_get(v_x_773_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v_x_773_);
if (v_isSharedCheck_783_ == 0)
{
v___x_777_ = v_x_773_;
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v_x_773_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_782_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
lean_object* v___x_781_; 
v___x_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
return v___x_781_;
}
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_830_; 
v_a_784_ = lean_ctor_get(v_x_773_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v_x_773_);
if (v_isSharedCheck_830_ == 0)
{
v___x_786_ = v_x_773_;
v_isShared_787_ = v_isSharedCheck_830_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v_x_773_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_830_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; lean_object* v___x_789_; uint8_t v___x_790_; 
v___x_788_ = lean_string_utf8_byte_size(v_failurePrefix_766_);
v___x_789_ = lean_unsigned_to_nat(0u);
v___x_790_ = lean_nat_dec_eq(v___x_788_, v___x_789_);
if (v___x_790_ == 0)
{
lean_object* v___f_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___f_795_; lean_object* v_val_797_; lean_object* v___x_802_; 
lean_dec_ref(v___f_772_);
lean_inc(v_a_784_);
v___f_791_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_791_, 0, v_a_784_);
v___x_792_ = lean_box(v___x_790_);
v___x_793_ = lean_box_uint32(v_op_767_);
v___x_794_ = lean_box_uint64(v_flags_768_);
lean_inc(v_payload_769_);
v___f_795_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_795_, 0, v___x_789_);
lean_closure_set(v___f_795_, 1, v___x_792_);
lean_closure_set(v___f_795_, 2, v___f_791_);
lean_closure_set(v___f_795_, 3, v_a_784_);
lean_closure_set(v___f_795_, 4, v___x_793_);
lean_closure_set(v___f_795_, 5, v___x_794_);
lean_closure_set(v___f_795_, 6, v_payload_769_);
v___x_802_ = l_Lasm_JS_Wire_encodeIO(v_payload_769_);
lean_dec(v_payload_769_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v_a_803_; lean_object* v___x_805_; 
v_a_803_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_a_803_);
lean_dec_ref_known(v___x_802_, 1);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 0, v_a_803_);
v___x_805_ = v___x_786_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_803_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
v_val_797_ = v___x_805_;
goto v___jp_796_;
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; 
v_a_807_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_a_807_);
lean_dec_ref_known(v___x_802_, 1);
if (v_isShared_787_ == 0)
{
lean_ctor_set_tag(v___x_786_, 0);
lean_ctor_set(v___x_786_, 0, v_a_807_);
v___x_809_ = v___x_786_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_807_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
v_val_797_ = v___x_809_;
goto v___jp_796_;
}
}
v___jp_796_:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_798_, 0, v_val_797_);
v___x_799_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_789_, v___x_790_, v___x_798_, v___f_795_);
v___x_800_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_789_, v___x_790_, v___x_799_, v___f_770_);
v___x_801_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_789_, v___x_790_, v___x_800_, v___f_771_);
return v___x_801_;
}
}
else
{
lean_object* v___f_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___f_814_; uint8_t v___x_815_; lean_object* v_val_817_; lean_object* v___x_821_; 
lean_dec_ref(v___f_771_);
lean_dec_ref(v___f_770_);
lean_inc(v_a_784_);
v___f_811_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_811_, 0, v_a_784_);
v___x_812_ = lean_box_uint32(v_op_767_);
v___x_813_ = lean_box_uint64(v_flags_768_);
lean_inc(v_payload_769_);
v___f_814_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_814_, 0, v___f_811_);
lean_closure_set(v___f_814_, 1, v_a_784_);
lean_closure_set(v___f_814_, 2, v___x_812_);
lean_closure_set(v___f_814_, 3, v___x_813_);
lean_closure_set(v___f_814_, 4, v_payload_769_);
v___x_815_ = 0;
v___x_821_ = l_Lasm_JS_Wire_encodeIO(v_payload_769_);
lean_dec(v_payload_769_);
if (lean_obj_tag(v___x_821_) == 0)
{
lean_object* v_a_822_; lean_object* v___x_824_; 
v_a_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc(v_a_822_);
lean_dec_ref_known(v___x_821_, 1);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 0, v_a_822_);
v___x_824_ = v___x_786_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_822_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
v_val_817_ = v___x_824_;
goto v___jp_816_;
}
}
else
{
lean_object* v_a_826_; lean_object* v___x_828_; 
v_a_826_ = lean_ctor_get(v___x_821_, 0);
lean_inc(v_a_826_);
lean_dec_ref_known(v___x_821_, 1);
if (v_isShared_787_ == 0)
{
lean_ctor_set_tag(v___x_786_, 0);
lean_ctor_set(v___x_786_, 0, v_a_826_);
v___x_828_ = v___x_786_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_826_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
v_val_817_ = v___x_828_;
goto v___jp_816_;
}
}
v___jp_816_:
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_818_, 0, v_val_817_);
v___x_819_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_789_, v___x_815_, v___x_818_, v___f_814_);
v___x_820_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_789_, v___x_815_, v___x_819_, v___f_772_);
return v___x_820_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_831_, lean_object* v_op_832_, lean_object* v_flags_833_, lean_object* v_payload_834_, lean_object* v___f_835_, lean_object* v___f_836_, lean_object* v___f_837_, lean_object* v_x_838_, lean_object* v___y_839_){
_start:
{
uint32_t v_op_boxed_840_; uint64_t v_flags_boxed_841_; lean_object* v_res_842_; 
v_op_boxed_840_ = lean_unbox_uint32(v_op_832_);
lean_dec(v_op_832_);
v_flags_boxed_841_ = lean_unbox_uint64(v_flags_833_);
lean_dec_ref(v_flags_833_);
v_res_842_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6(v_failurePrefix_831_, v_op_boxed_840_, v_flags_boxed_841_, v_payload_834_, v___f_835_, v___f_836_, v___f_837_, v_x_838_);
lean_dec_ref(v_failurePrefix_831_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2(lean_object* v___f_843_, lean_object* v_x_844_){
_start:
{
if (lean_obj_tag(v_x_844_) == 0)
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_854_; 
lean_dec_ref(v___f_843_);
v_a_846_ = lean_ctor_get(v_x_844_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v_x_844_);
if (v_isSharedCheck_854_ == 0)
{
v___x_848_ = v_x_844_;
v_isShared_849_ = v_isSharedCheck_854_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v_x_844_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_854_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_853_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
lean_object* v___x_852_; 
v___x_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_852_, 0, v___x_851_);
return v___x_852_;
}
}
}
else
{
lean_object* v_a_855_; lean_object* v___x_856_; 
v_a_855_ = lean_ctor_get(v_x_844_, 0);
lean_inc(v_a_855_);
lean_dec_ref_known(v_x_844_, 1);
v___x_856_ = lean_apply_2(v___f_843_, v_a_855_, lean_box(0));
return v___x_856_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2___boxed(lean_object* v___f_857_, lean_object* v_x_858_, lean_object* v___y_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2(v___f_857_, v_x_858_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1(lean_object* v___f_861_, lean_object* v_bytes_862_){
_start:
{
lean_object* v___x_864_; uint8_t v___x_865_; lean_object* v_val_867_; lean_object* v___x_870_; 
v___x_864_ = lean_unsigned_to_nat(0u);
v___x_865_ = 0;
v___x_870_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_862_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
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
lean_ctor_set_tag(v___x_873_, 1);
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
v_val_867_ = v___x_876_;
goto v___jp_866_;
}
}
}
else
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
v_a_879_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_886_ == 0)
{
v___x_881_ = v___x_870_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_870_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
lean_ctor_set_tag(v___x_881_, 0);
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_879_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
v_val_867_ = v___x_884_;
goto v___jp_866_;
}
}
}
v___jp_866_:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_868_, 0, v_val_867_);
v___x_869_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_864_, v___x_865_, v___x_868_, v___f_861_);
return v___x_869_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1___boxed(lean_object* v___f_887_, lean_object* v_bytes_888_, lean_object* v___y_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1(v___f_887_, v_bytes_888_);
lean_dec_ref(v_bytes_888_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_891_, lean_object* v_x_892_){
_start:
{
if (lean_obj_tag(v_x_892_) == 0)
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_905_; 
v_a_894_ = lean_ctor_get(v_x_892_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v_x_892_);
if (v_isSharedCheck_905_ == 0)
{
v___x_896_ = v_x_892_;
v_isShared_897_ = v_isSharedCheck_905_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v_x_892_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_905_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_902_; 
v___x_898_ = lean_io_error_to_string(v_a_894_);
v___x_899_ = lean_string_append(v_failurePrefix_891_, v___x_898_);
lean_dec_ref(v___x_898_);
v___x_900_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
if (v_isShared_897_ == 0)
{
lean_ctor_set(v___x_896_, 0, v___x_900_);
v___x_902_ = v___x_896_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_900_);
v___x_902_ = v_reuseFailAlloc_904_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
lean_object* v___x_903_; 
v___x_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
return v___x_903_;
}
}
}
else
{
lean_object* v___x_906_; 
lean_dec_ref(v_failurePrefix_891_);
v___x_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_906_, 0, v_x_892_);
return v___x_906_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_907_, lean_object* v_x_908_, lean_object* v___y_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4(v_failurePrefix_907_, v_x_908_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8(lean_object* v___f_911_, lean_object* v_x_912_){
_start:
{
if (lean_obj_tag(v_x_912_) == 0)
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_922_; 
lean_dec_ref(v___f_911_);
v_a_914_ = lean_ctor_get(v_x_912_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v_x_912_);
if (v_isSharedCheck_922_ == 0)
{
v___x_916_ = v_x_912_;
v_isShared_917_ = v_isSharedCheck_922_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v_x_912_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_922_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_921_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
lean_object* v___x_920_; 
v___x_920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
return v___x_920_;
}
}
}
else
{
lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_934_; 
v_isSharedCheck_934_ = !lean_is_exclusive(v_x_912_);
if (v_isSharedCheck_934_ == 0)
{
lean_object* v_unused_935_; 
v_unused_935_ = lean_ctor_get(v_x_912_, 0);
lean_dec(v_unused_935_);
v___x_924_ = v_x_912_;
v_isShared_925_ = v_isSharedCheck_934_;
goto v_resetjp_923_;
}
else
{
lean_dec(v_x_912_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_934_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; uint8_t v___x_927_; lean_object* v___x_928_; lean_object* v___x_930_; 
v___x_926_ = lean_unsigned_to_nat(0u);
v___x_927_ = 0;
v___x_928_ = lean_io_promise_new();
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 0, v___x_928_);
v___x_930_ = v___x_924_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_928_);
v___x_930_ = v_reuseFailAlloc_933_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
v___x_932_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_926_, v___x_927_, v___x_931_, v___f_911_);
return v___x_932_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8___boxed(lean_object* v___f_936_, lean_object* v_x_937_, lean_object* v___y_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8(v___f_936_, v_x_937_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0(lean_object* v_context_940_, lean_object* v_x_941_){
_start:
{
lean_object* v_val_944_; 
if (lean_obj_tag(v_x_941_) == 0)
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_954_; 
v_a_946_ = lean_ctor_get(v_x_941_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v_x_941_);
if (v_isSharedCheck_954_ == 0)
{
v___x_948_ = v_x_941_;
v_isShared_949_ = v_isSharedCheck_954_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v_x_941_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_954_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_953_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_952_; 
v___x_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_952_, 0, v___x_951_);
return v___x_952_;
}
}
}
else
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_968_; 
v_a_955_ = lean_ctor_get(v_x_941_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v_x_941_);
if (v_isSharedCheck_968_ == 0)
{
v___x_957_ = v_x_941_;
v_isShared_958_ = v_isSharedCheck_968_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v_x_941_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_968_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_959_; 
v___x_959_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v_context_940_, v_a_955_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_962_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_a_960_);
lean_dec_ref_known(v___x_959_, 1);
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 0, v_a_960_);
v___x_962_ = v___x_957_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_a_960_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
v_val_944_ = v___x_962_;
goto v___jp_943_;
}
}
else
{
lean_object* v_a_964_; lean_object* v___x_966_; 
v_a_964_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_a_964_);
lean_dec_ref_known(v___x_959_, 1);
if (v_isShared_958_ == 0)
{
lean_ctor_set_tag(v___x_957_, 0);
lean_ctor_set(v___x_957_, 0, v_a_964_);
v___x_966_ = v___x_957_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_964_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
v_val_944_ = v___x_966_;
goto v___jp_943_;
}
}
}
}
v___jp_943_:
{
lean_object* v___x_945_; 
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v_val_944_);
return v___x_945_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0___boxed(lean_object* v_context_969_, lean_object* v_x_970_, lean_object* v___y_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0(v_context_969_, v_x_970_);
lean_dec_ref(v_context_969_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(lean_object* v_context_973_, uint32_t v_op_974_, uint64_t v_flags_975_, lean_object* v_payload_976_, lean_object* v_failurePrefix_977_){
_start:
{
lean_object* v___f_979_; lean_object* v___f_980_; lean_object* v___f_981_; lean_object* v___f_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___f_985_; lean_object* v___f_986_; lean_object* v___x_987_; uint8_t v___x_988_; lean_object* v_val_990_; lean_object* v___x_993_; 
v___f_979_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_979_, 0, v_context_973_);
v___f_980_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_980_, 0, v___f_979_);
v___f_981_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_981_, 0, v___f_980_);
lean_inc_ref(v_failurePrefix_977_);
v___f_982_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_982_, 0, v_failurePrefix_977_);
v___x_983_ = lean_box_uint32(v_op_974_);
v___x_984_ = lean_box_uint64(v_flags_975_);
lean_inc_ref(v___f_981_);
v___f_985_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_985_, 0, v_failurePrefix_977_);
lean_closure_set(v___f_985_, 1, v___x_983_);
lean_closure_set(v___f_985_, 2, v___x_984_);
lean_closure_set(v___f_985_, 3, v_payload_976_);
lean_closure_set(v___f_985_, 4, v___f_982_);
lean_closure_set(v___f_985_, 5, v___f_981_);
lean_closure_set(v___f_985_, 6, v___f_981_);
v___f_986_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_986_, 0, v___f_985_);
v___x_987_ = lean_unsigned_to_nat(0u);
v___x_988_ = 0;
v___x_993_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_993_) == 0)
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
v_a_994_ = lean_ctor_get(v___x_993_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_993_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_993_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_993_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
lean_ctor_set_tag(v___x_996_, 1);
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_994_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
v_val_990_ = v___x_999_;
goto v___jp_989_;
}
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
v_a_1002_ = lean_ctor_get(v___x_993_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_993_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_993_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_993_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1007_; 
if (v_isShared_1005_ == 0)
{
lean_ctor_set_tag(v___x_1004_, 0);
v___x_1007_ = v___x_1004_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_a_1002_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
v_val_990_ = v___x_1007_;
goto v___jp_989_;
}
}
}
v___jp_989_:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_991_, 0, v_val_990_);
v___x_992_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_987_, v___x_988_, v___x_991_, v___f_986_);
return v___x_992_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___boxed(lean_object* v_context_1010_, lean_object* v_op_1011_, lean_object* v_flags_1012_, lean_object* v_payload_1013_, lean_object* v_failurePrefix_1014_, lean_object* v_a_1015_){
_start:
{
uint32_t v_op_boxed_1016_; uint64_t v_flags_boxed_1017_; lean_object* v_res_1018_; 
v_op_boxed_1016_ = lean_unbox_uint32(v_op_1011_);
lean_dec(v_op_1011_);
v_flags_boxed_1017_ = lean_unbox_uint64(v_flags_1012_);
lean_dec_ref(v_flags_1012_);
v_res_1018_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v_context_1010_, v_op_boxed_1016_, v_flags_boxed_1017_, v_payload_1013_, v_failurePrefix_1014_);
return v_res_1018_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(uint8_t v_await_1019_, uint64_t v_extra_1020_){
_start:
{
uint64_t v___x_1021_; uint64_t v___y_1023_; 
v___x_1021_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_1019_ == 0)
{
uint64_t v___x_1026_; 
v___x_1026_ = 0ULL;
v___y_1023_ = v___x_1026_;
goto v___jp_1022_;
}
else
{
uint64_t v___x_1027_; 
v___x_1027_ = 2ULL;
v___y_1023_ = v___x_1027_;
goto v___jp_1022_;
}
v___jp_1022_:
{
uint64_t v___x_1024_; uint64_t v___x_1025_; 
v___x_1024_ = lean_uint64_lor(v___x_1021_, v___y_1023_);
v___x_1025_ = lean_uint64_lor(v___x_1024_, v_extra_1020_);
return v___x_1025_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0___boxed(lean_object* v_await_1028_, lean_object* v_extra_1029_){
_start:
{
uint8_t v_await_boxed_1030_; uint64_t v_extra_boxed_1031_; uint64_t v_res_1032_; lean_object* v_r_1033_; 
v_await_boxed_1030_ = lean_unbox(v_await_1028_);
v_extra_boxed_1031_ = lean_unbox_uint64(v_extra_1029_);
lean_dec_ref(v_extra_1029_);
v_res_1032_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(v_await_boxed_1030_, v_extra_boxed_1031_);
v_r_1033_ = lean_box_uint64(v_res_1032_);
return v_r_1033_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1034_; uint8_t v___x_1035_; uint64_t v___x_1036_; 
v___x_1034_ = 8ULL;
v___x_1035_ = 0;
v___x_1036_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(v___x_1035_, v___x_1034_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(lean_object* v_o_1037_, lean_object* v_name_1038_, lean_object* v_args_1039_){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; uint32_t v___x_1046_; uint64_t v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1041_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1042_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1042_, 0, v_o_1037_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
lean_inc_ref(v_name_1038_);
v___x_1043_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1043_, 0, v_name_1038_);
v___x_1044_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__1));
v___x_1045_ = lean_string_append(v___x_1044_, v_name_1038_);
lean_dec_ref(v_name_1038_);
v___x_1046_ = 205;
v___x_1047_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0);
v___x_1048_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1048_, 0, v_args_1039_);
v___x_1049_ = lean_unsigned_to_nat(3u);
v___x_1050_ = lean_mk_empty_array_with_capacity(v___x_1049_);
v___x_1051_ = lean_array_push(v___x_1050_, v___x_1042_);
v___x_1052_ = lean_array_push(v___x_1051_, v___x_1043_);
v___x_1053_ = lean_array_push(v___x_1052_, v___x_1048_);
v___x_1054_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
v___x_1055_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v___x_1045_, v___x_1046_, v___x_1047_, v___x_1054_, v___x_1041_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___boxed(lean_object* v_o_1056_, lean_object* v_name_1057_, lean_object* v_args_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_o_1056_, v_name_1057_, v_args_1058_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_text(lean_object* v_self_1062_){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1064_ = ((lean_object*)(l_Lasm_JS_Web_Blob_text___closed__0));
v___x_1065_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1066_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_1062_, v___x_1064_, v___x_1065_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_text___boxed(lean_object* v_self_1067_, lean_object* v_a_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lasm_JS_Web_Blob_text(v_self_1067_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___lam__0(lean_object* v_x_1070_){
_start:
{
lean_object* v_val_1073_; 
if (lean_obj_tag(v_x_1070_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1083_; 
v_a_1075_ = lean_ctor_get(v_x_1070_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v_x_1070_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1077_ = v_x_1070_;
v_isShared_1078_ = v_isSharedCheck_1083_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v_x_1070_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1083_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
if (v_isShared_1078_ == 0)
{
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_a_1075_);
v___x_1080_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1081_; 
v___x_1081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
return v___x_1081_;
}
}
}
else
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1097_; 
v_a_1084_ = lean_ctor_get(v_x_1070_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_x_1070_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1086_ = v_x_1070_;
v_isShared_1087_ = v_isSharedCheck_1097_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v_x_1070_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1097_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1088_; 
v___x_1088_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_1084_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1091_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1089_);
lean_dec_ref_known(v___x_1088_, 1);
if (v_isShared_1087_ == 0)
{
lean_ctor_set(v___x_1086_, 0, v_a_1089_);
v___x_1091_ = v___x_1086_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_a_1089_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
v_val_1073_ = v___x_1091_;
goto v___jp_1072_;
}
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; 
v_a_1093_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1088_, 1);
if (v_isShared_1087_ == 0)
{
lean_ctor_set_tag(v___x_1086_, 0);
lean_ctor_set(v___x_1086_, 0, v_a_1093_);
v___x_1095_ = v___x_1086_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1093_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
v_val_1073_ = v___x_1095_;
goto v___jp_1072_;
}
}
}
}
v___jp_1072_:
{
lean_object* v___x_1074_; 
v___x_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1074_, 0, v_val_1073_);
return v___x_1074_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___lam__0___boxed(lean_object* v_x_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Lasm_JS_Web_Blob_arrayBuffer___lam__0(v_x_1098_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2(lean_object* v___f_1101_, lean_object* v_x_1102_){
_start:
{
if (lean_obj_tag(v_x_1102_) == 0)
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1112_; 
lean_dec_ref(v___f_1101_);
v_a_1104_ = lean_ctor_get(v_x_1102_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v_x_1102_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1106_ = v_x_1102_;
v_isShared_1107_ = v_isSharedCheck_1112_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v_x_1102_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1112_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1104_);
v___x_1109_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
lean_object* v___x_1110_; 
v___x_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
return v___x_1110_;
}
}
}
else
{
lean_object* v_a_1113_; lean_object* v___x_1114_; 
v_a_1113_ = lean_ctor_get(v_x_1102_, 0);
lean_inc(v_a_1113_);
lean_dec_ref_known(v_x_1102_, 1);
v___x_1114_ = lean_apply_2(v___f_1101_, v_a_1113_, lean_box(0));
return v___x_1114_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2___boxed(lean_object* v___f_1115_, lean_object* v_x_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2(v___f_1115_, v_x_1116_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1(lean_object* v___f_1119_, lean_object* v_bytes_1120_){
_start:
{
lean_object* v___x_1122_; uint8_t v___x_1123_; lean_object* v_val_1125_; lean_object* v___x_1128_; 
v___x_1122_ = lean_unsigned_to_nat(0u);
v___x_1123_ = 0;
v___x_1128_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1120_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
v_a_1129_ = lean_ctor_get(v___x_1128_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1128_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1128_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1128_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
lean_ctor_set_tag(v___x_1131_, 1);
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
v_val_1125_ = v___x_1134_;
goto v___jp_1124_;
}
}
}
else
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1144_; 
v_a_1137_ = lean_ctor_get(v___x_1128_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1128_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1139_ = v___x_1128_;
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1128_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
lean_ctor_set_tag(v___x_1139_, 0);
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_a_1137_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
v_val_1125_ = v___x_1142_;
goto v___jp_1124_;
}
}
}
v___jp_1124_:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1126_, 0, v_val_1125_);
v___x_1127_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1122_, v___x_1123_, v___x_1126_, v___f_1119_);
return v___x_1127_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1___boxed(lean_object* v___f_1145_, lean_object* v_bytes_1146_, lean_object* v___y_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1(v___f_1145_, v_bytes_1146_);
lean_dec_ref(v_bytes_1146_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9(lean_object* v_failurePrefix_1149_, uint32_t v_op_1150_, uint64_t v_flags_1151_, lean_object* v_payload_1152_, lean_object* v___f_1153_, lean_object* v___f_1154_, lean_object* v___f_1155_, lean_object* v_x_1156_){
_start:
{
if (lean_obj_tag(v_x_1156_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1166_; 
lean_dec_ref(v___f_1155_);
lean_dec_ref(v___f_1154_);
lean_dec_ref(v___f_1153_);
lean_dec(v_payload_1152_);
v_a_1158_ = lean_ctor_get(v_x_1156_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_x_1156_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1160_ = v_x_1156_;
v_isShared_1161_ = v_isSharedCheck_1166_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v_x_1156_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1166_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1164_; 
v___x_1164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
return v___x_1164_;
}
}
}
else
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1213_; 
v_a_1167_ = lean_ctor_get(v_x_1156_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v_x_1156_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1169_ = v_x_1156_;
v_isShared_1170_ = v_isSharedCheck_1213_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v_x_1156_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1213_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; 
v___x_1171_ = lean_string_utf8_byte_size(v_failurePrefix_1149_);
v___x_1172_ = lean_unsigned_to_nat(0u);
v___x_1173_ = lean_nat_dec_eq(v___x_1171_, v___x_1172_);
if (v___x_1173_ == 0)
{
lean_object* v___f_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___f_1178_; lean_object* v_val_1180_; lean_object* v___x_1185_; 
lean_dec_ref(v___f_1155_);
lean_inc(v_a_1167_);
v___f_1174_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1174_, 0, v_a_1167_);
v___x_1175_ = lean_box(v___x_1173_);
v___x_1176_ = lean_box_uint32(v_op_1150_);
v___x_1177_ = lean_box_uint64(v_flags_1151_);
lean_inc(v_payload_1152_);
v___f_1178_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1178_, 0, v___x_1172_);
lean_closure_set(v___f_1178_, 1, v___x_1175_);
lean_closure_set(v___f_1178_, 2, v___f_1174_);
lean_closure_set(v___f_1178_, 3, v_a_1167_);
lean_closure_set(v___f_1178_, 4, v___x_1176_);
lean_closure_set(v___f_1178_, 5, v___x_1177_);
lean_closure_set(v___f_1178_, 6, v_payload_1152_);
v___x_1185_ = l_Lasm_JS_Wire_encodeIO(v_payload_1152_);
lean_dec(v_payload_1152_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_object* v_a_1186_; lean_object* v___x_1188_; 
v_a_1186_ = lean_ctor_get(v___x_1185_, 0);
lean_inc(v_a_1186_);
lean_dec_ref_known(v___x_1185_, 1);
if (v_isShared_1170_ == 0)
{
lean_ctor_set(v___x_1169_, 0, v_a_1186_);
v___x_1188_ = v___x_1169_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1186_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
v_val_1180_ = v___x_1188_;
goto v___jp_1179_;
}
}
else
{
lean_object* v_a_1190_; lean_object* v___x_1192_; 
v_a_1190_ = lean_ctor_get(v___x_1185_, 0);
lean_inc(v_a_1190_);
lean_dec_ref_known(v___x_1185_, 1);
if (v_isShared_1170_ == 0)
{
lean_ctor_set_tag(v___x_1169_, 0);
lean_ctor_set(v___x_1169_, 0, v_a_1190_);
v___x_1192_ = v___x_1169_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_a_1190_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
v_val_1180_ = v___x_1192_;
goto v___jp_1179_;
}
}
v___jp_1179_:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1181_, 0, v_val_1180_);
v___x_1182_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1172_, v___x_1173_, v___x_1181_, v___f_1178_);
v___x_1183_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1172_, v___x_1173_, v___x_1182_, v___f_1153_);
v___x_1184_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1172_, v___x_1173_, v___x_1183_, v___f_1154_);
return v___x_1184_;
}
}
else
{
lean_object* v___f_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___f_1197_; uint8_t v___x_1198_; lean_object* v_val_1200_; lean_object* v___x_1204_; 
lean_dec_ref(v___f_1154_);
lean_dec_ref(v___f_1153_);
lean_inc(v_a_1167_);
v___f_1194_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1194_, 0, v_a_1167_);
v___x_1195_ = lean_box_uint32(v_op_1150_);
v___x_1196_ = lean_box_uint64(v_flags_1151_);
lean_inc(v_payload_1152_);
v___f_1197_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1197_, 0, v___f_1194_);
lean_closure_set(v___f_1197_, 1, v_a_1167_);
lean_closure_set(v___f_1197_, 2, v___x_1195_);
lean_closure_set(v___f_1197_, 3, v___x_1196_);
lean_closure_set(v___f_1197_, 4, v_payload_1152_);
v___x_1198_ = 0;
v___x_1204_ = l_Lasm_JS_Wire_encodeIO(v_payload_1152_);
lean_dec(v_payload_1152_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1204_, 1);
if (v_isShared_1170_ == 0)
{
lean_ctor_set(v___x_1169_, 0, v_a_1205_);
v___x_1207_ = v___x_1169_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1205_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
v_val_1200_ = v___x_1207_;
goto v___jp_1199_;
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; 
v_a_1209_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1209_);
lean_dec_ref_known(v___x_1204_, 1);
if (v_isShared_1170_ == 0)
{
lean_ctor_set_tag(v___x_1169_, 0);
lean_ctor_set(v___x_1169_, 0, v_a_1209_);
v___x_1211_ = v___x_1169_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_a_1209_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
v_val_1200_ = v___x_1211_;
goto v___jp_1199_;
}
}
v___jp_1199_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1201_, 0, v_val_1200_);
v___x_1202_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1172_, v___x_1198_, v___x_1201_, v___f_1197_);
v___x_1203_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1172_, v___x_1198_, v___x_1202_, v___f_1155_);
return v___x_1203_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9___boxed(lean_object* v_failurePrefix_1214_, lean_object* v_op_1215_, lean_object* v_flags_1216_, lean_object* v_payload_1217_, lean_object* v___f_1218_, lean_object* v___f_1219_, lean_object* v___f_1220_, lean_object* v_x_1221_, lean_object* v___y_1222_){
_start:
{
uint32_t v_op_boxed_1223_; uint64_t v_flags_boxed_1224_; lean_object* v_res_1225_; 
v_op_boxed_1223_ = lean_unbox_uint32(v_op_1215_);
lean_dec(v_op_1215_);
v_flags_boxed_1224_ = lean_unbox_uint64(v_flags_1216_);
lean_dec_ref(v_flags_1216_);
v_res_1225_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9(v_failurePrefix_1214_, v_op_boxed_1223_, v_flags_boxed_1224_, v_payload_1217_, v___f_1218_, v___f_1219_, v___f_1220_, v_x_1221_);
lean_dec_ref(v_failurePrefix_1214_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0(lean_object* v_context_1226_, lean_object* v_x_1227_){
_start:
{
lean_object* v_val_1230_; 
if (lean_obj_tag(v_x_1227_) == 0)
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1240_; 
v_a_1232_ = lean_ctor_get(v_x_1227_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v_x_1227_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1234_ = v_x_1227_;
v_isShared_1235_ = v_isSharedCheck_1240_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v_x_1227_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1240_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1232_);
v___x_1237_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
lean_object* v___x_1238_; 
v___x_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
return v___x_1238_;
}
}
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1254_; 
v_a_1241_ = lean_ctor_get(v_x_1227_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v_x_1227_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1243_ = v_x_1227_;
v_isShared_1244_ = v_isSharedCheck_1254_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v_x_1227_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1254_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1245_; 
v___x_1245_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_1226_, v_a_1241_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v_a_1246_; lean_object* v___x_1248_; 
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_a_1246_);
lean_dec_ref_known(v___x_1245_, 1);
if (v_isShared_1244_ == 0)
{
lean_ctor_set(v___x_1243_, 0, v_a_1246_);
v___x_1248_ = v___x_1243_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_a_1246_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
v_val_1230_ = v___x_1248_;
goto v___jp_1229_;
}
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; 
v_a_1250_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_a_1250_);
lean_dec_ref_known(v___x_1245_, 1);
if (v_isShared_1244_ == 0)
{
lean_ctor_set_tag(v___x_1243_, 0);
lean_ctor_set(v___x_1243_, 0, v_a_1250_);
v___x_1252_ = v___x_1243_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1250_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
v_val_1230_ = v___x_1252_;
goto v___jp_1229_;
}
}
}
}
v___jp_1229_:
{
lean_object* v___x_1231_; 
v___x_1231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1231_, 0, v_val_1230_);
return v___x_1231_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0___boxed(lean_object* v_context_1255_, lean_object* v_x_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0(v_context_1255_, v_x_1256_);
lean_dec_ref(v_context_1255_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3(lean_object* v___f_1259_, lean_object* v_x_1260_){
_start:
{
if (lean_obj_tag(v_x_1260_) == 0)
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1270_; 
lean_dec_ref(v___f_1259_);
v_a_1262_ = lean_ctor_get(v_x_1260_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v_x_1260_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1264_ = v_x_1260_;
v_isShared_1265_ = v_isSharedCheck_1270_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v_x_1260_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1270_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1267_; 
if (v_isShared_1265_ == 0)
{
v___x_1267_ = v___x_1264_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_a_1262_);
v___x_1267_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
lean_object* v___x_1268_; 
v___x_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
return v___x_1268_;
}
}
}
else
{
lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1282_; 
v_isSharedCheck_1282_ = !lean_is_exclusive(v_x_1260_);
if (v_isSharedCheck_1282_ == 0)
{
lean_object* v_unused_1283_; 
v_unused_1283_ = lean_ctor_get(v_x_1260_, 0);
lean_dec(v_unused_1283_);
v___x_1272_ = v_x_1260_;
v_isShared_1273_ = v_isSharedCheck_1282_;
goto v_resetjp_1271_;
}
else
{
lean_dec(v_x_1260_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1282_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; uint8_t v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1274_ = lean_unsigned_to_nat(0u);
v___x_1275_ = 0;
v___x_1276_ = lean_io_promise_new();
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1276_);
v___x_1278_ = v___x_1272_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
v___x_1280_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1274_, v___x_1275_, v___x_1279_, v___f_1259_);
return v___x_1280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3___boxed(lean_object* v___f_1284_, lean_object* v_x_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3(v___f_1284_, v_x_1285_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(lean_object* v_context_1288_, uint32_t v_op_1289_, uint64_t v_flags_1290_, lean_object* v_payload_1291_, lean_object* v_failurePrefix_1292_){
_start:
{
lean_object* v___f_1294_; lean_object* v___f_1295_; lean_object* v___f_1296_; lean_object* v___f_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___f_1300_; lean_object* v___f_1301_; lean_object* v___x_1302_; uint8_t v___x_1303_; lean_object* v_val_1305_; lean_object* v___x_1308_; 
v___f_1294_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1294_, 0, v_context_1288_);
v___f_1295_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1295_, 0, v___f_1294_);
v___f_1296_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1296_, 0, v___f_1295_);
lean_inc_ref(v_failurePrefix_1292_);
v___f_1297_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1297_, 0, v_failurePrefix_1292_);
v___x_1298_ = lean_box_uint32(v_op_1289_);
v___x_1299_ = lean_box_uint64(v_flags_1290_);
lean_inc_ref(v___f_1296_);
v___f_1300_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1300_, 0, v_failurePrefix_1292_);
lean_closure_set(v___f_1300_, 1, v___x_1298_);
lean_closure_set(v___f_1300_, 2, v___x_1299_);
lean_closure_set(v___f_1300_, 3, v_payload_1291_);
lean_closure_set(v___f_1300_, 4, v___f_1297_);
lean_closure_set(v___f_1300_, 5, v___f_1296_);
lean_closure_set(v___f_1300_, 6, v___f_1296_);
v___f_1301_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1301_, 0, v___f_1300_);
v___x_1302_ = lean_unsigned_to_nat(0u);
v___x_1303_ = 0;
v___x_1308_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1316_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1311_ = v___x_1308_;
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1308_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
lean_ctor_set_tag(v___x_1311_, 1);
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
v_val_1305_ = v___x_1314_;
goto v___jp_1304_;
}
}
}
else
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1324_; 
v_a_1317_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1319_ = v___x_1308_;
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1308_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1322_; 
if (v_isShared_1320_ == 0)
{
lean_ctor_set_tag(v___x_1319_, 0);
v___x_1322_ = v___x_1319_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1317_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
v_val_1305_ = v___x_1322_;
goto v___jp_1304_;
}
}
}
v___jp_1304_:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1306_, 0, v_val_1305_);
v___x_1307_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1302_, v___x_1303_, v___x_1306_, v___f_1301_);
return v___x_1307_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___boxed(lean_object* v_context_1325_, lean_object* v_op_1326_, lean_object* v_flags_1327_, lean_object* v_payload_1328_, lean_object* v_failurePrefix_1329_, lean_object* v_a_1330_){
_start:
{
uint32_t v_op_boxed_1331_; uint64_t v_flags_boxed_1332_; lean_object* v_res_1333_; 
v_op_boxed_1331_ = lean_unbox_uint32(v_op_1326_);
lean_dec(v_op_1326_);
v_flags_boxed_1332_ = lean_unbox_uint64(v_flags_1327_);
lean_dec_ref(v_flags_1327_);
v_res_1333_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v_context_1325_, v_op_boxed_1331_, v_flags_boxed_1332_, v_payload_1328_, v_failurePrefix_1329_);
return v_res_1333_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1334_; uint8_t v___x_1335_; uint64_t v___x_1336_; 
v___x_1334_ = 8ULL;
v___x_1335_ = 0;
v___x_1336_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_1335_, v___x_1334_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object* v_o_1337_, lean_object* v_name_1338_, lean_object* v_args_1339_){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; uint32_t v___x_1346_; uint64_t v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1341_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1342_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1342_, 0, v_o_1337_);
lean_ctor_set(v___x_1342_, 1, v___x_1341_);
lean_inc_ref(v_name_1338_);
v___x_1343_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1343_, 0, v_name_1338_);
v___x_1344_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__1));
v___x_1345_ = lean_string_append(v___x_1344_, v_name_1338_);
lean_dec_ref(v_name_1338_);
v___x_1346_ = 205;
v___x_1347_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0);
v___x_1348_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1348_, 0, v_args_1339_);
v___x_1349_ = lean_unsigned_to_nat(3u);
v___x_1350_ = lean_mk_empty_array_with_capacity(v___x_1349_);
v___x_1351_ = lean_array_push(v___x_1350_, v___x_1342_);
v___x_1352_ = lean_array_push(v___x_1351_, v___x_1343_);
v___x_1353_ = lean_array_push(v___x_1352_, v___x_1348_);
v___x_1354_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1353_);
v___x_1355_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v___x_1345_, v___x_1346_, v___x_1347_, v___x_1354_, v___x_1341_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___boxed(lean_object* v_o_1356_, lean_object* v_name_1357_, lean_object* v_args_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_o_1356_, v_name_1357_, v_args_1358_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer(lean_object* v_self_1363_){
_start:
{
lean_object* v___f_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; uint8_t v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___f_1365_ = ((lean_object*)(l_Lasm_JS_Web_Blob_arrayBuffer___closed__0));
v___x_1366_ = ((lean_object*)(l_Lasm_JS_Web_Blob_arrayBuffer___closed__1));
v___x_1367_ = lean_unsigned_to_nat(0u);
v___x_1368_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1369_ = 0;
v___x_1370_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_1363_, v___x_1366_, v___x_1368_);
v___x_1371_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1367_, v___x_1369_, v___x_1370_, v___f_1365_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___boxed(lean_object* v_self_1372_, lean_object* v_a_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l_Lasm_JS_Web_Blob_arrayBuffer(v_self_1372_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_textStream(lean_object* v_self_1376_){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1378_ = ((lean_object*)(l_Lasm_JS_Web_Blob_textStream___closed__0));
v___x_1379_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1380_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1(v_self_1376_, v___x_1378_, v___x_1379_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_textStream___boxed(lean_object* v_self_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_Lasm_JS_Web_Blob_textStream(v_self_1381_);
return v_res_1383_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(uint8_t v_await_1384_, uint64_t v_extra_1385_){
_start:
{
uint64_t v___x_1386_; uint64_t v___y_1388_; 
v___x_1386_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_1384_ == 0)
{
uint64_t v___x_1391_; 
v___x_1391_ = 0ULL;
v___y_1388_ = v___x_1391_;
goto v___jp_1387_;
}
else
{
uint64_t v___x_1392_; 
v___x_1392_ = 2ULL;
v___y_1388_ = v___x_1392_;
goto v___jp_1387_;
}
v___jp_1387_:
{
uint64_t v___x_1389_; uint64_t v___x_1390_; 
v___x_1389_ = lean_uint64_lor(v___x_1386_, v___y_1388_);
v___x_1390_ = lean_uint64_lor(v___x_1389_, v_extra_1385_);
return v___x_1390_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0___boxed(lean_object* v_await_1393_, lean_object* v_extra_1394_){
_start:
{
uint8_t v_await_boxed_1395_; uint64_t v_extra_boxed_1396_; uint64_t v_res_1397_; lean_object* v_r_1398_; 
v_await_boxed_1395_ = lean_unbox(v_await_1393_);
v_extra_boxed_1396_ = lean_unbox_uint64(v_extra_1394_);
lean_dec_ref(v_extra_1394_);
v_res_1397_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(v_await_boxed_1395_, v_extra_boxed_1396_);
v_r_1398_ = lean_box_uint64(v_res_1397_);
return v_r_1398_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2(lean_object* v___f_1399_, lean_object* v_x_1400_){
_start:
{
if (lean_obj_tag(v_x_1400_) == 0)
{
lean_object* v___x_1402_; 
lean_dec_ref(v___f_1399_);
v___x_1402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1402_, 0, v_x_1400_);
return v___x_1402_;
}
else
{
lean_object* v_a_1403_; lean_object* v___x_1404_; 
v_a_1403_ = lean_ctor_get(v_x_1400_, 0);
lean_inc(v_a_1403_);
lean_dec_ref_known(v_x_1400_, 1);
v___x_1404_ = lean_apply_2(v___f_1399_, v_a_1403_, lean_box(0));
return v___x_1404_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2___boxed(lean_object* v___f_1405_, lean_object* v_x_1406_, lean_object* v___y_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2(v___f_1405_, v_x_1406_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0(lean_object* v_context_1409_, lean_object* v_x_1410_){
_start:
{
lean_object* v_val_1413_; 
if (lean_obj_tag(v_x_1410_) == 0)
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1423_; 
v_a_1415_ = lean_ctor_get(v_x_1410_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v_x_1410_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1417_ = v_x_1410_;
v_isShared_1418_ = v_isSharedCheck_1423_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v_x_1410_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1423_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
lean_object* v___x_1421_; 
v___x_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
return v___x_1421_;
}
}
}
else
{
lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1437_; 
v_a_1424_ = lean_ctor_get(v_x_1410_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v_x_1410_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1426_ = v_x_1410_;
v_isShared_1427_ = v_isSharedCheck_1437_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_dec(v_x_1410_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1437_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1428_; 
v___x_1428_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v_context_1409_, v_a_1424_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; lean_object* v___x_1431_; 
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1429_);
lean_dec_ref_known(v___x_1428_, 1);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v_a_1429_);
v___x_1431_ = v___x_1426_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1429_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
v_val_1413_ = v___x_1431_;
goto v___jp_1412_;
}
}
else
{
lean_object* v_a_1433_; lean_object* v___x_1435_; 
v_a_1433_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1433_);
lean_dec_ref_known(v___x_1428_, 1);
if (v_isShared_1427_ == 0)
{
lean_ctor_set_tag(v___x_1426_, 0);
lean_ctor_set(v___x_1426_, 0, v_a_1433_);
v___x_1435_ = v___x_1426_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1433_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
v_val_1413_ = v___x_1435_;
goto v___jp_1412_;
}
}
}
}
v___jp_1412_:
{
lean_object* v___x_1414_; 
v___x_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1414_, 0, v_val_1413_);
return v___x_1414_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0___boxed(lean_object* v_context_1438_, lean_object* v_x_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0(v_context_1438_, v_x_1439_);
lean_dec_ref(v_context_1438_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1(lean_object* v___f_1442_, lean_object* v_bytes_1443_){
_start:
{
lean_object* v___x_1445_; uint8_t v___x_1446_; lean_object* v_val_1448_; lean_object* v___x_1451_; 
v___x_1445_ = lean_unsigned_to_nat(0u);
v___x_1446_ = 0;
v___x_1451_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1443_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1459_; 
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1454_ = v___x_1451_;
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_dec(v___x_1451_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
if (v_isShared_1455_ == 0)
{
lean_ctor_set_tag(v___x_1454_, 1);
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1452_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
v_val_1448_ = v___x_1457_;
goto v___jp_1447_;
}
}
}
else
{
lean_object* v_a_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1467_; 
v_a_1460_ = lean_ctor_get(v___x_1451_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1462_ = v___x_1451_;
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_a_1460_);
lean_dec(v___x_1451_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1465_; 
if (v_isShared_1463_ == 0)
{
lean_ctor_set_tag(v___x_1462_, 0);
v___x_1465_ = v___x_1462_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v_a_1460_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
v_val_1448_ = v___x_1465_;
goto v___jp_1447_;
}
}
}
v___jp_1447_:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1449_, 0, v_val_1448_);
v___x_1450_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1445_, v___x_1446_, v___x_1449_, v___f_1442_);
return v___x_1450_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1___boxed(lean_object* v___f_1468_, lean_object* v_bytes_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1(v___f_1468_, v_bytes_1469_);
lean_dec_ref(v_bytes_1469_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3(lean_object* v___f_1472_, lean_object* v_x_1473_){
_start:
{
if (lean_obj_tag(v_x_1473_) == 0)
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1483_; 
lean_dec_ref(v___f_1472_);
v_a_1475_ = lean_ctor_get(v_x_1473_, 0);
v_isSharedCheck_1483_ = !lean_is_exclusive(v_x_1473_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1477_ = v_x_1473_;
v_isShared_1478_ = v_isSharedCheck_1483_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v_x_1473_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1483_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1480_; 
if (v_isShared_1478_ == 0)
{
v___x_1480_ = v___x_1477_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_a_1475_);
v___x_1480_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
lean_object* v___x_1481_; 
v___x_1481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1480_);
return v___x_1481_;
}
}
}
else
{
lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1495_; 
v_isSharedCheck_1495_ = !lean_is_exclusive(v_x_1473_);
if (v_isSharedCheck_1495_ == 0)
{
lean_object* v_unused_1496_; 
v_unused_1496_ = lean_ctor_get(v_x_1473_, 0);
lean_dec(v_unused_1496_);
v___x_1485_ = v_x_1473_;
v_isShared_1486_ = v_isSharedCheck_1495_;
goto v_resetjp_1484_;
}
else
{
lean_dec(v_x_1473_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1495_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1487_; uint8_t v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1491_; 
v___x_1487_ = lean_unsigned_to_nat(0u);
v___x_1488_ = 0;
v___x_1489_ = lean_io_promise_new();
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 0, v___x_1489_);
v___x_1491_ = v___x_1485_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v___x_1489_);
v___x_1491_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1491_);
v___x_1493_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1487_, v___x_1488_, v___x_1492_, v___f_1472_);
return v___x_1493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3___boxed(lean_object* v___f_1497_, lean_object* v_x_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3(v___f_1497_, v_x_1498_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_1501_, uint32_t v_op_1502_, uint64_t v_flags_1503_, lean_object* v_payload_1504_, lean_object* v___f_1505_, lean_object* v___f_1506_, lean_object* v___f_1507_, lean_object* v_x_1508_){
_start:
{
if (lean_obj_tag(v_x_1508_) == 0)
{
lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1518_; 
lean_dec_ref(v___f_1507_);
lean_dec_ref(v___f_1506_);
lean_dec_ref(v___f_1505_);
lean_dec(v_payload_1504_);
v_a_1510_ = lean_ctor_get(v_x_1508_, 0);
v_isSharedCheck_1518_ = !lean_is_exclusive(v_x_1508_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1512_ = v_x_1508_;
v_isShared_1513_ = v_isSharedCheck_1518_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_a_1510_);
lean_dec(v_x_1508_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1518_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1515_; 
if (v_isShared_1513_ == 0)
{
v___x_1515_ = v___x_1512_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v_a_1510_);
v___x_1515_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
lean_object* v___x_1516_; 
v___x_1516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
return v___x_1516_;
}
}
}
else
{
lean_object* v_a_1519_; lean_object* v___x_1521_; uint8_t v_isShared_1522_; uint8_t v_isSharedCheck_1565_; 
v_a_1519_ = lean_ctor_get(v_x_1508_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v_x_1508_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1521_ = v_x_1508_;
v_isShared_1522_ = v_isSharedCheck_1565_;
goto v_resetjp_1520_;
}
else
{
lean_inc(v_a_1519_);
lean_dec(v_x_1508_);
v___x_1521_ = lean_box(0);
v_isShared_1522_ = v_isSharedCheck_1565_;
goto v_resetjp_1520_;
}
v_resetjp_1520_:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; uint8_t v___x_1525_; 
v___x_1523_ = lean_string_utf8_byte_size(v_failurePrefix_1501_);
v___x_1524_ = lean_unsigned_to_nat(0u);
v___x_1525_ = lean_nat_dec_eq(v___x_1523_, v___x_1524_);
if (v___x_1525_ == 0)
{
lean_object* v___f_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___f_1530_; lean_object* v_val_1532_; lean_object* v___x_1537_; 
lean_dec_ref(v___f_1507_);
lean_inc(v_a_1519_);
v___f_1526_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1526_, 0, v_a_1519_);
v___x_1527_ = lean_box(v___x_1525_);
v___x_1528_ = lean_box_uint32(v_op_1502_);
v___x_1529_ = lean_box_uint64(v_flags_1503_);
lean_inc(v_payload_1504_);
v___f_1530_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1530_, 0, v___x_1524_);
lean_closure_set(v___f_1530_, 1, v___x_1527_);
lean_closure_set(v___f_1530_, 2, v___f_1526_);
lean_closure_set(v___f_1530_, 3, v_a_1519_);
lean_closure_set(v___f_1530_, 4, v___x_1528_);
lean_closure_set(v___f_1530_, 5, v___x_1529_);
lean_closure_set(v___f_1530_, 6, v_payload_1504_);
v___x_1537_ = l_Lasm_JS_Wire_encodeIO(v_payload_1504_);
lean_dec(v_payload_1504_);
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_object* v_a_1538_; lean_object* v___x_1540_; 
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
lean_inc(v_a_1538_);
lean_dec_ref_known(v___x_1537_, 1);
if (v_isShared_1522_ == 0)
{
lean_ctor_set(v___x_1521_, 0, v_a_1538_);
v___x_1540_ = v___x_1521_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1538_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
v_val_1532_ = v___x_1540_;
goto v___jp_1531_;
}
}
else
{
lean_object* v_a_1542_; lean_object* v___x_1544_; 
v_a_1542_ = lean_ctor_get(v___x_1537_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1537_, 1);
if (v_isShared_1522_ == 0)
{
lean_ctor_set_tag(v___x_1521_, 0);
lean_ctor_set(v___x_1521_, 0, v_a_1542_);
v___x_1544_ = v___x_1521_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_a_1542_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
v_val_1532_ = v___x_1544_;
goto v___jp_1531_;
}
}
v___jp_1531_:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1533_, 0, v_val_1532_);
v___x_1534_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1524_, v___x_1525_, v___x_1533_, v___f_1530_);
v___x_1535_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1524_, v___x_1525_, v___x_1534_, v___f_1505_);
v___x_1536_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1524_, v___x_1525_, v___x_1535_, v___f_1506_);
return v___x_1536_;
}
}
else
{
lean_object* v___f_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___f_1549_; uint8_t v___x_1550_; lean_object* v_val_1552_; lean_object* v___x_1556_; 
lean_dec_ref(v___f_1506_);
lean_dec_ref(v___f_1505_);
lean_inc(v_a_1519_);
v___f_1546_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1546_, 0, v_a_1519_);
v___x_1547_ = lean_box_uint32(v_op_1502_);
v___x_1548_ = lean_box_uint64(v_flags_1503_);
lean_inc(v_payload_1504_);
v___f_1549_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1549_, 0, v___f_1546_);
lean_closure_set(v___f_1549_, 1, v_a_1519_);
lean_closure_set(v___f_1549_, 2, v___x_1547_);
lean_closure_set(v___f_1549_, 3, v___x_1548_);
lean_closure_set(v___f_1549_, 4, v_payload_1504_);
v___x_1550_ = 0;
v___x_1556_ = l_Lasm_JS_Wire_encodeIO(v_payload_1504_);
lean_dec(v_payload_1504_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_object* v_a_1557_; lean_object* v___x_1559_; 
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1557_);
lean_dec_ref_known(v___x_1556_, 1);
if (v_isShared_1522_ == 0)
{
lean_ctor_set(v___x_1521_, 0, v_a_1557_);
v___x_1559_ = v___x_1521_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1557_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
v_val_1552_ = v___x_1559_;
goto v___jp_1551_;
}
}
else
{
lean_object* v_a_1561_; lean_object* v___x_1563_; 
v_a_1561_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1561_);
lean_dec_ref_known(v___x_1556_, 1);
if (v_isShared_1522_ == 0)
{
lean_ctor_set_tag(v___x_1521_, 0);
lean_ctor_set(v___x_1521_, 0, v_a_1561_);
v___x_1563_ = v___x_1521_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1561_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
v_val_1552_ = v___x_1563_;
goto v___jp_1551_;
}
}
v___jp_1551_:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1553_, 0, v_val_1552_);
v___x_1554_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1524_, v___x_1550_, v___x_1553_, v___f_1549_);
v___x_1555_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1524_, v___x_1550_, v___x_1554_, v___f_1507_);
return v___x_1555_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_1566_, lean_object* v_op_1567_, lean_object* v_flags_1568_, lean_object* v_payload_1569_, lean_object* v___f_1570_, lean_object* v___f_1571_, lean_object* v___f_1572_, lean_object* v_x_1573_, lean_object* v___y_1574_){
_start:
{
uint32_t v_op_boxed_1575_; uint64_t v_flags_boxed_1576_; lean_object* v_res_1577_; 
v_op_boxed_1575_ = lean_unbox_uint32(v_op_1567_);
lean_dec(v_op_1567_);
v_flags_boxed_1576_ = lean_unbox_uint64(v_flags_1568_);
lean_dec_ref(v_flags_1568_);
v_res_1577_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9(v_failurePrefix_1566_, v_op_boxed_1575_, v_flags_boxed_1576_, v_payload_1569_, v___f_1570_, v___f_1571_, v___f_1572_, v_x_1573_);
lean_dec_ref(v_failurePrefix_1566_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(lean_object* v_context_1578_, uint32_t v_op_1579_, uint64_t v_flags_1580_, lean_object* v_payload_1581_, lean_object* v_failurePrefix_1582_){
_start:
{
lean_object* v___f_1584_; lean_object* v___f_1585_; lean_object* v___f_1586_; lean_object* v___f_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___f_1590_; lean_object* v___f_1591_; lean_object* v___x_1592_; uint8_t v___x_1593_; lean_object* v_val_1595_; lean_object* v___x_1598_; 
v___f_1584_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1584_, 0, v_context_1578_);
v___f_1585_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1585_, 0, v___f_1584_);
v___f_1586_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1586_, 0, v___f_1585_);
lean_inc_ref(v_failurePrefix_1582_);
v___f_1587_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1587_, 0, v_failurePrefix_1582_);
v___x_1588_ = lean_box_uint32(v_op_1579_);
v___x_1589_ = lean_box_uint64(v_flags_1580_);
lean_inc_ref(v___f_1586_);
v___f_1590_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1590_, 0, v_failurePrefix_1582_);
lean_closure_set(v___f_1590_, 1, v___x_1588_);
lean_closure_set(v___f_1590_, 2, v___x_1589_);
lean_closure_set(v___f_1590_, 3, v_payload_1581_);
lean_closure_set(v___f_1590_, 4, v___f_1587_);
lean_closure_set(v___f_1590_, 5, v___f_1586_);
lean_closure_set(v___f_1590_, 6, v___f_1586_);
v___f_1591_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1591_, 0, v___f_1590_);
v___x_1592_ = lean_unsigned_to_nat(0u);
v___x_1593_ = 0;
v___x_1598_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v_a_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1606_; 
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1601_ = v___x_1598_;
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_a_1599_);
lean_dec(v___x_1598_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1604_; 
if (v_isShared_1602_ == 0)
{
lean_ctor_set_tag(v___x_1601_, 1);
v___x_1604_ = v___x_1601_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_a_1599_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
v_val_1595_ = v___x_1604_;
goto v___jp_1594_;
}
}
}
else
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
v_a_1607_ = lean_ctor_get(v___x_1598_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1598_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1598_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
lean_ctor_set_tag(v___x_1609_, 0);
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
v_val_1595_ = v___x_1612_;
goto v___jp_1594_;
}
}
}
v___jp_1594_:
{
lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1596_, 0, v_val_1595_);
v___x_1597_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1592_, v___x_1593_, v___x_1596_, v___f_1591_);
return v___x_1597_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___boxed(lean_object* v_context_1615_, lean_object* v_op_1616_, lean_object* v_flags_1617_, lean_object* v_payload_1618_, lean_object* v_failurePrefix_1619_, lean_object* v_a_1620_){
_start:
{
uint32_t v_op_boxed_1621_; uint64_t v_flags_boxed_1622_; lean_object* v_res_1623_; 
v_op_boxed_1621_ = lean_unbox_uint32(v_op_1616_);
lean_dec(v_op_1616_);
v_flags_boxed_1622_ = lean_unbox_uint64(v_flags_1617_);
lean_dec_ref(v_flags_1617_);
v_res_1623_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v_context_1615_, v_op_boxed_1621_, v_flags_boxed_1622_, v_payload_1618_, v_failurePrefix_1619_);
return v_res_1623_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1624_; uint8_t v___x_1625_; uint64_t v___x_1626_; 
v___x_1624_ = 8ULL;
v___x_1625_ = 0;
v___x_1626_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(v___x_1625_, v___x_1624_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(lean_object* v_o_1627_, lean_object* v_name_1628_, lean_object* v_args_1629_){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; uint32_t v___x_1636_; uint64_t v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1631_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1632_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1632_, 0, v_o_1627_);
lean_ctor_set(v___x_1632_, 1, v___x_1631_);
lean_inc_ref(v_name_1628_);
v___x_1633_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1633_, 0, v_name_1628_);
v___x_1634_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Blob_slice_spec__1___closed__1));
v___x_1635_ = lean_string_append(v___x_1634_, v_name_1628_);
lean_dec_ref(v_name_1628_);
v___x_1636_ = 205;
v___x_1637_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0);
v___x_1638_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1638_, 0, v_args_1629_);
v___x_1639_ = lean_unsigned_to_nat(3u);
v___x_1640_ = lean_mk_empty_array_with_capacity(v___x_1639_);
v___x_1641_ = lean_array_push(v___x_1640_, v___x_1632_);
v___x_1642_ = lean_array_push(v___x_1641_, v___x_1633_);
v___x_1643_ = lean_array_push(v___x_1642_, v___x_1638_);
v___x_1644_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1643_);
v___x_1645_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v___x_1635_, v___x_1636_, v___x_1637_, v___x_1644_, v___x_1631_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___boxed(lean_object* v_o_1646_, lean_object* v_name_1647_, lean_object* v_args_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(v_o_1646_, v_name_1647_, v_args_1648_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_bytes(lean_object* v_self_1652_){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1654_ = ((lean_object*)(l_Lasm_JS_Web_Blob_bytes___closed__0));
v___x_1655_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1656_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(v_self_1652_, v___x_1654_, v___x_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_bytes___boxed(lean_object* v_self_1657_, lean_object* v_a_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Lasm_JS_Web_Blob_bytes(v_self_1657_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_File_new_spec__0(lean_object* v_x_1660_){
_start:
{
if (lean_obj_tag(v_x_1660_) == 0)
{
lean_object* v___x_1661_; 
v___x_1661_ = lean_box(0);
return v___x_1661_;
}
else
{
lean_object* v_val_1662_; lean_object* v_type_1663_; lean_object* v_endings_1664_; lean_object* v_lastModified_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v_val_1662_ = lean_ctor_get(v_x_1660_, 0);
lean_inc(v_val_1662_);
lean_dec_ref_known(v_x_1660_, 1);
v_type_1663_ = lean_ctor_get(v_val_1662_, 0);
lean_inc(v_type_1663_);
v_endings_1664_ = lean_ctor_get(v_val_1662_, 1);
lean_inc(v_endings_1664_);
v_lastModified_1665_ = lean_ctor_get(v_val_1662_, 2);
lean_inc(v_lastModified_1665_);
lean_dec(v_val_1662_);
v___x_1666_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_1667_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_type_1663_);
v___x_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1666_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
v___x_1669_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1));
v___x_1670_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(v_endings_1664_);
lean_dec(v_endings_1664_);
v___x_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1672_ = ((lean_object*)(l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0));
v___x_1673_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_lastModified_1665_);
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1672_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = lean_unsigned_to_nat(3u);
v___x_1676_ = lean_mk_empty_array_with_capacity(v___x_1675_);
v___x_1677_ = lean_array_push(v___x_1676_, v___x_1668_);
v___x_1678_ = lean_array_push(v___x_1677_, v___x_1671_);
v___x_1679_ = lean_array_push(v___x_1678_, v___x_1674_);
v___x_1680_ = l_Lasm_JS_Web_Support_fields(v___x_1679_);
lean_dec_ref(v___x_1679_);
return v___x_1680_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(lean_object* v_context_1681_, lean_object* v_d_1682_){
_start:
{
lean_object* v___y_1685_; lean_object* v___y_1686_; 
if (lean_obj_tag(v_d_1682_) == 9)
{
lean_object* v_value_1690_; lean_object* v___x_1691_; 
v_value_1690_ = lean_ctor_get(v_d_1682_, 0);
lean_inc(v_value_1690_);
lean_dec_ref_known(v_d_1682_, 2);
v___x_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1691_, 0, v_value_1690_);
return v___x_1691_;
}
else
{
lean_object* v___x_1692_; lean_object* v_received_1694_; 
v___x_1692_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
if (lean_obj_tag(v_d_1682_) == 9)
{
lean_object* v_value_1708_; lean_object* v_description_1709_; uint8_t v___x_1710_; 
v_value_1708_ = lean_ctor_get(v_d_1682_, 0);
v_description_1709_ = lean_ctor_get(v_d_1682_, 1);
v___x_1710_ = lean_string_dec_eq(v_description_1709_, v___x_1692_);
if (v___x_1710_ == 0)
{
goto v___jp_1706_;
}
else
{
uint32_t v___x_1711_; uint64_t v___x_1712_; lean_object* v___x_1713_; uint32_t v___x_1714_; lean_object* v___x_1715_; 
lean_inc_n(v_value_1708_, 2);
lean_dec_ref_known(v_d_1682_, 2);
v___x_1711_ = 206;
v___x_1712_ = 0ULL;
v___x_1713_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1713_, 0, v_value_1708_);
lean_ctor_set(v___x_1713_, 1, v___x_1692_);
v___x_1714_ = lasm_js_value_handle(v_value_1708_);
lean_dec(v_value_1708_);
v___x_1715_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1711_, v___x_1712_, v___x_1713_, v___x_1714_);
lean_dec_ref_known(v___x_1713_, 2);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v_a_1716_; uint8_t v___x_1717_; 
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_a_1716_);
lean_dec_ref_known(v___x_1715_, 1);
v___x_1717_ = lean_string_validate_utf8(v_a_1716_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; lean_object* v___x_1719_; 
lean_dec(v_a_1716_);
v___x_1718_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9);
v___x_1719_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1718_);
v_received_1694_ = v___x_1719_;
goto v___jp_1693_;
}
else
{
lean_object* v___x_1720_; 
v___x_1720_ = lean_string_from_utf8_unchecked(v_a_1716_);
v_received_1694_ = v___x_1720_;
goto v___jp_1693_;
}
}
else
{
lean_object* v___x_1721_; 
lean_dec_ref_known(v___x_1715_, 1);
v___x_1721_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10));
v_received_1694_ = v___x_1721_;
goto v___jp_1693_;
}
}
}
else
{
goto v___jp_1706_;
}
v___jp_1693_:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; uint8_t v___x_1704_; 
v___x_1695_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_1696_ = lean_string_append(v___x_1695_, v_context_1681_);
v___x_1697_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1));
v___x_1698_ = lean_string_append(v___x_1696_, v___x_1697_);
v___x_1699_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSFile___closed__0));
v___x_1700_ = lean_string_append(v___x_1698_, v___x_1699_);
v___x_1701_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2));
v___x_1702_ = lean_string_append(v___x_1700_, v___x_1701_);
v___x_1703_ = lean_string_append(v___x_1702_, v_received_1694_);
lean_dec_ref(v_received_1694_);
v___x_1704_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4);
if (v___x_1704_ == 0)
{
lean_object* v___x_1705_; 
v___x_1705_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__5));
v___y_1685_ = v___x_1703_;
v___y_1686_ = v___x_1705_;
goto v___jp_1684_;
}
else
{
v___y_1685_ = v___x_1703_;
v___y_1686_ = v___x_1692_;
goto v___jp_1684_;
}
}
v___jp_1706_:
{
lean_object* v___x_1707_; 
v___x_1707_ = l_Lasm_JS_Data_describe(v_d_1682_);
v_received_1694_ = v___x_1707_;
goto v___jp_1693_;
}
}
v___jp_1684_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1687_ = lean_string_append(v___y_1685_, v___y_1686_);
v___x_1688_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
v___x_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
return v___x_1689_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1___boxed(lean_object* v_context_1722_, lean_object* v_d_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v_res_1725_; 
v_res_1725_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(v_context_1722_, v_d_1723_);
lean_dec_ref(v_context_1722_);
return v_res_1725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(lean_object* v_b_1726_, lean_object* v_args_1727_, uint8_t v_await_1728_){
_start:
{
uint64_t v___y_1731_; uint64_t v___y_1732_; uint64_t v___x_1775_; uint64_t v___y_1777_; 
v___x_1775_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_1728_ == 0)
{
uint64_t v___x_1782_; 
v___x_1782_ = 0ULL;
v___y_1777_ = v___x_1782_;
goto v___jp_1776_;
}
else
{
uint64_t v___x_1783_; 
v___x_1783_ = 2ULL;
v___y_1777_ = v___x_1783_;
goto v___jp_1776_;
}
v___jp_1730_:
{
uint64_t v_flags_1733_; uint32_t v___x_1734_; lean_object* v___x_1735_; uint32_t v___x_1736_; lean_object* v___x_1737_; 
v_flags_1733_ = lean_uint64_lor(v___y_1731_, v___y_1732_);
v___x_1734_ = 214;
v___x_1735_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1726_, v_args_1727_);
v___x_1736_ = 0;
v___x_1737_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1734_, v_flags_1733_, v___x_1735_, v___x_1736_);
lean_dec(v___x_1735_);
if (lean_obj_tag(v___x_1737_) == 0)
{
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v_a_1738_; lean_object* v___x_1739_; 
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1738_);
lean_dec_ref_known(v___x_1737_, 1);
v___x_1739_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1738_);
lean_dec(v_a_1738_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_a_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; 
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
lean_inc(v_a_1740_);
lean_dec_ref_known(v___x_1739_, 1);
v___x_1741_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1726_);
v___x_1742_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(v___x_1741_, v_a_1740_);
lean_dec_ref(v___x_1741_);
return v___x_1742_;
}
else
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
v_a_1743_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___x_1739_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1739_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
}
}
}
}
else
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1758_; 
v_a_1751_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1753_ = v___x_1737_;
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1737_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1756_; 
if (v_isShared_1754_ == 0)
{
lean_ctor_set_tag(v___x_1753_, 1);
v___x_1756_ = v___x_1753_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v_a_1751_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
else
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1774_; 
v_a_1759_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1761_ = v___x_1737_;
v_isShared_1762_ = v_isSharedCheck_1774_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1737_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1774_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1772_; 
v___x_1763_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_1764_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1726_);
v___x_1765_ = lean_string_append(v___x_1763_, v___x_1764_);
lean_dec_ref(v___x_1764_);
v___x_1766_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__0));
v___x_1767_ = lean_string_append(v___x_1765_, v___x_1766_);
v___x_1768_ = lean_io_error_to_string(v_a_1759_);
v___x_1769_ = lean_string_append(v___x_1767_, v___x_1768_);
lean_dec_ref(v___x_1768_);
v___x_1770_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1770_, 0, v___x_1769_);
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 0, v___x_1770_);
v___x_1772_ = v___x_1761_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v___x_1770_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
}
v___jp_1776_:
{
uint8_t v_construct_1778_; uint64_t v___x_1779_; 
v_construct_1778_ = lean_ctor_get_uint8(v_b_1726_, sizeof(void*)*4);
v___x_1779_ = lean_uint64_lor(v___x_1775_, v___y_1777_);
if (v_construct_1778_ == 0)
{
uint64_t v___x_1780_; 
v___x_1780_ = 0ULL;
v___y_1731_ = v___x_1779_;
v___y_1732_ = v___x_1780_;
goto v___jp_1730_;
}
else
{
uint64_t v___x_1781_; 
v___x_1781_ = 4ULL;
v___y_1731_ = v___x_1779_;
v___y_1732_ = v___x_1781_;
goto v___jp_1730_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1___boxed(lean_object* v_b_1784_, lean_object* v_args_1785_, lean_object* v_await_1786_, lean_object* v_a_1787_){
_start:
{
uint8_t v_await_boxed_1788_; lean_object* v_res_1789_; 
v_await_boxed_1788_ = lean_unbox(v_await_1786_);
v_res_1789_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(v_b_1784_, v_args_1785_, v_await_boxed_1788_);
lean_dec_ref(v_b_1784_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_new(lean_object* v_fileBits_1798_, lean_object* v_fileName_1799_, lean_object* v_options_1800_){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; size_t v_sz_1804_; size_t v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; uint8_t v___x_1815_; lean_object* v___x_1816_; 
v___x_1802_ = lean_unsigned_to_nat(3u);
v___x_1803_ = ((lean_object*)(l_Lasm_JS_Web_File_new___closed__2));
v_sz_1804_ = lean_array_size(v_fileBits_1798_);
v___x_1805_ = ((size_t)0ULL);
v___x_1806_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(v_sz_1804_, v___x_1805_, v_fileBits_1798_);
v___x_1807_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1806_);
v___x_1808_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1808_, 0, v_fileName_1799_);
v___x_1809_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_File_new_spec__0(v_options_1800_);
v___x_1810_ = lean_mk_empty_array_with_capacity(v___x_1802_);
v___x_1811_ = lean_array_push(v___x_1810_, v___x_1807_);
v___x_1812_ = lean_array_push(v___x_1811_, v___x_1808_);
v___x_1813_ = lean_array_push(v___x_1812_, v___x_1809_);
v___x_1814_ = l_Lasm_JS_Web_Support_args(v___x_1813_);
v___x_1815_ = 0;
v___x_1816_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(v___x_1803_, v___x_1814_, v___x_1815_);
return v___x_1816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_new___boxed(lean_object* v_fileBits_1817_, lean_object* v_fileName_1818_, lean_object* v_options_1819_, lean_object* v_a_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l_Lasm_JS_Web_File_new(v_fileBits_1817_, v_fileName_1818_, v_options_1819_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_name(lean_object* v_self_1823_){
_start:
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = ((lean_object*)(l_Lasm_JS_Web_File_name___closed__0));
v___x_1826_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1823_, v___x_1825_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_name___boxed(lean_object* v_self_1827_, lean_object* v_a_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lasm_JS_Web_File_name(v_self_1827_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(lean_object* v_context_1834_, lean_object* v_d_1835_){
_start:
{
lean_object* v___y_1838_; lean_object* v___y_1839_; lean_object* v___y_1844_; lean_object* v_received_1845_; lean_object* v___y_1864_; lean_object* v_a_1867_; 
switch(lean_obj_tag(v_d_1835_))
{
case 3:
{
double v_n_1891_; lean_object* v___x_1892_; 
v_n_1891_ = lean_ctor_get_float(v_d_1835_, 0);
v___x_1892_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1891_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v___x_1893_; 
v___x_1893_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__3));
v_a_1867_ = v___x_1893_;
goto v___jp_1866_;
}
else
{
lean_object* v_val_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1901_; 
lean_dec_ref_known(v_d_1835_, 0);
v_val_1894_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1896_ = v___x_1892_;
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_val_1894_);
lean_dec(v___x_1892_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1899_; 
if (v_isShared_1897_ == 0)
{
lean_ctor_set_tag(v___x_1896_, 0);
v___x_1899_ = v___x_1896_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_val_1894_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
}
case 5:
{
lean_object* v_i_1902_; lean_object* v___x_1903_; 
v_i_1902_ = lean_ctor_get(v_d_1835_, 0);
lean_inc(v_i_1902_);
lean_dec_ref_known(v_d_1835_, 1);
v___x_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1903_, 0, v_i_1902_);
return v___x_1903_;
}
default: 
{
lean_object* v___x_1904_; 
v___x_1904_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v_a_1867_ = v___x_1904_;
goto v___jp_1866_;
}
}
v___jp_1837_:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1840_ = lean_string_append(v___y_1838_, v___y_1839_);
lean_dec_ref(v___y_1839_);
v___x_1841_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1840_);
v___x_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1841_);
return v___x_1842_;
}
v___jp_1843_:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; uint8_t v___x_1857_; 
v___x_1846_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_1847_ = lean_string_append(v___x_1846_, v_context_1834_);
v___x_1848_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1));
v___x_1849_ = lean_string_append(v___x_1847_, v___x_1848_);
v___x_1850_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__0));
v___x_1851_ = lean_string_append(v___x_1849_, v___x_1850_);
v___x_1852_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2));
v___x_1853_ = lean_string_append(v___x_1851_, v___x_1852_);
v___x_1854_ = lean_string_append(v___x_1853_, v_received_1845_);
lean_dec_ref(v_received_1845_);
v___x_1855_ = lean_string_utf8_byte_size(v___y_1844_);
v___x_1856_ = lean_unsigned_to_nat(0u);
v___x_1857_ = lean_nat_dec_eq(v___x_1855_, v___x_1856_);
if (v___x_1857_ == 0)
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1858_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__1));
v___x_1859_ = lean_string_append(v___x_1858_, v___y_1844_);
v___x_1860_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__2));
v___x_1861_ = lean_string_append(v___x_1859_, v___x_1860_);
v___y_1838_ = v___x_1854_;
v___y_1839_ = v___x_1861_;
goto v___jp_1837_;
}
else
{
lean_object* v___x_1862_; 
v___x_1862_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___y_1838_ = v___x_1854_;
v___y_1839_ = v___x_1862_;
goto v___jp_1837_;
}
}
v___jp_1863_:
{
lean_object* v___x_1865_; 
v___x_1865_ = l_Lasm_JS_Data_describe(v_d_1835_);
v___y_1844_ = v___y_1864_;
v_received_1845_ = v___x_1865_;
goto v___jp_1843_;
}
v___jp_1866_:
{
if (lean_obj_tag(v_d_1835_) == 9)
{
lean_object* v_value_1868_; lean_object* v_description_1869_; lean_object* v___x_1870_; uint8_t v___x_1871_; 
v_value_1868_ = lean_ctor_get(v_d_1835_, 0);
v_description_1869_ = lean_ctor_get(v_d_1835_, 1);
v___x_1870_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1871_ = lean_string_dec_eq(v_description_1869_, v___x_1870_);
if (v___x_1871_ == 0)
{
v___y_1864_ = v_a_1867_;
goto v___jp_1863_;
}
else
{
lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1888_; 
lean_inc(v_value_1868_);
v_isSharedCheck_1888_ = !lean_is_exclusive(v_d_1835_);
if (v_isSharedCheck_1888_ == 0)
{
lean_object* v_unused_1889_; lean_object* v_unused_1890_; 
v_unused_1889_ = lean_ctor_get(v_d_1835_, 1);
lean_dec(v_unused_1889_);
v_unused_1890_ = lean_ctor_get(v_d_1835_, 0);
lean_dec(v_unused_1890_);
v___x_1873_ = v_d_1835_;
v_isShared_1874_ = v_isSharedCheck_1888_;
goto v_resetjp_1872_;
}
else
{
lean_dec(v_d_1835_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1888_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
uint32_t v___x_1875_; uint64_t v___x_1876_; lean_object* v___x_1878_; 
v___x_1875_ = 206;
v___x_1876_ = 0ULL;
lean_inc(v_value_1868_);
if (v_isShared_1874_ == 0)
{
lean_ctor_set(v___x_1873_, 1, v___x_1870_);
v___x_1878_ = v___x_1873_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_value_1868_);
lean_ctor_set(v_reuseFailAlloc_1887_, 1, v___x_1870_);
v___x_1878_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
uint32_t v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = lasm_js_value_handle(v_value_1868_);
lean_dec(v_value_1868_);
v___x_1880_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1875_, v___x_1876_, v___x_1878_, v___x_1879_);
lean_dec_ref(v___x_1878_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; uint8_t v___x_1882_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1881_);
lean_dec_ref_known(v___x_1880_, 1);
v___x_1882_ = lean_string_validate_utf8(v_a_1881_);
if (v___x_1882_ == 0)
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
lean_dec(v_a_1881_);
v___x_1883_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9);
v___x_1884_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1883_);
v___y_1844_ = v_a_1867_;
v_received_1845_ = v___x_1884_;
goto v___jp_1843_;
}
else
{
lean_object* v___x_1885_; 
v___x_1885_ = lean_string_from_utf8_unchecked(v_a_1881_);
v___y_1844_ = v_a_1867_;
v_received_1845_ = v___x_1885_;
goto v___jp_1843_;
}
}
else
{
lean_object* v___x_1886_; 
lean_dec_ref_known(v___x_1880_, 1);
v___x_1886_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10));
v___y_1844_ = v_a_1867_;
v_received_1845_ = v___x_1886_;
goto v___jp_1843_;
}
}
}
}
}
else
{
v___y_1864_ = v_a_1867_;
goto v___jp_1863_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1905_, lean_object* v_d_1906_, lean_object* v_a_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(v_context_1905_, v_d_1906_);
lean_dec_ref(v_context_1905_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(lean_object* v_context_1909_, lean_object* v_bytes_1910_){
_start:
{
lean_object* v___x_1912_; 
v___x_1912_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1910_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; lean_object* v___x_1914_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1912_, 1);
v___x_1914_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(v_context_1909_, v_a_1913_);
return v___x_1914_;
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
v_a_1915_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v___x_1912_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1912_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0___boxed(lean_object* v_context_1923_, lean_object* v_bytes_1924_, lean_object* v_a_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(v_context_1923_, v_bytes_1924_);
lean_dec_ref(v_bytes_1924_);
lean_dec_ref(v_context_1923_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(lean_object* v_o_1928_, lean_object* v_key_1929_){
_start:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; 
lean_inc_ref(v_key_1929_);
v___x_1931_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1931_, 0, v_key_1929_);
v___x_1932_ = l_Lasm_JS_Wire_encodeIO(v___x_1931_);
lean_dec_ref_known(v___x_1931_, 1);
if (lean_obj_tag(v___x_1932_) == 0)
{
lean_object* v_a_1933_; uint32_t v___x_1934_; uint32_t v___x_1935_; uint64_t v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v_a_1933_ = lean_ctor_get(v___x_1932_, 0);
lean_inc(v_a_1933_);
lean_dec_ref_known(v___x_1932_, 1);
v___x_1934_ = 203;
v___x_1935_ = lasm_js_value_handle(v_o_1928_);
v___x_1936_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
v___x_1937_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1938_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1938_, 0, v_o_1928_);
lean_ctor_set(v___x_1938_, 1, v___x_1937_);
v___x_1939_ = lasm_js_call(v___x_1934_, v___x_1935_, v___x_1936_, v_a_1933_, v___x_1938_);
lean_dec_ref_known(v___x_1938_, 2);
lean_dec(v_a_1933_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1940_);
lean_dec_ref_known(v___x_1939_, 1);
v___x_1941_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0___closed__0));
v___x_1942_ = l_String_quote(v_key_1929_);
v___x_1943_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1942_);
v___x_1944_ = lean_unsigned_to_nat(120u);
v___x_1945_ = lean_unsigned_to_nat(0u);
v___x_1946_ = l_Std_Format_pretty(v___x_1943_, v___x_1944_, v___x_1945_, v___x_1945_);
v___x_1947_ = lean_string_append(v___x_1941_, v___x_1946_);
lean_dec_ref(v___x_1946_);
v___x_1948_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(v___x_1947_, v_a_1940_);
lean_dec(v_a_1940_);
lean_dec_ref(v___x_1947_);
return v___x_1948_;
}
else
{
lean_object* v_a_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1956_; 
lean_dec_ref(v_key_1929_);
v_a_1949_ = lean_ctor_get(v___x_1939_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1951_ = v___x_1939_;
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_a_1949_);
lean_dec(v___x_1939_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___x_1954_; 
if (v_isShared_1952_ == 0)
{
v___x_1954_ = v___x_1951_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v_a_1949_);
v___x_1954_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
return v___x_1954_;
}
}
}
}
else
{
lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1964_; 
lean_dec_ref(v_key_1929_);
lean_dec(v_o_1928_);
v_a_1957_ = lean_ctor_get(v___x_1932_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v___x_1932_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1959_ = v___x_1932_;
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1932_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1960_ == 0)
{
v___x_1962_ = v___x_1959_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v_a_1957_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0___boxed(lean_object* v_o_1965_, lean_object* v_key_1966_, lean_object* v_a_1967_){
_start:
{
lean_object* v_res_1968_; 
v_res_1968_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_o_1965_, v_key_1966_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_lastModified(lean_object* v_self_1969_){
_start:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1971_ = ((lean_object*)(l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0));
v___x_1972_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1969_, v___x_1971_);
return v___x_1972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_lastModified___boxed(lean_object* v_self_1973_, lean_object* v_a_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = l_Lasm_JS_Web_File_lastModified(v_self_1973_);
return v_res_1975_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_File(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instInhabitedEndingType_default = _init_l_Lasm_JS_Web_instInhabitedEndingType_default();
l_Lasm_JS_Web_instInhabitedEndingType = _init_l_Lasm_JS_Web_instInhabitedEndingType();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
