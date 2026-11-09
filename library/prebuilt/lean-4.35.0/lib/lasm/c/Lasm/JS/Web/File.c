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
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
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
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
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
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_slice(lean_object* v_self_570_, lean_object* v_start_571_, lean_object* v_end_572_, lean_object* v_contentType_573_){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_575_ = ((lean_object*)(l_Lasm_JS_Web_Blob_slice___closed__0));
v___x_576_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_start_571_);
v___x_577_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_end_572_);
v___x_578_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_contentType_573_);
v___x_579_ = lean_unsigned_to_nat(3u);
v___x_580_ = lean_mk_empty_array_with_capacity(v___x_579_);
v___x_581_ = lean_array_push(v___x_580_, v___x_576_);
v___x_582_ = lean_array_push(v___x_581_, v___x_577_);
v___x_583_ = lean_array_push(v___x_582_, v___x_578_);
v___x_584_ = l_Lasm_JS_Web_Support_args(v___x_583_);
v___x_585_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_570_, v___x_575_, v___x_584_);
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
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
else
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
v_a_594_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___x_585_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_585_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_594_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_slice___boxed(lean_object* v_self_602_, lean_object* v_start_603_, lean_object* v_end_604_, lean_object* v_contentType_605_, lean_object* v_a_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lasm_JS_Web_Blob_slice(v_self_602_, v_start_603_, v_end_604_, v_contentType_605_);
return v_res_607_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Blob_stream___closed__2(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = ((lean_object*)(l_Lasm_JS_Web_Blob_stream___closed__1));
v___x_612_ = l_Lasm_JS_Web_Support_args(v___x_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_stream(lean_object* v_self_613_){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_615_ = ((lean_object*)(l_Lasm_JS_Web_Blob_stream___closed__0));
v___x_616_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_617_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_613_, v___x_615_, v___x_616_);
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_617_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_617_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
v_a_626_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_617_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_617_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
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
return v___x_631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_stream___boxed(lean_object* v_self_634_, lean_object* v_a_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Lasm_JS_Web_Blob_stream(v_self_634_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3(lean_object* v_a_637_, lean_object* v_x_638_){
_start:
{
if (lean_obj_tag(v_x_638_) == 0)
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_648_; 
v_a_640_ = lean_ctor_get(v_x_638_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v_x_638_);
if (v_isSharedCheck_648_ == 0)
{
v___x_642_ = v_x_638_;
v_isShared_643_ = v_isSharedCheck_648_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v_x_638_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_648_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
if (v_isShared_643_ == 0)
{
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_a_640_);
v___x_645_ = v_reuseFailAlloc_647_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
lean_object* v___x_646_; 
v___x_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
return v___x_646_;
}
}
}
else
{
lean_object* v___x_649_; 
lean_dec_ref_known(v_x_638_, 1);
v___x_649_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_637_);
return v___x_649_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed(lean_object* v_a_650_, lean_object* v_x_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3(v_a_650_, v_x_651_);
lean_dec(v_a_650_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7(lean_object* v___f_654_, lean_object* v_a_655_, uint32_t v_op_656_, uint64_t v_flags_657_, lean_object* v_payload_658_, lean_object* v_x_659_){
_start:
{
if (lean_obj_tag(v_x_659_) == 0)
{
lean_object* v___x_661_; 
lean_dec_ref(v___f_654_);
v___x_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_661_, 0, v_x_659_);
return v___x_661_;
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_682_; 
v_a_662_ = lean_ctor_get(v_x_659_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v_x_659_);
if (v_isSharedCheck_682_ == 0)
{
v___x_664_ = v_x_659_;
v_isShared_665_ = v_isSharedCheck_682_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v_x_659_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_682_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
uint32_t v___x_666_; lean_object* v___x_667_; uint8_t v___x_668_; lean_object* v_val_670_; lean_object* v___x_673_; 
v___x_666_ = 0;
v___x_667_ = lean_unsigned_to_nat(0u);
v___x_668_ = 0;
v___x_673_ = lasm_js_call_into(v_a_655_, v_op_656_, v___x_666_, v_flags_657_, v_a_662_, v_payload_658_);
lean_dec(v_a_662_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v_a_674_; lean_object* v___x_676_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_a_674_);
lean_dec_ref_known(v___x_673_, 1);
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 0, v_a_674_);
v___x_676_ = v___x_664_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_674_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
v_val_670_ = v___x_676_;
goto v___jp_669_;
}
}
else
{
lean_object* v_a_678_; lean_object* v___x_680_; 
v_a_678_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_a_678_);
lean_dec_ref_known(v___x_673_, 1);
if (v_isShared_665_ == 0)
{
lean_ctor_set_tag(v___x_664_, 0);
lean_ctor_set(v___x_664_, 0, v_a_678_);
v___x_680_ = v___x_664_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_a_678_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
v_val_670_ = v___x_680_;
goto v___jp_669_;
}
}
v___jp_669_:
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_671_, 0, v_val_670_);
v___x_672_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_667_, v___x_668_, v___x_671_, v___f_654_);
return v___x_672_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed(lean_object* v___f_683_, lean_object* v_a_684_, lean_object* v_op_685_, lean_object* v_flags_686_, lean_object* v_payload_687_, lean_object* v_x_688_, lean_object* v___y_689_){
_start:
{
uint32_t v_op_boxed_690_; uint64_t v_flags_boxed_691_; lean_object* v_res_692_; 
v_op_boxed_690_ = lean_unbox_uint32(v_op_685_);
lean_dec(v_op_685_);
v_flags_boxed_691_ = lean_unbox_uint64(v_flags_686_);
lean_dec_ref(v_flags_686_);
v_res_692_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7(v___f_683_, v_a_684_, v_op_boxed_690_, v_flags_boxed_691_, v_payload_687_, v_x_688_);
lean_dec(v_payload_687_);
lean_dec(v_a_684_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5(lean_object* v___x_693_, uint8_t v___x_694_, lean_object* v___f_695_, lean_object* v_a_696_, uint32_t v_op_697_, uint64_t v_flags_698_, lean_object* v_payload_699_, lean_object* v_x_700_){
_start:
{
lean_object* v_val_703_; 
if (lean_obj_tag(v_x_700_) == 0)
{
lean_object* v___x_706_; 
lean_dec_ref(v___f_695_);
lean_dec(v___x_693_);
v___x_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_706_, 0, v_x_700_);
return v___x_706_;
}
else
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_721_; 
v_a_707_ = lean_ctor_get(v_x_700_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v_x_700_);
if (v_isSharedCheck_721_ == 0)
{
v___x_709_ = v_x_700_;
v_isShared_710_ = v_isSharedCheck_721_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v_x_700_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_721_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
uint32_t v___x_711_; lean_object* v___x_712_; 
v___x_711_ = 0;
v___x_712_ = lasm_js_call_into(v_a_696_, v_op_697_, v___x_711_, v_flags_698_, v_a_707_, v_payload_699_);
lean_dec(v_a_707_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; lean_object* v___x_715_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_713_);
lean_dec_ref_known(v___x_712_, 1);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v_a_713_);
v___x_715_ = v___x_709_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_a_713_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
v_val_703_ = v___x_715_;
goto v___jp_702_;
}
}
else
{
lean_object* v_a_717_; lean_object* v___x_719_; 
v_a_717_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_717_);
lean_dec_ref_known(v___x_712_, 1);
if (v_isShared_710_ == 0)
{
lean_ctor_set_tag(v___x_709_, 0);
lean_ctor_set(v___x_709_, 0, v_a_717_);
v___x_719_ = v___x_709_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_a_717_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
v_val_703_ = v___x_719_;
goto v___jp_702_;
}
}
}
}
v___jp_702_:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_704_, 0, v_val_703_);
v___x_705_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_693_, v___x_694_, v___x_704_, v___f_695_);
return v___x_705_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed(lean_object* v___x_722_, lean_object* v___x_723_, lean_object* v___f_724_, lean_object* v_a_725_, lean_object* v_op_726_, lean_object* v_flags_727_, lean_object* v_payload_728_, lean_object* v_x_729_, lean_object* v___y_730_){
_start:
{
uint8_t v___x_827__boxed_731_; uint32_t v_op_boxed_732_; uint64_t v_flags_boxed_733_; lean_object* v_res_734_; 
v___x_827__boxed_731_ = lean_unbox(v___x_723_);
v_op_boxed_732_ = lean_unbox_uint32(v_op_726_);
lean_dec(v_op_726_);
v_flags_boxed_733_ = lean_unbox_uint64(v_flags_727_);
lean_dec_ref(v_flags_727_);
v_res_734_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5(v___x_722_, v___x_827__boxed_731_, v___f_724_, v_a_725_, v_op_boxed_732_, v_flags_boxed_733_, v_payload_728_, v_x_729_);
lean_dec(v_payload_728_);
lean_dec(v_a_725_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_735_, uint32_t v_op_736_, uint64_t v_flags_737_, lean_object* v_payload_738_, lean_object* v___f_739_, lean_object* v___f_740_, lean_object* v___f_741_, lean_object* v_x_742_){
_start:
{
if (lean_obj_tag(v_x_742_) == 0)
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_752_; 
lean_dec_ref(v___f_741_);
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_dec(v_payload_738_);
v_a_744_ = lean_ctor_get(v_x_742_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v_x_742_);
if (v_isSharedCheck_752_ == 0)
{
v___x_746_ = v_x_742_;
v_isShared_747_ = v_isSharedCheck_752_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v_x_742_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_752_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_749_; 
if (v_isShared_747_ == 0)
{
v___x_749_ = v___x_746_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_744_);
v___x_749_ = v_reuseFailAlloc_751_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
lean_object* v___x_750_; 
v___x_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_799_; 
v_a_753_ = lean_ctor_get(v_x_742_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v_x_742_);
if (v_isSharedCheck_799_ == 0)
{
v___x_755_ = v_x_742_;
v_isShared_756_ = v_isSharedCheck_799_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v_x_742_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_799_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_757_; lean_object* v___x_758_; uint8_t v___x_759_; 
v___x_757_ = lean_string_utf8_byte_size(v_failurePrefix_735_);
v___x_758_ = lean_unsigned_to_nat(0u);
v___x_759_ = lean_nat_dec_eq(v___x_757_, v___x_758_);
if (v___x_759_ == 0)
{
lean_object* v___f_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___f_764_; lean_object* v_val_766_; lean_object* v___x_771_; 
lean_dec_ref(v___f_741_);
lean_inc(v_a_753_);
v___f_760_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_760_, 0, v_a_753_);
v___x_761_ = lean_box(v___x_759_);
v___x_762_ = lean_box_uint32(v_op_736_);
v___x_763_ = lean_box_uint64(v_flags_737_);
lean_inc(v_payload_738_);
v___f_764_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_764_, 0, v___x_758_);
lean_closure_set(v___f_764_, 1, v___x_761_);
lean_closure_set(v___f_764_, 2, v___f_760_);
lean_closure_set(v___f_764_, 3, v_a_753_);
lean_closure_set(v___f_764_, 4, v___x_762_);
lean_closure_set(v___f_764_, 5, v___x_763_);
lean_closure_set(v___f_764_, 6, v_payload_738_);
v___x_771_ = l_Lasm_JS_Wire_encodeIO(v_payload_738_);
lean_dec(v_payload_738_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_774_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_771_, 1);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 0, v_a_772_);
v___x_774_ = v___x_755_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_772_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
v_val_766_ = v___x_774_;
goto v___jp_765_;
}
}
else
{
lean_object* v_a_776_; lean_object* v___x_778_; 
v_a_776_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_776_);
lean_dec_ref_known(v___x_771_, 1);
if (v_isShared_756_ == 0)
{
lean_ctor_set_tag(v___x_755_, 0);
lean_ctor_set(v___x_755_, 0, v_a_776_);
v___x_778_ = v___x_755_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_776_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
v_val_766_ = v___x_778_;
goto v___jp_765_;
}
}
v___jp_765_:
{
lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_767_, 0, v_val_766_);
v___x_768_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_758_, v___x_759_, v___x_767_, v___f_764_);
v___x_769_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_758_, v___x_759_, v___x_768_, v___f_739_);
v___x_770_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_758_, v___x_759_, v___x_769_, v___f_740_);
return v___x_770_;
}
}
else
{
lean_object* v___f_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___f_783_; uint8_t v___x_784_; lean_object* v_val_786_; lean_object* v___x_790_; 
lean_dec_ref(v___f_740_);
lean_dec_ref(v___f_739_);
lean_inc(v_a_753_);
v___f_780_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_780_, 0, v_a_753_);
v___x_781_ = lean_box_uint32(v_op_736_);
v___x_782_ = lean_box_uint64(v_flags_737_);
lean_inc(v_payload_738_);
v___f_783_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_783_, 0, v___f_780_);
lean_closure_set(v___f_783_, 1, v_a_753_);
lean_closure_set(v___f_783_, 2, v___x_781_);
lean_closure_set(v___f_783_, 3, v___x_782_);
lean_closure_set(v___f_783_, 4, v_payload_738_);
v___x_784_ = 0;
v___x_790_ = l_Lasm_JS_Wire_encodeIO(v_payload_738_);
lean_dec(v_payload_738_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; lean_object* v___x_793_; 
v_a_791_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_a_791_);
lean_dec_ref_known(v___x_790_, 1);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 0, v_a_791_);
v___x_793_ = v___x_755_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_a_791_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
v_val_786_ = v___x_793_;
goto v___jp_785_;
}
}
else
{
lean_object* v_a_795_; lean_object* v___x_797_; 
v_a_795_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_a_795_);
lean_dec_ref_known(v___x_790_, 1);
if (v_isShared_756_ == 0)
{
lean_ctor_set_tag(v___x_755_, 0);
lean_ctor_set(v___x_755_, 0, v_a_795_);
v___x_797_ = v___x_755_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_a_795_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
v_val_786_ = v___x_797_;
goto v___jp_785_;
}
}
v___jp_785_:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_787_, 0, v_val_786_);
v___x_788_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_758_, v___x_784_, v___x_787_, v___f_783_);
v___x_789_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_758_, v___x_784_, v___x_788_, v___f_741_);
return v___x_789_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_800_, lean_object* v_op_801_, lean_object* v_flags_802_, lean_object* v_payload_803_, lean_object* v___f_804_, lean_object* v___f_805_, lean_object* v___f_806_, lean_object* v_x_807_, lean_object* v___y_808_){
_start:
{
uint32_t v_op_boxed_809_; uint64_t v_flags_boxed_810_; lean_object* v_res_811_; 
v_op_boxed_809_ = lean_unbox_uint32(v_op_801_);
lean_dec(v_op_801_);
v_flags_boxed_810_ = lean_unbox_uint64(v_flags_802_);
lean_dec_ref(v_flags_802_);
v_res_811_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6(v_failurePrefix_800_, v_op_boxed_809_, v_flags_boxed_810_, v_payload_803_, v___f_804_, v___f_805_, v___f_806_, v_x_807_);
lean_dec_ref(v_failurePrefix_800_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2(lean_object* v___f_812_, lean_object* v_x_813_){
_start:
{
if (lean_obj_tag(v_x_813_) == 0)
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_823_; 
lean_dec_ref(v___f_812_);
v_a_815_ = lean_ctor_get(v_x_813_, 0);
v_isSharedCheck_823_ = !lean_is_exclusive(v_x_813_);
if (v_isSharedCheck_823_ == 0)
{
v___x_817_ = v_x_813_;
v_isShared_818_ = v_isSharedCheck_823_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v_x_813_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_823_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_822_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
lean_object* v___x_821_; 
v___x_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
return v___x_821_;
}
}
}
else
{
lean_object* v_a_824_; lean_object* v___x_825_; 
v_a_824_ = lean_ctor_get(v_x_813_, 0);
lean_inc(v_a_824_);
lean_dec_ref_known(v_x_813_, 1);
v___x_825_ = lean_apply_2(v___f_812_, v_a_824_, lean_box(0));
return v___x_825_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2___boxed(lean_object* v___f_826_, lean_object* v_x_827_, lean_object* v___y_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2(v___f_826_, v_x_827_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1(lean_object* v___f_830_, lean_object* v_bytes_831_){
_start:
{
lean_object* v___x_833_; uint8_t v___x_834_; lean_object* v_val_836_; lean_object* v___x_839_; 
v___x_833_ = lean_unsigned_to_nat(0u);
v___x_834_ = 0;
v___x_839_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_831_);
if (lean_obj_tag(v___x_839_) == 0)
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
v_a_840_ = lean_ctor_get(v___x_839_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_839_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_839_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
lean_ctor_set_tag(v___x_842_, 1);
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
v_val_836_ = v___x_845_;
goto v___jp_835_;
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
v_a_848_ = lean_ctor_get(v___x_839_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_839_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_839_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
lean_ctor_set_tag(v___x_850_, 0);
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
v_val_836_ = v___x_853_;
goto v___jp_835_;
}
}
}
v___jp_835_:
{
lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_837_, 0, v_val_836_);
v___x_838_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_833_, v___x_834_, v___x_837_, v___f_830_);
return v___x_838_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1___boxed(lean_object* v___f_856_, lean_object* v_bytes_857_, lean_object* v___y_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1(v___f_856_, v_bytes_857_);
lean_dec_ref(v_bytes_857_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_860_, lean_object* v_x_861_){
_start:
{
if (lean_obj_tag(v_x_861_) == 0)
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_874_; 
v_a_863_ = lean_ctor_get(v_x_861_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v_x_861_);
if (v_isSharedCheck_874_ == 0)
{
v___x_865_ = v_x_861_;
v_isShared_866_ = v_isSharedCheck_874_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v_x_861_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_874_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_871_; 
v___x_867_ = lean_io_error_to_string(v_a_863_);
v___x_868_ = lean_string_append(v_failurePrefix_860_, v___x_867_);
lean_dec_ref(v___x_867_);
v___x_869_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 0, v___x_869_);
v___x_871_ = v___x_865_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_869_);
v___x_871_ = v_reuseFailAlloc_873_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
lean_object* v___x_872_; 
v___x_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_872_, 0, v___x_871_);
return v___x_872_;
}
}
}
else
{
lean_object* v___x_875_; 
lean_dec_ref(v_failurePrefix_860_);
v___x_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_875_, 0, v_x_861_);
return v___x_875_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_876_, lean_object* v_x_877_, lean_object* v___y_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4(v_failurePrefix_876_, v_x_877_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8(lean_object* v___f_880_, lean_object* v_x_881_){
_start:
{
if (lean_obj_tag(v_x_881_) == 0)
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_891_; 
lean_dec_ref(v___f_880_);
v_a_883_ = lean_ctor_get(v_x_881_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v_x_881_);
if (v_isSharedCheck_891_ == 0)
{
v___x_885_ = v_x_881_;
v_isShared_886_ = v_isSharedCheck_891_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v_x_881_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_891_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_a_883_);
v___x_888_ = v_reuseFailAlloc_890_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
lean_object* v___x_889_; 
v___x_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
return v___x_889_;
}
}
}
else
{
lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_903_; 
v_isSharedCheck_903_ = !lean_is_exclusive(v_x_881_);
if (v_isSharedCheck_903_ == 0)
{
lean_object* v_unused_904_; 
v_unused_904_ = lean_ctor_get(v_x_881_, 0);
lean_dec(v_unused_904_);
v___x_893_ = v_x_881_;
v_isShared_894_ = v_isSharedCheck_903_;
goto v_resetjp_892_;
}
else
{
lean_dec(v_x_881_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_903_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_895_; uint8_t v___x_896_; lean_object* v___x_897_; lean_object* v___x_899_; 
v___x_895_ = lean_unsigned_to_nat(0u);
v___x_896_ = 0;
v___x_897_ = lean_io_promise_new();
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v___x_897_);
v___x_899_ = v___x_893_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_897_);
v___x_899_ = v_reuseFailAlloc_902_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
v___x_901_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_895_, v___x_896_, v___x_900_, v___f_880_);
return v___x_901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8___boxed(lean_object* v___f_905_, lean_object* v_x_906_, lean_object* v___y_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8(v___f_905_, v_x_906_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0(lean_object* v_context_909_, lean_object* v_x_910_){
_start:
{
lean_object* v_val_913_; 
if (lean_obj_tag(v_x_910_) == 0)
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_923_; 
v_a_915_ = lean_ctor_get(v_x_910_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v_x_910_);
if (v_isSharedCheck_923_ == 0)
{
v___x_917_ = v_x_910_;
v_isShared_918_ = v_isSharedCheck_923_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v_x_910_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_923_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_915_);
v___x_920_ = v_reuseFailAlloc_922_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
lean_object* v___x_921_; 
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
return v___x_921_;
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_937_; 
v_a_924_ = lean_ctor_get(v_x_910_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v_x_910_);
if (v_isSharedCheck_937_ == 0)
{
v___x_926_ = v_x_910_;
v_isShared_927_ = v_isSharedCheck_937_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v_x_910_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_937_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_928_; 
v___x_928_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v_context_909_, v_a_924_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; lean_object* v___x_931_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_929_);
lean_dec_ref_known(v___x_928_, 1);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 0, v_a_929_);
v___x_931_ = v___x_926_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_929_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
v_val_913_ = v___x_931_;
goto v___jp_912_;
}
}
else
{
lean_object* v_a_933_; lean_object* v___x_935_; 
v_a_933_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_933_);
lean_dec_ref_known(v___x_928_, 1);
if (v_isShared_927_ == 0)
{
lean_ctor_set_tag(v___x_926_, 0);
lean_ctor_set(v___x_926_, 0, v_a_933_);
v___x_935_ = v___x_926_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_a_933_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
v_val_913_ = v___x_935_;
goto v___jp_912_;
}
}
}
}
v___jp_912_:
{
lean_object* v___x_914_; 
v___x_914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_914_, 0, v_val_913_);
return v___x_914_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0___boxed(lean_object* v_context_938_, lean_object* v_x_939_, lean_object* v___y_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0(v_context_938_, v_x_939_);
lean_dec_ref(v_context_938_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(lean_object* v_context_942_, uint32_t v_op_943_, uint64_t v_flags_944_, lean_object* v_payload_945_, lean_object* v_failurePrefix_946_){
_start:
{
lean_object* v___f_948_; lean_object* v___f_949_; lean_object* v___f_950_; lean_object* v___f_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___f_954_; lean_object* v___f_955_; lean_object* v___x_956_; uint8_t v___x_957_; lean_object* v_val_959_; lean_object* v___x_962_; 
v___f_948_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_948_, 0, v_context_942_);
v___f_949_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_949_, 0, v___f_948_);
v___f_950_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_950_, 0, v___f_949_);
lean_inc_ref(v_failurePrefix_946_);
v___f_951_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_951_, 0, v_failurePrefix_946_);
v___x_952_ = lean_box_uint32(v_op_943_);
v___x_953_ = lean_box_uint64(v_flags_944_);
lean_inc_ref(v___f_950_);
v___f_954_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_954_, 0, v_failurePrefix_946_);
lean_closure_set(v___f_954_, 1, v___x_952_);
lean_closure_set(v___f_954_, 2, v___x_953_);
lean_closure_set(v___f_954_, 3, v_payload_945_);
lean_closure_set(v___f_954_, 4, v___f_951_);
lean_closure_set(v___f_954_, 5, v___f_950_);
lean_closure_set(v___f_954_, 6, v___f_950_);
v___f_955_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_955_, 0, v___f_954_);
v___x_956_ = lean_unsigned_to_nat(0u);
v___x_957_ = 0;
v___x_962_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_970_; 
v_a_963_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_970_ == 0)
{
v___x_965_ = v___x_962_;
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v___x_962_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
lean_ctor_set_tag(v___x_965_, 1);
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_963_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
v_val_959_ = v___x_968_;
goto v___jp_958_;
}
}
}
else
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
v_a_971_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_962_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_962_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
lean_ctor_set_tag(v___x_973_, 0);
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
v_val_959_ = v___x_976_;
goto v___jp_958_;
}
}
}
v___jp_958_:
{
lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_960_, 0, v_val_959_);
v___x_961_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_956_, v___x_957_, v___x_960_, v___f_955_);
return v___x_961_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___boxed(lean_object* v_context_979_, lean_object* v_op_980_, lean_object* v_flags_981_, lean_object* v_payload_982_, lean_object* v_failurePrefix_983_, lean_object* v_a_984_){
_start:
{
uint32_t v_op_boxed_985_; uint64_t v_flags_boxed_986_; lean_object* v_res_987_; 
v_op_boxed_985_ = lean_unbox_uint32(v_op_980_);
lean_dec(v_op_980_);
v_flags_boxed_986_ = lean_unbox_uint64(v_flags_981_);
lean_dec_ref(v_flags_981_);
v_res_987_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v_context_979_, v_op_boxed_985_, v_flags_boxed_986_, v_payload_982_, v_failurePrefix_983_);
return v_res_987_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(uint8_t v_await_988_, uint64_t v_extra_989_){
_start:
{
uint64_t v___x_990_; uint64_t v___y_992_; 
v___x_990_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_988_ == 0)
{
uint64_t v___x_995_; 
v___x_995_ = 0ULL;
v___y_992_ = v___x_995_;
goto v___jp_991_;
}
else
{
uint64_t v___x_996_; 
v___x_996_ = 2ULL;
v___y_992_ = v___x_996_;
goto v___jp_991_;
}
v___jp_991_:
{
uint64_t v___x_993_; uint64_t v___x_994_; 
v___x_993_ = lean_uint64_lor(v___x_990_, v___y_992_);
v___x_994_ = lean_uint64_lor(v___x_993_, v_extra_989_);
return v___x_994_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0___boxed(lean_object* v_await_997_, lean_object* v_extra_998_){
_start:
{
uint8_t v_await_boxed_999_; uint64_t v_extra_boxed_1000_; uint64_t v_res_1001_; lean_object* v_r_1002_; 
v_await_boxed_999_ = lean_unbox(v_await_997_);
v_extra_boxed_1000_ = lean_unbox_uint64(v_extra_998_);
lean_dec_ref(v_extra_998_);
v_res_1001_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(v_await_boxed_999_, v_extra_boxed_1000_);
v_r_1002_ = lean_box_uint64(v_res_1001_);
return v_r_1002_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1(void){
_start:
{
uint64_t v___x_1004_; uint8_t v___x_1005_; uint64_t v___x_1006_; 
v___x_1004_ = 8ULL;
v___x_1005_ = 0;
v___x_1006_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__0(v___x_1005_, v___x_1004_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(lean_object* v_o_1007_, lean_object* v_name_1008_, lean_object* v_args_1009_){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; uint32_t v___x_1016_; uint64_t v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1011_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1012_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1012_, 0, v_o_1007_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
lean_inc_ref(v_name_1008_);
v___x_1013_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1013_, 0, v_name_1008_);
v___x_1014_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0));
v___x_1015_ = lean_string_append(v___x_1014_, v_name_1008_);
lean_dec_ref(v_name_1008_);
v___x_1016_ = 205;
v___x_1017_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__1);
v___x_1018_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1018_, 0, v_args_1009_);
v___x_1019_ = lean_unsigned_to_nat(3u);
v___x_1020_ = lean_mk_empty_array_with_capacity(v___x_1019_);
v___x_1021_ = lean_array_push(v___x_1020_, v___x_1012_);
v___x_1022_ = lean_array_push(v___x_1021_, v___x_1013_);
v___x_1023_ = lean_array_push(v___x_1022_, v___x_1018_);
v___x_1024_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1023_);
v___x_1025_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1(v___x_1015_, v___x_1016_, v___x_1017_, v___x_1024_, v___x_1011_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___boxed(lean_object* v_o_1026_, lean_object* v_name_1027_, lean_object* v_args_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_o_1026_, v_name_1027_, v_args_1028_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_text(lean_object* v_self_1032_){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1034_ = ((lean_object*)(l_Lasm_JS_Web_Blob_text___closed__0));
v___x_1035_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1036_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_1032_, v___x_1034_, v___x_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_text___boxed(lean_object* v_self_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l_Lasm_JS_Web_Blob_text(v_self_1037_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___lam__0(lean_object* v_x_1040_){
_start:
{
lean_object* v_val_1043_; 
if (lean_obj_tag(v_x_1040_) == 0)
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1053_; 
v_a_1045_ = lean_ctor_get(v_x_1040_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v_x_1040_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1047_ = v_x_1040_;
v_isShared_1048_ = v_isSharedCheck_1053_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v_x_1040_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1053_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1045_);
v___x_1050_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
lean_object* v___x_1051_; 
v___x_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
return v___x_1051_;
}
}
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1067_; 
v_a_1054_ = lean_ctor_get(v_x_1040_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_x_1040_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1056_ = v_x_1040_;
v_isShared_1057_ = v_isSharedCheck_1067_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v_x_1040_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1067_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_1054_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v_a_1059_; lean_object* v___x_1061_; 
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_a_1059_);
lean_dec_ref_known(v___x_1058_, 1);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 0, v_a_1059_);
v___x_1061_ = v___x_1056_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1059_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
v_val_1043_ = v___x_1061_;
goto v___jp_1042_;
}
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1065_; 
v_a_1063_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_a_1063_);
lean_dec_ref_known(v___x_1058_, 1);
if (v_isShared_1057_ == 0)
{
lean_ctor_set_tag(v___x_1056_, 0);
lean_ctor_set(v___x_1056_, 0, v_a_1063_);
v___x_1065_ = v___x_1056_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1063_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
v_val_1043_ = v___x_1065_;
goto v___jp_1042_;
}
}
}
}
v___jp_1042_:
{
lean_object* v___x_1044_; 
v___x_1044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1044_, 0, v_val_1043_);
return v___x_1044_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___lam__0___boxed(lean_object* v_x_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_Lasm_JS_Web_Blob_arrayBuffer___lam__0(v_x_1068_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2(lean_object* v___f_1071_, lean_object* v_x_1072_){
_start:
{
if (lean_obj_tag(v_x_1072_) == 0)
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1082_; 
lean_dec_ref(v___f_1071_);
v_a_1074_ = lean_ctor_get(v_x_1072_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v_x_1072_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1076_ = v_x_1072_;
v_isShared_1077_ = v_isSharedCheck_1082_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v_x_1072_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1082_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_a_1074_);
v___x_1079_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
lean_object* v___x_1080_; 
v___x_1080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1079_);
return v___x_1080_;
}
}
}
else
{
lean_object* v_a_1083_; lean_object* v___x_1084_; 
v_a_1083_ = lean_ctor_get(v_x_1072_, 0);
lean_inc(v_a_1083_);
lean_dec_ref_known(v_x_1072_, 1);
v___x_1084_ = lean_apply_2(v___f_1071_, v_a_1083_, lean_box(0));
return v___x_1084_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2___boxed(lean_object* v___f_1085_, lean_object* v_x_1086_, lean_object* v___y_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2(v___f_1085_, v_x_1086_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1(lean_object* v___f_1089_, lean_object* v_bytes_1090_){
_start:
{
lean_object* v___x_1092_; uint8_t v___x_1093_; lean_object* v_val_1095_; lean_object* v___x_1098_; 
v___x_1092_ = lean_unsigned_to_nat(0u);
v___x_1093_ = 0;
v___x_1098_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1090_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
v_a_1099_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1101_ = v___x_1098_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_1098_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
lean_ctor_set_tag(v___x_1101_, 1);
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_a_1099_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
v_val_1095_ = v___x_1104_;
goto v___jp_1094_;
}
}
}
else
{
lean_object* v_a_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1114_; 
v_a_1107_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1109_ = v___x_1098_;
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_a_1107_);
lean_dec(v___x_1098_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
lean_ctor_set_tag(v___x_1109_, 0);
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_a_1107_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
v_val_1095_ = v___x_1112_;
goto v___jp_1094_;
}
}
}
v___jp_1094_:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1096_, 0, v_val_1095_);
v___x_1097_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1092_, v___x_1093_, v___x_1096_, v___f_1089_);
return v___x_1097_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1___boxed(lean_object* v___f_1115_, lean_object* v_bytes_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1(v___f_1115_, v_bytes_1116_);
lean_dec_ref(v_bytes_1116_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9(lean_object* v_failurePrefix_1119_, uint32_t v_op_1120_, uint64_t v_flags_1121_, lean_object* v_payload_1122_, lean_object* v___f_1123_, lean_object* v___f_1124_, lean_object* v___f_1125_, lean_object* v_x_1126_){
_start:
{
if (lean_obj_tag(v_x_1126_) == 0)
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1136_; 
lean_dec_ref(v___f_1125_);
lean_dec_ref(v___f_1124_);
lean_dec_ref(v___f_1123_);
lean_dec(v_payload_1122_);
v_a_1128_ = lean_ctor_get(v_x_1126_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v_x_1126_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1130_ = v_x_1126_;
v_isShared_1131_ = v_isSharedCheck_1136_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v_x_1126_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1136_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1128_);
v___x_1133_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
return v___x_1134_;
}
}
}
else
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1183_; 
v_a_1137_ = lean_ctor_get(v_x_1126_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v_x_1126_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1139_ = v_x_1126_;
v_isShared_1140_ = v_isSharedCheck_1183_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v_x_1126_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1183_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; uint8_t v___x_1143_; 
v___x_1141_ = lean_string_utf8_byte_size(v_failurePrefix_1119_);
v___x_1142_ = lean_unsigned_to_nat(0u);
v___x_1143_ = lean_nat_dec_eq(v___x_1141_, v___x_1142_);
if (v___x_1143_ == 0)
{
lean_object* v___f_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___f_1148_; lean_object* v_val_1150_; lean_object* v___x_1155_; 
lean_dec_ref(v___f_1125_);
lean_inc(v_a_1137_);
v___f_1144_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1144_, 0, v_a_1137_);
v___x_1145_ = lean_box(v___x_1143_);
v___x_1146_ = lean_box_uint32(v_op_1120_);
v___x_1147_ = lean_box_uint64(v_flags_1121_);
lean_inc(v_payload_1122_);
v___f_1148_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1148_, 0, v___x_1142_);
lean_closure_set(v___f_1148_, 1, v___x_1145_);
lean_closure_set(v___f_1148_, 2, v___f_1144_);
lean_closure_set(v___f_1148_, 3, v_a_1137_);
lean_closure_set(v___f_1148_, 4, v___x_1146_);
lean_closure_set(v___f_1148_, 5, v___x_1147_);
lean_closure_set(v___f_1148_, 6, v_payload_1122_);
v___x_1155_ = l_Lasm_JS_Wire_encodeIO(v_payload_1122_);
lean_dec(v_payload_1122_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1158_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_a_1156_);
lean_dec_ref_known(v___x_1155_, 1);
if (v_isShared_1140_ == 0)
{
lean_ctor_set(v___x_1139_, 0, v_a_1156_);
v___x_1158_ = v___x_1139_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1156_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
v_val_1150_ = v___x_1158_;
goto v___jp_1149_;
}
}
else
{
lean_object* v_a_1160_; lean_object* v___x_1162_; 
v_a_1160_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_a_1160_);
lean_dec_ref_known(v___x_1155_, 1);
if (v_isShared_1140_ == 0)
{
lean_ctor_set_tag(v___x_1139_, 0);
lean_ctor_set(v___x_1139_, 0, v_a_1160_);
v___x_1162_ = v___x_1139_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_a_1160_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
v_val_1150_ = v___x_1162_;
goto v___jp_1149_;
}
}
v___jp_1149_:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1151_, 0, v_val_1150_);
v___x_1152_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1142_, v___x_1143_, v___x_1151_, v___f_1148_);
v___x_1153_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1142_, v___x_1143_, v___x_1152_, v___f_1123_);
v___x_1154_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1142_, v___x_1143_, v___x_1153_, v___f_1124_);
return v___x_1154_;
}
}
else
{
lean_object* v___f_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___f_1167_; uint8_t v___x_1168_; lean_object* v_val_1170_; lean_object* v___x_1174_; 
lean_dec_ref(v___f_1124_);
lean_dec_ref(v___f_1123_);
lean_inc(v_a_1137_);
v___f_1164_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1164_, 0, v_a_1137_);
v___x_1165_ = lean_box_uint32(v_op_1120_);
v___x_1166_ = lean_box_uint64(v_flags_1121_);
lean_inc(v_payload_1122_);
v___f_1167_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1167_, 0, v___f_1164_);
lean_closure_set(v___f_1167_, 1, v_a_1137_);
lean_closure_set(v___f_1167_, 2, v___x_1165_);
lean_closure_set(v___f_1167_, 3, v___x_1166_);
lean_closure_set(v___f_1167_, 4, v_payload_1122_);
v___x_1168_ = 0;
v___x_1174_ = l_Lasm_JS_Wire_encodeIO(v_payload_1122_);
lean_dec(v_payload_1122_);
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_object* v_a_1175_; lean_object* v___x_1177_; 
v_a_1175_ = lean_ctor_get(v___x_1174_, 0);
lean_inc(v_a_1175_);
lean_dec_ref_known(v___x_1174_, 1);
if (v_isShared_1140_ == 0)
{
lean_ctor_set(v___x_1139_, 0, v_a_1175_);
v___x_1177_ = v___x_1139_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1175_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
v_val_1170_ = v___x_1177_;
goto v___jp_1169_;
}
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; 
v_a_1179_ = lean_ctor_get(v___x_1174_, 0);
lean_inc(v_a_1179_);
lean_dec_ref_known(v___x_1174_, 1);
if (v_isShared_1140_ == 0)
{
lean_ctor_set_tag(v___x_1139_, 0);
lean_ctor_set(v___x_1139_, 0, v_a_1179_);
v___x_1181_ = v___x_1139_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1179_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
v_val_1170_ = v___x_1181_;
goto v___jp_1169_;
}
}
v___jp_1169_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1171_, 0, v_val_1170_);
v___x_1172_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1142_, v___x_1168_, v___x_1171_, v___f_1167_);
v___x_1173_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1142_, v___x_1168_, v___x_1172_, v___f_1125_);
return v___x_1173_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9___boxed(lean_object* v_failurePrefix_1184_, lean_object* v_op_1185_, lean_object* v_flags_1186_, lean_object* v_payload_1187_, lean_object* v___f_1188_, lean_object* v___f_1189_, lean_object* v___f_1190_, lean_object* v_x_1191_, lean_object* v___y_1192_){
_start:
{
uint32_t v_op_boxed_1193_; uint64_t v_flags_boxed_1194_; lean_object* v_res_1195_; 
v_op_boxed_1193_ = lean_unbox_uint32(v_op_1185_);
lean_dec(v_op_1185_);
v_flags_boxed_1194_ = lean_unbox_uint64(v_flags_1186_);
lean_dec_ref(v_flags_1186_);
v_res_1195_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9(v_failurePrefix_1184_, v_op_boxed_1193_, v_flags_boxed_1194_, v_payload_1187_, v___f_1188_, v___f_1189_, v___f_1190_, v_x_1191_);
lean_dec_ref(v_failurePrefix_1184_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0(lean_object* v_context_1196_, lean_object* v_x_1197_){
_start:
{
lean_object* v_val_1200_; 
if (lean_obj_tag(v_x_1197_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1210_; 
v_a_1202_ = lean_ctor_get(v_x_1197_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v_x_1197_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1204_ = v_x_1197_;
v_isShared_1205_ = v_isSharedCheck_1210_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v_x_1197_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1210_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
lean_object* v___x_1208_; 
v___x_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1207_);
return v___x_1208_;
}
}
}
else
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1224_; 
v_a_1211_ = lean_ctor_get(v_x_1197_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v_x_1197_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1213_ = v_x_1197_;
v_isShared_1214_ = v_isSharedCheck_1224_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v_x_1197_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1224_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1215_; 
v___x_1215_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_1196_, v_a_1211_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_a_1216_; lean_object* v___x_1218_; 
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1216_);
lean_dec_ref_known(v___x_1215_, 1);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 0, v_a_1216_);
v___x_1218_ = v___x_1213_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1216_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
v_val_1200_ = v___x_1218_;
goto v___jp_1199_;
}
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1222_; 
v_a_1220_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1220_);
lean_dec_ref_known(v___x_1215_, 1);
if (v_isShared_1214_ == 0)
{
lean_ctor_set_tag(v___x_1213_, 0);
lean_ctor_set(v___x_1213_, 0, v_a_1220_);
v___x_1222_ = v___x_1213_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1220_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
v_val_1200_ = v___x_1222_;
goto v___jp_1199_;
}
}
}
}
v___jp_1199_:
{
lean_object* v___x_1201_; 
v___x_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1201_, 0, v_val_1200_);
return v___x_1201_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0___boxed(lean_object* v_context_1225_, lean_object* v_x_1226_, lean_object* v___y_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0(v_context_1225_, v_x_1226_);
lean_dec_ref(v_context_1225_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3(lean_object* v___f_1229_, lean_object* v_x_1230_){
_start:
{
if (lean_obj_tag(v_x_1230_) == 0)
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1240_; 
lean_dec_ref(v___f_1229_);
v_a_1232_ = lean_ctor_get(v_x_1230_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v_x_1230_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1234_ = v_x_1230_;
v_isShared_1235_ = v_isSharedCheck_1240_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v_x_1230_);
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
lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1252_; 
v_isSharedCheck_1252_ = !lean_is_exclusive(v_x_1230_);
if (v_isSharedCheck_1252_ == 0)
{
lean_object* v_unused_1253_; 
v_unused_1253_ = lean_ctor_get(v_x_1230_, 0);
lean_dec(v_unused_1253_);
v___x_1242_ = v_x_1230_;
v_isShared_1243_ = v_isSharedCheck_1252_;
goto v_resetjp_1241_;
}
else
{
lean_dec(v_x_1230_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1252_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1244_; uint8_t v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1244_ = lean_unsigned_to_nat(0u);
v___x_1245_ = 0;
v___x_1246_ = lean_io_promise_new();
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 0, v___x_1246_);
v___x_1248_ = v___x_1242_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v___x_1246_);
v___x_1248_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1248_);
v___x_1250_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1244_, v___x_1245_, v___x_1249_, v___f_1229_);
return v___x_1250_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3___boxed(lean_object* v___f_1254_, lean_object* v_x_1255_, lean_object* v___y_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3(v___f_1254_, v_x_1255_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(lean_object* v_context_1258_, uint32_t v_op_1259_, uint64_t v_flags_1260_, lean_object* v_payload_1261_, lean_object* v_failurePrefix_1262_){
_start:
{
lean_object* v___f_1264_; lean_object* v___f_1265_; lean_object* v___f_1266_; lean_object* v___f_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___f_1270_; lean_object* v___f_1271_; lean_object* v___x_1272_; uint8_t v___x_1273_; lean_object* v_val_1275_; lean_object* v___x_1278_; 
v___f_1264_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1264_, 0, v_context_1258_);
v___f_1265_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1265_, 0, v___f_1264_);
v___f_1266_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1266_, 0, v___f_1265_);
lean_inc_ref(v_failurePrefix_1262_);
v___f_1267_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1267_, 0, v_failurePrefix_1262_);
v___x_1268_ = lean_box_uint32(v_op_1259_);
v___x_1269_ = lean_box_uint64(v_flags_1260_);
lean_inc_ref(v___f_1266_);
v___f_1270_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1270_, 0, v_failurePrefix_1262_);
lean_closure_set(v___f_1270_, 1, v___x_1268_);
lean_closure_set(v___f_1270_, 2, v___x_1269_);
lean_closure_set(v___f_1270_, 3, v_payload_1261_);
lean_closure_set(v___f_1270_, 4, v___f_1267_);
lean_closure_set(v___f_1270_, 5, v___f_1266_);
lean_closure_set(v___f_1270_, 6, v___f_1266_);
v___f_1271_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1271_, 0, v___f_1270_);
v___x_1272_ = lean_unsigned_to_nat(0u);
v___x_1273_ = 0;
v___x_1278_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_object* v_a_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1286_; 
v_a_1279_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1281_ = v___x_1278_;
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_a_1279_);
lean_dec(v___x_1278_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1284_; 
if (v_isShared_1282_ == 0)
{
lean_ctor_set_tag(v___x_1281_, 1);
v___x_1284_ = v___x_1281_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_a_1279_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
v_val_1275_ = v___x_1284_;
goto v___jp_1274_;
}
}
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
v_a_1287_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1278_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1278_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1292_; 
if (v_isShared_1290_ == 0)
{
lean_ctor_set_tag(v___x_1289_, 0);
v___x_1292_ = v___x_1289_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1287_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
v_val_1275_ = v___x_1292_;
goto v___jp_1274_;
}
}
}
v___jp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1276_, 0, v_val_1275_);
v___x_1277_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1272_, v___x_1273_, v___x_1276_, v___f_1271_);
return v___x_1277_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0___boxed(lean_object* v_context_1295_, lean_object* v_op_1296_, lean_object* v_flags_1297_, lean_object* v_payload_1298_, lean_object* v_failurePrefix_1299_, lean_object* v_a_1300_){
_start:
{
uint32_t v_op_boxed_1301_; uint64_t v_flags_boxed_1302_; lean_object* v_res_1303_; 
v_op_boxed_1301_ = lean_unbox_uint32(v_op_1296_);
lean_dec(v_op_1296_);
v_flags_boxed_1302_ = lean_unbox_uint64(v_flags_1297_);
lean_dec_ref(v_flags_1297_);
v_res_1303_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v_context_1295_, v_op_boxed_1301_, v_flags_boxed_1302_, v_payload_1298_, v_failurePrefix_1299_);
return v_res_1303_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1304_; uint8_t v___x_1305_; uint64_t v___x_1306_; 
v___x_1304_ = 8ULL;
v___x_1305_ = 0;
v___x_1306_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_1305_, v___x_1304_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object* v_o_1307_, lean_object* v_name_1308_, lean_object* v_args_1309_){
_start:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; uint32_t v___x_1316_; uint64_t v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1311_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1312_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1312_, 0, v_o_1307_);
lean_ctor_set(v___x_1312_, 1, v___x_1311_);
lean_inc_ref(v_name_1308_);
v___x_1313_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1313_, 0, v_name_1308_);
v___x_1314_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0));
v___x_1315_ = lean_string_append(v___x_1314_, v_name_1308_);
lean_dec_ref(v_name_1308_);
v___x_1316_ = 205;
v___x_1317_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___closed__0);
v___x_1318_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1318_, 0, v_args_1309_);
v___x_1319_ = lean_unsigned_to_nat(3u);
v___x_1320_ = lean_mk_empty_array_with_capacity(v___x_1319_);
v___x_1321_ = lean_array_push(v___x_1320_, v___x_1312_);
v___x_1322_ = lean_array_push(v___x_1321_, v___x_1313_);
v___x_1323_ = lean_array_push(v___x_1322_, v___x_1318_);
v___x_1324_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
v___x_1325_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0_spec__0(v___x_1315_, v___x_1316_, v___x_1317_, v___x_1324_, v___x_1311_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0___boxed(lean_object* v_o_1326_, lean_object* v_name_1327_, lean_object* v_args_1328_, lean_object* v___y_1329_){
_start:
{
lean_object* v_res_1330_; 
v_res_1330_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_o_1326_, v_name_1327_, v_args_1328_);
return v_res_1330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer(lean_object* v_self_1333_){
_start:
{
lean_object* v___f_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; uint8_t v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___f_1335_ = ((lean_object*)(l_Lasm_JS_Web_Blob_arrayBuffer___closed__0));
v___x_1336_ = ((lean_object*)(l_Lasm_JS_Web_Blob_arrayBuffer___closed__1));
v___x_1337_ = lean_unsigned_to_nat(0u);
v___x_1338_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1339_ = 0;
v___x_1340_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_1333_, v___x_1336_, v___x_1338_);
v___x_1341_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1337_, v___x_1339_, v___x_1340_, v___f_1335_);
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_arrayBuffer___boxed(lean_object* v_self_1342_, lean_object* v_a_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Lasm_JS_Web_Blob_arrayBuffer(v_self_1342_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_textStream(lean_object* v_self_1346_){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1348_ = ((lean_object*)(l_Lasm_JS_Web_Blob_textStream___closed__0));
v___x_1349_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1350_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1346_, v___x_1348_, v___x_1349_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1350_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1350_);
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
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
v_a_1359_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1350_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1350_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_textStream___boxed(lean_object* v_self_1367_, lean_object* v_a_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_Lasm_JS_Web_Blob_textStream(v_self_1367_);
return v_res_1369_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(uint8_t v_await_1370_, uint64_t v_extra_1371_){
_start:
{
uint64_t v___x_1372_; uint64_t v___y_1374_; 
v___x_1372_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_1370_ == 0)
{
uint64_t v___x_1377_; 
v___x_1377_ = 0ULL;
v___y_1374_ = v___x_1377_;
goto v___jp_1373_;
}
else
{
uint64_t v___x_1378_; 
v___x_1378_ = 2ULL;
v___y_1374_ = v___x_1378_;
goto v___jp_1373_;
}
v___jp_1373_:
{
uint64_t v___x_1375_; uint64_t v___x_1376_; 
v___x_1375_ = lean_uint64_lor(v___x_1372_, v___y_1374_);
v___x_1376_ = lean_uint64_lor(v___x_1375_, v_extra_1371_);
return v___x_1376_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0___boxed(lean_object* v_await_1379_, lean_object* v_extra_1380_){
_start:
{
uint8_t v_await_boxed_1381_; uint64_t v_extra_boxed_1382_; uint64_t v_res_1383_; lean_object* v_r_1384_; 
v_await_boxed_1381_ = lean_unbox(v_await_1379_);
v_extra_boxed_1382_ = lean_unbox_uint64(v_extra_1380_);
lean_dec_ref(v_extra_1380_);
v_res_1383_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(v_await_boxed_1381_, v_extra_boxed_1382_);
v_r_1384_ = lean_box_uint64(v_res_1383_);
return v_r_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2(lean_object* v___f_1385_, lean_object* v_x_1386_){
_start:
{
if (lean_obj_tag(v_x_1386_) == 0)
{
lean_object* v___x_1388_; 
lean_dec_ref(v___f_1385_);
v___x_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1388_, 0, v_x_1386_);
return v___x_1388_;
}
else
{
lean_object* v_a_1389_; lean_object* v___x_1390_; 
v_a_1389_ = lean_ctor_get(v_x_1386_, 0);
lean_inc(v_a_1389_);
lean_dec_ref_known(v_x_1386_, 1);
v___x_1390_ = lean_apply_2(v___f_1385_, v_a_1389_, lean_box(0));
return v___x_1390_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2___boxed(lean_object* v___f_1391_, lean_object* v_x_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2(v___f_1391_, v_x_1392_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0(lean_object* v_context_1395_, lean_object* v_x_1396_){
_start:
{
lean_object* v_val_1399_; 
if (lean_obj_tag(v_x_1396_) == 0)
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1409_; 
v_a_1401_ = lean_ctor_get(v_x_1396_, 0);
v_isSharedCheck_1409_ = !lean_is_exclusive(v_x_1396_);
if (v_isSharedCheck_1409_ == 0)
{
v___x_1403_ = v_x_1396_;
v_isShared_1404_ = v_isSharedCheck_1409_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v_x_1396_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1409_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1406_; 
if (v_isShared_1404_ == 0)
{
v___x_1406_ = v___x_1403_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_a_1401_);
v___x_1406_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
lean_object* v___x_1407_; 
v___x_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
return v___x_1407_;
}
}
}
else
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1423_; 
v_a_1410_ = lean_ctor_get(v_x_1396_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v_x_1396_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1412_ = v_x_1396_;
v_isShared_1413_ = v_isSharedCheck_1423_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v_x_1396_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1423_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1414_; 
v___x_1414_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v_context_1395_, v_a_1410_);
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v_a_1415_; lean_object* v___x_1417_; 
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
lean_inc(v_a_1415_);
lean_dec_ref_known(v___x_1414_, 1);
if (v_isShared_1413_ == 0)
{
lean_ctor_set(v___x_1412_, 0, v_a_1415_);
v___x_1417_ = v___x_1412_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1415_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
v_val_1399_ = v___x_1417_;
goto v___jp_1398_;
}
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; 
v_a_1419_ = lean_ctor_get(v___x_1414_, 0);
lean_inc(v_a_1419_);
lean_dec_ref_known(v___x_1414_, 1);
if (v_isShared_1413_ == 0)
{
lean_ctor_set_tag(v___x_1412_, 0);
lean_ctor_set(v___x_1412_, 0, v_a_1419_);
v___x_1421_ = v___x_1412_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v_a_1419_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
v_val_1399_ = v___x_1421_;
goto v___jp_1398_;
}
}
}
}
v___jp_1398_:
{
lean_object* v___x_1400_; 
v___x_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1400_, 0, v_val_1399_);
return v___x_1400_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0___boxed(lean_object* v_context_1424_, lean_object* v_x_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0(v_context_1424_, v_x_1425_);
lean_dec_ref(v_context_1424_);
return v_res_1427_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1(lean_object* v___f_1428_, lean_object* v_bytes_1429_){
_start:
{
lean_object* v___x_1431_; uint8_t v___x_1432_; lean_object* v_val_1434_; lean_object* v___x_1437_; 
v___x_1431_ = lean_unsigned_to_nat(0u);
v___x_1432_ = 0;
v___x_1437_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1429_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1437_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1437_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
lean_ctor_set_tag(v___x_1440_, 1);
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
v_val_1434_ = v___x_1443_;
goto v___jp_1433_;
}
}
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
v_a_1446_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v___x_1437_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1437_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
lean_ctor_set_tag(v___x_1448_, 0);
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_a_1446_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
v_val_1434_ = v___x_1451_;
goto v___jp_1433_;
}
}
}
v___jp_1433_:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1435_, 0, v_val_1434_);
v___x_1436_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1431_, v___x_1432_, v___x_1435_, v___f_1428_);
return v___x_1436_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1___boxed(lean_object* v___f_1454_, lean_object* v_bytes_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1(v___f_1454_, v_bytes_1455_);
lean_dec_ref(v_bytes_1455_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3(lean_object* v___f_1458_, lean_object* v_x_1459_){
_start:
{
if (lean_obj_tag(v_x_1459_) == 0)
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1469_; 
lean_dec_ref(v___f_1458_);
v_a_1461_ = lean_ctor_get(v_x_1459_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v_x_1459_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1463_ = v_x_1459_;
v_isShared_1464_ = v_isSharedCheck_1469_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v_x_1459_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1469_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
lean_object* v___x_1467_; 
v___x_1467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1466_);
return v___x_1467_;
}
}
}
else
{
lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1481_; 
v_isSharedCheck_1481_ = !lean_is_exclusive(v_x_1459_);
if (v_isSharedCheck_1481_ == 0)
{
lean_object* v_unused_1482_; 
v_unused_1482_ = lean_ctor_get(v_x_1459_, 0);
lean_dec(v_unused_1482_);
v___x_1471_ = v_x_1459_;
v_isShared_1472_ = v_isSharedCheck_1481_;
goto v_resetjp_1470_;
}
else
{
lean_dec(v_x_1459_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1481_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1473_; uint8_t v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1477_; 
v___x_1473_ = lean_unsigned_to_nat(0u);
v___x_1474_ = 0;
v___x_1475_ = lean_io_promise_new();
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 0, v___x_1475_);
v___x_1477_ = v___x_1471_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1475_);
v___x_1477_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
v___x_1479_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1473_, v___x_1474_, v___x_1478_, v___f_1458_);
return v___x_1479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3___boxed(lean_object* v___f_1483_, lean_object* v_x_1484_, lean_object* v___y_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3(v___f_1483_, v_x_1484_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_1487_, uint32_t v_op_1488_, uint64_t v_flags_1489_, lean_object* v_payload_1490_, lean_object* v___f_1491_, lean_object* v___f_1492_, lean_object* v___f_1493_, lean_object* v_x_1494_){
_start:
{
if (lean_obj_tag(v_x_1494_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1504_; 
lean_dec_ref(v___f_1493_);
lean_dec_ref(v___f_1492_);
lean_dec_ref(v___f_1491_);
lean_dec(v_payload_1490_);
v_a_1496_ = lean_ctor_get(v_x_1494_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v_x_1494_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1498_ = v_x_1494_;
v_isShared_1499_ = v_isSharedCheck_1504_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v_x_1494_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1504_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1496_);
v___x_1501_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
lean_object* v___x_1502_; 
v___x_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
return v___x_1502_;
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1551_; 
v_a_1505_ = lean_ctor_get(v_x_1494_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v_x_1494_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1507_ = v_x_1494_;
v_isShared_1508_ = v_isSharedCheck_1551_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v_x_1494_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1551_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; uint8_t v___x_1511_; 
v___x_1509_ = lean_string_utf8_byte_size(v_failurePrefix_1487_);
v___x_1510_ = lean_unsigned_to_nat(0u);
v___x_1511_ = lean_nat_dec_eq(v___x_1509_, v___x_1510_);
if (v___x_1511_ == 0)
{
lean_object* v___f_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___f_1516_; lean_object* v_val_1518_; lean_object* v___x_1523_; 
lean_dec_ref(v___f_1493_);
lean_inc(v_a_1505_);
v___f_1512_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1512_, 0, v_a_1505_);
v___x_1513_ = lean_box(v___x_1511_);
v___x_1514_ = lean_box_uint32(v_op_1488_);
v___x_1515_ = lean_box_uint64(v_flags_1489_);
lean_inc(v_payload_1490_);
v___f_1516_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1516_, 0, v___x_1510_);
lean_closure_set(v___f_1516_, 1, v___x_1513_);
lean_closure_set(v___f_1516_, 2, v___f_1512_);
lean_closure_set(v___f_1516_, 3, v_a_1505_);
lean_closure_set(v___f_1516_, 4, v___x_1514_);
lean_closure_set(v___f_1516_, 5, v___x_1515_);
lean_closure_set(v___f_1516_, 6, v_payload_1490_);
v___x_1523_ = l_Lasm_JS_Wire_encodeIO(v_payload_1490_);
lean_dec(v_payload_1490_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1526_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1524_);
lean_dec_ref_known(v___x_1523_, 1);
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 0, v_a_1524_);
v___x_1526_ = v___x_1507_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_a_1524_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
v_val_1518_ = v___x_1526_;
goto v___jp_1517_;
}
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1530_; 
v_a_1528_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1528_);
lean_dec_ref_known(v___x_1523_, 1);
if (v_isShared_1508_ == 0)
{
lean_ctor_set_tag(v___x_1507_, 0);
lean_ctor_set(v___x_1507_, 0, v_a_1528_);
v___x_1530_ = v___x_1507_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1528_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
v_val_1518_ = v___x_1530_;
goto v___jp_1517_;
}
}
v___jp_1517_:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1519_, 0, v_val_1518_);
v___x_1520_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1510_, v___x_1511_, v___x_1519_, v___f_1516_);
v___x_1521_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1510_, v___x_1511_, v___x_1520_, v___f_1491_);
v___x_1522_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1510_, v___x_1511_, v___x_1521_, v___f_1492_);
return v___x_1522_;
}
}
else
{
lean_object* v___f_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___f_1535_; uint8_t v___x_1536_; lean_object* v_val_1538_; lean_object* v___x_1542_; 
lean_dec_ref(v___f_1492_);
lean_dec_ref(v___f_1491_);
lean_inc(v_a_1505_);
v___f_1532_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1532_, 0, v_a_1505_);
v___x_1533_ = lean_box_uint32(v_op_1488_);
v___x_1534_ = lean_box_uint64(v_flags_1489_);
lean_inc(v_payload_1490_);
v___f_1535_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1535_, 0, v___f_1532_);
lean_closure_set(v___f_1535_, 1, v_a_1505_);
lean_closure_set(v___f_1535_, 2, v___x_1533_);
lean_closure_set(v___f_1535_, 3, v___x_1534_);
lean_closure_set(v___f_1535_, 4, v_payload_1490_);
v___x_1536_ = 0;
v___x_1542_ = l_Lasm_JS_Wire_encodeIO(v_payload_1490_);
lean_dec(v_payload_1490_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v_a_1543_; lean_object* v___x_1545_; 
v_a_1543_ = lean_ctor_get(v___x_1542_, 0);
lean_inc(v_a_1543_);
lean_dec_ref_known(v___x_1542_, 1);
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 0, v_a_1543_);
v___x_1545_ = v___x_1507_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_a_1543_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
v_val_1538_ = v___x_1545_;
goto v___jp_1537_;
}
}
else
{
lean_object* v_a_1547_; lean_object* v___x_1549_; 
v_a_1547_ = lean_ctor_get(v___x_1542_, 0);
lean_inc(v_a_1547_);
lean_dec_ref_known(v___x_1542_, 1);
if (v_isShared_1508_ == 0)
{
lean_ctor_set_tag(v___x_1507_, 0);
lean_ctor_set(v___x_1507_, 0, v_a_1547_);
v___x_1549_ = v___x_1507_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1547_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
v_val_1538_ = v___x_1549_;
goto v___jp_1537_;
}
}
v___jp_1537_:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1539_, 0, v_val_1538_);
v___x_1540_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1510_, v___x_1536_, v___x_1539_, v___f_1535_);
v___x_1541_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1510_, v___x_1536_, v___x_1540_, v___f_1493_);
return v___x_1541_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_1552_, lean_object* v_op_1553_, lean_object* v_flags_1554_, lean_object* v_payload_1555_, lean_object* v___f_1556_, lean_object* v___f_1557_, lean_object* v___f_1558_, lean_object* v_x_1559_, lean_object* v___y_1560_){
_start:
{
uint32_t v_op_boxed_1561_; uint64_t v_flags_boxed_1562_; lean_object* v_res_1563_; 
v_op_boxed_1561_ = lean_unbox_uint32(v_op_1553_);
lean_dec(v_op_1553_);
v_flags_boxed_1562_ = lean_unbox_uint64(v_flags_1554_);
lean_dec_ref(v_flags_1554_);
v_res_1563_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9(v_failurePrefix_1552_, v_op_boxed_1561_, v_flags_boxed_1562_, v_payload_1555_, v___f_1556_, v___f_1557_, v___f_1558_, v_x_1559_);
lean_dec_ref(v_failurePrefix_1552_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(lean_object* v_context_1564_, uint32_t v_op_1565_, uint64_t v_flags_1566_, lean_object* v_payload_1567_, lean_object* v_failurePrefix_1568_){
_start:
{
lean_object* v___f_1570_; lean_object* v___f_1571_; lean_object* v___f_1572_; lean_object* v___f_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___f_1576_; lean_object* v___f_1577_; lean_object* v___x_1578_; uint8_t v___x_1579_; lean_object* v_val_1581_; lean_object* v___x_1584_; 
v___f_1570_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1570_, 0, v_context_1564_);
v___f_1571_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1571_, 0, v___f_1570_);
v___f_1572_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1572_, 0, v___f_1571_);
lean_inc_ref(v_failurePrefix_1568_);
v___f_1573_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1573_, 0, v_failurePrefix_1568_);
v___x_1574_ = lean_box_uint32(v_op_1565_);
v___x_1575_ = lean_box_uint64(v_flags_1566_);
lean_inc_ref(v___f_1572_);
v___f_1576_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1576_, 0, v_failurePrefix_1568_);
lean_closure_set(v___f_1576_, 1, v___x_1574_);
lean_closure_set(v___f_1576_, 2, v___x_1575_);
lean_closure_set(v___f_1576_, 3, v_payload_1567_);
lean_closure_set(v___f_1576_, 4, v___f_1573_);
lean_closure_set(v___f_1576_, 5, v___f_1572_);
lean_closure_set(v___f_1576_, 6, v___f_1572_);
v___f_1577_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1577_, 0, v___f_1576_);
v___x_1578_ = lean_unsigned_to_nat(0u);
v___x_1579_ = 0;
v___x_1584_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v_a_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1592_; 
v_a_1585_ = lean_ctor_get(v___x_1584_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1584_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1587_ = v___x_1584_;
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_a_1585_);
lean_dec(v___x_1584_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1590_; 
if (v_isShared_1588_ == 0)
{
lean_ctor_set_tag(v___x_1587_, 1);
v___x_1590_ = v___x_1587_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_a_1585_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
v_val_1581_ = v___x_1590_;
goto v___jp_1580_;
}
}
}
else
{
lean_object* v_a_1593_; lean_object* v___x_1595_; uint8_t v_isShared_1596_; uint8_t v_isSharedCheck_1600_; 
v_a_1593_ = lean_ctor_get(v___x_1584_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1584_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1595_ = v___x_1584_;
v_isShared_1596_ = v_isSharedCheck_1600_;
goto v_resetjp_1594_;
}
else
{
lean_inc(v_a_1593_);
lean_dec(v___x_1584_);
v___x_1595_ = lean_box(0);
v_isShared_1596_ = v_isSharedCheck_1600_;
goto v_resetjp_1594_;
}
v_resetjp_1594_:
{
lean_object* v___x_1598_; 
if (v_isShared_1596_ == 0)
{
lean_ctor_set_tag(v___x_1595_, 0);
v___x_1598_ = v___x_1595_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_a_1593_);
v___x_1598_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
v_val_1581_ = v___x_1598_;
goto v___jp_1580_;
}
}
}
v___jp_1580_:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1582_, 0, v_val_1581_);
v___x_1583_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1578_, v___x_1579_, v___x_1582_, v___f_1577_);
return v___x_1583_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1___boxed(lean_object* v_context_1601_, lean_object* v_op_1602_, lean_object* v_flags_1603_, lean_object* v_payload_1604_, lean_object* v_failurePrefix_1605_, lean_object* v_a_1606_){
_start:
{
uint32_t v_op_boxed_1607_; uint64_t v_flags_boxed_1608_; lean_object* v_res_1609_; 
v_op_boxed_1607_ = lean_unbox_uint32(v_op_1602_);
lean_dec(v_op_1602_);
v_flags_boxed_1608_ = lean_unbox_uint64(v_flags_1603_);
lean_dec_ref(v_flags_1603_);
v_res_1609_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v_context_1601_, v_op_boxed_1607_, v_flags_boxed_1608_, v_payload_1604_, v_failurePrefix_1605_);
return v_res_1609_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1610_; uint8_t v___x_1611_; uint64_t v___x_1612_; 
v___x_1610_ = 8ULL;
v___x_1611_ = 0;
v___x_1612_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__0(v___x_1611_, v___x_1610_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(lean_object* v_o_1613_, lean_object* v_name_1614_, lean_object* v_args_1615_){
_start:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; uint32_t v___x_1622_; uint64_t v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1617_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1618_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1618_, 0, v_o_1613_);
lean_ctor_set(v___x_1618_, 1, v___x_1617_);
lean_inc_ref(v_name_1614_);
v___x_1619_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1619_, 0, v_name_1614_);
v___x_1620_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0___closed__0));
v___x_1621_ = lean_string_append(v___x_1620_, v_name_1614_);
lean_dec_ref(v_name_1614_);
v___x_1622_ = 205;
v___x_1623_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___closed__0);
v___x_1624_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1624_, 0, v_args_1615_);
v___x_1625_ = lean_unsigned_to_nat(3u);
v___x_1626_ = lean_mk_empty_array_with_capacity(v___x_1625_);
v___x_1627_ = lean_array_push(v___x_1626_, v___x_1618_);
v___x_1628_ = lean_array_push(v___x_1627_, v___x_1619_);
v___x_1629_ = lean_array_push(v___x_1628_, v___x_1624_);
v___x_1630_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1629_);
v___x_1631_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0_spec__1(v___x_1621_, v___x_1622_, v___x_1623_, v___x_1630_, v___x_1617_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0___boxed(lean_object* v_o_1632_, lean_object* v_name_1633_, lean_object* v_args_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v_res_1636_; 
v_res_1636_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(v_o_1632_, v_name_1633_, v_args_1634_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_bytes(lean_object* v_self_1638_){
_start:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1640_ = ((lean_object*)(l_Lasm_JS_Web_Blob_bytes___closed__0));
v___x_1641_ = lean_obj_once(&l_Lasm_JS_Web_Blob_stream___closed__2, &l_Lasm_JS_Web_Blob_stream___closed__2_once, _init_l_Lasm_JS_Web_Blob_stream___closed__2);
v___x_1642_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(v_self_1638_, v___x_1640_, v___x_1641_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Blob_bytes___boxed(lean_object* v_self_1643_, lean_object* v_a_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = l_Lasm_JS_Web_Blob_bytes(v_self_1643_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_File_new_spec__0(lean_object* v_x_1646_){
_start:
{
if (lean_obj_tag(v_x_1646_) == 0)
{
lean_object* v___x_1647_; 
v___x_1647_ = lean_box(0);
return v___x_1647_;
}
else
{
lean_object* v_val_1648_; lean_object* v_type_1649_; lean_object* v_endings_1650_; lean_object* v_lastModified_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v_val_1648_ = lean_ctor_get(v_x_1646_, 0);
lean_inc(v_val_1648_);
lean_dec_ref_known(v_x_1646_, 1);
v_type_1649_ = lean_ctor_get(v_val_1648_, 0);
lean_inc(v_type_1649_);
v_endings_1650_ = lean_ctor_get(v_val_1648_, 1);
lean_inc(v_endings_1650_);
v_lastModified_1651_ = lean_ctor_get(v_val_1648_, 2);
lean_inc(v_lastModified_1651_);
lean_dec(v_val_1648_);
v___x_1652_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__0));
v___x_1653_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_type_1649_);
v___x_1654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1652_);
lean_ctor_set(v___x_1654_, 1, v___x_1653_);
v___x_1655_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0___closed__1));
v___x_1656_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__1_spec__2(v_endings_1650_);
lean_dec(v_endings_1650_);
v___x_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1655_);
lean_ctor_set(v___x_1657_, 1, v___x_1656_);
v___x_1658_ = ((lean_object*)(l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0));
v___x_1659_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_slice_spec__0(v_lastModified_1651_);
v___x_1660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1658_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
v___x_1661_ = lean_unsigned_to_nat(3u);
v___x_1662_ = lean_mk_empty_array_with_capacity(v___x_1661_);
v___x_1663_ = lean_array_push(v___x_1662_, v___x_1654_);
v___x_1664_ = lean_array_push(v___x_1663_, v___x_1657_);
v___x_1665_ = lean_array_push(v___x_1664_, v___x_1660_);
v___x_1666_ = l_Lasm_JS_Web_Support_fields(v___x_1665_);
lean_dec_ref(v___x_1665_);
return v___x_1666_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(lean_object* v_context_1667_, lean_object* v_d_1668_){
_start:
{
lean_object* v___y_1671_; lean_object* v___y_1672_; 
if (lean_obj_tag(v_d_1668_) == 9)
{
lean_object* v_value_1676_; lean_object* v___x_1677_; 
v_value_1676_ = lean_ctor_get(v_d_1668_, 0);
lean_inc(v_value_1676_);
lean_dec_ref_known(v_d_1668_, 2);
v___x_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1677_, 0, v_value_1676_);
return v___x_1677_;
}
else
{
lean_object* v___x_1678_; lean_object* v_received_1680_; 
v___x_1678_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
if (lean_obj_tag(v_d_1668_) == 9)
{
lean_object* v_value_1694_; lean_object* v_description_1695_; uint8_t v___x_1696_; 
v_value_1694_ = lean_ctor_get(v_d_1668_, 0);
v_description_1695_ = lean_ctor_get(v_d_1668_, 1);
v___x_1696_ = lean_string_dec_eq(v_description_1695_, v___x_1678_);
if (v___x_1696_ == 0)
{
goto v___jp_1692_;
}
else
{
uint32_t v___x_1697_; uint64_t v___x_1698_; lean_object* v___x_1699_; uint32_t v___x_1700_; lean_object* v___x_1701_; 
lean_inc_n(v_value_1694_, 2);
lean_dec_ref_known(v_d_1668_, 2);
v___x_1697_ = 206;
v___x_1698_ = 0ULL;
v___x_1699_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1699_, 0, v_value_1694_);
lean_ctor_set(v___x_1699_, 1, v___x_1678_);
v___x_1700_ = lasm_js_value_handle(v_value_1694_);
lean_dec(v_value_1694_);
v___x_1701_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1697_, v___x_1698_, v___x_1699_, v___x_1700_);
lean_dec_ref_known(v___x_1699_, 2);
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1702_; uint8_t v___x_1703_; 
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
lean_inc(v_a_1702_);
lean_dec_ref_known(v___x_1701_, 1);
v___x_1703_ = lean_string_validate_utf8(v_a_1702_);
if (v___x_1703_ == 0)
{
lean_object* v___x_1704_; lean_object* v___x_1705_; 
lean_dec(v_a_1702_);
v___x_1704_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9);
v___x_1705_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1704_);
v_received_1680_ = v___x_1705_;
goto v___jp_1679_;
}
else
{
lean_object* v___x_1706_; 
v___x_1706_ = lean_string_from_utf8_unchecked(v_a_1702_);
v_received_1680_ = v___x_1706_;
goto v___jp_1679_;
}
}
else
{
lean_object* v___x_1707_; 
lean_dec_ref_known(v___x_1701_, 1);
v___x_1707_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10));
v_received_1680_ = v___x_1707_;
goto v___jp_1679_;
}
}
}
else
{
goto v___jp_1692_;
}
v___jp_1679_:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; uint8_t v___x_1690_; 
v___x_1681_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_1682_ = lean_string_append(v___x_1681_, v_context_1667_);
v___x_1683_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1));
v___x_1684_ = lean_string_append(v___x_1682_, v___x_1683_);
v___x_1685_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSFile___closed__0));
v___x_1686_ = lean_string_append(v___x_1684_, v___x_1685_);
v___x_1687_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2));
v___x_1688_ = lean_string_append(v___x_1686_, v___x_1687_);
v___x_1689_ = lean_string_append(v___x_1688_, v_received_1680_);
lean_dec_ref(v_received_1680_);
v___x_1690_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__4);
if (v___x_1690_ == 0)
{
lean_object* v___x_1691_; 
v___x_1691_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__5));
v___y_1671_ = v___x_1689_;
v___y_1672_ = v___x_1691_;
goto v___jp_1670_;
}
else
{
v___y_1671_ = v___x_1689_;
v___y_1672_ = v___x_1678_;
goto v___jp_1670_;
}
}
v___jp_1692_:
{
lean_object* v___x_1693_; 
v___x_1693_ = l_Lasm_JS_Data_describe(v_d_1668_);
v_received_1680_ = v___x_1693_;
goto v___jp_1679_;
}
}
v___jp_1670_:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1673_ = lean_string_append(v___y_1671_, v___y_1672_);
v___x_1674_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1673_);
v___x_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1674_);
return v___x_1675_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1___boxed(lean_object* v_context_1708_, lean_object* v_d_1709_, lean_object* v_a_1710_){
_start:
{
lean_object* v_res_1711_; 
v_res_1711_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(v_context_1708_, v_d_1709_);
lean_dec_ref(v_context_1708_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(lean_object* v_b_1712_, lean_object* v_args_1713_, uint8_t v_await_1714_){
_start:
{
uint64_t v___y_1717_; uint64_t v___y_1718_; uint64_t v___x_1761_; uint64_t v___y_1763_; 
v___x_1761_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
if (v_await_1714_ == 0)
{
uint64_t v___x_1768_; 
v___x_1768_ = 0ULL;
v___y_1763_ = v___x_1768_;
goto v___jp_1762_;
}
else
{
uint64_t v___x_1769_; 
v___x_1769_ = 2ULL;
v___y_1763_ = v___x_1769_;
goto v___jp_1762_;
}
v___jp_1716_:
{
uint64_t v_flags_1719_; uint32_t v___x_1720_; lean_object* v___x_1721_; uint32_t v___x_1722_; lean_object* v___x_1723_; 
v_flags_1719_ = lean_uint64_lor(v___y_1717_, v___y_1718_);
v___x_1720_ = 214;
v___x_1721_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1712_, v_args_1713_);
v___x_1722_ = 0;
v___x_1723_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1720_, v_flags_1719_, v___x_1721_, v___x_1722_);
lean_dec(v___x_1721_);
if (lean_obj_tag(v___x_1723_) == 0)
{
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; lean_object* v___x_1725_; 
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc(v_a_1724_);
lean_dec_ref_known(v___x_1723_, 1);
v___x_1725_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1724_);
lean_dec(v_a_1724_);
if (lean_obj_tag(v___x_1725_) == 0)
{
lean_object* v_a_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v_a_1726_ = lean_ctor_get(v___x_1725_, 0);
lean_inc(v_a_1726_);
lean_dec_ref_known(v___x_1725_, 1);
v___x_1727_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1712_);
v___x_1728_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1_spec__1(v___x_1727_, v_a_1726_);
lean_dec_ref(v___x_1727_);
return v___x_1728_;
}
else
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
v_a_1729_ = lean_ctor_get(v___x_1725_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1725_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1725_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1729_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1744_; 
v_a_1737_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1739_ = v___x_1723_;
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1723_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1742_; 
if (v_isShared_1740_ == 0)
{
lean_ctor_set_tag(v___x_1739_, 1);
v___x_1742_ = v___x_1739_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1737_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
}
else
{
lean_object* v_a_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1760_; 
v_a_1745_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1747_ = v___x_1723_;
v_isShared_1748_ = v_isSharedCheck_1760_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_a_1745_);
lean_dec(v___x_1723_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1760_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1758_; 
v___x_1749_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_1750_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1712_);
v___x_1751_ = lean_string_append(v___x_1749_, v___x_1750_);
lean_dec_ref(v___x_1750_);
v___x_1752_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__0));
v___x_1753_ = lean_string_append(v___x_1751_, v___x_1752_);
v___x_1754_ = lean_io_error_to_string(v_a_1745_);
v___x_1755_ = lean_string_append(v___x_1753_, v___x_1754_);
lean_dec_ref(v___x_1754_);
v___x_1756_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1756_, 0, v___x_1755_);
if (v_isShared_1748_ == 0)
{
lean_ctor_set(v___x_1747_, 0, v___x_1756_);
v___x_1758_ = v___x_1747_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1756_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
}
v___jp_1762_:
{
uint8_t v_construct_1764_; uint64_t v___x_1765_; 
v_construct_1764_ = lean_ctor_get_uint8(v_b_1712_, sizeof(void*)*4);
v___x_1765_ = lean_uint64_lor(v___x_1761_, v___y_1763_);
if (v_construct_1764_ == 0)
{
uint64_t v___x_1766_; 
v___x_1766_ = 0ULL;
v___y_1717_ = v___x_1765_;
v___y_1718_ = v___x_1766_;
goto v___jp_1716_;
}
else
{
uint64_t v___x_1767_; 
v___x_1767_ = 4ULL;
v___y_1717_ = v___x_1765_;
v___y_1718_ = v___x_1767_;
goto v___jp_1716_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1___boxed(lean_object* v_b_1770_, lean_object* v_args_1771_, lean_object* v_await_1772_, lean_object* v_a_1773_){
_start:
{
uint8_t v_await_boxed_1774_; lean_object* v_res_1775_; 
v_await_boxed_1774_ = lean_unbox(v_await_1772_);
v_res_1775_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(v_b_1770_, v_args_1771_, v_await_boxed_1774_);
lean_dec_ref(v_b_1770_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_new(lean_object* v_fileBits_1784_, lean_object* v_fileName_1785_, lean_object* v_options_1786_){
_start:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; size_t v_sz_1790_; size_t v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; uint8_t v___x_1801_; lean_object* v___x_1802_; 
v___x_1788_ = lean_unsigned_to_nat(3u);
v___x_1789_ = ((lean_object*)(l_Lasm_JS_Web_File_new___closed__2));
v_sz_1790_ = lean_array_size(v_fileBits_1784_);
v___x_1791_ = ((size_t)0ULL);
v___x_1792_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Blob_new_spec__0_spec__0(v_sz_1790_, v___x_1791_, v_fileBits_1784_);
v___x_1793_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1793_, 0, v___x_1792_);
v___x_1794_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1794_, 0, v_fileName_1785_);
v___x_1795_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_File_new_spec__0(v_options_1786_);
v___x_1796_ = lean_mk_empty_array_with_capacity(v___x_1788_);
v___x_1797_ = lean_array_push(v___x_1796_, v___x_1793_);
v___x_1798_ = lean_array_push(v___x_1797_, v___x_1794_);
v___x_1799_ = lean_array_push(v___x_1798_, v___x_1795_);
v___x_1800_ = l_Lasm_JS_Web_Support_args(v___x_1799_);
v___x_1801_ = 0;
v___x_1802_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_File_new_spec__1(v___x_1789_, v___x_1800_, v___x_1801_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_new___boxed(lean_object* v_fileBits_1803_, lean_object* v_fileName_1804_, lean_object* v_options_1805_, lean_object* v_a_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l_Lasm_JS_Web_File_new(v_fileBits_1803_, v_fileName_1804_, v_options_1805_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_name(lean_object* v_self_1809_){
_start:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1811_ = ((lean_object*)(l_Lasm_JS_Web_File_name___closed__0));
v___x_1812_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1809_, v___x_1811_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_name___boxed(lean_object* v_self_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = l_Lasm_JS_Web_File_name(v_self_1813_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(lean_object* v_context_1820_, lean_object* v_d_1821_){
_start:
{
lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v___y_1830_; lean_object* v_received_1831_; lean_object* v___y_1850_; lean_object* v_a_1853_; 
switch(lean_obj_tag(v_d_1821_))
{
case 3:
{
double v_n_1877_; lean_object* v___x_1878_; 
v_n_1877_ = lean_ctor_get_float(v_d_1821_, 0);
v___x_1878_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1877_);
if (lean_obj_tag(v___x_1878_) == 0)
{
lean_object* v___x_1879_; 
v___x_1879_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__3));
v_a_1853_ = v___x_1879_;
goto v___jp_1852_;
}
else
{
lean_object* v_val_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
lean_dec_ref_known(v_d_1821_, 0);
v_val_1880_ = lean_ctor_get(v___x_1878_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1882_ = v___x_1878_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_val_1880_);
lean_dec(v___x_1878_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1885_; 
if (v_isShared_1883_ == 0)
{
lean_ctor_set_tag(v___x_1882_, 0);
v___x_1885_ = v___x_1882_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_val_1880_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
}
case 5:
{
lean_object* v_i_1888_; lean_object* v___x_1889_; 
v_i_1888_ = lean_ctor_get(v_d_1821_, 0);
lean_inc(v_i_1888_);
lean_dec_ref_known(v_d_1821_, 1);
v___x_1889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1889_, 0, v_i_1888_);
return v___x_1889_;
}
default: 
{
lean_object* v___x_1890_; 
v___x_1890_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v_a_1853_ = v___x_1890_;
goto v___jp_1852_;
}
}
v___jp_1823_:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1826_ = lean_string_append(v___y_1824_, v___y_1825_);
lean_dec_ref(v___y_1825_);
v___x_1827_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1826_);
v___x_1828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1827_);
return v___x_1828_;
}
v___jp_1829_:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; uint8_t v___x_1843_; 
v___x_1832_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__0));
v___x_1833_ = lean_string_append(v___x_1832_, v_context_1820_);
v___x_1834_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__1));
v___x_1835_ = lean_string_append(v___x_1833_, v___x_1834_);
v___x_1836_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__0));
v___x_1837_ = lean_string_append(v___x_1835_, v___x_1836_);
v___x_1838_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__2));
v___x_1839_ = lean_string_append(v___x_1837_, v___x_1838_);
v___x_1840_ = lean_string_append(v___x_1839_, v_received_1831_);
lean_dec_ref(v_received_1831_);
v___x_1841_ = lean_string_utf8_byte_size(v___y_1830_);
v___x_1842_ = lean_unsigned_to_nat(0u);
v___x_1843_ = lean_nat_dec_eq(v___x_1841_, v___x_1842_);
if (v___x_1843_ == 0)
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1844_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__1));
v___x_1845_ = lean_string_append(v___x_1844_, v___y_1830_);
v___x_1846_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___closed__2));
v___x_1847_ = lean_string_append(v___x_1845_, v___x_1846_);
v___y_1824_ = v___x_1840_;
v___y_1825_ = v___x_1847_;
goto v___jp_1823_;
}
else
{
lean_object* v___x_1848_; 
v___x_1848_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___y_1824_ = v___x_1840_;
v___y_1825_ = v___x_1848_;
goto v___jp_1823_;
}
}
v___jp_1849_:
{
lean_object* v___x_1851_; 
v___x_1851_ = l_Lasm_JS_Data_describe(v_d_1821_);
v___y_1830_ = v___y_1850_;
v_received_1831_ = v___x_1851_;
goto v___jp_1829_;
}
v___jp_1852_:
{
if (lean_obj_tag(v_d_1821_) == 9)
{
lean_object* v_value_1854_; lean_object* v_description_1855_; lean_object* v___x_1856_; uint8_t v___x_1857_; 
v_value_1854_ = lean_ctor_get(v_d_1821_, 0);
v_description_1855_ = lean_ctor_get(v_d_1821_, 1);
v___x_1856_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1857_ = lean_string_dec_eq(v_description_1855_, v___x_1856_);
if (v___x_1857_ == 0)
{
v___y_1850_ = v_a_1853_;
goto v___jp_1849_;
}
else
{
lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1874_; 
lean_inc(v_value_1854_);
v_isSharedCheck_1874_ = !lean_is_exclusive(v_d_1821_);
if (v_isSharedCheck_1874_ == 0)
{
lean_object* v_unused_1875_; lean_object* v_unused_1876_; 
v_unused_1875_ = lean_ctor_get(v_d_1821_, 1);
lean_dec(v_unused_1875_);
v_unused_1876_ = lean_ctor_get(v_d_1821_, 0);
lean_dec(v_unused_1876_);
v___x_1859_ = v_d_1821_;
v_isShared_1860_ = v_isSharedCheck_1874_;
goto v_resetjp_1858_;
}
else
{
lean_dec(v_d_1821_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1874_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
uint32_t v___x_1861_; uint64_t v___x_1862_; lean_object* v___x_1864_; 
v___x_1861_ = 206;
v___x_1862_ = 0ULL;
lean_inc(v_value_1854_);
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 1, v___x_1856_);
v___x_1864_ = v___x_1859_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_value_1854_);
lean_ctor_set(v_reuseFailAlloc_1873_, 1, v___x_1856_);
v___x_1864_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
uint32_t v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = lasm_js_value_handle(v_value_1854_);
lean_dec(v_value_1854_);
v___x_1866_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1861_, v___x_1862_, v___x_1864_, v___x_1865_);
lean_dec_ref(v___x_1864_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v_a_1867_; uint8_t v___x_1868_; 
v_a_1867_ = lean_ctor_get(v___x_1866_, 0);
lean_inc(v_a_1867_);
lean_dec_ref_known(v___x_1866_, 1);
v___x_1868_ = lean_string_validate_utf8(v_a_1867_);
if (v___x_1868_ == 0)
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
lean_dec(v_a_1867_);
v___x_1869_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__9);
v___x_1870_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1869_);
v___y_1830_ = v_a_1853_;
v_received_1831_ = v___x_1870_;
goto v___jp_1829_;
}
else
{
lean_object* v___x_1871_; 
v___x_1871_ = lean_string_from_utf8_unchecked(v_a_1867_);
v___y_1830_ = v_a_1853_;
v_received_1831_ = v___x_1871_;
goto v___jp_1829_;
}
}
else
{
lean_object* v___x_1872_; 
lean_dec_ref_known(v___x_1866_, 1);
v___x_1872_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2_spec__4___closed__10));
v___y_1830_ = v_a_1853_;
v_received_1831_ = v___x_1872_;
goto v___jp_1829_;
}
}
}
}
}
else
{
v___y_1850_ = v_a_1853_;
goto v___jp_1849_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1891_, lean_object* v_d_1892_, lean_object* v_a_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(v_context_1891_, v_d_1892_);
lean_dec_ref(v_context_1891_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(lean_object* v_context_1895_, lean_object* v_bytes_1896_){
_start:
{
lean_object* v___x_1898_; 
v___x_1898_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1896_);
if (lean_obj_tag(v___x_1898_) == 0)
{
lean_object* v_a_1899_; lean_object* v___x_1900_; 
v_a_1899_ = lean_ctor_get(v___x_1898_, 0);
lean_inc(v_a_1899_);
lean_dec_ref_known(v___x_1898_, 1);
v___x_1900_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0_spec__1(v_context_1895_, v_a_1899_);
return v___x_1900_;
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
v_a_1901_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1898_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1898_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0___boxed(lean_object* v_context_1909_, lean_object* v_bytes_1910_, lean_object* v_a_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(v_context_1909_, v_bytes_1910_);
lean_dec_ref(v_bytes_1910_);
lean_dec_ref(v_context_1909_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(lean_object* v_o_1914_, lean_object* v_key_1915_){
_start:
{
lean_object* v_k_1917_; lean_object* v___x_1918_; 
v_k_1917_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1917_, 0, v_key_1915_);
v___x_1918_ = l_Lasm_JS_Wire_encodeIO(v_k_1917_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_object* v_a_1919_; uint32_t v___x_1920_; uint32_t v___x_1921_; uint64_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v_a_1919_ = lean_ctor_get(v___x_1918_, 0);
lean_inc(v_a_1919_);
lean_dec_ref_known(v___x_1918_, 1);
v___x_1920_ = 203;
v___x_1921_ = lasm_js_value_handle(v_o_1914_);
v___x_1922_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Blob_new_spec__2___closed__1);
v___x_1923_ = ((lean_object*)(l_Lasm_JS_Web_instToJSBlob___lam__0___closed__0));
v___x_1924_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1924_, 0, v_o_1914_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
v___x_1925_ = lean_unsigned_to_nat(2u);
v___x_1926_ = lean_mk_empty_array_with_capacity(v___x_1925_);
lean_inc_ref(v_k_1917_);
v___x_1927_ = lean_array_push(v___x_1926_, v_k_1917_);
v___x_1928_ = lean_array_push(v___x_1927_, v___x_1924_);
v___x_1929_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1928_);
v___x_1930_ = lasm_js_call(v___x_1920_, v___x_1921_, v___x_1922_, v_a_1919_, v___x_1929_);
lean_dec_ref_known(v___x_1929_, 1);
lean_dec(v_a_1919_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref_known(v___x_1930_, 1);
v___x_1932_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0___closed__0));
v___x_1933_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1917_);
v___x_1934_ = lean_string_append(v___x_1932_, v___x_1933_);
lean_dec_ref(v___x_1933_);
v___x_1935_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0_spec__0(v___x_1934_, v_a_1931_);
lean_dec(v_a_1931_);
lean_dec_ref(v___x_1934_);
return v___x_1935_;
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
lean_dec_ref_known(v_k_1917_, 1);
v_a_1936_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v___x_1930_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1930_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
lean_dec_ref_known(v_k_1917_, 1);
lean_dec(v_o_1914_);
v_a_1944_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1918_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1918_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0___boxed(lean_object* v_o_1952_, lean_object* v_key_1953_, lean_object* v_a_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_o_1952_, v_key_1953_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_lastModified(lean_object* v_self_1956_){
_start:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; 
v___x_1958_ = ((lean_object*)(l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0___closed__0));
v___x_1959_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_self_1956_, v___x_1958_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_File_lastModified___boxed(lean_object* v_self_1960_, lean_object* v_a_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l_Lasm_JS_Web_File_lastModified(v_self_1960_);
return v_res_1962_;
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
